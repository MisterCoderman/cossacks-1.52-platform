#include "recomp.h"

/* FUN_1000b1d0 @ 0x1202b1d0 (10 bytes, 5 insns) */
void f_1202b1d0(void) {
  FTRACE(0x1202b1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1202b1d3 mov eax, dword ptr [0x12050c94] */
  EAX = (r32((uint32_t)(0x12050c94)));
  /* 1202b1d8 pop ebp */
  EBP = (pop32());
  /* 1202b1d9 ret  */
  ESPCHK(0x1202b1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1e0 @ 0x1202b1e0 (31 bytes, 11 insns) */
void f_1202b1e0(void) {
  FTRACE(0x1202b1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1202b1e3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b1ea jbe 0x1202b1f0 */
  if ((C.cf||C.zf)) goto L_1202b1f0;
  /* 1202b1ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202b1ee jmp 0x1202b1fd */
  goto L_1202b1fd;
L_1202b1f0:;
  /* 1202b1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b1f3 mov dword ptr [0x12050c94], eax */
  w32((uint32_t)(0x12050c94), (EAX));
  /* 1202b1f8 mov eax, 1 */
  EAX = (0x1u);
L_1202b1fd:;
  /* 1202b1fd pop ebp */
  EBP = (pop32());
  /* 1202b1fe ret  */
  ESPCHK(0x1202b1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x1202b200 (89 bytes, 20 insns) */
void f_1202b200(void) {
  FTRACE(0x1202b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b201 mov ebp, esp */
  EBP = (ESP);
  /* 1202b203 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1202b208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b20a mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 1202b20f push eax */
  push32((uint32_t)(EAX));
  /* 1202b210 call dword ptr [0x12055350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055350))), 0x1202b216u);
  /* 1202b216 mov dword ptr [0x12054188], eax */
  w32((uint32_t)(0x12054188), (EAX));
  /* 1202b21b cmp dword ptr [0x12054188], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054188))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b222 jne 0x1202b228 */
  if (!C.zf) goto L_1202b228;
  /* 1202b224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202b226 jmp 0x1202b257 */
  goto L_1202b257;
L_1202b228:;
  /* 1202b228 mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202b22e mov dword ptr [0x1205417c], ecx */
  w32((uint32_t)(0x1205417c), (ECX));
  /* 1202b234 mov dword ptr [0x12054180], 0 */
  w32((uint32_t)(0x12054180), (0x0u));
  /* 1202b23e mov dword ptr [0x12054184], 0 */
  w32((uint32_t)(0x12054184), (0x0u));
  /* 1202b248 mov dword ptr [0x12054168], 0x10 */
  w32((uint32_t)(0x12054168), (0x10u));
  /* 1202b252 mov eax, 1 */
  EAX = (0x1u);
L_1202b257:;
  /* 1202b257 pop ebp */
  EBP = (pop32());
  /* 1202b258 ret  */
  ESPCHK(0x1202b200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x1202b260 (85 bytes, 29 insns) */
void f_1202b260(void) {
  FTRACE(0x1202b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b260 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b261 mov ebp, esp */
  EBP = (ESP);
  /* 1202b263 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b266 mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202b26b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202b26e mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202b274 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b276 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202b279 mov edx, dword ptr [0x12054188] */
  EDX = (r32((uint32_t)(0x12054188)));
  /* 1202b27f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1202b282:;
  /* 1202b282 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b285 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b288 jae 0x1202b2af */
  if (!C.cf) goto L_1202b2af;
  /* 1202b28a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b28d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b290 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b293 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202b296 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b29d jae 0x1202b2a4 */
  if (!C.cf) goto L_1202b2a4;
  /* 1202b29f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b2a2 jmp 0x1202b2b1 */
  goto L_1202b2b1;
L_1202b2a4:;
  /* 1202b2a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b2a7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b2aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202b2ad jmp 0x1202b282 */
  goto L_1202b282;
L_1202b2af:;
  /* 1202b2af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202b2b1:;
  /* 1202b2b1 mov esp, ebp */
  ESP = (EBP);
  /* 1202b2b3 pop ebp */
  EBP = (pop32());
  /* 1202b2b4 ret  */
  ESPCHK(0x1202b260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c0 @ 0x1202b2c0 (95 bytes, 33 insns) */
void f_1202b2c0(void) {
  FTRACE(0x1202b2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1202b2c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b2c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b2c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b2cc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b2cf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202b2d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b2d5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1202b2d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202b2db mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b2e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b2e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b2e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202b2eb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202b2ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202b2ef jne 0x1202b311 */
  if (!C.zf) goto L_1202b311;
  /* 1202b2f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b2f4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1202b2f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202b2f9 jne 0x1202b311 */
  if (!C.zf) goto L_1202b311;
  /* 1202b2fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b2fe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202b304 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b306 je 0x1202b311 */
  if (C.zf) goto L_1202b311;
  /* 1202b308 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1202b30f jmp 0x1202b318 */
  goto L_1202b318;
L_1202b311:;
  /* 1202b311 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1202b318:;
  /* 1202b318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202b31b mov esp, ebp */
  ESP = (EBP);
  /* 1202b31d pop ebp */
  EBP = (pop32());
  /* 1202b31e ret  */
  ESPCHK(0x1202b2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x1202b320 (1485 bytes, 453 insns) */
void f_1202b320(void) {
  FTRACE(0x1202b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b321 mov ebp, esp */
  EBP = (ESP);
  /* 1202b323 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b329 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202b32c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1202b32f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b332 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b335 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b338 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202b33b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202b33e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1202b341 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202b344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b347 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202b34d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b350 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1202b357 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202b35a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202b35d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b360 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202b363 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b366 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202b368 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b36b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1202b36e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b371 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b374 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1202b377 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b37a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202b37c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1202b37f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b382 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1202b385 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202b388 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202b38b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1202b38e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b390 jne 0x1202b4b8 */
  if (!C.zf) goto L_1202b4b8;
  /* 1202b396 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202b399 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1202b39c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b39f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1202b3a2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b3a6 jbe 0x1202b3af */
  if ((C.cf||C.zf)) goto L_1202b3af;
  /* 1202b3a8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1202b3af:;
  /* 1202b3af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b3b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b3b5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202b3b8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b3bb jne 0x1202b491 */
  if (!C.zf) goto L_1202b491;
  /* 1202b3c1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b3c5 jae 0x1202b426 */
  if (!C.cf) goto L_1202b426;
  /* 1202b3c7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b3cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202b3cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b3d1 not eax */
  EAX = (~(EAX));
  /* 1202b3d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b3d6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b3d9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1202b3dd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b3df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b3e2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b3e5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1202b3e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b3ec add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b3ef mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1202b3f2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202b3f5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b3f8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b3fb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1202b3fe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b401 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b404 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202b408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202b40a jne 0x1202b424 */
  if (!C.zf) goto L_1202b424;
  /* 1202b40c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b411 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202b414 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b416 not eax */
  EAX = (~(EAX));
  /* 1202b418 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b41b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202b41d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202b41f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b422 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1202b424:;
  /* 1202b424 jmp 0x1202b491 */
  goto L_1202b491;
L_1202b426:;
  /* 1202b426 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202b429 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b42c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b431 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b433 not edx */
  EDX = (~(EDX));
  /* 1202b435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b438 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b43b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1202b442 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202b444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b447 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b44a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1202b451 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b454 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b457 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202b45a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202b45d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b460 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b463 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1202b466 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b469 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b46c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202b470 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b472 jne 0x1202b491 */
  if (!C.zf) goto L_1202b491;
  /* 1202b474 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202b477 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b47a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b47f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b481 not edx */
  EDX = (~(EDX));
  /* 1202b483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b486 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202b489 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b48e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1202b491:;
  /* 1202b491 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b494 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202b497 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b49a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202b49d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1202b4a0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b4a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202b4a6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202b4a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202b4ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202b4af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202b4b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b4b5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1202b4b8:;
  /* 1202b4b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202b4bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1202b4be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b4c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202b4c4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b4c8 jbe 0x1202b4d1 */
  if ((C.cf||C.zf)) goto L_1202b4d1;
  /* 1202b4ca mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1202b4d1:;
  /* 1202b4d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202b4d4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1202b4d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b4d9 jne 0x1202b635 */
  if (!C.zf) goto L_1202b635;
  /* 1202b4df mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b4e2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b4e5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1202b4e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202b4eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1202b4ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b4f1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1202b4f4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b4f8 jbe 0x1202b501 */
  if ((C.cf||C.zf)) goto L_1202b501;
  /* 1202b4fa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1202b501:;
  /* 1202b501 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202b504 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b507 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1202b50a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202b50d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1202b510 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b513 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1202b516 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b51a jbe 0x1202b523 */
  if ((C.cf||C.zf)) goto L_1202b523;
  /* 1202b51c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1202b523:;
  /* 1202b523 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202b526 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b529 je 0x1202b62f */
  if (C.zf) goto L_1202b62f;
  /* 1202b52f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b532 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b535 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202b538 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b53b jne 0x1202b611 */
  if (!C.zf) goto L_1202b611;
  /* 1202b541 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b545 jae 0x1202b5a6 */
  if (!C.cf) goto L_1202b5a6;
  /* 1202b547 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b54c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202b54f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b551 not edx */
  EDX = (~(EDX));
  /* 1202b553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b556 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b559 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1202b55d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202b55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b562 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b565 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1202b569 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b56c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b56f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202b572 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202b575 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b578 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b57b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1202b57e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b581 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b584 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202b588 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b58a jne 0x1202b5a4 */
  if (!C.zf) goto L_1202b5a4;
  /* 1202b58c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b591 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202b594 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b596 not edx */
  EDX = (~(EDX));
  /* 1202b598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b59b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202b59d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b5a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1202b5a4:;
  /* 1202b5a4 jmp 0x1202b611 */
  goto L_1202b611;
L_1202b5a6:;
  /* 1202b5a6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202b5a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b5ac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b5b1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b5b3 not eax */
  EAX = (~(EAX));
  /* 1202b5b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b5b8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b5bb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1202b5c2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b5c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b5c7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b5ca mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1202b5d1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b5d4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b5d7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1202b5da sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202b5dd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b5e0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b5e3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1202b5e6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b5e9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b5ec movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202b5f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202b5f2 jne 0x1202b611 */
  if (!C.zf) goto L_1202b611;
  /* 1202b5f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202b5f7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b5fa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b5ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b601 not eax */
  EAX = (~(EAX));
  /* 1202b603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b606 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202b609 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202b60b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b60e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1202b611:;
  /* 1202b611 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b614 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202b617 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b61a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202b61d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1202b620 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b623 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202b626 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b629 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202b62c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1202b62f:;
  /* 1202b62f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b632 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1202b635:;
  /* 1202b635 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202b638 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1202b63b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b63d jne 0x1202b64b */
  if (!C.zf) goto L_1202b64b;
  /* 1202b63f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202b642 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b645 je 0x1202b75b */
  if (C.zf) goto L_1202b75b;
L_1202b64b:;
  /* 1202b64b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202b64e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b651 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1202b654 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1202b657 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b65a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202b65d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202b660 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1202b663 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b666 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202b669 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1202b66c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202b66f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b672 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1202b675 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b678 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202b67b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b67e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1202b681 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b684 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b687 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202b68a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b68d jne 0x1202b75b */
  if (!C.zf) goto L_1202b75b;
  /* 1202b693 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b697 jae 0x1202b6f4 */
  if (!C.cf) goto L_1202b6f4;
  /* 1202b699 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b69c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b69f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202b6a3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b6a6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b6a9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202b6ac add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202b6af mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b6b2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b6b5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1202b6b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202b6ba jne 0x1202b6d2 */
  if (!C.zf) goto L_1202b6d2;
  /* 1202b6bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b6c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202b6c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b6c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202b6cb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b6cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b6d0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1202b6d2:;
  /* 1202b6d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b6d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202b6da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b6dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b6df mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b6e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1202b6e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b6e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b6eb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b6ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1202b6f2 jmp 0x1202b75b */
  goto L_1202b75b;
L_1202b6f4:;
  /* 1202b6f4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b6f7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b6fa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202b6fe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b701 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b704 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202b707 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202b70a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b70d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b710 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1202b713 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202b715 jne 0x1202b732 */
  if (!C.zf) goto L_1202b732;
  /* 1202b717 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202b71a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b71d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b722 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b727 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202b72a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b72c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b72f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1202b732:;
  /* 1202b732 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202b735 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b738 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202b73d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b73f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b742 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b745 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1202b74c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b74e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b751 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1202b754 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1202b75b:;
  /* 1202b75b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b75e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202b761 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1202b763 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202b766 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b769 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202b76c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1202b76f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b772 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202b774 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b777 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b77a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202b77c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202b77f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b782 jne 0x1202b8e9 */
  if (!C.zf) goto L_1202b8e9;
  /* 1202b788 cmp dword ptr [0x12054180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b78f je 0x1202b8d8 */
  if (C.zf) goto L_1202b8d8;
  /* 1202b795 mov eax, dword ptr [0x12054178] */
  EAX = (r32((uint32_t)(0x12054178)));
  /* 1202b79a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1202b79d mov ecx, dword ptr [0x12054180] */
  ECX = (r32((uint32_t)(0x12054180)));
  /* 1202b7a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202b7a6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b7a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1202b7ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1202b7b0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1202b7b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b7b8 push eax */
  push32((uint32_t)(EAX));
  /* 1202b7b9 call dword ptr [0x1205536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205536c))), 0x1202b7bfu);
  /* 1202b7bf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202b7c4 mov ecx, dword ptr [0x12054178] */
  ECX = (r32((uint32_t)(0x12054178)));
  /* 1202b7ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b7cc mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202b7d1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202b7d4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b7d6 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202b7dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202b7df mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202b7e4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202b7e7 mov edx, dword ptr [0x12054178] */
  EDX = (r32((uint32_t)(0x12054178)));
  /* 1202b7ed mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1202b7f8 mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202b7fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202b800 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1202b803 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202b806 mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202b80b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202b80e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1202b811 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202b817 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1202b81a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1202b81e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b820 jne 0x1202b836 */
  if (!C.zf) goto L_1202b836;
  /* 1202b822 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202b828 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202b82b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1202b82d mov ecx, dword ptr [0x12054180] */
  ECX = (r32((uint32_t)(0x12054180)));
  /* 1202b833 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1202b836:;
  /* 1202b836 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202b83c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b840 jne 0x1202b8d8 */
  if (!C.zf) goto L_1202b8d8;
  /* 1202b846 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1202b84b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b84d mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202b852 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1202b855 push ecx */
  push32((uint32_t)(ECX));
  /* 1202b856 call dword ptr [0x1205536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205536c))), 0x1202b85cu);
  /* 1202b85c mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202b862 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1202b865 push eax */
  push32((uint32_t)(EAX));
  /* 1202b866 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202b868 mov ecx, dword ptr [0x1205418c] */
  ECX = (r32((uint32_t)(0x1205418c)));
  /* 1202b86e push ecx */
  push32((uint32_t)(ECX));
  /* 1202b86f call dword ptr [0x12055370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055370))), 0x1202b875u);
  /* 1202b875 mov edx, dword ptr [0x12054184] */
  EDX = (r32((uint32_t)(0x12054184)));
  /* 1202b87b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202b87e mov eax, dword ptr [0x12054188] */
  EAX = (r32((uint32_t)(0x12054188)));
  /* 1202b883 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b885 mov ecx, dword ptr [0x12054180] */
  ECX = (r32((uint32_t)(0x12054180)));
  /* 1202b88b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b88e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b890 push eax */
  push32((uint32_t)(EAX));
  /* 1202b891 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202b897 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b89a push edx */
  push32((uint32_t)(EDX));
  /* 1202b89b mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202b8a0 push eax */
  push32((uint32_t)(EAX));
  /* 1202b8a1 call 0x1202ee50 */
  push32(0x1202b8a6u); f_1202ee50();
  /* 1202b8a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b8a9 mov ecx, dword ptr [0x12054184] */
  ECX = (r32((uint32_t)(0x12054184)));
  /* 1202b8af sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b8b2 mov dword ptr [0x12054184], ecx */
  w32((uint32_t)(0x12054184), (ECX));
  /* 1202b8b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b8bb cmp edx, dword ptr [0x12054180] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12054180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b8c1 jbe 0x1202b8cc */
  if ((C.cf||C.zf)) goto L_1202b8cc;
  /* 1202b8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b8c6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b8c9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1202b8cc:;
  /* 1202b8cc mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202b8d2 mov dword ptr [0x1205417c], ecx */
  w32((uint32_t)(0x1205417c), (ECX));
L_1202b8d8:;
  /* 1202b8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b8db mov dword ptr [0x12054180], edx */
  w32((uint32_t)(0x12054180), (EDX));
  /* 1202b8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202b8e4 mov dword ptr [0x12054178], eax */
  w32((uint32_t)(0x12054178), (EAX));
L_1202b8e9:;
  /* 1202b8e9 mov esp, ebp */
  ESP = (EBP);
  /* 1202b8eb pop ebp */
  EBP = (pop32());
  /* 1202b8ec ret  */
  ESPCHK(0x1202b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x1202b8f0 (1334 bytes, 427 insns) */
void f_1202b8f0(void) {
  FTRACE(0x1202b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1202b8f3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b8f6 push esi */
  push32((uint32_t)(ESI));
  /* 1202b8f7 mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202b8fc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202b8ff mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202b905 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b907 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1202b90a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202b90d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b910 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1202b913 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1202b916 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202b919 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1202b91c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b91f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202b922 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b926 jge 0x1202b93c */
  if ((C.sf==C.of)) goto L_1202b93c;
  /* 1202b928 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1202b92b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202b92e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202b930 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1202b933 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1202b93a jmp 0x1202b951 */
  goto L_1202b951;
L_1202b93c:;
  /* 1202b93c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1202b943 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202b946 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202b949 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202b94c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202b94e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1202b951:;
  /* 1202b951 mov ecx, dword ptr [0x1205417c] */
  ECX = (r32((uint32_t)(0x1205417c)));
  /* 1202b957 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1202b95a:;
  /* 1202b95a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b95d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b960 jae 0x1202b986 */
  if (!C.cf) goto L_1202b986;
  /* 1202b962 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b965 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202b968 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1202b96a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b96d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b970 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1202b973 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202b975 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202b977 je 0x1202b97b */
  if (C.zf) goto L_1202b97b;
  /* 1202b979 jmp 0x1202b986 */
  goto L_1202b986;
L_1202b97b:;
  /* 1202b97b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b97e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b981 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1202b984 jmp 0x1202b95a */
  goto L_1202b95a;
L_1202b986:;
  /* 1202b986 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b989 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b98c jne 0x1202ba6d */
  if (!C.zf) goto L_1202ba6d;
  /* 1202b992 mov eax, dword ptr [0x12054188] */
  EAX = (r32((uint32_t)(0x12054188)));
  /* 1202b997 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1202b99a:;
  /* 1202b99a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b99d cmp ecx, dword ptr [0x1205417c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1205417c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b9a3 jae 0x1202b9c9 */
  if (!C.cf) goto L_1202b9c9;
  /* 1202b9a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202b9ab and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1202b9ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9b0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202b9b3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1202b9b6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202b9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202b9ba je 0x1202b9be */
  if (C.zf) goto L_1202b9be;
  /* 1202b9bc jmp 0x1202b9c9 */
  goto L_1202b9c9;
L_1202b9be:;
  /* 1202b9be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9c1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b9c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202b9c7 jmp 0x1202b99a */
  goto L_1202b99a;
L_1202b9c9:;
  /* 1202b9c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9cc cmp ecx, dword ptr [0x1205417c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1205417c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b9d2 jne 0x1202ba6d */
  if (!C.zf) goto L_1202ba6d;
L_1202b9d8:;
  /* 1202b9d8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9db cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b9de jae 0x1202b9f6 */
  if (!C.cf) goto L_1202b9f6;
  /* 1202b9e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9e3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b9e7 je 0x1202b9eb */
  if (C.zf) goto L_1202b9eb;
  /* 1202b9e9 jmp 0x1202b9f6 */
  goto L_1202b9f6;
L_1202b9eb:;
  /* 1202b9eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202b9f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1202b9f4 jmp 0x1202b9d8 */
  goto L_1202b9d8;
L_1202b9f6:;
  /* 1202b9f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202b9f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202b9fc jne 0x1202ba47 */
  if (!C.zf) goto L_1202ba47;
  /* 1202b9fe mov eax, dword ptr [0x12054188] */
  EAX = (r32((uint32_t)(0x12054188)));
  /* 1202ba03 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1202ba06:;
  /* 1202ba06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba09 cmp ecx, dword ptr [0x1205417c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1205417c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ba0f jae 0x1202ba27 */
  if (!C.cf) goto L_1202ba27;
  /* 1202ba11 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba14 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ba18 je 0x1202ba1c */
  if (C.zf) goto L_1202ba1c;
  /* 1202ba1a jmp 0x1202ba27 */
  goto L_1202ba27;
L_1202ba1c:;
  /* 1202ba1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba1f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ba22 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202ba25 jmp 0x1202ba06 */
  goto L_1202ba06;
L_1202ba27:;
  /* 1202ba27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba2a cmp ecx, dword ptr [0x1205417c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1205417c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ba30 jne 0x1202ba47 */
  if (!C.zf) goto L_1202ba47;
  /* 1202ba32 call 0x1202be30 */
  push32(0x1202ba37u); f_1202be30();
  /* 1202ba37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202ba3a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ba3e jne 0x1202ba47 */
  if (!C.zf) goto L_1202ba47;
  /* 1202ba40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ba42 jmp 0x1202be21 */
  goto L_1202be21;
L_1202ba47:;
  /* 1202ba47 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba4a push edx */
  push32((uint32_t)(EDX));
  /* 1202ba4b call 0x1202bf40 */
  push32(0x1202ba50u); f_1202bf40();
  /* 1202ba50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ba53 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba56 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1202ba59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1202ba5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202ba61 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ba64 jne 0x1202ba6d */
  if (!C.zf) goto L_1202ba6d;
  /* 1202ba66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ba68 jmp 0x1202be21 */
  goto L_1202be21;
L_1202ba6d:;
  /* 1202ba6d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba70 mov dword ptr [0x1205417c], edx */
  w32((uint32_t)(0x1205417c), (EDX));
  /* 1202ba76 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ba79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202ba7c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1202ba7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202ba82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202ba84 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1202ba87 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ba8b je 0x1202bab0 */
  if (C.zf) goto L_1202bab0;
  /* 1202ba8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202ba90 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202ba93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202ba96 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1202ba9a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202ba9d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202baa0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1202baa3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1202baaa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1202baac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202baae jne 0x1202bae5 */
  if (!C.zf) goto L_1202bae5;
L_1202bab0:;
  /* 1202bab0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1202bab7:;
  /* 1202bab7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202baba mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202babd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202bac0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1202bac4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bac7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202baca mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1202bacd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1202bad4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1202bad6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202bad8 jne 0x1202bae5 */
  if (!C.zf) goto L_1202bae5;
  /* 1202bada mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202badd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bae0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1202bae3 jmp 0x1202bab7 */
  goto L_1202bab7;
L_1202bae5:;
  /* 1202bae5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bae8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202baee mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202baf1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1202baf8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202bafb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1202bb02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bb05 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bb08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202bb0b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1202bb0f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1202bb12 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bb16 jne 0x1202bb32 */
  if (!C.zf) goto L_1202bb32;
  /* 1202bb18 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1202bb1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bb22 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bb25 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202bb28 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1202bb2f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1202bb32:;
  /* 1202bb32 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bb36 jl 0x1202bb4b */
  if ((C.sf!=C.of)) goto L_1202bb4b;
  /* 1202bb38 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202bb3b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1202bb3d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1202bb40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bb43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bb46 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1202bb49 jmp 0x1202bb32 */
  goto L_1202bb32;
L_1202bb4b:;
  /* 1202bb4b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bb51 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1202bb55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1202bb58 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bb5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202bb5d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bb60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202bb63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202bb66 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1202bb69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bb6c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1202bb6f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bb73 jle 0x1202bb7c */
  if ((C.zf||C.sf!=C.of)) goto L_1202bb7c;
  /* 1202bb75 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1202bb7c:;
  /* 1202bb7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202bb7f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bb82 je 0x1202bda0 */
  if (C.zf) goto L_1202bda0;
  /* 1202bb88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bb8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bb8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202bb91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bb94 jne 0x1202bc6a */
  if (!C.zf) goto L_1202bc6a;
  /* 1202bb9a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bb9e jge 0x1202bbff */
  if ((C.sf==C.of)) goto L_1202bbff;
  /* 1202bba0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202bba5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bba8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202bbaa not eax */
  EAX = (~(EAX));
  /* 1202bbac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bbaf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bbb2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1202bbb6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202bbb8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bbbb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bbbe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1202bbc2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bbc5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bbc8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1202bbcb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202bbce mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bbd1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bbd4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1202bbd7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bbda add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bbdd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202bbe1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202bbe3 jne 0x1202bbfd */
  if (!C.zf) goto L_1202bbfd;
  /* 1202bbe5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202bbea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bbed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202bbef not eax */
  EAX = (~(EAX));
  /* 1202bbf1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bbf4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202bbf6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202bbf8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bbfb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1202bbfd:;
  /* 1202bbfd jmp 0x1202bc6a */
  goto L_1202bc6a;
L_1202bbff:;
  /* 1202bbff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bc02 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bc05 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202bc0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202bc0c not edx */
  EDX = (~(EDX));
  /* 1202bc0e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bc11 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bc14 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1202bc1b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202bc1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bc20 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bc23 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1202bc2a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bc2d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bc30 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202bc33 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202bc36 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bc39 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bc3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1202bc3f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bc42 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bc45 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202bc49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202bc4b jne 0x1202bc6a */
  if (!C.zf) goto L_1202bc6a;
  /* 1202bc4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bc50 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bc53 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202bc58 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202bc5a not edx */
  EDX = (~(EDX));
  /* 1202bc5c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bc5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202bc62 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202bc64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bc67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1202bc6a:;
  /* 1202bc6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bc6d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202bc70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bc73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202bc76 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1202bc79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bc7c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202bc7f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bc82 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202bc85 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202bc88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bc8c je 0x1202bda0 */
  if (C.zf) goto L_1202bda0;
  /* 1202bc92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202bc95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bc98 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1202bc9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202bc9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bca1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202bca4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202bca7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1202bcaa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bcad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202bcb0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1202bcb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202bcb6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bcb9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1202bcbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bcbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202bcc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bcc5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1202bcc8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bccb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bcce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202bcd1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bcd4 jne 0x1202bda0 */
  if (!C.zf) goto L_1202bda0;
  /* 1202bcda cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bcde jge 0x1202bd3a */
  if ((C.sf==C.of)) goto L_1202bd3a;
  /* 1202bce0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bce3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bce6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202bcea mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bced add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bcf0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1202bcf3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202bcf5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bcf8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bcfb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1202bcfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202bd00 jne 0x1202bd18 */
  if (!C.zf) goto L_1202bd18;
  /* 1202bd02 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202bd07 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202bd0a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202bd0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bd0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202bd11 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202bd13 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bd16 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1202bd18:;
  /* 1202bd18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202bd1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202bd20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202bd22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bd25 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd28 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1202bd2c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202bd2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bd31 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd34 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1202bd38 jmp 0x1202bda0 */
  goto L_1202bda0;
L_1202bd3a:;
  /* 1202bd3a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd3d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bd40 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202bd44 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd47 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bd4a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1202bd4d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202bd4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd52 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bd55 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1202bd58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202bd5a jne 0x1202bd77 */
  if (!C.zf) goto L_1202bd77;
  /* 1202bd5c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202bd5f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bd62 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202bd67 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202bd69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bd6c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202bd6f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202bd71 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bd74 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1202bd77:;
  /* 1202bd77 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202bd7a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bd7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202bd82 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202bd84 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bd87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd8a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1202bd91 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202bd93 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202bd96 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202bd99 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1202bda0:;
  /* 1202bda0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bda4 je 0x1202bdba */
  if (C.zf) goto L_1202bdba;
  /* 1202bda6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bda9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202bdac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202bdae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bdb1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bdb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202bdb7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1202bdba:;
  /* 1202bdba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bdbd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bdc0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1202bdc3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202bdc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bdc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bdcc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1202bdce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202bdd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bdd4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bdd7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bdda mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1202bddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bde0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202bde2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bde5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202bde7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bdea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bded mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1202bdef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202bdf1 jne 0x1202be13 */
  if (!C.zf) goto L_1202be13;
  /* 1202bdf3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bdf6 cmp eax, dword ptr [0x12054180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12054180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bdfc jne 0x1202be13 */
  if (!C.zf) goto L_1202be13;
  /* 1202bdfe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202be01 cmp ecx, dword ptr [0x12054178] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12054178))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202be07 jne 0x1202be13 */
  if (!C.zf) goto L_1202be13;
  /* 1202be09 mov dword ptr [0x12054180], 0 */
  w32((uint32_t)(0x12054180), (0x0u));
L_1202be13:;
  /* 1202be13 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1202be16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202be19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1202be1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202be1e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1202be21:;
  /* 1202be21 pop esi */
  ESI = (pop32());
  /* 1202be22 mov esp, ebp */
  ESP = (EBP);
  /* 1202be24 pop ebp */
  EBP = (pop32());
  /* 1202be25 ret  */
  ESPCHK(0x1202b8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be30 @ 0x1202be30 (271 bytes, 78 insns) */
void f_1202be30(void) {
  FTRACE(0x1202be30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202be30 push ebp */
  push32((uint32_t)(EBP));
  /* 1202be31 mov ebp, esp */
  EBP = (ESP);
  /* 1202be33 push ecx */
  push32((uint32_t)(ECX));
  /* 1202be34 mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202be39 cmp eax, dword ptr [0x12054168] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12054168))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202be3f jne 0x1202be8b */
  if (!C.zf) goto L_1202be8b;
  /* 1202be41 mov ecx, dword ptr [0x12054168] */
  ECX = (r32((uint32_t)(0x12054168)));
  /* 1202be47 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202be4a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202be4d push ecx */
  push32((uint32_t)(ECX));
  /* 1202be4e mov edx, dword ptr [0x12054188] */
  EDX = (r32((uint32_t)(0x12054188)));
  /* 1202be54 push edx */
  push32((uint32_t)(EDX));
  /* 1202be55 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202be57 mov eax, dword ptr [0x1205418c] */
  EAX = (r32((uint32_t)(0x1205418c)));
  /* 1202be5c push eax */
  push32((uint32_t)(EAX));
  /* 1202be5d call dword ptr [0x1205534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205534c))), 0x1202be63u);
  /* 1202be63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202be66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202be6a jne 0x1202be73 */
  if (!C.zf) goto L_1202be73;
  /* 1202be6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202be6e jmp 0x1202bf3b */
  goto L_1202bf3b;
L_1202be73:;
  /* 1202be73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202be76 mov dword ptr [0x12054188], ecx */
  w32((uint32_t)(0x12054188), (ECX));
  /* 1202be7c mov edx, dword ptr [0x12054168] */
  EDX = (r32((uint32_t)(0x12054168)));
  /* 1202be82 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202be85 mov dword ptr [0x12054168], edx */
  w32((uint32_t)(0x12054168), (EDX));
L_1202be8b:;
  /* 1202be8b mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202be90 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202be93 mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202be99 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202be9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202be9e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1202bea3 push 8 */
  push32((uint32_t)(0x8u));
  /* 1202bea5 mov edx, dword ptr [0x1205418c] */
  EDX = (r32((uint32_t)(0x1205418c)));
  /* 1202beab push edx */
  push32((uint32_t)(EDX));
  /* 1202beac call dword ptr [0x12055350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055350))), 0x1202beb2u);
  /* 1202beb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202beb5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1202beb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bebb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bebf jne 0x1202bec5 */
  if (!C.zf) goto L_1202bec5;
  /* 1202bec1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202bec3 jmp 0x1202bf3b */
  goto L_1202bf3b;
L_1202bec5:;
  /* 1202bec5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1202bec7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1202becc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1202bed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202bed3 call dword ptr [0x12055348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055348))), 0x1202bed9u);
  /* 1202bed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bedc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1202bedf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bee2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bee6 jne 0x1202bf02 */
  if (!C.zf) goto L_1202bf02;
  /* 1202bee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202beeb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202beee push ecx */
  push32((uint32_t)(ECX));
  /* 1202beef push 0 */
  push32((uint32_t)(0x0u));
  /* 1202bef1 mov edx, dword ptr [0x1205418c] */
  EDX = (r32((uint32_t)(0x1205418c)));
  /* 1202bef7 push edx */
  push32((uint32_t)(EDX));
  /* 1202bef8 call dword ptr [0x12055370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055370))), 0x1202befeu);
  /* 1202befe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202bf00 jmp 0x1202bf3b */
  goto L_1202bf3b;
L_1202bf02:;
  /* 1202bf02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bf05 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202bf0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bf0e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1202bf15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bf18 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1202bf1f mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202bf24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bf27 mov dword ptr [0x12054184], eax */
  w32((uint32_t)(0x12054184), (EAX));
  /* 1202bf2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202bf2f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1202bf32 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1202bf38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1202bf3b:;
  /* 1202bf3b mov esp, ebp */
  ESP = (EBP);
  /* 1202bf3d pop ebp */
  EBP = (pop32());
  /* 1202bf3e ret  */
  ESPCHK(0x1202be30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf40 @ 0x1202bf40 (494 bytes, 149 insns) */
void f_1202bf40(void) {
  FTRACE(0x1202bf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202bf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1202bf41 mov ebp, esp */
  EBP = (ESP);
  /* 1202bf43 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202bf46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202bf49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202bf4c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1202bf4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202bf52 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202bf55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202bf58 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1202bf5f:;
  /* 1202bf5f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bf63 jl 0x1202bf78 */
  if ((C.sf!=C.of)) goto L_1202bf78;
  /* 1202bf65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202bf68 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1202bf6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202bf6d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202bf70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bf73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1202bf76 jmp 0x1202bf5f */
  goto L_1202bf5f;
L_1202bf78:;
  /* 1202bf78 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202bf7b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202bf81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202bf84 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1202bf8b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1202bf8e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1202bf95 jmp 0x1202bfa0 */
  goto L_1202bfa0;
L_1202bf97:;
  /* 1202bf97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bf9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bf9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1202bfa0:;
  /* 1202bfa0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202bfa4 jge 0x1202bfc6 */
  if ((C.sf==C.of)) goto L_1202bfc6;
  /* 1202bfa6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202bfa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202bfac lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1202bfaf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202bfb2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bfb5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bfb8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1202bfbb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bfbe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202bfc1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1202bfc4 jmp 0x1202bf97 */
  goto L_1202bf97;
L_1202bfc6:;
  /* 1202bfc6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202bfc9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1202bfcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202bfcf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1202bfd2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202bfd4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1202bfd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1202bfd9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1202bfde push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1202bfe3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bfe6 push edx */
  push32((uint32_t)(EDX));
  /* 1202bfe7 call dword ptr [0x12055348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055348))), 0x1202bfedu);
  /* 1202bfed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202bfef jne 0x1202bff9 */
  if (!C.zf) goto L_1202bff9;
  /* 1202bff1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202bff4 jmp 0x1202c12a */
  goto L_1202c12a;
L_1202bff9:;
  /* 1202bff9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202bffc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c001 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1202c004 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c007 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202c00a jmp 0x1202c018 */
  goto L_1202c018;
L_1202c00c:;
  /* 1202c00c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c00f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c015 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202c018:;
  /* 1202c018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c01b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c01e ja 0x1202c07d */
  if ((!C.cf&&!C.zf)) goto L_1202c07d;
  /* 1202c020 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c023 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1202c02a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c02d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1202c037 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c03a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c03d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202c040 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c043 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1202c049 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c04c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c052 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c055 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1202c058 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c05b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c061 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c064 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202c067 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c06a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c06f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1202c072 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202c075 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1202c07b jmp 0x1202c00c */
  goto L_1202c00c;
L_1202c07d:;
  /* 1202c07d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202c080 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c086 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1202c089 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c08c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c08f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c092 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1202c095 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c098 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202c09b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202c09e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c0a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c0a4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1202c0a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c0aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c0ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c0b0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1202c0b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c0b6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202c0b9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202c0bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c0bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c0c2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1202c0c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c0c8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c0cb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1202c0d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c0d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c0d9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1202c0e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c0e7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1202c0eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c0ee mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1202c0f1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202c0f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c0f7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1202c0fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202c0fc jne 0x1202c10d */
  if (!C.zf) goto L_1202c10d;
  /* 1202c0fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c101 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c104 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1202c107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c10a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1202c10d:;
  /* 1202c10d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c112 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c115 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c117 not edx */
  EDX = (~(EDX));
  /* 1202c119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c11c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202c11f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c124 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202c127 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1202c12a:;
  /* 1202c12a mov esp, ebp */
  ESP = (EBP);
  /* 1202c12c pop ebp */
  EBP = (pop32());
  /* 1202c12d ret  */
  ESPCHK(0x1202bf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x1202c130 (1515 bytes, 489 insns) */
void f_1202c130(void) {
  FTRACE(0x1202c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202c130 push ebp */
  push32((uint32_t)(EBP));
  /* 1202c131 mov ebp, esp */
  EBP = (ESP);
  /* 1202c133 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c136 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202c139 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c13c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1202c13e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1202c141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c144 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1202c147 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1202c14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c14d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202c150 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c153 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1202c156 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202c159 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1202c15c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202c15f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c162 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202c168 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c16b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1202c172 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1202c175 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202c178 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c17b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1202c17e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c181 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202c183 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c186 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1202c189 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c18c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c18f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1202c192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c195 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202c197 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1202c19a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c19d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c1a0 jle 0x1202c456 */
  if ((C.zf||C.sf!=C.of)) goto L_1202c456;
  /* 1202c1a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c1a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1202c1ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202c1ae jne 0x1202c1bb */
  if (!C.zf) goto L_1202c1bb;
  /* 1202c1b0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c1b3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c1b6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c1b9 jle 0x1202c1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1202c1c2;
L_1202c1bb:;
  /* 1202c1bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202c1bd jmp 0x1202c717 */
  goto L_1202c717;
L_1202c1c2:;
  /* 1202c1c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c1c5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1202c1c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c1cb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202c1ce cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c1d2 jbe 0x1202c1db */
  if ((C.cf||C.zf)) goto L_1202c1db;
  /* 1202c1d4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1202c1db:;
  /* 1202c1db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c1de mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c1e1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c1e4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c1e7 jne 0x1202c2bd */
  if (!C.zf) goto L_1202c2bd;
  /* 1202c1ed cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c1f1 jae 0x1202c252 */
  if (!C.cf) goto L_1202c252;
  /* 1202c1f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c1f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c1fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c1fd not edx */
  EDX = (~(EDX));
  /* 1202c1ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c202 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c205 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1202c209 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202c20b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c20e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c211 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1202c215 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c218 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c21b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202c21e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202c221 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c224 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c227 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1202c22a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c22d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c230 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202c234 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202c236 jne 0x1202c250 */
  if (!C.zf) goto L_1202c250;
  /* 1202c238 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c23d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c240 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c242 not edx */
  EDX = (~(EDX));
  /* 1202c244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c247 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202c249 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c24b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c24e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1202c250:;
  /* 1202c250 jmp 0x1202c2bd */
  goto L_1202c2bd;
L_1202c252:;
  /* 1202c252 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c255 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c258 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c25d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c25f not eax */
  EAX = (~(EAX));
  /* 1202c261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c264 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c267 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1202c26e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c276 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1202c27d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c280 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c283 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1202c286 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202c289 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c28c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c28f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1202c292 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c295 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c298 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202c29c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202c29e jne 0x1202c2bd */
  if (!C.zf) goto L_1202c2bd;
  /* 1202c2a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c2a3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c2a6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c2ab shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c2ad not eax */
  EAX = (~(EAX));
  /* 1202c2af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c2b2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c2b5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202c2b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c2ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1202c2bd:;
  /* 1202c2bd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c2c0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202c2c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c2c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202c2c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1202c2cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c2cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202c2d2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c2d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202c2d8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1202c2db mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c2de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c2e1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c2e4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202c2e7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c2eb jle 0x1202c437 */
  if ((C.zf||C.sf!=C.of)) goto L_1202c437;
  /* 1202c2f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c2f4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c2f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1202c2fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c2fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1202c300 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c303 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1202c306 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c30a jbe 0x1202c313 */
  if ((C.cf||C.zf)) goto L_1202c313;
  /* 1202c30c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1202c313:;
  /* 1202c313 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c316 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202c319 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1202c31c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1202c31f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c322 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c325 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c328 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1202c32b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c32e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c331 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1202c334 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c337 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c33a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1202c33d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c340 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c343 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c346 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1202c349 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c34c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c34f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c352 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c355 jne 0x1202c423 */
  if (!C.zf) goto L_1202c423;
  /* 1202c35b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c35f jae 0x1202c3bc */
  if (!C.cf) goto L_1202c3bc;
  /* 1202c361 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c364 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c367 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202c36b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c36e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c371 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202c374 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202c377 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c37a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c37d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1202c380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202c382 jne 0x1202c39a */
  if (!C.zf) goto L_1202c39a;
  /* 1202c384 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c389 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c38c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c38e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c391 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202c393 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c398 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1202c39a:;
  /* 1202c39a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c39f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c3a2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c3a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c3a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c3aa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1202c3ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c3b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c3b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c3b6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1202c3ba jmp 0x1202c423 */
  goto L_1202c423;
L_1202c3bc:;
  /* 1202c3bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c3bf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c3c2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202c3c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c3c9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c3cc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202c3cf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202c3d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c3d5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c3d8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1202c3db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202c3dd jne 0x1202c3fa */
  if (!C.zf) goto L_1202c3fa;
  /* 1202c3df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c3e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c3e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c3ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c3ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c3ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202c3f2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c3f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c3f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1202c3fa:;
  /* 1202c3fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c3fd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c400 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c405 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c407 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c40a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c40d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1202c414 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c416 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c419 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c41c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1202c423:;
  /* 1202c423 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c426 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c429 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1202c42b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c42e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c431 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c434 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1202c437:;
  /* 1202c437 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c43a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c43d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c440 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1202c442 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c448 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c44b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c44e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1202c451 jmp 0x1202c712 */
  goto L_1202c712;
L_1202c456:;
  /* 1202c456 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c459 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c45c jge 0x1202c712 */
  if ((C.sf==C.of)) goto L_1202c712;
  /* 1202c462 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c468 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c46b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1202c46d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202c470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c473 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c476 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c479 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1202c47c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c47f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c482 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1202c485 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c488 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c48b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202c48e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c491 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1202c494 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c497 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1202c49a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c49e jbe 0x1202c4a7 */
  if ((C.cf||C.zf)) goto L_1202c4a7;
  /* 1202c4a0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1202c4a7:;
  /* 1202c4a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c4aa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1202c4ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202c4af jne 0x1202c5f0 */
  if (!C.zf) goto L_1202c5f0;
  /* 1202c4b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202c4b8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1202c4bb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c4be mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202c4c1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c4c5 jbe 0x1202c4ce */
  if ((C.cf||C.zf)) goto L_1202c4ce;
  /* 1202c4c7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1202c4ce:;
  /* 1202c4ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c4d1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c4d4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c4d7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c4da jne 0x1202c5b0 */
  if (!C.zf) goto L_1202c5b0;
  /* 1202c4e0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c4e4 jae 0x1202c545 */
  if (!C.cf) goto L_1202c545;
  /* 1202c4e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c4eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c4ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c4f0 not edx */
  EDX = (~(EDX));
  /* 1202c4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c4f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c4f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1202c4fc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202c4fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c501 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c504 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1202c508 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c50b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c50e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1202c511 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202c514 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c517 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c51a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1202c51d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c520 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c523 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202c527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202c529 jne 0x1202c543 */
  if (!C.zf) goto L_1202c543;
  /* 1202c52b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c530 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c533 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c535 not edx */
  EDX = (~(EDX));
  /* 1202c537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c53a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202c53c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c53e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c541 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1202c543:;
  /* 1202c543 jmp 0x1202c5b0 */
  goto L_1202c5b0;
L_1202c545:;
  /* 1202c545 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c548 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c54b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c550 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c552 not eax */
  EAX = (~(EAX));
  /* 1202c554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c557 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c55a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1202c561 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c566 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c569 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1202c570 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c573 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c576 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1202c579 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202c57c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c57f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c582 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1202c585 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c588 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c58b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1202c58f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202c591 jne 0x1202c5b0 */
  if (!C.zf) goto L_1202c5b0;
  /* 1202c593 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202c596 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c599 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c59e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c5a0 not eax */
  EAX = (~(EAX));
  /* 1202c5a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c5a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c5a8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202c5aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c5ad mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1202c5b0:;
  /* 1202c5b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c5b3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202c5b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c5b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202c5bc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1202c5bf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c5c2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202c5c5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202c5c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202c5cb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1202c5ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c5d1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c5d4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202c5d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c5da sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1202c5dd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c5e0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1202c5e3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c5e7 jbe 0x1202c5f0 */
  if ((C.cf||C.zf)) goto L_1202c5f0;
  /* 1202c5e9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1202c5f0:;
  /* 1202c5f0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202c5f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202c5f6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1202c5f9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1202c5fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c5ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c602 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202c605 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1202c608 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c60b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c60e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1202c611 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202c614 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c617 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1202c61a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c61d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202c620 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c623 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1202c626 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c629 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c62c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202c62f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c632 jne 0x1202c6fe */
  if (!C.zf) goto L_1202c6fe;
  /* 1202c638 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c63c jae 0x1202c698 */
  if (!C.cf) goto L_1202c698;
  /* 1202c63e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c641 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c644 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202c648 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c64b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c64e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1202c651 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202c653 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c656 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c659 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1202c65c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202c65e jne 0x1202c676 */
  if (!C.zf) goto L_1202c676;
  /* 1202c660 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c665 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202c668 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c66a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c66d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202c66f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202c671 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c674 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1202c676:;
  /* 1202c676 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c67b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202c67e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c683 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c686 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1202c68a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202c68c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c68f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c692 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1202c696 jmp 0x1202c6fe */
  goto L_1202c6fe;
L_1202c698:;
  /* 1202c698 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c69b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c69e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1202c6a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c6a5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c6a8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1202c6ab add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202c6ad mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c6b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c6b3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1202c6b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202c6b8 jne 0x1202c6d5 */
  if (!C.zf) goto L_1202c6d5;
  /* 1202c6ba mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202c6bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c6c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1202c6c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1202c6c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c6ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202c6cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1202c6cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202c6d2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1202c6d5:;
  /* 1202c6d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202c6d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c6db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c6e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c6e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c6e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c6e8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1202c6ef or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202c6f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c6f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202c6f7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1202c6fe:;
  /* 1202c6fe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c701 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c704 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202c706 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202c709 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c70c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202c70f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1202c712:;
  /* 1202c712 mov eax, 1 */
  EAX = (0x1u);
L_1202c717:;
  /* 1202c717 mov esp, ebp */
  ESP = (EBP);
  /* 1202c719 pop ebp */
  EBP = (pop32());
  /* 1202c71a ret  */
  ESPCHK(0x1202c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c720 @ 0x1202c720 (304 bytes, 79 insns) */
void f_1202c720(void) {
  FTRACE(0x1202c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202c720 push ebp */
  push32((uint32_t)(EBP));
  /* 1202c721 mov ebp, esp */
  EBP = (ESP);
  /* 1202c723 push ecx */
  push32((uint32_t)(ECX));
  /* 1202c724 cmp dword ptr [0x12054180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c72b je 0x1202c84c */
  if (C.zf) goto L_1202c84c;
  /* 1202c731 mov eax, dword ptr [0x12054178] */
  EAX = (r32((uint32_t)(0x12054178)));
  /* 1202c736 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1202c739 mov ecx, dword ptr [0x12054180] */
  ECX = (r32((uint32_t)(0x12054180)));
  /* 1202c73f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202c742 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c744 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202c747 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1202c74c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1202c751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202c754 push eax */
  push32((uint32_t)(EAX));
  /* 1202c755 call dword ptr [0x1205536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205536c))), 0x1202c75bu);
  /* 1202c75b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202c760 mov ecx, dword ptr [0x12054178] */
  ECX = (r32((uint32_t)(0x12054178)));
  /* 1202c766 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202c768 mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202c76d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202c770 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1202c772 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202c778 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202c77b mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202c780 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202c783 mov edx, dword ptr [0x12054178] */
  EDX = (r32((uint32_t)(0x12054178)));
  /* 1202c789 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1202c794 mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202c799 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202c79c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1202c79f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1202c7a2 mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202c7a7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202c7aa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1202c7ad mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202c7b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1202c7b6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1202c7ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202c7bc jne 0x1202c7d2 */
  if (!C.zf) goto L_1202c7d2;
  /* 1202c7be mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202c7c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202c7c7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1202c7c9 mov ecx, dword ptr [0x12054180] */
  ECX = (r32((uint32_t)(0x12054180)));
  /* 1202c7cf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1202c7d2:;
  /* 1202c7d2 mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202c7d8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c7dc jne 0x1202c842 */
  if (!C.zf) goto L_1202c842;
  /* 1202c7de cmp dword ptr [0x12054184], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12054184))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c7e5 jle 0x1202c842 */
  if ((C.zf||C.sf!=C.of)) goto L_1202c842;
  /* 1202c7e7 mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202c7ec mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1202c7ef push ecx */
  push32((uint32_t)(ECX));
  /* 1202c7f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202c7f2 mov edx, dword ptr [0x1205418c] */
  EDX = (r32((uint32_t)(0x1205418c)));
  /* 1202c7f8 push edx */
  push32((uint32_t)(EDX));
  /* 1202c7f9 call dword ptr [0x12055370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055370))), 0x1202c7ffu);
  /* 1202c7ff mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202c804 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202c807 mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202c80d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c80f mov edx, dword ptr [0x12054180] */
  EDX = (r32((uint32_t)(0x12054180)));
  /* 1202c815 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c818 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c81a push ecx */
  push32((uint32_t)(ECX));
  /* 1202c81b mov eax, dword ptr [0x12054180] */
  EAX = (r32((uint32_t)(0x12054180)));
  /* 1202c820 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c823 push eax */
  push32((uint32_t)(EAX));
  /* 1202c824 mov ecx, dword ptr [0x12054180] */
  ECX = (r32((uint32_t)(0x12054180)));
  /* 1202c82a push ecx */
  push32((uint32_t)(ECX));
  /* 1202c82b call 0x1202ee50 */
  push32(0x1202c830u); f_1202ee50();
  /* 1202c830 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c833 mov edx, dword ptr [0x12054184] */
  EDX = (r32((uint32_t)(0x12054184)));
  /* 1202c839 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c83c mov dword ptr [0x12054184], edx */
  w32((uint32_t)(0x12054184), (EDX));
L_1202c842:;
  /* 1202c842 mov dword ptr [0x12054180], 0 */
  w32((uint32_t)(0x12054180), (0x0u));
L_1202c84c:;
  /* 1202c84c mov esp, ebp */
  ESP = (EBP);
  /* 1202c84e pop ebp */
  EBP = (pop32());
  /* 1202c84f ret  */
  ESPCHK(0x1202c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x1202c850 (1565 bytes, 343 insns) */
void f_1202c850(void) {
  FTRACE(0x1202c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202c850 push ebp */
  push32((uint32_t)(EBP));
  /* 1202c851 mov ebp, esp */
  EBP = (ESP);
  /* 1202c853 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202c859 mov eax, dword ptr [0x12054184] */
  EAX = (r32((uint32_t)(0x12054184)));
  /* 1202c85e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202c861 push eax */
  push32((uint32_t)(EAX));
  /* 1202c862 mov ecx, dword ptr [0x12054188] */
  ECX = (r32((uint32_t)(0x12054188)));
  /* 1202c868 push ecx */
  push32((uint32_t)(ECX));
  /* 1202c869 call dword ptr [0x12055398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055398))), 0x1202c86fu);
  /* 1202c86f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202c871 je 0x1202c87b */
  if (C.zf) goto L_1202c87b;
  /* 1202c873 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202c876 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202c87b:;
  /* 1202c87b mov edx, dword ptr [0x12054188] */
  EDX = (r32((uint32_t)(0x12054188)));
  /* 1202c881 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1202c887 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1202c891 jmp 0x1202c8a2 */
  goto L_1202c8a2;
L_1202c893:;
  /* 1202c893 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1202c899 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c89c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1202c8a2:;
  /* 1202c8a2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1202c8a8 cmp ecx, dword ptr [0x12054184] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12054184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c8ae jge 0x1202ce67 */
  if ((C.sf==C.of)) goto L_1202ce67;
  /* 1202c8b4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1202c8ba mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1202c8bd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1202c8c3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1202c8c8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1202c8ce push ecx */
  push32((uint32_t)(ECX));
  /* 1202c8cf call dword ptr [0x12055398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055398))), 0x1202c8d5u);
  /* 1202c8d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202c8d7 je 0x1202c8e3 */
  if (C.zf) goto L_1202c8e3;
  /* 1202c8d9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1202c8de jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202c8e3:;
  /* 1202c8e3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1202c8e9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1202c8ec mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1202c8f2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1202c8f8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c8fe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1202c901 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1202c907 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202c90a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202c90d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1202c917 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1202c921 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1202c928 jmp 0x1202c933 */
  goto L_1202c933;
L_1202c92a:;
  /* 1202c92a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202c92d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c930 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1202c933:;
  /* 1202c933 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c937 jge 0x1202ce2b */
  if ((C.sf==C.of)) goto L_1202ce2b;
  /* 1202c93d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1202c947 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1202c951 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1202c95b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1202c965 jmp 0x1202c976 */
  goto L_1202c976;
L_1202c967:;
  /* 1202c967 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1202c96d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c970 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1202c976:;
  /* 1202c976 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c97d jge 0x1202c992 */
  if ((C.sf==C.of)) goto L_1202c992;
  /* 1202c97f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1202c985 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1202c990 jmp 0x1202c967 */
  goto L_1202c967;
L_1202c992:;
  /* 1202c992 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c996 jl 0x1202cdcd */
  if ((C.sf!=C.of)) goto L_1202cdcd;
  /* 1202c99c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1202c9a1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1202c9a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1202c9a8 call dword ptr [0x12055398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055398))), 0x1202c9aeu);
  /* 1202c9ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202c9b0 je 0x1202c9bc */
  if (C.zf) goto L_1202c9bc;
  /* 1202c9b2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1202c9b7 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202c9bc:;
  /* 1202c9bc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1202c9c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1202c9c5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1202c9cf jmp 0x1202c9e0 */
  goto L_1202c9e0;
L_1202c9d1:;
  /* 1202c9d1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1202c9d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c9da mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1202c9e0:;
  /* 1202c9e0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202c9e7 jge 0x1202cb64 */
  if ((C.sf==C.of)) goto L_1202cb64;
  /* 1202c9ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202c9f0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202c9f3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1202c9f9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202c9ff add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ca05 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1202ca0b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202ca11 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ca15 jne 0x1202ca22 */
  if (!C.zf) goto L_1202ca22;
  /* 1202ca17 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1202ca1d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ca20 je 0x1202ca2c */
  if (C.zf) goto L_1202ca2c;
L_1202ca22:;
  /* 1202ca22 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1202ca27 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202ca2c:;
  /* 1202ca2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202ca32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202ca34 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1202ca3a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1202ca40 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1202ca46 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1202ca4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1202ca4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202ca51 je 0x1202ca89 */
  if (C.zf) goto L_1202ca89;
  /* 1202ca53 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1202ca59 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ca5c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1202ca62 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ca6c jle 0x1202ca78 */
  if ((C.zf||C.sf!=C.of)) goto L_1202ca78;
  /* 1202ca6e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1202ca73 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202ca78:;
  /* 1202ca78 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1202ca7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ca81 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1202ca87 jmp 0x1202cacb */
  goto L_1202cacb;
L_1202ca89:;
  /* 1202ca89 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1202ca8f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1202ca92 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ca95 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1202ca9b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202caa2 jle 0x1202caae */
  if ((C.zf||C.sf!=C.of)) goto L_1202caae;
  /* 1202caa4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1202caae:;
  /* 1202caae mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1202cab4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1202cabb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cabe mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1202cac4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1202cacb:;
  /* 1202cacb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cad2 jl 0x1202caed */
  if ((C.sf!=C.of)) goto L_1202caed;
  /* 1202cad4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1202cada and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1202cadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202cadf jne 0x1202caed */
  if (!C.zf) goto L_1202caed;
  /* 1202cae1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202caeb jle 0x1202caf7 */
  if ((C.zf||C.sf!=C.of)) goto L_1202caf7;
L_1202caed:;
  /* 1202caed mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1202caf2 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202caf7:;
  /* 1202caf7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202cafd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cb03 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1202cb06 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cb0c je 0x1202cb18 */
  if (C.zf) goto L_1202cb18;
  /* 1202cb0e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1202cb13 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cb18:;
  /* 1202cb18 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202cb1e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cb24 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1202cb2a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202cb30 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cb36 jb 0x1202ca2c */
  if (C.cf) goto L_1202ca2c;
  /* 1202cb3c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202cb42 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cb48 je 0x1202cb54 */
  if (C.zf) goto L_1202cb54;
  /* 1202cb4a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1202cb4f jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cb54:;
  /* 1202cb54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202cb57 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cb5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202cb5f jmp 0x1202c9d1 */
  goto L_1202c9d1;
L_1202cb64:;
  /* 1202cb64 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202cb67 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202cb69 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cb6f je 0x1202cb7b */
  if (C.zf) goto L_1202cb7b;
  /* 1202cb71 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1202cb76 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cb7b:;
  /* 1202cb7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202cb7e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1202cb84 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1202cb8b jmp 0x1202cb96 */
  goto L_1202cb96;
L_1202cb8d:;
  /* 1202cb8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cb90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cb93 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1202cb96:;
  /* 1202cb96 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cb9a jge 0x1202cdcd */
  if ((C.sf==C.of)) goto L_1202cdcd;
  /* 1202cba0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1202cbaa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1202cbb0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1202cbb6:;
  /* 1202cbb6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202cbbc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202cbbf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1202cbc5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1202cbcb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cbd1 je 0x1202ccfa */
  if (C.zf) goto L_1202ccfa;
  /* 1202cbd7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cbda mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1202cbe0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cbe7 je 0x1202ccfa */
  if (C.zf) goto L_1202ccfa;
  /* 1202cbed mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1202cbf3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cbf9 jb 0x1202cc0e */
  if (C.cf) goto L_1202cc0e;
  /* 1202cbfb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1202cc01 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cc06 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cc0c jb 0x1202cc18 */
  if (C.cf) goto L_1202cc18;
L_1202cc0e:;
  /* 1202cc0e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1202cc13 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cc18:;
  /* 1202cc18 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1202cc1e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1202cc24 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1202cc2a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1202cc30 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cc33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1202cc36 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202cc39 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cc3e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1202cc44:;
  /* 1202cc44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202cc47 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cc4d je 0x1202cc6e */
  if (C.zf) goto L_1202cc6e;
  /* 1202cc4f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202cc52 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cc58 jne 0x1202cc5c */
  if (!C.zf) goto L_1202cc5c;
  /* 1202cc5a jmp 0x1202cc6e */
  goto L_1202cc6e;
L_1202cc5c:;
  /* 1202cc5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202cc5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202cc61 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1202cc64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202cc67 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cc69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1202cc6c jmp 0x1202cc44 */
  goto L_1202cc44;
L_1202cc6e:;
  /* 1202cc6e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202cc71 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cc77 jne 0x1202cc83 */
  if (!C.zf) goto L_1202cc83;
  /* 1202cc79 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1202cc7e jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cc83:;
  /* 1202cc83 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1202cc89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202cc8b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1202cc8e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202cc91 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1202cc97 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cc9e jle 0x1202ccaa */
  if ((C.zf||C.sf!=C.of)) goto L_1202ccaa;
  /* 1202cca0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1202ccaa:;
  /* 1202ccaa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1202ccb0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ccb3 je 0x1202ccbf */
  if (C.zf) goto L_1202ccbf;
  /* 1202ccb5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1202ccba jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202ccbf:;
  /* 1202ccbf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1202ccc5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202ccc8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ccce je 0x1202ccda */
  if (C.zf) goto L_1202ccda;
  /* 1202ccd0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1202ccd5 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202ccda:;
  /* 1202ccda mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1202cce0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1202cce6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1202ccec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ccef mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1202ccf5 jmp 0x1202cbb6 */
  goto L_1202cbb6;
L_1202ccfa:;
  /* 1202ccfa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cd01 je 0x1202cd71 */
  if (C.zf) goto L_1202cd71;
  /* 1202cd03 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cd07 jge 0x1202cd3b */
  if ((C.sf==C.of)) goto L_1202cd3b;
  /* 1202cd09 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202cd0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cd11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202cd13 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1202cd19 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202cd1b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1202cd21 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202cd26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cd29 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202cd2b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1202cd31 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202cd33 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1202cd39 jmp 0x1202cd71 */
  goto L_1202cd71;
L_1202cd3b:;
  /* 1202cd3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cd3e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202cd41 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202cd46 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202cd48 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1202cd4e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202cd50 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1202cd56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cd59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202cd5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1202cd61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1202cd63 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1202cd69 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1202cd6b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1202cd71:;
  /* 1202cd71 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1202cd77 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202cd7a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cd80 jne 0x1202cd94 */
  if (!C.zf) goto L_1202cd94;
  /* 1202cd82 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202cd85 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1202cd8b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cd92 je 0x1202cd9e */
  if (C.zf) goto L_1202cd9e;
L_1202cd94:;
  /* 1202cd94 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1202cd99 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cd9e:;
  /* 1202cd9e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1202cda4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202cda7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cdad je 0x1202cdb9 */
  if (C.zf) goto L_1202cdb9;
  /* 1202cdaf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1202cdb4 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202cdb9:;
  /* 1202cdb9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1202cdbf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cdc2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1202cdc8 jmp 0x1202cb8d */
  goto L_1202cb8d;
L_1202cdcd:;
  /* 1202cdcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202cdd0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1202cdd6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1202cddc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cde0 jne 0x1202cdfa */
  if (!C.zf) goto L_1202cdfa;
  /* 1202cde2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202cde5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1202cdeb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1202cdf1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cdf8 je 0x1202ce01 */
  if (C.zf) goto L_1202ce01;
L_1202cdfa:;
  /* 1202cdfa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1202cdff jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202ce01:;
  /* 1202ce01 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1202ce07 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ce0d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1202ce13 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202ce16 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ce1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1202ce1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ce21 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1202ce23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202ce26 jmp 0x1202c92a */
  goto L_1202c92a;
L_1202ce2b:;
  /* 1202ce2b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1202ce31 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1202ce37 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ce39 jne 0x1202ce4c */
  if (!C.zf) goto L_1202ce4c;
  /* 1202ce3b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1202ce41 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1202ce47 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ce4a je 0x1202ce53 */
  if (C.zf) goto L_1202ce53;
L_1202ce4c:;
  /* 1202ce4c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1202ce51 jmp 0x1202ce69 */
  goto L_1202ce69;
L_1202ce53:;
  /* 1202ce53 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1202ce59 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ce5c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1202ce62 jmp 0x1202c893 */
  goto L_1202c893;
L_1202ce67:;
  /* 1202ce67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202ce69:;
  /* 1202ce69 mov esp, ebp */
  ESP = (EBP);
  /* 1202ce6b pop ebp */
  EBP = (pop32());
  /* 1202ce6c ret  */
  ESPCHK(0x1202c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x1202ce70 (250 bytes, 92 insns) */
void f_1202ce70(void) {
  FTRACE(0x1202ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ce71 mov ebp, esp */
  EBP = (ESP);
  /* 1202ce73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ce76 push ebx */
  push32((uint32_t)(EBX));
  /* 1202ce77 push esi */
  push32((uint32_t)(ESI));
  /* 1202ce78 push edi */
  push32((uint32_t)(EDI));
  /* 1202ce79 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1202ce7c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1202ce7f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1202ce82 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1202ce85:;
  /* 1202ce85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ce89 jne 0x1202cea9 */
  if (!C.zf) goto L_1202cea9;
  /* 1202ce8b push 0x1204e3a0 */
  push32((uint32_t)(0x1204e3a0u));
  /* 1202ce90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202ce92 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1202ce94 push 0x1204e394 */
  push32((uint32_t)(0x1204e394u));
  /* 1202ce99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202ce9b call 0x12026020 */
  push32(0x1202cea0u); f_12026020();
  /* 1202cea0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cea3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cea6 jne 0x1202cea9 */
  if (!C.zf) goto L_1202cea9;
  /* 1202cea8 int3  */
  x86_unimpl("int3 @ 0x1202cea8");
L_1202cea9:;
  /* 1202cea9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202ceab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202cead jne 0x1202ce85 */
  if (!C.zf) goto L_1202ce85;
L_1202ceaf:;
  /* 1202ceaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ceb3 jne 0x1202ced3 */
  if (!C.zf) goto L_1202ced3;
  /* 1202ceb5 push 0x1204e384 */
  push32((uint32_t)(0x1204e384u));
  /* 1202ceba push 0 */
  push32((uint32_t)(0x0u));
  /* 1202cebc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1202cebe push 0x1204e394 */
  push32((uint32_t)(0x1204e394u));
  /* 1202cec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202cec5 call 0x12026020 */
  push32(0x1202cecau); f_12026020();
  /* 1202ceca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cecd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ced0 jne 0x1202ced3 */
  if (!C.zf) goto L_1202ced3;
  /* 1202ced2 int3  */
  x86_unimpl("int3 @ 0x1202ced2");
L_1202ced3:;
  /* 1202ced3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ced5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202ced7 jne 0x1202ceaf */
  if (!C.zf) goto L_1202ceaf;
  /* 1202ced9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cedc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1202cee3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202cee9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1202ceec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202ceef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202cef2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1202cef4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cef7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1202cefe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202cf01 push ecx */
  push32((uint32_t)(ECX));
  /* 1202cf02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202cf05 push edx */
  push32((uint32_t)(EDX));
  /* 1202cf06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf09 push eax */
  push32((uint32_t)(EAX));
  /* 1202cf0a call 0x1202def0 */
  push32(0x1202cf0fu); f_1202def0();
  /* 1202cf0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cf12 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202cf15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202cf1b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202cf1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf21 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1202cf24 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf27 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cf2b jl 0x1202cf4f */
  if ((C.sf!=C.of)) goto L_1202cf4f;
  /* 1202cf2d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202cf32 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1202cf35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202cf37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202cf3d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1202cf40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202cf45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cf48 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf4b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202cf4d jmp 0x1202cf60 */
  goto L_1202cf60;
L_1202cf4f:;
  /* 1202cf4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202cf52 push edx */
  push32((uint32_t)(EDX));
  /* 1202cf53 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202cf55 call 0x1202dc70 */
  push32(0x1202cf5au); f_1202dc70();
  /* 1202cf5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cf5d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1202cf60:;
  /* 1202cf60 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202cf63 pop edi */
  EDI = (pop32());
  /* 1202cf64 pop esi */
  ESI = (pop32());
  /* 1202cf65 pop ebx */
  EBX = (pop32());
  /* 1202cf66 mov esp, ebp */
  ESP = (EBP);
  /* 1202cf68 pop ebp */
  EBP = (pop32());
  /* 1202cf69 ret  */
  ESPCHK(0x1202ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf70 @ 0x1202cf70 (183 bytes, 58 insns) */
void f_1202cf70(void) {
  FTRACE(0x1202cf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202cf70 push ebp */
  push32((uint32_t)(EBP));
  /* 1202cf71 mov ebp, esp */
  EBP = (ESP);
  /* 1202cf73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202cf76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202cf79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202cf7c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202cf81 ja 0x1202cf9a */
  if ((!C.cf&&!C.zf)) goto L_1202cf9a;
  /* 1202cf83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202cf86 mov edx, dword ptr [0x12050c98] */
  EDX = (r32((uint32_t)(0x12050c98)));
  /* 1202cf8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202cf8e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1202cf92 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1202cf95 jmp 0x1202d023 */
  goto L_1202d023;
L_1202cf9a:;
  /* 1202cf9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202cf9d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1202cfa0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202cfa6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202cfac mov edx, dword ptr [0x12050c98] */
  EDX = (r32((uint32_t)(0x12050c98)));
  /* 1202cfb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202cfb4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1202cfb8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1202cfbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202cfbf je 0x1202cfe3 */
  if (C.zf) goto L_1202cfe3;
  /* 1202cfc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202cfc4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1202cfc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202cfcd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1202cfd0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1202cfd3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1202cfd6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1202cfda mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1202cfe1 jmp 0x1202cff4 */
  goto L_1202cff4;
L_1202cfe3:;
  /* 1202cfe3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1202cfe6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1202cfe9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1202cfed mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1202cff4:;
  /* 1202cff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202cff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202cff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202cffa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1202cffd push ecx */
  push32((uint32_t)(ECX));
  /* 1202cffe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202d001 push edx */
  push32((uint32_t)(EDX));
  /* 1202d002 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1202d005 push eax */
  push32((uint32_t)(EAX));
  /* 1202d006 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202d008 call 0x1202f190 */
  push32(0x1202d00du); f_1202f190();
  /* 1202d00d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d010 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202d012 jne 0x1202d018 */
  if (!C.zf) goto L_1202d018;
  /* 1202d014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d016 jmp 0x1202d023 */
  goto L_1202d023;
L_1202d018:;
  /* 1202d018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d01b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202d020 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1202d023:;
  /* 1202d023 mov esp, ebp */
  ESP = (EBP);
  /* 1202d025 pop ebp */
  EBP = (pop32());
  /* 1202d026 ret  */
  ESPCHK(0x1202cf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x1202d030 (836 bytes, 238 insns) */
void f_1202d030(void) {
  FTRACE(0x1202d030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d030 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d031 mov ebp, esp */
  EBP = (ESP);
  /* 1202d033 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202d036 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d038 call 0x1202a960 */
  push32(0x1202d03du); f_1202a960();
  /* 1202d03d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d043 push eax */
  push32((uint32_t)(EAX));
  /* 1202d044 call 0x1202d380 */
  push32(0x1202d049u); f_1202d380();
  /* 1202d049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d04c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1202d04f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d052 cmp ecx, dword ptr [0x12053ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12053ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d058 jne 0x1202d06b */
  if (!C.zf) goto L_1202d06b;
  /* 1202d05a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d05c call 0x1202aa00 */
  push32(0x1202d061u); f_1202aa00();
  /* 1202d061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d066 jmp 0x1202d370 */
  goto L_1202d370;
L_1202d06b:;
  /* 1202d06b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d06f jne 0x1202d08c */
  if (!C.zf) goto L_1202d08c;
  /* 1202d071 call 0x1202d460 */
  push32(0x1202d076u); f_1202d460();
  /* 1202d076 call 0x1202d4e0 */
  push32(0x1202d07bu); f_1202d4e0();
  /* 1202d07b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d07d call 0x1202aa00 */
  push32(0x1202d082u); f_1202aa00();
  /* 1202d082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d087 jmp 0x1202d370 */
  goto L_1202d370;
L_1202d08c:;
  /* 1202d08c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202d093 jmp 0x1202d09e */
  goto L_1202d09e;
L_1202d095:;
  /* 1202d095 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d09b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202d09e:;
  /* 1202d09e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d0a2 jae 0x1202d1ef */
  if (!C.cf) goto L_1202d1ef;
  /* 1202d0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d0ab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202d0ae mov ecx, dword ptr [eax + 0x12050eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12050eb8)));
  /* 1202d0b4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d0b7 jne 0x1202d1ea */
  if (!C.zf) goto L_1202d1ea;
  /* 1202d0bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1202d0c4 jmp 0x1202d0cf */
  goto L_1202d0cf;
L_1202d0c6:;
  /* 1202d0c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d0c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d0cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1202d0cf:;
  /* 1202d0cf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d0d6 jae 0x1202d0e4 */
  if (!C.cf) goto L_1202d0e4;
  /* 1202d0d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d0db mov byte ptr [eax + 0x12054060], 0 */
  w8((uint32_t)(EAX + 0x12054060), (0x0u));
  /* 1202d0e2 jmp 0x1202d0c6 */
  goto L_1202d0c6;
L_1202d0e4:;
  /* 1202d0e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1202d0eb jmp 0x1202d0f6 */
  goto L_1202d0f6;
L_1202d0ed:;
  /* 1202d0ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d0f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d0f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1202d0f6:;
  /* 1202d0f6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d0fa jae 0x1202d177 */
  if (!C.cf) goto L_1202d177;
  /* 1202d0fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d0ff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202d102 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d105 lea ecx, [edx + eax*8 + 0x12050ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12050ec8));
  /* 1202d10c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202d10f jmp 0x1202d11a */
  goto L_1202d11a;
L_1202d111:;
  /* 1202d111 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202d114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d117 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1202d11a:;
  /* 1202d11a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202d11d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202d11f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1202d121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202d123 je 0x1202d172 */
  if (C.zf) goto L_1202d172;
  /* 1202d125 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202d128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d12a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1202d12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202d12f je 0x1202d172 */
  if (C.zf) goto L_1202d172;
  /* 1202d131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202d134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1202d138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1202d13b jmp 0x1202d146 */
  goto L_1202d146;
L_1202d13d:;
  /* 1202d13d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1202d146:;
  /* 1202d146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202d149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d14b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1202d14e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d151 ja 0x1202d170 */
  if ((!C.cf&&!C.zf)) goto L_1202d170;
  /* 1202d153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d156 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d159 mov dl, byte ptr [eax + 0x12054061] */
  DL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 1202d15f or dl, byte ptr [ecx + 0x12050eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12050eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1202d165 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d168 mov byte ptr [eax + 0x12054061], dl */
  w8((uint32_t)(EAX + 0x12054061), (DL));
  /* 1202d16e jmp 0x1202d13d */
  goto L_1202d13d;
L_1202d170:;
  /* 1202d170 jmp 0x1202d111 */
  goto L_1202d111;
L_1202d172:;
  /* 1202d172 jmp 0x1202d0ed */
  goto L_1202d0ed;
L_1202d177:;
  /* 1202d177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d17a mov dword ptr [0x12053ec4], ecx */
  w32((uint32_t)(0x12053ec4), (ECX));
  /* 1202d180 mov dword ptr [0x12053f4c], 1 */
  w32((uint32_t)(0x12053f4c), (0x1u));
  /* 1202d18a mov edx, dword ptr [0x12053ec4] */
  EDX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d190 push edx */
  push32((uint32_t)(EDX));
  /* 1202d191 call 0x1202d3e0 */
  push32(0x1202d196u); f_1202d3e0();
  /* 1202d196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d199 mov dword ptr [0x12054164], eax */
  w32((uint32_t)(0x12054164), (EAX));
  /* 1202d19e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1202d1a5 jmp 0x1202d1b0 */
  goto L_1202d1b0;
L_1202d1a7:;
  /* 1202d1a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d1aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d1ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1202d1b0:;
  /* 1202d1b0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d1b4 jae 0x1202d1d4 */
  if (!C.cf) goto L_1202d1d4;
  /* 1202d1b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d1b9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202d1bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d1bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d1c2 mov cx, word ptr [ecx + eax*2 + 0x12050ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12050ebc)));
  /* 1202d1ca mov word ptr [edx*2 + 0x12053f40], cx */
  w16((uint32_t)(EDX*2 + 0x12053f40), (CX));
  /* 1202d1d2 jmp 0x1202d1a7 */
  goto L_1202d1a7;
L_1202d1d4:;
  /* 1202d1d4 call 0x1202d4e0 */
  push32(0x1202d1d9u); f_1202d4e0();
  /* 1202d1d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d1db call 0x1202aa00 */
  push32(0x1202d1e0u); f_1202aa00();
  /* 1202d1e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d1e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d1e5 jmp 0x1202d370 */
  goto L_1202d370;
L_1202d1ea:;
  /* 1202d1ea jmp 0x1202d095 */
  goto L_1202d095;
L_1202d1ef:;
  /* 1202d1ef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1202d1f2 push edx */
  push32((uint32_t)(EDX));
  /* 1202d1f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d1f6 push eax */
  push32((uint32_t)(EAX));
  /* 1202d1f7 call dword ptr [0x12055344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055344))), 0x1202d1fdu);
  /* 1202d1fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d200 jne 0x1202d342 */
  if (!C.zf) goto L_1202d342;
  /* 1202d206 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1202d20d jmp 0x1202d218 */
  goto L_1202d218;
L_1202d20f:;
  /* 1202d20f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d215 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1202d218:;
  /* 1202d218 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d21f jae 0x1202d22d */
  if (!C.cf) goto L_1202d22d;
  /* 1202d221 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d224 mov byte ptr [edx + 0x12054060], 0 */
  w8((uint32_t)(EDX + 0x12054060), (0x0u));
  /* 1202d22b jmp 0x1202d20f */
  goto L_1202d20f;
L_1202d22d:;
  /* 1202d22d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d230 mov dword ptr [0x12053ec4], eax */
  w32((uint32_t)(0x12053ec4), (EAX));
  /* 1202d235 mov dword ptr [0x12054164], 0 */
  w32((uint32_t)(0x12054164), (0x0u));
  /* 1202d23f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d243 jbe 0x1202d2fe */
  if ((C.cf||C.zf)) goto L_1202d2fe;
  /* 1202d249 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1202d24c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1202d24f jmp 0x1202d25a */
  goto L_1202d25a;
L_1202d251:;
  /* 1202d251 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202d254 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d257 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1202d25a:;
  /* 1202d25a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202d25d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202d25f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1202d261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202d263 je 0x1202d2ac */
  if (C.zf) goto L_1202d2ac;
  /* 1202d265 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202d268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d26a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1202d26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202d26f je 0x1202d2ac */
  if (C.zf) goto L_1202d2ac;
  /* 1202d271 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202d274 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d276 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1202d278 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1202d27b jmp 0x1202d286 */
  goto L_1202d286;
L_1202d27d:;
  /* 1202d27d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d283 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1202d286:;
  /* 1202d286 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202d289 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d28b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1202d28e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d291 ja 0x1202d2aa */
  if ((!C.cf&&!C.zf)) goto L_1202d2aa;
  /* 1202d293 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d296 mov cl, byte ptr [eax + 0x12054061] */
  CL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 1202d29c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1202d29f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d2a2 mov byte ptr [edx + 0x12054061], cl */
  w8((uint32_t)(EDX + 0x12054061), (CL));
  /* 1202d2a8 jmp 0x1202d27d */
  goto L_1202d27d;
L_1202d2aa:;
  /* 1202d2aa jmp 0x1202d251 */
  goto L_1202d251;
L_1202d2ac:;
  /* 1202d2ac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1202d2b3 jmp 0x1202d2be */
  goto L_1202d2be;
L_1202d2b5:;
  /* 1202d2b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d2b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d2bb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1202d2be:;
  /* 1202d2be cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d2c5 jae 0x1202d2de */
  if (!C.cf) goto L_1202d2de;
  /* 1202d2c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d2ca mov dl, byte ptr [ecx + 0x12054061] */
  DL = (r8((uint32_t)(ECX + 0x12054061)));
  /* 1202d2d0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1202d2d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202d2d6 mov byte ptr [eax + 0x12054061], dl */
  w8((uint32_t)(EAX + 0x12054061), (DL));
  /* 1202d2dc jmp 0x1202d2b5 */
  goto L_1202d2b5;
L_1202d2de:;
  /* 1202d2de mov ecx, dword ptr [0x12053ec4] */
  ECX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d2e5 call 0x1202d3e0 */
  push32(0x1202d2eau); f_1202d3e0();
  /* 1202d2ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d2ed mov dword ptr [0x12054164], eax */
  w32((uint32_t)(0x12054164), (EAX));
  /* 1202d2f2 mov dword ptr [0x12053f4c], 1 */
  w32((uint32_t)(0x12053f4c), (0x1u));
  /* 1202d2fc jmp 0x1202d308 */
  goto L_1202d308;
L_1202d2fe:;
  /* 1202d2fe mov dword ptr [0x12053f4c], 0 */
  w32((uint32_t)(0x12053f4c), (0x0u));
L_1202d308:;
  /* 1202d308 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1202d30f jmp 0x1202d31a */
  goto L_1202d31a;
L_1202d311:;
  /* 1202d311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d314 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d317 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1202d31a:;
  /* 1202d31a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d31e jae 0x1202d32f */
  if (!C.cf) goto L_1202d32f;
  /* 1202d320 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202d323 mov word ptr [eax*2 + 0x12053f40], 0 */
  w16((uint32_t)(EAX*2 + 0x12053f40), (0x0u));
  /* 1202d32d jmp 0x1202d311 */
  goto L_1202d311;
L_1202d32f:;
  /* 1202d32f call 0x1202d4e0 */
  push32(0x1202d334u); f_1202d4e0();
  /* 1202d334 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d336 call 0x1202aa00 */
  push32(0x1202d33bu); f_1202aa00();
  /* 1202d33b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d33e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d340 jmp 0x1202d370 */
  goto L_1202d370;
L_1202d342:;
  /* 1202d342 cmp dword ptr [0x120529d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d349 je 0x1202d363 */
  if (C.zf) goto L_1202d363;
  /* 1202d34b call 0x1202d460 */
  push32(0x1202d350u); f_1202d460();
  /* 1202d350 call 0x1202d4e0 */
  push32(0x1202d355u); f_1202d4e0();
  /* 1202d355 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d357 call 0x1202aa00 */
  push32(0x1202d35cu); f_1202aa00();
  /* 1202d35c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d35f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202d361 jmp 0x1202d370 */
  goto L_1202d370;
L_1202d363:;
  /* 1202d363 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1202d365 call 0x1202aa00 */
  push32(0x1202d36au); f_1202aa00();
  /* 1202d36a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d36d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1202d370:;
  /* 1202d370 mov esp, ebp */
  ESP = (EBP);
  /* 1202d372 pop ebp */
  EBP = (pop32());
  /* 1202d373 ret  */
  ESPCHK(0x1202d030u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1202d380 (89 bytes, 21 insns) */
void f_1202d380(void) {
  FTRACE(0x1202d380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d380 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d381 mov ebp, esp */
  EBP = (ESP);
  /* 1202d383 mov dword ptr [0x120529d8], 0 */
  w32((uint32_t)(0x120529d8), (0x0u));
  /* 1202d38d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d391 jne 0x1202d3a5 */
  if (!C.zf) goto L_1202d3a5;
  /* 1202d393 mov dword ptr [0x120529d8], 1 */
  w32((uint32_t)(0x120529d8), (0x1u));
  /* 1202d39d call dword ptr [0x1205533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205533c))), 0x1202d3a3u);
  /* 1202d3a3 jmp 0x1202d3d7 */
  goto L_1202d3d7;
L_1202d3a5:;
  /* 1202d3a5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d3a9 jne 0x1202d3bd */
  if (!C.zf) goto L_1202d3bd;
  /* 1202d3ab mov dword ptr [0x120529d8], 1 */
  w32((uint32_t)(0x120529d8), (0x1u));
  /* 1202d3b5 call dword ptr [0x12055340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055340))), 0x1202d3bbu);
  /* 1202d3bb jmp 0x1202d3d7 */
  goto L_1202d3d7;
L_1202d3bd:;
  /* 1202d3bd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d3c1 jne 0x1202d3d4 */
  if (!C.zf) goto L_1202d3d4;
  /* 1202d3c3 mov dword ptr [0x120529d8], 1 */
  w32((uint32_t)(0x120529d8), (0x1u));
  /* 1202d3cd mov eax, dword ptr [0x120529f8] */
  EAX = (r32((uint32_t)(0x120529f8)));
  /* 1202d3d2 jmp 0x1202d3d7 */
  goto L_1202d3d7;
L_1202d3d4:;
  /* 1202d3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1202d3d7:;
  /* 1202d3d7 pop ebp */
  EBP = (pop32());
  /* 1202d3d8 ret  */
  ESPCHK(0x1202d380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x1202d3e0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1202d3e0(void) {
  FTRACE(0x1202d3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1202d3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d3e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202d3ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d3ed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202d3f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202d3f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d3fa ja 0x1202d42a */
  if ((!C.cf&&!C.zf)) goto L_1202d42a;
  /* 1202d3fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d3ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d401 mov dl, byte ptr [eax + 0x1202d444] */
  DL = (r8((uint32_t)(EAX + 0x1202d444)));
  /* 1202d407 jmp dword ptr [edx*4 + 0x1202d430] */
  switch (EDX) {
    case 0: goto L_1202d40e;
    case 1: goto L_1202d415;
    case 2: goto L_1202d41c;
    case 3: goto L_1202d423;
    case 4: goto L_1202d42a;
    default: x86_unimpl("switch@0x1202d407 out of table"); return;
  }
L_1202d40e:;
  /* 1202d40e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1202d413 jmp 0x1202d42c */
  goto L_1202d42c;
L_1202d415:;
  /* 1202d415 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1202d41a jmp 0x1202d42c */
  goto L_1202d42c;
L_1202d41c:;
  /* 1202d41c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1202d421 jmp 0x1202d42c */
  goto L_1202d42c;
L_1202d423:;
  /* 1202d423 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1202d428 jmp 0x1202d42c */
  goto L_1202d42c;
L_1202d42a:;
  /* 1202d42a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202d42c:;
  /* 1202d42c mov esp, ebp */
  ESP = (EBP);
  /* 1202d42e pop ebp */
  EBP = (pop32());
  /* 1202d42f ret  */
  ESPCHK(0x1202d3e0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1202d460 (116 bytes, 29 insns) */
void f_1202d460(void) {
  FTRACE(0x1202d460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d460 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d461 mov ebp, esp */
  EBP = (ESP);
  /* 1202d463 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202d46b jmp 0x1202d476 */
  goto L_1202d476;
L_1202d46d:;
  /* 1202d46d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202d476:;
  /* 1202d476 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d47d jge 0x1202d48b */
  if ((C.sf==C.of)) goto L_1202d48b;
  /* 1202d47f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d482 mov byte ptr [ecx + 0x12054060], 0 */
  w8((uint32_t)(ECX + 0x12054060), (0x0u));
  /* 1202d489 jmp 0x1202d46d */
  goto L_1202d46d;
L_1202d48b:;
  /* 1202d48b mov dword ptr [0x12053ec4], 0 */
  w32((uint32_t)(0x12053ec4), (0x0u));
  /* 1202d495 mov dword ptr [0x12053f4c], 0 */
  w32((uint32_t)(0x12053f4c), (0x0u));
  /* 1202d49f mov dword ptr [0x12054164], 0 */
  w32((uint32_t)(0x12054164), (0x0u));
  /* 1202d4a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202d4b0 jmp 0x1202d4bb */
  goto L_1202d4bb;
L_1202d4b2:;
  /* 1202d4b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d4b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d4b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202d4bb:;
  /* 1202d4bb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d4bf jge 0x1202d4d0 */
  if ((C.sf==C.of)) goto L_1202d4d0;
  /* 1202d4c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d4c4 mov word ptr [eax*2 + 0x12053f40], 0 */
  w16((uint32_t)(EAX*2 + 0x12053f40), (0x0u));
  /* 1202d4ce jmp 0x1202d4b2 */
  goto L_1202d4b2;
L_1202d4d0:;
  /* 1202d4d0 mov esp, ebp */
  ESP = (EBP);
  /* 1202d4d2 pop ebp */
  EBP = (pop32());
  /* 1202d4d3 ret  */
  ESPCHK(0x1202d460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x1202d4e0 (770 bytes, 175 insns) */
void f_1202d4e0(void) {
  FTRACE(0x1202d4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1202d4e3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202d4e9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1202d4ef push eax */
  push32((uint32_t)(EAX));
  /* 1202d4f0 mov ecx, dword ptr [0x12053ec4] */
  ECX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d4f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d4f7 call dword ptr [0x12055344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055344))), 0x1202d4fdu);
  /* 1202d4fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d500 jne 0x1202d719 */
  if (!C.zf) goto L_1202d719;
  /* 1202d506 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1202d510 jmp 0x1202d521 */
  goto L_1202d521;
L_1202d512:;
  /* 1202d512 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d518 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d51b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1202d521:;
  /* 1202d521 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d52b jae 0x1202d542 */
  if (!C.cf) goto L_1202d542;
  /* 1202d52d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d533 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1202d539 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1202d540 jmp 0x1202d512 */
  goto L_1202d512;
L_1202d542:;
  /* 1202d542 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1202d549 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1202d54f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202d552 jmp 0x1202d55d */
  goto L_1202d55d;
L_1202d554:;
  /* 1202d554 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d557 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d55a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202d55d:;
  /* 1202d55d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d560 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d562 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1202d564 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202d566 je 0x1202d5a8 */
  if (C.zf) goto L_1202d5a8;
  /* 1202d568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d56b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202d56d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1202d56f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1202d575 jmp 0x1202d586 */
  goto L_1202d586;
L_1202d577:;
  /* 1202d577 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d57d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d580 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1202d586:;
  /* 1202d586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202d589 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202d58b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1202d58e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d594 ja 0x1202d5a6 */
  if ((!C.cf&&!C.zf)) goto L_1202d5a6;
  /* 1202d596 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d59c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1202d5a4 jmp 0x1202d577 */
  goto L_1202d577;
L_1202d5a6:;
  /* 1202d5a6 jmp 0x1202d554 */
  goto L_1202d554;
L_1202d5a8:;
  /* 1202d5a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202d5aa mov eax, dword ptr [0x12054164] */
  EAX = (r32((uint32_t)(0x12054164)));
  /* 1202d5af push eax */
  push32((uint32_t)(EAX));
  /* 1202d5b0 mov ecx, dword ptr [0x12053ec4] */
  ECX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d5b7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1202d5bd push edx */
  push32((uint32_t)(EDX));
  /* 1202d5be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202d5c3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1202d5c9 push eax */
  push32((uint32_t)(EAX));
  /* 1202d5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1202d5cc call 0x1202f190 */
  push32(0x1202d5d1u); f_1202f190();
  /* 1202d5d1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d5d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202d5d6 mov ecx, dword ptr [0x12053ec4] */
  ECX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d5dc push ecx */
  push32((uint32_t)(ECX));
  /* 1202d5dd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202d5e2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1202d5e8 push edx */
  push32((uint32_t)(EDX));
  /* 1202d5e9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202d5ee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1202d5f4 push eax */
  push32((uint32_t)(EAX));
  /* 1202d5f5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202d5fa mov ecx, dword ptr [0x12054164] */
  ECX = (r32((uint32_t)(0x12054164)));
  /* 1202d600 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d601 call 0x1202f350 */
  push32(0x1202d606u); f_1202f350();
  /* 1202d606 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202d60b mov edx, dword ptr [0x12053ec4] */
  EDX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d611 push edx */
  push32((uint32_t)(EDX));
  /* 1202d612 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202d617 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1202d61d push eax */
  push32((uint32_t)(EAX));
  /* 1202d61e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202d623 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1202d629 push ecx */
  push32((uint32_t)(ECX));
  /* 1202d62a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1202d62f mov edx, dword ptr [0x12054164] */
  EDX = (r32((uint32_t)(0x12054164)));
  /* 1202d635 push edx */
  push32((uint32_t)(EDX));
  /* 1202d636 call 0x1202f350 */
  push32(0x1202d63bu); f_1202f350();
  /* 1202d63b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d63e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1202d648 jmp 0x1202d659 */
  goto L_1202d659;
L_1202d64a:;
  /* 1202d64a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d653 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1202d659:;
  /* 1202d659 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d663 jae 0x1202d714 */
  if (!C.cf) goto L_1202d714;
  /* 1202d669 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d66f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d671 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1202d679 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1202d67c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202d67e je 0x1202d6b6 */
  if (C.zf) goto L_1202d6b6;
  /* 1202d680 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d686 mov cl, byte ptr [eax + 0x12054061] */
  CL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 1202d68c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1202d68f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d695 mov byte ptr [edx + 0x12054061], cl */
  w8((uint32_t)(EDX + 0x12054061), (CL));
  /* 1202d69b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6a7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1202d6ae mov byte ptr [eax + 0x12053f60], dl */
  w8((uint32_t)(EAX + 0x12053f60), (DL));
  /* 1202d6b4 jmp 0x1202d70f */
  goto L_1202d70f;
L_1202d6b6:;
  /* 1202d6b6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202d6be mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1202d6c6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1202d6c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202d6cb je 0x1202d702 */
  if (C.zf) goto L_1202d702;
  /* 1202d6cd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6d3 mov al, byte ptr [edx + 0x12054061] */
  AL = (r8((uint32_t)(EDX + 0x12054061)));
  /* 1202d6d9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1202d6db mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6e1 mov byte ptr [ecx + 0x12054061], al */
  w8((uint32_t)(ECX + 0x12054061), (AL));
  /* 1202d6e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d6f3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1202d6fa mov byte ptr [edx + 0x12053f60], cl */
  w8((uint32_t)(EDX + 0x12053f60), (CL));
  /* 1202d700 jmp 0x1202d70f */
  goto L_1202d70f;
L_1202d702:;
  /* 1202d702 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d708 mov byte ptr [edx + 0x12053f60], 0 */
  w8((uint32_t)(EDX + 0x12053f60), (0x0u));
L_1202d70f:;
  /* 1202d70f jmp 0x1202d64a */
  goto L_1202d64a;
L_1202d714:;
  /* 1202d714 jmp 0x1202d7de */
  goto L_1202d7de;
L_1202d719:;
  /* 1202d719 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1202d723 jmp 0x1202d734 */
  goto L_1202d734;
L_1202d725:;
  /* 1202d725 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d72b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d72e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1202d734:;
  /* 1202d734 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d73e jae 0x1202d7de */
  if (!C.cf) goto L_1202d7de;
  /* 1202d744 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d74b jb 0x1202d788 */
  if (C.cf) goto L_1202d788;
  /* 1202d74d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d754 ja 0x1202d788 */
  if ((!C.cf&&!C.zf)) goto L_1202d788;
  /* 1202d756 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d75c mov dl, byte ptr [ecx + 0x12054061] */
  DL = (r8((uint32_t)(ECX + 0x12054061)));
  /* 1202d762 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1202d765 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d76b mov byte ptr [eax + 0x12054061], dl */
  w8((uint32_t)(EAX + 0x12054061), (DL));
  /* 1202d771 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d777 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d77a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d780 mov byte ptr [edx + 0x12053f60], cl */
  w8((uint32_t)(EDX + 0x12053f60), (CL));
  /* 1202d786 jmp 0x1202d7d9 */
  goto L_1202d7d9;
L_1202d788:;
  /* 1202d788 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d78f jb 0x1202d7cc */
  if (C.cf) goto L_1202d7cc;
  /* 1202d791 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d798 ja 0x1202d7cc */
  if ((!C.cf&&!C.zf)) goto L_1202d7cc;
  /* 1202d79a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d7a0 mov cl, byte ptr [eax + 0x12054061] */
  CL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 1202d7a6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1202d7a9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d7af mov byte ptr [edx + 0x12054061], cl */
  w8((uint32_t)(EDX + 0x12054061), (CL));
  /* 1202d7b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d7bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202d7be mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d7c4 mov byte ptr [ecx + 0x12053f60], al */
  w8((uint32_t)(ECX + 0x12053f60), (AL));
  /* 1202d7ca jmp 0x1202d7d9 */
  goto L_1202d7d9;
L_1202d7cc:;
  /* 1202d7cc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1202d7d2 mov byte ptr [edx + 0x12053f60], 0 */
  w8((uint32_t)(EDX + 0x12053f60), (0x0u));
L_1202d7d9:;
  /* 1202d7d9 jmp 0x1202d725 */
  goto L_1202d725;
L_1202d7de:;
  /* 1202d7de mov esp, ebp */
  ESP = (EBP);
  /* 1202d7e0 pop ebp */
  EBP = (pop32());
  /* 1202d7e1 ret  */
  ESPCHK(0x1202d4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7f0 @ 0x1202d7f0 (23 bytes, 9 insns) */
void f_1202d7f0(void) {
  FTRACE(0x1202d7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1202d7f3 cmp dword ptr [0x12053f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12053f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d7fa je 0x1202d803 */
  if (C.zf) goto L_1202d803;
  /* 1202d7fc mov eax, dword ptr [0x12053ec4] */
  EAX = (r32((uint32_t)(0x12053ec4)));
  /* 1202d801 jmp 0x1202d805 */
  goto L_1202d805;
L_1202d803:;
  /* 1202d803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202d805:;
  /* 1202d805 pop ebp */
  EBP = (pop32());
  /* 1202d806 ret  */
  ESPCHK(0x1202d7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d810 @ 0x1202d810 (34 bytes, 10 insns) */
void f_1202d810(void) {
  FTRACE(0x1202d810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d810 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d811 mov ebp, esp */
  EBP = (ESP);
  /* 1202d813 cmp dword ptr [0x12054310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d81a jne 0x1202d830 */
  if (!C.zf) goto L_1202d830;
  /* 1202d81c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1202d81e call 0x1202d030 */
  push32(0x1202d823u); f_1202d030();
  /* 1202d823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d826 mov dword ptr [0x12054310], 1 */
  w32((uint32_t)(0x12054310), (0x1u));
L_1202d830:;
  /* 1202d830 pop ebp */
  EBP = (pop32());
  /* 1202d831 ret  */
  ESPCHK(0x1202d810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d840 @ 0x1202d840 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1202d840(void) {
  FTRACE(0x1202d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202d840 push ebp */
  push32((uint32_t)(EBP));
  /* 1202d841 mov ebp, esp */
  EBP = (ESP);
  /* 1202d843 push edi */
  push32((uint32_t)(EDI));
  /* 1202d844 push esi */
  push32((uint32_t)(ESI));
  /* 1202d845 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1202d848 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202d84b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d84e mov eax, ecx */
  EAX = (ECX);
  /* 1202d850 mov edx, ecx */
  EDX = (ECX);
  /* 1202d852 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d854 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d856 jbe 0x1202d860 */
  if ((C.cf||C.zf)) goto L_1202d860;
  /* 1202d858 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d85a jb 0x1202d9d8 */
  if (C.cf) goto L_1202d9d8;
L_1202d860:;
  /* 1202d860 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1202d866 jne 0x1202d87c */
  if (!C.zf) goto L_1202d87c;
  /* 1202d868 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202d86b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1202d86e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d871 jb 0x1202d89c */
  if (C.cf) goto L_1202d89c;
  /* 1202d873 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202d875 jmp dword ptr [edx*4 + 0x1202d988] */
  switch (EDX) {
    case 0: goto L_1202d998;
    case 1: goto L_1202d9a0;
    case 2: goto L_1202d9ac;
    case 3: goto L_1202d9c0;
    default: x86_unimpl("switch@0x1202d875 out of table"); return;
  }
L_1202d87c:;
  /* 1202d87c mov eax, edi */
  EAX = (EDI);
  /* 1202d87e mov edx, 3 */
  EDX = (0x3u);
  /* 1202d883 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202d886 jb 0x1202d894 */
  if (C.cf) goto L_1202d894;
  /* 1202d888 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1202d88b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d88d jmp dword ptr [eax*4 + 0x1202d8a0] */
  switch (EAX) {
    case 1: goto L_1202d8b0;
    case 2: goto L_1202d8dc;
    case 3: goto L_1202d900;
    default: x86_unimpl("switch@0x1202d88d out of table"); return;
  }
L_1202d894:;
  /* 1202d894 jmp dword ptr [ecx*4 + 0x1202d998] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1202d998)))); return;
  /* 1202d89b nop  */
  /* nop */
L_1202d89c:;
  /* 1202d89c jmp dword ptr [ecx*4 + 0x1202d91c] */
  switch (ECX) {
    case 0: goto L_1202d97f;
    case 1: goto L_1202d96c;
    case 2: goto L_1202d964;
    case 3: goto L_1202d95c;
    case 4: goto L_1202d954;
    case 5: goto L_1202d94c;
    case 6: goto L_1202d944;
    case 7: goto L_1202d93c;
    default: x86_unimpl("switch@0x1202d89c out of table"); return;
  }
  /* 1202d8a3 nop  */
  /* nop */
L_1202d8b0:;
  /* 1202d8b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d8b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202d8b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202d8b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202d8b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202d8bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202d8bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202d8c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202d8c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d8c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d8cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d8ce jb 0x1202d89c */
  if (C.cf) goto L_1202d89c;
  /* 1202d8d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202d8d2 jmp dword ptr [edx*4 + 0x1202d988] */
  switch (EDX) {
    case 0: goto L_1202d998;
    case 1: goto L_1202d9a0;
    case 2: goto L_1202d9ac;
    case 3: goto L_1202d9c0;
    default: x86_unimpl("switch@0x1202d8d2 out of table"); return;
  }
  /* 1202d8d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202d8dc:;
  /* 1202d8dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d8de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202d8e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202d8e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202d8e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202d8e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202d8eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d8ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d8f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d8f4 jb 0x1202d89c */
  if (C.cf) goto L_1202d89c;
  /* 1202d8f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202d8f8 jmp dword ptr [edx*4 + 0x1202d988] */
  switch (EDX) {
    case 0: goto L_1202d998;
    case 1: goto L_1202d9a0;
    case 2: goto L_1202d9ac;
    case 3: goto L_1202d9c0;
    default: x86_unimpl("switch@0x1202d8f8 out of table"); return;
  }
  /* 1202d8ff nop  */
  /* nop */
L_1202d900:;
  /* 1202d900 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202d902 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202d904 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202d906 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1202d907 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202d90a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202d90b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d90e jb 0x1202d89c */
  if (C.cf) goto L_1202d89c;
  /* 1202d910 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202d912 jmp dword ptr [edx*4 + 0x1202d988] */
  switch (EDX) {
    case 0: goto L_1202d998;
    case 1: goto L_1202d9a0;
    case 2: goto L_1202d9ac;
    case 3: goto L_1202d9c0;
    default: x86_unimpl("switch@0x1202d912 out of table"); return;
  }
  /* 1202d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202d93c:;
  /* 1202d93c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1202d940 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1202d944:;
  /* 1202d944 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1202d948 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1202d94c:;
  /* 1202d94c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1202d950 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1202d954:;
  /* 1202d954 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1202d958 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1202d95c:;
  /* 1202d95c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1202d960 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1202d964:;
  /* 1202d964 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1202d968 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1202d96c:;
  /* 1202d96c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1202d970 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1202d974 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1202d97b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202d97d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1202d97f:;
  /* 1202d97f jmp dword ptr [edx*4 + 0x1202d988] */
  switch (EDX) {
    case 0: goto L_1202d998;
    case 1: goto L_1202d9a0;
    case 2: goto L_1202d9ac;
    case 3: goto L_1202d9c0;
    default: x86_unimpl("switch@0x1202d97f out of table"); return;
  }
  /* 1202d986 mov edi, edi */
  EDI = (EDI);
L_1202d998:;
  /* 1202d998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d99b pop esi */
  ESI = (pop32());
  /* 1202d99c pop edi */
  EDI = (pop32());
  /* 1202d99d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202d99e ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202d99f nop  */
  /* nop */
L_1202d9a0:;
  /* 1202d9a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202d9a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202d9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d9a7 pop esi */
  ESI = (pop32());
  /* 1202d9a8 pop edi */
  EDI = (pop32());
  /* 1202d9a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202d9aa ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202d9ab nop  */
  /* nop */
L_1202d9ac:;
  /* 1202d9ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202d9ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202d9b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202d9b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202d9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d9b9 pop esi */
  ESI = (pop32());
  /* 1202d9ba pop edi */
  EDI = (pop32());
  /* 1202d9bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202d9bc ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202d9bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202d9c0:;
  /* 1202d9c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202d9c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202d9c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202d9c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202d9ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202d9cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202d9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202d9d3 pop esi */
  ESI = (pop32());
  /* 1202d9d4 pop edi */
  EDI = (pop32());
  /* 1202d9d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202d9d6 ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202d9d7 nop  */
  /* nop */
L_1202d9d8:;
  /* 1202d9d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1202d9dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1202d9e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1202d9e6 jne 0x1202da0c */
  if (!C.zf) goto L_1202da0c;
  /* 1202d9e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202d9eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1202d9ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202d9f1 jb 0x1202da00 */
  if (C.cf) goto L_1202da00;
  /* 1202d9f3 std  */
  C.df=1;
  /* 1202d9f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202d9f6 cld  */
  C.df=0;
  /* 1202d9f7 jmp dword ptr [edx*4 + 0x1202db20] */
  switch (EDX) {
    case 0: goto L_1202db30;
    case 1: goto L_1202db38;
    case 2: goto L_1202db48;
    case 3: goto L_1202db5c;
    default: x86_unimpl("switch@0x1202d9f7 out of table"); return;
  }
  /* 1202d9fe mov edi, edi */
  EDI = (EDI);
L_1202da00:;
  /* 1202da00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202da02 jmp dword ptr [ecx*4 + 0x1202dad0] */
  switch (ECX) {
    case 0: goto L_1202db17;
    default: x86_unimpl("switch@0x1202da02 out of table"); return;
  }
  /* 1202da09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202da0c:;
  /* 1202da0c mov eax, edi */
  EAX = (EDI);
  /* 1202da0e mov edx, 3 */
  EDX = (0x3u);
  /* 1202da13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202da16 jb 0x1202da24 */
  if (C.cf) goto L_1202da24;
  /* 1202da18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1202da1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202da1d jmp dword ptr [eax*4 + 0x1202da28] */
  switch (EAX) {
    case 1: goto L_1202da38;
    case 2: goto L_1202da58;
    case 3: goto L_1202da80;
    default: x86_unimpl("switch@0x1202da1d out of table"); return;
  }
L_1202da24:;
  /* 1202da24 jmp dword ptr [ecx*4 + 0x1202db20] */
  switch (ECX) {
    case 0: goto L_1202db30;
    case 1: goto L_1202db38;
    case 2: goto L_1202db48;
    case 3: goto L_1202db5c;
    default: x86_unimpl("switch@0x1202da24 out of table"); return;
  }
  /* 1202da2b nop  */
  /* nop */
L_1202da38:;
  /* 1202da38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202da3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202da3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202da40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1202da41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202da44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1202da45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202da48 jb 0x1202da00 */
  if (C.cf) goto L_1202da00;
  /* 1202da4a std  */
  C.df=1;
  /* 1202da4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202da4d cld  */
  C.df=0;
  /* 1202da4e jmp dword ptr [edx*4 + 0x1202db20] */
  switch (EDX) {
    case 0: goto L_1202db30;
    case 1: goto L_1202db38;
    case 2: goto L_1202db48;
    case 3: goto L_1202db5c;
    default: x86_unimpl("switch@0x1202da4e out of table"); return;
  }
  /* 1202da55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202da58:;
  /* 1202da58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202da5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202da5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202da60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202da63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202da66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202da69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202da6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202da6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202da72 jb 0x1202da00 */
  if (C.cf) goto L_1202da00;
  /* 1202da74 std  */
  C.df=1;
  /* 1202da75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202da77 cld  */
  C.df=0;
  /* 1202da78 jmp dword ptr [edx*4 + 0x1202db20] */
  switch (EDX) {
    case 0: goto L_1202db30;
    case 1: goto L_1202db38;
    case 2: goto L_1202db48;
    case 3: goto L_1202db5c;
    default: x86_unimpl("switch@0x1202da78 out of table"); return;
  }
  /* 1202da7f nop  */
  /* nop */
L_1202da80:;
  /* 1202da80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202da83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202da85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202da88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202da8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202da8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202da91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202da94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202da97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202da9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202da9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202daa0 jb 0x1202da00 */
  if (C.cf) goto L_1202da00;
  /* 1202daa6 std  */
  C.df=1;
  /* 1202daa7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202daa9 cld  */
  C.df=0;
  /* 1202daaa jmp dword ptr [edx*4 + 0x1202db20] */
  switch (EDX) {
    case 0: goto L_1202db30;
    case 1: goto L_1202db38;
    case 2: goto L_1202db48;
    case 3: goto L_1202db5c;
    default: x86_unimpl("switch@0x1202daaa out of table"); return;
  }
  /* 1202dab1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1202dab4 aam 0xda */
  x86_unimpl("aam @ 0x1202dab4");
  /* 1202dab6 add dl, byte ptr [edx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX))),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dab9 fiadd dword ptr [edx] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EDX)));
  /* 1202dabb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dabd fiadd dword ptr [edx] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EDX)));
  /* 1202dabf adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dac1 fiadd dword ptr [edx] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EDX)));
  /* 1202dac3 adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dac5 fiadd dword ptr [edx] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EDX)));
  /* 1202dac7 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dac9 fiadd dword ptr [edx] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EDX)));
  /* 1202dacb adc al, byte ptr [ebx + ebx*8] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBX + EBX*8))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dace add dl, byte ptr [edx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX))),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202dad4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1202dad8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1202dadc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1202dae0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1202dae4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1202dae8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1202daec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1202daf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1202daf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1202daf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1202dafc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1202db00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1202db04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1202db08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1202db0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1202db13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202db15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1202db17:;
  /* 1202db17 jmp dword ptr [edx*4 + 0x1202db20] */
  switch (EDX) {
    case 0: goto L_1202db30;
    case 1: goto L_1202db38;
    case 2: goto L_1202db48;
    case 3: goto L_1202db5c;
    default: x86_unimpl("switch@0x1202db17 out of table"); return;
  }
  /* 1202db1e mov edi, edi */
  EDI = (EDI);
L_1202db30:;
  /* 1202db30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202db33 pop esi */
  ESI = (pop32());
  /* 1202db34 pop edi */
  EDI = (pop32());
  /* 1202db35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202db36 ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202db37 nop  */
  /* nop */
L_1202db38:;
  /* 1202db38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202db3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202db3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202db41 pop esi */
  ESI = (pop32());
  /* 1202db42 pop edi */
  EDI = (pop32());
  /* 1202db43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202db44 ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202db45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202db48:;
  /* 1202db48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202db4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202db4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202db51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202db54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202db57 pop esi */
  ESI = (pop32());
  /* 1202db58 pop edi */
  EDI = (pop32());
  /* 1202db59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202db5a ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
  /* 1202db5b nop  */
  /* nop */
L_1202db5c:;
  /* 1202db5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202db5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202db62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202db65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202db68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202db6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202db6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202db71 pop esi */
  ESI = (pop32());
  /* 1202db72 pop edi */
  EDI = (pop32());
  /* 1202db73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202db74 ret  */
  ESPCHK(0x1202d840u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1202db80 (104 bytes, 43 insns) */
void f_1202db80(void) {
  FTRACE(0x1202db80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202db80 push ebx */
  push32((uint32_t)(EBX));
  /* 1202db81 push esi */
  push32((uint32_t)(ESI));
  /* 1202db82 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1202db86 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202db88 jne 0x1202dba2 */
  if (!C.zf) goto L_1202dba2;
  /* 1202db8a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1202db8e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202db92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202db94 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1202db96 mov ebx, eax */
  EBX = (EAX);
  /* 1202db98 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1202db9c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1202db9e mov edx, ebx */
  EDX = (EBX);
  /* 1202dba0 jmp 0x1202dbe3 */
  goto L_1202dbe3;
L_1202dba2:;
  /* 1202dba2 mov ecx, eax */
  ECX = (EAX);
  /* 1202dba4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1202dba8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202dbac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1202dbb0:;
  /* 1202dbb0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1202dbb2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1202dbb4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1202dbb6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1202dbb8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202dbba jne 0x1202dbb0 */
  if (!C.zf) goto L_1202dbb0;
  /* 1202dbbc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1202dbbe mov esi, eax */
  ESI = (EAX);
  /* 1202dbc0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1202dbc4 mov ecx, eax */
  ECX = (EAX);
  /* 1202dbc6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1202dbca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1202dbcc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dbce jb 0x1202dbde */
  if (C.cf) goto L_1202dbde;
  /* 1202dbd0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dbd4 ja 0x1202dbde */
  if ((!C.cf&&!C.zf)) goto L_1202dbde;
  /* 1202dbd6 jb 0x1202dbdf */
  if (C.cf) goto L_1202dbdf;
  /* 1202dbd8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dbdc jbe 0x1202dbdf */
  if ((C.cf||C.zf)) goto L_1202dbdf;
L_1202dbde:;
  /* 1202dbde dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1202dbdf:;
  /* 1202dbdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202dbe1 mov eax, esi */
  EAX = (ESI);
L_1202dbe3:;
  /* 1202dbe3 pop esi */
  ESI = (pop32());
  /* 1202dbe4 pop ebx */
  EBX = (pop32());
  /* 1202dbe5 ret 0x10 */
  ESPCHK(0x1202db80u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1202dbf0 (117 bytes, 44 insns) */
void f_1202dbf0(void) {
  FTRACE(0x1202dbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202dbf0 push ebx */
  push32((uint32_t)(EBX));
  /* 1202dbf1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1202dbf5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202dbf7 jne 0x1202dc11 */
  if (!C.zf) goto L_1202dc11;
  /* 1202dbf9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202dbfd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1202dc01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202dc03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1202dc05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1202dc09 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1202dc0b mov eax, edx */
  EAX = (EDX);
  /* 1202dc0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1202dc0f jmp 0x1202dc61 */
  goto L_1202dc61;
L_1202dc11:;
  /* 1202dc11 mov ecx, eax */
  ECX = (EAX);
  /* 1202dc13 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202dc17 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1202dc1b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1202dc1f:;
  /* 1202dc1f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1202dc21 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1202dc23 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1202dc25 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1202dc27 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202dc29 jne 0x1202dc1f */
  if (!C.zf) goto L_1202dc1f;
  /* 1202dc2b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1202dc2d mov ecx, eax */
  ECX = (EAX);
  /* 1202dc2f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1202dc33 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1202dc34 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1202dc38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dc3a jb 0x1202dc4a */
  if (C.cf) goto L_1202dc4a;
  /* 1202dc3c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dc40 ja 0x1202dc4a */
  if ((!C.cf&&!C.zf)) goto L_1202dc4a;
  /* 1202dc42 jb 0x1202dc52 */
  if (C.cf) goto L_1202dc52;
  /* 1202dc44 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dc48 jbe 0x1202dc52 */
  if ((C.cf||C.zf)) goto L_1202dc52;
L_1202dc4a:;
  /* 1202dc4a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202dc4e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1202dc52:;
  /* 1202dc52 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202dc56 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202dc5a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202dc5c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202dc5e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1202dc61:;
  /* 1202dc61 pop ebx */
  EBX = (pop32());
  /* 1202dc62 ret 0x10 */
  ESPCHK(0x1202dbf0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000dc70 @ 0x1202dc70 (628 bytes, 214 insns) */
void f_1202dc70(void) {
  FTRACE(0x1202dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1202dc71 mov ebp, esp */
  EBP = (ESP);
  /* 1202dc73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202dc76 push ebx */
  push32((uint32_t)(EBX));
  /* 1202dc77 push esi */
  push32((uint32_t)(ESI));
  /* 1202dc78 push edi */
  push32((uint32_t)(EDI));
L_1202dc79:;
  /* 1202dc79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dc7d jne 0x1202dc9d */
  if (!C.zf) goto L_1202dc9d;
  /* 1202dc7f push 0x1204e44c */
  push32((uint32_t)(0x1204e44cu));
  /* 1202dc84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202dc86 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1202dc88 push 0x1204e440 */
  push32((uint32_t)(0x1204e440u));
  /* 1202dc8d push 2 */
  push32((uint32_t)(0x2u));
  /* 1202dc8f call 0x12026020 */
  push32(0x1202dc94u); f_12026020();
  /* 1202dc94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dc97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dc9a jne 0x1202dc9d */
  if (!C.zf) goto L_1202dc9d;
  /* 1202dc9c int3  */
  x86_unimpl("int3 @ 0x1202dc9c");
L_1202dc9d:;
  /* 1202dc9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202dc9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202dca1 jne 0x1202dc79 */
  if (!C.zf) goto L_1202dc79;
  /* 1202dca3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202dca6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202dca9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1202dcaf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202dcb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcb5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202dcb8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1202dcbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202dcc0 je 0x1202dccf */
  if (C.zf) goto L_1202dccf;
  /* 1202dcc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcc5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1202dcc8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1202dccb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202dccd je 0x1202dce5 */
  if (C.zf) goto L_1202dce5;
L_1202dccf:;
  /* 1202dccf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcd2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1202dcd5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1202dcd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcda mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1202dcdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202dce0 jmp 0x1202dedd */
  goto L_1202dedd;
L_1202dce5:;
  /* 1202dce5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dce8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1202dceb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1202dcee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202dcf0 je 0x1202dd3c */
  if (C.zf) goto L_1202dd3c;
  /* 1202dcf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcf5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1202dcfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dcff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1202dd02 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1202dd05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202dd07 je 0x1202dd25 */
  if (C.zf) goto L_1202dd25;
  /* 1202dd09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd0f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202dd12 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202dd14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202dd1a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1202dd1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd20 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1202dd23 jmp 0x1202dd3c */
  goto L_1202dd3c;
L_1202dd25:;
  /* 1202dd25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd28 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202dd2b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1202dd2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd31 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1202dd34 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202dd37 jmp 0x1202dedd */
  goto L_1202dedd;
L_1202dd3c:;
  /* 1202dd3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202dd42 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1202dd45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd48 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1202dd4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd4e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202dd51 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1202dd54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd57 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1202dd5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd5d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1202dd64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202dd6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202dd6e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1202dd71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dd74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1202dd77 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1202dd7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202dd7f jne 0x1202ddaf */
  if (!C.zf) goto L_1202ddaf;
  /* 1202dd81 cmp dword ptr [ebp - 8], 0x12051140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12051140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dd88 je 0x1202dd93 */
  if (C.zf) goto L_1202dd93;
  /* 1202dd8a cmp dword ptr [ebp - 8], 0x12051160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12051160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202dd91 jne 0x1202dda3 */
  if (!C.zf) goto L_1202dda3;
L_1202dd93:;
  /* 1202dd93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202dd96 push edx */
  push32((uint32_t)(EDX));
  /* 1202dd97 call 0x1202fbe0 */
  push32(0x1202dd9cu); f_1202fbe0();
  /* 1202dd9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dd9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202dda1 jne 0x1202ddaf */
  if (!C.zf) goto L_1202ddaf;
L_1202dda3:;
  /* 1202dda3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dda6 push eax */
  push32((uint32_t)(EAX));
  /* 1202dda7 call 0x1202fb10 */
  push32(0x1202ddacu); f_1202fb10();
  /* 1202ddac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202ddaf:;
  /* 1202ddaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ddb2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202ddb5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1202ddbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202ddbd je 0x1202de9b */
  if (C.zf) goto L_1202de9b;
L_1202ddc3:;
  /* 1202ddc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ddc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ddc9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1202ddcb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ddce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202ddd0 jge 0x1202ddf3 */
  if ((C.sf==C.of)) goto L_1202ddf3;
  /* 1202ddd2 push 0x1204e400 */
  push32((uint32_t)(0x1204e400u));
  /* 1202ddd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202ddd9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1202ddde push 0x1204e440 */
  push32((uint32_t)(0x1204e440u));
  /* 1202dde3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202dde5 call 0x12026020 */
  push32(0x1202ddeau); f_12026020();
  /* 1202ddea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dded cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ddf0 jne 0x1202ddf3 */
  if (!C.zf) goto L_1202ddf3;
  /* 1202ddf2 int3  */
  x86_unimpl("int3 @ 0x1202ddf2");
L_1202ddf3:;
  /* 1202ddf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202ddf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202ddf7 jne 0x1202ddc3 */
  if (!C.zf) goto L_1202ddc3;
  /* 1202ddf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ddfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202ddff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1202de01 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202de04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202de07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202de0a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1202de0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202de10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202de13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1202de15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202de18 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1202de1b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202de1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202de21 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1202de24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202de28 jle 0x1202de46 */
  if ((C.zf||C.sf!=C.of)) goto L_1202de46;
  /* 1202de2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202de2d push ecx */
  push32((uint32_t)(ECX));
  /* 1202de2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202de31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202de34 push eax */
  push32((uint32_t)(EAX));
  /* 1202de35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202de38 push ecx */
  push32((uint32_t)(ECX));
  /* 1202de39 call 0x1202f800 */
  push32(0x1202de3eu); f_1202f800();
  /* 1202de3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202de41 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202de44 jmp 0x1202de8e */
  goto L_1202de8e;
L_1202de46:;
  /* 1202de46 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202de4a je 0x1202de69 */
  if (C.zf) goto L_1202de69;
  /* 1202de4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202de4f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1202de52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202de55 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1202de58 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202de5b mov ecx, dword ptr [edx*4 + 0x120541c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 1202de62 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202de64 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1202de67 jmp 0x1202de70 */
  goto L_1202de70;
L_1202de69:;
  /* 1202de69 mov dword ptr [ebp - 0x14], 0x12050a60 */
  w32((uint32_t)(EBP + -0x14), (0x12050a60u));
L_1202de70:;
  /* 1202de70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1202de73 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1202de77 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1202de7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202de7c je 0x1202de8e */
  if (C.zf) goto L_1202de8e;
  /* 1202de7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1202de80 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202de82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202de85 push ecx */
  push32((uint32_t)(ECX));
  /* 1202de86 call 0x1202f6b0 */
  push32(0x1202de8bu); f_1202f6b0();
  /* 1202de8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202de8e:;
  /* 1202de8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202de91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202de94 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1202de97 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1202de99 jmp 0x1202deb9 */
  goto L_1202deb9;
L_1202de9b:;
  /* 1202de9b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1202dea2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202dea5 push edx */
  push32((uint32_t)(EDX));
  /* 1202dea6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1202dea9 push eax */
  push32((uint32_t)(EAX));
  /* 1202deaa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202dead push ecx */
  push32((uint32_t)(ECX));
  /* 1202deae call 0x1202f800 */
  push32(0x1202deb3u); f_1202f800();
  /* 1202deb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202deb6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1202deb9:;
  /* 1202deb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202debc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202debf je 0x1202ded5 */
  if (C.zf) goto L_1202ded5;
  /* 1202dec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202dec4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1202dec7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1202deca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202decd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1202ded0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202ded3 jmp 0x1202dedd */
  goto L_1202dedd;
L_1202ded5:;
  /* 1202ded5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ded8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1202dedd:;
  /* 1202dedd pop edi */
  EDI = (pop32());
  /* 1202dede pop esi */
  ESI = (pop32());
  /* 1202dedf pop ebx */
  EBX = (pop32());
  /* 1202dee0 mov esp, ebp */
  ESP = (EBP);
  /* 1202dee2 pop ebp */
  EBP = (pop32());
  /* 1202dee3 ret  */
  ESPCHK(0x1202dc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000def0 @ 0x1202def0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1202def0(void) {
  FTRACE(0x1202def0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202def0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202def1 mov ebp, esp */
  EBP = (ESP);
  /* 1202def3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202def9 push ebx */
  push32((uint32_t)(EBX));
  /* 1202defa push esi */
  push32((uint32_t)(ESI));
  /* 1202defb push edi */
  push32((uint32_t)(EDI));
  /* 1202defc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1202df03 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1202df0d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1202df14:;
  /* 1202df14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202df17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1202df19 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1202df1c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202df20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202df23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202df26 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1202df29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202df2b je 0x1202eb07 */
  if (C.zf) goto L_1202eb07;
  /* 1202df31 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202df38 jl 0x1202eb07 */
  if ((C.sf!=C.of)) goto L_1202eb07;
  /* 1202df3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202df42 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202df45 jl 0x1202df66 */
  if ((C.sf!=C.of)) goto L_1202df66;
  /* 1202df47 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202df4b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202df4e jg 0x1202df66 */
  if ((!C.zf&&C.sf==C.of)) goto L_1202df66;
  /* 1202df50 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202df54 movsx ecx, byte ptr [eax + 0x1204e438] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1204e438))));
  /* 1202df5b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1202df5e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1202df64 jmp 0x1202df70 */
  goto L_1202df70;
L_1202df66:;
  /* 1202df66 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1202df70:;
  /* 1202df70 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1202df76 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1202df79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202df7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202df7f movsx edx, byte ptr [ecx + eax*8 + 0x1204e458] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1204e458))));
  /* 1202df87 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1202df8a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1202df8d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1202df90 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1202df96 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202df9d ja 0x1202eb02 */
  if ((!C.cf&&!C.zf)) goto L_1202eb02;
  /* 1202dfa3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1202dfa9 jmp dword ptr [ecx*4 + 0x1202eb14] */
  switch (ECX) {
    case 0: goto L_1202dfb0;
    case 1: goto L_1202e04a;
    case 2: goto L_1202e08c;
    case 3: goto L_1202e0fb;
    case 4: goto L_1202e153;
    case 5: goto L_1202e162;
    case 6: goto L_1202e1ae;
    case 7: goto L_1202e241;
    case 8: goto L_1202e0d8;
    case 9: goto L_1202e0e3;
    case 10: goto L_1202e0ce;
    case 11: goto L_1202e0c3;
    case 12: goto L_1202e0ee;
    case 13: goto L_1202e0f6;
    default: x86_unimpl("switch@0x1202dfa9 out of table"); return;
  }
L_1202dfb0:;
  /* 1202dfb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1202dfb7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202dfba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1202dfc0 mov eax, dword ptr [0x12050c98] */
  EAX = (r32((uint32_t)(0x12050c98)));
  /* 1202dfc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202dfc7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1202dfcb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1202dfd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202dfd3 je 0x1202e02d */
  if (C.zf) goto L_1202e02d;
  /* 1202dfd5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1202dfdb push edx */
  push32((uint32_t)(EDX));
  /* 1202dfdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202dfdf push eax */
  push32((uint32_t)(EAX));
  /* 1202dfe0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202dfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 1202dfe5 call 0x1202ec20 */
  push32(0x1202dfeau); f_1202ec20();
  /* 1202dfea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dfed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202dff0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1202dff2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1202dff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202dff8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202dffb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1202dffe:;
  /* 1202dffe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e004 jne 0x1202e027 */
  if (!C.zf) goto L_1202e027;
  /* 1202e006 push 0x1204e4d8 */
  push32((uint32_t)(0x1204e4d8u));
  /* 1202e00b push 0 */
  push32((uint32_t)(0x0u));
  /* 1202e00d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1202e012 push 0x1204e4cc */
  push32((uint32_t)(0x1204e4ccu));
  /* 1202e017 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202e019 call 0x12026020 */
  push32(0x1202e01eu); f_12026020();
  /* 1202e01e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e021 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e024 jne 0x1202e027 */
  if (!C.zf) goto L_1202e027;
  /* 1202e026 int3  */
  x86_unimpl("int3 @ 0x1202e026");
L_1202e027:;
  /* 1202e027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202e029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e02b jne 0x1202dffe */
  if (!C.zf) goto L_1202dffe;
L_1202e02d:;
  /* 1202e02d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1202e033 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202e037 push edx */
  push32((uint32_t)(EDX));
  /* 1202e038 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e03c push eax */
  push32((uint32_t)(EAX));
  /* 1202e03d call 0x1202ec20 */
  push32(0x1202e042u); f_1202ec20();
  /* 1202e042 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e045 jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e04a:;
  /* 1202e04a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1202e051 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202e054 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1202e05a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1202e060 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1202e066 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1202e06c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1202e06f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202e076 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1202e080 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1202e087 jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e08c:;
  /* 1202e08c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e090 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1202e096 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1202e09c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e09f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1202e0a5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e0ac ja 0x1202e0f6 */
  if ((!C.cf&&!C.zf)) goto L_1202e0f6;
  /* 1202e0ae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1202e0b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202e0b6 mov al, byte ptr [ecx + 0x1202eb4c] */
  AL = (r8((uint32_t)(ECX + 0x1202eb4c)));
  /* 1202e0bc jmp dword ptr [eax*4 + 0x1202eb34] */
  switch (EAX) {
    case 0: goto L_1202e0d8;
    case 1: goto L_1202e0e3;
    case 2: goto L_1202e0ce;
    case 3: goto L_1202e0c3;
    case 4: goto L_1202e0ee;
    case 5: goto L_1202e0f6;
    default: x86_unimpl("switch@0x1202e0bc out of table"); return;
  }
L_1202e0c3:;
  /* 1202e0c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e0c6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e0c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202e0cc jmp 0x1202e0f6 */
  goto L_1202e0f6;
L_1202e0ce:;
  /* 1202e0ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e0d1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1202e0d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202e0d6 jmp 0x1202e0f6 */
  goto L_1202e0f6;
L_1202e0d8:;
  /* 1202e0d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e0db or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e0de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202e0e1 jmp 0x1202e0f6 */
  goto L_1202e0f6;
L_1202e0e3:;
  /* 1202e0e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e0e6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1202e0e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202e0ec jmp 0x1202e0f6 */
  goto L_1202e0f6;
L_1202e0ee:;
  /* 1202e0ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e0f1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1202e0f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202e0f6:;
  /* 1202e0f6 jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e0fb:;
  /* 1202e0fb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e0ff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e102 jne 0x1202e137 */
  if (!C.zf) goto L_1202e137;
  /* 1202e104 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1202e107 push edx */
  push32((uint32_t)(EDX));
  /* 1202e108 call 0x1202ed30 */
  push32(0x1202e10du); f_1202ed30();
  /* 1202e10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e110 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1202e116 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e11d jge 0x1202e135 */
  if ((C.sf==C.of)) goto L_1202e135;
  /* 1202e11f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e122 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1202e124 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202e127 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1202e12d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202e12f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1202e135:;
  /* 1202e135 jmp 0x1202e14e */
  goto L_1202e14e;
L_1202e137:;
  /* 1202e137 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1202e13d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202e140 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e144 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1202e148 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1202e14e:;
  /* 1202e14e jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e153:;
  /* 1202e153 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1202e15d jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e162:;
  /* 1202e162 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e166 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e169 jne 0x1202e192 */
  if (!C.zf) goto L_1202e192;
  /* 1202e16b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1202e16e push eax */
  push32((uint32_t)(EAX));
  /* 1202e16f call 0x1202ed30 */
  push32(0x1202e174u); f_1202ed30();
  /* 1202e174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e177 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1202e17d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e184 jge 0x1202e190 */
  if ((C.sf==C.of)) goto L_1202e190;
  /* 1202e186 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1202e190:;
  /* 1202e190 jmp 0x1202e1a9 */
  goto L_1202e1a9;
L_1202e192:;
  /* 1202e192 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1202e198 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202e19b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e19f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1202e1a3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1202e1a9:;
  /* 1202e1a9 jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e1ae:;
  /* 1202e1ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e1b2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1202e1b8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1202e1be sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e1c1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1202e1c7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e1ce ja 0x1202e23c */
  if ((!C.cf&&!C.zf)) goto L_1202e23c;
  /* 1202e1d0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1202e1d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202e1d8 mov al, byte ptr [ecx + 0x1202eb71] */
  AL = (r8((uint32_t)(ECX + 0x1202eb71)));
  /* 1202e1de jmp dword ptr [eax*4 + 0x1202eb5d] */
  switch (EAX) {
    case 0: goto L_1202e1f0;
    case 1: goto L_1202e229;
    case 2: goto L_1202e1e5;
    case 3: goto L_1202e233;
    case 4: goto L_1202e23c;
    default: x86_unimpl("switch@0x1202e1de out of table"); return;
  }
L_1202e1e5:;
  /* 1202e1e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e1e8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e1eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202e1ee jmp 0x1202e23c */
  goto L_1202e23c;
L_1202e1f0:;
  /* 1202e1f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202e1f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1202e1f6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e1f9 jne 0x1202e21b */
  if (!C.zf) goto L_1202e21b;
  /* 1202e1fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202e1fe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1202e202 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e205 jne 0x1202e21b */
  if (!C.zf) goto L_1202e21b;
  /* 1202e207 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202e20a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e20d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1202e210 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e213 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1202e216 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202e219 jmp 0x1202e227 */
  goto L_1202e227;
L_1202e21b:;
  /* 1202e21b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1202e222 jmp 0x1202dfb0 */
  goto L_1202dfb0;
L_1202e227:;
  /* 1202e227 jmp 0x1202e23c */
  goto L_1202e23c;
L_1202e229:;
  /* 1202e229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e22c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1202e22e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202e231 jmp 0x1202e23c */
  goto L_1202e23c;
L_1202e233:;
  /* 1202e233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e236 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1202e239 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1202e23c:;
  /* 1202e23c jmp 0x1202eb02 */
  goto L_1202eb02;
L_1202e241:;
  /* 1202e241 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e245 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1202e24b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1202e251 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e254 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1202e25a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e261 ja 0x1202e927 */
  if ((!C.cf&&!C.zf)) goto L_1202e927;
  /* 1202e267 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1202e26d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202e26f mov cl, byte ptr [edx + 0x1202ebdc] */
  CL = (r8((uint32_t)(EDX + 0x1202ebdc)));
  /* 1202e275 jmp dword ptr [ecx*4 + 0x1202eba0] */
  switch (ECX) {
    case 0: goto L_1202e27c;
    case 1: goto L_1202e510;
    case 2: goto L_1202e3a0;
    case 3: goto L_1202e649;
    case 4: goto L_1202e30b;
    case 5: goto L_1202e291;
    case 6: goto L_1202e61b;
    case 7: goto L_1202e520;
    case 8: goto L_1202e4c5;
    case 9: goto L_1202e695;
    case 10: goto L_1202e63f;
    case 11: goto L_1202e3b6;
    case 12: goto L_1202e633;
    case 13: goto L_1202e655;
    case 14: goto L_1202e927;
    default: x86_unimpl("switch@0x1202e275 out of table"); return;
  }
L_1202e27c:;
  /* 1202e27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e27f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e286 jne 0x1202e291 */
  if (!C.zf) goto L_1202e291;
  /* 1202e288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e28b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1202e28e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1202e291:;
  /* 1202e291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e294 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e29a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e29c je 0x1202e2d7 */
  if (C.zf) goto L_1202e2d7;
  /* 1202e29e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1202e2a1 push eax */
  push32((uint32_t)(EAX));
  /* 1202e2a2 call 0x1202ed70 */
  push32(0x1202e2a7u); f_1202ed70();
  /* 1202e2a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e2aa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1202e2ae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1202e2b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e2b3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1202e2b9 push edx */
  push32((uint32_t)(EDX));
  /* 1202e2ba call 0x1202fe50 */
  push32(0x1202e2bfu); f_1202fe50();
  /* 1202e2bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e2c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1202e2c5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e2c9 jge 0x1202e2d5 */
  if ((C.sf==C.of)) goto L_1202e2d5;
  /* 1202e2cb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1202e2d5:;
  /* 1202e2d5 jmp 0x1202e2fd */
  goto L_1202e2fd;
L_1202e2d7:;
  /* 1202e2d7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1202e2da push eax */
  push32((uint32_t)(EAX));
  /* 1202e2db call 0x1202ed30 */
  push32(0x1202e2e0u); f_1202ed30();
  /* 1202e2e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e2e3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1202e2ea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1202e2f0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1202e2f6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1202e2fd:;
  /* 1202e2fd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1202e303 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1202e306 jmp 0x1202e927 */
  goto L_1202e927;
L_1202e30b:;
  /* 1202e30b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1202e30e push eax */
  push32((uint32_t)(EAX));
  /* 1202e30f call 0x1202ed30 */
  push32(0x1202e314u); f_1202ed30();
  /* 1202e314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e317 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1202e31d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e324 je 0x1202e332 */
  if (C.zf) goto L_1202e332;
  /* 1202e326 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1202e32c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e330 jne 0x1202e34c */
  if (!C.zf) goto L_1202e34c;
L_1202e332:;
  /* 1202e332 mov edx, dword ptr [0x12050fb0] */
  EDX = (r32((uint32_t)(0x12050fb0)));
  /* 1202e338 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1202e33b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e33e push eax */
  push32((uint32_t)(EAX));
  /* 1202e33f call 0x12029d90 */
  push32(0x1202e344u); f_12029d90();
  /* 1202e344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e347 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1202e34a jmp 0x1202e39b */
  goto L_1202e39b;
L_1202e34c:;
  /* 1202e34c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e34f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e355 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202e357 je 0x1202e37c */
  if (C.zf) goto L_1202e37c;
  /* 1202e359 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1202e35f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1202e362 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202e365 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1202e36b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1202e36e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1202e370 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1202e373 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1202e37a jmp 0x1202e39b */
  goto L_1202e39b;
L_1202e37c:;
  /* 1202e37c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1202e383 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1202e389 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202e38c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1202e38f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1202e395 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1202e398 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1202e39b:;
  /* 1202e39b jmp 0x1202e927 */
  goto L_1202e927;
L_1202e3a0:;
  /* 1202e3a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e3a3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e3a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202e3ab jne 0x1202e3b6 */
  if (!C.zf) goto L_1202e3b6;
  /* 1202e3ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e3b0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1202e3b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202e3b6:;
  /* 1202e3b6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e3bd jne 0x1202e3cb */
  if (!C.zf) goto L_1202e3cb;
  /* 1202e3bf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1202e3c9 jmp 0x1202e3d7 */
  goto L_1202e3d7;
L_1202e3cb:;
  /* 1202e3cb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1202e3d1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1202e3d7:;
  /* 1202e3d7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1202e3dd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1202e3e3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1202e3e6 push edx */
  push32((uint32_t)(EDX));
  /* 1202e3e7 call 0x1202ed30 */
  push32(0x1202e3ecu); f_1202ed30();
  /* 1202e3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e3ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202e3f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e3f5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e3fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e3fc je 0x1202e466 */
  if (C.zf) goto L_1202e466;
  /* 1202e3fe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e402 jne 0x1202e40d */
  if (!C.zf) goto L_1202e40d;
  /* 1202e404 mov ecx, dword ptr [0x12050fb4] */
  ECX = (r32((uint32_t)(0x12050fb4)));
  /* 1202e40a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1202e40d:;
  /* 1202e40d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1202e414 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e417 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1202e41d:;
  /* 1202e41d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1202e423 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1202e429 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e42c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1202e432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e434 je 0x1202e456 */
  if (C.zf) goto L_1202e456;
  /* 1202e436 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1202e43c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202e43e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1202e441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e443 je 0x1202e456 */
  if (C.zf) goto L_1202e456;
  /* 1202e445 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1202e44b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e44e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1202e454 jmp 0x1202e41d */
  goto L_1202e41d;
L_1202e456:;
  /* 1202e456 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1202e45c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e45f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1202e461 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1202e464 jmp 0x1202e4c0 */
  goto L_1202e4c0;
L_1202e466:;
  /* 1202e466 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e46a jne 0x1202e474 */
  if (!C.zf) goto L_1202e474;
  /* 1202e46c mov eax, dword ptr [0x12050fb0] */
  EAX = (r32((uint32_t)(0x12050fb0)));
  /* 1202e471 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1202e474:;
  /* 1202e474 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e477 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1202e47d:;
  /* 1202e47d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1202e483 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1202e489 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e48c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1202e492 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e494 je 0x1202e4b4 */
  if (C.zf) goto L_1202e4b4;
  /* 1202e496 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1202e49c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1202e49f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e4a1 je 0x1202e4b4 */
  if (C.zf) goto L_1202e4b4;
  /* 1202e4a3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1202e4a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e4ac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1202e4b2 jmp 0x1202e47d */
  goto L_1202e47d;
L_1202e4b4:;
  /* 1202e4b4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1202e4ba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e4bd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1202e4c0:;
  /* 1202e4c0 jmp 0x1202e927 */
  goto L_1202e927;
L_1202e4c5:;
  /* 1202e4c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1202e4c8 push edx */
  push32((uint32_t)(EDX));
  /* 1202e4c9 call 0x1202ed30 */
  push32(0x1202e4ceu); f_1202ed30();
  /* 1202e4ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e4d1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1202e4d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e4da and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e4dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e4df je 0x1202e4f3 */
  if (C.zf) goto L_1202e4f3;
  /* 1202e4e1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1202e4e7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1202e4ee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1202e4f1 jmp 0x1202e501 */
  goto L_1202e501;
L_1202e4f3:;
  /* 1202e4f3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1202e4f9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1202e4ff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1202e501:;
  /* 1202e501 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1202e50b jmp 0x1202e927 */
  goto L_1202e927;
L_1202e510:;
  /* 1202e510 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1202e517 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1202e51a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202e51d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1202e520:;
  /* 1202e520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e523 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1202e525 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202e528 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1202e52e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1202e531 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e538 jge 0x1202e546 */
  if ((C.sf==C.of)) goto L_1202e546;
  /* 1202e53a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1202e544 jmp 0x1202e562 */
  goto L_1202e562;
L_1202e546:;
  /* 1202e546 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e54d jne 0x1202e562 */
  if (!C.zf) goto L_1202e562;
  /* 1202e54f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e553 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e556 jne 0x1202e562 */
  if (!C.zf) goto L_1202e562;
  /* 1202e558 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1202e562:;
  /* 1202e562 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202e565 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e568 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1202e56b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202e56e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e571 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202e573 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202e576 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1202e57c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1202e582 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202e585 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e586 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1202e58c push edx */
  push32((uint32_t)(EDX));
  /* 1202e58d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e591 push eax */
  push32((uint32_t)(EAX));
  /* 1202e592 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e595 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e596 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1202e59c push edx */
  push32((uint32_t)(EDX));
  /* 1202e59d call dword ptr [0x120513a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120513a0))), 0x1202e5a3u);
  /* 1202e5a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e5a9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e5b0 je 0x1202e5c8 */
  if (C.zf) goto L_1202e5c8;
  /* 1202e5b2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e5b9 jne 0x1202e5c8 */
  if (!C.zf) goto L_1202e5c8;
  /* 1202e5bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e5be push ecx */
  push32((uint32_t)(ECX));
  /* 1202e5bf call dword ptr [0x120513ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120513ac))), 0x1202e5c5u);
  /* 1202e5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202e5c8:;
  /* 1202e5c8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1202e5cc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e5cf jne 0x1202e5ea */
  if (!C.zf) goto L_1202e5ea;
  /* 1202e5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e5d4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e5d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e5db jne 0x1202e5ea */
  if (!C.zf) goto L_1202e5ea;
  /* 1202e5dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e5e1 call dword ptr [0x120513a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120513a4))), 0x1202e5e7u);
  /* 1202e5e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202e5ea:;
  /* 1202e5ea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e5ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1202e5f0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e5f3 jne 0x1202e607 */
  if (!C.zf) goto L_1202e607;
  /* 1202e5f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e5f8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1202e5fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202e5fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e601 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e604 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1202e607:;
  /* 1202e607 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e60a push eax */
  push32((uint32_t)(EAX));
  /* 1202e60b call 0x12029d90 */
  push32(0x1202e610u); f_12029d90();
  /* 1202e610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e613 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1202e616 jmp 0x1202e927 */
  goto L_1202e927;
L_1202e61b:;
  /* 1202e61b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e61e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e621 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202e624 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1202e62e jmp 0x1202e6b5 */
  goto L_1202e6b5;
L_1202e633:;
  /* 1202e633 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1202e63d jmp 0x1202e6b5 */
  goto L_1202e6b5;
L_1202e63f:;
  /* 1202e63f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1202e649:;
  /* 1202e649 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1202e653 jmp 0x1202e65f */
  goto L_1202e65f;
L_1202e655:;
  /* 1202e655 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1202e65f:;
  /* 1202e65f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1202e669 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e66c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e672 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e674 je 0x1202e693 */
  if (C.zf) goto L_1202e693;
  /* 1202e676 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1202e67d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1202e683 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e686 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1202e68c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1202e693:;
  /* 1202e693 jmp 0x1202e6b5 */
  goto L_1202e6b5;
L_1202e695:;
  /* 1202e695 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1202e69f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e6a2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e6a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202e6aa je 0x1202e6b5 */
  if (C.zf) goto L_1202e6b5;
  /* 1202e6ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e6af or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1202e6b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202e6b5:;
  /* 1202e6b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e6b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e6bf je 0x1202e6de */
  if (C.zf) goto L_1202e6de;
  /* 1202e6c1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1202e6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e6c5 call 0x1202ed50 */
  push32(0x1202e6cau); f_1202ed50();
  /* 1202e6ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e6cd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1202e6d3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1202e6d9 jmp 0x1202e76f */
  goto L_1202e76f;
L_1202e6de:;
  /* 1202e6de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e6e1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e6e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e6e6 je 0x1202e730 */
  if (C.zf) goto L_1202e730;
  /* 1202e6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e6eb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e6ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e6f0 je 0x1202e710 */
  if (C.zf) goto L_1202e710;
  /* 1202e6f2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1202e6f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e6f6 call 0x1202ed30 */
  push32(0x1202e6fbu); f_1202ed30();
  /* 1202e6fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e6fe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1202e701 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1202e702 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1202e708 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1202e70e jmp 0x1202e72e */
  goto L_1202e72e;
L_1202e710:;
  /* 1202e710 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1202e713 push edx */
  push32((uint32_t)(EDX));
  /* 1202e714 call 0x1202ed30 */
  push32(0x1202e719u); f_1202ed30();
  /* 1202e719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e71c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202e721 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1202e722 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1202e728 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1202e72e:;
  /* 1202e72e jmp 0x1202e76f */
  goto L_1202e76f;
L_1202e730:;
  /* 1202e730 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e733 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e738 je 0x1202e755 */
  if (C.zf) goto L_1202e755;
  /* 1202e73a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1202e73d push ecx */
  push32((uint32_t)(ECX));
  /* 1202e73e call 0x1202ed30 */
  push32(0x1202e743u); f_1202ed30();
  /* 1202e743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e746 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1202e747 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1202e74d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1202e753 jmp 0x1202e76f */
  goto L_1202e76f;
L_1202e755:;
  /* 1202e755 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1202e758 push edx */
  push32((uint32_t)(EDX));
  /* 1202e759 call 0x1202ed30 */
  push32(0x1202e75eu); f_1202ed30();
  /* 1202e75e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e761 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1202e763 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1202e769 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1202e76f:;
  /* 1202e76f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e772 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e775 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e777 je 0x1202e7b7 */
  if (C.zf) goto L_1202e7b7;
  /* 1202e779 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e780 jg 0x1202e7b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1202e7b7;
  /* 1202e782 jl 0x1202e78d */
  if ((C.sf!=C.of)) goto L_1202e78d;
  /* 1202e784 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e78b jae 0x1202e7b7 */
  if (!C.cf) goto L_1202e7b7;
L_1202e78d:;
  /* 1202e78d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1202e793 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202e795 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1202e79b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e79e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202e7a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1202e7a6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1202e7ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e7af or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1202e7b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202e7b5 jmp 0x1202e7cf */
  goto L_1202e7cf;
L_1202e7b7:;
  /* 1202e7b7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1202e7bd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1202e7c3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1202e7c9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1202e7cf:;
  /* 1202e7cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e7d2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e7d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e7da jne 0x1202e7f7 */
  if (!C.zf) goto L_1202e7f7;
  /* 1202e7dc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1202e7e2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1202e7e8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e7eb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1202e7f1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1202e7f7:;
  /* 1202e7f7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e7fe jge 0x1202e80c */
  if ((C.sf==C.of)) goto L_1202e80c;
  /* 1202e800 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1202e80a jmp 0x1202e815 */
  goto L_1202e815;
L_1202e80c:;
  /* 1202e80c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e80f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e812 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202e815:;
  /* 1202e815 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1202e81b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1202e821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e823 jne 0x1202e82c */
  if (!C.zf) goto L_1202e82c;
  /* 1202e825 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1202e82c:;
  /* 1202e82c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1202e82f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1202e832:;
  /* 1202e832 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1202e838 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1202e83e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e841 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1202e847 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e849 jg 0x1202e85f */
  if ((!C.zf&&C.sf==C.of)) goto L_1202e85f;
  /* 1202e84b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1202e851 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1202e857 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202e859 je 0x1202e8e0 */
  if (C.zf) goto L_1202e8e0;
L_1202e85f:;
  /* 1202e85f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1202e865 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1202e866 push edx */
  push32((uint32_t)(EDX));
  /* 1202e867 push eax */
  push32((uint32_t)(EAX));
  /* 1202e868 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1202e86e push edx */
  push32((uint32_t)(EDX));
  /* 1202e86f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1202e875 push eax */
  push32((uint32_t)(EAX));
  /* 1202e876 call 0x1202dbf0 */
  push32(0x1202e87bu); f_1202dbf0();
  /* 1202e87b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e87e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1202e884 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1202e88a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1202e88b push edx */
  push32((uint32_t)(EDX));
  /* 1202e88c push eax */
  push32((uint32_t)(EAX));
  /* 1202e88d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1202e893 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e894 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1202e89a push edx */
  push32((uint32_t)(EDX));
  /* 1202e89b call 0x1202db80 */
  push32(0x1202e8a0u); f_1202db80();
  /* 1202e8a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1202e8a6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1202e8ac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e8b3 jle 0x1202e8c7 */
  if ((C.zf||C.sf!=C.of)) goto L_1202e8c7;
  /* 1202e8b5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1202e8bb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e8c1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1202e8c7:;
  /* 1202e8c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e8ca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1202e8d0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1202e8d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e8d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e8d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202e8db jmp 0x1202e832 */
  goto L_1202e832;
L_1202e8e0:;
  /* 1202e8e0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1202e8e3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e8e6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1202e8e9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e8ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e8ef mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1202e8f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e8f5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e8fc je 0x1202e927 */
  if (C.zf) goto L_1202e927;
  /* 1202e8fe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e901 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1202e904 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e907 jne 0x1202e90f */
  if (!C.zf) goto L_1202e90f;
  /* 1202e909 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e90d jne 0x1202e927 */
  if (!C.zf) goto L_1202e927;
L_1202e90f:;
  /* 1202e90f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e912 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e915 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202e918 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202e91b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1202e91e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202e921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e924 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1202e927:;
  /* 1202e927 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202e92e jne 0x1202eb02 */
  if (!C.zf) goto L_1202eb02;
  /* 1202e934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e937 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e93a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e93c je 0x1202e98d */
  if (C.zf) goto L_1202e98d;
  /* 1202e93e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e941 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e947 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202e949 je 0x1202e95b */
  if (C.zf) goto L_1202e95b;
  /* 1202e94b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1202e952 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1202e959 jmp 0x1202e98d */
  goto L_1202e98d;
L_1202e95b:;
  /* 1202e95b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e95e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e963 je 0x1202e975 */
  if (C.zf) goto L_1202e975;
  /* 1202e965 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1202e96c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1202e973 jmp 0x1202e98d */
  goto L_1202e98d;
L_1202e975:;
  /* 1202e975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e978 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1202e97b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202e97d je 0x1202e98d */
  if (C.zf) goto L_1202e98d;
  /* 1202e97f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1202e986 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1202e98d:;
  /* 1202e98d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1202e993 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e996 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202e999 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1202e99f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e9a2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1202e9a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e9a7 jne 0x1202e9c5 */
  if (!C.zf) goto L_1202e9c5;
  /* 1202e9a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1202e9af push eax */
  push32((uint32_t)(EAX));
  /* 1202e9b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202e9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202e9b4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1202e9ba push edx */
  push32((uint32_t)(EDX));
  /* 1202e9bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1202e9bd call 0x1202eca0 */
  push32(0x1202e9c2u); f_1202eca0();
  /* 1202e9c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202e9c5:;
  /* 1202e9c5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1202e9cb push eax */
  push32((uint32_t)(EAX));
  /* 1202e9cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202e9cf push ecx */
  push32((uint32_t)(ECX));
  /* 1202e9d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202e9d3 push edx */
  push32((uint32_t)(EDX));
  /* 1202e9d4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1202e9da push eax */
  push32((uint32_t)(EAX));
  /* 1202e9db call 0x1202ece0 */
  push32(0x1202e9e0u); f_1202ece0();
  /* 1202e9e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202e9e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e9e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1202e9e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202e9eb je 0x1202ea13 */
  if (C.zf) goto L_1202ea13;
  /* 1202e9ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202e9f0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1202e9f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202e9f5 jne 0x1202ea13 */
  if (!C.zf) goto L_1202ea13;
  /* 1202e9f7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1202e9fd push eax */
  push32((uint32_t)(EAX));
  /* 1202e9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ea01 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ea02 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1202ea08 push edx */
  push32((uint32_t)(EDX));
  /* 1202ea09 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1202ea0b call 0x1202eca0 */
  push32(0x1202ea10u); f_1202eca0();
  /* 1202ea10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202ea13:;
  /* 1202ea13 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ea17 je 0x1202eac1 */
  if (C.zf) goto L_1202eac1;
  /* 1202ea1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ea21 jle 0x1202eac1 */
  if ((C.zf||C.sf!=C.of)) goto L_1202eac1;
  /* 1202ea27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202ea2a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1202ea30 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202ea33 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1202ea39:;
  /* 1202ea39 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1202ea3f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1202ea45 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ea48 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1202ea4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202ea50 je 0x1202eabf */
  if (C.zf) goto L_1202eabf;
  /* 1202ea52 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1202ea58 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1202ea5b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1202ea62 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1202ea69 push eax */
  push32((uint32_t)(EAX));
  /* 1202ea6a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1202ea70 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ea71 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1202ea77 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ea7a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1202ea80 call 0x1202fe50 */
  push32(0x1202ea85u); f_1202fe50();
  /* 1202ea85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ea88 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1202ea8e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ea95 jg 0x1202ea99 */
  if ((!C.zf&&C.sf==C.of)) goto L_1202ea99;
  /* 1202ea97 jmp 0x1202eabf */
  goto L_1202eabf;
L_1202ea99:;
  /* 1202ea99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1202ea9f push eax */
  push32((uint32_t)(EAX));
  /* 1202eaa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202eaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202eaa4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1202eaaa push edx */
  push32((uint32_t)(EDX));
  /* 1202eaab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1202eab1 push eax */
  push32((uint32_t)(EAX));
  /* 1202eab2 call 0x1202ece0 */
  push32(0x1202eab7u); f_1202ece0();
  /* 1202eab7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202eaba jmp 0x1202ea39 */
  goto L_1202ea39;
L_1202eabf:;
  /* 1202eabf jmp 0x1202eadc */
  goto L_1202eadc;
L_1202eac1:;
  /* 1202eac1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1202eac7 push ecx */
  push32((uint32_t)(ECX));
  /* 1202eac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202eacb push edx */
  push32((uint32_t)(EDX));
  /* 1202eacc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202eacf push eax */
  push32((uint32_t)(EAX));
  /* 1202ead0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202ead3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ead4 call 0x1202ece0 */
  push32(0x1202ead9u); f_1202ece0();
  /* 1202ead9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202eadc:;
  /* 1202eadc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202eadf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1202eae2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202eae4 je 0x1202eb02 */
  if (C.zf) goto L_1202eb02;
  /* 1202eae6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1202eaec push eax */
  push32((uint32_t)(EAX));
  /* 1202eaed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202eaf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1202eaf1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1202eaf7 push edx */
  push32((uint32_t)(EDX));
  /* 1202eaf8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1202eafa call 0x1202eca0 */
  push32(0x1202eaffu); f_1202eca0();
  /* 1202eaff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202eb02:;
  /* 1202eb02 jmp 0x1202df14 */
  goto L_1202df14;
L_1202eb07:;
  /* 1202eb07 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1202eb0d pop edi */
  EDI = (pop32());
  /* 1202eb0e pop esi */
  ESI = (pop32());
  /* 1202eb0f pop ebx */
  EBX = (pop32());
  /* 1202eb10 mov esp, ebp */
  ESP = (EBP);
  /* 1202eb12 pop ebp */
  EBP = (pop32());
  /* 1202eb13 ret  */
  ESPCHK(0x1202def0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec20 @ 0x1202ec20 (119 bytes, 44 insns) */
void f_1202ec20(void) {
  FTRACE(0x1202ec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ec20 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ec21 mov ebp, esp */
  EBP = (ESP);
  /* 1202ec23 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ec24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1202ec2a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ec2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec30 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1202ec33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec36 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ec3a jl 0x1202ec62 */
  if ((C.sf!=C.of)) goto L_1202ec62;
  /* 1202ec3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1202ec41 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1202ec44 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1202ec46 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1202ec4a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1202ec50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202ec53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202ec58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ec5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202ec60 jmp 0x1202ec75 */
  goto L_1202ec75;
L_1202ec62:;
  /* 1202ec62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ec65 push edx */
  push32((uint32_t)(EDX));
  /* 1202ec66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ec69 push eax */
  push32((uint32_t)(EAX));
  /* 1202ec6a call 0x1202dc70 */
  push32(0x1202ec6fu); f_1202dc70();
  /* 1202ec6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ec72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202ec75:;
  /* 1202ec75 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ec79 jne 0x1202ec86 */
  if (!C.zf) goto L_1202ec86;
  /* 1202ec7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202ec7e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1202ec84 jmp 0x1202ec93 */
  goto L_1202ec93;
L_1202ec86:;
  /* 1202ec86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202ec89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1202ec8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ec8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202ec91 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1202ec93:;
  /* 1202ec93 mov esp, ebp */
  ESP = (EBP);
  /* 1202ec95 pop ebp */
  EBP = (pop32());
  /* 1202ec96 ret  */
  ESPCHK(0x1202ec20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eca0 @ 0x1202eca0 (53 bytes, 23 insns) */
void f_1202eca0(void) {
  FTRACE(0x1202eca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202eca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202eca1 mov ebp, esp */
  EBP = (ESP);
L_1202eca3:;
  /* 1202eca3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202eca6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202eca9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ecac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1202ecaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202ecb1 jle 0x1202ecd3 */
  if ((C.zf||C.sf!=C.of)) goto L_1202ecd3;
  /* 1202ecb3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202ecb6 push edx */
  push32((uint32_t)(EDX));
  /* 1202ecb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202ecba push eax */
  push32((uint32_t)(EAX));
  /* 1202ecbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ecbe push ecx */
  push32((uint32_t)(ECX));
  /* 1202ecbf call 0x1202ec20 */
  push32(0x1202ecc4u); f_1202ec20();
  /* 1202ecc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ecc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202ecca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202eccd jne 0x1202ecd1 */
  if (!C.zf) goto L_1202ecd1;
  /* 1202eccf jmp 0x1202ecd3 */
  goto L_1202ecd3;
L_1202ecd1:;
  /* 1202ecd1 jmp 0x1202eca3 */
  goto L_1202eca3;
L_1202ecd3:;
  /* 1202ecd3 pop ebp */
  EBP = (pop32());
  /* 1202ecd4 ret  */
  ESPCHK(0x1202eca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x1202ece0 (74 bytes, 31 insns) */
void f_1202ece0(void) {
  FTRACE(0x1202ece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ece0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ece1 mov ebp, esp */
  EBP = (ESP);
  /* 1202ece3 push ecx */
  push32((uint32_t)(ECX));
L_1202ece4:;
  /* 1202ece4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ece7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ecea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202eced mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1202ecf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202ecf2 jle 0x1202ed26 */
  if ((C.zf||C.sf!=C.of)) goto L_1202ed26;
  /* 1202ecf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202ecf7 push edx */
  push32((uint32_t)(EDX));
  /* 1202ecf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202ecfb push eax */
  push32((uint32_t)(EAX));
  /* 1202ecfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ecff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1202ed02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202ed05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202ed08 push eax */
  push32((uint32_t)(EAX));
  /* 1202ed09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ed0f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1202ed12 call 0x1202ec20 */
  push32(0x1202ed17u); f_1202ec20();
  /* 1202ed17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ed1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202ed1d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ed20 jne 0x1202ed24 */
  if (!C.zf) goto L_1202ed24;
  /* 1202ed22 jmp 0x1202ed26 */
  goto L_1202ed26;
L_1202ed24:;
  /* 1202ed24 jmp 0x1202ece4 */
  goto L_1202ece4;
L_1202ed26:;
  /* 1202ed26 mov esp, ebp */
  ESP = (EBP);
  /* 1202ed28 pop ebp */
  EBP = (pop32());
  /* 1202ed29 ret  */
  ESPCHK(0x1202ece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x1202ed30 (26 bytes, 12 insns) */
void f_1202ed30(void) {
  FTRACE(0x1202ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ed31 mov ebp, esp */
  EBP = (ESP);
  /* 1202ed33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202ed38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ed3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1202ed40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202ed45 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1202ed48 pop ebp */
  EBP = (pop32());
  /* 1202ed49 ret  */
  ESPCHK(0x1202ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x1202ed50 (31 bytes, 14 insns) */
void f_1202ed50(void) {
  FTRACE(0x1202ed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ed50 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ed51 mov ebp, esp */
  EBP = (ESP);
  /* 1202ed53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202ed58 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ed5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1202ed60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202ed65 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ed68 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1202ed6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1202ed6d pop ebp */
  EBP = (pop32());
  /* 1202ed6e ret  */
  ESPCHK(0x1202ed50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x1202ed70 (27 bytes, 12 insns) */
void f_1202ed70(void) {
  FTRACE(0x1202ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ed71 mov ebp, esp */
  EBP = (ESP);
  /* 1202ed73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202ed78 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ed7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1202ed80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1202ed85 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1202ed89 pop ebp */
  EBP = (pop32());
  /* 1202ed8a ret  */
  ESPCHK(0x1202ed70u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1202ed90 (145 bytes, 42 insns) */
void f_1202ed90(void) {
  FTRACE(0x1202ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1202ed93 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ed94 call 0x1202ee40 */
  push32(0x1202ed99u); f_1202ee40();
  /* 1202ed99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ed9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202ed9e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202eda5 jmp 0x1202edb0 */
  goto L_1202edb0;
L_1202eda7:;
  /* 1202eda7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202edaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202edad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202edb0:;
  /* 1202edb0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202edb4 jae 0x1202edda */
  if (!C.cf) goto L_1202edda;
  /* 1202edb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202edb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202edbc cmp ecx, dword ptr [eax*8 + 0x12050fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12050fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202edc3 jne 0x1202edd8 */
  if (!C.zf) goto L_1202edd8;
  /* 1202edc5 call 0x1202ee30 */
  push32(0x1202edcau); f_1202ee30();
  /* 1202edca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202edcd mov ecx, dword ptr [edx*8 + 0x12050fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12050fbc)));
  /* 1202edd4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202edd6 jmp 0x1202ee1d */
  goto L_1202ee1d;
L_1202edd8:;
  /* 1202edd8 jmp 0x1202eda7 */
  goto L_1202eda7;
L_1202edda:;
  /* 1202edda cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202edde jb 0x1202edf3 */
  if (C.cf) goto L_1202edf3;
  /* 1202ede0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ede4 ja 0x1202edf3 */
  if ((!C.cf&&!C.zf)) goto L_1202edf3;
  /* 1202ede6 call 0x1202ee30 */
  push32(0x1202edebu); f_1202ee30();
  /* 1202edeb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1202edf1 jmp 0x1202ee1d */
  goto L_1202ee1d;
L_1202edf3:;
  /* 1202edf3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202edfa jb 0x1202ee12 */
  if (C.cf) goto L_1202ee12;
  /* 1202edfc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ee03 ja 0x1202ee12 */
  if ((!C.cf&&!C.zf)) goto L_1202ee12;
  /* 1202ee05 call 0x1202ee30 */
  push32(0x1202ee0au); f_1202ee30();
  /* 1202ee0a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1202ee10 jmp 0x1202ee1d */
  goto L_1202ee1d;
L_1202ee12:;
  /* 1202ee12 call 0x1202ee30 */
  push32(0x1202ee17u); f_1202ee30();
  /* 1202ee17 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1202ee1d:;
  /* 1202ee1d mov esp, ebp */
  ESP = (EBP);
  /* 1202ee1f pop ebp */
  EBP = (pop32());
  /* 1202ee20 ret  */
  ESPCHK(0x1202ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x1202ee30 (13 bytes, 6 insns) */
void f_1202ee30(void) {
  FTRACE(0x1202ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ee31 mov ebp, esp */
  EBP = (ESP);
  /* 1202ee33 call 0x120269a0 */
  push32(0x1202ee38u); f_120269a0();
  /* 1202ee38 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ee3b pop ebp */
  EBP = (pop32());
  /* 1202ee3c ret  */
  ESPCHK(0x1202ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x1202ee40 (13 bytes, 6 insns) */
void f_1202ee40(void) {
  FTRACE(0x1202ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ee40 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ee41 mov ebp, esp */
  EBP = (ESP);
  /* 1202ee43 call 0x120269a0 */
  push32(0x1202ee48u); f_120269a0();
  /* 1202ee48 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ee4b pop ebp */
  EBP = (pop32());
  /* 1202ee4c ret  */
  ESPCHK(0x1202ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee50 @ 0x1202ee50 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1202ee50(void) {
  FTRACE(0x1202ee50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ee50 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ee51 mov ebp, esp */
  EBP = (ESP);
  /* 1202ee53 push edi */
  push32((uint32_t)(EDI));
  /* 1202ee54 push esi */
  push32((uint32_t)(ESI));
  /* 1202ee55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1202ee58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202ee5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ee5e mov eax, ecx */
  EAX = (ECX);
  /* 1202ee60 mov edx, ecx */
  EDX = (ECX);
  /* 1202ee62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ee64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ee66 jbe 0x1202ee70 */
  if ((C.cf||C.zf)) goto L_1202ee70;
  /* 1202ee68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ee6a jb 0x1202efe8 */
  if (C.cf) goto L_1202efe8;
L_1202ee70:;
  /* 1202ee70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1202ee76 jne 0x1202ee8c */
  if (!C.zf) goto L_1202ee8c;
  /* 1202ee78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202ee7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1202ee7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ee81 jb 0x1202eeac */
  if (C.cf) goto L_1202eeac;
  /* 1202ee83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202ee85 jmp dword ptr [edx*4 + 0x1202ef98] */
  switch (EDX) {
    case 0: goto L_1202efa8;
    case 1: goto L_1202efb0;
    case 2: goto L_1202efbc;
    case 3: goto L_1202efd0;
    default: x86_unimpl("switch@0x1202ee85 out of table"); return;
  }
L_1202ee8c:;
  /* 1202ee8c mov eax, edi */
  EAX = (EDI);
  /* 1202ee8e mov edx, 3 */
  EDX = (0x3u);
  /* 1202ee93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202ee96 jb 0x1202eea4 */
  if (C.cf) goto L_1202eea4;
  /* 1202ee98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1202ee9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ee9d jmp dword ptr [eax*4 + 0x1202eeb0] */
  switch (EAX) {
    case 1: goto L_1202eec0;
    case 2: goto L_1202eeec;
    case 3: goto L_1202ef10;
    default: x86_unimpl("switch@0x1202ee9d out of table"); return;
  }
L_1202eea4:;
  /* 1202eea4 jmp dword ptr [ecx*4 + 0x1202efa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1202efa8)))); return;
  /* 1202eeab nop  */
  /* nop */
L_1202eeac:;
  /* 1202eeac jmp dword ptr [ecx*4 + 0x1202ef2c] */
  switch (ECX) {
    case 0: goto L_1202ef8f;
    case 1: goto L_1202ef7c;
    case 2: goto L_1202ef74;
    case 3: goto L_1202ef6c;
    case 4: goto L_1202ef64;
    case 5: goto L_1202ef5c;
    case 6: goto L_1202ef54;
    case 7: goto L_1202ef4c;
    default: x86_unimpl("switch@0x1202eeac out of table"); return;
  }
  /* 1202eeb3 nop  */
  /* nop */
L_1202eec0:;
  /* 1202eec0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202eec2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202eec4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202eec6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202eec9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202eecc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202eecf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202eed2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202eed5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202eed8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202eedb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202eede jb 0x1202eeac */
  if (C.cf) goto L_1202eeac;
  /* 1202eee0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202eee2 jmp dword ptr [edx*4 + 0x1202ef98] */
  switch (EDX) {
    case 0: goto L_1202efa8;
    case 1: goto L_1202efb0;
    case 2: goto L_1202efbc;
    case 3: goto L_1202efd0;
    default: x86_unimpl("switch@0x1202eee2 out of table"); return;
  }
  /* 1202eee9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202eeec:;
  /* 1202eeec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202eeee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202eef0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202eef2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202eef5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202eef8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202eefb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202eefe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ef01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ef04 jb 0x1202eeac */
  if (C.cf) goto L_1202eeac;
  /* 1202ef06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202ef08 jmp dword ptr [edx*4 + 0x1202ef98] */
  switch (EDX) {
    case 0: goto L_1202efa8;
    case 1: goto L_1202efb0;
    case 2: goto L_1202efbc;
    case 3: goto L_1202efd0;
    default: x86_unimpl("switch@0x1202ef08 out of table"); return;
  }
  /* 1202ef0f nop  */
  /* nop */
L_1202ef10:;
  /* 1202ef10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202ef12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202ef14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202ef16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1202ef17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202ef1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1202ef1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ef1e jb 0x1202eeac */
  if (C.cf) goto L_1202eeac;
  /* 1202ef20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202ef22 jmp dword ptr [edx*4 + 0x1202ef98] */
  switch (EDX) {
    case 0: goto L_1202efa8;
    case 1: goto L_1202efb0;
    case 2: goto L_1202efbc;
    case 3: goto L_1202efd0;
    default: x86_unimpl("switch@0x1202ef22 out of table"); return;
  }
  /* 1202ef29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202ef4c:;
  /* 1202ef4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1202ef50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1202ef54:;
  /* 1202ef54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1202ef58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1202ef5c:;
  /* 1202ef5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1202ef60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1202ef64:;
  /* 1202ef64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1202ef68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1202ef6c:;
  /* 1202ef6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1202ef70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1202ef74:;
  /* 1202ef74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1202ef78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1202ef7c:;
  /* 1202ef7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1202ef80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1202ef84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1202ef8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202ef8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1202ef8f:;
  /* 1202ef8f jmp dword ptr [edx*4 + 0x1202ef98] */
  switch (EDX) {
    case 0: goto L_1202efa8;
    case 1: goto L_1202efb0;
    case 2: goto L_1202efbc;
    case 3: goto L_1202efd0;
    default: x86_unimpl("switch@0x1202ef8f out of table"); return;
  }
  /* 1202ef96 mov edi, edi */
  EDI = (EDI);
L_1202efa8:;
  /* 1202efa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202efab pop esi */
  ESI = (pop32());
  /* 1202efac pop edi */
  EDI = (pop32());
  /* 1202efad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202efae ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202efaf nop  */
  /* nop */
L_1202efb0:;
  /* 1202efb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202efb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202efb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202efb7 pop esi */
  ESI = (pop32());
  /* 1202efb8 pop edi */
  EDI = (pop32());
  /* 1202efb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202efba ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202efbb nop  */
  /* nop */
L_1202efbc:;
  /* 1202efbc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202efbe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202efc0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202efc3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202efc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202efc9 pop esi */
  ESI = (pop32());
  /* 1202efca pop edi */
  EDI = (pop32());
  /* 1202efcb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202efcc ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202efcd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202efd0:;
  /* 1202efd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1202efd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1202efd4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202efd7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202efda mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202efdd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202efe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202efe3 pop esi */
  ESI = (pop32());
  /* 1202efe4 pop edi */
  EDI = (pop32());
  /* 1202efe5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202efe6 ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202efe7 nop  */
  /* nop */
L_1202efe8:;
  /* 1202efe8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1202efec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1202eff0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1202eff6 jne 0x1202f01c */
  if (!C.zf) goto L_1202f01c;
  /* 1202eff8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202effb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1202effe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f001 jb 0x1202f010 */
  if (C.cf) goto L_1202f010;
  /* 1202f003 std  */
  C.df=1;
  /* 1202f004 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202f006 cld  */
  C.df=0;
  /* 1202f007 jmp dword ptr [edx*4 + 0x1202f130] */
  switch (EDX) {
    case 0: goto L_1202f140;
    case 1: goto L_1202f148;
    case 2: goto L_1202f158;
    case 3: goto L_1202f16c;
    default: x86_unimpl("switch@0x1202f007 out of table"); return;
  }
  /* 1202f00e mov edi, edi */
  EDI = (EDI);
L_1202f010:;
  /* 1202f010 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202f012 jmp dword ptr [ecx*4 + 0x1202f0e0] */
  switch (ECX) {
    case 0: goto L_1202f127;
    default: x86_unimpl("switch@0x1202f012 out of table"); return;
  }
  /* 1202f019 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202f01c:;
  /* 1202f01c mov eax, edi */
  EAX = (EDI);
  /* 1202f01e mov edx, 3 */
  EDX = (0x3u);
  /* 1202f023 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f026 jb 0x1202f034 */
  if (C.cf) goto L_1202f034;
  /* 1202f028 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1202f02b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f02d jmp dword ptr [eax*4 + 0x1202f038] */
  switch (EAX) {
    case 1: goto L_1202f048;
    case 2: goto L_1202f068;
    case 3: goto L_1202f090;
    default: x86_unimpl("switch@0x1202f02d out of table"); return;
  }
L_1202f034:;
  /* 1202f034 jmp dword ptr [ecx*4 + 0x1202f130] */
  switch (ECX) {
    case 0: goto L_1202f140;
    case 1: goto L_1202f148;
    case 2: goto L_1202f158;
    case 3: goto L_1202f16c;
    default: x86_unimpl("switch@0x1202f034 out of table"); return;
  }
  /* 1202f03b nop  */
  /* nop */
L_1202f048:;
  /* 1202f048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202f04b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202f04d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202f050 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1202f051 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202f054 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1202f055 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f058 jb 0x1202f010 */
  if (C.cf) goto L_1202f010;
  /* 1202f05a std  */
  C.df=1;
  /* 1202f05b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202f05d cld  */
  C.df=0;
  /* 1202f05e jmp dword ptr [edx*4 + 0x1202f130] */
  switch (EDX) {
    case 0: goto L_1202f140;
    case 1: goto L_1202f148;
    case 2: goto L_1202f158;
    case 3: goto L_1202f16c;
    default: x86_unimpl("switch@0x1202f05e out of table"); return;
  }
  /* 1202f065 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202f068:;
  /* 1202f068 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202f06b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202f06d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202f070 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202f073 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202f076 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202f079 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f07c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f07f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f082 jb 0x1202f010 */
  if (C.cf) goto L_1202f010;
  /* 1202f084 std  */
  C.df=1;
  /* 1202f085 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202f087 cld  */
  C.df=0;
  /* 1202f088 jmp dword ptr [edx*4 + 0x1202f130] */
  switch (EDX) {
    case 0: goto L_1202f140;
    case 1: goto L_1202f148;
    case 2: goto L_1202f158;
    case 3: goto L_1202f16c;
    default: x86_unimpl("switch@0x1202f088 out of table"); return;
  }
  /* 1202f08f nop  */
  /* nop */
L_1202f090:;
  /* 1202f090 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202f093 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1202f095 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202f098 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202f09b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202f09e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202f0a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1202f0a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202f0a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f0aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f0ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f0b0 jb 0x1202f010 */
  if (C.cf) goto L_1202f010;
  /* 1202f0b6 std  */
  C.df=1;
  /* 1202f0b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1202f0b9 cld  */
  C.df=0;
  /* 1202f0ba jmp dword ptr [edx*4 + 0x1202f130] */
  switch (EDX) {
    case 0: goto L_1202f140;
    case 1: goto L_1202f148;
    case 2: goto L_1202f158;
    case 3: goto L_1202f16c;
    default: x86_unimpl("switch@0x1202f0ba out of table"); return;
  }
  /* 1202f0c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1202f0c4 in al, 0xf0 */
  x86_unimpl("in @ 0x1202f0c4");
  /* 1202f0c6 add dl, byte ptr [edx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX))),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202f0c8 in al, dx */
  x86_unimpl("in @ 0x1202f0c8");
  /* 1202f0c9 lock add dl, byte ptr [edx] */
  x86_unimpl("lock add @ 0x1202f0c9");
  /* 1202f0cc hlt  */
  x86_unimpl("hlt @ 0x1202f0cc");
  /* 1202f0cd lock add dl, byte ptr [edx] */
  x86_unimpl("lock add @ 0x1202f0cd");
  /* 1202f0d0 cld  */
  C.df=0;
  /* 1202f0d1 lock add dl, byte ptr [edx] */
  x86_unimpl("lock add @ 0x1202f0d1");
  /* 1202f0d4 add al, 0xf1 */
  { uint32_t _a=(AL),_b=(0xf1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202f0d6 add dl, byte ptr [edx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX))),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202f0d8 or al, 0xf1 */
  { uint32_t _r=(AL)|(0xf1u); AL = (_r); fl_logic(_r,8); }
  /* 1202f0da add dl, byte ptr [edx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX))),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202f0dc adc al, 0xf1 */
  { uint32_t _a=(AL),_b=(0xf1u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202f0de add dl, byte ptr [edx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX))),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1202f0e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1202f0e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1202f0ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1202f0f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1202f0f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1202f0f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1202f0fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1202f100 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1202f104 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1202f108 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1202f10c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1202f110 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1202f114 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1202f118 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1202f11c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1202f123 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f125 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1202f127:;
  /* 1202f127 jmp dword ptr [edx*4 + 0x1202f130] */
  switch (EDX) {
    case 0: goto L_1202f140;
    case 1: goto L_1202f148;
    case 2: goto L_1202f158;
    case 3: goto L_1202f16c;
    default: x86_unimpl("switch@0x1202f127 out of table"); return;
  }
  /* 1202f12e mov edi, edi */
  EDI = (EDI);
L_1202f140:;
  /* 1202f140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f143 pop esi */
  ESI = (pop32());
  /* 1202f144 pop edi */
  EDI = (pop32());
  /* 1202f145 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202f146 ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202f147 nop  */
  /* nop */
L_1202f148:;
  /* 1202f148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202f14b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202f14e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f151 pop esi */
  ESI = (pop32());
  /* 1202f152 pop edi */
  EDI = (pop32());
  /* 1202f153 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202f154 ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202f155 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1202f158:;
  /* 1202f158 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202f15b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202f15e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202f161 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202f164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f167 pop esi */
  ESI = (pop32());
  /* 1202f168 pop edi */
  EDI = (pop32());
  /* 1202f169 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202f16a ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
  /* 1202f16b nop  */
  /* nop */
L_1202f16c:;
  /* 1202f16c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1202f16f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1202f172 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1202f175 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1202f178 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1202f17b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1202f17e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f181 pop esi */
  ESI = (pop32());
  /* 1202f182 pop edi */
  EDI = (pop32());
  /* 1202f183 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1202f184 ret  */
  ESPCHK(0x1202ee50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x1202f190 (421 bytes, 148 insns) */
void f_1202f190(void) {
  FTRACE(0x1202f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f191 mov ebp, esp */
  EBP = (ESP);
  /* 1202f193 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1202f195 push 0x1204e4f0 */
  push32((uint32_t)(0x1204e4f0u));
  /* 1202f19a push 0x12030068 */
  push32((uint32_t)(0x12030068u));
  /* 1202f19f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1202f1a5 push eax */
  push32((uint32_t)(EAX));
  /* 1202f1a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1202f1ad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f1b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1202f1b1 push esi */
  push32((uint32_t)(ESI));
  /* 1202f1b2 push edi */
  push32((uint32_t)(EDI));
  /* 1202f1b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1202f1b6 cmp dword ptr [0x120529dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f1bd jne 0x1202f20e */
  if (!C.zf) goto L_1202f20e;
  /* 1202f1bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1202f1c2 push eax */
  push32((uint32_t)(EAX));
  /* 1202f1c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f1c5 push 0x1204e4ec */
  push32((uint32_t)(0x1204e4ecu));
  /* 1202f1ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f1cc call dword ptr [0x12055330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055330))), 0x1202f1d2u);
  /* 1202f1d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f1d4 je 0x1202f1e2 */
  if (C.zf) goto L_1202f1e2;
  /* 1202f1d6 mov dword ptr [0x120529dc], 1 */
  w32((uint32_t)(0x120529dc), (0x1u));
  /* 1202f1e0 jmp 0x1202f20e */
  goto L_1202f20e;
L_1202f1e2:;
  /* 1202f1e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1202f1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f1e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f1e8 push 0x1204e4e8 */
  push32((uint32_t)(0x1204e4e8u));
  /* 1202f1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f1ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f1f1 call dword ptr [0x12055334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055334))), 0x1202f1f7u);
  /* 1202f1f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f1f9 je 0x1202f207 */
  if (C.zf) goto L_1202f207;
  /* 1202f1fb mov dword ptr [0x120529dc], 2 */
  w32((uint32_t)(0x120529dc), (0x2u));
  /* 1202f205 jmp 0x1202f20e */
  goto L_1202f20e;
L_1202f207:;
  /* 1202f207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f209 jmp 0x1202f338 */
  goto L_1202f338;
L_1202f20e:;
  /* 1202f20e cmp dword ptr [0x120529dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120529dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f215 jne 0x1202f245 */
  if (!C.zf) goto L_1202f245;
  /* 1202f217 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f21b jne 0x1202f226 */
  if (!C.zf) goto L_1202f226;
  /* 1202f21d mov edx, dword ptr [0x120529e8] */
  EDX = (r32((uint32_t)(0x120529e8)));
  /* 1202f223 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1202f226:;
  /* 1202f226 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202f229 push eax */
  push32((uint32_t)(EAX));
  /* 1202f22a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f22d push ecx */
  push32((uint32_t)(ECX));
  /* 1202f22e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f231 push edx */
  push32((uint32_t)(EDX));
  /* 1202f232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f235 push eax */
  push32((uint32_t)(EAX));
  /* 1202f236 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1202f239 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f23a call dword ptr [0x12055334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055334))), 0x1202f240u);
  /* 1202f240 jmp 0x1202f338 */
  goto L_1202f338;
L_1202f245:;
  /* 1202f245 cmp dword ptr [0x120529dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120529dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f24c jne 0x1202f336 */
  if (!C.zf) goto L_1202f336;
  /* 1202f252 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f256 jne 0x1202f261 */
  if (!C.zf) goto L_1202f261;
  /* 1202f258 mov edx, dword ptr [0x120529f8] */
  EDX = (r32((uint32_t)(0x120529f8)));
  /* 1202f25e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1202f261:;
  /* 1202f261 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f263 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f265 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f268 push eax */
  push32((uint32_t)(EAX));
  /* 1202f269 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f26c push ecx */
  push32((uint32_t)(ECX));
  /* 1202f26d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1202f270 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202f272 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f274 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1202f277 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f27a push edx */
  push32((uint32_t)(EDX));
  /* 1202f27b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202f27e push eax */
  push32((uint32_t)(EAX));
  /* 1202f27f call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x1202f285u);
  /* 1202f285 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1202f288 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f28c jne 0x1202f295 */
  if (!C.zf) goto L_1202f295;
  /* 1202f28e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f290 jmp 0x1202f338 */
  goto L_1202f338;
L_1202f295:;
  /* 1202f295 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202f29c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202f29f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1202f2a1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f2a4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1202f2a6 call 0x1202a100 */
  push32(0x1202f2abu); f_1202a100();
  /* 1202f2ab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1202f2ae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1202f2b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202f2b4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1202f2b7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202f2ba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1202f2bc push edx */
  push32((uint32_t)(EDX));
  /* 1202f2bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f2bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1202f2c3 call 0x1202acd0 */
  push32(0x1202f2c8u); f_1202acd0();
  /* 1202f2c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f2cb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1202f2d2 jmp 0x1202f2eb */
  goto L_1202f2eb;
  /* 1202f2d4 mov eax, 1 */
  EAX = (0x1u);
  /* 1202f2d9 ret  */
  ESPCHK(0x1202f190u, _esp0);
  ESP += 4; return;
  /* 1202f2da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1202f2dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1202f2e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1202f2eb:;
  /* 1202f2eb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f2ef jne 0x1202f2f5 */
  if (!C.zf) goto L_1202f2f5;
  /* 1202f2f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f2f3 jmp 0x1202f338 */
  goto L_1202f338;
L_1202f2f5:;
  /* 1202f2f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202f2f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f2f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f2fc push edx */
  push32((uint32_t)(EDX));
  /* 1202f2fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f300 push eax */
  push32((uint32_t)(EAX));
  /* 1202f301 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f304 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f305 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f307 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202f30a push edx */
  push32((uint32_t)(EDX));
  /* 1202f30b call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x1202f311u);
  /* 1202f311 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202f314 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f318 jne 0x1202f31e */
  if (!C.zf) goto L_1202f31e;
  /* 1202f31a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f31c jmp 0x1202f338 */
  goto L_1202f338;
L_1202f31e:;
  /* 1202f31e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202f321 push eax */
  push32((uint32_t)(EAX));
  /* 1202f322 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202f325 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f326 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f329 push edx */
  push32((uint32_t)(EDX));
  /* 1202f32a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f32d push eax */
  push32((uint32_t)(EAX));
  /* 1202f32e call dword ptr [0x12055330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055330))), 0x1202f334u);
  /* 1202f334 jmp 0x1202f338 */
  goto L_1202f338;
L_1202f336:;
  /* 1202f336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202f338:;
  /* 1202f338 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1202f33b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202f33e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1202f345 pop edi */
  EDI = (pop32());
  /* 1202f346 pop esi */
  ESI = (pop32());
  /* 1202f347 pop ebx */
  EBX = (pop32());
  /* 1202f348 mov esp, ebp */
  ESP = (EBP);
  /* 1202f34a pop ebp */
  EBP = (pop32());
  /* 1202f34b ret  */
  ESPCHK(0x1202f190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x1202f350 (727 bytes, 263 insns) */
void f_1202f350(void) {
  FTRACE(0x1202f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f350 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f351 mov ebp, esp */
  EBP = (ESP);
  /* 1202f353 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1202f355 push 0x1204e500 */
  push32((uint32_t)(0x1204e500u));
  /* 1202f35a push 0x12030068 */
  push32((uint32_t)(0x12030068u));
  /* 1202f35f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1202f365 push eax */
  push32((uint32_t)(EAX));
  /* 1202f366 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1202f36d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f370 push ebx */
  push32((uint32_t)(EBX));
  /* 1202f371 push esi */
  push32((uint32_t)(ESI));
  /* 1202f372 push edi */
  push32((uint32_t)(EDI));
  /* 1202f373 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1202f376 cmp dword ptr [0x12052a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f37d jne 0x1202f3d6 */
  if (!C.zf) goto L_1202f3d6;
  /* 1202f37f push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f381 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f383 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f385 push 0x1204e4ec */
  push32((uint32_t)(0x1204e4ecu));
  /* 1202f38a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202f38f push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f391 call dword ptr [0x12055328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055328))), 0x1202f397u);
  /* 1202f397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f399 je 0x1202f3a7 */
  if (C.zf) goto L_1202f3a7;
  /* 1202f39b mov dword ptr [0x12052a00], 1 */
  w32((uint32_t)(0x12052a00), (0x1u));
  /* 1202f3a5 jmp 0x1202f3d6 */
  goto L_1202f3d6;
L_1202f3a7:;
  /* 1202f3a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f3a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f3ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f3ad push 0x1204e4e8 */
  push32((uint32_t)(0x1204e4e8u));
  /* 1202f3b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1202f3b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f3b9 call dword ptr [0x1205532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205532c))), 0x1202f3bfu);
  /* 1202f3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f3c1 je 0x1202f3cf */
  if (C.zf) goto L_1202f3cf;
  /* 1202f3c3 mov dword ptr [0x12052a00], 2 */
  w32((uint32_t)(0x12052a00), (0x2u));
  /* 1202f3cd jmp 0x1202f3d6 */
  goto L_1202f3d6;
L_1202f3cf:;
  /* 1202f3cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f3d1 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f3d6:;
  /* 1202f3d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f3da jle 0x1202f3ef */
  if ((C.zf||C.sf!=C.of)) goto L_1202f3ef;
  /* 1202f3dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202f3df push eax */
  push32((uint32_t)(EAX));
  /* 1202f3e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f3e4 call 0x1202f660 */
  push32(0x1202f3e9u); f_1202f660();
  /* 1202f3e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f3ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1202f3ef:;
  /* 1202f3ef cmp dword ptr [0x12052a00], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12052a00))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f3f6 jne 0x1202f41b */
  if (!C.zf) goto L_1202f41b;
  /* 1202f3f8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1202f3fb push edx */
  push32((uint32_t)(EDX));
  /* 1202f3fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202f3ff push eax */
  push32((uint32_t)(EAX));
  /* 1202f400 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202f403 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f404 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f407 push edx */
  push32((uint32_t)(EDX));
  /* 1202f408 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f40b push eax */
  push32((uint32_t)(EAX));
  /* 1202f40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f40f push ecx */
  push32((uint32_t)(ECX));
  /* 1202f410 call dword ptr [0x1205532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205532c))), 0x1202f416u);
  /* 1202f416 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f41b:;
  /* 1202f41b cmp dword ptr [0x12052a00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052a00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f422 jne 0x1202f63f */
  if (!C.zf) goto L_1202f63f;
  /* 1202f428 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f42c jne 0x1202f437 */
  if (!C.zf) goto L_1202f437;
  /* 1202f42e mov edx, dword ptr [0x120529f8] */
  EDX = (r32((uint32_t)(0x120529f8)));
  /* 1202f434 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1202f437:;
  /* 1202f437 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f43b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202f43e push eax */
  push32((uint32_t)(EAX));
  /* 1202f43f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f442 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f443 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1202f446 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1202f448 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f44a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1202f44d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f450 push edx */
  push32((uint32_t)(EDX));
  /* 1202f451 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1202f454 push eax */
  push32((uint32_t)(EAX));
  /* 1202f455 call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x1202f45bu);
  /* 1202f45b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1202f45e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f462 jne 0x1202f46b */
  if (!C.zf) goto L_1202f46b;
  /* 1202f464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f466 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f46b:;
  /* 1202f46b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202f472 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202f475 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1202f477 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f47a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1202f47c call 0x1202a100 */
  push32(0x1202f481u); f_1202a100();
  /* 1202f481 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1202f484 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1202f487 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1202f48a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1202f48d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1202f494 jmp 0x1202f4ad */
  goto L_1202f4ad;
  /* 1202f496 mov eax, 1 */
  EAX = (0x1u);
  /* 1202f49b ret  */
  ESPCHK(0x1202f350u, _esp0);
  ESP += 4; return;
  /* 1202f49c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1202f49f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1202f4a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1202f4ad:;
  /* 1202f4ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f4b1 jne 0x1202f4ba */
  if (!C.zf) goto L_1202f4ba;
  /* 1202f4b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f4b5 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f4ba:;
  /* 1202f4ba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202f4bd push edx */
  push32((uint32_t)(EDX));
  /* 1202f4be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f4c1 push eax */
  push32((uint32_t)(EAX));
  /* 1202f4c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1202f4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f4c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f4c9 push edx */
  push32((uint32_t)(EDX));
  /* 1202f4ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1202f4cc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1202f4cf push eax */
  push32((uint32_t)(EAX));
  /* 1202f4d0 call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x1202f4d6u);
  /* 1202f4d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f4d8 jne 0x1202f4e1 */
  if (!C.zf) goto L_1202f4e1;
  /* 1202f4da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f4dc jmp 0x1202f641 */
  goto L_1202f641;
L_1202f4e1:;
  /* 1202f4e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f4e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f4e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202f4e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f4e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f4ec push edx */
  push32((uint32_t)(EDX));
  /* 1202f4ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f4f0 push eax */
  push32((uint32_t)(EAX));
  /* 1202f4f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f4f5 call dword ptr [0x12055328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055328))), 0x1202f4fbu);
  /* 1202f4fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202f4fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f502 jne 0x1202f50b */
  if (!C.zf) goto L_1202f50b;
  /* 1202f504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f506 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f50b:;
  /* 1202f50b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f50e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1202f514 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202f516 je 0x1202f55b */
  if (C.zf) goto L_1202f55b;
  /* 1202f518 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f51c je 0x1202f556 */
  if (C.zf) goto L_1202f556;
  /* 1202f51e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202f521 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f524 jle 0x1202f52d */
  if ((C.zf||C.sf!=C.of)) goto L_1202f52d;
  /* 1202f526 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f528 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f52d:;
  /* 1202f52d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1202f530 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f531 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202f534 push edx */
  push32((uint32_t)(EDX));
  /* 1202f535 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202f538 push eax */
  push32((uint32_t)(EAX));
  /* 1202f539 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f53c push ecx */
  push32((uint32_t)(ECX));
  /* 1202f53d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f540 push edx */
  push32((uint32_t)(EDX));
  /* 1202f541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f544 push eax */
  push32((uint32_t)(EAX));
  /* 1202f545 call dword ptr [0x12055328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055328))), 0x1202f54bu);
  /* 1202f54b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f54d jne 0x1202f556 */
  if (!C.zf) goto L_1202f556;
  /* 1202f54f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f551 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f556:;
  /* 1202f556 jmp 0x1202f63a */
  goto L_1202f63a;
L_1202f55b:;
  /* 1202f55b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202f55e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1202f561 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1202f568 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202f56b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1202f56d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f570 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1202f572 call 0x1202a100 */
  push32(0x1202f577u); f_1202a100();
  /* 1202f577 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1202f57a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1202f57d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1202f580 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1202f583 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1202f58a jmp 0x1202f5a3 */
  goto L_1202f5a3;
  /* 1202f58c mov eax, 1 */
  EAX = (0x1u);
  /* 1202f591 ret  */
  ESPCHK(0x1202f350u, _esp0);
  ESP += 4; return;
  /* 1202f592 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1202f595 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1202f59c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1202f5a3:;
  /* 1202f5a3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f5a7 jne 0x1202f5b0 */
  if (!C.zf) goto L_1202f5b0;
  /* 1202f5a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f5ab jmp 0x1202f641 */
  goto L_1202f641;
L_1202f5b0:;
  /* 1202f5b0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202f5b3 push eax */
  push32((uint32_t)(EAX));
  /* 1202f5b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202f5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f5b8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1202f5bb push edx */
  push32((uint32_t)(EDX));
  /* 1202f5bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1202f5bf push eax */
  push32((uint32_t)(EAX));
  /* 1202f5c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f5c7 push edx */
  push32((uint32_t)(EDX));
  /* 1202f5c8 call dword ptr [0x12055328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055328))), 0x1202f5ceu);
  /* 1202f5ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f5d0 jne 0x1202f5d6 */
  if (!C.zf) goto L_1202f5d6;
  /* 1202f5d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f5d4 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f5d6:;
  /* 1202f5d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f5da jne 0x1202f60a */
  if (!C.zf) goto L_1202f60a;
  /* 1202f5dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f5de push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f5e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f5e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202f5e7 push eax */
  push32((uint32_t)(EAX));
  /* 1202f5e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202f5eb push ecx */
  push32((uint32_t)(ECX));
  /* 1202f5ec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1202f5f1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1202f5f4 push edx */
  push32((uint32_t)(EDX));
  /* 1202f5f5 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x1202f5fbu);
  /* 1202f5fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202f5fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f602 jne 0x1202f608 */
  if (!C.zf) goto L_1202f608;
  /* 1202f604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f606 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f608:;
  /* 1202f608 jmp 0x1202f63a */
  goto L_1202f63a;
L_1202f60a:;
  /* 1202f60a push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f60c push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f60e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1202f611 push eax */
  push32((uint32_t)(EAX));
  /* 1202f612 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1202f615 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f616 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1202f619 push edx */
  push32((uint32_t)(EDX));
  /* 1202f61a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1202f61d push eax */
  push32((uint32_t)(EAX));
  /* 1202f61e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1202f623 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1202f626 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f627 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x1202f62du);
  /* 1202f62d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1202f630 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f634 jne 0x1202f63a */
  if (!C.zf) goto L_1202f63a;
  /* 1202f636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f638 jmp 0x1202f641 */
  goto L_1202f641;
L_1202f63a:;
  /* 1202f63a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1202f63d jmp 0x1202f641 */
  goto L_1202f641;
L_1202f63f:;
  /* 1202f63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1202f641:;
  /* 1202f641 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1202f644 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202f647 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1202f64e pop edi */
  EDI = (pop32());
  /* 1202f64f pop esi */
  ESI = (pop32());
  /* 1202f650 pop ebx */
  EBX = (pop32());
  /* 1202f651 mov esp, ebp */
  ESP = (EBP);
  /* 1202f653 pop ebp */
  EBP = (pop32());
  /* 1202f654 ret  */
  ESPCHK(0x1202f350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f660 @ 0x1202f660 (80 bytes, 32 insns) */
void f_1202f660(void) {
  FTRACE(0x1202f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f660 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f661 mov ebp, esp */
  EBP = (ESP);
  /* 1202f663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f669 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202f66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f66f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1202f672:;
  /* 1202f672 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f678 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f67b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202f67e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202f680 je 0x1202f697 */
  if (C.zf) goto L_1202f697;
  /* 1202f682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f685 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1202f688 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202f68a je 0x1202f697 */
  if (C.zf) goto L_1202f697;
  /* 1202f68c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f68f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202f695 jmp 0x1202f672 */
  goto L_1202f672;
L_1202f697:;
  /* 1202f697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f69a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1202f69d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1202f69f jne 0x1202f6a9 */
  if (!C.zf) goto L_1202f6a9;
  /* 1202f6a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f6a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f6a7 jmp 0x1202f6ac */
  goto L_1202f6ac;
L_1202f6a9:;
  /* 1202f6a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1202f6ac:;
  /* 1202f6ac mov esp, ebp */
  ESP = (EBP);
  /* 1202f6ae pop ebp */
  EBP = (pop32());
  /* 1202f6af ret  */
  ESPCHK(0x1202f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6b0 @ 0x1202f6b0 (130 bytes, 43 insns) */
void f_1202f6b0(void) {
  FTRACE(0x1202f6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1202f6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f6b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f6b7 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f6bd jae 0x1202f6e1 */
  if (!C.cf) goto L_1202f6e1;
  /* 1202f6bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f6c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202f6c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f6c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202f6cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f6ce mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202f6d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1202f6da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1202f6dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202f6df jne 0x1202f6fc */
  if (!C.zf) goto L_1202f6fc;
L_1202f6e1:;
  /* 1202f6e1 call 0x1202ee30 */
  push32(0x1202f6e6u); f_1202ee30();
  /* 1202f6e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1202f6ec call 0x1202ee40 */
  push32(0x1202f6f1u); f_1202ee40();
  /* 1202f6f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202f6f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202f6fa jmp 0x1202f72e */
  goto L_1202f72e;
L_1202f6fc:;
  /* 1202f6fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f6ff push edx */
  push32((uint32_t)(EDX));
  /* 1202f700 call 0x12030650 */
  push32(0x1202f705u); f_12030650();
  /* 1202f705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f708 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f70b push eax */
  push32((uint32_t)(EAX));
  /* 1202f70c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f70f push ecx */
  push32((uint32_t)(ECX));
  /* 1202f710 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f713 push edx */
  push32((uint32_t)(EDX));
  /* 1202f714 call 0x1202f740 */
  push32(0x1202f719u); f_1202f740();
  /* 1202f719 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f71c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202f71f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f722 push eax */
  push32((uint32_t)(EAX));
  /* 1202f723 call 0x120306e0 */
  push32(0x1202f728u); f_120306e0();
  /* 1202f728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f72b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1202f72e:;
  /* 1202f72e mov esp, ebp */
  ESP = (EBP);
  /* 1202f730 pop ebp */
  EBP = (pop32());
  /* 1202f731 ret  */
  ESPCHK(0x1202f6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f740 @ 0x1202f740 (178 bytes, 56 insns) */
void f_1202f740(void) {
  FTRACE(0x1202f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f740 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f741 mov ebp, esp */
  EBP = (ESP);
  /* 1202f743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f749 push eax */
  push32((uint32_t)(EAX));
  /* 1202f74a call 0x120304d0 */
  push32(0x1202f74fu); f_120304d0();
  /* 1202f74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202f755 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f759 jne 0x1202f76e */
  if (!C.zf) goto L_1202f76e;
  /* 1202f75b call 0x1202ee30 */
  push32(0x1202f760u); f_1202ee30();
  /* 1202f760 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1202f766 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202f769 jmp 0x1202f7ee */
  goto L_1202f7ee;
L_1202f76e:;
  /* 1202f76e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f771 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f772 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f774 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f777 push edx */
  push32((uint32_t)(EDX));
  /* 1202f778 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202f77b push eax */
  push32((uint32_t)(EAX));
  /* 1202f77c call dword ptr [0x12055324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055324))), 0x1202f782u);
  /* 1202f782 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202f785 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f789 jne 0x1202f796 */
  if (!C.zf) goto L_1202f796;
  /* 1202f78b call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x1202f791u);
  /* 1202f791 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202f794 jmp 0x1202f79d */
  goto L_1202f79d;
L_1202f796:;
  /* 1202f796 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1202f79d:;
  /* 1202f79d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f7a1 je 0x1202f7b4 */
  if (C.zf) goto L_1202f7b4;
  /* 1202f7a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f7a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f7a7 call 0x1202ed90 */
  push32(0x1202f7acu); f_1202ed90();
  /* 1202f7ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f7af or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202f7b2 jmp 0x1202f7ee */
  goto L_1202f7ee;
L_1202f7b4:;
  /* 1202f7b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f7b7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1202f7ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f7bd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1202f7c0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f7c3 mov ecx, dword ptr [edx*4 + 0x120541c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 1202f7ca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1202f7ce and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1202f7d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f7d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202f7d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f7da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1202f7dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f7e0 mov eax, dword ptr [eax*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 1202f7e7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1202f7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1202f7ee:;
  /* 1202f7ee mov esp, ebp */
  ESP = (EBP);
  /* 1202f7f0 pop ebp */
  EBP = (pop32());
  /* 1202f7f1 ret  */
  ESPCHK(0x1202f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f800 @ 0x1202f800 (130 bytes, 43 insns) */
void f_1202f800(void) {
  FTRACE(0x1202f800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f800 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f801 mov ebp, esp */
  EBP = (ESP);
  /* 1202f803 push ecx */
  push32((uint32_t)(ECX));
  /* 1202f804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f807 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f80d jae 0x1202f831 */
  if (!C.cf) goto L_1202f831;
  /* 1202f80f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f812 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202f815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f818 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202f81b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f81e mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202f825 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1202f82a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1202f82d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202f82f jne 0x1202f84c */
  if (!C.zf) goto L_1202f84c;
L_1202f831:;
  /* 1202f831 call 0x1202ee30 */
  push32(0x1202f836u); f_1202ee30();
  /* 1202f836 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1202f83c call 0x1202ee40 */
  push32(0x1202f841u); f_1202ee40();
  /* 1202f841 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202f847 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202f84a jmp 0x1202f87e */
  goto L_1202f87e;
L_1202f84c:;
  /* 1202f84c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f84f push edx */
  push32((uint32_t)(EDX));
  /* 1202f850 call 0x12030650 */
  push32(0x1202f855u); f_12030650();
  /* 1202f855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f858 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202f85b push eax */
  push32((uint32_t)(EAX));
  /* 1202f85c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f85f push ecx */
  push32((uint32_t)(ECX));
  /* 1202f860 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f863 push edx */
  push32((uint32_t)(EDX));
  /* 1202f864 call 0x1202f890 */
  push32(0x1202f869u); f_1202f890();
  /* 1202f869 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f86c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202f86f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f872 push eax */
  push32((uint32_t)(EAX));
  /* 1202f873 call 0x120306e0 */
  push32(0x1202f878u); f_120306e0();
  /* 1202f878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f87b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1202f87e:;
  /* 1202f87e mov esp, ebp */
  ESP = (EBP);
  /* 1202f880 pop ebp */
  EBP = (pop32());
  /* 1202f881 ret  */
  ESPCHK(0x1202f800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1202f890 (627 bytes, 182 insns) */
void f_1202f890(void) {
  FTRACE(0x1202f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1202f891 mov ebp, esp */
  EBP = (ESP);
  /* 1202f893 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f899 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1202f8a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202f8a3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1202f8a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f8ad jne 0x1202f8b6 */
  if (!C.zf) goto L_1202f8b6;
  /* 1202f8af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202f8b1 jmp 0x1202faff */
  goto L_1202faff;
L_1202f8b6:;
  /* 1202f8b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f8b9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202f8bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f8bf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202f8c2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f8c5 mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202f8cc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1202f8d1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1202f8d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1202f8d6 je 0x1202f8e8 */
  if (C.zf) goto L_1202f8e8;
  /* 1202f8d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202f8da push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f8dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f8df push edx */
  push32((uint32_t)(EDX));
  /* 1202f8e0 call 0x1202f740 */
  push32(0x1202f8e5u); f_1202f740();
  /* 1202f8e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202f8e8:;
  /* 1202f8e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f8eb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202f8ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f8f1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1202f8f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f8f7 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 1202f8fe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1202f903 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1202f908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f90a je 0x1202fa1c */
  if (C.zf) goto L_1202fa1c;
  /* 1202f910 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202f913 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1202f916 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1202f91d:;
  /* 1202f91d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f920 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f923 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f926 jae 0x1202fa1a */
  if (!C.cf) goto L_1202fa1a;
  /* 1202f92c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1202f932 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1202f935:;
  /* 1202f935 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f938 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1202f93e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f940 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f946 jge 0x1202f9a7 */
  if ((C.sf==C.of)) goto L_1202f9a7;
  /* 1202f948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f94b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f94e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f951 jae 0x1202f9a7 */
  if (!C.cf) goto L_1202f9a7;
  /* 1202f953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f956 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1202f958 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1202f95e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202f961 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f964 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202f967 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1202f96e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202f971 jne 0x1202f991 */
  if (!C.zf) goto L_1202f991;
  /* 1202f973 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1202f979 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f97c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1202f982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f985 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1202f988 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f98b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f98e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1202f991:;
  /* 1202f991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f994 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1202f99a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1202f99c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f99f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f9a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1202f9a5 jmp 0x1202f935 */
  goto L_1202f935;
L_1202f9a7:;
  /* 1202f9a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202f9a9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1202f9af push edx */
  push32((uint32_t)(EDX));
  /* 1202f9b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f9b3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1202f9b9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f9bb push eax */
  push32((uint32_t)(EAX));
  /* 1202f9bc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1202f9c2 push edx */
  push32((uint32_t)(EDX));
  /* 1202f9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f9c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202f9c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202f9cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1202f9cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202f9d2 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 1202f9d9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1202f9dc push eax */
  push32((uint32_t)(EAX));
  /* 1202f9dd call dword ptr [0x120553b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b4))), 0x1202f9e3u);
  /* 1202f9e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202f9e5 je 0x1202fa0a */
  if (C.zf) goto L_1202fa0a;
  /* 1202f9e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202f9ea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202f9f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1202f9f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202f9f6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1202f9fc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202f9fe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fa04 jge 0x1202fa08 */
  if ((C.sf==C.of)) goto L_1202fa08;
  /* 1202fa06 jmp 0x1202fa1a */
  goto L_1202fa1a;
L_1202fa08:;
  /* 1202fa08 jmp 0x1202fa15 */
  goto L_1202fa15;
L_1202fa0a:;
  /* 1202fa0a call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x1202fa10u);
  /* 1202fa10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1202fa13 jmp 0x1202fa1a */
  goto L_1202fa1a;
L_1202fa15:;
  /* 1202fa15 jmp 0x1202f91d */
  goto L_1202f91d;
L_1202fa1a:;
  /* 1202fa1a jmp 0x1202fa6c */
  goto L_1202fa6c;
L_1202fa1c:;
  /* 1202fa1c push 0 */
  push32((uint32_t)(0x0u));
  /* 1202fa1e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1202fa24 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fa25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1202fa28 push edx */
  push32((uint32_t)(EDX));
  /* 1202fa29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202fa2c push eax */
  push32((uint32_t)(EAX));
  /* 1202fa2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fa30 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202fa33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fa36 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202fa39 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202fa3c mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202fa43 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1202fa46 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fa47 call dword ptr [0x120553b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b4))), 0x1202fa4du);
  /* 1202fa4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202fa4f je 0x1202fa63 */
  if (C.zf) goto L_1202fa63;
  /* 1202fa51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1202fa58 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1202fa5e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1202fa61 jmp 0x1202fa6c */
  goto L_1202fa6c;
L_1202fa63:;
  /* 1202fa63 call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x1202fa69u);
  /* 1202fa69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1202fa6c:;
  /* 1202fa6c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fa70 jne 0x1202faf6 */
  if (!C.zf) goto L_1202faf6;
  /* 1202fa76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fa7a je 0x1202faaa */
  if (C.zf) goto L_1202faaa;
  /* 1202fa7c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fa80 jne 0x1202fa99 */
  if (!C.zf) goto L_1202fa99;
  /* 1202fa82 call 0x1202ee30 */
  push32(0x1202fa87u); f_1202ee30();
  /* 1202fa87 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1202fa8d call 0x1202ee40 */
  push32(0x1202fa92u); f_1202ee40();
  /* 1202fa92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202fa95 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1202fa97 jmp 0x1202faa5 */
  goto L_1202faa5;
L_1202fa99:;
  /* 1202fa99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1202fa9c push edx */
  push32((uint32_t)(EDX));
  /* 1202fa9d call 0x1202ed90 */
  push32(0x1202faa2u); f_1202ed90();
  /* 1202faa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202faa5:;
  /* 1202faa5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202faa8 jmp 0x1202faff */
  goto L_1202faff;
L_1202faaa:;
  /* 1202faaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202faad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202fab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fab3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1202fab6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202fab9 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 1202fac0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1202fac5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1202fac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202faca je 0x1202fadb */
  if (C.zf) goto L_1202fadb;
  /* 1202facc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202facf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1202fad2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fad5 jne 0x1202fadb */
  if (!C.zf) goto L_1202fadb;
  /* 1202fad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202fad9 jmp 0x1202faff */
  goto L_1202faff;
L_1202fadb:;
  /* 1202fadb call 0x1202ee30 */
  push32(0x1202fae0u); f_1202ee30();
  /* 1202fae0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1202fae6 call 0x1202ee40 */
  push32(0x1202faebu); f_1202ee40();
  /* 1202faeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1202faf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202faf4 jmp 0x1202faff */
  goto L_1202faff;
L_1202faf6:;
  /* 1202faf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1202faf9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1202faff:;
  /* 1202faff mov esp, ebp */
  ESP = (EBP);
  /* 1202fb01 pop ebp */
  EBP = (pop32());
  /* 1202fb02 ret  */
  ESPCHK(0x1202f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x1202fb10 (199 bytes, 68 insns) */
void f_1202fb10(void) {
  FTRACE(0x1202fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fb11 mov ebp, esp */
  EBP = (ESP);
  /* 1202fb13 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fb14 push ebx */
  push32((uint32_t)(EBX));
  /* 1202fb15 push esi */
  push32((uint32_t)(ESI));
  /* 1202fb16 push edi */
  push32((uint32_t)(EDI));
L_1202fb17:;
  /* 1202fb17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fb1b jne 0x1202fb3b */
  if (!C.zf) goto L_1202fb3b;
  /* 1202fb1d push 0x1204e44c */
  push32((uint32_t)(0x1204e44cu));
  /* 1202fb22 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202fb24 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1202fb26 push 0x1204e518 */
  push32((uint32_t)(0x1204e518u));
  /* 1202fb2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1202fb2d call 0x12026020 */
  push32(0x1202fb32u); f_12026020();
  /* 1202fb32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fb35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fb38 jne 0x1202fb3b */
  if (!C.zf) goto L_1202fb3b;
  /* 1202fb3a int3  */
  x86_unimpl("int3 @ 0x1202fb3a");
L_1202fb3b:;
  /* 1202fb3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202fb3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202fb3f jne 0x1202fb17 */
  if (!C.zf) goto L_1202fb17;
  /* 1202fb41 mov ecx, dword ptr [0x12052a04] */
  ECX = (r32((uint32_t)(0x12052a04)));
  /* 1202fb47 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fb4a mov dword ptr [0x12052a04], ecx */
  w32((uint32_t)(0x12052a04), (ECX));
  /* 1202fb50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fb53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1202fb56 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1202fb58 push 0x1204e518 */
  push32((uint32_t)(0x1204e518u));
  /* 1202fb5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1202fb5f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1202fb64 call 0x12026f60 */
  push32(0x1202fb69u); f_12026f60();
  /* 1202fb69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fb6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fb6f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1202fb72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fb75 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fb79 je 0x1202fb96 */
  if (C.zf) goto L_1202fb96;
  /* 1202fb7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fb7e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1202fb81 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1202fb84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fb87 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1202fb8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fb8d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1202fb94 jmp 0x1202fbbb */
  goto L_1202fbbb;
L_1202fb96:;
  /* 1202fb96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fb99 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1202fb9c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1202fb9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fba2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1202fba5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fba8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fbab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fbae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1202fbb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fbb4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1202fbbb:;
  /* 1202fbbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fbbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fbc1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1202fbc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1202fbc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fbc9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1202fbd0 pop edi */
  EDI = (pop32());
  /* 1202fbd1 pop esi */
  ESI = (pop32());
  /* 1202fbd2 pop ebx */
  EBX = (pop32());
  /* 1202fbd3 mov esp, ebp */
  ESP = (EBP);
  /* 1202fbd5 pop ebp */
  EBP = (pop32());
  /* 1202fbd6 ret  */
  ESPCHK(0x1202fb10u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1202fbe0 (50 bytes, 17 insns) */
void f_1202fbe0(void) {
  FTRACE(0x1202fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1202fbe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fbe6 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fbec jb 0x1202fbf2 */
  if (C.cf) goto L_1202fbf2;
  /* 1202fbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202fbf0 jmp 0x1202fc10 */
  goto L_1202fc10;
L_1202fbf2:;
  /* 1202fbf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fbf5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202fbf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fbfb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202fbfe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202fc01 mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202fc08 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1202fc0d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1202fc10:;
  /* 1202fc10 pop ebp */
  EBP = (pop32());
  /* 1202fc11 ret  */
  ESPCHK(0x1202fbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc20 @ 0x1202fc20 (300 bytes, 80 insns) */
void f_1202fc20(void) {
  FTRACE(0x1202fc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fc21 mov ebp, esp */
  EBP = (ESP);
  /* 1202fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fc24 cmp dword ptr [0x12053ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12053ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fc2b jne 0x1202fc39 */
  if (!C.zf) goto L_1202fc39;
  /* 1202fc2d mov dword ptr [0x12053ec0], 0x200 */
  w32((uint32_t)(0x12053ec0), (0x200u));
  /* 1202fc37 jmp 0x1202fc4c */
  goto L_1202fc4c;
L_1202fc39:;
  /* 1202fc39 cmp dword ptr [0x12053ec0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12053ec0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fc40 jge 0x1202fc4c */
  if ((C.sf==C.of)) goto L_1202fc4c;
  /* 1202fc42 mov dword ptr [0x12053ec0], 0x14 */
  w32((uint32_t)(0x12053ec0), (0x14u));
L_1202fc4c:;
  /* 1202fc4c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1202fc51 push 0x1204e524 */
  push32((uint32_t)(0x1204e524u));
  /* 1202fc56 push 2 */
  push32((uint32_t)(0x2u));
  /* 1202fc58 push 4 */
  push32((uint32_t)(0x4u));
  /* 1202fc5a mov eax, dword ptr [0x12053ec0] */
  EAX = (r32((uint32_t)(0x12053ec0)));
  /* 1202fc5f push eax */
  push32((uint32_t)(EAX));
  /* 1202fc60 call 0x12027370 */
  push32(0x1202fc65u); f_12027370();
  /* 1202fc65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fc68 mov dword ptr [0x12052b78], eax */
  w32((uint32_t)(0x12052b78), (EAX));
  /* 1202fc6d cmp dword ptr [0x12052b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fc74 jne 0x1202fcb5 */
  if (!C.zf) goto L_1202fcb5;
  /* 1202fc76 mov dword ptr [0x12053ec0], 0x14 */
  w32((uint32_t)(0x12053ec0), (0x14u));
  /* 1202fc80 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1202fc85 push 0x1204e524 */
  push32((uint32_t)(0x1204e524u));
  /* 1202fc8a push 2 */
  push32((uint32_t)(0x2u));
  /* 1202fc8c push 4 */
  push32((uint32_t)(0x4u));
  /* 1202fc8e mov ecx, dword ptr [0x12053ec0] */
  ECX = (r32((uint32_t)(0x12053ec0)));
  /* 1202fc94 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fc95 call 0x12027370 */
  push32(0x1202fc9au); f_12027370();
  /* 1202fc9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fc9d mov dword ptr [0x12052b78], eax */
  w32((uint32_t)(0x12052b78), (EAX));
  /* 1202fca2 cmp dword ptr [0x12052b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fca9 jne 0x1202fcb5 */
  if (!C.zf) goto L_1202fcb5;
  /* 1202fcab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1202fcad call 0x12025ed0 */
  push32(0x1202fcb2u); f_12025ed0();
  /* 1202fcb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1202fcb5:;
  /* 1202fcb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202fcbc jmp 0x1202fcc7 */
  goto L_1202fcc7;
L_1202fcbe:;
  /* 1202fcbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fcc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fcc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1202fcc7:;
  /* 1202fcc7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fccb jge 0x1202fce6 */
  if ((C.sf==C.of)) goto L_1202fce6;
  /* 1202fccd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fcd0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202fcd3 add eax, 0x12051120 */
  { uint32_t _a=(EAX),_b=(0x12051120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fcd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fcdb mov edx, dword ptr [0x12052b78] */
  EDX = (r32((uint32_t)(0x12052b78)));
  /* 1202fce1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1202fce4 jmp 0x1202fcbe */
  goto L_1202fcbe;
L_1202fce6:;
  /* 1202fce6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1202fced jmp 0x1202fcf8 */
  goto L_1202fcf8;
L_1202fcef:;
  /* 1202fcef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fcf2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fcf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1202fcf8:;
  /* 1202fcf8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fcfc jge 0x1202fd48 */
  if ((C.sf==C.of)) goto L_1202fd48;
  /* 1202fcfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fd01 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202fd04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fd07 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202fd0a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202fd0d mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202fd14 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fd18 je 0x1202fd36 */
  if (C.zf) goto L_1202fd36;
  /* 1202fd1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fd1d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202fd20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fd23 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1202fd26 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1202fd29 mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 1202fd30 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fd34 jne 0x1202fd46 */
  if (!C.zf) goto L_1202fd46;
L_1202fd36:;
  /* 1202fd36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1202fd39 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1202fd3c mov dword ptr [ecx + 0x12051130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12051130), (0xffffffffu));
L_1202fd46:;
  /* 1202fd46 jmp 0x1202fcef */
  goto L_1202fcef;
L_1202fd48:;
  /* 1202fd48 mov esp, ebp */
  ESP = (EBP);
  /* 1202fd4a pop ebp */
  EBP = (pop32());
  /* 1202fd4b ret  */
  ESPCHK(0x1202fc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd50 @ 0x1202fd50 (26 bytes, 9 insns) */
void f_1202fd50(void) {
  FTRACE(0x1202fd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fd51 mov ebp, esp */
  EBP = (ESP);
  /* 1202fd53 call 0x12030950 */
  push32(0x1202fd58u); f_12030950();
  /* 1202fd58 movsx eax, byte ptr [0x1205281c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1205281c))));
  /* 1202fd5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1202fd61 je 0x1202fd68 */
  if (C.zf) goto L_1202fd68;
  /* 1202fd63 call 0x12030710 */
  push32(0x1202fd68u); f_12030710();
L_1202fd68:;
  /* 1202fd68 pop ebp */
  EBP = (pop32());
  /* 1202fd69 ret  */
  ESPCHK(0x1202fd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd70 @ 0x1202fd70 (61 bytes, 20 insns) */
void f_1202fd70(void) {
  FTRACE(0x1202fd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fd71 mov ebp, esp */
  EBP = (ESP);
  /* 1202fd73 cmp dword ptr [ebp + 8], 0x12051120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12051120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fd7a jb 0x1202fd9e */
  if (C.cf) goto L_1202fd9e;
  /* 1202fd7c cmp dword ptr [ebp + 8], 0x12051380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12051380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fd83 ja 0x1202fd9e */
  if ((!C.cf&&!C.zf)) goto L_1202fd9e;
  /* 1202fd85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fd88 sub eax, 0x12051120 */
  { uint32_t _a=(EAX),_b=(0x12051120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202fd8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202fd90 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fd93 push eax */
  push32((uint32_t)(EAX));
  /* 1202fd94 call 0x1202a960 */
  push32(0x1202fd99u); f_1202a960();
  /* 1202fd99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fd9c jmp 0x1202fdab */
  goto L_1202fdab;
L_1202fd9e:;
  /* 1202fd9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fda1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fda4 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fda5 call dword ptr [0x12055360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055360))), 0x1202fdabu);
L_1202fdab:;
  /* 1202fdab pop ebp */
  EBP = (pop32());
  /* 1202fdac ret  */
  ESPCHK(0x1202fd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdb0 @ 0x1202fdb0 (41 bytes, 16 insns) */
void f_1202fdb0(void) {
  FTRACE(0x1202fdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1202fdb3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fdb7 jge 0x1202fdca */
  if ((C.sf==C.of)) goto L_1202fdca;
  /* 1202fdb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fdbc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fdbf push eax */
  push32((uint32_t)(EAX));
  /* 1202fdc0 call 0x1202a960 */
  push32(0x1202fdc5u); f_1202a960();
  /* 1202fdc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fdc8 jmp 0x1202fdd7 */
  goto L_1202fdd7;
L_1202fdca:;
  /* 1202fdca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202fdcd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fdd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fdd1 call dword ptr [0x12055360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055360))), 0x1202fdd7u);
L_1202fdd7:;
  /* 1202fdd7 pop ebp */
  EBP = (pop32());
  /* 1202fdd8 ret  */
  ESPCHK(0x1202fdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fde0 @ 0x1202fde0 (61 bytes, 20 insns) */
void f_1202fde0(void) {
  FTRACE(0x1202fde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fde1 mov ebp, esp */
  EBP = (ESP);
  /* 1202fde3 cmp dword ptr [ebp + 8], 0x12051120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12051120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fdea jb 0x1202fe0e */
  if (C.cf) goto L_1202fe0e;
  /* 1202fdec cmp dword ptr [ebp + 8], 0x12051380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12051380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fdf3 ja 0x1202fe0e */
  if ((!C.cf&&!C.zf)) goto L_1202fe0e;
  /* 1202fdf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fdf8 sub eax, 0x12051120 */
  { uint32_t _a=(EAX),_b=(0x12051120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202fdfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1202fe00 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe03 push eax */
  push32((uint32_t)(EAX));
  /* 1202fe04 call 0x1202aa00 */
  push32(0x1202fe09u); f_1202aa00();
  /* 1202fe09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe0c jmp 0x1202fe1b */
  goto L_1202fe1b;
L_1202fe0e:;
  /* 1202fe0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fe11 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe14 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fe15 call dword ptr [0x1205535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205535c))), 0x1202fe1bu);
L_1202fe1b:;
  /* 1202fe1b pop ebp */
  EBP = (pop32());
  /* 1202fe1c ret  */
  ESPCHK(0x1202fde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe20 @ 0x1202fe20 (41 bytes, 16 insns) */
void f_1202fe20(void) {
  FTRACE(0x1202fe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fe20 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fe21 mov ebp, esp */
  EBP = (ESP);
  /* 1202fe23 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fe27 jge 0x1202fe3a */
  if ((C.sf==C.of)) goto L_1202fe3a;
  /* 1202fe29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fe2c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe2f push eax */
  push32((uint32_t)(EAX));
  /* 1202fe30 call 0x1202aa00 */
  push32(0x1202fe35u); f_1202aa00();
  /* 1202fe35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe38 jmp 0x1202fe47 */
  goto L_1202fe47;
L_1202fe3a:;
  /* 1202fe3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202fe3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe40 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fe41 call dword ptr [0x1205535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205535c))), 0x1202fe47u);
L_1202fe47:;
  /* 1202fe47 pop ebp */
  EBP = (pop32());
  /* 1202fe48 ret  */
  ESPCHK(0x1202fe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe50 @ 0x1202fe50 (119 bytes, 34 insns) */
void f_1202fe50(void) {
  FTRACE(0x1202fe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fe50 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fe51 mov ebp, esp */
  EBP = (ESP);
  /* 1202fe53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202fe56 push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 1202fe5b call dword ptr [0x120553c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c8))), 0x1202fe61u);
  /* 1202fe61 cmp dword ptr [0x12052b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fe68 je 0x1202fe88 */
  if (C.zf) goto L_1202fe88;
  /* 1202fe6a push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 1202fe6f call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x1202fe75u);
  /* 1202fe75 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1202fe77 call 0x1202a960 */
  push32(0x1202fe7cu); f_1202a960();
  /* 1202fe7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fe7f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1202fe86 jmp 0x1202fe8f */
  goto L_1202fe8f;
L_1202fe88:;
  /* 1202fe88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1202fe8f:;
  /* 1202fe8f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1202fe93 push eax */
  push32((uint32_t)(EAX));
  /* 1202fe94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202fe97 push ecx */
  push32((uint32_t)(ECX));
  /* 1202fe98 call 0x1202fed0 */
  push32(0x1202fe9du); f_1202fed0();
  /* 1202fe9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202fea0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1202fea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fea7 je 0x1202feb5 */
  if (C.zf) goto L_1202feb5;
  /* 1202fea9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1202feab call 0x1202aa00 */
  push32(0x1202feb0u); f_1202aa00();
  /* 1202feb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1202feb3 jmp 0x1202fec0 */
  goto L_1202fec0;
L_1202feb5:;
  /* 1202feb5 push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 1202feba call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x1202fec0u);
L_1202fec0:;
  /* 1202fec0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1202fec3 mov esp, ebp */
  ESP = (EBP);
  /* 1202fec5 pop ebp */
  EBP = (pop32());
  /* 1202fec6 ret  */
  ESPCHK(0x1202fe50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fed0 @ 0x1202fed0 (160 bytes, 50 insns) */
void f_1202fed0(void) {
  FTRACE(0x1202fed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202fed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1202fed1 mov ebp, esp */
  EBP = (ESP);
  /* 1202fed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1202fed6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202feda jne 0x1202fee3 */
  if (!C.zf) goto L_1202fee3;
  /* 1202fedc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1202fede jmp 0x1202ff6c */
  goto L_1202ff6c;
L_1202fee3:;
  /* 1202fee3 cmp dword ptr [0x120529e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202feea jne 0x1202ff1a */
  if (!C.zf) goto L_1202ff1a;
  /* 1202feec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1202feef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202fef4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fef9 jle 0x1202ff0b */
  if ((C.zf||C.sf!=C.of)) goto L_1202ff0b;
  /* 1202fefb call 0x1202ee30 */
  push32(0x1202ff00u); f_1202ee30();
  /* 1202ff00 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1202ff06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202ff09 jmp 0x1202ff6c */
  goto L_1202ff6c;
L_1202ff0b:;
  /* 1202ff0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ff0e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1202ff11 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1202ff13 mov eax, 1 */
  EAX = (0x1u);
  /* 1202ff18 jmp 0x1202ff6c */
  goto L_1202ff6c;
L_1202ff1a:;
  /* 1202ff1a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1202ff21 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1202ff24 push eax */
  push32((uint32_t)(EAX));
  /* 1202ff25 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202ff27 mov ecx, dword ptr [0x12050ea4] */
  ECX = (r32((uint32_t)(0x12050ea4)));
  /* 1202ff2d push ecx */
  push32((uint32_t)(ECX));
  /* 1202ff2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1202ff31 push edx */
  push32((uint32_t)(EDX));
  /* 1202ff32 push 1 */
  push32((uint32_t)(0x1u));
  /* 1202ff34 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1202ff37 push eax */
  push32((uint32_t)(EAX));
  /* 1202ff38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1202ff3d mov ecx, dword ptr [0x120529f8] */
  ECX = (r32((uint32_t)(0x120529f8)));
  /* 1202ff43 push ecx */
  push32((uint32_t)(ECX));
  /* 1202ff44 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x1202ff4au);
  /* 1202ff4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1202ff4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ff51 je 0x1202ff59 */
  if (C.zf) goto L_1202ff59;
  /* 1202ff53 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ff57 je 0x1202ff69 */
  if (C.zf) goto L_1202ff69;
L_1202ff59:;
  /* 1202ff59 call 0x1202ee30 */
  push32(0x1202ff5eu); f_1202ee30();
  /* 1202ff5e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1202ff64 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1202ff67 jmp 0x1202ff6c */
  goto L_1202ff6c;
L_1202ff69:;
  /* 1202ff69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1202ff6c:;
  /* 1202ff6c mov esp, ebp */
  ESP = (EBP);
  /* 1202ff6e pop ebp */
  EBP = (pop32());
  /* 1202ff6f ret  */
  ESPCHK(0x1202fed0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1202ff70 (32 bytes, 18 insns) */
void f_1202ff70(void) {
  FTRACE(0x1202ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ff71 mov ebp, esp */
  EBP = (ESP);
  /* 1202ff73 push ebx */
  push32((uint32_t)(EBX));
  /* 1202ff74 push esi */
  push32((uint32_t)(ESI));
  /* 1202ff75 push edi */
  push32((uint32_t)(EDI));
  /* 1202ff76 push ebp */
  push32((uint32_t)(EBP));
  /* 1202ff77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202ff79 push 0 */
  push32((uint32_t)(0x0u));
  /* 1202ff7b push 0x1202ff88 */
  push32((uint32_t)(0x1202ff88u));
  /* 1202ff80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1202ff83 call 0x120376bc */
  push32(0x1202ff88u); f_120376bc();
  /* 1202ff88 pop ebp */
  EBP = (pop32());
  /* 1202ff89 pop edi */
  EDI = (pop32());
  /* 1202ff8a pop esi */
  ESI = (pop32());
  /* 1202ff8b pop ebx */
  EBX = (pop32());
  /* 1202ff8c mov esp, ebp */
  ESP = (EBP);
  /* 1202ff8e pop ebp */
  EBP = (pop32());
  /* 1202ff8f ret  */
  ESPCHK(0x1202ff70u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1202ffb2 (104 bytes, 33 insns) */
void f_1202ffb2(void) {
  FTRACE(0x1202ffb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1202ffb2 push ebx */
  push32((uint32_t)(EBX));
  /* 1202ffb3 push esi */
  push32((uint32_t)(ESI));
  /* 1202ffb4 push edi */
  push32((uint32_t)(EDI));
  /* 1202ffb5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1202ffb9 push eax */
  push32((uint32_t)(EAX));
  /* 1202ffba push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1202ffbc push 0x1202ff90 */
  push32((uint32_t)(0x1202ff90u));
  /* 1202ffc1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1202ffc8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1202ffcf:;
  /* 1202ffcf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1202ffd3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1202ffd6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1202ffd9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ffdc je 0x1203000c */
  if (C.zf) goto L_1203000c;
  /* 1202ffde cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202ffe2 je 0x1203000c */
  if (C.zf) goto L_1203000c;
  /* 1202ffe4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1202ffe7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1202ffea mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1202ffee mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1202fff1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1202fff6 jne 0x1203000a */
  if (!C.zf) goto L_1203000a;
  /* 1202fff8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1202fffd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12030001 call 0x12030046 */
  push32(0x12030006u); f_12030046();
  /* 12030006 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1203000au);
L_1203000a:;
  /* 1203000a jmp 0x1202ffcf */
  goto L_1202ffcf;
L_1203000c:;
  /* 1203000c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12030013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030016 pop edi */
  EDI = (pop32());
  /* 12030017 pop esi */
  ESI = (pop32());
  /* 12030018 pop ebx */
  EBX = (pop32());
  /* 12030019 ret  */
  ESPCHK(0x1202ffb2u, _esp0);
  ESP += 4; return;
}

/* FUN_10010046 @ 0x12030046 (24 bytes, 10 insns) */
void f_12030046(void) {
  FTRACE(0x12030046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030046 push ebx */
  push32((uint32_t)(EBX));
  /* 12030047 push ecx */
  push32((uint32_t)(ECX));
  /* 12030048 mov ebx, 0x120513b8 */
  EBX = (0x120513b8u);
  /* 1203004d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030050 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12030053 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12030056 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12030059 pop ecx */
  ECX = (pop32());
  /* 1203005a pop ebx */
  EBX = (pop32());
  /* 1203005b ret 4 */
  ESPCHK(0x12030046u, _esp0);
  ESP += 8; return;
}

/* FUN_10010125 @ 0x12030125 (27 bytes, 11 insns) */
void f_12030125(void) {
  FTRACE(0x12030125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030125 push ebp */
  push32((uint32_t)(EBP));
  /* 12030126 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1203012a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1203012c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1203012f push eax */
  push32((uint32_t)(EAX));
  /* 12030130 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12030133 push eax */
  push32((uint32_t)(EAX));
  /* 12030134 call 0x1202ffb2 */
  push32(0x12030139u); f_1202ffb2();
  /* 12030139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203013c pop ebp */
  EBP = (pop32());
  /* 1203013d ret 4 */
  ESPCHK(0x12030125u, _esp0);
  ESP += 8; return;
}

/* FUN_10010140 @ 0x12030140 (482 bytes, 138 insns) */
void f_12030140(void) {
  FTRACE(0x12030140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030140 push ebp */
  push32((uint32_t)(EBP));
  /* 12030141 mov ebp, esp */
  EBP = (ESP);
  /* 12030143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030146 push esi */
  push32((uint32_t)(ESI));
  /* 12030147 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1203014e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12030150 call 0x1202a960 */
  push32(0x12030155u); f_1202a960();
  /* 12030155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030158 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1203015f jmp 0x1203016a */
  goto L_1203016a;
L_12030161:;
  /* 12030161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030164 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030167 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1203016a:;
  /* 1203016a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203016e jge 0x12030310 */
  if ((C.sf==C.of)) goto L_12030310;
  /* 12030174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030177 cmp dword ptr [ecx*4 + 0x120541c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120541c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203017f je 0x12030276 */
  if (C.zf) goto L_12030276;
  /* 12030185 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030188 mov eax, dword ptr [edx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 1203018f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12030192 jmp 0x1203019d */
  goto L_1203019d;
L_12030194:;
  /* 12030194 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030197 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203019a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1203019d:;
  /* 1203019d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120301a0 mov eax, dword ptr [edx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 120301a7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120301ac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120301af jae 0x12030266 */
  if (!C.cf) goto L_12030266;
  /* 120301b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120301b8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120301bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120301bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120301c1 jne 0x12030261 */
  if (!C.zf) goto L_12030261;
  /* 120301c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120301ca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120301ce jne 0x12030209 */
  if (!C.zf) goto L_12030209;
  /* 120301d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120301d2 call 0x1202a960 */
  push32(0x120301d7u); f_1202a960();
  /* 120301d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120301da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120301dd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120301e1 jne 0x120301ff */
  if (!C.zf) goto L_120301ff;
  /* 120301e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120301e6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120301e9 push edx */
  push32((uint32_t)(EDX));
  /* 120301ea call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x120301f0u);
  /* 120301f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120301f3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120301f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120301f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120301fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_120301ff:;
  /* 120301ff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12030201 call 0x1202aa00 */
  push32(0x12030206u); f_1202aa00();
  /* 12030206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12030209:;
  /* 12030209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203020c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203020f push eax */
  push32((uint32_t)(EAX));
  /* 12030210 call dword ptr [0x12055360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055360))), 0x12030216u);
  /* 12030216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030219 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1203021d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12030220 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12030222 je 0x12030236 */
  if (C.zf) goto L_12030236;
  /* 12030224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030227 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203022a push eax */
  push32((uint32_t)(EAX));
  /* 1203022b call dword ptr [0x1205535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205535c))), 0x12030231u);
  /* 12030231 jmp 0x12030194 */
  goto L_12030194;
L_12030236:;
  /* 12030236 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030239 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1203023f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030242 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12030245 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203024b sub eax, dword ptr [edx*4 + 0x120541c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x120541c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030252 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12030253 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12030258 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1203025a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203025c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203025f jmp 0x12030266 */
  goto L_12030266;
L_12030261:;
  /* 12030261 jmp 0x12030194 */
  goto L_12030194;
L_12030266:;
  /* 12030266 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203026a je 0x12030271 */
  if (C.zf) goto L_12030271;
  /* 1203026c jmp 0x12030310 */
  goto L_12030310;
L_12030271:;
  /* 12030271 jmp 0x1203030b */
  goto L_1203030b;
L_12030276:;
  /* 12030276 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12030278 push 0x1204e52c */
  push32((uint32_t)(0x1204e52cu));
  /* 1203027d push 2 */
  push32((uint32_t)(0x2u));
  /* 1203027f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12030284 call 0x12026f60 */
  push32(0x12030289u); f_12026f60();
  /* 12030289 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203028c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203028f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030293 je 0x12030309 */
  if (C.zf) goto L_12030309;
  /* 12030295 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030298 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203029b mov dword ptr [eax*4 + 0x120541c0], ecx */
  w32((uint32_t)(EAX*4 + 0x120541c0), (ECX));
  /* 120302a2 mov edx, dword ptr [0x120542fc] */
  EDX = (r32((uint32_t)(0x120542fc)));
  /* 120302a8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120302ab mov dword ptr [0x120542fc], edx */
  w32((uint32_t)(0x120542fc), (EDX));
  /* 120302b1 jmp 0x120302bc */
  goto L_120302bc;
L_120302b3:;
  /* 120302b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120302b6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120302b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120302bc:;
  /* 120302bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120302bf mov edx, dword ptr [ecx*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 120302c6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120302cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120302cf jae 0x120302f4 */
  if (!C.cf) goto L_120302f4;
  /* 120302d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120302d4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 120302d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120302db mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 120302e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120302e4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 120302e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120302eb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120302f2 jmp 0x120302b3 */
  goto L_120302b3;
L_120302f4:;
  /* 120302f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120302f7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120302fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120302fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030300 push edx */
  push32((uint32_t)(EDX));
  /* 12030301 call 0x12030650 */
  push32(0x12030306u); f_12030650();
  /* 12030306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12030309:;
  /* 12030309 jmp 0x12030310 */
  goto L_12030310;
L_1203030b:;
  /* 1203030b jmp 0x12030161 */
  goto L_12030161;
L_12030310:;
  /* 12030310 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12030312 call 0x1202aa00 */
  push32(0x12030317u); f_1202aa00();
  /* 12030317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203031a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203031d pop esi */
  ESI = (pop32());
  /* 1203031e mov esp, ebp */
  ESP = (EBP);
  /* 12030320 pop ebp */
  EBP = (pop32());
  /* 12030321 ret  */
  ESPCHK(0x12030140u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12030330 (183 bytes, 57 insns) */
void f_12030330(void) {
  FTRACE(0x12030330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030330 push ebp */
  push32((uint32_t)(EBP));
  /* 12030331 mov ebp, esp */
  EBP = (ESP);
  /* 12030333 push ecx */
  push32((uint32_t)(ECX));
  /* 12030334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030337 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203033d jae 0x120303ca */
  if (!C.cf) goto L_120303ca;
  /* 12030343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030346 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12030349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203034c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1203034f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030352 mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 12030359 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203035d jne 0x120303ca */
  if (!C.zf) goto L_120303ca;
  /* 1203035f cmp dword ptr [0x120527dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030366 jne 0x120303aa */
  if (!C.zf) goto L_120303aa;
  /* 12030368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203036b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1203036e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030372 je 0x12030382 */
  if (C.zf) goto L_12030382;
  /* 12030374 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030378 je 0x12030390 */
  if (C.zf) goto L_12030390;
  /* 1203037a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203037e je 0x1203039e */
  if (C.zf) goto L_1203039e;
  /* 12030380 jmp 0x120303aa */
  goto L_120303aa;
L_12030382:;
  /* 12030382 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030385 push edx */
  push32((uint32_t)(EDX));
  /* 12030386 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12030388 call dword ptr [0x1205531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205531c))), 0x1203038eu);
  /* 1203038e jmp 0x120303aa */
  goto L_120303aa;
L_12030390:;
  /* 12030390 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030393 push eax */
  push32((uint32_t)(EAX));
  /* 12030394 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12030396 call dword ptr [0x1205531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205531c))), 0x1203039cu);
  /* 1203039c jmp 0x120303aa */
  goto L_120303aa;
L_1203039e:;
  /* 1203039e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120303a1 push ecx */
  push32((uint32_t)(ECX));
  /* 120303a2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120303a4 call dword ptr [0x1205531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205531c))), 0x120303aau);
L_120303aa:;
  /* 120303aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120303ad sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 120303b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120303b3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120303b6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120303b9 mov ecx, dword ptr [edx*4 + 0x120541c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 120303c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120303c3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 120303c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120303c8 jmp 0x120303e3 */
  goto L_120303e3;
L_120303ca:;
  /* 120303ca call 0x1202ee30 */
  push32(0x120303cfu); f_1202ee30();
  /* 120303cf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120303d5 call 0x1202ee40 */
  push32(0x120303dau); f_1202ee40();
  /* 120303da mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120303e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120303e3:;
  /* 120303e3 mov esp, ebp */
  ESP = (EBP);
  /* 120303e5 pop ebp */
  EBP = (pop32());
  /* 120303e6 ret  */
  ESPCHK(0x12030330u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x120303f0 (216 bytes, 63 insns) */
void f_120303f0(void) {
  FTRACE(0x120303f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120303f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120303f1 mov ebp, esp */
  EBP = (ESP);
  /* 120303f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120303f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120303f7 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120303fd jae 0x120304ab */
  if (!C.cf) goto L_120304ab;
  /* 12030403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030406 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12030409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203040c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1203040f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030412 mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 12030419 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1203041e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12030421 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12030423 je 0x120304ab */
  if (C.zf) goto L_120304ab;
  /* 12030429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203042c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1203042f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030432 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12030435 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030438 mov ecx, dword ptr [edx*4 + 0x120541c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 1203043f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030443 je 0x120304ab */
  if (C.zf) goto L_120304ab;
  /* 12030445 cmp dword ptr [0x120527dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120527dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203044c jne 0x1203048a */
  if (!C.zf) goto L_1203048a;
  /* 1203044e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030451 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12030454 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030458 je 0x12030468 */
  if (C.zf) goto L_12030468;
  /* 1203045a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203045e je 0x12030474 */
  if (C.zf) goto L_12030474;
  /* 12030460 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030464 je 0x12030480 */
  if (C.zf) goto L_12030480;
  /* 12030466 jmp 0x1203048a */
  goto L_1203048a;
L_12030468:;
  /* 12030468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203046a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1203046c call dword ptr [0x1205531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205531c))), 0x12030472u);
  /* 12030472 jmp 0x1203048a */
  goto L_1203048a;
L_12030474:;
  /* 12030474 push 0 */
  push32((uint32_t)(0x0u));
  /* 12030476 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12030478 call dword ptr [0x1205531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205531c))), 0x1203047eu);
  /* 1203047e jmp 0x1203048a */
  goto L_1203048a;
L_12030480:;
  /* 12030480 push 0 */
  push32((uint32_t)(0x0u));
  /* 12030482 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12030484 call dword ptr [0x1205531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205531c))), 0x1203048au);
L_1203048a:;
  /* 1203048a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203048d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12030490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030493 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12030496 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030499 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 120304a0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 120304a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120304a9 jmp 0x120304c4 */
  goto L_120304c4;
L_120304ab:;
  /* 120304ab call 0x1202ee30 */
  push32(0x120304b0u); f_1202ee30();
  /* 120304b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120304b6 call 0x1202ee40 */
  push32(0x120304bbu); f_1202ee40();
  /* 120304bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120304c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120304c4:;
  /* 120304c4 mov esp, ebp */
  ESP = (EBP);
  /* 120304c6 pop ebp */
  EBP = (pop32());
  /* 120304c7 ret  */
  ESPCHK(0x120303f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x120304d0 (102 bytes, 30 insns) */
void f_120304d0(void) {
  FTRACE(0x120304d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120304d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120304d1 mov ebp, esp */
  EBP = (ESP);
  /* 120304d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120304d6 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120304dc jae 0x1203051b */
  if (!C.cf) goto L_1203051b;
  /* 120304de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120304e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120304e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120304e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120304ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120304ed mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 120304f4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120304f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120304fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120304fe je 0x1203051b */
  if (C.zf) goto L_1203051b;
  /* 12030500 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030503 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12030506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030509 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1203050c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203050f mov ecx, dword ptr [edx*4 + 0x120541c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120541c0)));
  /* 12030516 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12030519 jmp 0x12030534 */
  goto L_12030534;
L_1203051b:;
  /* 1203051b call 0x1202ee30 */
  push32(0x12030520u); f_1202ee30();
  /* 12030520 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12030526 call 0x1202ee40 */
  push32(0x1203052bu); f_1202ee40();
  /* 1203052b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12030531 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12030534:;
  /* 12030534 pop ebp */
  EBP = (pop32());
  /* 12030535 ret  */
  ESPCHK(0x120304d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010540 @ 0x12030540 (260 bytes, 83 insns) */
void f_12030540(void) {
  FTRACE(0x12030540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030540 push ebp */
  push32((uint32_t)(EBP));
  /* 12030541 mov ebp, esp */
  EBP = (ESP);
  /* 12030543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030546 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1203054a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203054d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12030550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030552 je 0x1203055d */
  if (C.zf) goto L_1203055d;
  /* 12030554 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12030557 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1203055a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1203055d:;
  /* 1203055d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030560 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12030566 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12030568 je 0x12030572 */
  if (C.zf) goto L_12030572;
  /* 1203056a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1203056d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1203056f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12030572:;
  /* 12030572 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030575 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1203057b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203057d je 0x12030588 */
  if (C.zf) goto L_12030588;
  /* 1203057f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12030582 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12030585 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12030588:;
  /* 12030588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203058b push eax */
  push32((uint32_t)(EAX));
  /* 1203058c call dword ptr [0x120553cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553cc))), 0x12030592u);
  /* 12030592 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12030595 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030599 jne 0x120305b2 */
  if (!C.zf) goto L_120305b2;
  /* 1203059b call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x120305a1u);
  /* 120305a1 push eax */
  push32((uint32_t)(EAX));
  /* 120305a2 call 0x1202ed90 */
  push32(0x120305a7u); f_1202ed90();
  /* 120305a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120305aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120305ad jmp 0x12030640 */
  goto L_12030640;
L_120305b2:;
  /* 120305b2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120305b6 jne 0x120305c3 */
  if (!C.zf) goto L_120305c3;
  /* 120305b8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 120305bb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 120305be mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 120305c1 jmp 0x120305d2 */
  goto L_120305d2;
L_120305c3:;
  /* 120305c3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120305c7 jne 0x120305d2 */
  if (!C.zf) goto L_120305d2;
  /* 120305c9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 120305cc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 120305cf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_120305d2:;
  /* 120305d2 call 0x12030140 */
  push32(0x120305d7u); f_12030140();
  /* 120305d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120305da cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120305de jne 0x120305fb */
  if (!C.zf) goto L_120305fb;
  /* 120305e0 call 0x1202ee30 */
  push32(0x120305e5u); f_1202ee30();
  /* 120305e5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 120305eb call 0x1202ee40 */
  push32(0x120305f0u); f_1202ee40();
  /* 120305f0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120305f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120305f9 jmp 0x12030640 */
  goto L_12030640;
L_120305fb:;
  /* 120305fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120305fe push eax */
  push32((uint32_t)(EAX));
  /* 120305ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030602 push ecx */
  push32((uint32_t)(ECX));
  /* 12030603 call 0x12030330 */
  push32(0x12030608u); f_12030330();
  /* 12030608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203060b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1203060e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12030611 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12030614 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030617 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1203061a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203061d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12030620 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030623 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 1203062a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1203062d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12030631 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030634 push ecx */
  push32((uint32_t)(ECX));
  /* 12030635 call 0x120306e0 */
  push32(0x1203063au); f_120306e0();
  /* 1203063a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203063d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12030640:;
  /* 12030640 mov esp, ebp */
  ESP = (EBP);
  /* 12030642 pop ebp */
  EBP = (pop32());
  /* 12030643 ret  */
  ESPCHK(0x12030540u, _esp0);
  ESP += 4; return;
}

/* FUN_10010650 @ 0x12030650 (134 bytes, 44 insns) */
void f_12030650(void) {
  FTRACE(0x12030650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030650 push ebp */
  push32((uint32_t)(EBP));
  /* 12030651 mov ebp, esp */
  EBP = (ESP);
  /* 12030653 push ecx */
  push32((uint32_t)(ECX));
  /* 12030654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030657 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1203065a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203065d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12030660 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030663 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 1203066a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203066c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1203066f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030672 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030676 jne 0x120306b1 */
  if (!C.zf) goto L_120306b1;
  /* 12030678 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1203067a call 0x1202a960 */
  push32(0x1203067fu); f_1202a960();
  /* 1203067f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030685 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030689 jne 0x120306a7 */
  if (!C.zf) goto L_120306a7;
  /* 1203068b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203068e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030691 push edx */
  push32((uint32_t)(EDX));
  /* 12030692 call dword ptr [0x12055364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055364))), 0x12030698u);
  /* 12030698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203069b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1203069e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120306a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120306a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_120306a7:;
  /* 120306a7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120306a9 call 0x1202aa00 */
  push32(0x120306aeu); f_1202aa00();
  /* 120306ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120306b1:;
  /* 120306b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120306b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120306b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120306ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120306bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120306c0 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 120306c7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 120306cb push eax */
  push32((uint32_t)(EAX));
  /* 120306cc call dword ptr [0x12055360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055360))), 0x120306d2u);
  /* 120306d2 mov esp, ebp */
  ESP = (EBP);
  /* 120306d4 pop ebp */
  EBP = (pop32());
  /* 120306d5 ret  */
  ESPCHK(0x12030650u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x120306e0 (38 bytes, 13 insns) */
void f_120306e0(void) {
  FTRACE(0x120306e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120306e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120306e1 mov ebp, esp */
  EBP = (ESP);
  /* 120306e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120306e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120306e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120306ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120306ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120306f2 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 120306f9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 120306fd push eax */
  push32((uint32_t)(EAX));
  /* 120306fe call dword ptr [0x1205535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205535c))), 0x12030704u);
  /* 12030704 pop ebp */
  EBP = (pop32());
  /* 12030705 ret  */
  ESPCHK(0x120306e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010710 @ 0x12030710 (218 bytes, 63 insns) */
void f_12030710(void) {
  FTRACE(0x12030710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030710 push ebp */
  push32((uint32_t)(EBP));
  /* 12030711 mov ebp, esp */
  EBP = (ESP);
  /* 12030713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030716 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203071d push 2 */
  push32((uint32_t)(0x2u));
  /* 1203071f call 0x1202a960 */
  push32(0x12030724u); f_1202a960();
  /* 12030724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030727 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1203072e jmp 0x12030739 */
  goto L_12030739;
L_12030730:;
  /* 12030730 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030733 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030736 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12030739:;
  /* 12030739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203073c cmp ecx, dword ptr [0x12053ec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12053ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030742 jge 0x120307d9 */
  if ((C.sf==C.of)) goto L_120307d9;
  /* 12030748 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203074b mov eax, dword ptr [0x12052b78] */
  EAX = (r32((uint32_t)(0x12052b78)));
  /* 12030750 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030754 je 0x120307d4 */
  if (C.zf) goto L_120307d4;
  /* 12030756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030759 mov edx, dword ptr [0x12052b78] */
  EDX = (r32((uint32_t)(0x12052b78)));
  /* 1203075f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12030762 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12030765 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1203076b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203076d je 0x12030791 */
  if (C.zf) goto L_12030791;
  /* 1203076f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030772 mov eax, dword ptr [0x12052b78] */
  EAX = (r32((uint32_t)(0x12052b78)));
  /* 12030777 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1203077a push ecx */
  push32((uint32_t)(ECX));
  /* 1203077b call 0x12031500 */
  push32(0x12030780u); f_12031500();
  /* 12030780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030783 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030786 je 0x12030791 */
  if (C.zf) goto L_12030791;
  /* 12030788 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203078b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203078e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12030791:;
  /* 12030791 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030795 jl 0x120307d4 */
  if ((C.sf!=C.of)) goto L_120307d4;
  /* 12030797 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203079a mov ecx, dword ptr [0x12052b78] */
  ECX = (r32((uint32_t)(0x12052b78)));
  /* 120307a0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120307a3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120307a6 push edx */
  push32((uint32_t)(EDX));
  /* 120307a7 call dword ptr [0x1205539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205539c))), 0x120307adu);
  /* 120307ad push 2 */
  push32((uint32_t)(0x2u));
  /* 120307af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120307b2 mov ecx, dword ptr [0x12052b78] */
  ECX = (r32((uint32_t)(0x12052b78)));
  /* 120307b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120307bb push edx */
  push32((uint32_t)(EDX));
  /* 120307bc call 0x120279f0 */
  push32(0x120307c1u); f_120279f0();
  /* 120307c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120307c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120307c7 mov ecx, dword ptr [0x12052b78] */
  ECX = (r32((uint32_t)(0x12052b78)));
  /* 120307cd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_120307d4:;
  /* 120307d4 jmp 0x12030730 */
  goto L_12030730;
L_120307d9:;
  /* 120307d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120307db call 0x1202aa00 */
  push32(0x120307e0u); f_1202aa00();
  /* 120307e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120307e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120307e6 mov esp, ebp */
  ESP = (EBP);
  /* 120307e8 pop ebp */
  EBP = (pop32());
  /* 120307e9 ret  */
  ESPCHK(0x12030710u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x120307f0 (68 bytes, 26 insns) */
void f_120307f0(void) {
  FTRACE(0x120307f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120307f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120307f1 mov ebp, esp */
  EBP = (ESP);
  /* 120307f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120307f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120307f8 jne 0x12030806 */
  if (!C.zf) goto L_12030806;
  /* 120307fa push 0 */
  push32((uint32_t)(0x0u));
  /* 120307fc call 0x12030960 */
  push32(0x12030801u); f_12030960();
  /* 12030801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030804 jmp 0x12030830 */
  goto L_12030830;
L_12030806:;
  /* 12030806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030809 push eax */
  push32((uint32_t)(EAX));
  /* 1203080a call 0x1202fd70 */
  push32(0x1203080fu); f_1202fd70();
  /* 1203080f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030815 push ecx */
  push32((uint32_t)(ECX));
  /* 12030816 call 0x12030840 */
  push32(0x1203081bu); f_12030840();
  /* 1203081b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203081e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12030821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030824 push edx */
  push32((uint32_t)(EDX));
  /* 12030825 call 0x1202fde0 */
  push32(0x1203082au); f_1202fde0();
  /* 1203082a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203082d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12030830:;
  /* 12030830 mov esp, ebp */
  ESP = (EBP);
  /* 12030832 pop ebp */
  EBP = (pop32());
  /* 12030833 ret  */
  ESPCHK(0x120307f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010840 @ 0x12030840 (65 bytes, 26 insns) */
void f_12030840(void) {
  FTRACE(0x12030840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030840 push ebp */
  push32((uint32_t)(EBP));
  /* 12030841 mov ebp, esp */
  EBP = (ESP);
  /* 12030843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030846 push eax */
  push32((uint32_t)(EAX));
  /* 12030847 call 0x12030890 */
  push32(0x1203084cu); f_12030890();
  /* 1203084c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203084f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030851 je 0x12030858 */
  if (C.zf) goto L_12030858;
  /* 12030853 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12030856 jmp 0x1203087f */
  goto L_1203087f;
L_12030858:;
  /* 12030858 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203085b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1203085e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12030864 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12030866 je 0x1203087d */
  if (C.zf) goto L_1203087d;
  /* 12030868 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203086b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1203086e push ecx */
  push32((uint32_t)(ECX));
  /* 1203086f call 0x12031650 */
  push32(0x12030874u); f_12031650();
  /* 12030874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030877 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12030879 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203087b jmp 0x1203087f */
  goto L_1203087f;
L_1203087d:;
  /* 1203087d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1203087f:;
  /* 1203087f pop ebp */
  EBP = (pop32());
  /* 12030880 ret  */
  ESPCHK(0x12030840u, _esp0);
  ESP += 4; return;
}

/* FUN_10010890 @ 0x12030890 (183 bytes, 62 insns) */
void f_12030890(void) {
  FTRACE(0x12030890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030890 push ebp */
  push32((uint32_t)(EBP));
  /* 12030891 mov ebp, esp */
  EBP = (ESP);
  /* 12030893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203089d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120308a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120308a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308a6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120308a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120308ac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120308af jne 0x1203092b */
  if (!C.zf) goto L_1203092b;
  /* 120308b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120308b7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 120308bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120308bf je 0x1203092b */
  if (C.zf) goto L_1203092b;
  /* 120308c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120308c9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120308cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120308cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120308d3 jle 0x1203092b */
  if ((C.zf||C.sf!=C.of)) goto L_1203092b;
  /* 120308d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120308d8 push edx */
  push32((uint32_t)(EDX));
  /* 120308d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120308df push ecx */
  push32((uint32_t)(ECX));
  /* 120308e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120308e6 push eax */
  push32((uint32_t)(EAX));
  /* 120308e7 call 0x1202f800 */
  push32(0x120308ecu); f_1202f800();
  /* 120308ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120308ef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120308f2 jne 0x12030915 */
  if (!C.zf) goto L_12030915;
  /* 120308f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120308f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120308fa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12030900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12030902 je 0x12030913 */
  if (C.zf) goto L_12030913;
  /* 12030904 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030907 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1203090a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1203090d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030910 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12030913:;
  /* 12030913 jmp 0x1203092b */
  goto L_1203092b;
L_12030915:;
  /* 12030915 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030918 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1203091b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1203091e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030921 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12030924 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1203092b:;
  /* 1203092b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203092e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030931 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12030934 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12030936 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030939 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12030940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030943 mov esp, ebp */
  ESP = (EBP);
  /* 12030945 pop ebp */
  EBP = (pop32());
  /* 12030946 ret  */
  ESPCHK(0x12030890u, _esp0);
  ESP += 4; return;
}

/* FUN_10010950 @ 0x12030950 (15 bytes, 7 insns) */
void f_12030950(void) {
  FTRACE(0x12030950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030950 push ebp */
  push32((uint32_t)(EBP));
  /* 12030951 mov ebp, esp */
  EBP = (ESP);
  /* 12030953 push 1 */
  push32((uint32_t)(0x1u));
  /* 12030955 call 0x12030960 */
  push32(0x1203095au); f_12030960();
  /* 1203095a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203095d pop ebp */
  EBP = (pop32());
  /* 1203095e ret  */
  ESPCHK(0x12030950u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x12030960 (319 bytes, 94 insns) */
void f_12030960(void) {
  FTRACE(0x12030960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030960 push ebp */
  push32((uint32_t)(EBP));
  /* 12030961 mov ebp, esp */
  EBP = (ESP);
  /* 12030963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203096d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12030974 push 2 */
  push32((uint32_t)(0x2u));
  /* 12030976 call 0x1202a960 */
  push32(0x1203097bu); f_1202a960();
  /* 1203097b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203097e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12030985 jmp 0x12030990 */
  goto L_12030990;
L_12030987:;
  /* 12030987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203098a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203098d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12030990:;
  /* 12030990 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030993 cmp ecx, dword ptr [0x12053ec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12053ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030999 jge 0x12030a83 */
  if ((C.sf==C.of)) goto L_12030a83;
  /* 1203099f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120309a2 mov eax, dword ptr [0x12052b78] */
  EAX = (r32((uint32_t)(0x12052b78)));
  /* 120309a7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120309ab je 0x12030a7e */
  if (C.zf) goto L_12030a7e;
  /* 120309b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120309b4 mov edx, dword ptr [0x12052b78] */
  EDX = (r32((uint32_t)(0x12052b78)));
  /* 120309ba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120309bd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120309c0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 120309c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120309c8 je 0x12030a7e */
  if (C.zf) goto L_12030a7e;
  /* 120309ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120309d1 mov eax, dword ptr [0x12052b78] */
  EAX = (r32((uint32_t)(0x12052b78)));
  /* 120309d6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120309d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120309da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120309dd push edx */
  push32((uint32_t)(EDX));
  /* 120309de call 0x1202fdb0 */
  push32(0x120309e3u); f_1202fdb0();
  /* 120309e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120309e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120309e9 mov ecx, dword ptr [0x12052b78] */
  ECX = (r32((uint32_t)(0x12052b78)));
  /* 120309ef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120309f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120309f5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 120309fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120309fc je 0x12030a65 */
  if (C.zf) goto L_12030a65;
  /* 120309fe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030a02 jne 0x12030a29 */
  if (!C.zf) goto L_12030a29;
  /* 12030a04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030a07 mov edx, dword ptr [0x12052b78] */
  EDX = (r32((uint32_t)(0x12052b78)));
  /* 12030a0d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12030a10 push eax */
  push32((uint32_t)(EAX));
  /* 12030a11 call 0x12030840 */
  push32(0x12030a16u); f_12030840();
  /* 12030a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030a19 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030a1c je 0x12030a27 */
  if (C.zf) goto L_12030a27;
  /* 12030a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030a21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030a24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12030a27:;
  /* 12030a27 jmp 0x12030a65 */
  goto L_12030a65;
L_12030a29:;
  /* 12030a29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030a2d jne 0x12030a65 */
  if (!C.zf) goto L_12030a65;
  /* 12030a2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030a32 mov eax, dword ptr [0x12052b78] */
  EAX = (r32((uint32_t)(0x12052b78)));
  /* 12030a37 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12030a3a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12030a3d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12030a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12030a42 je 0x12030a65 */
  if (C.zf) goto L_12030a65;
  /* 12030a44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030a47 mov ecx, dword ptr [0x12052b78] */
  ECX = (r32((uint32_t)(0x12052b78)));
  /* 12030a4d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12030a50 push edx */
  push32((uint32_t)(EDX));
  /* 12030a51 call 0x12030840 */
  push32(0x12030a56u); f_12030840();
  /* 12030a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030a59 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030a5c jne 0x12030a65 */
  if (!C.zf) goto L_12030a65;
  /* 12030a5e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12030a65:;
  /* 12030a65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030a68 mov ecx, dword ptr [0x12052b78] */
  ECX = (r32((uint32_t)(0x12052b78)));
  /* 12030a6e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12030a71 push edx */
  push32((uint32_t)(EDX));
  /* 12030a72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030a75 push eax */
  push32((uint32_t)(EAX));
  /* 12030a76 call 0x1202fe20 */
  push32(0x12030a7bu); f_1202fe20();
  /* 12030a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12030a7e:;
  /* 12030a7e jmp 0x12030987 */
  goto L_12030987;
L_12030a83:;
  /* 12030a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 12030a85 call 0x1202aa00 */
  push32(0x12030a8au); f_1202aa00();
  /* 12030a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030a8d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030a91 jne 0x12030a98 */
  if (!C.zf) goto L_12030a98;
  /* 12030a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030a96 jmp 0x12030a9b */
  goto L_12030a9b;
L_12030a98:;
  /* 12030a98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12030a9b:;
  /* 12030a9b mov esp, ebp */
  ESP = (EBP);
  /* 12030a9d pop ebp */
  EBP = (pop32());
  /* 12030a9e ret  */
  ESPCHK(0x12030960u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12030aa0 (15 bytes, 7 insns) */
void f_12030aa0(void) {
  FTRACE(0x12030aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12030aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12030aa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12030aa5 call 0x12025ed0 */
  push32(0x12030aaau); f_12025ed0();
  /* 12030aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030aad pop ebp */
  EBP = (pop32());
  /* 12030aae ret  */
  ESPCHK(0x12030aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x12030ab0 (1007 bytes, 269 insns) */
void f_12030ab0(void) {
  FTRACE(0x12030ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12030ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12030ab3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030ab9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030abd jl 0x12030ac5 */
  if ((C.sf!=C.of)) goto L_12030ac5;
  /* 12030abf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030ac3 jle 0x12030acc */
  if ((C.zf||C.sf!=C.of)) goto L_12030acc;
L_12030ac5:;
  /* 12030ac5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12030ac7 jmp 0x12030e9b */
  goto L_12030e9b;
L_12030acc:;
  /* 12030acc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12030ace call 0x1202a960 */
  push32(0x12030ad3u); f_1202a960();
  /* 12030ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ad6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12030add mov eax, dword ptr [0x12052b64] */
  EAX = (r32((uint32_t)(0x12052b64)));
  /* 12030ae2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ae5 mov dword ptr [0x12052b64], eax */
  w32((uint32_t)(0x12052b64), (EAX));
L_12030aea:;
  /* 12030aea cmp dword ptr [0x12052b74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030af1 je 0x12030afd */
  if (C.zf) goto L_12030afd;
  /* 12030af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12030af5 call dword ptr [0x12055318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055318))), 0x12030afbu);
  /* 12030afb jmp 0x12030aea */
  goto L_12030aea;
L_12030afd:;
  /* 12030afd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030b01 je 0x12030b41 */
  if (C.zf) goto L_12030b41;
  /* 12030b03 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030b07 je 0x12030b21 */
  if (C.zf) goto L_12030b21;
  /* 12030b09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030b0c push ecx */
  push32((uint32_t)(ECX));
  /* 12030b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030b10 push edx */
  push32((uint32_t)(EDX));
  /* 12030b11 call 0x12030ea0 */
  push32(0x12030b16u); f_12030ea0();
  /* 12030b16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030b19 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12030b1f jmp 0x12030b33 */
  goto L_12030b33;
L_12030b21:;
  /* 12030b21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030b24 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030b27 mov ecx, dword ptr [eax + 0x120514dc] */
  ECX = (r32((uint32_t)(EAX + 0x120514dc)));
  /* 12030b2d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12030b33:;
  /* 12030b33 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12030b39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12030b3c jmp 0x12030e7b */
  goto L_12030e7b;
L_12030b41:;
  /* 12030b41 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12030b48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12030b4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030b53 je 0x12030e73 */
  if (C.zf) goto L_12030e73;
  /* 12030b59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030b5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12030b5f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030b62 jne 0x12030d84 */
  if (!C.zf) goto L_12030d84;
  /* 12030b68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030b6b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12030b6f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030b72 jne 0x12030d84 */
  if (!C.zf) goto L_12030d84;
  /* 12030b78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030b7b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12030b7f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030b82 jne 0x12030d84 */
  if (!C.zf) goto L_12030d84;
  /* 12030b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030b8b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12030b91:;
  /* 12030b91 push 0x1204e57c */
  push32((uint32_t)(0x1204e57cu));
  /* 12030b96 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12030b9c push ecx */
  push32((uint32_t)(ECX));
  /* 12030b9d call 0x12032d00 */
  push32(0x12030ba2u); f_12032d00();
  /* 12030ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ba5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12030bab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030bb2 je 0x12030bdd */
  if (C.zf) goto L_12030bdd;
  /* 12030bb4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030bba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030bc0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12030bc6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030bcd je 0x12030bdd */
  if (C.zf) goto L_12030bdd;
  /* 12030bcf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030bd5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12030bd8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030bdb jne 0x12030c03 */
  if (!C.zf) goto L_12030c03;
L_12030bdd:;
  /* 12030bdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030be1 je 0x12030bfc */
  if (C.zf) goto L_12030bfc;
  /* 12030be3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12030be5 call 0x1202aa00 */
  push32(0x12030beau); f_1202aa00();
  /* 12030bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030bed mov edx, dword ptr [0x12052b64] */
  EDX = (r32((uint32_t)(0x12052b64)));
  /* 12030bf3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030bf6 mov dword ptr [0x12052b64], edx */
  w32((uint32_t)(0x12052b64), (EDX));
L_12030bfc:;
  /* 12030bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12030bfe jmp 0x12030e9b */
  goto L_12030e9b;
L_12030c03:;
  /* 12030c03 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12030c0a jmp 0x12030c15 */
  goto L_12030c15;
L_12030c0c:;
  /* 12030c0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030c0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030c12 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12030c15:;
  /* 12030c15 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030c19 jg 0x12030c63 */
  if ((!C.zf&&C.sf==C.of)) goto L_12030c63;
  /* 12030c1b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12030c21 push ecx */
  push32((uint32_t)(ECX));
  /* 12030c22 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12030c28 push edx */
  push32((uint32_t)(EDX));
  /* 12030c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030c2c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030c2f mov ecx, dword ptr [eax + 0x120514d8] */
  ECX = (r32((uint32_t)(EAX + 0x120514d8)));
  /* 12030c35 push ecx */
  push32((uint32_t)(ECX));
  /* 12030c36 call 0x12032cc0 */
  push32(0x12030c3bu); f_12032cc0();
  /* 12030c3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030c40 jne 0x12030c61 */
  if (!C.zf) goto L_12030c61;
  /* 12030c42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030c45 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030c48 mov eax, dword ptr [edx + 0x120514d8] */
  EAX = (r32((uint32_t)(EDX + 0x120514d8)));
  /* 12030c4e push eax */
  push32((uint32_t)(EAX));
  /* 12030c4f call 0x12029d90 */
  push32(0x12030c54u); f_12029d90();
  /* 12030c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030c57 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030c5d jne 0x12030c61 */
  if (!C.zf) goto L_12030c61;
  /* 12030c5f jmp 0x12030c63 */
  goto L_12030c63;
L_12030c61:;
  /* 12030c61 jmp 0x12030c0c */
  goto L_12030c0c;
L_12030c63:;
  /* 12030c63 push 0x1204e578 */
  push32((uint32_t)(0x1204e578u));
  /* 12030c68 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030c6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030c71 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12030c77 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030c7d push edx */
  push32((uint32_t)(EDX));
  /* 12030c7e call 0x12032c80 */
  push32(0x12030c83u); f_12032c80();
  /* 12030c83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030c86 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12030c8c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030c93 jne 0x12030cc9 */
  if (!C.zf) goto L_12030cc9;
  /* 12030c95 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030c9b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12030c9e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030ca1 je 0x12030cc9 */
  if (C.zf) goto L_12030cc9;
  /* 12030ca3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030ca7 je 0x12030cc2 */
  if (C.zf) goto L_12030cc2;
  /* 12030ca9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12030cab call 0x1202aa00 */
  push32(0x12030cb0u); f_1202aa00();
  /* 12030cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030cb3 mov edx, dword ptr [0x12052b64] */
  EDX = (r32((uint32_t)(0x12052b64)));
  /* 12030cb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030cbc mov dword ptr [0x12052b64], edx */
  w32((uint32_t)(0x12052b64), (EDX));
L_12030cc2:;
  /* 12030cc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12030cc4 jmp 0x12030e9b */
  goto L_12030e9b;
L_12030cc9:;
  /* 12030cc9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030ccd jg 0x12030d1a */
  if ((!C.zf&&C.sf==C.of)) goto L_12030d1a;
  /* 12030ccf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12030cd5 push eax */
  push32((uint32_t)(EAX));
  /* 12030cd6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030cdc push ecx */
  push32((uint32_t)(ECX));
  /* 12030cdd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12030ce3 push edx */
  push32((uint32_t)(EDX));
  /* 12030ce4 call 0x1202a780 */
  push32(0x12030ce9u); f_1202a780();
  /* 12030ce9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030cec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12030cf2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12030cfa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12030d00 push ecx */
  push32((uint32_t)(ECX));
  /* 12030d01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030d04 push edx */
  push32((uint32_t)(EDX));
  /* 12030d05 call 0x12030ea0 */
  push32(0x12030d0au); f_12030ea0();
  /* 12030d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030d0f je 0x12030d1a */
  if (C.zf) goto L_12030d1a;
  /* 12030d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030d17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12030d1a:;
  /* 12030d1a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030d20 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030d26 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12030d2c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12030d32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12030d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030d37 je 0x12030d48 */
  if (C.zf) goto L_12030d48;
  /* 12030d39 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12030d3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030d42 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12030d48:;
  /* 12030d48 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12030d4e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12030d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030d53 jne 0x12030b91 */
  if (!C.zf) goto L_12030b91;
  /* 12030d59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030d5d je 0x12030d6c */
  if (C.zf) goto L_12030d6c;
  /* 12030d5f call 0x12031040 */
  push32(0x12030d64u); f_12031040();
  /* 12030d64 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12030d6a jmp 0x12030d76 */
  goto L_12030d76;
L_12030d6c:;
  /* 12030d6c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12030d76:;
  /* 12030d76 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12030d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12030d7f jmp 0x12030e71 */
  goto L_12030e71;
L_12030d84:;
  /* 12030d84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030d87 push edx */
  push32((uint32_t)(EDX));
  /* 12030d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12030d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12030d8c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12030d92 push eax */
  push32((uint32_t)(EAX));
  /* 12030d93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030d96 push ecx */
  push32((uint32_t)(ECX));
  /* 12030d97 call 0x12031140 */
  push32(0x12030d9cu); f_12031140();
  /* 12030d9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030d9f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12030da2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030da6 je 0x12030e71 */
  if (C.zf) goto L_12030e71;
  /* 12030dac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12030db3 jmp 0x12030dbe */
  goto L_12030dbe;
L_12030db5:;
  /* 12030db5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030db8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030dbb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12030dbe:;
  /* 12030dbe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030dc2 jg 0x12030e20 */
  if ((!C.zf&&C.sf==C.of)) goto L_12030e20;
  /* 12030dc4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030dc8 je 0x12030e1e */
  if (C.zf) goto L_12030e1e;
  /* 12030dca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030dcd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030dd0 mov ecx, dword ptr [eax + 0x120514dc] */
  ECX = (r32((uint32_t)(EAX + 0x120514dc)));
  /* 12030dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12030dd7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12030ddd push edx */
  push32((uint32_t)(EDX));
  /* 12030dde call 0x12032bf0 */
  push32(0x12030de3u); f_12032bf0();
  /* 12030de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030de8 je 0x12030e15 */
  if (C.zf) goto L_12030e15;
  /* 12030dea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12030df0 push eax */
  push32((uint32_t)(EAX));
  /* 12030df1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12030df4 push ecx */
  push32((uint32_t)(ECX));
  /* 12030df5 call 0x12030ea0 */
  push32(0x12030dfau); f_12030ea0();
  /* 12030dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030dff je 0x12030e0c */
  if (C.zf) goto L_12030e0c;
  /* 12030e01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030e04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030e07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12030e0a jmp 0x12030e13 */
  goto L_12030e13;
L_12030e0c:;
  /* 12030e0c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12030e13:;
  /* 12030e13 jmp 0x12030e1e */
  goto L_12030e1e;
L_12030e15:;
  /* 12030e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030e18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030e1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12030e1e:;
  /* 12030e1e jmp 0x12030db5 */
  goto L_12030db5;
L_12030e20:;
  /* 12030e20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030e24 je 0x12030e4b */
  if (C.zf) goto L_12030e4b;
  /* 12030e26 call 0x12031040 */
  push32(0x12030e2bu); f_12031040();
  /* 12030e2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12030e2e push 2 */
  push32((uint32_t)(0x2u));
  /* 12030e30 mov ecx, dword ptr [0x120514dc] */
  ECX = (r32((uint32_t)(0x120514dc)));
  /* 12030e36 push ecx */
  push32((uint32_t)(ECX));
  /* 12030e37 call 0x120279f0 */
  push32(0x12030e3cu); f_120279f0();
  /* 12030e3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030e3f mov dword ptr [0x120514dc], 0 */
  w32((uint32_t)(0x120514dc), (0x0u));
  /* 12030e49 jmp 0x12030e71 */
  goto L_12030e71;
L_12030e4b:;
  /* 12030e4b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030e4f je 0x12030e5e */
  if (C.zf) goto L_12030e5e;
  /* 12030e51 call 0x12031040 */
  push32(0x12030e56u); f_12031040();
  /* 12030e56 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12030e5c jmp 0x12030e68 */
  goto L_12030e68;
L_12030e5e:;
  /* 12030e5e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12030e68:;
  /* 12030e68 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12030e6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12030e71:;
  /* 12030e71 jmp 0x12030e7b */
  goto L_12030e7b;
L_12030e73:;
  /* 12030e73 call 0x12031040 */
  push32(0x12030e78u); f_12031040();
  /* 12030e78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12030e7b:;
  /* 12030e7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030e7f je 0x12030e98 */
  if (C.zf) goto L_12030e98;
  /* 12030e81 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12030e83 call 0x1202aa00 */
  push32(0x12030e88u); f_1202aa00();
  /* 12030e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030e8b mov eax, dword ptr [0x12052b64] */
  EAX = (r32((uint32_t)(0x12052b64)));
  /* 12030e90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030e93 mov dword ptr [0x12052b64], eax */
  w32((uint32_t)(0x12052b64), (EAX));
L_12030e98:;
  /* 12030e98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12030e9b:;
  /* 12030e9b mov esp, ebp */
  ESP = (EBP);
  /* 12030e9d pop ebp */
  EBP = (pop32());
  /* 12030e9e ret  */
  ESPCHK(0x12030ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ea0 @ 0x12030ea0 (403 bytes, 117 insns) */
void f_12030ea0(void) {
  FTRACE(0x12030ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12030ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12030ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12030ea3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12030ea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030eac push eax */
  push32((uint32_t)(EAX));
  /* 12030ead lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12030eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12030eb4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12030eba push edx */
  push32((uint32_t)(EDX));
  /* 12030ebb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12030ec1 push eax */
  push32((uint32_t)(EAX));
  /* 12030ec2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12030ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 12030ec6 call 0x12031140 */
  push32(0x12030ecbu); f_12031140();
  /* 12030ecb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030ed0 jne 0x12030ed9 */
  if (!C.zf) goto L_12030ed9;
  /* 12030ed2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12030ed4 jmp 0x1203102f */
  goto L_1203102f;
L_12030ed9:;
  /* 12030ed9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12030ede push 0x1204e580 */
  push32((uint32_t)(0x1204e580u));
  /* 12030ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12030ee5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12030eeb push edx */
  push32((uint32_t)(EDX));
  /* 12030eec call 0x12029d90 */
  push32(0x12030ef1u); f_12029d90();
  /* 12030ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ef4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ef7 push eax */
  push32((uint32_t)(EAX));
  /* 12030ef8 call 0x12026f60 */
  push32(0x12030efdu); f_12026f60();
  /* 12030efd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030f00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12030f03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030f07 jne 0x12030f10 */
  if (!C.zf) goto L_12030f10;
  /* 12030f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12030f0b jmp 0x1203102f */
  goto L_1203102f;
L_12030f10:;
  /* 12030f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030f13 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030f16 mov ecx, dword ptr [eax + 0x120514dc] */
  ECX = (r32((uint32_t)(EAX + 0x120514dc)));
  /* 12030f1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12030f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030f22 mov eax, dword ptr [edx*4 + 0x120529e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120529e0)));
  /* 12030f29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12030f2c push 6 */
  push32((uint32_t)(0x6u));
  /* 12030f2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030f31 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030f34 add ecx, 0x12052a30 */
  { uint32_t _a=(ECX),_b=(0x12052a30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030f3a push ecx */
  push32((uint32_t)(ECX));
  /* 12030f3b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12030f3e push edx */
  push32((uint32_t)(EDX));
  /* 12030f3f call 0x1202d840 */
  push32(0x12030f44u); f_1202d840();
  /* 12030f44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030f47 mov eax, dword ptr [0x120529f8] */
  EAX = (r32((uint32_t)(0x120529f8)));
  /* 12030f4c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12030f4f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12030f55 push ecx */
  push32((uint32_t)(ECX));
  /* 12030f56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030f59 push edx */
  push32((uint32_t)(EDX));
  /* 12030f5a call 0x12029f10 */
  push32(0x12030f5fu); f_12029f10();
  /* 12030f5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030f62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030f65 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030f68 mov dword ptr [ecx + 0x120514dc], eax */
  w32((uint32_t)(ECX + 0x120514dc), (EAX));
  /* 12030f6e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12030f74 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12030f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030f7d mov dword ptr [eax*4 + 0x120529e0], edx */
  w32((uint32_t)(EAX*4 + 0x120529e0), (EDX));
  /* 12030f84 push 6 */
  push32((uint32_t)(0x6u));
  /* 12030f86 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12030f8c push ecx */
  push32((uint32_t)(ECX));
  /* 12030f8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030f90 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030f93 add edx, 0x12052a30 */
  { uint32_t _a=(EDX),_b=(0x12052a30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12030f99 push edx */
  push32((uint32_t)(EDX));
  /* 12030f9a call 0x1202d840 */
  push32(0x12030f9fu); f_1202d840();
  /* 12030f9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030fa2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030fa6 jne 0x12030fb3 */
  if (!C.zf) goto L_12030fb3;
  /* 12030fa8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030fae mov dword ptr [0x120529f8], eax */
  w32((uint32_t)(0x120529f8), (EAX));
L_12030fb3:;
  /* 12030fb3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12030fb7 jne 0x12030fc5 */
  if (!C.zf) goto L_12030fc5;
  /* 12030fb9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12030fbf mov dword ptr [0x120529fc], ecx */
  w32((uint32_t)(0x120529fc), (ECX));
L_12030fc5:;
  /* 12030fc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030fc8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030fcb call dword ptr [edx + 0x120514e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x120514e0))), 0x12030fd1u);
  /* 12030fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12030fd3 je 0x1203100c */
  if (C.zf) goto L_1203100c;
  /* 12030fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030fd8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12030fdb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12030fde mov dword ptr [eax + 0x120514dc], ecx */
  w32((uint32_t)(EAX + 0x120514dc), (ECX));
  /* 12030fe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12030fe6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12030fe9 push edx */
  push32((uint32_t)(EDX));
  /* 12030fea call 0x120279f0 */
  push32(0x12030fefu); f_120279f0();
  /* 12030fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12030ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12030ff5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12030ff8 mov dword ptr [eax*4 + 0x120529e0], ecx */
  w32((uint32_t)(EAX*4 + 0x120529e0), (ECX));
  /* 12030fff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12031002 mov dword ptr [0x120529f8], edx */
  w32((uint32_t)(0x120529f8), (EDX));
  /* 12031008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203100a jmp 0x1203102f */
  goto L_1203102f;
L_1203100c:;
  /* 1203100c cmp dword ptr [ebp - 0xc], 0x120513c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x120513c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031013 je 0x12031023 */
  if (C.zf) goto L_12031023;
  /* 12031015 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031017 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203101a push eax */
  push32((uint32_t)(EAX));
  /* 1203101b call 0x120279f0 */
  push32(0x12031020u); f_120279f0();
  /* 12031020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12031023:;
  /* 12031023 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031026 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12031029 mov eax, dword ptr [ecx + 0x120514dc] */
  EAX = (r32((uint32_t)(ECX + 0x120514dc)));
L_1203102f:;
  /* 1203102f mov esp, ebp */
  ESP = (EBP);
  /* 12031031 pop ebp */
  EBP = (pop32());
  /* 12031032 ret  */
  ESPCHK(0x12030ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x12031040 (256 bytes, 72 insns) */
void f_12031040(void) {
  FTRACE(0x12031040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031040 push ebp */
  push32((uint32_t)(EBP));
  /* 12031041 mov ebp, esp */
  EBP = (ESP);
  /* 12031043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12031046 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1203104d cmp dword ptr [0x120514dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120514dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031054 jne 0x12031074 */
  if (!C.zf) goto L_12031074;
  /* 12031056 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1203105b push 0x1204e580 */
  push32((uint32_t)(0x1204e580u));
  /* 12031060 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031062 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12031067 call 0x12026f60 */
  push32(0x1203106cu); f_12026f60();
  /* 1203106c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203106f mov dword ptr [0x120514dc], eax */
  w32((uint32_t)(0x120514dc), (EAX));
L_12031074:;
  /* 12031074 mov eax, dword ptr [0x120514dc] */
  EAX = (r32((uint32_t)(0x120514dc)));
  /* 12031079 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1203107c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12031083 jmp 0x1203108e */
  goto L_1203108e;
L_12031085:;
  /* 12031085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031088 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203108b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1203108e:;
  /* 1203108e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031091 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12031094 mov eax, dword ptr [edx + 0x120514dc] */
  EAX = (r32((uint32_t)(EDX + 0x120514dc)));
  /* 1203109a push eax */
  push32((uint32_t)(EAX));
  /* 1203109b push 0x1204e58c */
  push32((uint32_t)(0x1204e58cu));
  /* 120310a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120310a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120310a6 mov edx, dword ptr [ecx + 0x120514d8] */
  EDX = (r32((uint32_t)(ECX + 0x120514d8)));
  /* 120310ac push edx */
  push32((uint32_t)(EDX));
  /* 120310ad push 3 */
  push32((uint32_t)(0x3u));
  /* 120310af mov eax, dword ptr [0x120514dc] */
  EAX = (r32((uint32_t)(0x120514dc)));
  /* 120310b4 push eax */
  push32((uint32_t)(EAX));
  /* 120310b5 call 0x120312e0 */
  push32(0x120310bau); f_120312e0();
  /* 120310ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120310bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120310c1 jge 0x12031109 */
  if ((C.sf==C.of)) goto L_12031109;
  /* 120310c3 push 0x1204e578 */
  push32((uint32_t)(0x1204e578u));
  /* 120310c8 mov ecx, dword ptr [0x120514dc] */
  ECX = (r32((uint32_t)(0x120514dc)));
  /* 120310ce push ecx */
  push32((uint32_t)(ECX));
  /* 120310cf call 0x12029f20 */
  push32(0x120310d4u); f_12029f20();
  /* 120310d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120310d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120310da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120310dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120310e0 mov eax, dword ptr [edx + 0x120514dc] */
  EAX = (r32((uint32_t)(EDX + 0x120514dc)));
  /* 120310e6 push eax */
  push32((uint32_t)(EAX));
  /* 120310e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120310ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120310ed mov edx, dword ptr [ecx + 0x120514dc] */
  EDX = (r32((uint32_t)(ECX + 0x120514dc)));
  /* 120310f3 push edx */
  push32((uint32_t)(EDX));
  /* 120310f4 call 0x12032bf0 */
  push32(0x120310f9u); f_12032bf0();
  /* 120310f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120310fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120310fe je 0x12031107 */
  if (C.zf) goto L_12031107;
  /* 12031100 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12031107:;
  /* 12031107 jmp 0x12031137 */
  goto L_12031137;
L_12031109:;
  /* 12031109 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203110d jne 0x12031116 */
  if (!C.zf) goto L_12031116;
  /* 1203110f mov eax, dword ptr [0x120514dc] */
  EAX = (r32((uint32_t)(0x120514dc)));
  /* 12031114 jmp 0x1203113c */
  goto L_1203113c;
L_12031116:;
  /* 12031116 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031118 mov eax, dword ptr [0x120514dc] */
  EAX = (r32((uint32_t)(0x120514dc)));
  /* 1203111d push eax */
  push32((uint32_t)(EAX));
  /* 1203111e call 0x120279f0 */
  push32(0x12031123u); f_120279f0();
  /* 12031123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031126 mov dword ptr [0x120514dc], 0 */
  w32((uint32_t)(0x120514dc), (0x0u));
  /* 12031130 mov eax, dword ptr [0x120514f4] */
  EAX = (r32((uint32_t)(0x120514f4)));
  /* 12031135 jmp 0x1203113c */
  goto L_1203113c;
L_12031137:;
  /* 12031137 jmp 0x12031085 */
  goto L_12031085;
L_1203113c:;
  /* 1203113c mov esp, ebp */
  ESP = (EBP);
  /* 1203113e pop ebp */
  EBP = (pop32());
  /* 1203113f ret  */
  ESPCHK(0x12031040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x12031140 (388 bytes, 115 insns) */
void f_12031140(void) {
  FTRACE(0x12031140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031140 push ebp */
  push32((uint32_t)(EBP));
  /* 12031141 mov ebp, esp */
  EBP = (ESP);
  /* 12031143 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12031149 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203114d jne 0x12031156 */
  if (!C.zf) goto L_12031156;
  /* 1203114f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12031151 jmp 0x120312c0 */
  goto L_120312c0;
L_12031156:;
  /* 12031156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031159 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1203115c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203115f jne 0x120311b0 */
  if (!C.zf) goto L_120311b0;
  /* 12031161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031164 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12031168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203116a jne 0x120311b0 */
  if (!C.zf) goto L_120311b0;
  /* 1203116c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203116f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12031172 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12031175 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12031179 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203117d je 0x12031199 */
  if (C.zf) goto L_12031199;
  /* 1203117f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12031182 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12031187 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203118a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12031190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12031193 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12031199:;
  /* 12031199 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203119d je 0x120311a8 */
  if (C.zf) goto L_120311a8;
  /* 1203119f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120311a2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120311a8:;
  /* 120311a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120311ab jmp 0x120312c0 */
  goto L_120312c0;
L_120311b0:;
  /* 120311b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120311b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120311b4 push 0x12051450 */
  push32((uint32_t)(0x12051450u));
  /* 120311b9 call 0x12032bf0 */
  push32(0x120311beu); f_12032bf0();
  /* 120311be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120311c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120311c3 je 0x12031278 */
  if (C.zf) goto L_12031278;
  /* 120311c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120311cc push edx */
  push32((uint32_t)(EDX));
  /* 120311cd push 0x120513cc */
  push32((uint32_t)(0x120513ccu));
  /* 120311d2 call 0x12032bf0 */
  push32(0x120311d7u); f_12032bf0();
  /* 120311d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120311da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120311dc je 0x12031278 */
  if (C.zf) goto L_12031278;
  /* 120311e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120311e5 push eax */
  push32((uint32_t)(EAX));
  /* 120311e6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 120311ec push ecx */
  push32((uint32_t)(ECX));
  /* 120311ed call 0x12031330 */
  push32(0x120311f2u); f_12031330();
  /* 120311f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120311f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120311f7 je 0x12031200 */
  if (C.zf) goto L_12031200;
  /* 120311f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120311fb jmp 0x120312c0 */
  goto L_120312c0;
L_12031200:;
  /* 12031200 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12031206 push edx */
  push32((uint32_t)(EDX));
  /* 12031207 push 0x12052a08 */
  push32((uint32_t)(0x12052a08u));
  /* 1203120c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12031212 push eax */
  push32((uint32_t)(EAX));
  /* 12031213 call 0x12032d40 */
  push32(0x12031218u); f_12032d40();
  /* 12031218 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203121b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203121d jne 0x12031226 */
  if (!C.zf) goto L_12031226;
  /* 1203121f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12031221 jmp 0x120312c0 */
  goto L_120312c0;
L_12031226:;
  /* 12031226 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12031228 mov cx, word ptr [0x12052a0c] */
  CX = (r16((uint32_t)(0x12052a0c)));
  /* 1203122f mov dword ptr [0x12052a10], ecx */
  w32((uint32_t)(0x12052a10), (ECX));
  /* 12031235 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1203123b push edx */
  push32((uint32_t)(EDX));
  /* 1203123c push 0x12051450 */
  push32((uint32_t)(0x12051450u));
  /* 12031241 call 0x12031490 */
  push32(0x12031246u); f_12031490();
  /* 12031246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203124c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1203124f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12031251 je 0x12031266 */
  if (C.zf) goto L_12031266;
  /* 12031253 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031256 push edx */
  push32((uint32_t)(EDX));
  /* 12031257 push 0x120513cc */
  push32((uint32_t)(0x120513ccu));
  /* 1203125c call 0x12029f10 */
  push32(0x12031261u); f_12029f10();
  /* 12031261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031264 jmp 0x12031278 */
  goto L_12031278;
L_12031266:;
  /* 12031266 push 0x12051450 */
  push32((uint32_t)(0x12051450u));
  /* 1203126b push 0x120513cc */
  push32((uint32_t)(0x120513ccu));
  /* 12031270 call 0x12029f10 */
  push32(0x12031275u); f_12029f10();
  /* 12031275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12031278:;
  /* 12031278 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203127c je 0x12031291 */
  if (C.zf) goto L_12031291;
  /* 1203127e push 6 */
  push32((uint32_t)(0x6u));
  /* 12031280 push 0x12052a08 */
  push32((uint32_t)(0x12052a08u));
  /* 12031285 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12031288 push eax */
  push32((uint32_t)(EAX));
  /* 12031289 call 0x1202d840 */
  push32(0x1203128eu); f_1202d840();
  /* 1203128e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12031291:;
  /* 12031291 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031295 je 0x120312aa */
  if (C.zf) goto L_120312aa;
  /* 12031297 push 4 */
  push32((uint32_t)(0x4u));
  /* 12031299 push 0x12052a10 */
  push32((uint32_t)(0x12052a10u));
  /* 1203129e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120312a1 push ecx */
  push32((uint32_t)(ECX));
  /* 120312a2 call 0x1202d840 */
  push32(0x120312a7u); f_1202d840();
  /* 120312a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120312aa:;
  /* 120312aa push 0x12051450 */
  push32((uint32_t)(0x12051450u));
  /* 120312af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120312b2 push edx */
  push32((uint32_t)(EDX));
  /* 120312b3 call 0x12029f10 */
  push32(0x120312b8u); f_12029f10();
  /* 120312b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120312bb mov eax, 0x12051450 */
  EAX = (0x12051450u);
L_120312c0:;
  /* 120312c0 mov esp, ebp */
  ESP = (EBP);
  /* 120312c2 pop ebp */
  EBP = (pop32());
  /* 120312c3 ret  */
  ESPCHK(0x12031140u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x120312d0 (7 bytes, 5 insns) */
void f_120312d0(void) {
  FTRACE(0x120312d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120312d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120312d1 mov ebp, esp */
  EBP = (ESP);
  /* 120312d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120312d5 pop ebp */
  EBP = (pop32());
  /* 120312d6 ret  */
  ESPCHK(0x120312d0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x120312e0 (79 bytes, 28 insns) */
void f_120312e0(void) {
  FTRACE(0x120312e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120312e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120312e1 mov ebp, esp */
  EBP = (ESP);
  /* 120312e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120312e6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 120312e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120312ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120312f3 jmp 0x120312fe */
  goto L_120312fe;
L_120312f5:;
  /* 120312f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120312f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120312fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120312fe:;
  /* 120312fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031301 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031304 jge 0x12031324 */
  if ((C.sf==C.of)) goto L_12031324;
  /* 12031306 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031309 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203130c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203130f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031312 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12031315 push edx */
  push32((uint32_t)(EDX));
  /* 12031316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031319 push eax */
  push32((uint32_t)(EAX));
  /* 1203131a call 0x12029f20 */
  push32(0x1203131fu); f_12029f20();
  /* 1203131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031322 jmp 0x120312f5 */
  goto L_120312f5;
L_12031324:;
  /* 12031324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203132b mov esp, ebp */
  ESP = (EBP);
  /* 1203132d pop ebp */
  EBP = (pop32());
  /* 1203132e ret  */
  ESPCHK(0x120312e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x12031330 (349 bytes, 122 insns) */
void f_12031330(void) {
  FTRACE(0x12031330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031330 push ebp */
  push32((uint32_t)(EBP));
  /* 12031331 mov ebp, esp */
  EBP = (ESP);
  /* 12031333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12031336 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1203133b push 0 */
  push32((uint32_t)(0x0u));
  /* 1203133d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031340 push eax */
  push32((uint32_t)(EAX));
  /* 12031341 call 0x1202acd0 */
  push32(0x12031346u); f_1202acd0();
  /* 12031346 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031349 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203134c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1203134f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12031351 jne 0x1203135a */
  if (!C.zf) goto L_1203135a;
  /* 12031353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12031355 jmp 0x12031489 */
  goto L_12031489;
L_1203135a:;
  /* 1203135a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203135d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12031360 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031363 jne 0x12031390 */
  if (!C.zf) goto L_12031390;
  /* 12031365 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12031368 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1203136c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203136e je 0x12031390 */
  if (C.zf) goto L_12031390;
  /* 12031370 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12031373 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031376 push ecx */
  push32((uint32_t)(ECX));
  /* 12031377 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203137a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031380 push edx */
  push32((uint32_t)(EDX));
  /* 12031381 call 0x12029f10 */
  push32(0x12031386u); f_12029f10();
  /* 12031386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203138b jmp 0x12031489 */
  goto L_12031489;
L_12031390:;
  /* 12031390 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12031397 jmp 0x120313a2 */
  goto L_120313a2;
L_12031399:;
  /* 12031399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203139c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203139f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120313a2:;
  /* 120313a2 push 0x1204e590 */
  push32((uint32_t)(0x1204e590u));
  /* 120313a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120313aa push ecx */
  push32((uint32_t)(ECX));
  /* 120313ab call 0x12032c80 */
  push32(0x120313b0u); f_12032c80();
  /* 120313b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120313b3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120313b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120313ba jne 0x120313c4 */
  if (!C.zf) goto L_120313c4;
  /* 120313bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120313bf jmp 0x12031489 */
  goto L_12031489;
L_120313c4:;
  /* 120313c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120313c7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120313ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120313cc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 120313cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120313d3 jne 0x120313fa */
  if (!C.zf) goto L_120313fa;
  /* 120313d5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120313d9 jge 0x120313fa */
  if ((C.sf==C.of)) goto L_120313fa;
  /* 120313db movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120313df cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120313e2 je 0x120313fa */
  if (C.zf) goto L_120313fa;
  /* 120313e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120313e7 push edx */
  push32((uint32_t)(EDX));
  /* 120313e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120313eb push eax */
  push32((uint32_t)(EAX));
  /* 120313ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120313ef push ecx */
  push32((uint32_t)(ECX));
  /* 120313f0 call 0x1202a780 */
  push32(0x120313f5u); f_1202a780();
  /* 120313f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120313f8 jmp 0x12031460 */
  goto L_12031460;
L_120313fa:;
  /* 120313fa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120313fe jne 0x12031428 */
  if (!C.zf) goto L_12031428;
  /* 12031400 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031404 jge 0x12031428 */
  if ((C.sf==C.of)) goto L_12031428;
  /* 12031406 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1203140a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203140d je 0x12031428 */
  if (C.zf) goto L_12031428;
  /* 1203140f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031412 push eax */
  push32((uint32_t)(EAX));
  /* 12031413 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12031416 push ecx */
  push32((uint32_t)(ECX));
  /* 12031417 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203141a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203141d push edx */
  push32((uint32_t)(EDX));
  /* 1203141e call 0x1202a780 */
  push32(0x12031423u); f_1202a780();
  /* 12031423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031426 jmp 0x12031460 */
  goto L_12031460;
L_12031428:;
  /* 12031428 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203142c jne 0x1203145b */
  if (!C.zf) goto L_1203145b;
  /* 1203142e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12031432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12031434 je 0x1203143f */
  if (C.zf) goto L_1203143f;
  /* 12031436 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1203143a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203143d jne 0x1203145b */
  if (!C.zf) goto L_1203145b;
L_1203143f:;
  /* 1203143f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031442 push edx */
  push32((uint32_t)(EDX));
  /* 12031443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12031446 push eax */
  push32((uint32_t)(EAX));
  /* 12031447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203144a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031450 push ecx */
  push32((uint32_t)(ECX));
  /* 12031451 call 0x1202a780 */
  push32(0x12031456u); f_1202a780();
  /* 12031456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031459 jmp 0x12031460 */
  goto L_12031460;
L_1203145b:;
  /* 1203145b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1203145e jmp 0x12031489 */
  goto L_12031489;
L_12031460:;
  /* 12031460 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12031464 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031467 jne 0x1203146b */
  if (!C.zf) goto L_1203146b;
  /* 12031469 jmp 0x12031487 */
  goto L_12031487;
L_1203146b:;
  /* 1203146b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1203146f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12031471 jne 0x12031475 */
  if (!C.zf) goto L_12031475;
  /* 12031473 jmp 0x12031487 */
  goto L_12031487;
L_12031475:;
  /* 12031475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031478 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203147b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1203147f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12031482 jmp 0x12031399 */
  goto L_12031399;
L_12031487:;
  /* 12031487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12031489:;
  /* 12031489 mov esp, ebp */
  ESP = (EBP);
  /* 1203148b pop ebp */
  EBP = (pop32());
  /* 1203148c ret  */
  ESPCHK(0x12031330u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12031490 (101 bytes, 36 insns) */
void f_12031490(void) {
  FTRACE(0x12031490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031490 push ebp */
  push32((uint32_t)(EBP));
  /* 12031491 mov ebp, esp */
  EBP = (ESP);
  /* 12031493 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12031496 push eax */
  push32((uint32_t)(EAX));
  /* 12031497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203149a push ecx */
  push32((uint32_t)(ECX));
  /* 1203149b call 0x12029f10 */
  push32(0x120314a0u); f_12029f10();
  /* 120314a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120314a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120314a6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 120314aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120314ac je 0x120314c8 */
  if (C.zf) goto L_120314c8;
  /* 120314ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120314b1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120314b4 push ecx */
  push32((uint32_t)(ECX));
  /* 120314b5 push 0x1204e598 */
  push32((uint32_t)(0x1204e598u));
  /* 120314ba push 2 */
  push32((uint32_t)(0x2u));
  /* 120314bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120314bf push edx */
  push32((uint32_t)(EDX));
  /* 120314c0 call 0x120312e0 */
  push32(0x120314c5u); f_120312e0();
  /* 120314c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120314c8:;
  /* 120314c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120314cb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 120314d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120314d4 je 0x120314f3 */
  if (C.zf) goto L_120314f3;
  /* 120314d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120314d9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120314df push edx */
  push32((uint32_t)(EDX));
  /* 120314e0 push 0x1204e594 */
  push32((uint32_t)(0x1204e594u));
  /* 120314e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120314e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120314ea push eax */
  push32((uint32_t)(EAX));
  /* 120314eb call 0x120312e0 */
  push32(0x120314f0u); f_120312e0();
  /* 120314f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120314f3:;
  /* 120314f3 pop ebp */
  EBP = (pop32());
  /* 120314f4 ret  */
  ESPCHK(0x12031490u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x12031500 (130 bytes, 50 insns) */
void f_12031500(void) {
  FTRACE(0x12031500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031500 push ebp */
  push32((uint32_t)(EBP));
  /* 12031501 mov ebp, esp */
  EBP = (ESP);
  /* 12031503 push ecx */
  push32((uint32_t)(ECX));
  /* 12031504 push ebx */
  push32((uint32_t)(EBX));
  /* 12031505 push esi */
  push32((uint32_t)(ESI));
  /* 12031506 push edi */
  push32((uint32_t)(EDI));
  /* 12031507 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1203150e:;
  /* 1203150e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031512 jne 0x12031532 */
  if (!C.zf) goto L_12031532;
  /* 12031514 push 0x1204e5a8 */
  push32((uint32_t)(0x1204e5a8u));
  /* 12031519 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203151b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1203151d push 0x1204e59c */
  push32((uint32_t)(0x1204e59cu));
  /* 12031522 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031524 call 0x12026020 */
  push32(0x12031529u); f_12026020();
  /* 12031529 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203152c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203152f jne 0x12031532 */
  if (!C.zf) goto L_12031532;
  /* 12031531 int3  */
  x86_unimpl("int3 @ 0x12031531");
L_12031532:;
  /* 12031532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12031534 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12031536 jne 0x1203150e */
  if (!C.zf) goto L_1203150e;
  /* 12031538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203153b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1203153e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12031541 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12031543 je 0x12031551 */
  if (C.zf) goto L_12031551;
  /* 12031545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031548 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1203154f jmp 0x12031578 */
  goto L_12031578;
L_12031551:;
  /* 12031551 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031554 push ecx */
  push32((uint32_t)(ECX));
  /* 12031555 call 0x1202fd70 */
  push32(0x1203155au); f_1202fd70();
  /* 1203155a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203155d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031560 push edx */
  push32((uint32_t)(EDX));
  /* 12031561 call 0x12031590 */
  push32(0x12031566u); f_12031590();
  /* 12031566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203156c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203156f push eax */
  push32((uint32_t)(EAX));
  /* 12031570 call 0x1202fde0 */
  push32(0x12031575u); f_1202fde0();
  /* 12031575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12031578:;
  /* 12031578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203157b pop edi */
  EDI = (pop32());
  /* 1203157c pop esi */
  ESI = (pop32());
  /* 1203157d pop ebx */
  EBX = (pop32());
  /* 1203157e mov esp, ebp */
  ESP = (EBP);
  /* 12031580 pop ebp */
  EBP = (pop32());
  /* 12031581 ret  */
  ESPCHK(0x12031500u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x12031590 (190 bytes, 67 insns) */
void f_12031590(void) {
  FTRACE(0x12031590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031590 push ebp */
  push32((uint32_t)(EBP));
  /* 12031591 mov ebp, esp */
  EBP = (ESP);
  /* 12031593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12031596 push ebx */
  push32((uint32_t)(EBX));
  /* 12031597 push esi */
  push32((uint32_t)(ESI));
  /* 12031598 push edi */
  push32((uint32_t)(EDI));
  /* 12031599 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120315a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120315a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120315a6:;
  /* 120315a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120315aa jne 0x120315ca */
  if (!C.zf) goto L_120315ca;
  /* 120315ac push 0x1204e44c */
  push32((uint32_t)(0x1204e44cu));
  /* 120315b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120315b3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 120315b5 push 0x1204e59c */
  push32((uint32_t)(0x1204e59cu));
  /* 120315ba push 2 */
  push32((uint32_t)(0x2u));
  /* 120315bc call 0x12026020 */
  push32(0x120315c1u); f_12026020();
  /* 120315c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120315c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120315c7 jne 0x120315ca */
  if (!C.zf) goto L_120315ca;
  /* 120315c9 int3  */
  x86_unimpl("int3 @ 0x120315c9");
L_120315ca:;
  /* 120315ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120315cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120315ce jne 0x120315a6 */
  if (!C.zf) goto L_120315a6;
  /* 120315d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120315d3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120315d6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 120315db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120315dd je 0x1203163a */
  if (C.zf) goto L_1203163a;
  /* 120315df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120315e2 push ecx */
  push32((uint32_t)(ECX));
  /* 120315e3 call 0x12030890 */
  push32(0x120315e8u); f_12030890();
  /* 120315e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120315eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120315ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120315f1 push edx */
  push32((uint32_t)(EDX));
  /* 120315f2 call 0x12033c10 */
  push32(0x120315f7u); f_12033c10();
  /* 120315f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120315fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120315fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12031600 push ecx */
  push32((uint32_t)(ECX));
  /* 12031601 call 0x12033ae0 */
  push32(0x12031606u); f_12033ae0();
  /* 12031606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203160b jge 0x12031616 */
  if ((C.sf==C.of)) goto L_12031616;
  /* 1203160d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12031614 jmp 0x1203163a */
  goto L_1203163a;
L_12031616:;
  /* 12031616 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031619 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203161d je 0x1203163a */
  if (C.zf) goto L_1203163a;
  /* 1203161f push 2 */
  push32((uint32_t)(0x2u));
  /* 12031621 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031624 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12031627 push ecx */
  push32((uint32_t)(ECX));
  /* 12031628 call 0x120279f0 */
  push32(0x1203162du); f_120279f0();
  /* 1203162d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031630 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031633 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1203163a:;
  /* 1203163a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203163d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12031644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031647 pop edi */
  EDI = (pop32());
  /* 12031648 pop esi */
  ESI = (pop32());
  /* 12031649 pop ebx */
  EBX = (pop32());
  /* 1203164a mov esp, ebp */
  ESP = (EBP);
  /* 1203164c pop ebp */
  EBP = (pop32());
  /* 1203164d ret  */
  ESPCHK(0x12031590u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x12031650 (210 bytes, 63 insns) */
void f_12031650(void) {
  FTRACE(0x12031650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031650 push ebp */
  push32((uint32_t)(EBP));
  /* 12031651 mov ebp, esp */
  EBP = (ESP);
  /* 12031653 push ecx */
  push32((uint32_t)(ECX));
  /* 12031654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031657 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203165d jae 0x12031681 */
  if (!C.cf) goto L_12031681;
  /* 1203165f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031662 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12031665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031668 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1203166b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203166e mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 12031675 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1203167a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1203167d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203167f jne 0x12031694 */
  if (!C.zf) goto L_12031694;
L_12031681:;
  /* 12031681 call 0x1202ee30 */
  push32(0x12031686u); f_1202ee30();
  /* 12031686 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1203168c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1203168f jmp 0x1203171e */
  goto L_1203171e;
L_12031694:;
  /* 12031694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031697 push edx */
  push32((uint32_t)(EDX));
  /* 12031698 call 0x12030650 */
  push32(0x1203169du); f_12030650();
  /* 1203169d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120316a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120316a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120316a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120316a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120316ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120316af mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 120316b6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 120316bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120316be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120316c0 je 0x120316fd */
  if (C.zf) goto L_120316fd;
  /* 120316c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120316c5 push ecx */
  push32((uint32_t)(ECX));
  /* 120316c6 call 0x120304d0 */
  push32(0x120316cbu); f_120304d0();
  /* 120316cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120316ce push eax */
  push32((uint32_t)(EAX));
  /* 120316cf call dword ptr [0x12055314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055314))), 0x120316d5u);
  /* 120316d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120316d7 jne 0x120316e4 */
  if (!C.zf) goto L_120316e4;
  /* 120316d9 call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x120316dfu);
  /* 120316df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120316e2 jmp 0x120316eb */
  goto L_120316eb;
L_120316e4:;
  /* 120316e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120316eb:;
  /* 120316eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120316ef jne 0x120316f3 */
  if (!C.zf) goto L_120316f3;
  /* 120316f1 jmp 0x1203170f */
  goto L_1203170f;
L_120316f3:;
  /* 120316f3 call 0x1202ee40 */
  push32(0x120316f8u); f_1202ee40();
  /* 120316f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120316fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120316fd:;
  /* 120316fd call 0x1202ee30 */
  push32(0x12031702u); f_1202ee30();
  /* 12031702 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12031708 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1203170f:;
  /* 1203170f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031712 push eax */
  push32((uint32_t)(EAX));
  /* 12031713 call 0x120306e0 */
  push32(0x12031718u); f_120306e0();
  /* 12031718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203171b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1203171e:;
  /* 1203171e mov esp, ebp */
  ESP = (EBP);
  /* 12031720 pop ebp */
  EBP = (pop32());
  /* 12031721 ret  */
  ESPCHK(0x12031650u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12031730 (219 bytes, 64 insns) */
void f_12031730(void) {
  FTRACE(0x12031730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031730 push ebp */
  push32((uint32_t)(EBP));
  /* 12031731 mov ebp, esp */
  EBP = (ESP);
  /* 12031733 push ecx */
  push32((uint32_t)(ECX));
  /* 12031734 cmp dword ptr [0x120529f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203173b je 0x120317d1 */
  if (C.zf) goto L_120317d1;
  /* 12031741 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12031743 push 0x1204e5b8 */
  push32((uint32_t)(0x1204e5b8u));
  /* 12031748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1203174a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1203174f push 1 */
  push32((uint32_t)(0x1u));
  /* 12031751 call 0x12027370 */
  push32(0x12031756u); f_12027370();
  /* 12031756 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203175c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031760 jne 0x1203176c */
  if (!C.zf) goto L_1203176c;
  /* 12031762 mov eax, 1 */
  EAX = (0x1u);
  /* 12031767 jmp 0x12031807 */
  goto L_12031807;
L_1203176c:;
  /* 1203176c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203176f push eax */
  push32((uint32_t)(EAX));
  /* 12031770 call 0x12031810 */
  push32(0x12031775u); f_12031810();
  /* 12031775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203177a je 0x1203179d */
  if (C.zf) goto L_1203179d;
  /* 1203177c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203177f push ecx */
  push32((uint32_t)(ECX));
  /* 12031780 call 0x12031da0 */
  push32(0x12031785u); f_12031da0();
  /* 12031785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031788 push 2 */
  push32((uint32_t)(0x2u));
  /* 1203178a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203178d push edx */
  push32((uint32_t)(EDX));
  /* 1203178e call 0x120279f0 */
  push32(0x12031793u); f_120279f0();
  /* 12031793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031796 mov eax, 1 */
  EAX = (0x1u);
  /* 1203179b jmp 0x12031807 */
  goto L_12031807;
L_1203179d:;
  /* 1203179d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120317a0 mov dword ptr [0x12051c98], eax */
  w32((uint32_t)(0x12051c98), (EAX));
  /* 120317a5 mov ecx, dword ptr [0x12052a14] */
  ECX = (r32((uint32_t)(0x12052a14)));
  /* 120317ab push ecx */
  push32((uint32_t)(ECX));
  /* 120317ac call 0x12031da0 */
  push32(0x120317b1u); f_12031da0();
  /* 120317b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120317b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120317b6 mov edx, dword ptr [0x12052a14] */
  EDX = (r32((uint32_t)(0x12052a14)));
  /* 120317bc push edx */
  push32((uint32_t)(EDX));
  /* 120317bd call 0x120279f0 */
  push32(0x120317c2u); f_120279f0();
  /* 120317c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120317c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120317c8 mov dword ptr [0x12052a14], eax */
  w32((uint32_t)(0x12052a14), (EAX));
  /* 120317cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120317cf jmp 0x12031807 */
  goto L_12031807;
L_120317d1:;
  /* 120317d1 mov dword ptr [0x12051c98], 0x12051ca0 */
  w32((uint32_t)(0x12051c98), (0x12051ca0u));
  /* 120317db mov ecx, dword ptr [0x12052a14] */
  ECX = (r32((uint32_t)(0x12052a14)));
  /* 120317e1 push ecx */
  push32((uint32_t)(ECX));
  /* 120317e2 call 0x12031da0 */
  push32(0x120317e7u); f_12031da0();
  /* 120317e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120317ea push 2 */
  push32((uint32_t)(0x2u));
  /* 120317ec mov edx, dword ptr [0x12052a14] */
  EDX = (r32((uint32_t)(0x12052a14)));
  /* 120317f2 push edx */
  push32((uint32_t)(EDX));
  /* 120317f3 call 0x120279f0 */
  push32(0x120317f8u); f_120279f0();
  /* 120317f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120317fb mov dword ptr [0x12052a14], 0 */
  w32((uint32_t)(0x12052a14), (0x0u));
  /* 12031805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12031807:;
  /* 12031807 mov esp, ebp */
  ESP = (EBP);
  /* 12031809 pop ebp */
  EBP = (pop32());
  /* 1203180a ret  */
  ESPCHK(0x12031730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011810 @ 0x12031810 (1423 bytes, 533 insns) */
void f_12031810(void) {
  FTRACE(0x12031810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031810 push ebp */
  push32((uint32_t)(EBP));
  /* 12031811 mov ebp, esp */
  EBP = (ESP);
  /* 12031813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12031816 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1203181d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203181f mov ax, word ptr [0x12052a4e] */
  AX = (r16((uint32_t)(0x12052a4e)));
  /* 12031825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12031828 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1203182a mov cx, word ptr [0x12052a50] */
  CX = (r16((uint32_t)(0x12052a50)));
  /* 12031831 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12031834 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031838 jne 0x12031842 */
  if (!C.zf) goto L_12031842;
  /* 1203183a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1203183d jmp 0x12031d9b */
  goto L_12031d9b;
L_12031842:;
  /* 12031842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031845 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031848 push edx */
  push32((uint32_t)(EDX));
  /* 12031849 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1203184b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203184e push eax */
  push32((uint32_t)(EAX));
  /* 1203184f push 1 */
  push32((uint32_t)(0x1u));
  /* 12031851 call 0x12035120 */
  push32(0x12031856u); f_12035120();
  /* 12031856 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031859 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203185c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1203185e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031864 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031867 push edx */
  push32((uint32_t)(EDX));
  /* 12031868 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1203186a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203186d push eax */
  push32((uint32_t)(EAX));
  /* 1203186e push 1 */
  push32((uint32_t)(0x1u));
  /* 12031870 call 0x12035120 */
  push32(0x12031875u); f_12035120();
  /* 12031875 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031878 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203187b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1203187d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031880 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031883 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031886 push edx */
  push32((uint32_t)(EDX));
  /* 12031887 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12031889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203188c push eax */
  push32((uint32_t)(EAX));
  /* 1203188d push 1 */
  push32((uint32_t)(0x1u));
  /* 1203188f call 0x12035120 */
  push32(0x12031894u); f_12035120();
  /* 12031894 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031897 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203189a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1203189c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1203189f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120318a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120318a5 push edx */
  push32((uint32_t)(EDX));
  /* 120318a6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 120318a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120318ab push eax */
  push32((uint32_t)(EAX));
  /* 120318ac push 1 */
  push32((uint32_t)(0x1u));
  /* 120318ae call 0x12035120 */
  push32(0x120318b3u); f_12035120();
  /* 120318b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120318b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120318b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120318bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120318be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120318c1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120318c4 push edx */
  push32((uint32_t)(EDX));
  /* 120318c5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 120318c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120318ca push eax */
  push32((uint32_t)(EAX));
  /* 120318cb push 1 */
  push32((uint32_t)(0x1u));
  /* 120318cd call 0x12035120 */
  push32(0x120318d2u); f_12035120();
  /* 120318d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120318d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120318d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120318da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120318dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120318e0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120318e3 push edx */
  push32((uint32_t)(EDX));
  /* 120318e4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 120318e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120318e9 push eax */
  push32((uint32_t)(EAX));
  /* 120318ea push 1 */
  push32((uint32_t)(0x1u));
  /* 120318ec call 0x12035120 */
  push32(0x120318f1u); f_12035120();
  /* 120318f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120318f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120318f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120318f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120318fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120318ff push edx */
  push32((uint32_t)(EDX));
  /* 12031900 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12031902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031905 push eax */
  push32((uint32_t)(EAX));
  /* 12031906 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031908 call 0x12035120 */
  push32(0x1203190du); f_12035120();
  /* 1203190d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031910 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031913 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031915 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203191b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203191e push edx */
  push32((uint32_t)(EDX));
  /* 1203191f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12031921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031924 push eax */
  push32((uint32_t)(EAX));
  /* 12031925 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031927 call 0x12035120 */
  push32(0x1203192cu); f_12035120();
  /* 1203192c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203192f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031932 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031934 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203193a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203193d push edx */
  push32((uint32_t)(EDX));
  /* 1203193e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12031940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031943 push eax */
  push32((uint32_t)(EAX));
  /* 12031944 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031946 call 0x12035120 */
  push32(0x1203194bu); f_12035120();
  /* 1203194b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203194e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031951 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031953 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031959 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203195c push edx */
  push32((uint32_t)(EDX));
  /* 1203195d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1203195f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031962 push eax */
  push32((uint32_t)(EAX));
  /* 12031963 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031965 call 0x12035120 */
  push32(0x1203196au); f_12035120();
  /* 1203196a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203196d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031970 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031972 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031978 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203197b push edx */
  push32((uint32_t)(EDX));
  /* 1203197c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1203197e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031981 push eax */
  push32((uint32_t)(EAX));
  /* 12031982 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031984 call 0x12035120 */
  push32(0x12031989u); f_12035120();
  /* 12031989 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203198c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203198f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031991 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031997 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203199a push edx */
  push32((uint32_t)(EDX));
  /* 1203199b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1203199d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120319a0 push eax */
  push32((uint32_t)(EAX));
  /* 120319a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120319a3 call 0x12035120 */
  push32(0x120319a8u); f_12035120();
  /* 120319a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120319ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120319ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120319b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120319b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120319b6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120319b9 push edx */
  push32((uint32_t)(EDX));
  /* 120319ba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 120319bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120319bf push eax */
  push32((uint32_t)(EAX));
  /* 120319c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120319c2 call 0x12035120 */
  push32(0x120319c7u); f_12035120();
  /* 120319c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120319ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120319cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120319cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120319d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120319d5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120319d8 push edx */
  push32((uint32_t)(EDX));
  /* 120319d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120319db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120319de push eax */
  push32((uint32_t)(EAX));
  /* 120319df push 1 */
  push32((uint32_t)(0x1u));
  /* 120319e1 call 0x12035120 */
  push32(0x120319e6u); f_12035120();
  /* 120319e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120319e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120319ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120319ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120319f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120319f4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120319f7 push edx */
  push32((uint32_t)(EDX));
  /* 120319f8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120319fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120319fd push eax */
  push32((uint32_t)(EAX));
  /* 120319fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12031a00 call 0x12035120 */
  push32(0x12031a05u); f_12035120();
  /* 12031a05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031a0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031a0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031a10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031a13 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a16 push edx */
  push32((uint32_t)(EDX));
  /* 12031a17 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12031a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031a1c push eax */
  push32((uint32_t)(EAX));
  /* 12031a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12031a1f call 0x12035120 */
  push32(0x12031a24u); f_12035120();
  /* 12031a24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031a2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031a2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031a32 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a35 push edx */
  push32((uint32_t)(EDX));
  /* 12031a36 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12031a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031a3b push eax */
  push32((uint32_t)(EAX));
  /* 12031a3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12031a3e call 0x12035120 */
  push32(0x12031a43u); f_12035120();
  /* 12031a43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031a49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031a4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031a4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031a51 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a54 push edx */
  push32((uint32_t)(EDX));
  /* 12031a55 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12031a57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031a5a push eax */
  push32((uint32_t)(EAX));
  /* 12031a5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12031a5d call 0x12035120 */
  push32(0x12031a62u); f_12035120();
  /* 12031a62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031a68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031a6a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031a6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031a70 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a73 push edx */
  push32((uint32_t)(EDX));
  /* 12031a74 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12031a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031a79 push eax */
  push32((uint32_t)(EAX));
  /* 12031a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12031a7c call 0x12035120 */
  push32(0x12031a81u); f_12035120();
  /* 12031a81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031a87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031a89 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031a8f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031a92 push edx */
  push32((uint32_t)(EDX));
  /* 12031a93 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12031a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031a98 push eax */
  push32((uint32_t)(EAX));
  /* 12031a99 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031a9b call 0x12035120 */
  push32(0x12031aa0u); f_12035120();
  /* 12031aa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031aa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031aa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031aa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031aab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031aae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ab1 push edx */
  push32((uint32_t)(EDX));
  /* 12031ab2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12031ab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031ab7 push eax */
  push32((uint32_t)(EAX));
  /* 12031ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031aba call 0x12035120 */
  push32(0x12031abfu); f_12035120();
  /* 12031abf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ac2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031ac5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031ac7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031aca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031acd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ad0 push edx */
  push32((uint32_t)(EDX));
  /* 12031ad1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12031ad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031ad6 push eax */
  push32((uint32_t)(EAX));
  /* 12031ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031ad9 call 0x12035120 */
  push32(0x12031adeu); f_12035120();
  /* 12031ade add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ae1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031ae4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031ae6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031ae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031aec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031aef push edx */
  push32((uint32_t)(EDX));
  /* 12031af0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12031af2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031af5 push eax */
  push32((uint32_t)(EAX));
  /* 12031af6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031af8 call 0x12035120 */
  push32(0x12031afdu); f_12035120();
  /* 12031afd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031b03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031b05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031b08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031b0b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b0e push edx */
  push32((uint32_t)(EDX));
  /* 12031b0f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12031b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031b14 push eax */
  push32((uint32_t)(EAX));
  /* 12031b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031b17 call 0x12035120 */
  push32(0x12031b1cu); f_12035120();
  /* 12031b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031b22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031b24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031b2a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b2d push edx */
  push32((uint32_t)(EDX));
  /* 12031b2e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12031b30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031b33 push eax */
  push32((uint32_t)(EAX));
  /* 12031b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031b36 call 0x12035120 */
  push32(0x12031b3bu); f_12035120();
  /* 12031b3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031b41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031b43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031b46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031b49 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b4c push edx */
  push32((uint32_t)(EDX));
  /* 12031b4d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12031b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031b52 push eax */
  push32((uint32_t)(EAX));
  /* 12031b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031b55 call 0x12035120 */
  push32(0x12031b5au); f_12035120();
  /* 12031b5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031b60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031b62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031b65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031b68 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b6b push edx */
  push32((uint32_t)(EDX));
  /* 12031b6c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12031b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031b71 push eax */
  push32((uint32_t)(EAX));
  /* 12031b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031b74 call 0x12035120 */
  push32(0x12031b79u); f_12035120();
  /* 12031b79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031b7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031b81 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031b87 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b8a push edx */
  push32((uint32_t)(EDX));
  /* 12031b8b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12031b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031b90 push eax */
  push32((uint32_t)(EAX));
  /* 12031b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031b93 call 0x12035120 */
  push32(0x12031b98u); f_12035120();
  /* 12031b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031b9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031b9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031ba0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ba6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ba9 push edx */
  push32((uint32_t)(EDX));
  /* 12031baa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12031bac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031baf push eax */
  push32((uint32_t)(EAX));
  /* 12031bb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031bb2 call 0x12035120 */
  push32(0x12031bb7u); f_12035120();
  /* 12031bb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031bba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031bbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031bbf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031bc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031bc5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031bc8 push edx */
  push32((uint32_t)(EDX));
  /* 12031bc9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12031bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031bce push eax */
  push32((uint32_t)(EAX));
  /* 12031bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 12031bd1 call 0x12035120 */
  push32(0x12031bd6u); f_12035120();
  /* 12031bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031bd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031bdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031bde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031be1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031be4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031be7 push edx */
  push32((uint32_t)(EDX));
  /* 12031be8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12031bea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031bed push eax */
  push32((uint32_t)(EAX));
  /* 12031bee push 1 */
  push32((uint32_t)(0x1u));
  /* 12031bf0 call 0x12035120 */
  push32(0x12031bf5u); f_12035120();
  /* 12031bf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031bf8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031bfb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031bfd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031c00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031c03 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c06 push edx */
  push32((uint32_t)(EDX));
  /* 12031c07 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12031c09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031c0c push eax */
  push32((uint32_t)(EAX));
  /* 12031c0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12031c0f call 0x12035120 */
  push32(0x12031c14u); f_12035120();
  /* 12031c14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031c1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031c1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031c1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031c22 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c28 push edx */
  push32((uint32_t)(EDX));
  /* 12031c29 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12031c2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031c2e push eax */
  push32((uint32_t)(EAX));
  /* 12031c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12031c31 call 0x12035120 */
  push32(0x12031c36u); f_12035120();
  /* 12031c36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031c3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031c3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031c44 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c4a push edx */
  push32((uint32_t)(EDX));
  /* 12031c4b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12031c4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031c50 push eax */
  push32((uint32_t)(EAX));
  /* 12031c51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031c53 call 0x12035120 */
  push32(0x12031c58u); f_12035120();
  /* 12031c58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031c5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031c60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031c66 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c6c push edx */
  push32((uint32_t)(EDX));
  /* 12031c6d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12031c6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031c72 push eax */
  push32((uint32_t)(EAX));
  /* 12031c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031c75 call 0x12035120 */
  push32(0x12031c7au); f_12035120();
  /* 12031c7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031c80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031c82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031c85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031c88 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c8e push edx */
  push32((uint32_t)(EDX));
  /* 12031c8f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12031c91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031c94 push eax */
  push32((uint32_t)(EAX));
  /* 12031c95 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031c97 call 0x12035120 */
  push32(0x12031c9cu); f_12035120();
  /* 12031c9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031c9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031ca2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031ca4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031ca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031caa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031cb0 push edx */
  push32((uint32_t)(EDX));
  /* 12031cb1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12031cb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031cb6 push eax */
  push32((uint32_t)(EAX));
  /* 12031cb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031cb9 call 0x12035120 */
  push32(0x12031cbeu); f_12035120();
  /* 12031cbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031cc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031cc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031cc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031cc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ccc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031cd2 push edx */
  push32((uint32_t)(EDX));
  /* 12031cd3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12031cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031cd8 push eax */
  push32((uint32_t)(EAX));
  /* 12031cd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031cdb call 0x12035120 */
  push32(0x12031ce0u); f_12035120();
  /* 12031ce0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ce3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031ce6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031ce8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031cee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031cf4 push edx */
  push32((uint32_t)(EDX));
  /* 12031cf5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12031cf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031cfa push eax */
  push32((uint32_t)(EAX));
  /* 12031cfb push 1 */
  push32((uint32_t)(0x1u));
  /* 12031cfd call 0x12035120 */
  push32(0x12031d02u); f_12035120();
  /* 12031d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031d08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031d0a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031d10 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d16 push edx */
  push32((uint32_t)(EDX));
  /* 12031d17 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12031d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12031d1c push eax */
  push32((uint32_t)(EAX));
  /* 12031d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12031d1f call 0x12035120 */
  push32(0x12031d24u); f_12035120();
  /* 12031d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031d2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031d2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031d32 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d38 push edx */
  push32((uint32_t)(EDX));
  /* 12031d39 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12031d3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031d3e push eax */
  push32((uint32_t)(EAX));
  /* 12031d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12031d41 call 0x12035120 */
  push32(0x12031d46u); f_12035120();
  /* 12031d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031d4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031d4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031d54 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d5a push edx */
  push32((uint32_t)(EDX));
  /* 12031d5b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12031d5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031d60 push eax */
  push32((uint32_t)(EAX));
  /* 12031d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031d63 call 0x12035120 */
  push32(0x12031d68u); f_12035120();
  /* 12031d68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031d6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031d70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031d76 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d7c push edx */
  push32((uint32_t)(EDX));
  /* 12031d7d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12031d82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12031d85 push eax */
  push32((uint32_t)(EAX));
  /* 12031d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12031d88 call 0x12035120 */
  push32(0x12031d8du); f_12035120();
  /* 12031d8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031d90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12031d93 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12031d95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12031d98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12031d9b:;
  /* 12031d9b mov esp, ebp */
  ESP = (EBP);
  /* 12031d9d pop ebp */
  EBP = (pop32());
  /* 12031d9e ret  */
  ESPCHK(0x12031810u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12031da0 (779 bytes, 265 insns) */
void f_12031da0(void) {
  FTRACE(0x12031da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12031da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12031da1 mov ebp, esp */
  EBP = (ESP);
  /* 12031da3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12031da7 jne 0x12031dae */
  if (!C.zf) goto L_12031dae;
  /* 12031da9 jmp 0x120320a9 */
  goto L_120320a9;
L_12031dae:;
  /* 12031dae push 2 */
  push32((uint32_t)(0x2u));
  /* 12031db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031db3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12031db6 push ecx */
  push32((uint32_t)(ECX));
  /* 12031db7 call 0x120279f0 */
  push32(0x12031dbcu); f_120279f0();
  /* 12031dbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031dbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12031dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031dc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12031dc7 push eax */
  push32((uint32_t)(EAX));
  /* 12031dc8 call 0x120279f0 */
  push32(0x12031dcdu); f_120279f0();
  /* 12031dcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031dd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031dd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031dd5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12031dd8 push edx */
  push32((uint32_t)(EDX));
  /* 12031dd9 call 0x120279f0 */
  push32(0x12031ddeu); f_120279f0();
  /* 12031dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031de1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031de6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12031de9 push ecx */
  push32((uint32_t)(ECX));
  /* 12031dea call 0x120279f0 */
  push32(0x12031defu); f_120279f0();
  /* 12031def add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031df2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031df4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031df7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12031dfa push eax */
  push32((uint32_t)(EAX));
  /* 12031dfb call 0x120279f0 */
  push32(0x12031e00u); f_120279f0();
  /* 12031e00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e08 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12031e0b push edx */
  push32((uint32_t)(EDX));
  /* 12031e0c call 0x120279f0 */
  push32(0x12031e11u); f_120279f0();
  /* 12031e11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12031e1b push ecx */
  push32((uint32_t)(ECX));
  /* 12031e1c call 0x120279f0 */
  push32(0x12031e21u); f_120279f0();
  /* 12031e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e24 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e29 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12031e2c push eax */
  push32((uint32_t)(EAX));
  /* 12031e2d call 0x120279f0 */
  push32(0x12031e32u); f_120279f0();
  /* 12031e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e3a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12031e3d push edx */
  push32((uint32_t)(EDX));
  /* 12031e3e call 0x120279f0 */
  push32(0x12031e43u); f_120279f0();
  /* 12031e43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e4b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12031e4e push ecx */
  push32((uint32_t)(ECX));
  /* 12031e4f call 0x120279f0 */
  push32(0x12031e54u); f_120279f0();
  /* 12031e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e5c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12031e5f push eax */
  push32((uint32_t)(EAX));
  /* 12031e60 call 0x120279f0 */
  push32(0x12031e65u); f_120279f0();
  /* 12031e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e6d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12031e70 push edx */
  push32((uint32_t)(EDX));
  /* 12031e71 call 0x120279f0 */
  push32(0x12031e76u); f_120279f0();
  /* 12031e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e7e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12031e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12031e82 call 0x120279f0 */
  push32(0x12031e87u); f_120279f0();
  /* 12031e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031e8f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12031e92 push eax */
  push32((uint32_t)(EAX));
  /* 12031e93 call 0x120279f0 */
  push32(0x12031e98u); f_120279f0();
  /* 12031e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031e9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12031e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ea0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12031ea3 push edx */
  push32((uint32_t)(EDX));
  /* 12031ea4 call 0x120279f0 */
  push32(0x12031ea9u); f_120279f0();
  /* 12031ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031eac push 2 */
  push32((uint32_t)(0x2u));
  /* 12031eae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031eb1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12031eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12031eb5 call 0x120279f0 */
  push32(0x12031ebau); f_120279f0();
  /* 12031eba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ebd push 2 */
  push32((uint32_t)(0x2u));
  /* 12031ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ec2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12031ec5 push eax */
  push32((uint32_t)(EAX));
  /* 12031ec6 call 0x120279f0 */
  push32(0x12031ecbu); f_120279f0();
  /* 12031ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ece push 2 */
  push32((uint32_t)(0x2u));
  /* 12031ed0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ed3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12031ed6 push edx */
  push32((uint32_t)(EDX));
  /* 12031ed7 call 0x120279f0 */
  push32(0x12031edcu); f_120279f0();
  /* 12031edc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031edf push 2 */
  push32((uint32_t)(0x2u));
  /* 12031ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ee4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12031ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 12031ee8 call 0x120279f0 */
  push32(0x12031eedu); f_120279f0();
  /* 12031eed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ef0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031ef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ef5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12031ef8 push eax */
  push32((uint32_t)(EAX));
  /* 12031ef9 call 0x120279f0 */
  push32(0x12031efeu); f_120279f0();
  /* 12031efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f06 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12031f09 push edx */
  push32((uint32_t)(EDX));
  /* 12031f0a call 0x120279f0 */
  push32(0x12031f0fu); f_120279f0();
  /* 12031f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f17 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12031f1a push ecx */
  push32((uint32_t)(ECX));
  /* 12031f1b call 0x120279f0 */
  push32(0x12031f20u); f_120279f0();
  /* 12031f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f28 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12031f2b push eax */
  push32((uint32_t)(EAX));
  /* 12031f2c call 0x120279f0 */
  push32(0x12031f31u); f_120279f0();
  /* 12031f31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f39 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12031f3c push edx */
  push32((uint32_t)(EDX));
  /* 12031f3d call 0x120279f0 */
  push32(0x12031f42u); f_120279f0();
  /* 12031f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f4a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12031f4d push ecx */
  push32((uint32_t)(ECX));
  /* 12031f4e call 0x120279f0 */
  push32(0x12031f53u); f_120279f0();
  /* 12031f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f5b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12031f5e push eax */
  push32((uint32_t)(EAX));
  /* 12031f5f call 0x120279f0 */
  push32(0x12031f64u); f_120279f0();
  /* 12031f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f6c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12031f6f push edx */
  push32((uint32_t)(EDX));
  /* 12031f70 call 0x120279f0 */
  push32(0x12031f75u); f_120279f0();
  /* 12031f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f7d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12031f80 push ecx */
  push32((uint32_t)(ECX));
  /* 12031f81 call 0x120279f0 */
  push32(0x12031f86u); f_120279f0();
  /* 12031f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f8e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12031f91 push eax */
  push32((uint32_t)(EAX));
  /* 12031f92 call 0x120279f0 */
  push32(0x12031f97u); f_120279f0();
  /* 12031f97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031f9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12031f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031f9f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12031fa2 push edx */
  push32((uint32_t)(EDX));
  /* 12031fa3 call 0x120279f0 */
  push32(0x12031fa8u); f_120279f0();
  /* 12031fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031fab push 2 */
  push32((uint32_t)(0x2u));
  /* 12031fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031fb0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12031fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12031fb4 call 0x120279f0 */
  push32(0x12031fb9u); f_120279f0();
  /* 12031fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031fbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12031fbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031fc1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12031fc4 push eax */
  push32((uint32_t)(EAX));
  /* 12031fc5 call 0x120279f0 */
  push32(0x12031fcau); f_120279f0();
  /* 12031fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 12031fcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031fd2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12031fd8 push edx */
  push32((uint32_t)(EDX));
  /* 12031fd9 call 0x120279f0 */
  push32(0x12031fdeu); f_120279f0();
  /* 12031fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031fe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031fe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031fe6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12031fec push ecx */
  push32((uint32_t)(ECX));
  /* 12031fed call 0x120279f0 */
  push32(0x12031ff2u); f_120279f0();
  /* 12031ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12031ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12031ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12031ffa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12032000 push eax */
  push32((uint32_t)(EAX));
  /* 12032001 call 0x120279f0 */
  push32(0x12032006u); f_120279f0();
  /* 12032006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032009 push 2 */
  push32((uint32_t)(0x2u));
  /* 1203200b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203200e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12032014 push edx */
  push32((uint32_t)(EDX));
  /* 12032015 call 0x120279f0 */
  push32(0x1203201au); f_120279f0();
  /* 1203201a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203201d push 2 */
  push32((uint32_t)(0x2u));
  /* 1203201f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032022 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12032028 push ecx */
  push32((uint32_t)(ECX));
  /* 12032029 call 0x120279f0 */
  push32(0x1203202eu); f_120279f0();
  /* 1203202e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032031 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032036 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1203203c push eax */
  push32((uint32_t)(EAX));
  /* 1203203d call 0x120279f0 */
  push32(0x12032042u); f_120279f0();
  /* 12032042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032045 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203204a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12032050 push edx */
  push32((uint32_t)(EDX));
  /* 12032051 call 0x120279f0 */
  push32(0x12032056u); f_120279f0();
  /* 12032056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032059 push 2 */
  push32((uint32_t)(0x2u));
  /* 1203205b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203205e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12032064 push ecx */
  push32((uint32_t)(ECX));
  /* 12032065 call 0x120279f0 */
  push32(0x1203206au); f_120279f0();
  /* 1203206a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203206d push 2 */
  push32((uint32_t)(0x2u));
  /* 1203206f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032072 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12032078 push eax */
  push32((uint32_t)(EAX));
  /* 12032079 call 0x120279f0 */
  push32(0x1203207eu); f_120279f0();
  /* 1203207e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032081 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032086 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1203208c push edx */
  push32((uint32_t)(EDX));
  /* 1203208d call 0x120279f0 */
  push32(0x12032092u); f_120279f0();
  /* 12032092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032095 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203209a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 120320a0 push ecx */
  push32((uint32_t)(ECX));
  /* 120320a1 call 0x120279f0 */
  push32(0x120320a6u); f_120279f0();
  /* 120320a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120320a9:;
  /* 120320a9 pop ebp */
  EBP = (pop32());
  /* 120320aa ret  */
  ESPCHK(0x12031da0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x120320b0 (678 bytes, 180 insns) */
void f_120320b0(void) {
  FTRACE(0x120320b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120320b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120320b1 mov ebp, esp */
  EBP = (ESP);
  /* 120320b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120320b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120320bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120320bf mov ax, word ptr [0x12052a4a] */
  AX = (r16((uint32_t)(0x12052a4a)));
  /* 120320c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120320c8 cmp dword ptr [0x120529f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120320cf je 0x1203222a */
  if (C.zf) goto L_1203222a;
  /* 120320d5 push 0x12052a18 */
  push32((uint32_t)(0x12052a18u));
  /* 120320da push 0xe */
  push32((uint32_t)(0xeu));
  /* 120320dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120320df push ecx */
  push32((uint32_t)(ECX));
  /* 120320e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120320e2 call 0x12035120 */
  push32(0x120320e7u); f_12035120();
  /* 120320e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120320ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120320ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120320ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120320f2 push 0x12052a1c */
  push32((uint32_t)(0x12052a1cu));
  /* 120320f7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 120320f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120320fc push eax */
  push32((uint32_t)(EAX));
  /* 120320fd push 1 */
  push32((uint32_t)(0x1u));
  /* 120320ff call 0x12035120 */
  push32(0x12032104u); f_12035120();
  /* 12032104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203210a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1203210c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203210f push 0x12052a20 */
  push32((uint32_t)(0x12052a20u));
  /* 12032114 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12032116 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032119 push edx */
  push32((uint32_t)(EDX));
  /* 1203211a push 1 */
  push32((uint32_t)(0x1u));
  /* 1203211c call 0x12035120 */
  push32(0x12032121u); f_12035120();
  /* 12032121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032124 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032127 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032129 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203212c mov edx, dword ptr [0x12052a20] */
  EDX = (r32((uint32_t)(0x12052a20)));
  /* 12032132 push edx */
  push32((uint32_t)(EDX));
  /* 12032133 call 0x12032360 */
  push32(0x12032138u); f_12032360();
  /* 12032138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203213b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203213f je 0x12032199 */
  if (C.zf) goto L_12032199;
  /* 12032141 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032143 mov eax, dword ptr [0x12052a18] */
  EAX = (r32((uint32_t)(0x12052a18)));
  /* 12032148 push eax */
  push32((uint32_t)(EAX));
  /* 12032149 call 0x120279f0 */
  push32(0x1203214eu); f_120279f0();
  /* 1203214e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032151 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032153 mov ecx, dword ptr [0x12052a1c] */
  ECX = (r32((uint32_t)(0x12052a1c)));
  /* 12032159 push ecx */
  push32((uint32_t)(ECX));
  /* 1203215a call 0x120279f0 */
  push32(0x1203215fu); f_120279f0();
  /* 1203215f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032162 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032164 mov edx, dword ptr [0x12052a20] */
  EDX = (r32((uint32_t)(0x12052a20)));
  /* 1203216a push edx */
  push32((uint32_t)(EDX));
  /* 1203216b call 0x120279f0 */
  push32(0x12032170u); f_120279f0();
  /* 12032170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032173 mov dword ptr [0x12052a18], 0 */
  w32((uint32_t)(0x12052a18), (0x0u));
  /* 1203217d mov dword ptr [0x12052a1c], 0 */
  w32((uint32_t)(0x12052a1c), (0x0u));
  /* 12032187 mov dword ptr [0x12052a20], 0 */
  w32((uint32_t)(0x12052a20), (0x0u));
  /* 12032191 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12032194 jmp 0x12032352 */
  goto L_12032352;
L_12032199:;
  /* 12032199 mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 1203219e cmp dword ptr [eax], 0x12051d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12051d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120321a4 je 0x120321e0 */
  if (C.zf) goto L_120321e0;
  /* 120321a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120321a8 mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 120321ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120321b0 push edx */
  push32((uint32_t)(EDX));
  /* 120321b1 call 0x120279f0 */
  push32(0x120321b6u); f_120279f0();
  /* 120321b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120321b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120321bb mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 120321c0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120321c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120321c4 call 0x120279f0 */
  push32(0x120321c9u); f_120279f0();
  /* 120321c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120321cc push 2 */
  push32((uint32_t)(0x2u));
  /* 120321ce mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 120321d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120321d7 push eax */
  push32((uint32_t)(EAX));
  /* 120321d8 call 0x120279f0 */
  push32(0x120321ddu); f_120279f0();
  /* 120321dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120321e0:;
  /* 120321e0 mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 120321e6 mov edx, dword ptr [0x12052a18] */
  EDX = (r32((uint32_t)(0x12052a18)));
  /* 120321ec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120321ee mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 120321f3 mov ecx, dword ptr [0x12052a1c] */
  ECX = (r32((uint32_t)(0x12052a1c)));
  /* 120321f9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120321fc mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 12032202 mov eax, dword ptr [0x12052a20] */
  EAX = (r32((uint32_t)(0x12052a20)));
  /* 12032207 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1203220a mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 12032210 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12032212 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12032214 mov byte ptr [0x12050ea8], al */
  w8((uint32_t)(0x12050ea8), (AL));
  /* 12032219 mov dword ptr [0x12050eac], 1 */
  w32((uint32_t)(0x12050eac), (0x1u));
  /* 12032223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032225 jmp 0x12032352 */
  goto L_12032352;
L_1203222a:;
  /* 1203222a push 2 */
  push32((uint32_t)(0x2u));
  /* 1203222c mov ecx, dword ptr [0x12052a18] */
  ECX = (r32((uint32_t)(0x12052a18)));
  /* 12032232 push ecx */
  push32((uint32_t)(ECX));
  /* 12032233 call 0x120279f0 */
  push32(0x12032238u); f_120279f0();
  /* 12032238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203223b push 2 */
  push32((uint32_t)(0x2u));
  /* 1203223d mov edx, dword ptr [0x12052a1c] */
  EDX = (r32((uint32_t)(0x12052a1c)));
  /* 12032243 push edx */
  push32((uint32_t)(EDX));
  /* 12032244 call 0x120279f0 */
  push32(0x12032249u); f_120279f0();
  /* 12032249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203224c push 2 */
  push32((uint32_t)(0x2u));
  /* 1203224e mov eax, dword ptr [0x12052a20] */
  EAX = (r32((uint32_t)(0x12052a20)));
  /* 12032253 push eax */
  push32((uint32_t)(EAX));
  /* 12032254 call 0x120279f0 */
  push32(0x12032259u); f_120279f0();
  /* 12032259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203225c mov dword ptr [0x12052a18], 0 */
  w32((uint32_t)(0x12052a18), (0x0u));
  /* 12032266 mov dword ptr [0x12052a1c], 0 */
  w32((uint32_t)(0x12052a1c), (0x0u));
  /* 12032270 mov dword ptr [0x12052a20], 0 */
  w32((uint32_t)(0x12052a20), (0x0u));
  /* 1203227a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1203227f push 0x1204e5c4 */
  push32((uint32_t)(0x1204e5c4u));
  /* 12032284 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032286 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032288 call 0x12026f60 */
  push32(0x1203228du); f_12026f60();
  /* 1203228d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032290 mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 12032296 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12032298 mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 1203229e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120322a1 jne 0x120322ab */
  if (!C.zf) goto L_120322ab;
  /* 120322a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120322a6 jmp 0x12032352 */
  goto L_12032352;
L_120322ab:;
  /* 120322ab push 0x1204e594 */
  push32((uint32_t)(0x1204e594u));
  /* 120322b0 mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 120322b5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120322b7 push ecx */
  push32((uint32_t)(ECX));
  /* 120322b8 call 0x12029f10 */
  push32(0x120322bdu); f_12029f10();
  /* 120322bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120322c0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 120322c5 push 0x1204e5c4 */
  push32((uint32_t)(0x1204e5c4u));
  /* 120322ca push 2 */
  push32((uint32_t)(0x2u));
  /* 120322cc push 2 */
  push32((uint32_t)(0x2u));
  /* 120322ce call 0x12026f60 */
  push32(0x120322d3u); f_12026f60();
  /* 120322d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120322d6 mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 120322dc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 120322df mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 120322e4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120322e8 jne 0x120322ef */
  if (!C.zf) goto L_120322ef;
  /* 120322ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120322ed jmp 0x12032352 */
  goto L_12032352;
L_120322ef:;
  /* 120322ef mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 120322f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120322f8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120322fb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12032300 push 0x1204e5c4 */
  push32((uint32_t)(0x1204e5c4u));
  /* 12032305 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032307 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032309 call 0x12026f60 */
  push32(0x1203230eu); f_12026f60();
  /* 1203230e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032311 mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 12032317 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1203231a mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 12032320 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032324 jne 0x1203232b */
  if (!C.zf) goto L_1203232b;
  /* 12032326 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12032329 jmp 0x12032352 */
  goto L_12032352;
L_1203232b:;
  /* 1203232b mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 12032330 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12032333 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12032336 mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 1203233c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1203233e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12032340 mov byte ptr [0x12050ea8], cl */
  w8((uint32_t)(0x12050ea8), (CL));
  /* 12032346 mov dword ptr [0x12050eac], 1 */
  w32((uint32_t)(0x12050eac), (0x1u));
  /* 12032350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12032352:;
  /* 12032352 mov esp, ebp */
  ESP = (EBP);
  /* 12032354 pop ebp */
  EBP = (pop32());
  /* 12032355 ret  */
  ESPCHK(0x120320b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12032360 (125 bytes, 49 insns) */
void f_12032360(void) {
  FTRACE(0x12032360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032360 push ebp */
  push32((uint32_t)(EBP));
  /* 12032361 mov ebp, esp */
  EBP = (ESP);
  /* 12032363 push ecx */
  push32((uint32_t)(ECX));
L_12032364:;
  /* 12032364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032367 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1203236a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203236c je 0x120323d9 */
  if (C.zf) goto L_120323d9;
  /* 1203236e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032371 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12032374 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032377 jl 0x1203239d */
  if ((C.sf!=C.of)) goto L_1203239d;
  /* 12032379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203237c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1203237f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032382 jg 0x1203239d */
  if ((!C.zf&&C.sf==C.of)) goto L_1203239d;
  /* 12032384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032387 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1203238a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203238d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032390 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12032392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032395 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032398 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1203239b jmp 0x120323d7 */
  goto L_120323d7;
L_1203239d:;
  /* 1203239d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120323a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120323a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120323a6 jne 0x120323ce */
  if (!C.zf) goto L_120323ce;
  /* 120323a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120323ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120323ae:;
  /* 120323ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120323b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120323b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120323b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120323b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120323bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120323bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120323c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120323c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120323c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120323ca jne 0x120323ae */
  if (!C.zf) goto L_120323ae;
  /* 120323cc jmp 0x120323d7 */
  goto L_120323d7;
L_120323ce:;
  /* 120323ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120323d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120323d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120323d7:;
  /* 120323d7 jmp 0x12032364 */
  goto L_12032364;
L_120323d9:;
  /* 120323d9 mov esp, ebp */
  ESP = (EBP);
  /* 120323db pop ebp */
  EBP = (pop32());
  /* 120323dc ret  */
  ESPCHK(0x12032360u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x120323e0 (304 bytes, 85 insns) */
void f_120323e0(void) {
  FTRACE(0x120323e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120323e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120323e1 mov ebp, esp */
  EBP = (ESP);
  /* 120323e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120323e4 cmp dword ptr [0x120529ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120323eb je 0x120324ac */
  if (C.zf) goto L_120324ac;
  /* 120323f1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 120323f3 push 0x1204e5d0 */
  push32((uint32_t)(0x1204e5d0u));
  /* 120323f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120323fa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120323fc push 1 */
  push32((uint32_t)(0x1u));
  /* 120323fe call 0x12027370 */
  push32(0x12032403u); f_12027370();
  /* 12032403 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032406 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12032409 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203240d jne 0x12032419 */
  if (!C.zf) goto L_12032419;
  /* 1203240f mov eax, 1 */
  EAX = (0x1u);
  /* 12032414 jmp 0x1203250c */
  goto L_1203250c;
L_12032419:;
  /* 12032419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203241c push eax */
  push32((uint32_t)(EAX));
  /* 1203241d call 0x12032510 */
  push32(0x12032422u); f_12032510();
  /* 12032422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032427 je 0x1203244d */
  if (C.zf) goto L_1203244d;
  /* 12032429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203242c push ecx */
  push32((uint32_t)(ECX));
  /* 1203242d call 0x120327a0 */
  push32(0x12032432u); f_120327a0();
  /* 12032432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032435 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032437 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203243a push edx */
  push32((uint32_t)(EDX));
  /* 1203243b call 0x120279f0 */
  push32(0x12032440u); f_120279f0();
  /* 12032440 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032443 mov eax, 1 */
  EAX = (0x1u);
  /* 12032448 jmp 0x1203250c */
  goto L_1203250c;
L_1203244d:;
  /* 1203244d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032450 mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 12032456 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12032458 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1203245a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203245d mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 12032463 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12032466 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12032469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203246c mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 12032472 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12032475 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12032478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203247b mov dword ptr [0x12051d88], eax */
  w32((uint32_t)(0x12051d88), (EAX));
  /* 12032480 mov ecx, dword ptr [0x12052a24] */
  ECX = (r32((uint32_t)(0x12052a24)));
  /* 12032486 push ecx */
  push32((uint32_t)(ECX));
  /* 12032487 call 0x120327a0 */
  push32(0x1203248cu); f_120327a0();
  /* 1203248c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203248f push 2 */
  push32((uint32_t)(0x2u));
  /* 12032491 mov edx, dword ptr [0x12052a24] */
  EDX = (r32((uint32_t)(0x12052a24)));
  /* 12032497 push edx */
  push32((uint32_t)(EDX));
  /* 12032498 call 0x120279f0 */
  push32(0x1203249du); f_120279f0();
  /* 1203249d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120324a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120324a3 mov dword ptr [0x12052a24], eax */
  w32((uint32_t)(0x12052a24), (EAX));
  /* 120324a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120324aa jmp 0x1203250c */
  goto L_1203250c;
L_120324ac:;
  /* 120324ac mov ecx, dword ptr [0x12051d88] */
  ECX = (r32((uint32_t)(0x12051d88)));
  /* 120324b2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120324b4 mov dword ptr [0x12051d58], edx */
  w32((uint32_t)(0x12051d58), (EDX));
  /* 120324ba mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 120324bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120324c2 mov dword ptr [0x12051d5c], ecx */
  w32((uint32_t)(0x12051d5c), (ECX));
  /* 120324c8 mov edx, dword ptr [0x12051d88] */
  EDX = (r32((uint32_t)(0x12051d88)));
  /* 120324ce mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120324d1 mov dword ptr [0x12051d60], eax */
  w32((uint32_t)(0x12051d60), (EAX));
  /* 120324d6 mov dword ptr [0x12051d88], 0x12051d58 */
  w32((uint32_t)(0x12051d88), (0x12051d58u));
  /* 120324e0 mov ecx, dword ptr [0x12052a24] */
  ECX = (r32((uint32_t)(0x12052a24)));
  /* 120324e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120324e7 call 0x120327a0 */
  push32(0x120324ecu); f_120327a0();
  /* 120324ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120324ef push 2 */
  push32((uint32_t)(0x2u));
  /* 120324f1 mov edx, dword ptr [0x12052a24] */
  EDX = (r32((uint32_t)(0x12052a24)));
  /* 120324f7 push edx */
  push32((uint32_t)(EDX));
  /* 120324f8 call 0x120279f0 */
  push32(0x120324fdu); f_120279f0();
  /* 120324fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032500 mov dword ptr [0x12052a24], 0 */
  w32((uint32_t)(0x12052a24), (0x0u));
  /* 1203250a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1203250c:;
  /* 1203250c mov esp, ebp */
  ESP = (EBP);
  /* 1203250e pop ebp */
  EBP = (pop32());
  /* 1203250f ret  */
  ESPCHK(0x120323e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012510 @ 0x12032510 (525 bytes, 200 insns) */
void f_12032510(void) {
  FTRACE(0x12032510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032510 push ebp */
  push32((uint32_t)(EBP));
  /* 12032511 mov ebp, esp */
  EBP = (ESP);
  /* 12032513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032516 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1203251d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203251f mov ax, word ptr [0x12052a44] */
  AX = (r16((uint32_t)(0x12052a44)));
  /* 12032525 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12032528 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203252c jne 0x12032536 */
  if (!C.zf) goto L_12032536;
  /* 1203252e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12032531 jmp 0x12032719 */
  goto L_12032719;
L_12032536:;
  /* 12032536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032539 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203253c push ecx */
  push32((uint32_t)(ECX));
  /* 1203253d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1203253f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032542 push edx */
  push32((uint32_t)(EDX));
  /* 12032543 push 1 */
  push32((uint32_t)(0x1u));
  /* 12032545 call 0x12035120 */
  push32(0x1203254au); f_12035120();
  /* 1203254a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203254d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032550 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032552 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12032555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032558 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203255b push edx */
  push32((uint32_t)(EDX));
  /* 1203255c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1203255e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032561 push eax */
  push32((uint32_t)(EAX));
  /* 12032562 push 1 */
  push32((uint32_t)(0x1u));
  /* 12032564 call 0x12035120 */
  push32(0x12032569u); f_12035120();
  /* 12032569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203256c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203256f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032571 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12032574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032577 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203257a push edx */
  push32((uint32_t)(EDX));
  /* 1203257b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1203257d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032580 push eax */
  push32((uint32_t)(EAX));
  /* 12032581 push 1 */
  push32((uint32_t)(0x1u));
  /* 12032583 call 0x12035120 */
  push32(0x12032588u); f_12035120();
  /* 12032588 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203258b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203258e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032590 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12032593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032596 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032599 push edx */
  push32((uint32_t)(EDX));
  /* 1203259a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1203259c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203259f push eax */
  push32((uint32_t)(EAX));
  /* 120325a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120325a2 call 0x12035120 */
  push32(0x120325a7u); f_12035120();
  /* 120325a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120325aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120325ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120325af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120325b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120325b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120325b8 push edx */
  push32((uint32_t)(EDX));
  /* 120325b9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120325bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120325be push eax */
  push32((uint32_t)(EAX));
  /* 120325bf push 1 */
  push32((uint32_t)(0x1u));
  /* 120325c1 call 0x12035120 */
  push32(0x120325c6u); f_12035120();
  /* 120325c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120325c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120325cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120325ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120325d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120325d4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120325d7 push eax */
  push32((uint32_t)(EAX));
  /* 120325d8 call 0x12032720 */
  push32(0x120325ddu); f_12032720();
  /* 120325dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120325e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120325e3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120325e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120325e7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 120325e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120325ec push edx */
  push32((uint32_t)(EDX));
  /* 120325ed push 1 */
  push32((uint32_t)(0x1u));
  /* 120325ef call 0x12035120 */
  push32(0x120325f4u); f_12035120();
  /* 120325f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120325f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120325fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120325fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120325ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032602 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032605 push edx */
  push32((uint32_t)(EDX));
  /* 12032606 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12032608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203260b push eax */
  push32((uint32_t)(EAX));
  /* 1203260c push 1 */
  push32((uint32_t)(0x1u));
  /* 1203260e call 0x12035120 */
  push32(0x12032613u); f_12035120();
  /* 12032613 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032619 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1203261b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203261e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032621 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032624 push edx */
  push32((uint32_t)(EDX));
  /* 12032625 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12032627 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203262a push eax */
  push32((uint32_t)(EAX));
  /* 1203262b push 0 */
  push32((uint32_t)(0x0u));
  /* 1203262d call 0x12035120 */
  push32(0x12032632u); f_12035120();
  /* 12032632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032635 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032638 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1203263a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203263d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032640 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032643 push edx */
  push32((uint32_t)(EDX));
  /* 12032644 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12032646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032649 push eax */
  push32((uint32_t)(EAX));
  /* 1203264a push 0 */
  push32((uint32_t)(0x0u));
  /* 1203264c call 0x12035120 */
  push32(0x12032651u); f_12035120();
  /* 12032651 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032654 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032657 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032659 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203265c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203265f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032662 push edx */
  push32((uint32_t)(EDX));
  /* 12032663 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12032665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032668 push eax */
  push32((uint32_t)(EAX));
  /* 12032669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203266b call 0x12035120 */
  push32(0x12032670u); f_12035120();
  /* 12032670 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032676 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032678 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203267b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203267e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032681 push edx */
  push32((uint32_t)(EDX));
  /* 12032682 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12032684 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032687 push eax */
  push32((uint32_t)(EAX));
  /* 12032688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203268a call 0x12035120 */
  push32(0x1203268fu); f_12035120();
  /* 1203268f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032692 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032695 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032697 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1203269a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203269d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120326a0 push edx */
  push32((uint32_t)(EDX));
  /* 120326a1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 120326a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120326a6 push eax */
  push32((uint32_t)(EAX));
  /* 120326a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120326a9 call 0x12035120 */
  push32(0x120326aeu); f_12035120();
  /* 120326ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120326b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120326b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120326b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120326b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120326bc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120326bf push edx */
  push32((uint32_t)(EDX));
  /* 120326c0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 120326c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120326c5 push eax */
  push32((uint32_t)(EAX));
  /* 120326c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120326c8 call 0x12035120 */
  push32(0x120326cdu); f_12035120();
  /* 120326cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120326d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120326d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120326d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120326d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120326db add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120326de push edx */
  push32((uint32_t)(EDX));
  /* 120326df push 0x52 */
  push32((uint32_t)(0x52u));
  /* 120326e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120326e4 push eax */
  push32((uint32_t)(EAX));
  /* 120326e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120326e7 call 0x12035120 */
  push32(0x120326ecu); f_12035120();
  /* 120326ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120326ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120326f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120326f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120326f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120326fa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120326fd push edx */
  push32((uint32_t)(EDX));
  /* 120326fe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12032700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032703 push eax */
  push32((uint32_t)(EAX));
  /* 12032704 push 0 */
  push32((uint32_t)(0x0u));
  /* 12032706 call 0x12035120 */
  push32(0x1203270bu); f_12035120();
  /* 1203270b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203270e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032711 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12032713 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12032716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12032719:;
  /* 12032719 mov esp, ebp */
  ESP = (EBP);
  /* 1203271b pop ebp */
  EBP = (pop32());
  /* 1203271c ret  */
  ESPCHK(0x12032510u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12032720 (125 bytes, 49 insns) */
void f_12032720(void) {
  FTRACE(0x12032720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032720 push ebp */
  push32((uint32_t)(EBP));
  /* 12032721 mov ebp, esp */
  EBP = (ESP);
  /* 12032723 push ecx */
  push32((uint32_t)(ECX));
L_12032724:;
  /* 12032724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032727 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1203272a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203272c je 0x12032799 */
  if (C.zf) goto L_12032799;
  /* 1203272e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032731 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12032734 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032737 jl 0x1203275d */
  if ((C.sf!=C.of)) goto L_1203275d;
  /* 12032739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203273c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1203273f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032742 jg 0x1203275d */
  if ((!C.zf&&C.sf==C.of)) goto L_1203275d;
  /* 12032744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032747 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1203274a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203274d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032750 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12032752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032755 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032758 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1203275b jmp 0x12032797 */
  goto L_12032797;
L_1203275d:;
  /* 1203275d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032760 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12032763 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032766 jne 0x1203278e */
  if (!C.zf) goto L_1203278e;
  /* 12032768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203276b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1203276e:;
  /* 1203276e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032774 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12032777 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12032779 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203277c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203277f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12032782 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032785 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12032788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203278a jne 0x1203276e */
  if (!C.zf) goto L_1203276e;
  /* 1203278c jmp 0x12032797 */
  goto L_12032797;
L_1203278e:;
  /* 1203278e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032794 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12032797:;
  /* 12032797 jmp 0x12032724 */
  goto L_12032724;
L_12032799:;
  /* 12032799 mov esp, ebp */
  ESP = (EBP);
  /* 1203279b pop ebp */
  EBP = (pop32());
  /* 1203279c ret  */
  ESPCHK(0x12032720u, _esp0);
  ESP += 4; return;
}

/* FUN_100127a0 @ 0x120327a0 (147 bytes, 52 insns) */
void f_120327a0(void) {
  FTRACE(0x120327a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120327a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120327a1 mov ebp, esp */
  EBP = (ESP);
  /* 120327a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120327a7 jne 0x120327ae */
  if (!C.zf) goto L_120327ae;
  /* 120327a9 jmp 0x12032831 */
  goto L_12032831;
L_120327ae:;
  /* 120327ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120327b1 cmp dword ptr [eax + 0xc], 0x12052a80 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12052a80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120327b8 je 0x12032831 */
  if (C.zf) goto L_12032831;
  /* 120327ba push 2 */
  push32((uint32_t)(0x2u));
  /* 120327bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120327bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120327c2 push edx */
  push32((uint32_t)(EDX));
  /* 120327c3 call 0x120279f0 */
  push32(0x120327c8u); f_120279f0();
  /* 120327c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120327cb push 2 */
  push32((uint32_t)(0x2u));
  /* 120327cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120327d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120327d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120327d4 call 0x120279f0 */
  push32(0x120327d9u); f_120279f0();
  /* 120327d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120327dc push 2 */
  push32((uint32_t)(0x2u));
  /* 120327de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120327e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120327e4 push eax */
  push32((uint32_t)(EAX));
  /* 120327e5 call 0x120279f0 */
  push32(0x120327eau); f_120279f0();
  /* 120327ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120327ed push 2 */
  push32((uint32_t)(0x2u));
  /* 120327ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120327f2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120327f5 push edx */
  push32((uint32_t)(EDX));
  /* 120327f6 call 0x120279f0 */
  push32(0x120327fbu); f_120279f0();
  /* 120327fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120327fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12032800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032803 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12032806 push ecx */
  push32((uint32_t)(ECX));
  /* 12032807 call 0x120279f0 */
  push32(0x1203280cu); f_120279f0();
  /* 1203280c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203280f push 2 */
  push32((uint32_t)(0x2u));
  /* 12032811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032814 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12032817 push eax */
  push32((uint32_t)(EAX));
  /* 12032818 call 0x120279f0 */
  push32(0x1203281du); f_120279f0();
  /* 1203281d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032820 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032825 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12032828 push edx */
  push32((uint32_t)(EDX));
  /* 12032829 call 0x120279f0 */
  push32(0x1203282eu); f_120279f0();
  /* 1203282e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12032831:;
  /* 12032831 pop ebp */
  EBP = (pop32());
  /* 12032832 ret  */
  ESPCHK(0x120327a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012840 @ 0x12032840 (928 bytes, 284 insns) */
void f_12032840(void) {
  FTRACE(0x12032840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032840 push ebp */
  push32((uint32_t)(EBP));
  /* 12032841 mov ebp, esp */
  EBP = (ESP);
  /* 12032843 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032846 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1203284d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12032854 cmp dword ptr [0x120529e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203285b je 0x12032b91 */
  if (C.zf) goto L_12032b91;
  /* 12032861 cmp dword ptr [0x120529f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032868 jne 0x12032890 */
  if (!C.zf) goto L_12032890;
  /* 1203286a push 0x120529f8 */
  push32((uint32_t)(0x120529f8u));
  /* 1203286f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12032874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032876 mov ax, word ptr [0x12052a3c] */
  AX = (r16((uint32_t)(0x12052a3c)));
  /* 1203287c push eax */
  push32((uint32_t)(EAX));
  /* 1203287d push 0 */
  push32((uint32_t)(0x0u));
  /* 1203287f call 0x12035120 */
  push32(0x12032884u); f_12035120();
  /* 12032884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032889 je 0x12032890 */
  if (C.zf) goto L_12032890;
  /* 1203288b jmp 0x12032b52 */
  goto L_12032b52;
L_12032890:;
  /* 12032890 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12032892 push 0x1204e5dc */
  push32((uint32_t)(0x1204e5dcu));
  /* 12032897 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032899 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1203289e call 0x12026f60 */
  push32(0x120328a3u); f_12026f60();
  /* 120328a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120328a6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120328a9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 120328ab push 0x1204e5dc */
  push32((uint32_t)(0x1204e5dcu));
  /* 120328b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120328b2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 120328b7 call 0x12026f60 */
  push32(0x120328bcu); f_12026f60();
  /* 120328bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120328bf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120328c2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 120328c4 push 0x1204e5dc */
  push32((uint32_t)(0x1204e5dcu));
  /* 120328c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120328cb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 120328d0 call 0x12026f60 */
  push32(0x120328d5u); f_12026f60();
  /* 120328d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120328d8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120328db push 0x62 */
  push32((uint32_t)(0x62u));
  /* 120328dd push 0x1204e5dc */
  push32((uint32_t)(0x1204e5dcu));
  /* 120328e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120328e4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 120328e9 call 0x12026f60 */
  push32(0x120328eeu); f_12026f60();
  /* 120328ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120328f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120328f4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120328f8 je 0x1203290c */
  if (C.zf) goto L_1203290c;
  /* 120328fa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120328fe je 0x1203290c */
  if (C.zf) goto L_1203290c;
  /* 12032900 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032904 je 0x1203290c */
  if (C.zf) goto L_1203290c;
  /* 12032906 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203290a jne 0x12032911 */
  if (!C.zf) goto L_12032911;
L_1203290c:;
  /* 1203290c jmp 0x12032b52 */
  goto L_12032b52;
L_12032911:;
  /* 12032911 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12032914 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12032917 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1203291e jmp 0x12032929 */
  goto L_12032929;
L_12032920:;
  /* 12032920 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12032923 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032926 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12032929:;
  /* 12032929 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032930 jge 0x12032945 */
  if ((C.sf==C.of)) goto L_12032945;
  /* 12032932 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032935 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12032938 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1203293a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1203293d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032940 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12032943 jmp 0x12032920 */
  goto L_12032920;
L_12032945:;
  /* 12032945 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12032948 push eax */
  push32((uint32_t)(EAX));
  /* 12032949 mov ecx, dword ptr [0x120529f8] */
  ECX = (r32((uint32_t)(0x120529f8)));
  /* 1203294f push ecx */
  push32((uint32_t)(ECX));
  /* 12032950 call dword ptr [0x12055344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055344))), 0x12032956u);
  /* 12032956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032958 jne 0x1203295f */
  if (!C.zf) goto L_1203295f;
  /* 1203295a jmp 0x12032b52 */
  goto L_12032b52;
L_1203295f:;
  /* 1203295f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032963 jbe 0x1203296a */
  if ((C.cf||C.zf)) goto L_1203296a;
  /* 12032965 jmp 0x12032b52 */
  goto L_12032b52;
L_1203296a:;
  /* 1203296a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203296d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12032973 mov dword ptr [0x12050ea4], edx */
  w32((uint32_t)(0x12050ea4), (EDX));
  /* 12032979 cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032980 jle 0x120329d9 */
  if ((C.zf||C.sf!=C.of)) goto L_120329d9;
  /* 12032982 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12032985 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12032988 jmp 0x12032993 */
  goto L_12032993;
L_1203298a:;
  /* 1203298a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1203298d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032990 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12032993:;
  /* 12032993 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032998 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1203299a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203299c je 0x120329d9 */
  if (C.zf) goto L_120329d9;
  /* 1203299e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120329a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120329a3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 120329a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120329a8 je 0x120329d9 */
  if (C.zf) goto L_120329d9;
  /* 120329aa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120329ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120329af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120329b1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120329b4 jmp 0x120329bf */
  goto L_120329bf;
L_120329b6:;
  /* 120329b6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120329b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120329bc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_120329bf:;
  /* 120329bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120329c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120329c4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120329c7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120329ca jg 0x120329d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_120329d7;
  /* 120329cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120329cf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120329d2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120329d5 jmp 0x120329b6 */
  goto L_120329b6;
L_120329d7:;
  /* 120329d7 jmp 0x1203298a */
  goto L_1203298a;
L_120329d9:;
  /* 120329d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120329db push 0 */
  push32((uint32_t)(0x0u));
  /* 120329dd push 0 */
  push32((uint32_t)(0x0u));
  /* 120329df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120329e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120329e5 push eax */
  push32((uint32_t)(EAX));
  /* 120329e6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120329eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120329ee push ecx */
  push32((uint32_t)(ECX));
  /* 120329ef push 1 */
  push32((uint32_t)(0x1u));
  /* 120329f1 call 0x1202f190 */
  push32(0x120329f6u); f_1202f190();
  /* 120329f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120329f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120329fb jne 0x12032a02 */
  if (!C.zf) goto L_12032a02;
  /* 120329fd jmp 0x12032b52 */
  goto L_12032b52;
L_12032a02:;
  /* 12032a02 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12032a05 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12032a0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12032a0d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12032a10 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12032a17 jmp 0x12032a22 */
  goto L_12032a22;
L_12032a19:;
  /* 12032a19 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12032a1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032a1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12032a22:;
  /* 12032a22 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032a29 jge 0x12032a40 */
  if ((C.sf==C.of)) goto L_12032a40;
  /* 12032a2b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12032a2e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12032a32 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12032a35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12032a38 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032a3b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12032a3e jmp 0x12032a19 */
  goto L_12032a19;
L_12032a40:;
  /* 12032a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12032a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12032a44 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12032a47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032a4a push edx */
  push32((uint32_t)(EDX));
  /* 12032a4b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12032a50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12032a53 push eax */
  push32((uint32_t)(EAX));
  /* 12032a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12032a56 call 0x120353c0 */
  push32(0x12032a5bu); f_120353c0();
  /* 12032a5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032a60 jne 0x12032a67 */
  if (!C.zf) goto L_12032a67;
  /* 12032a62 jmp 0x12032b52 */
  goto L_12032b52;
L_12032a67:;
  /* 12032a67 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12032a6a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12032a6f cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032a76 jle 0x12032ad3 */
  if ((C.zf||C.sf!=C.of)) goto L_12032ad3;
  /* 12032a78 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12032a7b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12032a7e jmp 0x12032a89 */
  goto L_12032a89;
L_12032a80:;
  /* 12032a80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032a83 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032a86 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12032a89:;
  /* 12032a89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032a8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12032a8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12032a90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12032a92 je 0x12032ad3 */
  if (C.zf) goto L_12032ad3;
  /* 12032a94 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032a97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12032a99 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12032a9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12032a9e je 0x12032ad3 */
  if (C.zf) goto L_12032ad3;
  /* 12032aa0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032aa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032aa5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12032aa7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12032aaa jmp 0x12032ab5 */
  goto L_12032ab5;
L_12032aac:;
  /* 12032aac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12032aaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032ab2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12032ab5:;
  /* 12032ab5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12032ab8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032aba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12032abd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032ac0 jg 0x12032ad1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12032ad1;
  /* 12032ac2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12032ac5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12032ac8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12032acf jmp 0x12032aac */
  goto L_12032aac;
L_12032ad1:;
  /* 12032ad1 jmp 0x12032a80 */
  goto L_12032a80;
L_12032ad3:;
  /* 12032ad3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12032ad6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032ad9 mov dword ptr [0x12050c98], eax */
  w32((uint32_t)(0x12050c98), (EAX));
  /* 12032ade mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12032ae1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032ae4 mov dword ptr [0x12050c9c], ecx */
  w32((uint32_t)(0x12050c9c), (ECX));
  /* 12032aea cmp dword ptr [0x12052a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032af1 je 0x12032b04 */
  if (C.zf) goto L_12032b04;
  /* 12032af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032af5 mov edx, dword ptr [0x12052a28] */
  EDX = (r32((uint32_t)(0x12052a28)));
  /* 12032afb push edx */
  push32((uint32_t)(EDX));
  /* 12032afc call 0x120279f0 */
  push32(0x12032b01u); f_120279f0();
  /* 12032b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12032b04:;
  /* 12032b04 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12032b07 mov dword ptr [0x12052a28], eax */
  w32((uint32_t)(0x12052a28), (EAX));
  /* 12032b0c cmp dword ptr [0x12052a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032b13 je 0x12032b26 */
  if (C.zf) goto L_12032b26;
  /* 12032b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b17 mov ecx, dword ptr [0x12052a2c] */
  ECX = (r32((uint32_t)(0x12052a2c)));
  /* 12032b1d push ecx */
  push32((uint32_t)(ECX));
  /* 12032b1e call 0x120279f0 */
  push32(0x12032b23u); f_120279f0();
  /* 12032b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12032b26:;
  /* 12032b26 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12032b29 mov dword ptr [0x12052a2c], edx */
  w32((uint32_t)(0x12052a2c), (EDX));
  /* 12032b2f push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b31 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12032b34 push eax */
  push32((uint32_t)(EAX));
  /* 12032b35 call 0x120279f0 */
  push32(0x12032b3au); f_120279f0();
  /* 12032b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032b3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b3f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12032b42 push ecx */
  push32((uint32_t)(ECX));
  /* 12032b43 call 0x120279f0 */
  push32(0x12032b48u); f_120279f0();
  /* 12032b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032b4d jmp 0x12032bdc */
  goto L_12032bdc;
L_12032b52:;
  /* 12032b52 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12032b57 push edx */
  push32((uint32_t)(EDX));
  /* 12032b58 call 0x120279f0 */
  push32(0x12032b5du); f_120279f0();
  /* 12032b5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032b60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b62 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12032b65 push eax */
  push32((uint32_t)(EAX));
  /* 12032b66 call 0x120279f0 */
  push32(0x12032b6bu); f_120279f0();
  /* 12032b6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032b6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12032b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12032b74 call 0x120279f0 */
  push32(0x12032b79u); f_120279f0();
  /* 12032b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12032b7e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12032b81 push edx */
  push32((uint32_t)(EDX));
  /* 12032b82 call 0x120279f0 */
  push32(0x12032b87u); f_120279f0();
  /* 12032b87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032b8a mov eax, 1 */
  EAX = (0x1u);
  /* 12032b8f jmp 0x12032bdc */
  goto L_12032bdc;
L_12032b91:;
  /* 12032b91 mov dword ptr [0x12050c98], 0x12050ca2 */
  w32((uint32_t)(0x12050c98), (0x12050ca2u));
  /* 12032b9b mov dword ptr [0x12050c9c], 0x12050ca2 */
  w32((uint32_t)(0x12050c9c), (0x12050ca2u));
  /* 12032ba5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032ba7 mov eax, dword ptr [0x12052a28] */
  EAX = (r32((uint32_t)(0x12052a28)));
  /* 12032bac push eax */
  push32((uint32_t)(EAX));
  /* 12032bad call 0x120279f0 */
  push32(0x12032bb2u); f_120279f0();
  /* 12032bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032bb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12032bb7 mov ecx, dword ptr [0x12052a2c] */
  ECX = (r32((uint32_t)(0x12052a2c)));
  /* 12032bbd push ecx */
  push32((uint32_t)(ECX));
  /* 12032bbe call 0x120279f0 */
  push32(0x12032bc3u); f_120279f0();
  /* 12032bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032bc6 mov dword ptr [0x12052a28], 0 */
  w32((uint32_t)(0x12052a28), (0x0u));
  /* 12032bd0 mov dword ptr [0x12052a2c], 0 */
  w32((uint32_t)(0x12052a2c), (0x0u));
  /* 12032bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12032bdc:;
  /* 12032bdc mov esp, ebp */
  ESP = (EBP);
  /* 12032bde pop ebp */
  EBP = (pop32());
  /* 12032bdf ret  */
  ESPCHK(0x12032840u, _esp0);
  ESP += 4; return;
}

/* FUN_10012be0 @ 0x12032be0 (7 bytes, 5 insns) */
void f_12032be0(void) {
  FTRACE(0x12032be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12032be1 mov ebp, esp */
  EBP = (ESP);
  /* 12032be3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032be5 pop ebp */
  EBP = (pop32());
  /* 12032be6 ret  */
  ESPCHK(0x12032be0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12032bf0 (129 bytes, 56 insns) */
void f_12032bf0(void) {
  FTRACE(0x12032bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032bf0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12032bf4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12032bf8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12032bfe jne 0x12032c3c */
  if (!C.zf) goto L_12032c3c;
L_12032c00:;
  /* 12032c00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12032c02 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c04 jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032c08 je 0x12032c30 */
  if (C.zf) goto L_12032c30;
  /* 12032c0a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c0d jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c0f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12032c11 je 0x12032c30 */
  if (C.zf) goto L_12032c30;
  /* 12032c13 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12032c16 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c19 jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c1b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032c1d je 0x12032c30 */
  if (C.zf) goto L_12032c30;
  /* 12032c1f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c22 jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c24 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032c27 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032c2a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12032c2c jne 0x12032c00 */
  if (!C.zf) goto L_12032c00;
  /* 12032c2e mov edi, edi */
  EDI = (EDI);
L_12032c30:;
  /* 12032c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032c32 ret  */
  ESPCHK(0x12032bf0u, _esp0);
  ESP += 4; return;
  /* 12032c33 nop  */
  /* nop */
L_12032c34:;
  /* 12032c34 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032c36 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12032c38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12032c39 ret  */
  ESPCHK(0x12032bf0u, _esp0);
  ESP += 4; return;
  /* 12032c3a mov edi, edi */
  EDI = (EDI);
L_12032c3c:;
  /* 12032c3c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12032c42 je 0x12032c58 */
  if (C.zf) goto L_12032c58;
  /* 12032c44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12032c46 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12032c47 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c49 jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12032c4c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032c4e je 0x12032c30 */
  if (C.zf) goto L_12032c30;
  /* 12032c50 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12032c56 je 0x12032c00 */
  if (C.zf) goto L_12032c00;
L_12032c58:;
  /* 12032c58 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12032c5b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032c5e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c60 jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c62 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032c64 je 0x12032c30 */
  if (C.zf) goto L_12032c30;
  /* 12032c66 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032c69 jne 0x12032c34 */
  if (!C.zf) goto L_12032c34;
  /* 12032c6b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12032c6d je 0x12032c30 */
  if (C.zf) goto L_12032c30;
  /* 12032c6f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032c72 jmp 0x12032c00 */
  goto L_12032c00;
}

/* FUN_10012c80 @ 0x12032c80 (62 bytes, 35 insns) */
void f_12032c80(void) {
  FTRACE(0x12032c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12032c81 mov ebp, esp */
  EBP = (ESP);
  /* 12032c83 push esi */
  push32((uint32_t)(ESI));
  /* 12032c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032c86 push eax */
  push32((uint32_t)(EAX));
  /* 12032c87 push eax */
  push32((uint32_t)(EAX));
  /* 12032c88 push eax */
  push32((uint32_t)(EAX));
  /* 12032c89 push eax */
  push32((uint32_t)(EAX));
  /* 12032c8a push eax */
  push32((uint32_t)(EAX));
  /* 12032c8b push eax */
  push32((uint32_t)(EAX));
  /* 12032c8c push eax */
  push32((uint32_t)(EAX));
  /* 12032c8d push eax */
  push32((uint32_t)(EAX));
  /* 12032c8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12032c91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12032c94:;
  /* 12032c94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12032c96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032c98 je 0x12032ca1 */
  if (C.zf) goto L_12032ca1;
  /* 12032c9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12032c9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12032c9b");
  /* 12032c9f jmp 0x12032c94 */
  goto L_12032c94;
L_12032ca1:;
  /* 12032ca1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12032ca4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12032ca7 nop  */
  /* nop */
L_12032ca8:;
  /* 12032ca8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12032ca9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12032cab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032cad je 0x12032cb6 */
  if (C.zf) goto L_12032cb6;
  /* 12032caf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12032cb0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12032cb0");
  /* 12032cb4 jae 0x12032ca8 */
  if (!C.cf) goto L_12032ca8;
L_12032cb6:;
  /* 12032cb6 mov eax, ecx */
  EAX = (ECX);
  /* 12032cb8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032cbb pop esi */
  ESI = (pop32());
  /* 12032cbc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12032cbd ret  */
  ESPCHK(0x12032c80u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12032cc0 (56 bytes, 31 insns) */
void f_12032cc0(void) {
  FTRACE(0x12032cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12032cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12032cc3 push edi */
  push32((uint32_t)(EDI));
  /* 12032cc4 push esi */
  push32((uint32_t)(ESI));
  /* 12032cc5 push ebx */
  push32((uint32_t)(EBX));
  /* 12032cc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12032cc9 jecxz 0x12032cf1 */
  x86_unimpl("jecxz @ 0x12032cc9");
  /* 12032ccb mov ebx, ecx */
  EBX = (ECX);
  /* 12032ccd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12032cd0 mov esi, edi */
  ESI = (EDI);
  /* 12032cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032cd4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12032cd6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12032cd8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032cda mov edi, esi */
  EDI = (ESI);
  /* 12032cdc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12032cdf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12032ce1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12032ce4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12032ce6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12032ce9 ja 0x12032cef */
  if ((!C.cf&&!C.zf)) goto L_12032cef;
  /* 12032ceb je 0x12032cf1 */
  if (C.zf) goto L_12032cf1;
  /* 12032ced dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12032cee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12032cef:;
  /* 12032cef not ecx */
  ECX = (~(ECX));
L_12032cf1:;
  /* 12032cf1 mov eax, ecx */
  EAX = (ECX);
  /* 12032cf3 pop ebx */
  EBX = (pop32());
  /* 12032cf4 pop esi */
  ESI = (pop32());
  /* 12032cf5 pop edi */
  EDI = (pop32());
  /* 12032cf6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12032cf7 ret  */
  ESPCHK(0x12032cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d00 @ 0x12032d00 (58 bytes, 32 insns) */
void f_12032d00(void) {
  FTRACE(0x12032d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12032d01 mov ebp, esp */
  EBP = (ESP);
  /* 12032d03 push esi */
  push32((uint32_t)(ESI));
  /* 12032d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032d06 push eax */
  push32((uint32_t)(EAX));
  /* 12032d07 push eax */
  push32((uint32_t)(EAX));
  /* 12032d08 push eax */
  push32((uint32_t)(EAX));
  /* 12032d09 push eax */
  push32((uint32_t)(EAX));
  /* 12032d0a push eax */
  push32((uint32_t)(EAX));
  /* 12032d0b push eax */
  push32((uint32_t)(EAX));
  /* 12032d0c push eax */
  push32((uint32_t)(EAX));
  /* 12032d0d push eax */
  push32((uint32_t)(EAX));
  /* 12032d0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12032d11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12032d14:;
  /* 12032d14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12032d16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032d18 je 0x12032d21 */
  if (C.zf) goto L_12032d21;
  /* 12032d1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12032d1b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12032d1b");
  /* 12032d1f jmp 0x12032d14 */
  goto L_12032d14;
L_12032d21:;
  /* 12032d21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12032d24:;
  /* 12032d24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12032d26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12032d28 je 0x12032d34 */
  if (C.zf) goto L_12032d34;
  /* 12032d2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12032d2b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12032d2b");
  /* 12032d2f jae 0x12032d24 */
  if (!C.cf) goto L_12032d24;
  /* 12032d31 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12032d34:;
  /* 12032d34 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032d37 pop esi */
  ESI = (pop32());
  /* 12032d38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12032d39 ret  */
  ESPCHK(0x12032d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x12032d40 (512 bytes, 147 insns) */
void f_12032d40(void) {
  FTRACE(0x12032d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12032d41 mov ebp, esp */
  EBP = (ESP);
  /* 12032d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032d46 cmp dword ptr [0x12052a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032d4d jne 0x12032d72 */
  if (!C.zf) goto L_12032d72;
  /* 12032d4f call 0x12033810 */
  push32(0x12032d54u); f_12033810();
  /* 12032d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032d56 je 0x12032d62 */
  if (C.zf) goto L_12032d62;
  /* 12032d58 mov eax, dword ptr [0x12055308] */
  EAX = (r32((uint32_t)(0x12055308)));
  /* 12032d5d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12032d60 jmp 0x12032d69 */
  goto L_12032d69;
L_12032d62:;
  /* 12032d62 mov dword ptr [ebp - 8], 0x12033860 */
  w32((uint32_t)(EBP + -0x8), (0x12033860u));
L_12032d69:;
  /* 12032d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12032d6c mov dword ptr [0x12052a74], ecx */
  w32((uint32_t)(0x12052a74), (ECX));
L_12032d72:;
  /* 12032d72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032d76 jne 0x12032d82 */
  if (!C.zf) goto L_12032d82;
  /* 12032d78 call 0x12033660 */
  push32(0x12032d7du); f_12033660();
  /* 12032d7d jmp 0x12032e4e */
  goto L_12032e4e;
L_12032d82:;
  /* 12032d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032d85 mov dword ptr [0x12052a64], edx */
  w32((uint32_t)(0x12052a64), (EDX));
  /* 12032d8b cmp dword ptr [0x12052a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032d92 je 0x12032db4 */
  if (C.zf) goto L_12032db4;
  /* 12032d94 mov eax, dword ptr [0x12052a64] */
  EAX = (r32((uint32_t)(0x12052a64)));
  /* 12032d99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12032d9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12032d9e je 0x12032db4 */
  if (C.zf) goto L_12032db4;
  /* 12032da0 push 0x12052a64 */
  push32((uint32_t)(0x12052a64u));
  /* 12032da5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12032da7 push 0x12051a90 */
  push32((uint32_t)(0x12051a90u));
  /* 12032dac call 0x12032f40 */
  push32(0x12032db1u); f_12032f40();
  /* 12032db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12032db4:;
  /* 12032db4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032db7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032dba mov dword ptr [0x12052a68], edx */
  w32((uint32_t)(0x12052a68), (EDX));
  /* 12032dc0 cmp dword ptr [0x12052a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032dc7 je 0x12032de9 */
  if (C.zf) goto L_12032de9;
  /* 12032dc9 mov eax, dword ptr [0x12052a68] */
  EAX = (r32((uint32_t)(0x12052a68)));
  /* 12032dce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12032dd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12032dd3 je 0x12032de9 */
  if (C.zf) goto L_12032de9;
  /* 12032dd5 push 0x12052a68 */
  push32((uint32_t)(0x12052a68u));
  /* 12032dda push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12032ddc push 0x120519d8 */
  push32((uint32_t)(0x120519d8u));
  /* 12032de1 call 0x12032f40 */
  push32(0x12032de6u); f_12032f40();
  /* 12032de6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12032de9:;
  /* 12032de9 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
  /* 12032df3 cmp dword ptr [0x12052a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032dfa je 0x12032e2d */
  if (C.zf) goto L_12032e2d;
  /* 12032dfc mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 12032e02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12032e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032e07 je 0x12032e2d */
  if (C.zf) goto L_12032e2d;
  /* 12032e09 cmp dword ptr [0x12052a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032e10 je 0x12032e26 */
  if (C.zf) goto L_12032e26;
  /* 12032e12 mov ecx, dword ptr [0x12052a68] */
  ECX = (r32((uint32_t)(0x12052a68)));
  /* 12032e18 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12032e1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12032e1d je 0x12032e26 */
  if (C.zf) goto L_12032e26;
  /* 12032e1f call 0x12032fd0 */
  push32(0x12032e24u); f_12032fd0();
  /* 12032e24 jmp 0x12032e2b */
  goto L_12032e2b;
L_12032e26:;
  /* 12032e26 call 0x120333c0 */
  push32(0x12032e2bu); f_120333c0();
L_12032e2b:;
  /* 12032e2b jmp 0x12032e4e */
  goto L_12032e4e;
L_12032e2d:;
  /* 12032e2d cmp dword ptr [0x12052a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032e34 je 0x12032e49 */
  if (C.zf) goto L_12032e49;
  /* 12032e36 mov eax, dword ptr [0x12052a68] */
  EAX = (r32((uint32_t)(0x12052a68)));
  /* 12032e3b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12032e3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12032e40 je 0x12032e49 */
  if (C.zf) goto L_12032e49;
  /* 12032e42 call 0x12033560 */
  push32(0x12032e47u); f_12033560();
  /* 12032e47 jmp 0x12032e4e */
  goto L_12032e4e;
L_12032e49:;
  /* 12032e49 call 0x12033660 */
  push32(0x12032e4eu); f_12033660();
L_12032e4e:;
  /* 12032e4e cmp dword ptr [0x12052a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032e55 jne 0x12032e5e */
  if (!C.zf) goto L_12032e5e;
  /* 12032e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032e59 jmp 0x12032f3c */
  goto L_12032f3c;
L_12032e5e:;
  /* 12032e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032e61 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032e67 push edx */
  push32((uint32_t)(EDX));
  /* 12032e68 call 0x12033690 */
  push32(0x12032e6du); f_12033690();
  /* 12032e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032e70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12032e73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032e77 je 0x12032e8c */
  if (C.zf) goto L_12032e8c;
  /* 12032e79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032e7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12032e81 push eax */
  push32((uint32_t)(EAX));
  /* 12032e82 call dword ptr [0x1205530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1205530c))), 0x12032e88u);
  /* 12032e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032e8a jne 0x12032e93 */
  if (!C.zf) goto L_12032e93;
L_12032e8c:;
  /* 12032e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032e8e jmp 0x12032f3c */
  goto L_12032f3c;
L_12032e93:;
  /* 12032e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12032e95 mov ecx, dword ptr [0x12052a54] */
  ECX = (r32((uint32_t)(0x12052a54)));
  /* 12032e9b push ecx */
  push32((uint32_t)(ECX));
  /* 12032e9c call dword ptr [0x12055310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055310))), 0x12032ea2u);
  /* 12032ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032ea4 jne 0x12032ead */
  if (!C.zf) goto L_12032ead;
  /* 12032ea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032ea8 jmp 0x12032f3c */
  goto L_12032f3c;
L_12032ead:;
  /* 12032ead cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032eb1 je 0x12032ed8 */
  if (C.zf) goto L_12032ed8;
  /* 12032eb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12032eb6 mov ax, word ptr [0x12052a54] */
  AX = (r16((uint32_t)(0x12052a54)));
  /* 12032ebc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12032ebf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12032ec2 mov dx, word ptr [0x12052a70] */
  DX = (r16((uint32_t)(0x12052a70)));
  /* 12032ec9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12032ecd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12032ed0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12032ed4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12032ed8:;
  /* 12032ed8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032edc je 0x12032f37 */
  if (C.zf) goto L_12032f37;
  /* 12032ede push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12032ee0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12032ee3 push edx */
  push32((uint32_t)(EDX));
  /* 12032ee4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12032ee9 mov eax, dword ptr [0x12052a54] */
  EAX = (r32((uint32_t)(0x12052a54)));
  /* 12032eee push eax */
  push32((uint32_t)(EAX));
  /* 12032eef call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x12032ef5u);
  /* 12032ef5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032ef7 jne 0x12032efd */
  if (!C.zf) goto L_12032efd;
  /* 12032ef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032efb jmp 0x12032f3c */
  goto L_12032f3c;
L_12032efd:;
  /* 12032efd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12032eff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12032f02 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032f05 push ecx */
  push32((uint32_t)(ECX));
  /* 12032f06 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12032f0b mov edx, dword ptr [0x12052a70] */
  EDX = (r32((uint32_t)(0x12052a70)));
  /* 12032f11 push edx */
  push32((uint32_t)(EDX));
  /* 12032f12 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x12032f18u);
  /* 12032f18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12032f1a jne 0x12032f20 */
  if (!C.zf) goto L_12032f20;
  /* 12032f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12032f1e jmp 0x12032f3c */
  goto L_12032f3c;
L_12032f20:;
  /* 12032f20 push 0xa */
  push32((uint32_t)(0xau));
  /* 12032f22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12032f25 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032f2a push eax */
  push32((uint32_t)(EAX));
  /* 12032f2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032f2e push ecx */
  push32((uint32_t)(ECX));
  /* 12032f2f call 0x12029aa0 */
  push32(0x12032f34u); f_12029aa0();
  /* 12032f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12032f37:;
  /* 12032f37 mov eax, 1 */
  EAX = (0x1u);
L_12032f3c:;
  /* 12032f3c mov esp, ebp */
  ESP = (EBP);
  /* 12032f3e pop ebp */
  EBP = (pop32());
  /* 12032f3f ret  */
  ESPCHK(0x12032d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x12032f40 (130 bytes, 47 insns) */
void f_12032f40(void) {
  FTRACE(0x12032f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12032f41 mov ebp, esp */
  EBP = (ESP);
  /* 12032f43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032f46 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12032f4d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12032f54:;
  /* 12032f54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12032f57 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032f5a jg 0x12032fbe */
  if ((!C.zf&&C.sf==C.of)) goto L_12032fbe;
  /* 12032f5c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032f60 je 0x12032fbe */
  if (C.zf) goto L_12032fbe;
  /* 12032f62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12032f65 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032f68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12032f69 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032f6b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12032f6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12032f70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032f73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032f76 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12032f79 push eax */
  push32((uint32_t)(EAX));
  /* 12032f7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12032f7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12032f7f push edx */
  push32((uint32_t)(EDX));
  /* 12032f80 call 0x12035630 */
  push32(0x12032f85u); f_12035630();
  /* 12032f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12032f8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032f8f jne 0x12032fa2 */
  if (!C.zf) goto L_12032fa2;
  /* 12032f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032f94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12032f97 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12032f9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12032f9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12032fa0 jmp 0x12032fbc */
  goto L_12032fbc;
L_12032fa2:;
  /* 12032fa2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032fa6 jge 0x12032fb3 */
  if ((C.sf==C.of)) goto L_12032fb3;
  /* 12032fa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032fab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12032fae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12032fb1 jmp 0x12032fbc */
  goto L_12032fbc;
L_12032fb3:;
  /* 12032fb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12032fb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12032fb9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12032fbc:;
  /* 12032fbc jmp 0x12032f54 */
  goto L_12032f54;
L_12032fbe:;
  /* 12032fbe mov esp, ebp */
  ESP = (EBP);
  /* 12032fc0 pop ebp */
  EBP = (pop32());
  /* 12032fc1 ret  */
  ESPCHK(0x12032f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fd0 @ 0x12032fd0 (186 bytes, 50 insns) */
void f_12032fd0(void) {
  FTRACE(0x12032fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12032fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12032fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12032fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12032fd4 mov eax, dword ptr [0x12052a64] */
  EAX = (r32((uint32_t)(0x12052a64)));
  /* 12032fd9 push eax */
  push32((uint32_t)(EAX));
  /* 12032fda call 0x12029d90 */
  push32(0x12032fdfu); f_12029d90();
  /* 12032fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032fe2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12032fe4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12032fe7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12032fea mov dword ptr [0x12052a60], ecx */
  w32((uint32_t)(0x12052a60), (ECX));
  /* 12032ff0 mov edx, dword ptr [0x12052a68] */
  EDX = (r32((uint32_t)(0x12052a68)));
  /* 12032ff6 push edx */
  push32((uint32_t)(EDX));
  /* 12032ff7 call 0x12029d90 */
  push32(0x12032ffcu); f_12029d90();
  /* 12032ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12032fff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12033001 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033004 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12033007 mov dword ptr [0x12052a58], ecx */
  w32((uint32_t)(0x12052a58), (ECX));
  /* 1203300d mov dword ptr [0x12052a54], 0 */
  w32((uint32_t)(0x12052a54), (0x0u));
  /* 12033017 cmp dword ptr [0x12052a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203301e je 0x12033029 */
  if (C.zf) goto L_12033029;
  /* 12033020 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12033027 jmp 0x1203303b */
  goto L_1203303b;
L_12033029:;
  /* 12033029 mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 1203302f push edx */
  push32((uint32_t)(EDX));
  /* 12033030 call 0x12033a70 */
  push32(0x12033035u); f_12033a70();
  /* 12033035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033038 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1203303b:;
  /* 1203303b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203303e mov dword ptr [0x12052a5c], eax */
  w32((uint32_t)(0x12052a5c), (EAX));
  /* 12033043 push 1 */
  push32((uint32_t)(0x1u));
  /* 12033045 push 0x12033090 */
  push32((uint32_t)(0x12033090u));
  /* 1203304a call dword ptr [0x12055304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055304))), 0x12033050u);
  /* 12033050 mov ecx, dword ptr [0x12052a6c] */
  ECX = (r32((uint32_t)(0x12052a6c)));
  /* 12033056 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1203305c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203305e je 0x1203307c */
  if (C.zf) goto L_1203307c;
  /* 12033060 mov edx, dword ptr [0x12052a6c] */
  EDX = (r32((uint32_t)(0x12052a6c)));
  /* 12033066 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1203306c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1203306e je 0x1203307c */
  if (C.zf) goto L_1203307c;
  /* 12033070 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 12033075 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12033078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203307a jne 0x12033086 */
  if (!C.zf) goto L_12033086;
L_1203307c:;
  /* 1203307c mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
L_12033086:;
  /* 12033086 mov esp, ebp */
  ESP = (EBP);
  /* 12033088 pop ebp */
  EBP = (pop32());
  /* 12033089 ret  */
  ESPCHK(0x12032fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013090 @ 0x12033090 (804 bytes, 220 insns) */
void f_12033090(void) {
  FTRACE(0x12033090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033090 push ebp */
  push32((uint32_t)(EBP));
  /* 12033091 mov ebp, esp */
  EBP = (ESP);
  /* 12033093 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033099 push eax */
  push32((uint32_t)(EAX));
  /* 1203309a call 0x120339f0 */
  push32(0x1203309fu); f_120339f0();
  /* 1203309f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120330a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 120330a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120330a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120330aa push ecx */
  push32((uint32_t)(ECX));
  /* 120330ab mov edx, dword ptr [0x12052a58] */
  EDX = (r32((uint32_t)(0x12052a58)));
  /* 120330b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120330b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120330b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 120330bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120330c1 push edx */
  push32((uint32_t)(EDX));
  /* 120330c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120330c5 push eax */
  push32((uint32_t)(EAX));
  /* 120330c6 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x120330ccu);
  /* 120330cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120330ce jne 0x120330e4 */
  if (!C.zf) goto L_120330e4;
  /* 120330d0 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
  /* 120330da mov eax, 1 */
  EAX = (0x1u);
  /* 120330df jmp 0x120333ae */
  goto L_120333ae;
L_120330e4:;
  /* 120330e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120330e7 push ecx */
  push32((uint32_t)(ECX));
  /* 120330e8 mov edx, dword ptr [0x12052a68] */
  EDX = (r32((uint32_t)(0x12052a68)));
  /* 120330ee push edx */
  push32((uint32_t)(EDX));
  /* 120330ef call 0x12035630 */
  push32(0x120330f4u); f_12035630();
  /* 120330f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120330f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120330f9 jne 0x1203321f */
  if (!C.zf) goto L_1203321f;
  /* 120330ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12033101 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12033104 push eax */
  push32((uint32_t)(EAX));
  /* 12033105 mov ecx, dword ptr [0x12052a60] */
  ECX = (r32((uint32_t)(0x12052a60)));
  /* 1203310b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1203310d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203310f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12033115 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203311b push ecx */
  push32((uint32_t)(ECX));
  /* 1203311c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203311f push edx */
  push32((uint32_t)(EDX));
  /* 12033120 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x12033126u);
  /* 12033126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033128 jne 0x1203313e */
  if (!C.zf) goto L_1203313e;
  /* 1203312a mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
  /* 12033134 mov eax, 1 */
  EAX = (0x1u);
  /* 12033139 jmp 0x120333ae */
  goto L_120333ae;
L_1203313e:;
  /* 1203313e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12033141 push eax */
  push32((uint32_t)(EAX));
  /* 12033142 mov ecx, dword ptr [0x12052a64] */
  ECX = (r32((uint32_t)(0x12052a64)));
  /* 12033148 push ecx */
  push32((uint32_t)(ECX));
  /* 12033149 call 0x12035630 */
  push32(0x1203314eu); f_12035630();
  /* 1203314e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033153 jne 0x12033180 */
  if (!C.zf) goto L_12033180;
  /* 12033155 mov edx, dword ptr [0x12052a6c] */
  EDX = (r32((uint32_t)(0x12052a6c)));
  /* 1203315b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12033161 mov dword ptr [0x12052a6c], edx */
  w32((uint32_t)(0x12052a6c), (EDX));
  /* 12033167 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203316a mov dword ptr [0x12052a70], eax */
  w32((uint32_t)(0x12052a70), (EAX));
  /* 1203316f mov ecx, dword ptr [0x12052a70] */
  ECX = (r32((uint32_t)(0x12052a70)));
  /* 12033175 mov dword ptr [0x12052a54], ecx */
  w32((uint32_t)(0x12052a54), (ECX));
  /* 1203317b jmp 0x1203321f */
  goto L_1203321f;
L_12033180:;
  /* 12033180 mov edx, dword ptr [0x12052a6c] */
  EDX = (r32((uint32_t)(0x12052a6c)));
  /* 12033186 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12033189 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1203318b jne 0x1203321f */
  if (!C.zf) goto L_1203321f;
  /* 12033191 cmp dword ptr [0x12052a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033198 je 0x120331ed */
  if (C.zf) goto L_120331ed;
  /* 1203319a mov eax, dword ptr [0x12052a5c] */
  EAX = (r32((uint32_t)(0x12052a5c)));
  /* 1203319f push eax */
  push32((uint32_t)(EAX));
  /* 120331a0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120331a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120331a4 mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 120331aa push edx */
  push32((uint32_t)(EDX));
  /* 120331ab call 0x12035700 */
  push32(0x120331b0u); f_12035700();
  /* 120331b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120331b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120331b5 jne 0x120331ed */
  if (!C.zf) goto L_120331ed;
  /* 120331b7 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 120331bc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 120331be mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
  /* 120331c3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120331c6 mov dword ptr [0x12052a70], ecx */
  w32((uint32_t)(0x12052a70), (ECX));
  /* 120331cc mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 120331d2 push edx */
  push32((uint32_t)(EDX));
  /* 120331d3 call 0x12029d90 */
  push32(0x120331d8u); f_12029d90();
  /* 120331d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120331db cmp eax, dword ptr [0x12052a5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12052a5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120331e1 jne 0x120331eb */
  if (!C.zf) goto L_120331eb;
  /* 120331e3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120331e6 mov dword ptr [0x12052a54], eax */
  w32((uint32_t)(0x12052a54), (EAX));
L_120331eb:;
  /* 120331eb jmp 0x1203321f */
  goto L_1203321f;
L_120331ed:;
  /* 120331ed mov ecx, dword ptr [0x12052a6c] */
  ECX = (r32((uint32_t)(0x12052a6c)));
  /* 120331f3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120331f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120331f8 jne 0x1203321f */
  if (!C.zf) goto L_1203321f;
  /* 120331fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120331fd push edx */
  push32((uint32_t)(EDX));
  /* 120331fe call 0x12033730 */
  push32(0x12033203u); f_12033730();
  /* 12033203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033208 je 0x1203321f */
  if (C.zf) goto L_1203321f;
  /* 1203320a mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 1203320f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12033211 mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
  /* 12033216 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12033219 mov dword ptr [0x12052a70], ecx */
  w32((uint32_t)(0x12052a70), (ECX));
L_1203321f:;
  /* 1203321f mov edx, dword ptr [0x12052a6c] */
  EDX = (r32((uint32_t)(0x12052a6c)));
  /* 12033225 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1203322b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033231 je 0x120333a1 */
  if (C.zf) goto L_120333a1;
  /* 12033237 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12033239 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1203323c push eax */
  push32((uint32_t)(EAX));
  /* 1203323d mov ecx, dword ptr [0x12052a60] */
  ECX = (r32((uint32_t)(0x12052a60)));
  /* 12033243 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12033245 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033247 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1203324d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033253 push ecx */
  push32((uint32_t)(ECX));
  /* 12033254 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12033257 push edx */
  push32((uint32_t)(EDX));
  /* 12033258 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x1203325eu);
  /* 1203325e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033260 jne 0x12033276 */
  if (!C.zf) goto L_12033276;
  /* 12033262 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
  /* 1203326c mov eax, 1 */
  EAX = (0x1u);
  /* 12033271 jmp 0x120333ae */
  goto L_120333ae;
L_12033276:;
  /* 12033276 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12033279 push eax */
  push32((uint32_t)(EAX));
  /* 1203327a mov ecx, dword ptr [0x12052a64] */
  ECX = (r32((uint32_t)(0x12052a64)));
  /* 12033280 push ecx */
  push32((uint32_t)(ECX));
  /* 12033281 call 0x12035630 */
  push32(0x12033286u); f_12035630();
  /* 12033286 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203328b jne 0x12033340 */
  if (!C.zf) goto L_12033340;
  /* 12033291 mov edx, dword ptr [0x12052a6c] */
  EDX = (r32((uint32_t)(0x12052a6c)));
  /* 12033297 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1203329a mov dword ptr [0x12052a6c], edx */
  w32((uint32_t)(0x12052a6c), (EDX));
  /* 120332a0 cmp dword ptr [0x12052a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120332a7 je 0x120332ca */
  if (C.zf) goto L_120332ca;
  /* 120332a9 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 120332ae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 120332b1 mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
  /* 120332b6 cmp dword ptr [0x12052a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120332bd jne 0x120332c8 */
  if (!C.zf) goto L_120332c8;
  /* 120332bf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120332c2 mov dword ptr [0x12052a54], ecx */
  w32((uint32_t)(0x12052a54), (ECX));
L_120332c8:;
  /* 120332c8 jmp 0x1203333e */
  goto L_1203333e;
L_120332ca:;
  /* 120332ca cmp dword ptr [0x12052a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120332d1 je 0x1203331f */
  if (C.zf) goto L_1203331f;
  /* 120332d3 mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 120332d9 push edx */
  push32((uint32_t)(EDX));
  /* 120332da call 0x12029d90 */
  push32(0x120332dfu); f_12029d90();
  /* 120332df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120332e2 cmp eax, dword ptr [0x12052a5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12052a5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120332e8 jne 0x1203331f */
  if (!C.zf) goto L_1203331f;
  /* 120332ea push 1 */
  push32((uint32_t)(0x1u));
  /* 120332ec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120332ef push eax */
  push32((uint32_t)(EAX));
  /* 120332f0 call 0x12033780 */
  push32(0x120332f5u); f_12033780();
  /* 120332f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120332f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120332fa je 0x1203331d */
  if (C.zf) goto L_1203331d;
  /* 120332fc mov ecx, dword ptr [0x12052a6c] */
  ECX = (r32((uint32_t)(0x12052a6c)));
  /* 12033302 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12033305 mov dword ptr [0x12052a6c], ecx */
  w32((uint32_t)(0x12052a6c), (ECX));
  /* 1203330b cmp dword ptr [0x12052a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033312 jne 0x1203331d */
  if (!C.zf) goto L_1203331d;
  /* 12033314 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12033317 mov dword ptr [0x12052a54], edx */
  w32((uint32_t)(0x12052a54), (EDX));
L_1203331d:;
  /* 1203331d jmp 0x1203333e */
  goto L_1203333e;
L_1203331f:;
  /* 1203331f mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 12033324 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12033327 mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
  /* 1203332c cmp dword ptr [0x12052a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033333 jne 0x1203333e */
  if (!C.zf) goto L_1203333e;
  /* 12033335 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12033338 mov dword ptr [0x12052a54], ecx */
  w32((uint32_t)(0x12052a54), (ECX));
L_1203333e:;
  /* 1203333e jmp 0x120333a1 */
  goto L_120333a1;
L_12033340:;
  /* 12033340 cmp dword ptr [0x12052a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033347 jne 0x120333a1 */
  if (!C.zf) goto L_120333a1;
  /* 12033349 cmp dword ptr [0x12052a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033350 je 0x120333a1 */
  if (C.zf) goto L_120333a1;
  /* 12033352 mov edx, dword ptr [0x12052a5c] */
  EDX = (r32((uint32_t)(0x12052a5c)));
  /* 12033358 push edx */
  push32((uint32_t)(EDX));
  /* 12033359 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1203335c push eax */
  push32((uint32_t)(EAX));
  /* 1203335d mov ecx, dword ptr [0x12052a64] */
  ECX = (r32((uint32_t)(0x12052a64)));
  /* 12033363 push ecx */
  push32((uint32_t)(ECX));
  /* 12033364 call 0x12035700 */
  push32(0x12033369u); f_12035700();
  /* 12033369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203336c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203336e jne 0x120333a1 */
  if (!C.zf) goto L_120333a1;
  /* 12033370 push 0 */
  push32((uint32_t)(0x0u));
  /* 12033372 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12033375 push edx */
  push32((uint32_t)(EDX));
  /* 12033376 call 0x12033780 */
  push32(0x1203337bu); f_12033780();
  /* 1203337b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203337e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033380 je 0x120333a1 */
  if (C.zf) goto L_120333a1;
  /* 12033382 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 12033387 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1203338a mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
  /* 1203338f cmp dword ptr [0x12052a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033396 jne 0x120333a1 */
  if (!C.zf) goto L_120333a1;
  /* 12033398 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203339b mov dword ptr [0x12052a54], ecx */
  w32((uint32_t)(0x12052a54), (ECX));
L_120333a1:;
  /* 120333a1 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 120333a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120333a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120333ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120333ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120333ae:;
  /* 120333ae mov esp, ebp */
  ESP = (EBP);
  /* 120333b0 pop ebp */
  EBP = (pop32());
  /* 120333b1 ret 4 */
  ESPCHK(0x12033090u, _esp0);
  ESP += 8; return;
}

/* FUN_100133c0 @ 0x120333c0 (116 bytes, 33 insns) */
void f_120333c0(void) {
  FTRACE(0x120333c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120333c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120333c1 mov ebp, esp */
  EBP = (ESP);
  /* 120333c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120333c4 mov eax, dword ptr [0x12052a64] */
  EAX = (r32((uint32_t)(0x12052a64)));
  /* 120333c9 push eax */
  push32((uint32_t)(EAX));
  /* 120333ca call 0x12029d90 */
  push32(0x120333cfu); f_12029d90();
  /* 120333cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120333d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120333d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120333d7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120333da mov dword ptr [0x12052a60], ecx */
  w32((uint32_t)(0x12052a60), (ECX));
  /* 120333e0 cmp dword ptr [0x12052a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120333e7 je 0x120333f2 */
  if (C.zf) goto L_120333f2;
  /* 120333e9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120333f0 jmp 0x12033404 */
  goto L_12033404;
L_120333f2:;
  /* 120333f2 mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 120333f8 push edx */
  push32((uint32_t)(EDX));
  /* 120333f9 call 0x12033a70 */
  push32(0x120333feu); f_12033a70();
  /* 120333fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033401 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12033404:;
  /* 12033404 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033407 mov dword ptr [0x12052a5c], eax */
  w32((uint32_t)(0x12052a5c), (EAX));
  /* 1203340c push 1 */
  push32((uint32_t)(0x1u));
  /* 1203340e push 0x12033440 */
  push32((uint32_t)(0x12033440u));
  /* 12033413 call dword ptr [0x12055304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055304))), 0x12033419u);
  /* 12033419 mov ecx, dword ptr [0x12052a6c] */
  ECX = (r32((uint32_t)(0x12052a6c)));
  /* 1203341f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12033422 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12033424 jne 0x12033430 */
  if (!C.zf) goto L_12033430;
  /* 12033426 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
L_12033430:;
  /* 12033430 mov esp, ebp */
  ESP = (EBP);
  /* 12033432 pop ebp */
  EBP = (pop32());
  /* 12033433 ret  */
  ESPCHK(0x120333c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013440 @ 0x12033440 (287 bytes, 86 insns) */
void f_12033440(void) {
  FTRACE(0x12033440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033440 push ebp */
  push32((uint32_t)(EBP));
  /* 12033441 mov ebp, esp */
  EBP = (ESP);
  /* 12033443 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033449 push eax */
  push32((uint32_t)(EAX));
  /* 1203344a call 0x120339f0 */
  push32(0x1203344fu); f_120339f0();
  /* 1203344f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033452 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12033455 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12033457 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1203345a push ecx */
  push32((uint32_t)(ECX));
  /* 1203345b mov edx, dword ptr [0x12052a60] */
  EDX = (r32((uint32_t)(0x12052a60)));
  /* 12033461 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12033463 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033465 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1203346b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033471 push edx */
  push32((uint32_t)(EDX));
  /* 12033472 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12033475 push eax */
  push32((uint32_t)(EAX));
  /* 12033476 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x1203347cu);
  /* 1203347c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203347e jne 0x12033494 */
  if (!C.zf) goto L_12033494;
  /* 12033480 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
  /* 1203348a mov eax, 1 */
  EAX = (0x1u);
  /* 1203348f jmp 0x12033559 */
  goto L_12033559;
L_12033494:;
  /* 12033494 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12033497 push ecx */
  push32((uint32_t)(ECX));
  /* 12033498 mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 1203349e push edx */
  push32((uint32_t)(EDX));
  /* 1203349f call 0x12035630 */
  push32(0x120334a4u); f_12035630();
  /* 120334a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120334a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120334a9 jne 0x120334e9 */
  if (!C.zf) goto L_120334e9;
  /* 120334ab cmp dword ptr [0x12052a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120334b2 jne 0x120334c6 */
  if (!C.zf) goto L_120334c6;
  /* 120334b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120334b6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120334b9 push eax */
  push32((uint32_t)(EAX));
  /* 120334ba call 0x12033780 */
  push32(0x120334bfu); f_12033780();
  /* 120334bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120334c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120334c4 je 0x120334e7 */
  if (C.zf) goto L_120334e7;
L_120334c6:;
  /* 120334c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120334c9 mov dword ptr [0x12052a70], ecx */
  w32((uint32_t)(0x12052a70), (ECX));
  /* 120334cf mov edx, dword ptr [0x12052a70] */
  EDX = (r32((uint32_t)(0x12052a70)));
  /* 120334d5 mov dword ptr [0x12052a54], edx */
  w32((uint32_t)(0x12052a54), (EDX));
  /* 120334db mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 120334e0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 120334e2 mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
L_120334e7:;
  /* 120334e7 jmp 0x1203354c */
  goto L_1203354c;
L_120334e9:;
  /* 120334e9 cmp dword ptr [0x12052a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120334f0 jne 0x1203354c */
  if (!C.zf) goto L_1203354c;
  /* 120334f2 cmp dword ptr [0x12052a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120334f9 je 0x1203354c */
  if (C.zf) goto L_1203354c;
  /* 120334fb mov ecx, dword ptr [0x12052a5c] */
  ECX = (r32((uint32_t)(0x12052a5c)));
  /* 12033501 push ecx */
  push32((uint32_t)(ECX));
  /* 12033502 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12033505 push edx */
  push32((uint32_t)(EDX));
  /* 12033506 mov eax, dword ptr [0x12052a64] */
  EAX = (r32((uint32_t)(0x12052a64)));
  /* 1203350b push eax */
  push32((uint32_t)(EAX));
  /* 1203350c call 0x12035700 */
  push32(0x12033511u); f_12035700();
  /* 12033511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033516 jne 0x1203354c */
  if (!C.zf) goto L_1203354c;
  /* 12033518 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203351a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203351d push ecx */
  push32((uint32_t)(ECX));
  /* 1203351e call 0x12033780 */
  push32(0x12033523u); f_12033780();
  /* 12033523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033528 je 0x1203354c */
  if (C.zf) goto L_1203354c;
  /* 1203352a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203352d mov dword ptr [0x12052a70], edx */
  w32((uint32_t)(0x12052a70), (EDX));
  /* 12033533 mov eax, dword ptr [0x12052a70] */
  EAX = (r32((uint32_t)(0x12052a70)));
  /* 12033538 mov dword ptr [0x12052a54], eax */
  w32((uint32_t)(0x12052a54), (EAX));
  /* 1203353d mov ecx, dword ptr [0x12052a6c] */
  ECX = (r32((uint32_t)(0x12052a6c)));
  /* 12033543 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12033546 mov dword ptr [0x12052a6c], ecx */
  w32((uint32_t)(0x12052a6c), (ECX));
L_1203354c:;
  /* 1203354c mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 12033551 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12033554 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12033556 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033558 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12033559:;
  /* 12033559 mov esp, ebp */
  ESP = (EBP);
  /* 1203355b pop ebp */
  EBP = (pop32());
  /* 1203355c ret 4 */
  ESPCHK(0x12033440u, _esp0);
  ESP += 8; return;
}

/* FUN_10013560 @ 0x12033560 (69 bytes, 20 insns) */
void f_12033560(void) {
  FTRACE(0x12033560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033560 push ebp */
  push32((uint32_t)(EBP));
  /* 12033561 mov ebp, esp */
  EBP = (ESP);
  /* 12033563 mov eax, dword ptr [0x12052a68] */
  EAX = (r32((uint32_t)(0x12052a68)));
  /* 12033568 push eax */
  push32((uint32_t)(EAX));
  /* 12033569 call 0x12029d90 */
  push32(0x1203356eu); f_12029d90();
  /* 1203356e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033571 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12033573 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033576 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12033579 mov dword ptr [0x12052a58], ecx */
  w32((uint32_t)(0x12052a58), (ECX));
  /* 1203357f push 1 */
  push32((uint32_t)(0x1u));
  /* 12033581 push 0x120335b0 */
  push32((uint32_t)(0x120335b0u));
  /* 12033586 call dword ptr [0x12055304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055304))), 0x1203358cu);
  /* 1203358c mov edx, dword ptr [0x12052a6c] */
  EDX = (r32((uint32_t)(0x12052a6c)));
  /* 12033592 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12033595 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12033597 jne 0x120335a3 */
  if (!C.zf) goto L_120335a3;
  /* 12033599 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
L_120335a3:;
  /* 120335a3 pop ebp */
  EBP = (pop32());
  /* 120335a4 ret  */
  ESPCHK(0x12033560u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x120335b0 (172 bytes, 54 insns) */
void f_120335b0(void) {
  FTRACE(0x120335b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120335b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120335b1 mov ebp, esp */
  EBP = (ESP);
  /* 120335b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120335b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120335b9 push eax */
  push32((uint32_t)(EAX));
  /* 120335ba call 0x120339f0 */
  push32(0x120335bfu); f_120339f0();
  /* 120335bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120335c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 120335c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120335c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 120335ca push ecx */
  push32((uint32_t)(ECX));
  /* 120335cb mov edx, dword ptr [0x12052a58] */
  EDX = (r32((uint32_t)(0x12052a58)));
  /* 120335d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120335d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120335d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 120335db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120335e1 push edx */
  push32((uint32_t)(EDX));
  /* 120335e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 120335e5 push eax */
  push32((uint32_t)(EAX));
  /* 120335e6 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x120335ecu);
  /* 120335ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120335ee jne 0x12033601 */
  if (!C.zf) goto L_12033601;
  /* 120335f0 mov dword ptr [0x12052a6c], 0 */
  w32((uint32_t)(0x12052a6c), (0x0u));
  /* 120335fa mov eax, 1 */
  EAX = (0x1u);
  /* 120335ff jmp 0x12033656 */
  goto L_12033656;
L_12033601:;
  /* 12033601 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12033604 push ecx */
  push32((uint32_t)(ECX));
  /* 12033605 mov edx, dword ptr [0x12052a68] */
  EDX = (r32((uint32_t)(0x12052a68)));
  /* 1203360b push edx */
  push32((uint32_t)(EDX));
  /* 1203360c call 0x12035630 */
  push32(0x12033611u); f_12035630();
  /* 12033611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033616 jne 0x12033649 */
  if (!C.zf) goto L_12033649;
  /* 12033618 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203361b push eax */
  push32((uint32_t)(EAX));
  /* 1203361c call 0x12033730 */
  push32(0x12033621u); f_12033730();
  /* 12033621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033626 je 0x12033649 */
  if (C.zf) goto L_12033649;
  /* 12033628 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1203362b mov dword ptr [0x12052a70], ecx */
  w32((uint32_t)(0x12052a70), (ECX));
  /* 12033631 mov edx, dword ptr [0x12052a70] */
  EDX = (r32((uint32_t)(0x12052a70)));
  /* 12033637 mov dword ptr [0x12052a54], edx */
  w32((uint32_t)(0x12052a54), (EDX));
  /* 1203363d mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 12033642 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12033644 mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
L_12033649:;
  /* 12033649 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 1203364e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12033651 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12033653 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033655 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12033656:;
  /* 12033656 mov esp, ebp */
  ESP = (EBP);
  /* 12033658 pop ebp */
  EBP = (pop32());
  /* 12033659 ret 4 */
  ESPCHK(0x120335b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10013660 @ 0x12033660 (43 bytes, 11 insns) */
void f_12033660(void) {
  FTRACE(0x12033660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033660 push ebp */
  push32((uint32_t)(EBP));
  /* 12033661 mov ebp, esp */
  EBP = (ESP);
  /* 12033663 mov eax, dword ptr [0x12052a6c] */
  EAX = (r32((uint32_t)(0x12052a6c)));
  /* 12033668 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1203366d mov dword ptr [0x12052a6c], eax */
  w32((uint32_t)(0x12052a6c), (EAX));
  /* 12033672 call dword ptr [0x12055300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055300))), 0x12033678u);
  /* 12033678 mov dword ptr [0x12052a70], eax */
  w32((uint32_t)(0x12052a70), (EAX));
  /* 1203367d mov ecx, dword ptr [0x12052a70] */
  ECX = (r32((uint32_t)(0x12052a70)));
  /* 12033683 mov dword ptr [0x12052a54], ecx */
  w32((uint32_t)(0x12052a54), (ECX));
  /* 12033689 pop ebp */
  EBP = (pop32());
  /* 1203368a ret  */
  ESPCHK(0x12033660u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x12033690 (155 bytes, 57 insns) */
void f_12033690(void) {
  FTRACE(0x12033690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033690 push ebp */
  push32((uint32_t)(EBP));
  /* 12033691 mov ebp, esp */
  EBP = (ESP);
  /* 12033693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033696 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203369a je 0x120336bb */
  if (C.zf) goto L_120336bb;
  /* 1203369c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203369f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120336a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120336a4 je 0x120336bb */
  if (C.zf) goto L_120336bb;
  /* 120336a6 push 0x1204ec6c */
  push32((uint32_t)(0x1204ec6cu));
  /* 120336ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120336ae push edx */
  push32((uint32_t)(EDX));
  /* 120336af call 0x12032bf0 */
  push32(0x120336b4u); f_12032bf0();
  /* 120336b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120336b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120336b9 jne 0x120336e3 */
  if (!C.zf) goto L_120336e3;
L_120336bb:;
  /* 120336bb push 8 */
  push32((uint32_t)(0x8u));
  /* 120336bd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 120336c0 push eax */
  push32((uint32_t)(EAX));
  /* 120336c1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 120336c6 mov ecx, dword ptr [0x12052a70] */
  ECX = (r32((uint32_t)(0x12052a70)));
  /* 120336cc push ecx */
  push32((uint32_t)(ECX));
  /* 120336cd call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x120336d3u);
  /* 120336d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120336d5 jne 0x120336db */
  if (!C.zf) goto L_120336db;
  /* 120336d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120336d9 jmp 0x12033727 */
  goto L_12033727;
L_120336db:;
  /* 120336db lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 120336de mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120336e1 jmp 0x1203371b */
  goto L_1203371b;
L_120336e3:;
  /* 120336e3 push 0x1204ec68 */
  push32((uint32_t)(0x1204ec68u));
  /* 120336e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120336eb push eax */
  push32((uint32_t)(EAX));
  /* 120336ec call 0x12032bf0 */
  push32(0x120336f1u); f_12032bf0();
  /* 120336f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120336f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120336f6 jne 0x1203371b */
  if (!C.zf) goto L_1203371b;
  /* 120336f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 120336fa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 120336fd push ecx */
  push32((uint32_t)(ECX));
  /* 120336fe push 0xb */
  push32((uint32_t)(0xbu));
  /* 12033700 mov edx, dword ptr [0x12052a70] */
  EDX = (r32((uint32_t)(0x12052a70)));
  /* 12033706 push edx */
  push32((uint32_t)(EDX));
  /* 12033707 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x1203370du);
  /* 1203370d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203370f jne 0x12033715 */
  if (!C.zf) goto L_12033715;
  /* 12033711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12033713 jmp 0x12033727 */
  goto L_12033727;
L_12033715:;
  /* 12033715 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12033718 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1203371b:;
  /* 1203371b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203371e push ecx */
  push32((uint32_t)(ECX));
  /* 1203371f call 0x12035810 */
  push32(0x12033724u); f_12035810();
  /* 12033724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12033727:;
  /* 12033727 mov esp, ebp */
  ESP = (EBP);
  /* 12033729 pop ebp */
  EBP = (pop32());
  /* 1203372a ret  */
  ESPCHK(0x12033690u, _esp0);
  ESP += 4; return;
}

/* FUN_10013730 @ 0x12033730 (79 bytes, 26 insns) */
void f_12033730(void) {
  FTRACE(0x12033730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033730 push ebp */
  push32((uint32_t)(EBP));
  /* 12033731 mov ebp, esp */
  EBP = (ESP);
  /* 12033733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033736 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1203373a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1203373e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12033745 jmp 0x12033750 */
  goto L_12033750;
L_12033747:;
  /* 12033747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203374a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203374d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12033750:;
  /* 12033750 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033754 jae 0x12033776 */
  if (!C.cf) goto L_12033776;
  /* 12033756 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033759 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1203375f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12033762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12033764 mov cx, word ptr [eax*2 + 0x120519c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x120519c4)));
  /* 1203376c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203376e jne 0x12033774 */
  if (!C.zf) goto L_12033774;
  /* 12033770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12033772 jmp 0x1203377b */
  goto L_1203377b;
L_12033774:;
  /* 12033774 jmp 0x12033747 */
  goto L_12033747;
L_12033776:;
  /* 12033776 mov eax, 1 */
  EAX = (0x1u);
L_1203377b:;
  /* 1203377b mov esp, ebp */
  ESP = (EBP);
  /* 1203377d pop ebp */
  EBP = (pop32());
  /* 1203377e ret  */
  ESPCHK(0x12033730u, _esp0);
  ESP += 4; return;
}

/* FUN_10013780 @ 0x12033780 (135 bytes, 48 insns) */
void f_12033780(void) {
  FTRACE(0x12033780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033780 push ebp */
  push32((uint32_t)(EBP));
  /* 12033781 mov ebp, esp */
  EBP = (ESP);
  /* 12033783 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033786 push esi */
  push32((uint32_t)(ESI));
  /* 12033787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203378a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1203378f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12033794 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12033799 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1203379c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120337a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120337a4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 120337a6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 120337a9 push ecx */
  push32((uint32_t)(ECX));
  /* 120337aa push 1 */
  push32((uint32_t)(0x1u));
  /* 120337ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120337af push edx */
  push32((uint32_t)(EDX));
  /* 120337b0 call dword ptr [0x12052a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x12052a74))), 0x120337b6u);
  /* 120337b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120337b8 jne 0x120337be */
  if (!C.zf) goto L_120337be;
  /* 120337ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120337bc jmp 0x12033802 */
  goto L_12033802;
L_120337be:;
  /* 120337be lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 120337c1 push eax */
  push32((uint32_t)(EAX));
  /* 120337c2 call 0x120339f0 */
  push32(0x120337c7u); f_120339f0();
  /* 120337c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120337ca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120337cd je 0x120337fd */
  if (C.zf) goto L_120337fd;
  /* 120337cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120337d3 je 0x120337fd */
  if (C.zf) goto L_120337fd;
  /* 120337d5 mov ecx, dword ptr [0x12052a64] */
  ECX = (r32((uint32_t)(0x12052a64)));
  /* 120337db push ecx */
  push32((uint32_t)(ECX));
  /* 120337dc call 0x12033a70 */
  push32(0x120337e1u); f_12033a70();
  /* 120337e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120337e4 mov esi, eax */
  ESI = (EAX);
  /* 120337e6 mov edx, dword ptr [0x12052a64] */
  EDX = (r32((uint32_t)(0x12052a64)));
  /* 120337ec push edx */
  push32((uint32_t)(EDX));
  /* 120337ed call 0x12029d90 */
  push32(0x120337f2u); f_12029d90();
  /* 120337f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120337f5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120337f7 jne 0x120337fd */
  if (!C.zf) goto L_120337fd;
  /* 120337f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120337fb jmp 0x12033802 */
  goto L_12033802;
L_120337fd:;
  /* 120337fd mov eax, 1 */
  EAX = (0x1u);
L_12033802:;
  /* 12033802 pop esi */
  ESI = (pop32());
  /* 12033803 mov esp, ebp */
  ESP = (EBP);
  /* 12033805 pop ebp */
  EBP = (pop32());
  /* 12033806 ret  */
  ESPCHK(0x12033780u, _esp0);
  ESP += 4; return;
}

/* FUN_10013810 @ 0x12033810 (77 bytes, 18 insns) */
void f_12033810(void) {
  FTRACE(0x12033810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033810 push ebp */
  push32((uint32_t)(EBP));
  /* 12033811 mov ebp, esp */
  EBP = (ESP);
  /* 12033813 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033819 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12033823 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12033829 push eax */
  push32((uint32_t)(EAX));
  /* 1203382a call dword ptr [0x120552fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552fc))), 0x12033830u);
  /* 12033830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033832 je 0x12033849 */
  if (C.zf) goto L_12033849;
  /* 12033834 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203383b jne 0x12033849 */
  if (!C.zf) goto L_12033849;
  /* 1203383d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12033847 jmp 0x12033853 */
  goto L_12033853;
L_12033849:;
  /* 12033849 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12033853:;
  /* 12033853 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12033859 mov esp, ebp */
  ESP = (EBP);
  /* 1203385b pop ebp */
  EBP = (pop32());
  /* 1203385c ret  */
  ESPCHK(0x12033810u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12033860 (388 bytes, 118 insns) */
void f_12033860(void) {
  FTRACE(0x12033860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033860 push ebp */
  push32((uint32_t)(EBP));
  /* 12033861 mov ebp, esp */
  EBP = (ESP);
  /* 12033863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033866 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1203386d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12033874 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1203387b:;
  /* 1203387b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1203387e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033881 jg 0x120339c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_120339c8;
  /* 12033887 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1203388a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203388d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1203388e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033890 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12033892 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12033895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033898 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203389b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203389e cmp edx, dword ptr [ecx + 0x12051520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12051520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338a4 jne 0x1203399e */
  if (!C.zf) goto L_1203399e;
  /* 120338aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120338ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120338b0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338b4 ja 0x120338d7 */
  if ((!C.cf&&!C.zf)) goto L_120338d7;
  /* 120338b6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338ba je 0x12033949 */
  if (C.zf) goto L_12033949;
  /* 120338c0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338c4 je 0x120338f4 */
  if (C.zf) goto L_120338f4;
  /* 120338c6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338ca je 0x12033916 */
  if (C.zf) goto L_12033916;
  /* 120338cc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338d0 je 0x12033938 */
  if (C.zf) goto L_12033938;
  /* 120338d2 jmp 0x12033968 */
  goto L_12033968;
L_120338d7:;
  /* 120338d7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338de je 0x12033905 */
  if (C.zf) goto L_12033905;
  /* 120338e0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338e7 je 0x12033927 */
  if (C.zf) goto L_12033927;
  /* 120338e9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120338f0 je 0x1203395a */
  if (C.zf) goto L_1203395a;
  /* 120338f2 jmp 0x12033968 */
  goto L_12033968;
L_120338f4:;
  /* 120338f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120338f7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120338fa add ecx, 0x12051524 */
  { uint32_t _a=(ECX),_b=(0x12051524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033900 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12033903 jmp 0x12033968 */
  goto L_12033968;
L_12033905:;
  /* 12033905 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033908 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203390b mov eax, dword ptr [edx + 0x1205152c] */
  EAX = (r32((uint32_t)(EDX + 0x1205152c)));
  /* 12033911 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12033914 jmp 0x12033968 */
  goto L_12033968;
L_12033916:;
  /* 12033916 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033919 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203391c add ecx, 0x12051530 */
  { uint32_t _a=(ECX),_b=(0x12051530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033922 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12033925 jmp 0x12033968 */
  goto L_12033968;
L_12033927:;
  /* 12033927 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203392a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203392d mov eax, dword ptr [edx + 0x12051534] */
  EAX = (r32((uint32_t)(EDX + 0x12051534)));
  /* 12033933 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12033936 jmp 0x12033968 */
  goto L_12033968;
L_12033938:;
  /* 12033938 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203393b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203393e add ecx, 0x12051538 */
  { uint32_t _a=(ECX),_b=(0x12051538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033944 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12033947 jmp 0x12033968 */
  goto L_12033968;
L_12033949:;
  /* 12033949 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203394c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203394f add edx, 0x1205153c */
  { uint32_t _a=(EDX),_b=(0x1205153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033955 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12033958 jmp 0x12033968 */
  goto L_12033968;
L_1203395a:;
  /* 1203395a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203395d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12033960 add eax, 0x12051544 */
  { uint32_t _a=(EAX),_b=(0x12051544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033965 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12033968:;
  /* 12033968 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203396c je 0x12033974 */
  if (C.zf) goto L_12033974;
  /* 1203396e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033972 jge 0x12033976 */
  if ((C.sf==C.of)) goto L_12033976;
L_12033974:;
  /* 12033974 jmp 0x120339c8 */
  goto L_120339c8;
L_12033976:;
  /* 12033976 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12033979 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203397c push ecx */
  push32((uint32_t)(ECX));
  /* 1203397d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12033980 push edx */
  push32((uint32_t)(EDX));
  /* 12033981 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12033984 push eax */
  push32((uint32_t)(EAX));
  /* 12033985 call 0x1202a780 */
  push32(0x1203398au); f_1202a780();
  /* 1203398a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203398d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12033990 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033993 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12033997 mov eax, 1 */
  EAX = (0x1u);
  /* 1203399c jmp 0x120339de */
  goto L_120339de;
L_1203399e:;
  /* 1203399e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120339a1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120339a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120339a7 cmp eax, dword ptr [edx + 0x12051520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12051520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120339ad jae 0x120339ba */
  if (!C.cf) goto L_120339ba;
  /* 120339af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120339b2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120339b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120339b8 jmp 0x120339c3 */
  goto L_120339c3;
L_120339ba:;
  /* 120339ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120339bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120339c0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120339c3:;
  /* 120339c3 jmp 0x1203387b */
  goto L_1203387b;
L_120339c8:;
  /* 120339c8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120339cb push eax */
  push32((uint32_t)(EAX));
  /* 120339cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120339cf push ecx */
  push32((uint32_t)(ECX));
  /* 120339d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120339d3 push edx */
  push32((uint32_t)(EDX));
  /* 120339d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120339d7 push eax */
  push32((uint32_t)(EAX));
  /* 120339d8 call dword ptr [0x12055308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055308))), 0x120339deu);
L_120339de:;
  /* 120339de mov esp, ebp */
  ESP = (EBP);
  /* 120339e0 pop ebp */
  EBP = (pop32());
  /* 120339e1 ret 0x10 */
  ESPCHK(0x12033860u, _esp0);
  ESP += 20; return;
}

/* FUN_100139f0 @ 0x120339f0 (118 bytes, 42 insns) */
void f_120339f0(void) {
  FTRACE(0x120339f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120339f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120339f1 mov ebp, esp */
  EBP = (ESP);
  /* 120339f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120339f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120339fd:;
  /* 120339fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033a00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12033a02 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12033a05 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12033a09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033a0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033a0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12033a12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12033a14 je 0x12033a5f */
  if (C.zf) goto L_12033a5f;
  /* 12033a16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12033a1a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033a1d jl 0x12033a32 */
  if ((C.sf!=C.of)) goto L_12033a32;
  /* 12033a1f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12033a23 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033a26 jg 0x12033a32 */
  if ((!C.zf&&C.sf==C.of)) goto L_12033a32;
  /* 12033a28 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12033a2b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12033a2d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12033a30 jmp 0x12033a4c */
  goto L_12033a4c;
L_12033a32:;
  /* 12033a32 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12033a36 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033a39 jl 0x12033a4c */
  if ((C.sf!=C.of)) goto L_12033a4c;
  /* 12033a3b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12033a3f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033a42 jg 0x12033a4c */
  if ((!C.zf&&C.sf==C.of)) goto L_12033a4c;
  /* 12033a44 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12033a47 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12033a49 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12033a4c:;
  /* 12033a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033a4f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12033a52 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12033a56 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12033a5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12033a5d jmp 0x120339fd */
  goto L_120339fd;
L_12033a5f:;
  /* 12033a5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033a62 mov esp, ebp */
  ESP = (EBP);
  /* 12033a64 pop ebp */
  EBP = (pop32());
  /* 12033a65 ret  */
  ESPCHK(0x120339f0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12033a70 (101 bytes, 36 insns) */
void f_12033a70(void) {
  FTRACE(0x12033a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12033a71 mov ebp, esp */
  EBP = (ESP);
  /* 12033a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033a76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12033a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033a80 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12033a82 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12033a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033a88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033a8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12033a8e:;
  /* 12033a8e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12033a92 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033a95 jl 0x12033aa0 */
  if ((C.sf!=C.of)) goto L_12033aa0;
  /* 12033a97 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12033a9b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033a9e jle 0x12033ab2 */
  if ((C.zf||C.sf!=C.of)) goto L_12033ab2;
L_12033aa0:;
  /* 12033aa0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12033aa4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033aa7 jl 0x12033ace */
  if ((C.sf!=C.of)) goto L_12033ace;
  /* 12033aa9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12033aad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033ab0 jg 0x12033ace */
  if ((!C.zf&&C.sf==C.of)) goto L_12033ace;
L_12033ab2:;
  /* 12033ab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12033ab5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ab8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12033abb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033abe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12033ac0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12033ac3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033ac6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ac9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12033acc jmp 0x12033a8e */
  goto L_12033a8e;
L_12033ace:;
  /* 12033ace mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12033ad1 mov esp, ebp */
  ESP = (EBP);
  /* 12033ad3 pop ebp */
  EBP = (pop32());
  /* 12033ad4 ret  */
  ESPCHK(0x12033a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ae0 @ 0x12033ae0 (122 bytes, 39 insns) */
void f_12033ae0(void) {
  FTRACE(0x12033ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12033ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12033ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12033ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033ae7 cmp eax, dword ptr [0x120542fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120542fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033aed jae 0x12033b11 */
  if (!C.cf) goto L_12033b11;
  /* 12033aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033af2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12033af5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033af8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12033afb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12033afe mov eax, dword ptr [ecx*4 + 0x120541c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120541c0)));
  /* 12033b05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12033b0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12033b0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12033b0f jne 0x12033b2c */
  if (!C.zf) goto L_12033b2c;
L_12033b11:;
  /* 12033b11 call 0x1202ee30 */
  push32(0x12033b16u); f_1202ee30();
  /* 12033b16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12033b1c call 0x1202ee40 */
  push32(0x12033b21u); f_1202ee40();
  /* 12033b21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12033b27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12033b2a jmp 0x12033b56 */
  goto L_12033b56;
L_12033b2c:;
  /* 12033b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033b2f push edx */
  push32((uint32_t)(EDX));
  /* 12033b30 call 0x12030650 */
  push32(0x12033b35u); f_12030650();
  /* 12033b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033b3b push eax */
  push32((uint32_t)(EAX));
  /* 12033b3c call 0x12033b60 */
  push32(0x12033b41u); f_12033b60();
  /* 12033b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033b44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12033b47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033b4a push ecx */
  push32((uint32_t)(ECX));
  /* 12033b4b call 0x120306e0 */
  push32(0x12033b50u); f_120306e0();
  /* 12033b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033b53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12033b56:;
  /* 12033b56 mov esp, ebp */
  ESP = (EBP);
  /* 12033b58 pop ebp */
  EBP = (pop32());
  /* 12033b59 ret  */
  ESPCHK(0x12033ae0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12033b60 (170 bytes, 59 insns) */
void f_12033b60(void) {
  FTRACE(0x12033b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12033b61 mov ebp, esp */
  EBP = (ESP);
  /* 12033b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12033b64 push esi */
  push32((uint32_t)(ESI));
  /* 12033b65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033b68 push eax */
  push32((uint32_t)(EAX));
  /* 12033b69 call 0x120304d0 */
  push32(0x12033b6eu); f_120304d0();
  /* 12033b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033b71 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033b74 je 0x12033bb3 */
  if (C.zf) goto L_12033bb3;
  /* 12033b76 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033b7a je 0x12033b82 */
  if (C.zf) goto L_12033b82;
  /* 12033b7c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033b80 jne 0x12033b9c */
  if (!C.zf) goto L_12033b9c;
L_12033b82:;
  /* 12033b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 12033b84 call 0x120304d0 */
  push32(0x12033b89u); f_120304d0();
  /* 12033b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033b8c mov esi, eax */
  ESI = (EAX);
  /* 12033b8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12033b90 call 0x120304d0 */
  push32(0x12033b95u); f_120304d0();
  /* 12033b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033b98 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033b9a je 0x12033bb3 */
  if (C.zf) goto L_12033bb3;
L_12033b9c:;
  /* 12033b9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033b9f push ecx */
  push32((uint32_t)(ECX));
  /* 12033ba0 call 0x120304d0 */
  push32(0x12033ba5u); f_120304d0();
  /* 12033ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ba8 push eax */
  push32((uint32_t)(EAX));
  /* 12033ba9 call dword ptr [0x120552f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f8))), 0x12033bafu);
  /* 12033baf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033bb1 je 0x12033bbc */
  if (C.zf) goto L_12033bbc;
L_12033bb3:;
  /* 12033bb3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12033bba jmp 0x12033bc5 */
  goto L_12033bc5;
L_12033bbc:;
  /* 12033bbc call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x12033bc2u);
  /* 12033bc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12033bc5:;
  /* 12033bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033bc8 push edx */
  push32((uint32_t)(EDX));
  /* 12033bc9 call 0x120303f0 */
  push32(0x12033bceu); f_120303f0();
  /* 12033bce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033bd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033bd4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12033bd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033bda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12033bdd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12033be0 mov edx, dword ptr [eax*4 + 0x120541c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120541c0)));
  /* 12033be7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12033bec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033bf0 je 0x12033c03 */
  if (C.zf) goto L_12033c03;
  /* 12033bf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12033bf6 call 0x1202ed90 */
  push32(0x12033bfbu); f_1202ed90();
  /* 12033bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033bfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12033c01 jmp 0x12033c05 */
  goto L_12033c05;
L_12033c03:;
  /* 12033c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12033c05:;
  /* 12033c05 pop esi */
  ESI = (pop32());
  /* 12033c06 mov esp, ebp */
  ESP = (EBP);
  /* 12033c08 pop ebp */
  EBP = (pop32());
  /* 12033c09 ret  */
  ESPCHK(0x12033b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x12033c10 (146 bytes, 52 insns) */
void f_12033c10(void) {
  FTRACE(0x12033c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12033c11 mov ebp, esp */
  EBP = (ESP);
  /* 12033c13 push ebx */
  push32((uint32_t)(EBX));
  /* 12033c14 push esi */
  push32((uint32_t)(ESI));
  /* 12033c15 push edi */
  push32((uint32_t)(EDI));
L_12033c16:;
  /* 12033c16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033c1a jne 0x12033c3a */
  if (!C.zf) goto L_12033c3a;
  /* 12033c1c push 0x1204e5a8 */
  push32((uint32_t)(0x1204e5a8u));
  /* 12033c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12033c23 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12033c25 push 0x1204ec70 */
  push32((uint32_t)(0x1204ec70u));
  /* 12033c2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12033c2c call 0x12026020 */
  push32(0x12033c31u); f_12026020();
  /* 12033c31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033c34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033c37 jne 0x12033c3a */
  if (!C.zf) goto L_12033c3a;
  /* 12033c39 int3  */
  x86_unimpl("int3 @ 0x12033c39");
L_12033c3a:;
  /* 12033c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12033c3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12033c3e jne 0x12033c16 */
  if (!C.zf) goto L_12033c16;
  /* 12033c40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12033c46 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12033c4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12033c4e je 0x12033c9d */
  if (C.zf) goto L_12033c9d;
  /* 12033c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c53 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12033c56 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12033c59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12033c5b je 0x12033c9d */
  if (C.zf) goto L_12033c9d;
  /* 12033c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12033c5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c62 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12033c65 push eax */
  push32((uint32_t)(EAX));
  /* 12033c66 call 0x120279f0 */
  push32(0x12033c6bu); f_120279f0();
  /* 12033c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c71 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12033c74 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12033c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c7d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12033c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c83 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12033c89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c8c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12033c93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12033c96 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12033c9d:;
  /* 12033c9d pop edi */
  EDI = (pop32());
  /* 12033c9e pop esi */
  ESI = (pop32());
  /* 12033c9f pop ebx */
  EBX = (pop32());
  /* 12033ca0 pop ebp */
  EBP = (pop32());
  /* 12033ca1 ret  */
  ESPCHK(0x12033c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cb0 @ 0x12033cb0 (289 bytes, 97 insns) */
void f_12033cb0(void) {
  FTRACE(0x12033cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12033cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12033cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033cb6 push esi */
  push32((uint32_t)(ESI));
  /* 12033cb7 mov eax, dword ptr [0x12051c98] */
  EAX = (r32((uint32_t)(0x12051c98)));
  /* 12033cbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12033cbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12033cc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12033ccd jmp 0x12033cd8 */
  goto L_12033cd8;
L_12033ccf:;
  /* 12033ccf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033cd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033cd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12033cd8:;
  /* 12033cd8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033cdc jae 0x12033d11 */
  if (!C.cf) goto L_12033d11;
  /* 12033cde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033ce1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033ce4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12033ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 12033ce8 call 0x12029d90 */
  push32(0x12033cedu); f_12029d90();
  /* 12033ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033cf0 mov esi, eax */
  ESI = (EAX);
  /* 12033cf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033cf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033cf8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12033cfc push ecx */
  push32((uint32_t)(ECX));
  /* 12033cfd call 0x12029d90 */
  push32(0x12033d02u); f_12029d90();
  /* 12033d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d08 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12033d0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12033d0f jmp 0x12033ccf */
  goto L_12033ccf;
L_12033d11:;
  /* 12033d11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12033d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d17 push eax */
  push32((uint32_t)(EAX));
  /* 12033d18 call 0x12026f40 */
  push32(0x12033d1du); f_12026f40();
  /* 12033d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12033d23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033d27 je 0x12033dc9 */
  if (C.zf) goto L_12033dc9;
  /* 12033d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033d30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12033d33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12033d3a jmp 0x12033d45 */
  goto L_12033d45;
L_12033d3c:;
  /* 12033d3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033d3f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d42 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12033d45:;
  /* 12033d45 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033d49 jae 0x12033dba */
  if (!C.cf) goto L_12033dba;
  /* 12033d4b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d4e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12033d51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d54 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d57 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12033d5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033d5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033d60 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12033d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12033d64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d67 push edx */
  push32((uint32_t)(EDX));
  /* 12033d68 call 0x12029f10 */
  push32(0x12033d6du); f_12029f10();
  /* 12033d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d70 push eax */
  push32((uint32_t)(EAX));
  /* 12033d71 call 0x12029d90 */
  push32(0x12033d76u); f_12029d90();
  /* 12033d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d7c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d7e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12033d81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d84 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12033d87 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033d8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12033d90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033d93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033d96 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12033d9a push eax */
  push32((uint32_t)(EAX));
  /* 12033d9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033d9e push ecx */
  push32((uint32_t)(ECX));
  /* 12033d9f call 0x12029f10 */
  push32(0x12033da4u); f_12029f10();
  /* 12033da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033da7 push eax */
  push32((uint32_t)(EAX));
  /* 12033da8 call 0x12029d90 */
  push32(0x12033dadu); f_12029d90();
  /* 12033dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033db0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033db3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033db5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12033db8 jmp 0x12033d3c */
  goto L_12033d3c;
L_12033dba:;
  /* 12033dba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033dbd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12033dc0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033dc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033dc6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12033dc9:;
  /* 12033dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033dcc pop esi */
  ESI = (pop32());
  /* 12033dcd mov esp, ebp */
  ESP = (EBP);
  /* 12033dcf pop ebp */
  EBP = (pop32());
  /* 12033dd0 ret  */
  ESPCHK(0x12033cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013de0 @ 0x12033de0 (291 bytes, 97 insns) */
void f_12033de0(void) {
  FTRACE(0x12033de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12033de1 mov ebp, esp */
  EBP = (ESP);
  /* 12033de3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033de6 push esi */
  push32((uint32_t)(ESI));
  /* 12033de7 mov eax, dword ptr [0x12051c98] */
  EAX = (r32((uint32_t)(0x12051c98)));
  /* 12033dec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12033def mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12033df6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12033dfd jmp 0x12033e08 */
  goto L_12033e08;
L_12033dff:;
  /* 12033dff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12033e08:;
  /* 12033e08 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033e0c jae 0x12033e42 */
  if (!C.cf) goto L_12033e42;
  /* 12033e0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033e11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033e14 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12033e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12033e19 call 0x12029d90 */
  push32(0x12033e1eu); f_12029d90();
  /* 12033e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e21 mov esi, eax */
  ESI = (EAX);
  /* 12033e23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033e26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033e29 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12033e2d push ecx */
  push32((uint32_t)(ECX));
  /* 12033e2e call 0x12029d90 */
  push32(0x12033e33u); f_12029d90();
  /* 12033e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e36 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e39 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12033e3d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12033e40 jmp 0x12033dff */
  goto L_12033dff;
L_12033e42:;
  /* 12033e42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12033e45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e48 push eax */
  push32((uint32_t)(EAX));
  /* 12033e49 call 0x12026f40 */
  push32(0x12033e4eu); f_12026f40();
  /* 12033e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12033e54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033e58 je 0x12033efb */
  if (C.zf) goto L_12033efb;
  /* 12033e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033e61 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12033e64 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12033e6b jmp 0x12033e76 */
  goto L_12033e76;
L_12033e6d:;
  /* 12033e6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033e70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12033e76:;
  /* 12033e76 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033e7a jae 0x12033eec */
  if (!C.cf) goto L_12033eec;
  /* 12033e7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033e7f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12033e82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033e85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033e88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12033e8b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033e8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033e91 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12033e95 push ecx */
  push32((uint32_t)(ECX));
  /* 12033e96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033e99 push edx */
  push32((uint32_t)(EDX));
  /* 12033e9a call 0x12029f10 */
  push32(0x12033e9fu); f_12029f10();
  /* 12033e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ea2 push eax */
  push32((uint32_t)(EAX));
  /* 12033ea3 call 0x12029d90 */
  push32(0x12033ea8u); f_12029d90();
  /* 12033ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033eab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033eae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033eb0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12033eb3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033eb6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12033eb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033ebc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ebf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12033ec2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033ec5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033ec8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12033ecc push eax */
  push32((uint32_t)(EAX));
  /* 12033ecd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 12033ed1 call 0x12029f10 */
  push32(0x12033ed6u); f_12029f10();
  /* 12033ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ed9 push eax */
  push32((uint32_t)(EAX));
  /* 12033eda call 0x12029d90 */
  push32(0x12033edfu); f_12029d90();
  /* 12033edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ee2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033ee5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ee7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12033eea jmp 0x12033e6d */
  goto L_12033e6d;
L_12033eec:;
  /* 12033eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033eef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12033ef2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12033ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033ef8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12033efb:;
  /* 12033efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12033efe pop esi */
  ESI = (pop32());
  /* 12033eff mov esp, ebp */
  ESP = (EBP);
  /* 12033f01 pop ebp */
  EBP = (pop32());
  /* 12033f02 ret  */
  ESPCHK(0x12033de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f10 @ 0x12033f10 (878 bytes, 273 insns) */
void f_12033f10(void) {
  FTRACE(0x12033f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12033f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12033f11 mov ebp, esp */
  EBP = (ESP);
  /* 12033f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12033f16 push esi */
  push32((uint32_t)(ESI));
  /* 12033f17 mov eax, dword ptr [0x12051c98] */
  EAX = (r32((uint32_t)(0x12051c98)));
  /* 12033f1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12033f1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12033f26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12033f2d jmp 0x12033f38 */
  goto L_12033f38;
L_12033f2f:;
  /* 12033f2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033f35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12033f38:;
  /* 12033f38 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033f3c jae 0x12033f71 */
  if (!C.cf) goto L_12033f71;
  /* 12033f3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033f41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033f44 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12033f47 push ecx */
  push32((uint32_t)(ECX));
  /* 12033f48 call 0x12029d90 */
  push32(0x12033f4du); f_12029d90();
  /* 12033f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033f50 mov esi, eax */
  ESI = (EAX);
  /* 12033f52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033f55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033f58 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12033f5c push ecx */
  push32((uint32_t)(ECX));
  /* 12033f5d call 0x12029d90 */
  push32(0x12033f62u); f_12029d90();
  /* 12033f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033f65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033f68 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12033f6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12033f6f jmp 0x12033f2f */
  goto L_12033f2f;
L_12033f71:;
  /* 12033f71 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12033f78 jmp 0x12033f83 */
  goto L_12033f83;
L_12033f7a:;
  /* 12033f7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033f7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033f80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12033f83:;
  /* 12033f83 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12033f87 jae 0x12033fbd */
  if (!C.cf) goto L_12033fbd;
  /* 12033f89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033f8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033f8f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12033f93 push eax */
  push32((uint32_t)(EAX));
  /* 12033f94 call 0x12029d90 */
  push32(0x12033f99u); f_12029d90();
  /* 12033f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033f9c mov esi, eax */
  ESI = (EAX);
  /* 12033f9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12033fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033fa4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12033fa8 push eax */
  push32((uint32_t)(EAX));
  /* 12033fa9 call 0x12029d90 */
  push32(0x12033faeu); f_12029d90();
  /* 12033fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033fb1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033fb4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12033fb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12033fbb jmp 0x12033f7a */
  goto L_12033f7a;
L_12033fbd:;
  /* 12033fbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033fc0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12033fc6 push eax */
  push32((uint32_t)(EAX));
  /* 12033fc7 call 0x12029d90 */
  push32(0x12033fccu); f_12029d90();
  /* 12033fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033fcf mov esi, eax */
  ESI = (EAX);
  /* 12033fd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033fd4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12033fda push edx */
  push32((uint32_t)(EDX));
  /* 12033fdb call 0x12029d90 */
  push32(0x12033fe0u); f_12029d90();
  /* 12033fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033fe3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12033fe6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12033fea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12033fed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12033ff0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12033ff6 push edx */
  push32((uint32_t)(EDX));
  /* 12033ff7 call 0x12029d90 */
  push32(0x12033ffcu); f_12029d90();
  /* 12033ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12033fff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12034002 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12034006 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12034009 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203400c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12034012 push ecx */
  push32((uint32_t)(ECX));
  /* 12034013 call 0x12029d90 */
  push32(0x12034018u); f_12029d90();
  /* 12034018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203401b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203401e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12034022 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12034025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034028 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1203402e push edx */
  push32((uint32_t)(EDX));
  /* 1203402f call 0x12029d90 */
  push32(0x12034034u); f_12029d90();
  /* 12034034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203403a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1203403e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12034041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12034044 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034049 push eax */
  push32((uint32_t)(EAX));
  /* 1203404a call 0x12026f40 */
  push32(0x1203404fu); f_12026f40();
  /* 1203404f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12034055 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034059 je 0x12034276 */
  if (C.zf) goto L_12034276;
  /* 1203405f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034062 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12034065 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034068 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203406e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12034071 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12034076 mov eax, dword ptr [0x12051c98] */
  EAX = (r32((uint32_t)(0x12051c98)));
  /* 1203407b push eax */
  push32((uint32_t)(EAX));
  /* 1203407c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203407f push ecx */
  push32((uint32_t)(ECX));
  /* 12034080 call 0x1202d840 */
  push32(0x12034085u); f_1202d840();
  /* 12034085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034088 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1203408f jmp 0x1203409a */
  goto L_1203409a;
L_12034091:;
  /* 12034091 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034094 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034097 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1203409a:;
  /* 1203409a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203409e jae 0x1203410e */
  if (!C.cf) goto L_1203410e;
  /* 120340a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120340a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120340a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120340a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120340ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120340af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120340b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120340b5 push edx */
  push32((uint32_t)(EDX));
  /* 120340b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120340b9 push eax */
  push32((uint32_t)(EAX));
  /* 120340ba call 0x12029f10 */
  push32(0x120340bfu); f_12029f10();
  /* 120340bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120340c2 push eax */
  push32((uint32_t)(EAX));
  /* 120340c3 call 0x12029d90 */
  push32(0x120340c8u); f_12029d90();
  /* 120340c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120340cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120340ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120340d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120340d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120340d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120340db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120340de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 120340e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120340e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120340e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 120340ec push edx */
  push32((uint32_t)(EDX));
  /* 120340ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120340f0 push eax */
  push32((uint32_t)(EAX));
  /* 120340f1 call 0x12029f10 */
  push32(0x120340f6u); f_12029f10();
  /* 120340f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120340f9 push eax */
  push32((uint32_t)(EAX));
  /* 120340fa call 0x12029d90 */
  push32(0x120340ffu); f_12029d90();
  /* 120340ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034102 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034105 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12034109 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1203410c jmp 0x12034091 */
  goto L_12034091;
L_1203410e:;
  /* 1203410e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12034115 jmp 0x12034120 */
  goto L_12034120;
L_12034117:;
  /* 12034117 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1203411a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203411d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12034120:;
  /* 12034120 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034124 jae 0x12034196 */
  if (!C.cf) goto L_12034196;
  /* 12034126 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034129 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1203412c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203412f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12034133 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034136 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034139 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1203413d push eax */
  push32((uint32_t)(EAX));
  /* 1203413e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034141 push ecx */
  push32((uint32_t)(ECX));
  /* 12034142 call 0x12029f10 */
  push32(0x12034147u); f_12029f10();
  /* 12034147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203414a push eax */
  push32((uint32_t)(EAX));
  /* 1203414b call 0x12029d90 */
  push32(0x12034150u); f_12029d90();
  /* 12034150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034153 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034156 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1203415a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1203415d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034160 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12034163 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034166 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1203416a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1203416d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034170 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12034174 push eax */
  push32((uint32_t)(EAX));
  /* 12034175 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034178 push ecx */
  push32((uint32_t)(ECX));
  /* 12034179 call 0x12029f10 */
  push32(0x1203417eu); f_12029f10();
  /* 1203417e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034181 push eax */
  push32((uint32_t)(EAX));
  /* 12034182 call 0x12029d90 */
  push32(0x12034187u); f_12029d90();
  /* 12034187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203418a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203418d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12034191 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12034194 jmp 0x12034117 */
  goto L_12034117;
L_12034196:;
  /* 12034196 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12034199 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203419c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 120341a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120341a5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 120341ab push ecx */
  push32((uint32_t)(ECX));
  /* 120341ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120341af push edx */
  push32((uint32_t)(EDX));
  /* 120341b0 call 0x12029f10 */
  push32(0x120341b5u); f_12029f10();
  /* 120341b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120341b8 push eax */
  push32((uint32_t)(EAX));
  /* 120341b9 call 0x12029d90 */
  push32(0x120341beu); f_12029d90();
  /* 120341be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120341c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120341c4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120341c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120341cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120341ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120341d1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 120341d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120341da mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 120341e0 push eax */
  push32((uint32_t)(EAX));
  /* 120341e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120341e4 push ecx */
  push32((uint32_t)(ECX));
  /* 120341e5 call 0x12029f10 */
  push32(0x120341eau); f_12029f10();
  /* 120341ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120341ed push eax */
  push32((uint32_t)(EAX));
  /* 120341ee call 0x12029d90 */
  push32(0x120341f3u); f_12029d90();
  /* 120341f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120341f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120341f9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120341fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12034200 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12034203 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034206 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1203420c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203420f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12034215 push ecx */
  push32((uint32_t)(ECX));
  /* 12034216 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034219 push edx */
  push32((uint32_t)(EDX));
  /* 1203421a call 0x12029f10 */
  push32(0x1203421fu); f_12029f10();
  /* 1203421f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034222 push eax */
  push32((uint32_t)(EAX));
  /* 12034223 call 0x12029d90 */
  push32(0x12034228u); f_12029d90();
  /* 12034228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203422b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203422e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12034232 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12034235 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12034238 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203423b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12034241 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034244 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1203424a push eax */
  push32((uint32_t)(EAX));
  /* 1203424b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1203424e push ecx */
  push32((uint32_t)(ECX));
  /* 1203424f call 0x12029f10 */
  push32(0x12034254u); f_12029f10();
  /* 12034254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034257 push eax */
  push32((uint32_t)(EAX));
  /* 12034258 call 0x12029d90 */
  push32(0x1203425du); f_12029d90();
  /* 1203425d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034260 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034263 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12034267 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1203426a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1203426d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034270 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12034276:;
  /* 12034276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034279 pop esi */
  ESI = (pop32());
  /* 1203427a mov esp, ebp */
  ESP = (EBP);
  /* 1203427c pop ebp */
  EBP = (pop32());
  /* 1203427d ret  */
  ESPCHK(0x12033f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014280 @ 0x12034280 (31 bytes, 15 insns) */
void f_12034280(void) {
  FTRACE(0x12034280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12034280 push ebp */
  push32((uint32_t)(EBP));
  /* 12034281 mov ebp, esp */
  EBP = (ESP);
  /* 12034283 push 0 */
  push32((uint32_t)(0x0u));
  /* 12034285 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034288 push eax */
  push32((uint32_t)(EAX));
  /* 12034289 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203428c push ecx */
  push32((uint32_t)(ECX));
  /* 1203428d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034290 push edx */
  push32((uint32_t)(EDX));
  /* 12034291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034294 push eax */
  push32((uint32_t)(EAX));
  /* 12034295 call 0x120342a0 */
  push32(0x1203429au); f_120342a0();
  /* 1203429a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203429d pop ebp */
  EBP = (pop32());
  /* 1203429e ret  */
  ESPCHK(0x12034280u, _esp0);
  ESP += 4; return;
}

