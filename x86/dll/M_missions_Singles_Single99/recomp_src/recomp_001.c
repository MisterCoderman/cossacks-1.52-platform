#include "recomp.h"

/* FUN_1000bfe0 @ 0x1211bfe0 (10 bytes, 5 insns) */
void f_1211bfe0(void) {
  FTRACE(0x1211bfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bfe3 mov eax, dword ptr [0x12141c94] */
  EAX = (r32((uint32_t)(0x12141c94)));
  /* 1211bfe8 pop ebp */
  EBP = (pop32());
  /* 1211bfe9 ret  */
  ESPCHK(0x1211bfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff0 @ 0x1211bff0 (31 bytes, 11 insns) */
void f_1211bff0(void) {
  FTRACE(0x1211bff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bff1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bff3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bffa jbe 0x1211c000 */
  if ((C.cf||C.zf)) goto L_1211c000;
  /* 1211bffc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211bffe jmp 0x1211c00d */
  goto L_1211c00d;
L_1211c000:;
  /* 1211c000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c003 mov dword ptr [0x12141c94], eax */
  w32((uint32_t)(0x12141c94), (EAX));
  /* 1211c008 mov eax, 1 */
  EAX = (0x1u);
L_1211c00d:;
  /* 1211c00d pop ebp */
  EBP = (pop32());
  /* 1211c00e ret  */
  ESPCHK(0x1211bff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c010 @ 0x1211c010 (89 bytes, 20 insns) */
void f_1211c010(void) {
  FTRACE(0x1211c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211c010 push ebp */
  push32((uint32_t)(EBP));
  /* 1211c011 mov ebp, esp */
  EBP = (ESP);
  /* 1211c013 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1211c018 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211c01a mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211c01f push eax */
  push32((uint32_t)(EAX));
  /* 1211c020 call dword ptr [0x12146350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146350))), 0x1211c026u);
  /* 1211c026 mov dword ptr [0x12145188], eax */
  w32((uint32_t)(0x12145188), (EAX));
  /* 1211c02b cmp dword ptr [0x12145188], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145188))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c032 jne 0x1211c038 */
  if (!C.zf) goto L_1211c038;
  /* 1211c034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211c036 jmp 0x1211c067 */
  goto L_1211c067;
L_1211c038:;
  /* 1211c038 mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211c03e mov dword ptr [0x1214517c], ecx */
  w32((uint32_t)(0x1214517c), (ECX));
  /* 1211c044 mov dword ptr [0x12145180], 0 */
  w32((uint32_t)(0x12145180), (0x0u));
  /* 1211c04e mov dword ptr [0x12145184], 0 */
  w32((uint32_t)(0x12145184), (0x0u));
  /* 1211c058 mov dword ptr [0x12145168], 0x10 */
  w32((uint32_t)(0x12145168), (0x10u));
  /* 1211c062 mov eax, 1 */
  EAX = (0x1u);
L_1211c067:;
  /* 1211c067 pop ebp */
  EBP = (pop32());
  /* 1211c068 ret  */
  ESPCHK(0x1211c010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x1211c070 (85 bytes, 29 insns) */
void f_1211c070(void) {
  FTRACE(0x1211c070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211c070 push ebp */
  push32((uint32_t)(EBP));
  /* 1211c071 mov ebp, esp */
  EBP = (ESP);
  /* 1211c073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c076 mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211c07b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211c07e mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211c084 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c086 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211c089 mov edx, dword ptr [0x12145188] */
  EDX = (r32((uint32_t)(0x12145188)));
  /* 1211c08f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1211c092:;
  /* 1211c092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c095 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c098 jae 0x1211c0bf */
  if (!C.cf) goto L_1211c0bf;
  /* 1211c09a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c09d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c0a0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c0a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211c0a6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c0ad jae 0x1211c0b4 */
  if (!C.cf) goto L_1211c0b4;
  /* 1211c0af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c0b2 jmp 0x1211c0c1 */
  goto L_1211c0c1;
L_1211c0b4:;
  /* 1211c0b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c0b7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c0ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211c0bd jmp 0x1211c092 */
  goto L_1211c092;
L_1211c0bf:;
  /* 1211c0bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211c0c1:;
  /* 1211c0c1 mov esp, ebp */
  ESP = (EBP);
  /* 1211c0c3 pop ebp */
  EBP = (pop32());
  /* 1211c0c4 ret  */
  ESPCHK(0x1211c070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x1211c0d0 (95 bytes, 33 insns) */
void f_1211c0d0(void) {
  FTRACE(0x1211c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1211c0d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c0d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211c0dc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c0df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211c0e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c0e5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1211c0e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211c0eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c0f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c0f3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c0f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c0f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211c0fb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211c0fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c0ff jne 0x1211c121 */
  if (!C.zf) goto L_1211c121;
  /* 1211c101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c104 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1211c107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211c109 jne 0x1211c121 */
  if (!C.zf) goto L_1211c121;
  /* 1211c10b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c10e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211c114 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c116 je 0x1211c121 */
  if (C.zf) goto L_1211c121;
  /* 1211c118 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1211c11f jmp 0x1211c128 */
  goto L_1211c128;
L_1211c121:;
  /* 1211c121 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1211c128:;
  /* 1211c128 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211c12b mov esp, ebp */
  ESP = (EBP);
  /* 1211c12d pop ebp */
  EBP = (pop32());
  /* 1211c12e ret  */
  ESPCHK(0x1211c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x1211c130 (1485 bytes, 453 insns) */
void f_1211c130(void) {
  FTRACE(0x1211c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211c130 push ebp */
  push32((uint32_t)(EBP));
  /* 1211c131 mov ebp, esp */
  EBP = (ESP);
  /* 1211c133 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c139 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211c13c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1211c13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c142 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211c145 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c148 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211c14b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211c14e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1211c151 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211c154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c157 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211c15d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c160 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1211c167 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211c16a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211c16d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c170 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211c173 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c176 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211c178 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c17b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1211c17e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c181 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c184 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1211c187 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c18a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211c18c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1211c18f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c192 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1211c195 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211c198 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211c19b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1211c19e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c1a0 jne 0x1211c2c8 */
  if (!C.zf) goto L_1211c2c8;
  /* 1211c1a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211c1a9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1211c1ac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c1af mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1211c1b2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c1b6 jbe 0x1211c1bf */
  if ((C.cf||C.zf)) goto L_1211c1bf;
  /* 1211c1b8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1211c1bf:;
  /* 1211c1bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c1c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c1c5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211c1c8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c1cb jne 0x1211c2a1 */
  if (!C.zf) goto L_1211c2a1;
  /* 1211c1d1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c1d5 jae 0x1211c236 */
  if (!C.cf) goto L_1211c236;
  /* 1211c1d7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c1dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c1df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c1e1 not eax */
  EAX = (~(EAX));
  /* 1211c1e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c1e6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c1e9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1211c1ed and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c1ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c1f2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c1f5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1211c1f9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c1fc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c1ff mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1211c202 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211c205 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c208 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c20b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1211c20e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c211 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c214 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211c218 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c21a jne 0x1211c234 */
  if (!C.zf) goto L_1211c234;
  /* 1211c21c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c221 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c224 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c226 not eax */
  EAX = (~(EAX));
  /* 1211c228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c22b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211c22d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211c22f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c232 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1211c234:;
  /* 1211c234 jmp 0x1211c2a1 */
  goto L_1211c2a1;
L_1211c236:;
  /* 1211c236 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c239 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c23c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c241 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c243 not edx */
  EDX = (~(EDX));
  /* 1211c245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c248 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c24b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1211c252 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211c254 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c257 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c25a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1211c261 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c264 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c267 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211c26a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211c26d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c270 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c273 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1211c276 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c279 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c27c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211c280 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c282 jne 0x1211c2a1 */
  if (!C.zf) goto L_1211c2a1;
  /* 1211c284 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c287 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c28a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c28f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c291 not edx */
  EDX = (~(EDX));
  /* 1211c293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c296 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211c299 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c29b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c29e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1211c2a1:;
  /* 1211c2a1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c2a4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211c2a7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c2aa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211c2ad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1211c2b0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c2b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211c2b6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c2b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211c2bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1211c2bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c2c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c2c5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1211c2c8:;
  /* 1211c2c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c2cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1211c2ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c2d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1211c2d4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c2d8 jbe 0x1211c2e1 */
  if ((C.cf||C.zf)) goto L_1211c2e1;
  /* 1211c2da mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1211c2e1:;
  /* 1211c2e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211c2e4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1211c2e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c2e9 jne 0x1211c445 */
  if (!C.zf) goto L_1211c445;
  /* 1211c2ef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c2f2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c2f5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1211c2f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211c2fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1211c2fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c301 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1211c304 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c308 jbe 0x1211c311 */
  if ((C.cf||C.zf)) goto L_1211c311;
  /* 1211c30a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1211c311:;
  /* 1211c311 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c314 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c317 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1211c31a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c31d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1211c320 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c323 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1211c326 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c32a jbe 0x1211c333 */
  if ((C.cf||C.zf)) goto L_1211c333;
  /* 1211c32c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1211c333:;
  /* 1211c333 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211c336 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c339 je 0x1211c43f */
  if (C.zf) goto L_1211c43f;
  /* 1211c33f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c342 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c345 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211c348 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c34b jne 0x1211c421 */
  if (!C.zf) goto L_1211c421;
  /* 1211c351 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c355 jae 0x1211c3b6 */
  if (!C.cf) goto L_1211c3b6;
  /* 1211c357 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c35c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211c35f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c361 not edx */
  EDX = (~(EDX));
  /* 1211c363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c366 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c369 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1211c36d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211c36f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c372 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c375 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1211c379 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c37c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c37f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211c382 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211c385 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c388 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c38b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1211c38e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c391 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c394 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211c398 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c39a jne 0x1211c3b4 */
  if (!C.zf) goto L_1211c3b4;
  /* 1211c39c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c3a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211c3a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c3a6 not edx */
  EDX = (~(EDX));
  /* 1211c3a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c3ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211c3ad and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c3af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c3b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211c3b4:;
  /* 1211c3b4 jmp 0x1211c421 */
  goto L_1211c421;
L_1211c3b6:;
  /* 1211c3b6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211c3b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c3bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c3c1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c3c3 not eax */
  EAX = (~(EAX));
  /* 1211c3c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c3c8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c3cb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1211c3d2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c3d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c3d7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c3da mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1211c3e1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c3e4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c3e7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1211c3ea sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211c3ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c3f0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c3f3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1211c3f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c3f9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c3fc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211c400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c402 jne 0x1211c421 */
  if (!C.zf) goto L_1211c421;
  /* 1211c404 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211c407 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c40a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c40f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c411 not eax */
  EAX = (~(EAX));
  /* 1211c413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c416 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211c419 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211c41b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c41e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1211c421:;
  /* 1211c421 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c424 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211c427 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c42a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211c42d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1211c430 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c433 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211c436 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c439 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211c43c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1211c43f:;
  /* 1211c43f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c442 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1211c445:;
  /* 1211c445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211c448 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1211c44b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c44d jne 0x1211c45b */
  if (!C.zf) goto L_1211c45b;
  /* 1211c44f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211c452 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c455 je 0x1211c56b */
  if (C.zf) goto L_1211c56b;
L_1211c45b:;
  /* 1211c45b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211c45e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c461 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1211c464 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1211c467 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c46a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c46d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211c470 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1211c473 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c476 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c479 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1211c47c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c47f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c482 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1211c485 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c488 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211c48b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c48e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211c491 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c494 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c497 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211c49a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c49d jne 0x1211c56b */
  if (!C.zf) goto L_1211c56b;
  /* 1211c4a3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c4a7 jae 0x1211c504 */
  if (!C.cf) goto L_1211c504;
  /* 1211c4a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c4ac add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c4af movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211c4b3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c4b6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c4b9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211c4bc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211c4bf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c4c2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c4c5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1211c4c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c4ca jne 0x1211c4e2 */
  if (!C.zf) goto L_1211c4e2;
  /* 1211c4cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c4d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211c4d4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c4d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c4d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211c4db or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c4dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c4e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211c4e2:;
  /* 1211c4e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c4e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211c4ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c4ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c4ef mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c4f2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1211c4f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c4f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c4fb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c4fe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1211c502 jmp 0x1211c56b */
  goto L_1211c56b;
L_1211c504:;
  /* 1211c504 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c507 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c50a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211c50e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c511 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c514 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211c517 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211c51a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c51d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c520 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1211c523 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c525 jne 0x1211c542 */
  if (!C.zf) goto L_1211c542;
  /* 1211c527 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211c52a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c52d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c532 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c537 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211c53a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c53c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c53f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1211c542:;
  /* 1211c542 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211c545 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c548 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c54d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c54f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c552 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c555 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1211c55c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c55e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c561 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1211c564 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1211c56b:;
  /* 1211c56b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c56e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c571 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1211c573 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c576 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c579 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c57c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1211c57f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c582 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211c584 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c58a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211c58c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c58f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c592 jne 0x1211c6f9 */
  if (!C.zf) goto L_1211c6f9;
  /* 1211c598 cmp dword ptr [0x12145180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c59f je 0x1211c6e8 */
  if (C.zf) goto L_1211c6e8;
  /* 1211c5a5 mov eax, dword ptr [0x12145178] */
  EAX = (r32((uint32_t)(0x12145178)));
  /* 1211c5aa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1211c5ad mov ecx, dword ptr [0x12145180] */
  ECX = (r32((uint32_t)(0x12145180)));
  /* 1211c5b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211c5b6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c5b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1211c5bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1211c5c0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1211c5c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c5c8 push eax */
  push32((uint32_t)(EAX));
  /* 1211c5c9 call dword ptr [0x1214636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214636c))), 0x1211c5cfu);
  /* 1211c5cf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211c5d4 mov ecx, dword ptr [0x12145178] */
  ECX = (r32((uint32_t)(0x12145178)));
  /* 1211c5da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c5dc mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211c5e1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211c5e4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c5e6 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211c5ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1211c5ef mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211c5f4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211c5f7 mov edx, dword ptr [0x12145178] */
  EDX = (r32((uint32_t)(0x12145178)));
  /* 1211c5fd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1211c608 mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211c60d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211c610 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1211c613 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211c616 mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211c61b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211c61e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1211c621 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211c627 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1211c62a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1211c62e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c630 jne 0x1211c646 */
  if (!C.zf) goto L_1211c646;
  /* 1211c632 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211c638 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211c63b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1211c63d mov ecx, dword ptr [0x12145180] */
  ECX = (r32((uint32_t)(0x12145180)));
  /* 1211c643 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1211c646:;
  /* 1211c646 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211c64c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c650 jne 0x1211c6e8 */
  if (!C.zf) goto L_1211c6e8;
  /* 1211c656 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1211c65b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211c65d mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211c662 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1211c665 push ecx */
  push32((uint32_t)(ECX));
  /* 1211c666 call dword ptr [0x1214636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214636c))), 0x1211c66cu);
  /* 1211c66c mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211c672 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1211c675 push eax */
  push32((uint32_t)(EAX));
  /* 1211c676 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211c678 mov ecx, dword ptr [0x1214518c] */
  ECX = (r32((uint32_t)(0x1214518c)));
  /* 1211c67e push ecx */
  push32((uint32_t)(ECX));
  /* 1211c67f call dword ptr [0x1214637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214637c))), 0x1211c685u);
  /* 1211c685 mov edx, dword ptr [0x12145184] */
  EDX = (r32((uint32_t)(0x12145184)));
  /* 1211c68b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211c68e mov eax, dword ptr [0x12145188] */
  EAX = (r32((uint32_t)(0x12145188)));
  /* 1211c693 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c695 mov ecx, dword ptr [0x12145180] */
  ECX = (r32((uint32_t)(0x12145180)));
  /* 1211c69b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c69e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c6a0 push eax */
  push32((uint32_t)(EAX));
  /* 1211c6a1 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211c6a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c6aa push edx */
  push32((uint32_t)(EDX));
  /* 1211c6ab mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211c6b0 push eax */
  push32((uint32_t)(EAX));
  /* 1211c6b1 call 0x1211fc60 */
  push32(0x1211c6b6u); f_1211fc60();
  /* 1211c6b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c6b9 mov ecx, dword ptr [0x12145184] */
  ECX = (r32((uint32_t)(0x12145184)));
  /* 1211c6bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c6c2 mov dword ptr [0x12145184], ecx */
  w32((uint32_t)(0x12145184), (ECX));
  /* 1211c6c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c6cb cmp edx, dword ptr [0x12145180] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12145180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c6d1 jbe 0x1211c6dc */
  if ((C.cf||C.zf)) goto L_1211c6dc;
  /* 1211c6d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c6d6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c6d9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1211c6dc:;
  /* 1211c6dc mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211c6e2 mov dword ptr [0x1214517c], ecx */
  w32((uint32_t)(0x1214517c), (ECX));
L_1211c6e8:;
  /* 1211c6e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c6eb mov dword ptr [0x12145180], edx */
  w32((uint32_t)(0x12145180), (EDX));
  /* 1211c6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c6f4 mov dword ptr [0x12145178], eax */
  w32((uint32_t)(0x12145178), (EAX));
L_1211c6f9:;
  /* 1211c6f9 mov esp, ebp */
  ESP = (EBP);
  /* 1211c6fb pop ebp */
  EBP = (pop32());
  /* 1211c6fc ret  */
  ESPCHK(0x1211c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x1211c700 (1334 bytes, 427 insns) */
void f_1211c700(void) {
  FTRACE(0x1211c700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211c700 push ebp */
  push32((uint32_t)(EBP));
  /* 1211c701 mov ebp, esp */
  EBP = (ESP);
  /* 1211c703 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c706 push esi */
  push32((uint32_t)(ESI));
  /* 1211c707 mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211c70c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211c70f mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211c715 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c717 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1211c71a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211c71d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c720 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1211c723 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1211c726 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211c729 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1211c72c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c72f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211c732 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c736 jge 0x1211c74c */
  if ((C.sf==C.of)) goto L_1211c74c;
  /* 1211c738 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211c73b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c73e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211c740 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1211c743 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1211c74a jmp 0x1211c761 */
  goto L_1211c761;
L_1211c74c:;
  /* 1211c74c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1211c753 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c756 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c759 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211c75c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c75e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1211c761:;
  /* 1211c761 mov ecx, dword ptr [0x1214517c] */
  ECX = (r32((uint32_t)(0x1214517c)));
  /* 1211c767 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1211c76a:;
  /* 1211c76a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c76d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c770 jae 0x1211c796 */
  if (!C.cf) goto L_1211c796;
  /* 1211c772 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c775 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c778 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1211c77a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c77d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c780 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1211c783 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211c787 je 0x1211c78b */
  if (C.zf) goto L_1211c78b;
  /* 1211c789 jmp 0x1211c796 */
  goto L_1211c796;
L_1211c78b:;
  /* 1211c78b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c78e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c791 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1211c794 jmp 0x1211c76a */
  goto L_1211c76a;
L_1211c796:;
  /* 1211c796 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c799 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c79c jne 0x1211c87d */
  if (!C.zf) goto L_1211c87d;
  /* 1211c7a2 mov eax, dword ptr [0x12145188] */
  EAX = (r32((uint32_t)(0x12145188)));
  /* 1211c7a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1211c7aa:;
  /* 1211c7aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7ad cmp ecx, dword ptr [0x1214517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1214517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c7b3 jae 0x1211c7d9 */
  if (!C.cf) goto L_1211c7d9;
  /* 1211c7b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c7bb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1211c7bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c7c3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1211c7c6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211c7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211c7ca je 0x1211c7ce */
  if (C.zf) goto L_1211c7ce;
  /* 1211c7cc jmp 0x1211c7d9 */
  goto L_1211c7d9;
L_1211c7ce:;
  /* 1211c7ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7d1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c7d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211c7d7 jmp 0x1211c7aa */
  goto L_1211c7aa;
L_1211c7d9:;
  /* 1211c7d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7dc cmp ecx, dword ptr [0x1214517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1214517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c7e2 jne 0x1211c87d */
  if (!C.zf) goto L_1211c87d;
L_1211c7e8:;
  /* 1211c7e8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7eb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c7ee jae 0x1211c806 */
  if (!C.cf) goto L_1211c806;
  /* 1211c7f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c7f7 je 0x1211c7fb */
  if (C.zf) goto L_1211c7fb;
  /* 1211c7f9 jmp 0x1211c806 */
  goto L_1211c806;
L_1211c7fb:;
  /* 1211c7fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c7fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c801 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1211c804 jmp 0x1211c7e8 */
  goto L_1211c7e8;
L_1211c806:;
  /* 1211c806 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c809 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c80c jne 0x1211c857 */
  if (!C.zf) goto L_1211c857;
  /* 1211c80e mov eax, dword ptr [0x12145188] */
  EAX = (r32((uint32_t)(0x12145188)));
  /* 1211c813 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1211c816:;
  /* 1211c816 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c819 cmp ecx, dword ptr [0x1214517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1214517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c81f jae 0x1211c837 */
  if (!C.cf) goto L_1211c837;
  /* 1211c821 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c824 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c828 je 0x1211c82c */
  if (C.zf) goto L_1211c82c;
  /* 1211c82a jmp 0x1211c837 */
  goto L_1211c837;
L_1211c82c:;
  /* 1211c82c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c82f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c832 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211c835 jmp 0x1211c816 */
  goto L_1211c816;
L_1211c837:;
  /* 1211c837 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c83a cmp ecx, dword ptr [0x1214517c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1214517c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c840 jne 0x1211c857 */
  if (!C.zf) goto L_1211c857;
  /* 1211c842 call 0x1211cc40 */
  push32(0x1211c847u); f_1211cc40();
  /* 1211c847 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211c84a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c84e jne 0x1211c857 */
  if (!C.zf) goto L_1211c857;
  /* 1211c850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211c852 jmp 0x1211cc31 */
  goto L_1211cc31;
L_1211c857:;
  /* 1211c857 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c85a push edx */
  push32((uint32_t)(EDX));
  /* 1211c85b call 0x1211cd50 */
  push32(0x1211c860u); f_1211cd50();
  /* 1211c860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c863 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c866 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1211c869 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1211c86b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c86e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211c871 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c874 jne 0x1211c87d */
  if (!C.zf) goto L_1211c87d;
  /* 1211c876 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211c878 jmp 0x1211cc31 */
  goto L_1211cc31;
L_1211c87d:;
  /* 1211c87d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c880 mov dword ptr [0x1214517c], edx */
  w32((uint32_t)(0x1214517c), (EDX));
  /* 1211c886 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211c889 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211c88c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1211c88f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c892 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211c894 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1211c897 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c89b je 0x1211c8c0 */
  if (C.zf) goto L_1211c8c0;
  /* 1211c89d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c8a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c8a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c8a6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1211c8aa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c8ad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c8b0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c8b3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1211c8ba or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1211c8bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211c8be jne 0x1211c8f5 */
  if (!C.zf) goto L_1211c8f5;
L_1211c8c0:;
  /* 1211c8c0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1211c8c7:;
  /* 1211c8c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c8ca mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c8cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c8d0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1211c8d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c8d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c8da mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c8dd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1211c8e4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1211c8e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c8e8 jne 0x1211c8f5 */
  if (!C.zf) goto L_1211c8f5;
  /* 1211c8ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c8ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c8f0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1211c8f3 jmp 0x1211c8c7 */
  goto L_1211c8c7;
L_1211c8f5:;
  /* 1211c8f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c8f8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211c8fe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c901 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1211c908 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211c90b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1211c912 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c915 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c918 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211c91b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1211c91f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211c922 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c926 jne 0x1211c942 */
  if (!C.zf) goto L_1211c942;
  /* 1211c928 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1211c92f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c932 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c935 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1211c938 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1211c93f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1211c942:;
  /* 1211c942 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c946 jl 0x1211c95b */
  if ((C.sf!=C.of)) goto L_1211c95b;
  /* 1211c948 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211c94b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1211c94d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1211c950 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c953 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c956 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1211c959 jmp 0x1211c942 */
  goto L_1211c942;
L_1211c95b:;
  /* 1211c95b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c95e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211c961 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1211c965 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1211c968 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211c96b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211c96d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c970 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211c973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211c976 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1211c979 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211c97c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1211c97f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c983 jle 0x1211c98c */
  if ((C.zf||C.sf!=C.of)) goto L_1211c98c;
  /* 1211c985 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1211c98c:;
  /* 1211c98c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211c98f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c992 je 0x1211cbb0 */
  if (C.zf) goto L_1211cbb0;
  /* 1211c998 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211c99b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211c99e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211c9a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c9a4 jne 0x1211ca7a */
  if (!C.zf) goto L_1211ca7a;
  /* 1211c9aa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211c9ae jge 0x1211ca0f */
  if ((C.sf==C.of)) goto L_1211ca0f;
  /* 1211c9b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c9b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c9b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c9ba not eax */
  EAX = (~(EAX));
  /* 1211c9bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c9bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c9c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1211c9c6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211c9c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211c9cb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c9ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1211c9d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c9d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c9d8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1211c9db sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211c9de mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c9e1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c9e4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1211c9e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211c9ea add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211c9ed movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211c9f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211c9f3 jne 0x1211ca0d */
  if (!C.zf) goto L_1211ca0d;
  /* 1211c9f5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211c9fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211c9fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211c9ff not eax */
  EAX = (~(EAX));
  /* 1211ca01 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ca04 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211ca06 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211ca08 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ca0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1211ca0d:;
  /* 1211ca0d jmp 0x1211ca7a */
  goto L_1211ca7a;
L_1211ca0f:;
  /* 1211ca0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211ca12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ca15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211ca1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211ca1c not edx */
  EDX = (~(EDX));
  /* 1211ca1e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211ca21 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211ca24 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1211ca2b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ca2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211ca30 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211ca33 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1211ca3a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211ca3d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ca40 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211ca43 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211ca46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211ca49 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ca4c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1211ca4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211ca52 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ca55 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211ca59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211ca5b jne 0x1211ca7a */
  if (!C.zf) goto L_1211ca7a;
  /* 1211ca5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211ca60 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ca63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211ca68 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211ca6a not edx */
  EDX = (~(EDX));
  /* 1211ca6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ca6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211ca72 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211ca74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ca77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1211ca7a:;
  /* 1211ca7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ca7d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211ca80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ca83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211ca86 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1211ca89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ca8c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211ca8f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ca92 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211ca95 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1211ca98 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ca9c je 0x1211cbb0 */
  if (C.zf) goto L_1211cbb0;
  /* 1211caa2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211caa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211caa8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1211caab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211caae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211cab4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211cab7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1211caba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cabd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211cac0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211cac3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211cac6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cac9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1211cacc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cacf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211cad2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cad5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1211cad8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cadb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cade mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211cae1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cae4 jne 0x1211cbb0 */
  if (!C.zf) goto L_1211cbb0;
  /* 1211caea cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211caee jge 0x1211cb4a */
  if ((C.sf==C.of)) goto L_1211cb4a;
  /* 1211caf0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211caf3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211caf6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211cafa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cafd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cb00 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1211cb03 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211cb05 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb08 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cb0b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1211cb0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211cb10 jne 0x1211cb28 */
  if (!C.zf) goto L_1211cb28;
  /* 1211cb12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211cb17 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cb1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211cb1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cb1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211cb21 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211cb23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cb26 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1211cb28:;
  /* 1211cb28 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211cb2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cb30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211cb32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cb35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb38 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1211cb3c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211cb3e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cb41 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb44 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1211cb48 jmp 0x1211cbb0 */
  goto L_1211cbb0;
L_1211cb4a:;
  /* 1211cb4a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb4d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cb50 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211cb54 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb57 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cb5a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1211cb5d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211cb5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb62 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cb65 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1211cb68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211cb6a jne 0x1211cb87 */
  if (!C.zf) goto L_1211cb87;
  /* 1211cb6c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cb6f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cb72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211cb77 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211cb79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cb7c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211cb7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211cb81 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cb84 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1211cb87:;
  /* 1211cb87 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cb8a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cb8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211cb92 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211cb94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cb97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cb9a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1211cba1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211cba3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cba6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cba9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1211cbb0:;
  /* 1211cbb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cbb4 je 0x1211cbca */
  if (C.zf) goto L_1211cbca;
  /* 1211cbb6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cbb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211cbbc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1211cbbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cbc1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cbc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211cbc7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1211cbca:;
  /* 1211cbca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cbcd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cbd0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1211cbd3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cbd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cbd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cbdc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1211cbde mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cbe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cbe4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cbe7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cbea mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1211cbed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cbf0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211cbf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cbf5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211cbf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cbfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cbfd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1211cbff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211cc01 jne 0x1211cc23 */
  if (!C.zf) goto L_1211cc23;
  /* 1211cc03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cc06 cmp eax, dword ptr [0x12145180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12145180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cc0c jne 0x1211cc23 */
  if (!C.zf) goto L_1211cc23;
  /* 1211cc0e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cc11 cmp ecx, dword ptr [0x12145178] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12145178))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cc17 jne 0x1211cc23 */
  if (!C.zf) goto L_1211cc23;
  /* 1211cc19 mov dword ptr [0x12145180], 0 */
  w32((uint32_t)(0x12145180), (0x0u));
L_1211cc23:;
  /* 1211cc23 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1211cc26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cc29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1211cc2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cc2e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1211cc31:;
  /* 1211cc31 pop esi */
  ESI = (pop32());
  /* 1211cc32 mov esp, ebp */
  ESP = (EBP);
  /* 1211cc34 pop ebp */
  EBP = (pop32());
  /* 1211cc35 ret  */
  ESPCHK(0x1211c700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc40 @ 0x1211cc40 (271 bytes, 78 insns) */
void f_1211cc40(void) {
  FTRACE(0x1211cc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211cc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211cc41 mov ebp, esp */
  EBP = (ESP);
  /* 1211cc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1211cc44 mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211cc49 cmp eax, dword ptr [0x12145168] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12145168))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cc4f jne 0x1211cc9b */
  if (!C.zf) goto L_1211cc9b;
  /* 1211cc51 mov ecx, dword ptr [0x12145168] */
  ECX = (r32((uint32_t)(0x12145168)));
  /* 1211cc57 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cc5a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211cc5d push ecx */
  push32((uint32_t)(ECX));
  /* 1211cc5e mov edx, dword ptr [0x12145188] */
  EDX = (r32((uint32_t)(0x12145188)));
  /* 1211cc64 push edx */
  push32((uint32_t)(EDX));
  /* 1211cc65 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211cc67 mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211cc6c push eax */
  push32((uint32_t)(EAX));
  /* 1211cc6d call dword ptr [0x12146358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146358))), 0x1211cc73u);
  /* 1211cc73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211cc76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cc7a jne 0x1211cc83 */
  if (!C.zf) goto L_1211cc83;
  /* 1211cc7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211cc7e jmp 0x1211cd4b */
  goto L_1211cd4b;
L_1211cc83:;
  /* 1211cc83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cc86 mov dword ptr [0x12145188], ecx */
  w32((uint32_t)(0x12145188), (ECX));
  /* 1211cc8c mov edx, dword ptr [0x12145168] */
  EDX = (r32((uint32_t)(0x12145168)));
  /* 1211cc92 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cc95 mov dword ptr [0x12145168], edx */
  w32((uint32_t)(0x12145168), (EDX));
L_1211cc9b:;
  /* 1211cc9b mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211cca0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211cca3 mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211cca9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ccab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211ccae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1211ccb3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1211ccb5 mov edx, dword ptr [0x1214518c] */
  EDX = (r32((uint32_t)(0x1214518c)));
  /* 1211ccbb push edx */
  push32((uint32_t)(EDX));
  /* 1211ccbc call dword ptr [0x12146350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146350))), 0x1211ccc2u);
  /* 1211ccc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ccc5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1211ccc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cccb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cccf jne 0x1211ccd5 */
  if (!C.zf) goto L_1211ccd5;
  /* 1211ccd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ccd3 jmp 0x1211cd4b */
  goto L_1211cd4b;
L_1211ccd5:;
  /* 1211ccd5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1211ccd7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1211ccdc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1211cce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211cce3 call dword ptr [0x12146348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146348))), 0x1211cce9u);
  /* 1211cce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ccec mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1211ccef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ccf2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ccf6 jne 0x1211cd12 */
  if (!C.zf) goto L_1211cd12;
  /* 1211ccf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ccfb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211ccfe push ecx */
  push32((uint32_t)(ECX));
  /* 1211ccff push 0 */
  push32((uint32_t)(0x0u));
  /* 1211cd01 mov edx, dword ptr [0x1214518c] */
  EDX = (r32((uint32_t)(0x1214518c)));
  /* 1211cd07 push edx */
  push32((uint32_t)(EDX));
  /* 1211cd08 call dword ptr [0x1214637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214637c))), 0x1211cd0eu);
  /* 1211cd0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211cd10 jmp 0x1211cd4b */
  goto L_1211cd4b;
L_1211cd12:;
  /* 1211cd12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cd15 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1211cd1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cd1e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1211cd25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cd28 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1211cd2f mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211cd34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cd37 mov dword ptr [0x12145184], eax */
  w32((uint32_t)(0x12145184), (EAX));
  /* 1211cd3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cd3f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1211cd42 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1211cd48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1211cd4b:;
  /* 1211cd4b mov esp, ebp */
  ESP = (EBP);
  /* 1211cd4d pop ebp */
  EBP = (pop32());
  /* 1211cd4e ret  */
  ESPCHK(0x1211cc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd50 @ 0x1211cd50 (494 bytes, 149 insns) */
void f_1211cd50(void) {
  FTRACE(0x1211cd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211cd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1211cd51 mov ebp, esp */
  EBP = (ESP);
  /* 1211cd53 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cd56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cd59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211cd5c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1211cd5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cd62 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211cd65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211cd68 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1211cd6f:;
  /* 1211cd6f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cd73 jl 0x1211cd88 */
  if ((C.sf!=C.of)) goto L_1211cd88;
  /* 1211cd75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211cd78 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1211cd7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211cd7d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cd80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cd83 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1211cd86 jmp 0x1211cd6f */
  goto L_1211cd6f;
L_1211cd88:;
  /* 1211cd88 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cd8b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211cd91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cd94 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1211cd9b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1211cd9e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1211cda5 jmp 0x1211cdb0 */
  goto L_1211cdb0;
L_1211cda7:;
  /* 1211cda7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211cdaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cdad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1211cdb0:;
  /* 1211cdb0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cdb4 jge 0x1211cdd6 */
  if ((C.sf==C.of)) goto L_1211cdd6;
  /* 1211cdb6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211cdb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211cdbc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1211cdbf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211cdc2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cdc5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cdc8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1211cdcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cdce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cdd1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1211cdd4 jmp 0x1211cda7 */
  goto L_1211cda7;
L_1211cdd6:;
  /* 1211cdd6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cdd9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1211cddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cddf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1211cde2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cde4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1211cde7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1211cde9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1211cdee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1211cdf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cdf6 push edx */
  push32((uint32_t)(EDX));
  /* 1211cdf7 call dword ptr [0x12146348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146348))), 0x1211cdfdu);
  /* 1211cdfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211cdff jne 0x1211ce09 */
  if (!C.zf) goto L_1211ce09;
  /* 1211ce01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211ce04 jmp 0x1211cf3a */
  goto L_1211cf3a;
L_1211ce09:;
  /* 1211ce09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ce0c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce11 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1211ce14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ce17 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211ce1a jmp 0x1211ce28 */
  goto L_1211ce28;
L_1211ce1c:;
  /* 1211ce1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ce1f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce25 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211ce28:;
  /* 1211ce28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ce2b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ce2e ja 0x1211ce8d */
  if ((!C.cf&&!C.zf)) goto L_1211ce8d;
  /* 1211ce30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ce33 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1211ce3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ce3d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1211ce47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ce4a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce4d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211ce50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ce53 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1211ce59 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ce5c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ce65 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1211ce68 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ce6b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ce71 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ce74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1211ce77 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ce7a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce7f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1211ce82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ce85 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1211ce8b jmp 0x1211ce1c */
  goto L_1211ce1c;
L_1211ce8d:;
  /* 1211ce8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211ce90 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce96 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1211ce99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ce9c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ce9f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cea2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1211cea5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cea8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211ceab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211ceae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ceb1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211ceb4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1211ceb7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211ceba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cebd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cec0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1211cec3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cec6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211cec9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211cecc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211cecf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211ced2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1211ced5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211ced8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cedb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1211cee3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cee6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cee9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1211cef4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cef7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1211cefb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cefe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1211cf01 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211cf04 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cf07 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1211cf0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211cf0c jne 0x1211cf1d */
  if (!C.zf) goto L_1211cf1d;
  /* 1211cf0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cf11 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211cf14 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1211cf17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cf1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1211cf1d:;
  /* 1211cf1d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211cf22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cf25 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211cf27 not edx */
  EDX = (~(EDX));
  /* 1211cf29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cf2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211cf2f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211cf31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cf34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1211cf37 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1211cf3a:;
  /* 1211cf3a mov esp, ebp */
  ESP = (EBP);
  /* 1211cf3c pop ebp */
  EBP = (pop32());
  /* 1211cf3d ret  */
  ESPCHK(0x1211cd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x1211cf40 (1515 bytes, 489 insns) */
void f_1211cf40(void) {
  FTRACE(0x1211cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1211cf43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cf46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211cf49 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cf4c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1211cf4e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1211cf51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cf54 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1211cf57 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1211cf5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211cf5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211cf60 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cf63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211cf66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211cf69 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1211cf6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211cf6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211cf72 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211cf78 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211cf7b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1211cf82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1211cf85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211cf88 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cf8b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1211cf8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cf91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211cf93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cf96 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1211cf99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211cf9c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cf9f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1211cfa2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cfa5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211cfa7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1211cfaa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211cfad cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cfb0 jle 0x1211d266 */
  if ((C.zf||C.sf!=C.of)) goto L_1211d266;
  /* 1211cfb6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cfb9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1211cfbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211cfbe jne 0x1211cfcb */
  if (!C.zf) goto L_1211cfcb;
  /* 1211cfc0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211cfc3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211cfc6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cfc9 jle 0x1211cfd2 */
  if ((C.zf||C.sf!=C.of)) goto L_1211cfd2;
L_1211cfcb:;
  /* 1211cfcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211cfcd jmp 0x1211d527 */
  goto L_1211d527;
L_1211cfd2:;
  /* 1211cfd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211cfd5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1211cfd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211cfdb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211cfde cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cfe2 jbe 0x1211cfeb */
  if ((C.cf||C.zf)) goto L_1211cfeb;
  /* 1211cfe4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1211cfeb:;
  /* 1211cfeb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cfee mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211cff1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211cff4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211cff7 jne 0x1211d0cd */
  if (!C.zf) goto L_1211d0cd;
  /* 1211cffd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d001 jae 0x1211d062 */
  if (!C.cf) goto L_1211d062;
  /* 1211d003 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d008 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d00b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d00d not edx */
  EDX = (~(EDX));
  /* 1211d00f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d012 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d015 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1211d019 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211d01b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d01e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d021 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1211d025 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d028 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d02b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211d02e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211d031 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d034 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d037 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1211d03a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d03d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d040 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211d044 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211d046 jne 0x1211d060 */
  if (!C.zf) goto L_1211d060;
  /* 1211d048 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d04d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d050 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d052 not edx */
  EDX = (~(EDX));
  /* 1211d054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d057 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211d059 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d05b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d05e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211d060:;
  /* 1211d060 jmp 0x1211d0cd */
  goto L_1211d0cd;
L_1211d062:;
  /* 1211d062 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d065 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d068 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d06d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d06f not eax */
  EAX = (~(EAX));
  /* 1211d071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d074 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d077 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1211d07e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d080 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d083 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d086 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1211d08d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d090 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d093 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1211d096 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211d099 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d09c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d09f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1211d0a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d0a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d0a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211d0ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211d0ae jne 0x1211d0cd */
  if (!C.zf) goto L_1211d0cd;
  /* 1211d0b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d0b3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d0b6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d0bb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d0bd not eax */
  EAX = (~(EAX));
  /* 1211d0bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d0c2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d0c5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211d0c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d0ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1211d0cd:;
  /* 1211d0cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d0d0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211d0d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d0d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d0d9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1211d0dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d0df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211d0e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d0e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211d0e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1211d0eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d0ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d0f1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d0f4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211d0f7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d0fb jle 0x1211d247 */
  if ((C.zf||C.sf!=C.of)) goto L_1211d247;
  /* 1211d101 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d104 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d107 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1211d10a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211d10d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1211d110 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d113 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1211d116 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d11a jbe 0x1211d123 */
  if ((C.cf||C.zf)) goto L_1211d123;
  /* 1211d11c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1211d123:;
  /* 1211d123 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d126 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211d129 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1211d12c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1211d12f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d132 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d135 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d138 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1211d13b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d13e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d141 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1211d144 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d147 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d14a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1211d14d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d150 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d153 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d156 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211d159 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d15c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d15f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d162 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d165 jne 0x1211d233 */
  if (!C.zf) goto L_1211d233;
  /* 1211d16b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d16f jae 0x1211d1cc */
  if (!C.cf) goto L_1211d1cc;
  /* 1211d171 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d174 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d177 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211d17b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d17e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d181 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211d184 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211d187 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d18a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d18d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1211d190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211d192 jne 0x1211d1aa */
  if (!C.zf) goto L_1211d1aa;
  /* 1211d194 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d199 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d19c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d19e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d1a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211d1a3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d1a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d1a8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211d1aa:;
  /* 1211d1aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d1af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d1b2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d1b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d1b7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d1ba mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1211d1be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d1c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d1c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d1c6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1211d1ca jmp 0x1211d233 */
  goto L_1211d233;
L_1211d1cc:;
  /* 1211d1cc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d1cf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d1d2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211d1d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d1d9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d1dc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211d1df add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211d1e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d1e5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d1e8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1211d1eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211d1ed jne 0x1211d20a */
  if (!C.zf) goto L_1211d20a;
  /* 1211d1ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d1f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d1f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d1fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d1fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d1ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d202 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d207 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1211d20a:;
  /* 1211d20a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d20d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d210 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d215 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d21a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d21d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1211d224 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d226 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d229 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d22c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1211d233:;
  /* 1211d233 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d236 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211d239 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1211d23b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d23e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d241 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211d244 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1211d247:;
  /* 1211d247 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211d24a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d24d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d250 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1211d252 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211d255 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d258 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d25b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d25e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1211d261 jmp 0x1211d522 */
  goto L_1211d522;
L_1211d266:;
  /* 1211d266 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211d269 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d26c jge 0x1211d522 */
  if ((C.sf==C.of)) goto L_1211d522;
  /* 1211d272 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211d275 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d278 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d27b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211d27d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1211d280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d283 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d286 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d289 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1211d28c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d28f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d292 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1211d295 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d298 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d29b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1211d29e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d2a1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1211d2a4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d2a7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1211d2aa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d2ae jbe 0x1211d2b7 */
  if ((C.cf||C.zf)) goto L_1211d2b7;
  /* 1211d2b0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1211d2b7:;
  /* 1211d2b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211d2ba and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1211d2bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211d2bf jne 0x1211d400 */
  if (!C.zf) goto L_1211d400;
  /* 1211d2c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211d2c8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1211d2cb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d2ce mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211d2d1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d2d5 jbe 0x1211d2de */
  if ((C.cf||C.zf)) goto L_1211d2de;
  /* 1211d2d7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1211d2de:;
  /* 1211d2de mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d2e1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d2e4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d2e7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d2ea jne 0x1211d3c0 */
  if (!C.zf) goto L_1211d3c0;
  /* 1211d2f0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d2f4 jae 0x1211d355 */
  if (!C.cf) goto L_1211d355;
  /* 1211d2f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d2fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d2fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d300 not edx */
  EDX = (~(EDX));
  /* 1211d302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d305 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d308 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1211d30c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211d30e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d311 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d314 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1211d318 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d31b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d31e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1211d321 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211d324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d327 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d32a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1211d32d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d330 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d333 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211d337 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211d339 jne 0x1211d353 */
  if (!C.zf) goto L_1211d353;
  /* 1211d33b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d340 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d343 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d345 not edx */
  EDX = (~(EDX));
  /* 1211d347 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d34a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211d34c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d351 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211d353:;
  /* 1211d353 jmp 0x1211d3c0 */
  goto L_1211d3c0;
L_1211d355:;
  /* 1211d355 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d358 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d35b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d360 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d362 not eax */
  EAX = (~(EAX));
  /* 1211d364 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d367 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d36a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1211d371 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d373 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d376 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d379 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1211d380 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d383 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d386 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1211d389 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211d38c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d38f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d392 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1211d395 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d398 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d39b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1211d39f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211d3a1 jne 0x1211d3c0 */
  if (!C.zf) goto L_1211d3c0;
  /* 1211d3a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211d3a6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d3a9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d3ae shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d3b0 not eax */
  EAX = (~(EAX));
  /* 1211d3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d3b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d3b8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211d3ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d3bd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1211d3c0:;
  /* 1211d3c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d3c3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211d3c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d3c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d3cc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1211d3cf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d3d2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211d3d5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211d3d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211d3db mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1211d3de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d3e1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d3e4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1211d3e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d3ea sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1211d3ed sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d3f0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1211d3f3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d3f7 jbe 0x1211d400 */
  if ((C.cf||C.zf)) goto L_1211d400;
  /* 1211d3f9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1211d400:;
  /* 1211d400 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211d403 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211d406 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1211d409 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1211d40c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d40f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d412 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d415 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1211d418 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d41b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d41e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211d421 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d424 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d427 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1211d42a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d42d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d430 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d433 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1211d436 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d439 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d43c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d43f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d442 jne 0x1211d50e */
  if (!C.zf) goto L_1211d50e;
  /* 1211d448 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d44c jae 0x1211d4a8 */
  if (!C.cf) goto L_1211d4a8;
  /* 1211d44e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d451 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d454 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211d458 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d45b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d45e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1211d461 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211d463 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d466 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d469 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1211d46c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211d46e jne 0x1211d486 */
  if (!C.zf) goto L_1211d486;
  /* 1211d470 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d475 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211d478 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d47a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d47d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211d47f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211d481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d484 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1211d486:;
  /* 1211d486 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d48b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211d48e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d493 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d496 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1211d49a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211d49c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d49f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d4a2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1211d4a6 jmp 0x1211d50e */
  goto L_1211d50e;
L_1211d4a8:;
  /* 1211d4a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d4ab add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d4ae movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1211d4b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d4b5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d4b8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1211d4bb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211d4bd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d4c0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d4c3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1211d4c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211d4c8 jne 0x1211d4e5 */
  if (!C.zf) goto L_1211d4e5;
  /* 1211d4ca mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211d4cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d4d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1211d4d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1211d4d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d4da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211d4dd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1211d4df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211d4e2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1211d4e5:;
  /* 1211d4e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211d4e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d4eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d4f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d4f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d4f8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1211d4ff or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211d501 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d504 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1211d507 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1211d50e:;
  /* 1211d50e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d511 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d514 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1211d516 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d519 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d51c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211d51f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1211d522:;
  /* 1211d522 mov eax, 1 */
  EAX = (0x1u);
L_1211d527:;
  /* 1211d527 mov esp, ebp */
  ESP = (EBP);
  /* 1211d529 pop ebp */
  EBP = (pop32());
  /* 1211d52a ret  */
  ESPCHK(0x1211cf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d530 @ 0x1211d530 (304 bytes, 79 insns) */
void f_1211d530(void) {
  FTRACE(0x1211d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211d530 push ebp */
  push32((uint32_t)(EBP));
  /* 1211d531 mov ebp, esp */
  EBP = (ESP);
  /* 1211d533 push ecx */
  push32((uint32_t)(ECX));
  /* 1211d534 cmp dword ptr [0x12145180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d53b je 0x1211d65c */
  if (C.zf) goto L_1211d65c;
  /* 1211d541 mov eax, dword ptr [0x12145178] */
  EAX = (r32((uint32_t)(0x12145178)));
  /* 1211d546 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1211d549 mov ecx, dword ptr [0x12145180] */
  ECX = (r32((uint32_t)(0x12145180)));
  /* 1211d54f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211d552 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d554 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211d557 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1211d55c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1211d561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211d564 push eax */
  push32((uint32_t)(EAX));
  /* 1211d565 call dword ptr [0x1214636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214636c))), 0x1211d56bu);
  /* 1211d56b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211d570 mov ecx, dword ptr [0x12145178] */
  ECX = (r32((uint32_t)(0x12145178)));
  /* 1211d576 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211d578 mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211d57d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211d580 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1211d582 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211d588 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1211d58b mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211d590 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211d593 mov edx, dword ptr [0x12145178] */
  EDX = (r32((uint32_t)(0x12145178)));
  /* 1211d599 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1211d5a4 mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211d5a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211d5ac mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1211d5af sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211d5b2 mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211d5b7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211d5ba mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1211d5bd mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211d5c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1211d5c6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1211d5ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211d5cc jne 0x1211d5e2 */
  if (!C.zf) goto L_1211d5e2;
  /* 1211d5ce mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211d5d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211d5d7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1211d5d9 mov ecx, dword ptr [0x12145180] */
  ECX = (r32((uint32_t)(0x12145180)));
  /* 1211d5df mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1211d5e2:;
  /* 1211d5e2 mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211d5e8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d5ec jne 0x1211d652 */
  if (!C.zf) goto L_1211d652;
  /* 1211d5ee cmp dword ptr [0x12145184], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12145184))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d5f5 jle 0x1211d652 */
  if ((C.zf||C.sf!=C.of)) goto L_1211d652;
  /* 1211d5f7 mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211d5fc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1211d5ff push ecx */
  push32((uint32_t)(ECX));
  /* 1211d600 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211d602 mov edx, dword ptr [0x1214518c] */
  EDX = (r32((uint32_t)(0x1214518c)));
  /* 1211d608 push edx */
  push32((uint32_t)(EDX));
  /* 1211d609 call dword ptr [0x1214637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214637c))), 0x1211d60fu);
  /* 1211d60f mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211d614 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211d617 mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211d61d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d61f mov edx, dword ptr [0x12145180] */
  EDX = (r32((uint32_t)(0x12145180)));
  /* 1211d625 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d628 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d62a push ecx */
  push32((uint32_t)(ECX));
  /* 1211d62b mov eax, dword ptr [0x12145180] */
  EAX = (r32((uint32_t)(0x12145180)));
  /* 1211d630 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d633 push eax */
  push32((uint32_t)(EAX));
  /* 1211d634 mov ecx, dword ptr [0x12145180] */
  ECX = (r32((uint32_t)(0x12145180)));
  /* 1211d63a push ecx */
  push32((uint32_t)(ECX));
  /* 1211d63b call 0x1211fc60 */
  push32(0x1211d640u); f_1211fc60();
  /* 1211d640 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d643 mov edx, dword ptr [0x12145184] */
  EDX = (r32((uint32_t)(0x12145184)));
  /* 1211d649 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d64c mov dword ptr [0x12145184], edx */
  w32((uint32_t)(0x12145184), (EDX));
L_1211d652:;
  /* 1211d652 mov dword ptr [0x12145180], 0 */
  w32((uint32_t)(0x12145180), (0x0u));
L_1211d65c:;
  /* 1211d65c mov esp, ebp */
  ESP = (EBP);
  /* 1211d65e pop ebp */
  EBP = (pop32());
  /* 1211d65f ret  */
  ESPCHK(0x1211d530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d660 @ 0x1211d660 (1565 bytes, 343 insns) */
void f_1211d660(void) {
  FTRACE(0x1211d660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211d660 push ebp */
  push32((uint32_t)(EBP));
  /* 1211d661 mov ebp, esp */
  EBP = (ESP);
  /* 1211d663 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d669 mov eax, dword ptr [0x12145184] */
  EAX = (r32((uint32_t)(0x12145184)));
  /* 1211d66e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211d671 push eax */
  push32((uint32_t)(EAX));
  /* 1211d672 mov ecx, dword ptr [0x12145188] */
  ECX = (r32((uint32_t)(0x12145188)));
  /* 1211d678 push ecx */
  push32((uint32_t)(ECX));
  /* 1211d679 call dword ptr [0x12146398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146398))), 0x1211d67fu);
  /* 1211d67f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211d681 je 0x1211d68b */
  if (C.zf) goto L_1211d68b;
  /* 1211d683 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211d686 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d68b:;
  /* 1211d68b mov edx, dword ptr [0x12145188] */
  EDX = (r32((uint32_t)(0x12145188)));
  /* 1211d691 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1211d697 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1211d6a1 jmp 0x1211d6b2 */
  goto L_1211d6b2;
L_1211d6a3:;
  /* 1211d6a3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1211d6a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d6ac mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1211d6b2:;
  /* 1211d6b2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1211d6b8 cmp ecx, dword ptr [0x12145184] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12145184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d6be jge 0x1211dc77 */
  if ((C.sf==C.of)) goto L_1211dc77;
  /* 1211d6c4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1211d6ca mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1211d6cd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1211d6d3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1211d6d8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1211d6de push ecx */
  push32((uint32_t)(ECX));
  /* 1211d6df call dword ptr [0x12146398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146398))), 0x1211d6e5u);
  /* 1211d6e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211d6e7 je 0x1211d6f3 */
  if (C.zf) goto L_1211d6f3;
  /* 1211d6e9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1211d6ee jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d6f3:;
  /* 1211d6f3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1211d6f9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1211d6fc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1211d702 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1211d708 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d70e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1211d711 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1211d717 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211d71a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211d71d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1211d727 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1211d731 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1211d738 jmp 0x1211d743 */
  goto L_1211d743;
L_1211d73a:;
  /* 1211d73a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211d73d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1211d743:;
  /* 1211d743 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d747 jge 0x1211dc3b */
  if ((C.sf==C.of)) goto L_1211dc3b;
  /* 1211d74d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1211d757 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1211d761 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1211d76b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1211d775 jmp 0x1211d786 */
  goto L_1211d786;
L_1211d777:;
  /* 1211d777 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1211d77d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d780 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1211d786:;
  /* 1211d786 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d78d jge 0x1211d7a2 */
  if ((C.sf==C.of)) goto L_1211d7a2;
  /* 1211d78f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1211d795 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1211d7a0 jmp 0x1211d777 */
  goto L_1211d777;
L_1211d7a2:;
  /* 1211d7a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d7a6 jl 0x1211dbdd */
  if ((C.sf!=C.of)) goto L_1211dbdd;
  /* 1211d7ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1211d7b1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1211d7b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1211d7b8 call dword ptr [0x12146398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146398))), 0x1211d7beu);
  /* 1211d7be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211d7c0 je 0x1211d7cc */
  if (C.zf) goto L_1211d7cc;
  /* 1211d7c2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1211d7c7 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d7cc:;
  /* 1211d7cc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1211d7d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1211d7d5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1211d7df jmp 0x1211d7f0 */
  goto L_1211d7f0;
L_1211d7e1:;
  /* 1211d7e1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1211d7e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d7ea mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1211d7f0:;
  /* 1211d7f0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d7f7 jge 0x1211d974 */
  if ((C.sf==C.of)) goto L_1211d974;
  /* 1211d7fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211d800 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d803 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1211d809 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d80f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d815 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1211d81b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d821 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d825 jne 0x1211d832 */
  if (!C.zf) goto L_1211d832;
  /* 1211d827 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1211d82d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d830 je 0x1211d83c */
  if (C.zf) goto L_1211d83c;
L_1211d832:;
  /* 1211d832 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1211d837 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d83c:;
  /* 1211d83c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d842 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211d844 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1211d84a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1211d850 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1211d856 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1211d85c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1211d85f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211d861 je 0x1211d899 */
  if (C.zf) goto L_1211d899;
  /* 1211d863 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1211d869 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d86c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1211d872 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d87c jle 0x1211d888 */
  if ((C.zf||C.sf!=C.of)) goto L_1211d888;
  /* 1211d87e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1211d883 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d888:;
  /* 1211d888 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1211d88e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d891 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1211d897 jmp 0x1211d8db */
  goto L_1211d8db;
L_1211d899:;
  /* 1211d899 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1211d89f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1211d8a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211d8a5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1211d8ab cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d8b2 jle 0x1211d8be */
  if ((C.zf||C.sf!=C.of)) goto L_1211d8be;
  /* 1211d8b4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1211d8be:;
  /* 1211d8be mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1211d8c4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1211d8cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d8ce mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1211d8d4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1211d8db:;
  /* 1211d8db cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d8e2 jl 0x1211d8fd */
  if ((C.sf!=C.of)) goto L_1211d8fd;
  /* 1211d8e4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1211d8ea and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1211d8ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211d8ef jne 0x1211d8fd */
  if (!C.zf) goto L_1211d8fd;
  /* 1211d8f1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d8fb jle 0x1211d907 */
  if ((C.zf||C.sf!=C.of)) goto L_1211d907;
L_1211d8fd:;
  /* 1211d8fd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1211d902 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d907:;
  /* 1211d907 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d90d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d913 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1211d916 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d91c je 0x1211d928 */
  if (C.zf) goto L_1211d928;
  /* 1211d91e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1211d923 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d928:;
  /* 1211d928 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d92e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d934 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1211d93a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d940 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d946 jb 0x1211d83c */
  if (C.cf) goto L_1211d83c;
  /* 1211d94c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d952 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d958 je 0x1211d964 */
  if (C.zf) goto L_1211d964;
  /* 1211d95a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1211d95f jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d964:;
  /* 1211d964 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211d967 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d96c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211d96f jmp 0x1211d7e1 */
  goto L_1211d7e1;
L_1211d974:;
  /* 1211d974 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d977 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211d979 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d97f je 0x1211d98b */
  if (C.zf) goto L_1211d98b;
  /* 1211d981 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1211d986 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211d98b:;
  /* 1211d98b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211d98e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1211d994 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1211d99b jmp 0x1211d9a6 */
  goto L_1211d9a6;
L_1211d99d:;
  /* 1211d99d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d9a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211d9a3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1211d9a6:;
  /* 1211d9a6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d9aa jge 0x1211dbdd */
  if ((C.sf==C.of)) goto L_1211dbdd;
  /* 1211d9b0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1211d9ba mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1211d9c0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1211d9c6:;
  /* 1211d9c6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211d9cc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211d9cf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1211d9d5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1211d9db cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d9e1 je 0x1211db0a */
  if (C.zf) goto L_1211db0a;
  /* 1211d9e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211d9ea mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1211d9f0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211d9f7 je 0x1211db0a */
  if (C.zf) goto L_1211db0a;
  /* 1211d9fd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1211da03 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211da09 jb 0x1211da1e */
  if (C.cf) goto L_1211da1e;
  /* 1211da0b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1211da11 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211da16 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211da1c jb 0x1211da28 */
  if (C.cf) goto L_1211da28;
L_1211da1e:;
  /* 1211da1e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1211da23 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211da28:;
  /* 1211da28 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1211da2e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1211da34 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1211da3a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1211da40 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211da43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1211da46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211da49 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211da4e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1211da54:;
  /* 1211da54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211da57 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211da5d je 0x1211da7e */
  if (C.zf) goto L_1211da7e;
  /* 1211da5f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211da62 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211da68 jne 0x1211da6c */
  if (!C.zf) goto L_1211da6c;
  /* 1211da6a jmp 0x1211da7e */
  goto L_1211da7e;
L_1211da6c:;
  /* 1211da6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211da6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211da71 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1211da74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211da77 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211da79 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1211da7c jmp 0x1211da54 */
  goto L_1211da54;
L_1211da7e:;
  /* 1211da7e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211da81 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211da87 jne 0x1211da93 */
  if (!C.zf) goto L_1211da93;
  /* 1211da89 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1211da8e jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211da93:;
  /* 1211da93 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1211da99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211da9b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1211da9e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211daa1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1211daa7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211daae jle 0x1211daba */
  if ((C.zf||C.sf!=C.of)) goto L_1211daba;
  /* 1211dab0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1211daba:;
  /* 1211daba mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1211dac0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dac3 je 0x1211dacf */
  if (C.zf) goto L_1211dacf;
  /* 1211dac5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1211daca jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211dacf:;
  /* 1211dacf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1211dad5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211dad8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dade je 0x1211daea */
  if (C.zf) goto L_1211daea;
  /* 1211dae0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1211dae5 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211daea:;
  /* 1211daea mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1211daf0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1211daf6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1211dafc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211daff mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1211db05 jmp 0x1211d9c6 */
  goto L_1211d9c6;
L_1211db0a:;
  /* 1211db0a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211db11 je 0x1211db81 */
  if (C.zf) goto L_1211db81;
  /* 1211db13 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211db17 jge 0x1211db4b */
  if ((C.sf==C.of)) goto L_1211db4b;
  /* 1211db19 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211db1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211db21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211db23 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1211db29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211db2b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1211db31 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211db36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211db39 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211db3b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1211db41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211db43 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1211db49 jmp 0x1211db81 */
  goto L_1211db81;
L_1211db4b:;
  /* 1211db4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211db4e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211db51 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211db56 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211db58 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1211db5e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211db60 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1211db66 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211db69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211db6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1211db71 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1211db73 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1211db79 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211db7b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1211db81:;
  /* 1211db81 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1211db87 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211db8a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211db90 jne 0x1211dba4 */
  if (!C.zf) goto L_1211dba4;
  /* 1211db92 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211db95 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1211db9b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dba2 je 0x1211dbae */
  if (C.zf) goto L_1211dbae;
L_1211dba4:;
  /* 1211dba4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1211dba9 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211dbae:;
  /* 1211dbae mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1211dbb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211dbb7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dbbd je 0x1211dbc9 */
  if (C.zf) goto L_1211dbc9;
  /* 1211dbbf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1211dbc4 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211dbc9:;
  /* 1211dbc9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1211dbcf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dbd2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1211dbd8 jmp 0x1211d99d */
  goto L_1211d99d;
L_1211dbdd:;
  /* 1211dbdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211dbe0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1211dbe6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1211dbec cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dbf0 jne 0x1211dc0a */
  if (!C.zf) goto L_1211dc0a;
  /* 1211dbf2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211dbf5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1211dbfb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1211dc01 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dc08 je 0x1211dc11 */
  if (C.zf) goto L_1211dc11;
L_1211dc0a:;
  /* 1211dc0a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1211dc0f jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211dc11:;
  /* 1211dc11 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1211dc17 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dc1d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1211dc23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211dc26 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dc2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211dc2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211dc31 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1211dc33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211dc36 jmp 0x1211d73a */
  goto L_1211d73a;
L_1211dc3b:;
  /* 1211dc3b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1211dc41 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1211dc47 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dc49 jne 0x1211dc5c */
  if (!C.zf) goto L_1211dc5c;
  /* 1211dc4b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1211dc51 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1211dc57 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dc5a je 0x1211dc63 */
  if (C.zf) goto L_1211dc63;
L_1211dc5c:;
  /* 1211dc5c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1211dc61 jmp 0x1211dc79 */
  goto L_1211dc79;
L_1211dc63:;
  /* 1211dc63 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1211dc69 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dc6c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1211dc72 jmp 0x1211d6a3 */
  goto L_1211d6a3;
L_1211dc77:;
  /* 1211dc77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211dc79:;
  /* 1211dc79 mov esp, ebp */
  ESP = (EBP);
  /* 1211dc7b pop ebp */
  EBP = (pop32());
  /* 1211dc7c ret  */
  ESPCHK(0x1211d660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc80 @ 0x1211dc80 (250 bytes, 92 insns) */
void f_1211dc80(void) {
  FTRACE(0x1211dc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211dc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1211dc81 mov ebp, esp */
  EBP = (ESP);
  /* 1211dc83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211dc86 push ebx */
  push32((uint32_t)(EBX));
  /* 1211dc87 push esi */
  push32((uint32_t)(ESI));
  /* 1211dc88 push edi */
  push32((uint32_t)(EDI));
  /* 1211dc89 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1211dc8c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1211dc8f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1211dc92 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1211dc95:;
  /* 1211dc95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dc99 jne 0x1211dcb9 */
  if (!C.zf) goto L_1211dcb9;
  /* 1211dc9b push 0x1213f330 */
  push32((uint32_t)(0x1213f330u));
  /* 1211dca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211dca2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1211dca4 push 0x1213f324 */
  push32((uint32_t)(0x1213f324u));
  /* 1211dca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211dcab call 0x12116e30 */
  push32(0x1211dcb0u); f_12116e30();
  /* 1211dcb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dcb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dcb6 jne 0x1211dcb9 */
  if (!C.zf) goto L_1211dcb9;
  /* 1211dcb8 int3  */
  x86_unimpl("int3 @ 0x1211dcb8");
L_1211dcb9:;
  /* 1211dcb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211dcbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211dcbd jne 0x1211dc95 */
  if (!C.zf) goto L_1211dc95;
L_1211dcbf:;
  /* 1211dcbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dcc3 jne 0x1211dce3 */
  if (!C.zf) goto L_1211dce3;
  /* 1211dcc5 push 0x1213f314 */
  push32((uint32_t)(0x1213f314u));
  /* 1211dcca push 0 */
  push32((uint32_t)(0x0u));
  /* 1211dccc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1211dcce push 0x1213f324 */
  push32((uint32_t)(0x1213f324u));
  /* 1211dcd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211dcd5 call 0x12116e30 */
  push32(0x1211dcdau); f_12116e30();
  /* 1211dcda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dcdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dce0 jne 0x1211dce3 */
  if (!C.zf) goto L_1211dce3;
  /* 1211dce2 int3  */
  x86_unimpl("int3 @ 0x1211dce2");
L_1211dce3:;
  /* 1211dce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211dce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211dce7 jne 0x1211dcbf */
  if (!C.zf) goto L_1211dcbf;
  /* 1211dce9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dcec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1211dcf3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dcf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211dcf9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211dcfc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dcff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211dd02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1211dd04 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd07 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1211dd0e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211dd11 push ecx */
  push32((uint32_t)(ECX));
  /* 1211dd12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211dd15 push edx */
  push32((uint32_t)(EDX));
  /* 1211dd16 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd19 push eax */
  push32((uint32_t)(EAX));
  /* 1211dd1a call 0x1211ed00 */
  push32(0x1211dd1fu); f_1211ed00();
  /* 1211dd1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dd22 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1211dd25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd28 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211dd2b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211dd2e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd31 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1211dd34 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd37 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dd3b jl 0x1211dd5f */
  if ((C.sf!=C.of)) goto L_1211dd5f;
  /* 1211dd3d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211dd42 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1211dd45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211dd47 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211dd4d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1211dd50 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd53 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211dd55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dd58 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd5b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211dd5d jmp 0x1211dd70 */
  goto L_1211dd70;
L_1211dd5f:;
  /* 1211dd5f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211dd62 push edx */
  push32((uint32_t)(EDX));
  /* 1211dd63 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211dd65 call 0x1211ea80 */
  push32(0x1211dd6au); f_1211ea80();
  /* 1211dd6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dd6d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1211dd70:;
  /* 1211dd70 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211dd73 pop edi */
  EDI = (pop32());
  /* 1211dd74 pop esi */
  ESI = (pop32());
  /* 1211dd75 pop ebx */
  EBX = (pop32());
  /* 1211dd76 mov esp, ebp */
  ESP = (EBP);
  /* 1211dd78 pop ebp */
  EBP = (pop32());
  /* 1211dd79 ret  */
  ESPCHK(0x1211dc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd80 @ 0x1211dd80 (183 bytes, 58 insns) */
void f_1211dd80(void) {
  FTRACE(0x1211dd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211dd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1211dd81 mov ebp, esp */
  EBP = (ESP);
  /* 1211dd83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211dd86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211dd89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dd8c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dd91 ja 0x1211ddaa */
  if ((!C.cf&&!C.zf)) goto L_1211ddaa;
  /* 1211dd93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211dd96 mov edx, dword ptr [0x12141c98] */
  EDX = (r32((uint32_t)(0x12141c98)));
  /* 1211dd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211dd9e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1211dda2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1211dda5 jmp 0x1211de33 */
  goto L_1211de33;
L_1211ddaa:;
  /* 1211ddaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ddad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1211ddb0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211ddb6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211ddbc mov edx, dword ptr [0x12141c98] */
  EDX = (r32((uint32_t)(0x12141c98)));
  /* 1211ddc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ddc4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1211ddc8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1211ddcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ddcf je 0x1211ddf3 */
  if (C.zf) goto L_1211ddf3;
  /* 1211ddd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ddd4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1211ddd7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211dddd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1211dde0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1211dde3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1211dde6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1211ddea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1211ddf1 jmp 0x1211de04 */
  goto L_1211de04;
L_1211ddf3:;
  /* 1211ddf3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1211ddf6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1211ddf9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1211ddfd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1211de04:;
  /* 1211de04 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211de06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211de08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211de0a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1211de0d push ecx */
  push32((uint32_t)(ECX));
  /* 1211de0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211de11 push edx */
  push32((uint32_t)(EDX));
  /* 1211de12 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1211de15 push eax */
  push32((uint32_t)(EAX));
  /* 1211de16 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211de18 call 0x1211ffa0 */
  push32(0x1211de1du); f_1211ffa0();
  /* 1211de1d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211de20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211de22 jne 0x1211de28 */
  if (!C.zf) goto L_1211de28;
  /* 1211de24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211de26 jmp 0x1211de33 */
  goto L_1211de33;
L_1211de28:;
  /* 1211de28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211de2b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211de30 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1211de33:;
  /* 1211de33 mov esp, ebp */
  ESP = (EBP);
  /* 1211de35 pop ebp */
  EBP = (pop32());
  /* 1211de36 ret  */
  ESPCHK(0x1211dd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de40 @ 0x1211de40 (836 bytes, 238 insns) */
void f_1211de40(void) {
  FTRACE(0x1211de40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211de40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211de41 mov ebp, esp */
  EBP = (ESP);
  /* 1211de43 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211de46 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211de48 call 0x1211b770 */
  push32(0x1211de4du); f_1211b770();
  /* 1211de4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211de50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211de53 push eax */
  push32((uint32_t)(EAX));
  /* 1211de54 call 0x1211e190 */
  push32(0x1211de59u); f_1211e190();
  /* 1211de59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211de5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1211de5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211de62 cmp ecx, dword ptr [0x12144ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12144ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211de68 jne 0x1211de7b */
  if (!C.zf) goto L_1211de7b;
  /* 1211de6a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211de6c call 0x1211b810 */
  push32(0x1211de71u); f_1211b810();
  /* 1211de71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211de74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211de76 jmp 0x1211e180 */
  goto L_1211e180;
L_1211de7b:;
  /* 1211de7b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211de7f jne 0x1211de9c */
  if (!C.zf) goto L_1211de9c;
  /* 1211de81 call 0x1211e270 */
  push32(0x1211de86u); f_1211e270();
  /* 1211de86 call 0x1211e2f0 */
  push32(0x1211de8bu); f_1211e2f0();
  /* 1211de8b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211de8d call 0x1211b810 */
  push32(0x1211de92u); f_1211b810();
  /* 1211de92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211de95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211de97 jmp 0x1211e180 */
  goto L_1211e180;
L_1211de9c:;
  /* 1211de9c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211dea3 jmp 0x1211deae */
  goto L_1211deae;
L_1211dea5:;
  /* 1211dea5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211dea8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211deab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211deae:;
  /* 1211deae cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211deb2 jae 0x1211dfff */
  if (!C.cf) goto L_1211dfff;
  /* 1211deb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211debb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211debe mov ecx, dword ptr [eax + 0x12141eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12141eb8)));
  /* 1211dec4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dec7 jne 0x1211dffa */
  if (!C.zf) goto L_1211dffa;
  /* 1211decd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1211ded4 jmp 0x1211dedf */
  goto L_1211dedf;
L_1211ded6:;
  /* 1211ded6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ded9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dedc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1211dedf:;
  /* 1211dedf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dee6 jae 0x1211def4 */
  if (!C.cf) goto L_1211def4;
  /* 1211dee8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211deeb mov byte ptr [eax + 0x12145060], 0 */
  w8((uint32_t)(EAX + 0x12145060), (0x0u));
  /* 1211def2 jmp 0x1211ded6 */
  goto L_1211ded6;
L_1211def4:;
  /* 1211def4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1211defb jmp 0x1211df06 */
  goto L_1211df06;
L_1211defd:;
  /* 1211defd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211df00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211df03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1211df06:;
  /* 1211df06 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211df0a jae 0x1211df87 */
  if (!C.cf) goto L_1211df87;
  /* 1211df0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211df0f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211df12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211df15 lea ecx, [edx + eax*8 + 0x12141ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12141ec8));
  /* 1211df1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211df1f jmp 0x1211df2a */
  goto L_1211df2a;
L_1211df21:;
  /* 1211df21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211df24 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211df27 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1211df2a:;
  /* 1211df2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211df2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211df2f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1211df31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211df33 je 0x1211df82 */
  if (C.zf) goto L_1211df82;
  /* 1211df35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211df38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211df3a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1211df3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211df3f je 0x1211df82 */
  if (C.zf) goto L_1211df82;
  /* 1211df41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211df44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211df46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211df48 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1211df4b jmp 0x1211df56 */
  goto L_1211df56;
L_1211df4d:;
  /* 1211df4d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211df50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211df53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1211df56:;
  /* 1211df56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211df59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211df5b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1211df5e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211df61 ja 0x1211df80 */
  if ((!C.cf&&!C.zf)) goto L_1211df80;
  /* 1211df63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211df66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211df69 mov dl, byte ptr [eax + 0x12145061] */
  DL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1211df6f or dl, byte ptr [ecx + 0x12141eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12141eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1211df75 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211df78 mov byte ptr [eax + 0x12145061], dl */
  w8((uint32_t)(EAX + 0x12145061), (DL));
  /* 1211df7e jmp 0x1211df4d */
  goto L_1211df4d;
L_1211df80:;
  /* 1211df80 jmp 0x1211df21 */
  goto L_1211df21;
L_1211df82:;
  /* 1211df82 jmp 0x1211defd */
  goto L_1211defd;
L_1211df87:;
  /* 1211df87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211df8a mov dword ptr [0x12144ec4], ecx */
  w32((uint32_t)(0x12144ec4), (ECX));
  /* 1211df90 mov dword ptr [0x12144f4c], 1 */
  w32((uint32_t)(0x12144f4c), (0x1u));
  /* 1211df9a mov edx, dword ptr [0x12144ec4] */
  EDX = (r32((uint32_t)(0x12144ec4)));
  /* 1211dfa0 push edx */
  push32((uint32_t)(EDX));
  /* 1211dfa1 call 0x1211e1f0 */
  push32(0x1211dfa6u); f_1211e1f0();
  /* 1211dfa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dfa9 mov dword ptr [0x12145164], eax */
  w32((uint32_t)(0x12145164), (EAX));
  /* 1211dfae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1211dfb5 jmp 0x1211dfc0 */
  goto L_1211dfc0;
L_1211dfb7:;
  /* 1211dfb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211dfba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dfbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1211dfc0:;
  /* 1211dfc0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211dfc4 jae 0x1211dfe4 */
  if (!C.cf) goto L_1211dfe4;
  /* 1211dfc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211dfc9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211dfcc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211dfcf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211dfd2 mov cx, word ptr [ecx + eax*2 + 0x12141ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12141ebc)));
  /* 1211dfda mov word ptr [edx*2 + 0x12144f40], cx */
  w16((uint32_t)(EDX*2 + 0x12144f40), (CX));
  /* 1211dfe2 jmp 0x1211dfb7 */
  goto L_1211dfb7;
L_1211dfe4:;
  /* 1211dfe4 call 0x1211e2f0 */
  push32(0x1211dfe9u); f_1211e2f0();
  /* 1211dfe9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211dfeb call 0x1211b810 */
  push32(0x1211dff0u); f_1211b810();
  /* 1211dff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211dff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211dff5 jmp 0x1211e180 */
  goto L_1211e180;
L_1211dffa:;
  /* 1211dffa jmp 0x1211dea5 */
  goto L_1211dea5;
L_1211dfff:;
  /* 1211dfff lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1211e002 push edx */
  push32((uint32_t)(EDX));
  /* 1211e003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e006 push eax */
  push32((uint32_t)(EAX));
  /* 1211e007 call dword ptr [0x12146344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146344))), 0x1211e00du);
  /* 1211e00d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e010 jne 0x1211e152 */
  if (!C.zf) goto L_1211e152;
  /* 1211e016 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1211e01d jmp 0x1211e028 */
  goto L_1211e028;
L_1211e01f:;
  /* 1211e01f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e022 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e025 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1211e028:;
  /* 1211e028 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e02f jae 0x1211e03d */
  if (!C.cf) goto L_1211e03d;
  /* 1211e031 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e034 mov byte ptr [edx + 0x12145060], 0 */
  w8((uint32_t)(EDX + 0x12145060), (0x0u));
  /* 1211e03b jmp 0x1211e01f */
  goto L_1211e01f;
L_1211e03d:;
  /* 1211e03d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e040 mov dword ptr [0x12144ec4], eax */
  w32((uint32_t)(0x12144ec4), (EAX));
  /* 1211e045 mov dword ptr [0x12145164], 0 */
  w32((uint32_t)(0x12145164), (0x0u));
  /* 1211e04f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e053 jbe 0x1211e10e */
  if ((C.cf||C.zf)) goto L_1211e10e;
  /* 1211e059 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1211e05c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1211e05f jmp 0x1211e06a */
  goto L_1211e06a;
L_1211e061:;
  /* 1211e061 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211e064 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e067 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1211e06a:;
  /* 1211e06a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211e06d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211e06f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1211e071 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211e073 je 0x1211e0bc */
  if (C.zf) goto L_1211e0bc;
  /* 1211e075 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211e078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211e07a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1211e07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211e07f je 0x1211e0bc */
  if (C.zf) goto L_1211e0bc;
  /* 1211e081 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211e084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e086 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211e088 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1211e08b jmp 0x1211e096 */
  goto L_1211e096;
L_1211e08d:;
  /* 1211e08d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e090 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e093 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1211e096:;
  /* 1211e096 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211e099 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e09b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1211e09e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e0a1 ja 0x1211e0ba */
  if ((!C.cf&&!C.zf)) goto L_1211e0ba;
  /* 1211e0a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e0a6 mov cl, byte ptr [eax + 0x12145061] */
  CL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1211e0ac or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1211e0af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e0b2 mov byte ptr [edx + 0x12145061], cl */
  w8((uint32_t)(EDX + 0x12145061), (CL));
  /* 1211e0b8 jmp 0x1211e08d */
  goto L_1211e08d;
L_1211e0ba:;
  /* 1211e0ba jmp 0x1211e061 */
  goto L_1211e061;
L_1211e0bc:;
  /* 1211e0bc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1211e0c3 jmp 0x1211e0ce */
  goto L_1211e0ce;
L_1211e0c5:;
  /* 1211e0c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e0c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e0cb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1211e0ce:;
  /* 1211e0ce cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e0d5 jae 0x1211e0ee */
  if (!C.cf) goto L_1211e0ee;
  /* 1211e0d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e0da mov dl, byte ptr [ecx + 0x12145061] */
  DL = (r8((uint32_t)(ECX + 0x12145061)));
  /* 1211e0e0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1211e0e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211e0e6 mov byte ptr [eax + 0x12145061], dl */
  w8((uint32_t)(EAX + 0x12145061), (DL));
  /* 1211e0ec jmp 0x1211e0c5 */
  goto L_1211e0c5;
L_1211e0ee:;
  /* 1211e0ee mov ecx, dword ptr [0x12144ec4] */
  ECX = (r32((uint32_t)(0x12144ec4)));
  /* 1211e0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e0f5 call 0x1211e1f0 */
  push32(0x1211e0fau); f_1211e1f0();
  /* 1211e0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e0fd mov dword ptr [0x12145164], eax */
  w32((uint32_t)(0x12145164), (EAX));
  /* 1211e102 mov dword ptr [0x12144f4c], 1 */
  w32((uint32_t)(0x12144f4c), (0x1u));
  /* 1211e10c jmp 0x1211e118 */
  goto L_1211e118;
L_1211e10e:;
  /* 1211e10e mov dword ptr [0x12144f4c], 0 */
  w32((uint32_t)(0x12144f4c), (0x0u));
L_1211e118:;
  /* 1211e118 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1211e11f jmp 0x1211e12a */
  goto L_1211e12a;
L_1211e121:;
  /* 1211e121 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211e124 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e127 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1211e12a:;
  /* 1211e12a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e12e jae 0x1211e13f */
  if (!C.cf) goto L_1211e13f;
  /* 1211e130 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211e133 mov word ptr [eax*2 + 0x12144f40], 0 */
  w16((uint32_t)(EAX*2 + 0x12144f40), (0x0u));
  /* 1211e13d jmp 0x1211e121 */
  goto L_1211e121;
L_1211e13f:;
  /* 1211e13f call 0x1211e2f0 */
  push32(0x1211e144u); f_1211e2f0();
  /* 1211e144 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211e146 call 0x1211b810 */
  push32(0x1211e14bu); f_1211b810();
  /* 1211e14b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e14e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211e150 jmp 0x1211e180 */
  goto L_1211e180;
L_1211e152:;
  /* 1211e152 cmp dword ptr [0x121439d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e159 je 0x1211e173 */
  if (C.zf) goto L_1211e173;
  /* 1211e15b call 0x1211e270 */
  push32(0x1211e160u); f_1211e270();
  /* 1211e160 call 0x1211e2f0 */
  push32(0x1211e165u); f_1211e2f0();
  /* 1211e165 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211e167 call 0x1211b810 */
  push32(0x1211e16cu); f_1211b810();
  /* 1211e16c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e16f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211e171 jmp 0x1211e180 */
  goto L_1211e180;
L_1211e173:;
  /* 1211e173 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211e175 call 0x1211b810 */
  push32(0x1211e17au); f_1211b810();
  /* 1211e17a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e17d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1211e180:;
  /* 1211e180 mov esp, ebp */
  ESP = (EBP);
  /* 1211e182 pop ebp */
  EBP = (pop32());
  /* 1211e183 ret  */
  ESPCHK(0x1211de40u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1211e190 (89 bytes, 21 insns) */
void f_1211e190(void) {
  FTRACE(0x1211e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e191 mov ebp, esp */
  EBP = (ESP);
  /* 1211e193 mov dword ptr [0x121439d8], 0 */
  w32((uint32_t)(0x121439d8), (0x0u));
  /* 1211e19d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e1a1 jne 0x1211e1b5 */
  if (!C.zf) goto L_1211e1b5;
  /* 1211e1a3 mov dword ptr [0x121439d8], 1 */
  w32((uint32_t)(0x121439d8), (0x1u));
  /* 1211e1ad call dword ptr [0x1214633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214633c))), 0x1211e1b3u);
  /* 1211e1b3 jmp 0x1211e1e7 */
  goto L_1211e1e7;
L_1211e1b5:;
  /* 1211e1b5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e1b9 jne 0x1211e1cd */
  if (!C.zf) goto L_1211e1cd;
  /* 1211e1bb mov dword ptr [0x121439d8], 1 */
  w32((uint32_t)(0x121439d8), (0x1u));
  /* 1211e1c5 call dword ptr [0x1214634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214634c))), 0x1211e1cbu);
  /* 1211e1cb jmp 0x1211e1e7 */
  goto L_1211e1e7;
L_1211e1cd:;
  /* 1211e1cd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e1d1 jne 0x1211e1e4 */
  if (!C.zf) goto L_1211e1e4;
  /* 1211e1d3 mov dword ptr [0x121439d8], 1 */
  w32((uint32_t)(0x121439d8), (0x1u));
  /* 1211e1dd mov eax, dword ptr [0x121439f8] */
  EAX = (r32((uint32_t)(0x121439f8)));
  /* 1211e1e2 jmp 0x1211e1e7 */
  goto L_1211e1e7;
L_1211e1e4:;
  /* 1211e1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1211e1e7:;
  /* 1211e1e7 pop ebp */
  EBP = (pop32());
  /* 1211e1e8 ret  */
  ESPCHK(0x1211e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x1211e1f0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1211e1f0(void) {
  FTRACE(0x1211e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1211e1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e1f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211e1fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e1fd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e203 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211e206 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e20a ja 0x1211e23a */
  if ((!C.cf&&!C.zf)) goto L_1211e23a;
  /* 1211e20c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e20f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e211 mov dl, byte ptr [eax + 0x1211e254] */
  DL = (r8((uint32_t)(EAX + 0x1211e254)));
  /* 1211e217 jmp dword ptr [edx*4 + 0x1211e240] */
  switch (EDX) {
    case 0: goto L_1211e21e;
    case 1: goto L_1211e225;
    case 2: goto L_1211e22c;
    case 3: goto L_1211e233;
    case 4: goto L_1211e23a;
    default: x86_unimpl("switch@0x1211e217 out of table"); return;
  }
L_1211e21e:;
  /* 1211e21e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1211e223 jmp 0x1211e23c */
  goto L_1211e23c;
L_1211e225:;
  /* 1211e225 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1211e22a jmp 0x1211e23c */
  goto L_1211e23c;
L_1211e22c:;
  /* 1211e22c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1211e231 jmp 0x1211e23c */
  goto L_1211e23c;
L_1211e233:;
  /* 1211e233 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1211e238 jmp 0x1211e23c */
  goto L_1211e23c;
L_1211e23a:;
  /* 1211e23a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211e23c:;
  /* 1211e23c mov esp, ebp */
  ESP = (EBP);
  /* 1211e23e pop ebp */
  EBP = (pop32());
  /* 1211e23f ret  */
  ESPCHK(0x1211e1f0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1211e270 (116 bytes, 29 insns) */
void f_1211e270(void) {
  FTRACE(0x1211e270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e270 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e271 mov ebp, esp */
  EBP = (ESP);
  /* 1211e273 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e274 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211e27b jmp 0x1211e286 */
  goto L_1211e286;
L_1211e27d:;
  /* 1211e27d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e283 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211e286:;
  /* 1211e286 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e28d jge 0x1211e29b */
  if ((C.sf==C.of)) goto L_1211e29b;
  /* 1211e28f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e292 mov byte ptr [ecx + 0x12145060], 0 */
  w8((uint32_t)(ECX + 0x12145060), (0x0u));
  /* 1211e299 jmp 0x1211e27d */
  goto L_1211e27d;
L_1211e29b:;
  /* 1211e29b mov dword ptr [0x12144ec4], 0 */
  w32((uint32_t)(0x12144ec4), (0x0u));
  /* 1211e2a5 mov dword ptr [0x12144f4c], 0 */
  w32((uint32_t)(0x12144f4c), (0x0u));
  /* 1211e2af mov dword ptr [0x12145164], 0 */
  w32((uint32_t)(0x12145164), (0x0u));
  /* 1211e2b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211e2c0 jmp 0x1211e2cb */
  goto L_1211e2cb;
L_1211e2c2:;
  /* 1211e2c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e2c5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e2c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211e2cb:;
  /* 1211e2cb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e2cf jge 0x1211e2e0 */
  if ((C.sf==C.of)) goto L_1211e2e0;
  /* 1211e2d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e2d4 mov word ptr [eax*2 + 0x12144f40], 0 */
  w16((uint32_t)(EAX*2 + 0x12144f40), (0x0u));
  /* 1211e2de jmp 0x1211e2c2 */
  goto L_1211e2c2;
L_1211e2e0:;
  /* 1211e2e0 mov esp, ebp */
  ESP = (EBP);
  /* 1211e2e2 pop ebp */
  EBP = (pop32());
  /* 1211e2e3 ret  */
  ESPCHK(0x1211e270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2f0 @ 0x1211e2f0 (770 bytes, 175 insns) */
void f_1211e2f0(void) {
  FTRACE(0x1211e2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1211e2f3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e2f9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1211e2ff push eax */
  push32((uint32_t)(EAX));
  /* 1211e300 mov ecx, dword ptr [0x12144ec4] */
  ECX = (r32((uint32_t)(0x12144ec4)));
  /* 1211e306 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e307 call dword ptr [0x12146344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146344))), 0x1211e30du);
  /* 1211e30d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e310 jne 0x1211e529 */
  if (!C.zf) goto L_1211e529;
  /* 1211e316 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1211e320 jmp 0x1211e331 */
  goto L_1211e331;
L_1211e322:;
  /* 1211e322 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e328 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e32b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1211e331:;
  /* 1211e331 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e33b jae 0x1211e352 */
  if (!C.cf) goto L_1211e352;
  /* 1211e33d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e343 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1211e349 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1211e350 jmp 0x1211e322 */
  goto L_1211e322;
L_1211e352:;
  /* 1211e352 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1211e359 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1211e35f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211e362 jmp 0x1211e36d */
  goto L_1211e36d;
L_1211e364:;
  /* 1211e364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e367 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e36a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211e36d:;
  /* 1211e36d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e370 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e372 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211e374 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211e376 je 0x1211e3b8 */
  if (C.zf) goto L_1211e3b8;
  /* 1211e378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e37b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211e37d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1211e37f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1211e385 jmp 0x1211e396 */
  goto L_1211e396;
L_1211e387:;
  /* 1211e387 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e38d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e390 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1211e396:;
  /* 1211e396 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211e399 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211e39b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1211e39e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e3a4 ja 0x1211e3b6 */
  if ((!C.cf&&!C.zf)) goto L_1211e3b6;
  /* 1211e3a6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e3ac mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1211e3b4 jmp 0x1211e387 */
  goto L_1211e387;
L_1211e3b6:;
  /* 1211e3b6 jmp 0x1211e364 */
  goto L_1211e364;
L_1211e3b8:;
  /* 1211e3b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211e3ba mov eax, dword ptr [0x12145164] */
  EAX = (r32((uint32_t)(0x12145164)));
  /* 1211e3bf push eax */
  push32((uint32_t)(EAX));
  /* 1211e3c0 mov ecx, dword ptr [0x12144ec4] */
  ECX = (r32((uint32_t)(0x12144ec4)));
  /* 1211e3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e3c7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1211e3cd push edx */
  push32((uint32_t)(EDX));
  /* 1211e3ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1211e3d3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1211e3d9 push eax */
  push32((uint32_t)(EAX));
  /* 1211e3da push 1 */
  push32((uint32_t)(0x1u));
  /* 1211e3dc call 0x1211ffa0 */
  push32(0x1211e3e1u); f_1211ffa0();
  /* 1211e3e1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e3e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211e3e6 mov ecx, dword ptr [0x12144ec4] */
  ECX = (r32((uint32_t)(0x12144ec4)));
  /* 1211e3ec push ecx */
  push32((uint32_t)(ECX));
  /* 1211e3ed push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1211e3f2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1211e3f8 push edx */
  push32((uint32_t)(EDX));
  /* 1211e3f9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1211e3fe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1211e404 push eax */
  push32((uint32_t)(EAX));
  /* 1211e405 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1211e40a mov ecx, dword ptr [0x12145164] */
  ECX = (r32((uint32_t)(0x12145164)));
  /* 1211e410 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e411 call 0x12120160 */
  push32(0x1211e416u); f_12120160();
  /* 1211e416 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211e41b mov edx, dword ptr [0x12144ec4] */
  EDX = (r32((uint32_t)(0x12144ec4)));
  /* 1211e421 push edx */
  push32((uint32_t)(EDX));
  /* 1211e422 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1211e427 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1211e42d push eax */
  push32((uint32_t)(EAX));
  /* 1211e42e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1211e433 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1211e439 push ecx */
  push32((uint32_t)(ECX));
  /* 1211e43a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1211e43f mov edx, dword ptr [0x12145164] */
  EDX = (r32((uint32_t)(0x12145164)));
  /* 1211e445 push edx */
  push32((uint32_t)(EDX));
  /* 1211e446 call 0x12120160 */
  push32(0x1211e44bu); f_12120160();
  /* 1211e44b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e44e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1211e458 jmp 0x1211e469 */
  goto L_1211e469;
L_1211e45a:;
  /* 1211e45a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e463 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1211e469:;
  /* 1211e469 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e473 jae 0x1211e524 */
  if (!C.cf) goto L_1211e524;
  /* 1211e479 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e47f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e481 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1211e489 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1211e48c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211e48e je 0x1211e4c6 */
  if (C.zf) goto L_1211e4c6;
  /* 1211e490 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e496 mov cl, byte ptr [eax + 0x12145061] */
  CL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1211e49c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1211e49f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4a5 mov byte ptr [edx + 0x12145061], cl */
  w8((uint32_t)(EDX + 0x12145061), (CL));
  /* 1211e4ab mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4b1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4b7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1211e4be mov byte ptr [eax + 0x12144f60], dl */
  w8((uint32_t)(EAX + 0x12144f60), (DL));
  /* 1211e4c4 jmp 0x1211e51f */
  goto L_1211e51f;
L_1211e4c6:;
  /* 1211e4c6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211e4ce mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1211e4d6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1211e4d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211e4db je 0x1211e512 */
  if (C.zf) goto L_1211e512;
  /* 1211e4dd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4e3 mov al, byte ptr [edx + 0x12145061] */
  AL = (r8((uint32_t)(EDX + 0x12145061)));
  /* 1211e4e9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1211e4eb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4f1 mov byte ptr [ecx + 0x12145061], al */
  w8((uint32_t)(ECX + 0x12145061), (AL));
  /* 1211e4f7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e4fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e503 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1211e50a mov byte ptr [edx + 0x12144f60], cl */
  w8((uint32_t)(EDX + 0x12144f60), (CL));
  /* 1211e510 jmp 0x1211e51f */
  goto L_1211e51f;
L_1211e512:;
  /* 1211e512 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e518 mov byte ptr [edx + 0x12144f60], 0 */
  w8((uint32_t)(EDX + 0x12144f60), (0x0u));
L_1211e51f:;
  /* 1211e51f jmp 0x1211e45a */
  goto L_1211e45a;
L_1211e524:;
  /* 1211e524 jmp 0x1211e5ee */
  goto L_1211e5ee;
L_1211e529:;
  /* 1211e529 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1211e533 jmp 0x1211e544 */
  goto L_1211e544;
L_1211e535:;
  /* 1211e535 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e53b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e53e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1211e544:;
  /* 1211e544 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e54e jae 0x1211e5ee */
  if (!C.cf) goto L_1211e5ee;
  /* 1211e554 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e55b jb 0x1211e598 */
  if (C.cf) goto L_1211e598;
  /* 1211e55d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e564 ja 0x1211e598 */
  if ((!C.cf&&!C.zf)) goto L_1211e598;
  /* 1211e566 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e56c mov dl, byte ptr [ecx + 0x12145061] */
  DL = (r8((uint32_t)(ECX + 0x12145061)));
  /* 1211e572 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1211e575 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e57b mov byte ptr [eax + 0x12145061], dl */
  w8((uint32_t)(EAX + 0x12145061), (DL));
  /* 1211e581 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e587 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e58a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e590 mov byte ptr [edx + 0x12144f60], cl */
  w8((uint32_t)(EDX + 0x12144f60), (CL));
  /* 1211e596 jmp 0x1211e5e9 */
  goto L_1211e5e9;
L_1211e598:;
  /* 1211e598 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e59f jb 0x1211e5dc */
  if (C.cf) goto L_1211e5dc;
  /* 1211e5a1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e5a8 ja 0x1211e5dc */
  if ((!C.cf&&!C.zf)) goto L_1211e5dc;
  /* 1211e5aa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e5b0 mov cl, byte ptr [eax + 0x12145061] */
  CL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1211e5b6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1211e5b9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e5bf mov byte ptr [edx + 0x12145061], cl */
  w8((uint32_t)(EDX + 0x12145061), (CL));
  /* 1211e5c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e5cb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e5ce mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e5d4 mov byte ptr [ecx + 0x12144f60], al */
  w8((uint32_t)(ECX + 0x12144f60), (AL));
  /* 1211e5da jmp 0x1211e5e9 */
  goto L_1211e5e9;
L_1211e5dc:;
  /* 1211e5dc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1211e5e2 mov byte ptr [edx + 0x12144f60], 0 */
  w8((uint32_t)(EDX + 0x12144f60), (0x0u));
L_1211e5e9:;
  /* 1211e5e9 jmp 0x1211e535 */
  goto L_1211e535;
L_1211e5ee:;
  /* 1211e5ee mov esp, ebp */
  ESP = (EBP);
  /* 1211e5f0 pop ebp */
  EBP = (pop32());
  /* 1211e5f1 ret  */
  ESPCHK(0x1211e2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x1211e600 (23 bytes, 9 insns) */
void f_1211e600(void) {
  FTRACE(0x1211e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e600 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e601 mov ebp, esp */
  EBP = (ESP);
  /* 1211e603 cmp dword ptr [0x12144f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12144f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e60a je 0x1211e613 */
  if (C.zf) goto L_1211e613;
  /* 1211e60c mov eax, dword ptr [0x12144ec4] */
  EAX = (r32((uint32_t)(0x12144ec4)));
  /* 1211e611 jmp 0x1211e615 */
  goto L_1211e615;
L_1211e613:;
  /* 1211e613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211e615:;
  /* 1211e615 pop ebp */
  EBP = (pop32());
  /* 1211e616 ret  */
  ESPCHK(0x1211e600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e620 @ 0x1211e620 (34 bytes, 10 insns) */
void f_1211e620(void) {
  FTRACE(0x1211e620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e620 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e621 mov ebp, esp */
  EBP = (ESP);
  /* 1211e623 cmp dword ptr [0x12145310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e62a jne 0x1211e640 */
  if (!C.zf) goto L_1211e640;
  /* 1211e62c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1211e62e call 0x1211de40 */
  push32(0x1211e633u); f_1211de40();
  /* 1211e633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e636 mov dword ptr [0x12145310], 1 */
  w32((uint32_t)(0x12145310), (0x1u));
L_1211e640:;
  /* 1211e640 pop ebp */
  EBP = (pop32());
  /* 1211e641 ret  */
  ESPCHK(0x1211e620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e650 @ 0x1211e650 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1211e650(void) {
  FTRACE(0x1211e650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e650 push ebp */
  push32((uint32_t)(EBP));
  /* 1211e651 mov ebp, esp */
  EBP = (ESP);
  /* 1211e653 push edi */
  push32((uint32_t)(EDI));
  /* 1211e654 push esi */
  push32((uint32_t)(ESI));
  /* 1211e655 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1211e658 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211e65b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e65e mov eax, ecx */
  EAX = (ECX);
  /* 1211e660 mov edx, ecx */
  EDX = (ECX);
  /* 1211e662 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e664 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e666 jbe 0x1211e670 */
  if ((C.cf||C.zf)) goto L_1211e670;
  /* 1211e668 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e66a jb 0x1211e7e8 */
  if (C.cf) goto L_1211e7e8;
L_1211e670:;
  /* 1211e670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1211e676 jne 0x1211e68c */
  if (!C.zf) goto L_1211e68c;
  /* 1211e678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e67b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1211e67e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e681 jb 0x1211e6ac */
  if (C.cf) goto L_1211e6ac;
  /* 1211e683 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e685 jmp dword ptr [edx*4 + 0x1211e798] */
  switch (EDX) {
    case 0: goto L_1211e7a8;
    case 1: goto L_1211e7b0;
    case 2: goto L_1211e7bc;
    case 3: goto L_1211e7d0;
    default: x86_unimpl("switch@0x1211e685 out of table"); return;
  }
L_1211e68c:;
  /* 1211e68c mov eax, edi */
  EAX = (EDI);
  /* 1211e68e mov edx, 3 */
  EDX = (0x3u);
  /* 1211e693 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e696 jb 0x1211e6a4 */
  if (C.cf) goto L_1211e6a4;
  /* 1211e698 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1211e69b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e69d jmp dword ptr [eax*4 + 0x1211e6b0] */
  switch (EAX) {
    case 1: goto L_1211e6c0;
    case 2: goto L_1211e6ec;
    case 3: goto L_1211e710;
    default: x86_unimpl("switch@0x1211e69d out of table"); return;
  }
L_1211e6a4:;
  /* 1211e6a4 jmp dword ptr [ecx*4 + 0x1211e7a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1211e7a8)))); return;
  /* 1211e6ab nop  */
  /* nop */
L_1211e6ac:;
  /* 1211e6ac jmp dword ptr [ecx*4 + 0x1211e72c] */
  switch (ECX) {
    case 0: goto L_1211e78f;
    case 1: goto L_1211e77c;
    case 2: goto L_1211e774;
    case 3: goto L_1211e76c;
    case 4: goto L_1211e764;
    case 5: goto L_1211e75c;
    case 6: goto L_1211e754;
    case 7: goto L_1211e74c;
    default: x86_unimpl("switch@0x1211e6ac out of table"); return;
  }
  /* 1211e6b3 nop  */
  /* nop */
L_1211e6c0:;
  /* 1211e6c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e6c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211e6c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211e6c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211e6c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211e6cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211e6cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e6d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211e6d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e6d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e6db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e6de jb 0x1211e6ac */
  if (C.cf) goto L_1211e6ac;
  /* 1211e6e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e6e2 jmp dword ptr [edx*4 + 0x1211e798] */
  switch (EDX) {
    case 0: goto L_1211e7a8;
    case 1: goto L_1211e7b0;
    case 2: goto L_1211e7bc;
    case 3: goto L_1211e7d0;
    default: x86_unimpl("switch@0x1211e6e2 out of table"); return;
  }
  /* 1211e6e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211e6ec:;
  /* 1211e6ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e6ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211e6f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211e6f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211e6f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e6f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211e6fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e6fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e701 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e704 jb 0x1211e6ac */
  if (C.cf) goto L_1211e6ac;
  /* 1211e706 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e708 jmp dword ptr [edx*4 + 0x1211e798] */
  switch (EDX) {
    case 0: goto L_1211e7a8;
    case 1: goto L_1211e7b0;
    case 2: goto L_1211e7bc;
    case 3: goto L_1211e7d0;
    default: x86_unimpl("switch@0x1211e708 out of table"); return;
  }
  /* 1211e70f nop  */
  /* nop */
L_1211e710:;
  /* 1211e710 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e712 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211e714 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211e716 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1211e717 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e71a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211e71b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e71e jb 0x1211e6ac */
  if (C.cf) goto L_1211e6ac;
  /* 1211e720 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e722 jmp dword ptr [edx*4 + 0x1211e798] */
  switch (EDX) {
    case 0: goto L_1211e7a8;
    case 1: goto L_1211e7b0;
    case 2: goto L_1211e7bc;
    case 3: goto L_1211e7d0;
    default: x86_unimpl("switch@0x1211e722 out of table"); return;
  }
  /* 1211e729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211e74c:;
  /* 1211e74c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1211e750 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1211e754:;
  /* 1211e754 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1211e758 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1211e75c:;
  /* 1211e75c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1211e760 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1211e764:;
  /* 1211e764 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1211e768 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1211e76c:;
  /* 1211e76c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1211e770 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1211e774:;
  /* 1211e774 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1211e778 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1211e77c:;
  /* 1211e77c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1211e780 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1211e784 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1211e78b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e78d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1211e78f:;
  /* 1211e78f jmp dword ptr [edx*4 + 0x1211e798] */
  switch (EDX) {
    case 0: goto L_1211e7a8;
    case 1: goto L_1211e7b0;
    case 2: goto L_1211e7bc;
    case 3: goto L_1211e7d0;
    default: x86_unimpl("switch@0x1211e78f out of table"); return;
  }
  /* 1211e796 mov edi, edi */
  EDI = (EDI);
L_1211e7a8:;
  /* 1211e7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e7ab pop esi */
  ESI = (pop32());
  /* 1211e7ac pop edi */
  EDI = (pop32());
  /* 1211e7ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e7ae ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e7af nop  */
  /* nop */
L_1211e7b0:;
  /* 1211e7b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211e7b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211e7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e7b7 pop esi */
  ESI = (pop32());
  /* 1211e7b8 pop edi */
  EDI = (pop32());
  /* 1211e7b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e7ba ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e7bb nop  */
  /* nop */
L_1211e7bc:;
  /* 1211e7bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211e7be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211e7c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211e7c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211e7c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e7c9 pop esi */
  ESI = (pop32());
  /* 1211e7ca pop edi */
  EDI = (pop32());
  /* 1211e7cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e7cc ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e7cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211e7d0:;
  /* 1211e7d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211e7d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211e7d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211e7d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211e7da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211e7dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211e7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e7e3 pop esi */
  ESI = (pop32());
  /* 1211e7e4 pop edi */
  EDI = (pop32());
  /* 1211e7e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e7e6 ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e7e7 nop  */
  /* nop */
L_1211e7e8:;
  /* 1211e7e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1211e7ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1211e7f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1211e7f6 jne 0x1211e81c */
  if (!C.zf) goto L_1211e81c;
  /* 1211e7f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e7fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1211e7fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e801 jb 0x1211e810 */
  if (C.cf) goto L_1211e810;
  /* 1211e803 std  */
  C.df=1;
  /* 1211e804 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e806 cld  */
  C.df=0;
  /* 1211e807 jmp dword ptr [edx*4 + 0x1211e930] */
  switch (EDX) {
    case 0: goto L_1211e940;
    case 1: goto L_1211e948;
    case 2: goto L_1211e958;
    case 3: goto L_1211e96c;
    default: x86_unimpl("switch@0x1211e807 out of table"); return;
  }
  /* 1211e80e mov edi, edi */
  EDI = (EDI);
L_1211e810:;
  /* 1211e810 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211e812 jmp dword ptr [ecx*4 + 0x1211e8e0] */
  switch (ECX) {
    case 0: goto L_1211e927;
    default: x86_unimpl("switch@0x1211e812 out of table"); return;
  }
  /* 1211e819 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211e81c:;
  /* 1211e81c mov eax, edi */
  EAX = (EDI);
  /* 1211e81e mov edx, 3 */
  EDX = (0x3u);
  /* 1211e823 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e826 jb 0x1211e834 */
  if (C.cf) goto L_1211e834;
  /* 1211e828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1211e82b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e82d jmp dword ptr [eax*4 + 0x1211e838] */
  switch (EAX) {
    case 1: goto L_1211e848;
    case 2: goto L_1211e868;
    case 3: goto L_1211e890;
    default: x86_unimpl("switch@0x1211e82d out of table"); return;
  }
L_1211e834:;
  /* 1211e834 jmp dword ptr [ecx*4 + 0x1211e930] */
  switch (ECX) {
    case 0: goto L_1211e940;
    case 1: goto L_1211e948;
    case 2: goto L_1211e958;
    case 3: goto L_1211e96c;
    default: x86_unimpl("switch@0x1211e834 out of table"); return;
  }
  /* 1211e83b nop  */
  /* nop */
L_1211e848:;
  /* 1211e848 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211e84b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e84d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211e850 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1211e851 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e854 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1211e855 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e858 jb 0x1211e810 */
  if (C.cf) goto L_1211e810;
  /* 1211e85a std  */
  C.df=1;
  /* 1211e85b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e85d cld  */
  C.df=0;
  /* 1211e85e jmp dword ptr [edx*4 + 0x1211e930] */
  switch (EDX) {
    case 0: goto L_1211e940;
    case 1: goto L_1211e948;
    case 2: goto L_1211e958;
    case 3: goto L_1211e96c;
    default: x86_unimpl("switch@0x1211e85e out of table"); return;
  }
  /* 1211e865 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211e868:;
  /* 1211e868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211e86b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e86d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211e870 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211e873 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e876 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211e879 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e87c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e87f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e882 jb 0x1211e810 */
  if (C.cf) goto L_1211e810;
  /* 1211e884 std  */
  C.df=1;
  /* 1211e885 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e887 cld  */
  C.df=0;
  /* 1211e888 jmp dword ptr [edx*4 + 0x1211e930] */
  switch (EDX) {
    case 0: goto L_1211e940;
    case 1: goto L_1211e948;
    case 2: goto L_1211e958;
    case 3: goto L_1211e96c;
    default: x86_unimpl("switch@0x1211e888 out of table"); return;
  }
  /* 1211e88f nop  */
  /* nop */
L_1211e890:;
  /* 1211e890 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211e893 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e895 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211e898 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211e89b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211e89e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211e8a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211e8a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211e8a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e8aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211e8ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e8b0 jb 0x1211e810 */
  if (C.cf) goto L_1211e810;
  /* 1211e8b6 std  */
  C.df=1;
  /* 1211e8b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211e8b9 cld  */
  C.df=0;
  /* 1211e8ba jmp dword ptr [edx*4 + 0x1211e930] */
  switch (EDX) {
    case 0: goto L_1211e940;
    case 1: goto L_1211e948;
    case 2: goto L_1211e958;
    case 3: goto L_1211e96c;
    default: x86_unimpl("switch@0x1211e8ba out of table"); return;
  }
  /* 1211e8c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1211e8c4 in al, 0xe8 */
  x86_unimpl("in @ 0x1211e8c4");
  /* 1211e8c6 adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211e8c8 in al, dx */
  x86_unimpl("in @ 0x1211e8c8");
  /* 1211e8c9 call 0xfb05fadf */
  call_ind(0xfb05fadfu, 0x1211e8ceu);
  /* 1211e8ce adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211e8d0 cld  */
  C.df=0;
  /* 1211e8d1 call 0xfb15fae7 */
  call_ind(0xfb15fae7u, 0x1211e8d6u);
  /* 1211e8d6 adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211e8d8 or al, 0xe9 */
  { uint32_t _r=(AL)|(0xe9u); AL = (_r); fl_logic(_r,8); }
  /* 1211e8da adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211e8dc adc al, 0xe9 */
  { uint32_t _a=(AL),_b=(0xe9u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211e8de adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211e8e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1211e8e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1211e8ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1211e8f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1211e8f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1211e8f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1211e8fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1211e900 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1211e904 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1211e908 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1211e90c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1211e910 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1211e914 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1211e918 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1211e91c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1211e923 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e925 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1211e927:;
  /* 1211e927 jmp dword ptr [edx*4 + 0x1211e930] */
  switch (EDX) {
    case 0: goto L_1211e940;
    case 1: goto L_1211e948;
    case 2: goto L_1211e958;
    case 3: goto L_1211e96c;
    default: x86_unimpl("switch@0x1211e927 out of table"); return;
  }
  /* 1211e92e mov edi, edi */
  EDI = (EDI);
L_1211e940:;
  /* 1211e940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e943 pop esi */
  ESI = (pop32());
  /* 1211e944 pop edi */
  EDI = (pop32());
  /* 1211e945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e946 ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e947 nop  */
  /* nop */
L_1211e948:;
  /* 1211e948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211e94b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211e94e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e951 pop esi */
  ESI = (pop32());
  /* 1211e952 pop edi */
  EDI = (pop32());
  /* 1211e953 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e954 ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e955 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211e958:;
  /* 1211e958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211e95b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211e95e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211e961 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211e964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e967 pop esi */
  ESI = (pop32());
  /* 1211e968 pop edi */
  EDI = (pop32());
  /* 1211e969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e96a ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
  /* 1211e96b nop  */
  /* nop */
L_1211e96c:;
  /* 1211e96c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211e96f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211e972 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211e975 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211e978 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211e97b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211e97e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211e981 pop esi */
  ESI = (pop32());
  /* 1211e982 pop edi */
  EDI = (pop32());
  /* 1211e983 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211e984 ret  */
  ESPCHK(0x1211e650u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1211e990 (104 bytes, 43 insns) */
void f_1211e990(void) {
  FTRACE(0x1211e990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211e990 push ebx */
  push32((uint32_t)(EBX));
  /* 1211e991 push esi */
  push32((uint32_t)(ESI));
  /* 1211e992 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1211e996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211e998 jne 0x1211e9b2 */
  if (!C.zf) goto L_1211e9b2;
  /* 1211e99a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1211e99e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1211e9a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e9a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211e9a6 mov ebx, eax */
  EBX = (EAX);
  /* 1211e9a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1211e9ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211e9ae mov edx, ebx */
  EDX = (EBX);
  /* 1211e9b0 jmp 0x1211e9f3 */
  goto L_1211e9f3;
L_1211e9b2:;
  /* 1211e9b2 mov ecx, eax */
  ECX = (EAX);
  /* 1211e9b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1211e9b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1211e9bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1211e9c0:;
  /* 1211e9c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1211e9c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1211e9c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1211e9c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1211e9c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211e9ca jne 0x1211e9c0 */
  if (!C.zf) goto L_1211e9c0;
  /* 1211e9cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211e9ce mov esi, eax */
  ESI = (EAX);
  /* 1211e9d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1211e9d4 mov ecx, eax */
  ECX = (EAX);
  /* 1211e9d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1211e9da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1211e9dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211e9de jb 0x1211e9ee */
  if (C.cf) goto L_1211e9ee;
  /* 1211e9e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e9e4 ja 0x1211e9ee */
  if ((!C.cf&&!C.zf)) goto L_1211e9ee;
  /* 1211e9e6 jb 0x1211e9ef */
  if (C.cf) goto L_1211e9ef;
  /* 1211e9e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211e9ec jbe 0x1211e9ef */
  if ((C.cf||C.zf)) goto L_1211e9ef;
L_1211e9ee:;
  /* 1211e9ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1211e9ef:;
  /* 1211e9ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211e9f1 mov eax, esi */
  EAX = (ESI);
L_1211e9f3:;
  /* 1211e9f3 pop esi */
  ESI = (pop32());
  /* 1211e9f4 pop ebx */
  EBX = (pop32());
  /* 1211e9f5 ret 0x10 */
  ESPCHK(0x1211e990u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1211ea00 (117 bytes, 44 insns) */
void f_1211ea00(void) {
  FTRACE(0x1211ea00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ea00 push ebx */
  push32((uint32_t)(EBX));
  /* 1211ea01 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1211ea05 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ea07 jne 0x1211ea21 */
  if (!C.zf) goto L_1211ea21;
  /* 1211ea09 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1211ea0d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1211ea11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211ea13 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211ea15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211ea19 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211ea1b mov eax, edx */
  EAX = (EDX);
  /* 1211ea1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211ea1f jmp 0x1211ea71 */
  goto L_1211ea71;
L_1211ea21:;
  /* 1211ea21 mov ecx, eax */
  ECX = (EAX);
  /* 1211ea23 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1211ea27 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1211ea2b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1211ea2f:;
  /* 1211ea2f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1211ea31 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1211ea33 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1211ea35 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1211ea37 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211ea39 jne 0x1211ea2f */
  if (!C.zf) goto L_1211ea2f;
  /* 1211ea3b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211ea3d mov ecx, eax */
  ECX = (EAX);
  /* 1211ea3f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1211ea43 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1211ea44 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1211ea48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ea4a jb 0x1211ea5a */
  if (C.cf) goto L_1211ea5a;
  /* 1211ea4c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ea50 ja 0x1211ea5a */
  if ((!C.cf&&!C.zf)) goto L_1211ea5a;
  /* 1211ea52 jb 0x1211ea62 */
  if (C.cf) goto L_1211ea62;
  /* 1211ea54 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ea58 jbe 0x1211ea62 */
  if ((C.cf||C.zf)) goto L_1211ea62;
L_1211ea5a:;
  /* 1211ea5a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ea5e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1211ea62:;
  /* 1211ea62 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ea66 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ea6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211ea6c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211ea6e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1211ea71:;
  /* 1211ea71 pop ebx */
  EBX = (pop32());
  /* 1211ea72 ret 0x10 */
  ESPCHK(0x1211ea00u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ea80 @ 0x1211ea80 (628 bytes, 214 insns) */
void f_1211ea80(void) {
  FTRACE(0x1211ea80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ea80 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ea81 mov ebp, esp */
  EBP = (ESP);
  /* 1211ea83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ea86 push ebx */
  push32((uint32_t)(EBX));
  /* 1211ea87 push esi */
  push32((uint32_t)(ESI));
  /* 1211ea88 push edi */
  push32((uint32_t)(EDI));
L_1211ea89:;
  /* 1211ea89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ea8d jne 0x1211eaad */
  if (!C.zf) goto L_1211eaad;
  /* 1211ea8f push 0x1213f3dc */
  push32((uint32_t)(0x1213f3dcu));
  /* 1211ea94 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ea96 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1211ea98 push 0x1213f3d0 */
  push32((uint32_t)(0x1213f3d0u));
  /* 1211ea9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ea9f call 0x12116e30 */
  push32(0x1211eaa4u); f_12116e30();
  /* 1211eaa4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211eaa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211eaaa jne 0x1211eaad */
  if (!C.zf) goto L_1211eaad;
  /* 1211eaac int3  */
  x86_unimpl("int3 @ 0x1211eaac");
L_1211eaad:;
  /* 1211eaad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211eaaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211eab1 jne 0x1211ea89 */
  if (!C.zf) goto L_1211ea89;
  /* 1211eab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211eab6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211eab9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eabc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1211eabf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211eac2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eac5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211eac8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1211eace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ead0 je 0x1211eadf */
  if (C.zf) goto L_1211eadf;
  /* 1211ead2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ead5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1211ead8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1211eadb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211eadd je 0x1211eaf5 */
  if (C.zf) goto L_1211eaf5;
L_1211eadf:;
  /* 1211eadf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eae2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1211eae5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1211eae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eaea mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1211eaed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211eaf0 jmp 0x1211eced */
  goto L_1211eced;
L_1211eaf5:;
  /* 1211eaf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eaf8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1211eafb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1211eafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211eb00 je 0x1211eb4c */
  if (C.zf) goto L_1211eb4c;
  /* 1211eb02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb05 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1211eb0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb0f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1211eb12 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1211eb15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211eb17 je 0x1211eb35 */
  if (C.zf) goto L_1211eb35;
  /* 1211eb19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb1f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211eb22 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211eb24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211eb2a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1211eb2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb30 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1211eb33 jmp 0x1211eb4c */
  goto L_1211eb4c;
L_1211eb35:;
  /* 1211eb35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb38 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211eb3b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1211eb3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb41 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1211eb44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211eb47 jmp 0x1211eced */
  goto L_1211eced;
L_1211eb4c:;
  /* 1211eb4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211eb52 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1211eb55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb58 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1211eb5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb5e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211eb61 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1211eb64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb67 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1211eb6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb6d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1211eb74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211eb7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211eb7e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1211eb81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eb84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1211eb87 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1211eb8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211eb8f jne 0x1211ebbf */
  if (!C.zf) goto L_1211ebbf;
  /* 1211eb91 cmp dword ptr [ebp - 8], 0x12142140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12142140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211eb98 je 0x1211eba3 */
  if (C.zf) goto L_1211eba3;
  /* 1211eb9a cmp dword ptr [ebp - 8], 0x12142160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12142160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211eba1 jne 0x1211ebb3 */
  if (!C.zf) goto L_1211ebb3;
L_1211eba3:;
  /* 1211eba3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211eba6 push edx */
  push32((uint32_t)(EDX));
  /* 1211eba7 call 0x121209f0 */
  push32(0x1211ebacu); f_121209f0();
  /* 1211ebac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ebaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ebb1 jne 0x1211ebbf */
  if (!C.zf) goto L_1211ebbf;
L_1211ebb3:;
  /* 1211ebb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ebb6 push eax */
  push32((uint32_t)(EAX));
  /* 1211ebb7 call 0x12120920 */
  push32(0x1211ebbcu); f_12120920();
  /* 1211ebbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211ebbf:;
  /* 1211ebbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ebc2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1211ebc5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1211ebcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ebcd je 0x1211ecab */
  if (C.zf) goto L_1211ecab;
L_1211ebd3:;
  /* 1211ebd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ebd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ebd9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1211ebdb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ebde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ebe0 jge 0x1211ec03 */
  if ((C.sf==C.of)) goto L_1211ec03;
  /* 1211ebe2 push 0x1213f390 */
  push32((uint32_t)(0x1213f390u));
  /* 1211ebe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ebe9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1211ebee push 0x1213f3d0 */
  push32((uint32_t)(0x1213f3d0u));
  /* 1211ebf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ebf5 call 0x12116e30 */
  push32(0x1211ebfau); f_12116e30();
  /* 1211ebfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ebfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ec00 jne 0x1211ec03 */
  if (!C.zf) goto L_1211ec03;
  /* 1211ec02 int3  */
  x86_unimpl("int3 @ 0x1211ec02");
L_1211ec03:;
  /* 1211ec03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ec05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ec07 jne 0x1211ebd3 */
  if (!C.zf) goto L_1211ebd3;
  /* 1211ec09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec0f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1211ec11 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ec14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211ec17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec1a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211ec1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ec20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1211ec25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec28 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1211ec2b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ec2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec31 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1211ec34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ec38 jle 0x1211ec56 */
  if ((C.zf||C.sf!=C.of)) goto L_1211ec56;
  /* 1211ec3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ec3d push ecx */
  push32((uint32_t)(ECX));
  /* 1211ec3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ec41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211ec44 push eax */
  push32((uint32_t)(EAX));
  /* 1211ec45 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ec48 push ecx */
  push32((uint32_t)(ECX));
  /* 1211ec49 call 0x12120610 */
  push32(0x1211ec4eu); f_12120610();
  /* 1211ec4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ec51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211ec54 jmp 0x1211ec9e */
  goto L_1211ec9e;
L_1211ec56:;
  /* 1211ec56 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ec5a je 0x1211ec79 */
  if (C.zf) goto L_1211ec79;
  /* 1211ec5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ec5f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1211ec62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ec65 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1211ec68 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211ec6b mov ecx, dword ptr [edx*4 + 0x121451c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 1211ec72 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ec74 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1211ec77 jmp 0x1211ec80 */
  goto L_1211ec80;
L_1211ec79:;
  /* 1211ec79 mov dword ptr [ebp - 0x14], 0x12141a60 */
  w32((uint32_t)(EBP + -0x14), (0x12141a60u));
L_1211ec80:;
  /* 1211ec80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211ec83 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1211ec87 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1211ec8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ec8c je 0x1211ec9e */
  if (C.zf) goto L_1211ec9e;
  /* 1211ec8e push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ec90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ec92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ec95 push ecx */
  push32((uint32_t)(ECX));
  /* 1211ec96 call 0x121204c0 */
  push32(0x1211ec9bu); f_121204c0();
  /* 1211ec9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211ec9e:;
  /* 1211ec9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211eca1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211eca4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1211eca7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1211eca9 jmp 0x1211ecc9 */
  goto L_1211ecc9;
L_1211ecab:;
  /* 1211ecab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1211ecb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ecb5 push edx */
  push32((uint32_t)(EDX));
  /* 1211ecb6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1211ecb9 push eax */
  push32((uint32_t)(EAX));
  /* 1211ecba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211ecbd push ecx */
  push32((uint32_t)(ECX));
  /* 1211ecbe call 0x12120610 */
  push32(0x1211ecc3u); f_12120610();
  /* 1211ecc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ecc6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1211ecc9:;
  /* 1211ecc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211eccc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211eccf je 0x1211ece5 */
  if (C.zf) goto L_1211ece5;
  /* 1211ecd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ecd4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1211ecd7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1211ecda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ecdd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1211ece0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211ece3 jmp 0x1211eced */
  goto L_1211eced;
L_1211ece5:;
  /* 1211ece5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ece8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1211eced:;
  /* 1211eced pop edi */
  EDI = (pop32());
  /* 1211ecee pop esi */
  ESI = (pop32());
  /* 1211ecef pop ebx */
  EBX = (pop32());
  /* 1211ecf0 mov esp, ebp */
  ESP = (EBP);
  /* 1211ecf2 pop ebp */
  EBP = (pop32());
  /* 1211ecf3 ret  */
  ESPCHK(0x1211ea80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed00 @ 0x1211ed00 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1211ed00(void) {
  FTRACE(0x1211ed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ed00 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ed01 mov ebp, esp */
  EBP = (ESP);
  /* 1211ed03 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ed09 push ebx */
  push32((uint32_t)(EBX));
  /* 1211ed0a push esi */
  push32((uint32_t)(ESI));
  /* 1211ed0b push edi */
  push32((uint32_t)(EDI));
  /* 1211ed0c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1211ed13 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1211ed1d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1211ed24:;
  /* 1211ed24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ed27 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1211ed29 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1211ed2c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ed30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ed33 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ed36 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1211ed39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ed3b je 0x1211f917 */
  if (C.zf) goto L_1211f917;
  /* 1211ed41 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ed48 jl 0x1211f917 */
  if ((C.sf!=C.of)) goto L_1211f917;
  /* 1211ed4e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ed52 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ed55 jl 0x1211ed76 */
  if ((C.sf!=C.of)) goto L_1211ed76;
  /* 1211ed57 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ed5b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ed5e jg 0x1211ed76 */
  if ((!C.zf&&C.sf==C.of)) goto L_1211ed76;
  /* 1211ed60 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ed64 movsx ecx, byte ptr [eax + 0x1213f3c8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1213f3c8))));
  /* 1211ed6b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1211ed6e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1211ed74 jmp 0x1211ed80 */
  goto L_1211ed80;
L_1211ed76:;
  /* 1211ed76 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1211ed80:;
  /* 1211ed80 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1211ed86 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1211ed89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211ed8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ed8f movsx edx, byte ptr [ecx + eax*8 + 0x1213f3e8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1213f3e8))));
  /* 1211ed97 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1211ed9a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1211ed9d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211eda0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1211eda6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211edad ja 0x1211f912 */
  if ((!C.cf&&!C.zf)) goto L_1211f912;
  /* 1211edb3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1211edb9 jmp dword ptr [ecx*4 + 0x1211f924] */
  switch (ECX) {
    case 0: goto L_1211edc0;
    case 1: goto L_1211ee5a;
    case 2: goto L_1211ee9c;
    case 3: goto L_1211ef0b;
    case 4: goto L_1211ef63;
    case 5: goto L_1211ef72;
    case 6: goto L_1211efbe;
    case 7: goto L_1211f051;
    case 8: goto L_1211eee8;
    case 9: goto L_1211eef3;
    case 10: goto L_1211eede;
    case 11: goto L_1211eed3;
    case 12: goto L_1211eefe;
    case 13: goto L_1211ef06;
    default: x86_unimpl("switch@0x1211edb9 out of table"); return;
  }
L_1211edc0:;
  /* 1211edc0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1211edc7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211edca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211edd0 mov eax, dword ptr [0x12141c98] */
  EAX = (r32((uint32_t)(0x12141c98)));
  /* 1211edd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211edd7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1211eddb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1211ede1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211ede3 je 0x1211ee3d */
  if (C.zf) goto L_1211ee3d;
  /* 1211ede5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1211edeb push edx */
  push32((uint32_t)(EDX));
  /* 1211edec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211edef push eax */
  push32((uint32_t)(EAX));
  /* 1211edf0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211edf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1211edf5 call 0x1211fa30 */
  push32(0x1211edfau); f_1211fa30();
  /* 1211edfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211edfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ee00 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1211ee02 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1211ee05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ee08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ee0b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1211ee0e:;
  /* 1211ee0e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ee12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ee14 jne 0x1211ee37 */
  if (!C.zf) goto L_1211ee37;
  /* 1211ee16 push 0x1213f468 */
  push32((uint32_t)(0x1213f468u));
  /* 1211ee1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ee1d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1211ee22 push 0x1213f45c */
  push32((uint32_t)(0x1213f45cu));
  /* 1211ee27 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ee29 call 0x12116e30 */
  push32(0x1211ee2eu); f_12116e30();
  /* 1211ee2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ee31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ee34 jne 0x1211ee37 */
  if (!C.zf) goto L_1211ee37;
  /* 1211ee36 int3  */
  x86_unimpl("int3 @ 0x1211ee36");
L_1211ee37:;
  /* 1211ee37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ee39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ee3b jne 0x1211ee0e */
  if (!C.zf) goto L_1211ee0e;
L_1211ee3d:;
  /* 1211ee3d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1211ee43 push ecx */
  push32((uint32_t)(ECX));
  /* 1211ee44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ee47 push edx */
  push32((uint32_t)(EDX));
  /* 1211ee48 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ee4c push eax */
  push32((uint32_t)(EAX));
  /* 1211ee4d call 0x1211fa30 */
  push32(0x1211ee52u); f_1211fa30();
  /* 1211ee52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ee55 jmp 0x1211f912 */
  goto L_1211f912;
L_1211ee5a:;
  /* 1211ee5a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1211ee61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ee64 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1211ee6a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1211ee70 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1211ee76 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1211ee7c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211ee7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211ee86 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1211ee90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1211ee97 jmp 0x1211f912 */
  goto L_1211f912;
L_1211ee9c:;
  /* 1211ee9c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211eea0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1211eea6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1211eeac sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211eeaf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1211eeb5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211eebc ja 0x1211ef06 */
  if ((!C.cf&&!C.zf)) goto L_1211ef06;
  /* 1211eebe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1211eec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211eec6 mov al, byte ptr [ecx + 0x1211f95c] */
  AL = (r8((uint32_t)(ECX + 0x1211f95c)));
  /* 1211eecc jmp dword ptr [eax*4 + 0x1211f944] */
  switch (EAX) {
    case 0: goto L_1211eee8;
    case 1: goto L_1211eef3;
    case 2: goto L_1211eede;
    case 3: goto L_1211eed3;
    case 4: goto L_1211eefe;
    case 5: goto L_1211ef06;
    default: x86_unimpl("switch@0x1211eecc out of table"); return;
  }
L_1211eed3:;
  /* 1211eed3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211eed6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1211eed9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211eedc jmp 0x1211ef06 */
  goto L_1211ef06;
L_1211eede:;
  /* 1211eede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211eee1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1211eee3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211eee6 jmp 0x1211ef06 */
  goto L_1211ef06;
L_1211eee8:;
  /* 1211eee8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211eeeb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1211eeee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211eef1 jmp 0x1211ef06 */
  goto L_1211ef06;
L_1211eef3:;
  /* 1211eef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211eef6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1211eef9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211eefc jmp 0x1211ef06 */
  goto L_1211ef06;
L_1211eefe:;
  /* 1211eefe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ef01 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1211ef03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211ef06:;
  /* 1211ef06 jmp 0x1211f912 */
  goto L_1211f912;
L_1211ef0b:;
  /* 1211ef0b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ef0f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ef12 jne 0x1211ef47 */
  if (!C.zf) goto L_1211ef47;
  /* 1211ef14 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1211ef17 push edx */
  push32((uint32_t)(EDX));
  /* 1211ef18 call 0x1211fb40 */
  push32(0x1211ef1du); f_1211fb40();
  /* 1211ef1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ef20 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1211ef26 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ef2d jge 0x1211ef45 */
  if ((C.sf==C.of)) goto L_1211ef45;
  /* 1211ef2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ef32 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1211ef34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211ef37 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1211ef3d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211ef3f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1211ef45:;
  /* 1211ef45 jmp 0x1211ef5e */
  goto L_1211ef5e;
L_1211ef47:;
  /* 1211ef47 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1211ef4d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211ef50 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ef54 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1211ef58 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1211ef5e:;
  /* 1211ef5e jmp 0x1211f912 */
  goto L_1211f912;
L_1211ef63:;
  /* 1211ef63 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1211ef6d jmp 0x1211f912 */
  goto L_1211f912;
L_1211ef72:;
  /* 1211ef72 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211ef76 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ef79 jne 0x1211efa2 */
  if (!C.zf) goto L_1211efa2;
  /* 1211ef7b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1211ef7e push eax */
  push32((uint32_t)(EAX));
  /* 1211ef7f call 0x1211fb40 */
  push32(0x1211ef84u); f_1211fb40();
  /* 1211ef84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ef87 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1211ef8d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ef94 jge 0x1211efa0 */
  if ((C.sf==C.of)) goto L_1211efa0;
  /* 1211ef96 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1211efa0:;
  /* 1211efa0 jmp 0x1211efb9 */
  goto L_1211efb9;
L_1211efa2:;
  /* 1211efa2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1211efa8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211efab movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211efaf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1211efb3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1211efb9:;
  /* 1211efb9 jmp 0x1211f912 */
  goto L_1211f912;
L_1211efbe:;
  /* 1211efbe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211efc2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1211efc8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1211efce sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211efd1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1211efd7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211efde ja 0x1211f04c */
  if ((!C.cf&&!C.zf)) goto L_1211f04c;
  /* 1211efe0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1211efe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211efe8 mov al, byte ptr [ecx + 0x1211f981] */
  AL = (r8((uint32_t)(ECX + 0x1211f981)));
  /* 1211efee jmp dword ptr [eax*4 + 0x1211f96d] */
  switch (EAX) {
    case 0: goto L_1211f000;
    case 1: goto L_1211f039;
    case 2: goto L_1211eff5;
    case 3: goto L_1211f043;
    case 4: goto L_1211f04c;
    default: x86_unimpl("switch@0x1211efee out of table"); return;
  }
L_1211eff5:;
  /* 1211eff5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211eff8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1211effb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211effe jmp 0x1211f04c */
  goto L_1211f04c;
L_1211f000:;
  /* 1211f000 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211f003 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211f006 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f009 jne 0x1211f02b */
  if (!C.zf) goto L_1211f02b;
  /* 1211f00b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211f00e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1211f012 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f015 jne 0x1211f02b */
  if (!C.zf) goto L_1211f02b;
  /* 1211f017 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211f01a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f01d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1211f020 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f023 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1211f026 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211f029 jmp 0x1211f037 */
  goto L_1211f037;
L_1211f02b:;
  /* 1211f02b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1211f032 jmp 0x1211edc0 */
  goto L_1211edc0;
L_1211f037:;
  /* 1211f037 jmp 0x1211f04c */
  goto L_1211f04c;
L_1211f039:;
  /* 1211f039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f03c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1211f03e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211f041 jmp 0x1211f04c */
  goto L_1211f04c;
L_1211f043:;
  /* 1211f043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f046 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1211f049 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1211f04c:;
  /* 1211f04c jmp 0x1211f912 */
  goto L_1211f912;
L_1211f051:;
  /* 1211f051 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211f055 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1211f05b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1211f061 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f064 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1211f06a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f071 ja 0x1211f737 */
  if ((!C.cf&&!C.zf)) goto L_1211f737;
  /* 1211f077 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1211f07d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211f07f mov cl, byte ptr [edx + 0x1211f9ec] */
  CL = (r8((uint32_t)(EDX + 0x1211f9ec)));
  /* 1211f085 jmp dword ptr [ecx*4 + 0x1211f9b0] */
  switch (ECX) {
    case 0: goto L_1211f08c;
    case 1: goto L_1211f320;
    case 2: goto L_1211f1b0;
    case 3: goto L_1211f459;
    case 4: goto L_1211f11b;
    case 5: goto L_1211f0a1;
    case 6: goto L_1211f42b;
    case 7: goto L_1211f330;
    case 8: goto L_1211f2d5;
    case 9: goto L_1211f4a5;
    case 10: goto L_1211f44f;
    case 11: goto L_1211f1c6;
    case 12: goto L_1211f443;
    case 13: goto L_1211f465;
    case 14: goto L_1211f737;
    default: x86_unimpl("switch@0x1211f085 out of table"); return;
  }
L_1211f08c:;
  /* 1211f08c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f08f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f096 jne 0x1211f0a1 */
  if (!C.zf) goto L_1211f0a1;
  /* 1211f098 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f09b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1211f09e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1211f0a1:;
  /* 1211f0a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f0a4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f0aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f0ac je 0x1211f0e7 */
  if (C.zf) goto L_1211f0e7;
  /* 1211f0ae lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1211f0b1 push eax */
  push32((uint32_t)(EAX));
  /* 1211f0b2 call 0x1211fb80 */
  push32(0x1211f0b7u); f_1211fb80();
  /* 1211f0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f0ba mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1211f0be mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1211f0c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f0c3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1211f0c9 push edx */
  push32((uint32_t)(EDX));
  /* 1211f0ca call 0x12120c60 */
  push32(0x1211f0cfu); f_12120c60();
  /* 1211f0cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f0d2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1211f0d5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f0d9 jge 0x1211f0e5 */
  if ((C.sf==C.of)) goto L_1211f0e5;
  /* 1211f0db mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1211f0e5:;
  /* 1211f0e5 jmp 0x1211f10d */
  goto L_1211f10d;
L_1211f0e7:;
  /* 1211f0e7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1211f0ea push eax */
  push32((uint32_t)(EAX));
  /* 1211f0eb call 0x1211fb40 */
  push32(0x1211f0f0u); f_1211fb40();
  /* 1211f0f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f0f3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1211f0fa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1211f100 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1211f106 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1211f10d:;
  /* 1211f10d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1211f113 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1211f116 jmp 0x1211f737 */
  goto L_1211f737;
L_1211f11b:;
  /* 1211f11b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1211f11e push eax */
  push32((uint32_t)(EAX));
  /* 1211f11f call 0x1211fb40 */
  push32(0x1211f124u); f_1211fb40();
  /* 1211f124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f127 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1211f12d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f134 je 0x1211f142 */
  if (C.zf) goto L_1211f142;
  /* 1211f136 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1211f13c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f140 jne 0x1211f15c */
  if (!C.zf) goto L_1211f15c;
L_1211f142:;
  /* 1211f142 mov edx, dword ptr [0x12141fb0] */
  EDX = (r32((uint32_t)(0x12141fb0)));
  /* 1211f148 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1211f14b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f14e push eax */
  push32((uint32_t)(EAX));
  /* 1211f14f call 0x1211aba0 */
  push32(0x1211f154u); f_1211aba0();
  /* 1211f154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f157 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1211f15a jmp 0x1211f1ab */
  goto L_1211f1ab;
L_1211f15c:;
  /* 1211f15c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f15f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f165 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211f167 je 0x1211f18c */
  if (C.zf) goto L_1211f18c;
  /* 1211f169 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1211f16f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211f172 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211f175 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1211f17b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1211f17e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1211f180 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1211f183 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1211f18a jmp 0x1211f1ab */
  goto L_1211f1ab;
L_1211f18c:;
  /* 1211f18c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1211f193 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1211f199 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211f19c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1211f19f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1211f1a5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1211f1a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1211f1ab:;
  /* 1211f1ab jmp 0x1211f737 */
  goto L_1211f737;
L_1211f1b0:;
  /* 1211f1b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f1b3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f1b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211f1bb jne 0x1211f1c6 */
  if (!C.zf) goto L_1211f1c6;
  /* 1211f1bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f1c0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1211f1c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211f1c6:;
  /* 1211f1c6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f1cd jne 0x1211f1db */
  if (!C.zf) goto L_1211f1db;
  /* 1211f1cf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1211f1d9 jmp 0x1211f1e7 */
  goto L_1211f1e7;
L_1211f1db:;
  /* 1211f1db mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1211f1e1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1211f1e7:;
  /* 1211f1e7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1211f1ed mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1211f1f3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1211f1f6 push edx */
  push32((uint32_t)(EDX));
  /* 1211f1f7 call 0x1211fb40 */
  push32(0x1211f1fcu); f_1211fb40();
  /* 1211f1fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f1ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211f202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f205 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f20a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f20c je 0x1211f276 */
  if (C.zf) goto L_1211f276;
  /* 1211f20e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f212 jne 0x1211f21d */
  if (!C.zf) goto L_1211f21d;
  /* 1211f214 mov ecx, dword ptr [0x12141fb4] */
  ECX = (r32((uint32_t)(0x12141fb4)));
  /* 1211f21a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1211f21d:;
  /* 1211f21d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1211f224 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f227 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1211f22d:;
  /* 1211f22d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1211f233 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1211f239 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f23c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1211f242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f244 je 0x1211f266 */
  if (C.zf) goto L_1211f266;
  /* 1211f246 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1211f24c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211f24e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1211f251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f253 je 0x1211f266 */
  if (C.zf) goto L_1211f266;
  /* 1211f255 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1211f25b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f25e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1211f264 jmp 0x1211f22d */
  goto L_1211f22d;
L_1211f266:;
  /* 1211f266 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1211f26c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f26f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1211f271 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1211f274 jmp 0x1211f2d0 */
  goto L_1211f2d0;
L_1211f276:;
  /* 1211f276 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f27a jne 0x1211f284 */
  if (!C.zf) goto L_1211f284;
  /* 1211f27c mov eax, dword ptr [0x12141fb0] */
  EAX = (r32((uint32_t)(0x12141fb0)));
  /* 1211f281 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1211f284:;
  /* 1211f284 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f287 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1211f28d:;
  /* 1211f28d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1211f293 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1211f299 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f29c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1211f2a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f2a4 je 0x1211f2c4 */
  if (C.zf) goto L_1211f2c4;
  /* 1211f2a6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1211f2ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211f2af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f2b1 je 0x1211f2c4 */
  if (C.zf) goto L_1211f2c4;
  /* 1211f2b3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1211f2b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f2bc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1211f2c2 jmp 0x1211f28d */
  goto L_1211f28d;
L_1211f2c4:;
  /* 1211f2c4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1211f2ca sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f2cd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1211f2d0:;
  /* 1211f2d0 jmp 0x1211f737 */
  goto L_1211f737;
L_1211f2d5:;
  /* 1211f2d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1211f2d8 push edx */
  push32((uint32_t)(EDX));
  /* 1211f2d9 call 0x1211fb40 */
  push32(0x1211f2deu); f_1211fb40();
  /* 1211f2de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f2e1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1211f2e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f2ea and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f2ef je 0x1211f303 */
  if (C.zf) goto L_1211f303;
  /* 1211f2f1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1211f2f7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1211f2fe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1211f301 jmp 0x1211f311 */
  goto L_1211f311;
L_1211f303:;
  /* 1211f303 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1211f309 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1211f30f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1211f311:;
  /* 1211f311 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1211f31b jmp 0x1211f737 */
  goto L_1211f737;
L_1211f320:;
  /* 1211f320 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1211f327 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1211f32a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211f32d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1211f330:;
  /* 1211f330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f333 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1211f335 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211f338 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1211f33e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1211f341 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f348 jge 0x1211f356 */
  if ((C.sf==C.of)) goto L_1211f356;
  /* 1211f34a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1211f354 jmp 0x1211f372 */
  goto L_1211f372;
L_1211f356:;
  /* 1211f356 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f35d jne 0x1211f372 */
  if (!C.zf) goto L_1211f372;
  /* 1211f35f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211f363 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f366 jne 0x1211f372 */
  if (!C.zf) goto L_1211f372;
  /* 1211f368 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1211f372:;
  /* 1211f372 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211f375 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f378 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1211f37b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211f37e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f381 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211f383 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211f386 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1211f38c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1211f392 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211f395 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f396 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1211f39c push edx */
  push32((uint32_t)(EDX));
  /* 1211f39d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211f3a1 push eax */
  push32((uint32_t)(EAX));
  /* 1211f3a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f3a6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1211f3ac push edx */
  push32((uint32_t)(EDX));
  /* 1211f3ad call dword ptr [0x121423a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121423a0))), 0x1211f3b3u);
  /* 1211f3b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f3b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f3b9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f3be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f3c0 je 0x1211f3d8 */
  if (C.zf) goto L_1211f3d8;
  /* 1211f3c2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f3c9 jne 0x1211f3d8 */
  if (!C.zf) goto L_1211f3d8;
  /* 1211f3cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f3ce push ecx */
  push32((uint32_t)(ECX));
  /* 1211f3cf call dword ptr [0x121423ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121423ac))), 0x1211f3d5u);
  /* 1211f3d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211f3d8:;
  /* 1211f3d8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1211f3dc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f3df jne 0x1211f3fa */
  if (!C.zf) goto L_1211f3fa;
  /* 1211f3e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f3e4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f3e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f3eb jne 0x1211f3fa */
  if (!C.zf) goto L_1211f3fa;
  /* 1211f3ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f3f1 call dword ptr [0x121423a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121423a4))), 0x1211f3f7u);
  /* 1211f3f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211f3fa:;
  /* 1211f3fa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f3fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1211f400 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f403 jne 0x1211f417 */
  if (!C.zf) goto L_1211f417;
  /* 1211f405 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f408 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1211f40b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211f40e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f411 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f414 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1211f417:;
  /* 1211f417 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f41a push eax */
  push32((uint32_t)(EAX));
  /* 1211f41b call 0x1211aba0 */
  push32(0x1211f420u); f_1211aba0();
  /* 1211f420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f423 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1211f426 jmp 0x1211f737 */
  goto L_1211f737;
L_1211f42b:;
  /* 1211f42b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f42e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f431 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211f434 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1211f43e jmp 0x1211f4c5 */
  goto L_1211f4c5;
L_1211f443:;
  /* 1211f443 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1211f44d jmp 0x1211f4c5 */
  goto L_1211f4c5;
L_1211f44f:;
  /* 1211f44f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1211f459:;
  /* 1211f459 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1211f463 jmp 0x1211f46f */
  goto L_1211f46f;
L_1211f465:;
  /* 1211f465 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1211f46f:;
  /* 1211f46f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1211f479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f47c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f482 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f484 je 0x1211f4a3 */
  if (C.zf) goto L_1211f4a3;
  /* 1211f486 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1211f48d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1211f493 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f496 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1211f49c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1211f4a3:;
  /* 1211f4a3 jmp 0x1211f4c5 */
  goto L_1211f4c5;
L_1211f4a5:;
  /* 1211f4a5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1211f4af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f4b2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f4b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211f4ba je 0x1211f4c5 */
  if (C.zf) goto L_1211f4c5;
  /* 1211f4bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f4bf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1211f4c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211f4c5:;
  /* 1211f4c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f4c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f4cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f4cf je 0x1211f4ee */
  if (C.zf) goto L_1211f4ee;
  /* 1211f4d1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1211f4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f4d5 call 0x1211fb60 */
  push32(0x1211f4dau); f_1211fb60();
  /* 1211f4da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f4dd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1211f4e3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1211f4e9 jmp 0x1211f57f */
  goto L_1211f57f;
L_1211f4ee:;
  /* 1211f4ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f4f1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f4f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f4f6 je 0x1211f540 */
  if (C.zf) goto L_1211f540;
  /* 1211f4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f4fb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f4fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f500 je 0x1211f520 */
  if (C.zf) goto L_1211f520;
  /* 1211f502 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1211f505 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f506 call 0x1211fb40 */
  push32(0x1211f50bu); f_1211fb40();
  /* 1211f50b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f50e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1211f511 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1211f512 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1211f518 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1211f51e jmp 0x1211f53e */
  goto L_1211f53e;
L_1211f520:;
  /* 1211f520 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1211f523 push edx */
  push32((uint32_t)(EDX));
  /* 1211f524 call 0x1211fb40 */
  push32(0x1211f529u); f_1211fb40();
  /* 1211f529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f52c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211f531 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1211f532 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1211f538 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1211f53e:;
  /* 1211f53e jmp 0x1211f57f */
  goto L_1211f57f;
L_1211f540:;
  /* 1211f540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f543 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f548 je 0x1211f565 */
  if (C.zf) goto L_1211f565;
  /* 1211f54a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1211f54d push ecx */
  push32((uint32_t)(ECX));
  /* 1211f54e call 0x1211fb40 */
  push32(0x1211f553u); f_1211fb40();
  /* 1211f553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f556 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1211f557 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1211f55d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1211f563 jmp 0x1211f57f */
  goto L_1211f57f;
L_1211f565:;
  /* 1211f565 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1211f568 push edx */
  push32((uint32_t)(EDX));
  /* 1211f569 call 0x1211fb40 */
  push32(0x1211f56eu); f_1211fb40();
  /* 1211f56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f571 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211f573 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1211f579 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1211f57f:;
  /* 1211f57f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f582 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f585 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f587 je 0x1211f5c7 */
  if (C.zf) goto L_1211f5c7;
  /* 1211f589 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f590 jg 0x1211f5c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1211f5c7;
  /* 1211f592 jl 0x1211f59d */
  if ((C.sf!=C.of)) goto L_1211f59d;
  /* 1211f594 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f59b jae 0x1211f5c7 */
  if (!C.cf) goto L_1211f5c7;
L_1211f59d:;
  /* 1211f59d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1211f5a3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211f5a5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1211f5ab adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f5ae neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211f5b0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1211f5b6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1211f5bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f5bf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1211f5c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211f5c5 jmp 0x1211f5df */
  goto L_1211f5df;
L_1211f5c7:;
  /* 1211f5c7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1211f5cd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1211f5d3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1211f5d9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1211f5df:;
  /* 1211f5df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f5e2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f5e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f5ea jne 0x1211f607 */
  if (!C.zf) goto L_1211f607;
  /* 1211f5ec mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1211f5f2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1211f5f8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f5fb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1211f601 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1211f607:;
  /* 1211f607 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f60e jge 0x1211f61c */
  if ((C.sf==C.of)) goto L_1211f61c;
  /* 1211f610 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1211f61a jmp 0x1211f625 */
  goto L_1211f625;
L_1211f61c:;
  /* 1211f61c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f61f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f622 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211f625:;
  /* 1211f625 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1211f62b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1211f631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f633 jne 0x1211f63c */
  if (!C.zf) goto L_1211f63c;
  /* 1211f635 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1211f63c:;
  /* 1211f63c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1211f63f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1211f642:;
  /* 1211f642 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1211f648 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1211f64e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f651 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1211f657 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f659 jg 0x1211f66f */
  if ((!C.zf&&C.sf==C.of)) goto L_1211f66f;
  /* 1211f65b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1211f661 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1211f667 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211f669 je 0x1211f6f0 */
  if (C.zf) goto L_1211f6f0;
L_1211f66f:;
  /* 1211f66f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1211f675 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1211f676 push edx */
  push32((uint32_t)(EDX));
  /* 1211f677 push eax */
  push32((uint32_t)(EAX));
  /* 1211f678 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1211f67e push edx */
  push32((uint32_t)(EDX));
  /* 1211f67f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1211f685 push eax */
  push32((uint32_t)(EAX));
  /* 1211f686 call 0x1211ea00 */
  push32(0x1211f68bu); f_1211ea00();
  /* 1211f68b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f68e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1211f694 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1211f69a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1211f69b push edx */
  push32((uint32_t)(EDX));
  /* 1211f69c push eax */
  push32((uint32_t)(EAX));
  /* 1211f69d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1211f6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f6a4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1211f6aa push edx */
  push32((uint32_t)(EDX));
  /* 1211f6ab call 0x1211e990 */
  push32(0x1211f6b0u); f_1211e990();
  /* 1211f6b0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1211f6b6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1211f6bc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f6c3 jle 0x1211f6d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1211f6d7;
  /* 1211f6c5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1211f6cb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f6d1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1211f6d7:;
  /* 1211f6d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f6da mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1211f6e0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1211f6e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f6e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f6e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211f6eb jmp 0x1211f642 */
  goto L_1211f642;
L_1211f6f0:;
  /* 1211f6f0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1211f6f3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f6f6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1211f6f9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f6fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f6ff mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1211f702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f705 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f70a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f70c je 0x1211f737 */
  if (C.zf) goto L_1211f737;
  /* 1211f70e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f711 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211f714 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f717 jne 0x1211f71f */
  if (!C.zf) goto L_1211f71f;
  /* 1211f719 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f71d jne 0x1211f737 */
  if (!C.zf) goto L_1211f737;
L_1211f71f:;
  /* 1211f71f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f722 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f725 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211f728 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f72b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1211f72e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211f731 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f734 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1211f737:;
  /* 1211f737 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f73e jne 0x1211f912 */
  if (!C.zf) goto L_1211f912;
  /* 1211f744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f747 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f74a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f74c je 0x1211f79d */
  if (C.zf) goto L_1211f79d;
  /* 1211f74e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f751 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f757 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211f759 je 0x1211f76b */
  if (C.zf) goto L_1211f76b;
  /* 1211f75b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1211f762 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1211f769 jmp 0x1211f79d */
  goto L_1211f79d;
L_1211f76b:;
  /* 1211f76b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f76e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f771 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f773 je 0x1211f785 */
  if (C.zf) goto L_1211f785;
  /* 1211f775 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1211f77c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1211f783 jmp 0x1211f79d */
  goto L_1211f79d;
L_1211f785:;
  /* 1211f785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f788 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1211f78b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211f78d je 0x1211f79d */
  if (C.zf) goto L_1211f79d;
  /* 1211f78f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1211f796 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1211f79d:;
  /* 1211f79d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1211f7a3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f7a6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f7a9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1211f7af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f7b2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1211f7b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f7b7 jne 0x1211f7d5 */
  if (!C.zf) goto L_1211f7d5;
  /* 1211f7b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1211f7bf push eax */
  push32((uint32_t)(EAX));
  /* 1211f7c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211f7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f7c4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1211f7ca push edx */
  push32((uint32_t)(EDX));
  /* 1211f7cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1211f7cd call 0x1211fab0 */
  push32(0x1211f7d2u); f_1211fab0();
  /* 1211f7d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211f7d5:;
  /* 1211f7d5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1211f7db push eax */
  push32((uint32_t)(EAX));
  /* 1211f7dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211f7df push ecx */
  push32((uint32_t)(ECX));
  /* 1211f7e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211f7e3 push edx */
  push32((uint32_t)(EDX));
  /* 1211f7e4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1211f7ea push eax */
  push32((uint32_t)(EAX));
  /* 1211f7eb call 0x1211faf0 */
  push32(0x1211f7f0u); f_1211faf0();
  /* 1211f7f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f7f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f7f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1211f7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211f7fb je 0x1211f823 */
  if (C.zf) goto L_1211f823;
  /* 1211f7fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f800 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f803 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f805 jne 0x1211f823 */
  if (!C.zf) goto L_1211f823;
  /* 1211f807 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1211f80d push eax */
  push32((uint32_t)(EAX));
  /* 1211f80e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211f811 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f812 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1211f818 push edx */
  push32((uint32_t)(EDX));
  /* 1211f819 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1211f81b call 0x1211fab0 */
  push32(0x1211f820u); f_1211fab0();
  /* 1211f820 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211f823:;
  /* 1211f823 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f827 je 0x1211f8d1 */
  if (C.zf) goto L_1211f8d1;
  /* 1211f82d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f831 jle 0x1211f8d1 */
  if ((C.zf||C.sf!=C.of)) goto L_1211f8d1;
  /* 1211f837 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f83a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1211f840 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211f843 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1211f849:;
  /* 1211f849 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1211f84f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1211f855 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211f858 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1211f85e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f860 je 0x1211f8cf */
  if (C.zf) goto L_1211f8cf;
  /* 1211f862 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1211f868 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1211f86b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1211f872 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1211f879 push eax */
  push32((uint32_t)(EAX));
  /* 1211f87a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1211f880 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f881 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1211f887 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f88a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1211f890 call 0x12120c60 */
  push32(0x1211f895u); f_12120c60();
  /* 1211f895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f898 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1211f89e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211f8a5 jg 0x1211f8a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1211f8a9;
  /* 1211f8a7 jmp 0x1211f8cf */
  goto L_1211f8cf;
L_1211f8a9:;
  /* 1211f8a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1211f8af push eax */
  push32((uint32_t)(EAX));
  /* 1211f8b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211f8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f8b4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1211f8ba push edx */
  push32((uint32_t)(EDX));
  /* 1211f8bb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1211f8c1 push eax */
  push32((uint32_t)(EAX));
  /* 1211f8c2 call 0x1211faf0 */
  push32(0x1211f8c7u); f_1211faf0();
  /* 1211f8c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211f8ca jmp 0x1211f849 */
  goto L_1211f849;
L_1211f8cf:;
  /* 1211f8cf jmp 0x1211f8ec */
  goto L_1211f8ec;
L_1211f8d1:;
  /* 1211f8d1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1211f8d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211f8db push edx */
  push32((uint32_t)(EDX));
  /* 1211f8dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211f8df push eax */
  push32((uint32_t)(EAX));
  /* 1211f8e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211f8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f8e4 call 0x1211faf0 */
  push32(0x1211f8e9u); f_1211faf0();
  /* 1211f8e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211f8ec:;
  /* 1211f8ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211f8ef and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1211f8f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211f8f4 je 0x1211f912 */
  if (C.zf) goto L_1211f912;
  /* 1211f8f6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1211f8fc push eax */
  push32((uint32_t)(EAX));
  /* 1211f8fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211f900 push ecx */
  push32((uint32_t)(ECX));
  /* 1211f901 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1211f907 push edx */
  push32((uint32_t)(EDX));
  /* 1211f908 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1211f90a call 0x1211fab0 */
  push32(0x1211f90fu); f_1211fab0();
  /* 1211f90f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211f912:;
  /* 1211f912 jmp 0x1211ed24 */
  goto L_1211ed24;
L_1211f917:;
  /* 1211f917 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1211f91d pop edi */
  EDI = (pop32());
  /* 1211f91e pop esi */
  ESI = (pop32());
  /* 1211f91f pop ebx */
  EBX = (pop32());
  /* 1211f920 mov esp, ebp */
  ESP = (EBP);
  /* 1211f922 pop ebp */
  EBP = (pop32());
  /* 1211f923 ret  */
  ESPCHK(0x1211ed00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa30 @ 0x1211fa30 (119 bytes, 44 insns) */
void f_1211fa30(void) {
  FTRACE(0x1211fa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fa31 mov ebp, esp */
  EBP = (ESP);
  /* 1211fa33 push ecx */
  push32((uint32_t)(ECX));
  /* 1211fa34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa37 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211fa3a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fa3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa40 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1211fa43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa46 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fa4a jl 0x1211fa72 */
  if ((C.sf!=C.of)) goto L_1211fa72;
  /* 1211fa4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211fa51 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1211fa54 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1211fa56 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1211fa5a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211fa60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211fa63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211fa68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fa6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211fa70 jmp 0x1211fa85 */
  goto L_1211fa85;
L_1211fa72:;
  /* 1211fa72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fa75 push edx */
  push32((uint32_t)(EDX));
  /* 1211fa76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fa79 push eax */
  push32((uint32_t)(EAX));
  /* 1211fa7a call 0x1211ea80 */
  push32(0x1211fa7fu); f_1211ea80();
  /* 1211fa7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fa82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211fa85:;
  /* 1211fa85 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fa89 jne 0x1211fa96 */
  if (!C.zf) goto L_1211fa96;
  /* 1211fa8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211fa8e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1211fa94 jmp 0x1211faa3 */
  goto L_1211faa3;
L_1211fa96:;
  /* 1211fa96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211fa99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211fa9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fa9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211faa1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1211faa3:;
  /* 1211faa3 mov esp, ebp */
  ESP = (EBP);
  /* 1211faa5 pop ebp */
  EBP = (pop32());
  /* 1211faa6 ret  */
  ESPCHK(0x1211fa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fab0 @ 0x1211fab0 (53 bytes, 23 insns) */
void f_1211fab0(void) {
  FTRACE(0x1211fab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fab1 mov ebp, esp */
  EBP = (ESP);
L_1211fab3:;
  /* 1211fab3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fab6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fab9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fabc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1211fabf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211fac1 jle 0x1211fae3 */
  if ((C.zf||C.sf!=C.of)) goto L_1211fae3;
  /* 1211fac3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211fac6 push edx */
  push32((uint32_t)(EDX));
  /* 1211fac7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211faca push eax */
  push32((uint32_t)(EAX));
  /* 1211facb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211face push ecx */
  push32((uint32_t)(ECX));
  /* 1211facf call 0x1211fa30 */
  push32(0x1211fad4u); f_1211fa30();
  /* 1211fad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fad7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211fada cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fadd jne 0x1211fae1 */
  if (!C.zf) goto L_1211fae1;
  /* 1211fadf jmp 0x1211fae3 */
  goto L_1211fae3;
L_1211fae1:;
  /* 1211fae1 jmp 0x1211fab3 */
  goto L_1211fab3;
L_1211fae3:;
  /* 1211fae3 pop ebp */
  EBP = (pop32());
  /* 1211fae4 ret  */
  ESPCHK(0x1211fab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x1211faf0 (74 bytes, 31 insns) */
void f_1211faf0(void) {
  FTRACE(0x1211faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211faf1 mov ebp, esp */
  EBP = (ESP);
  /* 1211faf3 push ecx */
  push32((uint32_t)(ECX));
L_1211faf4:;
  /* 1211faf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211faf7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fafa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fafd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1211fb00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211fb02 jle 0x1211fb36 */
  if ((C.zf||C.sf!=C.of)) goto L_1211fb36;
  /* 1211fb04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211fb07 push edx */
  push32((uint32_t)(EDX));
  /* 1211fb08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211fb0b push eax */
  push32((uint32_t)(EAX));
  /* 1211fb0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211fb12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211fb15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211fb18 push eax */
  push32((uint32_t)(EAX));
  /* 1211fb19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fb1f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1211fb22 call 0x1211fa30 */
  push32(0x1211fb27u); f_1211fa30();
  /* 1211fb27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fb2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211fb2d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fb30 jne 0x1211fb34 */
  if (!C.zf) goto L_1211fb34;
  /* 1211fb32 jmp 0x1211fb36 */
  goto L_1211fb36;
L_1211fb34:;
  /* 1211fb34 jmp 0x1211faf4 */
  goto L_1211faf4;
L_1211fb36:;
  /* 1211fb36 mov esp, ebp */
  ESP = (EBP);
  /* 1211fb38 pop ebp */
  EBP = (pop32());
  /* 1211fb39 ret  */
  ESPCHK(0x1211faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb40 @ 0x1211fb40 (26 bytes, 12 insns) */
void f_1211fb40(void) {
  FTRACE(0x1211fb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fb41 mov ebp, esp */
  EBP = (ESP);
  /* 1211fb43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211fb48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fb4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211fb50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211fb55 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1211fb58 pop ebp */
  EBP = (pop32());
  /* 1211fb59 ret  */
  ESPCHK(0x1211fb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb60 @ 0x1211fb60 (31 bytes, 14 insns) */
void f_1211fb60(void) {
  FTRACE(0x1211fb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fb61 mov ebp, esp */
  EBP = (ESP);
  /* 1211fb63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211fb68 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fb6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211fb70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211fb75 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fb78 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1211fb7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211fb7d pop ebp */
  EBP = (pop32());
  /* 1211fb7e ret  */
  ESPCHK(0x1211fb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb80 @ 0x1211fb80 (27 bytes, 12 insns) */
void f_1211fb80(void) {
  FTRACE(0x1211fb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fb81 mov ebp, esp */
  EBP = (ESP);
  /* 1211fb83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211fb88 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fb8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211fb90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fb93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211fb95 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1211fb99 pop ebp */
  EBP = (pop32());
  /* 1211fb9a ret  */
  ESPCHK(0x1211fb80u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1211fba0 (145 bytes, 42 insns) */
void f_1211fba0(void) {
  FTRACE(0x1211fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fba1 mov ebp, esp */
  EBP = (ESP);
  /* 1211fba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211fba4 call 0x1211fc50 */
  push32(0x1211fba9u); f_1211fc50();
  /* 1211fba9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fbac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1211fbae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211fbb5 jmp 0x1211fbc0 */
  goto L_1211fbc0;
L_1211fbb7:;
  /* 1211fbb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211fbba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fbbd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211fbc0:;
  /* 1211fbc0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fbc4 jae 0x1211fbea */
  if (!C.cf) goto L_1211fbea;
  /* 1211fbc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211fbc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fbcc cmp ecx, dword ptr [eax*8 + 0x12141fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12141fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fbd3 jne 0x1211fbe8 */
  if (!C.zf) goto L_1211fbe8;
  /* 1211fbd5 call 0x1211fc40 */
  push32(0x1211fbdau); f_1211fc40();
  /* 1211fbda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211fbdd mov ecx, dword ptr [edx*8 + 0x12141fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12141fbc)));
  /* 1211fbe4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1211fbe6 jmp 0x1211fc2d */
  goto L_1211fc2d;
L_1211fbe8:;
  /* 1211fbe8 jmp 0x1211fbb7 */
  goto L_1211fbb7;
L_1211fbea:;
  /* 1211fbea cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fbee jb 0x1211fc03 */
  if (C.cf) goto L_1211fc03;
  /* 1211fbf0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fbf4 ja 0x1211fc03 */
  if ((!C.cf&&!C.zf)) goto L_1211fc03;
  /* 1211fbf6 call 0x1211fc40 */
  push32(0x1211fbfbu); f_1211fc40();
  /* 1211fbfb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1211fc01 jmp 0x1211fc2d */
  goto L_1211fc2d;
L_1211fc03:;
  /* 1211fc03 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fc0a jb 0x1211fc22 */
  if (C.cf) goto L_1211fc22;
  /* 1211fc0c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fc13 ja 0x1211fc22 */
  if ((!C.cf&&!C.zf)) goto L_1211fc22;
  /* 1211fc15 call 0x1211fc40 */
  push32(0x1211fc1au); f_1211fc40();
  /* 1211fc1a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1211fc20 jmp 0x1211fc2d */
  goto L_1211fc2d;
L_1211fc22:;
  /* 1211fc22 call 0x1211fc40 */
  push32(0x1211fc27u); f_1211fc40();
  /* 1211fc27 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1211fc2d:;
  /* 1211fc2d mov esp, ebp */
  ESP = (EBP);
  /* 1211fc2f pop ebp */
  EBP = (pop32());
  /* 1211fc30 ret  */
  ESPCHK(0x1211fba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc40 @ 0x1211fc40 (13 bytes, 6 insns) */
void f_1211fc40(void) {
  FTRACE(0x1211fc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fc41 mov ebp, esp */
  EBP = (ESP);
  /* 1211fc43 call 0x121177b0 */
  push32(0x1211fc48u); f_121177b0();
  /* 1211fc48 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fc4b pop ebp */
  EBP = (pop32());
  /* 1211fc4c ret  */
  ESPCHK(0x1211fc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc50 @ 0x1211fc50 (13 bytes, 6 insns) */
void f_1211fc50(void) {
  FTRACE(0x1211fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fc51 mov ebp, esp */
  EBP = (ESP);
  /* 1211fc53 call 0x121177b0 */
  push32(0x1211fc58u); f_121177b0();
  /* 1211fc58 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fc5b pop ebp */
  EBP = (pop32());
  /* 1211fc5c ret  */
  ESPCHK(0x1211fc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x1211fc60 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1211fc60(void) {
  FTRACE(0x1211fc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211fc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1211fc61 mov ebp, esp */
  EBP = (ESP);
  /* 1211fc63 push edi */
  push32((uint32_t)(EDI));
  /* 1211fc64 push esi */
  push32((uint32_t)(ESI));
  /* 1211fc65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1211fc68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211fc6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fc6e mov eax, ecx */
  EAX = (ECX);
  /* 1211fc70 mov edx, ecx */
  EDX = (ECX);
  /* 1211fc72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fc74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fc76 jbe 0x1211fc80 */
  if ((C.cf||C.zf)) goto L_1211fc80;
  /* 1211fc78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fc7a jb 0x1211fdf8 */
  if (C.cf) goto L_1211fdf8;
L_1211fc80:;
  /* 1211fc80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1211fc86 jne 0x1211fc9c */
  if (!C.zf) goto L_1211fc9c;
  /* 1211fc88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fc8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1211fc8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fc91 jb 0x1211fcbc */
  if (C.cf) goto L_1211fcbc;
  /* 1211fc93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fc95 jmp dword ptr [edx*4 + 0x1211fda8] */
  switch (EDX) {
    case 0: goto L_1211fdb8;
    case 1: goto L_1211fdc0;
    case 2: goto L_1211fdcc;
    case 3: goto L_1211fde0;
    default: x86_unimpl("switch@0x1211fc95 out of table"); return;
  }
L_1211fc9c:;
  /* 1211fc9c mov eax, edi */
  EAX = (EDI);
  /* 1211fc9e mov edx, 3 */
  EDX = (0x3u);
  /* 1211fca3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fca6 jb 0x1211fcb4 */
  if (C.cf) goto L_1211fcb4;
  /* 1211fca8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1211fcab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fcad jmp dword ptr [eax*4 + 0x1211fcc0] */
  switch (EAX) {
    case 1: goto L_1211fcd0;
    case 2: goto L_1211fcfc;
    case 3: goto L_1211fd20;
    default: x86_unimpl("switch@0x1211fcad out of table"); return;
  }
L_1211fcb4:;
  /* 1211fcb4 jmp dword ptr [ecx*4 + 0x1211fdb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1211fdb8)))); return;
  /* 1211fcbb nop  */
  /* nop */
L_1211fcbc:;
  /* 1211fcbc jmp dword ptr [ecx*4 + 0x1211fd3c] */
  switch (ECX) {
    case 0: goto L_1211fd9f;
    case 1: goto L_1211fd8c;
    case 2: goto L_1211fd84;
    case 3: goto L_1211fd7c;
    case 4: goto L_1211fd74;
    case 5: goto L_1211fd6c;
    case 6: goto L_1211fd64;
    case 7: goto L_1211fd5c;
    default: x86_unimpl("switch@0x1211fcbc out of table"); return;
  }
  /* 1211fcc3 nop  */
  /* nop */
L_1211fcd0:;
  /* 1211fcd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211fcd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211fcd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211fcd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211fcd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211fcdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211fcdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fce2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211fce5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fce8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fceb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fcee jb 0x1211fcbc */
  if (C.cf) goto L_1211fcbc;
  /* 1211fcf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fcf2 jmp dword ptr [edx*4 + 0x1211fda8] */
  switch (EDX) {
    case 0: goto L_1211fdb8;
    case 1: goto L_1211fdc0;
    case 2: goto L_1211fdcc;
    case 3: goto L_1211fde0;
    default: x86_unimpl("switch@0x1211fcf2 out of table"); return;
  }
  /* 1211fcf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211fcfc:;
  /* 1211fcfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211fcfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211fd00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211fd02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211fd05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fd08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211fd0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fd0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fd11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fd14 jb 0x1211fcbc */
  if (C.cf) goto L_1211fcbc;
  /* 1211fd16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fd18 jmp dword ptr [edx*4 + 0x1211fda8] */
  switch (EDX) {
    case 0: goto L_1211fdb8;
    case 1: goto L_1211fdc0;
    case 2: goto L_1211fdcc;
    case 3: goto L_1211fde0;
    default: x86_unimpl("switch@0x1211fd18 out of table"); return;
  }
  /* 1211fd1f nop  */
  /* nop */
L_1211fd20:;
  /* 1211fd20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211fd22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211fd24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211fd26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1211fd27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fd2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211fd2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fd2e jb 0x1211fcbc */
  if (C.cf) goto L_1211fcbc;
  /* 1211fd30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fd32 jmp dword ptr [edx*4 + 0x1211fda8] */
  switch (EDX) {
    case 0: goto L_1211fdb8;
    case 1: goto L_1211fdc0;
    case 2: goto L_1211fdcc;
    case 3: goto L_1211fde0;
    default: x86_unimpl("switch@0x1211fd32 out of table"); return;
  }
  /* 1211fd39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211fd5c:;
  /* 1211fd5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1211fd60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1211fd64:;
  /* 1211fd64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1211fd68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1211fd6c:;
  /* 1211fd6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1211fd70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1211fd74:;
  /* 1211fd74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1211fd78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1211fd7c:;
  /* 1211fd7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1211fd80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1211fd84:;
  /* 1211fd84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1211fd88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1211fd8c:;
  /* 1211fd8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1211fd90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1211fd94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1211fd9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211fd9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1211fd9f:;
  /* 1211fd9f jmp dword ptr [edx*4 + 0x1211fda8] */
  switch (EDX) {
    case 0: goto L_1211fdb8;
    case 1: goto L_1211fdc0;
    case 2: goto L_1211fdcc;
    case 3: goto L_1211fde0;
    default: x86_unimpl("switch@0x1211fd9f out of table"); return;
  }
  /* 1211fda6 mov edi, edi */
  EDI = (EDI);
L_1211fdb8:;
  /* 1211fdb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fdbb pop esi */
  ESI = (pop32());
  /* 1211fdbc pop edi */
  EDI = (pop32());
  /* 1211fdbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211fdbe ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211fdbf nop  */
  /* nop */
L_1211fdc0:;
  /* 1211fdc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211fdc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211fdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fdc7 pop esi */
  ESI = (pop32());
  /* 1211fdc8 pop edi */
  EDI = (pop32());
  /* 1211fdc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211fdca ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211fdcb nop  */
  /* nop */
L_1211fdcc:;
  /* 1211fdcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211fdce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211fdd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211fdd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211fdd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fdd9 pop esi */
  ESI = (pop32());
  /* 1211fdda pop edi */
  EDI = (pop32());
  /* 1211fddb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211fddc ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211fddd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211fde0:;
  /* 1211fde0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211fde2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211fde4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211fde7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211fdea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211fded mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211fdf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211fdf3 pop esi */
  ESI = (pop32());
  /* 1211fdf4 pop edi */
  EDI = (pop32());
  /* 1211fdf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211fdf6 ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211fdf7 nop  */
  /* nop */
L_1211fdf8:;
  /* 1211fdf8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1211fdfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1211fe00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1211fe06 jne 0x1211fe2c */
  if (!C.zf) goto L_1211fe2c;
  /* 1211fe08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fe0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1211fe0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fe11 jb 0x1211fe20 */
  if (C.cf) goto L_1211fe20;
  /* 1211fe13 std  */
  C.df=1;
  /* 1211fe14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fe16 cld  */
  C.df=0;
  /* 1211fe17 jmp dword ptr [edx*4 + 0x1211ff40] */
  switch (EDX) {
    case 0: goto L_1211ff50;
    case 1: goto L_1211ff58;
    case 2: goto L_1211ff68;
    case 3: goto L_1211ff7c;
    default: x86_unimpl("switch@0x1211fe17 out of table"); return;
  }
  /* 1211fe1e mov edi, edi */
  EDI = (EDI);
L_1211fe20:;
  /* 1211fe20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211fe22 jmp dword ptr [ecx*4 + 0x1211fef0] */
  switch (ECX) {
    case 0: goto L_1211ff37;
    default: x86_unimpl("switch@0x1211fe22 out of table"); return;
  }
  /* 1211fe29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211fe2c:;
  /* 1211fe2c mov eax, edi */
  EAX = (EDI);
  /* 1211fe2e mov edx, 3 */
  EDX = (0x3u);
  /* 1211fe33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fe36 jb 0x1211fe44 */
  if (C.cf) goto L_1211fe44;
  /* 1211fe38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1211fe3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fe3d jmp dword ptr [eax*4 + 0x1211fe48] */
  switch (EAX) {
    case 1: goto L_1211fe58;
    case 2: goto L_1211fe78;
    case 3: goto L_1211fea0;
    default: x86_unimpl("switch@0x1211fe3d out of table"); return;
  }
L_1211fe44:;
  /* 1211fe44 jmp dword ptr [ecx*4 + 0x1211ff40] */
  switch (ECX) {
    case 0: goto L_1211ff50;
    case 1: goto L_1211ff58;
    case 2: goto L_1211ff68;
    case 3: goto L_1211ff7c;
    default: x86_unimpl("switch@0x1211fe44 out of table"); return;
  }
  /* 1211fe4b nop  */
  /* nop */
L_1211fe58:;
  /* 1211fe58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211fe5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211fe5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211fe60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1211fe61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fe64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1211fe65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fe68 jb 0x1211fe20 */
  if (C.cf) goto L_1211fe20;
  /* 1211fe6a std  */
  C.df=1;
  /* 1211fe6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fe6d cld  */
  C.df=0;
  /* 1211fe6e jmp dword ptr [edx*4 + 0x1211ff40] */
  switch (EDX) {
    case 0: goto L_1211ff50;
    case 1: goto L_1211ff58;
    case 2: goto L_1211ff68;
    case 3: goto L_1211ff7c;
    default: x86_unimpl("switch@0x1211fe6e out of table"); return;
  }
  /* 1211fe75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211fe78:;
  /* 1211fe78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211fe7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211fe7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211fe80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211fe83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211fe86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211fe89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fe8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211fe8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fe92 jb 0x1211fe20 */
  if (C.cf) goto L_1211fe20;
  /* 1211fe94 std  */
  C.df=1;
  /* 1211fe95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fe97 cld  */
  C.df=0;
  /* 1211fe98 jmp dword ptr [edx*4 + 0x1211ff40] */
  switch (EDX) {
    case 0: goto L_1211ff50;
    case 1: goto L_1211ff58;
    case 2: goto L_1211ff68;
    case 3: goto L_1211ff7c;
    default: x86_unimpl("switch@0x1211fe98 out of table"); return;
  }
  /* 1211fe9f nop  */
  /* nop */
L_1211fea0:;
  /* 1211fea0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211fea3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1211fea5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211fea8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211feab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211feae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211feb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211feb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211feb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211feba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211febd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211fec0 jb 0x1211fe20 */
  if (C.cf) goto L_1211fe20;
  /* 1211fec6 std  */
  C.df=1;
  /* 1211fec7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1211fec9 cld  */
  C.df=0;
  /* 1211feca jmp dword ptr [edx*4 + 0x1211ff40] */
  switch (EDX) {
    case 0: goto L_1211ff50;
    case 1: goto L_1211ff58;
    case 2: goto L_1211ff68;
    case 3: goto L_1211ff7c;
    default: x86_unimpl("switch@0x1211feca out of table"); return;
  }
  /* 1211fed1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1211fed4 hlt  */
  x86_unimpl("hlt @ 0x1211fed4");
  /* 1211fed6 adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211fed8 cld  */
  C.df=0;
  /* 1211feda adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211fedc add al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211fede adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211fee0 or al, 0xff */
  { uint32_t _r=(AL)|(0xffu); AL = (_r); fl_logic(_r,8); }
  /* 1211fee2 adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211fee4 adc al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1211fee6 adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211fee8 sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1211feea adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211feec and al, 0xff */
  { uint32_t _r=(AL)&(0xffu); AL = (_r); fl_logic(_r,8); }
  /* 1211feee adc dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1211fef4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1211fef8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1211fefc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1211ff00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1211ff04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1211ff08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1211ff0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1211ff10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1211ff14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1211ff18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1211ff1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1211ff20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1211ff24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1211ff28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1211ff2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1211ff33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ff35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1211ff37:;
  /* 1211ff37 jmp dword ptr [edx*4 + 0x1211ff40] */
  switch (EDX) {
    case 0: goto L_1211ff50;
    case 1: goto L_1211ff58;
    case 2: goto L_1211ff68;
    case 3: goto L_1211ff7c;
    default: x86_unimpl("switch@0x1211ff37 out of table"); return;
  }
  /* 1211ff3e mov edi, edi */
  EDI = (EDI);
L_1211ff50:;
  /* 1211ff50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ff53 pop esi */
  ESI = (pop32());
  /* 1211ff54 pop edi */
  EDI = (pop32());
  /* 1211ff55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211ff56 ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211ff57 nop  */
  /* nop */
L_1211ff58:;
  /* 1211ff58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211ff5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211ff5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ff61 pop esi */
  ESI = (pop32());
  /* 1211ff62 pop edi */
  EDI = (pop32());
  /* 1211ff63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211ff64 ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211ff65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1211ff68:;
  /* 1211ff68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211ff6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211ff6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211ff71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211ff74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ff77 pop esi */
  ESI = (pop32());
  /* 1211ff78 pop edi */
  EDI = (pop32());
  /* 1211ff79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211ff7a ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
  /* 1211ff7b nop  */
  /* nop */
L_1211ff7c:;
  /* 1211ff7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1211ff7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1211ff82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1211ff85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1211ff88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1211ff8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1211ff8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ff91 pop esi */
  ESI = (pop32());
  /* 1211ff92 pop edi */
  EDI = (pop32());
  /* 1211ff93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1211ff94 ret  */
  ESPCHK(0x1211fc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffa0 @ 0x1211ffa0 (421 bytes, 148 insns) */
void f_1211ffa0(void) {
  FTRACE(0x1211ffa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ffa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ffa1 mov ebp, esp */
  EBP = (ESP);
  /* 1211ffa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1211ffa5 push 0x1213f480 */
  push32((uint32_t)(0x1213f480u));
  /* 1211ffaa push 0x12120e78 */
  push32((uint32_t)(0x12120e78u));
  /* 1211ffaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1211ffb5 push eax */
  push32((uint32_t)(EAX));
  /* 1211ffb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1211ffbd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ffc0 push ebx */
  push32((uint32_t)(EBX));
  /* 1211ffc1 push esi */
  push32((uint32_t)(ESI));
  /* 1211ffc2 push edi */
  push32((uint32_t)(EDI));
  /* 1211ffc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1211ffc6 cmp dword ptr [0x121439dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ffcd jne 0x1212001e */
  if (!C.zf) goto L_1212001e;
  /* 1211ffcf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1211ffd2 push eax */
  push32((uint32_t)(EAX));
  /* 1211ffd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211ffd5 push 0x1213f47c */
  push32((uint32_t)(0x1213f47cu));
  /* 1211ffda push 1 */
  push32((uint32_t)(0x1u));
  /* 1211ffdc call dword ptr [0x12146330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146330))), 0x1211ffe2u);
  /* 1211ffe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ffe4 je 0x1211fff2 */
  if (C.zf) goto L_1211fff2;
  /* 1211ffe6 mov dword ptr [0x121439dc], 1 */
  w32((uint32_t)(0x121439dc), (0x1u));
  /* 1211fff0 jmp 0x1212001e */
  goto L_1212001e;
L_1211fff2:;
  /* 1211fff2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1211fff5 push ecx */
  push32((uint32_t)(ECX));
  /* 1211fff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211fff8 push 0x1213f478 */
  push32((uint32_t)(0x1213f478u));
  /* 1211fffd push 1 */
  push32((uint32_t)(0x1u));
  /* 1211ffff push 0 */
  push32((uint32_t)(0x0u));
  /* 12120001 call dword ptr [0x12146340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146340))), 0x12120007u);
  /* 12120007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12120009 je 0x12120017 */
  if (C.zf) goto L_12120017;
  /* 1212000b mov dword ptr [0x121439dc], 2 */
  w32((uint32_t)(0x121439dc), (0x2u));
  /* 12120015 jmp 0x1212001e */
  goto L_1212001e;
L_12120017:;
  /* 12120017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120019 jmp 0x12120148 */
  goto L_12120148;
L_1212001e:;
  /* 1212001e cmp dword ptr [0x121439dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121439dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120025 jne 0x12120055 */
  if (!C.zf) goto L_12120055;
  /* 12120027 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212002b jne 0x12120036 */
  if (!C.zf) goto L_12120036;
  /* 1212002d mov edx, dword ptr [0x121439e8] */
  EDX = (r32((uint32_t)(0x121439e8)));
  /* 12120033 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12120036:;
  /* 12120036 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12120039 push eax */
  push32((uint32_t)(EAX));
  /* 1212003a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212003d push ecx */
  push32((uint32_t)(ECX));
  /* 1212003e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120041 push edx */
  push32((uint32_t)(EDX));
  /* 12120042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120045 push eax */
  push32((uint32_t)(EAX));
  /* 12120046 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12120049 push ecx */
  push32((uint32_t)(ECX));
  /* 1212004a call dword ptr [0x12146340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146340))), 0x12120050u);
  /* 12120050 jmp 0x12120148 */
  goto L_12120148;
L_12120055:;
  /* 12120055 cmp dword ptr [0x121439dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121439dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212005c jne 0x12120146 */
  if (!C.zf) goto L_12120146;
  /* 12120062 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120066 jne 0x12120071 */
  if (!C.zf) goto L_12120071;
  /* 12120068 mov edx, dword ptr [0x121439f8] */
  EDX = (r32((uint32_t)(0x121439f8)));
  /* 1212006e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12120071:;
  /* 12120071 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120075 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12120078 push eax */
  push32((uint32_t)(EAX));
  /* 12120079 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212007c push ecx */
  push32((uint32_t)(ECX));
  /* 1212007d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12120080 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12120082 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120084 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12120087 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212008a push edx */
  push32((uint32_t)(EDX));
  /* 1212008b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1212008e push eax */
  push32((uint32_t)(EAX));
  /* 1212008f call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12120095u);
  /* 12120095 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12120098 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212009c jne 0x121200a5 */
  if (!C.zf) goto L_121200a5;
  /* 1212009e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121200a0 jmp 0x12120148 */
  goto L_12120148;
L_121200a5:;
  /* 121200a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121200ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121200af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121200b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121200b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121200b6 call 0x1211af10 */
  push32(0x121200bbu); f_1211af10();
  /* 121200bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 121200be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121200c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121200c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121200c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121200ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 121200cc push edx */
  push32((uint32_t)(EDX));
  /* 121200cd push 0 */
  push32((uint32_t)(0x0u));
  /* 121200cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121200d2 push eax */
  push32((uint32_t)(EAX));
  /* 121200d3 call 0x1211bae0 */
  push32(0x121200d8u); f_1211bae0();
  /* 121200d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121200db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121200e2 jmp 0x121200fb */
  goto L_121200fb;
  /* 121200e4 mov eax, 1 */
  EAX = (0x1u);
  /* 121200e9 ret  */
  ESPCHK(0x1211ffa0u, _esp0);
  ESP += 4; return;
  /* 121200ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121200ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121200f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121200fb:;
  /* 121200fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121200ff jne 0x12120105 */
  if (!C.zf) goto L_12120105;
  /* 12120101 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120103 jmp 0x12120148 */
  goto L_12120148;
L_12120105:;
  /* 12120105 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12120108 push ecx */
  push32((uint32_t)(ECX));
  /* 12120109 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1212010c push edx */
  push32((uint32_t)(EDX));
  /* 1212010d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12120110 push eax */
  push32((uint32_t)(EAX));
  /* 12120111 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120114 push ecx */
  push32((uint32_t)(ECX));
  /* 12120115 push 1 */
  push32((uint32_t)(0x1u));
  /* 12120117 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1212011a push edx */
  push32((uint32_t)(EDX));
  /* 1212011b call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x12120121u);
  /* 12120121 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12120124 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120128 jne 0x1212012e */
  if (!C.zf) goto L_1212012e;
  /* 1212012a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212012c jmp 0x12120148 */
  goto L_12120148;
L_1212012e:;
  /* 1212012e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12120131 push eax */
  push32((uint32_t)(EAX));
  /* 12120132 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12120135 push ecx */
  push32((uint32_t)(ECX));
  /* 12120136 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12120139 push edx */
  push32((uint32_t)(EDX));
  /* 1212013a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212013d push eax */
  push32((uint32_t)(EAX));
  /* 1212013e call dword ptr [0x12146330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146330))), 0x12120144u);
  /* 12120144 jmp 0x12120148 */
  goto L_12120148;
L_12120146:;
  /* 12120146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12120148:;
  /* 12120148 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1212014b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1212014e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12120155 pop edi */
  EDI = (pop32());
  /* 12120156 pop esi */
  ESI = (pop32());
  /* 12120157 pop ebx */
  EBX = (pop32());
  /* 12120158 mov esp, ebp */
  ESP = (EBP);
  /* 1212015a pop ebp */
  EBP = (pop32());
  /* 1212015b ret  */
  ESPCHK(0x1211ffa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x12120160 (727 bytes, 263 insns) */
void f_12120160(void) {
  FTRACE(0x12120160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120160 push ebp */
  push32((uint32_t)(EBP));
  /* 12120161 mov ebp, esp */
  EBP = (ESP);
  /* 12120163 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12120165 push 0x1213f490 */
  push32((uint32_t)(0x1213f490u));
  /* 1212016a push 0x12120e78 */
  push32((uint32_t)(0x12120e78u));
  /* 1212016f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12120175 push eax */
  push32((uint32_t)(EAX));
  /* 12120176 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1212017d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120180 push ebx */
  push32((uint32_t)(EBX));
  /* 12120181 push esi */
  push32((uint32_t)(ESI));
  /* 12120182 push edi */
  push32((uint32_t)(EDI));
  /* 12120183 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12120186 cmp dword ptr [0x12143a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212018d jne 0x121201e6 */
  if (!C.zf) goto L_121201e6;
  /* 1212018f push 0 */
  push32((uint32_t)(0x0u));
  /* 12120191 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120193 push 1 */
  push32((uint32_t)(0x1u));
  /* 12120195 push 0x1213f47c */
  push32((uint32_t)(0x1213f47cu));
  /* 1212019a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1212019f push 0 */
  push32((uint32_t)(0x0u));
  /* 121201a1 call dword ptr [0x12146334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146334))), 0x121201a7u);
  /* 121201a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121201a9 je 0x121201b7 */
  if (C.zf) goto L_121201b7;
  /* 121201ab mov dword ptr [0x12143a00], 1 */
  w32((uint32_t)(0x12143a00), (0x1u));
  /* 121201b5 jmp 0x121201e6 */
  goto L_121201e6;
L_121201b7:;
  /* 121201b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121201b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121201bb push 1 */
  push32((uint32_t)(0x1u));
  /* 121201bd push 0x1213f478 */
  push32((uint32_t)(0x1213f478u));
  /* 121201c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121201c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121201c9 call dword ptr [0x1214632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214632c))), 0x121201cfu);
  /* 121201cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121201d1 je 0x121201df */
  if (C.zf) goto L_121201df;
  /* 121201d3 mov dword ptr [0x12143a00], 2 */
  w32((uint32_t)(0x12143a00), (0x2u));
  /* 121201dd jmp 0x121201e6 */
  goto L_121201e6;
L_121201df:;
  /* 121201df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121201e1 jmp 0x12120451 */
  goto L_12120451;
L_121201e6:;
  /* 121201e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121201ea jle 0x121201ff */
  if ((C.zf||C.sf!=C.of)) goto L_121201ff;
  /* 121201ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121201ef push eax */
  push32((uint32_t)(EAX));
  /* 121201f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121201f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121201f4 call 0x12120470 */
  push32(0x121201f9u); f_12120470();
  /* 121201f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121201fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_121201ff:;
  /* 121201ff cmp dword ptr [0x12143a00], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12143a00))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120206 jne 0x1212022b */
  if (!C.zf) goto L_1212022b;
  /* 12120208 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1212020b push edx */
  push32((uint32_t)(EDX));
  /* 1212020c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1212020f push eax */
  push32((uint32_t)(EAX));
  /* 12120210 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12120213 push ecx */
  push32((uint32_t)(ECX));
  /* 12120214 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12120217 push edx */
  push32((uint32_t)(EDX));
  /* 12120218 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212021b push eax */
  push32((uint32_t)(EAX));
  /* 1212021c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212021f push ecx */
  push32((uint32_t)(ECX));
  /* 12120220 call dword ptr [0x1214632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214632c))), 0x12120226u);
  /* 12120226 jmp 0x12120451 */
  goto L_12120451;
L_1212022b:;
  /* 1212022b cmp dword ptr [0x12143a00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143a00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120232 jne 0x1212044f */
  if (!C.zf) goto L_1212044f;
  /* 12120238 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212023c jne 0x12120247 */
  if (!C.zf) goto L_12120247;
  /* 1212023e mov edx, dword ptr [0x121439f8] */
  EDX = (r32((uint32_t)(0x121439f8)));
  /* 12120244 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12120247:;
  /* 12120247 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212024b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1212024e push eax */
  push32((uint32_t)(EAX));
  /* 1212024f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12120252 push ecx */
  push32((uint32_t)(ECX));
  /* 12120253 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12120256 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12120258 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212025a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1212025d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120260 push edx */
  push32((uint32_t)(EDX));
  /* 12120261 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12120264 push eax */
  push32((uint32_t)(EAX));
  /* 12120265 call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x1212026bu);
  /* 1212026b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1212026e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120272 jne 0x1212027b */
  if (!C.zf) goto L_1212027b;
  /* 12120274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120276 jmp 0x12120451 */
  goto L_12120451;
L_1212027b:;
  /* 1212027b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12120282 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12120285 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12120287 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212028a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1212028c call 0x1211af10 */
  push32(0x12120291u); f_1211af10();
  /* 12120291 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12120294 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12120297 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1212029a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1212029d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121202a4 jmp 0x121202bd */
  goto L_121202bd;
  /* 121202a6 mov eax, 1 */
  EAX = (0x1u);
  /* 121202ab ret  */
  ESPCHK(0x12120160u, _esp0);
  ESP += 4; return;
  /* 121202ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121202af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121202b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121202bd:;
  /* 121202bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121202c1 jne 0x121202ca */
  if (!C.zf) goto L_121202ca;
  /* 121202c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121202c5 jmp 0x12120451 */
  goto L_12120451;
L_121202ca:;
  /* 121202ca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121202cd push edx */
  push32((uint32_t)(EDX));
  /* 121202ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121202d1 push eax */
  push32((uint32_t)(EAX));
  /* 121202d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121202d5 push ecx */
  push32((uint32_t)(ECX));
  /* 121202d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121202d9 push edx */
  push32((uint32_t)(EDX));
  /* 121202da push 1 */
  push32((uint32_t)(0x1u));
  /* 121202dc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121202df push eax */
  push32((uint32_t)(EAX));
  /* 121202e0 call dword ptr [0x12146338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146338))), 0x121202e6u);
  /* 121202e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121202e8 jne 0x121202f1 */
  if (!C.zf) goto L_121202f1;
  /* 121202ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121202ec jmp 0x12120451 */
  goto L_12120451;
L_121202f1:;
  /* 121202f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121202f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121202f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121202f8 push ecx */
  push32((uint32_t)(ECX));
  /* 121202f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121202fc push edx */
  push32((uint32_t)(EDX));
  /* 121202fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120300 push eax */
  push32((uint32_t)(EAX));
  /* 12120301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120304 push ecx */
  push32((uint32_t)(ECX));
  /* 12120305 call dword ptr [0x12146334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146334))), 0x1212030bu);
  /* 1212030b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1212030e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120312 jne 0x1212031b */
  if (!C.zf) goto L_1212031b;
  /* 12120314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120316 jmp 0x12120451 */
  goto L_12120451;
L_1212031b:;
  /* 1212031b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212031e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12120324 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12120326 je 0x1212036b */
  if (C.zf) goto L_1212036b;
  /* 12120328 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212032c je 0x12120366 */
  if (C.zf) goto L_12120366;
  /* 1212032e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12120331 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120334 jle 0x1212033d */
  if ((C.zf||C.sf!=C.of)) goto L_1212033d;
  /* 12120336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120338 jmp 0x12120451 */
  goto L_12120451;
L_1212033d:;
  /* 1212033d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12120340 push ecx */
  push32((uint32_t)(ECX));
  /* 12120341 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12120344 push edx */
  push32((uint32_t)(EDX));
  /* 12120345 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12120348 push eax */
  push32((uint32_t)(EAX));
  /* 12120349 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1212034c push ecx */
  push32((uint32_t)(ECX));
  /* 1212034d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120350 push edx */
  push32((uint32_t)(EDX));
  /* 12120351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120354 push eax */
  push32((uint32_t)(EAX));
  /* 12120355 call dword ptr [0x12146334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146334))), 0x1212035bu);
  /* 1212035b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212035d jne 0x12120366 */
  if (!C.zf) goto L_12120366;
  /* 1212035f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120361 jmp 0x12120451 */
  goto L_12120451;
L_12120366:;
  /* 12120366 jmp 0x1212044a */
  goto L_1212044a;
L_1212036b:;
  /* 1212036b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1212036e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12120371 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12120378 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1212037b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1212037d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120380 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12120382 call 0x1211af10 */
  push32(0x12120387u); f_1211af10();
  /* 12120387 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1212038a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1212038d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12120390 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12120393 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1212039a jmp 0x121203b3 */
  goto L_121203b3;
  /* 1212039c mov eax, 1 */
  EAX = (0x1u);
  /* 121203a1 ret  */
  ESPCHK(0x12120160u, _esp0);
  ESP += 4; return;
  /* 121203a2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121203a5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121203ac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121203b3:;
  /* 121203b3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121203b7 jne 0x121203c0 */
  if (!C.zf) goto L_121203c0;
  /* 121203b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121203bb jmp 0x12120451 */
  goto L_12120451;
L_121203c0:;
  /* 121203c0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121203c3 push eax */
  push32((uint32_t)(EAX));
  /* 121203c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121203c7 push ecx */
  push32((uint32_t)(ECX));
  /* 121203c8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121203cb push edx */
  push32((uint32_t)(EDX));
  /* 121203cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121203cf push eax */
  push32((uint32_t)(EAX));
  /* 121203d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121203d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121203d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121203d7 push edx */
  push32((uint32_t)(EDX));
  /* 121203d8 call dword ptr [0x12146334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146334))), 0x121203deu);
  /* 121203de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121203e0 jne 0x121203e6 */
  if (!C.zf) goto L_121203e6;
  /* 121203e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121203e4 jmp 0x12120451 */
  goto L_12120451;
L_121203e6:;
  /* 121203e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121203ea jne 0x1212041a */
  if (!C.zf) goto L_1212041a;
  /* 121203ec push 0 */
  push32((uint32_t)(0x0u));
  /* 121203ee push 0 */
  push32((uint32_t)(0x0u));
  /* 121203f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121203f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121203f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121203f7 push eax */
  push32((uint32_t)(EAX));
  /* 121203f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121203fb push ecx */
  push32((uint32_t)(ECX));
  /* 121203fc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12120401 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12120404 push edx */
  push32((uint32_t)(EDX));
  /* 12120405 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x1212040bu);
  /* 1212040b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1212040e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120412 jne 0x12120418 */
  if (!C.zf) goto L_12120418;
  /* 12120414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120416 jmp 0x12120451 */
  goto L_12120451;
L_12120418:;
  /* 12120418 jmp 0x1212044a */
  goto L_1212044a;
L_1212041a:;
  /* 1212041a push 0 */
  push32((uint32_t)(0x0u));
  /* 1212041c push 0 */
  push32((uint32_t)(0x0u));
  /* 1212041e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12120421 push eax */
  push32((uint32_t)(EAX));
  /* 12120422 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12120425 push ecx */
  push32((uint32_t)(ECX));
  /* 12120426 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12120429 push edx */
  push32((uint32_t)(EDX));
  /* 1212042a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1212042d push eax */
  push32((uint32_t)(EAX));
  /* 1212042e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12120433 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12120436 push ecx */
  push32((uint32_t)(ECX));
  /* 12120437 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x1212043du);
  /* 1212043d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12120440 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120444 jne 0x1212044a */
  if (!C.zf) goto L_1212044a;
  /* 12120446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120448 jmp 0x12120451 */
  goto L_12120451;
L_1212044a:;
  /* 1212044a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1212044d jmp 0x12120451 */
  goto L_12120451;
L_1212044f:;
  /* 1212044f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12120451:;
  /* 12120451 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12120454 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12120457 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1212045e pop edi */
  EDI = (pop32());
  /* 1212045f pop esi */
  ESI = (pop32());
  /* 12120460 pop ebx */
  EBX = (pop32());
  /* 12120461 mov esp, ebp */
  ESP = (EBP);
  /* 12120463 pop ebp */
  EBP = (pop32());
  /* 12120464 ret  */
  ESPCHK(0x12120160u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x12120470 (80 bytes, 32 insns) */
void f_12120470(void) {
  FTRACE(0x12120470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120470 push ebp */
  push32((uint32_t)(EBP));
  /* 12120471 mov ebp, esp */
  EBP = (ESP);
  /* 12120473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120476 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120479 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1212047c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212047f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12120482:;
  /* 12120482 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12120485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12120488 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212048b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1212048e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12120490 je 0x121204a7 */
  if (C.zf) goto L_121204a7;
  /* 12120492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120495 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12120498 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1212049a je 0x121204a7 */
  if (C.zf) goto L_121204a7;
  /* 1212049c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212049f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121204a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121204a5 jmp 0x12120482 */
  goto L_12120482;
L_121204a7:;
  /* 121204a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121204aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121204ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121204af jne 0x121204b9 */
  if (!C.zf) goto L_121204b9;
  /* 121204b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121204b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121204b7 jmp 0x121204bc */
  goto L_121204bc;
L_121204b9:;
  /* 121204b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_121204bc:;
  /* 121204bc mov esp, ebp */
  ESP = (EBP);
  /* 121204be pop ebp */
  EBP = (pop32());
  /* 121204bf ret  */
  ESPCHK(0x12120470u, _esp0);
  ESP += 4; return;
}

/* FUN_100104c0 @ 0x121204c0 (130 bytes, 43 insns) */
void f_121204c0(void) {
  FTRACE(0x121204c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121204c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121204c1 mov ebp, esp */
  EBP = (ESP);
  /* 121204c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121204c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121204c7 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121204cd jae 0x121204f1 */
  if (!C.cf) goto L_121204f1;
  /* 121204cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121204d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121204d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121204d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121204db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121204de mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 121204e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121204ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121204ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121204ef jne 0x1212050c */
  if (!C.zf) goto L_1212050c;
L_121204f1:;
  /* 121204f1 call 0x1211fc40 */
  push32(0x121204f6u); f_1211fc40();
  /* 121204f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121204fc call 0x1211fc50 */
  push32(0x12120501u); f_1211fc50();
  /* 12120501 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12120507 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212050a jmp 0x1212053e */
  goto L_1212053e;
L_1212050c:;
  /* 1212050c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212050f push edx */
  push32((uint32_t)(EDX));
  /* 12120510 call 0x12121460 */
  push32(0x12120515u); f_12121460();
  /* 12120515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120518 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212051b push eax */
  push32((uint32_t)(EAX));
  /* 1212051c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212051f push ecx */
  push32((uint32_t)(ECX));
  /* 12120520 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120523 push edx */
  push32((uint32_t)(EDX));
  /* 12120524 call 0x12120550 */
  push32(0x12120529u); f_12120550();
  /* 12120529 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212052c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212052f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120532 push eax */
  push32((uint32_t)(EAX));
  /* 12120533 call 0x121214f0 */
  push32(0x12120538u); f_121214f0();
  /* 12120538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212053b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1212053e:;
  /* 1212053e mov esp, ebp */
  ESP = (EBP);
  /* 12120540 pop ebp */
  EBP = (pop32());
  /* 12120541 ret  */
  ESPCHK(0x121204c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x12120550 (178 bytes, 56 insns) */
void f_12120550(void) {
  FTRACE(0x12120550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120550 push ebp */
  push32((uint32_t)(EBP));
  /* 12120551 mov ebp, esp */
  EBP = (ESP);
  /* 12120553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120559 push eax */
  push32((uint32_t)(EAX));
  /* 1212055a call 0x121212e0 */
  push32(0x1212055fu); f_121212e0();
  /* 1212055f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120562 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12120565 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120569 jne 0x1212057e */
  if (!C.zf) goto L_1212057e;
  /* 1212056b call 0x1211fc40 */
  push32(0x12120570u); f_1211fc40();
  /* 12120570 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12120576 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12120579 jmp 0x121205fe */
  goto L_121205fe;
L_1212057e:;
  /* 1212057e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12120581 push ecx */
  push32((uint32_t)(ECX));
  /* 12120582 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120584 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120587 push edx */
  push32((uint32_t)(EDX));
  /* 12120588 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212058b push eax */
  push32((uint32_t)(EAX));
  /* 1212058c call dword ptr [0x12146324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146324))), 0x12120592u);
  /* 12120592 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12120595 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120599 jne 0x121205a6 */
  if (!C.zf) goto L_121205a6;
  /* 1212059b call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x121205a1u);
  /* 121205a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121205a4 jmp 0x121205ad */
  goto L_121205ad;
L_121205a6:;
  /* 121205a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121205ad:;
  /* 121205ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121205b1 je 0x121205c4 */
  if (C.zf) goto L_121205c4;
  /* 121205b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121205b6 push ecx */
  push32((uint32_t)(ECX));
  /* 121205b7 call 0x1211fba0 */
  push32(0x121205bcu); f_1211fba0();
  /* 121205bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121205bf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121205c2 jmp 0x121205fe */
  goto L_121205fe;
L_121205c4:;
  /* 121205c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121205c7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121205ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121205cd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121205d0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121205d3 mov ecx, dword ptr [edx*4 + 0x121451c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 121205da mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 121205de and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 121205e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121205e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121205e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121205ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121205ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121205f0 mov eax, dword ptr [eax*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121205f7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 121205fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121205fe:;
  /* 121205fe mov esp, ebp */
  ESP = (EBP);
  /* 12120600 pop ebp */
  EBP = (pop32());
  /* 12120601 ret  */
  ESPCHK(0x12120550u, _esp0);
  ESP += 4; return;
}

/* FUN_10010610 @ 0x12120610 (130 bytes, 43 insns) */
void f_12120610(void) {
  FTRACE(0x12120610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120610 push ebp */
  push32((uint32_t)(EBP));
  /* 12120611 mov ebp, esp */
  EBP = (ESP);
  /* 12120613 push ecx */
  push32((uint32_t)(ECX));
  /* 12120614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120617 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212061d jae 0x12120641 */
  if (!C.cf) goto L_12120641;
  /* 1212061f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120622 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12120625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120628 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1212062b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212062e mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12120635 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1212063a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1212063d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212063f jne 0x1212065c */
  if (!C.zf) goto L_1212065c;
L_12120641:;
  /* 12120641 call 0x1211fc40 */
  push32(0x12120646u); f_1211fc40();
  /* 12120646 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1212064c call 0x1211fc50 */
  push32(0x12120651u); f_1211fc50();
  /* 12120651 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12120657 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212065a jmp 0x1212068e */
  goto L_1212068e;
L_1212065c:;
  /* 1212065c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212065f push edx */
  push32((uint32_t)(EDX));
  /* 12120660 call 0x12121460 */
  push32(0x12120665u); f_12121460();
  /* 12120665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120668 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212066b push eax */
  push32((uint32_t)(EAX));
  /* 1212066c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212066f push ecx */
  push32((uint32_t)(ECX));
  /* 12120670 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120673 push edx */
  push32((uint32_t)(EDX));
  /* 12120674 call 0x121206a0 */
  push32(0x12120679u); f_121206a0();
  /* 12120679 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212067c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212067f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120682 push eax */
  push32((uint32_t)(EAX));
  /* 12120683 call 0x121214f0 */
  push32(0x12120688u); f_121214f0();
  /* 12120688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212068b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1212068e:;
  /* 1212068e mov esp, ebp */
  ESP = (EBP);
  /* 12120690 pop ebp */
  EBP = (pop32());
  /* 12120691 ret  */
  ESPCHK(0x12120610u, _esp0);
  ESP += 4; return;
}

/* FUN_100106a0 @ 0x121206a0 (627 bytes, 182 insns) */
void f_121206a0(void) {
  FTRACE(0x121206a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121206a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121206a1 mov ebp, esp */
  EBP = (ESP);
  /* 121206a3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121206a9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121206b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121206b3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 121206b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121206bd jne 0x121206c6 */
  if (!C.zf) goto L_121206c6;
  /* 121206bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121206c1 jmp 0x1212090f */
  goto L_1212090f;
L_121206c6:;
  /* 121206c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121206c9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121206cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121206cf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121206d2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121206d5 mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 121206dc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121206e1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 121206e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121206e6 je 0x121206f8 */
  if (C.zf) goto L_121206f8;
  /* 121206e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121206ea push 0 */
  push32((uint32_t)(0x0u));
  /* 121206ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121206ef push edx */
  push32((uint32_t)(EDX));
  /* 121206f0 call 0x12120550 */
  push32(0x121206f5u); f_12120550();
  /* 121206f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121206f8:;
  /* 121206f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121206fb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121206fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120701 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12120704 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12120707 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 1212070e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12120713 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12120718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212071a je 0x1212082c */
  if (C.zf) goto L_1212082c;
  /* 12120720 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120723 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12120726 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1212072d:;
  /* 1212072d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120730 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120733 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120736 jae 0x1212082a */
  if (!C.cf) goto L_1212082a;
  /* 1212073c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12120742 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12120745:;
  /* 12120745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12120748 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1212074e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120750 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120756 jge 0x121207b7 */
  if ((C.sf==C.of)) goto L_121207b7;
  /* 12120758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212075b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212075e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120761 jae 0x121207b7 */
  if (!C.cf) goto L_121207b7;
  /* 12120763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120766 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12120768 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1212076e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120771 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120774 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12120777 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1212077e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120781 jne 0x121207a1 */
  if (!C.zf) goto L_121207a1;
  /* 12120783 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12120789 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212078c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12120792 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12120795 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12120798 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212079b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212079e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121207a1:;
  /* 121207a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121207a4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 121207aa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121207ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121207af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121207b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121207b5 jmp 0x12120745 */
  goto L_12120745;
L_121207b7:;
  /* 121207b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121207b9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 121207bf push edx */
  push32((uint32_t)(EDX));
  /* 121207c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121207c3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 121207c9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121207cb push eax */
  push32((uint32_t)(EAX));
  /* 121207cc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 121207d2 push edx */
  push32((uint32_t)(EDX));
  /* 121207d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121207d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121207d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121207dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121207df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121207e2 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121207e9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 121207ec push eax */
  push32((uint32_t)(EAX));
  /* 121207ed call dword ptr [0x121463bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463bc))), 0x121207f3u);
  /* 121207f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121207f5 je 0x1212081a */
  if (C.zf) goto L_1212081a;
  /* 121207f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121207fa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120800 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12120803 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12120806 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1212080c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212080e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120814 jge 0x12120818 */
  if ((C.sf==C.of)) goto L_12120818;
  /* 12120816 jmp 0x1212082a */
  goto L_1212082a;
L_12120818:;
  /* 12120818 jmp 0x12120825 */
  goto L_12120825;
L_1212081a:;
  /* 1212081a call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x12120820u);
  /* 12120820 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12120823 jmp 0x1212082a */
  goto L_1212082a;
L_12120825:;
  /* 12120825 jmp 0x1212072d */
  goto L_1212072d;
L_1212082a:;
  /* 1212082a jmp 0x1212087c */
  goto L_1212087c;
L_1212082c:;
  /* 1212082c push 0 */
  push32((uint32_t)(0x0u));
  /* 1212082e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12120834 push ecx */
  push32((uint32_t)(ECX));
  /* 12120835 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12120838 push edx */
  push32((uint32_t)(EDX));
  /* 12120839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212083c push eax */
  push32((uint32_t)(EAX));
  /* 1212083d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120840 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12120843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120846 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12120849 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212084c mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12120853 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12120856 push ecx */
  push32((uint32_t)(ECX));
  /* 12120857 call dword ptr [0x121463bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463bc))), 0x1212085du);
  /* 1212085d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212085f je 0x12120873 */
  if (C.zf) goto L_12120873;
  /* 12120861 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12120868 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1212086e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12120871 jmp 0x1212087c */
  goto L_1212087c;
L_12120873:;
  /* 12120873 call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x12120879u);
  /* 12120879 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1212087c:;
  /* 1212087c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120880 jne 0x12120906 */
  if (!C.zf) goto L_12120906;
  /* 12120886 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212088a je 0x121208ba */
  if (C.zf) goto L_121208ba;
  /* 1212088c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120890 jne 0x121208a9 */
  if (!C.zf) goto L_121208a9;
  /* 12120892 call 0x1211fc40 */
  push32(0x12120897u); f_1211fc40();
  /* 12120897 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1212089d call 0x1211fc50 */
  push32(0x121208a2u); f_1211fc50();
  /* 121208a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121208a5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121208a7 jmp 0x121208b5 */
  goto L_121208b5;
L_121208a9:;
  /* 121208a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121208ac push edx */
  push32((uint32_t)(EDX));
  /* 121208ad call 0x1211fba0 */
  push32(0x121208b2u); f_1211fba0();
  /* 121208b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121208b5:;
  /* 121208b5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121208b8 jmp 0x1212090f */
  goto L_1212090f;
L_121208ba:;
  /* 121208ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121208bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121208c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121208c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121208c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121208c9 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121208d0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121208d5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 121208d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121208da je 0x121208eb */
  if (C.zf) goto L_121208eb;
  /* 121208dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121208df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121208e2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121208e5 jne 0x121208eb */
  if (!C.zf) goto L_121208eb;
  /* 121208e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121208e9 jmp 0x1212090f */
  goto L_1212090f;
L_121208eb:;
  /* 121208eb call 0x1211fc40 */
  push32(0x121208f0u); f_1211fc40();
  /* 121208f0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 121208f6 call 0x1211fc50 */
  push32(0x121208fbu); f_1211fc50();
  /* 121208fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12120901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12120904 jmp 0x1212090f */
  goto L_1212090f;
L_12120906:;
  /* 12120906 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12120909 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1212090f:;
  /* 1212090f mov esp, ebp */
  ESP = (EBP);
  /* 12120911 pop ebp */
  EBP = (pop32());
  /* 12120912 ret  */
  ESPCHK(0x121206a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x12120920 (199 bytes, 68 insns) */
void f_12120920(void) {
  FTRACE(0x12120920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120920 push ebp */
  push32((uint32_t)(EBP));
  /* 12120921 mov ebp, esp */
  EBP = (ESP);
  /* 12120923 push ecx */
  push32((uint32_t)(ECX));
  /* 12120924 push ebx */
  push32((uint32_t)(EBX));
  /* 12120925 push esi */
  push32((uint32_t)(ESI));
  /* 12120926 push edi */
  push32((uint32_t)(EDI));
L_12120927:;
  /* 12120927 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212092b jne 0x1212094b */
  if (!C.zf) goto L_1212094b;
  /* 1212092d push 0x1213f3dc */
  push32((uint32_t)(0x1213f3dcu));
  /* 12120932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120934 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12120936 push 0x1213f4a8 */
  push32((uint32_t)(0x1213f4a8u));
  /* 1212093b push 2 */
  push32((uint32_t)(0x2u));
  /* 1212093d call 0x12116e30 */
  push32(0x12120942u); f_12116e30();
  /* 12120942 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120945 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120948 jne 0x1212094b */
  if (!C.zf) goto L_1212094b;
  /* 1212094a int3  */
  x86_unimpl("int3 @ 0x1212094a");
L_1212094b:;
  /* 1212094b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212094d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212094f jne 0x12120927 */
  if (!C.zf) goto L_12120927;
  /* 12120951 mov ecx, dword ptr [0x12143a04] */
  ECX = (r32((uint32_t)(0x12143a04)));
  /* 12120957 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212095a mov dword ptr [0x12143a04], ecx */
  w32((uint32_t)(0x12143a04), (ECX));
  /* 12120960 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120963 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12120966 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12120968 push 0x1213f4a8 */
  push32((uint32_t)(0x1213f4a8u));
  /* 1212096d push 2 */
  push32((uint32_t)(0x2u));
  /* 1212096f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12120974 call 0x12117d70 */
  push32(0x12120979u); f_12117d70();
  /* 12120979 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212097c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212097f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12120982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120985 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120989 je 0x121209a6 */
  if (C.zf) goto L_121209a6;
  /* 1212098b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212098e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12120991 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12120994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120997 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1212099a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212099d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 121209a4 jmp 0x121209cb */
  goto L_121209cb;
L_121209a6:;
  /* 121209a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209a9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121209ac or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121209af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209b2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121209b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209b8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121209bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209be mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121209c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209c4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_121209cb:;
  /* 121209cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121209d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121209d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121209d9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 121209e0 pop edi */
  EDI = (pop32());
  /* 121209e1 pop esi */
  ESI = (pop32());
  /* 121209e2 pop ebx */
  EBX = (pop32());
  /* 121209e3 mov esp, ebp */
  ESP = (EBP);
  /* 121209e5 pop ebp */
  EBP = (pop32());
  /* 121209e6 ret  */
  ESPCHK(0x12120920u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x121209f0 (50 bytes, 17 insns) */
void f_121209f0(void) {
  FTRACE(0x121209f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121209f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121209f1 mov ebp, esp */
  EBP = (ESP);
  /* 121209f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121209f6 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121209fc jb 0x12120a02 */
  if (C.cf) goto L_12120a02;
  /* 121209fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120a00 jmp 0x12120a20 */
  goto L_12120a20;
L_12120a02:;
  /* 12120a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120a05 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12120a08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120a0b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12120a0e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12120a11 mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12120a18 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12120a1d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12120a20:;
  /* 12120a20 pop ebp */
  EBP = (pop32());
  /* 12120a21 ret  */
  ESPCHK(0x121209f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a30 @ 0x12120a30 (300 bytes, 80 insns) */
void f_12120a30(void) {
  FTRACE(0x12120a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12120a31 mov ebp, esp */
  EBP = (ESP);
  /* 12120a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12120a34 cmp dword ptr [0x12144ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12144ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120a3b jne 0x12120a49 */
  if (!C.zf) goto L_12120a49;
  /* 12120a3d mov dword ptr [0x12144ec0], 0x200 */
  w32((uint32_t)(0x12144ec0), (0x200u));
  /* 12120a47 jmp 0x12120a5c */
  goto L_12120a5c;
L_12120a49:;
  /* 12120a49 cmp dword ptr [0x12144ec0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12144ec0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120a50 jge 0x12120a5c */
  if ((C.sf==C.of)) goto L_12120a5c;
  /* 12120a52 mov dword ptr [0x12144ec0], 0x14 */
  w32((uint32_t)(0x12144ec0), (0x14u));
L_12120a5c:;
  /* 12120a5c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12120a61 push 0x1213f4b4 */
  push32((uint32_t)(0x1213f4b4u));
  /* 12120a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12120a68 push 4 */
  push32((uint32_t)(0x4u));
  /* 12120a6a mov eax, dword ptr [0x12144ec0] */
  EAX = (r32((uint32_t)(0x12144ec0)));
  /* 12120a6f push eax */
  push32((uint32_t)(EAX));
  /* 12120a70 call 0x12118180 */
  push32(0x12120a75u); f_12118180();
  /* 12120a75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120a78 mov dword ptr [0x12143b78], eax */
  w32((uint32_t)(0x12143b78), (EAX));
  /* 12120a7d cmp dword ptr [0x12143b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120a84 jne 0x12120ac5 */
  if (!C.zf) goto L_12120ac5;
  /* 12120a86 mov dword ptr [0x12144ec0], 0x14 */
  w32((uint32_t)(0x12144ec0), (0x14u));
  /* 12120a90 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12120a95 push 0x1213f4b4 */
  push32((uint32_t)(0x1213f4b4u));
  /* 12120a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12120a9c push 4 */
  push32((uint32_t)(0x4u));
  /* 12120a9e mov ecx, dword ptr [0x12144ec0] */
  ECX = (r32((uint32_t)(0x12144ec0)));
  /* 12120aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12120aa5 call 0x12118180 */
  push32(0x12120aaau); f_12118180();
  /* 12120aaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120aad mov dword ptr [0x12143b78], eax */
  w32((uint32_t)(0x12143b78), (EAX));
  /* 12120ab2 cmp dword ptr [0x12143b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120ab9 jne 0x12120ac5 */
  if (!C.zf) goto L_12120ac5;
  /* 12120abb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12120abd call 0x12116ce0 */
  push32(0x12120ac2u); f_12116ce0();
  /* 12120ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12120ac5:;
  /* 12120ac5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12120acc jmp 0x12120ad7 */
  goto L_12120ad7;
L_12120ace:;
  /* 12120ace mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120ad1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120ad4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12120ad7:;
  /* 12120ad7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120adb jge 0x12120af6 */
  if ((C.sf==C.of)) goto L_12120af6;
  /* 12120add mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120ae0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12120ae3 add eax, 0x12142120 */
  { uint32_t _a=(EAX),_b=(0x12142120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120ae8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120aeb mov edx, dword ptr [0x12143b78] */
  EDX = (r32((uint32_t)(0x12143b78)));
  /* 12120af1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12120af4 jmp 0x12120ace */
  goto L_12120ace;
L_12120af6:;
  /* 12120af6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12120afd jmp 0x12120b08 */
  goto L_12120b08;
L_12120aff:;
  /* 12120aff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120b02 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120b05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12120b08:;
  /* 12120b08 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120b0c jge 0x12120b58 */
  if ((C.sf==C.of)) goto L_12120b58;
  /* 12120b0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120b11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12120b14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120b17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12120b1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12120b1d mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12120b24 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120b28 je 0x12120b46 */
  if (C.zf) goto L_12120b46;
  /* 12120b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120b2d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12120b30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120b33 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12120b36 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12120b39 mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12120b40 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120b44 jne 0x12120b56 */
  if (!C.zf) goto L_12120b56;
L_12120b46:;
  /* 12120b46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120b49 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12120b4c mov dword ptr [ecx + 0x12142130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12142130), (0xffffffffu));
L_12120b56:;
  /* 12120b56 jmp 0x12120aff */
  goto L_12120aff;
L_12120b58:;
  /* 12120b58 mov esp, ebp */
  ESP = (EBP);
  /* 12120b5a pop ebp */
  EBP = (pop32());
  /* 12120b5b ret  */
  ESPCHK(0x12120a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b60 @ 0x12120b60 (26 bytes, 9 insns) */
void f_12120b60(void) {
  FTRACE(0x12120b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12120b61 mov ebp, esp */
  EBP = (ESP);
  /* 12120b63 call 0x12121760 */
  push32(0x12120b68u); f_12121760();
  /* 12120b68 movsx eax, byte ptr [0x1214381c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1214381c))));
  /* 12120b6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12120b71 je 0x12120b78 */
  if (C.zf) goto L_12120b78;
  /* 12120b73 call 0x12121520 */
  push32(0x12120b78u); f_12121520();
L_12120b78:;
  /* 12120b78 pop ebp */
  EBP = (pop32());
  /* 12120b79 ret  */
  ESPCHK(0x12120b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b80 @ 0x12120b80 (61 bytes, 20 insns) */
void f_12120b80(void) {
  FTRACE(0x12120b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12120b81 mov ebp, esp */
  EBP = (ESP);
  /* 12120b83 cmp dword ptr [ebp + 8], 0x12142120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12142120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120b8a jb 0x12120bae */
  if (C.cf) goto L_12120bae;
  /* 12120b8c cmp dword ptr [ebp + 8], 0x12142380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12142380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120b93 ja 0x12120bae */
  if ((!C.cf&&!C.zf)) goto L_12120bae;
  /* 12120b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120b98 sub eax, 0x12142120 */
  { uint32_t _a=(EAX),_b=(0x12142120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120b9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12120ba0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12120ba4 call 0x1211b770 */
  push32(0x12120ba9u); f_1211b770();
  /* 12120ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120bac jmp 0x12120bbb */
  goto L_12120bbb;
L_12120bae:;
  /* 12120bae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120bb1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12120bb5 call dword ptr [0x12146360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146360))), 0x12120bbbu);
L_12120bbb:;
  /* 12120bbb pop ebp */
  EBP = (pop32());
  /* 12120bbc ret  */
  ESPCHK(0x12120b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bc0 @ 0x12120bc0 (41 bytes, 16 insns) */
void f_12120bc0(void) {
  FTRACE(0x12120bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12120bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12120bc3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120bc7 jge 0x12120bda */
  if ((C.sf==C.of)) goto L_12120bda;
  /* 12120bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120bcc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120bcf push eax */
  push32((uint32_t)(EAX));
  /* 12120bd0 call 0x1211b770 */
  push32(0x12120bd5u); f_1211b770();
  /* 12120bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120bd8 jmp 0x12120be7 */
  goto L_12120be7;
L_12120bda:;
  /* 12120bda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120bdd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120be0 push ecx */
  push32((uint32_t)(ECX));
  /* 12120be1 call dword ptr [0x12146360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146360))), 0x12120be7u);
L_12120be7:;
  /* 12120be7 pop ebp */
  EBP = (pop32());
  /* 12120be8 ret  */
  ESPCHK(0x12120bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf0 @ 0x12120bf0 (61 bytes, 20 insns) */
void f_12120bf0(void) {
  FTRACE(0x12120bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12120bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12120bf3 cmp dword ptr [ebp + 8], 0x12142120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12142120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120bfa jb 0x12120c1e */
  if (C.cf) goto L_12120c1e;
  /* 12120bfc cmp dword ptr [ebp + 8], 0x12142380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12142380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120c03 ja 0x12120c1e */
  if ((!C.cf&&!C.zf)) goto L_12120c1e;
  /* 12120c05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120c08 sub eax, 0x12142120 */
  { uint32_t _a=(EAX),_b=(0x12142120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120c0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12120c10 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c13 push eax */
  push32((uint32_t)(EAX));
  /* 12120c14 call 0x1211b810 */
  push32(0x12120c19u); f_1211b810();
  /* 12120c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c1c jmp 0x12120c2b */
  goto L_12120c2b;
L_12120c1e:;
  /* 12120c1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120c21 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c24 push ecx */
  push32((uint32_t)(ECX));
  /* 12120c25 call dword ptr [0x1214635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214635c))), 0x12120c2bu);
L_12120c2b:;
  /* 12120c2b pop ebp */
  EBP = (pop32());
  /* 12120c2c ret  */
  ESPCHK(0x12120bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x12120c30 (41 bytes, 16 insns) */
void f_12120c30(void) {
  FTRACE(0x12120c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12120c31 mov ebp, esp */
  EBP = (ESP);
  /* 12120c33 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120c37 jge 0x12120c4a */
  if ((C.sf==C.of)) goto L_12120c4a;
  /* 12120c39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120c3c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c3f push eax */
  push32((uint32_t)(EAX));
  /* 12120c40 call 0x1211b810 */
  push32(0x12120c45u); f_1211b810();
  /* 12120c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c48 jmp 0x12120c57 */
  goto L_12120c57;
L_12120c4a:;
  /* 12120c4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120c4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12120c51 call dword ptr [0x1214635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214635c))), 0x12120c57u);
L_12120c57:;
  /* 12120c57 pop ebp */
  EBP = (pop32());
  /* 12120c58 ret  */
  ESPCHK(0x12120c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x12120c60 (119 bytes, 34 insns) */
void f_12120c60(void) {
  FTRACE(0x12120c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12120c61 mov ebp, esp */
  EBP = (ESP);
  /* 12120c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120c66 push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 12120c6b call dword ptr [0x121463d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463d0))), 0x12120c71u);
  /* 12120c71 cmp dword ptr [0x12143b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120c78 je 0x12120c98 */
  if (C.zf) goto L_12120c98;
  /* 12120c7a push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 12120c7f call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x12120c85u);
  /* 12120c85 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12120c87 call 0x1211b770 */
  push32(0x12120c8cu); f_1211b770();
  /* 12120c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120c8f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12120c96 jmp 0x12120c9f */
  goto L_12120c9f;
L_12120c98:;
  /* 12120c98 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12120c9f:;
  /* 12120c9f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12120ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12120ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 12120ca8 call 0x12120ce0 */
  push32(0x12120cadu); f_12120ce0();
  /* 12120cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120cb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12120cb3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120cb7 je 0x12120cc5 */
  if (C.zf) goto L_12120cc5;
  /* 12120cb9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12120cbb call 0x1211b810 */
  push32(0x12120cc0u); f_1211b810();
  /* 12120cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120cc3 jmp 0x12120cd0 */
  goto L_12120cd0;
L_12120cc5:;
  /* 12120cc5 push 0x12143b74 */
  push32((uint32_t)(0x12143b74u));
  /* 12120cca call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x12120cd0u);
L_12120cd0:;
  /* 12120cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12120cd3 mov esp, ebp */
  ESP = (EBP);
  /* 12120cd5 pop ebp */
  EBP = (pop32());
  /* 12120cd6 ret  */
  ESPCHK(0x12120c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x12120ce0 (160 bytes, 50 insns) */
void f_12120ce0(void) {
  FTRACE(0x12120ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12120ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12120ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120ce6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120cea jne 0x12120cf3 */
  if (!C.zf) goto L_12120cf3;
  /* 12120cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12120cee jmp 0x12120d7c */
  goto L_12120d7c;
L_12120cf3:;
  /* 12120cf3 cmp dword ptr [0x121439e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120cfa jne 0x12120d2a */
  if (!C.zf) goto L_12120d2a;
  /* 12120cfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12120cff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12120d04 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120d09 jle 0x12120d1b */
  if ((C.zf||C.sf!=C.of)) goto L_12120d1b;
  /* 12120d0b call 0x1211fc40 */
  push32(0x12120d10u); f_1211fc40();
  /* 12120d10 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12120d16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12120d19 jmp 0x12120d7c */
  goto L_12120d7c;
L_12120d1b:;
  /* 12120d1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120d1e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12120d21 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12120d23 mov eax, 1 */
  EAX = (0x1u);
  /* 12120d28 jmp 0x12120d7c */
  goto L_12120d7c;
L_12120d2a:;
  /* 12120d2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12120d31 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12120d34 push eax */
  push32((uint32_t)(EAX));
  /* 12120d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120d37 mov ecx, dword ptr [0x12141ea4] */
  ECX = (r32((uint32_t)(0x12141ea4)));
  /* 12120d3d push ecx */
  push32((uint32_t)(ECX));
  /* 12120d3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120d41 push edx */
  push32((uint32_t)(EDX));
  /* 12120d42 push 1 */
  push32((uint32_t)(0x1u));
  /* 12120d44 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12120d47 push eax */
  push32((uint32_t)(EAX));
  /* 12120d48 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12120d4d mov ecx, dword ptr [0x121439f8] */
  ECX = (r32((uint32_t)(0x121439f8)));
  /* 12120d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12120d54 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x12120d5au);
  /* 12120d5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12120d5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120d61 je 0x12120d69 */
  if (C.zf) goto L_12120d69;
  /* 12120d63 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120d67 je 0x12120d79 */
  if (C.zf) goto L_12120d79;
L_12120d69:;
  /* 12120d69 call 0x1211fc40 */
  push32(0x12120d6eu); f_1211fc40();
  /* 12120d6e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12120d74 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12120d77 jmp 0x12120d7c */
  goto L_12120d7c;
L_12120d79:;
  /* 12120d79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12120d7c:;
  /* 12120d7c mov esp, ebp */
  ESP = (EBP);
  /* 12120d7e pop ebp */
  EBP = (pop32());
  /* 12120d7f ret  */
  ESPCHK(0x12120ce0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12120d80 (32 bytes, 18 insns) */
void f_12120d80(void) {
  FTRACE(0x12120d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12120d81 mov ebp, esp */
  EBP = (ESP);
  /* 12120d83 push ebx */
  push32((uint32_t)(EBX));
  /* 12120d84 push esi */
  push32((uint32_t)(ESI));
  /* 12120d85 push edi */
  push32((uint32_t)(EDI));
  /* 12120d86 push ebp */
  push32((uint32_t)(EBP));
  /* 12120d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12120d8b push 0x12120d98 */
  push32((uint32_t)(0x12120d98u));
  /* 12120d90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12120d93 call 0x121284cc */
  push32(0x12120d98u); f_121284cc();
  /* 12120d98 pop ebp */
  EBP = (pop32());
  /* 12120d99 pop edi */
  EDI = (pop32());
  /* 12120d9a pop esi */
  ESI = (pop32());
  /* 12120d9b pop ebx */
  EBX = (pop32());
  /* 12120d9c mov esp, ebp */
  ESP = (EBP);
  /* 12120d9e pop ebp */
  EBP = (pop32());
  /* 12120d9f ret  */
  ESPCHK(0x12120d80u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12120dc2 (104 bytes, 33 insns) */
void f_12120dc2(void) {
  FTRACE(0x12120dc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120dc2 push ebx */
  push32((uint32_t)(EBX));
  /* 12120dc3 push esi */
  push32((uint32_t)(ESI));
  /* 12120dc4 push edi */
  push32((uint32_t)(EDI));
  /* 12120dc5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12120dc9 push eax */
  push32((uint32_t)(EAX));
  /* 12120dca push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12120dcc push 0x12120da0 */
  push32((uint32_t)(0x12120da0u));
  /* 12120dd1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12120dd8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12120ddf:;
  /* 12120ddf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12120de3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12120de6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12120de9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120dec je 0x12120e1c */
  if (C.zf) goto L_12120e1c;
  /* 12120dee cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120df2 je 0x12120e1c */
  if (C.zf) goto L_12120e1c;
  /* 12120df4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12120df7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12120dfa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12120dfe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12120e01 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120e06 jne 0x12120e1a */
  if (!C.zf) goto L_12120e1a;
  /* 12120e08 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12120e0d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12120e11 call 0x12120e56 */
  push32(0x12120e16u); f_12120e56();
  /* 12120e16 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12120e1au);
L_12120e1a:;
  /* 12120e1a jmp 0x12120ddf */
  goto L_12120ddf;
L_12120e1c:;
  /* 12120e1c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12120e23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120e26 pop edi */
  EDI = (pop32());
  /* 12120e27 pop esi */
  ESI = (pop32());
  /* 12120e28 pop ebx */
  EBX = (pop32());
  /* 12120e29 ret  */
  ESPCHK(0x12120dc2u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e56 @ 0x12120e56 (24 bytes, 10 insns) */
void f_12120e56(void) {
  FTRACE(0x12120e56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120e56 push ebx */
  push32((uint32_t)(EBX));
  /* 12120e57 push ecx */
  push32((uint32_t)(ECX));
  /* 12120e58 mov ebx, 0x121423b8 */
  EBX = (0x121423b8u);
  /* 12120e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12120e60 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12120e63 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12120e66 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12120e69 pop ecx */
  ECX = (pop32());
  /* 12120e6a pop ebx */
  EBX = (pop32());
  /* 12120e6b ret 4 */
  ESPCHK(0x12120e56u, _esp0);
  ESP += 8; return;
}

/* FUN_10010f35 @ 0x12120f35 (27 bytes, 11 insns) */
void f_12120f35(void) {
  FTRACE(0x12120f35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120f35 push ebp */
  push32((uint32_t)(EBP));
  /* 12120f36 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12120f3a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12120f3c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12120f3f push eax */
  push32((uint32_t)(EAX));
  /* 12120f40 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12120f43 push eax */
  push32((uint32_t)(EAX));
  /* 12120f44 call 0x12120dc2 */
  push32(0x12120f49u); f_12120dc2();
  /* 12120f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120f4c pop ebp */
  EBP = (pop32());
  /* 12120f4d ret 4 */
  ESPCHK(0x12120f35u, _esp0);
  ESP += 8; return;
}

/* FUN_10010f50 @ 0x12120f50 (482 bytes, 138 insns) */
void f_12120f50(void) {
  FTRACE(0x12120f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12120f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12120f51 mov ebp, esp */
  EBP = (ESP);
  /* 12120f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12120f56 push esi */
  push32((uint32_t)(ESI));
  /* 12120f57 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12120f5e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12120f60 call 0x1211b770 */
  push32(0x12120f65u); f_1211b770();
  /* 12120f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120f68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12120f6f jmp 0x12120f7a */
  goto L_12120f7a;
L_12120f71:;
  /* 12120f71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12120f74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120f77 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12120f7a:;
  /* 12120f7a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120f7e jge 0x12121120 */
  if ((C.sf==C.of)) goto L_12121120;
  /* 12120f84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12120f87 cmp dword ptr [ecx*4 + 0x121451c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x121451c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120f8f je 0x12121086 */
  if (C.zf) goto L_12121086;
  /* 12120f95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12120f98 mov eax, dword ptr [edx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 12120f9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12120fa2 jmp 0x12120fad */
  goto L_12120fad;
L_12120fa4:;
  /* 12120fa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120fa7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12120fad:;
  /* 12120fad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12120fb0 mov eax, dword ptr [edx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 12120fb7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120fbc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120fbf jae 0x12121076 */
  if (!C.cf) goto L_12121076;
  /* 12120fc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120fc8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12120fcc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12120fcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12120fd1 jne 0x12121071 */
  if (!C.zf) goto L_12121071;
  /* 12120fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120fda cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120fde jne 0x12121019 */
  if (!C.zf) goto L_12121019;
  /* 12120fe0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12120fe2 call 0x1211b770 */
  push32(0x12120fe7u); f_1211b770();
  /* 12120fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12120fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120fed cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12120ff1 jne 0x1212100f */
  if (!C.zf) goto L_1212100f;
  /* 12120ff3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12120ff6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12120ff9 push edx */
  push32((uint32_t)(EDX));
  /* 12120ffa call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x12121000u);
  /* 12121000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121003 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12121006 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121009 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212100c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1212100f:;
  /* 1212100f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12121011 call 0x1211b810 */
  push32(0x12121016u); f_1211b810();
  /* 12121016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12121019:;
  /* 12121019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212101c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212101f push eax */
  push32((uint32_t)(EAX));
  /* 12121020 call dword ptr [0x12146360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146360))), 0x12121026u);
  /* 12121026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121029 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1212102d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12121030 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12121032 je 0x12121046 */
  if (C.zf) goto L_12121046;
  /* 12121034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121037 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212103a push eax */
  push32((uint32_t)(EAX));
  /* 1212103b call dword ptr [0x1214635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214635c))), 0x12121041u);
  /* 12121041 jmp 0x12120fa4 */
  goto L_12120fa4;
L_12121046:;
  /* 12121046 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121049 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1212104f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121052 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12121055 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212105b sub eax, dword ptr [edx*4 + 0x121451c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x121451c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121062 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12121063 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12121068 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1212106a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212106c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212106f jmp 0x12121076 */
  goto L_12121076;
L_12121071:;
  /* 12121071 jmp 0x12120fa4 */
  goto L_12120fa4;
L_12121076:;
  /* 12121076 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212107a je 0x12121081 */
  if (C.zf) goto L_12121081;
  /* 1212107c jmp 0x12121120 */
  goto L_12121120;
L_12121081:;
  /* 12121081 jmp 0x1212111b */
  goto L_1212111b;
L_12121086:;
  /* 12121086 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12121088 push 0x1213f4bc */
  push32((uint32_t)(0x1213f4bcu));
  /* 1212108d push 2 */
  push32((uint32_t)(0x2u));
  /* 1212108f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12121094 call 0x12117d70 */
  push32(0x12121099u); f_12117d70();
  /* 12121099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212109c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212109f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121210a3 je 0x12121119 */
  if (C.zf) goto L_12121119;
  /* 121210a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121210a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121210ab mov dword ptr [eax*4 + 0x121451c0], ecx */
  w32((uint32_t)(EAX*4 + 0x121451c0), (ECX));
  /* 121210b2 mov edx, dword ptr [0x121452fc] */
  EDX = (r32((uint32_t)(0x121452fc)));
  /* 121210b8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121210bb mov dword ptr [0x121452fc], edx */
  w32((uint32_t)(0x121452fc), (EDX));
  /* 121210c1 jmp 0x121210cc */
  goto L_121210cc;
L_121210c3:;
  /* 121210c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121210c6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121210c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121210cc:;
  /* 121210cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121210cf mov edx, dword ptr [ecx*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 121210d6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121210dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121210df jae 0x12121104 */
  if (!C.cf) goto L_12121104;
  /* 121210e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121210e4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 121210e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121210eb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121210f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121210f4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 121210f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121210fb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12121102 jmp 0x121210c3 */
  goto L_121210c3;
L_12121104:;
  /* 12121104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121107 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1212110a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212110d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121110 push edx */
  push32((uint32_t)(EDX));
  /* 12121111 call 0x12121460 */
  push32(0x12121116u); f_12121460();
  /* 12121116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12121119:;
  /* 12121119 jmp 0x12121120 */
  goto L_12121120;
L_1212111b:;
  /* 1212111b jmp 0x12120f71 */
  goto L_12120f71;
L_12121120:;
  /* 12121120 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12121122 call 0x1211b810 */
  push32(0x12121127u); f_1211b810();
  /* 12121127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212112a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212112d pop esi */
  ESI = (pop32());
  /* 1212112e mov esp, ebp */
  ESP = (EBP);
  /* 12121130 pop ebp */
  EBP = (pop32());
  /* 12121131 ret  */
  ESPCHK(0x12120f50u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12121140 (183 bytes, 57 insns) */
void f_12121140(void) {
  FTRACE(0x12121140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121140 push ebp */
  push32((uint32_t)(EBP));
  /* 12121141 mov ebp, esp */
  EBP = (ESP);
  /* 12121143 push ecx */
  push32((uint32_t)(ECX));
  /* 12121144 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121147 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212114d jae 0x121211da */
  if (!C.cf) goto L_121211da;
  /* 12121153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121156 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12121159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212115c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1212115f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121162 mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12121169 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212116d jne 0x121211da */
  if (!C.zf) goto L_121211da;
  /* 1212116f cmp dword ptr [0x121437dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121176 jne 0x121211ba */
  if (!C.zf) goto L_121211ba;
  /* 12121178 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212117b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1212117e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121182 je 0x12121192 */
  if (C.zf) goto L_12121192;
  /* 12121184 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121188 je 0x121211a0 */
  if (C.zf) goto L_121211a0;
  /* 1212118a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212118e je 0x121211ae */
  if (C.zf) goto L_121211ae;
  /* 12121190 jmp 0x121211ba */
  goto L_121211ba;
L_12121192:;
  /* 12121192 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121195 push edx */
  push32((uint32_t)(EDX));
  /* 12121196 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12121198 call dword ptr [0x12146328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146328))), 0x1212119eu);
  /* 1212119e jmp 0x121211ba */
  goto L_121211ba;
L_121211a0:;
  /* 121211a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121211a3 push eax */
  push32((uint32_t)(EAX));
  /* 121211a4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 121211a6 call dword ptr [0x12146328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146328))), 0x121211acu);
  /* 121211ac jmp 0x121211ba */
  goto L_121211ba;
L_121211ae:;
  /* 121211ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121211b1 push ecx */
  push32((uint32_t)(ECX));
  /* 121211b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 121211b4 call dword ptr [0x12146328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146328))), 0x121211bau);
L_121211ba:;
  /* 121211ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121211bd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121211c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121211c3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121211c6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121211c9 mov ecx, dword ptr [edx*4 + 0x121451c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 121211d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121211d3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 121211d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121211d8 jmp 0x121211f3 */
  goto L_121211f3;
L_121211da:;
  /* 121211da call 0x1211fc40 */
  push32(0x121211dfu); f_1211fc40();
  /* 121211df mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121211e5 call 0x1211fc50 */
  push32(0x121211eau); f_1211fc50();
  /* 121211ea mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121211f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121211f3:;
  /* 121211f3 mov esp, ebp */
  ESP = (EBP);
  /* 121211f5 pop ebp */
  EBP = (pop32());
  /* 121211f6 ret  */
  ESPCHK(0x12121140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x12121200 (216 bytes, 63 insns) */
void f_12121200(void) {
  FTRACE(0x12121200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121200 push ebp */
  push32((uint32_t)(EBP));
  /* 12121201 mov ebp, esp */
  EBP = (ESP);
  /* 12121203 push ecx */
  push32((uint32_t)(ECX));
  /* 12121204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121207 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212120d jae 0x121212bb */
  if (!C.cf) goto L_121212bb;
  /* 12121213 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121216 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12121219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212121c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1212121f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121222 mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12121229 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1212122e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12121231 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12121233 je 0x121212bb */
  if (C.zf) goto L_121212bb;
  /* 12121239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212123c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1212123f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121242 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12121245 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121248 mov ecx, dword ptr [edx*4 + 0x121451c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 1212124f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121253 je 0x121212bb */
  if (C.zf) goto L_121212bb;
  /* 12121255 cmp dword ptr [0x121437dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212125c jne 0x1212129a */
  if (!C.zf) goto L_1212129a;
  /* 1212125e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121261 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12121264 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121268 je 0x12121278 */
  if (C.zf) goto L_12121278;
  /* 1212126a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212126e je 0x12121284 */
  if (C.zf) goto L_12121284;
  /* 12121270 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121274 je 0x12121290 */
  if (C.zf) goto L_12121290;
  /* 12121276 jmp 0x1212129a */
  goto L_1212129a;
L_12121278:;
  /* 12121278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212127a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1212127c call dword ptr [0x12146328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146328))), 0x12121282u);
  /* 12121282 jmp 0x1212129a */
  goto L_1212129a;
L_12121284:;
  /* 12121284 push 0 */
  push32((uint32_t)(0x0u));
  /* 12121286 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12121288 call dword ptr [0x12146328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146328))), 0x1212128eu);
  /* 1212128e jmp 0x1212129a */
  goto L_1212129a;
L_12121290:;
  /* 12121290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12121292 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12121294 call dword ptr [0x12146328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146328))), 0x1212129au);
L_1212129a:;
  /* 1212129a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212129d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121212a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121212a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121212a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121212a9 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121212b0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 121212b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121212b9 jmp 0x121212d4 */
  goto L_121212d4;
L_121212bb:;
  /* 121212bb call 0x1211fc40 */
  push32(0x121212c0u); f_1211fc40();
  /* 121212c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121212c6 call 0x1211fc50 */
  push32(0x121212cbu); f_1211fc50();
  /* 121212cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121212d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121212d4:;
  /* 121212d4 mov esp, ebp */
  ESP = (EBP);
  /* 121212d6 pop ebp */
  EBP = (pop32());
  /* 121212d7 ret  */
  ESPCHK(0x12121200u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x121212e0 (102 bytes, 30 insns) */
void f_121212e0(void) {
  FTRACE(0x121212e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121212e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121212e1 mov ebp, esp */
  EBP = (ESP);
  /* 121212e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121212e6 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121212ec jae 0x1212132b */
  if (!C.cf) goto L_1212132b;
  /* 121212ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121212f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121212f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121212f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121212fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121212fd mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12121304 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12121309 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1212130c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212130e je 0x1212132b */
  if (C.zf) goto L_1212132b;
  /* 12121310 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121313 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12121316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121319 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1212131c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212131f mov ecx, dword ptr [edx*4 + 0x121451c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 12121326 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12121329 jmp 0x12121344 */
  goto L_12121344;
L_1212132b:;
  /* 1212132b call 0x1211fc40 */
  push32(0x12121330u); f_1211fc40();
  /* 12121330 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12121336 call 0x1211fc50 */
  push32(0x1212133bu); f_1211fc50();
  /* 1212133b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12121341 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12121344:;
  /* 12121344 pop ebp */
  EBP = (pop32());
  /* 12121345 ret  */
  ESPCHK(0x121212e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x12121350 (260 bytes, 83 insns) */
void f_12121350(void) {
  FTRACE(0x12121350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121350 push ebp */
  push32((uint32_t)(EBP));
  /* 12121351 mov ebp, esp */
  EBP = (ESP);
  /* 12121353 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121356 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1212135a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212135d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12121360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121362 je 0x1212136d */
  if (C.zf) goto L_1212136d;
  /* 12121364 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12121367 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1212136a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1212136d:;
  /* 1212136d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121370 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12121376 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12121378 je 0x12121382 */
  if (C.zf) goto L_12121382;
  /* 1212137a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1212137d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1212137f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12121382:;
  /* 12121382 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121385 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1212138b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212138d je 0x12121398 */
  if (C.zf) goto L_12121398;
  /* 1212138f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12121392 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12121395 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12121398:;
  /* 12121398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212139b push eax */
  push32((uint32_t)(EAX));
  /* 1212139c call dword ptr [0x121463a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463a4))), 0x121213a2u);
  /* 121213a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121213a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121213a9 jne 0x121213c2 */
  if (!C.zf) goto L_121213c2;
  /* 121213ab call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x121213b1u);
  /* 121213b1 push eax */
  push32((uint32_t)(EAX));
  /* 121213b2 call 0x1211fba0 */
  push32(0x121213b7u); f_1211fba0();
  /* 121213b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121213ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121213bd jmp 0x12121450 */
  goto L_12121450;
L_121213c2:;
  /* 121213c2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121213c6 jne 0x121213d3 */
  if (!C.zf) goto L_121213d3;
  /* 121213c8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 121213cb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 121213ce mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 121213d1 jmp 0x121213e2 */
  goto L_121213e2;
L_121213d3:;
  /* 121213d3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121213d7 jne 0x121213e2 */
  if (!C.zf) goto L_121213e2;
  /* 121213d9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121213dc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 121213df mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_121213e2:;
  /* 121213e2 call 0x12120f50 */
  push32(0x121213e7u); f_12120f50();
  /* 121213e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121213ea cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121213ee jne 0x1212140b */
  if (!C.zf) goto L_1212140b;
  /* 121213f0 call 0x1211fc40 */
  push32(0x121213f5u); f_1211fc40();
  /* 121213f5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 121213fb call 0x1211fc50 */
  push32(0x12121400u); f_1211fc50();
  /* 12121400 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12121406 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12121409 jmp 0x12121450 */
  goto L_12121450;
L_1212140b:;
  /* 1212140b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212140e push eax */
  push32((uint32_t)(EAX));
  /* 1212140f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121412 push ecx */
  push32((uint32_t)(ECX));
  /* 12121413 call 0x12121140 */
  push32(0x12121418u); f_12121140();
  /* 12121418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212141b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1212141e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12121421 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12121424 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121427 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1212142a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212142d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12121430 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121433 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 1212143a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1212143d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12121441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121444 push ecx */
  push32((uint32_t)(ECX));
  /* 12121445 call 0x121214f0 */
  push32(0x1212144au); f_121214f0();
  /* 1212144a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212144d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12121450:;
  /* 12121450 mov esp, ebp */
  ESP = (EBP);
  /* 12121452 pop ebp */
  EBP = (pop32());
  /* 12121453 ret  */
  ESPCHK(0x12121350u, _esp0);
  ESP += 4; return;
}

/* FUN_10011460 @ 0x12121460 (134 bytes, 44 insns) */
void f_12121460(void) {
  FTRACE(0x12121460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121460 push ebp */
  push32((uint32_t)(EBP));
  /* 12121461 mov ebp, esp */
  EBP = (ESP);
  /* 12121463 push ecx */
  push32((uint32_t)(ECX));
  /* 12121464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121467 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1212146a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212146d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12121470 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121473 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 1212147a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212147c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1212147f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121482 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121486 jne 0x121214c1 */
  if (!C.zf) goto L_121214c1;
  /* 12121488 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1212148a call 0x1211b770 */
  push32(0x1212148fu); f_1211b770();
  /* 1212148f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121495 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121499 jne 0x121214b7 */
  if (!C.zf) goto L_121214b7;
  /* 1212149b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212149e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121214a1 push edx */
  push32((uint32_t)(EDX));
  /* 121214a2 call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x121214a8u);
  /* 121214a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121214ab mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121214ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121214b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121214b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_121214b7:;
  /* 121214b7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121214b9 call 0x1211b810 */
  push32(0x121214beu); f_1211b810();
  /* 121214be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121214c1:;
  /* 121214c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121214c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121214c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121214ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121214cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121214d0 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121214d7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 121214db push eax */
  push32((uint32_t)(EAX));
  /* 121214dc call dword ptr [0x12146360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146360))), 0x121214e2u);
  /* 121214e2 mov esp, ebp */
  ESP = (EBP);
  /* 121214e4 pop ebp */
  EBP = (pop32());
  /* 121214e5 ret  */
  ESPCHK(0x12121460u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x121214f0 (38 bytes, 13 insns) */
void f_121214f0(void) {
  FTRACE(0x121214f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121214f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121214f1 mov ebp, esp */
  EBP = (ESP);
  /* 121214f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121214f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121214f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121214fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121214ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121502 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 12121509 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1212150d push eax */
  push32((uint32_t)(EAX));
  /* 1212150e call dword ptr [0x1214635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214635c))), 0x12121514u);
  /* 12121514 pop ebp */
  EBP = (pop32());
  /* 12121515 ret  */
  ESPCHK(0x121214f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011520 @ 0x12121520 (218 bytes, 63 insns) */
void f_12121520(void) {
  FTRACE(0x12121520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121520 push ebp */
  push32((uint32_t)(EBP));
  /* 12121521 mov ebp, esp */
  EBP = (ESP);
  /* 12121523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121526 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1212152d push 2 */
  push32((uint32_t)(0x2u));
  /* 1212152f call 0x1211b770 */
  push32(0x12121534u); f_1211b770();
  /* 12121534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121537 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1212153e jmp 0x12121549 */
  goto L_12121549;
L_12121540:;
  /* 12121540 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121543 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121546 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12121549:;
  /* 12121549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212154c cmp ecx, dword ptr [0x12144ec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12144ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121552 jge 0x121215e9 */
  if ((C.sf==C.of)) goto L_121215e9;
  /* 12121558 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212155b mov eax, dword ptr [0x12143b78] */
  EAX = (r32((uint32_t)(0x12143b78)));
  /* 12121560 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121564 je 0x121215e4 */
  if (C.zf) goto L_121215e4;
  /* 12121566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121569 mov edx, dword ptr [0x12143b78] */
  EDX = (r32((uint32_t)(0x12143b78)));
  /* 1212156f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12121572 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12121575 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1212157b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212157d je 0x121215a1 */
  if (C.zf) goto L_121215a1;
  /* 1212157f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121582 mov eax, dword ptr [0x12143b78] */
  EAX = (r32((uint32_t)(0x12143b78)));
  /* 12121587 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1212158a push ecx */
  push32((uint32_t)(ECX));
  /* 1212158b call 0x12122310 */
  push32(0x12121590u); f_12122310();
  /* 12121590 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121593 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121596 je 0x121215a1 */
  if (C.zf) goto L_121215a1;
  /* 12121598 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212159b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212159e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121215a1:;
  /* 121215a1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121215a5 jl 0x121215e4 */
  if ((C.sf!=C.of)) goto L_121215e4;
  /* 121215a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121215aa mov ecx, dword ptr [0x12143b78] */
  ECX = (r32((uint32_t)(0x12143b78)));
  /* 121215b0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121215b3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121215b6 push edx */
  push32((uint32_t)(EDX));
  /* 121215b7 call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x121215bdu);
  /* 121215bd push 2 */
  push32((uint32_t)(0x2u));
  /* 121215bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121215c2 mov ecx, dword ptr [0x12143b78] */
  ECX = (r32((uint32_t)(0x12143b78)));
  /* 121215c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121215cb push edx */
  push32((uint32_t)(EDX));
  /* 121215cc call 0x12118800 */
  push32(0x121215d1u); f_12118800();
  /* 121215d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121215d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121215d7 mov ecx, dword ptr [0x12143b78] */
  ECX = (r32((uint32_t)(0x12143b78)));
  /* 121215dd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_121215e4:;
  /* 121215e4 jmp 0x12121540 */
  goto L_12121540;
L_121215e9:;
  /* 121215e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121215eb call 0x1211b810 */
  push32(0x121215f0u); f_1211b810();
  /* 121215f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121215f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121215f6 mov esp, ebp */
  ESP = (EBP);
  /* 121215f8 pop ebp */
  EBP = (pop32());
  /* 121215f9 ret  */
  ESPCHK(0x12121520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011600 @ 0x12121600 (68 bytes, 26 insns) */
void f_12121600(void) {
  FTRACE(0x12121600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121600 push ebp */
  push32((uint32_t)(EBP));
  /* 12121601 mov ebp, esp */
  EBP = (ESP);
  /* 12121603 push ecx */
  push32((uint32_t)(ECX));
  /* 12121604 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121608 jne 0x12121616 */
  if (!C.zf) goto L_12121616;
  /* 1212160a push 0 */
  push32((uint32_t)(0x0u));
  /* 1212160c call 0x12121770 */
  push32(0x12121611u); f_12121770();
  /* 12121611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121614 jmp 0x12121640 */
  goto L_12121640;
L_12121616:;
  /* 12121616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121619 push eax */
  push32((uint32_t)(EAX));
  /* 1212161a call 0x12120b80 */
  push32(0x1212161fu); f_12120b80();
  /* 1212161f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121625 push ecx */
  push32((uint32_t)(ECX));
  /* 12121626 call 0x12121650 */
  push32(0x1212162bu); f_12121650();
  /* 1212162b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212162e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12121631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121634 push edx */
  push32((uint32_t)(EDX));
  /* 12121635 call 0x12120bf0 */
  push32(0x1212163au); f_12120bf0();
  /* 1212163a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212163d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12121640:;
  /* 12121640 mov esp, ebp */
  ESP = (EBP);
  /* 12121642 pop ebp */
  EBP = (pop32());
  /* 12121643 ret  */
  ESPCHK(0x12121600u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x12121650 (65 bytes, 26 insns) */
void f_12121650(void) {
  FTRACE(0x12121650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121650 push ebp */
  push32((uint32_t)(EBP));
  /* 12121651 mov ebp, esp */
  EBP = (ESP);
  /* 12121653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121656 push eax */
  push32((uint32_t)(EAX));
  /* 12121657 call 0x121216a0 */
  push32(0x1212165cu); f_121216a0();
  /* 1212165c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212165f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121661 je 0x12121668 */
  if (C.zf) goto L_12121668;
  /* 12121663 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12121666 jmp 0x1212168f */
  goto L_1212168f;
L_12121668:;
  /* 12121668 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212166b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1212166e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12121674 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12121676 je 0x1212168d */
  if (C.zf) goto L_1212168d;
  /* 12121678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212167b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1212167e push ecx */
  push32((uint32_t)(ECX));
  /* 1212167f call 0x12122460 */
  push32(0x12121684u); f_12122460();
  /* 12121684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121687 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12121689 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212168b jmp 0x1212168f */
  goto L_1212168f;
L_1212168d:;
  /* 1212168d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1212168f:;
  /* 1212168f pop ebp */
  EBP = (pop32());
  /* 12121690 ret  */
  ESPCHK(0x12121650u, _esp0);
  ESP += 4; return;
}

/* FUN_100116a0 @ 0x121216a0 (183 bytes, 62 insns) */
void f_121216a0(void) {
  FTRACE(0x121216a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121216a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121216a1 mov ebp, esp */
  EBP = (ESP);
  /* 121216a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121216a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121216ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121216b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121216b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121216b6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121216b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121216bc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121216bf jne 0x1212173b */
  if (!C.zf) goto L_1212173b;
  /* 121216c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121216c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121216c7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 121216cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121216cf je 0x1212173b */
  if (C.zf) goto L_1212173b;
  /* 121216d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121216d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121216d7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 121216d9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121216dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121216df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121216e3 jle 0x1212173b */
  if ((C.zf||C.sf!=C.of)) goto L_1212173b;
  /* 121216e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121216e8 push edx */
  push32((uint32_t)(EDX));
  /* 121216e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121216ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121216ef push ecx */
  push32((uint32_t)(ECX));
  /* 121216f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121216f3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121216f6 push eax */
  push32((uint32_t)(EAX));
  /* 121216f7 call 0x12120610 */
  push32(0x121216fcu); f_12120610();
  /* 121216fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121216ff cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121702 jne 0x12121725 */
  if (!C.zf) goto L_12121725;
  /* 12121704 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121707 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1212170a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12121710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12121712 je 0x12121723 */
  if (C.zf) goto L_12121723;
  /* 12121714 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121717 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1212171a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1212171d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121720 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12121723:;
  /* 12121723 jmp 0x1212173b */
  goto L_1212173b;
L_12121725:;
  /* 12121725 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121728 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1212172b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1212172e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121731 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12121734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1212173b:;
  /* 1212173b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212173e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121741 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12121744 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12121746 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121749 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12121750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121753 mov esp, ebp */
  ESP = (EBP);
  /* 12121755 pop ebp */
  EBP = (pop32());
  /* 12121756 ret  */
  ESPCHK(0x121216a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011760 @ 0x12121760 (15 bytes, 7 insns) */
void f_12121760(void) {
  FTRACE(0x12121760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121760 push ebp */
  push32((uint32_t)(EBP));
  /* 12121761 mov ebp, esp */
  EBP = (ESP);
  /* 12121763 push 1 */
  push32((uint32_t)(0x1u));
  /* 12121765 call 0x12121770 */
  push32(0x1212176au); f_12121770();
  /* 1212176a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212176d pop ebp */
  EBP = (pop32());
  /* 1212176e ret  */
  ESPCHK(0x12121760u, _esp0);
  ESP += 4; return;
}

/* FUN_10011770 @ 0x12121770 (319 bytes, 94 insns) */
void f_12121770(void) {
  FTRACE(0x12121770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121770 push ebp */
  push32((uint32_t)(EBP));
  /* 12121771 mov ebp, esp */
  EBP = (ESP);
  /* 12121773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121776 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1212177d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12121784 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121786 call 0x1211b770 */
  push32(0x1212178bu); f_1211b770();
  /* 1212178b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212178e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12121795 jmp 0x121217a0 */
  goto L_121217a0;
L_12121797:;
  /* 12121797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212179a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212179d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121217a0:;
  /* 121217a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121217a3 cmp ecx, dword ptr [0x12144ec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12144ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121217a9 jge 0x12121893 */
  if ((C.sf==C.of)) goto L_12121893;
  /* 121217af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121217b2 mov eax, dword ptr [0x12143b78] */
  EAX = (r32((uint32_t)(0x12143b78)));
  /* 121217b7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121217bb je 0x1212188e */
  if (C.zf) goto L_1212188e;
  /* 121217c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121217c4 mov edx, dword ptr [0x12143b78] */
  EDX = (r32((uint32_t)(0x12143b78)));
  /* 121217ca mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121217cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121217d0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 121217d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121217d8 je 0x1212188e */
  if (C.zf) goto L_1212188e;
  /* 121217de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121217e1 mov eax, dword ptr [0x12143b78] */
  EAX = (r32((uint32_t)(0x12143b78)));
  /* 121217e6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121217e9 push ecx */
  push32((uint32_t)(ECX));
  /* 121217ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121217ed push edx */
  push32((uint32_t)(EDX));
  /* 121217ee call 0x12120bc0 */
  push32(0x121217f3u); f_12120bc0();
  /* 121217f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121217f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121217f9 mov ecx, dword ptr [0x12143b78] */
  ECX = (r32((uint32_t)(0x12143b78)));
  /* 121217ff mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12121802 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12121805 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1212180a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212180c je 0x12121875 */
  if (C.zf) goto L_12121875;
  /* 1212180e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121812 jne 0x12121839 */
  if (!C.zf) goto L_12121839;
  /* 12121814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121817 mov edx, dword ptr [0x12143b78] */
  EDX = (r32((uint32_t)(0x12143b78)));
  /* 1212181d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12121820 push eax */
  push32((uint32_t)(EAX));
  /* 12121821 call 0x12121650 */
  push32(0x12121826u); f_12121650();
  /* 12121826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121829 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212182c je 0x12121837 */
  if (C.zf) goto L_12121837;
  /* 1212182e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121831 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121834 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12121837:;
  /* 12121837 jmp 0x12121875 */
  goto L_12121875;
L_12121839:;
  /* 12121839 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212183d jne 0x12121875 */
  if (!C.zf) goto L_12121875;
  /* 1212183f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121842 mov eax, dword ptr [0x12143b78] */
  EAX = (r32((uint32_t)(0x12143b78)));
  /* 12121847 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1212184a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1212184d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12121850 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12121852 je 0x12121875 */
  if (C.zf) goto L_12121875;
  /* 12121854 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121857 mov ecx, dword ptr [0x12143b78] */
  ECX = (r32((uint32_t)(0x12143b78)));
  /* 1212185d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12121860 push edx */
  push32((uint32_t)(EDX));
  /* 12121861 call 0x12121650 */
  push32(0x12121866u); f_12121650();
  /* 12121866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121869 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212186c jne 0x12121875 */
  if (!C.zf) goto L_12121875;
  /* 1212186e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12121875:;
  /* 12121875 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121878 mov ecx, dword ptr [0x12143b78] */
  ECX = (r32((uint32_t)(0x12143b78)));
  /* 1212187e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12121881 push edx */
  push32((uint32_t)(EDX));
  /* 12121882 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121885 push eax */
  push32((uint32_t)(EAX));
  /* 12121886 call 0x12120c30 */
  push32(0x1212188bu); f_12120c30();
  /* 1212188b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1212188e:;
  /* 1212188e jmp 0x12121797 */
  goto L_12121797;
L_12121893:;
  /* 12121893 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121895 call 0x1211b810 */
  push32(0x1212189au); f_1211b810();
  /* 1212189a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212189d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121218a1 jne 0x121218a8 */
  if (!C.zf) goto L_121218a8;
  /* 121218a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121218a6 jmp 0x121218ab */
  goto L_121218ab;
L_121218a8:;
  /* 121218a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121218ab:;
  /* 121218ab mov esp, ebp */
  ESP = (EBP);
  /* 121218ad pop ebp */
  EBP = (pop32());
  /* 121218ae ret  */
  ESPCHK(0x12121770u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x121218b0 (15 bytes, 7 insns) */
void f_121218b0(void) {
  FTRACE(0x121218b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121218b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121218b1 mov ebp, esp */
  EBP = (ESP);
  /* 121218b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121218b5 call 0x12116ce0 */
  push32(0x121218bau); f_12116ce0();
  /* 121218ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121218bd pop ebp */
  EBP = (pop32());
  /* 121218be ret  */
  ESPCHK(0x121218b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x121218c0 (1007 bytes, 269 insns) */
void f_121218c0(void) {
  FTRACE(0x121218c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121218c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121218c1 mov ebp, esp */
  EBP = (ESP);
  /* 121218c3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121218c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121218cd jl 0x121218d5 */
  if ((C.sf!=C.of)) goto L_121218d5;
  /* 121218cf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121218d3 jle 0x121218dc */
  if ((C.zf||C.sf!=C.of)) goto L_121218dc;
L_121218d5:;
  /* 121218d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121218d7 jmp 0x12121cab */
  goto L_12121cab;
L_121218dc:;
  /* 121218dc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121218de call 0x1211b770 */
  push32(0x121218e3u); f_1211b770();
  /* 121218e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121218e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121218ed mov eax, dword ptr [0x12143b64] */
  EAX = (r32((uint32_t)(0x12143b64)));
  /* 121218f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121218f5 mov dword ptr [0x12143b64], eax */
  w32((uint32_t)(0x12143b64), (EAX));
L_121218fa:;
  /* 121218fa cmp dword ptr [0x12143b74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143b74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121901 je 0x1212190d */
  if (C.zf) goto L_1212190d;
  /* 12121903 push 1 */
  push32((uint32_t)(0x1u));
  /* 12121905 call dword ptr [0x12146318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146318))), 0x1212190bu);
  /* 1212190b jmp 0x121218fa */
  goto L_121218fa;
L_1212190d:;
  /* 1212190d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121911 je 0x12121951 */
  if (C.zf) goto L_12121951;
  /* 12121913 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121917 je 0x12121931 */
  if (C.zf) goto L_12121931;
  /* 12121919 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212191c push ecx */
  push32((uint32_t)(ECX));
  /* 1212191d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121920 push edx */
  push32((uint32_t)(EDX));
  /* 12121921 call 0x12121cb0 */
  push32(0x12121926u); f_12121cb0();
  /* 12121926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121929 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1212192f jmp 0x12121943 */
  goto L_12121943;
L_12121931:;
  /* 12121931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121934 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121937 mov ecx, dword ptr [eax + 0x121424dc] */
  ECX = (r32((uint32_t)(EAX + 0x121424dc)));
  /* 1212193d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12121943:;
  /* 12121943 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12121949 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1212194c jmp 0x12121c8b */
  goto L_12121c8b;
L_12121951:;
  /* 12121951 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12121958 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1212195f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121963 je 0x12121c83 */
  if (C.zf) goto L_12121c83;
  /* 12121969 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212196c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1212196f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121972 jne 0x12121b94 */
  if (!C.zf) goto L_12121b94;
  /* 12121978 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212197b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1212197f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121982 jne 0x12121b94 */
  if (!C.zf) goto L_12121b94;
  /* 12121988 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212198b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1212198f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121992 jne 0x12121b94 */
  if (!C.zf) goto L_12121b94;
  /* 12121998 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212199b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_121219a1:;
  /* 121219a1 push 0x1213f50c */
  push32((uint32_t)(0x1213f50cu));
  /* 121219a6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121219ac push ecx */
  push32((uint32_t)(ECX));
  /* 121219ad call 0x12123b10 */
  push32(0x121219b2u); f_12123b10();
  /* 121219b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121219b5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 121219bb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121219c2 je 0x121219ed */
  if (C.zf) goto L_121219ed;
  /* 121219c4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121219ca sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121219d0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 121219d6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121219dd je 0x121219ed */
  if (C.zf) goto L_121219ed;
  /* 121219df mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121219e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121219e8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121219eb jne 0x12121a13 */
  if (!C.zf) goto L_12121a13;
L_121219ed:;
  /* 121219ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121219f1 je 0x12121a0c */
  if (C.zf) goto L_12121a0c;
  /* 121219f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121219f5 call 0x1211b810 */
  push32(0x121219fau); f_1211b810();
  /* 121219fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121219fd mov edx, dword ptr [0x12143b64] */
  EDX = (r32((uint32_t)(0x12143b64)));
  /* 12121a03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121a06 mov dword ptr [0x12143b64], edx */
  w32((uint32_t)(0x12143b64), (EDX));
L_12121a0c:;
  /* 12121a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12121a0e jmp 0x12121cab */
  goto L_12121cab;
L_12121a13:;
  /* 12121a13 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12121a1a jmp 0x12121a25 */
  goto L_12121a25;
L_12121a1c:;
  /* 12121a1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121a1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121a22 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12121a25:;
  /* 12121a25 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121a29 jg 0x12121a73 */
  if ((!C.zf&&C.sf==C.of)) goto L_12121a73;
  /* 12121a2b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12121a31 push ecx */
  push32((uint32_t)(ECX));
  /* 12121a32 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12121a38 push edx */
  push32((uint32_t)(EDX));
  /* 12121a39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121a3c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121a3f mov ecx, dword ptr [eax + 0x121424d8] */
  ECX = (r32((uint32_t)(EAX + 0x121424d8)));
  /* 12121a45 push ecx */
  push32((uint32_t)(ECX));
  /* 12121a46 call 0x12123ad0 */
  push32(0x12121a4bu); f_12123ad0();
  /* 12121a4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121a4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121a50 jne 0x12121a71 */
  if (!C.zf) goto L_12121a71;
  /* 12121a52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121a55 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121a58 mov eax, dword ptr [edx + 0x121424d8] */
  EAX = (r32((uint32_t)(EDX + 0x121424d8)));
  /* 12121a5e push eax */
  push32((uint32_t)(EAX));
  /* 12121a5f call 0x1211aba0 */
  push32(0x12121a64u); f_1211aba0();
  /* 12121a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121a67 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121a6d jne 0x12121a71 */
  if (!C.zf) goto L_12121a71;
  /* 12121a6f jmp 0x12121a73 */
  goto L_12121a73;
L_12121a71:;
  /* 12121a71 jmp 0x12121a1c */
  goto L_12121a1c;
L_12121a73:;
  /* 12121a73 push 0x1213f508 */
  push32((uint32_t)(0x1213f508u));
  /* 12121a78 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121a7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121a81 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12121a87 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121a8d push edx */
  push32((uint32_t)(EDX));
  /* 12121a8e call 0x12123a90 */
  push32(0x12121a93u); f_12123a90();
  /* 12121a93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121a96 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12121a9c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121aa3 jne 0x12121ad9 */
  if (!C.zf) goto L_12121ad9;
  /* 12121aa5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121aab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12121aae cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121ab1 je 0x12121ad9 */
  if (C.zf) goto L_12121ad9;
  /* 12121ab3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121ab7 je 0x12121ad2 */
  if (C.zf) goto L_12121ad2;
  /* 12121ab9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12121abb call 0x1211b810 */
  push32(0x12121ac0u); f_1211b810();
  /* 12121ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121ac3 mov edx, dword ptr [0x12143b64] */
  EDX = (r32((uint32_t)(0x12143b64)));
  /* 12121ac9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121acc mov dword ptr [0x12143b64], edx */
  w32((uint32_t)(0x12143b64), (EDX));
L_12121ad2:;
  /* 12121ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12121ad4 jmp 0x12121cab */
  goto L_12121cab;
L_12121ad9:;
  /* 12121ad9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121add jg 0x12121b2a */
  if ((!C.zf&&C.sf==C.of)) goto L_12121b2a;
  /* 12121adf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12121ae5 push eax */
  push32((uint32_t)(EAX));
  /* 12121ae6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121aec push ecx */
  push32((uint32_t)(ECX));
  /* 12121aed lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12121af3 push edx */
  push32((uint32_t)(EDX));
  /* 12121af4 call 0x1211b590 */
  push32(0x12121af9u); f_1211b590();
  /* 12121af9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121afc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12121b02 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12121b0a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12121b10 push ecx */
  push32((uint32_t)(ECX));
  /* 12121b11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121b14 push edx */
  push32((uint32_t)(EDX));
  /* 12121b15 call 0x12121cb0 */
  push32(0x12121b1au); f_12121cb0();
  /* 12121b1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121b1f je 0x12121b2a */
  if (C.zf) goto L_12121b2a;
  /* 12121b21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121b27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12121b2a:;
  /* 12121b2a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121b30 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121b36 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12121b3c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12121b42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12121b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121b47 je 0x12121b58 */
  if (C.zf) goto L_12121b58;
  /* 12121b49 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12121b4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121b52 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12121b58:;
  /* 12121b58 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12121b5e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12121b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121b63 jne 0x121219a1 */
  if (!C.zf) goto L_121219a1;
  /* 12121b69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121b6d je 0x12121b7c */
  if (C.zf) goto L_12121b7c;
  /* 12121b6f call 0x12121e50 */
  push32(0x12121b74u); f_12121e50();
  /* 12121b74 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12121b7a jmp 0x12121b86 */
  goto L_12121b86;
L_12121b7c:;
  /* 12121b7c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12121b86:;
  /* 12121b86 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12121b8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12121b8f jmp 0x12121c81 */
  goto L_12121c81;
L_12121b94:;
  /* 12121b94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121b97 push edx */
  push32((uint32_t)(EDX));
  /* 12121b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12121b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12121b9c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12121ba2 push eax */
  push32((uint32_t)(EAX));
  /* 12121ba3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 12121ba7 call 0x12121f50 */
  push32(0x12121bacu); f_12121f50();
  /* 12121bac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121baf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12121bb2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121bb6 je 0x12121c81 */
  if (C.zf) goto L_12121c81;
  /* 12121bbc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12121bc3 jmp 0x12121bce */
  goto L_12121bce;
L_12121bc5:;
  /* 12121bc5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121bc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121bcb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12121bce:;
  /* 12121bce cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121bd2 jg 0x12121c30 */
  if ((!C.zf&&C.sf==C.of)) goto L_12121c30;
  /* 12121bd4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121bd8 je 0x12121c2e */
  if (C.zf) goto L_12121c2e;
  /* 12121bda mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121bdd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121be0 mov ecx, dword ptr [eax + 0x121424dc] */
  ECX = (r32((uint32_t)(EAX + 0x121424dc)));
  /* 12121be6 push ecx */
  push32((uint32_t)(ECX));
  /* 12121be7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12121bed push edx */
  push32((uint32_t)(EDX));
  /* 12121bee call 0x12123a00 */
  push32(0x12121bf3u); f_12123a00();
  /* 12121bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121bf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121bf8 je 0x12121c25 */
  if (C.zf) goto L_12121c25;
  /* 12121bfa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12121c00 push eax */
  push32((uint32_t)(EAX));
  /* 12121c01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12121c04 push ecx */
  push32((uint32_t)(ECX));
  /* 12121c05 call 0x12121cb0 */
  push32(0x12121c0au); f_12121cb0();
  /* 12121c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121c0f je 0x12121c1c */
  if (C.zf) goto L_12121c1c;
  /* 12121c11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121c14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121c17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12121c1a jmp 0x12121c23 */
  goto L_12121c23;
L_12121c1c:;
  /* 12121c1c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12121c23:;
  /* 12121c23 jmp 0x12121c2e */
  goto L_12121c2e;
L_12121c25:;
  /* 12121c25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121c28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121c2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12121c2e:;
  /* 12121c2e jmp 0x12121bc5 */
  goto L_12121bc5;
L_12121c30:;
  /* 12121c30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121c34 je 0x12121c5b */
  if (C.zf) goto L_12121c5b;
  /* 12121c36 call 0x12121e50 */
  push32(0x12121c3bu); f_12121e50();
  /* 12121c3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12121c3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12121c40 mov ecx, dword ptr [0x121424dc] */
  ECX = (r32((uint32_t)(0x121424dc)));
  /* 12121c46 push ecx */
  push32((uint32_t)(ECX));
  /* 12121c47 call 0x12118800 */
  push32(0x12121c4cu); f_12118800();
  /* 12121c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121c4f mov dword ptr [0x121424dc], 0 */
  w32((uint32_t)(0x121424dc), (0x0u));
  /* 12121c59 jmp 0x12121c81 */
  goto L_12121c81;
L_12121c5b:;
  /* 12121c5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121c5f je 0x12121c6e */
  if (C.zf) goto L_12121c6e;
  /* 12121c61 call 0x12121e50 */
  push32(0x12121c66u); f_12121e50();
  /* 12121c66 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12121c6c jmp 0x12121c78 */
  goto L_12121c78;
L_12121c6e:;
  /* 12121c6e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12121c78:;
  /* 12121c78 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12121c7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12121c81:;
  /* 12121c81 jmp 0x12121c8b */
  goto L_12121c8b;
L_12121c83:;
  /* 12121c83 call 0x12121e50 */
  push32(0x12121c88u); f_12121e50();
  /* 12121c88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12121c8b:;
  /* 12121c8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121c8f je 0x12121ca8 */
  if (C.zf) goto L_12121ca8;
  /* 12121c91 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12121c93 call 0x1211b810 */
  push32(0x12121c98u); f_1211b810();
  /* 12121c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121c9b mov eax, dword ptr [0x12143b64] */
  EAX = (r32((uint32_t)(0x12143b64)));
  /* 12121ca0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121ca3 mov dword ptr [0x12143b64], eax */
  w32((uint32_t)(0x12143b64), (EAX));
L_12121ca8:;
  /* 12121ca8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12121cab:;
  /* 12121cab mov esp, ebp */
  ESP = (EBP);
  /* 12121cad pop ebp */
  EBP = (pop32());
  /* 12121cae ret  */
  ESPCHK(0x121218c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x12121cb0 (403 bytes, 117 insns) */
void f_12121cb0(void) {
  FTRACE(0x12121cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12121cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12121cb3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121cbc push eax */
  push32((uint32_t)(EAX));
  /* 12121cbd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12121cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12121cc4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12121cca push edx */
  push32((uint32_t)(EDX));
  /* 12121ccb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12121cd1 push eax */
  push32((uint32_t)(EAX));
  /* 12121cd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12121cd6 call 0x12121f50 */
  push32(0x12121cdbu); f_12121f50();
  /* 12121cdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121ce0 jne 0x12121ce9 */
  if (!C.zf) goto L_12121ce9;
  /* 12121ce2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12121ce4 jmp 0x12121e3f */
  goto L_12121e3f;
L_12121ce9:;
  /* 12121ce9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12121cee push 0x1213f510 */
  push32((uint32_t)(0x1213f510u));
  /* 12121cf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121cf5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12121cfb push edx */
  push32((uint32_t)(EDX));
  /* 12121cfc call 0x1211aba0 */
  push32(0x12121d01u); f_1211aba0();
  /* 12121d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121d04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121d07 push eax */
  push32((uint32_t)(EAX));
  /* 12121d08 call 0x12117d70 */
  push32(0x12121d0du); f_12117d70();
  /* 12121d0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121d10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12121d13 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121d17 jne 0x12121d20 */
  if (!C.zf) goto L_12121d20;
  /* 12121d19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12121d1b jmp 0x12121e3f */
  goto L_12121e3f;
L_12121d20:;
  /* 12121d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121d23 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121d26 mov ecx, dword ptr [eax + 0x121424dc] */
  ECX = (r32((uint32_t)(EAX + 0x121424dc)));
  /* 12121d2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12121d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121d32 mov eax, dword ptr [edx*4 + 0x121439e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121439e0)));
  /* 12121d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12121d3c push 6 */
  push32((uint32_t)(0x6u));
  /* 12121d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121d41 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121d44 add ecx, 0x12143a30 */
  { uint32_t _a=(ECX),_b=(0x12143a30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121d4a push ecx */
  push32((uint32_t)(ECX));
  /* 12121d4b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12121d4e push edx */
  push32((uint32_t)(EDX));
  /* 12121d4f call 0x1211e650 */
  push32(0x12121d54u); f_1211e650();
  /* 12121d54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121d57 mov eax, dword ptr [0x121439f8] */
  EAX = (r32((uint32_t)(0x121439f8)));
  /* 12121d5c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12121d5f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12121d65 push ecx */
  push32((uint32_t)(ECX));
  /* 12121d66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121d69 push edx */
  push32((uint32_t)(EDX));
  /* 12121d6a call 0x1211ad20 */
  push32(0x12121d6fu); f_1211ad20();
  /* 12121d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121d75 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121d78 mov dword ptr [ecx + 0x121424dc], eax */
  w32((uint32_t)(ECX + 0x121424dc), (EAX));
  /* 12121d7e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12121d84 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12121d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121d8d mov dword ptr [eax*4 + 0x121439e0], edx */
  w32((uint32_t)(EAX*4 + 0x121439e0), (EDX));
  /* 12121d94 push 6 */
  push32((uint32_t)(0x6u));
  /* 12121d96 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12121d9c push ecx */
  push32((uint32_t)(ECX));
  /* 12121d9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121da0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121da3 add edx, 0x12143a30 */
  { uint32_t _a=(EDX),_b=(0x12143a30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121da9 push edx */
  push32((uint32_t)(EDX));
  /* 12121daa call 0x1211e650 */
  push32(0x12121dafu); f_1211e650();
  /* 12121daf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121db2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121db6 jne 0x12121dc3 */
  if (!C.zf) goto L_12121dc3;
  /* 12121db8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121dbe mov dword ptr [0x121439f8], eax */
  w32((uint32_t)(0x121439f8), (EAX));
L_12121dc3:;
  /* 12121dc3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121dc7 jne 0x12121dd5 */
  if (!C.zf) goto L_12121dd5;
  /* 12121dc9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12121dcf mov dword ptr [0x121439fc], ecx */
  w32((uint32_t)(0x121439fc), (ECX));
L_12121dd5:;
  /* 12121dd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121dd8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121ddb call dword ptr [edx + 0x121424e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x121424e0))), 0x12121de1u);
  /* 12121de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121de3 je 0x12121e1c */
  if (C.zf) goto L_12121e1c;
  /* 12121de5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121de8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121deb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121dee mov dword ptr [eax + 0x121424dc], ecx */
  w32((uint32_t)(EAX + 0x121424dc), (ECX));
  /* 12121df4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121df6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12121df9 push edx */
  push32((uint32_t)(EDX));
  /* 12121dfa call 0x12118800 */
  push32(0x12121dffu); f_12118800();
  /* 12121dff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121e02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121e05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121e08 mov dword ptr [eax*4 + 0x121439e0], ecx */
  w32((uint32_t)(EAX*4 + 0x121439e0), (ECX));
  /* 12121e0f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12121e12 mov dword ptr [0x121439f8], edx */
  w32((uint32_t)(0x121439f8), (EDX));
  /* 12121e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12121e1a jmp 0x12121e3f */
  goto L_12121e3f;
L_12121e1c:;
  /* 12121e1c cmp dword ptr [ebp - 0xc], 0x121423c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x121423c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121e23 je 0x12121e33 */
  if (C.zf) goto L_12121e33;
  /* 12121e25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121e27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12121e2a push eax */
  push32((uint32_t)(EAX));
  /* 12121e2b call 0x12118800 */
  push32(0x12121e30u); f_12118800();
  /* 12121e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12121e33:;
  /* 12121e33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121e36 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121e39 mov eax, dword ptr [ecx + 0x121424dc] */
  EAX = (r32((uint32_t)(ECX + 0x121424dc)));
L_12121e3f:;
  /* 12121e3f mov esp, ebp */
  ESP = (EBP);
  /* 12121e41 pop ebp */
  EBP = (pop32());
  /* 12121e42 ret  */
  ESPCHK(0x12121cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x12121e50 (256 bytes, 72 insns) */
void f_12121e50(void) {
  FTRACE(0x12121e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12121e51 mov ebp, esp */
  EBP = (ESP);
  /* 12121e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121e56 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12121e5d cmp dword ptr [0x121424dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121424dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121e64 jne 0x12121e84 */
  if (!C.zf) goto L_12121e84;
  /* 12121e66 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12121e6b push 0x1213f510 */
  push32((uint32_t)(0x1213f510u));
  /* 12121e70 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121e72 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12121e77 call 0x12117d70 */
  push32(0x12121e7cu); f_12117d70();
  /* 12121e7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121e7f mov dword ptr [0x121424dc], eax */
  w32((uint32_t)(0x121424dc), (EAX));
L_12121e84:;
  /* 12121e84 mov eax, dword ptr [0x121424dc] */
  EAX = (r32((uint32_t)(0x121424dc)));
  /* 12121e89 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12121e8c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12121e93 jmp 0x12121e9e */
  goto L_12121e9e;
L_12121e95:;
  /* 12121e95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121e98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121e9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12121e9e:;
  /* 12121e9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121ea1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121ea4 mov eax, dword ptr [edx + 0x121424dc] */
  EAX = (r32((uint32_t)(EDX + 0x121424dc)));
  /* 12121eaa push eax */
  push32((uint32_t)(EAX));
  /* 12121eab push 0x1213f51c */
  push32((uint32_t)(0x1213f51cu));
  /* 12121eb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121eb3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121eb6 mov edx, dword ptr [ecx + 0x121424d8] */
  EDX = (r32((uint32_t)(ECX + 0x121424d8)));
  /* 12121ebc push edx */
  push32((uint32_t)(EDX));
  /* 12121ebd push 3 */
  push32((uint32_t)(0x3u));
  /* 12121ebf mov eax, dword ptr [0x121424dc] */
  EAX = (r32((uint32_t)(0x121424dc)));
  /* 12121ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12121ec5 call 0x121220f0 */
  push32(0x12121ecau); f_121220f0();
  /* 12121eca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121ecd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121ed1 jge 0x12121f19 */
  if ((C.sf==C.of)) goto L_12121f19;
  /* 12121ed3 push 0x1213f508 */
  push32((uint32_t)(0x1213f508u));
  /* 12121ed8 mov ecx, dword ptr [0x121424dc] */
  ECX = (r32((uint32_t)(0x121424dc)));
  /* 12121ede push ecx */
  push32((uint32_t)(ECX));
  /* 12121edf call 0x1211ad30 */
  push32(0x12121ee4u); f_1211ad30();
  /* 12121ee4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121ee7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121eea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12121eed imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121ef0 mov eax, dword ptr [edx + 0x121424dc] */
  EAX = (r32((uint32_t)(EDX + 0x121424dc)));
  /* 12121ef6 push eax */
  push32((uint32_t)(EAX));
  /* 12121ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12121efa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12121efd mov edx, dword ptr [ecx + 0x121424dc] */
  EDX = (r32((uint32_t)(ECX + 0x121424dc)));
  /* 12121f03 push edx */
  push32((uint32_t)(EDX));
  /* 12121f04 call 0x12123a00 */
  push32(0x12121f09u); f_12123a00();
  /* 12121f09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121f0e je 0x12121f17 */
  if (C.zf) goto L_12121f17;
  /* 12121f10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12121f17:;
  /* 12121f17 jmp 0x12121f47 */
  goto L_12121f47;
L_12121f19:;
  /* 12121f19 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121f1d jne 0x12121f26 */
  if (!C.zf) goto L_12121f26;
  /* 12121f1f mov eax, dword ptr [0x121424dc] */
  EAX = (r32((uint32_t)(0x121424dc)));
  /* 12121f24 jmp 0x12121f4c */
  goto L_12121f4c;
L_12121f26:;
  /* 12121f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12121f28 mov eax, dword ptr [0x121424dc] */
  EAX = (r32((uint32_t)(0x121424dc)));
  /* 12121f2d push eax */
  push32((uint32_t)(EAX));
  /* 12121f2e call 0x12118800 */
  push32(0x12121f33u); f_12118800();
  /* 12121f33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121f36 mov dword ptr [0x121424dc], 0 */
  w32((uint32_t)(0x121424dc), (0x0u));
  /* 12121f40 mov eax, dword ptr [0x121424f4] */
  EAX = (r32((uint32_t)(0x121424f4)));
  /* 12121f45 jmp 0x12121f4c */
  goto L_12121f4c;
L_12121f47:;
  /* 12121f47 jmp 0x12121e95 */
  goto L_12121e95;
L_12121f4c:;
  /* 12121f4c mov esp, ebp */
  ESP = (EBP);
  /* 12121f4e pop ebp */
  EBP = (pop32());
  /* 12121f4f ret  */
  ESPCHK(0x12121e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f50 @ 0x12121f50 (388 bytes, 115 insns) */
void f_12121f50(void) {
  FTRACE(0x12121f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12121f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12121f51 mov ebp, esp */
  EBP = (ESP);
  /* 12121f53 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12121f59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121f5d jne 0x12121f66 */
  if (!C.zf) goto L_12121f66;
  /* 12121f5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12121f61 jmp 0x121220d0 */
  goto L_121220d0;
L_12121f66:;
  /* 12121f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121f69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12121f6c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121f6f jne 0x12121fc0 */
  if (!C.zf) goto L_12121fc0;
  /* 12121f71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121f74 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12121f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121f7a jne 0x12121fc0 */
  if (!C.zf) goto L_12121fc0;
  /* 12121f7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121f7f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12121f82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121f85 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12121f89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121f8d je 0x12121fa9 */
  if (C.zf) goto L_12121fa9;
  /* 12121f8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12121f92 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12121f97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12121f9a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12121fa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12121fa3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12121fa9:;
  /* 12121fa9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12121fad je 0x12121fb8 */
  if (C.zf) goto L_12121fb8;
  /* 12121faf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12121fb2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12121fb8:;
  /* 12121fb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12121fbb jmp 0x121220d0 */
  goto L_121220d0;
L_12121fc0:;
  /* 12121fc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12121fc4 push 0x12142450 */
  push32((uint32_t)(0x12142450u));
  /* 12121fc9 call 0x12123a00 */
  push32(0x12121fceu); f_12123a00();
  /* 12121fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121fd3 je 0x12122088 */
  if (C.zf) goto L_12122088;
  /* 12121fd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121fdc push edx */
  push32((uint32_t)(EDX));
  /* 12121fdd push 0x121423cc */
  push32((uint32_t)(0x121423ccu));
  /* 12121fe2 call 0x12123a00 */
  push32(0x12121fe7u); f_12123a00();
  /* 12121fe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12121fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12121fec je 0x12122088 */
  if (C.zf) goto L_12122088;
  /* 12121ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12121ff5 push eax */
  push32((uint32_t)(EAX));
  /* 12121ff6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12121ffc push ecx */
  push32((uint32_t)(ECX));
  /* 12121ffd call 0x12122140 */
  push32(0x12122002u); f_12122140();
  /* 12122002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12122007 je 0x12122010 */
  if (C.zf) goto L_12122010;
  /* 12122009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212200b jmp 0x121220d0 */
  goto L_121220d0;
L_12122010:;
  /* 12122010 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12122016 push edx */
  push32((uint32_t)(EDX));
  /* 12122017 push 0x12143a08 */
  push32((uint32_t)(0x12143a08u));
  /* 1212201c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12122022 push eax */
  push32((uint32_t)(EAX));
  /* 12122023 call 0x12123b50 */
  push32(0x12122028u); f_12123b50();
  /* 12122028 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212202b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212202d jne 0x12122036 */
  if (!C.zf) goto L_12122036;
  /* 1212202f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12122031 jmp 0x121220d0 */
  goto L_121220d0;
L_12122036:;
  /* 12122036 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12122038 mov cx, word ptr [0x12143a0c] */
  CX = (r16((uint32_t)(0x12143a0c)));
  /* 1212203f mov dword ptr [0x12143a10], ecx */
  w32((uint32_t)(0x12143a10), (ECX));
  /* 12122045 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1212204b push edx */
  push32((uint32_t)(EDX));
  /* 1212204c push 0x12142450 */
  push32((uint32_t)(0x12142450u));
  /* 12122051 call 0x121222a0 */
  push32(0x12122056u); f_121222a0();
  /* 12122056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212205c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1212205f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12122061 je 0x12122076 */
  if (C.zf) goto L_12122076;
  /* 12122063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122066 push edx */
  push32((uint32_t)(EDX));
  /* 12122067 push 0x121423cc */
  push32((uint32_t)(0x121423ccu));
  /* 1212206c call 0x1211ad20 */
  push32(0x12122071u); f_1211ad20();
  /* 12122071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122074 jmp 0x12122088 */
  goto L_12122088;
L_12122076:;
  /* 12122076 push 0x12142450 */
  push32((uint32_t)(0x12142450u));
  /* 1212207b push 0x121423cc */
  push32((uint32_t)(0x121423ccu));
  /* 12122080 call 0x1211ad20 */
  push32(0x12122085u); f_1211ad20();
  /* 12122085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12122088:;
  /* 12122088 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212208c je 0x121220a1 */
  if (C.zf) goto L_121220a1;
  /* 1212208e push 6 */
  push32((uint32_t)(0x6u));
  /* 12122090 push 0x12143a08 */
  push32((uint32_t)(0x12143a08u));
  /* 12122095 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12122098 push eax */
  push32((uint32_t)(EAX));
  /* 12122099 call 0x1211e650 */
  push32(0x1212209eu); f_1211e650();
  /* 1212209e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121220a1:;
  /* 121220a1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121220a5 je 0x121220ba */
  if (C.zf) goto L_121220ba;
  /* 121220a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 121220a9 push 0x12143a10 */
  push32((uint32_t)(0x12143a10u));
  /* 121220ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121220b1 push ecx */
  push32((uint32_t)(ECX));
  /* 121220b2 call 0x1211e650 */
  push32(0x121220b7u); f_1211e650();
  /* 121220b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121220ba:;
  /* 121220ba push 0x12142450 */
  push32((uint32_t)(0x12142450u));
  /* 121220bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121220c2 push edx */
  push32((uint32_t)(EDX));
  /* 121220c3 call 0x1211ad20 */
  push32(0x121220c8u); f_1211ad20();
  /* 121220c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121220cb mov eax, 0x12142450 */
  EAX = (0x12142450u);
L_121220d0:;
  /* 121220d0 mov esp, ebp */
  ESP = (EBP);
  /* 121220d2 pop ebp */
  EBP = (pop32());
  /* 121220d3 ret  */
  ESPCHK(0x12121f50u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x121220e0 (7 bytes, 5 insns) */
void f_121220e0(void) {
  FTRACE(0x121220e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121220e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121220e1 mov ebp, esp */
  EBP = (ESP);
  /* 121220e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121220e5 pop ebp */
  EBP = (pop32());
  /* 121220e6 ret  */
  ESPCHK(0x121220e0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x121220f0 (79 bytes, 28 insns) */
void f_121220f0(void) {
  FTRACE(0x121220f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121220f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121220f1 mov ebp, esp */
  EBP = (ESP);
  /* 121220f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121220f6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121220f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121220fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12122103 jmp 0x1212210e */
  goto L_1212210e;
L_12122105:;
  /* 12122105 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122108 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212210b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1212210e:;
  /* 1212210e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122111 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122114 jge 0x12122134 */
  if ((C.sf==C.of)) goto L_12122134;
  /* 12122116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122119 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212211c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212211f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122122 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12122125 push edx */
  push32((uint32_t)(EDX));
  /* 12122126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122129 push eax */
  push32((uint32_t)(EAX));
  /* 1212212a call 0x1211ad30 */
  push32(0x1212212fu); f_1211ad30();
  /* 1212212f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122132 jmp 0x12122105 */
  goto L_12122105;
L_12122134:;
  /* 12122134 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1212213b mov esp, ebp */
  ESP = (EBP);
  /* 1212213d pop ebp */
  EBP = (pop32());
  /* 1212213e ret  */
  ESPCHK(0x121220f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x12122140 (349 bytes, 122 insns) */
void f_12122140(void) {
  FTRACE(0x12122140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122140 push ebp */
  push32((uint32_t)(EBP));
  /* 12122141 mov ebp, esp */
  EBP = (ESP);
  /* 12122143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12122146 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1212214b push 0 */
  push32((uint32_t)(0x0u));
  /* 1212214d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122150 push eax */
  push32((uint32_t)(EAX));
  /* 12122151 call 0x1211bae0 */
  push32(0x12122156u); f_1211bae0();
  /* 12122156 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122159 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212215c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1212215f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12122161 jne 0x1212216a */
  if (!C.zf) goto L_1212216a;
  /* 12122163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12122165 jmp 0x12122299 */
  goto L_12122299;
L_1212216a:;
  /* 1212216a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212216d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12122170 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122173 jne 0x121221a0 */
  if (!C.zf) goto L_121221a0;
  /* 12122175 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12122178 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1212217c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212217e je 0x121221a0 */
  if (C.zf) goto L_121221a0;
  /* 12122180 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12122183 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122186 push ecx */
  push32((uint32_t)(ECX));
  /* 12122187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212218a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122190 push edx */
  push32((uint32_t)(EDX));
  /* 12122191 call 0x1211ad20 */
  push32(0x12122196u); f_1211ad20();
  /* 12122196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212219b jmp 0x12122299 */
  goto L_12122299;
L_121221a0:;
  /* 121221a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121221a7 jmp 0x121221b2 */
  goto L_121221b2;
L_121221a9:;
  /* 121221a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121221ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121221af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121221b2:;
  /* 121221b2 push 0x1213f520 */
  push32((uint32_t)(0x1213f520u));
  /* 121221b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121221ba push ecx */
  push32((uint32_t)(ECX));
  /* 121221bb call 0x12123a90 */
  push32(0x121221c0u); f_12123a90();
  /* 121221c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121221c3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121221c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121221ca jne 0x121221d4 */
  if (!C.zf) goto L_121221d4;
  /* 121221cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121221cf jmp 0x12122299 */
  goto L_12122299;
L_121221d4:;
  /* 121221d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121221d7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121221da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121221dc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 121221df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121221e3 jne 0x1212220a */
  if (!C.zf) goto L_1212220a;
  /* 121221e5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121221e9 jge 0x1212220a */
  if ((C.sf==C.of)) goto L_1212220a;
  /* 121221eb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121221ef cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121221f2 je 0x1212220a */
  if (C.zf) goto L_1212220a;
  /* 121221f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121221f7 push edx */
  push32((uint32_t)(EDX));
  /* 121221f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121221fb push eax */
  push32((uint32_t)(EAX));
  /* 121221fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121221ff push ecx */
  push32((uint32_t)(ECX));
  /* 12122200 call 0x1211b590 */
  push32(0x12122205u); f_1211b590();
  /* 12122205 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122208 jmp 0x12122270 */
  goto L_12122270;
L_1212220a:;
  /* 1212220a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212220e jne 0x12122238 */
  if (!C.zf) goto L_12122238;
  /* 12122210 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122214 jge 0x12122238 */
  if ((C.sf==C.of)) goto L_12122238;
  /* 12122216 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1212221a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212221d je 0x12122238 */
  if (C.zf) goto L_12122238;
  /* 1212221f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122222 push eax */
  push32((uint32_t)(EAX));
  /* 12122223 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12122226 push ecx */
  push32((uint32_t)(ECX));
  /* 12122227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212222a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212222d push edx */
  push32((uint32_t)(EDX));
  /* 1212222e call 0x1211b590 */
  push32(0x12122233u); f_1211b590();
  /* 12122233 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122236 jmp 0x12122270 */
  goto L_12122270;
L_12122238:;
  /* 12122238 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212223c jne 0x1212226b */
  if (!C.zf) goto L_1212226b;
  /* 1212223e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12122242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12122244 je 0x1212224f */
  if (C.zf) goto L_1212224f;
  /* 12122246 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1212224a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212224d jne 0x1212226b */
  if (!C.zf) goto L_1212226b;
L_1212224f:;
  /* 1212224f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122252 push edx */
  push32((uint32_t)(EDX));
  /* 12122253 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12122256 push eax */
  push32((uint32_t)(EAX));
  /* 12122257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212225a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122260 push ecx */
  push32((uint32_t)(ECX));
  /* 12122261 call 0x1211b590 */
  push32(0x12122266u); f_1211b590();
  /* 12122266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122269 jmp 0x12122270 */
  goto L_12122270;
L_1212226b:;
  /* 1212226b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212226e jmp 0x12122299 */
  goto L_12122299;
L_12122270:;
  /* 12122270 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12122274 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122277 jne 0x1212227b */
  if (!C.zf) goto L_1212227b;
  /* 12122279 jmp 0x12122297 */
  goto L_12122297;
L_1212227b:;
  /* 1212227b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1212227f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12122281 jne 0x12122285 */
  if (!C.zf) goto L_12122285;
  /* 12122283 jmp 0x12122297 */
  goto L_12122297;
L_12122285:;
  /* 12122285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122288 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1212228b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1212228f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12122292 jmp 0x121221a9 */
  goto L_121221a9;
L_12122297:;
  /* 12122297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12122299:;
  /* 12122299 mov esp, ebp */
  ESP = (EBP);
  /* 1212229b pop ebp */
  EBP = (pop32());
  /* 1212229c ret  */
  ESPCHK(0x12122140u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x121222a0 (101 bytes, 36 insns) */
void f_121222a0(void) {
  FTRACE(0x121222a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121222a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121222a1 mov ebp, esp */
  EBP = (ESP);
  /* 121222a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121222a6 push eax */
  push32((uint32_t)(EAX));
  /* 121222a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121222aa push ecx */
  push32((uint32_t)(ECX));
  /* 121222ab call 0x1211ad20 */
  push32(0x121222b0u); f_1211ad20();
  /* 121222b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121222b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121222b6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 121222ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121222bc je 0x121222d8 */
  if (C.zf) goto L_121222d8;
  /* 121222be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121222c1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121222c4 push ecx */
  push32((uint32_t)(ECX));
  /* 121222c5 push 0x1213f528 */
  push32((uint32_t)(0x1213f528u));
  /* 121222ca push 2 */
  push32((uint32_t)(0x2u));
  /* 121222cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121222cf push edx */
  push32((uint32_t)(EDX));
  /* 121222d0 call 0x121220f0 */
  push32(0x121222d5u); f_121220f0();
  /* 121222d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121222d8:;
  /* 121222d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121222db movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 121222e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121222e4 je 0x12122303 */
  if (C.zf) goto L_12122303;
  /* 121222e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121222e9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121222ef push edx */
  push32((uint32_t)(EDX));
  /* 121222f0 push 0x1213f524 */
  push32((uint32_t)(0x1213f524u));
  /* 121222f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121222f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121222fa push eax */
  push32((uint32_t)(EAX));
  /* 121222fb call 0x121220f0 */
  push32(0x12122300u); f_121220f0();
  /* 12122300 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12122303:;
  /* 12122303 pop ebp */
  EBP = (pop32());
  /* 12122304 ret  */
  ESPCHK(0x121222a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x12122310 (130 bytes, 50 insns) */
void f_12122310(void) {
  FTRACE(0x12122310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122310 push ebp */
  push32((uint32_t)(EBP));
  /* 12122311 mov ebp, esp */
  EBP = (ESP);
  /* 12122313 push ecx */
  push32((uint32_t)(ECX));
  /* 12122314 push ebx */
  push32((uint32_t)(EBX));
  /* 12122315 push esi */
  push32((uint32_t)(ESI));
  /* 12122316 push edi */
  push32((uint32_t)(EDI));
  /* 12122317 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1212231e:;
  /* 1212231e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122322 jne 0x12122342 */
  if (!C.zf) goto L_12122342;
  /* 12122324 push 0x1213f538 */
  push32((uint32_t)(0x1213f538u));
  /* 12122329 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212232b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1212232d push 0x1213f52c */
  push32((uint32_t)(0x1213f52cu));
  /* 12122332 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122334 call 0x12116e30 */
  push32(0x12122339u); f_12116e30();
  /* 12122339 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212233c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212233f jne 0x12122342 */
  if (!C.zf) goto L_12122342;
  /* 12122341 int3  */
  x86_unimpl("int3 @ 0x12122341");
L_12122342:;
  /* 12122342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12122344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12122346 jne 0x1212231e */
  if (!C.zf) goto L_1212231e;
  /* 12122348 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212234b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1212234e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12122351 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12122353 je 0x12122361 */
  if (C.zf) goto L_12122361;
  /* 12122355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122358 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1212235f jmp 0x12122388 */
  goto L_12122388;
L_12122361:;
  /* 12122361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122364 push ecx */
  push32((uint32_t)(ECX));
  /* 12122365 call 0x12120b80 */
  push32(0x1212236au); f_12120b80();
  /* 1212236a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212236d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122370 push edx */
  push32((uint32_t)(EDX));
  /* 12122371 call 0x121223a0 */
  push32(0x12122376u); f_121223a0();
  /* 12122376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212237c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212237f push eax */
  push32((uint32_t)(EAX));
  /* 12122380 call 0x12120bf0 */
  push32(0x12122385u); f_12120bf0();
  /* 12122385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12122388:;
  /* 12122388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212238b pop edi */
  EDI = (pop32());
  /* 1212238c pop esi */
  ESI = (pop32());
  /* 1212238d pop ebx */
  EBX = (pop32());
  /* 1212238e mov esp, ebp */
  ESP = (EBP);
  /* 12122390 pop ebp */
  EBP = (pop32());
  /* 12122391 ret  */
  ESPCHK(0x12122310u, _esp0);
  ESP += 4; return;
}

/* FUN_100123a0 @ 0x121223a0 (190 bytes, 67 insns) */
void f_121223a0(void) {
  FTRACE(0x121223a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121223a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121223a1 mov ebp, esp */
  EBP = (ESP);
  /* 121223a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121223a6 push ebx */
  push32((uint32_t)(EBX));
  /* 121223a7 push esi */
  push32((uint32_t)(ESI));
  /* 121223a8 push edi */
  push32((uint32_t)(EDI));
  /* 121223a9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121223b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121223b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121223b6:;
  /* 121223b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121223ba jne 0x121223da */
  if (!C.zf) goto L_121223da;
  /* 121223bc push 0x1213f3dc */
  push32((uint32_t)(0x1213f3dcu));
  /* 121223c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121223c3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 121223c5 push 0x1213f52c */
  push32((uint32_t)(0x1213f52cu));
  /* 121223ca push 2 */
  push32((uint32_t)(0x2u));
  /* 121223cc call 0x12116e30 */
  push32(0x121223d1u); f_12116e30();
  /* 121223d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121223d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121223d7 jne 0x121223da */
  if (!C.zf) goto L_121223da;
  /* 121223d9 int3  */
  x86_unimpl("int3 @ 0x121223d9");
L_121223da:;
  /* 121223da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121223dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121223de jne 0x121223b6 */
  if (!C.zf) goto L_121223b6;
  /* 121223e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121223e3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121223e6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 121223eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121223ed je 0x1212244a */
  if (C.zf) goto L_1212244a;
  /* 121223ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121223f2 push ecx */
  push32((uint32_t)(ECX));
  /* 121223f3 call 0x121216a0 */
  push32(0x121223f8u); f_121216a0();
  /* 121223f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121223fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121223fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122401 push edx */
  push32((uint32_t)(EDX));
  /* 12122402 call 0x12124a20 */
  push32(0x12122407u); f_12124a20();
  /* 12122407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212240a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212240d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12122410 push ecx */
  push32((uint32_t)(ECX));
  /* 12122411 call 0x121248f0 */
  push32(0x12122416u); f_121248f0();
  /* 12122416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212241b jge 0x12122426 */
  if ((C.sf==C.of)) goto L_12122426;
  /* 1212241d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12122424 jmp 0x1212244a */
  goto L_1212244a;
L_12122426:;
  /* 12122426 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122429 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212242d je 0x1212244a */
  if (C.zf) goto L_1212244a;
  /* 1212242f push 2 */
  push32((uint32_t)(0x2u));
  /* 12122431 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122434 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12122437 push ecx */
  push32((uint32_t)(ECX));
  /* 12122438 call 0x12118800 */
  push32(0x1212243du); f_12118800();
  /* 1212243d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122440 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122443 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1212244a:;
  /* 1212244a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212244d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12122454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122457 pop edi */
  EDI = (pop32());
  /* 12122458 pop esi */
  ESI = (pop32());
  /* 12122459 pop ebx */
  EBX = (pop32());
  /* 1212245a mov esp, ebp */
  ESP = (EBP);
  /* 1212245c pop ebp */
  EBP = (pop32());
  /* 1212245d ret  */
  ESPCHK(0x121223a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x12122460 (210 bytes, 63 insns) */
void f_12122460(void) {
  FTRACE(0x12122460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122460 push ebp */
  push32((uint32_t)(EBP));
  /* 12122461 mov ebp, esp */
  EBP = (ESP);
  /* 12122463 push ecx */
  push32((uint32_t)(ECX));
  /* 12122464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122467 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212246d jae 0x12122491 */
  if (!C.cf) goto L_12122491;
  /* 1212246f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122472 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12122475 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122478 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1212247b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212247e mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12122485 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1212248a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1212248d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212248f jne 0x121224a4 */
  if (!C.zf) goto L_121224a4;
L_12122491:;
  /* 12122491 call 0x1211fc40 */
  push32(0x12122496u); f_1211fc40();
  /* 12122496 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1212249c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212249f jmp 0x1212252e */
  goto L_1212252e;
L_121224a4:;
  /* 121224a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121224a7 push edx */
  push32((uint32_t)(EDX));
  /* 121224a8 call 0x12121460 */
  push32(0x121224adu); f_12121460();
  /* 121224ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121224b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121224b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121224b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121224b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121224bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121224bf mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121224c6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121224cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 121224ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121224d0 je 0x1212250d */
  if (C.zf) goto L_1212250d;
  /* 121224d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121224d5 push ecx */
  push32((uint32_t)(ECX));
  /* 121224d6 call 0x121212e0 */
  push32(0x121224dbu); f_121212e0();
  /* 121224db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121224de push eax */
  push32((uint32_t)(EAX));
  /* 121224df call dword ptr [0x12146314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146314))), 0x121224e5u);
  /* 121224e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121224e7 jne 0x121224f4 */
  if (!C.zf) goto L_121224f4;
  /* 121224e9 call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x121224efu);
  /* 121224ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121224f2 jmp 0x121224fb */
  goto L_121224fb;
L_121224f4:;
  /* 121224f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121224fb:;
  /* 121224fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121224ff jne 0x12122503 */
  if (!C.zf) goto L_12122503;
  /* 12122501 jmp 0x1212251f */
  goto L_1212251f;
L_12122503:;
  /* 12122503 call 0x1211fc50 */
  push32(0x12122508u); f_1211fc50();
  /* 12122508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212250b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1212250d:;
  /* 1212250d call 0x1211fc40 */
  push32(0x12122512u); f_1211fc40();
  /* 12122512 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12122518 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1212251f:;
  /* 1212251f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122522 push eax */
  push32((uint32_t)(EAX));
  /* 12122523 call 0x121214f0 */
  push32(0x12122528u); f_121214f0();
  /* 12122528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212252b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1212252e:;
  /* 1212252e mov esp, ebp */
  ESP = (EBP);
  /* 12122530 pop ebp */
  EBP = (pop32());
  /* 12122531 ret  */
  ESPCHK(0x12122460u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12122540 (219 bytes, 64 insns) */
void f_12122540(void) {
  FTRACE(0x12122540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122540 push ebp */
  push32((uint32_t)(EBP));
  /* 12122541 mov ebp, esp */
  EBP = (ESP);
  /* 12122543 push ecx */
  push32((uint32_t)(ECX));
  /* 12122544 cmp dword ptr [0x121439f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212254b je 0x121225e1 */
  if (C.zf) goto L_121225e1;
  /* 12122551 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12122553 push 0x1213f548 */
  push32((uint32_t)(0x1213f548u));
  /* 12122558 push 2 */
  push32((uint32_t)(0x2u));
  /* 1212255a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1212255f push 1 */
  push32((uint32_t)(0x1u));
  /* 12122561 call 0x12118180 */
  push32(0x12122566u); f_12118180();
  /* 12122566 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212256c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122570 jne 0x1212257c */
  if (!C.zf) goto L_1212257c;
  /* 12122572 mov eax, 1 */
  EAX = (0x1u);
  /* 12122577 jmp 0x12122617 */
  goto L_12122617;
L_1212257c:;
  /* 1212257c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212257f push eax */
  push32((uint32_t)(EAX));
  /* 12122580 call 0x12122620 */
  push32(0x12122585u); f_12122620();
  /* 12122585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212258a je 0x121225ad */
  if (C.zf) goto L_121225ad;
  /* 1212258c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212258f push ecx */
  push32((uint32_t)(ECX));
  /* 12122590 call 0x12122bb0 */
  push32(0x12122595u); f_12122bb0();
  /* 12122595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122598 push 2 */
  push32((uint32_t)(0x2u));
  /* 1212259a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212259d push edx */
  push32((uint32_t)(EDX));
  /* 1212259e call 0x12118800 */
  push32(0x121225a3u); f_12118800();
  /* 121225a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121225a6 mov eax, 1 */
  EAX = (0x1u);
  /* 121225ab jmp 0x12122617 */
  goto L_12122617;
L_121225ad:;
  /* 121225ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121225b0 mov dword ptr [0x12142c98], eax */
  w32((uint32_t)(0x12142c98), (EAX));
  /* 121225b5 mov ecx, dword ptr [0x12143a14] */
  ECX = (r32((uint32_t)(0x12143a14)));
  /* 121225bb push ecx */
  push32((uint32_t)(ECX));
  /* 121225bc call 0x12122bb0 */
  push32(0x121225c1u); f_12122bb0();
  /* 121225c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121225c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121225c6 mov edx, dword ptr [0x12143a14] */
  EDX = (r32((uint32_t)(0x12143a14)));
  /* 121225cc push edx */
  push32((uint32_t)(EDX));
  /* 121225cd call 0x12118800 */
  push32(0x121225d2u); f_12118800();
  /* 121225d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121225d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121225d8 mov dword ptr [0x12143a14], eax */
  w32((uint32_t)(0x12143a14), (EAX));
  /* 121225dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121225df jmp 0x12122617 */
  goto L_12122617;
L_121225e1:;
  /* 121225e1 mov dword ptr [0x12142c98], 0x12142ca0 */
  w32((uint32_t)(0x12142c98), (0x12142ca0u));
  /* 121225eb mov ecx, dword ptr [0x12143a14] */
  ECX = (r32((uint32_t)(0x12143a14)));
  /* 121225f1 push ecx */
  push32((uint32_t)(ECX));
  /* 121225f2 call 0x12122bb0 */
  push32(0x121225f7u); f_12122bb0();
  /* 121225f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121225fa push 2 */
  push32((uint32_t)(0x2u));
  /* 121225fc mov edx, dword ptr [0x12143a14] */
  EDX = (r32((uint32_t)(0x12143a14)));
  /* 12122602 push edx */
  push32((uint32_t)(EDX));
  /* 12122603 call 0x12118800 */
  push32(0x12122608u); f_12118800();
  /* 12122608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212260b mov dword ptr [0x12143a14], 0 */
  w32((uint32_t)(0x12143a14), (0x0u));
  /* 12122615 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12122617:;
  /* 12122617 mov esp, ebp */
  ESP = (EBP);
  /* 12122619 pop ebp */
  EBP = (pop32());
  /* 1212261a ret  */
  ESPCHK(0x12122540u, _esp0);
  ESP += 4; return;
}

/* FUN_10012620 @ 0x12122620 (1423 bytes, 533 insns) */
void f_12122620(void) {
  FTRACE(0x12122620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122620 push ebp */
  push32((uint32_t)(EBP));
  /* 12122621 mov ebp, esp */
  EBP = (ESP);
  /* 12122623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12122626 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1212262d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212262f mov ax, word ptr [0x12143a4e] */
  AX = (r16((uint32_t)(0x12143a4e)));
  /* 12122635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12122638 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1212263a mov cx, word ptr [0x12143a50] */
  CX = (r16((uint32_t)(0x12143a50)));
  /* 12122641 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12122644 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122648 jne 0x12122652 */
  if (!C.zf) goto L_12122652;
  /* 1212264a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212264d jmp 0x12122bab */
  goto L_12122bab;
L_12122652:;
  /* 12122652 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122655 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122658 push edx */
  push32((uint32_t)(EDX));
  /* 12122659 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1212265b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212265e push eax */
  push32((uint32_t)(EAX));
  /* 1212265f push 1 */
  push32((uint32_t)(0x1u));
  /* 12122661 call 0x12125f30 */
  push32(0x12122666u); f_12125f30();
  /* 12122666 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122669 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212266c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212266e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122674 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122677 push edx */
  push32((uint32_t)(EDX));
  /* 12122678 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1212267a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212267d push eax */
  push32((uint32_t)(EAX));
  /* 1212267e push 1 */
  push32((uint32_t)(0x1u));
  /* 12122680 call 0x12125f30 */
  push32(0x12122685u); f_12125f30();
  /* 12122685 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122688 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212268b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212268d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122690 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122693 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122696 push edx */
  push32((uint32_t)(EDX));
  /* 12122697 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12122699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212269c push eax */
  push32((uint32_t)(EAX));
  /* 1212269d push 1 */
  push32((uint32_t)(0x1u));
  /* 1212269f call 0x12125f30 */
  push32(0x121226a4u); f_12125f30();
  /* 121226a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121226a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121226aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121226ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121226af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121226b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121226b5 push edx */
  push32((uint32_t)(EDX));
  /* 121226b6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 121226b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121226bb push eax */
  push32((uint32_t)(EAX));
  /* 121226bc push 1 */
  push32((uint32_t)(0x1u));
  /* 121226be call 0x12125f30 */
  push32(0x121226c3u); f_12125f30();
  /* 121226c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121226c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121226c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121226cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121226ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121226d1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121226d4 push edx */
  push32((uint32_t)(EDX));
  /* 121226d5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 121226d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121226da push eax */
  push32((uint32_t)(EAX));
  /* 121226db push 1 */
  push32((uint32_t)(0x1u));
  /* 121226dd call 0x12125f30 */
  push32(0x121226e2u); f_12125f30();
  /* 121226e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121226e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121226e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121226ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121226ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121226f0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121226f3 push edx */
  push32((uint32_t)(EDX));
  /* 121226f4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 121226f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121226f9 push eax */
  push32((uint32_t)(EAX));
  /* 121226fa push 1 */
  push32((uint32_t)(0x1u));
  /* 121226fc call 0x12125f30 */
  push32(0x12122701u); f_12125f30();
  /* 12122701 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122704 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122707 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122709 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1212270c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212270f push edx */
  push32((uint32_t)(EDX));
  /* 12122710 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12122712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122715 push eax */
  push32((uint32_t)(EAX));
  /* 12122716 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122718 call 0x12125f30 */
  push32(0x1212271du); f_12125f30();
  /* 1212271d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122723 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122725 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212272b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212272e push edx */
  push32((uint32_t)(EDX));
  /* 1212272f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12122731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122734 push eax */
  push32((uint32_t)(EAX));
  /* 12122735 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122737 call 0x12125f30 */
  push32(0x1212273cu); f_12125f30();
  /* 1212273c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212273f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122742 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122744 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212274a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212274d push edx */
  push32((uint32_t)(EDX));
  /* 1212274e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12122750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122753 push eax */
  push32((uint32_t)(EAX));
  /* 12122754 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122756 call 0x12125f30 */
  push32(0x1212275bu); f_12125f30();
  /* 1212275b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212275e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122761 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122763 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122766 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122769 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212276c push edx */
  push32((uint32_t)(EDX));
  /* 1212276d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1212276f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122772 push eax */
  push32((uint32_t)(EAX));
  /* 12122773 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122775 call 0x12125f30 */
  push32(0x1212277au); f_12125f30();
  /* 1212277a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212277d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122780 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122782 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122788 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212278b push edx */
  push32((uint32_t)(EDX));
  /* 1212278c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1212278e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122791 push eax */
  push32((uint32_t)(EAX));
  /* 12122792 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122794 call 0x12125f30 */
  push32(0x12122799u); f_12125f30();
  /* 12122799 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212279c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212279f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121227a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121227a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121227a7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121227aa push edx */
  push32((uint32_t)(EDX));
  /* 121227ab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 121227ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121227b0 push eax */
  push32((uint32_t)(EAX));
  /* 121227b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121227b3 call 0x12125f30 */
  push32(0x121227b8u); f_12125f30();
  /* 121227b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121227bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121227be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121227c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121227c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121227c6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121227c9 push edx */
  push32((uint32_t)(EDX));
  /* 121227ca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 121227cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121227cf push eax */
  push32((uint32_t)(EAX));
  /* 121227d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121227d2 call 0x12125f30 */
  push32(0x121227d7u); f_12125f30();
  /* 121227d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121227da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121227dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121227df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121227e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121227e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121227e8 push edx */
  push32((uint32_t)(EDX));
  /* 121227e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121227eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121227ee push eax */
  push32((uint32_t)(EAX));
  /* 121227ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121227f1 call 0x12125f30 */
  push32(0x121227f6u); f_12125f30();
  /* 121227f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121227f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121227fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121227fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122804 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122807 push edx */
  push32((uint32_t)(EDX));
  /* 12122808 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1212280a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212280d push eax */
  push32((uint32_t)(EAX));
  /* 1212280e push 1 */
  push32((uint32_t)(0x1u));
  /* 12122810 call 0x12125f30 */
  push32(0x12122815u); f_12125f30();
  /* 12122815 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122818 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212281b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212281d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122820 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122823 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122826 push edx */
  push32((uint32_t)(EDX));
  /* 12122827 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12122829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212282c push eax */
  push32((uint32_t)(EAX));
  /* 1212282d push 1 */
  push32((uint32_t)(0x1u));
  /* 1212282f call 0x12125f30 */
  push32(0x12122834u); f_12125f30();
  /* 12122834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212283a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212283c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1212283f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122842 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122845 push edx */
  push32((uint32_t)(EDX));
  /* 12122846 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12122848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212284b push eax */
  push32((uint32_t)(EAX));
  /* 1212284c push 1 */
  push32((uint32_t)(0x1u));
  /* 1212284e call 0x12125f30 */
  push32(0x12122853u); f_12125f30();
  /* 12122853 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122856 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122859 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212285b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1212285e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122861 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122864 push edx */
  push32((uint32_t)(EDX));
  /* 12122865 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12122867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212286a push eax */
  push32((uint32_t)(EAX));
  /* 1212286b push 1 */
  push32((uint32_t)(0x1u));
  /* 1212286d call 0x12125f30 */
  push32(0x12122872u); f_12125f30();
  /* 12122872 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122875 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122878 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212287a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1212287d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122880 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122883 push edx */
  push32((uint32_t)(EDX));
  /* 12122884 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12122886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122889 push eax */
  push32((uint32_t)(EAX));
  /* 1212288a push 1 */
  push32((uint32_t)(0x1u));
  /* 1212288c call 0x12125f30 */
  push32(0x12122891u); f_12125f30();
  /* 12122891 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122894 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122897 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122899 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1212289c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212289f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121228a2 push edx */
  push32((uint32_t)(EDX));
  /* 121228a3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 121228a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121228a8 push eax */
  push32((uint32_t)(EAX));
  /* 121228a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 121228ab call 0x12125f30 */
  push32(0x121228b0u); f_12125f30();
  /* 121228b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121228b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121228b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121228b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121228bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121228be add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121228c1 push edx */
  push32((uint32_t)(EDX));
  /* 121228c2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 121228c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121228c7 push eax */
  push32((uint32_t)(EAX));
  /* 121228c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121228ca call 0x12125f30 */
  push32(0x121228cfu); f_12125f30();
  /* 121228cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121228d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121228d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121228d7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121228da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121228dd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121228e0 push edx */
  push32((uint32_t)(EDX));
  /* 121228e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 121228e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121228e6 push eax */
  push32((uint32_t)(EAX));
  /* 121228e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121228e9 call 0x12125f30 */
  push32(0x121228eeu); f_12125f30();
  /* 121228ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121228f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121228f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121228f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121228f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121228fc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121228ff push edx */
  push32((uint32_t)(EDX));
  /* 12122900 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12122902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122905 push eax */
  push32((uint32_t)(EAX));
  /* 12122906 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122908 call 0x12125f30 */
  push32(0x1212290du); f_12125f30();
  /* 1212290d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122910 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122913 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122915 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212291b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212291e push edx */
  push32((uint32_t)(EDX));
  /* 1212291f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12122921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122924 push eax */
  push32((uint32_t)(EAX));
  /* 12122925 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122927 call 0x12125f30 */
  push32(0x1212292cu); f_12125f30();
  /* 1212292c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212292f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122932 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122934 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212293a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212293d push edx */
  push32((uint32_t)(EDX));
  /* 1212293e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12122940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122943 push eax */
  push32((uint32_t)(EAX));
  /* 12122944 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122946 call 0x12125f30 */
  push32(0x1212294bu); f_12125f30();
  /* 1212294b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212294e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122951 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122953 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122959 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212295c push edx */
  push32((uint32_t)(EDX));
  /* 1212295d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1212295f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122962 push eax */
  push32((uint32_t)(EAX));
  /* 12122963 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122965 call 0x12125f30 */
  push32(0x1212296au); f_12125f30();
  /* 1212296a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212296d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122970 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122972 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122978 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212297b push edx */
  push32((uint32_t)(EDX));
  /* 1212297c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1212297e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122981 push eax */
  push32((uint32_t)(EAX));
  /* 12122982 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122984 call 0x12125f30 */
  push32(0x12122989u); f_12125f30();
  /* 12122989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212298c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212298f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122991 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122997 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212299a push edx */
  push32((uint32_t)(EDX));
  /* 1212299b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1212299d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121229a0 push eax */
  push32((uint32_t)(EAX));
  /* 121229a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121229a3 call 0x12125f30 */
  push32(0x121229a8u); f_12125f30();
  /* 121229a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121229ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121229ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121229b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121229b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121229b6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121229b9 push edx */
  push32((uint32_t)(EDX));
  /* 121229ba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 121229bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121229bf push eax */
  push32((uint32_t)(EAX));
  /* 121229c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121229c2 call 0x12125f30 */
  push32(0x121229c7u); f_12125f30();
  /* 121229c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121229ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121229cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121229cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121229d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121229d5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121229d8 push edx */
  push32((uint32_t)(EDX));
  /* 121229d9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 121229db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121229de push eax */
  push32((uint32_t)(EAX));
  /* 121229df push 1 */
  push32((uint32_t)(0x1u));
  /* 121229e1 call 0x12125f30 */
  push32(0x121229e6u); f_12125f30();
  /* 121229e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121229e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121229ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121229ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121229f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121229f4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121229f7 push edx */
  push32((uint32_t)(EDX));
  /* 121229f8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 121229fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121229fd push eax */
  push32((uint32_t)(EAX));
  /* 121229fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12122a00 call 0x12125f30 */
  push32(0x12122a05u); f_12125f30();
  /* 12122a05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122a0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122a0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122a10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122a13 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a16 push edx */
  push32((uint32_t)(EDX));
  /* 12122a17 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12122a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122a1c push eax */
  push32((uint32_t)(EAX));
  /* 12122a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12122a1f call 0x12125f30 */
  push32(0x12122a24u); f_12125f30();
  /* 12122a24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122a2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122a2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122a32 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a38 push edx */
  push32((uint32_t)(EDX));
  /* 12122a39 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12122a3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122a3e push eax */
  push32((uint32_t)(EAX));
  /* 12122a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12122a41 call 0x12125f30 */
  push32(0x12122a46u); f_12125f30();
  /* 12122a46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122a4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122a4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122a51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122a54 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a5a push edx */
  push32((uint32_t)(EDX));
  /* 12122a5b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12122a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122a60 push eax */
  push32((uint32_t)(EAX));
  /* 12122a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122a63 call 0x12125f30 */
  push32(0x12122a68u); f_12125f30();
  /* 12122a68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122a6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122a70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122a76 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a7c push edx */
  push32((uint32_t)(EDX));
  /* 12122a7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12122a7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122a82 push eax */
  push32((uint32_t)(EAX));
  /* 12122a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122a85 call 0x12125f30 */
  push32(0x12122a8au); f_12125f30();
  /* 12122a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122a90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122a92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122a98 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122a9e push edx */
  push32((uint32_t)(EDX));
  /* 12122a9f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12122aa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122aa4 push eax */
  push32((uint32_t)(EAX));
  /* 12122aa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122aa7 call 0x12125f30 */
  push32(0x12122aacu); f_12125f30();
  /* 12122aac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122aaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122ab2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122ab4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122aba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ac0 push edx */
  push32((uint32_t)(EDX));
  /* 12122ac1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12122ac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122ac6 push eax */
  push32((uint32_t)(EAX));
  /* 12122ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122ac9 call 0x12125f30 */
  push32(0x12122aceu); f_12125f30();
  /* 12122ace add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ad1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122ad4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122ad6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122ad9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122adc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ae2 push edx */
  push32((uint32_t)(EDX));
  /* 12122ae3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12122ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122ae8 push eax */
  push32((uint32_t)(EAX));
  /* 12122ae9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122aeb call 0x12125f30 */
  push32(0x12122af0u); f_12125f30();
  /* 12122af0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122af3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122af6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122af8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122afb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122afe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b04 push edx */
  push32((uint32_t)(EDX));
  /* 12122b05 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12122b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122b0a push eax */
  push32((uint32_t)(EAX));
  /* 12122b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 12122b0d call 0x12125f30 */
  push32(0x12122b12u); f_12125f30();
  /* 12122b12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122b18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122b1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122b1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122b20 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b26 push edx */
  push32((uint32_t)(EDX));
  /* 12122b27 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12122b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122b2c push eax */
  push32((uint32_t)(EAX));
  /* 12122b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12122b2f call 0x12125f30 */
  push32(0x12122b34u); f_12125f30();
  /* 12122b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122b3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122b3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122b42 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b48 push edx */
  push32((uint32_t)(EDX));
  /* 12122b49 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12122b4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122b4e push eax */
  push32((uint32_t)(EAX));
  /* 12122b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12122b51 call 0x12125f30 */
  push32(0x12122b56u); f_12125f30();
  /* 12122b56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122b5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122b5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122b61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122b64 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b6a push edx */
  push32((uint32_t)(EDX));
  /* 12122b6b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12122b6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122b70 push eax */
  push32((uint32_t)(EAX));
  /* 12122b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122b73 call 0x12125f30 */
  push32(0x12122b78u); f_12125f30();
  /* 12122b78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122b7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122b80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122b83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122b86 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12122b8c push edx */
  push32((uint32_t)(EDX));
  /* 12122b8d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12122b92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122b95 push eax */
  push32((uint32_t)(EAX));
  /* 12122b96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122b98 call 0x12125f30 */
  push32(0x12122b9du); f_12125f30();
  /* 12122b9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ba0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12122ba3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122ba5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12122ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12122bab:;
  /* 12122bab mov esp, ebp */
  ESP = (EBP);
  /* 12122bad pop ebp */
  EBP = (pop32());
  /* 12122bae ret  */
  ESPCHK(0x12122620u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12122bb0 (779 bytes, 265 insns) */
void f_12122bb0(void) {
  FTRACE(0x12122bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12122bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12122bb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122bb7 jne 0x12122bbe */
  if (!C.zf) goto L_12122bbe;
  /* 12122bb9 jmp 0x12122eb9 */
  goto L_12122eb9;
L_12122bbe:;
  /* 12122bbe push 2 */
  push32((uint32_t)(0x2u));
  /* 12122bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122bc3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12122bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12122bc7 call 0x12118800 */
  push32(0x12122bccu); f_12118800();
  /* 12122bcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122bcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12122bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122bd4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12122bd7 push eax */
  push32((uint32_t)(EAX));
  /* 12122bd8 call 0x12118800 */
  push32(0x12122bddu); f_12118800();
  /* 12122bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122be5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12122be8 push edx */
  push32((uint32_t)(EDX));
  /* 12122be9 call 0x12118800 */
  push32(0x12122beeu); f_12118800();
  /* 12122bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122bf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122bf6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12122bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 12122bfa call 0x12118800 */
  push32(0x12122bffu); f_12118800();
  /* 12122bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c07 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12122c0a push eax */
  push32((uint32_t)(EAX));
  /* 12122c0b call 0x12118800 */
  push32(0x12122c10u); f_12118800();
  /* 12122c10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c18 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12122c1b push edx */
  push32((uint32_t)(EDX));
  /* 12122c1c call 0x12118800 */
  push32(0x12122c21u); f_12118800();
  /* 12122c21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c24 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12122c2b push ecx */
  push32((uint32_t)(ECX));
  /* 12122c2c call 0x12118800 */
  push32(0x12122c31u); f_12118800();
  /* 12122c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c39 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12122c3c push eax */
  push32((uint32_t)(EAX));
  /* 12122c3d call 0x12118800 */
  push32(0x12122c42u); f_12118800();
  /* 12122c42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c4a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12122c4d push edx */
  push32((uint32_t)(EDX));
  /* 12122c4e call 0x12118800 */
  push32(0x12122c53u); f_12118800();
  /* 12122c53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c5b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12122c5e push ecx */
  push32((uint32_t)(ECX));
  /* 12122c5f call 0x12118800 */
  push32(0x12122c64u); f_12118800();
  /* 12122c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c6c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12122c6f push eax */
  push32((uint32_t)(EAX));
  /* 12122c70 call 0x12118800 */
  push32(0x12122c75u); f_12118800();
  /* 12122c75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c7d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12122c80 push edx */
  push32((uint32_t)(EDX));
  /* 12122c81 call 0x12118800 */
  push32(0x12122c86u); f_12118800();
  /* 12122c86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c8e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12122c91 push ecx */
  push32((uint32_t)(ECX));
  /* 12122c92 call 0x12118800 */
  push32(0x12122c97u); f_12118800();
  /* 12122c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122c9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12122c9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122c9f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12122ca2 push eax */
  push32((uint32_t)(EAX));
  /* 12122ca3 call 0x12118800 */
  push32(0x12122ca8u); f_12118800();
  /* 12122ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122cab push 2 */
  push32((uint32_t)(0x2u));
  /* 12122cad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122cb0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12122cb3 push edx */
  push32((uint32_t)(EDX));
  /* 12122cb4 call 0x12118800 */
  push32(0x12122cb9u); f_12118800();
  /* 12122cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122cbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12122cbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122cc1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12122cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12122cc5 call 0x12118800 */
  push32(0x12122ccau); f_12118800();
  /* 12122cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ccd push 2 */
  push32((uint32_t)(0x2u));
  /* 12122ccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122cd2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12122cd5 push eax */
  push32((uint32_t)(EAX));
  /* 12122cd6 call 0x12118800 */
  push32(0x12122cdbu); f_12118800();
  /* 12122cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122cde push 2 */
  push32((uint32_t)(0x2u));
  /* 12122ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122ce3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12122ce6 push edx */
  push32((uint32_t)(EDX));
  /* 12122ce7 call 0x12118800 */
  push32(0x12122cecu); f_12118800();
  /* 12122cec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122cef push 2 */
  push32((uint32_t)(0x2u));
  /* 12122cf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122cf4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12122cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12122cf8 call 0x12118800 */
  push32(0x12122cfdu); f_12118800();
  /* 12122cfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d00 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d05 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12122d08 push eax */
  push32((uint32_t)(EAX));
  /* 12122d09 call 0x12118800 */
  push32(0x12122d0eu); f_12118800();
  /* 12122d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d16 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12122d19 push edx */
  push32((uint32_t)(EDX));
  /* 12122d1a call 0x12118800 */
  push32(0x12122d1fu); f_12118800();
  /* 12122d1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d27 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12122d2a push ecx */
  push32((uint32_t)(ECX));
  /* 12122d2b call 0x12118800 */
  push32(0x12122d30u); f_12118800();
  /* 12122d30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d38 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12122d3b push eax */
  push32((uint32_t)(EAX));
  /* 12122d3c call 0x12118800 */
  push32(0x12122d41u); f_12118800();
  /* 12122d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d49 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12122d4c push edx */
  push32((uint32_t)(EDX));
  /* 12122d4d call 0x12118800 */
  push32(0x12122d52u); f_12118800();
  /* 12122d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d5a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12122d5d push ecx */
  push32((uint32_t)(ECX));
  /* 12122d5e call 0x12118800 */
  push32(0x12122d63u); f_12118800();
  /* 12122d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d6b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12122d6e push eax */
  push32((uint32_t)(EAX));
  /* 12122d6f call 0x12118800 */
  push32(0x12122d74u); f_12118800();
  /* 12122d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d7c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12122d7f push edx */
  push32((uint32_t)(EDX));
  /* 12122d80 call 0x12118800 */
  push32(0x12122d85u); f_12118800();
  /* 12122d85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d8d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12122d90 push ecx */
  push32((uint32_t)(ECX));
  /* 12122d91 call 0x12118800 */
  push32(0x12122d96u); f_12118800();
  /* 12122d96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122d99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122d9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122d9e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12122da1 push eax */
  push32((uint32_t)(EAX));
  /* 12122da2 call 0x12118800 */
  push32(0x12122da7u); f_12118800();
  /* 12122da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122daa push 2 */
  push32((uint32_t)(0x2u));
  /* 12122dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122daf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12122db2 push edx */
  push32((uint32_t)(EDX));
  /* 12122db3 call 0x12118800 */
  push32(0x12122db8u); f_12118800();
  /* 12122db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 12122dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122dc0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12122dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12122dc4 call 0x12118800 */
  push32(0x12122dc9u); f_12118800();
  /* 12122dc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122dcc push 2 */
  push32((uint32_t)(0x2u));
  /* 12122dce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122dd1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12122dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12122dd5 call 0x12118800 */
  push32(0x12122ddau); f_12118800();
  /* 12122dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ddd push 2 */
  push32((uint32_t)(0x2u));
  /* 12122ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122de2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12122de8 push edx */
  push32((uint32_t)(EDX));
  /* 12122de9 call 0x12118800 */
  push32(0x12122deeu); f_12118800();
  /* 12122dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122df1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122df3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122df6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12122dfc push ecx */
  push32((uint32_t)(ECX));
  /* 12122dfd call 0x12118800 */
  push32(0x12122e02u); f_12118800();
  /* 12122e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e0a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12122e10 push eax */
  push32((uint32_t)(EAX));
  /* 12122e11 call 0x12118800 */
  push32(0x12122e16u); f_12118800();
  /* 12122e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e1e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12122e24 push edx */
  push32((uint32_t)(EDX));
  /* 12122e25 call 0x12118800 */
  push32(0x12122e2au); f_12118800();
  /* 12122e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e32 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12122e38 push ecx */
  push32((uint32_t)(ECX));
  /* 12122e39 call 0x12118800 */
  push32(0x12122e3eu); f_12118800();
  /* 12122e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e41 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e46 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12122e4c push eax */
  push32((uint32_t)(EAX));
  /* 12122e4d call 0x12118800 */
  push32(0x12122e52u); f_12118800();
  /* 12122e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e5a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12122e60 push edx */
  push32((uint32_t)(EDX));
  /* 12122e61 call 0x12118800 */
  push32(0x12122e66u); f_12118800();
  /* 12122e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e6e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12122e74 push ecx */
  push32((uint32_t)(ECX));
  /* 12122e75 call 0x12118800 */
  push32(0x12122e7au); f_12118800();
  /* 12122e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e82 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12122e88 push eax */
  push32((uint32_t)(EAX));
  /* 12122e89 call 0x12118800 */
  push32(0x12122e8eu); f_12118800();
  /* 12122e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122e91 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122e93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122e96 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12122e9c push edx */
  push32((uint32_t)(EDX));
  /* 12122e9d call 0x12118800 */
  push32(0x12122ea2u); f_12118800();
  /* 12122ea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122ea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12122eaa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12122eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12122eb1 call 0x12118800 */
  push32(0x12122eb6u); f_12118800();
  /* 12122eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12122eb9:;
  /* 12122eb9 pop ebp */
  EBP = (pop32());
  /* 12122eba ret  */
  ESPCHK(0x12122bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x12122ec0 (678 bytes, 180 insns) */
void f_12122ec0(void) {
  FTRACE(0x12122ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12122ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12122ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12122ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12122ec6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12122ecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12122ecf mov ax, word ptr [0x12143a4a] */
  AX = (r16((uint32_t)(0x12143a4a)));
  /* 12122ed5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12122ed8 cmp dword ptr [0x121439f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122edf je 0x1212303a */
  if (C.zf) goto L_1212303a;
  /* 12122ee5 push 0x12143a18 */
  push32((uint32_t)(0x12143a18u));
  /* 12122eea push 0xe */
  push32((uint32_t)(0xeu));
  /* 12122eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122eef push ecx */
  push32((uint32_t)(ECX));
  /* 12122ef0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12122ef2 call 0x12125f30 */
  push32(0x12122ef7u); f_12125f30();
  /* 12122ef7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122efa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122efd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12122eff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12122f02 push 0x12143a1c */
  push32((uint32_t)(0x12143a1cu));
  /* 12122f07 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12122f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122f0c push eax */
  push32((uint32_t)(EAX));
  /* 12122f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12122f0f call 0x12125f30 */
  push32(0x12122f14u); f_12125f30();
  /* 12122f14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122f17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122f1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122f1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12122f1f push 0x12143a20 */
  push32((uint32_t)(0x12143a20u));
  /* 12122f24 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12122f26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12122f29 push edx */
  push32((uint32_t)(EDX));
  /* 12122f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12122f2c call 0x12125f30 */
  push32(0x12122f31u); f_12125f30();
  /* 12122f31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122f34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12122f37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12122f39 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12122f3c mov edx, dword ptr [0x12143a20] */
  EDX = (r32((uint32_t)(0x12143a20)));
  /* 12122f42 push edx */
  push32((uint32_t)(EDX));
  /* 12122f43 call 0x12123170 */
  push32(0x12122f48u); f_12123170();
  /* 12122f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122f4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122f4f je 0x12122fa9 */
  if (C.zf) goto L_12122fa9;
  /* 12122f51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122f53 mov eax, dword ptr [0x12143a18] */
  EAX = (r32((uint32_t)(0x12143a18)));
  /* 12122f58 push eax */
  push32((uint32_t)(EAX));
  /* 12122f59 call 0x12118800 */
  push32(0x12122f5eu); f_12118800();
  /* 12122f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122f63 mov ecx, dword ptr [0x12143a1c] */
  ECX = (r32((uint32_t)(0x12143a1c)));
  /* 12122f69 push ecx */
  push32((uint32_t)(ECX));
  /* 12122f6a call 0x12118800 */
  push32(0x12122f6fu); f_12118800();
  /* 12122f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122f72 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122f74 mov edx, dword ptr [0x12143a20] */
  EDX = (r32((uint32_t)(0x12143a20)));
  /* 12122f7a push edx */
  push32((uint32_t)(EDX));
  /* 12122f7b call 0x12118800 */
  push32(0x12122f80u); f_12118800();
  /* 12122f80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122f83 mov dword ptr [0x12143a18], 0 */
  w32((uint32_t)(0x12143a18), (0x0u));
  /* 12122f8d mov dword ptr [0x12143a1c], 0 */
  w32((uint32_t)(0x12143a1c), (0x0u));
  /* 12122f97 mov dword ptr [0x12143a20], 0 */
  w32((uint32_t)(0x12143a20), (0x0u));
  /* 12122fa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12122fa4 jmp 0x12123162 */
  goto L_12123162;
L_12122fa9:;
  /* 12122fa9 mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 12122fae cmp dword ptr [eax], 0x12142d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12142d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12122fb4 je 0x12122ff0 */
  if (C.zf) goto L_12122ff0;
  /* 12122fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122fb8 mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12122fbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12122fc0 push edx */
  push32((uint32_t)(EDX));
  /* 12122fc1 call 0x12118800 */
  push32(0x12122fc6u); f_12118800();
  /* 12122fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122fc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12122fcb mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 12122fd0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12122fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12122fd4 call 0x12118800 */
  push32(0x12122fd9u); f_12118800();
  /* 12122fd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12122fdc push 2 */
  push32((uint32_t)(0x2u));
  /* 12122fde mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 12122fe4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12122fe7 push eax */
  push32((uint32_t)(EAX));
  /* 12122fe8 call 0x12118800 */
  push32(0x12122fedu); f_12118800();
  /* 12122fed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12122ff0:;
  /* 12122ff0 mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12122ff6 mov edx, dword ptr [0x12143a18] */
  EDX = (r32((uint32_t)(0x12143a18)));
  /* 12122ffc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12122ffe mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 12123003 mov ecx, dword ptr [0x12143a1c] */
  ECX = (r32((uint32_t)(0x12143a1c)));
  /* 12123009 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1212300c mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 12123012 mov eax, dword ptr [0x12143a20] */
  EAX = (r32((uint32_t)(0x12143a20)));
  /* 12123017 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1212301a mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12123020 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12123022 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12123024 mov byte ptr [0x12141ea8], al */
  w8((uint32_t)(0x12141ea8), (AL));
  /* 12123029 mov dword ptr [0x12141eac], 1 */
  w32((uint32_t)(0x12141eac), (0x1u));
  /* 12123033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123035 jmp 0x12123162 */
  goto L_12123162;
L_1212303a:;
  /* 1212303a push 2 */
  push32((uint32_t)(0x2u));
  /* 1212303c mov ecx, dword ptr [0x12143a18] */
  ECX = (r32((uint32_t)(0x12143a18)));
  /* 12123042 push ecx */
  push32((uint32_t)(ECX));
  /* 12123043 call 0x12118800 */
  push32(0x12123048u); f_12118800();
  /* 12123048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212304b push 2 */
  push32((uint32_t)(0x2u));
  /* 1212304d mov edx, dword ptr [0x12143a1c] */
  EDX = (r32((uint32_t)(0x12143a1c)));
  /* 12123053 push edx */
  push32((uint32_t)(EDX));
  /* 12123054 call 0x12118800 */
  push32(0x12123059u); f_12118800();
  /* 12123059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212305c push 2 */
  push32((uint32_t)(0x2u));
  /* 1212305e mov eax, dword ptr [0x12143a20] */
  EAX = (r32((uint32_t)(0x12143a20)));
  /* 12123063 push eax */
  push32((uint32_t)(EAX));
  /* 12123064 call 0x12118800 */
  push32(0x12123069u); f_12118800();
  /* 12123069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212306c mov dword ptr [0x12143a18], 0 */
  w32((uint32_t)(0x12143a18), (0x0u));
  /* 12123076 mov dword ptr [0x12143a1c], 0 */
  w32((uint32_t)(0x12143a1c), (0x0u));
  /* 12123080 mov dword ptr [0x12143a20], 0 */
  w32((uint32_t)(0x12143a20), (0x0u));
  /* 1212308a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1212308f push 0x1213f554 */
  push32((uint32_t)(0x1213f554u));
  /* 12123094 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123096 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123098 call 0x12117d70 */
  push32(0x1212309du); f_12117d70();
  /* 1212309d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121230a0 mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 121230a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121230a8 mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 121230ae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121230b1 jne 0x121230bb */
  if (!C.zf) goto L_121230bb;
  /* 121230b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121230b6 jmp 0x12123162 */
  goto L_12123162;
L_121230bb:;
  /* 121230bb push 0x1213f524 */
  push32((uint32_t)(0x1213f524u));
  /* 121230c0 mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 121230c5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121230c7 push ecx */
  push32((uint32_t)(ECX));
  /* 121230c8 call 0x1211ad20 */
  push32(0x121230cdu); f_1211ad20();
  /* 121230cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121230d0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 121230d5 push 0x1213f554 */
  push32((uint32_t)(0x1213f554u));
  /* 121230da push 2 */
  push32((uint32_t)(0x2u));
  /* 121230dc push 2 */
  push32((uint32_t)(0x2u));
  /* 121230de call 0x12117d70 */
  push32(0x121230e3u); f_12117d70();
  /* 121230e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121230e6 mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 121230ec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 121230ef mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 121230f4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121230f8 jne 0x121230ff */
  if (!C.zf) goto L_121230ff;
  /* 121230fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121230fd jmp 0x12123162 */
  goto L_12123162;
L_121230ff:;
  /* 121230ff mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12123105 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12123108 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1212310b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12123110 push 0x1213f554 */
  push32((uint32_t)(0x1213f554u));
  /* 12123115 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123117 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123119 call 0x12117d70 */
  push32(0x1212311eu); f_12117d70();
  /* 1212311e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123121 mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12123127 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1212312a mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 12123130 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123134 jne 0x1212313b */
  if (!C.zf) goto L_1212313b;
  /* 12123136 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12123139 jmp 0x12123162 */
  goto L_12123162;
L_1212313b:;
  /* 1212313b mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 12123140 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12123143 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12123146 mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 1212314c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1212314e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12123150 mov byte ptr [0x12141ea8], cl */
  w8((uint32_t)(0x12141ea8), (CL));
  /* 12123156 mov dword ptr [0x12141eac], 1 */
  w32((uint32_t)(0x12141eac), (0x1u));
  /* 12123160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12123162:;
  /* 12123162 mov esp, ebp */
  ESP = (EBP);
  /* 12123164 pop ebp */
  EBP = (pop32());
  /* 12123165 ret  */
  ESPCHK(0x12122ec0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12123170 (125 bytes, 49 insns) */
void f_12123170(void) {
  FTRACE(0x12123170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123170 push ebp */
  push32((uint32_t)(EBP));
  /* 12123171 mov ebp, esp */
  EBP = (ESP);
  /* 12123173 push ecx */
  push32((uint32_t)(ECX));
L_12123174:;
  /* 12123174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123177 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1212317a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212317c je 0x121231e9 */
  if (C.zf) goto L_121231e9;
  /* 1212317e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123181 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12123184 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123187 jl 0x121231ad */
  if ((C.sf!=C.of)) goto L_121231ad;
  /* 12123189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212318c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1212318f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123192 jg 0x121231ad */
  if ((!C.zf&&C.sf==C.of)) goto L_121231ad;
  /* 12123194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123197 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1212319a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212319d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121231a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121231a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121231a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121231a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121231ab jmp 0x121231e7 */
  goto L_121231e7;
L_121231ad:;
  /* 121231ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121231b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121231b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121231b6 jne 0x121231de */
  if (!C.zf) goto L_121231de;
  /* 121231b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121231bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121231be:;
  /* 121231be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121231c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121231c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121231c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121231c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121231cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121231cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121231d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121231d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121231d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121231da jne 0x121231be */
  if (!C.zf) goto L_121231be;
  /* 121231dc jmp 0x121231e7 */
  goto L_121231e7;
L_121231de:;
  /* 121231de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121231e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121231e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121231e7:;
  /* 121231e7 jmp 0x12123174 */
  goto L_12123174;
L_121231e9:;
  /* 121231e9 mov esp, ebp */
  ESP = (EBP);
  /* 121231eb pop ebp */
  EBP = (pop32());
  /* 121231ec ret  */
  ESPCHK(0x12123170u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x121231f0 (304 bytes, 85 insns) */
void f_121231f0(void) {
  FTRACE(0x121231f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121231f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121231f1 mov ebp, esp */
  EBP = (ESP);
  /* 121231f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121231f4 cmp dword ptr [0x121439ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121231fb je 0x121232bc */
  if (C.zf) goto L_121232bc;
  /* 12123201 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12123203 push 0x1213f560 */
  push32((uint32_t)(0x1213f560u));
  /* 12123208 push 2 */
  push32((uint32_t)(0x2u));
  /* 1212320a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1212320c push 1 */
  push32((uint32_t)(0x1u));
  /* 1212320e call 0x12118180 */
  push32(0x12123213u); f_12118180();
  /* 12123213 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123216 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12123219 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212321d jne 0x12123229 */
  if (!C.zf) goto L_12123229;
  /* 1212321f mov eax, 1 */
  EAX = (0x1u);
  /* 12123224 jmp 0x1212331c */
  goto L_1212331c;
L_12123229:;
  /* 12123229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212322c push eax */
  push32((uint32_t)(EAX));
  /* 1212322d call 0x12123320 */
  push32(0x12123232u); f_12123320();
  /* 12123232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123237 je 0x1212325d */
  if (C.zf) goto L_1212325d;
  /* 12123239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212323c push ecx */
  push32((uint32_t)(ECX));
  /* 1212323d call 0x121235b0 */
  push32(0x12123242u); f_121235b0();
  /* 12123242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123245 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123247 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212324a push edx */
  push32((uint32_t)(EDX));
  /* 1212324b call 0x12118800 */
  push32(0x12123250u); f_12118800();
  /* 12123250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123253 mov eax, 1 */
  EAX = (0x1u);
  /* 12123258 jmp 0x1212331c */
  goto L_1212331c;
L_1212325d:;
  /* 1212325d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123260 mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12123266 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12123268 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1212326a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212326d mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12123273 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12123276 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12123279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212327c mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 12123282 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12123285 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12123288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212328b mov dword ptr [0x12142d88], eax */
  w32((uint32_t)(0x12142d88), (EAX));
  /* 12123290 mov ecx, dword ptr [0x12143a24] */
  ECX = (r32((uint32_t)(0x12143a24)));
  /* 12123296 push ecx */
  push32((uint32_t)(ECX));
  /* 12123297 call 0x121235b0 */
  push32(0x1212329cu); f_121235b0();
  /* 1212329c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212329f push 2 */
  push32((uint32_t)(0x2u));
  /* 121232a1 mov edx, dword ptr [0x12143a24] */
  EDX = (r32((uint32_t)(0x12143a24)));
  /* 121232a7 push edx */
  push32((uint32_t)(EDX));
  /* 121232a8 call 0x12118800 */
  push32(0x121232adu); f_12118800();
  /* 121232ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121232b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121232b3 mov dword ptr [0x12143a24], eax */
  w32((uint32_t)(0x12143a24), (EAX));
  /* 121232b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121232ba jmp 0x1212331c */
  goto L_1212331c;
L_121232bc:;
  /* 121232bc mov ecx, dword ptr [0x12142d88] */
  ECX = (r32((uint32_t)(0x12142d88)));
  /* 121232c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121232c4 mov dword ptr [0x12142d58], edx */
  w32((uint32_t)(0x12142d58), (EDX));
  /* 121232ca mov eax, dword ptr [0x12142d88] */
  EAX = (r32((uint32_t)(0x12142d88)));
  /* 121232cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121232d2 mov dword ptr [0x12142d5c], ecx */
  w32((uint32_t)(0x12142d5c), (ECX));
  /* 121232d8 mov edx, dword ptr [0x12142d88] */
  EDX = (r32((uint32_t)(0x12142d88)));
  /* 121232de mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121232e1 mov dword ptr [0x12142d60], eax */
  w32((uint32_t)(0x12142d60), (EAX));
  /* 121232e6 mov dword ptr [0x12142d88], 0x12142d58 */
  w32((uint32_t)(0x12142d88), (0x12142d58u));
  /* 121232f0 mov ecx, dword ptr [0x12143a24] */
  ECX = (r32((uint32_t)(0x12143a24)));
  /* 121232f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121232f7 call 0x121235b0 */
  push32(0x121232fcu); f_121235b0();
  /* 121232fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121232ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12123301 mov edx, dword ptr [0x12143a24] */
  EDX = (r32((uint32_t)(0x12143a24)));
  /* 12123307 push edx */
  push32((uint32_t)(EDX));
  /* 12123308 call 0x12118800 */
  push32(0x1212330du); f_12118800();
  /* 1212330d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123310 mov dword ptr [0x12143a24], 0 */
  w32((uint32_t)(0x12143a24), (0x0u));
  /* 1212331a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1212331c:;
  /* 1212331c mov esp, ebp */
  ESP = (EBP);
  /* 1212331e pop ebp */
  EBP = (pop32());
  /* 1212331f ret  */
  ESPCHK(0x121231f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013320 @ 0x12123320 (525 bytes, 200 insns) */
void f_12123320(void) {
  FTRACE(0x12123320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123320 push ebp */
  push32((uint32_t)(EBP));
  /* 12123321 mov ebp, esp */
  EBP = (ESP);
  /* 12123323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123326 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1212332d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212332f mov ax, word ptr [0x12143a44] */
  AX = (r16((uint32_t)(0x12143a44)));
  /* 12123335 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12123338 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212333c jne 0x12123346 */
  if (!C.zf) goto L_12123346;
  /* 1212333e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12123341 jmp 0x12123529 */
  goto L_12123529;
L_12123346:;
  /* 12123346 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123349 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212334c push ecx */
  push32((uint32_t)(ECX));
  /* 1212334d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1212334f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123352 push edx */
  push32((uint32_t)(EDX));
  /* 12123353 push 1 */
  push32((uint32_t)(0x1u));
  /* 12123355 call 0x12125f30 */
  push32(0x1212335au); f_12125f30();
  /* 1212335a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212335d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123360 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12123362 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12123365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123368 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212336b push edx */
  push32((uint32_t)(EDX));
  /* 1212336c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1212336e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123371 push eax */
  push32((uint32_t)(EAX));
  /* 12123372 push 1 */
  push32((uint32_t)(0x1u));
  /* 12123374 call 0x12125f30 */
  push32(0x12123379u); f_12125f30();
  /* 12123379 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212337c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212337f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12123381 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12123384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123387 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212338a push edx */
  push32((uint32_t)(EDX));
  /* 1212338b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1212338d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123390 push eax */
  push32((uint32_t)(EAX));
  /* 12123391 push 1 */
  push32((uint32_t)(0x1u));
  /* 12123393 call 0x12125f30 */
  push32(0x12123398u); f_12125f30();
  /* 12123398 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212339b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212339e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121233a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121233a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121233a6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121233a9 push edx */
  push32((uint32_t)(EDX));
  /* 121233aa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121233ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121233af push eax */
  push32((uint32_t)(EAX));
  /* 121233b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121233b2 call 0x12125f30 */
  push32(0x121233b7u); f_12125f30();
  /* 121233b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121233ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121233bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121233bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121233c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121233c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121233c8 push edx */
  push32((uint32_t)(EDX));
  /* 121233c9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121233cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121233ce push eax */
  push32((uint32_t)(EAX));
  /* 121233cf push 1 */
  push32((uint32_t)(0x1u));
  /* 121233d1 call 0x12125f30 */
  push32(0x121233d6u); f_12125f30();
  /* 121233d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121233d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121233dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121233de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121233e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121233e4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121233e7 push eax */
  push32((uint32_t)(EAX));
  /* 121233e8 call 0x12123530 */
  push32(0x121233edu); f_12123530();
  /* 121233ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121233f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121233f3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121233f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121233f7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 121233f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121233fc push edx */
  push32((uint32_t)(EDX));
  /* 121233fd push 1 */
  push32((uint32_t)(0x1u));
  /* 121233ff call 0x12125f30 */
  push32(0x12123404u); f_12125f30();
  /* 12123404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212340a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212340c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212340f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123412 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123415 push edx */
  push32((uint32_t)(EDX));
  /* 12123416 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12123418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212341b push eax */
  push32((uint32_t)(EAX));
  /* 1212341c push 1 */
  push32((uint32_t)(0x1u));
  /* 1212341e call 0x12125f30 */
  push32(0x12123423u); f_12125f30();
  /* 12123423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123429 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212342b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212342e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123431 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123434 push edx */
  push32((uint32_t)(EDX));
  /* 12123435 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12123437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212343a push eax */
  push32((uint32_t)(EAX));
  /* 1212343b push 0 */
  push32((uint32_t)(0x0u));
  /* 1212343d call 0x12125f30 */
  push32(0x12123442u); f_12125f30();
  /* 12123442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123445 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123448 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1212344a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212344d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123450 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123453 push edx */
  push32((uint32_t)(EDX));
  /* 12123454 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12123456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123459 push eax */
  push32((uint32_t)(EAX));
  /* 1212345a push 0 */
  push32((uint32_t)(0x0u));
  /* 1212345c call 0x12125f30 */
  push32(0x12123461u); f_12125f30();
  /* 12123461 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123467 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12123469 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212346c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212346f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123472 push edx */
  push32((uint32_t)(EDX));
  /* 12123473 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12123475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123478 push eax */
  push32((uint32_t)(EAX));
  /* 12123479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212347b call 0x12125f30 */
  push32(0x12123480u); f_12125f30();
  /* 12123480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123483 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123486 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12123488 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1212348b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212348e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123491 push edx */
  push32((uint32_t)(EDX));
  /* 12123492 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12123494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123497 push eax */
  push32((uint32_t)(EAX));
  /* 12123498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212349a call 0x12125f30 */
  push32(0x1212349fu); f_12125f30();
  /* 1212349f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121234a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121234a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121234a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121234aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121234ad add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121234b0 push edx */
  push32((uint32_t)(EDX));
  /* 121234b1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 121234b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121234b6 push eax */
  push32((uint32_t)(EAX));
  /* 121234b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121234b9 call 0x12125f30 */
  push32(0x121234beu); f_12125f30();
  /* 121234be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121234c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121234c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121234c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121234c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121234cc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121234cf push edx */
  push32((uint32_t)(EDX));
  /* 121234d0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 121234d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121234d5 push eax */
  push32((uint32_t)(EAX));
  /* 121234d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121234d8 call 0x12125f30 */
  push32(0x121234ddu); f_12125f30();
  /* 121234dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121234e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121234e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121234e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121234e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121234eb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121234ee push edx */
  push32((uint32_t)(EDX));
  /* 121234ef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 121234f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121234f4 push eax */
  push32((uint32_t)(EAX));
  /* 121234f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121234f7 call 0x12125f30 */
  push32(0x121234fcu); f_12125f30();
  /* 121234fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121234ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123502 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12123504 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12123507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212350a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212350d push edx */
  push32((uint32_t)(EDX));
  /* 1212350e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12123510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123513 push eax */
  push32((uint32_t)(EAX));
  /* 12123514 push 0 */
  push32((uint32_t)(0x0u));
  /* 12123516 call 0x12125f30 */
  push32(0x1212351bu); f_12125f30();
  /* 1212351b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212351e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123521 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12123523 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12123526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12123529:;
  /* 12123529 mov esp, ebp */
  ESP = (EBP);
  /* 1212352b pop ebp */
  EBP = (pop32());
  /* 1212352c ret  */
  ESPCHK(0x12123320u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12123530 (125 bytes, 49 insns) */
void f_12123530(void) {
  FTRACE(0x12123530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123530 push ebp */
  push32((uint32_t)(EBP));
  /* 12123531 mov ebp, esp */
  EBP = (ESP);
  /* 12123533 push ecx */
  push32((uint32_t)(ECX));
L_12123534:;
  /* 12123534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123537 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1212353a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212353c je 0x121235a9 */
  if (C.zf) goto L_121235a9;
  /* 1212353e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123541 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12123544 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123547 jl 0x1212356d */
  if ((C.sf!=C.of)) goto L_1212356d;
  /* 12123549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212354c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1212354f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123552 jg 0x1212356d */
  if ((!C.zf&&C.sf==C.of)) goto L_1212356d;
  /* 12123554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123557 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1212355a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212355d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123560 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12123562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123565 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123568 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1212356b jmp 0x121235a7 */
  goto L_121235a7;
L_1212356d:;
  /* 1212356d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123570 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12123573 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123576 jne 0x1212359e */
  if (!C.zf) goto L_1212359e;
  /* 12123578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212357b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1212357e:;
  /* 1212357e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123584 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12123587 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12123589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212358c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212358f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12123592 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123595 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12123598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212359a jne 0x1212357e */
  if (!C.zf) goto L_1212357e;
  /* 1212359c jmp 0x121235a7 */
  goto L_121235a7;
L_1212359e:;
  /* 1212359e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121235a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121235a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121235a7:;
  /* 121235a7 jmp 0x12123534 */
  goto L_12123534;
L_121235a9:;
  /* 121235a9 mov esp, ebp */
  ESP = (EBP);
  /* 121235ab pop ebp */
  EBP = (pop32());
  /* 121235ac ret  */
  ESPCHK(0x12123530u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x121235b0 (147 bytes, 52 insns) */
void f_121235b0(void) {
  FTRACE(0x121235b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121235b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121235b1 mov ebp, esp */
  EBP = (ESP);
  /* 121235b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121235b7 jne 0x121235be */
  if (!C.zf) goto L_121235be;
  /* 121235b9 jmp 0x12123641 */
  goto L_12123641;
L_121235be:;
  /* 121235be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121235c1 cmp dword ptr [eax + 0xc], 0x12143a80 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12143a80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121235c8 je 0x12123641 */
  if (C.zf) goto L_12123641;
  /* 121235ca push 2 */
  push32((uint32_t)(0x2u));
  /* 121235cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121235cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121235d2 push edx */
  push32((uint32_t)(EDX));
  /* 121235d3 call 0x12118800 */
  push32(0x121235d8u); f_12118800();
  /* 121235d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121235db push 2 */
  push32((uint32_t)(0x2u));
  /* 121235dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121235e0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121235e3 push ecx */
  push32((uint32_t)(ECX));
  /* 121235e4 call 0x12118800 */
  push32(0x121235e9u); f_12118800();
  /* 121235e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121235ec push 2 */
  push32((uint32_t)(0x2u));
  /* 121235ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121235f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121235f4 push eax */
  push32((uint32_t)(EAX));
  /* 121235f5 call 0x12118800 */
  push32(0x121235fau); f_12118800();
  /* 121235fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121235fd push 2 */
  push32((uint32_t)(0x2u));
  /* 121235ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123602 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12123605 push edx */
  push32((uint32_t)(EDX));
  /* 12123606 call 0x12118800 */
  push32(0x1212360bu); f_12118800();
  /* 1212360b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212360e push 2 */
  push32((uint32_t)(0x2u));
  /* 12123610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123613 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12123616 push ecx */
  push32((uint32_t)(ECX));
  /* 12123617 call 0x12118800 */
  push32(0x1212361cu); f_12118800();
  /* 1212361c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212361f push 2 */
  push32((uint32_t)(0x2u));
  /* 12123621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123624 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12123627 push eax */
  push32((uint32_t)(EAX));
  /* 12123628 call 0x12118800 */
  push32(0x1212362du); f_12118800();
  /* 1212362d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123630 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123635 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12123638 push edx */
  push32((uint32_t)(EDX));
  /* 12123639 call 0x12118800 */
  push32(0x1212363eu); f_12118800();
  /* 1212363e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12123641:;
  /* 12123641 pop ebp */
  EBP = (pop32());
  /* 12123642 ret  */
  ESPCHK(0x121235b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013650 @ 0x12123650 (928 bytes, 284 insns) */
void f_12123650(void) {
  FTRACE(0x12123650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123650 push ebp */
  push32((uint32_t)(EBP));
  /* 12123651 mov ebp, esp */
  EBP = (ESP);
  /* 12123653 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123656 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1212365d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12123664 cmp dword ptr [0x121439e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212366b je 0x121239a1 */
  if (C.zf) goto L_121239a1;
  /* 12123671 cmp dword ptr [0x121439f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123678 jne 0x121236a0 */
  if (!C.zf) goto L_121236a0;
  /* 1212367a push 0x121439f8 */
  push32((uint32_t)(0x121439f8u));
  /* 1212367f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12123684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123686 mov ax, word ptr [0x12143a3c] */
  AX = (r16((uint32_t)(0x12143a3c)));
  /* 1212368c push eax */
  push32((uint32_t)(EAX));
  /* 1212368d push 0 */
  push32((uint32_t)(0x0u));
  /* 1212368f call 0x12125f30 */
  push32(0x12123694u); f_12125f30();
  /* 12123694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123699 je 0x121236a0 */
  if (C.zf) goto L_121236a0;
  /* 1212369b jmp 0x12123962 */
  goto L_12123962;
L_121236a0:;
  /* 121236a0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 121236a2 push 0x1213f56c */
  push32((uint32_t)(0x1213f56cu));
  /* 121236a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121236a9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121236ae call 0x12117d70 */
  push32(0x121236b3u); f_12117d70();
  /* 121236b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121236b6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121236b9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 121236bb push 0x1213f56c */
  push32((uint32_t)(0x1213f56cu));
  /* 121236c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121236c2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121236c7 call 0x12117d70 */
  push32(0x121236ccu); f_12117d70();
  /* 121236cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121236cf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121236d2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 121236d4 push 0x1213f56c */
  push32((uint32_t)(0x1213f56cu));
  /* 121236d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121236db push 0x101 */
  push32((uint32_t)(0x101u));
  /* 121236e0 call 0x12117d70 */
  push32(0x121236e5u); f_12117d70();
  /* 121236e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121236e8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 121236eb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 121236ed push 0x1213f56c */
  push32((uint32_t)(0x1213f56cu));
  /* 121236f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121236f4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121236f9 call 0x12117d70 */
  push32(0x121236feu); f_12117d70();
  /* 121236fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123701 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12123704 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123708 je 0x1212371c */
  if (C.zf) goto L_1212371c;
  /* 1212370a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212370e je 0x1212371c */
  if (C.zf) goto L_1212371c;
  /* 12123710 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123714 je 0x1212371c */
  if (C.zf) goto L_1212371c;
  /* 12123716 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212371a jne 0x12123721 */
  if (!C.zf) goto L_12123721;
L_1212371c:;
  /* 1212371c jmp 0x12123962 */
  goto L_12123962;
L_12123721:;
  /* 12123721 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12123724 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12123727 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1212372e jmp 0x12123739 */
  goto L_12123739;
L_12123730:;
  /* 12123730 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12123733 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123736 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12123739:;
  /* 12123739 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123740 jge 0x12123755 */
  if ((C.sf==C.of)) goto L_12123755;
  /* 12123742 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12123745 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12123748 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1212374a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1212374d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123750 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12123753 jmp 0x12123730 */
  goto L_12123730;
L_12123755:;
  /* 12123755 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12123758 push eax */
  push32((uint32_t)(EAX));
  /* 12123759 mov ecx, dword ptr [0x121439f8] */
  ECX = (r32((uint32_t)(0x121439f8)));
  /* 1212375f push ecx */
  push32((uint32_t)(ECX));
  /* 12123760 call dword ptr [0x12146344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146344))), 0x12123766u);
  /* 12123766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123768 jne 0x1212376f */
  if (!C.zf) goto L_1212376f;
  /* 1212376a jmp 0x12123962 */
  goto L_12123962;
L_1212376f:;
  /* 1212376f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123773 jbe 0x1212377a */
  if ((C.cf||C.zf)) goto L_1212377a;
  /* 12123775 jmp 0x12123962 */
  goto L_12123962;
L_1212377a:;
  /* 1212377a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1212377d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12123783 mov dword ptr [0x12141ea4], edx */
  w32((uint32_t)(0x12141ea4), (EDX));
  /* 12123789 cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123790 jle 0x121237e9 */
  if ((C.zf||C.sf!=C.of)) goto L_121237e9;
  /* 12123792 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12123795 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12123798 jmp 0x121237a3 */
  goto L_121237a3;
L_1212379a:;
  /* 1212379a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1212379d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121237a0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_121237a3:;
  /* 121237a3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121237a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121237a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121237aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121237ac je 0x121237e9 */
  if (C.zf) goto L_121237e9;
  /* 121237ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121237b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121237b3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121237b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121237b8 je 0x121237e9 */
  if (C.zf) goto L_121237e9;
  /* 121237ba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121237bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121237bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121237c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121237c4 jmp 0x121237cf */
  goto L_121237cf;
L_121237c6:;
  /* 121237c6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121237c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121237cc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121237cf:;
  /* 121237cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121237d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121237d4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121237d7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121237da jg 0x121237e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_121237e7;
  /* 121237dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121237df add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121237e2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121237e5 jmp 0x121237c6 */
  goto L_121237c6;
L_121237e7:;
  /* 121237e7 jmp 0x1212379a */
  goto L_1212379a;
L_121237e9:;
  /* 121237e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121237eb push 0 */
  push32((uint32_t)(0x0u));
  /* 121237ed push 0 */
  push32((uint32_t)(0x0u));
  /* 121237ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121237f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121237f5 push eax */
  push32((uint32_t)(EAX));
  /* 121237f6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121237fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121237fe push ecx */
  push32((uint32_t)(ECX));
  /* 121237ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12123801 call 0x1211ffa0 */
  push32(0x12123806u); f_1211ffa0();
  /* 12123806 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212380b jne 0x12123812 */
  if (!C.zf) goto L_12123812;
  /* 1212380d jmp 0x12123962 */
  goto L_12123962;
L_12123812:;
  /* 12123812 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12123815 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1212381a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1212381d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12123820 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12123827 jmp 0x12123832 */
  goto L_12123832;
L_12123829:;
  /* 12123829 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1212382c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212382f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12123832:;
  /* 12123832 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123839 jge 0x12123850 */
  if ((C.sf==C.of)) goto L_12123850;
  /* 1212383b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1212383e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12123842 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12123845 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12123848 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212384b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1212384e jmp 0x12123829 */
  goto L_12123829;
L_12123850:;
  /* 12123850 push 0 */
  push32((uint32_t)(0x0u));
  /* 12123852 push 0 */
  push32((uint32_t)(0x0u));
  /* 12123854 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12123857 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212385a push edx */
  push32((uint32_t)(EDX));
  /* 1212385b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12123860 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12123863 push eax */
  push32((uint32_t)(EAX));
  /* 12123864 push 1 */
  push32((uint32_t)(0x1u));
  /* 12123866 call 0x121261d0 */
  push32(0x1212386bu); f_121261d0();
  /* 1212386b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212386e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123870 jne 0x12123877 */
  if (!C.zf) goto L_12123877;
  /* 12123872 jmp 0x12123962 */
  goto L_12123962;
L_12123877:;
  /* 12123877 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1212387a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1212387f cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123886 jle 0x121238e3 */
  if ((C.zf||C.sf!=C.of)) goto L_121238e3;
  /* 12123888 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1212388b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1212388e jmp 0x12123899 */
  goto L_12123899;
L_12123890:;
  /* 12123890 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12123893 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123896 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12123899:;
  /* 12123899 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1212389c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1212389e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121238a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121238a2 je 0x121238e3 */
  if (C.zf) goto L_121238e3;
  /* 121238a4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121238a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121238a9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121238ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121238ae je 0x121238e3 */
  if (C.zf) goto L_121238e3;
  /* 121238b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121238b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121238b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121238b7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121238ba jmp 0x121238c5 */
  goto L_121238c5;
L_121238bc:;
  /* 121238bc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121238bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121238c2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121238c5:;
  /* 121238c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121238c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121238ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121238cd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121238d0 jg 0x121238e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_121238e1;
  /* 121238d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121238d5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121238d8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 121238df jmp 0x121238bc */
  goto L_121238bc;
L_121238e1:;
  /* 121238e1 jmp 0x12123890 */
  goto L_12123890;
L_121238e3:;
  /* 121238e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121238e6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121238e9 mov dword ptr [0x12141c98], eax */
  w32((uint32_t)(0x12141c98), (EAX));
  /* 121238ee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121238f1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121238f4 mov dword ptr [0x12141c9c], ecx */
  w32((uint32_t)(0x12141c9c), (ECX));
  /* 121238fa cmp dword ptr [0x12143a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123901 je 0x12123914 */
  if (C.zf) goto L_12123914;
  /* 12123903 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123905 mov edx, dword ptr [0x12143a28] */
  EDX = (r32((uint32_t)(0x12143a28)));
  /* 1212390b push edx */
  push32((uint32_t)(EDX));
  /* 1212390c call 0x12118800 */
  push32(0x12123911u); f_12118800();
  /* 12123911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12123914:;
  /* 12123914 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12123917 mov dword ptr [0x12143a28], eax */
  w32((uint32_t)(0x12143a28), (EAX));
  /* 1212391c cmp dword ptr [0x12143a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123923 je 0x12123936 */
  if (C.zf) goto L_12123936;
  /* 12123925 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123927 mov ecx, dword ptr [0x12143a2c] */
  ECX = (r32((uint32_t)(0x12143a2c)));
  /* 1212392d push ecx */
  push32((uint32_t)(ECX));
  /* 1212392e call 0x12118800 */
  push32(0x12123933u); f_12118800();
  /* 12123933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12123936:;
  /* 12123936 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12123939 mov dword ptr [0x12143a2c], edx */
  w32((uint32_t)(0x12143a2c), (EDX));
  /* 1212393f push 2 */
  push32((uint32_t)(0x2u));
  /* 12123941 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12123944 push eax */
  push32((uint32_t)(EAX));
  /* 12123945 call 0x12118800 */
  push32(0x1212394au); f_12118800();
  /* 1212394a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212394d push 2 */
  push32((uint32_t)(0x2u));
  /* 1212394f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12123952 push ecx */
  push32((uint32_t)(ECX));
  /* 12123953 call 0x12118800 */
  push32(0x12123958u); f_12118800();
  /* 12123958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212395b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212395d jmp 0x121239ec */
  goto L_121239ec;
L_12123962:;
  /* 12123962 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123964 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12123967 push edx */
  push32((uint32_t)(EDX));
  /* 12123968 call 0x12118800 */
  push32(0x1212396du); f_12118800();
  /* 1212396d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123970 push 2 */
  push32((uint32_t)(0x2u));
  /* 12123972 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12123975 push eax */
  push32((uint32_t)(EAX));
  /* 12123976 call 0x12118800 */
  push32(0x1212397bu); f_12118800();
  /* 1212397b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212397e push 2 */
  push32((uint32_t)(0x2u));
  /* 12123980 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12123983 push ecx */
  push32((uint32_t)(ECX));
  /* 12123984 call 0x12118800 */
  push32(0x12123989u); f_12118800();
  /* 12123989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212398c push 2 */
  push32((uint32_t)(0x2u));
  /* 1212398e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12123991 push edx */
  push32((uint32_t)(EDX));
  /* 12123992 call 0x12118800 */
  push32(0x12123997u); f_12118800();
  /* 12123997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212399a mov eax, 1 */
  EAX = (0x1u);
  /* 1212399f jmp 0x121239ec */
  goto L_121239ec;
L_121239a1:;
  /* 121239a1 mov dword ptr [0x12141c98], 0x12141ca2 */
  w32((uint32_t)(0x12141c98), (0x12141ca2u));
  /* 121239ab mov dword ptr [0x12141c9c], 0x12141ca2 */
  w32((uint32_t)(0x12141c9c), (0x12141ca2u));
  /* 121239b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121239b7 mov eax, dword ptr [0x12143a28] */
  EAX = (r32((uint32_t)(0x12143a28)));
  /* 121239bc push eax */
  push32((uint32_t)(EAX));
  /* 121239bd call 0x12118800 */
  push32(0x121239c2u); f_12118800();
  /* 121239c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121239c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121239c7 mov ecx, dword ptr [0x12143a2c] */
  ECX = (r32((uint32_t)(0x12143a2c)));
  /* 121239cd push ecx */
  push32((uint32_t)(ECX));
  /* 121239ce call 0x12118800 */
  push32(0x121239d3u); f_12118800();
  /* 121239d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121239d6 mov dword ptr [0x12143a28], 0 */
  w32((uint32_t)(0x12143a28), (0x0u));
  /* 121239e0 mov dword ptr [0x12143a2c], 0 */
  w32((uint32_t)(0x12143a2c), (0x0u));
  /* 121239ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121239ec:;
  /* 121239ec mov esp, ebp */
  ESP = (EBP);
  /* 121239ee pop ebp */
  EBP = (pop32());
  /* 121239ef ret  */
  ESPCHK(0x12123650u, _esp0);
  ESP += 4; return;
}

/* FUN_100139f0 @ 0x121239f0 (7 bytes, 5 insns) */
void f_121239f0(void) {
  FTRACE(0x121239f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121239f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121239f1 mov ebp, esp */
  EBP = (ESP);
  /* 121239f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121239f5 pop ebp */
  EBP = (pop32());
  /* 121239f6 ret  */
  ESPCHK(0x121239f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12123a00 (129 bytes, 56 insns) */
void f_12123a00(void) {
  FTRACE(0x12123a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123a00 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12123a04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12123a08 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12123a0e jne 0x12123a4c */
  if (!C.zf) goto L_12123a4c;
L_12123a10:;
  /* 12123a10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12123a12 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a14 jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123a18 je 0x12123a40 */
  if (C.zf) goto L_12123a40;
  /* 12123a1a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a1d jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a1f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12123a21 je 0x12123a40 */
  if (C.zf) goto L_12123a40;
  /* 12123a23 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12123a26 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a29 jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a2b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123a2d je 0x12123a40 */
  if (C.zf) goto L_12123a40;
  /* 12123a2f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a32 jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a34 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123a37 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123a3a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12123a3c jne 0x12123a10 */
  if (!C.zf) goto L_12123a10;
  /* 12123a3e mov edi, edi */
  EDI = (EDI);
L_12123a40:;
  /* 12123a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123a42 ret  */
  ESPCHK(0x12123a00u, _esp0);
  ESP += 4; return;
  /* 12123a43 nop  */
  /* nop */
L_12123a44:;
  /* 12123a44 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123a46 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12123a48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12123a49 ret  */
  ESPCHK(0x12123a00u, _esp0);
  ESP += 4; return;
  /* 12123a4a mov edi, edi */
  EDI = (EDI);
L_12123a4c:;
  /* 12123a4c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12123a52 je 0x12123a68 */
  if (C.zf) goto L_12123a68;
  /* 12123a54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12123a56 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12123a57 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a59 jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a5b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12123a5c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123a5e je 0x12123a40 */
  if (C.zf) goto L_12123a40;
  /* 12123a60 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12123a66 je 0x12123a10 */
  if (C.zf) goto L_12123a10;
L_12123a68:;
  /* 12123a68 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12123a6b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123a6e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a70 jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a72 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123a74 je 0x12123a40 */
  if (C.zf) goto L_12123a40;
  /* 12123a76 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123a79 jne 0x12123a44 */
  if (!C.zf) goto L_12123a44;
  /* 12123a7b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12123a7d je 0x12123a40 */
  if (C.zf) goto L_12123a40;
  /* 12123a7f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123a82 jmp 0x12123a10 */
  goto L_12123a10;
}

/* FUN_10013a90 @ 0x12123a90 (62 bytes, 35 insns) */
void f_12123a90(void) {
  FTRACE(0x12123a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12123a91 mov ebp, esp */
  EBP = (ESP);
  /* 12123a93 push esi */
  push32((uint32_t)(ESI));
  /* 12123a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123a96 push eax */
  push32((uint32_t)(EAX));
  /* 12123a97 push eax */
  push32((uint32_t)(EAX));
  /* 12123a98 push eax */
  push32((uint32_t)(EAX));
  /* 12123a99 push eax */
  push32((uint32_t)(EAX));
  /* 12123a9a push eax */
  push32((uint32_t)(EAX));
  /* 12123a9b push eax */
  push32((uint32_t)(EAX));
  /* 12123a9c push eax */
  push32((uint32_t)(EAX));
  /* 12123a9d push eax */
  push32((uint32_t)(EAX));
  /* 12123a9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12123aa1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12123aa4:;
  /* 12123aa4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12123aa6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123aa8 je 0x12123ab1 */
  if (C.zf) goto L_12123ab1;
  /* 12123aaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12123aab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12123aab");
  /* 12123aaf jmp 0x12123aa4 */
  goto L_12123aa4;
L_12123ab1:;
  /* 12123ab1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12123ab4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12123ab7 nop  */
  /* nop */
L_12123ab8:;
  /* 12123ab8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12123ab9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12123abb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123abd je 0x12123ac6 */
  if (C.zf) goto L_12123ac6;
  /* 12123abf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12123ac0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12123ac0");
  /* 12123ac4 jae 0x12123ab8 */
  if (!C.cf) goto L_12123ab8;
L_12123ac6:;
  /* 12123ac6 mov eax, ecx */
  EAX = (ECX);
  /* 12123ac8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123acb pop esi */
  ESI = (pop32());
  /* 12123acc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12123acd ret  */
  ESPCHK(0x12123a90u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12123ad0 (56 bytes, 31 insns) */
void f_12123ad0(void) {
  FTRACE(0x12123ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12123ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12123ad3 push edi */
  push32((uint32_t)(EDI));
  /* 12123ad4 push esi */
  push32((uint32_t)(ESI));
  /* 12123ad5 push ebx */
  push32((uint32_t)(EBX));
  /* 12123ad6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12123ad9 jecxz 0x12123b01 */
  x86_unimpl("jecxz @ 0x12123ad9");
  /* 12123adb mov ebx, ecx */
  EBX = (ECX);
  /* 12123add mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12123ae0 mov esi, edi */
  ESI = (EDI);
  /* 12123ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123ae4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12123ae6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12123ae8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123aea mov edi, esi */
  EDI = (ESI);
  /* 12123aec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12123aef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12123af1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12123af4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12123af6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12123af9 ja 0x12123aff */
  if ((!C.cf&&!C.zf)) goto L_12123aff;
  /* 12123afb je 0x12123b01 */
  if (C.zf) goto L_12123b01;
  /* 12123afd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12123afe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12123aff:;
  /* 12123aff not ecx */
  ECX = (~(ECX));
L_12123b01:;
  /* 12123b01 mov eax, ecx */
  EAX = (ECX);
  /* 12123b03 pop ebx */
  EBX = (pop32());
  /* 12123b04 pop esi */
  ESI = (pop32());
  /* 12123b05 pop edi */
  EDI = (pop32());
  /* 12123b06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12123b07 ret  */
  ESPCHK(0x12123ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x12123b10 (58 bytes, 32 insns) */
void f_12123b10(void) {
  FTRACE(0x12123b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12123b11 mov ebp, esp */
  EBP = (ESP);
  /* 12123b13 push esi */
  push32((uint32_t)(ESI));
  /* 12123b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123b16 push eax */
  push32((uint32_t)(EAX));
  /* 12123b17 push eax */
  push32((uint32_t)(EAX));
  /* 12123b18 push eax */
  push32((uint32_t)(EAX));
  /* 12123b19 push eax */
  push32((uint32_t)(EAX));
  /* 12123b1a push eax */
  push32((uint32_t)(EAX));
  /* 12123b1b push eax */
  push32((uint32_t)(EAX));
  /* 12123b1c push eax */
  push32((uint32_t)(EAX));
  /* 12123b1d push eax */
  push32((uint32_t)(EAX));
  /* 12123b1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12123b21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12123b24:;
  /* 12123b24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12123b26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123b28 je 0x12123b31 */
  if (C.zf) goto L_12123b31;
  /* 12123b2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12123b2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12123b2b");
  /* 12123b2f jmp 0x12123b24 */
  goto L_12123b24;
L_12123b31:;
  /* 12123b31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12123b34:;
  /* 12123b34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12123b36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12123b38 je 0x12123b44 */
  if (C.zf) goto L_12123b44;
  /* 12123b3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12123b3b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12123b3b");
  /* 12123b3f jae 0x12123b34 */
  if (!C.cf) goto L_12123b34;
  /* 12123b41 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12123b44:;
  /* 12123b44 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123b47 pop esi */
  ESI = (pop32());
  /* 12123b48 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12123b49 ret  */
  ESPCHK(0x12123b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x12123b50 (512 bytes, 147 insns) */
void f_12123b50(void) {
  FTRACE(0x12123b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12123b51 mov ebp, esp */
  EBP = (ESP);
  /* 12123b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123b56 cmp dword ptr [0x12143a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123b5d jne 0x12123b82 */
  if (!C.zf) goto L_12123b82;
  /* 12123b5f call 0x12124620 */
  push32(0x12123b64u); f_12124620();
  /* 12123b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123b66 je 0x12123b72 */
  if (C.zf) goto L_12123b72;
  /* 12123b68 mov eax, dword ptr [0x12146308] */
  EAX = (r32((uint32_t)(0x12146308)));
  /* 12123b6d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12123b70 jmp 0x12123b79 */
  goto L_12123b79;
L_12123b72:;
  /* 12123b72 mov dword ptr [ebp - 8], 0x12124670 */
  w32((uint32_t)(EBP + -0x8), (0x12124670u));
L_12123b79:;
  /* 12123b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12123b7c mov dword ptr [0x12143a74], ecx */
  w32((uint32_t)(0x12143a74), (ECX));
L_12123b82:;
  /* 12123b82 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123b86 jne 0x12123b92 */
  if (!C.zf) goto L_12123b92;
  /* 12123b88 call 0x12124470 */
  push32(0x12123b8du); f_12124470();
  /* 12123b8d jmp 0x12123c5e */
  goto L_12123c5e;
L_12123b92:;
  /* 12123b92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123b95 mov dword ptr [0x12143a64], edx */
  w32((uint32_t)(0x12143a64), (EDX));
  /* 12123b9b cmp dword ptr [0x12143a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123ba2 je 0x12123bc4 */
  if (C.zf) goto L_12123bc4;
  /* 12123ba4 mov eax, dword ptr [0x12143a64] */
  EAX = (r32((uint32_t)(0x12143a64)));
  /* 12123ba9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12123bac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12123bae je 0x12123bc4 */
  if (C.zf) goto L_12123bc4;
  /* 12123bb0 push 0x12143a64 */
  push32((uint32_t)(0x12143a64u));
  /* 12123bb5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12123bb7 push 0x12142a90 */
  push32((uint32_t)(0x12142a90u));
  /* 12123bbc call 0x12123d50 */
  push32(0x12123bc1u); f_12123d50();
  /* 12123bc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12123bc4:;
  /* 12123bc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123bc7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123bca mov dword ptr [0x12143a68], edx */
  w32((uint32_t)(0x12143a68), (EDX));
  /* 12123bd0 cmp dword ptr [0x12143a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123bd7 je 0x12123bf9 */
  if (C.zf) goto L_12123bf9;
  /* 12123bd9 mov eax, dword ptr [0x12143a68] */
  EAX = (r32((uint32_t)(0x12143a68)));
  /* 12123bde movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12123be1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12123be3 je 0x12123bf9 */
  if (C.zf) goto L_12123bf9;
  /* 12123be5 push 0x12143a68 */
  push32((uint32_t)(0x12143a68u));
  /* 12123bea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12123bec push 0x121429d8 */
  push32((uint32_t)(0x121429d8u));
  /* 12123bf1 call 0x12123d50 */
  push32(0x12123bf6u); f_12123d50();
  /* 12123bf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12123bf9:;
  /* 12123bf9 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
  /* 12123c03 cmp dword ptr [0x12143a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123c0a je 0x12123c3d */
  if (C.zf) goto L_12123c3d;
  /* 12123c0c mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 12123c12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12123c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123c17 je 0x12123c3d */
  if (C.zf) goto L_12123c3d;
  /* 12123c19 cmp dword ptr [0x12143a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123c20 je 0x12123c36 */
  if (C.zf) goto L_12123c36;
  /* 12123c22 mov ecx, dword ptr [0x12143a68] */
  ECX = (r32((uint32_t)(0x12143a68)));
  /* 12123c28 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12123c2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12123c2d je 0x12123c36 */
  if (C.zf) goto L_12123c36;
  /* 12123c2f call 0x12123de0 */
  push32(0x12123c34u); f_12123de0();
  /* 12123c34 jmp 0x12123c3b */
  goto L_12123c3b;
L_12123c36:;
  /* 12123c36 call 0x121241d0 */
  push32(0x12123c3bu); f_121241d0();
L_12123c3b:;
  /* 12123c3b jmp 0x12123c5e */
  goto L_12123c5e;
L_12123c3d:;
  /* 12123c3d cmp dword ptr [0x12143a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123c44 je 0x12123c59 */
  if (C.zf) goto L_12123c59;
  /* 12123c46 mov eax, dword ptr [0x12143a68] */
  EAX = (r32((uint32_t)(0x12143a68)));
  /* 12123c4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12123c4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12123c50 je 0x12123c59 */
  if (C.zf) goto L_12123c59;
  /* 12123c52 call 0x12124370 */
  push32(0x12123c57u); f_12124370();
  /* 12123c57 jmp 0x12123c5e */
  goto L_12123c5e;
L_12123c59:;
  /* 12123c59 call 0x12124470 */
  push32(0x12123c5eu); f_12124470();
L_12123c5e:;
  /* 12123c5e cmp dword ptr [0x12143a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123c65 jne 0x12123c6e */
  if (!C.zf) goto L_12123c6e;
  /* 12123c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123c69 jmp 0x12123d4c */
  goto L_12123d4c;
L_12123c6e:;
  /* 12123c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123c71 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123c77 push edx */
  push32((uint32_t)(EDX));
  /* 12123c78 call 0x121244a0 */
  push32(0x12123c7du); f_121244a0();
  /* 12123c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123c80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12123c83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123c87 je 0x12123c9c */
  if (C.zf) goto L_12123c9c;
  /* 12123c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123c8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12123c91 push eax */
  push32((uint32_t)(EAX));
  /* 12123c92 call dword ptr [0x1214630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214630c))), 0x12123c98u);
  /* 12123c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123c9a jne 0x12123ca3 */
  if (!C.zf) goto L_12123ca3;
L_12123c9c:;
  /* 12123c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123c9e jmp 0x12123d4c */
  goto L_12123d4c;
L_12123ca3:;
  /* 12123ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12123ca5 mov ecx, dword ptr [0x12143a54] */
  ECX = (r32((uint32_t)(0x12143a54)));
  /* 12123cab push ecx */
  push32((uint32_t)(ECX));
  /* 12123cac call dword ptr [0x1214631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214631c))), 0x12123cb2u);
  /* 12123cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123cb4 jne 0x12123cbd */
  if (!C.zf) goto L_12123cbd;
  /* 12123cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123cb8 jmp 0x12123d4c */
  goto L_12123d4c;
L_12123cbd:;
  /* 12123cbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123cc1 je 0x12123ce8 */
  if (C.zf) goto L_12123ce8;
  /* 12123cc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12123cc6 mov ax, word ptr [0x12143a54] */
  AX = (r16((uint32_t)(0x12143a54)));
  /* 12123ccc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12123ccf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12123cd2 mov dx, word ptr [0x12143a70] */
  DX = (r16((uint32_t)(0x12143a70)));
  /* 12123cd9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12123cdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12123ce0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12123ce4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12123ce8:;
  /* 12123ce8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123cec je 0x12123d47 */
  if (C.zf) goto L_12123d47;
  /* 12123cee push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12123cf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12123cf3 push edx */
  push32((uint32_t)(EDX));
  /* 12123cf4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12123cf9 mov eax, dword ptr [0x12143a54] */
  EAX = (r32((uint32_t)(0x12143a54)));
  /* 12123cfe push eax */
  push32((uint32_t)(EAX));
  /* 12123cff call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x12123d05u);
  /* 12123d05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123d07 jne 0x12123d0d */
  if (!C.zf) goto L_12123d0d;
  /* 12123d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123d0b jmp 0x12123d4c */
  goto L_12123d4c;
L_12123d0d:;
  /* 12123d0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12123d0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12123d12 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123d15 push ecx */
  push32((uint32_t)(ECX));
  /* 12123d16 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12123d1b mov edx, dword ptr [0x12143a70] */
  EDX = (r32((uint32_t)(0x12143a70)));
  /* 12123d21 push edx */
  push32((uint32_t)(EDX));
  /* 12123d22 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x12123d28u);
  /* 12123d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123d2a jne 0x12123d30 */
  if (!C.zf) goto L_12123d30;
  /* 12123d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12123d2e jmp 0x12123d4c */
  goto L_12123d4c;
L_12123d30:;
  /* 12123d30 push 0xa */
  push32((uint32_t)(0xau));
  /* 12123d32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12123d35 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123d3a push eax */
  push32((uint32_t)(EAX));
  /* 12123d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123d3e push ecx */
  push32((uint32_t)(ECX));
  /* 12123d3f call 0x1211a8b0 */
  push32(0x12123d44u); f_1211a8b0();
  /* 12123d44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12123d47:;
  /* 12123d47 mov eax, 1 */
  EAX = (0x1u);
L_12123d4c:;
  /* 12123d4c mov esp, ebp */
  ESP = (EBP);
  /* 12123d4e pop ebp */
  EBP = (pop32());
  /* 12123d4f ret  */
  ESPCHK(0x12123b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d50 @ 0x12123d50 (130 bytes, 47 insns) */
void f_12123d50(void) {
  FTRACE(0x12123d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12123d51 mov ebp, esp */
  EBP = (ESP);
  /* 12123d53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123d56 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12123d5d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12123d64:;
  /* 12123d64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12123d67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123d6a jg 0x12123dce */
  if ((!C.zf&&C.sf==C.of)) goto L_12123dce;
  /* 12123d6c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123d70 je 0x12123dce */
  if (C.zf) goto L_12123dce;
  /* 12123d72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12123d75 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123d78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12123d79 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123d7b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12123d7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12123d80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123d83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123d86 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12123d89 push eax */
  push32((uint32_t)(EAX));
  /* 12123d8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12123d8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12123d8f push edx */
  push32((uint32_t)(EDX));
  /* 12123d90 call 0x12126440 */
  push32(0x12123d95u); f_12126440();
  /* 12123d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123d98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12123d9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123d9f jne 0x12123db2 */
  if (!C.zf) goto L_12123db2;
  /* 12123da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123da4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123da7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12123dab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12123dae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12123db0 jmp 0x12123dcc */
  goto L_12123dcc;
L_12123db2:;
  /* 12123db2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123db6 jge 0x12123dc3 */
  if ((C.sf==C.of)) goto L_12123dc3;
  /* 12123db8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123dbb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123dbe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12123dc1 jmp 0x12123dcc */
  goto L_12123dcc;
L_12123dc3:;
  /* 12123dc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123dc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123dc9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12123dcc:;
  /* 12123dcc jmp 0x12123d64 */
  goto L_12123d64;
L_12123dce:;
  /* 12123dce mov esp, ebp */
  ESP = (EBP);
  /* 12123dd0 pop ebp */
  EBP = (pop32());
  /* 12123dd1 ret  */
  ESPCHK(0x12123d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013de0 @ 0x12123de0 (186 bytes, 50 insns) */
void f_12123de0(void) {
  FTRACE(0x12123de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12123de1 mov ebp, esp */
  EBP = (ESP);
  /* 12123de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12123de4 mov eax, dword ptr [0x12143a64] */
  EAX = (r32((uint32_t)(0x12143a64)));
  /* 12123de9 push eax */
  push32((uint32_t)(EAX));
  /* 12123dea call 0x1211aba0 */
  push32(0x12123defu); f_1211aba0();
  /* 12123def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123df2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12123df4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123df7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12123dfa mov dword ptr [0x12143a60], ecx */
  w32((uint32_t)(0x12143a60), (ECX));
  /* 12123e00 mov edx, dword ptr [0x12143a68] */
  EDX = (r32((uint32_t)(0x12143a68)));
  /* 12123e06 push edx */
  push32((uint32_t)(EDX));
  /* 12123e07 call 0x1211aba0 */
  push32(0x12123e0cu); f_1211aba0();
  /* 12123e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123e0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12123e11 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123e14 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12123e17 mov dword ptr [0x12143a58], ecx */
  w32((uint32_t)(0x12143a58), (ECX));
  /* 12123e1d mov dword ptr [0x12143a54], 0 */
  w32((uint32_t)(0x12143a54), (0x0u));
  /* 12123e27 cmp dword ptr [0x12143a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123e2e je 0x12123e39 */
  if (C.zf) goto L_12123e39;
  /* 12123e30 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12123e37 jmp 0x12123e4b */
  goto L_12123e4b;
L_12123e39:;
  /* 12123e39 mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 12123e3f push edx */
  push32((uint32_t)(EDX));
  /* 12123e40 call 0x12124880 */
  push32(0x12123e45u); f_12124880();
  /* 12123e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123e48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12123e4b:;
  /* 12123e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12123e4e mov dword ptr [0x12143a5c], eax */
  w32((uint32_t)(0x12143a5c), (EAX));
  /* 12123e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12123e55 push 0x12123ea0 */
  push32((uint32_t)(0x12123ea0u));
  /* 12123e5a call dword ptr [0x12146310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146310))), 0x12123e60u);
  /* 12123e60 mov ecx, dword ptr [0x12143a6c] */
  ECX = (r32((uint32_t)(0x12143a6c)));
  /* 12123e66 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12123e6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12123e6e je 0x12123e8c */
  if (C.zf) goto L_12123e8c;
  /* 12123e70 mov edx, dword ptr [0x12143a6c] */
  EDX = (r32((uint32_t)(0x12143a6c)));
  /* 12123e76 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12123e7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12123e7e je 0x12123e8c */
  if (C.zf) goto L_12123e8c;
  /* 12123e80 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12123e85 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12123e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123e8a jne 0x12123e96 */
  if (!C.zf) goto L_12123e96;
L_12123e8c:;
  /* 12123e8c mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
L_12123e96:;
  /* 12123e96 mov esp, ebp */
  ESP = (EBP);
  /* 12123e98 pop ebp */
  EBP = (pop32());
  /* 12123e99 ret  */
  ESPCHK(0x12123de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ea0 @ 0x12123ea0 (804 bytes, 220 insns) */
void f_12123ea0(void) {
  FTRACE(0x12123ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12123ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12123ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12123ea3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12123ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12123eaa call 0x12124800 */
  push32(0x12123eafu); f_12124800();
  /* 12123eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123eb2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12123eb5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12123eb7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12123eba push ecx */
  push32((uint32_t)(ECX));
  /* 12123ebb mov edx, dword ptr [0x12143a58] */
  EDX = (r32((uint32_t)(0x12143a58)));
  /* 12123ec1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12123ec3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123ec5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12123ecb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123ed1 push edx */
  push32((uint32_t)(EDX));
  /* 12123ed2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12123ed5 push eax */
  push32((uint32_t)(EAX));
  /* 12123ed6 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x12123edcu);
  /* 12123edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123ede jne 0x12123ef4 */
  if (!C.zf) goto L_12123ef4;
  /* 12123ee0 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
  /* 12123eea mov eax, 1 */
  EAX = (0x1u);
  /* 12123eef jmp 0x121241be */
  goto L_121241be;
L_12123ef4:;
  /* 12123ef4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12123ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 12123ef8 mov edx, dword ptr [0x12143a68] */
  EDX = (r32((uint32_t)(0x12143a68)));
  /* 12123efe push edx */
  push32((uint32_t)(EDX));
  /* 12123eff call 0x12126440 */
  push32(0x12123f04u); f_12126440();
  /* 12123f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123f09 jne 0x1212402f */
  if (!C.zf) goto L_1212402f;
  /* 12123f0f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12123f11 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12123f14 push eax */
  push32((uint32_t)(EAX));
  /* 12123f15 mov ecx, dword ptr [0x12143a60] */
  ECX = (r32((uint32_t)(0x12143a60)));
  /* 12123f1b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12123f1d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12123f1f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12123f25 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12123f2b push ecx */
  push32((uint32_t)(ECX));
  /* 12123f2c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12123f2f push edx */
  push32((uint32_t)(EDX));
  /* 12123f30 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x12123f36u);
  /* 12123f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123f38 jne 0x12123f4e */
  if (!C.zf) goto L_12123f4e;
  /* 12123f3a mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
  /* 12123f44 mov eax, 1 */
  EAX = (0x1u);
  /* 12123f49 jmp 0x121241be */
  goto L_121241be;
L_12123f4e:;
  /* 12123f4e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12123f51 push eax */
  push32((uint32_t)(EAX));
  /* 12123f52 mov ecx, dword ptr [0x12143a64] */
  ECX = (r32((uint32_t)(0x12143a64)));
  /* 12123f58 push ecx */
  push32((uint32_t)(ECX));
  /* 12123f59 call 0x12126440 */
  push32(0x12123f5eu); f_12126440();
  /* 12123f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123f61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123f63 jne 0x12123f90 */
  if (!C.zf) goto L_12123f90;
  /* 12123f65 mov edx, dword ptr [0x12143a6c] */
  EDX = (r32((uint32_t)(0x12143a6c)));
  /* 12123f6b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12123f71 mov dword ptr [0x12143a6c], edx */
  w32((uint32_t)(0x12143a6c), (EDX));
  /* 12123f77 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12123f7a mov dword ptr [0x12143a70], eax */
  w32((uint32_t)(0x12143a70), (EAX));
  /* 12123f7f mov ecx, dword ptr [0x12143a70] */
  ECX = (r32((uint32_t)(0x12143a70)));
  /* 12123f85 mov dword ptr [0x12143a54], ecx */
  w32((uint32_t)(0x12143a54), (ECX));
  /* 12123f8b jmp 0x1212402f */
  goto L_1212402f;
L_12123f90:;
  /* 12123f90 mov edx, dword ptr [0x12143a6c] */
  EDX = (r32((uint32_t)(0x12143a6c)));
  /* 12123f96 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12123f99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12123f9b jne 0x1212402f */
  if (!C.zf) goto L_1212402f;
  /* 12123fa1 cmp dword ptr [0x12143a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123fa8 je 0x12123ffd */
  if (C.zf) goto L_12123ffd;
  /* 12123faa mov eax, dword ptr [0x12143a5c] */
  EAX = (r32((uint32_t)(0x12143a5c)));
  /* 12123faf push eax */
  push32((uint32_t)(EAX));
  /* 12123fb0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12123fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12123fb4 mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 12123fba push edx */
  push32((uint32_t)(EDX));
  /* 12123fbb call 0x12126510 */
  push32(0x12123fc0u); f_12126510();
  /* 12123fc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12123fc5 jne 0x12123ffd */
  if (!C.zf) goto L_12123ffd;
  /* 12123fc7 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12123fcc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12123fce mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
  /* 12123fd3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12123fd6 mov dword ptr [0x12143a70], ecx */
  w32((uint32_t)(0x12143a70), (ECX));
  /* 12123fdc mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 12123fe2 push edx */
  push32((uint32_t)(EDX));
  /* 12123fe3 call 0x1211aba0 */
  push32(0x12123fe8u); f_1211aba0();
  /* 12123fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12123feb cmp eax, dword ptr [0x12143a5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12143a5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12123ff1 jne 0x12123ffb */
  if (!C.zf) goto L_12123ffb;
  /* 12123ff3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12123ff6 mov dword ptr [0x12143a54], eax */
  w32((uint32_t)(0x12143a54), (EAX));
L_12123ffb:;
  /* 12123ffb jmp 0x1212402f */
  goto L_1212402f;
L_12123ffd:;
  /* 12123ffd mov ecx, dword ptr [0x12143a6c] */
  ECX = (r32((uint32_t)(0x12143a6c)));
  /* 12124003 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12124006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12124008 jne 0x1212402f */
  if (!C.zf) goto L_1212402f;
  /* 1212400a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1212400d push edx */
  push32((uint32_t)(EDX));
  /* 1212400e call 0x12124540 */
  push32(0x12124013u); f_12124540();
  /* 12124013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124016 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124018 je 0x1212402f */
  if (C.zf) goto L_1212402f;
  /* 1212401a mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 1212401f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12124021 mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
  /* 12124026 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12124029 mov dword ptr [0x12143a70], ecx */
  w32((uint32_t)(0x12143a70), (ECX));
L_1212402f:;
  /* 1212402f mov edx, dword ptr [0x12143a6c] */
  EDX = (r32((uint32_t)(0x12143a6c)));
  /* 12124035 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1212403b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124041 je 0x121241b1 */
  if (C.zf) goto L_121241b1;
  /* 12124047 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12124049 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1212404c push eax */
  push32((uint32_t)(EAX));
  /* 1212404d mov ecx, dword ptr [0x12143a60] */
  ECX = (r32((uint32_t)(0x12143a60)));
  /* 12124053 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12124055 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124057 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1212405d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124063 push ecx */
  push32((uint32_t)(ECX));
  /* 12124064 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12124067 push edx */
  push32((uint32_t)(EDX));
  /* 12124068 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x1212406eu);
  /* 1212406e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124070 jne 0x12124086 */
  if (!C.zf) goto L_12124086;
  /* 12124072 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
  /* 1212407c mov eax, 1 */
  EAX = (0x1u);
  /* 12124081 jmp 0x121241be */
  goto L_121241be;
L_12124086:;
  /* 12124086 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12124089 push eax */
  push32((uint32_t)(EAX));
  /* 1212408a mov ecx, dword ptr [0x12143a64] */
  ECX = (r32((uint32_t)(0x12143a64)));
  /* 12124090 push ecx */
  push32((uint32_t)(ECX));
  /* 12124091 call 0x12126440 */
  push32(0x12124096u); f_12126440();
  /* 12124096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212409b jne 0x12124150 */
  if (!C.zf) goto L_12124150;
  /* 121240a1 mov edx, dword ptr [0x12143a6c] */
  EDX = (r32((uint32_t)(0x12143a6c)));
  /* 121240a7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121240aa mov dword ptr [0x12143a6c], edx */
  w32((uint32_t)(0x12143a6c), (EDX));
  /* 121240b0 cmp dword ptr [0x12143a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121240b7 je 0x121240da */
  if (C.zf) goto L_121240da;
  /* 121240b9 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 121240be or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121240c1 mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
  /* 121240c6 cmp dword ptr [0x12143a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121240cd jne 0x121240d8 */
  if (!C.zf) goto L_121240d8;
  /* 121240cf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121240d2 mov dword ptr [0x12143a54], ecx */
  w32((uint32_t)(0x12143a54), (ECX));
L_121240d8:;
  /* 121240d8 jmp 0x1212414e */
  goto L_1212414e;
L_121240da:;
  /* 121240da cmp dword ptr [0x12143a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121240e1 je 0x1212412f */
  if (C.zf) goto L_1212412f;
  /* 121240e3 mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 121240e9 push edx */
  push32((uint32_t)(EDX));
  /* 121240ea call 0x1211aba0 */
  push32(0x121240efu); f_1211aba0();
  /* 121240ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121240f2 cmp eax, dword ptr [0x12143a5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12143a5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121240f8 jne 0x1212412f */
  if (!C.zf) goto L_1212412f;
  /* 121240fa push 1 */
  push32((uint32_t)(0x1u));
  /* 121240fc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121240ff push eax */
  push32((uint32_t)(EAX));
  /* 12124100 call 0x12124590 */
  push32(0x12124105u); f_12124590();
  /* 12124105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212410a je 0x1212412d */
  if (C.zf) goto L_1212412d;
  /* 1212410c mov ecx, dword ptr [0x12143a6c] */
  ECX = (r32((uint32_t)(0x12143a6c)));
  /* 12124112 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12124115 mov dword ptr [0x12143a6c], ecx */
  w32((uint32_t)(0x12143a6c), (ECX));
  /* 1212411b cmp dword ptr [0x12143a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124122 jne 0x1212412d */
  if (!C.zf) goto L_1212412d;
  /* 12124124 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12124127 mov dword ptr [0x12143a54], edx */
  w32((uint32_t)(0x12143a54), (EDX));
L_1212412d:;
  /* 1212412d jmp 0x1212414e */
  goto L_1212414e;
L_1212412f:;
  /* 1212412f mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12124134 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12124137 mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
  /* 1212413c cmp dword ptr [0x12143a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124143 jne 0x1212414e */
  if (!C.zf) goto L_1212414e;
  /* 12124145 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12124148 mov dword ptr [0x12143a54], ecx */
  w32((uint32_t)(0x12143a54), (ECX));
L_1212414e:;
  /* 1212414e jmp 0x121241b1 */
  goto L_121241b1;
L_12124150:;
  /* 12124150 cmp dword ptr [0x12143a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124157 jne 0x121241b1 */
  if (!C.zf) goto L_121241b1;
  /* 12124159 cmp dword ptr [0x12143a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124160 je 0x121241b1 */
  if (C.zf) goto L_121241b1;
  /* 12124162 mov edx, dword ptr [0x12143a5c] */
  EDX = (r32((uint32_t)(0x12143a5c)));
  /* 12124168 push edx */
  push32((uint32_t)(EDX));
  /* 12124169 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1212416c push eax */
  push32((uint32_t)(EAX));
  /* 1212416d mov ecx, dword ptr [0x12143a64] */
  ECX = (r32((uint32_t)(0x12143a64)));
  /* 12124173 push ecx */
  push32((uint32_t)(ECX));
  /* 12124174 call 0x12126510 */
  push32(0x12124179u); f_12126510();
  /* 12124179 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212417c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212417e jne 0x121241b1 */
  if (!C.zf) goto L_121241b1;
  /* 12124180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12124182 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12124185 push edx */
  push32((uint32_t)(EDX));
  /* 12124186 call 0x12124590 */
  push32(0x1212418bu); f_12124590();
  /* 1212418b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212418e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124190 je 0x121241b1 */
  if (C.zf) goto L_121241b1;
  /* 12124192 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12124197 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1212419a mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
  /* 1212419f cmp dword ptr [0x12143a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121241a6 jne 0x121241b1 */
  if (!C.zf) goto L_121241b1;
  /* 121241a8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121241ab mov dword ptr [0x12143a54], ecx */
  w32((uint32_t)(0x12143a54), (ECX));
L_121241b1:;
  /* 121241b1 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 121241b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121241b9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121241bb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121241bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121241be:;
  /* 121241be mov esp, ebp */
  ESP = (EBP);
  /* 121241c0 pop ebp */
  EBP = (pop32());
  /* 121241c1 ret 4 */
  ESPCHK(0x12123ea0u, _esp0);
  ESP += 8; return;
}

/* FUN_100141d0 @ 0x121241d0 (116 bytes, 33 insns) */
void f_121241d0(void) {
  FTRACE(0x121241d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121241d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121241d1 mov ebp, esp */
  EBP = (ESP);
  /* 121241d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121241d4 mov eax, dword ptr [0x12143a64] */
  EAX = (r32((uint32_t)(0x12143a64)));
  /* 121241d9 push eax */
  push32((uint32_t)(EAX));
  /* 121241da call 0x1211aba0 */
  push32(0x121241dfu); f_1211aba0();
  /* 121241df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121241e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121241e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121241e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121241ea mov dword ptr [0x12143a60], ecx */
  w32((uint32_t)(0x12143a60), (ECX));
  /* 121241f0 cmp dword ptr [0x12143a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121241f7 je 0x12124202 */
  if (C.zf) goto L_12124202;
  /* 121241f9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12124200 jmp 0x12124214 */
  goto L_12124214;
L_12124202:;
  /* 12124202 mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 12124208 push edx */
  push32((uint32_t)(EDX));
  /* 12124209 call 0x12124880 */
  push32(0x1212420eu); f_12124880();
  /* 1212420e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124211 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12124214:;
  /* 12124214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124217 mov dword ptr [0x12143a5c], eax */
  w32((uint32_t)(0x12143a5c), (EAX));
  /* 1212421c push 1 */
  push32((uint32_t)(0x1u));
  /* 1212421e push 0x12124250 */
  push32((uint32_t)(0x12124250u));
  /* 12124223 call dword ptr [0x12146310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146310))), 0x12124229u);
  /* 12124229 mov ecx, dword ptr [0x12143a6c] */
  ECX = (r32((uint32_t)(0x12143a6c)));
  /* 1212422f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12124232 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12124234 jne 0x12124240 */
  if (!C.zf) goto L_12124240;
  /* 12124236 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
L_12124240:;
  /* 12124240 mov esp, ebp */
  ESP = (EBP);
  /* 12124242 pop ebp */
  EBP = (pop32());
  /* 12124243 ret  */
  ESPCHK(0x121241d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014250 @ 0x12124250 (287 bytes, 86 insns) */
void f_12124250(void) {
  FTRACE(0x12124250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124250 push ebp */
  push32((uint32_t)(EBP));
  /* 12124251 mov ebp, esp */
  EBP = (ESP);
  /* 12124253 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124259 push eax */
  push32((uint32_t)(EAX));
  /* 1212425a call 0x12124800 */
  push32(0x1212425fu); f_12124800();
  /* 1212425f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124262 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12124265 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12124267 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1212426a push ecx */
  push32((uint32_t)(ECX));
  /* 1212426b mov edx, dword ptr [0x12143a60] */
  EDX = (r32((uint32_t)(0x12143a60)));
  /* 12124271 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12124273 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124275 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1212427b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124281 push edx */
  push32((uint32_t)(EDX));
  /* 12124282 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12124285 push eax */
  push32((uint32_t)(EAX));
  /* 12124286 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x1212428cu);
  /* 1212428c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212428e jne 0x121242a4 */
  if (!C.zf) goto L_121242a4;
  /* 12124290 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
  /* 1212429a mov eax, 1 */
  EAX = (0x1u);
  /* 1212429f jmp 0x12124369 */
  goto L_12124369;
L_121242a4:;
  /* 121242a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121242a7 push ecx */
  push32((uint32_t)(ECX));
  /* 121242a8 mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 121242ae push edx */
  push32((uint32_t)(EDX));
  /* 121242af call 0x12126440 */
  push32(0x121242b4u); f_12126440();
  /* 121242b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121242b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121242b9 jne 0x121242f9 */
  if (!C.zf) goto L_121242f9;
  /* 121242bb cmp dword ptr [0x12143a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121242c2 jne 0x121242d6 */
  if (!C.zf) goto L_121242d6;
  /* 121242c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121242c6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121242c9 push eax */
  push32((uint32_t)(EAX));
  /* 121242ca call 0x12124590 */
  push32(0x121242cfu); f_12124590();
  /* 121242cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121242d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121242d4 je 0x121242f7 */
  if (C.zf) goto L_121242f7;
L_121242d6:;
  /* 121242d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121242d9 mov dword ptr [0x12143a70], ecx */
  w32((uint32_t)(0x12143a70), (ECX));
  /* 121242df mov edx, dword ptr [0x12143a70] */
  EDX = (r32((uint32_t)(0x12143a70)));
  /* 121242e5 mov dword ptr [0x12143a54], edx */
  w32((uint32_t)(0x12143a54), (EDX));
  /* 121242eb mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 121242f0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 121242f2 mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
L_121242f7:;
  /* 121242f7 jmp 0x1212435c */
  goto L_1212435c;
L_121242f9:;
  /* 121242f9 cmp dword ptr [0x12143a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124300 jne 0x1212435c */
  if (!C.zf) goto L_1212435c;
  /* 12124302 cmp dword ptr [0x12143a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124309 je 0x1212435c */
  if (C.zf) goto L_1212435c;
  /* 1212430b mov ecx, dword ptr [0x12143a5c] */
  ECX = (r32((uint32_t)(0x12143a5c)));
  /* 12124311 push ecx */
  push32((uint32_t)(ECX));
  /* 12124312 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12124315 push edx */
  push32((uint32_t)(EDX));
  /* 12124316 mov eax, dword ptr [0x12143a64] */
  EAX = (r32((uint32_t)(0x12143a64)));
  /* 1212431b push eax */
  push32((uint32_t)(EAX));
  /* 1212431c call 0x12126510 */
  push32(0x12124321u); f_12126510();
  /* 12124321 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124326 jne 0x1212435c */
  if (!C.zf) goto L_1212435c;
  /* 12124328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1212432a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1212432d push ecx */
  push32((uint32_t)(ECX));
  /* 1212432e call 0x12124590 */
  push32(0x12124333u); f_12124590();
  /* 12124333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124338 je 0x1212435c */
  if (C.zf) goto L_1212435c;
  /* 1212433a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1212433d mov dword ptr [0x12143a70], edx */
  w32((uint32_t)(0x12143a70), (EDX));
  /* 12124343 mov eax, dword ptr [0x12143a70] */
  EAX = (r32((uint32_t)(0x12143a70)));
  /* 12124348 mov dword ptr [0x12143a54], eax */
  w32((uint32_t)(0x12143a54), (EAX));
  /* 1212434d mov ecx, dword ptr [0x12143a6c] */
  ECX = (r32((uint32_t)(0x12143a6c)));
  /* 12124353 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12124356 mov dword ptr [0x12143a6c], ecx */
  w32((uint32_t)(0x12143a6c), (ECX));
L_1212435c:;
  /* 1212435c mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12124361 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12124364 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12124366 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124368 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12124369:;
  /* 12124369 mov esp, ebp */
  ESP = (EBP);
  /* 1212436b pop ebp */
  EBP = (pop32());
  /* 1212436c ret 4 */
  ESPCHK(0x12124250u, _esp0);
  ESP += 8; return;
}

/* FUN_10014370 @ 0x12124370 (69 bytes, 20 insns) */
void f_12124370(void) {
  FTRACE(0x12124370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124370 push ebp */
  push32((uint32_t)(EBP));
  /* 12124371 mov ebp, esp */
  EBP = (ESP);
  /* 12124373 mov eax, dword ptr [0x12143a68] */
  EAX = (r32((uint32_t)(0x12143a68)));
  /* 12124378 push eax */
  push32((uint32_t)(EAX));
  /* 12124379 call 0x1211aba0 */
  push32(0x1212437eu); f_1211aba0();
  /* 1212437e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124381 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12124383 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124386 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12124389 mov dword ptr [0x12143a58], ecx */
  w32((uint32_t)(0x12143a58), (ECX));
  /* 1212438f push 1 */
  push32((uint32_t)(0x1u));
  /* 12124391 push 0x121243c0 */
  push32((uint32_t)(0x121243c0u));
  /* 12124396 call dword ptr [0x12146310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146310))), 0x1212439cu);
  /* 1212439c mov edx, dword ptr [0x12143a6c] */
  EDX = (r32((uint32_t)(0x12143a6c)));
  /* 121243a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121243a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121243a7 jne 0x121243b3 */
  if (!C.zf) goto L_121243b3;
  /* 121243a9 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
L_121243b3:;
  /* 121243b3 pop ebp */
  EBP = (pop32());
  /* 121243b4 ret  */
  ESPCHK(0x12124370u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x121243c0 (172 bytes, 54 insns) */
void f_121243c0(void) {
  FTRACE(0x121243c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121243c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121243c1 mov ebp, esp */
  EBP = (ESP);
  /* 121243c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121243c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121243c9 push eax */
  push32((uint32_t)(EAX));
  /* 121243ca call 0x12124800 */
  push32(0x121243cfu); f_12124800();
  /* 121243cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121243d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121243d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121243d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121243da push ecx */
  push32((uint32_t)(ECX));
  /* 121243db mov edx, dword ptr [0x12143a58] */
  EDX = (r32((uint32_t)(0x12143a58)));
  /* 121243e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121243e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121243e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 121243eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121243f1 push edx */
  push32((uint32_t)(EDX));
  /* 121243f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121243f5 push eax */
  push32((uint32_t)(EAX));
  /* 121243f6 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x121243fcu);
  /* 121243fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121243fe jne 0x12124411 */
  if (!C.zf) goto L_12124411;
  /* 12124400 mov dword ptr [0x12143a6c], 0 */
  w32((uint32_t)(0x12143a6c), (0x0u));
  /* 1212440a mov eax, 1 */
  EAX = (0x1u);
  /* 1212440f jmp 0x12124466 */
  goto L_12124466;
L_12124411:;
  /* 12124411 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12124414 push ecx */
  push32((uint32_t)(ECX));
  /* 12124415 mov edx, dword ptr [0x12143a68] */
  EDX = (r32((uint32_t)(0x12143a68)));
  /* 1212441b push edx */
  push32((uint32_t)(EDX));
  /* 1212441c call 0x12126440 */
  push32(0x12124421u); f_12126440();
  /* 12124421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124426 jne 0x12124459 */
  if (!C.zf) goto L_12124459;
  /* 12124428 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1212442b push eax */
  push32((uint32_t)(EAX));
  /* 1212442c call 0x12124540 */
  push32(0x12124431u); f_12124540();
  /* 12124431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124436 je 0x12124459 */
  if (C.zf) goto L_12124459;
  /* 12124438 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1212443b mov dword ptr [0x12143a70], ecx */
  w32((uint32_t)(0x12143a70), (ECX));
  /* 12124441 mov edx, dword ptr [0x12143a70] */
  EDX = (r32((uint32_t)(0x12143a70)));
  /* 12124447 mov dword ptr [0x12143a54], edx */
  w32((uint32_t)(0x12143a54), (EDX));
  /* 1212444d mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12124452 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12124454 mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
L_12124459:;
  /* 12124459 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 1212445e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12124461 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12124463 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124465 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12124466:;
  /* 12124466 mov esp, ebp */
  ESP = (EBP);
  /* 12124468 pop ebp */
  EBP = (pop32());
  /* 12124469 ret 4 */
  ESPCHK(0x121243c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014470 @ 0x12124470 (43 bytes, 11 insns) */
void f_12124470(void) {
  FTRACE(0x12124470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124470 push ebp */
  push32((uint32_t)(EBP));
  /* 12124471 mov ebp, esp */
  EBP = (ESP);
  /* 12124473 mov eax, dword ptr [0x12143a6c] */
  EAX = (r32((uint32_t)(0x12143a6c)));
  /* 12124478 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1212447d mov dword ptr [0x12143a6c], eax */
  w32((uint32_t)(0x12143a6c), (EAX));
  /* 12124482 call dword ptr [0x12146300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146300))), 0x12124488u);
  /* 12124488 mov dword ptr [0x12143a70], eax */
  w32((uint32_t)(0x12143a70), (EAX));
  /* 1212448d mov ecx, dword ptr [0x12143a70] */
  ECX = (r32((uint32_t)(0x12143a70)));
  /* 12124493 mov dword ptr [0x12143a54], ecx */
  w32((uint32_t)(0x12143a54), (ECX));
  /* 12124499 pop ebp */
  EBP = (pop32());
  /* 1212449a ret  */
  ESPCHK(0x12124470u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x121244a0 (155 bytes, 57 insns) */
void f_121244a0(void) {
  FTRACE(0x121244a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121244a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121244a1 mov ebp, esp */
  EBP = (ESP);
  /* 121244a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121244a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121244aa je 0x121244cb */
  if (C.zf) goto L_121244cb;
  /* 121244ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121244af movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121244b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121244b4 je 0x121244cb */
  if (C.zf) goto L_121244cb;
  /* 121244b6 push 0x1213fbfc */
  push32((uint32_t)(0x1213fbfcu));
  /* 121244bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121244be push edx */
  push32((uint32_t)(EDX));
  /* 121244bf call 0x12123a00 */
  push32(0x121244c4u); f_12123a00();
  /* 121244c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121244c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121244c9 jne 0x121244f3 */
  if (!C.zf) goto L_121244f3;
L_121244cb:;
  /* 121244cb push 8 */
  push32((uint32_t)(0x8u));
  /* 121244cd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121244d0 push eax */
  push32((uint32_t)(EAX));
  /* 121244d1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121244d6 mov ecx, dword ptr [0x12143a70] */
  ECX = (r32((uint32_t)(0x12143a70)));
  /* 121244dc push ecx */
  push32((uint32_t)(ECX));
  /* 121244dd call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x121244e3u);
  /* 121244e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121244e5 jne 0x121244eb */
  if (!C.zf) goto L_121244eb;
  /* 121244e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121244e9 jmp 0x12124537 */
  goto L_12124537;
L_121244eb:;
  /* 121244eb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 121244ee mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121244f1 jmp 0x1212452b */
  goto L_1212452b;
L_121244f3:;
  /* 121244f3 push 0x1213fbf8 */
  push32((uint32_t)(0x1213fbf8u));
  /* 121244f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121244fb push eax */
  push32((uint32_t)(EAX));
  /* 121244fc call 0x12123a00 */
  push32(0x12124501u); f_12123a00();
  /* 12124501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124506 jne 0x1212452b */
  if (!C.zf) goto L_1212452b;
  /* 12124508 push 8 */
  push32((uint32_t)(0x8u));
  /* 1212450a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1212450d push ecx */
  push32((uint32_t)(ECX));
  /* 1212450e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12124510 mov edx, dword ptr [0x12143a70] */
  EDX = (r32((uint32_t)(0x12143a70)));
  /* 12124516 push edx */
  push32((uint32_t)(EDX));
  /* 12124517 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x1212451du);
  /* 1212451d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1212451f jne 0x12124525 */
  if (!C.zf) goto L_12124525;
  /* 12124521 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12124523 jmp 0x12124537 */
  goto L_12124537;
L_12124525:;
  /* 12124525 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12124528 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1212452b:;
  /* 1212452b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212452e push ecx */
  push32((uint32_t)(ECX));
  /* 1212452f call 0x12126620 */
  push32(0x12124534u); f_12126620();
  /* 12124534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12124537:;
  /* 12124537 mov esp, ebp */
  ESP = (EBP);
  /* 12124539 pop ebp */
  EBP = (pop32());
  /* 1212453a ret  */
  ESPCHK(0x121244a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014540 @ 0x12124540 (79 bytes, 26 insns) */
void f_12124540(void) {
  FTRACE(0x12124540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124540 push ebp */
  push32((uint32_t)(EBP));
  /* 12124541 mov ebp, esp */
  EBP = (ESP);
  /* 12124543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124546 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1212454a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1212454e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12124555 jmp 0x12124560 */
  goto L_12124560;
L_12124557:;
  /* 12124557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1212455a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212455d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12124560:;
  /* 12124560 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124564 jae 0x12124586 */
  if (!C.cf) goto L_12124586;
  /* 12124566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124569 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1212456f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124572 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12124574 mov cx, word ptr [eax*2 + 0x121429c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x121429c4)));
  /* 1212457c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212457e jne 0x12124584 */
  if (!C.zf) goto L_12124584;
  /* 12124580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12124582 jmp 0x1212458b */
  goto L_1212458b;
L_12124584:;
  /* 12124584 jmp 0x12124557 */
  goto L_12124557;
L_12124586:;
  /* 12124586 mov eax, 1 */
  EAX = (0x1u);
L_1212458b:;
  /* 1212458b mov esp, ebp */
  ESP = (EBP);
  /* 1212458d pop ebp */
  EBP = (pop32());
  /* 1212458e ret  */
  ESPCHK(0x12124540u, _esp0);
  ESP += 4; return;
}

/* FUN_10014590 @ 0x12124590 (135 bytes, 48 insns) */
void f_12124590(void) {
  FTRACE(0x12124590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124590 push ebp */
  push32((uint32_t)(EBP));
  /* 12124591 mov ebp, esp */
  EBP = (ESP);
  /* 12124593 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124596 push esi */
  push32((uint32_t)(ESI));
  /* 12124597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212459a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212459f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 121245a4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121245a9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 121245ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121245b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121245b4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121245b6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 121245b9 push ecx */
  push32((uint32_t)(ECX));
  /* 121245ba push 1 */
  push32((uint32_t)(0x1u));
  /* 121245bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121245bf push edx */
  push32((uint32_t)(EDX));
  /* 121245c0 call dword ptr [0x12143a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143a74))), 0x121245c6u);
  /* 121245c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121245c8 jne 0x121245ce */
  if (!C.zf) goto L_121245ce;
  /* 121245ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121245cc jmp 0x12124612 */
  goto L_12124612;
L_121245ce:;
  /* 121245ce lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 121245d1 push eax */
  push32((uint32_t)(EAX));
  /* 121245d2 call 0x12124800 */
  push32(0x121245d7u); f_12124800();
  /* 121245d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121245da cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121245dd je 0x1212460d */
  if (C.zf) goto L_1212460d;
  /* 121245df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121245e3 je 0x1212460d */
  if (C.zf) goto L_1212460d;
  /* 121245e5 mov ecx, dword ptr [0x12143a64] */
  ECX = (r32((uint32_t)(0x12143a64)));
  /* 121245eb push ecx */
  push32((uint32_t)(ECX));
  /* 121245ec call 0x12124880 */
  push32(0x121245f1u); f_12124880();
  /* 121245f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121245f4 mov esi, eax */
  ESI = (EAX);
  /* 121245f6 mov edx, dword ptr [0x12143a64] */
  EDX = (r32((uint32_t)(0x12143a64)));
  /* 121245fc push edx */
  push32((uint32_t)(EDX));
  /* 121245fd call 0x1211aba0 */
  push32(0x12124602u); f_1211aba0();
  /* 12124602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124605 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124607 jne 0x1212460d */
  if (!C.zf) goto L_1212460d;
  /* 12124609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1212460b jmp 0x12124612 */
  goto L_12124612;
L_1212460d:;
  /* 1212460d mov eax, 1 */
  EAX = (0x1u);
L_12124612:;
  /* 12124612 pop esi */
  ESI = (pop32());
  /* 12124613 mov esp, ebp */
  ESP = (EBP);
  /* 12124615 pop ebp */
  EBP = (pop32());
  /* 12124616 ret  */
  ESPCHK(0x12124590u, _esp0);
  ESP += 4; return;
}

/* FUN_10014620 @ 0x12124620 (77 bytes, 18 insns) */
void f_12124620(void) {
  FTRACE(0x12124620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124620 push ebp */
  push32((uint32_t)(EBP));
  /* 12124621 mov ebp, esp */
  EBP = (ESP);
  /* 12124623 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124629 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12124633 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12124639 push eax */
  push32((uint32_t)(EAX));
  /* 1212463a call dword ptr [0x121462fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462fc))), 0x12124640u);
  /* 12124640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124642 je 0x12124659 */
  if (C.zf) goto L_12124659;
  /* 12124644 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212464b jne 0x12124659 */
  if (!C.zf) goto L_12124659;
  /* 1212464d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12124657 jmp 0x12124663 */
  goto L_12124663;
L_12124659:;
  /* 12124659 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12124663:;
  /* 12124663 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12124669 mov esp, ebp */
  ESP = (EBP);
  /* 1212466b pop ebp */
  EBP = (pop32());
  /* 1212466c ret  */
  ESPCHK(0x12124620u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12124670 (388 bytes, 118 insns) */
void f_12124670(void) {
  FTRACE(0x12124670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124670 push ebp */
  push32((uint32_t)(EBP));
  /* 12124671 mov ebp, esp */
  EBP = (ESP);
  /* 12124673 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124676 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1212467d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12124684 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1212468b:;
  /* 1212468b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1212468e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124691 jg 0x121247d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_121247d8;
  /* 12124697 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1212469a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212469d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1212469e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121246a0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121246a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121246a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121246a8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121246ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121246ae cmp edx, dword ptr [ecx + 0x12142520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12142520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246b4 jne 0x121247ae */
  if (!C.zf) goto L_121247ae;
  /* 121246ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121246bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121246c0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246c4 ja 0x121246e7 */
  if ((!C.cf&&!C.zf)) goto L_121246e7;
  /* 121246c6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246ca je 0x12124759 */
  if (C.zf) goto L_12124759;
  /* 121246d0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246d4 je 0x12124704 */
  if (C.zf) goto L_12124704;
  /* 121246d6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246da je 0x12124726 */
  if (C.zf) goto L_12124726;
  /* 121246dc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246e0 je 0x12124748 */
  if (C.zf) goto L_12124748;
  /* 121246e2 jmp 0x12124778 */
  goto L_12124778;
L_121246e7:;
  /* 121246e7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246ee je 0x12124715 */
  if (C.zf) goto L_12124715;
  /* 121246f0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121246f7 je 0x12124737 */
  if (C.zf) goto L_12124737;
  /* 121246f9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124700 je 0x1212476a */
  if (C.zf) goto L_1212476a;
  /* 12124702 jmp 0x12124778 */
  goto L_12124778;
L_12124704:;
  /* 12124704 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124707 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212470a add ecx, 0x12142524 */
  { uint32_t _a=(ECX),_b=(0x12142524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124710 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12124713 jmp 0x12124778 */
  goto L_12124778;
L_12124715:;
  /* 12124715 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124718 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212471b mov eax, dword ptr [edx + 0x1214252c] */
  EAX = (r32((uint32_t)(EDX + 0x1214252c)));
  /* 12124721 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12124724 jmp 0x12124778 */
  goto L_12124778;
L_12124726:;
  /* 12124726 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124729 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212472c add ecx, 0x12142530 */
  { uint32_t _a=(ECX),_b=(0x12142530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124732 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12124735 jmp 0x12124778 */
  goto L_12124778;
L_12124737:;
  /* 12124737 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212473a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212473d mov eax, dword ptr [edx + 0x12142534] */
  EAX = (r32((uint32_t)(EDX + 0x12142534)));
  /* 12124743 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12124746 jmp 0x12124778 */
  goto L_12124778;
L_12124748:;
  /* 12124748 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212474b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212474e add ecx, 0x12142538 */
  { uint32_t _a=(ECX),_b=(0x12142538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124754 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12124757 jmp 0x12124778 */
  goto L_12124778;
L_12124759:;
  /* 12124759 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212475c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212475f add edx, 0x1214253c */
  { uint32_t _a=(EDX),_b=(0x1214253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124765 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12124768 jmp 0x12124778 */
  goto L_12124778;
L_1212476a:;
  /* 1212476a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212476d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12124770 add eax, 0x12142544 */
  { uint32_t _a=(EAX),_b=(0x12142544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124775 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12124778:;
  /* 12124778 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212477c je 0x12124784 */
  if (C.zf) goto L_12124784;
  /* 1212477e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124782 jge 0x12124786 */
  if ((C.sf==C.of)) goto L_12124786;
L_12124784:;
  /* 12124784 jmp 0x121247d8 */
  goto L_121247d8;
L_12124786:;
  /* 12124786 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12124789 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1212478c push ecx */
  push32((uint32_t)(ECX));
  /* 1212478d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124790 push edx */
  push32((uint32_t)(EDX));
  /* 12124791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12124794 push eax */
  push32((uint32_t)(EAX));
  /* 12124795 call 0x1211b590 */
  push32(0x1212479au); f_1211b590();
  /* 1212479a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212479d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121247a0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121247a3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 121247a7 mov eax, 1 */
  EAX = (0x1u);
  /* 121247ac jmp 0x121247ee */
  goto L_121247ee;
L_121247ae:;
  /* 121247ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121247b1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121247b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121247b7 cmp eax, dword ptr [edx + 0x12142520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12142520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121247bd jae 0x121247ca */
  if (!C.cf) goto L_121247ca;
  /* 121247bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121247c2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121247c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121247c8 jmp 0x121247d3 */
  goto L_121247d3;
L_121247ca:;
  /* 121247ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121247cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121247d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121247d3:;
  /* 121247d3 jmp 0x1212468b */
  goto L_1212468b;
L_121247d8:;
  /* 121247d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121247db push eax */
  push32((uint32_t)(EAX));
  /* 121247dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121247df push ecx */
  push32((uint32_t)(ECX));
  /* 121247e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121247e3 push edx */
  push32((uint32_t)(EDX));
  /* 121247e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121247e7 push eax */
  push32((uint32_t)(EAX));
  /* 121247e8 call dword ptr [0x12146308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146308))), 0x121247eeu);
L_121247ee:;
  /* 121247ee mov esp, ebp */
  ESP = (EBP);
  /* 121247f0 pop ebp */
  EBP = (pop32());
  /* 121247f1 ret 0x10 */
  ESPCHK(0x12124670u, _esp0);
  ESP += 20; return;
}

/* FUN_10014800 @ 0x12124800 (118 bytes, 42 insns) */
void f_12124800(void) {
  FTRACE(0x12124800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124800 push ebp */
  push32((uint32_t)(EBP));
  /* 12124801 mov ebp, esp */
  EBP = (ESP);
  /* 12124803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124806 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1212480d:;
  /* 1212480d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124810 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12124812 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12124815 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12124819 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212481c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212481f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12124822 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12124824 je 0x1212486f */
  if (C.zf) goto L_1212486f;
  /* 12124826 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1212482a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212482d jl 0x12124842 */
  if ((C.sf!=C.of)) goto L_12124842;
  /* 1212482f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12124833 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124836 jg 0x12124842 */
  if ((!C.zf&&C.sf==C.of)) goto L_12124842;
  /* 12124838 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1212483b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1212483d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12124840 jmp 0x1212485c */
  goto L_1212485c;
L_12124842:;
  /* 12124842 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12124846 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124849 jl 0x1212485c */
  if ((C.sf!=C.of)) goto L_1212485c;
  /* 1212484b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1212484f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124852 jg 0x1212485c */
  if ((!C.zf&&C.sf==C.of)) goto L_1212485c;
  /* 12124854 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12124857 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12124859 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1212485c:;
  /* 1212485c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1212485f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12124862 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12124866 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1212486a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1212486d jmp 0x1212480d */
  goto L_1212480d;
L_1212486f:;
  /* 1212486f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124872 mov esp, ebp */
  ESP = (EBP);
  /* 12124874 pop ebp */
  EBP = (pop32());
  /* 12124875 ret  */
  ESPCHK(0x12124800u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12124880 (101 bytes, 36 insns) */
void f_12124880(void) {
  FTRACE(0x12124880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124880 push ebp */
  push32((uint32_t)(EBP));
  /* 12124881 mov ebp, esp */
  EBP = (ESP);
  /* 12124883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124886 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1212488d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124890 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12124892 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12124895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124898 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1212489b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1212489e:;
  /* 1212489e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121248a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121248a5 jl 0x121248b0 */
  if ((C.sf!=C.of)) goto L_121248b0;
  /* 121248a7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121248ab cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121248ae jle 0x121248c2 */
  if ((C.zf||C.sf!=C.of)) goto L_121248c2;
L_121248b0:;
  /* 121248b0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121248b4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121248b7 jl 0x121248de */
  if ((C.sf!=C.of)) goto L_121248de;
  /* 121248b9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121248bd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121248c0 jg 0x121248de */
  if ((!C.zf&&C.sf==C.of)) goto L_121248de;
L_121248c2:;
  /* 121248c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121248c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121248c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121248cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121248ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121248d0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 121248d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121248d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121248d9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121248dc jmp 0x1212489e */
  goto L_1212489e;
L_121248de:;
  /* 121248de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121248e1 mov esp, ebp */
  ESP = (EBP);
  /* 121248e3 pop ebp */
  EBP = (pop32());
  /* 121248e4 ret  */
  ESPCHK(0x12124880u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x121248f0 (122 bytes, 39 insns) */
void f_121248f0(void) {
  FTRACE(0x121248f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121248f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121248f1 mov ebp, esp */
  EBP = (ESP);
  /* 121248f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121248f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121248f7 cmp eax, dword ptr [0x121452fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121452fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121248fd jae 0x12124921 */
  if (!C.cf) goto L_12124921;
  /* 121248ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124902 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12124905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124908 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1212490b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1212490e mov eax, dword ptr [ecx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12124915 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1212491a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1212491d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1212491f jne 0x1212493c */
  if (!C.zf) goto L_1212493c;
L_12124921:;
  /* 12124921 call 0x1211fc40 */
  push32(0x12124926u); f_1211fc40();
  /* 12124926 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1212492c call 0x1211fc50 */
  push32(0x12124931u); f_1211fc50();
  /* 12124931 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12124937 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1212493a jmp 0x12124966 */
  goto L_12124966;
L_1212493c:;
  /* 1212493c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212493f push edx */
  push32((uint32_t)(EDX));
  /* 12124940 call 0x12121460 */
  push32(0x12124945u); f_12121460();
  /* 12124945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212494b push eax */
  push32((uint32_t)(EAX));
  /* 1212494c call 0x12124970 */
  push32(0x12124951u); f_12124970();
  /* 12124951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124954 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12124957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1212495a push ecx */
  push32((uint32_t)(ECX));
  /* 1212495b call 0x121214f0 */
  push32(0x12124960u); f_121214f0();
  /* 12124960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12124966:;
  /* 12124966 mov esp, ebp */
  ESP = (EBP);
  /* 12124968 pop ebp */
  EBP = (pop32());
  /* 12124969 ret  */
  ESPCHK(0x121248f0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12124970 (170 bytes, 59 insns) */
void f_12124970(void) {
  FTRACE(0x12124970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124970 push ebp */
  push32((uint32_t)(EBP));
  /* 12124971 mov ebp, esp */
  EBP = (ESP);
  /* 12124973 push ecx */
  push32((uint32_t)(ECX));
  /* 12124974 push esi */
  push32((uint32_t)(ESI));
  /* 12124975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124978 push eax */
  push32((uint32_t)(EAX));
  /* 12124979 call 0x121212e0 */
  push32(0x1212497eu); f_121212e0();
  /* 1212497e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124981 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124984 je 0x121249c3 */
  if (C.zf) goto L_121249c3;
  /* 12124986 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1212498a je 0x12124992 */
  if (C.zf) goto L_12124992;
  /* 1212498c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124990 jne 0x121249ac */
  if (!C.zf) goto L_121249ac;
L_12124992:;
  /* 12124992 push 1 */
  push32((uint32_t)(0x1u));
  /* 12124994 call 0x121212e0 */
  push32(0x12124999u); f_121212e0();
  /* 12124999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212499c mov esi, eax */
  ESI = (EAX);
  /* 1212499e push 2 */
  push32((uint32_t)(0x2u));
  /* 121249a0 call 0x121212e0 */
  push32(0x121249a5u); f_121212e0();
  /* 121249a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121249a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121249aa je 0x121249c3 */
  if (C.zf) goto L_121249c3;
L_121249ac:;
  /* 121249ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121249af push ecx */
  push32((uint32_t)(ECX));
  /* 121249b0 call 0x121212e0 */
  push32(0x121249b5u); f_121212e0();
  /* 121249b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121249b8 push eax */
  push32((uint32_t)(EAX));
  /* 121249b9 call dword ptr [0x12146304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146304))), 0x121249bfu);
  /* 121249bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121249c1 je 0x121249cc */
  if (C.zf) goto L_121249cc;
L_121249c3:;
  /* 121249c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121249ca jmp 0x121249d5 */
  goto L_121249d5;
L_121249cc:;
  /* 121249cc call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x121249d2u);
  /* 121249d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121249d5:;
  /* 121249d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121249d8 push edx */
  push32((uint32_t)(EDX));
  /* 121249d9 call 0x12121200 */
  push32(0x121249deu); f_12121200();
  /* 121249de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121249e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121249e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121249e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121249ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121249ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121249f0 mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 121249f7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 121249fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124a00 je 0x12124a13 */
  if (C.zf) goto L_12124a13;
  /* 12124a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124a05 push eax */
  push32((uint32_t)(EAX));
  /* 12124a06 call 0x1211fba0 */
  push32(0x12124a0bu); f_1211fba0();
  /* 12124a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124a0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12124a11 jmp 0x12124a15 */
  goto L_12124a15;
L_12124a13:;
  /* 12124a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12124a15:;
  /* 12124a15 pop esi */
  ESI = (pop32());
  /* 12124a16 mov esp, ebp */
  ESP = (EBP);
  /* 12124a18 pop ebp */
  EBP = (pop32());
  /* 12124a19 ret  */
  ESPCHK(0x12124970u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a20 @ 0x12124a20 (146 bytes, 52 insns) */
void f_12124a20(void) {
  FTRACE(0x12124a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12124a21 mov ebp, esp */
  EBP = (ESP);
  /* 12124a23 push ebx */
  push32((uint32_t)(EBX));
  /* 12124a24 push esi */
  push32((uint32_t)(ESI));
  /* 12124a25 push edi */
  push32((uint32_t)(EDI));
L_12124a26:;
  /* 12124a26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124a2a jne 0x12124a4a */
  if (!C.zf) goto L_12124a4a;
  /* 12124a2c push 0x1213f538 */
  push32((uint32_t)(0x1213f538u));
  /* 12124a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12124a33 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12124a35 push 0x1213fc00 */
  push32((uint32_t)(0x1213fc00u));
  /* 12124a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12124a3c call 0x12116e30 */
  push32(0x12124a41u); f_12116e30();
  /* 12124a41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124a44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124a47 jne 0x12124a4a */
  if (!C.zf) goto L_12124a4a;
  /* 12124a49 int3  */
  x86_unimpl("int3 @ 0x12124a49");
L_12124a4a:;
  /* 12124a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12124a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12124a4e jne 0x12124a26 */
  if (!C.zf) goto L_12124a26;
  /* 12124a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a53 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12124a56 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12124a5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12124a5e je 0x12124aad */
  if (C.zf) goto L_12124aad;
  /* 12124a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a63 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12124a66 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12124a69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12124a6b je 0x12124aad */
  if (C.zf) goto L_12124aad;
  /* 12124a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12124a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12124a75 push eax */
  push32((uint32_t)(EAX));
  /* 12124a76 call 0x12118800 */
  push32(0x12124a7bu); f_12118800();
  /* 12124a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a81 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12124a84 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12124a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a8d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12124a90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a93 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12124a99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124a9c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12124aa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12124aa6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12124aad:;
  /* 12124aad pop edi */
  EDI = (pop32());
  /* 12124aae pop esi */
  ESI = (pop32());
  /* 12124aaf pop ebx */
  EBX = (pop32());
  /* 12124ab0 pop ebp */
  EBP = (pop32());
  /* 12124ab1 ret  */
  ESPCHK(0x12124a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ac0 @ 0x12124ac0 (289 bytes, 97 insns) */
void f_12124ac0(void) {
  FTRACE(0x12124ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12124ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12124ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124ac6 push esi */
  push32((uint32_t)(ESI));
  /* 12124ac7 mov eax, dword ptr [0x12142c98] */
  EAX = (r32((uint32_t)(0x12142c98)));
  /* 12124acc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12124acf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12124ad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124add jmp 0x12124ae8 */
  goto L_12124ae8;
L_12124adf:;
  /* 12124adf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12124ae8:;
  /* 12124ae8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124aec jae 0x12124b21 */
  if (!C.cf) goto L_12124b21;
  /* 12124aee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124af4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12124af7 push ecx */
  push32((uint32_t)(ECX));
  /* 12124af8 call 0x1211aba0 */
  push32(0x12124afdu); f_1211aba0();
  /* 12124afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b00 mov esi, eax */
  ESI = (EAX);
  /* 12124b02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124b05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124b08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12124b0c push ecx */
  push32((uint32_t)(ECX));
  /* 12124b0d call 0x1211aba0 */
  push32(0x12124b12u); f_1211aba0();
  /* 12124b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12124b1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12124b1f jmp 0x12124adf */
  goto L_12124adf;
L_12124b21:;
  /* 12124b21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b27 push eax */
  push32((uint32_t)(EAX));
  /* 12124b28 call 0x12117d50 */
  push32(0x12124b2du); f_12117d50();
  /* 12124b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12124b33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124b37 je 0x12124bd9 */
  if (C.zf) goto L_12124bd9;
  /* 12124b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124b40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12124b43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124b4a jmp 0x12124b55 */
  goto L_12124b55;
L_12124b4c:;
  /* 12124b4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124b4f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b52 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12124b55:;
  /* 12124b55 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124b59 jae 0x12124bca */
  if (!C.cf) goto L_12124bca;
  /* 12124b5b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124b5e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12124b61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124b64 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b67 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12124b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124b70 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12124b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12124b74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124b77 push edx */
  push32((uint32_t)(EDX));
  /* 12124b78 call 0x1211ad20 */
  push32(0x12124b7du); f_1211ad20();
  /* 12124b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b80 push eax */
  push32((uint32_t)(EAX));
  /* 12124b81 call 0x1211aba0 */
  push32(0x12124b86u); f_1211aba0();
  /* 12124b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124b8c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b8e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12124b91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124b94 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12124b97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124b9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12124ba0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124ba3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124ba6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12124baa push eax */
  push32((uint32_t)(EAX));
  /* 12124bab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124bae push ecx */
  push32((uint32_t)(ECX));
  /* 12124baf call 0x1211ad20 */
  push32(0x12124bb4u); f_1211ad20();
  /* 12124bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12124bb8 call 0x1211aba0 */
  push32(0x12124bbdu); f_1211aba0();
  /* 12124bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124bc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124bc3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124bc5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12124bc8 jmp 0x12124b4c */
  goto L_12124b4c;
L_12124bca:;
  /* 12124bca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124bcd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12124bd0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124bd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124bd6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12124bd9:;
  /* 12124bd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124bdc pop esi */
  ESI = (pop32());
  /* 12124bdd mov esp, ebp */
  ESP = (EBP);
  /* 12124bdf pop ebp */
  EBP = (pop32());
  /* 12124be0 ret  */
  ESPCHK(0x12124ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bf0 @ 0x12124bf0 (291 bytes, 97 insns) */
void f_12124bf0(void) {
  FTRACE(0x12124bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12124bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12124bf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124bf6 push esi */
  push32((uint32_t)(ESI));
  /* 12124bf7 mov eax, dword ptr [0x12142c98] */
  EAX = (r32((uint32_t)(0x12142c98)));
  /* 12124bfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12124bff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12124c06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124c0d jmp 0x12124c18 */
  goto L_12124c18;
L_12124c0f:;
  /* 12124c0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124c12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12124c18:;
  /* 12124c18 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124c1c jae 0x12124c52 */
  if (!C.cf) goto L_12124c52;
  /* 12124c1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124c21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124c24 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12124c28 push ecx */
  push32((uint32_t)(ECX));
  /* 12124c29 call 0x1211aba0 */
  push32(0x12124c2eu); f_1211aba0();
  /* 12124c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c31 mov esi, eax */
  ESI = (EAX);
  /* 12124c33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124c36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124c39 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12124c3d push ecx */
  push32((uint32_t)(ECX));
  /* 12124c3e call 0x1211aba0 */
  push32(0x12124c43u); f_1211aba0();
  /* 12124c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c46 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c49 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12124c4d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12124c50 jmp 0x12124c0f */
  goto L_12124c0f;
L_12124c52:;
  /* 12124c52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124c55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c58 push eax */
  push32((uint32_t)(EAX));
  /* 12124c59 call 0x12117d50 */
  push32(0x12124c5eu); f_12117d50();
  /* 12124c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12124c64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124c68 je 0x12124d0b */
  if (C.zf) goto L_12124d0b;
  /* 12124c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124c71 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12124c74 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124c7b jmp 0x12124c86 */
  goto L_12124c86;
L_12124c7d:;
  /* 12124c7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124c80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12124c86:;
  /* 12124c86 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124c8a jae 0x12124cfc */
  if (!C.cf) goto L_12124cfc;
  /* 12124c8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124c8f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12124c92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124c95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124c98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12124c9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124c9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124ca1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12124ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12124ca6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124ca9 push edx */
  push32((uint32_t)(EDX));
  /* 12124caa call 0x1211ad20 */
  push32(0x12124cafu); f_1211ad20();
  /* 12124caf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124cb2 push eax */
  push32((uint32_t)(EAX));
  /* 12124cb3 call 0x1211aba0 */
  push32(0x12124cb8u); f_1211aba0();
  /* 12124cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124cbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124cbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124cc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12124cc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124cc6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12124cc9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124ccc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ccf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12124cd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124cd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124cd8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12124cdc push eax */
  push32((uint32_t)(EAX));
  /* 12124cdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 12124ce1 call 0x1211ad20 */
  push32(0x12124ce6u); f_1211ad20();
  /* 12124ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ce9 push eax */
  push32((uint32_t)(EAX));
  /* 12124cea call 0x1211aba0 */
  push32(0x12124cefu); f_1211aba0();
  /* 12124cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124cf2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124cf5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124cf7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12124cfa jmp 0x12124c7d */
  goto L_12124c7d;
L_12124cfc:;
  /* 12124cfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124cff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12124d02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124d08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12124d0b:;
  /* 12124d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124d0e pop esi */
  ESI = (pop32());
  /* 12124d0f mov esp, ebp */
  ESP = (EBP);
  /* 12124d11 pop ebp */
  EBP = (pop32());
  /* 12124d12 ret  */
  ESPCHK(0x12124bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d20 @ 0x12124d20 (878 bytes, 273 insns) */
void f_12124d20(void) {
  FTRACE(0x12124d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12124d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12124d21 mov ebp, esp */
  EBP = (ESP);
  /* 12124d23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12124d26 push esi */
  push32((uint32_t)(ESI));
  /* 12124d27 mov eax, dword ptr [0x12142c98] */
  EAX = (r32((uint32_t)(0x12142c98)));
  /* 12124d2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12124d2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12124d36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124d3d jmp 0x12124d48 */
  goto L_12124d48;
L_12124d3f:;
  /* 12124d3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124d45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12124d48:;
  /* 12124d48 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124d4c jae 0x12124d81 */
  if (!C.cf) goto L_12124d81;
  /* 12124d4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124d54 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12124d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12124d58 call 0x1211aba0 */
  push32(0x12124d5du); f_1211aba0();
  /* 12124d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124d60 mov esi, eax */
  ESI = (EAX);
  /* 12124d62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124d65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124d68 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12124d6c push ecx */
  push32((uint32_t)(ECX));
  /* 12124d6d call 0x1211aba0 */
  push32(0x12124d72u); f_1211aba0();
  /* 12124d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124d75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124d78 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12124d7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12124d7f jmp 0x12124d3f */
  goto L_12124d3f;
L_12124d81:;
  /* 12124d81 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124d88 jmp 0x12124d93 */
  goto L_12124d93;
L_12124d8a:;
  /* 12124d8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124d8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124d90 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12124d93:;
  /* 12124d93 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124d97 jae 0x12124dcd */
  if (!C.cf) goto L_12124dcd;
  /* 12124d99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124d9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124d9f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12124da3 push eax */
  push32((uint32_t)(EAX));
  /* 12124da4 call 0x1211aba0 */
  push32(0x12124da9u); f_1211aba0();
  /* 12124da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124dac mov esi, eax */
  ESI = (EAX);
  /* 12124dae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124db4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12124db8 push eax */
  push32((uint32_t)(EAX));
  /* 12124db9 call 0x1211aba0 */
  push32(0x12124dbeu); f_1211aba0();
  /* 12124dbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124dc1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124dc4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12124dc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12124dcb jmp 0x12124d8a */
  goto L_12124d8a;
L_12124dcd:;
  /* 12124dcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124dd0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12124dd6 push eax */
  push32((uint32_t)(EAX));
  /* 12124dd7 call 0x1211aba0 */
  push32(0x12124ddcu); f_1211aba0();
  /* 12124ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ddf mov esi, eax */
  ESI = (EAX);
  /* 12124de1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124de4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12124dea push edx */
  push32((uint32_t)(EDX));
  /* 12124deb call 0x1211aba0 */
  push32(0x12124df0u); f_1211aba0();
  /* 12124df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124df3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124df6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12124dfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12124dfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124e00 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12124e06 push edx */
  push32((uint32_t)(EDX));
  /* 12124e07 call 0x1211aba0 */
  push32(0x12124e0cu); f_1211aba0();
  /* 12124e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124e12 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12124e16 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12124e19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124e1c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12124e22 push ecx */
  push32((uint32_t)(ECX));
  /* 12124e23 call 0x1211aba0 */
  push32(0x12124e28u); f_1211aba0();
  /* 12124e28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e2b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124e2e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12124e32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12124e35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124e38 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12124e3e push edx */
  push32((uint32_t)(EDX));
  /* 12124e3f call 0x1211aba0 */
  push32(0x12124e44u); f_1211aba0();
  /* 12124e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124e4a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12124e4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12124e51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12124e54 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e59 push eax */
  push32((uint32_t)(EAX));
  /* 12124e5a call 0x12117d50 */
  push32(0x12124e5fu); f_12117d50();
  /* 12124e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12124e65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124e69 je 0x12125086 */
  if (C.zf) goto L_12125086;
  /* 12124e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124e72 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12124e75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124e78 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e7e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12124e81 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12124e86 mov eax, dword ptr [0x12142c98] */
  EAX = (r32((uint32_t)(0x12142c98)));
  /* 12124e8b push eax */
  push32((uint32_t)(EAX));
  /* 12124e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12124e8f push ecx */
  push32((uint32_t)(ECX));
  /* 12124e90 call 0x1211e650 */
  push32(0x12124e95u); f_1211e650();
  /* 12124e95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124e98 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124e9f jmp 0x12124eaa */
  goto L_12124eaa;
L_12124ea1:;
  /* 12124ea1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124ea4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ea7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12124eaa:;
  /* 12124eaa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124eae jae 0x12124f1e */
  if (!C.cf) goto L_12124f1e;
  /* 12124eb0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124eb3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12124eb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124eb9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12124ebc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124ebf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124ec2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12124ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12124ec6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12124eca call 0x1211ad20 */
  push32(0x12124ecfu); f_1211ad20();
  /* 12124ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ed2 push eax */
  push32((uint32_t)(EAX));
  /* 12124ed3 call 0x1211aba0 */
  push32(0x12124ed8u); f_1211aba0();
  /* 12124ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124edb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124ede lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12124ee2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12124ee5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124ee8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12124eeb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124eee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12124ef2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124ef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124ef8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12124efc push edx */
  push32((uint32_t)(EDX));
  /* 12124efd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f00 push eax */
  push32((uint32_t)(EAX));
  /* 12124f01 call 0x1211ad20 */
  push32(0x12124f06u); f_1211ad20();
  /* 12124f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f09 push eax */
  push32((uint32_t)(EAX));
  /* 12124f0a call 0x1211aba0 */
  push32(0x12124f0fu); f_1211aba0();
  /* 12124f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f15 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12124f19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12124f1c jmp 0x12124ea1 */
  goto L_12124ea1;
L_12124f1e:;
  /* 12124f1e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12124f25 jmp 0x12124f30 */
  goto L_12124f30;
L_12124f27:;
  /* 12124f27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124f2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f2d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12124f30:;
  /* 12124f30 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12124f34 jae 0x12124fa6 */
  if (!C.cf) goto L_12124fa6;
  /* 12124f36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124f39 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12124f3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f3f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12124f43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124f46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124f49 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12124f4d push eax */
  push32((uint32_t)(EAX));
  /* 12124f4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f51 push ecx */
  push32((uint32_t)(ECX));
  /* 12124f52 call 0x1211ad20 */
  push32(0x12124f57u); f_1211ad20();
  /* 12124f57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f5a push eax */
  push32((uint32_t)(EAX));
  /* 12124f5b call 0x1211aba0 */
  push32(0x12124f60u); f_1211aba0();
  /* 12124f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f66 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12124f6a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12124f6d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124f70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12124f73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f76 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12124f7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12124f7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124f80 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12124f84 push eax */
  push32((uint32_t)(EAX));
  /* 12124f85 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f88 push ecx */
  push32((uint32_t)(ECX));
  /* 12124f89 call 0x1211ad20 */
  push32(0x12124f8eu); f_1211ad20();
  /* 12124f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f91 push eax */
  push32((uint32_t)(EAX));
  /* 12124f92 call 0x1211aba0 */
  push32(0x12124f97u); f_1211aba0();
  /* 12124f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124f9a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124f9d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12124fa1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12124fa4 jmp 0x12124f27 */
  goto L_12124f27;
L_12124fa6:;
  /* 12124fa6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12124fa9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124fac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12124fb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124fb5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12124fbb push ecx */
  push32((uint32_t)(ECX));
  /* 12124fbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124fbf push edx */
  push32((uint32_t)(EDX));
  /* 12124fc0 call 0x1211ad20 */
  push32(0x12124fc5u); f_1211ad20();
  /* 12124fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124fc8 push eax */
  push32((uint32_t)(EAX));
  /* 12124fc9 call 0x1211aba0 */
  push32(0x12124fceu); f_1211aba0();
  /* 12124fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124fd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124fd4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12124fd8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12124fdb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12124fde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124fe1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12124fe7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12124fea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12124ff0 push eax */
  push32((uint32_t)(EAX));
  /* 12124ff1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12124ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 12124ff5 call 0x1211ad20 */
  push32(0x12124ffau); f_1211ad20();
  /* 12124ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12124ffd push eax */
  push32((uint32_t)(EAX));
  /* 12124ffe call 0x1211aba0 */
  push32(0x12125003u); f_1211aba0();
  /* 12125003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125006 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125009 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1212500d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12125010 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12125013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125016 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1212501c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1212501f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12125025 push ecx */
  push32((uint32_t)(ECX));
  /* 12125026 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125029 push edx */
  push32((uint32_t)(EDX));
  /* 1212502a call 0x1211ad20 */
  push32(0x1212502fu); f_1211ad20();
  /* 1212502f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125032 push eax */
  push32((uint32_t)(EAX));
  /* 12125033 call 0x1211aba0 */
  push32(0x12125038u); f_1211aba0();
  /* 12125038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1212503b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1212503e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12125042 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12125045 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12125048 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1212504b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12125051 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12125054 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1212505a push eax */
  push32((uint32_t)(EAX));
  /* 1212505b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1212505e push ecx */
  push32((uint32_t)(ECX));
  /* 1212505f call 0x1211ad20 */
  push32(0x12125064u); f_1211ad20();
  /* 12125064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125067 push eax */
  push32((uint32_t)(EAX));
  /* 12125068 call 0x1211aba0 */
  push32(0x1212506du); f_1211aba0();
  /* 1212506d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12125070 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125073 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12125077 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1212507a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1212507d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12125080 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12125086:;
  /* 12125086 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12125089 pop esi */
  ESI = (pop32());
  /* 1212508a mov esp, ebp */
  ESP = (EBP);
  /* 1212508c pop ebp */
  EBP = (pop32());
  /* 1212508d ret  */
  ESPCHK(0x12124d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015090 @ 0x12125090 (31 bytes, 15 insns) */
void f_12125090(void) {
  FTRACE(0x12125090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12125090 push ebp */
  push32((uint32_t)(EBP));
  /* 12125091 mov ebp, esp */
  EBP = (ESP);
  /* 12125093 push 0 */
  push32((uint32_t)(0x0u));
  /* 12125095 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12125098 push eax */
  push32((uint32_t)(EAX));
  /* 12125099 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1212509c push ecx */
  push32((uint32_t)(ECX));
  /* 1212509d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121250a0 push edx */
  push32((uint32_t)(EDX));
  /* 121250a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121250a4 push eax */
  push32((uint32_t)(EAX));
  /* 121250a5 call 0x121250b0 */
  push32(0x121250aau); f_121250b0();
  /* 121250aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121250ad pop ebp */
  EBP = (pop32());
  /* 121250ae ret  */
  ESPCHK(0x12125090u, _esp0);
  ESP += 4; return;
}

