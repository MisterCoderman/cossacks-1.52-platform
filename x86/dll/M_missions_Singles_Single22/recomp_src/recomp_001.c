#include "recomp.h"

/* FUN_100082a0 @ 0x112c82a0 (10 bytes, 5 insns) */
void f_112c82a0(void) {
  FTRACE(0x112c82a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c82a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c82a1 mov ebp, esp */
  EBP = (ESP);
  /* 112c82a3 mov eax, dword ptr [0x112edc94] */
  EAX = (r32((uint32_t)(0x112edc94)));
  /* 112c82a8 pop ebp */
  EBP = (pop32());
  /* 112c82a9 ret  */
  ESPCHK(0x112c82a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x112c82b0 (31 bytes, 11 insns) */
void f_112c82b0(void) {
  FTRACE(0x112c82b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c82b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c82b1 mov ebp, esp */
  EBP = (ESP);
  /* 112c82b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c82ba jbe 0x112c82c0 */
  if ((C.cf||C.zf)) goto L_112c82c0;
  /* 112c82bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c82be jmp 0x112c82cd */
  goto L_112c82cd;
L_112c82c0:;
  /* 112c82c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c82c3 mov dword ptr [0x112edc94], eax */
  w32((uint32_t)(0x112edc94), (EAX));
  /* 112c82c8 mov eax, 1 */
  EAX = (0x1u);
L_112c82cd:;
  /* 112c82cd pop ebp */
  EBP = (pop32());
  /* 112c82ce ret  */
  ESPCHK(0x112c82b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d0 @ 0x112c82d0 (89 bytes, 20 insns) */
void f_112c82d0(void) {
  FTRACE(0x112c82d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c82d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c82d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c82d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 112c82d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c82da mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c82df push eax */
  push32((uint32_t)(EAX));
  /* 112c82e0 call dword ptr [0x112f2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2320))), 0x112c82e6u);
  /* 112c82e6 mov dword ptr [0x112f0ee8], eax */
  w32((uint32_t)(0x112f0ee8), (EAX));
  /* 112c82eb cmp dword ptr [0x112f0ee8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0ee8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c82f2 jne 0x112c82f8 */
  if (!C.zf) goto L_112c82f8;
  /* 112c82f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c82f6 jmp 0x112c8327 */
  goto L_112c8327;
L_112c82f8:;
  /* 112c82f8 mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c82fe mov dword ptr [0x112f0edc], ecx */
  w32((uint32_t)(0x112f0edc), (ECX));
  /* 112c8304 mov dword ptr [0x112f0ee0], 0 */
  w32((uint32_t)(0x112f0ee0), (0x0u));
  /* 112c830e mov dword ptr [0x112f0ee4], 0 */
  w32((uint32_t)(0x112f0ee4), (0x0u));
  /* 112c8318 mov dword ptr [0x112f0ec8], 0x10 */
  w32((uint32_t)(0x112f0ec8), (0x10u));
  /* 112c8322 mov eax, 1 */
  EAX = (0x1u);
L_112c8327:;
  /* 112c8327 pop ebp */
  EBP = (pop32());
  /* 112c8328 ret  */
  ESPCHK(0x112c82d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x112c8330 (85 bytes, 29 insns) */
void f_112c8330(void) {
  FTRACE(0x112c8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c8330 push ebp */
  push32((uint32_t)(EBP));
  /* 112c8331 mov ebp, esp */
  EBP = (ESP);
  /* 112c8333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8336 mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c833b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c833e mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c8344 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8346 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c8349 mov edx, dword ptr [0x112f0ee8] */
  EDX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c834f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112c8352:;
  /* 112c8352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8355 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8358 jae 0x112c837f */
  if (!C.cf) goto L_112c837f;
  /* 112c835a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c835d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8360 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8363 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c8366 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c836d jae 0x112c8374 */
  if (!C.cf) goto L_112c8374;
  /* 112c836f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8372 jmp 0x112c8381 */
  goto L_112c8381;
L_112c8374:;
  /* 112c8374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8377 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c837a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c837d jmp 0x112c8352 */
  goto L_112c8352;
L_112c837f:;
  /* 112c837f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c8381:;
  /* 112c8381 mov esp, ebp */
  ESP = (EBP);
  /* 112c8383 pop ebp */
  EBP = (pop32());
  /* 112c8384 ret  */
  ESPCHK(0x112c8330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008390 @ 0x112c8390 (95 bytes, 33 insns) */
void f_112c8390(void) {
  FTRACE(0x112c8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c8390 push ebp */
  push32((uint32_t)(EBP));
  /* 112c8391 mov ebp, esp */
  EBP = (ESP);
  /* 112c8393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8399 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c839c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c839f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c83a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c83a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112c83a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c83ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c83b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c83b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c83b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c83b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c83bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c83bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c83bf jne 0x112c83e1 */
  if (!C.zf) goto L_112c83e1;
  /* 112c83c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c83c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 112c83c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c83c9 jne 0x112c83e1 */
  if (!C.zf) goto L_112c83e1;
  /* 112c83cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c83ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c83d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c83d6 je 0x112c83e1 */
  if (C.zf) goto L_112c83e1;
  /* 112c83d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 112c83df jmp 0x112c83e8 */
  goto L_112c83e8;
L_112c83e1:;
  /* 112c83e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_112c83e8:;
  /* 112c83e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c83eb mov esp, ebp */
  ESP = (EBP);
  /* 112c83ed pop ebp */
  EBP = (pop32());
  /* 112c83ee ret  */
  ESPCHK(0x112c8390u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x112c83f0 (1485 bytes, 453 insns) */
void f_112c83f0(void) {
  FTRACE(0x112c83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c83f1 mov ebp, esp */
  EBP = (ESP);
  /* 112c83f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c83f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c83f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c83fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 112c83ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8402 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8405 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8408 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c840b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c840e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 112c8411 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c8414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8417 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c841d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8420 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 112c8427 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c842a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c842d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8430 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c8433 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8436 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c8438 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c843b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 112c843e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8441 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8444 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 112c8447 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c844a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c844c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112c844f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8452 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 112c8455 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c8458 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c845b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112c845e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8460 jne 0x112c8588 */
  if (!C.zf) goto L_112c8588;
  /* 112c8466 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8469 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112c846c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c846f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112c8472 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8476 jbe 0x112c847f */
  if ((C.cf||C.zf)) goto L_112c847f;
  /* 112c8478 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_112c847f:;
  /* 112c847f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8482 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8485 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8488 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c848b jne 0x112c8561 */
  if (!C.zf) goto L_112c8561;
  /* 112c8491 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8495 jae 0x112c84f6 */
  if (!C.cf) goto L_112c84f6;
  /* 112c8497 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c849c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c849f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c84a1 not eax */
  EAX = (~(EAX));
  /* 112c84a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c84a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c84a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112c84ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c84af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c84b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c84b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112c84b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c84bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c84bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112c84c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c84c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c84c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c84cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112c84ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c84d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c84d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c84d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c84da jne 0x112c84f4 */
  if (!C.zf) goto L_112c84f4;
  /* 112c84dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c84e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c84e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c84e6 not eax */
  EAX = (~(EAX));
  /* 112c84e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c84eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c84ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c84ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c84f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112c84f4:;
  /* 112c84f4 jmp 0x112c8561 */
  goto L_112c8561;
L_112c84f6:;
  /* 112c84f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c84f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c84fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8501 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8503 not edx */
  EDX = (~(EDX));
  /* 112c8505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8508 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c850b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 112c8512 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8514 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8517 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c851a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 112c8521 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8524 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8527 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c852a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c852d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8530 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8533 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 112c8536 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8539 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c853c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c8540 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8542 jne 0x112c8561 */
  if (!C.zf) goto L_112c8561;
  /* 112c8544 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c8547 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c854a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c854f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8551 not edx */
  EDX = (~(EDX));
  /* 112c8553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8556 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8559 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c855b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c855e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112c8561:;
  /* 112c8561 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8564 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c8567 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c856a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c856d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112c8570 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8573 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c8576 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8579 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c857c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112c857f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8582 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8585 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_112c8588:;
  /* 112c8588 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c858b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112c858e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8591 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112c8594 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8598 jbe 0x112c85a1 */
  if ((C.cf||C.zf)) goto L_112c85a1;
  /* 112c859a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_112c85a1:;
  /* 112c85a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c85a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112c85a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c85a9 jne 0x112c8705 */
  if (!C.zf) goto L_112c8705;
  /* 112c85af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c85b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c85b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 112c85b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c85bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112c85be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c85c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 112c85c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c85c8 jbe 0x112c85d1 */
  if ((C.cf||C.zf)) goto L_112c85d1;
  /* 112c85ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_112c85d1:;
  /* 112c85d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c85d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c85d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 112c85da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c85dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112c85e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c85e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 112c85e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c85ea jbe 0x112c85f3 */
  if ((C.cf||C.zf)) goto L_112c85f3;
  /* 112c85ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_112c85f3:;
  /* 112c85f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c85f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c85f9 je 0x112c86ff */
  if (C.zf) goto L_112c86ff;
  /* 112c85ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8602 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8605 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c8608 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c860b jne 0x112c86e1 */
  if (!C.zf) goto L_112c86e1;
  /* 112c8611 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8615 jae 0x112c8676 */
  if (!C.cf) goto L_112c8676;
  /* 112c8617 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c861c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c861f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8621 not edx */
  EDX = (~(EDX));
  /* 112c8623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8626 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8629 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112c862d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c862f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8632 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8635 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 112c8639 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c863c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c863f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c8642 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c8645 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8648 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c864b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 112c864e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8651 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8654 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c8658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c865a jne 0x112c8674 */
  if (!C.zf) goto L_112c8674;
  /* 112c865c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8661 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c8664 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8666 not edx */
  EDX = (~(EDX));
  /* 112c8668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c866b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c866d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c866f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8672 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c8674:;
  /* 112c8674 jmp 0x112c86e1 */
  goto L_112c86e1;
L_112c8676:;
  /* 112c8676 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c8679 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c867c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c8681 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c8683 not eax */
  EAX = (~(EAX));
  /* 112c8685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8688 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c868b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 112c8692 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c8694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8697 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c869a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 112c86a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c86a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c86a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112c86aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c86ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c86b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c86b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112c86b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c86b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c86bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c86c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c86c2 jne 0x112c86e1 */
  if (!C.zf) goto L_112c86e1;
  /* 112c86c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c86c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c86ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c86cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c86d1 not eax */
  EAX = (~(EAX));
  /* 112c86d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c86d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c86d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c86db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c86de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112c86e1:;
  /* 112c86e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c86e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c86e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c86ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c86ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112c86f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c86f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c86f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c86f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c86fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_112c86ff:;
  /* 112c86ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8702 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_112c8705:;
  /* 112c8705 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8708 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112c870b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c870d jne 0x112c871b */
  if (!C.zf) goto L_112c871b;
  /* 112c870f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c8712 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8715 je 0x112c882b */
  if (C.zf) goto L_112c882b;
L_112c871b:;
  /* 112c871b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c871e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8721 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 112c8724 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112c8727 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c872a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c872d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c8730 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112c8733 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8736 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8739 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 112c873c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c873f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8742 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 112c8745 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8748 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c874b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c874e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c8751 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8754 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8757 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c875a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c875d jne 0x112c882b */
  if (!C.zf) goto L_112c882b;
  /* 112c8763 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8767 jae 0x112c87c4 */
  if (!C.cf) goto L_112c87c4;
  /* 112c8769 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c876c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c876f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c8773 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8776 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8779 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c877c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c877f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8782 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8785 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112c8788 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c878a jne 0x112c87a2 */
  if (!C.zf) goto L_112c87a2;
  /* 112c878c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8791 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c8794 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8799 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c879b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c879d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c87a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c87a2:;
  /* 112c87a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c87a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c87aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c87ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c87af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c87b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112c87b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c87b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c87bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c87be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112c87c2 jmp 0x112c882b */
  goto L_112c882b;
L_112c87c4:;
  /* 112c87c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c87c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c87ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c87ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c87d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c87d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c87d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c87da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c87dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c87e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112c87e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c87e5 jne 0x112c8802 */
  if (!C.zf) goto L_112c8802;
  /* 112c87e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c87ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c87ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c87f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c87f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c87f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c87fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c87fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c87ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112c8802:;
  /* 112c8802 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c8805 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8808 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c880d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c880f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8812 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8815 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 112c881c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c881e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8821 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112c8824 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_112c882b:;
  /* 112c882b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c882e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8831 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112c8833 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8836 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8839 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c883c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 112c883f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8842 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c8844 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c884a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c884c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c884f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8852 jne 0x112c89b9 */
  if (!C.zf) goto L_112c89b9;
  /* 112c8858 cmp dword ptr [0x112f0ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c885f je 0x112c89a8 */
  if (C.zf) goto L_112c89a8;
  /* 112c8865 mov eax, dword ptr [0x112f0ed8] */
  EAX = (r32((uint32_t)(0x112f0ed8)));
  /* 112c886a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 112c886d mov ecx, dword ptr [0x112f0ee0] */
  ECX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c8873 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112c8876 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8878 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112c887b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112c8880 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112c8885 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8888 push eax */
  push32((uint32_t)(EAX));
  /* 112c8889 call dword ptr [0x112f233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f233c))), 0x112c888fu);
  /* 112c888f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8894 mov ecx, dword ptr [0x112f0ed8] */
  ECX = (r32((uint32_t)(0x112f0ed8)));
  /* 112c889a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c889c mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c88a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c88a6 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112c88af mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c88b7 mov edx, dword ptr [0x112f0ed8] */
  EDX = (r32((uint32_t)(0x112f0ed8)));
  /* 112c88bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 112c88c8 mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c88d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 112c88d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c88d6 mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c88de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 112c88e1 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c88ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 112c88ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c88f0 jne 0x112c8906 */
  if (!C.zf) goto L_112c8906;
  /* 112c88f2 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c88f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c88fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 112c88fd mov ecx, dword ptr [0x112f0ee0] */
  ECX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c8903 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_112c8906:;
  /* 112c8906 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c890c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8910 jne 0x112c89a8 */
  if (!C.zf) goto L_112c89a8;
  /* 112c8916 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112c891b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c891d mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c8922 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112c8925 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8926 call dword ptr [0x112f233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f233c))), 0x112c892cu);
  /* 112c892c mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c8932 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c8935 push eax */
  push32((uint32_t)(EAX));
  /* 112c8936 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8938 mov ecx, dword ptr [0x112f0eec] */
  ECX = (r32((uint32_t)(0x112f0eec)));
  /* 112c893e push ecx */
  push32((uint32_t)(ECX));
  /* 112c893f call dword ptr [0x112f234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f234c))), 0x112c8945u);
  /* 112c8945 mov edx, dword ptr [0x112f0ee4] */
  EDX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c894b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c894e mov eax, dword ptr [0x112f0ee8] */
  EAX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c8953 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8955 mov ecx, dword ptr [0x112f0ee0] */
  ECX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c895b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c895e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8960 push eax */
  push32((uint32_t)(EAX));
  /* 112c8961 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c8967 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c896a push edx */
  push32((uint32_t)(EDX));
  /* 112c896b mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c8970 push eax */
  push32((uint32_t)(EAX));
  /* 112c8971 call 0x112cbf20 */
  push32(0x112c8976u); f_112cbf20();
  /* 112c8976 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8979 mov ecx, dword ptr [0x112f0ee4] */
  ECX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c897f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8982 mov dword ptr [0x112f0ee4], ecx */
  w32((uint32_t)(0x112f0ee4), (ECX));
  /* 112c8988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c898b cmp edx, dword ptr [0x112f0ee0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112f0ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8991 jbe 0x112c899c */
  if ((C.cf||C.zf)) goto L_112c899c;
  /* 112c8993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8996 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8999 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112c899c:;
  /* 112c899c mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c89a2 mov dword ptr [0x112f0edc], ecx */
  w32((uint32_t)(0x112f0edc), (ECX));
L_112c89a8:;
  /* 112c89a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c89ab mov dword ptr [0x112f0ee0], edx */
  w32((uint32_t)(0x112f0ee0), (EDX));
  /* 112c89b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c89b4 mov dword ptr [0x112f0ed8], eax */
  w32((uint32_t)(0x112f0ed8), (EAX));
L_112c89b9:;
  /* 112c89b9 mov esp, ebp */
  ESP = (EBP);
  /* 112c89bb pop ebp */
  EBP = (pop32());
  /* 112c89bc ret  */
  ESPCHK(0x112c83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x112c89c0 (1334 bytes, 427 insns) */
void f_112c89c0(void) {
  FTRACE(0x112c89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c89c1 mov ebp, esp */
  EBP = (ESP);
  /* 112c89c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c89c6 push esi */
  push32((uint32_t)(ESI));
  /* 112c89c7 mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c89cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c89cf mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c89d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c89d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112c89da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c89dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c89e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 112c89e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 112c89e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c89e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112c89ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c89ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112c89f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c89f6 jge 0x112c8a0c */
  if ((C.sf==C.of)) goto L_112c8a0c;
  /* 112c89f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c89fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c89fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8a00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112c8a03 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 112c8a0a jmp 0x112c8a21 */
  goto L_112c8a21;
L_112c8a0c:;
  /* 112c8a0c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112c8a13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8a16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8a19 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c8a1c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c8a1e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_112c8a21:;
  /* 112c8a21 mov ecx, dword ptr [0x112f0edc] */
  ECX = (r32((uint32_t)(0x112f0edc)));
  /* 112c8a27 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_112c8a2a:;
  /* 112c8a2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a2d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8a30 jae 0x112c8a56 */
  if (!C.cf) goto L_112c8a56;
  /* 112c8a32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c8a38 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 112c8a3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a3d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8a40 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 112c8a43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c8a45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8a47 je 0x112c8a4b */
  if (C.zf) goto L_112c8a4b;
  /* 112c8a49 jmp 0x112c8a56 */
  goto L_112c8a56;
L_112c8a4b:;
  /* 112c8a4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8a51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112c8a54 jmp 0x112c8a2a */
  goto L_112c8a2a;
L_112c8a56:;
  /* 112c8a56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8a5c jne 0x112c8b3d */
  if (!C.zf) goto L_112c8b3d;
  /* 112c8a62 mov eax, dword ptr [0x112f0ee8] */
  EAX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c8a67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_112c8a6a:;
  /* 112c8a6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a6d cmp ecx, dword ptr [0x112f0edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8a73 jae 0x112c8a99 */
  if (!C.cf) goto L_112c8a99;
  /* 112c8a75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c8a7b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 112c8a7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8a83 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 112c8a86 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c8a8a je 0x112c8a8e */
  if (C.zf) goto L_112c8a8e;
  /* 112c8a8c jmp 0x112c8a99 */
  goto L_112c8a99;
L_112c8a8e:;
  /* 112c8a8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a91 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8a94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c8a97 jmp 0x112c8a6a */
  goto L_112c8a6a;
L_112c8a99:;
  /* 112c8a99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8a9c cmp ecx, dword ptr [0x112f0edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8aa2 jne 0x112c8b3d */
  if (!C.zf) goto L_112c8b3d;
L_112c8aa8:;
  /* 112c8aa8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8aab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8aae jae 0x112c8ac6 */
  if (!C.cf) goto L_112c8ac6;
  /* 112c8ab0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ab3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8ab7 je 0x112c8abb */
  if (C.zf) goto L_112c8abb;
  /* 112c8ab9 jmp 0x112c8ac6 */
  goto L_112c8ac6;
L_112c8abb:;
  /* 112c8abb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8abe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8ac1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112c8ac4 jmp 0x112c8aa8 */
  goto L_112c8aa8;
L_112c8ac6:;
  /* 112c8ac6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ac9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8acc jne 0x112c8b17 */
  if (!C.zf) goto L_112c8b17;
  /* 112c8ace mov eax, dword ptr [0x112f0ee8] */
  EAX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c8ad3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_112c8ad6:;
  /* 112c8ad6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ad9 cmp ecx, dword ptr [0x112f0edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8adf jae 0x112c8af7 */
  if (!C.cf) goto L_112c8af7;
  /* 112c8ae1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ae4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8ae8 je 0x112c8aec */
  if (C.zf) goto L_112c8aec;
  /* 112c8aea jmp 0x112c8af7 */
  goto L_112c8af7;
L_112c8aec:;
  /* 112c8aec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8aef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8af2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c8af5 jmp 0x112c8ad6 */
  goto L_112c8ad6;
L_112c8af7:;
  /* 112c8af7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8afa cmp ecx, dword ptr [0x112f0edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8b00 jne 0x112c8b17 */
  if (!C.zf) goto L_112c8b17;
  /* 112c8b02 call 0x112c8f00 */
  push32(0x112c8b07u); f_112c8f00();
  /* 112c8b07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c8b0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8b0e jne 0x112c8b17 */
  if (!C.zf) goto L_112c8b17;
  /* 112c8b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8b12 jmp 0x112c8ef1 */
  goto L_112c8ef1;
L_112c8b17:;
  /* 112c8b17 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8b1a push edx */
  push32((uint32_t)(EDX));
  /* 112c8b1b call 0x112c9010 */
  push32(0x112c8b20u); f_112c9010();
  /* 112c8b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8b23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8b26 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112c8b29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112c8b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8b2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c8b31 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8b34 jne 0x112c8b3d */
  if (!C.zf) goto L_112c8b3d;
  /* 112c8b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8b38 jmp 0x112c8ef1 */
  goto L_112c8ef1;
L_112c8b3d:;
  /* 112c8b3d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8b40 mov dword ptr [0x112f0edc], edx */
  w32((uint32_t)(0x112f0edc), (EDX));
  /* 112c8b46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8b49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c8b4c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 112c8b4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8b52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c8b54 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 112c8b57 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8b5b je 0x112c8b80 */
  if (C.zf) goto L_112c8b80;
  /* 112c8b5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8b60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8b63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c8b66 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 112c8b6a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8b6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8b70 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8b73 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 112c8b7a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 112c8b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c8b7e jne 0x112c8bb5 */
  if (!C.zf) goto L_112c8bb5;
L_112c8b80:;
  /* 112c8b80 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_112c8b87:;
  /* 112c8b87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8b8a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8b8d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c8b90 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 112c8b94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8b97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8b9a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8b9d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 112c8ba4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 112c8ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c8ba8 jne 0x112c8bb5 */
  if (!C.zf) goto L_112c8bb5;
  /* 112c8baa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8bad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8bb0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 112c8bb3 jmp 0x112c8b87 */
  goto L_112c8b87;
L_112c8bb5:;
  /* 112c8bb5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8bb8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c8bbe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8bc1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112c8bc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c8bcb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112c8bd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8bd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8bd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c8bdb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 112c8bdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c8be2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8be6 jne 0x112c8c02 */
  if (!C.zf) goto L_112c8c02;
  /* 112c8be8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 112c8bef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8bf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8bf5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 112c8bf8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 112c8bff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_112c8c02:;
  /* 112c8c02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8c06 jl 0x112c8c1b */
  if ((C.sf!=C.of)) goto L_112c8c1b;
  /* 112c8c08 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c8c0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112c8c0d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112c8c10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8c13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8c16 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112c8c19 jmp 0x112c8c02 */
  goto L_112c8c02;
L_112c8c1b:;
  /* 112c8c1b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8c21 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 112c8c25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112c8c28 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8c2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c8c2d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8c30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c8c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8c36 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112c8c39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8c3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112c8c3f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8c43 jle 0x112c8c4c */
  if ((C.zf||C.sf!=C.of)) goto L_112c8c4c;
  /* 112c8c45 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_112c8c4c:;
  /* 112c8c4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8c4f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8c52 je 0x112c8e70 */
  if (C.zf) goto L_112c8e70;
  /* 112c8c58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8c5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8c5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8c61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8c64 jne 0x112c8d3a */
  if (!C.zf) goto L_112c8d3a;
  /* 112c8c6a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8c6e jge 0x112c8ccf */
  if ((C.sf==C.of)) goto L_112c8ccf;
  /* 112c8c70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c8c75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8c78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c8c7a not eax */
  EAX = (~(EAX));
  /* 112c8c7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8c7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8c82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112c8c86 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c8c88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8c8b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8c8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112c8c92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8c95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8c98 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112c8c9b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c8c9e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8ca1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8ca4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112c8ca7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8caa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8cad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c8cb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c8cb3 jne 0x112c8ccd */
  if (!C.zf) goto L_112c8ccd;
  /* 112c8cb5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c8cba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8cbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c8cbf not eax */
  EAX = (~(EAX));
  /* 112c8cc1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8cc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c8cc6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c8cc8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ccb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112c8ccd:;
  /* 112c8ccd jmp 0x112c8d3a */
  goto L_112c8d3a;
L_112c8ccf:;
  /* 112c8ccf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8cd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8cd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8cda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8cdc not edx */
  EDX = (~(EDX));
  /* 112c8cde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8ce1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8ce4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 112c8ceb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8ced mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8cf0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8cf3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 112c8cfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8cfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8d00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c8d03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c8d06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8d09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8d0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 112c8d0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8d12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8d15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c8d19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8d1b jne 0x112c8d3a */
  if (!C.zf) goto L_112c8d3a;
  /* 112c8d1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c8d20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8d23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8d28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8d2a not edx */
  EDX = (~(EDX));
  /* 112c8d2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8d2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8d32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c8d34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8d37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112c8d3a:;
  /* 112c8d3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c8d40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c8d46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112c8d49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c8d4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c8d55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112c8d58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8d5c je 0x112c8e70 */
  if (C.zf) goto L_112c8e70;
  /* 112c8d62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8d68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 112c8d6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c8d6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8d74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8d77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112c8d7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8d80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c8d83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8d86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112c8d8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8d92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112c8d98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8d9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c8da1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8da4 jne 0x112c8e70 */
  if (!C.zf) goto L_112c8e70;
  /* 112c8daa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8dae jge 0x112c8e0a */
  if ((C.sf==C.of)) goto L_112c8e0a;
  /* 112c8db0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8db3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8db6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c8dba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8dbd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8dc0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112c8dc3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c8dc5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8dc8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8dcb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 112c8dce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8dd0 jne 0x112c8de8 */
  if (!C.zf) goto L_112c8de8;
  /* 112c8dd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c8dd7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8dda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c8ddc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ddf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c8de1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c8de3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8de6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112c8de8:;
  /* 112c8de8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8ded mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8df0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8df2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8df5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8df8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112c8dfc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8dfe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8e01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8e04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 112c8e08 jmp 0x112c8e70 */
  goto L_112c8e70;
L_112c8e0a:;
  /* 112c8e0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8e0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8e10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c8e14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8e17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8e1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112c8e1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c8e1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8e22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8e25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 112c8e28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8e2a jne 0x112c8e47 */
  if (!C.zf) goto L_112c8e47;
  /* 112c8e2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8e2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8e32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c8e37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c8e39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8e3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c8e3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c8e41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8e44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112c8e47:;
  /* 112c8e47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c8e4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8e4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c8e52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c8e54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8e57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8e5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 112c8e61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8e63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8e66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8e69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_112c8e70:;
  /* 112c8e70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8e74 je 0x112c8e8a */
  if (C.zf) goto L_112c8e8a;
  /* 112c8e76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8e7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112c8e7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8e81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8e84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8e87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_112c8e8a:;
  /* 112c8e8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8e8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8e90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112c8e93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c8e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8e99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8e9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112c8e9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c8ea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8ea4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8ea7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8eaa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 112c8ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8eb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c8eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8eb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c8eb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8ebd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112c8ebf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c8ec1 jne 0x112c8ee3 */
  if (!C.zf) goto L_112c8ee3;
  /* 112c8ec3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c8ec6 cmp eax, dword ptr [0x112f0ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f0ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8ecc jne 0x112c8ee3 */
  if (!C.zf) goto L_112c8ee3;
  /* 112c8ece mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8ed1 cmp ecx, dword ptr [0x112f0ed8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0ed8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8ed7 jne 0x112c8ee3 */
  if (!C.zf) goto L_112c8ee3;
  /* 112c8ed9 mov dword ptr [0x112f0ee0], 0 */
  w32((uint32_t)(0x112f0ee0), (0x0u));
L_112c8ee3:;
  /* 112c8ee3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 112c8ee6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c8ee9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112c8eeb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c8eee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112c8ef1:;
  /* 112c8ef1 pop esi */
  ESI = (pop32());
  /* 112c8ef2 mov esp, ebp */
  ESP = (EBP);
  /* 112c8ef4 pop ebp */
  EBP = (pop32());
  /* 112c8ef5 ret  */
  ESPCHK(0x112c89c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x112c8f00 (271 bytes, 78 insns) */
void f_112c8f00(void) {
  FTRACE(0x112c8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 112c8f01 mov ebp, esp */
  EBP = (ESP);
  /* 112c8f03 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8f04 mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c8f09 cmp eax, dword ptr [0x112f0ec8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f0ec8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8f0f jne 0x112c8f5b */
  if (!C.zf) goto L_112c8f5b;
  /* 112c8f11 mov ecx, dword ptr [0x112f0ec8] */
  ECX = (r32((uint32_t)(0x112f0ec8)));
  /* 112c8f17 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8f1a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c8f1d push ecx */
  push32((uint32_t)(ECX));
  /* 112c8f1e mov edx, dword ptr [0x112f0ee8] */
  EDX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c8f24 push edx */
  push32((uint32_t)(EDX));
  /* 112c8f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8f27 mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c8f2c push eax */
  push32((uint32_t)(EAX));
  /* 112c8f2d call dword ptr [0x112f2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2328))), 0x112c8f33u);
  /* 112c8f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c8f36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8f3a jne 0x112c8f43 */
  if (!C.zf) goto L_112c8f43;
  /* 112c8f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8f3e jmp 0x112c900b */
  goto L_112c900b;
L_112c8f43:;
  /* 112c8f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8f46 mov dword ptr [0x112f0ee8], ecx */
  w32((uint32_t)(0x112f0ee8), (ECX));
  /* 112c8f4c mov edx, dword ptr [0x112f0ec8] */
  EDX = (r32((uint32_t)(0x112f0ec8)));
  /* 112c8f52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8f55 mov dword ptr [0x112f0ec8], edx */
  w32((uint32_t)(0x112f0ec8), (EDX));
L_112c8f5b:;
  /* 112c8f5b mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c8f60 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c8f63 mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c8f69 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8f6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c8f6e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 112c8f73 push 8 */
  push32((uint32_t)(0x8u));
  /* 112c8f75 mov edx, dword ptr [0x112f0eec] */
  EDX = (r32((uint32_t)(0x112f0eec)));
  /* 112c8f7b push edx */
  push32((uint32_t)(EDX));
  /* 112c8f7c call dword ptr [0x112f2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2320))), 0x112c8f82u);
  /* 112c8f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8f85 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 112c8f88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8f8b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8f8f jne 0x112c8f95 */
  if (!C.zf) goto L_112c8f95;
  /* 112c8f91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8f93 jmp 0x112c900b */
  goto L_112c900b;
L_112c8f95:;
  /* 112c8f95 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c8f97 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 112c8f9c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112c8fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8fa3 call dword ptr [0x112f2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2318))), 0x112c8fa9u);
  /* 112c8fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 112c8faf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fb2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8fb6 jne 0x112c8fd2 */
  if (!C.zf) goto L_112c8fd2;
  /* 112c8fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c8fbe push ecx */
  push32((uint32_t)(ECX));
  /* 112c8fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8fc1 mov edx, dword ptr [0x112f0eec] */
  EDX = (r32((uint32_t)(0x112f0eec)));
  /* 112c8fc7 push edx */
  push32((uint32_t)(EDX));
  /* 112c8fc8 call dword ptr [0x112f234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f234c))), 0x112c8fceu);
  /* 112c8fce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c8fd0 jmp 0x112c900b */
  goto L_112c900b;
L_112c8fd2:;
  /* 112c8fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fd5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112c8fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fde mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 112c8fe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fe8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 112c8fef mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c8ff4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8ff7 mov dword ptr [0x112f0ee4], eax */
  w32((uint32_t)(0x112f0ee4), (EAX));
  /* 112c8ffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8fff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112c9002 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 112c9008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c900b:;
  /* 112c900b mov esp, ebp */
  ESP = (EBP);
  /* 112c900d pop ebp */
  EBP = (pop32());
  /* 112c900e ret  */
  ESPCHK(0x112c8f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x112c9010 (494 bytes, 149 insns) */
void f_112c9010(void) {
  FTRACE(0x112c9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c9010 push ebp */
  push32((uint32_t)(EBP));
  /* 112c9011 mov ebp, esp */
  EBP = (ESP);
  /* 112c9013 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9019 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c901c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112c901f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9022 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112c9025 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c9028 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_112c902f:;
  /* 112c902f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9033 jl 0x112c9048 */
  if ((C.sf!=C.of)) goto L_112c9048;
  /* 112c9035 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c9038 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112c903a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c903d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c9040 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9043 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 112c9046 jmp 0x112c902f */
  goto L_112c902f;
L_112c9048:;
  /* 112c9048 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c904b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c9051 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9054 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112c905b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112c905e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112c9065 jmp 0x112c9070 */
  goto L_112c9070;
L_112c9067:;
  /* 112c9067 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c906a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c906d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_112c9070:;
  /* 112c9070 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9074 jge 0x112c9096 */
  if ((C.sf==C.of)) goto L_112c9096;
  /* 112c9076 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c907c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 112c907f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c9082 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9085 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9088 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112c908b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c908e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9091 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112c9094 jmp 0x112c9067 */
  goto L_112c9067;
L_112c9096:;
  /* 112c9096 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c9099 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112c909c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c909f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112c90a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c90a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112c90a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c90a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112c90ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112c90b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c90b6 push edx */
  push32((uint32_t)(EDX));
  /* 112c90b7 call dword ptr [0x112f2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2318))), 0x112c90bdu);
  /* 112c90bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c90bf jne 0x112c90c9 */
  if (!C.zf) goto L_112c90c9;
  /* 112c90c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c90c4 jmp 0x112c91fa */
  goto L_112c91fa;
L_112c90c9:;
  /* 112c90c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c90cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c90d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112c90d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c90d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c90da jmp 0x112c90e8 */
  goto L_112c90e8;
L_112c90dc:;
  /* 112c90dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c90df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c90e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112c90e8:;
  /* 112c90e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c90eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c90ee ja 0x112c914d */
  if ((!C.cf&&!C.zf)) goto L_112c914d;
  /* 112c90f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c90f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 112c90fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c90fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 112c9107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c910a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c910d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c9110 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9113 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 112c9119 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c911c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9122 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9125 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112c9128 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c912b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9131 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9134 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112c9137 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c913a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c913f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112c9142 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9145 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 112c914b jmp 0x112c90dc */
  goto L_112c90dc;
L_112c914d:;
  /* 112c914d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c9150 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9156 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112c9159 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c915c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c915f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9162 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112c9165 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9168 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c916b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c916e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9171 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9174 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112c9177 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c917a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c917d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9180 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112c9183 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9186 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112c9189 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c918c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c918f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9192 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112c9195 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c9198 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c919b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 112c91a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c91a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c91a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 112c91b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c91b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 112c91bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c91be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 112c91c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c91c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c91c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 112c91ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c91cc jne 0x112c91dd */
  if (!C.zf) goto L_112c91dd;
  /* 112c91ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c91d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c91d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112c91d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c91da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112c91dd:;
  /* 112c91dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c91e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c91e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c91e7 not edx */
  EDX = (~(EDX));
  /* 112c91e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c91ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c91ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c91f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c91f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112c91f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_112c91fa:;
  /* 112c91fa mov esp, ebp */
  ESP = (EBP);
  /* 112c91fc pop ebp */
  EBP = (pop32());
  /* 112c91fd ret  */
  ESPCHK(0x112c9010u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x112c9200 (1515 bytes, 489 insns) */
void f_112c9200(void) {
  FTRACE(0x112c9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c9200 push ebp */
  push32((uint32_t)(EBP));
  /* 112c9201 mov ebp, esp */
  EBP = (ESP);
  /* 112c9203 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9206 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c9209 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c920c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 112c920e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112c9211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9214 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112c9217 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 112c921a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c921d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c9220 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9223 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c9226 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c9229 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 112c922c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c922f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9232 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c9238 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c923b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112c9242 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112c9245 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c9248 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c924b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112c924e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9251 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c9253 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9256 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 112c9259 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c925c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c925f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 112c9262 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9265 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c9267 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112c926a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c926d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9270 jle 0x112c9526 */
  if ((C.zf||C.sf!=C.of)) goto L_112c9526;
  /* 112c9276 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9279 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112c927c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c927e jne 0x112c928b */
  if (!C.zf) goto L_112c928b;
  /* 112c9280 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c9283 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9286 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9289 jle 0x112c9292 */
  if ((C.zf||C.sf!=C.of)) goto L_112c9292;
L_112c928b:;
  /* 112c928b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c928d jmp 0x112c97e7 */
  goto L_112c97e7;
L_112c9292:;
  /* 112c9292 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9295 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112c9298 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c929b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112c929e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c92a2 jbe 0x112c92ab */
  if ((C.cf||C.zf)) goto L_112c92ab;
  /* 112c92a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_112c92ab:;
  /* 112c92ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c92ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c92b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c92b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c92b7 jne 0x112c938d */
  if (!C.zf) goto L_112c938d;
  /* 112c92bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c92c1 jae 0x112c9322 */
  if (!C.cf) goto L_112c9322;
  /* 112c92c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c92c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c92cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c92cd not edx */
  EDX = (~(EDX));
  /* 112c92cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c92d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c92d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112c92d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c92db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c92de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c92e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 112c92e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c92e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c92eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c92ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c92f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c92f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c92f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 112c92fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c92fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9300 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c9304 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c9306 jne 0x112c9320 */
  if (!C.zf) goto L_112c9320;
  /* 112c9308 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c930d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9312 not edx */
  EDX = (~(EDX));
  /* 112c9314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9317 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c9319 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c931b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c931e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c9320:;
  /* 112c9320 jmp 0x112c938d */
  goto L_112c938d;
L_112c9322:;
  /* 112c9322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9325 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9328 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c932d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c932f not eax */
  EAX = (~(EAX));
  /* 112c9331 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9334 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9337 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 112c933e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c9340 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9343 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9346 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 112c934d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9350 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9353 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112c9356 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c9359 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c935c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c935f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112c9362 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9365 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9368 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c936c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c936e jne 0x112c938d */
  if (!C.zf) goto L_112c938d;
  /* 112c9370 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9373 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9376 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c937b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c937d not eax */
  EAX = (~(EAX));
  /* 112c937f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9382 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c9385 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c9387 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c938a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112c938d:;
  /* 112c938d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9390 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c9393 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9396 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c9399 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112c939c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c939f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c93a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c93a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c93a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 112c93ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c93ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c93b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c93b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c93b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c93bb jle 0x112c9507 */
  if ((C.zf||C.sf!=C.of)) goto L_112c9507;
  /* 112c93c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c93c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c93c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112c93ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c93cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112c93d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c93d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112c93d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c93da jbe 0x112c93e3 */
  if ((C.cf||C.zf)) goto L_112c93e3;
  /* 112c93dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_112c93e3:;
  /* 112c93e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c93e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c93e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 112c93ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112c93ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c93f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c93f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c93f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112c93fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c93fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9401 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 112c9404 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9407 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c940a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 112c940d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9410 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c9413 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9416 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c9419 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c941c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c941f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c9422 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9425 jne 0x112c94f3 */
  if (!C.zf) goto L_112c94f3;
  /* 112c942b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c942f jae 0x112c948c */
  if (!C.cf) goto L_112c948c;
  /* 112c9431 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9434 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9437 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c943b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c943e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9441 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c9444 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c9447 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c944a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c944d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112c9450 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c9452 jne 0x112c946a */
  if (!C.zf) goto L_112c946a;
  /* 112c9454 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9459 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c945c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c945e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9461 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c9463 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c9465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9468 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c946a:;
  /* 112c946a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c946f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9472 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c9474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9477 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c947a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 112c947e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c9480 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9483 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9486 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 112c948a jmp 0x112c94f3 */
  goto L_112c94f3;
L_112c948c:;
  /* 112c948c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c948f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9492 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c9496 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9499 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c949c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c949f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c94a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c94a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c94a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 112c94ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c94ad jne 0x112c94ca */
  if (!C.zf) goto L_112c94ca;
  /* 112c94af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c94b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c94b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c94ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c94bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c94bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c94c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c94c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c94c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112c94ca:;
  /* 112c94ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c94cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c94d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c94d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c94d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c94da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c94dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 112c94e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c94e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c94e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c94ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_112c94f3:;
  /* 112c94f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c94f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c94f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112c94fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c94fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9501 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9504 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_112c9507:;
  /* 112c9507 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c950a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c950d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9510 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112c9512 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c9515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9518 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c951b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c951e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 112c9521 jmp 0x112c97e2 */
  goto L_112c97e2;
L_112c9526:;
  /* 112c9526 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c9529 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c952c jge 0x112c97e2 */
  if ((C.sf==C.of)) goto L_112c97e2;
  /* 112c9532 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c9535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9538 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c953b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112c953d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112c9540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9543 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9546 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9549 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 112c954c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c954f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9552 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112c9555 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c9558 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c955b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112c955e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c9561 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112c9564 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9567 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112c956a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c956e jbe 0x112c9577 */
  if ((C.cf||C.zf)) goto L_112c9577;
  /* 112c9570 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_112c9577:;
  /* 112c9577 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c957a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112c957d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c957f jne 0x112c96c0 */
  if (!C.zf) goto L_112c96c0;
  /* 112c9585 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9588 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112c958b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c958e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112c9591 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9595 jbe 0x112c959e */
  if ((C.cf||C.zf)) goto L_112c959e;
  /* 112c9597 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_112c959e:;
  /* 112c959e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c95a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c95a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c95a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c95aa jne 0x112c9680 */
  if (!C.zf) goto L_112c9680;
  /* 112c95b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c95b4 jae 0x112c9615 */
  if (!C.cf) goto L_112c9615;
  /* 112c95b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c95bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c95be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c95c0 not edx */
  EDX = (~(EDX));
  /* 112c95c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c95c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c95c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112c95cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c95ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c95d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c95d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 112c95d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c95db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c95de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c95e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c95e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c95e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c95ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 112c95ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c95f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c95f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c95f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c95f9 jne 0x112c9613 */
  if (!C.zf) goto L_112c9613;
  /* 112c95fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9600 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9603 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9605 not edx */
  EDX = (~(EDX));
  /* 112c9607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c960a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c960c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c960e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9611 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c9613:;
  /* 112c9613 jmp 0x112c9680 */
  goto L_112c9680;
L_112c9615:;
  /* 112c9615 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9618 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c961b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c9620 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c9622 not eax */
  EAX = (~(EAX));
  /* 112c9624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9627 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c962a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 112c9631 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112c9633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9636 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9639 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 112c9640 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9643 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9646 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 112c9649 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c964c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c964f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9652 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 112c9655 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9658 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c965b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112c965f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c9661 jne 0x112c9680 */
  if (!C.zf) goto L_112c9680;
  /* 112c9663 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c9666 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9669 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c966e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c9670 not eax */
  EAX = (~(EAX));
  /* 112c9672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9675 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c9678 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c967a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c967d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112c9680:;
  /* 112c9680 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9683 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c9686 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9689 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c968c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112c968f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9692 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c9695 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9698 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c969b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 112c969e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c96a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c96a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112c96a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c96aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112c96ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c96b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112c96b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c96b7 jbe 0x112c96c0 */
  if ((C.cf||C.zf)) goto L_112c96c0;
  /* 112c96b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_112c96c0:;
  /* 112c96c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c96c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c96c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 112c96c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112c96cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c96d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c96d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112c96d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c96de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c96e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c96e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112c96ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c96f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112c96f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c96fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c96ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9702 jne 0x112c97ce */
  if (!C.zf) goto L_112c97ce;
  /* 112c9708 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c970c jae 0x112c9768 */
  if (!C.cf) goto L_112c9768;
  /* 112c970e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9711 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9714 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c9718 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c971b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c971e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112c9721 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c9723 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9726 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9729 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 112c972c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c972e jne 0x112c9746 */
  if (!C.zf) goto L_112c9746;
  /* 112c9730 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c9735 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9738 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c973a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c973d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c973f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c9741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9744 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112c9746:;
  /* 112c9746 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c974b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c974e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9753 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9756 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 112c975a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c975c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c975f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9762 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 112c9766 jmp 0x112c97ce */
  goto L_112c97ce;
L_112c9768:;
  /* 112c9768 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c976b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c976e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 112c9772 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9775 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9778 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112c977b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112c977d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c9780 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9783 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 112c9786 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c9788 jne 0x112c97a5 */
  if (!C.zf) goto L_112c97a5;
  /* 112c978a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c978d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9790 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 112c9795 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112c9797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c979a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c979d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112c979f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c97a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112c97a5:;
  /* 112c97a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c97a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c97ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c97b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c97b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c97b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c97b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 112c97bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c97c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c97c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112c97c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_112c97ce:;
  /* 112c97ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c97d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c97d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112c97d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c97d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c97dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c97df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_112c97e2:;
  /* 112c97e2 mov eax, 1 */
  EAX = (0x1u);
L_112c97e7:;
  /* 112c97e7 mov esp, ebp */
  ESP = (EBP);
  /* 112c97e9 pop ebp */
  EBP = (pop32());
  /* 112c97ea ret  */
  ESPCHK(0x112c9200u, _esp0);
  ESP += 4; return;
}

/* FUN_100097f0 @ 0x112c97f0 (304 bytes, 79 insns) */
void f_112c97f0(void) {
  FTRACE(0x112c97f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c97f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c97f1 mov ebp, esp */
  EBP = (ESP);
  /* 112c97f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c97f4 cmp dword ptr [0x112f0ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c97fb je 0x112c991c */
  if (C.zf) goto L_112c991c;
  /* 112c9801 mov eax, dword ptr [0x112f0ed8] */
  EAX = (r32((uint32_t)(0x112f0ed8)));
  /* 112c9806 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 112c9809 mov ecx, dword ptr [0x112f0ee0] */
  ECX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c980f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112c9812 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9814 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c9817 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112c981c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112c9821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9824 push eax */
  push32((uint32_t)(EAX));
  /* 112c9825 call dword ptr [0x112f233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f233c))), 0x112c982bu);
  /* 112c982b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9830 mov ecx, dword ptr [0x112f0ed8] */
  ECX = (r32((uint32_t)(0x112f0ed8)));
  /* 112c9836 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9838 mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c983d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c9840 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 112c9842 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c9848 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112c984b mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c9850 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c9853 mov edx, dword ptr [0x112f0ed8] */
  EDX = (r32((uint32_t)(0x112f0ed8)));
  /* 112c9859 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 112c9864 mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c9869 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c986c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 112c986f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112c9872 mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c9877 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c987a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 112c987d mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c9883 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c9886 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 112c988a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c988c jne 0x112c98a2 */
  if (!C.zf) goto L_112c98a2;
  /* 112c988e mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c9894 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c9897 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 112c9899 mov ecx, dword ptr [0x112f0ee0] */
  ECX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c989f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_112c98a2:;
  /* 112c98a2 mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c98a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c98ac jne 0x112c9912 */
  if (!C.zf) goto L_112c9912;
  /* 112c98ae cmp dword ptr [0x112f0ee4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112f0ee4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c98b5 jle 0x112c9912 */
  if ((C.zf||C.sf!=C.of)) goto L_112c9912;
  /* 112c98b7 mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c98bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c98bf push ecx */
  push32((uint32_t)(ECX));
  /* 112c98c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c98c2 mov edx, dword ptr [0x112f0eec] */
  EDX = (r32((uint32_t)(0x112f0eec)));
  /* 112c98c8 push edx */
  push32((uint32_t)(EDX));
  /* 112c98c9 call dword ptr [0x112f234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f234c))), 0x112c98cfu);
  /* 112c98cf mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c98d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c98d7 mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c98dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c98df mov edx, dword ptr [0x112f0ee0] */
  EDX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c98e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c98e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c98ea push ecx */
  push32((uint32_t)(ECX));
  /* 112c98eb mov eax, dword ptr [0x112f0ee0] */
  EAX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c98f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c98f3 push eax */
  push32((uint32_t)(EAX));
  /* 112c98f4 mov ecx, dword ptr [0x112f0ee0] */
  ECX = (r32((uint32_t)(0x112f0ee0)));
  /* 112c98fa push ecx */
  push32((uint32_t)(ECX));
  /* 112c98fb call 0x112cbf20 */
  push32(0x112c9900u); f_112cbf20();
  /* 112c9900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9903 mov edx, dword ptr [0x112f0ee4] */
  EDX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c9909 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c990c mov dword ptr [0x112f0ee4], edx */
  w32((uint32_t)(0x112f0ee4), (EDX));
L_112c9912:;
  /* 112c9912 mov dword ptr [0x112f0ee0], 0 */
  w32((uint32_t)(0x112f0ee0), (0x0u));
L_112c991c:;
  /* 112c991c mov esp, ebp */
  ESP = (EBP);
  /* 112c991e pop ebp */
  EBP = (pop32());
  /* 112c991f ret  */
  ESPCHK(0x112c97f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x112c9920 (1565 bytes, 343 insns) */
void f_112c9920(void) {
  FTRACE(0x112c9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c9920 push ebp */
  push32((uint32_t)(EBP));
  /* 112c9921 mov ebp, esp */
  EBP = (ESP);
  /* 112c9923 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9929 mov eax, dword ptr [0x112f0ee4] */
  EAX = (r32((uint32_t)(0x112f0ee4)));
  /* 112c992e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c9931 push eax */
  push32((uint32_t)(EAX));
  /* 112c9932 mov ecx, dword ptr [0x112f0ee8] */
  ECX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c9938 push ecx */
  push32((uint32_t)(ECX));
  /* 112c9939 call dword ptr [0x112f23bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23bc))), 0x112c993fu);
  /* 112c993f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c9941 je 0x112c994b */
  if (C.zf) goto L_112c994b;
  /* 112c9943 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c9946 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c994b:;
  /* 112c994b mov edx, dword ptr [0x112f0ee8] */
  EDX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c9951 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 112c9957 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 112c9961 jmp 0x112c9972 */
  goto L_112c9972;
L_112c9963:;
  /* 112c9963 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 112c9969 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c996c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_112c9972:;
  /* 112c9972 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 112c9978 cmp ecx, dword ptr [0x112f0ee4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0ee4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c997e jge 0x112c9f37 */
  if ((C.sf==C.of)) goto L_112c9f37;
  /* 112c9984 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 112c998a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c998d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 112c9993 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 112c9998 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 112c999e push ecx */
  push32((uint32_t)(ECX));
  /* 112c999f call dword ptr [0x112f23bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23bc))), 0x112c99a5u);
  /* 112c99a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c99a7 je 0x112c99b3 */
  if (C.zf) goto L_112c99b3;
  /* 112c99a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 112c99ae jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c99b3:;
  /* 112c99b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 112c99b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112c99bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 112c99c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 112c99c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c99ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112c99d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 112c99d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112c99da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c99dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 112c99e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 112c99f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112c99f8 jmp 0x112c9a03 */
  goto L_112c9a03;
L_112c99fa:;
  /* 112c99fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c99fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9a00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112c9a03:;
  /* 112c9a03 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9a07 jge 0x112c9efb */
  if ((C.sf==C.of)) goto L_112c9efb;
  /* 112c9a0d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 112c9a17 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 112c9a21 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 112c9a2b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 112c9a35 jmp 0x112c9a46 */
  goto L_112c9a46;
L_112c9a37:;
  /* 112c9a37 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112c9a3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9a40 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_112c9a46:;
  /* 112c9a46 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9a4d jge 0x112c9a62 */
  if ((C.sf==C.of)) goto L_112c9a62;
  /* 112c9a4f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112c9a55 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 112c9a60 jmp 0x112c9a37 */
  goto L_112c9a37;
L_112c9a62:;
  /* 112c9a62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9a66 jl 0x112c9e9d */
  if ((C.sf!=C.of)) goto L_112c9e9d;
  /* 112c9a6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112c9a71 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 112c9a77 push ecx */
  push32((uint32_t)(ECX));
  /* 112c9a78 call dword ptr [0x112f23bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23bc))), 0x112c9a7eu);
  /* 112c9a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c9a80 je 0x112c9a8c */
  if (C.zf) goto L_112c9a8c;
  /* 112c9a82 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 112c9a87 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9a8c:;
  /* 112c9a8c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 112c9a92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112c9a95 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 112c9a9f jmp 0x112c9ab0 */
  goto L_112c9ab0;
L_112c9aa1:;
  /* 112c9aa1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 112c9aa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9aaa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_112c9ab0:;
  /* 112c9ab0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9ab7 jge 0x112c9c34 */
  if ((C.sf==C.of)) goto L_112c9c34;
  /* 112c9abd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c9ac0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9ac3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 112c9ac9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9acf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9ad5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 112c9adb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9ae1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9ae5 jne 0x112c9af2 */
  if (!C.zf) goto L_112c9af2;
  /* 112c9ae7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 112c9aed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9af0 je 0x112c9afc */
  if (C.zf) goto L_112c9afc;
L_112c9af2:;
  /* 112c9af2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 112c9af7 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9afc:;
  /* 112c9afc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9b02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c9b04 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 112c9b0a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 112c9b10 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 112c9b16 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 112c9b1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112c9b1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c9b21 je 0x112c9b59 */
  if (C.zf) goto L_112c9b59;
  /* 112c9b23 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 112c9b29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9b2c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 112c9b32 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9b3c jle 0x112c9b48 */
  if ((C.zf||C.sf!=C.of)) goto L_112c9b48;
  /* 112c9b3e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 112c9b43 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9b48:;
  /* 112c9b48 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 112c9b4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9b51 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 112c9b57 jmp 0x112c9b9b */
  goto L_112c9b9b;
L_112c9b59:;
  /* 112c9b59 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 112c9b5f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112c9b62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9b65 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 112c9b6b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9b72 jle 0x112c9b7e */
  if ((C.zf||C.sf!=C.of)) goto L_112c9b7e;
  /* 112c9b74 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_112c9b7e:;
  /* 112c9b7e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112c9b84 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 112c9b8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9b8e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112c9b94 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_112c9b9b:;
  /* 112c9b9b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9ba2 jl 0x112c9bbd */
  if ((C.sf!=C.of)) goto L_112c9bbd;
  /* 112c9ba4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 112c9baa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 112c9bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c9baf jne 0x112c9bbd */
  if (!C.zf) goto L_112c9bbd;
  /* 112c9bb1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9bbb jle 0x112c9bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_112c9bc7;
L_112c9bbd:;
  /* 112c9bbd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 112c9bc2 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9bc7:;
  /* 112c9bc7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9bcd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9bd3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 112c9bd6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9bdc je 0x112c9be8 */
  if (C.zf) goto L_112c9be8;
  /* 112c9bde mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 112c9be3 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9be8:;
  /* 112c9be8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9bee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9bf4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 112c9bfa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9c00 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9c06 jb 0x112c9afc */
  if (C.cf) goto L_112c9afc;
  /* 112c9c0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9c12 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9c18 je 0x112c9c24 */
  if (C.zf) goto L_112c9c24;
  /* 112c9c1a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 112c9c1f jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9c24:;
  /* 112c9c24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c9c27 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9c2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c9c2f jmp 0x112c9aa1 */
  goto L_112c9aa1;
L_112c9c34:;
  /* 112c9c34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9c37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c9c39 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9c3f je 0x112c9c4b */
  if (C.zf) goto L_112c9c4b;
  /* 112c9c41 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 112c9c46 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9c4b:;
  /* 112c9c4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9c4e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 112c9c54 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 112c9c5b jmp 0x112c9c66 */
  goto L_112c9c66;
L_112c9c5d:;
  /* 112c9c5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9c60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9c63 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112c9c66:;
  /* 112c9c66 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9c6a jge 0x112c9e9d */
  if ((C.sf==C.of)) goto L_112c9e9d;
  /* 112c9c70 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 112c9c7a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 112c9c80 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_112c9c86:;
  /* 112c9c86 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9c8c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c9c8f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 112c9c95 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112c9c9b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9ca1 je 0x112c9dca */
  if (C.zf) goto L_112c9dca;
  /* 112c9ca7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9caa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 112c9cb0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9cb7 je 0x112c9dca */
  if (C.zf) goto L_112c9dca;
  /* 112c9cbd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112c9cc3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9cc9 jb 0x112c9cde */
  if (C.cf) goto L_112c9cde;
  /* 112c9ccb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 112c9cd1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9cd6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9cdc jb 0x112c9ce8 */
  if (C.cf) goto L_112c9ce8;
L_112c9cde:;
  /* 112c9cde mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 112c9ce3 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9ce8:;
  /* 112c9ce8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112c9cee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 112c9cf4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 112c9cfa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 112c9d00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9d03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112c9d06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9d09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9d0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_112c9d14:;
  /* 112c9d14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9d17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9d1d je 0x112c9d3e */
  if (C.zf) goto L_112c9d3e;
  /* 112c9d1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9d22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9d28 jne 0x112c9d2c */
  if (!C.zf) goto L_112c9d2c;
  /* 112c9d2a jmp 0x112c9d3e */
  goto L_112c9d3e;
L_112c9d2c:;
  /* 112c9d2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9d2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c9d31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 112c9d34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9d37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9d39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112c9d3c jmp 0x112c9d14 */
  goto L_112c9d14;
L_112c9d3e:;
  /* 112c9d3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c9d41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9d47 jne 0x112c9d53 */
  if (!C.zf) goto L_112c9d53;
  /* 112c9d49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 112c9d4e jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9d53:;
  /* 112c9d53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112c9d59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c9d5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112c9d5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9d61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 112c9d67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9d6e jle 0x112c9d7a */
  if ((C.zf||C.sf!=C.of)) goto L_112c9d7a;
  /* 112c9d70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_112c9d7a:;
  /* 112c9d7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 112c9d80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9d83 je 0x112c9d8f */
  if (C.zf) goto L_112c9d8f;
  /* 112c9d85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 112c9d8a jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9d8f:;
  /* 112c9d8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112c9d95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c9d98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9d9e je 0x112c9daa */
  if (C.zf) goto L_112c9daa;
  /* 112c9da0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 112c9da5 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9daa:;
  /* 112c9daa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 112c9db0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 112c9db6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 112c9dbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9dbf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 112c9dc5 jmp 0x112c9c86 */
  goto L_112c9c86;
L_112c9dca:;
  /* 112c9dca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9dd1 je 0x112c9e41 */
  if (C.zf) goto L_112c9e41;
  /* 112c9dd3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9dd7 jge 0x112c9e0b */
  if ((C.sf==C.of)) goto L_112c9e0b;
  /* 112c9dd9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9dde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9de1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9de3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 112c9de9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c9deb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 112c9df1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9df6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9df9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9dfb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 112c9e01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c9e03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 112c9e09 jmp 0x112c9e41 */
  goto L_112c9e41;
L_112c9e0b:;
  /* 112c9e0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9e0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9e11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9e16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9e18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 112c9e1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c9e20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 112c9e26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9e29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9e2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112c9e31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112c9e33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 112c9e39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c9e3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_112c9e41:;
  /* 112c9e41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 112c9e47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c9e4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9e50 jne 0x112c9e64 */
  if (!C.zf) goto L_112c9e64;
  /* 112c9e52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c9e55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 112c9e5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9e62 je 0x112c9e6e */
  if (C.zf) goto L_112c9e6e;
L_112c9e64:;
  /* 112c9e64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 112c9e69 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9e6e:;
  /* 112c9e6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 112c9e74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112c9e77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9e7d je 0x112c9e89 */
  if (C.zf) goto L_112c9e89;
  /* 112c9e7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 112c9e84 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9e89:;
  /* 112c9e89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 112c9e8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9e92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 112c9e98 jmp 0x112c9c5d */
  goto L_112c9c5d;
L_112c9e9d:;
  /* 112c9e9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c9ea0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 112c9ea6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 112c9eac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9eb0 jne 0x112c9eca */
  if (!C.zf) goto L_112c9eca;
  /* 112c9eb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c9eb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 112c9ebb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 112c9ec1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9ec8 je 0x112c9ed1 */
  if (C.zf) goto L_112c9ed1;
L_112c9eca:;
  /* 112c9eca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 112c9ecf jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9ed1:;
  /* 112c9ed1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 112c9ed7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9edd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 112c9ee3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c9ee6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9eeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c9eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c9ef1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112c9ef3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c9ef6 jmp 0x112c99fa */
  goto L_112c99fa;
L_112c9efb:;
  /* 112c9efb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 112c9f01 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 112c9f07 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9f09 jne 0x112c9f1c */
  if (!C.zf) goto L_112c9f1c;
  /* 112c9f0b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 112c9f11 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 112c9f17 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9f1a je 0x112c9f23 */
  if (C.zf) goto L_112c9f23;
L_112c9f1c:;
  /* 112c9f1c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 112c9f21 jmp 0x112c9f39 */
  goto L_112c9f39;
L_112c9f23:;
  /* 112c9f23 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 112c9f29 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9f2c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 112c9f32 jmp 0x112c9963 */
  goto L_112c9963;
L_112c9f37:;
  /* 112c9f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c9f39:;
  /* 112c9f39 mov esp, ebp */
  ESP = (EBP);
  /* 112c9f3b pop ebp */
  EBP = (pop32());
  /* 112c9f3c ret  */
  ESPCHK(0x112c9920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f40 @ 0x112c9f40 (250 bytes, 92 insns) */
void f_112c9f40(void) {
  FTRACE(0x112c9f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c9f40 push ebp */
  push32((uint32_t)(EBP));
  /* 112c9f41 mov ebp, esp */
  EBP = (ESP);
  /* 112c9f43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9f46 push ebx */
  push32((uint32_t)(EBX));
  /* 112c9f47 push esi */
  push32((uint32_t)(ESI));
  /* 112c9f48 push edi */
  push32((uint32_t)(EDI));
  /* 112c9f49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 112c9f4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112c9f4f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 112c9f52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_112c9f55:;
  /* 112c9f55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9f59 jne 0x112c9f79 */
  if (!C.zf) goto L_112c9f79;
  /* 112c9f5b push 0x112eaf48 */
  push32((uint32_t)(0x112eaf48u));
  /* 112c9f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c9f62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 112c9f64 push 0x112eaf3c */
  push32((uint32_t)(0x112eaf3cu));
  /* 112c9f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c9f6b call 0x112c30f0 */
  push32(0x112c9f70u); f_112c30f0();
  /* 112c9f70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9f73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9f76 jne 0x112c9f79 */
  if (!C.zf) goto L_112c9f79;
  /* 112c9f78 int3  */
  x86_unimpl("int3 @ 0x112c9f78");
L_112c9f79:;
  /* 112c9f79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c9f7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c9f7d jne 0x112c9f55 */
  if (!C.zf) goto L_112c9f55;
L_112c9f7f:;
  /* 112c9f7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9f83 jne 0x112c9fa3 */
  if (!C.zf) goto L_112c9fa3;
  /* 112c9f85 push 0x112eaf2c */
  push32((uint32_t)(0x112eaf2cu));
  /* 112c9f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c9f8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 112c9f8e push 0x112eaf3c */
  push32((uint32_t)(0x112eaf3cu));
  /* 112c9f93 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c9f95 call 0x112c30f0 */
  push32(0x112c9f9au); f_112c30f0();
  /* 112c9f9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9f9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9fa0 jne 0x112c9fa3 */
  if (!C.zf) goto L_112c9fa3;
  /* 112c9fa2 int3  */
  x86_unimpl("int3 @ 0x112c9fa2");
L_112c9fa3:;
  /* 112c9fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c9fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c9fa7 jne 0x112c9f7f */
  if (!C.zf) goto L_112c9f7f;
  /* 112c9fa9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9fac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 112c9fb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9fb9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c9fbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9fbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c9fc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112c9fc4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9fc7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 112c9fce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c9fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 112c9fd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c9fd5 push edx */
  push32((uint32_t)(EDX));
  /* 112c9fd6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9fd9 push eax */
  push32((uint32_t)(EAX));
  /* 112c9fda call 0x112cafc0 */
  push32(0x112c9fdfu); f_112cafc0();
  /* 112c9fdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c9fe2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112c9fe5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9fe8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c9feb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c9fee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9ff1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112c9ff4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c9ff7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c9ffb jl 0x112ca01f */
  if ((C.sf!=C.of)) goto L_112ca01f;
  /* 112c9ffd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca000 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112ca002 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112ca005 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ca007 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112ca00d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 112ca010 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca013 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112ca015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca018 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca01b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112ca01d jmp 0x112ca030 */
  goto L_112ca030;
L_112ca01f:;
  /* 112ca01f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca022 push edx */
  push32((uint32_t)(EDX));
  /* 112ca023 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ca025 call 0x112cad40 */
  push32(0x112ca02au); f_112cad40();
  /* 112ca02a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca02d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_112ca030:;
  /* 112ca030 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112ca033 pop edi */
  EDI = (pop32());
  /* 112ca034 pop esi */
  ESI = (pop32());
  /* 112ca035 pop ebx */
  EBX = (pop32());
  /* 112ca036 mov esp, ebp */
  ESP = (EBP);
  /* 112ca038 pop ebp */
  EBP = (pop32());
  /* 112ca039 ret  */
  ESPCHK(0x112c9f40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a040 @ 0x112ca040 (183 bytes, 58 insns) */
void f_112ca040(void) {
  FTRACE(0x112ca040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca040 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca041 mov ebp, esp */
  EBP = (ESP);
  /* 112ca043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ca046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca04c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca051 ja 0x112ca06a */
  if ((!C.cf&&!C.zf)) goto L_112ca06a;
  /* 112ca053 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca056 mov edx, dword ptr [0x112edc98] */
  EDX = (r32((uint32_t)(0x112edc98)));
  /* 112ca05c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca05e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 112ca062 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 112ca065 jmp 0x112ca0f3 */
  goto L_112ca0f3;
L_112ca06a:;
  /* 112ca06a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca06d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 112ca070 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112ca076 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112ca07c mov edx, dword ptr [0x112edc98] */
  EDX = (r32((uint32_t)(0x112edc98)));
  /* 112ca082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca084 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 112ca088 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 112ca08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ca08f je 0x112ca0b3 */
  if (C.zf) goto L_112ca0b3;
  /* 112ca091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca094 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 112ca097 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112ca09d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 112ca0a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 112ca0a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 112ca0a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 112ca0aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 112ca0b1 jmp 0x112ca0c4 */
  goto L_112ca0c4;
L_112ca0b3:;
  /* 112ca0b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 112ca0b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 112ca0b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 112ca0bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_112ca0c4:;
  /* 112ca0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ca0c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ca0c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ca0ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 112ca0cd push ecx */
  push32((uint32_t)(ECX));
  /* 112ca0ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ca0d1 push edx */
  push32((uint32_t)(EDX));
  /* 112ca0d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112ca0d5 push eax */
  push32((uint32_t)(EAX));
  /* 112ca0d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ca0d8 call 0x112cc260 */
  push32(0x112ca0ddu); f_112cc260();
  /* 112ca0dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca0e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ca0e2 jne 0x112ca0e8 */
  if (!C.zf) goto L_112ca0e8;
  /* 112ca0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca0e6 jmp 0x112ca0f3 */
  goto L_112ca0f3;
L_112ca0e8:;
  /* 112ca0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca0eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ca0f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_112ca0f3:;
  /* 112ca0f3 mov esp, ebp */
  ESP = (EBP);
  /* 112ca0f5 pop ebp */
  EBP = (pop32());
  /* 112ca0f6 ret  */
  ESPCHK(0x112ca040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x112ca100 (836 bytes, 238 insns) */
void f_112ca100(void) {
  FTRACE(0x112ca100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca100 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca101 mov ebp, esp */
  EBP = (ESP);
  /* 112ca103 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ca106 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca108 call 0x112c7a30 */
  push32(0x112ca10du); f_112c7a30();
  /* 112ca10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca113 push eax */
  push32((uint32_t)(EAX));
  /* 112ca114 call 0x112ca450 */
  push32(0x112ca119u); f_112ca450();
  /* 112ca119 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca11c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112ca11f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca122 cmp ecx, dword ptr [0x112f0c24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0c24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca128 jne 0x112ca13b */
  if (!C.zf) goto L_112ca13b;
  /* 112ca12a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca12c call 0x112c7ad0 */
  push32(0x112ca131u); f_112c7ad0();
  /* 112ca131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca136 jmp 0x112ca440 */
  goto L_112ca440;
L_112ca13b:;
  /* 112ca13b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca13f jne 0x112ca15c */
  if (!C.zf) goto L_112ca15c;
  /* 112ca141 call 0x112ca530 */
  push32(0x112ca146u); f_112ca530();
  /* 112ca146 call 0x112ca5b0 */
  push32(0x112ca14bu); f_112ca5b0();
  /* 112ca14b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca14d call 0x112c7ad0 */
  push32(0x112ca152u); f_112c7ad0();
  /* 112ca152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca157 jmp 0x112ca440 */
  goto L_112ca440;
L_112ca15c:;
  /* 112ca15c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ca163 jmp 0x112ca16e */
  goto L_112ca16e;
L_112ca165:;
  /* 112ca165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca168 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca16b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112ca16e:;
  /* 112ca16e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca172 jae 0x112ca2bf */
  if (!C.cf) goto L_112ca2bf;
  /* 112ca178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca17b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ca17e mov ecx, dword ptr [eax + 0x112edeb8] */
  ECX = (r32((uint32_t)(EAX + 0x112edeb8)));
  /* 112ca184 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca187 jne 0x112ca2ba */
  if (!C.zf) goto L_112ca2ba;
  /* 112ca18d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112ca194 jmp 0x112ca19f */
  goto L_112ca19f;
L_112ca196:;
  /* 112ca196 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca199 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca19c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_112ca19f:;
  /* 112ca19f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca1a6 jae 0x112ca1b4 */
  if (!C.cf) goto L_112ca1b4;
  /* 112ca1a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca1ab mov byte ptr [eax + 0x112f0dc0], 0 */
  w8((uint32_t)(EAX + 0x112f0dc0), (0x0u));
  /* 112ca1b2 jmp 0x112ca196 */
  goto L_112ca196;
L_112ca1b4:;
  /* 112ca1b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112ca1bb jmp 0x112ca1c6 */
  goto L_112ca1c6;
L_112ca1bd:;
  /* 112ca1bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca1c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca1c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112ca1c6:;
  /* 112ca1c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca1ca jae 0x112ca247 */
  if (!C.cf) goto L_112ca247;
  /* 112ca1cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca1cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ca1d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca1d5 lea ecx, [edx + eax*8 + 0x112edec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x112edec8));
  /* 112ca1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112ca1df jmp 0x112ca1ea */
  goto L_112ca1ea;
L_112ca1e1:;
  /* 112ca1e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ca1e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca1e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112ca1ea:;
  /* 112ca1ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ca1ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ca1ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112ca1f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ca1f3 je 0x112ca242 */
  if (C.zf) goto L_112ca242;
  /* 112ca1f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ca1f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca1fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112ca1fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ca1ff je 0x112ca242 */
  if (C.zf) goto L_112ca242;
  /* 112ca201 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ca204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112ca208 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112ca20b jmp 0x112ca216 */
  goto L_112ca216;
L_112ca20d:;
  /* 112ca20d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca210 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca213 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112ca216:;
  /* 112ca216 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ca219 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca21b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112ca21e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca221 ja 0x112ca240 */
  if ((!C.cf&&!C.zf)) goto L_112ca240;
  /* 112ca223 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca229 mov dl, byte ptr [eax + 0x112f0dc1] */
  DL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112ca22f or dl, byte ptr [ecx + 0x112edeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x112edeb0))); DL = (_r); fl_logic(_r,8); }
  /* 112ca235 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca238 mov byte ptr [eax + 0x112f0dc1], dl */
  w8((uint32_t)(EAX + 0x112f0dc1), (DL));
  /* 112ca23e jmp 0x112ca20d */
  goto L_112ca20d;
L_112ca240:;
  /* 112ca240 jmp 0x112ca1e1 */
  goto L_112ca1e1;
L_112ca242:;
  /* 112ca242 jmp 0x112ca1bd */
  goto L_112ca1bd;
L_112ca247:;
  /* 112ca247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca24a mov dword ptr [0x112f0c24], ecx */
  w32((uint32_t)(0x112f0c24), (ECX));
  /* 112ca250 mov dword ptr [0x112f0cac], 1 */
  w32((uint32_t)(0x112f0cac), (0x1u));
  /* 112ca25a mov edx, dword ptr [0x112f0c24] */
  EDX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca260 push edx */
  push32((uint32_t)(EDX));
  /* 112ca261 call 0x112ca4b0 */
  push32(0x112ca266u); f_112ca4b0();
  /* 112ca266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca269 mov dword ptr [0x112f0ec4], eax */
  w32((uint32_t)(0x112f0ec4), (EAX));
  /* 112ca26e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112ca275 jmp 0x112ca280 */
  goto L_112ca280;
L_112ca277:;
  /* 112ca277 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca27a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca27d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112ca280:;
  /* 112ca280 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca284 jae 0x112ca2a4 */
  if (!C.cf) goto L_112ca2a4;
  /* 112ca286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca289 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ca28c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca28f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca292 mov cx, word ptr [ecx + eax*2 + 0x112edebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x112edebc)));
  /* 112ca29a mov word ptr [edx*2 + 0x112f0ca0], cx */
  w16((uint32_t)(EDX*2 + 0x112f0ca0), (CX));
  /* 112ca2a2 jmp 0x112ca277 */
  goto L_112ca277;
L_112ca2a4:;
  /* 112ca2a4 call 0x112ca5b0 */
  push32(0x112ca2a9u); f_112ca5b0();
  /* 112ca2a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca2ab call 0x112c7ad0 */
  push32(0x112ca2b0u); f_112c7ad0();
  /* 112ca2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca2b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca2b5 jmp 0x112ca440 */
  goto L_112ca440;
L_112ca2ba:;
  /* 112ca2ba jmp 0x112ca165 */
  goto L_112ca165;
L_112ca2bf:;
  /* 112ca2bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 112ca2c2 push edx */
  push32((uint32_t)(EDX));
  /* 112ca2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca2c6 push eax */
  push32((uint32_t)(EAX));
  /* 112ca2c7 call dword ptr [0x112f2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2314))), 0x112ca2cdu);
  /* 112ca2cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca2d0 jne 0x112ca412 */
  if (!C.zf) goto L_112ca412;
  /* 112ca2d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112ca2dd jmp 0x112ca2e8 */
  goto L_112ca2e8;
L_112ca2df:;
  /* 112ca2df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca2e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca2e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_112ca2e8:;
  /* 112ca2e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca2ef jae 0x112ca2fd */
  if (!C.cf) goto L_112ca2fd;
  /* 112ca2f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca2f4 mov byte ptr [edx + 0x112f0dc0], 0 */
  w8((uint32_t)(EDX + 0x112f0dc0), (0x0u));
  /* 112ca2fb jmp 0x112ca2df */
  goto L_112ca2df;
L_112ca2fd:;
  /* 112ca2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca300 mov dword ptr [0x112f0c24], eax */
  w32((uint32_t)(0x112f0c24), (EAX));
  /* 112ca305 mov dword ptr [0x112f0ec4], 0 */
  w32((uint32_t)(0x112f0ec4), (0x0u));
  /* 112ca30f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca313 jbe 0x112ca3ce */
  if ((C.cf||C.zf)) goto L_112ca3ce;
  /* 112ca319 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 112ca31c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 112ca31f jmp 0x112ca32a */
  goto L_112ca32a;
L_112ca321:;
  /* 112ca321 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112ca324 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca327 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_112ca32a:;
  /* 112ca32a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112ca32d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ca32f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112ca331 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ca333 je 0x112ca37c */
  if (C.zf) goto L_112ca37c;
  /* 112ca335 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112ca338 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca33a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112ca33d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ca33f je 0x112ca37c */
  if (C.zf) goto L_112ca37c;
  /* 112ca341 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112ca344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca346 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112ca348 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112ca34b jmp 0x112ca356 */
  goto L_112ca356;
L_112ca34d:;
  /* 112ca34d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca350 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca353 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112ca356:;
  /* 112ca356 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112ca359 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca35b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112ca35e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca361 ja 0x112ca37a */
  if ((!C.cf&&!C.zf)) goto L_112ca37a;
  /* 112ca363 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca366 mov cl, byte ptr [eax + 0x112f0dc1] */
  CL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112ca36c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 112ca36f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca372 mov byte ptr [edx + 0x112f0dc1], cl */
  w8((uint32_t)(EDX + 0x112f0dc1), (CL));
  /* 112ca378 jmp 0x112ca34d */
  goto L_112ca34d;
L_112ca37a:;
  /* 112ca37a jmp 0x112ca321 */
  goto L_112ca321;
L_112ca37c:;
  /* 112ca37c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 112ca383 jmp 0x112ca38e */
  goto L_112ca38e;
L_112ca385:;
  /* 112ca385 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca38b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112ca38e:;
  /* 112ca38e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca395 jae 0x112ca3ae */
  if (!C.cf) goto L_112ca3ae;
  /* 112ca397 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca39a mov dl, byte ptr [ecx + 0x112f0dc1] */
  DL = (r8((uint32_t)(ECX + 0x112f0dc1)));
  /* 112ca3a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 112ca3a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112ca3a6 mov byte ptr [eax + 0x112f0dc1], dl */
  w8((uint32_t)(EAX + 0x112f0dc1), (DL));
  /* 112ca3ac jmp 0x112ca385 */
  goto L_112ca385;
L_112ca3ae:;
  /* 112ca3ae mov ecx, dword ptr [0x112f0c24] */
  ECX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca3b5 call 0x112ca4b0 */
  push32(0x112ca3bau); f_112ca4b0();
  /* 112ca3ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca3bd mov dword ptr [0x112f0ec4], eax */
  w32((uint32_t)(0x112f0ec4), (EAX));
  /* 112ca3c2 mov dword ptr [0x112f0cac], 1 */
  w32((uint32_t)(0x112f0cac), (0x1u));
  /* 112ca3cc jmp 0x112ca3d8 */
  goto L_112ca3d8;
L_112ca3ce:;
  /* 112ca3ce mov dword ptr [0x112f0cac], 0 */
  w32((uint32_t)(0x112f0cac), (0x0u));
L_112ca3d8:;
  /* 112ca3d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112ca3df jmp 0x112ca3ea */
  goto L_112ca3ea;
L_112ca3e1:;
  /* 112ca3e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca3e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca3e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112ca3ea:;
  /* 112ca3ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca3ee jae 0x112ca3ff */
  if (!C.cf) goto L_112ca3ff;
  /* 112ca3f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ca3f3 mov word ptr [eax*2 + 0x112f0ca0], 0 */
  w16((uint32_t)(EAX*2 + 0x112f0ca0), (0x0u));
  /* 112ca3fd jmp 0x112ca3e1 */
  goto L_112ca3e1;
L_112ca3ff:;
  /* 112ca3ff call 0x112ca5b0 */
  push32(0x112ca404u); f_112ca5b0();
  /* 112ca404 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca406 call 0x112c7ad0 */
  push32(0x112ca40bu); f_112c7ad0();
  /* 112ca40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca40e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca410 jmp 0x112ca440 */
  goto L_112ca440;
L_112ca412:;
  /* 112ca412 cmp dword ptr [0x112ef728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca419 je 0x112ca433 */
  if (C.zf) goto L_112ca433;
  /* 112ca41b call 0x112ca530 */
  push32(0x112ca420u); f_112ca530();
  /* 112ca420 call 0x112ca5b0 */
  push32(0x112ca425u); f_112ca5b0();
  /* 112ca425 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca427 call 0x112c7ad0 */
  push32(0x112ca42cu); f_112c7ad0();
  /* 112ca42c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca42f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ca431 jmp 0x112ca440 */
  goto L_112ca440;
L_112ca433:;
  /* 112ca433 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112ca435 call 0x112c7ad0 */
  push32(0x112ca43au); f_112c7ad0();
  /* 112ca43a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca43d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112ca440:;
  /* 112ca440 mov esp, ebp */
  ESP = (EBP);
  /* 112ca442 pop ebp */
  EBP = (pop32());
  /* 112ca443 ret  */
  ESPCHK(0x112ca100u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x112ca450 (89 bytes, 21 insns) */
void f_112ca450(void) {
  FTRACE(0x112ca450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca450 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca451 mov ebp, esp */
  EBP = (ESP);
  /* 112ca453 mov dword ptr [0x112ef728], 0 */
  w32((uint32_t)(0x112ef728), (0x0u));
  /* 112ca45d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca461 jne 0x112ca475 */
  if (!C.zf) goto L_112ca475;
  /* 112ca463 mov dword ptr [0x112ef728], 1 */
  w32((uint32_t)(0x112ef728), (0x1u));
  /* 112ca46d call dword ptr [0x112f230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f230c))), 0x112ca473u);
  /* 112ca473 jmp 0x112ca4a7 */
  goto L_112ca4a7;
L_112ca475:;
  /* 112ca475 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca479 jne 0x112ca48d */
  if (!C.zf) goto L_112ca48d;
  /* 112ca47b mov dword ptr [0x112ef728], 1 */
  w32((uint32_t)(0x112ef728), (0x1u));
  /* 112ca485 call dword ptr [0x112f231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f231c))), 0x112ca48bu);
  /* 112ca48b jmp 0x112ca4a7 */
  goto L_112ca4a7;
L_112ca48d:;
  /* 112ca48d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca491 jne 0x112ca4a4 */
  if (!C.zf) goto L_112ca4a4;
  /* 112ca493 mov dword ptr [0x112ef728], 1 */
  w32((uint32_t)(0x112ef728), (0x1u));
  /* 112ca49d mov eax, dword ptr [0x112ef748] */
  EAX = (r32((uint32_t)(0x112ef748)));
  /* 112ca4a2 jmp 0x112ca4a7 */
  goto L_112ca4a7;
L_112ca4a4:;
  /* 112ca4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_112ca4a7:;
  /* 112ca4a7 pop ebp */
  EBP = (pop32());
  /* 112ca4a8 ret  */
  ESPCHK(0x112ca450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4b0 @ 0x112ca4b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_112ca4b0(void) {
  FTRACE(0x112ca4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca4b1 mov ebp, esp */
  EBP = (ESP);
  /* 112ca4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca4b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ca4ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca4bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ca4c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112ca4c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca4ca ja 0x112ca4fa */
  if ((!C.cf&&!C.zf)) goto L_112ca4fa;
  /* 112ca4cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca4cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca4d1 mov dl, byte ptr [eax + 0x112ca514] */
  DL = (r8((uint32_t)(EAX + 0x112ca514)));
  /* 112ca4d7 jmp dword ptr [edx*4 + 0x112ca500] */
  switch (EDX) {
    case 0: goto L_112ca4de;
    case 1: goto L_112ca4e5;
    case 2: goto L_112ca4ec;
    case 3: goto L_112ca4f3;
    case 4: goto L_112ca4fa;
    default: x86_unimpl("switch@0x112ca4d7 out of table"); return;
  }
L_112ca4de:;
  /* 112ca4de mov eax, 0x411 */
  EAX = (0x411u);
  /* 112ca4e3 jmp 0x112ca4fc */
  goto L_112ca4fc;
L_112ca4e5:;
  /* 112ca4e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 112ca4ea jmp 0x112ca4fc */
  goto L_112ca4fc;
L_112ca4ec:;
  /* 112ca4ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 112ca4f1 jmp 0x112ca4fc */
  goto L_112ca4fc;
L_112ca4f3:;
  /* 112ca4f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 112ca4f8 jmp 0x112ca4fc */
  goto L_112ca4fc;
L_112ca4fa:;
  /* 112ca4fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112ca4fc:;
  /* 112ca4fc mov esp, ebp */
  ESP = (EBP);
  /* 112ca4fe pop ebp */
  EBP = (pop32());
  /* 112ca4ff ret  */
  ESPCHK(0x112ca4b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x112ca530 (116 bytes, 29 insns) */
void f_112ca530(void) {
  FTRACE(0x112ca530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca530 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca531 mov ebp, esp */
  EBP = (ESP);
  /* 112ca533 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ca53b jmp 0x112ca546 */
  goto L_112ca546;
L_112ca53d:;
  /* 112ca53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112ca546:;
  /* 112ca546 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca54d jge 0x112ca55b */
  if ((C.sf==C.of)) goto L_112ca55b;
  /* 112ca54f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca552 mov byte ptr [ecx + 0x112f0dc0], 0 */
  w8((uint32_t)(ECX + 0x112f0dc0), (0x0u));
  /* 112ca559 jmp 0x112ca53d */
  goto L_112ca53d;
L_112ca55b:;
  /* 112ca55b mov dword ptr [0x112f0c24], 0 */
  w32((uint32_t)(0x112f0c24), (0x0u));
  /* 112ca565 mov dword ptr [0x112f0cac], 0 */
  w32((uint32_t)(0x112f0cac), (0x0u));
  /* 112ca56f mov dword ptr [0x112f0ec4], 0 */
  w32((uint32_t)(0x112f0ec4), (0x0u));
  /* 112ca579 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ca580 jmp 0x112ca58b */
  goto L_112ca58b;
L_112ca582:;
  /* 112ca582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca585 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca588 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112ca58b:;
  /* 112ca58b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca58f jge 0x112ca5a0 */
  if ((C.sf==C.of)) goto L_112ca5a0;
  /* 112ca591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca594 mov word ptr [eax*2 + 0x112f0ca0], 0 */
  w16((uint32_t)(EAX*2 + 0x112f0ca0), (0x0u));
  /* 112ca59e jmp 0x112ca582 */
  goto L_112ca582;
L_112ca5a0:;
  /* 112ca5a0 mov esp, ebp */
  ESP = (EBP);
  /* 112ca5a2 pop ebp */
  EBP = (pop32());
  /* 112ca5a3 ret  */
  ESPCHK(0x112ca530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x112ca5b0 (770 bytes, 175 insns) */
void f_112ca5b0(void) {
  FTRACE(0x112ca5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca5b1 mov ebp, esp */
  EBP = (ESP);
  /* 112ca5b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ca5b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 112ca5bf push eax */
  push32((uint32_t)(EAX));
  /* 112ca5c0 mov ecx, dword ptr [0x112f0c24] */
  ECX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca5c7 call dword ptr [0x112f2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2314))), 0x112ca5cdu);
  /* 112ca5cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca5d0 jne 0x112ca7e9 */
  if (!C.zf) goto L_112ca7e9;
  /* 112ca5d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 112ca5e0 jmp 0x112ca5f1 */
  goto L_112ca5f1;
L_112ca5e2:;
  /* 112ca5e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca5e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca5eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_112ca5f1:;
  /* 112ca5f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca5fb jae 0x112ca612 */
  if (!C.cf) goto L_112ca612;
  /* 112ca5fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca603 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 112ca609 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 112ca610 jmp 0x112ca5e2 */
  goto L_112ca5e2;
L_112ca612:;
  /* 112ca612 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 112ca619 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 112ca61f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112ca622 jmp 0x112ca62d */
  goto L_112ca62d;
L_112ca624:;
  /* 112ca624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca627 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca62a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112ca62d:;
  /* 112ca62d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca630 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca632 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112ca634 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112ca636 je 0x112ca678 */
  if (C.zf) goto L_112ca678;
  /* 112ca638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca63b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ca63d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112ca63f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 112ca645 jmp 0x112ca656 */
  goto L_112ca656;
L_112ca647:;
  /* 112ca647 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca64d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca650 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_112ca656:;
  /* 112ca656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ca659 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ca65b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 112ca65e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca664 ja 0x112ca676 */
  if ((!C.cf&&!C.zf)) goto L_112ca676;
  /* 112ca666 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca66c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 112ca674 jmp 0x112ca647 */
  goto L_112ca647;
L_112ca676:;
  /* 112ca676 jmp 0x112ca624 */
  goto L_112ca624;
L_112ca678:;
  /* 112ca678 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ca67a mov eax, dword ptr [0x112f0ec4] */
  EAX = (r32((uint32_t)(0x112f0ec4)));
  /* 112ca67f push eax */
  push32((uint32_t)(EAX));
  /* 112ca680 mov ecx, dword ptr [0x112f0c24] */
  ECX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca686 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca687 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 112ca68d push edx */
  push32((uint32_t)(EDX));
  /* 112ca68e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112ca693 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 112ca699 push eax */
  push32((uint32_t)(EAX));
  /* 112ca69a push 1 */
  push32((uint32_t)(0x1u));
  /* 112ca69c call 0x112cc260 */
  push32(0x112ca6a1u); f_112cc260();
  /* 112ca6a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca6a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ca6a6 mov ecx, dword ptr [0x112f0c24] */
  ECX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca6ac push ecx */
  push32((uint32_t)(ECX));
  /* 112ca6ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112ca6b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 112ca6b8 push edx */
  push32((uint32_t)(EDX));
  /* 112ca6b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112ca6be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 112ca6c4 push eax */
  push32((uint32_t)(EAX));
  /* 112ca6c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112ca6ca mov ecx, dword ptr [0x112f0ec4] */
  ECX = (r32((uint32_t)(0x112f0ec4)));
  /* 112ca6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca6d1 call 0x112cc420 */
  push32(0x112ca6d6u); f_112cc420();
  /* 112ca6d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca6d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ca6db mov edx, dword ptr [0x112f0c24] */
  EDX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca6e1 push edx */
  push32((uint32_t)(EDX));
  /* 112ca6e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112ca6e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 112ca6ed push eax */
  push32((uint32_t)(EAX));
  /* 112ca6ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112ca6f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 112ca6f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112ca6fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 112ca6ff mov edx, dword ptr [0x112f0ec4] */
  EDX = (r32((uint32_t)(0x112f0ec4)));
  /* 112ca705 push edx */
  push32((uint32_t)(EDX));
  /* 112ca706 call 0x112cc420 */
  push32(0x112ca70bu); f_112cc420();
  /* 112ca70b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca70e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 112ca718 jmp 0x112ca729 */
  goto L_112ca729;
L_112ca71a:;
  /* 112ca71a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca720 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca723 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_112ca729:;
  /* 112ca729 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca733 jae 0x112ca7e4 */
  if (!C.cf) goto L_112ca7e4;
  /* 112ca739 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca73f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca741 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 112ca749 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112ca74c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112ca74e je 0x112ca786 */
  if (C.zf) goto L_112ca786;
  /* 112ca750 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca756 mov cl, byte ptr [eax + 0x112f0dc1] */
  CL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112ca75c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 112ca75f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca765 mov byte ptr [edx + 0x112f0dc1], cl */
  w8((uint32_t)(EDX + 0x112f0dc1), (CL));
  /* 112ca76b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca771 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca777 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 112ca77e mov byte ptr [eax + 0x112f0cc0], dl */
  w8((uint32_t)(EAX + 0x112f0cc0), (DL));
  /* 112ca784 jmp 0x112ca7df */
  goto L_112ca7df;
L_112ca786:;
  /* 112ca786 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca78c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ca78e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 112ca796 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112ca799 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ca79b je 0x112ca7d2 */
  if (C.zf) goto L_112ca7d2;
  /* 112ca79d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca7a3 mov al, byte ptr [edx + 0x112f0dc1] */
  AL = (r8((uint32_t)(EDX + 0x112f0dc1)));
  /* 112ca7a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 112ca7ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca7b1 mov byte ptr [ecx + 0x112f0dc1], al */
  w8((uint32_t)(ECX + 0x112f0dc1), (AL));
  /* 112ca7b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca7bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca7c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 112ca7ca mov byte ptr [edx + 0x112f0cc0], cl */
  w8((uint32_t)(EDX + 0x112f0cc0), (CL));
  /* 112ca7d0 jmp 0x112ca7df */
  goto L_112ca7df;
L_112ca7d2:;
  /* 112ca7d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca7d8 mov byte ptr [edx + 0x112f0cc0], 0 */
  w8((uint32_t)(EDX + 0x112f0cc0), (0x0u));
L_112ca7df:;
  /* 112ca7df jmp 0x112ca71a */
  goto L_112ca71a;
L_112ca7e4:;
  /* 112ca7e4 jmp 0x112ca8ae */
  goto L_112ca8ae;
L_112ca7e9:;
  /* 112ca7e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 112ca7f3 jmp 0x112ca804 */
  goto L_112ca804;
L_112ca7f5:;
  /* 112ca7f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca7fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca7fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_112ca804:;
  /* 112ca804 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca80e jae 0x112ca8ae */
  if (!C.cf) goto L_112ca8ae;
  /* 112ca814 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca81b jb 0x112ca858 */
  if (C.cf) goto L_112ca858;
  /* 112ca81d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca824 ja 0x112ca858 */
  if ((!C.cf&&!C.zf)) goto L_112ca858;
  /* 112ca826 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca82c mov dl, byte ptr [ecx + 0x112f0dc1] */
  DL = (r8((uint32_t)(ECX + 0x112f0dc1)));
  /* 112ca832 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 112ca835 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca83b mov byte ptr [eax + 0x112f0dc1], dl */
  w8((uint32_t)(EAX + 0x112f0dc1), (DL));
  /* 112ca841 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca847 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca84a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca850 mov byte ptr [edx + 0x112f0cc0], cl */
  w8((uint32_t)(EDX + 0x112f0cc0), (CL));
  /* 112ca856 jmp 0x112ca8a9 */
  goto L_112ca8a9;
L_112ca858:;
  /* 112ca858 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca85f jb 0x112ca89c */
  if (C.cf) goto L_112ca89c;
  /* 112ca861 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca868 ja 0x112ca89c */
  if ((!C.cf&&!C.zf)) goto L_112ca89c;
  /* 112ca86a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca870 mov cl, byte ptr [eax + 0x112f0dc1] */
  CL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112ca876 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 112ca879 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca87f mov byte ptr [edx + 0x112f0dc1], cl */
  w8((uint32_t)(EDX + 0x112f0dc1), (CL));
  /* 112ca885 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca88b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ca88e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca894 mov byte ptr [ecx + 0x112f0cc0], al */
  w8((uint32_t)(ECX + 0x112f0cc0), (AL));
  /* 112ca89a jmp 0x112ca8a9 */
  goto L_112ca8a9;
L_112ca89c:;
  /* 112ca89c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112ca8a2 mov byte ptr [edx + 0x112f0cc0], 0 */
  w8((uint32_t)(EDX + 0x112f0cc0), (0x0u));
L_112ca8a9:;
  /* 112ca8a9 jmp 0x112ca7f5 */
  goto L_112ca7f5;
L_112ca8ae:;
  /* 112ca8ae mov esp, ebp */
  ESP = (EBP);
  /* 112ca8b0 pop ebp */
  EBP = (pop32());
  /* 112ca8b1 ret  */
  ESPCHK(0x112ca5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x112ca8c0 (23 bytes, 9 insns) */
void f_112ca8c0(void) {
  FTRACE(0x112ca8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca8c1 mov ebp, esp */
  EBP = (ESP);
  /* 112ca8c3 cmp dword ptr [0x112f0cac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0cac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca8ca je 0x112ca8d3 */
  if (C.zf) goto L_112ca8d3;
  /* 112ca8cc mov eax, dword ptr [0x112f0c24] */
  EAX = (r32((uint32_t)(0x112f0c24)));
  /* 112ca8d1 jmp 0x112ca8d5 */
  goto L_112ca8d5;
L_112ca8d3:;
  /* 112ca8d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112ca8d5:;
  /* 112ca8d5 pop ebp */
  EBP = (pop32());
  /* 112ca8d6 ret  */
  ESPCHK(0x112ca8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8e0 @ 0x112ca8e0 (34 bytes, 10 insns) */
void f_112ca8e0(void) {
  FTRACE(0x112ca8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca8e1 mov ebp, esp */
  EBP = (ESP);
  /* 112ca8e3 cmp dword ptr [0x112f1070], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f1070))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca8ea jne 0x112ca900 */
  if (!C.zf) goto L_112ca900;
  /* 112ca8ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 112ca8ee call 0x112ca100 */
  push32(0x112ca8f3u); f_112ca100();
  /* 112ca8f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca8f6 mov dword ptr [0x112f1070], 1 */
  w32((uint32_t)(0x112f1070), (0x1u));
L_112ca900:;
  /* 112ca900 pop ebp */
  EBP = (pop32());
  /* 112ca901 ret  */
  ESPCHK(0x112ca8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x112ca910 (664 bytes, 267 insns) [15 switch table(s)] */
void f_112ca910(void) {
  FTRACE(0x112ca910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ca910 push ebp */
  push32((uint32_t)(EBP));
  /* 112ca911 mov ebp, esp */
  EBP = (ESP);
  /* 112ca913 push edi */
  push32((uint32_t)(EDI));
  /* 112ca914 push esi */
  push32((uint32_t)(ESI));
  /* 112ca915 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112ca918 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112ca91b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112ca91e mov eax, ecx */
  EAX = (ECX);
  /* 112ca920 mov edx, ecx */
  EDX = (ECX);
  /* 112ca922 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca924 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca926 jbe 0x112ca930 */
  if ((C.cf||C.zf)) goto L_112ca930;
  /* 112ca928 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca92a jb 0x112caaa8 */
  if (C.cf) goto L_112caaa8;
L_112ca930:;
  /* 112ca930 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112ca936 jne 0x112ca94c */
  if (!C.zf) goto L_112ca94c;
  /* 112ca938 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112ca93b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112ca93e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca941 jb 0x112ca96c */
  if (C.cf) goto L_112ca96c;
  /* 112ca943 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112ca945 jmp dword ptr [edx*4 + 0x112caa58] */
  switch (EDX) {
    case 0: goto L_112caa68;
    case 1: goto L_112caa70;
    case 2: goto L_112caa7c;
    case 3: goto L_112caa90;
    default: x86_unimpl("switch@0x112ca945 out of table"); return;
  }
L_112ca94c:;
  /* 112ca94c mov eax, edi */
  EAX = (EDI);
  /* 112ca94e mov edx, 3 */
  EDX = (0x3u);
  /* 112ca953 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ca956 jb 0x112ca964 */
  if (C.cf) goto L_112ca964;
  /* 112ca958 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112ca95b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca95d jmp dword ptr [eax*4 + 0x112ca970] */
  switch (EAX) {
    case 1: goto L_112ca980;
    case 2: goto L_112ca9ac;
    case 3: goto L_112ca9d0;
    default: x86_unimpl("switch@0x112ca95d out of table"); return;
  }
L_112ca964:;
  /* 112ca964 jmp dword ptr [ecx*4 + 0x112caa68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x112caa68)))); return;
  /* 112ca96b nop  */
  /* nop */
L_112ca96c:;
  /* 112ca96c jmp dword ptr [ecx*4 + 0x112ca9ec] */
  switch (ECX) {
    case 0: goto L_112caa4f;
    case 1: goto L_112caa3c;
    case 2: goto L_112caa34;
    case 3: goto L_112caa2c;
    case 4: goto L_112caa24;
    case 5: goto L_112caa1c;
    case 6: goto L_112caa14;
    case 7: goto L_112caa0c;
    default: x86_unimpl("switch@0x112ca96c out of table"); return;
  }
  /* 112ca973 nop  */
  /* nop */
L_112ca980:;
  /* 112ca980 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca982 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112ca984 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112ca986 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112ca989 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112ca98c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112ca98f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112ca992 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112ca995 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca998 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca99b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca99e jb 0x112ca96c */
  if (C.cf) goto L_112ca96c;
  /* 112ca9a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112ca9a2 jmp dword ptr [edx*4 + 0x112caa58] */
  switch (EDX) {
    case 0: goto L_112caa68;
    case 1: goto L_112caa70;
    case 2: goto L_112caa7c;
    case 3: goto L_112caa90;
    default: x86_unimpl("switch@0x112ca9a2 out of table"); return;
  }
  /* 112ca9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112ca9ac:;
  /* 112ca9ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca9ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112ca9b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112ca9b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112ca9b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112ca9b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112ca9bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca9be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112ca9c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca9c4 jb 0x112ca96c */
  if (C.cf) goto L_112ca96c;
  /* 112ca9c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112ca9c8 jmp dword ptr [edx*4 + 0x112caa58] */
  switch (EDX) {
    case 0: goto L_112caa68;
    case 1: goto L_112caa70;
    case 2: goto L_112caa7c;
    case 3: goto L_112caa90;
    default: x86_unimpl("switch@0x112ca9c8 out of table"); return;
  }
  /* 112ca9cf nop  */
  /* nop */
L_112ca9d0:;
  /* 112ca9d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112ca9d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112ca9d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112ca9d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112ca9d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112ca9da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112ca9db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ca9de jb 0x112ca96c */
  if (C.cf) goto L_112ca96c;
  /* 112ca9e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112ca9e2 jmp dword ptr [edx*4 + 0x112caa58] */
  switch (EDX) {
    case 0: goto L_112caa68;
    case 1: goto L_112caa70;
    case 2: goto L_112caa7c;
    case 3: goto L_112caa90;
    default: x86_unimpl("switch@0x112ca9e2 out of table"); return;
  }
  /* 112ca9e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112caa0c:;
  /* 112caa0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 112caa10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_112caa14:;
  /* 112caa14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 112caa18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_112caa1c:;
  /* 112caa1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 112caa20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_112caa24:;
  /* 112caa24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 112caa28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_112caa2c:;
  /* 112caa2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 112caa30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_112caa34:;
  /* 112caa34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 112caa38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_112caa3c:;
  /* 112caa3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 112caa40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 112caa44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112caa4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112caa4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112caa4f:;
  /* 112caa4f jmp dword ptr [edx*4 + 0x112caa58] */
  switch (EDX) {
    case 0: goto L_112caa68;
    case 1: goto L_112caa70;
    case 2: goto L_112caa7c;
    case 3: goto L_112caa90;
    default: x86_unimpl("switch@0x112caa4f out of table"); return;
  }
  /* 112caa56 mov edi, edi */
  EDI = (EDI);
L_112caa68:;
  /* 112caa68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112caa6b pop esi */
  ESI = (pop32());
  /* 112caa6c pop edi */
  EDI = (pop32());
  /* 112caa6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112caa6e ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112caa6f nop  */
  /* nop */
L_112caa70:;
  /* 112caa70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112caa72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112caa74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112caa77 pop esi */
  ESI = (pop32());
  /* 112caa78 pop edi */
  EDI = (pop32());
  /* 112caa79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112caa7a ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112caa7b nop  */
  /* nop */
L_112caa7c:;
  /* 112caa7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112caa7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112caa80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112caa83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112caa86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112caa89 pop esi */
  ESI = (pop32());
  /* 112caa8a pop edi */
  EDI = (pop32());
  /* 112caa8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112caa8c ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112caa8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112caa90:;
  /* 112caa90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112caa92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112caa94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112caa97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112caa9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112caa9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112caaa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112caaa3 pop esi */
  ESI = (pop32());
  /* 112caaa4 pop edi */
  EDI = (pop32());
  /* 112caaa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112caaa6 ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112caaa7 nop  */
  /* nop */
L_112caaa8:;
  /* 112caaa8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 112caaac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 112caab0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112caab6 jne 0x112caadc */
  if (!C.zf) goto L_112caadc;
  /* 112caab8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112caabb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112caabe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caac1 jb 0x112caad0 */
  if (C.cf) goto L_112caad0;
  /* 112caac3 std  */
  C.df=1;
  /* 112caac4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112caac6 cld  */
  C.df=0;
  /* 112caac7 jmp dword ptr [edx*4 + 0x112cabf0] */
  switch (EDX) {
    case 0: goto L_112cac00;
    case 1: goto L_112cac08;
    case 2: goto L_112cac18;
    case 3: goto L_112cac2c;
    default: x86_unimpl("switch@0x112caac7 out of table"); return;
  }
  /* 112caace mov edi, edi */
  EDI = (EDI);
L_112caad0:;
  /* 112caad0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112caad2 jmp dword ptr [ecx*4 + 0x112caba0] */
  switch (ECX) {
    case 0: goto L_112cabe7;
    default: x86_unimpl("switch@0x112caad2 out of table"); return;
  }
  /* 112caad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112caadc:;
  /* 112caadc mov eax, edi */
  EAX = (EDI);
  /* 112caade mov edx, 3 */
  EDX = (0x3u);
  /* 112caae3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caae6 jb 0x112caaf4 */
  if (C.cf) goto L_112caaf4;
  /* 112caae8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112caaeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112caaed jmp dword ptr [eax*4 + 0x112caaf8] */
  switch (EAX) {
    case 1: goto L_112cab08;
    case 2: goto L_112cab28;
    case 3: goto L_112cab50;
    default: x86_unimpl("switch@0x112caaed out of table"); return;
  }
L_112caaf4:;
  /* 112caaf4 jmp dword ptr [ecx*4 + 0x112cabf0] */
  switch (ECX) {
    case 0: goto L_112cac00;
    case 1: goto L_112cac08;
    case 2: goto L_112cac18;
    case 3: goto L_112cac2c;
    default: x86_unimpl("switch@0x112caaf4 out of table"); return;
  }
  /* 112caafb nop  */
  /* nop */
L_112cab08:;
  /* 112cab08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cab0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cab0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cab10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 112cab11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cab14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 112cab15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cab18 jb 0x112caad0 */
  if (C.cf) goto L_112caad0;
  /* 112cab1a std  */
  C.df=1;
  /* 112cab1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cab1d cld  */
  C.df=0;
  /* 112cab1e jmp dword ptr [edx*4 + 0x112cabf0] */
  switch (EDX) {
    case 0: goto L_112cac00;
    case 1: goto L_112cac08;
    case 2: goto L_112cac18;
    case 3: goto L_112cac2c;
    default: x86_unimpl("switch@0x112cab1e out of table"); return;
  }
  /* 112cab25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cab28:;
  /* 112cab28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cab2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cab2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cab30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cab33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cab36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cab39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cab3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cab3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cab42 jb 0x112caad0 */
  if (C.cf) goto L_112caad0;
  /* 112cab44 std  */
  C.df=1;
  /* 112cab45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cab47 cld  */
  C.df=0;
  /* 112cab48 jmp dword ptr [edx*4 + 0x112cabf0] */
  switch (EDX) {
    case 0: goto L_112cac00;
    case 1: goto L_112cac08;
    case 2: goto L_112cac18;
    case 3: goto L_112cac2c;
    default: x86_unimpl("switch@0x112cab48 out of table"); return;
  }
  /* 112cab4f nop  */
  /* nop */
L_112cab50:;
  /* 112cab50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cab53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cab55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cab58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cab5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cab5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cab61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cab64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cab67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cab6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cab6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cab70 jb 0x112caad0 */
  if (C.cf) goto L_112caad0;
  /* 112cab76 std  */
  C.df=1;
  /* 112cab77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cab79 cld  */
  C.df=0;
  /* 112cab7a jmp dword ptr [edx*4 + 0x112cabf0] */
  switch (EDX) {
    case 0: goto L_112cac00;
    case 1: goto L_112cac08;
    case 2: goto L_112cac18;
    case 3: goto L_112cac2c;
    default: x86_unimpl("switch@0x112cab7a out of table"); return;
  }
  /* 112cab81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 112cab84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 112cab85 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112cab86 sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cab88 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 112cab89 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112cab8a sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cab8c mov ah, 0xab */
  AH = (0xabu);
  /* 112cab8e sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cab90 mov esp, 0xc4112cab */
  ESP = (0xc4112cabu);
  /* 112cab95 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112cab96 sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cab98 int3  */
  x86_unimpl("int3 @ 0x112cab98");
  /* 112cab99 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112cab9a sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cab9c aam 0xab */
  x86_unimpl("aam @ 0x112cab9c");
  /* 112cab9e sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112caba4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 112caba8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 112cabac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 112cabb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 112cabb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 112cabb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 112cabbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 112cabc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 112cabc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 112cabc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 112cabcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 112cabd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 112cabd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 112cabd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 112cabdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112cabe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cabe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112cabe7:;
  /* 112cabe7 jmp dword ptr [edx*4 + 0x112cabf0] */
  switch (EDX) {
    case 0: goto L_112cac00;
    case 1: goto L_112cac08;
    case 2: goto L_112cac18;
    case 3: goto L_112cac2c;
    default: x86_unimpl("switch@0x112cabe7 out of table"); return;
  }
  /* 112cabee mov edi, edi */
  EDI = (EDI);
L_112cac00:;
  /* 112cac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cac03 pop esi */
  ESI = (pop32());
  /* 112cac04 pop edi */
  EDI = (pop32());
  /* 112cac05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cac06 ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112cac07 nop  */
  /* nop */
L_112cac08:;
  /* 112cac08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cac0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cac0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cac11 pop esi */
  ESI = (pop32());
  /* 112cac12 pop edi */
  EDI = (pop32());
  /* 112cac13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cac14 ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112cac15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cac18:;
  /* 112cac18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cac1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cac1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cac21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cac24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cac27 pop esi */
  ESI = (pop32());
  /* 112cac28 pop edi */
  EDI = (pop32());
  /* 112cac29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cac2a ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
  /* 112cac2b nop  */
  /* nop */
L_112cac2c:;
  /* 112cac2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cac2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cac32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cac35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cac38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cac3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cac3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cac41 pop esi */
  ESI = (pop32());
  /* 112cac42 pop edi */
  EDI = (pop32());
  /* 112cac43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cac44 ret  */
  ESPCHK(0x112ca910u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x112cac50 (104 bytes, 43 insns) */
void f_112cac50(void) {
  FTRACE(0x112cac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cac50 push ebx */
  push32((uint32_t)(EBX));
  /* 112cac51 push esi */
  push32((uint32_t)(ESI));
  /* 112cac52 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 112cac56 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cac58 jne 0x112cac72 */
  if (!C.zf) goto L_112cac72;
  /* 112cac5a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 112cac5e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112cac62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112cac64 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cac66 mov ebx, eax */
  EBX = (EAX);
  /* 112cac68 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 112cac6c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cac6e mov edx, ebx */
  EDX = (EBX);
  /* 112cac70 jmp 0x112cacb3 */
  goto L_112cacb3;
L_112cac72:;
  /* 112cac72 mov ecx, eax */
  ECX = (EAX);
  /* 112cac74 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 112cac78 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 112cac7c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_112cac80:;
  /* 112cac80 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112cac82 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 112cac84 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112cac86 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 112cac88 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cac8a jne 0x112cac80 */
  if (!C.zf) goto L_112cac80;
  /* 112cac8c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cac8e mov esi, eax */
  ESI = (EAX);
  /* 112cac90 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112cac94 mov ecx, eax */
  ECX = (EAX);
  /* 112cac96 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112cac9a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112cac9c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cac9e jb 0x112cacae */
  if (C.cf) goto L_112cacae;
  /* 112caca0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caca4 ja 0x112cacae */
  if ((!C.cf&&!C.zf)) goto L_112cacae;
  /* 112caca6 jb 0x112cacaf */
  if (C.cf) goto L_112cacaf;
  /* 112caca8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cacac jbe 0x112cacaf */
  if ((C.cf||C.zf)) goto L_112cacaf;
L_112cacae:;
  /* 112cacae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_112cacaf:;
  /* 112cacaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112cacb1 mov eax, esi */
  EAX = (ESI);
L_112cacb3:;
  /* 112cacb3 pop esi */
  ESI = (pop32());
  /* 112cacb4 pop ebx */
  EBX = (pop32());
  /* 112cacb5 ret 0x10 */
  ESPCHK(0x112cac50u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x112cacc0 (117 bytes, 44 insns) */
void f_112cacc0(void) {
  FTRACE(0x112cacc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cacc0 push ebx */
  push32((uint32_t)(EBX));
  /* 112cacc1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112cacc5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cacc7 jne 0x112cace1 */
  if (!C.zf) goto L_112cace1;
  /* 112cacc9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 112caccd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 112cacd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112cacd3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cacd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112cacd9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cacdb mov eax, edx */
  EAX = (EDX);
  /* 112cacdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112cacdf jmp 0x112cad31 */
  goto L_112cad31;
L_112cace1:;
  /* 112cace1 mov ecx, eax */
  ECX = (EAX);
  /* 112cace3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 112cace7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 112caceb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_112cacef:;
  /* 112cacef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112cacf1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 112cacf3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112cacf5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 112cacf7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cacf9 jne 0x112cacef */
  if (!C.zf) goto L_112cacef;
  /* 112cacfb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cacfd mov ecx, eax */
  ECX = (EAX);
  /* 112cacff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112cad03 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 112cad04 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112cad08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cad0a jb 0x112cad1a */
  if (C.cf) goto L_112cad1a;
  /* 112cad0c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cad10 ja 0x112cad1a */
  if ((!C.cf&&!C.zf)) goto L_112cad1a;
  /* 112cad12 jb 0x112cad22 */
  if (C.cf) goto L_112cad22;
  /* 112cad14 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cad18 jbe 0x112cad22 */
  if ((C.cf||C.zf)) goto L_112cad22;
L_112cad1a:;
  /* 112cad1a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cad1e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_112cad22:;
  /* 112cad22 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cad26 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cad2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cad2c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cad2e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_112cad31:;
  /* 112cad31 pop ebx */
  EBX = (pop32());
  /* 112cad32 ret 0x10 */
  ESPCHK(0x112cacc0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ad40 @ 0x112cad40 (628 bytes, 214 insns) */
void f_112cad40(void) {
  FTRACE(0x112cad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cad40 push ebp */
  push32((uint32_t)(EBP));
  /* 112cad41 mov ebp, esp */
  EBP = (ESP);
  /* 112cad43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cad46 push ebx */
  push32((uint32_t)(EBX));
  /* 112cad47 push esi */
  push32((uint32_t)(ESI));
  /* 112cad48 push edi */
  push32((uint32_t)(EDI));
L_112cad49:;
  /* 112cad49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cad4d jne 0x112cad6d */
  if (!C.zf) goto L_112cad6d;
  /* 112cad4f push 0x112eaff4 */
  push32((uint32_t)(0x112eaff4u));
  /* 112cad54 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cad56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 112cad58 push 0x112eafe8 */
  push32((uint32_t)(0x112eafe8u));
  /* 112cad5d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cad5f call 0x112c30f0 */
  push32(0x112cad64u); f_112c30f0();
  /* 112cad64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cad67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cad6a jne 0x112cad6d */
  if (!C.zf) goto L_112cad6d;
  /* 112cad6c int3  */
  x86_unimpl("int3 @ 0x112cad6c");
L_112cad6d:;
  /* 112cad6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cad6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cad71 jne 0x112cad49 */
  if (!C.zf) goto L_112cad49;
  /* 112cad73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cad76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cad79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cad7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112cad7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112cad82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cad85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cad88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 112cad8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cad90 je 0x112cad9f */
  if (C.zf) goto L_112cad9f;
  /* 112cad92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cad95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cad98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 112cad9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cad9d je 0x112cadb5 */
  if (C.zf) goto L_112cadb5;
L_112cad9f:;
  /* 112cad9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cada2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112cada5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 112cada7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cadaa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 112cadad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cadb0 jmp 0x112cafad */
  goto L_112cafad;
L_112cadb5:;
  /* 112cadb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cadb8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112cadbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112cadbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cadc0 je 0x112cae0c */
  if (C.zf) goto L_112cae0c;
  /* 112cadc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cadc5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 112cadcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cadcf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112cadd2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 112cadd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cadd7 je 0x112cadf5 */
  if (C.zf) goto L_112cadf5;
  /* 112cadd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caddc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caddf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112cade2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112cade4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cade7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cadea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 112caded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cadf0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 112cadf3 jmp 0x112cae0c */
  goto L_112cae0c;
L_112cadf5:;
  /* 112cadf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cadf8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cadfb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 112cadfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae01 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 112cae04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cae07 jmp 0x112cafad */
  goto L_112cafad;
L_112cae0c:;
  /* 112cae0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cae12 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 112cae15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae18 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 112cae1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae1e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cae21 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 112cae24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae27 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 112cae2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae2d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 112cae34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cae3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cae3e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112cae41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cae47 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 112cae4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cae4f jne 0x112cae7f */
  if (!C.zf) goto L_112cae7f;
  /* 112cae51 cmp dword ptr [ebp - 8], 0x112ee140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x112ee140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cae58 je 0x112cae63 */
  if (C.zf) goto L_112cae63;
  /* 112cae5a cmp dword ptr [ebp - 8], 0x112ee160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x112ee160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cae61 jne 0x112cae73 */
  if (!C.zf) goto L_112cae73;
L_112cae63:;
  /* 112cae63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cae66 push edx */
  push32((uint32_t)(EDX));
  /* 112cae67 call 0x112cccb0 */
  push32(0x112cae6cu); f_112cccb0();
  /* 112cae6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cae6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cae71 jne 0x112cae7f */
  if (!C.zf) goto L_112cae7f;
L_112cae73:;
  /* 112cae73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae76 push eax */
  push32((uint32_t)(EAX));
  /* 112cae77 call 0x112ccbe0 */
  push32(0x112cae7cu); f_112ccbe0();
  /* 112cae7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cae7f:;
  /* 112cae7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae82 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cae85 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 112cae8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cae8d je 0x112caf6b */
  if (C.zf) goto L_112caf6b;
L_112cae93:;
  /* 112cae93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cae99 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 112cae9b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cae9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112caea0 jge 0x112caec3 */
  if ((C.sf==C.of)) goto L_112caec3;
  /* 112caea2 push 0x112eafa8 */
  push32((uint32_t)(0x112eafa8u));
  /* 112caea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112caea9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 112caeae push 0x112eafe8 */
  push32((uint32_t)(0x112eafe8u));
  /* 112caeb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112caeb5 call 0x112c30f0 */
  push32(0x112caebau); f_112c30f0();
  /* 112caeba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112caebd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caec0 jne 0x112caec3 */
  if (!C.zf) goto L_112caec3;
  /* 112caec2 int3  */
  x86_unimpl("int3 @ 0x112caec2");
L_112caec3:;
  /* 112caec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112caec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112caec7 jne 0x112cae93 */
  if (!C.zf) goto L_112cae93;
  /* 112caec9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caecc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caecf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112caed1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112caed4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112caed7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caeda mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112caedd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112caee0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caee3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112caee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caee8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112caeeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112caeee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caef1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112caef4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caef8 jle 0x112caf16 */
  if ((C.zf||C.sf!=C.of)) goto L_112caf16;
  /* 112caefa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112caefd push ecx */
  push32((uint32_t)(ECX));
  /* 112caefe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caf01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112caf04 push eax */
  push32((uint32_t)(EAX));
  /* 112caf05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112caf08 push ecx */
  push32((uint32_t)(ECX));
  /* 112caf09 call 0x112cc8d0 */
  push32(0x112caf0eu); f_112cc8d0();
  /* 112caf0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112caf11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112caf14 jmp 0x112caf5e */
  goto L_112caf5e;
L_112caf16:;
  /* 112caf16 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caf1a je 0x112caf39 */
  if (C.zf) goto L_112caf39;
  /* 112caf1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112caf1f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 112caf22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112caf25 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112caf28 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112caf2b mov ecx, dword ptr [edx*4 + 0x112f0f20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112caf32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112caf34 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112caf37 jmp 0x112caf40 */
  goto L_112caf40;
L_112caf39:;
  /* 112caf39 mov dword ptr [ebp - 0x14], 0x112eda60 */
  w32((uint32_t)(EBP + -0x14), (0x112eda60u));
L_112caf40:;
  /* 112caf40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112caf43 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 112caf47 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 112caf4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112caf4c je 0x112caf5e */
  if (C.zf) goto L_112caf5e;
  /* 112caf4e push 2 */
  push32((uint32_t)(0x2u));
  /* 112caf50 push 0 */
  push32((uint32_t)(0x0u));
  /* 112caf52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112caf55 push ecx */
  push32((uint32_t)(ECX));
  /* 112caf56 call 0x112cc780 */
  push32(0x112caf5bu); f_112cc780();
  /* 112caf5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112caf5e:;
  /* 112caf5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caf61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112caf64 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 112caf67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 112caf69 jmp 0x112caf89 */
  goto L_112caf89;
L_112caf6b:;
  /* 112caf6b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112caf72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112caf75 push edx */
  push32((uint32_t)(EDX));
  /* 112caf76 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 112caf79 push eax */
  push32((uint32_t)(EAX));
  /* 112caf7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112caf7d push ecx */
  push32((uint32_t)(ECX));
  /* 112caf7e call 0x112cc8d0 */
  push32(0x112caf83u); f_112cc8d0();
  /* 112caf83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112caf86 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112caf89:;
  /* 112caf89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112caf8c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112caf8f je 0x112cafa5 */
  if (C.zf) goto L_112cafa5;
  /* 112caf91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caf94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112caf97 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 112caf9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112caf9d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 112cafa0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cafa3 jmp 0x112cafad */
  goto L_112cafad;
L_112cafa5:;
  /* 112cafa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cafa8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_112cafad:;
  /* 112cafad pop edi */
  EDI = (pop32());
  /* 112cafae pop esi */
  ESI = (pop32());
  /* 112cafaf pop ebx */
  EBX = (pop32());
  /* 112cafb0 mov esp, ebp */
  ESP = (EBP);
  /* 112cafb2 pop ebp */
  EBP = (pop32());
  /* 112cafb3 ret  */
  ESPCHK(0x112cad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x112cafc0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_112cafc0(void) {
  FTRACE(0x112cafc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cafc0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cafc1 mov ebp, esp */
  EBP = (ESP);
  /* 112cafc3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cafc9 push ebx */
  push32((uint32_t)(EBX));
  /* 112cafca push esi */
  push32((uint32_t)(ESI));
  /* 112cafcb push edi */
  push32((uint32_t)(EDI));
  /* 112cafcc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112cafd3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 112cafdd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_112cafe4:;
  /* 112cafe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cafe7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112cafe9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 112cafec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112caff0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112caff3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112caff6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112caff9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112caffb je 0x112cbbd7 */
  if (C.zf) goto L_112cbbd7;
  /* 112cb001 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb008 jl 0x112cbbd7 */
  if ((C.sf!=C.of)) goto L_112cbbd7;
  /* 112cb00e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb012 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb015 jl 0x112cb036 */
  if ((C.sf!=C.of)) goto L_112cb036;
  /* 112cb017 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb01b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb01e jg 0x112cb036 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cb036;
  /* 112cb020 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb024 movsx ecx, byte ptr [eax + 0x112eafe0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x112eafe0))));
  /* 112cb02b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 112cb02e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 112cb034 jmp 0x112cb040 */
  goto L_112cb040;
L_112cb036:;
  /* 112cb036 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_112cb040:;
  /* 112cb040 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 112cb046 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112cb049 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cb04c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cb04f movsx edx, byte ptr [ecx + eax*8 + 0x112eb000] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x112eb000))));
  /* 112cb057 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112cb05a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112cb05d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cb060 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 112cb066 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb06d ja 0x112cbbd2 */
  if ((!C.cf&&!C.zf)) goto L_112cbbd2;
  /* 112cb073 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 112cb079 jmp dword ptr [ecx*4 + 0x112cbbe4] */
  switch (ECX) {
    case 0: goto L_112cb080;
    case 1: goto L_112cb11a;
    case 2: goto L_112cb15c;
    case 3: goto L_112cb1cb;
    case 4: goto L_112cb223;
    case 5: goto L_112cb232;
    case 6: goto L_112cb27e;
    case 7: goto L_112cb311;
    case 8: goto L_112cb1a8;
    case 9: goto L_112cb1b3;
    case 10: goto L_112cb19e;
    case 11: goto L_112cb193;
    case 12: goto L_112cb1be;
    case 13: goto L_112cb1c6;
    default: x86_unimpl("switch@0x112cb079 out of table"); return;
  }
L_112cb080:;
  /* 112cb080 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 112cb087 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cb08a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112cb090 mov eax, dword ptr [0x112edc98] */
  EAX = (r32((uint32_t)(0x112edc98)));
  /* 112cb095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cb097 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 112cb09b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb0a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cb0a3 je 0x112cb0fd */
  if (C.zf) goto L_112cb0fd;
  /* 112cb0a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 112cb0ab push edx */
  push32((uint32_t)(EDX));
  /* 112cb0ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cb0af push eax */
  push32((uint32_t)(EAX));
  /* 112cb0b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb0b5 call 0x112cbcf0 */
  push32(0x112cb0bau); f_112cbcf0();
  /* 112cb0ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb0bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cb0c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cb0c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 112cb0c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cb0c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb0cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_112cb0ce:;
  /* 112cb0ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb0d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb0d4 jne 0x112cb0f7 */
  if (!C.zf) goto L_112cb0f7;
  /* 112cb0d6 push 0x112eb080 */
  push32((uint32_t)(0x112eb080u));
  /* 112cb0db push 0 */
  push32((uint32_t)(0x0u));
  /* 112cb0dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 112cb0e2 push 0x112eb074 */
  push32((uint32_t)(0x112eb074u));
  /* 112cb0e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cb0e9 call 0x112c30f0 */
  push32(0x112cb0eeu); f_112c30f0();
  /* 112cb0ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb0f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb0f4 jne 0x112cb0f7 */
  if (!C.zf) goto L_112cb0f7;
  /* 112cb0f6 int3  */
  x86_unimpl("int3 @ 0x112cb0f6");
L_112cb0f7:;
  /* 112cb0f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cb0f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb0fb jne 0x112cb0ce */
  if (!C.zf) goto L_112cb0ce;
L_112cb0fd:;
  /* 112cb0fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 112cb103 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cb107 push edx */
  push32((uint32_t)(EDX));
  /* 112cb108 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb10c push eax */
  push32((uint32_t)(EAX));
  /* 112cb10d call 0x112cbcf0 */
  push32(0x112cb112u); f_112cbcf0();
  /* 112cb112 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb115 jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb11a:;
  /* 112cb11a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112cb121 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cb124 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 112cb12a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 112cb130 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 112cb136 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 112cb13c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112cb13f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cb146 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 112cb150 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 112cb157 jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb15c:;
  /* 112cb15c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb160 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 112cb166 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 112cb16c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb16f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 112cb175 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb17c ja 0x112cb1c6 */
  if ((!C.cf&&!C.zf)) goto L_112cb1c6;
  /* 112cb17e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 112cb184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cb186 mov al, byte ptr [ecx + 0x112cbc1c] */
  AL = (r8((uint32_t)(ECX + 0x112cbc1c)));
  /* 112cb18c jmp dword ptr [eax*4 + 0x112cbc04] */
  switch (EAX) {
    case 0: goto L_112cb1a8;
    case 1: goto L_112cb1b3;
    case 2: goto L_112cb19e;
    case 3: goto L_112cb193;
    case 4: goto L_112cb1be;
    case 5: goto L_112cb1c6;
    default: x86_unimpl("switch@0x112cb18c out of table"); return;
  }
L_112cb193:;
  /* 112cb193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb196 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb199 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cb19c jmp 0x112cb1c6 */
  goto L_112cb1c6;
L_112cb19e:;
  /* 112cb19e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb1a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 112cb1a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cb1a6 jmp 0x112cb1c6 */
  goto L_112cb1c6;
L_112cb1a8:;
  /* 112cb1a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb1ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb1ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cb1b1 jmp 0x112cb1c6 */
  goto L_112cb1c6;
L_112cb1b3:;
  /* 112cb1b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb1b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 112cb1b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cb1bc jmp 0x112cb1c6 */
  goto L_112cb1c6;
L_112cb1be:;
  /* 112cb1be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb1c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 112cb1c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112cb1c6:;
  /* 112cb1c6 jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb1cb:;
  /* 112cb1cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb1cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb1d2 jne 0x112cb207 */
  if (!C.zf) goto L_112cb207;
  /* 112cb1d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112cb1d7 push edx */
  push32((uint32_t)(EDX));
  /* 112cb1d8 call 0x112cbe00 */
  push32(0x112cb1ddu); f_112cbe00();
  /* 112cb1dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb1e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 112cb1e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb1ed jge 0x112cb205 */
  if ((C.sf==C.of)) goto L_112cb205;
  /* 112cb1ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb1f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 112cb1f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cb1f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 112cb1fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cb1ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_112cb205:;
  /* 112cb205 jmp 0x112cb21e */
  goto L_112cb21e;
L_112cb207:;
  /* 112cb207 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 112cb20d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cb210 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb214 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 112cb218 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_112cb21e:;
  /* 112cb21e jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb223:;
  /* 112cb223 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 112cb22d jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb232:;
  /* 112cb232 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb236 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb239 jne 0x112cb262 */
  if (!C.zf) goto L_112cb262;
  /* 112cb23b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 112cb23e push eax */
  push32((uint32_t)(EAX));
  /* 112cb23f call 0x112cbe00 */
  push32(0x112cb244u); f_112cbe00();
  /* 112cb244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb247 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 112cb24d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb254 jge 0x112cb260 */
  if ((C.sf==C.of)) goto L_112cb260;
  /* 112cb256 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_112cb260:;
  /* 112cb260 jmp 0x112cb279 */
  goto L_112cb279;
L_112cb262:;
  /* 112cb262 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 112cb268 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cb26b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb26f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 112cb273 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_112cb279:;
  /* 112cb279 jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb27e:;
  /* 112cb27e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb282 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 112cb288 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 112cb28e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb291 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 112cb297 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb29e ja 0x112cb30c */
  if ((!C.cf&&!C.zf)) goto L_112cb30c;
  /* 112cb2a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 112cb2a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cb2a8 mov al, byte ptr [ecx + 0x112cbc41] */
  AL = (r8((uint32_t)(ECX + 0x112cbc41)));
  /* 112cb2ae jmp dword ptr [eax*4 + 0x112cbc2d] */
  switch (EAX) {
    case 0: goto L_112cb2c0;
    case 1: goto L_112cb2f9;
    case 2: goto L_112cb2b5;
    case 3: goto L_112cb303;
    case 4: goto L_112cb30c;
    default: x86_unimpl("switch@0x112cb2ae out of table"); return;
  }
L_112cb2b5:;
  /* 112cb2b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb2b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb2bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cb2be jmp 0x112cb30c */
  goto L_112cb30c;
L_112cb2c0:;
  /* 112cb2c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cb2c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cb2c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb2c9 jne 0x112cb2eb */
  if (!C.zf) goto L_112cb2eb;
  /* 112cb2cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cb2ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112cb2d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb2d5 jne 0x112cb2eb */
  if (!C.zf) goto L_112cb2eb;
  /* 112cb2d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cb2da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb2dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112cb2e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb2e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112cb2e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cb2e9 jmp 0x112cb2f7 */
  goto L_112cb2f7;
L_112cb2eb:;
  /* 112cb2eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 112cb2f2 jmp 0x112cb080 */
  goto L_112cb080;
L_112cb2f7:;
  /* 112cb2f7 jmp 0x112cb30c */
  goto L_112cb30c;
L_112cb2f9:;
  /* 112cb2f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb2fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 112cb2fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cb301 jmp 0x112cb30c */
  goto L_112cb30c;
L_112cb303:;
  /* 112cb303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb306 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112cb309 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112cb30c:;
  /* 112cb30c jmp 0x112cbbd2 */
  goto L_112cbbd2;
L_112cb311:;
  /* 112cb311 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb315 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 112cb31b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 112cb321 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb324 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 112cb32a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb331 ja 0x112cb9f7 */
  if ((!C.cf&&!C.zf)) goto L_112cb9f7;
  /* 112cb337 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 112cb33d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cb33f mov cl, byte ptr [edx + 0x112cbcac] */
  CL = (r8((uint32_t)(EDX + 0x112cbcac)));
  /* 112cb345 jmp dword ptr [ecx*4 + 0x112cbc70] */
  switch (ECX) {
    case 0: goto L_112cb34c;
    case 1: goto L_112cb5e0;
    case 2: goto L_112cb470;
    case 3: goto L_112cb719;
    case 4: goto L_112cb3db;
    case 5: goto L_112cb361;
    case 6: goto L_112cb6eb;
    case 7: goto L_112cb5f0;
    case 8: goto L_112cb595;
    case 9: goto L_112cb765;
    case 10: goto L_112cb70f;
    case 11: goto L_112cb486;
    case 12: goto L_112cb703;
    case 13: goto L_112cb725;
    case 14: goto L_112cb9f7;
    default: x86_unimpl("switch@0x112cb345 out of table"); return;
  }
L_112cb34c:;
  /* 112cb34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb34f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb356 jne 0x112cb361 */
  if (!C.zf) goto L_112cb361;
  /* 112cb358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb35b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112cb35e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112cb361:;
  /* 112cb361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb364 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb36a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb36c je 0x112cb3a7 */
  if (C.zf) goto L_112cb3a7;
  /* 112cb36e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 112cb371 push eax */
  push32((uint32_t)(EAX));
  /* 112cb372 call 0x112cbe40 */
  push32(0x112cb377u); f_112cbe40();
  /* 112cb377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb37a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 112cb37e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 112cb382 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb383 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 112cb389 push edx */
  push32((uint32_t)(EDX));
  /* 112cb38a call 0x112ccf20 */
  push32(0x112cb38fu); f_112ccf20();
  /* 112cb38f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb392 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112cb395 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb399 jge 0x112cb3a5 */
  if ((C.sf==C.of)) goto L_112cb3a5;
  /* 112cb39b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_112cb3a5:;
  /* 112cb3a5 jmp 0x112cb3cd */
  goto L_112cb3cd;
L_112cb3a7:;
  /* 112cb3a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 112cb3aa push eax */
  push32((uint32_t)(EAX));
  /* 112cb3ab call 0x112cbe00 */
  push32(0x112cb3b0u); f_112cbe00();
  /* 112cb3b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb3b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 112cb3ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 112cb3c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 112cb3c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_112cb3cd:;
  /* 112cb3cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 112cb3d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112cb3d6 jmp 0x112cb9f7 */
  goto L_112cb9f7;
L_112cb3db:;
  /* 112cb3db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 112cb3de push eax */
  push32((uint32_t)(EAX));
  /* 112cb3df call 0x112cbe00 */
  push32(0x112cb3e4u); f_112cbe00();
  /* 112cb3e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb3e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 112cb3ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb3f4 je 0x112cb402 */
  if (C.zf) goto L_112cb402;
  /* 112cb3f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112cb3fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb400 jne 0x112cb41c */
  if (!C.zf) goto L_112cb41c;
L_112cb402:;
  /* 112cb402 mov edx, dword ptr [0x112edfb0] */
  EDX = (r32((uint32_t)(0x112edfb0)));
  /* 112cb408 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112cb40b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb40e push eax */
  push32((uint32_t)(EAX));
  /* 112cb40f call 0x112c6e60 */
  push32(0x112cb414u); f_112c6e60();
  /* 112cb414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb417 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112cb41a jmp 0x112cb46b */
  goto L_112cb46b;
L_112cb41c:;
  /* 112cb41c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb41f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb425 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cb427 je 0x112cb44c */
  if (C.zf) goto L_112cb44c;
  /* 112cb429 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112cb42f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112cb432 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112cb435 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112cb43b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 112cb43e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112cb440 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112cb443 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 112cb44a jmp 0x112cb46b */
  goto L_112cb46b;
L_112cb44c:;
  /* 112cb44c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 112cb453 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112cb459 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112cb45c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112cb45f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112cb465 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 112cb468 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112cb46b:;
  /* 112cb46b jmp 0x112cb9f7 */
  goto L_112cb9f7;
L_112cb470:;
  /* 112cb470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb473 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb479 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cb47b jne 0x112cb486 */
  if (!C.zf) goto L_112cb486;
  /* 112cb47d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb480 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112cb483 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112cb486:;
  /* 112cb486 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb48d jne 0x112cb49b */
  if (!C.zf) goto L_112cb49b;
  /* 112cb48f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 112cb499 jmp 0x112cb4a7 */
  goto L_112cb4a7;
L_112cb49b:;
  /* 112cb49b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 112cb4a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_112cb4a7:;
  /* 112cb4a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 112cb4ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 112cb4b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112cb4b6 push edx */
  push32((uint32_t)(EDX));
  /* 112cb4b7 call 0x112cbe00 */
  push32(0x112cb4bcu); f_112cbe00();
  /* 112cb4bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb4bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112cb4c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb4c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb4cc je 0x112cb536 */
  if (C.zf) goto L_112cb536;
  /* 112cb4ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb4d2 jne 0x112cb4dd */
  if (!C.zf) goto L_112cb4dd;
  /* 112cb4d4 mov ecx, dword ptr [0x112edfb4] */
  ECX = (r32((uint32_t)(0x112edfb4)));
  /* 112cb4da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_112cb4dd:;
  /* 112cb4dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 112cb4e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb4e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_112cb4ed:;
  /* 112cb4ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 112cb4f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 112cb4f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb4fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 112cb502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb504 je 0x112cb526 */
  if (C.zf) goto L_112cb526;
  /* 112cb506 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 112cb50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cb50e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 112cb511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb513 je 0x112cb526 */
  if (C.zf) goto L_112cb526;
  /* 112cb515 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 112cb51b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb51e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 112cb524 jmp 0x112cb4ed */
  goto L_112cb4ed;
L_112cb526:;
  /* 112cb526 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 112cb52c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb52f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112cb531 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112cb534 jmp 0x112cb590 */
  goto L_112cb590;
L_112cb536:;
  /* 112cb536 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb53a jne 0x112cb544 */
  if (!C.zf) goto L_112cb544;
  /* 112cb53c mov eax, dword ptr [0x112edfb0] */
  EAX = (r32((uint32_t)(0x112edfb0)));
  /* 112cb541 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_112cb544:;
  /* 112cb544 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb547 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_112cb54d:;
  /* 112cb54d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 112cb553 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 112cb559 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb55c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 112cb562 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb564 je 0x112cb584 */
  if (C.zf) goto L_112cb584;
  /* 112cb566 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 112cb56c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cb56f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb571 je 0x112cb584 */
  if (C.zf) goto L_112cb584;
  /* 112cb573 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 112cb579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb57c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 112cb582 jmp 0x112cb54d */
  goto L_112cb54d;
L_112cb584:;
  /* 112cb584 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 112cb58a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb58d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_112cb590:;
  /* 112cb590 jmp 0x112cb9f7 */
  goto L_112cb9f7;
L_112cb595:;
  /* 112cb595 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112cb598 push edx */
  push32((uint32_t)(EDX));
  /* 112cb599 call 0x112cbe00 */
  push32(0x112cb59eu); f_112cbe00();
  /* 112cb59e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb5a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 112cb5a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb5aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb5ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb5af je 0x112cb5c3 */
  if (C.zf) goto L_112cb5c3;
  /* 112cb5b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 112cb5b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 112cb5be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 112cb5c1 jmp 0x112cb5d1 */
  goto L_112cb5d1;
L_112cb5c3:;
  /* 112cb5c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 112cb5c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 112cb5cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_112cb5d1:;
  /* 112cb5d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 112cb5db jmp 0x112cb9f7 */
  goto L_112cb9f7;
L_112cb5e0:;
  /* 112cb5e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112cb5e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 112cb5ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 112cb5ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_112cb5f0:;
  /* 112cb5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb5f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 112cb5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cb5f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 112cb5fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112cb601 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb608 jge 0x112cb616 */
  if ((C.sf==C.of)) goto L_112cb616;
  /* 112cb60a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 112cb614 jmp 0x112cb632 */
  goto L_112cb632;
L_112cb616:;
  /* 112cb616 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb61d jne 0x112cb632 */
  if (!C.zf) goto L_112cb632;
  /* 112cb61f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb623 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb626 jne 0x112cb632 */
  if (!C.zf) goto L_112cb632;
  /* 112cb628 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_112cb632:;
  /* 112cb632 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cb635 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb638 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 112cb63b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cb63e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb641 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112cb643 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112cb646 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 112cb64c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 112cb652 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cb655 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb656 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 112cb65c push edx */
  push32((uint32_t)(EDX));
  /* 112cb65d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb661 push eax */
  push32((uint32_t)(EAX));
  /* 112cb662 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb665 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb666 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 112cb66c push edx */
  push32((uint32_t)(EDX));
  /* 112cb66d call dword ptr [0x112ee3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ee3a0))), 0x112cb673u);
  /* 112cb673 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb679 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb67e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb680 je 0x112cb698 */
  if (C.zf) goto L_112cb698;
  /* 112cb682 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb689 jne 0x112cb698 */
  if (!C.zf) goto L_112cb698;
  /* 112cb68b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb68e push ecx */
  push32((uint32_t)(ECX));
  /* 112cb68f call dword ptr [0x112ee3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ee3ac))), 0x112cb695u);
  /* 112cb695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cb698:;
  /* 112cb698 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112cb69c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb69f jne 0x112cb6ba */
  if (!C.zf) goto L_112cb6ba;
  /* 112cb6a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb6a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb6ab jne 0x112cb6ba */
  if (!C.zf) goto L_112cb6ba;
  /* 112cb6ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb6b1 call dword ptr [0x112ee3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ee3a4))), 0x112cb6b7u);
  /* 112cb6b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cb6ba:;
  /* 112cb6ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb6bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cb6c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb6c3 jne 0x112cb6d7 */
  if (!C.zf) goto L_112cb6d7;
  /* 112cb6c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb6c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112cb6cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cb6ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb6d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb6d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_112cb6d7:;
  /* 112cb6d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb6da push eax */
  push32((uint32_t)(EAX));
  /* 112cb6db call 0x112c6e60 */
  push32(0x112cb6e0u); f_112c6e60();
  /* 112cb6e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb6e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112cb6e6 jmp 0x112cb9f7 */
  goto L_112cb9f7;
L_112cb6eb:;
  /* 112cb6eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb6ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb6f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cb6f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 112cb6fe jmp 0x112cb785 */
  goto L_112cb785;
L_112cb703:;
  /* 112cb703 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 112cb70d jmp 0x112cb785 */
  goto L_112cb785;
L_112cb70f:;
  /* 112cb70f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_112cb719:;
  /* 112cb719 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 112cb723 jmp 0x112cb72f */
  goto L_112cb72f;
L_112cb725:;
  /* 112cb725 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_112cb72f:;
  /* 112cb72f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 112cb739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb73c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb742 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb744 je 0x112cb763 */
  if (C.zf) goto L_112cb763;
  /* 112cb746 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 112cb74d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 112cb753 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb756 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 112cb75c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_112cb763:;
  /* 112cb763 jmp 0x112cb785 */
  goto L_112cb785;
L_112cb765:;
  /* 112cb765 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 112cb76f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb772 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb778 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cb77a je 0x112cb785 */
  if (C.zf) goto L_112cb785;
  /* 112cb77c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb77f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112cb782 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112cb785:;
  /* 112cb785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb788 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb78d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb78f je 0x112cb7ae */
  if (C.zf) goto L_112cb7ae;
  /* 112cb791 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 112cb794 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb795 call 0x112cbe20 */
  push32(0x112cb79au); f_112cbe20();
  /* 112cb79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb79d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112cb7a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 112cb7a9 jmp 0x112cb83f */
  goto L_112cb83f;
L_112cb7ae:;
  /* 112cb7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb7b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb7b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb7b6 je 0x112cb800 */
  if (C.zf) goto L_112cb800;
  /* 112cb7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb7bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb7be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb7c0 je 0x112cb7e0 */
  if (C.zf) goto L_112cb7e0;
  /* 112cb7c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 112cb7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb7c6 call 0x112cbe00 */
  push32(0x112cb7cbu); f_112cbe00();
  /* 112cb7cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb7ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 112cb7d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112cb7d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112cb7d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 112cb7de jmp 0x112cb7fe */
  goto L_112cb7fe;
L_112cb7e0:;
  /* 112cb7e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112cb7e3 push edx */
  push32((uint32_t)(EDX));
  /* 112cb7e4 call 0x112cbe00 */
  push32(0x112cb7e9u); f_112cbe00();
  /* 112cb7e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb7ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cb7f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112cb7f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112cb7f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_112cb7fe:;
  /* 112cb7fe jmp 0x112cb83f */
  goto L_112cb83f;
L_112cb800:;
  /* 112cb800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb803 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb808 je 0x112cb825 */
  if (C.zf) goto L_112cb825;
  /* 112cb80a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 112cb80d push ecx */
  push32((uint32_t)(ECX));
  /* 112cb80e call 0x112cbe00 */
  push32(0x112cb813u); f_112cbe00();
  /* 112cb813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb816 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112cb817 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112cb81d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 112cb823 jmp 0x112cb83f */
  goto L_112cb83f;
L_112cb825:;
  /* 112cb825 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112cb828 push edx */
  push32((uint32_t)(EDX));
  /* 112cb829 call 0x112cbe00 */
  push32(0x112cb82eu); f_112cbe00();
  /* 112cb82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cb833 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112cb839 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_112cb83f:;
  /* 112cb83f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb842 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb845 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb847 je 0x112cb887 */
  if (C.zf) goto L_112cb887;
  /* 112cb849 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb850 jg 0x112cb887 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cb887;
  /* 112cb852 jl 0x112cb85d */
  if ((C.sf!=C.of)) goto L_112cb85d;
  /* 112cb854 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb85b jae 0x112cb887 */
  if (!C.cf) goto L_112cb887;
L_112cb85d:;
  /* 112cb85d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 112cb863 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cb865 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 112cb86b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb86e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cb870 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 112cb876 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 112cb87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb87f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112cb882 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cb885 jmp 0x112cb89f */
  goto L_112cb89f;
L_112cb887:;
  /* 112cb887 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 112cb88d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 112cb893 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 112cb899 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_112cb89f:;
  /* 112cb89f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb8a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb8a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb8aa jne 0x112cb8c7 */
  if (!C.zf) goto L_112cb8c7;
  /* 112cb8ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112cb8b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 112cb8b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 112cb8bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 112cb8c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_112cb8c7:;
  /* 112cb8c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb8ce jge 0x112cb8dc */
  if ((C.sf==C.of)) goto L_112cb8dc;
  /* 112cb8d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 112cb8da jmp 0x112cb8e5 */
  goto L_112cb8e5;
L_112cb8dc:;
  /* 112cb8dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb8df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 112cb8e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112cb8e5:;
  /* 112cb8e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112cb8eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 112cb8f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb8f3 jne 0x112cb8fc */
  if (!C.zf) goto L_112cb8fc;
  /* 112cb8f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112cb8fc:;
  /* 112cb8fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 112cb8ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_112cb902:;
  /* 112cb902 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 112cb908 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 112cb90e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb911 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 112cb917 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cb919 jg 0x112cb92f */
  if ((!C.zf&&C.sf==C.of)) goto L_112cb92f;
  /* 112cb91b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112cb921 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 112cb927 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cb929 je 0x112cb9b0 */
  if (C.zf) goto L_112cb9b0;
L_112cb92f:;
  /* 112cb92f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 112cb935 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112cb936 push edx */
  push32((uint32_t)(EDX));
  /* 112cb937 push eax */
  push32((uint32_t)(EAX));
  /* 112cb938 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 112cb93e push edx */
  push32((uint32_t)(EDX));
  /* 112cb93f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112cb945 push eax */
  push32((uint32_t)(EAX));
  /* 112cb946 call 0x112cacc0 */
  push32(0x112cb94bu); f_112cacc0();
  /* 112cb94b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb94e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 112cb954 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 112cb95a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112cb95b push edx */
  push32((uint32_t)(EDX));
  /* 112cb95c push eax */
  push32((uint32_t)(EAX));
  /* 112cb95d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 112cb963 push ecx */
  push32((uint32_t)(ECX));
  /* 112cb964 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112cb96a push edx */
  push32((uint32_t)(EDX));
  /* 112cb96b call 0x112cac50 */
  push32(0x112cb970u); f_112cac50();
  /* 112cb970 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 112cb976 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 112cb97c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb983 jle 0x112cb997 */
  if ((C.zf||C.sf!=C.of)) goto L_112cb997;
  /* 112cb985 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 112cb98b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb991 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_112cb997:;
  /* 112cb997 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb99a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 112cb9a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 112cb9a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb9a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb9a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112cb9ab jmp 0x112cb902 */
  goto L_112cb902;
L_112cb9b0:;
  /* 112cb9b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 112cb9b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb9b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112cb9b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb9bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb9bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112cb9c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cb9c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 112cb9ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cb9cc je 0x112cb9f7 */
  if (C.zf) goto L_112cb9f7;
  /* 112cb9ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb9d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cb9d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb9d7 jne 0x112cb9df */
  if (!C.zf) goto L_112cb9df;
  /* 112cb9d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb9dd jne 0x112cb9f7 */
  if (!C.zf) goto L_112cb9f7;
L_112cb9df:;
  /* 112cb9df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb9e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cb9e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112cb9e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cb9eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 112cb9ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cb9f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cb9f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_112cb9f7:;
  /* 112cb9f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cb9fe jne 0x112cbbd2 */
  if (!C.zf) goto L_112cbbd2;
  /* 112cba04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cba07 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 112cba0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cba0c je 0x112cba5d */
  if (C.zf) goto L_112cba5d;
  /* 112cba0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cba11 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 112cba17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cba19 je 0x112cba2b */
  if (C.zf) goto L_112cba2b;
  /* 112cba1b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 112cba22 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112cba29 jmp 0x112cba5d */
  goto L_112cba5d;
L_112cba2b:;
  /* 112cba2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cba2e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112cba31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cba33 je 0x112cba45 */
  if (C.zf) goto L_112cba45;
  /* 112cba35 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 112cba3c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112cba43 jmp 0x112cba5d */
  goto L_112cba5d;
L_112cba45:;
  /* 112cba45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cba48 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 112cba4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cba4d je 0x112cba5d */
  if (C.zf) goto L_112cba5d;
  /* 112cba4f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 112cba56 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_112cba5d:;
  /* 112cba5d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 112cba63 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cba66 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cba69 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 112cba6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cba72 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 112cba75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cba77 jne 0x112cba95 */
  if (!C.zf) goto L_112cba95;
  /* 112cba79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 112cba7f push eax */
  push32((uint32_t)(EAX));
  /* 112cba80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cba83 push ecx */
  push32((uint32_t)(ECX));
  /* 112cba84 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 112cba8a push edx */
  push32((uint32_t)(EDX));
  /* 112cba8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 112cba8d call 0x112cbd70 */
  push32(0x112cba92u); f_112cbd70();
  /* 112cba92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cba95:;
  /* 112cba95 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 112cba9b push eax */
  push32((uint32_t)(EAX));
  /* 112cba9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cba9f push ecx */
  push32((uint32_t)(ECX));
  /* 112cbaa0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cbaa3 push edx */
  push32((uint32_t)(EDX));
  /* 112cbaa4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 112cbaaa push eax */
  push32((uint32_t)(EAX));
  /* 112cbaab call 0x112cbdb0 */
  push32(0x112cbab0u); f_112cbdb0();
  /* 112cbab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbab6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 112cbab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cbabb je 0x112cbae3 */
  if (C.zf) goto L_112cbae3;
  /* 112cbabd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbac0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112cbac3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cbac5 jne 0x112cbae3 */
  if (!C.zf) goto L_112cbae3;
  /* 112cbac7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 112cbacd push eax */
  push32((uint32_t)(EAX));
  /* 112cbace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbad1 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbad2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 112cbad8 push edx */
  push32((uint32_t)(EDX));
  /* 112cbad9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 112cbadb call 0x112cbd70 */
  push32(0x112cbae0u); f_112cbd70();
  /* 112cbae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cbae3:;
  /* 112cbae3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbae7 je 0x112cbb91 */
  if (C.zf) goto L_112cbb91;
  /* 112cbaed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbaf1 jle 0x112cbb91 */
  if ((C.zf||C.sf!=C.of)) goto L_112cbb91;
  /* 112cbaf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cbafa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 112cbb00 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cbb03 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_112cbb09:;
  /* 112cbb09 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 112cbb0f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 112cbb15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cbb18 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 112cbb1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cbb20 je 0x112cbb8f */
  if (C.zf) goto L_112cbb8f;
  /* 112cbb22 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 112cbb28 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112cbb2b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 112cbb32 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 112cbb39 push eax */
  push32((uint32_t)(EAX));
  /* 112cbb3a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 112cbb40 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbb41 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 112cbb47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbb4a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 112cbb50 call 0x112ccf20 */
  push32(0x112cbb55u); f_112ccf20();
  /* 112cbb55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbb58 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 112cbb5e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbb65 jg 0x112cbb69 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cbb69;
  /* 112cbb67 jmp 0x112cbb8f */
  goto L_112cbb8f;
L_112cbb69:;
  /* 112cbb69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 112cbb6f push eax */
  push32((uint32_t)(EAX));
  /* 112cbb70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbb73 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbb74 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 112cbb7a push edx */
  push32((uint32_t)(EDX));
  /* 112cbb7b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 112cbb81 push eax */
  push32((uint32_t)(EAX));
  /* 112cbb82 call 0x112cbdb0 */
  push32(0x112cbb87u); f_112cbdb0();
  /* 112cbb87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbb8a jmp 0x112cbb09 */
  goto L_112cbb09;
L_112cbb8f:;
  /* 112cbb8f jmp 0x112cbbac */
  goto L_112cbbac;
L_112cbb91:;
  /* 112cbb91 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 112cbb97 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbb98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbb9b push edx */
  push32((uint32_t)(EDX));
  /* 112cbb9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cbb9f push eax */
  push32((uint32_t)(EAX));
  /* 112cbba0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cbba3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbba4 call 0x112cbdb0 */
  push32(0x112cbba9u); f_112cbdb0();
  /* 112cbba9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cbbac:;
  /* 112cbbac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbbaf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112cbbb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cbbb4 je 0x112cbbd2 */
  if (C.zf) goto L_112cbbd2;
  /* 112cbbb6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 112cbbbc push eax */
  push32((uint32_t)(EAX));
  /* 112cbbbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbbc1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 112cbbc7 push edx */
  push32((uint32_t)(EDX));
  /* 112cbbc8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 112cbbca call 0x112cbd70 */
  push32(0x112cbbcfu); f_112cbd70();
  /* 112cbbcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cbbd2:;
  /* 112cbbd2 jmp 0x112cafe4 */
  goto L_112cafe4;
L_112cbbd7:;
  /* 112cbbd7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 112cbbdd pop edi */
  EDI = (pop32());
  /* 112cbbde pop esi */
  ESI = (pop32());
  /* 112cbbdf pop ebx */
  EBX = (pop32());
  /* 112cbbe0 mov esp, ebp */
  ESP = (EBP);
  /* 112cbbe2 pop ebp */
  EBP = (pop32());
  /* 112cbbe3 ret  */
  ESPCHK(0x112cafc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x112cbcf0 (119 bytes, 44 insns) */
void f_112cbcf0(void) {
  FTRACE(0x112cbcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbcf1 mov ebp, esp */
  EBP = (ESP);
  /* 112cbcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbcf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbcf7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112cbcfa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cbcfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112cbd03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbd0a jl 0x112cbd32 */
  if ((C.sf!=C.of)) goto L_112cbd32;
  /* 112cbd0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112cbd11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 112cbd14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 112cbd16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 112cbd1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112cbd20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cbd23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112cbd28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbd2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112cbd30 jmp 0x112cbd45 */
  goto L_112cbd45;
L_112cbd32:;
  /* 112cbd32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd35 push edx */
  push32((uint32_t)(EDX));
  /* 112cbd36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbd39 push eax */
  push32((uint32_t)(EAX));
  /* 112cbd3a call 0x112cad40 */
  push32(0x112cbd3fu); f_112cad40();
  /* 112cbd3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbd42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112cbd45:;
  /* 112cbd45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbd49 jne 0x112cbd56 */
  if (!C.zf) goto L_112cbd56;
  /* 112cbd4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cbd4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112cbd54 jmp 0x112cbd63 */
  goto L_112cbd63;
L_112cbd56:;
  /* 112cbd56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cbd59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112cbd5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbd5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cbd61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112cbd63:;
  /* 112cbd63 mov esp, ebp */
  ESP = (EBP);
  /* 112cbd65 pop ebp */
  EBP = (pop32());
  /* 112cbd66 ret  */
  ESPCHK(0x112cbcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x112cbd70 (53 bytes, 23 insns) */
void f_112cbd70(void) {
  FTRACE(0x112cbd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbd70 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbd71 mov ebp, esp */
  EBP = (ESP);
L_112cbd73:;
  /* 112cbd73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbd79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cbd7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112cbd7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cbd81 jle 0x112cbda3 */
  if ((C.zf||C.sf!=C.of)) goto L_112cbda3;
  /* 112cbd83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cbd86 push edx */
  push32((uint32_t)(EDX));
  /* 112cbd87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cbd8a push eax */
  push32((uint32_t)(EAX));
  /* 112cbd8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbd8e push ecx */
  push32((uint32_t)(ECX));
  /* 112cbd8f call 0x112cbcf0 */
  push32(0x112cbd94u); f_112cbcf0();
  /* 112cbd94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbd97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cbd9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbd9d jne 0x112cbda1 */
  if (!C.zf) goto L_112cbda1;
  /* 112cbd9f jmp 0x112cbda3 */
  goto L_112cbda3;
L_112cbda1:;
  /* 112cbda1 jmp 0x112cbd73 */
  goto L_112cbd73;
L_112cbda3:;
  /* 112cbda3 pop ebp */
  EBP = (pop32());
  /* 112cbda4 ret  */
  ESPCHK(0x112cbd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x112cbdb0 (74 bytes, 31 insns) */
void f_112cbdb0(void) {
  FTRACE(0x112cbdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbdb1 mov ebp, esp */
  EBP = (ESP);
  /* 112cbdb3 push ecx */
  push32((uint32_t)(ECX));
L_112cbdb4:;
  /* 112cbdb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbdb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbdba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cbdbd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112cbdc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cbdc2 jle 0x112cbdf6 */
  if ((C.zf||C.sf!=C.of)) goto L_112cbdf6;
  /* 112cbdc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cbdc7 push edx */
  push32((uint32_t)(EDX));
  /* 112cbdc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cbdcb push eax */
  push32((uint32_t)(EAX));
  /* 112cbdcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbdcf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cbdd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cbdd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbdd8 push eax */
  push32((uint32_t)(EAX));
  /* 112cbdd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbddc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbddf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112cbde2 call 0x112cbcf0 */
  push32(0x112cbde7u); f_112cbcf0();
  /* 112cbde7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbdea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cbded cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbdf0 jne 0x112cbdf4 */
  if (!C.zf) goto L_112cbdf4;
  /* 112cbdf2 jmp 0x112cbdf6 */
  goto L_112cbdf6;
L_112cbdf4:;
  /* 112cbdf4 jmp 0x112cbdb4 */
  goto L_112cbdb4;
L_112cbdf6:;
  /* 112cbdf6 mov esp, ebp */
  ESP = (EBP);
  /* 112cbdf8 pop ebp */
  EBP = (pop32());
  /* 112cbdf9 ret  */
  ESPCHK(0x112cbdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be00 @ 0x112cbe00 (26 bytes, 12 insns) */
void f_112cbe00(void) {
  FTRACE(0x112cbe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbe00 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbe01 mov ebp, esp */
  EBP = (ESP);
  /* 112cbe03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cbe08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbe0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112cbe10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cbe15 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 112cbe18 pop ebp */
  EBP = (pop32());
  /* 112cbe19 ret  */
  ESPCHK(0x112cbe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be20 @ 0x112cbe20 (31 bytes, 14 insns) */
void f_112cbe20(void) {
  FTRACE(0x112cbe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbe20 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbe21 mov ebp, esp */
  EBP = (ESP);
  /* 112cbe23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cbe28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbe2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112cbe30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cbe35 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cbe38 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112cbe3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112cbe3d pop ebp */
  EBP = (pop32());
  /* 112cbe3e ret  */
  ESPCHK(0x112cbe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be40 @ 0x112cbe40 (27 bytes, 12 insns) */
void f_112cbe40(void) {
  FTRACE(0x112cbe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbe40 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbe41 mov ebp, esp */
  EBP = (ESP);
  /* 112cbe43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cbe48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbe4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112cbe50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cbe55 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 112cbe59 pop ebp */
  EBP = (pop32());
  /* 112cbe5a ret  */
  ESPCHK(0x112cbe40u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x112cbe60 (145 bytes, 42 insns) */
void f_112cbe60(void) {
  FTRACE(0x112cbe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbe60 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbe61 mov ebp, esp */
  EBP = (ESP);
  /* 112cbe63 push ecx */
  push32((uint32_t)(ECX));
  /* 112cbe64 call 0x112cbf10 */
  push32(0x112cbe69u); f_112cbf10();
  /* 112cbe69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112cbe6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cbe75 jmp 0x112cbe80 */
  goto L_112cbe80;
L_112cbe77:;
  /* 112cbe77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbe7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbe7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112cbe80:;
  /* 112cbe80 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbe84 jae 0x112cbeaa */
  if (!C.cf) goto L_112cbeaa;
  /* 112cbe86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbe89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbe8c cmp ecx, dword ptr [eax*8 + 0x112edfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x112edfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbe93 jne 0x112cbea8 */
  if (!C.zf) goto L_112cbea8;
  /* 112cbe95 call 0x112cbf00 */
  push32(0x112cbe9au); f_112cbf00();
  /* 112cbe9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cbe9d mov ecx, dword ptr [edx*8 + 0x112edfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x112edfbc)));
  /* 112cbea4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112cbea6 jmp 0x112cbeed */
  goto L_112cbeed;
L_112cbea8:;
  /* 112cbea8 jmp 0x112cbe77 */
  goto L_112cbe77;
L_112cbeaa:;
  /* 112cbeaa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbeae jb 0x112cbec3 */
  if (C.cf) goto L_112cbec3;
  /* 112cbeb0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbeb4 ja 0x112cbec3 */
  if ((!C.cf&&!C.zf)) goto L_112cbec3;
  /* 112cbeb6 call 0x112cbf00 */
  push32(0x112cbebbu); f_112cbf00();
  /* 112cbebb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 112cbec1 jmp 0x112cbeed */
  goto L_112cbeed;
L_112cbec3:;
  /* 112cbec3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbeca jb 0x112cbee2 */
  if (C.cf) goto L_112cbee2;
  /* 112cbecc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbed3 ja 0x112cbee2 */
  if ((!C.cf&&!C.zf)) goto L_112cbee2;
  /* 112cbed5 call 0x112cbf00 */
  push32(0x112cbedau); f_112cbf00();
  /* 112cbeda mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 112cbee0 jmp 0x112cbeed */
  goto L_112cbeed;
L_112cbee2:;
  /* 112cbee2 call 0x112cbf00 */
  push32(0x112cbee7u); f_112cbf00();
  /* 112cbee7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_112cbeed:;
  /* 112cbeed mov esp, ebp */
  ESP = (EBP);
  /* 112cbeef pop ebp */
  EBP = (pop32());
  /* 112cbef0 ret  */
  ESPCHK(0x112cbe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x112cbf00 (13 bytes, 6 insns) */
void f_112cbf00(void) {
  FTRACE(0x112cbf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbf00 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbf01 mov ebp, esp */
  EBP = (ESP);
  /* 112cbf03 call 0x112c3a70 */
  push32(0x112cbf08u); f_112c3a70();
  /* 112cbf08 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbf0b pop ebp */
  EBP = (pop32());
  /* 112cbf0c ret  */
  ESPCHK(0x112cbf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x112cbf10 (13 bytes, 6 insns) */
void f_112cbf10(void) {
  FTRACE(0x112cbf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbf10 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbf11 mov ebp, esp */
  EBP = (ESP);
  /* 112cbf13 call 0x112c3a70 */
  push32(0x112cbf18u); f_112c3a70();
  /* 112cbf18 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbf1b pop ebp */
  EBP = (pop32());
  /* 112cbf1c ret  */
  ESPCHK(0x112cbf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x112cbf20 (664 bytes, 259 insns) [15 switch table(s)] */
void f_112cbf20(void) {
  FTRACE(0x112cbf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cbf20 push ebp */
  push32((uint32_t)(EBP));
  /* 112cbf21 mov ebp, esp */
  EBP = (ESP);
  /* 112cbf23 push edi */
  push32((uint32_t)(EDI));
  /* 112cbf24 push esi */
  push32((uint32_t)(ESI));
  /* 112cbf25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112cbf28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cbf2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112cbf2e mov eax, ecx */
  EAX = (ECX);
  /* 112cbf30 mov edx, ecx */
  EDX = (ECX);
  /* 112cbf32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbf34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbf36 jbe 0x112cbf40 */
  if ((C.cf||C.zf)) goto L_112cbf40;
  /* 112cbf38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbf3a jb 0x112cc0b8 */
  if (C.cf) goto L_112cc0b8;
L_112cbf40:;
  /* 112cbf40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112cbf46 jne 0x112cbf5c */
  if (!C.zf) goto L_112cbf5c;
  /* 112cbf48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cbf4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112cbf4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbf51 jb 0x112cbf7c */
  if (C.cf) goto L_112cbf7c;
  /* 112cbf53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cbf55 jmp dword ptr [edx*4 + 0x112cc068] */
  switch (EDX) {
    case 0: goto L_112cc078;
    case 1: goto L_112cc080;
    case 2: goto L_112cc08c;
    case 3: goto L_112cc0a0;
    default: x86_unimpl("switch@0x112cbf55 out of table"); return;
  }
L_112cbf5c:;
  /* 112cbf5c mov eax, edi */
  EAX = (EDI);
  /* 112cbf5e mov edx, 3 */
  EDX = (0x3u);
  /* 112cbf63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cbf66 jb 0x112cbf74 */
  if (C.cf) goto L_112cbf74;
  /* 112cbf68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112cbf6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbf6d jmp dword ptr [eax*4 + 0x112cbf80] */
  switch (EAX) {
    case 1: goto L_112cbf90;
    case 2: goto L_112cbfbc;
    case 3: goto L_112cbfe0;
    default: x86_unimpl("switch@0x112cbf6d out of table"); return;
  }
L_112cbf74:;
  /* 112cbf74 jmp dword ptr [ecx*4 + 0x112cc078] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x112cc078)))); return;
  /* 112cbf7b nop  */
  /* nop */
L_112cbf7c:;
  /* 112cbf7c jmp dword ptr [ecx*4 + 0x112cbffc] */
  switch (ECX) {
    case 0: goto L_112cc05f;
    case 1: goto L_112cc04c;
    case 2: goto L_112cc044;
    case 3: goto L_112cc03c;
    case 4: goto L_112cc034;
    case 5: goto L_112cc02c;
    case 6: goto L_112cc024;
    case 7: goto L_112cc01c;
    default: x86_unimpl("switch@0x112cbf7c out of table"); return;
  }
  /* 112cbf83 nop  */
  /* nop */
L_112cbf90:;
  /* 112cbf90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cbf92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cbf94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112cbf96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cbf99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cbf9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cbf9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cbfa2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cbfa5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbfa8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbfab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbfae jb 0x112cbf7c */
  if (C.cf) goto L_112cbf7c;
  /* 112cbfb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cbfb2 jmp dword ptr [edx*4 + 0x112cc068] */
  switch (EDX) {
    case 0: goto L_112cc078;
    case 1: goto L_112cc080;
    case 2: goto L_112cc08c;
    case 3: goto L_112cc0a0;
    default: x86_unimpl("switch@0x112cbfb2 out of table"); return;
  }
  /* 112cbfb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cbfbc:;
  /* 112cbfbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cbfbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cbfc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112cbfc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cbfc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cbfc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cbfcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbfce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cbfd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbfd4 jb 0x112cbf7c */
  if (C.cf) goto L_112cbf7c;
  /* 112cbfd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cbfd8 jmp dword ptr [edx*4 + 0x112cc068] */
  switch (EDX) {
    case 0: goto L_112cc078;
    case 1: goto L_112cc080;
    case 2: goto L_112cc08c;
    case 3: goto L_112cc0a0;
    default: x86_unimpl("switch@0x112cbfd8 out of table"); return;
  }
  /* 112cbfdf nop  */
  /* nop */
L_112cbfe0:;
  /* 112cbfe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cbfe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cbfe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112cbfe6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112cbfe7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cbfea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112cbfeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cbfee jb 0x112cbf7c */
  if (C.cf) goto L_112cbf7c;
  /* 112cbff0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cbff2 jmp dword ptr [edx*4 + 0x112cc068] */
  switch (EDX) {
    case 0: goto L_112cc078;
    case 1: goto L_112cc080;
    case 2: goto L_112cc08c;
    case 3: goto L_112cc0a0;
    default: x86_unimpl("switch@0x112cbff2 out of table"); return;
  }
  /* 112cbff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cc01c:;
  /* 112cc01c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 112cc020 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_112cc024:;
  /* 112cc024 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 112cc028 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_112cc02c:;
  /* 112cc02c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 112cc030 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_112cc034:;
  /* 112cc034 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 112cc038 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_112cc03c:;
  /* 112cc03c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 112cc040 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_112cc044:;
  /* 112cc044 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 112cc048 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_112cc04c:;
  /* 112cc04c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 112cc050 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 112cc054 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112cc05b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc05d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112cc05f:;
  /* 112cc05f jmp dword ptr [edx*4 + 0x112cc068] */
  switch (EDX) {
    case 0: goto L_112cc078;
    case 1: goto L_112cc080;
    case 2: goto L_112cc08c;
    case 3: goto L_112cc0a0;
    default: x86_unimpl("switch@0x112cc05f out of table"); return;
  }
  /* 112cc066 mov edi, edi */
  EDI = (EDI);
L_112cc078:;
  /* 112cc078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc07b pop esi */
  ESI = (pop32());
  /* 112cc07c pop edi */
  EDI = (pop32());
  /* 112cc07d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc07e ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc07f nop  */
  /* nop */
L_112cc080:;
  /* 112cc080 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cc082 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112cc084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc087 pop esi */
  ESI = (pop32());
  /* 112cc088 pop edi */
  EDI = (pop32());
  /* 112cc089 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc08a ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc08b nop  */
  /* nop */
L_112cc08c:;
  /* 112cc08c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cc08e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112cc090 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cc093 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cc096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc099 pop esi */
  ESI = (pop32());
  /* 112cc09a pop edi */
  EDI = (pop32());
  /* 112cc09b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc09c ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc09d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cc0a0:;
  /* 112cc0a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cc0a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112cc0a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cc0a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cc0aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cc0ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cc0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc0b3 pop esi */
  ESI = (pop32());
  /* 112cc0b4 pop edi */
  EDI = (pop32());
  /* 112cc0b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc0b6 ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc0b7 nop  */
  /* nop */
L_112cc0b8:;
  /* 112cc0b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 112cc0bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 112cc0c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112cc0c6 jne 0x112cc0ec */
  if (!C.zf) goto L_112cc0ec;
  /* 112cc0c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cc0cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112cc0ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc0d1 jb 0x112cc0e0 */
  if (C.cf) goto L_112cc0e0;
  /* 112cc0d3 std  */
  C.df=1;
  /* 112cc0d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cc0d6 cld  */
  C.df=0;
  /* 112cc0d7 jmp dword ptr [edx*4 + 0x112cc200] */
  switch (EDX) {
    case 0: goto L_112cc210;
    case 1: goto L_112cc218;
    case 2: goto L_112cc228;
    case 3: goto L_112cc23c;
    default: x86_unimpl("switch@0x112cc0d7 out of table"); return;
  }
  /* 112cc0de mov edi, edi */
  EDI = (EDI);
L_112cc0e0:;
  /* 112cc0e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cc0e2 jmp dword ptr [ecx*4 + 0x112cc1b0] */
  switch (ECX) {
    case 0: goto L_112cc1f7;
    default: x86_unimpl("switch@0x112cc0e2 out of table"); return;
  }
  /* 112cc0e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cc0ec:;
  /* 112cc0ec mov eax, edi */
  EAX = (EDI);
  /* 112cc0ee mov edx, 3 */
  EDX = (0x3u);
  /* 112cc0f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc0f6 jb 0x112cc104 */
  if (C.cf) goto L_112cc104;
  /* 112cc0f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112cc0fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc0fd jmp dword ptr [eax*4 + 0x112cc108] */
  switch (EAX) {
    case 1: goto L_112cc118;
    case 2: goto L_112cc138;
    case 3: goto L_112cc160;
    default: x86_unimpl("switch@0x112cc0fd out of table"); return;
  }
L_112cc104:;
  /* 112cc104 jmp dword ptr [ecx*4 + 0x112cc200] */
  switch (ECX) {
    case 0: goto L_112cc210;
    case 1: goto L_112cc218;
    case 2: goto L_112cc228;
    case 3: goto L_112cc23c;
    default: x86_unimpl("switch@0x112cc104 out of table"); return;
  }
  /* 112cc10b nop  */
  /* nop */
L_112cc118:;
  /* 112cc118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cc11b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cc11d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cc120 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 112cc121 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cc124 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 112cc125 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc128 jb 0x112cc0e0 */
  if (C.cf) goto L_112cc0e0;
  /* 112cc12a std  */
  C.df=1;
  /* 112cc12b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cc12d cld  */
  C.df=0;
  /* 112cc12e jmp dword ptr [edx*4 + 0x112cc200] */
  switch (EDX) {
    case 0: goto L_112cc210;
    case 1: goto L_112cc218;
    case 2: goto L_112cc228;
    case 3: goto L_112cc23c;
    default: x86_unimpl("switch@0x112cc12e out of table"); return;
  }
  /* 112cc135 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cc138:;
  /* 112cc138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cc13b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cc13d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cc140 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cc143 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cc146 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cc149 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc14c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc14f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc152 jb 0x112cc0e0 */
  if (C.cf) goto L_112cc0e0;
  /* 112cc154 std  */
  C.df=1;
  /* 112cc155 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cc157 cld  */
  C.df=0;
  /* 112cc158 jmp dword ptr [edx*4 + 0x112cc200] */
  switch (EDX) {
    case 0: goto L_112cc210;
    case 1: goto L_112cc218;
    case 2: goto L_112cc228;
    case 3: goto L_112cc23c;
    default: x86_unimpl("switch@0x112cc158 out of table"); return;
  }
  /* 112cc15f nop  */
  /* nop */
L_112cc160:;
  /* 112cc160 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cc163 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112cc165 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cc168 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cc16b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cc16e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cc171 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112cc174 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cc177 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc17a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc17d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc180 jb 0x112cc0e0 */
  if (C.cf) goto L_112cc0e0;
  /* 112cc186 std  */
  C.df=1;
  /* 112cc187 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112cc189 cld  */
  C.df=0;
  /* 112cc18a jmp dword ptr [edx*4 + 0x112cc200] */
  switch (EDX) {
    case 0: goto L_112cc210;
    case 1: goto L_112cc218;
    case 2: goto L_112cc228;
    case 3: goto L_112cc23c;
    default: x86_unimpl("switch@0x112cc18a out of table"); return;
  }
  /* 112cc191 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 112cc194 mov ah, 0xc1 */
  AH = (0xc1u);
  /* 112cc196 sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cc198 mov esp, 0xc4112cc1 */
  ESP = (0xc4112cc1u);
  /* 112cc19d shr dword ptr [ecx + edx], 0xcc */
  w32((uint32_t)(ECX + EDX*1), (sh_shr((uint32_t)(r32((uint32_t)(ECX + EDX*1))), (0xccu)&0x1f, 32)));
  /* 112cc1a1 shr dword ptr [ecx + edx], 0xd4 */
  w32((uint32_t)(ECX + EDX*1), (sh_shr((uint32_t)(r32((uint32_t)(ECX + EDX*1))), (0xd4u)&0x1f, 32)));
  /* 112cc1a5 shr dword ptr [ecx + edx], 0xdc */
  w32((uint32_t)(ECX + EDX*1), (sh_shr((uint32_t)(r32((uint32_t)(ECX + EDX*1))), (0xdcu)&0x1f, 32)));
  /* 112cc1a9 shr dword ptr [ecx + edx], 0xe4 */
  w32((uint32_t)(ECX + EDX*1), (sh_shr((uint32_t)(r32((uint32_t)(ECX + EDX*1))), (0xe4u)&0x1f, 32)));
  /* 112cc1ae sub al, 0x11 */
  { uint32_t _a=(AL),_b=(0x11u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112cc1b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 112cc1b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 112cc1bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 112cc1c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 112cc1c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 112cc1c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 112cc1cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 112cc1d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 112cc1d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 112cc1d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 112cc1dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 112cc1e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 112cc1e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 112cc1e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 112cc1ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112cc1f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc1f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112cc1f7:;
  /* 112cc1f7 jmp dword ptr [edx*4 + 0x112cc200] */
  switch (EDX) {
    case 0: goto L_112cc210;
    case 1: goto L_112cc218;
    case 2: goto L_112cc228;
    case 3: goto L_112cc23c;
    default: x86_unimpl("switch@0x112cc1f7 out of table"); return;
  }
  /* 112cc1fe mov edi, edi */
  EDI = (EDI);
L_112cc210:;
  /* 112cc210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc213 pop esi */
  ESI = (pop32());
  /* 112cc214 pop edi */
  EDI = (pop32());
  /* 112cc215 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc216 ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc217 nop  */
  /* nop */
L_112cc218:;
  /* 112cc218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cc21b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cc21e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc221 pop esi */
  ESI = (pop32());
  /* 112cc222 pop edi */
  EDI = (pop32());
  /* 112cc223 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc224 ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc225 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cc228:;
  /* 112cc228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cc22b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cc22e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cc231 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cc234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc237 pop esi */
  ESI = (pop32());
  /* 112cc238 pop edi */
  EDI = (pop32());
  /* 112cc239 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc23a ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
  /* 112cc23b nop  */
  /* nop */
L_112cc23c:;
  /* 112cc23c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112cc23f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112cc242 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112cc245 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112cc248 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112cc24b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112cc24e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc251 pop esi */
  ESI = (pop32());
  /* 112cc252 pop edi */
  EDI = (pop32());
  /* 112cc253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cc254 ret  */
  ESPCHK(0x112cbf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x112cc260 (421 bytes, 148 insns) */
void f_112cc260(void) {
  FTRACE(0x112cc260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc260 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc261 mov ebp, esp */
  EBP = (ESP);
  /* 112cc263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112cc265 push 0x112eb098 */
  push32((uint32_t)(0x112eb098u));
  /* 112cc26a push 0x112cd138 */
  push32((uint32_t)(0x112cd138u));
  /* 112cc26f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112cc275 push eax */
  push32((uint32_t)(EAX));
  /* 112cc276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112cc27d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc280 push ebx */
  push32((uint32_t)(EBX));
  /* 112cc281 push esi */
  push32((uint32_t)(ESI));
  /* 112cc282 push edi */
  push32((uint32_t)(EDI));
  /* 112cc283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112cc286 cmp dword ptr [0x112ef72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc28d jne 0x112cc2de */
  if (!C.zf) goto L_112cc2de;
  /* 112cc28f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 112cc292 push eax */
  push32((uint32_t)(EAX));
  /* 112cc293 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc295 push 0x112eb094 */
  push32((uint32_t)(0x112eb094u));
  /* 112cc29a push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc29c call dword ptr [0x112f2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2300))), 0x112cc2a2u);
  /* 112cc2a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc2a4 je 0x112cc2b2 */
  if (C.zf) goto L_112cc2b2;
  /* 112cc2a6 mov dword ptr [0x112ef72c], 1 */
  w32((uint32_t)(0x112ef72c), (0x1u));
  /* 112cc2b0 jmp 0x112cc2de */
  goto L_112cc2de;
L_112cc2b2:;
  /* 112cc2b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 112cc2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc2b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc2b8 push 0x112eb090 */
  push32((uint32_t)(0x112eb090u));
  /* 112cc2bd push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc2bf push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc2c1 call dword ptr [0x112f2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2310))), 0x112cc2c7u);
  /* 112cc2c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc2c9 je 0x112cc2d7 */
  if (C.zf) goto L_112cc2d7;
  /* 112cc2cb mov dword ptr [0x112ef72c], 2 */
  w32((uint32_t)(0x112ef72c), (0x2u));
  /* 112cc2d5 jmp 0x112cc2de */
  goto L_112cc2de;
L_112cc2d7:;
  /* 112cc2d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc2d9 jmp 0x112cc408 */
  goto L_112cc408;
L_112cc2de:;
  /* 112cc2de cmp dword ptr [0x112ef72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc2e5 jne 0x112cc315 */
  if (!C.zf) goto L_112cc315;
  /* 112cc2e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc2eb jne 0x112cc2f6 */
  if (!C.zf) goto L_112cc2f6;
  /* 112cc2ed mov edx, dword ptr [0x112ef738] */
  EDX = (r32((uint32_t)(0x112ef738)));
  /* 112cc2f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_112cc2f6:;
  /* 112cc2f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cc2f9 push eax */
  push32((uint32_t)(EAX));
  /* 112cc2fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc2fd push ecx */
  push32((uint32_t)(ECX));
  /* 112cc2fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc301 push edx */
  push32((uint32_t)(EDX));
  /* 112cc302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc305 push eax */
  push32((uint32_t)(EAX));
  /* 112cc306 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112cc309 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc30a call dword ptr [0x112f2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2310))), 0x112cc310u);
  /* 112cc310 jmp 0x112cc408 */
  goto L_112cc408;
L_112cc315:;
  /* 112cc315 cmp dword ptr [0x112ef72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc31c jne 0x112cc406 */
  if (!C.zf) goto L_112cc406;
  /* 112cc322 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc326 jne 0x112cc331 */
  if (!C.zf) goto L_112cc331;
  /* 112cc328 mov edx, dword ptr [0x112ef748] */
  EDX = (r32((uint32_t)(0x112ef748)));
  /* 112cc32e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_112cc331:;
  /* 112cc331 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc333 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc335 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc338 push eax */
  push32((uint32_t)(EAX));
  /* 112cc339 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc33c push ecx */
  push32((uint32_t)(ECX));
  /* 112cc33d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 112cc340 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cc342 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc344 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 112cc347 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc34a push edx */
  push32((uint32_t)(EDX));
  /* 112cc34b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112cc34e push eax */
  push32((uint32_t)(EAX));
  /* 112cc34f call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112cc355u);
  /* 112cc355 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112cc358 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc35c jne 0x112cc365 */
  if (!C.zf) goto L_112cc365;
  /* 112cc35e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc360 jmp 0x112cc408 */
  goto L_112cc408;
L_112cc365:;
  /* 112cc365 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cc36c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cc36f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112cc371 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc374 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112cc376 call 0x112c71d0 */
  push32(0x112cc37bu); f_112c71d0();
  /* 112cc37b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 112cc37e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112cc381 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cc384 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112cc387 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cc38a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112cc38c push edx */
  push32((uint32_t)(EDX));
  /* 112cc38d push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc38f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc392 push eax */
  push32((uint32_t)(EAX));
  /* 112cc393 call 0x112c7da0 */
  push32(0x112cc398u); f_112c7da0();
  /* 112cc398 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc39b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112cc3a2 jmp 0x112cc3bb */
  goto L_112cc3bb;
  /* 112cc3a4 mov eax, 1 */
  EAX = (0x1u);
  /* 112cc3a9 ret  */
  ESPCHK(0x112cc260u, _esp0);
  ESP += 4; return;
  /* 112cc3aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112cc3ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112cc3b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112cc3bb:;
  /* 112cc3bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc3bf jne 0x112cc3c5 */
  if (!C.zf) goto L_112cc3c5;
  /* 112cc3c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc3c3 jmp 0x112cc408 */
  goto L_112cc408;
L_112cc3c5:;
  /* 112cc3c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cc3c8 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc3c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc3cc push edx */
  push32((uint32_t)(EDX));
  /* 112cc3cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc3d0 push eax */
  push32((uint32_t)(EAX));
  /* 112cc3d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc3d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc3d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112cc3da push edx */
  push32((uint32_t)(EDX));
  /* 112cc3db call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112cc3e1u);
  /* 112cc3e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112cc3e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc3e8 jne 0x112cc3ee */
  if (!C.zf) goto L_112cc3ee;
  /* 112cc3ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc3ec jmp 0x112cc408 */
  goto L_112cc408;
L_112cc3ee:;
  /* 112cc3ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cc3f1 push eax */
  push32((uint32_t)(EAX));
  /* 112cc3f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cc3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc3f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc3f9 push edx */
  push32((uint32_t)(EDX));
  /* 112cc3fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc3fd push eax */
  push32((uint32_t)(EAX));
  /* 112cc3fe call dword ptr [0x112f2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2300))), 0x112cc404u);
  /* 112cc404 jmp 0x112cc408 */
  goto L_112cc408;
L_112cc406:;
  /* 112cc406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112cc408:;
  /* 112cc408 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 112cc40b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cc40e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112cc415 pop edi */
  EDI = (pop32());
  /* 112cc416 pop esi */
  ESI = (pop32());
  /* 112cc417 pop ebx */
  EBX = (pop32());
  /* 112cc418 mov esp, ebp */
  ESP = (EBP);
  /* 112cc41a pop ebp */
  EBP = (pop32());
  /* 112cc41b ret  */
  ESPCHK(0x112cc260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x112cc420 (727 bytes, 263 insns) */
void f_112cc420(void) {
  FTRACE(0x112cc420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc420 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc421 mov ebp, esp */
  EBP = (ESP);
  /* 112cc423 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112cc425 push 0x112eb0a8 */
  push32((uint32_t)(0x112eb0a8u));
  /* 112cc42a push 0x112cd138 */
  push32((uint32_t)(0x112cd138u));
  /* 112cc42f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112cc435 push eax */
  push32((uint32_t)(EAX));
  /* 112cc436 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112cc43d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc440 push ebx */
  push32((uint32_t)(EBX));
  /* 112cc441 push esi */
  push32((uint32_t)(ESI));
  /* 112cc442 push edi */
  push32((uint32_t)(EDI));
  /* 112cc443 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112cc446 cmp dword ptr [0x112ef750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc44d jne 0x112cc4a6 */
  if (!C.zf) goto L_112cc4a6;
  /* 112cc44f push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc451 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc453 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc455 push 0x112eb094 */
  push32((uint32_t)(0x112eb094u));
  /* 112cc45a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112cc45f push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc461 call dword ptr [0x112f2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2304))), 0x112cc467u);
  /* 112cc467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc469 je 0x112cc477 */
  if (C.zf) goto L_112cc477;
  /* 112cc46b mov dword ptr [0x112ef750], 1 */
  w32((uint32_t)(0x112ef750), (0x1u));
  /* 112cc475 jmp 0x112cc4a6 */
  goto L_112cc4a6;
L_112cc477:;
  /* 112cc477 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc479 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc47b push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc47d push 0x112eb090 */
  push32((uint32_t)(0x112eb090u));
  /* 112cc482 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112cc487 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc489 call dword ptr [0x112f22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22fc))), 0x112cc48fu);
  /* 112cc48f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc491 je 0x112cc49f */
  if (C.zf) goto L_112cc49f;
  /* 112cc493 mov dword ptr [0x112ef750], 2 */
  w32((uint32_t)(0x112ef750), (0x2u));
  /* 112cc49d jmp 0x112cc4a6 */
  goto L_112cc4a6;
L_112cc49f:;
  /* 112cc49f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc4a1 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc4a6:;
  /* 112cc4a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc4aa jle 0x112cc4bf */
  if ((C.zf||C.sf!=C.of)) goto L_112cc4bf;
  /* 112cc4ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cc4af push eax */
  push32((uint32_t)(EAX));
  /* 112cc4b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc4b4 call 0x112cc730 */
  push32(0x112cc4b9u); f_112cc730();
  /* 112cc4b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc4bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_112cc4bf:;
  /* 112cc4bf cmp dword ptr [0x112ef750], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef750))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc4c6 jne 0x112cc4eb */
  if (!C.zf) goto L_112cc4eb;
  /* 112cc4c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112cc4cb push edx */
  push32((uint32_t)(EDX));
  /* 112cc4cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112cc4cf push eax */
  push32((uint32_t)(EAX));
  /* 112cc4d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cc4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc4d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc4d7 push edx */
  push32((uint32_t)(EDX));
  /* 112cc4d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc4db push eax */
  push32((uint32_t)(EAX));
  /* 112cc4dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc4df push ecx */
  push32((uint32_t)(ECX));
  /* 112cc4e0 call dword ptr [0x112f22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22fc))), 0x112cc4e6u);
  /* 112cc4e6 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc4eb:;
  /* 112cc4eb cmp dword ptr [0x112ef750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc4f2 jne 0x112cc70f */
  if (!C.zf) goto L_112cc70f;
  /* 112cc4f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc4fc jne 0x112cc507 */
  if (!C.zf) goto L_112cc507;
  /* 112cc4fe mov edx, dword ptr [0x112ef748] */
  EDX = (r32((uint32_t)(0x112ef748)));
  /* 112cc504 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_112cc507:;
  /* 112cc507 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc509 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc50b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cc50e push eax */
  push32((uint32_t)(EAX));
  /* 112cc50f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc512 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc513 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 112cc516 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cc518 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc51a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 112cc51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc520 push edx */
  push32((uint32_t)(EDX));
  /* 112cc521 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112cc524 push eax */
  push32((uint32_t)(EAX));
  /* 112cc525 call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112cc52bu);
  /* 112cc52b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112cc52e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc532 jne 0x112cc53b */
  if (!C.zf) goto L_112cc53b;
  /* 112cc534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc536 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc53b:;
  /* 112cc53b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cc542 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cc545 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112cc547 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc54a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112cc54c call 0x112c71d0 */
  push32(0x112cc551u); f_112c71d0();
  /* 112cc551 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 112cc554 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112cc557 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cc55a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112cc55d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112cc564 jmp 0x112cc57d */
  goto L_112cc57d;
  /* 112cc566 mov eax, 1 */
  EAX = (0x1u);
  /* 112cc56b ret  */
  ESPCHK(0x112cc420u, _esp0);
  ESP += 4; return;
  /* 112cc56c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112cc56f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112cc576 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112cc57d:;
  /* 112cc57d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc581 jne 0x112cc58a */
  if (!C.zf) goto L_112cc58a;
  /* 112cc583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc585 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc58a:;
  /* 112cc58a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cc58d push edx */
  push32((uint32_t)(EDX));
  /* 112cc58e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc591 push eax */
  push32((uint32_t)(EAX));
  /* 112cc592 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112cc595 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc596 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc599 push edx */
  push32((uint32_t)(EDX));
  /* 112cc59a push 1 */
  push32((uint32_t)(0x1u));
  /* 112cc59c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112cc59f push eax */
  push32((uint32_t)(EAX));
  /* 112cc5a0 call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112cc5a6u);
  /* 112cc5a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc5a8 jne 0x112cc5b1 */
  if (!C.zf) goto L_112cc5b1;
  /* 112cc5aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc5ac jmp 0x112cc711 */
  goto L_112cc711;
L_112cc5b1:;
  /* 112cc5b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc5b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc5b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cc5b8 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc5b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc5bc push edx */
  push32((uint32_t)(EDX));
  /* 112cc5bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc5c0 push eax */
  push32((uint32_t)(EAX));
  /* 112cc5c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc5c5 call dword ptr [0x112f2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2304))), 0x112cc5cbu);
  /* 112cc5cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112cc5ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc5d2 jne 0x112cc5db */
  if (!C.zf) goto L_112cc5db;
  /* 112cc5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc5d6 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc5db:;
  /* 112cc5db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc5de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 112cc5e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cc5e6 je 0x112cc62b */
  if (C.zf) goto L_112cc62b;
  /* 112cc5e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc5ec je 0x112cc626 */
  if (C.zf) goto L_112cc626;
  /* 112cc5ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cc5f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc5f4 jle 0x112cc5fd */
  if ((C.zf||C.sf!=C.of)) goto L_112cc5fd;
  /* 112cc5f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc5f8 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc5fd:;
  /* 112cc5fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112cc600 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc601 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112cc604 push edx */
  push32((uint32_t)(EDX));
  /* 112cc605 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cc608 push eax */
  push32((uint32_t)(EAX));
  /* 112cc609 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc60c push ecx */
  push32((uint32_t)(ECX));
  /* 112cc60d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc610 push edx */
  push32((uint32_t)(EDX));
  /* 112cc611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc614 push eax */
  push32((uint32_t)(EAX));
  /* 112cc615 call dword ptr [0x112f2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2304))), 0x112cc61bu);
  /* 112cc61b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc61d jne 0x112cc626 */
  if (!C.zf) goto L_112cc626;
  /* 112cc61f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc621 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc626:;
  /* 112cc626 jmp 0x112cc70a */
  goto L_112cc70a;
L_112cc62b:;
  /* 112cc62b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cc62e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112cc631 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112cc638 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cc63b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112cc63d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc640 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112cc642 call 0x112c71d0 */
  push32(0x112cc647u); f_112c71d0();
  /* 112cc647 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 112cc64a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112cc64d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 112cc650 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112cc653 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112cc65a jmp 0x112cc673 */
  goto L_112cc673;
  /* 112cc65c mov eax, 1 */
  EAX = (0x1u);
  /* 112cc661 ret  */
  ESPCHK(0x112cc420u, _esp0);
  ESP += 4; return;
  /* 112cc662 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112cc665 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112cc66c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112cc673:;
  /* 112cc673 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc677 jne 0x112cc680 */
  if (!C.zf) goto L_112cc680;
  /* 112cc679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc67b jmp 0x112cc711 */
  goto L_112cc711;
L_112cc680:;
  /* 112cc680 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cc683 push eax */
  push32((uint32_t)(EAX));
  /* 112cc684 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cc687 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc688 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cc68b push edx */
  push32((uint32_t)(EDX));
  /* 112cc68c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cc68f push eax */
  push32((uint32_t)(EAX));
  /* 112cc690 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc693 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc697 push edx */
  push32((uint32_t)(EDX));
  /* 112cc698 call dword ptr [0x112f2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2304))), 0x112cc69eu);
  /* 112cc69e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc6a0 jne 0x112cc6a6 */
  if (!C.zf) goto L_112cc6a6;
  /* 112cc6a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc6a4 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc6a6:;
  /* 112cc6a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc6aa jne 0x112cc6da */
  if (!C.zf) goto L_112cc6da;
  /* 112cc6ac push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc6ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc6b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cc6b7 push eax */
  push32((uint32_t)(EAX));
  /* 112cc6b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cc6bb push ecx */
  push32((uint32_t)(ECX));
  /* 112cc6bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112cc6c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 112cc6c4 push edx */
  push32((uint32_t)(EDX));
  /* 112cc6c5 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112cc6cbu);
  /* 112cc6cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112cc6ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc6d2 jne 0x112cc6d8 */
  if (!C.zf) goto L_112cc6d8;
  /* 112cc6d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc6d6 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc6d8:;
  /* 112cc6d8 jmp 0x112cc70a */
  goto L_112cc70a;
L_112cc6da:;
  /* 112cc6da push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc6dc push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc6de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112cc6e1 push eax */
  push32((uint32_t)(EAX));
  /* 112cc6e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112cc6e5 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc6e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cc6e9 push edx */
  push32((uint32_t)(EDX));
  /* 112cc6ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cc6ed push eax */
  push32((uint32_t)(EAX));
  /* 112cc6ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112cc6f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 112cc6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc6f7 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112cc6fdu);
  /* 112cc6fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112cc700 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc704 jne 0x112cc70a */
  if (!C.zf) goto L_112cc70a;
  /* 112cc706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc708 jmp 0x112cc711 */
  goto L_112cc711;
L_112cc70a:;
  /* 112cc70a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cc70d jmp 0x112cc711 */
  goto L_112cc711;
L_112cc70f:;
  /* 112cc70f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112cc711:;
  /* 112cc711 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 112cc714 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cc717 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112cc71e pop edi */
  EDI = (pop32());
  /* 112cc71f pop esi */
  ESI = (pop32());
  /* 112cc720 pop ebx */
  EBX = (pop32());
  /* 112cc721 mov esp, ebp */
  ESP = (EBP);
  /* 112cc723 pop ebp */
  EBP = (pop32());
  /* 112cc724 ret  */
  ESPCHK(0x112cc420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c730 @ 0x112cc730 (80 bytes, 32 insns) */
void f_112cc730(void) {
  FTRACE(0x112cc730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc730 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc731 mov ebp, esp */
  EBP = (ESP);
  /* 112cc733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc739 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cc73c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc73f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112cc742:;
  /* 112cc742 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cc745 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cc748 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc74b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cc74e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cc750 je 0x112cc767 */
  if (C.zf) goto L_112cc767;
  /* 112cc752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cc755 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cc758 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cc75a je 0x112cc767 */
  if (C.zf) goto L_112cc767;
  /* 112cc75c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cc75f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cc765 jmp 0x112cc742 */
  goto L_112cc742;
L_112cc767:;
  /* 112cc767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cc76a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cc76d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cc76f jne 0x112cc779 */
  if (!C.zf) goto L_112cc779;
  /* 112cc771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cc774 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc777 jmp 0x112cc77c */
  goto L_112cc77c;
L_112cc779:;
  /* 112cc779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_112cc77c:;
  /* 112cc77c mov esp, ebp */
  ESP = (EBP);
  /* 112cc77e pop ebp */
  EBP = (pop32());
  /* 112cc77f ret  */
  ESPCHK(0x112cc730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x112cc780 (130 bytes, 43 insns) */
void f_112cc780(void) {
  FTRACE(0x112cc780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc780 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc781 mov ebp, esp */
  EBP = (ESP);
  /* 112cc783 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc787 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc78d jae 0x112cc7b1 */
  if (!C.cf) goto L_112cc7b1;
  /* 112cc78f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc792 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cc795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc798 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cc79b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cc79e mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cc7a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112cc7aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112cc7ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cc7af jne 0x112cc7cc */
  if (!C.zf) goto L_112cc7cc;
L_112cc7b1:;
  /* 112cc7b1 call 0x112cbf00 */
  push32(0x112cc7b6u); f_112cbf00();
  /* 112cc7b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112cc7bc call 0x112cbf10 */
  push32(0x112cc7c1u); f_112cbf10();
  /* 112cc7c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112cc7c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cc7ca jmp 0x112cc7fe */
  goto L_112cc7fe;
L_112cc7cc:;
  /* 112cc7cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc7cf push edx */
  push32((uint32_t)(EDX));
  /* 112cc7d0 call 0x112cd720 */
  push32(0x112cc7d5u); f_112cd720();
  /* 112cc7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc7d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc7db push eax */
  push32((uint32_t)(EAX));
  /* 112cc7dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc7df push ecx */
  push32((uint32_t)(ECX));
  /* 112cc7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc7e3 push edx */
  push32((uint32_t)(EDX));
  /* 112cc7e4 call 0x112cc810 */
  push32(0x112cc7e9u); f_112cc810();
  /* 112cc7e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc7ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cc7ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc7f2 push eax */
  push32((uint32_t)(EAX));
  /* 112cc7f3 call 0x112cd7b0 */
  push32(0x112cc7f8u); f_112cd7b0();
  /* 112cc7f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc7fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112cc7fe:;
  /* 112cc7fe mov esp, ebp */
  ESP = (EBP);
  /* 112cc800 pop ebp */
  EBP = (pop32());
  /* 112cc801 ret  */
  ESPCHK(0x112cc780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x112cc810 (178 bytes, 56 insns) */
void f_112cc810(void) {
  FTRACE(0x112cc810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc810 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc811 mov ebp, esp */
  EBP = (ESP);
  /* 112cc813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc819 push eax */
  push32((uint32_t)(EAX));
  /* 112cc81a call 0x112cd5a0 */
  push32(0x112cc81fu); f_112cd5a0();
  /* 112cc81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc822 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112cc825 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc829 jne 0x112cc83e */
  if (!C.zf) goto L_112cc83e;
  /* 112cc82b call 0x112cbf00 */
  push32(0x112cc830u); f_112cbf00();
  /* 112cc830 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112cc836 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cc839 jmp 0x112cc8be */
  goto L_112cc8be;
L_112cc83e:;
  /* 112cc83e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc841 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc842 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc844 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc847 push edx */
  push32((uint32_t)(EDX));
  /* 112cc848 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cc84b push eax */
  push32((uint32_t)(EAX));
  /* 112cc84c call dword ptr [0x112f22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f4))), 0x112cc852u);
  /* 112cc852 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cc855 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc859 jne 0x112cc866 */
  if (!C.zf) goto L_112cc866;
  /* 112cc85b call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112cc861u);
  /* 112cc861 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cc864 jmp 0x112cc86d */
  goto L_112cc86d;
L_112cc866:;
  /* 112cc866 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112cc86d:;
  /* 112cc86d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc871 je 0x112cc884 */
  if (C.zf) goto L_112cc884;
  /* 112cc873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cc876 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc877 call 0x112cbe60 */
  push32(0x112cc87cu); f_112cbe60();
  /* 112cc87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc87f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cc882 jmp 0x112cc8be */
  goto L_112cc8be;
L_112cc884:;
  /* 112cc884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc887 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 112cc88a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc88d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112cc890 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cc893 mov ecx, dword ptr [edx*4 + 0x112f0f20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112cc89a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 112cc89e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 112cc8a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc8a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cc8a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc8aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cc8ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cc8b0 mov eax, dword ptr [eax*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cc8b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 112cc8bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112cc8be:;
  /* 112cc8be mov esp, ebp */
  ESP = (EBP);
  /* 112cc8c0 pop ebp */
  EBP = (pop32());
  /* 112cc8c1 ret  */
  ESPCHK(0x112cc810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x112cc8d0 (130 bytes, 43 insns) */
void f_112cc8d0(void) {
  FTRACE(0x112cc8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc8d1 mov ebp, esp */
  EBP = (ESP);
  /* 112cc8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cc8d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc8d7 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc8dd jae 0x112cc901 */
  if (!C.cf) goto L_112cc901;
  /* 112cc8df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc8e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cc8e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc8e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cc8eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cc8ee mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cc8f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112cc8fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112cc8fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cc8ff jne 0x112cc91c */
  if (!C.zf) goto L_112cc91c;
L_112cc901:;
  /* 112cc901 call 0x112cbf00 */
  push32(0x112cc906u); f_112cbf00();
  /* 112cc906 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112cc90c call 0x112cbf10 */
  push32(0x112cc911u); f_112cbf10();
  /* 112cc911 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112cc917 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cc91a jmp 0x112cc94e */
  goto L_112cc94e;
L_112cc91c:;
  /* 112cc91c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc91f push edx */
  push32((uint32_t)(EDX));
  /* 112cc920 call 0x112cd720 */
  push32(0x112cc925u); f_112cd720();
  /* 112cc925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc928 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cc92b push eax */
  push32((uint32_t)(EAX));
  /* 112cc92c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc92f push ecx */
  push32((uint32_t)(ECX));
  /* 112cc930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc933 push edx */
  push32((uint32_t)(EDX));
  /* 112cc934 call 0x112cc960 */
  push32(0x112cc939u); f_112cc960();
  /* 112cc939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc93c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cc93f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc942 push eax */
  push32((uint32_t)(EAX));
  /* 112cc943 call 0x112cd7b0 */
  push32(0x112cc948u); f_112cd7b0();
  /* 112cc948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cc94b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112cc94e:;
  /* 112cc94e mov esp, ebp */
  ESP = (EBP);
  /* 112cc950 pop ebp */
  EBP = (pop32());
  /* 112cc951 ret  */
  ESPCHK(0x112cc8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x112cc960 (627 bytes, 182 insns) */
void f_112cc960(void) {
  FTRACE(0x112cc960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cc960 push ebp */
  push32((uint32_t)(EBP));
  /* 112cc961 mov ebp, esp */
  EBP = (ESP);
  /* 112cc963 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc969 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112cc970 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cc973 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 112cc979 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc97d jne 0x112cc986 */
  if (!C.zf) goto L_112cc986;
  /* 112cc97f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cc981 jmp 0x112ccbcf */
  goto L_112ccbcf;
L_112cc986:;
  /* 112cc986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc989 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cc98c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc98f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cc992 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cc995 mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cc99c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112cc9a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 112cc9a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cc9a6 je 0x112cc9b8 */
  if (C.zf) goto L_112cc9b8;
  /* 112cc9a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cc9aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112cc9ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc9af push edx */
  push32((uint32_t)(EDX));
  /* 112cc9b0 call 0x112cc810 */
  push32(0x112cc9b5u); f_112cc810();
  /* 112cc9b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cc9b8:;
  /* 112cc9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc9bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cc9be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cc9c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cc9c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cc9c7 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cc9ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 112cc9d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 112cc9d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cc9da je 0x112ccaec */
  if (C.zf) goto L_112ccaec;
  /* 112cc9e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cc9e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cc9e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_112cc9ed:;
  /* 112cc9ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cc9f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cc9f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cc9f6 jae 0x112ccaea */
  if (!C.cf) goto L_112ccaea;
  /* 112cc9fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 112cca02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112cca05:;
  /* 112cca05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cca08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 112cca0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cca10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cca16 jge 0x112cca77 */
  if ((C.sf==C.of)) goto L_112cca77;
  /* 112cca18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cca1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cca1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cca21 jae 0x112cca77 */
  if (!C.cf) goto L_112cca77;
  /* 112cca23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cca26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112cca28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 112cca2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cca31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cca34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cca37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 112cca3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cca41 jne 0x112cca61 */
  if (!C.zf) goto L_112cca61;
  /* 112cca43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 112cca49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cca4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 112cca52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cca55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 112cca58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cca5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cca5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112cca61:;
  /* 112cca61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cca64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 112cca6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 112cca6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cca6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cca72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cca75 jmp 0x112cca05 */
  goto L_112cca05;
L_112cca77:;
  /* 112cca77 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cca79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 112cca7f push edx */
  push32((uint32_t)(EDX));
  /* 112cca80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cca83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 112cca89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cca8b push eax */
  push32((uint32_t)(EAX));
  /* 112cca8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 112cca92 push edx */
  push32((uint32_t)(EDX));
  /* 112cca93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cca96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cca99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cca9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cca9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ccaa2 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112ccaa9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 112ccaac push eax */
  push32((uint32_t)(EAX));
  /* 112ccaad call dword ptr [0x112f2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2364))), 0x112ccab3u);
  /* 112ccab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ccab5 je 0x112ccada */
  if (C.zf) goto L_112ccada;
  /* 112ccab7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112ccaba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccac0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112ccac3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ccac6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 112ccacc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ccace cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccad4 jge 0x112ccad8 */
  if ((C.sf==C.of)) goto L_112ccad8;
  /* 112ccad6 jmp 0x112ccaea */
  goto L_112ccaea;
L_112ccad8:;
  /* 112ccad8 jmp 0x112ccae5 */
  goto L_112ccae5;
L_112ccada:;
  /* 112ccada call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112ccae0u);
  /* 112ccae0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112ccae3 jmp 0x112ccaea */
  goto L_112ccaea;
L_112ccae5:;
  /* 112ccae5 jmp 0x112cc9ed */
  goto L_112cc9ed;
L_112ccaea:;
  /* 112ccaea jmp 0x112ccb3c */
  goto L_112ccb3c;
L_112ccaec:;
  /* 112ccaec push 0 */
  push32((uint32_t)(0x0u));
  /* 112ccaee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 112ccaf4 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccaf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112ccaf8 push edx */
  push32((uint32_t)(EDX));
  /* 112ccaf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ccafc push eax */
  push32((uint32_t)(EAX));
  /* 112ccafd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccb00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112ccb03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccb06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112ccb09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ccb0c mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112ccb13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 112ccb16 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccb17 call dword ptr [0x112f2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2364))), 0x112ccb1du);
  /* 112ccb1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ccb1f je 0x112ccb33 */
  if (C.zf) goto L_112ccb33;
  /* 112ccb21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112ccb28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 112ccb2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112ccb31 jmp 0x112ccb3c */
  goto L_112ccb3c;
L_112ccb33:;
  /* 112ccb33 call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112ccb39u);
  /* 112ccb39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112ccb3c:;
  /* 112ccb3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccb40 jne 0x112ccbc6 */
  if (!C.zf) goto L_112ccbc6;
  /* 112ccb46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccb4a je 0x112ccb7a */
  if (C.zf) goto L_112ccb7a;
  /* 112ccb4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccb50 jne 0x112ccb69 */
  if (!C.zf) goto L_112ccb69;
  /* 112ccb52 call 0x112cbf00 */
  push32(0x112ccb57u); f_112cbf00();
  /* 112ccb57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112ccb5d call 0x112cbf10 */
  push32(0x112ccb62u); f_112cbf10();
  /* 112ccb62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ccb65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112ccb67 jmp 0x112ccb75 */
  goto L_112ccb75;
L_112ccb69:;
  /* 112ccb69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ccb6c push edx */
  push32((uint32_t)(EDX));
  /* 112ccb6d call 0x112cbe60 */
  push32(0x112ccb72u); f_112cbe60();
  /* 112ccb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ccb75:;
  /* 112ccb75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ccb78 jmp 0x112ccbcf */
  goto L_112ccbcf;
L_112ccb7a:;
  /* 112ccb7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccb7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112ccb80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccb83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112ccb86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ccb89 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112ccb90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 112ccb95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 112ccb98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ccb9a je 0x112ccbab */
  if (C.zf) goto L_112ccbab;
  /* 112ccb9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ccb9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112ccba2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccba5 jne 0x112ccbab */
  if (!C.zf) goto L_112ccbab;
  /* 112ccba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ccba9 jmp 0x112ccbcf */
  goto L_112ccbcf;
L_112ccbab:;
  /* 112ccbab call 0x112cbf00 */
  push32(0x112ccbb0u); f_112cbf00();
  /* 112ccbb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 112ccbb6 call 0x112cbf10 */
  push32(0x112ccbbbu); f_112cbf10();
  /* 112ccbbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112ccbc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ccbc4 jmp 0x112ccbcf */
  goto L_112ccbcf;
L_112ccbc6:;
  /* 112ccbc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112ccbc9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_112ccbcf:;
  /* 112ccbcf mov esp, ebp */
  ESP = (EBP);
  /* 112ccbd1 pop ebp */
  EBP = (pop32());
  /* 112ccbd2 ret  */
  ESPCHK(0x112cc960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x112ccbe0 (199 bytes, 68 insns) */
void f_112ccbe0(void) {
  FTRACE(0x112ccbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ccbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ccbe1 mov ebp, esp */
  EBP = (ESP);
  /* 112ccbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccbe4 push ebx */
  push32((uint32_t)(EBX));
  /* 112ccbe5 push esi */
  push32((uint32_t)(ESI));
  /* 112ccbe6 push edi */
  push32((uint32_t)(EDI));
L_112ccbe7:;
  /* 112ccbe7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccbeb jne 0x112ccc0b */
  if (!C.zf) goto L_112ccc0b;
  /* 112ccbed push 0x112eaff4 */
  push32((uint32_t)(0x112eaff4u));
  /* 112ccbf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ccbf4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 112ccbf6 push 0x112eb0c0 */
  push32((uint32_t)(0x112eb0c0u));
  /* 112ccbfb push 2 */
  push32((uint32_t)(0x2u));
  /* 112ccbfd call 0x112c30f0 */
  push32(0x112ccc02u); f_112c30f0();
  /* 112ccc02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccc05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccc08 jne 0x112ccc0b */
  if (!C.zf) goto L_112ccc0b;
  /* 112ccc0a int3  */
  x86_unimpl("int3 @ 0x112ccc0a");
L_112ccc0b:;
  /* 112ccc0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ccc0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ccc0f jne 0x112ccbe7 */
  if (!C.zf) goto L_112ccbe7;
  /* 112ccc11 mov ecx, dword ptr [0x112ef754] */
  ECX = (r32((uint32_t)(0x112ef754)));
  /* 112ccc17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccc1a mov dword ptr [0x112ef754], ecx */
  w32((uint32_t)(0x112ef754), (ECX));
  /* 112ccc20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccc23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112ccc26 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 112ccc28 push 0x112eb0c0 */
  push32((uint32_t)(0x112eb0c0u));
  /* 112ccc2d push 2 */
  push32((uint32_t)(0x2u));
  /* 112ccc2f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112ccc34 call 0x112c4030 */
  push32(0x112ccc39u); f_112c4030();
  /* 112ccc39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccc3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc3f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112ccc42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc45 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccc49 je 0x112ccc66 */
  if (C.zf) goto L_112ccc66;
  /* 112ccc4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc4e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112ccc51 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 112ccc54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc57 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 112ccc5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc5d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 112ccc64 jmp 0x112ccc8b */
  goto L_112ccc8b;
L_112ccc66:;
  /* 112ccc66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc69 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112ccc6c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112ccc6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc72 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 112ccc75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc78 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccc7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc7e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112ccc81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc84 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_112ccc8b:;
  /* 112ccc8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112ccc94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112ccc96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccc99 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 112ccca0 pop edi */
  EDI = (pop32());
  /* 112ccca1 pop esi */
  ESI = (pop32());
  /* 112ccca2 pop ebx */
  EBX = (pop32());
  /* 112ccca3 mov esp, ebp */
  ESP = (EBP);
  /* 112ccca5 pop ebp */
  EBP = (pop32());
  /* 112ccca6 ret  */
  ESPCHK(0x112ccbe0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x112cccb0 (50 bytes, 17 insns) */
void f_112cccb0(void) {
  FTRACE(0x112cccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cccb1 mov ebp, esp */
  EBP = (ESP);
  /* 112cccb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cccb6 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cccbc jb 0x112cccc2 */
  if (C.cf) goto L_112cccc2;
  /* 112cccbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cccc0 jmp 0x112ccce0 */
  goto L_112ccce0;
L_112cccc2:;
  /* 112cccc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cccc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cccc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccccb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cccce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cccd1 mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cccd8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112cccdd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_112ccce0:;
  /* 112ccce0 pop ebp */
  EBP = (pop32());
  /* 112ccce1 ret  */
  ESPCHK(0x112cccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x112cccf0 (300 bytes, 80 insns) */
void f_112cccf0(void) {
  FTRACE(0x112cccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cccf1 mov ebp, esp */
  EBP = (ESP);
  /* 112cccf3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cccf4 cmp dword ptr [0x112f0c20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cccfb jne 0x112ccd09 */
  if (!C.zf) goto L_112ccd09;
  /* 112cccfd mov dword ptr [0x112f0c20], 0x200 */
  w32((uint32_t)(0x112f0c20), (0x200u));
  /* 112ccd07 jmp 0x112ccd1c */
  goto L_112ccd1c;
L_112ccd09:;
  /* 112ccd09 cmp dword ptr [0x112f0c20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x112f0c20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccd10 jge 0x112ccd1c */
  if ((C.sf==C.of)) goto L_112ccd1c;
  /* 112ccd12 mov dword ptr [0x112f0c20], 0x14 */
  w32((uint32_t)(0x112f0c20), (0x14u));
L_112ccd1c:;
  /* 112ccd1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 112ccd21 push 0x112eb0cc */
  push32((uint32_t)(0x112eb0ccu));
  /* 112ccd26 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ccd28 push 4 */
  push32((uint32_t)(0x4u));
  /* 112ccd2a mov eax, dword ptr [0x112f0c20] */
  EAX = (r32((uint32_t)(0x112f0c20)));
  /* 112ccd2f push eax */
  push32((uint32_t)(EAX));
  /* 112ccd30 call 0x112c4440 */
  push32(0x112ccd35u); f_112c4440();
  /* 112ccd35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccd38 mov dword ptr [0x112ef8c8], eax */
  w32((uint32_t)(0x112ef8c8), (EAX));
  /* 112ccd3d cmp dword ptr [0x112ef8c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccd44 jne 0x112ccd85 */
  if (!C.zf) goto L_112ccd85;
  /* 112ccd46 mov dword ptr [0x112f0c20], 0x14 */
  w32((uint32_t)(0x112f0c20), (0x14u));
  /* 112ccd50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 112ccd55 push 0x112eb0cc */
  push32((uint32_t)(0x112eb0ccu));
  /* 112ccd5a push 2 */
  push32((uint32_t)(0x2u));
  /* 112ccd5c push 4 */
  push32((uint32_t)(0x4u));
  /* 112ccd5e mov ecx, dword ptr [0x112f0c20] */
  ECX = (r32((uint32_t)(0x112f0c20)));
  /* 112ccd64 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccd65 call 0x112c4440 */
  push32(0x112ccd6au); f_112c4440();
  /* 112ccd6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccd6d mov dword ptr [0x112ef8c8], eax */
  w32((uint32_t)(0x112ef8c8), (EAX));
  /* 112ccd72 cmp dword ptr [0x112ef8c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccd79 jne 0x112ccd85 */
  if (!C.zf) goto L_112ccd85;
  /* 112ccd7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 112ccd7d call 0x112c2fa0 */
  push32(0x112ccd82u); f_112c2fa0();
  /* 112ccd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ccd85:;
  /* 112ccd85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ccd8c jmp 0x112ccd97 */
  goto L_112ccd97;
L_112ccd8e:;
  /* 112ccd8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccd91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccd94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112ccd97:;
  /* 112ccd97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccd9b jge 0x112ccdb6 */
  if ((C.sf==C.of)) goto L_112ccdb6;
  /* 112ccd9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccda0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112ccda3 add eax, 0x112ee120 */
  { uint32_t _a=(EAX),_b=(0x112ee120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccda8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccdab mov edx, dword ptr [0x112ef8c8] */
  EDX = (r32((uint32_t)(0x112ef8c8)));
  /* 112ccdb1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 112ccdb4 jmp 0x112ccd8e */
  goto L_112ccd8e;
L_112ccdb6:;
  /* 112ccdb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ccdbd jmp 0x112ccdc8 */
  goto L_112ccdc8;
L_112ccdbf:;
  /* 112ccdbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccdc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccdc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112ccdc8:;
  /* 112ccdc8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccdcc jge 0x112cce18 */
  if ((C.sf==C.of)) goto L_112cce18;
  /* 112ccdce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccdd1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112ccdd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccdd7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112ccdda imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ccddd mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112ccde4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccde8 je 0x112cce06 */
  if (C.zf) goto L_112cce06;
  /* 112ccdea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccded sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112ccdf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ccdf3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112ccdf6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ccdf9 mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cce00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cce04 jne 0x112cce16 */
  if (!C.zf) goto L_112cce16;
L_112cce06:;
  /* 112cce06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cce09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cce0c mov dword ptr [ecx + 0x112ee130], 0xffffffff */
  w32((uint32_t)(ECX + 0x112ee130), (0xffffffffu));
L_112cce16:;
  /* 112cce16 jmp 0x112ccdbf */
  goto L_112ccdbf;
L_112cce18:;
  /* 112cce18 mov esp, ebp */
  ESP = (EBP);
  /* 112cce1a pop ebp */
  EBP = (pop32());
  /* 112cce1b ret  */
  ESPCHK(0x112cccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x112cce20 (26 bytes, 9 insns) */
void f_112cce20(void) {
  FTRACE(0x112cce20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cce20 push ebp */
  push32((uint32_t)(EBP));
  /* 112cce21 mov ebp, esp */
  EBP = (ESP);
  /* 112cce23 call 0x112cda20 */
  push32(0x112cce28u); f_112cda20();
  /* 112cce28 movsx eax, byte ptr [0x112ef56c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x112ef56c))));
  /* 112cce2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cce31 je 0x112cce38 */
  if (C.zf) goto L_112cce38;
  /* 112cce33 call 0x112cd7e0 */
  push32(0x112cce38u); f_112cd7e0();
L_112cce38:;
  /* 112cce38 pop ebp */
  EBP = (pop32());
  /* 112cce39 ret  */
  ESPCHK(0x112cce20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x112cce40 (61 bytes, 20 insns) */
void f_112cce40(void) {
  FTRACE(0x112cce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cce40 push ebp */
  push32((uint32_t)(EBP));
  /* 112cce41 mov ebp, esp */
  EBP = (ESP);
  /* 112cce43 cmp dword ptr [ebp + 8], 0x112ee120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x112ee120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cce4a jb 0x112cce6e */
  if (C.cf) goto L_112cce6e;
  /* 112cce4c cmp dword ptr [ebp + 8], 0x112ee380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x112ee380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cce53 ja 0x112cce6e */
  if ((!C.cf&&!C.zf)) goto L_112cce6e;
  /* 112cce55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cce58 sub eax, 0x112ee120 */
  { uint32_t _a=(EAX),_b=(0x112ee120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cce5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cce60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cce63 push eax */
  push32((uint32_t)(EAX));
  /* 112cce64 call 0x112c7a30 */
  push32(0x112cce69u); f_112c7a30();
  /* 112cce69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cce6c jmp 0x112cce7b */
  goto L_112cce7b;
L_112cce6e:;
  /* 112cce6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cce71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cce74 push ecx */
  push32((uint32_t)(ECX));
  /* 112cce75 call dword ptr [0x112f2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2330))), 0x112cce7bu);
L_112cce7b:;
  /* 112cce7b pop ebp */
  EBP = (pop32());
  /* 112cce7c ret  */
  ESPCHK(0x112cce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x112cce80 (41 bytes, 16 insns) */
void f_112cce80(void) {
  FTRACE(0x112cce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cce80 push ebp */
  push32((uint32_t)(EBP));
  /* 112cce81 mov ebp, esp */
  EBP = (ESP);
  /* 112cce83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cce87 jge 0x112cce9a */
  if ((C.sf==C.of)) goto L_112cce9a;
  /* 112cce89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cce8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cce8f push eax */
  push32((uint32_t)(EAX));
  /* 112cce90 call 0x112c7a30 */
  push32(0x112cce95u); f_112c7a30();
  /* 112cce95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cce98 jmp 0x112ccea7 */
  goto L_112ccea7;
L_112cce9a:;
  /* 112cce9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cce9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccea0 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccea1 call dword ptr [0x112f2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2330))), 0x112ccea7u);
L_112ccea7:;
  /* 112ccea7 pop ebp */
  EBP = (pop32());
  /* 112ccea8 ret  */
  ESPCHK(0x112cce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x112cceb0 (61 bytes, 20 insns) */
void f_112cceb0(void) {
  FTRACE(0x112cceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cceb1 mov ebp, esp */
  EBP = (ESP);
  /* 112cceb3 cmp dword ptr [ebp + 8], 0x112ee120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x112ee120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cceba jb 0x112ccede */
  if (C.cf) goto L_112ccede;
  /* 112ccebc cmp dword ptr [ebp + 8], 0x112ee380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x112ee380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccec3 ja 0x112ccede */
  if ((!C.cf&&!C.zf)) goto L_112ccede;
  /* 112ccec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccec8 sub eax, 0x112ee120 */
  { uint32_t _a=(EAX),_b=(0x112ee120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ccecd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cced0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cced3 push eax */
  push32((uint32_t)(EAX));
  /* 112cced4 call 0x112c7ad0 */
  push32(0x112cced9u); f_112c7ad0();
  /* 112cced9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccedc jmp 0x112cceeb */
  goto L_112cceeb;
L_112ccede:;
  /* 112ccede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccee1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccee4 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccee5 call dword ptr [0x112f232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f232c))), 0x112cceebu);
L_112cceeb:;
  /* 112cceeb pop ebp */
  EBP = (pop32());
  /* 112cceec ret  */
  ESPCHK(0x112cceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cef0 @ 0x112ccef0 (41 bytes, 16 insns) */
void f_112ccef0(void) {
  FTRACE(0x112ccef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ccef0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ccef1 mov ebp, esp */
  EBP = (ESP);
  /* 112ccef3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccef7 jge 0x112ccf0a */
  if ((C.sf==C.of)) goto L_112ccf0a;
  /* 112ccef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccefc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cceff push eax */
  push32((uint32_t)(EAX));
  /* 112ccf00 call 0x112c7ad0 */
  push32(0x112ccf05u); f_112c7ad0();
  /* 112ccf05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccf08 jmp 0x112ccf17 */
  goto L_112ccf17;
L_112ccf0a:;
  /* 112ccf0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ccf0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccf10 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccf11 call dword ptr [0x112f232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f232c))), 0x112ccf17u);
L_112ccf17:;
  /* 112ccf17 pop ebp */
  EBP = (pop32());
  /* 112ccf18 ret  */
  ESPCHK(0x112ccef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x112ccf20 (119 bytes, 34 insns) */
void f_112ccf20(void) {
  FTRACE(0x112ccf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ccf20 push ebp */
  push32((uint32_t)(EBP));
  /* 112ccf21 mov ebp, esp */
  EBP = (ESP);
  /* 112ccf23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ccf26 push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112ccf2b call dword ptr [0x112f2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2378))), 0x112ccf31u);
  /* 112ccf31 cmp dword ptr [0x112ef8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccf38 je 0x112ccf58 */
  if (C.zf) goto L_112ccf58;
  /* 112ccf3a push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112ccf3f call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112ccf45u);
  /* 112ccf45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112ccf47 call 0x112c7a30 */
  push32(0x112ccf4cu); f_112c7a30();
  /* 112ccf4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccf4f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112ccf56 jmp 0x112ccf5f */
  goto L_112ccf5f;
L_112ccf58:;
  /* 112ccf58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112ccf5f:;
  /* 112ccf5f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 112ccf63 push eax */
  push32((uint32_t)(EAX));
  /* 112ccf64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccf67 push ecx */
  push32((uint32_t)(ECX));
  /* 112ccf68 call 0x112ccfa0 */
  push32(0x112ccf6du); f_112ccfa0();
  /* 112ccf6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccf70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112ccf73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccf77 je 0x112ccf85 */
  if (C.zf) goto L_112ccf85;
  /* 112ccf79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112ccf7b call 0x112c7ad0 */
  push32(0x112ccf80u); f_112c7ad0();
  /* 112ccf80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ccf83 jmp 0x112ccf90 */
  goto L_112ccf90;
L_112ccf85:;
  /* 112ccf85 push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112ccf8a call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112ccf90u);
L_112ccf90:;
  /* 112ccf90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ccf93 mov esp, ebp */
  ESP = (EBP);
  /* 112ccf95 pop ebp */
  EBP = (pop32());
  /* 112ccf96 ret  */
  ESPCHK(0x112ccf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x112ccfa0 (160 bytes, 50 insns) */
void f_112ccfa0(void) {
  FTRACE(0x112ccfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ccfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ccfa1 mov ebp, esp */
  EBP = (ESP);
  /* 112ccfa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ccfa6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccfaa jne 0x112ccfb3 */
  if (!C.zf) goto L_112ccfb3;
  /* 112ccfac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ccfae jmp 0x112cd03c */
  goto L_112cd03c;
L_112ccfb3:;
  /* 112ccfb3 cmp dword ptr [0x112ef738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccfba jne 0x112ccfea */
  if (!C.zf) goto L_112ccfea;
  /* 112ccfbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ccfbf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ccfc4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ccfc9 jle 0x112ccfdb */
  if ((C.zf||C.sf!=C.of)) goto L_112ccfdb;
  /* 112ccfcb call 0x112cbf00 */
  push32(0x112ccfd0u); f_112cbf00();
  /* 112ccfd0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 112ccfd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ccfd9 jmp 0x112cd03c */
  goto L_112cd03c;
L_112ccfdb:;
  /* 112ccfdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ccfde mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 112ccfe1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 112ccfe3 mov eax, 1 */
  EAX = (0x1u);
  /* 112ccfe8 jmp 0x112cd03c */
  goto L_112cd03c;
L_112ccfea:;
  /* 112ccfea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112ccff1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112ccff4 push eax */
  push32((uint32_t)(EAX));
  /* 112ccff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ccff7 mov ecx, dword ptr [0x112edea4] */
  ECX = (r32((uint32_t)(0x112edea4)));
  /* 112ccffd push ecx */
  push32((uint32_t)(ECX));
  /* 112ccffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd001 push edx */
  push32((uint32_t)(EDX));
  /* 112cd002 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cd004 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 112cd007 push eax */
  push32((uint32_t)(EAX));
  /* 112cd008 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112cd00d mov ecx, dword ptr [0x112ef748] */
  ECX = (r32((uint32_t)(0x112ef748)));
  /* 112cd013 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd014 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112cd01au);
  /* 112cd01a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cd01d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd021 je 0x112cd029 */
  if (C.zf) goto L_112cd029;
  /* 112cd023 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd027 je 0x112cd039 */
  if (C.zf) goto L_112cd039;
L_112cd029:;
  /* 112cd029 call 0x112cbf00 */
  push32(0x112cd02eu); f_112cbf00();
  /* 112cd02e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 112cd034 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd037 jmp 0x112cd03c */
  goto L_112cd03c;
L_112cd039:;
  /* 112cd039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112cd03c:;
  /* 112cd03c mov esp, ebp */
  ESP = (EBP);
  /* 112cd03e pop ebp */
  EBP = (pop32());
  /* 112cd03f ret  */
  ESPCHK(0x112ccfa0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x112cd040 (32 bytes, 18 insns) */
void f_112cd040(void) {
  FTRACE(0x112cd040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd040 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd041 mov ebp, esp */
  EBP = (ESP);
  /* 112cd043 push ebx */
  push32((uint32_t)(EBX));
  /* 112cd044 push esi */
  push32((uint32_t)(ESI));
  /* 112cd045 push edi */
  push32((uint32_t)(EDI));
  /* 112cd046 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd047 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cd049 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cd04b push 0x112cd058 */
  push32((uint32_t)(0x112cd058u));
  /* 112cd050 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112cd053 call 0x112d478c */
  push32(0x112cd058u); f_112d478c();
  /* 112cd058 pop ebp */
  EBP = (pop32());
  /* 112cd059 pop edi */
  EDI = (pop32());
  /* 112cd05a pop esi */
  ESI = (pop32());
  /* 112cd05b pop ebx */
  EBX = (pop32());
  /* 112cd05c mov esp, ebp */
  ESP = (EBP);
  /* 112cd05e pop ebp */
  EBP = (pop32());
  /* 112cd05f ret  */
  ESPCHK(0x112cd040u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x112cd082 (104 bytes, 33 insns) */
void f_112cd082(void) {
  FTRACE(0x112cd082u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd082 push ebx */
  push32((uint32_t)(EBX));
  /* 112cd083 push esi */
  push32((uint32_t)(ESI));
  /* 112cd084 push edi */
  push32((uint32_t)(EDI));
  /* 112cd085 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112cd089 push eax */
  push32((uint32_t)(EAX));
  /* 112cd08a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 112cd08c push 0x112cd060 */
  push32((uint32_t)(0x112cd060u));
  /* 112cd091 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 112cd098 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_112cd09f:;
  /* 112cd09f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 112cd0a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 112cd0a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 112cd0a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd0ac je 0x112cd0dc */
  if (C.zf) goto L_112cd0dc;
  /* 112cd0ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd0b2 je 0x112cd0dc */
  if (C.zf) goto L_112cd0dc;
  /* 112cd0b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 112cd0b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 112cd0ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 112cd0be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 112cd0c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd0c6 jne 0x112cd0da */
  if (!C.zf) goto L_112cd0da;
  /* 112cd0c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 112cd0cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 112cd0d1 call 0x112cd116 */
  push32(0x112cd0d6u); f_112cd116();
  /* 112cd0d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x112cd0dau);
L_112cd0da:;
  /* 112cd0da jmp 0x112cd09f */
  goto L_112cd09f;
L_112cd0dc:;
  /* 112cd0dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 112cd0e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd0e6 pop edi */
  EDI = (pop32());
  /* 112cd0e7 pop esi */
  ESI = (pop32());
  /* 112cd0e8 pop ebx */
  EBX = (pop32());
  /* 112cd0e9 ret  */
  ESPCHK(0x112cd082u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d116 @ 0x112cd116 (24 bytes, 10 insns) */
void f_112cd116(void) {
  FTRACE(0x112cd116u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd116 push ebx */
  push32((uint32_t)(EBX));
  /* 112cd117 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd118 mov ebx, 0x112ee3b8 */
  EBX = (0x112ee3b8u);
  /* 112cd11d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd120 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 112cd123 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 112cd126 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 112cd129 pop ecx */
  ECX = (pop32());
  /* 112cd12a pop ebx */
  EBX = (pop32());
  /* 112cd12b ret 4 */
  ESPCHK(0x112cd116u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d1f5 @ 0x112cd1f5 (27 bytes, 11 insns) */
void f_112cd1f5(void) {
  FTRACE(0x112cd1f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd1f5 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd1f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112cd1fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 112cd1fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112cd1ff push eax */
  push32((uint32_t)(EAX));
  /* 112cd200 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 112cd203 push eax */
  push32((uint32_t)(EAX));
  /* 112cd204 call 0x112cd082 */
  push32(0x112cd209u); f_112cd082();
  /* 112cd209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd20c pop ebp */
  EBP = (pop32());
  /* 112cd20d ret 4 */
  ESPCHK(0x112cd1f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d210 @ 0x112cd210 (482 bytes, 138 insns) */
void f_112cd210(void) {
  FTRACE(0x112cd210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd210 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd211 mov ebp, esp */
  EBP = (ESP);
  /* 112cd213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd216 push esi */
  push32((uint32_t)(ESI));
  /* 112cd217 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 112cd21e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 112cd220 call 0x112c7a30 */
  push32(0x112cd225u); f_112c7a30();
  /* 112cd225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd228 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112cd22f jmp 0x112cd23a */
  goto L_112cd23a;
L_112cd231:;
  /* 112cd231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd237 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112cd23a:;
  /* 112cd23a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd23e jge 0x112cd3e0 */
  if ((C.sf==C.of)) goto L_112cd3e0;
  /* 112cd244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd247 cmp dword ptr [ecx*4 + 0x112f0f20], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x112f0f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd24f je 0x112cd346 */
  if (C.zf) goto L_112cd346;
  /* 112cd255 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd258 mov eax, dword ptr [edx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112cd25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cd262 jmp 0x112cd26d */
  goto L_112cd26d;
L_112cd264:;
  /* 112cd264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd267 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd26a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112cd26d:;
  /* 112cd26d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd270 mov eax, dword ptr [edx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112cd277 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd27c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd27f jae 0x112cd336 */
  if (!C.cf) goto L_112cd336;
  /* 112cd285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd288 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112cd28c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112cd28f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cd291 jne 0x112cd331 */
  if (!C.zf) goto L_112cd331;
  /* 112cd297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd29a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd29e jne 0x112cd2d9 */
  if (!C.zf) goto L_112cd2d9;
  /* 112cd2a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112cd2a2 call 0x112c7a30 */
  push32(0x112cd2a7u); f_112c7a30();
  /* 112cd2a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd2aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd2b1 jne 0x112cd2cf */
  if (!C.zf) goto L_112cd2cf;
  /* 112cd2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd2b9 push edx */
  push32((uint32_t)(EDX));
  /* 112cd2ba call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112cd2c0u);
  /* 112cd2c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112cd2c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd2c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_112cd2cf:;
  /* 112cd2cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112cd2d1 call 0x112c7ad0 */
  push32(0x112cd2d6u); f_112c7ad0();
  /* 112cd2d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cd2d9:;
  /* 112cd2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd2df push eax */
  push32((uint32_t)(EAX));
  /* 112cd2e0 call dword ptr [0x112f2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2330))), 0x112cd2e6u);
  /* 112cd2e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 112cd2ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112cd2f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cd2f2 je 0x112cd306 */
  if (C.zf) goto L_112cd306;
  /* 112cd2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd2f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd2fa push eax */
  push32((uint32_t)(EAX));
  /* 112cd2fb call dword ptr [0x112f232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f232c))), 0x112cd301u);
  /* 112cd301 jmp 0x112cd264 */
  goto L_112cd264;
L_112cd306:;
  /* 112cd306 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd309 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112cd30f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd312 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cd315 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd31b sub eax, dword ptr [edx*4 + 0x112f0f20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x112f0f20))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd322 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112cd323 mov esi, 0x24 */
  ESI = (0x24u);
  /* 112cd328 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112cd32a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd32c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cd32f jmp 0x112cd336 */
  goto L_112cd336;
L_112cd331:;
  /* 112cd331 jmp 0x112cd264 */
  goto L_112cd264;
L_112cd336:;
  /* 112cd336 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd33a je 0x112cd341 */
  if (C.zf) goto L_112cd341;
  /* 112cd33c jmp 0x112cd3e0 */
  goto L_112cd3e0;
L_112cd341:;
  /* 112cd341 jmp 0x112cd3db */
  goto L_112cd3db;
L_112cd346:;
  /* 112cd346 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 112cd348 push 0x112eb0d4 */
  push32((uint32_t)(0x112eb0d4u));
  /* 112cd34d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cd34f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 112cd354 call 0x112c4030 */
  push32(0x112cd359u); f_112c4030();
  /* 112cd359 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd35c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cd35f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd363 je 0x112cd3d9 */
  if (C.zf) goto L_112cd3d9;
  /* 112cd365 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd36b mov dword ptr [eax*4 + 0x112f0f20], ecx */
  w32((uint32_t)(EAX*4 + 0x112f0f20), (ECX));
  /* 112cd372 mov edx, dword ptr [0x112f105c] */
  EDX = (r32((uint32_t)(0x112f105c)));
  /* 112cd378 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd37b mov dword ptr [0x112f105c], edx */
  w32((uint32_t)(0x112f105c), (EDX));
  /* 112cd381 jmp 0x112cd38c */
  goto L_112cd38c;
L_112cd383:;
  /* 112cd383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd386 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112cd38c:;
  /* 112cd38c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd38f mov edx, dword ptr [ecx*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cd396 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd39c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd39f jae 0x112cd3c4 */
  if (!C.cf) goto L_112cd3c4;
  /* 112cd3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd3a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 112cd3a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd3ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112cd3b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd3b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 112cd3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd3bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 112cd3c2 jmp 0x112cd383 */
  goto L_112cd383;
L_112cd3c4:;
  /* 112cd3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd3c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cd3ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cd3cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd3d0 push edx */
  push32((uint32_t)(EDX));
  /* 112cd3d1 call 0x112cd720 */
  push32(0x112cd3d6u); f_112cd720();
  /* 112cd3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cd3d9:;
  /* 112cd3d9 jmp 0x112cd3e0 */
  goto L_112cd3e0;
L_112cd3db:;
  /* 112cd3db jmp 0x112cd231 */
  goto L_112cd231;
L_112cd3e0:;
  /* 112cd3e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 112cd3e2 call 0x112c7ad0 */
  push32(0x112cd3e7u); f_112c7ad0();
  /* 112cd3e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd3ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd3ed pop esi */
  ESI = (pop32());
  /* 112cd3ee mov esp, ebp */
  ESP = (EBP);
  /* 112cd3f0 pop ebp */
  EBP = (pop32());
  /* 112cd3f1 ret  */
  ESPCHK(0x112cd210u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x112cd400 (183 bytes, 57 insns) */
void f_112cd400(void) {
  FTRACE(0x112cd400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd400 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd401 mov ebp, esp */
  EBP = (ESP);
  /* 112cd403 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd407 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd40d jae 0x112cd49a */
  if (!C.cf) goto L_112cd49a;
  /* 112cd413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd416 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cd419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd41c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cd41f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd422 mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cd429 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd42d jne 0x112cd49a */
  if (!C.zf) goto L_112cd49a;
  /* 112cd42f cmp dword ptr [0x112ef52c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef52c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd436 jne 0x112cd47a */
  if (!C.zf) goto L_112cd47a;
  /* 112cd438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd43b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cd43e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd442 je 0x112cd452 */
  if (C.zf) goto L_112cd452;
  /* 112cd444 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd448 je 0x112cd460 */
  if (C.zf) goto L_112cd460;
  /* 112cd44a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd44e je 0x112cd46e */
  if (C.zf) goto L_112cd46e;
  /* 112cd450 jmp 0x112cd47a */
  goto L_112cd47a;
L_112cd452:;
  /* 112cd452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd455 push edx */
  push32((uint32_t)(EDX));
  /* 112cd456 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 112cd458 call dword ptr [0x112f22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f8))), 0x112cd45eu);
  /* 112cd45e jmp 0x112cd47a */
  goto L_112cd47a;
L_112cd460:;
  /* 112cd460 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd463 push eax */
  push32((uint32_t)(EAX));
  /* 112cd464 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 112cd466 call dword ptr [0x112f22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f8))), 0x112cd46cu);
  /* 112cd46c jmp 0x112cd47a */
  goto L_112cd47a;
L_112cd46e:;
  /* 112cd46e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd471 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd472 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112cd474 call dword ptr [0x112f22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f8))), 0x112cd47au);
L_112cd47a:;
  /* 112cd47a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd47d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 112cd480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd483 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd486 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd489 mov ecx, dword ptr [edx*4 + 0x112f0f20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112cd490 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd493 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 112cd496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cd498 jmp 0x112cd4b3 */
  goto L_112cd4b3;
L_112cd49a:;
  /* 112cd49a call 0x112cbf00 */
  push32(0x112cd49fu); f_112cbf00();
  /* 112cd49f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112cd4a5 call 0x112cbf10 */
  push32(0x112cd4aau); f_112cbf10();
  /* 112cd4aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112cd4b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112cd4b3:;
  /* 112cd4b3 mov esp, ebp */
  ESP = (EBP);
  /* 112cd4b5 pop ebp */
  EBP = (pop32());
  /* 112cd4b6 ret  */
  ESPCHK(0x112cd400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4c0 @ 0x112cd4c0 (216 bytes, 63 insns) */
void f_112cd4c0(void) {
  FTRACE(0x112cd4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd4c1 mov ebp, esp */
  EBP = (ESP);
  /* 112cd4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd4c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd4c7 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd4cd jae 0x112cd57b */
  if (!C.cf) goto L_112cd57b;
  /* 112cd4d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd4d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cd4d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd4dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cd4df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd4e2 mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cd4e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112cd4ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112cd4f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cd4f3 je 0x112cd57b */
  if (C.zf) goto L_112cd57b;
  /* 112cd4f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd4fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 112cd4ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd502 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd505 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd508 mov ecx, dword ptr [edx*4 + 0x112f0f20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112cd50f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd513 je 0x112cd57b */
  if (C.zf) goto L_112cd57b;
  /* 112cd515 cmp dword ptr [0x112ef52c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef52c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd51c jne 0x112cd55a */
  if (!C.zf) goto L_112cd55a;
  /* 112cd51e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd521 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cd524 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd528 je 0x112cd538 */
  if (C.zf) goto L_112cd538;
  /* 112cd52a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd52e je 0x112cd544 */
  if (C.zf) goto L_112cd544;
  /* 112cd530 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd534 je 0x112cd550 */
  if (C.zf) goto L_112cd550;
  /* 112cd536 jmp 0x112cd55a */
  goto L_112cd55a;
L_112cd538:;
  /* 112cd538 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cd53a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 112cd53c call dword ptr [0x112f22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f8))), 0x112cd542u);
  /* 112cd542 jmp 0x112cd55a */
  goto L_112cd55a;
L_112cd544:;
  /* 112cd544 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cd546 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 112cd548 call dword ptr [0x112f22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f8))), 0x112cd54eu);
  /* 112cd54e jmp 0x112cd55a */
  goto L_112cd55a;
L_112cd550:;
  /* 112cd550 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cd552 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112cd554 call dword ptr [0x112f22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22f8))), 0x112cd55au);
L_112cd55a:;
  /* 112cd55a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd55d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cd560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd563 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cd566 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd569 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cd570 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 112cd577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cd579 jmp 0x112cd594 */
  goto L_112cd594;
L_112cd57b:;
  /* 112cd57b call 0x112cbf00 */
  push32(0x112cd580u); f_112cbf00();
  /* 112cd580 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112cd586 call 0x112cbf10 */
  push32(0x112cd58bu); f_112cbf10();
  /* 112cd58b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112cd591 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112cd594:;
  /* 112cd594 mov esp, ebp */
  ESP = (EBP);
  /* 112cd596 pop ebp */
  EBP = (pop32());
  /* 112cd597 ret  */
  ESPCHK(0x112cd4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5a0 @ 0x112cd5a0 (102 bytes, 30 insns) */
void f_112cd5a0(void) {
  FTRACE(0x112cd5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd5a1 mov ebp, esp */
  EBP = (ESP);
  /* 112cd5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd5a6 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd5ac jae 0x112cd5eb */
  if (!C.cf) goto L_112cd5eb;
  /* 112cd5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd5b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112cd5b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd5b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112cd5ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd5bd mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112cd5c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112cd5c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112cd5cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cd5ce je 0x112cd5eb */
  if (C.zf) goto L_112cd5eb;
  /* 112cd5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd5d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 112cd5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd5d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd5dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd5df mov ecx, dword ptr [edx*4 + 0x112f0f20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112cd5e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 112cd5e9 jmp 0x112cd604 */
  goto L_112cd604;
L_112cd5eb:;
  /* 112cd5eb call 0x112cbf00 */
  push32(0x112cd5f0u); f_112cbf00();
  /* 112cd5f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112cd5f6 call 0x112cbf10 */
  push32(0x112cd5fbu); f_112cbf10();
  /* 112cd5fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112cd601 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112cd604:;
  /* 112cd604 pop ebp */
  EBP = (pop32());
  /* 112cd605 ret  */
  ESPCHK(0x112cd5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d610 @ 0x112cd610 (260 bytes, 83 insns) */
void f_112cd610(void) {
  FTRACE(0x112cd610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd610 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd611 mov ebp, esp */
  EBP = (ESP);
  /* 112cd613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd616 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 112cd61a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd61d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 112cd620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cd622 je 0x112cd62d */
  if (C.zf) goto L_112cd62d;
  /* 112cd624 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd627 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 112cd62a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_112cd62d:;
  /* 112cd62d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd630 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 112cd636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cd638 je 0x112cd642 */
  if (C.zf) goto L_112cd642;
  /* 112cd63a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd63d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 112cd63f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_112cd642:;
  /* 112cd642 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cd645 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 112cd64b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cd64d je 0x112cd658 */
  if (C.zf) goto L_112cd658;
  /* 112cd64f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd652 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 112cd655 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_112cd658:;
  /* 112cd658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd65b push eax */
  push32((uint32_t)(EAX));
  /* 112cd65c call dword ptr [0x112f23b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b0))), 0x112cd662u);
  /* 112cd662 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cd665 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd669 jne 0x112cd682 */
  if (!C.zf) goto L_112cd682;
  /* 112cd66b call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112cd671u);
  /* 112cd671 push eax */
  push32((uint32_t)(EAX));
  /* 112cd672 call 0x112cbe60 */
  push32(0x112cd677u); f_112cbe60();
  /* 112cd677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd67a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd67d jmp 0x112cd710 */
  goto L_112cd710;
L_112cd682:;
  /* 112cd682 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd686 jne 0x112cd693 */
  if (!C.zf) goto L_112cd693;
  /* 112cd688 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd68b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 112cd68e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 112cd691 jmp 0x112cd6a2 */
  goto L_112cd6a2;
L_112cd693:;
  /* 112cd693 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd697 jne 0x112cd6a2 */
  if (!C.zf) goto L_112cd6a2;
  /* 112cd699 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd69c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 112cd69f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_112cd6a2:;
  /* 112cd6a2 call 0x112cd210 */
  push32(0x112cd6a7u); f_112cd210();
  /* 112cd6a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cd6aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd6ae jne 0x112cd6cb */
  if (!C.zf) goto L_112cd6cb;
  /* 112cd6b0 call 0x112cbf00 */
  push32(0x112cd6b5u); f_112cbf00();
  /* 112cd6b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 112cd6bb call 0x112cbf10 */
  push32(0x112cd6c0u); f_112cbf10();
  /* 112cd6c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112cd6c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd6c9 jmp 0x112cd710 */
  goto L_112cd710;
L_112cd6cb:;
  /* 112cd6cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd6ce push eax */
  push32((uint32_t)(EAX));
  /* 112cd6cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd6d3 call 0x112cd400 */
  push32(0x112cd6d8u); f_112cd400();
  /* 112cd6d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd6db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd6de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 112cd6e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 112cd6e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd6e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cd6ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd6ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cd6f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd6f3 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cd6fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 112cd6fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 112cd701 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd704 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd705 call 0x112cd7b0 */
  push32(0x112cd70au); f_112cd7b0();
  /* 112cd70a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd70d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112cd710:;
  /* 112cd710 mov esp, ebp */
  ESP = (EBP);
  /* 112cd712 pop ebp */
  EBP = (pop32());
  /* 112cd713 ret  */
  ESPCHK(0x112cd610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x112cd720 (134 bytes, 44 insns) */
void f_112cd720(void) {
  FTRACE(0x112cd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd720 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd721 mov ebp, esp */
  EBP = (ESP);
  /* 112cd723 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd727 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cd72a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd72d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cd730 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd733 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cd73a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd73c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112cd73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd742 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd746 jne 0x112cd781 */
  if (!C.zf) goto L_112cd781;
  /* 112cd748 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112cd74a call 0x112c7a30 */
  push32(0x112cd74fu); f_112c7a30();
  /* 112cd74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd755 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd759 jne 0x112cd777 */
  if (!C.zf) goto L_112cd777;
  /* 112cd75b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd75e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd761 push edx */
  push32((uint32_t)(EDX));
  /* 112cd762 call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112cd768u);
  /* 112cd768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd76b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112cd76e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd774 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_112cd777:;
  /* 112cd777 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112cd779 call 0x112c7ad0 */
  push32(0x112cd77eu); f_112c7ad0();
  /* 112cd77e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cd781:;
  /* 112cd781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cd787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd78a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cd78d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd790 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cd797 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 112cd79b push eax */
  push32((uint32_t)(EAX));
  /* 112cd79c call dword ptr [0x112f2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2330))), 0x112cd7a2u);
  /* 112cd7a2 mov esp, ebp */
  ESP = (EBP);
  /* 112cd7a4 pop ebp */
  EBP = (pop32());
  /* 112cd7a5 ret  */
  ESPCHK(0x112cd720u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x112cd7b0 (38 bytes, 13 insns) */
void f_112cd7b0(void) {
  FTRACE(0x112cd7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd7b1 mov ebp, esp */
  EBP = (ESP);
  /* 112cd7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd7b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112cd7b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd7bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112cd7bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cd7c2 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112cd7c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 112cd7cd push eax */
  push32((uint32_t)(EAX));
  /* 112cd7ce call dword ptr [0x112f232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f232c))), 0x112cd7d4u);
  /* 112cd7d4 pop ebp */
  EBP = (pop32());
  /* 112cd7d5 ret  */
  ESPCHK(0x112cd7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e0 @ 0x112cd7e0 (218 bytes, 63 insns) */
void f_112cd7e0(void) {
  FTRACE(0x112cd7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd7e1 mov ebp, esp */
  EBP = (ESP);
  /* 112cd7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd7e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cd7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 112cd7ef call 0x112c7a30 */
  push32(0x112cd7f4u); f_112c7a30();
  /* 112cd7f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd7f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 112cd7fe jmp 0x112cd809 */
  goto L_112cd809;
L_112cd800:;
  /* 112cd800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd803 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112cd809:;
  /* 112cd809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd80c cmp ecx, dword ptr [0x112f0c20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd812 jge 0x112cd8a9 */
  if ((C.sf==C.of)) goto L_112cd8a9;
  /* 112cd818 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd81b mov eax, dword ptr [0x112ef8c8] */
  EAX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cd820 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd824 je 0x112cd8a4 */
  if (C.zf) goto L_112cd8a4;
  /* 112cd826 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd829 mov edx, dword ptr [0x112ef8c8] */
  EDX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cd82f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 112cd832 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cd835 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 112cd83b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cd83d je 0x112cd861 */
  if (C.zf) goto L_112cd861;
  /* 112cd83f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd842 mov eax, dword ptr [0x112ef8c8] */
  EAX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cd847 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112cd84a push ecx */
  push32((uint32_t)(ECX));
  /* 112cd84b call 0x112ce5d0 */
  push32(0x112cd850u); f_112ce5d0();
  /* 112cd850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd853 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd856 je 0x112cd861 */
  if (C.zf) goto L_112cd861;
  /* 112cd858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd85b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd85e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112cd861:;
  /* 112cd861 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd865 jl 0x112cd8a4 */
  if ((C.sf!=C.of)) goto L_112cd8a4;
  /* 112cd867 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd86a mov ecx, dword ptr [0x112ef8c8] */
  ECX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cd870 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112cd873 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd876 push edx */
  push32((uint32_t)(EDX));
  /* 112cd877 call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112cd87du);
  /* 112cd87d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cd87f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd882 mov ecx, dword ptr [0x112ef8c8] */
  ECX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cd888 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112cd88b push edx */
  push32((uint32_t)(EDX));
  /* 112cd88c call 0x112c4ac0 */
  push32(0x112cd891u); f_112c4ac0();
  /* 112cd891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd897 mov ecx, dword ptr [0x112ef8c8] */
  ECX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cd89d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_112cd8a4:;
  /* 112cd8a4 jmp 0x112cd800 */
  goto L_112cd800;
L_112cd8a9:;
  /* 112cd8a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cd8ab call 0x112c7ad0 */
  push32(0x112cd8b0u); f_112c7ad0();
  /* 112cd8b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd8b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cd8b6 mov esp, ebp */
  ESP = (EBP);
  /* 112cd8b8 pop ebp */
  EBP = (pop32());
  /* 112cd8b9 ret  */
  ESPCHK(0x112cd7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x112cd8c0 (68 bytes, 26 insns) */
void f_112cd8c0(void) {
  FTRACE(0x112cd8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd8c1 mov ebp, esp */
  EBP = (ESP);
  /* 112cd8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd8c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd8c8 jne 0x112cd8d6 */
  if (!C.zf) goto L_112cd8d6;
  /* 112cd8ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112cd8cc call 0x112cda30 */
  push32(0x112cd8d1u); f_112cda30();
  /* 112cd8d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd8d4 jmp 0x112cd900 */
  goto L_112cd900;
L_112cd8d6:;
  /* 112cd8d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd8d9 push eax */
  push32((uint32_t)(EAX));
  /* 112cd8da call 0x112cce40 */
  push32(0x112cd8dfu); f_112cce40();
  /* 112cd8df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd8e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 112cd8e6 call 0x112cd910 */
  push32(0x112cd8ebu); f_112cd910();
  /* 112cd8eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd8ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cd8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd8f4 push edx */
  push32((uint32_t)(EDX));
  /* 112cd8f5 call 0x112cceb0 */
  push32(0x112cd8fau); f_112cceb0();
  /* 112cd8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd8fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112cd900:;
  /* 112cd900 mov esp, ebp */
  ESP = (EBP);
  /* 112cd902 pop ebp */
  EBP = (pop32());
  /* 112cd903 ret  */
  ESPCHK(0x112cd8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x112cd910 (65 bytes, 26 insns) */
void f_112cd910(void) {
  FTRACE(0x112cd910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd910 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd911 mov ebp, esp */
  EBP = (ESP);
  /* 112cd913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd916 push eax */
  push32((uint32_t)(EAX));
  /* 112cd917 call 0x112cd960 */
  push32(0x112cd91cu); f_112cd960();
  /* 112cd91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd91f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cd921 je 0x112cd928 */
  if (C.zf) goto L_112cd928;
  /* 112cd923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cd926 jmp 0x112cd94f */
  goto L_112cd94f;
L_112cd928:;
  /* 112cd928 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd92b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cd92e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 112cd934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cd936 je 0x112cd94d */
  if (C.zf) goto L_112cd94d;
  /* 112cd938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd93b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112cd93e push ecx */
  push32((uint32_t)(ECX));
  /* 112cd93f call 0x112ce720 */
  push32(0x112cd944u); f_112ce720();
  /* 112cd944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd947 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cd949 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd94b jmp 0x112cd94f */
  goto L_112cd94f;
L_112cd94d:;
  /* 112cd94d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112cd94f:;
  /* 112cd94f pop ebp */
  EBP = (pop32());
  /* 112cd950 ret  */
  ESPCHK(0x112cd910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x112cd960 (183 bytes, 62 insns) */
void f_112cd960(void) {
  FTRACE(0x112cd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cd960 push ebp */
  push32((uint32_t)(EBP));
  /* 112cd961 mov ebp, esp */
  EBP = (ESP);
  /* 112cd963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cd96d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cd970 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cd973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd976 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cd979 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112cd97c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd97f jne 0x112cd9fb */
  if (!C.zf) goto L_112cd9fb;
  /* 112cd981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd984 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cd987 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 112cd98d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cd98f je 0x112cd9fb */
  if (C.zf) goto L_112cd9fb;
  /* 112cd991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd997 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 112cd999 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cd99c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cd99f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd9a3 jle 0x112cd9fb */
  if ((C.zf||C.sf!=C.of)) goto L_112cd9fb;
  /* 112cd9a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cd9a8 push edx */
  push32((uint32_t)(EDX));
  /* 112cd9a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112cd9af push ecx */
  push32((uint32_t)(ECX));
  /* 112cd9b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112cd9b6 push eax */
  push32((uint32_t)(EAX));
  /* 112cd9b7 call 0x112cc8d0 */
  push32(0x112cd9bcu); f_112cc8d0();
  /* 112cd9bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cd9bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cd9c2 jne 0x112cd9e5 */
  if (!C.zf) goto L_112cd9e5;
  /* 112cd9c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cd9ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 112cd9d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cd9d2 je 0x112cd9e3 */
  if (C.zf) goto L_112cd9e3;
  /* 112cd9d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cd9da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 112cd9dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_112cd9e3:;
  /* 112cd9e3 jmp 0x112cd9fb */
  goto L_112cd9fb;
L_112cd9e5:;
  /* 112cd9e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cd9eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 112cd9ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 112cd9f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112cd9fb:;
  /* 112cd9fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cd9fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cda01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112cda04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112cda06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cda09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 112cda10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cda13 mov esp, ebp */
  ESP = (EBP);
  /* 112cda15 pop ebp */
  EBP = (pop32());
  /* 112cda16 ret  */
  ESPCHK(0x112cd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x112cda20 (15 bytes, 7 insns) */
void f_112cda20(void) {
  FTRACE(0x112cda20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cda20 push ebp */
  push32((uint32_t)(EBP));
  /* 112cda21 mov ebp, esp */
  EBP = (ESP);
  /* 112cda23 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cda25 call 0x112cda30 */
  push32(0x112cda2au); f_112cda30();
  /* 112cda2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cda2d pop ebp */
  EBP = (pop32());
  /* 112cda2e ret  */
  ESPCHK(0x112cda20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x112cda30 (319 bytes, 94 insns) */
void f_112cda30(void) {
  FTRACE(0x112cda30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cda30 push ebp */
  push32((uint32_t)(EBP));
  /* 112cda31 mov ebp, esp */
  EBP = (ESP);
  /* 112cda33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cda36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112cda3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112cda44 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cda46 call 0x112c7a30 */
  push32(0x112cda4bu); f_112c7a30();
  /* 112cda4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cda4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112cda55 jmp 0x112cda60 */
  goto L_112cda60;
L_112cda57:;
  /* 112cda57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cda5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cda5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112cda60:;
  /* 112cda60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cda63 cmp ecx, dword ptr [0x112f0c20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f0c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cda69 jge 0x112cdb53 */
  if ((C.sf==C.of)) goto L_112cdb53;
  /* 112cda6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cda72 mov eax, dword ptr [0x112ef8c8] */
  EAX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cda77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cda7b je 0x112cdb4e */
  if (C.zf) goto L_112cdb4e;
  /* 112cda81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cda84 mov edx, dword ptr [0x112ef8c8] */
  EDX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cda8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 112cda8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112cda90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 112cda96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cda98 je 0x112cdb4e */
  if (C.zf) goto L_112cdb4e;
  /* 112cda9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdaa1 mov eax, dword ptr [0x112ef8c8] */
  EAX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cdaa6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112cdaa9 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdaaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdaad push edx */
  push32((uint32_t)(EDX));
  /* 112cdaae call 0x112cce80 */
  push32(0x112cdab3u); f_112cce80();
  /* 112cdab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdab6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdab9 mov ecx, dword ptr [0x112ef8c8] */
  ECX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cdabf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112cdac2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112cdac5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 112cdaca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cdacc je 0x112cdb35 */
  if (C.zf) goto L_112cdb35;
  /* 112cdace cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdad2 jne 0x112cdaf9 */
  if (!C.zf) goto L_112cdaf9;
  /* 112cdad4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdad7 mov edx, dword ptr [0x112ef8c8] */
  EDX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cdadd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 112cdae0 push eax */
  push32((uint32_t)(EAX));
  /* 112cdae1 call 0x112cd910 */
  push32(0x112cdae6u); f_112cd910();
  /* 112cdae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdae9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdaec je 0x112cdaf7 */
  if (C.zf) goto L_112cdaf7;
  /* 112cdaee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cdaf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdaf4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112cdaf7:;
  /* 112cdaf7 jmp 0x112cdb35 */
  goto L_112cdb35;
L_112cdaf9:;
  /* 112cdaf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdafd jne 0x112cdb35 */
  if (!C.zf) goto L_112cdb35;
  /* 112cdaff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdb02 mov eax, dword ptr [0x112ef8c8] */
  EAX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cdb07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112cdb0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cdb0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 112cdb10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cdb12 je 0x112cdb35 */
  if (C.zf) goto L_112cdb35;
  /* 112cdb14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdb17 mov ecx, dword ptr [0x112ef8c8] */
  ECX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cdb1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112cdb20 push edx */
  push32((uint32_t)(EDX));
  /* 112cdb21 call 0x112cd910 */
  push32(0x112cdb26u); f_112cd910();
  /* 112cdb26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdb29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdb2c jne 0x112cdb35 */
  if (!C.zf) goto L_112cdb35;
  /* 112cdb2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_112cdb35:;
  /* 112cdb35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdb38 mov ecx, dword ptr [0x112ef8c8] */
  ECX = (r32((uint32_t)(0x112ef8c8)));
  /* 112cdb3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112cdb41 push edx */
  push32((uint32_t)(EDX));
  /* 112cdb42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdb45 push eax */
  push32((uint32_t)(EAX));
  /* 112cdb46 call 0x112ccef0 */
  push32(0x112cdb4bu); f_112ccef0();
  /* 112cdb4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cdb4e:;
  /* 112cdb4e jmp 0x112cda57 */
  goto L_112cda57;
L_112cdb53:;
  /* 112cdb53 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cdb55 call 0x112c7ad0 */
  push32(0x112cdb5au); f_112c7ad0();
  /* 112cdb5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdb5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdb61 jne 0x112cdb68 */
  if (!C.zf) goto L_112cdb68;
  /* 112cdb63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cdb66 jmp 0x112cdb6b */
  goto L_112cdb6b;
L_112cdb68:;
  /* 112cdb68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112cdb6b:;
  /* 112cdb6b mov esp, ebp */
  ESP = (EBP);
  /* 112cdb6d pop ebp */
  EBP = (pop32());
  /* 112cdb6e ret  */
  ESPCHK(0x112cda30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x112cdb70 (15 bytes, 7 insns) */
void f_112cdb70(void) {
  FTRACE(0x112cdb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cdb70 push ebp */
  push32((uint32_t)(EBP));
  /* 112cdb71 mov ebp, esp */
  EBP = (ESP);
  /* 112cdb73 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cdb75 call 0x112c2fa0 */
  push32(0x112cdb7au); f_112c2fa0();
  /* 112cdb7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdb7d pop ebp */
  EBP = (pop32());
  /* 112cdb7e ret  */
  ESPCHK(0x112cdb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x112cdb80 (1007 bytes, 269 insns) */
void f_112cdb80(void) {
  FTRACE(0x112cdb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cdb80 push ebp */
  push32((uint32_t)(EBP));
  /* 112cdb81 mov ebp, esp */
  EBP = (ESP);
  /* 112cdb83 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cdb89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdb8d jl 0x112cdb95 */
  if ((C.sf!=C.of)) goto L_112cdb95;
  /* 112cdb8f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdb93 jle 0x112cdb9c */
  if ((C.zf||C.sf!=C.of)) goto L_112cdb9c;
L_112cdb95:;
  /* 112cdb95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cdb97 jmp 0x112cdf6b */
  goto L_112cdf6b;
L_112cdb9c:;
  /* 112cdb9c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112cdb9e call 0x112c7a30 */
  push32(0x112cdba3u); f_112c7a30();
  /* 112cdba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdba6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112cdbad mov eax, dword ptr [0x112ef8b4] */
  EAX = (r32((uint32_t)(0x112ef8b4)));
  /* 112cdbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdbb5 mov dword ptr [0x112ef8b4], eax */
  w32((uint32_t)(0x112ef8b4), (EAX));
L_112cdbba:;
  /* 112cdbba cmp dword ptr [0x112ef8c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdbc1 je 0x112cdbcd */
  if (C.zf) goto L_112cdbcd;
  /* 112cdbc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cdbc5 call dword ptr [0x112f22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22e8))), 0x112cdbcbu);
  /* 112cdbcb jmp 0x112cdbba */
  goto L_112cdbba;
L_112cdbcd:;
  /* 112cdbcd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdbd1 je 0x112cdc11 */
  if (C.zf) goto L_112cdc11;
  /* 112cdbd3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdbd7 je 0x112cdbf1 */
  if (C.zf) goto L_112cdbf1;
  /* 112cdbd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cdbdc push ecx */
  push32((uint32_t)(ECX));
  /* 112cdbdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cdbe0 push edx */
  push32((uint32_t)(EDX));
  /* 112cdbe1 call 0x112cdf70 */
  push32(0x112cdbe6u); f_112cdf70();
  /* 112cdbe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdbe9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 112cdbef jmp 0x112cdc03 */
  goto L_112cdc03;
L_112cdbf1:;
  /* 112cdbf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cdbf4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cdbf7 mov ecx, dword ptr [eax + 0x112ee4dc] */
  ECX = (r32((uint32_t)(EAX + 0x112ee4dc)));
  /* 112cdbfd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_112cdc03:;
  /* 112cdc03 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 112cdc09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112cdc0c jmp 0x112cdf4b */
  goto L_112cdf4b;
L_112cdc11:;
  /* 112cdc11 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 112cdc18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112cdc1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdc23 je 0x112cdf43 */
  if (C.zf) goto L_112cdf43;
  /* 112cdc29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cdc2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cdc2f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdc32 jne 0x112cde54 */
  if (!C.zf) goto L_112cde54;
  /* 112cdc38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cdc3b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112cdc3f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdc42 jne 0x112cde54 */
  if (!C.zf) goto L_112cde54;
  /* 112cdc48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cdc4b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 112cdc4f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdc52 jne 0x112cde54 */
  if (!C.zf) goto L_112cde54;
  /* 112cdc58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cdc5b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_112cdc61:;
  /* 112cdc61 push 0x112eb124 */
  push32((uint32_t)(0x112eb124u));
  /* 112cdc66 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112cdc6c push ecx */
  push32((uint32_t)(ECX));
  /* 112cdc6d call 0x112cfdd0 */
  push32(0x112cdc72u); f_112cfdd0();
  /* 112cdc72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdc75 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 112cdc7b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdc82 je 0x112cdcad */
  if (C.zf) goto L_112cdcad;
  /* 112cdc84 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cdc8a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cdc90 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 112cdc96 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdc9d je 0x112cdcad */
  if (C.zf) goto L_112cdcad;
  /* 112cdc9f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cdca5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cdca8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdcab jne 0x112cdcd3 */
  if (!C.zf) goto L_112cdcd3;
L_112cdcad:;
  /* 112cdcad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdcb1 je 0x112cdccc */
  if (C.zf) goto L_112cdccc;
  /* 112cdcb3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112cdcb5 call 0x112c7ad0 */
  push32(0x112cdcbau); f_112c7ad0();
  /* 112cdcba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdcbd mov edx, dword ptr [0x112ef8b4] */
  EDX = (r32((uint32_t)(0x112ef8b4)));
  /* 112cdcc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cdcc6 mov dword ptr [0x112ef8b4], edx */
  w32((uint32_t)(0x112ef8b4), (EDX));
L_112cdccc:;
  /* 112cdccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cdcce jmp 0x112cdf6b */
  goto L_112cdf6b;
L_112cdcd3:;
  /* 112cdcd3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112cdcda jmp 0x112cdce5 */
  goto L_112cdce5;
L_112cdcdc:;
  /* 112cdcdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cdcdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdce2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112cdce5:;
  /* 112cdce5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdce9 jg 0x112cdd33 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cdd33;
  /* 112cdceb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 112cdcf1 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdcf2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112cdcf8 push edx */
  push32((uint32_t)(EDX));
  /* 112cdcf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cdcfc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cdcff mov ecx, dword ptr [eax + 0x112ee4d8] */
  ECX = (r32((uint32_t)(EAX + 0x112ee4d8)));
  /* 112cdd05 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdd06 call 0x112cfd90 */
  push32(0x112cdd0bu); f_112cfd90();
  /* 112cdd0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdd0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cdd10 jne 0x112cdd31 */
  if (!C.zf) goto L_112cdd31;
  /* 112cdd12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cdd15 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cdd18 mov eax, dword ptr [edx + 0x112ee4d8] */
  EAX = (r32((uint32_t)(EDX + 0x112ee4d8)));
  /* 112cdd1e push eax */
  push32((uint32_t)(EAX));
  /* 112cdd1f call 0x112c6e60 */
  push32(0x112cdd24u); f_112c6e60();
  /* 112cdd24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdd27 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdd2d jne 0x112cdd31 */
  if (!C.zf) goto L_112cdd31;
  /* 112cdd2f jmp 0x112cdd33 */
  goto L_112cdd33;
L_112cdd31:;
  /* 112cdd31 jmp 0x112cdcdc */
  goto L_112cdcdc;
L_112cdd33:;
  /* 112cdd33 push 0x112eb120 */
  push32((uint32_t)(0x112eb120u));
  /* 112cdd38 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cdd3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdd41 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 112cdd47 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cdd4d push edx */
  push32((uint32_t)(EDX));
  /* 112cdd4e call 0x112cfd50 */
  push32(0x112cdd53u); f_112cfd50();
  /* 112cdd53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdd56 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 112cdd5c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdd63 jne 0x112cdd99 */
  if (!C.zf) goto L_112cdd99;
  /* 112cdd65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cdd6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cdd6e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdd71 je 0x112cdd99 */
  if (C.zf) goto L_112cdd99;
  /* 112cdd73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdd77 je 0x112cdd92 */
  if (C.zf) goto L_112cdd92;
  /* 112cdd79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112cdd7b call 0x112c7ad0 */
  push32(0x112cdd80u); f_112c7ad0();
  /* 112cdd80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdd83 mov edx, dword ptr [0x112ef8b4] */
  EDX = (r32((uint32_t)(0x112ef8b4)));
  /* 112cdd89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cdd8c mov dword ptr [0x112ef8b4], edx */
  w32((uint32_t)(0x112ef8b4), (EDX));
L_112cdd92:;
  /* 112cdd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cdd94 jmp 0x112cdf6b */
  goto L_112cdf6b;
L_112cdd99:;
  /* 112cdd99 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdd9d jg 0x112cddea */
  if ((!C.zf&&C.sf==C.of)) goto L_112cddea;
  /* 112cdd9f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 112cdda5 push eax */
  push32((uint32_t)(EAX));
  /* 112cdda6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cddac push ecx */
  push32((uint32_t)(ECX));
  /* 112cddad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 112cddb3 push edx */
  push32((uint32_t)(EDX));
  /* 112cddb4 call 0x112c7850 */
  push32(0x112cddb9u); f_112c7850();
  /* 112cddb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cddbc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 112cddc2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 112cddca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 112cddd0 push ecx */
  push32((uint32_t)(ECX));
  /* 112cddd1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cddd4 push edx */
  push32((uint32_t)(EDX));
  /* 112cddd5 call 0x112cdf70 */
  push32(0x112cdddau); f_112cdf70();
  /* 112cddda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cdddf je 0x112cddea */
  if (C.zf) goto L_112cddea;
  /* 112cdde1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdde4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdde7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112cddea:;
  /* 112cddea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112cddf0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cddf6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 112cddfc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112cde02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cde05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cde07 je 0x112cde18 */
  if (C.zf) goto L_112cde18;
  /* 112cde09 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112cde0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cde12 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_112cde18:;
  /* 112cde18 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112cde1e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cde21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cde23 jne 0x112cdc61 */
  if (!C.zf) goto L_112cdc61;
  /* 112cde29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cde2d je 0x112cde3c */
  if (C.zf) goto L_112cde3c;
  /* 112cde2f call 0x112ce110 */
  push32(0x112cde34u); f_112ce110();
  /* 112cde34 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 112cde3a jmp 0x112cde46 */
  goto L_112cde46;
L_112cde3c:;
  /* 112cde3c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_112cde46:;
  /* 112cde46 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 112cde4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cde4f jmp 0x112cdf41 */
  goto L_112cdf41;
L_112cde54:;
  /* 112cde54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cde57 push edx */
  push32((uint32_t)(EDX));
  /* 112cde58 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cde5a push 0 */
  push32((uint32_t)(0x0u));
  /* 112cde5c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 112cde62 push eax */
  push32((uint32_t)(EAX));
  /* 112cde63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cde66 push ecx */
  push32((uint32_t)(ECX));
  /* 112cde67 call 0x112ce210 */
  push32(0x112cde6cu); f_112ce210();
  /* 112cde6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cde6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cde72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cde76 je 0x112cdf41 */
  if (C.zf) goto L_112cdf41;
  /* 112cde7c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112cde83 jmp 0x112cde8e */
  goto L_112cde8e;
L_112cde85:;
  /* 112cde85 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cde88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cde8b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112cde8e:;
  /* 112cde8e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cde92 jg 0x112cdef0 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cdef0;
  /* 112cde94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cde98 je 0x112cdeee */
  if (C.zf) goto L_112cdeee;
  /* 112cde9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cde9d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cdea0 mov ecx, dword ptr [eax + 0x112ee4dc] */
  ECX = (r32((uint32_t)(EAX + 0x112ee4dc)));
  /* 112cdea6 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdea7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 112cdead push edx */
  push32((uint32_t)(EDX));
  /* 112cdeae call 0x112cfcc0 */
  push32(0x112cdeb3u); f_112cfcc0();
  /* 112cdeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdeb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cdeb8 je 0x112cdee5 */
  if (C.zf) goto L_112cdee5;
  /* 112cdeba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 112cdec0 push eax */
  push32((uint32_t)(EAX));
  /* 112cdec1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112cdec4 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdec5 call 0x112cdf70 */
  push32(0x112cdecau); f_112cdf70();
  /* 112cdeca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cdecf je 0x112cdedc */
  if (C.zf) goto L_112cdedc;
  /* 112cded1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cded4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cded7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112cdeda jmp 0x112cdee3 */
  goto L_112cdee3;
L_112cdedc:;
  /* 112cdedc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_112cdee3:;
  /* 112cdee3 jmp 0x112cdeee */
  goto L_112cdeee;
L_112cdee5:;
  /* 112cdee5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cdee8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdeeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112cdeee:;
  /* 112cdeee jmp 0x112cde85 */
  goto L_112cde85;
L_112cdef0:;
  /* 112cdef0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdef4 je 0x112cdf1b */
  if (C.zf) goto L_112cdf1b;
  /* 112cdef6 call 0x112ce110 */
  push32(0x112cdefbu); f_112ce110();
  /* 112cdefb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cdefe push 2 */
  push32((uint32_t)(0x2u));
  /* 112cdf00 mov ecx, dword ptr [0x112ee4dc] */
  ECX = (r32((uint32_t)(0x112ee4dc)));
  /* 112cdf06 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdf07 call 0x112c4ac0 */
  push32(0x112cdf0cu); f_112c4ac0();
  /* 112cdf0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdf0f mov dword ptr [0x112ee4dc], 0 */
  w32((uint32_t)(0x112ee4dc), (0x0u));
  /* 112cdf19 jmp 0x112cdf41 */
  goto L_112cdf41;
L_112cdf1b:;
  /* 112cdf1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdf1f je 0x112cdf2e */
  if (C.zf) goto L_112cdf2e;
  /* 112cdf21 call 0x112ce110 */
  push32(0x112cdf26u); f_112ce110();
  /* 112cdf26 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 112cdf2c jmp 0x112cdf38 */
  goto L_112cdf38;
L_112cdf2e:;
  /* 112cdf2e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_112cdf38:;
  /* 112cdf38 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 112cdf3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112cdf41:;
  /* 112cdf41 jmp 0x112cdf4b */
  goto L_112cdf4b;
L_112cdf43:;
  /* 112cdf43 call 0x112ce110 */
  push32(0x112cdf48u); f_112ce110();
  /* 112cdf48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112cdf4b:;
  /* 112cdf4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdf4f je 0x112cdf68 */
  if (C.zf) goto L_112cdf68;
  /* 112cdf51 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112cdf53 call 0x112c7ad0 */
  push32(0x112cdf58u); f_112c7ad0();
  /* 112cdf58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdf5b mov eax, dword ptr [0x112ef8b4] */
  EAX = (r32((uint32_t)(0x112ef8b4)));
  /* 112cdf60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cdf63 mov dword ptr [0x112ef8b4], eax */
  w32((uint32_t)(0x112ef8b4), (EAX));
L_112cdf68:;
  /* 112cdf68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112cdf6b:;
  /* 112cdf6b mov esp, ebp */
  ESP = (EBP);
  /* 112cdf6d pop ebp */
  EBP = (pop32());
  /* 112cdf6e ret  */
  ESPCHK(0x112cdb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x112cdf70 (403 bytes, 117 insns) */
void f_112cdf70(void) {
  FTRACE(0x112cdf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cdf70 push ebp */
  push32((uint32_t)(EBP));
  /* 112cdf71 mov ebp, esp */
  EBP = (ESP);
  /* 112cdf73 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cdf79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cdf7c push eax */
  push32((uint32_t)(EAX));
  /* 112cdf7d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 112cdf83 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdf84 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 112cdf8a push edx */
  push32((uint32_t)(EDX));
  /* 112cdf8b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 112cdf91 push eax */
  push32((uint32_t)(EAX));
  /* 112cdf92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cdf95 push ecx */
  push32((uint32_t)(ECX));
  /* 112cdf96 call 0x112ce210 */
  push32(0x112cdf9bu); f_112ce210();
  /* 112cdf9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdf9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cdfa0 jne 0x112cdfa9 */
  if (!C.zf) goto L_112cdfa9;
  /* 112cdfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cdfa4 jmp 0x112ce0ff */
  goto L_112ce0ff;
L_112cdfa9:;
  /* 112cdfa9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 112cdfae push 0x112eb128 */
  push32((uint32_t)(0x112eb128u));
  /* 112cdfb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cdfb5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 112cdfbb push edx */
  push32((uint32_t)(EDX));
  /* 112cdfbc call 0x112c6e60 */
  push32(0x112cdfc1u); f_112c6e60();
  /* 112cdfc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdfc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdfc7 push eax */
  push32((uint32_t)(EAX));
  /* 112cdfc8 call 0x112c4030 */
  push32(0x112cdfcdu); f_112c4030();
  /* 112cdfcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cdfd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cdfd3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cdfd7 jne 0x112cdfe0 */
  if (!C.zf) goto L_112cdfe0;
  /* 112cdfd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cdfdb jmp 0x112ce0ff */
  goto L_112ce0ff;
L_112cdfe0:;
  /* 112cdfe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cdfe3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112cdfe6 mov ecx, dword ptr [eax + 0x112ee4dc] */
  ECX = (r32((uint32_t)(EAX + 0x112ee4dc)));
  /* 112cdfec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cdfef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cdff2 mov eax, dword ptr [edx*4 + 0x112ef730] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112ef730)));
  /* 112cdff9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cdffc push 6 */
  push32((uint32_t)(0x6u));
  /* 112cdffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce001 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce004 add ecx, 0x112ef780 */
  { uint32_t _a=(ECX),_b=(0x112ef780u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce00a push ecx */
  push32((uint32_t)(ECX));
  /* 112ce00b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 112ce00e push edx */
  push32((uint32_t)(EDX));
  /* 112ce00f call 0x112ca910 */
  push32(0x112ce014u); f_112ca910();
  /* 112ce014 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce017 mov eax, dword ptr [0x112ef748] */
  EAX = (r32((uint32_t)(0x112ef748)));
  /* 112ce01c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112ce01f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 112ce025 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce026 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce029 push edx */
  push32((uint32_t)(EDX));
  /* 112ce02a call 0x112c6fe0 */
  push32(0x112ce02fu); f_112c6fe0();
  /* 112ce02f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce035 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce038 mov dword ptr [ecx + 0x112ee4dc], eax */
  w32((uint32_t)(ECX + 0x112ee4dc), (EAX));
  /* 112ce03e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 112ce044 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112ce04a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce04d mov dword ptr [eax*4 + 0x112ef730], edx */
  w32((uint32_t)(EAX*4 + 0x112ef730), (EDX));
  /* 112ce054 push 6 */
  push32((uint32_t)(0x6u));
  /* 112ce056 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 112ce05c push ecx */
  push32((uint32_t)(ECX));
  /* 112ce05d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce060 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce063 add edx, 0x112ef780 */
  { uint32_t _a=(EDX),_b=(0x112ef780u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce069 push edx */
  push32((uint32_t)(EDX));
  /* 112ce06a call 0x112ca910 */
  push32(0x112ce06fu); f_112ca910();
  /* 112ce06f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce072 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce076 jne 0x112ce083 */
  if (!C.zf) goto L_112ce083;
  /* 112ce078 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112ce07e mov dword ptr [0x112ef748], eax */
  w32((uint32_t)(0x112ef748), (EAX));
L_112ce083:;
  /* 112ce083 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce087 jne 0x112ce095 */
  if (!C.zf) goto L_112ce095;
  /* 112ce089 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112ce08f mov dword ptr [0x112ef74c], ecx */
  w32((uint32_t)(0x112ef74c), (ECX));
L_112ce095:;
  /* 112ce095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce098 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce09b call dword ptr [edx + 0x112ee4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x112ee4e0))), 0x112ce0a1u);
  /* 112ce0a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce0a3 je 0x112ce0dc */
  if (C.zf) goto L_112ce0dc;
  /* 112ce0a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce0a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce0ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce0ae mov dword ptr [eax + 0x112ee4dc], ecx */
  w32((uint32_t)(EAX + 0x112ee4dc), (ECX));
  /* 112ce0b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce0b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce0b9 push edx */
  push32((uint32_t)(EDX));
  /* 112ce0ba call 0x112c4ac0 */
  push32(0x112ce0bfu); f_112c4ac0();
  /* 112ce0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce0c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce0c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce0c8 mov dword ptr [eax*4 + 0x112ef730], ecx */
  w32((uint32_t)(EAX*4 + 0x112ef730), (ECX));
  /* 112ce0cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112ce0d2 mov dword ptr [0x112ef748], edx */
  w32((uint32_t)(0x112ef748), (EDX));
  /* 112ce0d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce0da jmp 0x112ce0ff */
  goto L_112ce0ff;
L_112ce0dc:;
  /* 112ce0dc cmp dword ptr [ebp - 0xc], 0x112ee3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x112ee3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce0e3 je 0x112ce0f3 */
  if (C.zf) goto L_112ce0f3;
  /* 112ce0e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce0e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce0ea push eax */
  push32((uint32_t)(EAX));
  /* 112ce0eb call 0x112c4ac0 */
  push32(0x112ce0f0u); f_112c4ac0();
  /* 112ce0f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce0f3:;
  /* 112ce0f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce0f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce0f9 mov eax, dword ptr [ecx + 0x112ee4dc] */
  EAX = (r32((uint32_t)(ECX + 0x112ee4dc)));
L_112ce0ff:;
  /* 112ce0ff mov esp, ebp */
  ESP = (EBP);
  /* 112ce101 pop ebp */
  EBP = (pop32());
  /* 112ce102 ret  */
  ESPCHK(0x112cdf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e110 @ 0x112ce110 (256 bytes, 72 insns) */
void f_112ce110(void) {
  FTRACE(0x112ce110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce110 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce111 mov ebp, esp */
  EBP = (ESP);
  /* 112ce113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ce116 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112ce11d cmp dword ptr [0x112ee4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ee4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce124 jne 0x112ce144 */
  if (!C.zf) goto L_112ce144;
  /* 112ce126 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 112ce12b push 0x112eb128 */
  push32((uint32_t)(0x112eb128u));
  /* 112ce130 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce132 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 112ce137 call 0x112c4030 */
  push32(0x112ce13cu); f_112c4030();
  /* 112ce13c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce13f mov dword ptr [0x112ee4dc], eax */
  w32((uint32_t)(0x112ee4dc), (EAX));
L_112ce144:;
  /* 112ce144 mov eax, dword ptr [0x112ee4dc] */
  EAX = (r32((uint32_t)(0x112ee4dc)));
  /* 112ce149 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112ce14c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112ce153 jmp 0x112ce15e */
  goto L_112ce15e;
L_112ce155:;
  /* 112ce155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce158 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce15b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112ce15e:;
  /* 112ce15e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce161 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce164 mov eax, dword ptr [edx + 0x112ee4dc] */
  EAX = (r32((uint32_t)(EDX + 0x112ee4dc)));
  /* 112ce16a push eax */
  push32((uint32_t)(EAX));
  /* 112ce16b push 0x112eb134 */
  push32((uint32_t)(0x112eb134u));
  /* 112ce170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce173 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce176 mov edx, dword ptr [ecx + 0x112ee4d8] */
  EDX = (r32((uint32_t)(ECX + 0x112ee4d8)));
  /* 112ce17c push edx */
  push32((uint32_t)(EDX));
  /* 112ce17d push 3 */
  push32((uint32_t)(0x3u));
  /* 112ce17f mov eax, dword ptr [0x112ee4dc] */
  EAX = (r32((uint32_t)(0x112ee4dc)));
  /* 112ce184 push eax */
  push32((uint32_t)(EAX));
  /* 112ce185 call 0x112ce3b0 */
  push32(0x112ce18au); f_112ce3b0();
  /* 112ce18a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce18d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce191 jge 0x112ce1d9 */
  if ((C.sf==C.of)) goto L_112ce1d9;
  /* 112ce193 push 0x112eb120 */
  push32((uint32_t)(0x112eb120u));
  /* 112ce198 mov ecx, dword ptr [0x112ee4dc] */
  ECX = (r32((uint32_t)(0x112ee4dc)));
  /* 112ce19e push ecx */
  push32((uint32_t)(ECX));
  /* 112ce19f call 0x112c6ff0 */
  push32(0x112ce1a4u); f_112c6ff0();
  /* 112ce1a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce1a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce1aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce1ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce1b0 mov eax, dword ptr [edx + 0x112ee4dc] */
  EAX = (r32((uint32_t)(EDX + 0x112ee4dc)));
  /* 112ce1b6 push eax */
  push32((uint32_t)(EAX));
  /* 112ce1b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce1ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce1bd mov edx, dword ptr [ecx + 0x112ee4dc] */
  EDX = (r32((uint32_t)(ECX + 0x112ee4dc)));
  /* 112ce1c3 push edx */
  push32((uint32_t)(EDX));
  /* 112ce1c4 call 0x112cfcc0 */
  push32(0x112ce1c9u); f_112cfcc0();
  /* 112ce1c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce1ce je 0x112ce1d7 */
  if (C.zf) goto L_112ce1d7;
  /* 112ce1d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112ce1d7:;
  /* 112ce1d7 jmp 0x112ce207 */
  goto L_112ce207;
L_112ce1d9:;
  /* 112ce1d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce1dd jne 0x112ce1e6 */
  if (!C.zf) goto L_112ce1e6;
  /* 112ce1df mov eax, dword ptr [0x112ee4dc] */
  EAX = (r32((uint32_t)(0x112ee4dc)));
  /* 112ce1e4 jmp 0x112ce20c */
  goto L_112ce20c;
L_112ce1e6:;
  /* 112ce1e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce1e8 mov eax, dword ptr [0x112ee4dc] */
  EAX = (r32((uint32_t)(0x112ee4dc)));
  /* 112ce1ed push eax */
  push32((uint32_t)(EAX));
  /* 112ce1ee call 0x112c4ac0 */
  push32(0x112ce1f3u); f_112c4ac0();
  /* 112ce1f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce1f6 mov dword ptr [0x112ee4dc], 0 */
  w32((uint32_t)(0x112ee4dc), (0x0u));
  /* 112ce200 mov eax, dword ptr [0x112ee4f4] */
  EAX = (r32((uint32_t)(0x112ee4f4)));
  /* 112ce205 jmp 0x112ce20c */
  goto L_112ce20c;
L_112ce207:;
  /* 112ce207 jmp 0x112ce155 */
  goto L_112ce155;
L_112ce20c:;
  /* 112ce20c mov esp, ebp */
  ESP = (EBP);
  /* 112ce20e pop ebp */
  EBP = (pop32());
  /* 112ce20f ret  */
  ESPCHK(0x112ce110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e210 @ 0x112ce210 (388 bytes, 115 insns) */
void f_112ce210(void) {
  FTRACE(0x112ce210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce210 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce211 mov ebp, esp */
  EBP = (ESP);
  /* 112ce213 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ce219 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce21d jne 0x112ce226 */
  if (!C.zf) goto L_112ce226;
  /* 112ce21f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce221 jmp 0x112ce390 */
  goto L_112ce390;
L_112ce226:;
  /* 112ce226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce229 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112ce22c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce22f jne 0x112ce280 */
  if (!C.zf) goto L_112ce280;
  /* 112ce231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce234 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112ce238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce23a jne 0x112ce280 */
  if (!C.zf) goto L_112ce280;
  /* 112ce23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce23f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 112ce242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce245 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 112ce249 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce24d je 0x112ce269 */
  if (C.zf) goto L_112ce269;
  /* 112ce24f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112ce252 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 112ce257 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112ce25a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 112ce260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112ce263 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_112ce269:;
  /* 112ce269 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce26d je 0x112ce278 */
  if (C.zf) goto L_112ce278;
  /* 112ce26f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112ce272 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_112ce278:;
  /* 112ce278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce27b jmp 0x112ce390 */
  goto L_112ce390;
L_112ce280:;
  /* 112ce280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce283 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce284 push 0x112ee450 */
  push32((uint32_t)(0x112ee450u));
  /* 112ce289 call 0x112cfcc0 */
  push32(0x112ce28eu); f_112cfcc0();
  /* 112ce28e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce293 je 0x112ce348 */
  if (C.zf) goto L_112ce348;
  /* 112ce299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce29c push edx */
  push32((uint32_t)(EDX));
  /* 112ce29d push 0x112ee3cc */
  push32((uint32_t)(0x112ee3ccu));
  /* 112ce2a2 call 0x112cfcc0 */
  push32(0x112ce2a7u); f_112cfcc0();
  /* 112ce2a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce2aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce2ac je 0x112ce348 */
  if (C.zf) goto L_112ce348;
  /* 112ce2b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce2b5 push eax */
  push32((uint32_t)(EAX));
  /* 112ce2b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 112ce2bc push ecx */
  push32((uint32_t)(ECX));
  /* 112ce2bd call 0x112ce400 */
  push32(0x112ce2c2u); f_112ce400();
  /* 112ce2c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce2c7 je 0x112ce2d0 */
  if (C.zf) goto L_112ce2d0;
  /* 112ce2c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce2cb jmp 0x112ce390 */
  goto L_112ce390;
L_112ce2d0:;
  /* 112ce2d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 112ce2d6 push edx */
  push32((uint32_t)(EDX));
  /* 112ce2d7 push 0x112ef758 */
  push32((uint32_t)(0x112ef758u));
  /* 112ce2dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 112ce2e2 push eax */
  push32((uint32_t)(EAX));
  /* 112ce2e3 call 0x112cfe10 */
  push32(0x112ce2e8u); f_112cfe10();
  /* 112ce2e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce2eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce2ed jne 0x112ce2f6 */
  if (!C.zf) goto L_112ce2f6;
  /* 112ce2ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce2f1 jmp 0x112ce390 */
  goto L_112ce390;
L_112ce2f6:;
  /* 112ce2f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce2f8 mov cx, word ptr [0x112ef75c] */
  CX = (r16((uint32_t)(0x112ef75c)));
  /* 112ce2ff mov dword ptr [0x112ef760], ecx */
  w32((uint32_t)(0x112ef760), (ECX));
  /* 112ce305 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 112ce30b push edx */
  push32((uint32_t)(EDX));
  /* 112ce30c push 0x112ee450 */
  push32((uint32_t)(0x112ee450u));
  /* 112ce311 call 0x112ce560 */
  push32(0x112ce316u); f_112ce560();
  /* 112ce316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce31c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112ce31f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ce321 je 0x112ce336 */
  if (C.zf) goto L_112ce336;
  /* 112ce323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce326 push edx */
  push32((uint32_t)(EDX));
  /* 112ce327 push 0x112ee3cc */
  push32((uint32_t)(0x112ee3ccu));
  /* 112ce32c call 0x112c6fe0 */
  push32(0x112ce331u); f_112c6fe0();
  /* 112ce331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce334 jmp 0x112ce348 */
  goto L_112ce348;
L_112ce336:;
  /* 112ce336 push 0x112ee450 */
  push32((uint32_t)(0x112ee450u));
  /* 112ce33b push 0x112ee3cc */
  push32((uint32_t)(0x112ee3ccu));
  /* 112ce340 call 0x112c6fe0 */
  push32(0x112ce345u); f_112c6fe0();
  /* 112ce345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce348:;
  /* 112ce348 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce34c je 0x112ce361 */
  if (C.zf) goto L_112ce361;
  /* 112ce34e push 6 */
  push32((uint32_t)(0x6u));
  /* 112ce350 push 0x112ef758 */
  push32((uint32_t)(0x112ef758u));
  /* 112ce355 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112ce358 push eax */
  push32((uint32_t)(EAX));
  /* 112ce359 call 0x112ca910 */
  push32(0x112ce35eu); f_112ca910();
  /* 112ce35e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce361:;
  /* 112ce361 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce365 je 0x112ce37a */
  if (C.zf) goto L_112ce37a;
  /* 112ce367 push 4 */
  push32((uint32_t)(0x4u));
  /* 112ce369 push 0x112ef760 */
  push32((uint32_t)(0x112ef760u));
  /* 112ce36e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112ce371 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce372 call 0x112ca910 */
  push32(0x112ce377u); f_112ca910();
  /* 112ce377 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce37a:;
  /* 112ce37a push 0x112ee450 */
  push32((uint32_t)(0x112ee450u));
  /* 112ce37f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce382 push edx */
  push32((uint32_t)(EDX));
  /* 112ce383 call 0x112c6fe0 */
  push32(0x112ce388u); f_112c6fe0();
  /* 112ce388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce38b mov eax, 0x112ee450 */
  EAX = (0x112ee450u);
L_112ce390:;
  /* 112ce390 mov esp, ebp */
  ESP = (EBP);
  /* 112ce392 pop ebp */
  EBP = (pop32());
  /* 112ce393 ret  */
  ESPCHK(0x112ce210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x112ce3a0 (7 bytes, 5 insns) */
void f_112ce3a0(void) {
  FTRACE(0x112ce3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce3a1 mov ebp, esp */
  EBP = (ESP);
  /* 112ce3a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce3a5 pop ebp */
  EBP = (pop32());
  /* 112ce3a6 ret  */
  ESPCHK(0x112ce3a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x112ce3b0 (79 bytes, 28 insns) */
void f_112ce3b0(void) {
  FTRACE(0x112ce3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce3b1 mov ebp, esp */
  EBP = (ESP);
  /* 112ce3b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ce3b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 112ce3b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce3bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112ce3c3 jmp 0x112ce3ce */
  goto L_112ce3ce;
L_112ce3c5:;
  /* 112ce3c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce3c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce3cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112ce3ce:;
  /* 112ce3ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce3d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce3d4 jge 0x112ce3f4 */
  if ((C.sf==C.of)) goto L_112ce3f4;
  /* 112ce3d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce3d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce3dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce3df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce3e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 112ce3e5 push edx */
  push32((uint32_t)(EDX));
  /* 112ce3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce3e9 push eax */
  push32((uint32_t)(EAX));
  /* 112ce3ea call 0x112c6ff0 */
  push32(0x112ce3efu); f_112c6ff0();
  /* 112ce3ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce3f2 jmp 0x112ce3c5 */
  goto L_112ce3c5;
L_112ce3f4:;
  /* 112ce3f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ce3fb mov esp, ebp */
  ESP = (EBP);
  /* 112ce3fd pop ebp */
  EBP = (pop32());
  /* 112ce3fe ret  */
  ESPCHK(0x112ce3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e400 @ 0x112ce400 (349 bytes, 122 insns) */
void f_112ce400(void) {
  FTRACE(0x112ce400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce400 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce401 mov ebp, esp */
  EBP = (ESP);
  /* 112ce403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ce406 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 112ce40b push 0 */
  push32((uint32_t)(0x0u));
  /* 112ce40d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce410 push eax */
  push32((uint32_t)(EAX));
  /* 112ce411 call 0x112c7da0 */
  push32(0x112ce416u); f_112c7da0();
  /* 112ce416 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce419 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce41c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112ce41f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112ce421 jne 0x112ce42a */
  if (!C.zf) goto L_112ce42a;
  /* 112ce423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce425 jmp 0x112ce559 */
  goto L_112ce559;
L_112ce42a:;
  /* 112ce42a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce42d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112ce430 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce433 jne 0x112ce460 */
  if (!C.zf) goto L_112ce460;
  /* 112ce435 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce438 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112ce43c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce43e je 0x112ce460 */
  if (C.zf) goto L_112ce460;
  /* 112ce440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce443 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce446 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce44a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce450 push edx */
  push32((uint32_t)(EDX));
  /* 112ce451 call 0x112c6fe0 */
  push32(0x112ce456u); f_112c6fe0();
  /* 112ce456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce45b jmp 0x112ce559 */
  goto L_112ce559;
L_112ce460:;
  /* 112ce460 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112ce467 jmp 0x112ce472 */
  goto L_112ce472;
L_112ce469:;
  /* 112ce469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce46c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce46f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112ce472:;
  /* 112ce472 push 0x112eb138 */
  push32((uint32_t)(0x112eb138u));
  /* 112ce477 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce47a push ecx */
  push32((uint32_t)(ECX));
  /* 112ce47b call 0x112cfd50 */
  push32(0x112ce480u); f_112cfd50();
  /* 112ce480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce483 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112ce486 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce48a jne 0x112ce494 */
  if (!C.zf) goto L_112ce494;
  /* 112ce48c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ce48f jmp 0x112ce559 */
  goto L_112ce559;
L_112ce494:;
  /* 112ce494 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce497 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce49a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112ce49c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 112ce49f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4a3 jne 0x112ce4ca */
  if (!C.zf) goto L_112ce4ca;
  /* 112ce4a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4a9 jge 0x112ce4ca */
  if ((C.sf==C.of)) goto L_112ce4ca;
  /* 112ce4ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112ce4af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4b2 je 0x112ce4ca */
  if (C.zf) goto L_112ce4ca;
  /* 112ce4b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce4b7 push edx */
  push32((uint32_t)(EDX));
  /* 112ce4b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce4bb push eax */
  push32((uint32_t)(EAX));
  /* 112ce4bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce4bf push ecx */
  push32((uint32_t)(ECX));
  /* 112ce4c0 call 0x112c7850 */
  push32(0x112ce4c5u); f_112c7850();
  /* 112ce4c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce4c8 jmp 0x112ce530 */
  goto L_112ce530;
L_112ce4ca:;
  /* 112ce4ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4ce jne 0x112ce4f8 */
  if (!C.zf) goto L_112ce4f8;
  /* 112ce4d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4d4 jge 0x112ce4f8 */
  if ((C.sf==C.of)) goto L_112ce4f8;
  /* 112ce4d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112ce4da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4dd je 0x112ce4f8 */
  if (C.zf) goto L_112ce4f8;
  /* 112ce4df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce4e2 push eax */
  push32((uint32_t)(EAX));
  /* 112ce4e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce4e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce4ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce4ed push edx */
  push32((uint32_t)(EDX));
  /* 112ce4ee call 0x112c7850 */
  push32(0x112ce4f3u); f_112c7850();
  /* 112ce4f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce4f6 jmp 0x112ce530 */
  goto L_112ce530;
L_112ce4f8:;
  /* 112ce4f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce4fc jne 0x112ce52b */
  if (!C.zf) goto L_112ce52b;
  /* 112ce4fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112ce502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce504 je 0x112ce50f */
  if (C.zf) goto L_112ce50f;
  /* 112ce506 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112ce50a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce50d jne 0x112ce52b */
  if (!C.zf) goto L_112ce52b;
L_112ce50f:;
  /* 112ce50f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce512 push edx */
  push32((uint32_t)(EDX));
  /* 112ce513 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce516 push eax */
  push32((uint32_t)(EAX));
  /* 112ce517 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce51a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce520 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce521 call 0x112c7850 */
  push32(0x112ce526u); f_112c7850();
  /* 112ce526 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce529 jmp 0x112ce530 */
  goto L_112ce530;
L_112ce52b:;
  /* 112ce52b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ce52e jmp 0x112ce559 */
  goto L_112ce559;
L_112ce530:;
  /* 112ce530 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112ce534 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce537 jne 0x112ce53b */
  if (!C.zf) goto L_112ce53b;
  /* 112ce539 jmp 0x112ce557 */
  goto L_112ce557;
L_112ce53b:;
  /* 112ce53b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112ce53f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce541 jne 0x112ce545 */
  if (!C.zf) goto L_112ce545;
  /* 112ce543 jmp 0x112ce557 */
  goto L_112ce557;
L_112ce545:;
  /* 112ce545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce54b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 112ce54f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112ce552 jmp 0x112ce469 */
  goto L_112ce469;
L_112ce557:;
  /* 112ce557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112ce559:;
  /* 112ce559 mov esp, ebp */
  ESP = (EBP);
  /* 112ce55b pop ebp */
  EBP = (pop32());
  /* 112ce55c ret  */
  ESPCHK(0x112ce400u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x112ce560 (101 bytes, 36 insns) */
void f_112ce560(void) {
  FTRACE(0x112ce560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce560 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce561 mov ebp, esp */
  EBP = (ESP);
  /* 112ce563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce566 push eax */
  push32((uint32_t)(EAX));
  /* 112ce567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce56a push ecx */
  push32((uint32_t)(ECX));
  /* 112ce56b call 0x112c6fe0 */
  push32(0x112ce570u); f_112c6fe0();
  /* 112ce570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce576 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 112ce57a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce57c je 0x112ce598 */
  if (C.zf) goto L_112ce598;
  /* 112ce57e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce581 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce584 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce585 push 0x112eb140 */
  push32((uint32_t)(0x112eb140u));
  /* 112ce58a push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce58c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce58f push edx */
  push32((uint32_t)(EDX));
  /* 112ce590 call 0x112ce3b0 */
  push32(0x112ce595u); f_112ce3b0();
  /* 112ce595 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce598:;
  /* 112ce598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce59b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 112ce5a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ce5a4 je 0x112ce5c3 */
  if (C.zf) goto L_112ce5c3;
  /* 112ce5a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112ce5a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce5af push edx */
  push32((uint32_t)(EDX));
  /* 112ce5b0 push 0x112eb13c */
  push32((uint32_t)(0x112eb13cu));
  /* 112ce5b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce5b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce5ba push eax */
  push32((uint32_t)(EAX));
  /* 112ce5bb call 0x112ce3b0 */
  push32(0x112ce5c0u); f_112ce3b0();
  /* 112ce5c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce5c3:;
  /* 112ce5c3 pop ebp */
  EBP = (pop32());
  /* 112ce5c4 ret  */
  ESPCHK(0x112ce560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5d0 @ 0x112ce5d0 (130 bytes, 50 insns) */
void f_112ce5d0(void) {
  FTRACE(0x112ce5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce5d1 mov ebp, esp */
  EBP = (ESP);
  /* 112ce5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce5d4 push ebx */
  push32((uint32_t)(EBX));
  /* 112ce5d5 push esi */
  push32((uint32_t)(ESI));
  /* 112ce5d6 push edi */
  push32((uint32_t)(EDI));
  /* 112ce5d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112ce5de:;
  /* 112ce5de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce5e2 jne 0x112ce602 */
  if (!C.zf) goto L_112ce602;
  /* 112ce5e4 push 0x112eb150 */
  push32((uint32_t)(0x112eb150u));
  /* 112ce5e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ce5eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 112ce5ed push 0x112eb144 */
  push32((uint32_t)(0x112eb144u));
  /* 112ce5f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce5f4 call 0x112c30f0 */
  push32(0x112ce5f9u); f_112c30f0();
  /* 112ce5f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce5fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce5ff jne 0x112ce602 */
  if (!C.zf) goto L_112ce602;
  /* 112ce601 int3  */
  x86_unimpl("int3 @ 0x112ce601");
L_112ce602:;
  /* 112ce602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce606 jne 0x112ce5de */
  if (!C.zf) goto L_112ce5de;
  /* 112ce608 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce60b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112ce60e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 112ce611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112ce613 je 0x112ce621 */
  if (C.zf) goto L_112ce621;
  /* 112ce615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce618 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 112ce61f jmp 0x112ce648 */
  goto L_112ce648;
L_112ce621:;
  /* 112ce621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce624 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce625 call 0x112cce40 */
  push32(0x112ce62au); f_112cce40();
  /* 112ce62a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce62d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce630 push edx */
  push32((uint32_t)(EDX));
  /* 112ce631 call 0x112ce660 */
  push32(0x112ce636u); f_112ce660();
  /* 112ce636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce63c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce63f push eax */
  push32((uint32_t)(EAX));
  /* 112ce640 call 0x112cceb0 */
  push32(0x112ce645u); f_112cceb0();
  /* 112ce645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112ce648:;
  /* 112ce648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce64b pop edi */
  EDI = (pop32());
  /* 112ce64c pop esi */
  ESI = (pop32());
  /* 112ce64d pop ebx */
  EBX = (pop32());
  /* 112ce64e mov esp, ebp */
  ESP = (EBP);
  /* 112ce650 pop ebp */
  EBP = (pop32());
  /* 112ce651 ret  */
  ESPCHK(0x112ce5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x112ce660 (190 bytes, 67 insns) */
void f_112ce660(void) {
  FTRACE(0x112ce660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce660 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce661 mov ebp, esp */
  EBP = (ESP);
  /* 112ce663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ce666 push ebx */
  push32((uint32_t)(EBX));
  /* 112ce667 push esi */
  push32((uint32_t)(ESI));
  /* 112ce668 push edi */
  push32((uint32_t)(EDI));
  /* 112ce669 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112ce670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce673 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112ce676:;
  /* 112ce676 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce67a jne 0x112ce69a */
  if (!C.zf) goto L_112ce69a;
  /* 112ce67c push 0x112eaff4 */
  push32((uint32_t)(0x112eaff4u));
  /* 112ce681 push 0 */
  push32((uint32_t)(0x0u));
  /* 112ce683 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 112ce685 push 0x112eb144 */
  push32((uint32_t)(0x112eb144u));
  /* 112ce68a push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce68c call 0x112c30f0 */
  push32(0x112ce691u); f_112c30f0();
  /* 112ce691 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce694 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce697 jne 0x112ce69a */
  if (!C.zf) goto L_112ce69a;
  /* 112ce699 int3  */
  x86_unimpl("int3 @ 0x112ce699");
L_112ce69a:;
  /* 112ce69a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce69c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ce69e jne 0x112ce676 */
  if (!C.zf) goto L_112ce676;
  /* 112ce6a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce6a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112ce6a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 112ce6ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce6ad je 0x112ce70a */
  if (C.zf) goto L_112ce70a;
  /* 112ce6af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce6b2 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce6b3 call 0x112cd960 */
  push32(0x112ce6b8u); f_112cd960();
  /* 112ce6b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce6bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce6be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce6c1 push edx */
  push32((uint32_t)(EDX));
  /* 112ce6c2 call 0x112d0ce0 */
  push32(0x112ce6c7u); f_112d0ce0();
  /* 112ce6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce6ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce6cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112ce6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce6d1 call 0x112d0bb0 */
  push32(0x112ce6d6u); f_112d0bb0();
  /* 112ce6d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce6d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce6db jge 0x112ce6e6 */
  if ((C.sf==C.of)) goto L_112ce6e6;
  /* 112ce6dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112ce6e4 jmp 0x112ce70a */
  goto L_112ce70a;
L_112ce6e6:;
  /* 112ce6e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce6e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce6ed je 0x112ce70a */
  if (C.zf) goto L_112ce70a;
  /* 112ce6ef push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce6f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce6f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112ce6f7 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce6f8 call 0x112c4ac0 */
  push32(0x112ce6fdu); f_112c4ac0();
  /* 112ce6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce700 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce703 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_112ce70a:;
  /* 112ce70a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112ce70d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 112ce714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce717 pop edi */
  EDI = (pop32());
  /* 112ce718 pop esi */
  ESI = (pop32());
  /* 112ce719 pop ebx */
  EBX = (pop32());
  /* 112ce71a mov esp, ebp */
  ESP = (EBP);
  /* 112ce71c pop ebp */
  EBP = (pop32());
  /* 112ce71d ret  */
  ESPCHK(0x112ce660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e720 @ 0x112ce720 (210 bytes, 63 insns) */
void f_112ce720(void) {
  FTRACE(0x112ce720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce720 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce721 mov ebp, esp */
  EBP = (ESP);
  /* 112ce723 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce727 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce72d jae 0x112ce751 */
  if (!C.cf) goto L_112ce751;
  /* 112ce72f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce732 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112ce735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce738 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112ce73b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce73e mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112ce745 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112ce74a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112ce74d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112ce74f jne 0x112ce764 */
  if (!C.zf) goto L_112ce764;
L_112ce751:;
  /* 112ce751 call 0x112cbf00 */
  push32(0x112ce756u); f_112cbf00();
  /* 112ce756 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112ce75c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ce75f jmp 0x112ce7ee */
  goto L_112ce7ee;
L_112ce764:;
  /* 112ce764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce767 push edx */
  push32((uint32_t)(EDX));
  /* 112ce768 call 0x112cd720 */
  push32(0x112ce76du); f_112cd720();
  /* 112ce76d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce773 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112ce776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce779 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112ce77c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112ce77f mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112ce786 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 112ce78b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112ce78e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce790 je 0x112ce7cd */
  if (C.zf) goto L_112ce7cd;
  /* 112ce792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce795 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce796 call 0x112cd5a0 */
  push32(0x112ce79bu); f_112cd5a0();
  /* 112ce79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce79e push eax */
  push32((uint32_t)(EAX));
  /* 112ce79f call dword ptr [0x112f22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22e4))), 0x112ce7a5u);
  /* 112ce7a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce7a7 jne 0x112ce7b4 */
  if (!C.zf) goto L_112ce7b4;
  /* 112ce7a9 call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112ce7afu);
  /* 112ce7af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce7b2 jmp 0x112ce7bb */
  goto L_112ce7bb;
L_112ce7b4:;
  /* 112ce7b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112ce7bb:;
  /* 112ce7bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce7bf jne 0x112ce7c3 */
  if (!C.zf) goto L_112ce7c3;
  /* 112ce7c1 jmp 0x112ce7df */
  goto L_112ce7df;
L_112ce7c3:;
  /* 112ce7c3 call 0x112cbf10 */
  push32(0x112ce7c8u); f_112cbf10();
  /* 112ce7c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce7cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112ce7cd:;
  /* 112ce7cd call 0x112cbf00 */
  push32(0x112ce7d2u); f_112cbf00();
  /* 112ce7d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112ce7d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112ce7df:;
  /* 112ce7df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce7e2 push eax */
  push32((uint32_t)(EAX));
  /* 112ce7e3 call 0x112cd7b0 */
  push32(0x112ce7e8u); f_112cd7b0();
  /* 112ce7e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce7eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112ce7ee:;
  /* 112ce7ee mov esp, ebp */
  ESP = (EBP);
  /* 112ce7f0 pop ebp */
  EBP = (pop32());
  /* 112ce7f1 ret  */
  ESPCHK(0x112ce720u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x112ce800 (219 bytes, 64 insns) */
void f_112ce800(void) {
  FTRACE(0x112ce800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce800 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce801 mov ebp, esp */
  EBP = (ESP);
  /* 112ce803 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce804 cmp dword ptr [0x112ef744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce80b je 0x112ce8a1 */
  if (C.zf) goto L_112ce8a1;
  /* 112ce811 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 112ce813 push 0x112eb160 */
  push32((uint32_t)(0x112eb160u));
  /* 112ce818 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce81a push 0xac */
  push32((uint32_t)(0xacu));
  /* 112ce81f push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce821 call 0x112c4440 */
  push32(0x112ce826u); f_112c4440();
  /* 112ce826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce82c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce830 jne 0x112ce83c */
  if (!C.zf) goto L_112ce83c;
  /* 112ce832 mov eax, 1 */
  EAX = (0x1u);
  /* 112ce837 jmp 0x112ce8d7 */
  goto L_112ce8d7;
L_112ce83c:;
  /* 112ce83c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce83f push eax */
  push32((uint32_t)(EAX));
  /* 112ce840 call 0x112ce8e0 */
  push32(0x112ce845u); f_112ce8e0();
  /* 112ce845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112ce84a je 0x112ce86d */
  if (C.zf) goto L_112ce86d;
  /* 112ce84c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce84f push ecx */
  push32((uint32_t)(ECX));
  /* 112ce850 call 0x112cee70 */
  push32(0x112ce855u); f_112cee70();
  /* 112ce855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce858 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce85a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce85d push edx */
  push32((uint32_t)(EDX));
  /* 112ce85e call 0x112c4ac0 */
  push32(0x112ce863u); f_112c4ac0();
  /* 112ce863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce866 mov eax, 1 */
  EAX = (0x1u);
  /* 112ce86b jmp 0x112ce8d7 */
  goto L_112ce8d7;
L_112ce86d:;
  /* 112ce86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce870 mov dword ptr [0x112eec98], eax */
  w32((uint32_t)(0x112eec98), (EAX));
  /* 112ce875 mov ecx, dword ptr [0x112ef764] */
  ECX = (r32((uint32_t)(0x112ef764)));
  /* 112ce87b push ecx */
  push32((uint32_t)(ECX));
  /* 112ce87c call 0x112cee70 */
  push32(0x112ce881u); f_112cee70();
  /* 112ce881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce884 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce886 mov edx, dword ptr [0x112ef764] */
  EDX = (r32((uint32_t)(0x112ef764)));
  /* 112ce88c push edx */
  push32((uint32_t)(EDX));
  /* 112ce88d call 0x112c4ac0 */
  push32(0x112ce892u); f_112c4ac0();
  /* 112ce892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce898 mov dword ptr [0x112ef764], eax */
  w32((uint32_t)(0x112ef764), (EAX));
  /* 112ce89d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce89f jmp 0x112ce8d7 */
  goto L_112ce8d7;
L_112ce8a1:;
  /* 112ce8a1 mov dword ptr [0x112eec98], 0x112eeca0 */
  w32((uint32_t)(0x112eec98), (0x112eeca0u));
  /* 112ce8ab mov ecx, dword ptr [0x112ef764] */
  ECX = (r32((uint32_t)(0x112ef764)));
  /* 112ce8b1 push ecx */
  push32((uint32_t)(ECX));
  /* 112ce8b2 call 0x112cee70 */
  push32(0x112ce8b7u); f_112cee70();
  /* 112ce8b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce8ba push 2 */
  push32((uint32_t)(0x2u));
  /* 112ce8bc mov edx, dword ptr [0x112ef764] */
  EDX = (r32((uint32_t)(0x112ef764)));
  /* 112ce8c2 push edx */
  push32((uint32_t)(EDX));
  /* 112ce8c3 call 0x112c4ac0 */
  push32(0x112ce8c8u); f_112c4ac0();
  /* 112ce8c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce8cb mov dword ptr [0x112ef764], 0 */
  w32((uint32_t)(0x112ef764), (0x0u));
  /* 112ce8d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112ce8d7:;
  /* 112ce8d7 mov esp, ebp */
  ESP = (EBP);
  /* 112ce8d9 pop ebp */
  EBP = (pop32());
  /* 112ce8da ret  */
  ESPCHK(0x112ce800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x112ce8e0 (1423 bytes, 533 insns) */
void f_112ce8e0(void) {
  FTRACE(0x112ce8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112ce8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112ce8e1 mov ebp, esp */
  EBP = (ESP);
  /* 112ce8e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112ce8e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112ce8ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112ce8ef mov ax, word ptr [0x112ef79e] */
  AX = (r16((uint32_t)(0x112ef79e)));
  /* 112ce8f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112ce8f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce8fa mov cx, word ptr [0x112ef7a0] */
  CX = (r16((uint32_t)(0x112ef7a0)));
  /* 112ce901 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112ce904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112ce908 jne 0x112ce912 */
  if (!C.zf) goto L_112ce912;
  /* 112ce90a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112ce90d jmp 0x112cee6b */
  goto L_112cee6b;
L_112ce912:;
  /* 112ce912 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce915 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce918 push edx */
  push32((uint32_t)(EDX));
  /* 112ce919 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 112ce91b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce91e push eax */
  push32((uint32_t)(EAX));
  /* 112ce91f push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce921 call 0x112d21f0 */
  push32(0x112ce926u); f_112d21f0();
  /* 112ce926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce929 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce92c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce92e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce934 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce937 push edx */
  push32((uint32_t)(EDX));
  /* 112ce938 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 112ce93a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce93d push eax */
  push32((uint32_t)(EAX));
  /* 112ce93e push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce940 call 0x112d21f0 */
  push32(0x112ce945u); f_112d21f0();
  /* 112ce945 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce948 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce94b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce94d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce953 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce956 push edx */
  push32((uint32_t)(EDX));
  /* 112ce957 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 112ce959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce95c push eax */
  push32((uint32_t)(EAX));
  /* 112ce95d push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce95f call 0x112d21f0 */
  push32(0x112ce964u); f_112d21f0();
  /* 112ce964 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce967 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce96a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce96c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce96f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce972 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce975 push edx */
  push32((uint32_t)(EDX));
  /* 112ce976 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 112ce978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce97b push eax */
  push32((uint32_t)(EAX));
  /* 112ce97c push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce97e call 0x112d21f0 */
  push32(0x112ce983u); f_112d21f0();
  /* 112ce983 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce986 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce989 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce98b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce98e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce991 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce994 push edx */
  push32((uint32_t)(EDX));
  /* 112ce995 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 112ce997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce99a push eax */
  push32((uint32_t)(EAX));
  /* 112ce99b push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce99d call 0x112d21f0 */
  push32(0x112ce9a2u); f_112d21f0();
  /* 112ce9a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce9a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce9a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce9aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce9ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce9b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce9b3 push edx */
  push32((uint32_t)(EDX));
  /* 112ce9b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 112ce9b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce9b9 push eax */
  push32((uint32_t)(EAX));
  /* 112ce9ba push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce9bc call 0x112d21f0 */
  push32(0x112ce9c1u); f_112d21f0();
  /* 112ce9c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce9c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce9c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce9c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce9cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce9cf push edx */
  push32((uint32_t)(EDX));
  /* 112ce9d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 112ce9d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce9d5 push eax */
  push32((uint32_t)(EAX));
  /* 112ce9d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce9d8 call 0x112d21f0 */
  push32(0x112ce9ddu); f_112d21f0();
  /* 112ce9dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce9e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ce9e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ce9e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ce9e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ce9eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce9ee push edx */
  push32((uint32_t)(EDX));
  /* 112ce9ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 112ce9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ce9f4 push eax */
  push32((uint32_t)(EAX));
  /* 112ce9f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ce9f7 call 0x112d21f0 */
  push32(0x112ce9fcu); f_112d21f0();
  /* 112ce9fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ce9ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cea02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cea04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cea07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cea0a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea0d push edx */
  push32((uint32_t)(EDX));
  /* 112cea0e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 112cea10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cea13 push eax */
  push32((uint32_t)(EAX));
  /* 112cea14 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cea16 call 0x112d21f0 */
  push32(0x112cea1bu); f_112d21f0();
  /* 112cea1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cea21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cea23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cea26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cea29 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea2c push edx */
  push32((uint32_t)(EDX));
  /* 112cea2d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 112cea2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cea32 push eax */
  push32((uint32_t)(EAX));
  /* 112cea33 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cea35 call 0x112d21f0 */
  push32(0x112cea3au); f_112d21f0();
  /* 112cea3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cea40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cea42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cea45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cea48 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea4b push edx */
  push32((uint32_t)(EDX));
  /* 112cea4c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 112cea4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cea51 push eax */
  push32((uint32_t)(EAX));
  /* 112cea52 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cea54 call 0x112d21f0 */
  push32(0x112cea59u); f_112d21f0();
  /* 112cea59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cea5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cea61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cea64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cea67 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea6a push edx */
  push32((uint32_t)(EDX));
  /* 112cea6b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 112cea6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cea70 push eax */
  push32((uint32_t)(EAX));
  /* 112cea71 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cea73 call 0x112d21f0 */
  push32(0x112cea78u); f_112d21f0();
  /* 112cea78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cea7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cea80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cea83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cea86 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea89 push edx */
  push32((uint32_t)(EDX));
  /* 112cea8a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 112cea8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cea8f push eax */
  push32((uint32_t)(EAX));
  /* 112cea90 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cea92 call 0x112d21f0 */
  push32(0x112cea97u); f_112d21f0();
  /* 112cea97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cea9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cea9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cea9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceaa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceaa5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceaa8 push edx */
  push32((uint32_t)(EDX));
  /* 112ceaa9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 112ceaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceaae push eax */
  push32((uint32_t)(EAX));
  /* 112ceaaf push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceab1 call 0x112d21f0 */
  push32(0x112ceab6u); f_112d21f0();
  /* 112ceab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceab9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceabc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceabe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceac4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceac7 push edx */
  push32((uint32_t)(EDX));
  /* 112ceac8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112ceaca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceacd push eax */
  push32((uint32_t)(EAX));
  /* 112ceace push 1 */
  push32((uint32_t)(0x1u));
  /* 112cead0 call 0x112d21f0 */
  push32(0x112cead5u); f_112d21f0();
  /* 112cead5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cead8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceadb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceadd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceae3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceae6 push edx */
  push32((uint32_t)(EDX));
  /* 112ceae7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 112ceae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceaec push eax */
  push32((uint32_t)(EAX));
  /* 112ceaed push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceaef call 0x112d21f0 */
  push32(0x112ceaf4u); f_112d21f0();
  /* 112ceaf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceaf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceafa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceaff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceb02 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb05 push edx */
  push32((uint32_t)(EDX));
  /* 112ceb06 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 112ceb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceb0b push eax */
  push32((uint32_t)(EAX));
  /* 112ceb0c push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceb0e call 0x112d21f0 */
  push32(0x112ceb13u); f_112d21f0();
  /* 112ceb13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceb19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceb1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceb1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceb21 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb24 push edx */
  push32((uint32_t)(EDX));
  /* 112ceb25 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 112ceb27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceb2a push eax */
  push32((uint32_t)(EAX));
  /* 112ceb2b push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceb2d call 0x112d21f0 */
  push32(0x112ceb32u); f_112d21f0();
  /* 112ceb32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceb38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceb3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceb3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceb40 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb43 push edx */
  push32((uint32_t)(EDX));
  /* 112ceb44 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 112ceb46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceb49 push eax */
  push32((uint32_t)(EAX));
  /* 112ceb4a push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceb4c call 0x112d21f0 */
  push32(0x112ceb51u); f_112d21f0();
  /* 112ceb51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceb57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceb59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceb5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceb5f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb62 push edx */
  push32((uint32_t)(EDX));
  /* 112ceb63 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 112ceb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceb68 push eax */
  push32((uint32_t)(EAX));
  /* 112ceb69 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceb6b call 0x112d21f0 */
  push32(0x112ceb70u); f_112d21f0();
  /* 112ceb70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceb76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceb78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceb7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceb7e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb81 push edx */
  push32((uint32_t)(EDX));
  /* 112ceb82 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 112ceb84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceb87 push eax */
  push32((uint32_t)(EAX));
  /* 112ceb88 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceb8a call 0x112d21f0 */
  push32(0x112ceb8fu); f_112d21f0();
  /* 112ceb8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceb92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceb95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceb97 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceb9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceb9d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceba0 push edx */
  push32((uint32_t)(EDX));
  /* 112ceba1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 112ceba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceba6 push eax */
  push32((uint32_t)(EAX));
  /* 112ceba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceba9 call 0x112d21f0 */
  push32(0x112cebaeu); f_112d21f0();
  /* 112cebae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cebb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cebb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cebb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cebb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cebbc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cebbf push edx */
  push32((uint32_t)(EDX));
  /* 112cebc0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 112cebc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cebc5 push eax */
  push32((uint32_t)(EAX));
  /* 112cebc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cebc8 call 0x112d21f0 */
  push32(0x112cebcdu); f_112d21f0();
  /* 112cebcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cebd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cebd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cebd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cebd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cebdb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cebde push edx */
  push32((uint32_t)(EDX));
  /* 112cebdf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 112cebe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cebe4 push eax */
  push32((uint32_t)(EAX));
  /* 112cebe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cebe7 call 0x112d21f0 */
  push32(0x112cebecu); f_112d21f0();
  /* 112cebec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cebef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cebf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cebf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cebf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cebfa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cebfd push edx */
  push32((uint32_t)(EDX));
  /* 112cebfe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 112cec00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cec03 push eax */
  push32((uint32_t)(EAX));
  /* 112cec04 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cec06 call 0x112d21f0 */
  push32(0x112cec0bu); f_112d21f0();
  /* 112cec0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cec11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cec13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cec16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cec19 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec1c push edx */
  push32((uint32_t)(EDX));
  /* 112cec1d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 112cec1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cec22 push eax */
  push32((uint32_t)(EAX));
  /* 112cec23 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cec25 call 0x112d21f0 */
  push32(0x112cec2au); f_112d21f0();
  /* 112cec2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cec30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cec32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cec35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cec38 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec3b push edx */
  push32((uint32_t)(EDX));
  /* 112cec3c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 112cec3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cec41 push eax */
  push32((uint32_t)(EAX));
  /* 112cec42 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cec44 call 0x112d21f0 */
  push32(0x112cec49u); f_112d21f0();
  /* 112cec49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cec4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cec51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cec54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cec57 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec5a push edx */
  push32((uint32_t)(EDX));
  /* 112cec5b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 112cec5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cec60 push eax */
  push32((uint32_t)(EAX));
  /* 112cec61 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cec63 call 0x112d21f0 */
  push32(0x112cec68u); f_112d21f0();
  /* 112cec68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cec6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cec70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cec73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cec76 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec79 push edx */
  push32((uint32_t)(EDX));
  /* 112cec7a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 112cec7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cec7f push eax */
  push32((uint32_t)(EAX));
  /* 112cec80 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cec82 call 0x112d21f0 */
  push32(0x112cec87u); f_112d21f0();
  /* 112cec87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cec8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cec8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cec92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cec95 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cec98 push edx */
  push32((uint32_t)(EDX));
  /* 112cec99 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 112cec9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cec9e push eax */
  push32((uint32_t)(EAX));
  /* 112cec9f push 1 */
  push32((uint32_t)(0x1u));
  /* 112ceca1 call 0x112d21f0 */
  push32(0x112ceca6u); f_112d21f0();
  /* 112ceca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cecac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cecae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cecb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cecb4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cecb7 push edx */
  push32((uint32_t)(EDX));
  /* 112cecb8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 112cecba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cecbd push eax */
  push32((uint32_t)(EAX));
  /* 112cecbe push 1 */
  push32((uint32_t)(0x1u));
  /* 112cecc0 call 0x112d21f0 */
  push32(0x112cecc5u); f_112d21f0();
  /* 112cecc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cecc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ceccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ceccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cecd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cecd3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cecd6 push edx */
  push32((uint32_t)(EDX));
  /* 112cecd7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 112cecd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cecdc push eax */
  push32((uint32_t)(EAX));
  /* 112cecdd push 1 */
  push32((uint32_t)(0x1u));
  /* 112cecdf call 0x112d21f0 */
  push32(0x112cece4u); f_112d21f0();
  /* 112cece4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cece7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cecea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cecec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cecef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cecf2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cecf8 push edx */
  push32((uint32_t)(EDX));
  /* 112cecf9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 112cecfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cecfe push eax */
  push32((uint32_t)(EAX));
  /* 112cecff push 1 */
  push32((uint32_t)(0x1u));
  /* 112ced01 call 0x112d21f0 */
  push32(0x112ced06u); f_112d21f0();
  /* 112ced06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ced0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ced0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ced11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ced14 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced1a push edx */
  push32((uint32_t)(EDX));
  /* 112ced1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112ced1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ced20 push eax */
  push32((uint32_t)(EAX));
  /* 112ced21 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ced23 call 0x112d21f0 */
  push32(0x112ced28u); f_112d21f0();
  /* 112ced28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ced2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ced30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ced33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ced36 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced3c push edx */
  push32((uint32_t)(EDX));
  /* 112ced3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112ced3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ced42 push eax */
  push32((uint32_t)(EAX));
  /* 112ced43 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ced45 call 0x112d21f0 */
  push32(0x112ced4au); f_112d21f0();
  /* 112ced4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ced50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ced52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ced55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ced58 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced5e push edx */
  push32((uint32_t)(EDX));
  /* 112ced5f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 112ced61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ced64 push eax */
  push32((uint32_t)(EAX));
  /* 112ced65 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ced67 call 0x112d21f0 */
  push32(0x112ced6cu); f_112d21f0();
  /* 112ced6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ced72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ced74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ced77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ced7a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced80 push edx */
  push32((uint32_t)(EDX));
  /* 112ced81 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 112ced83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ced86 push eax */
  push32((uint32_t)(EAX));
  /* 112ced87 push 1 */
  push32((uint32_t)(0x1u));
  /* 112ced89 call 0x112d21f0 */
  push32(0x112ced8eu); f_112d21f0();
  /* 112ced8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ced91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112ced94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112ced96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ced99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ced9c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceda2 push edx */
  push32((uint32_t)(EDX));
  /* 112ceda3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 112ceda5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112ceda8 push eax */
  push32((uint32_t)(EAX));
  /* 112ceda9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cedab call 0x112d21f0 */
  push32(0x112cedb0u); f_112d21f0();
  /* 112cedb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cedb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cedb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cedb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cedbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cedbe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cedc4 push edx */
  push32((uint32_t)(EDX));
  /* 112cedc5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 112cedc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cedca push eax */
  push32((uint32_t)(EAX));
  /* 112cedcb push 1 */
  push32((uint32_t)(0x1u));
  /* 112cedcd call 0x112d21f0 */
  push32(0x112cedd2u); f_112d21f0();
  /* 112cedd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cedd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cedd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cedda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112ceddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cede0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cede6 push edx */
  push32((uint32_t)(EDX));
  /* 112cede7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 112cede9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cedec push eax */
  push32((uint32_t)(EAX));
  /* 112ceded push 1 */
  push32((uint32_t)(0x1u));
  /* 112cedef call 0x112d21f0 */
  push32(0x112cedf4u); f_112d21f0();
  /* 112cedf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cedf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cedfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cedfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cedff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cee02 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee08 push edx */
  push32((uint32_t)(EDX));
  /* 112cee09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 112cee0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cee0e push eax */
  push32((uint32_t)(EAX));
  /* 112cee0f push 1 */
  push32((uint32_t)(0x1u));
  /* 112cee11 call 0x112d21f0 */
  push32(0x112cee16u); f_112d21f0();
  /* 112cee16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cee1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cee1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cee21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cee24 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee2a push edx */
  push32((uint32_t)(EDX));
  /* 112cee2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 112cee2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cee30 push eax */
  push32((uint32_t)(EAX));
  /* 112cee31 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cee33 call 0x112d21f0 */
  push32(0x112cee38u); f_112d21f0();
  /* 112cee38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cee3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cee40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cee43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cee46 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee4c push edx */
  push32((uint32_t)(EDX));
  /* 112cee4d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 112cee52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cee55 push eax */
  push32((uint32_t)(EAX));
  /* 112cee56 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cee58 call 0x112d21f0 */
  push32(0x112cee5du); f_112d21f0();
  /* 112cee5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112cee63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cee65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112cee68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_112cee6b:;
  /* 112cee6b mov esp, ebp */
  ESP = (EBP);
  /* 112cee6d pop ebp */
  EBP = (pop32());
  /* 112cee6e ret  */
  ESPCHK(0x112ce8e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x112cee70 (779 bytes, 265 insns) */
void f_112cee70(void) {
  FTRACE(0x112cee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cee70 push ebp */
  push32((uint32_t)(EBP));
  /* 112cee71 mov ebp, esp */
  EBP = (ESP);
  /* 112cee73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cee77 jne 0x112cee7e */
  if (!C.zf) goto L_112cee7e;
  /* 112cee79 jmp 0x112cf179 */
  goto L_112cf179;
L_112cee7e:;
  /* 112cee7e push 2 */
  push32((uint32_t)(0x2u));
  /* 112cee80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cee83 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112cee86 push ecx */
  push32((uint32_t)(ECX));
  /* 112cee87 call 0x112c4ac0 */
  push32(0x112cee8cu); f_112c4ac0();
  /* 112cee8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cee8f push 2 */
  push32((uint32_t)(0x2u));
  /* 112cee91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cee94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112cee97 push eax */
  push32((uint32_t)(EAX));
  /* 112cee98 call 0x112c4ac0 */
  push32(0x112cee9du); f_112c4ac0();
  /* 112cee9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceea5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112ceea8 push edx */
  push32((uint32_t)(EDX));
  /* 112ceea9 call 0x112c4ac0 */
  push32(0x112ceeaeu); f_112c4ac0();
  /* 112ceeae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceeb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceeb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceeb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112ceeb9 push ecx */
  push32((uint32_t)(ECX));
  /* 112ceeba call 0x112c4ac0 */
  push32(0x112ceebfu); f_112c4ac0();
  /* 112ceebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceec7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112ceeca push eax */
  push32((uint32_t)(EAX));
  /* 112ceecb call 0x112c4ac0 */
  push32(0x112ceed0u); f_112c4ac0();
  /* 112ceed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceed8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112ceedb push edx */
  push32((uint32_t)(EDX));
  /* 112ceedc call 0x112c4ac0 */
  push32(0x112ceee1u); f_112c4ac0();
  /* 112ceee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceee9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112ceeeb push ecx */
  push32((uint32_t)(ECX));
  /* 112ceeec call 0x112c4ac0 */
  push32(0x112ceef1u); f_112c4ac0();
  /* 112ceef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceef4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceef6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceef9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 112ceefc push eax */
  push32((uint32_t)(EAX));
  /* 112ceefd call 0x112c4ac0 */
  push32(0x112cef02u); f_112c4ac0();
  /* 112cef02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef05 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef0a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 112cef0d push edx */
  push32((uint32_t)(EDX));
  /* 112cef0e call 0x112c4ac0 */
  push32(0x112cef13u); f_112c4ac0();
  /* 112cef13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef16 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef1b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 112cef1e push ecx */
  push32((uint32_t)(ECX));
  /* 112cef1f call 0x112c4ac0 */
  push32(0x112cef24u); f_112c4ac0();
  /* 112cef24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef27 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef2c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 112cef2f push eax */
  push32((uint32_t)(EAX));
  /* 112cef30 call 0x112c4ac0 */
  push32(0x112cef35u); f_112c4ac0();
  /* 112cef35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef38 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef3d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 112cef40 push edx */
  push32((uint32_t)(EDX));
  /* 112cef41 call 0x112c4ac0 */
  push32(0x112cef46u); f_112c4ac0();
  /* 112cef46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef49 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef4e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 112cef51 push ecx */
  push32((uint32_t)(ECX));
  /* 112cef52 call 0x112c4ac0 */
  push32(0x112cef57u); f_112c4ac0();
  /* 112cef57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef5a push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef5f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112cef62 push eax */
  push32((uint32_t)(EAX));
  /* 112cef63 call 0x112c4ac0 */
  push32(0x112cef68u); f_112c4ac0();
  /* 112cef68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef6b push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef70 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 112cef73 push edx */
  push32((uint32_t)(EDX));
  /* 112cef74 call 0x112c4ac0 */
  push32(0x112cef79u); f_112c4ac0();
  /* 112cef79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef7c push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef81 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 112cef84 push ecx */
  push32((uint32_t)(ECX));
  /* 112cef85 call 0x112c4ac0 */
  push32(0x112cef8au); f_112c4ac0();
  /* 112cef8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef8d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cef8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cef92 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 112cef95 push eax */
  push32((uint32_t)(EAX));
  /* 112cef96 call 0x112c4ac0 */
  push32(0x112cef9bu); f_112c4ac0();
  /* 112cef9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cef9e push 2 */
  push32((uint32_t)(0x2u));
  /* 112cefa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cefa3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 112cefa6 push edx */
  push32((uint32_t)(EDX));
  /* 112cefa7 call 0x112c4ac0 */
  push32(0x112cefacu); f_112c4ac0();
  /* 112cefac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cefaf push 2 */
  push32((uint32_t)(0x2u));
  /* 112cefb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cefb4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 112cefb7 push ecx */
  push32((uint32_t)(ECX));
  /* 112cefb8 call 0x112c4ac0 */
  push32(0x112cefbdu); f_112c4ac0();
  /* 112cefbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cefc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cefc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cefc5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 112cefc8 push eax */
  push32((uint32_t)(EAX));
  /* 112cefc9 call 0x112c4ac0 */
  push32(0x112cefceu); f_112c4ac0();
  /* 112cefce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cefd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cefd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cefd6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112cefd9 push edx */
  push32((uint32_t)(EDX));
  /* 112cefda call 0x112c4ac0 */
  push32(0x112cefdfu); f_112c4ac0();
  /* 112cefdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cefe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cefe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cefe7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 112cefea push ecx */
  push32((uint32_t)(ECX));
  /* 112cefeb call 0x112c4ac0 */
  push32(0x112ceff0u); f_112c4ac0();
  /* 112ceff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112ceff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112ceff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112ceff8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 112ceffb push eax */
  push32((uint32_t)(EAX));
  /* 112ceffc call 0x112c4ac0 */
  push32(0x112cf001u); f_112c4ac0();
  /* 112cf001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf004 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf009 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 112cf00c push edx */
  push32((uint32_t)(EDX));
  /* 112cf00d call 0x112c4ac0 */
  push32(0x112cf012u); f_112c4ac0();
  /* 112cf012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf015 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf01a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 112cf01d push ecx */
  push32((uint32_t)(ECX));
  /* 112cf01e call 0x112c4ac0 */
  push32(0x112cf023u); f_112c4ac0();
  /* 112cf023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf026 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf02b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 112cf02e push eax */
  push32((uint32_t)(EAX));
  /* 112cf02f call 0x112c4ac0 */
  push32(0x112cf034u); f_112c4ac0();
  /* 112cf034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf037 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf039 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf03c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 112cf03f push edx */
  push32((uint32_t)(EDX));
  /* 112cf040 call 0x112c4ac0 */
  push32(0x112cf045u); f_112c4ac0();
  /* 112cf045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf048 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf04a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf04d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 112cf050 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf051 call 0x112c4ac0 */
  push32(0x112cf056u); f_112c4ac0();
  /* 112cf056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf059 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf05b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf05e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 112cf061 push eax */
  push32((uint32_t)(EAX));
  /* 112cf062 call 0x112c4ac0 */
  push32(0x112cf067u); f_112c4ac0();
  /* 112cf067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf06a push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf06c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf06f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 112cf072 push edx */
  push32((uint32_t)(EDX));
  /* 112cf073 call 0x112c4ac0 */
  push32(0x112cf078u); f_112c4ac0();
  /* 112cf078 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf07b push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf07d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf080 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 112cf083 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf084 call 0x112c4ac0 */
  push32(0x112cf089u); f_112c4ac0();
  /* 112cf089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf08c push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf091 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 112cf094 push eax */
  push32((uint32_t)(EAX));
  /* 112cf095 call 0x112c4ac0 */
  push32(0x112cf09au); f_112c4ac0();
  /* 112cf09a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf09d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf09f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf0a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 112cf0a8 push edx */
  push32((uint32_t)(EDX));
  /* 112cf0a9 call 0x112c4ac0 */
  push32(0x112cf0aeu); f_112c4ac0();
  /* 112cf0ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf0b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf0b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 112cf0bc push ecx */
  push32((uint32_t)(ECX));
  /* 112cf0bd call 0x112c4ac0 */
  push32(0x112cf0c2u); f_112c4ac0();
  /* 112cf0c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf0c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf0c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf0ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 112cf0d0 push eax */
  push32((uint32_t)(EAX));
  /* 112cf0d1 call 0x112c4ac0 */
  push32(0x112cf0d6u); f_112c4ac0();
  /* 112cf0d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf0d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf0de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 112cf0e4 push edx */
  push32((uint32_t)(EDX));
  /* 112cf0e5 call 0x112c4ac0 */
  push32(0x112cf0eau); f_112c4ac0();
  /* 112cf0ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf0ed push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf0ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf0f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 112cf0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf0f9 call 0x112c4ac0 */
  push32(0x112cf0feu); f_112c4ac0();
  /* 112cf0fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf101 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf106 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 112cf10c push eax */
  push32((uint32_t)(EAX));
  /* 112cf10d call 0x112c4ac0 */
  push32(0x112cf112u); f_112c4ac0();
  /* 112cf112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf115 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf11a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 112cf120 push edx */
  push32((uint32_t)(EDX));
  /* 112cf121 call 0x112c4ac0 */
  push32(0x112cf126u); f_112c4ac0();
  /* 112cf126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf129 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf12b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf12e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 112cf134 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf135 call 0x112c4ac0 */
  push32(0x112cf13au); f_112c4ac0();
  /* 112cf13a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf13d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf142 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 112cf148 push eax */
  push32((uint32_t)(EAX));
  /* 112cf149 call 0x112c4ac0 */
  push32(0x112cf14eu); f_112c4ac0();
  /* 112cf14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf151 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf156 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 112cf15c push edx */
  push32((uint32_t)(EDX));
  /* 112cf15d call 0x112c4ac0 */
  push32(0x112cf162u); f_112c4ac0();
  /* 112cf162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf165 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf16a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 112cf170 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf171 call 0x112c4ac0 */
  push32(0x112cf176u); f_112c4ac0();
  /* 112cf176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cf179:;
  /* 112cf179 pop ebp */
  EBP = (pop32());
  /* 112cf17a ret  */
  ESPCHK(0x112cee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x112cf180 (678 bytes, 180 insns) */
void f_112cf180(void) {
  FTRACE(0x112cf180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf180 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf181 mov ebp, esp */
  EBP = (ESP);
  /* 112cf183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cf186 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112cf18d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cf18f mov ax, word ptr [0x112ef79a] */
  AX = (r16((uint32_t)(0x112ef79a)));
  /* 112cf195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cf198 cmp dword ptr [0x112ef740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf19f je 0x112cf2fa */
  if (C.zf) goto L_112cf2fa;
  /* 112cf1a5 push 0x112ef768 */
  push32((uint32_t)(0x112ef768u));
  /* 112cf1aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 112cf1ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf1af push ecx */
  push32((uint32_t)(ECX));
  /* 112cf1b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf1b2 call 0x112d21f0 */
  push32(0x112cf1b7u); f_112d21f0();
  /* 112cf1b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf1ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf1bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 112cf1bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112cf1c2 push 0x112ef76c */
  push32((uint32_t)(0x112ef76cu));
  /* 112cf1c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 112cf1c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf1cc push eax */
  push32((uint32_t)(EAX));
  /* 112cf1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf1cf call 0x112d21f0 */
  push32(0x112cf1d4u); f_112d21f0();
  /* 112cf1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf1d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf1da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf1df push 0x112ef770 */
  push32((uint32_t)(0x112ef770u));
  /* 112cf1e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112cf1e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf1e9 push edx */
  push32((uint32_t)(EDX));
  /* 112cf1ea push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf1ec call 0x112d21f0 */
  push32(0x112cf1f1u); f_112d21f0();
  /* 112cf1f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf1f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf1f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf1f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf1fc mov edx, dword ptr [0x112ef770] */
  EDX = (r32((uint32_t)(0x112ef770)));
  /* 112cf202 push edx */
  push32((uint32_t)(EDX));
  /* 112cf203 call 0x112cf430 */
  push32(0x112cf208u); f_112cf430();
  /* 112cf208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf20b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf20f je 0x112cf269 */
  if (C.zf) goto L_112cf269;
  /* 112cf211 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf213 mov eax, dword ptr [0x112ef768] */
  EAX = (r32((uint32_t)(0x112ef768)));
  /* 112cf218 push eax */
  push32((uint32_t)(EAX));
  /* 112cf219 call 0x112c4ac0 */
  push32(0x112cf21eu); f_112c4ac0();
  /* 112cf21e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf221 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf223 mov ecx, dword ptr [0x112ef76c] */
  ECX = (r32((uint32_t)(0x112ef76c)));
  /* 112cf229 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf22a call 0x112c4ac0 */
  push32(0x112cf22fu); f_112c4ac0();
  /* 112cf22f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf232 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf234 mov edx, dword ptr [0x112ef770] */
  EDX = (r32((uint32_t)(0x112ef770)));
  /* 112cf23a push edx */
  push32((uint32_t)(EDX));
  /* 112cf23b call 0x112c4ac0 */
  push32(0x112cf240u); f_112c4ac0();
  /* 112cf240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf243 mov dword ptr [0x112ef768], 0 */
  w32((uint32_t)(0x112ef768), (0x0u));
  /* 112cf24d mov dword ptr [0x112ef76c], 0 */
  w32((uint32_t)(0x112ef76c), (0x0u));
  /* 112cf257 mov dword ptr [0x112ef770], 0 */
  w32((uint32_t)(0x112ef770), (0x0u));
  /* 112cf261 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cf264 jmp 0x112cf422 */
  goto L_112cf422;
L_112cf269:;
  /* 112cf269 mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf26e cmp dword ptr [eax], 0x112eed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x112eed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf274 je 0x112cf2b0 */
  if (C.zf) goto L_112cf2b0;
  /* 112cf276 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf278 mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf27e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112cf280 push edx */
  push32((uint32_t)(EDX));
  /* 112cf281 call 0x112c4ac0 */
  push32(0x112cf286u); f_112c4ac0();
  /* 112cf286 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf289 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf28b mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf290 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112cf293 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf294 call 0x112c4ac0 */
  push32(0x112cf299u); f_112c4ac0();
  /* 112cf299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf29c push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf29e mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf2a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112cf2a7 push eax */
  push32((uint32_t)(EAX));
  /* 112cf2a8 call 0x112c4ac0 */
  push32(0x112cf2adu); f_112c4ac0();
  /* 112cf2ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cf2b0:;
  /* 112cf2b0 mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf2b6 mov edx, dword ptr [0x112ef768] */
  EDX = (r32((uint32_t)(0x112ef768)));
  /* 112cf2bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112cf2be mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf2c3 mov ecx, dword ptr [0x112ef76c] */
  ECX = (r32((uint32_t)(0x112ef76c)));
  /* 112cf2c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112cf2cc mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf2d2 mov eax, dword ptr [0x112ef770] */
  EAX = (r32((uint32_t)(0x112ef770)));
  /* 112cf2d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112cf2da mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf2e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112cf2e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cf2e4 mov byte ptr [0x112edea8], al */
  w8((uint32_t)(0x112edea8), (AL));
  /* 112cf2e9 mov dword ptr [0x112edeac], 1 */
  w32((uint32_t)(0x112edeac), (0x1u));
  /* 112cf2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cf2f5 jmp 0x112cf422 */
  goto L_112cf422;
L_112cf2fa:;
  /* 112cf2fa push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf2fc mov ecx, dword ptr [0x112ef768] */
  ECX = (r32((uint32_t)(0x112ef768)));
  /* 112cf302 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf303 call 0x112c4ac0 */
  push32(0x112cf308u); f_112c4ac0();
  /* 112cf308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf30b push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf30d mov edx, dword ptr [0x112ef76c] */
  EDX = (r32((uint32_t)(0x112ef76c)));
  /* 112cf313 push edx */
  push32((uint32_t)(EDX));
  /* 112cf314 call 0x112c4ac0 */
  push32(0x112cf319u); f_112c4ac0();
  /* 112cf319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf31c push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf31e mov eax, dword ptr [0x112ef770] */
  EAX = (r32((uint32_t)(0x112ef770)));
  /* 112cf323 push eax */
  push32((uint32_t)(EAX));
  /* 112cf324 call 0x112c4ac0 */
  push32(0x112cf329u); f_112c4ac0();
  /* 112cf329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf32c mov dword ptr [0x112ef768], 0 */
  w32((uint32_t)(0x112ef768), (0x0u));
  /* 112cf336 mov dword ptr [0x112ef76c], 0 */
  w32((uint32_t)(0x112ef76c), (0x0u));
  /* 112cf340 mov dword ptr [0x112ef770], 0 */
  w32((uint32_t)(0x112ef770), (0x0u));
  /* 112cf34a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 112cf34f push 0x112eb16c */
  push32((uint32_t)(0x112eb16cu));
  /* 112cf354 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf356 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf358 call 0x112c4030 */
  push32(0x112cf35du); f_112c4030();
  /* 112cf35d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf360 mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf366 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112cf368 mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf36e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf371 jne 0x112cf37b */
  if (!C.zf) goto L_112cf37b;
  /* 112cf373 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cf376 jmp 0x112cf422 */
  goto L_112cf422;
L_112cf37b:;
  /* 112cf37b push 0x112eb13c */
  push32((uint32_t)(0x112eb13cu));
  /* 112cf380 mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf385 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112cf387 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf388 call 0x112c6fe0 */
  push32(0x112cf38du); f_112c6fe0();
  /* 112cf38d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf390 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 112cf395 push 0x112eb16c */
  push32((uint32_t)(0x112eb16cu));
  /* 112cf39a push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf39c push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf39e call 0x112c4030 */
  push32(0x112cf3a3u); f_112c4030();
  /* 112cf3a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf3a6 mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf3ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 112cf3af mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf3b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf3b8 jne 0x112cf3bf */
  if (!C.zf) goto L_112cf3bf;
  /* 112cf3ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cf3bd jmp 0x112cf422 */
  goto L_112cf422;
L_112cf3bf:;
  /* 112cf3bf mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf3c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112cf3c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112cf3cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 112cf3d0 push 0x112eb16c */
  push32((uint32_t)(0x112eb16cu));
  /* 112cf3d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf3d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf3d9 call 0x112c4030 */
  push32(0x112cf3deu); f_112c4030();
  /* 112cf3de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf3e1 mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf3e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112cf3ea mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf3f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf3f4 jne 0x112cf3fb */
  if (!C.zf) goto L_112cf3fb;
  /* 112cf3f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cf3f9 jmp 0x112cf422 */
  goto L_112cf422;
L_112cf3fb:;
  /* 112cf3fb mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf400 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112cf403 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 112cf406 mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf40c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112cf40e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112cf410 mov byte ptr [0x112edea8], cl */
  w8((uint32_t)(0x112edea8), (CL));
  /* 112cf416 mov dword ptr [0x112edeac], 1 */
  w32((uint32_t)(0x112edeac), (0x1u));
  /* 112cf420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112cf422:;
  /* 112cf422 mov esp, ebp */
  ESP = (EBP);
  /* 112cf424 pop ebp */
  EBP = (pop32());
  /* 112cf425 ret  */
  ESPCHK(0x112cf180u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x112cf430 (125 bytes, 49 insns) */
void f_112cf430(void) {
  FTRACE(0x112cf430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf430 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf431 mov ebp, esp */
  EBP = (ESP);
  /* 112cf433 push ecx */
  push32((uint32_t)(ECX));
L_112cf434:;
  /* 112cf434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf437 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cf43a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cf43c je 0x112cf4a9 */
  if (C.zf) goto L_112cf4a9;
  /* 112cf43e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf441 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cf444 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf447 jl 0x112cf46d */
  if ((C.sf!=C.of)) goto L_112cf46d;
  /* 112cf449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf44c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cf44f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf452 jg 0x112cf46d */
  if ((!C.zf&&C.sf==C.of)) goto L_112cf46d;
  /* 112cf454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf457 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cf45a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cf45d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf460 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112cf462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf465 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf468 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112cf46b jmp 0x112cf4a7 */
  goto L_112cf4a7;
L_112cf46d:;
  /* 112cf46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf470 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cf473 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf476 jne 0x112cf49e */
  if (!C.zf) goto L_112cf49e;
  /* 112cf478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf47b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112cf47e:;
  /* 112cf47e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf484 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112cf487 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112cf489 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf48c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf48f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cf492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf495 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cf498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cf49a jne 0x112cf47e */
  if (!C.zf) goto L_112cf47e;
  /* 112cf49c jmp 0x112cf4a7 */
  goto L_112cf4a7;
L_112cf49e:;
  /* 112cf49e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf4a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf4a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_112cf4a7:;
  /* 112cf4a7 jmp 0x112cf434 */
  goto L_112cf434;
L_112cf4a9:;
  /* 112cf4a9 mov esp, ebp */
  ESP = (EBP);
  /* 112cf4ab pop ebp */
  EBP = (pop32());
  /* 112cf4ac ret  */
  ESPCHK(0x112cf430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x112cf4b0 (304 bytes, 85 insns) */
void f_112cf4b0(void) {
  FTRACE(0x112cf4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf4b1 mov ebp, esp */
  EBP = (ESP);
  /* 112cf4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf4b4 cmp dword ptr [0x112ef73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf4bb je 0x112cf57c */
  if (C.zf) goto L_112cf57c;
  /* 112cf4c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 112cf4c3 push 0x112eb178 */
  push32((uint32_t)(0x112eb178u));
  /* 112cf4c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf4ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 112cf4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf4ce call 0x112c4440 */
  push32(0x112cf4d3u); f_112c4440();
  /* 112cf4d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf4d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cf4d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf4dd jne 0x112cf4e9 */
  if (!C.zf) goto L_112cf4e9;
  /* 112cf4df mov eax, 1 */
  EAX = (0x1u);
  /* 112cf4e4 jmp 0x112cf5dc */
  goto L_112cf5dc;
L_112cf4e9:;
  /* 112cf4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf4ec push eax */
  push32((uint32_t)(EAX));
  /* 112cf4ed call 0x112cf5e0 */
  push32(0x112cf4f2u); f_112cf5e0();
  /* 112cf4f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf4f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cf4f7 je 0x112cf51d */
  if (C.zf) goto L_112cf51d;
  /* 112cf4f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf4fc push ecx */
  push32((uint32_t)(ECX));
  /* 112cf4fd call 0x112cf870 */
  push32(0x112cf502u); f_112cf870();
  /* 112cf502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf505 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf507 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf50a push edx */
  push32((uint32_t)(EDX));
  /* 112cf50b call 0x112c4ac0 */
  push32(0x112cf510u); f_112c4ac0();
  /* 112cf510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf513 mov eax, 1 */
  EAX = (0x1u);
  /* 112cf518 jmp 0x112cf5dc */
  goto L_112cf5dc;
L_112cf51d:;
  /* 112cf51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf520 mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf526 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112cf528 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112cf52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf52d mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf533 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112cf536 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112cf539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf53c mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf542 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112cf545 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 112cf548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf54b mov dword ptr [0x112eed88], eax */
  w32((uint32_t)(0x112eed88), (EAX));
  /* 112cf550 mov ecx, dword ptr [0x112ef774] */
  ECX = (r32((uint32_t)(0x112ef774)));
  /* 112cf556 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf557 call 0x112cf870 */
  push32(0x112cf55cu); f_112cf870();
  /* 112cf55c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf55f push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf561 mov edx, dword ptr [0x112ef774] */
  EDX = (r32((uint32_t)(0x112ef774)));
  /* 112cf567 push edx */
  push32((uint32_t)(EDX));
  /* 112cf568 call 0x112c4ac0 */
  push32(0x112cf56du); f_112c4ac0();
  /* 112cf56d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf573 mov dword ptr [0x112ef774], eax */
  w32((uint32_t)(0x112ef774), (EAX));
  /* 112cf578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cf57a jmp 0x112cf5dc */
  goto L_112cf5dc;
L_112cf57c:;
  /* 112cf57c mov ecx, dword ptr [0x112eed88] */
  ECX = (r32((uint32_t)(0x112eed88)));
  /* 112cf582 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112cf584 mov dword ptr [0x112eed58], edx */
  w32((uint32_t)(0x112eed58), (EDX));
  /* 112cf58a mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112cf58f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112cf592 mov dword ptr [0x112eed5c], ecx */
  w32((uint32_t)(0x112eed5c), (ECX));
  /* 112cf598 mov edx, dword ptr [0x112eed88] */
  EDX = (r32((uint32_t)(0x112eed88)));
  /* 112cf59e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112cf5a1 mov dword ptr [0x112eed60], eax */
  w32((uint32_t)(0x112eed60), (EAX));
  /* 112cf5a6 mov dword ptr [0x112eed88], 0x112eed58 */
  w32((uint32_t)(0x112eed88), (0x112eed58u));
  /* 112cf5b0 mov ecx, dword ptr [0x112ef774] */
  ECX = (r32((uint32_t)(0x112ef774)));
  /* 112cf5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf5b7 call 0x112cf870 */
  push32(0x112cf5bcu); f_112cf870();
  /* 112cf5bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf5bf push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf5c1 mov edx, dword ptr [0x112ef774] */
  EDX = (r32((uint32_t)(0x112ef774)));
  /* 112cf5c7 push edx */
  push32((uint32_t)(EDX));
  /* 112cf5c8 call 0x112c4ac0 */
  push32(0x112cf5cdu); f_112c4ac0();
  /* 112cf5cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf5d0 mov dword ptr [0x112ef774], 0 */
  w32((uint32_t)(0x112ef774), (0x0u));
  /* 112cf5da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112cf5dc:;
  /* 112cf5dc mov esp, ebp */
  ESP = (EBP);
  /* 112cf5de pop ebp */
  EBP = (pop32());
  /* 112cf5df ret  */
  ESPCHK(0x112cf4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x112cf5e0 (525 bytes, 200 insns) */
void f_112cf5e0(void) {
  FTRACE(0x112cf5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf5e1 mov ebp, esp */
  EBP = (ESP);
  /* 112cf5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cf5e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112cf5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cf5ef mov ax, word ptr [0x112ef794] */
  AX = (r16((uint32_t)(0x112ef794)));
  /* 112cf5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cf5f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf5fc jne 0x112cf606 */
  if (!C.zf) goto L_112cf606;
  /* 112cf5fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cf601 jmp 0x112cf7e9 */
  goto L_112cf7e9;
L_112cf606:;
  /* 112cf606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf609 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf60c push ecx */
  push32((uint32_t)(ECX));
  /* 112cf60d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 112cf60f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf612 push edx */
  push32((uint32_t)(EDX));
  /* 112cf613 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf615 call 0x112d21f0 */
  push32(0x112cf61au); f_112d21f0();
  /* 112cf61a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf61d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf620 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf622 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf628 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf62b push edx */
  push32((uint32_t)(EDX));
  /* 112cf62c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 112cf62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf631 push eax */
  push32((uint32_t)(EAX));
  /* 112cf632 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf634 call 0x112d21f0 */
  push32(0x112cf639u); f_112d21f0();
  /* 112cf639 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf63c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf63f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf641 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf647 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf64a push edx */
  push32((uint32_t)(EDX));
  /* 112cf64b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112cf64d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf650 push eax */
  push32((uint32_t)(EAX));
  /* 112cf651 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf653 call 0x112d21f0 */
  push32(0x112cf658u); f_112d21f0();
  /* 112cf658 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf65b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf65e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf660 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf666 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf669 push edx */
  push32((uint32_t)(EDX));
  /* 112cf66a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 112cf66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf66f push eax */
  push32((uint32_t)(EAX));
  /* 112cf670 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf672 call 0x112d21f0 */
  push32(0x112cf677u); f_112d21f0();
  /* 112cf677 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf67a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf67d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf67f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf685 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf688 push edx */
  push32((uint32_t)(EDX));
  /* 112cf689 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 112cf68b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf68e push eax */
  push32((uint32_t)(EAX));
  /* 112cf68f push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf691 call 0x112d21f0 */
  push32(0x112cf696u); f_112d21f0();
  /* 112cf696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf69c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf69e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf6a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112cf6a7 push eax */
  push32((uint32_t)(EAX));
  /* 112cf6a8 call 0x112cf7f0 */
  push32(0x112cf6adu); f_112cf7f0();
  /* 112cf6ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf6b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf6b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf6b6 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf6b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 112cf6b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf6bc push edx */
  push32((uint32_t)(EDX));
  /* 112cf6bd push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf6bf call 0x112d21f0 */
  push32(0x112cf6c4u); f_112d21f0();
  /* 112cf6c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf6c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf6ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf6d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf6d5 push edx */
  push32((uint32_t)(EDX));
  /* 112cf6d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 112cf6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf6db push eax */
  push32((uint32_t)(EAX));
  /* 112cf6dc push 1 */
  push32((uint32_t)(0x1u));
  /* 112cf6de call 0x112d21f0 */
  push32(0x112cf6e3u); f_112d21f0();
  /* 112cf6e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf6e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf6e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf6eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf6ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf6f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf6f4 push edx */
  push32((uint32_t)(EDX));
  /* 112cf6f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 112cf6f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf6fa push eax */
  push32((uint32_t)(EAX));
  /* 112cf6fb push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf6fd call 0x112d21f0 */
  push32(0x112cf702u); f_112d21f0();
  /* 112cf702 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf705 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf708 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf70a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf70d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf710 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf713 push edx */
  push32((uint32_t)(EDX));
  /* 112cf714 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112cf716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf719 push eax */
  push32((uint32_t)(EAX));
  /* 112cf71a push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf71c call 0x112d21f0 */
  push32(0x112cf721u); f_112d21f0();
  /* 112cf721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf724 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf727 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf729 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf72c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf72f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf732 push edx */
  push32((uint32_t)(EDX));
  /* 112cf733 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 112cf735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf738 push eax */
  push32((uint32_t)(EAX));
  /* 112cf739 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf73b call 0x112d21f0 */
  push32(0x112cf740u); f_112d21f0();
  /* 112cf740 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf746 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf748 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf74b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf74e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf751 push edx */
  push32((uint32_t)(EDX));
  /* 112cf752 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 112cf754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf757 push eax */
  push32((uint32_t)(EAX));
  /* 112cf758 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf75a call 0x112d21f0 */
  push32(0x112cf75fu); f_112d21f0();
  /* 112cf75f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf762 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf765 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf767 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf76a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf76d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf770 push edx */
  push32((uint32_t)(EDX));
  /* 112cf771 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 112cf773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf776 push eax */
  push32((uint32_t)(EAX));
  /* 112cf777 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf779 call 0x112d21f0 */
  push32(0x112cf77eu); f_112d21f0();
  /* 112cf77e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf781 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf784 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf786 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf78c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf78f push edx */
  push32((uint32_t)(EDX));
  /* 112cf790 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 112cf792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf795 push eax */
  push32((uint32_t)(EAX));
  /* 112cf796 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf798 call 0x112d21f0 */
  push32(0x112cf79du); f_112d21f0();
  /* 112cf79d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf7a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf7a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf7a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf7a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf7ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf7ae push edx */
  push32((uint32_t)(EDX));
  /* 112cf7af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 112cf7b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf7b4 push eax */
  push32((uint32_t)(EAX));
  /* 112cf7b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf7b7 call 0x112d21f0 */
  push32(0x112cf7bcu); f_112d21f0();
  /* 112cf7bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf7bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf7c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf7c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf7ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf7cd push edx */
  push32((uint32_t)(EDX));
  /* 112cf7ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 112cf7d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf7d3 push eax */
  push32((uint32_t)(EAX));
  /* 112cf7d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf7d6 call 0x112d21f0 */
  push32(0x112cf7dbu); f_112d21f0();
  /* 112cf7db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf7de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cf7e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112cf7e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112cf7e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112cf7e9:;
  /* 112cf7e9 mov esp, ebp */
  ESP = (EBP);
  /* 112cf7eb pop ebp */
  EBP = (pop32());
  /* 112cf7ec ret  */
  ESPCHK(0x112cf5e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x112cf7f0 (125 bytes, 49 insns) */
void f_112cf7f0(void) {
  FTRACE(0x112cf7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf7f1 mov ebp, esp */
  EBP = (ESP);
  /* 112cf7f3 push ecx */
  push32((uint32_t)(ECX));
L_112cf7f4:;
  /* 112cf7f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf7f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cf7fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cf7fc je 0x112cf869 */
  if (C.zf) goto L_112cf869;
  /* 112cf7fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf801 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cf804 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf807 jl 0x112cf82d */
  if ((C.sf!=C.of)) goto L_112cf82d;
  /* 112cf809 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf80c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cf80f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf812 jg 0x112cf82d */
  if ((!C.zf&&C.sf==C.of)) goto L_112cf82d;
  /* 112cf814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf817 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cf81a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cf81d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf820 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112cf822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112cf82b jmp 0x112cf867 */
  goto L_112cf867;
L_112cf82d:;
  /* 112cf82d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf830 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cf833 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf836 jne 0x112cf85e */
  if (!C.zf) goto L_112cf85e;
  /* 112cf838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf83b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112cf83e:;
  /* 112cf83e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf844 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112cf847 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112cf849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf84c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf84f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112cf852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cf855 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cf858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cf85a jne 0x112cf83e */
  if (!C.zf) goto L_112cf83e;
  /* 112cf85c jmp 0x112cf867 */
  goto L_112cf867;
L_112cf85e:;
  /* 112cf85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf861 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf864 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_112cf867:;
  /* 112cf867 jmp 0x112cf7f4 */
  goto L_112cf7f4;
L_112cf869:;
  /* 112cf869 mov esp, ebp */
  ESP = (EBP);
  /* 112cf86b pop ebp */
  EBP = (pop32());
  /* 112cf86c ret  */
  ESPCHK(0x112cf7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x112cf870 (147 bytes, 52 insns) */
void f_112cf870(void) {
  FTRACE(0x112cf870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf870 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf871 mov ebp, esp */
  EBP = (ESP);
  /* 112cf873 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf877 jne 0x112cf87e */
  if (!C.zf) goto L_112cf87e;
  /* 112cf879 jmp 0x112cf901 */
  goto L_112cf901;
L_112cf87e:;
  /* 112cf87e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf881 cmp dword ptr [eax + 0xc], 0x112ef7d0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x112ef7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf888 je 0x112cf901 */
  if (C.zf) goto L_112cf901;
  /* 112cf88a push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf88f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112cf892 push edx */
  push32((uint32_t)(EDX));
  /* 112cf893 call 0x112c4ac0 */
  push32(0x112cf898u); f_112c4ac0();
  /* 112cf898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf89b push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf89d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf8a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112cf8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf8a4 call 0x112c4ac0 */
  push32(0x112cf8a9u); f_112c4ac0();
  /* 112cf8a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf8ac push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf8ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf8b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112cf8b4 push eax */
  push32((uint32_t)(EAX));
  /* 112cf8b5 call 0x112c4ac0 */
  push32(0x112cf8bau); f_112c4ac0();
  /* 112cf8ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf8bd push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf8bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf8c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112cf8c5 push edx */
  push32((uint32_t)(EDX));
  /* 112cf8c6 call 0x112c4ac0 */
  push32(0x112cf8cbu); f_112c4ac0();
  /* 112cf8cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf8ce push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf8d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf8d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112cf8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 112cf8d7 call 0x112c4ac0 */
  push32(0x112cf8dcu); f_112c4ac0();
  /* 112cf8dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf8df push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf8e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf8e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 112cf8e7 push eax */
  push32((uint32_t)(EAX));
  /* 112cf8e8 call 0x112c4ac0 */
  push32(0x112cf8edu); f_112c4ac0();
  /* 112cf8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf8f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf8f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cf8f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 112cf8f8 push edx */
  push32((uint32_t)(EDX));
  /* 112cf8f9 call 0x112c4ac0 */
  push32(0x112cf8feu); f_112c4ac0();
  /* 112cf8fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cf901:;
  /* 112cf901 pop ebp */
  EBP = (pop32());
  /* 112cf902 ret  */
  ESPCHK(0x112cf870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f910 @ 0x112cf910 (928 bytes, 284 insns) */
void f_112cf910(void) {
  FTRACE(0x112cf910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cf910 push ebp */
  push32((uint32_t)(EBP));
  /* 112cf911 mov ebp, esp */
  EBP = (ESP);
  /* 112cf913 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cf916 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 112cf91d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 112cf924 cmp dword ptr [0x112ef738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf92b je 0x112cfc61 */
  if (C.zf) goto L_112cfc61;
  /* 112cf931 cmp dword ptr [0x112ef748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf938 jne 0x112cf960 */
  if (!C.zf) goto L_112cf960;
  /* 112cf93a push 0x112ef748 */
  push32((uint32_t)(0x112ef748u));
  /* 112cf93f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 112cf944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cf946 mov ax, word ptr [0x112ef78c] */
  AX = (r16((uint32_t)(0x112ef78c)));
  /* 112cf94c push eax */
  push32((uint32_t)(EAX));
  /* 112cf94d push 0 */
  push32((uint32_t)(0x0u));
  /* 112cf94f call 0x112d21f0 */
  push32(0x112cf954u); f_112d21f0();
  /* 112cf954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cf959 je 0x112cf960 */
  if (C.zf) goto L_112cf960;
  /* 112cf95b jmp 0x112cfc22 */
  goto L_112cfc22;
L_112cf960:;
  /* 112cf960 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 112cf962 push 0x112eb184 */
  push32((uint32_t)(0x112eb184u));
  /* 112cf967 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf969 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 112cf96e call 0x112c4030 */
  push32(0x112cf973u); f_112c4030();
  /* 112cf973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf976 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 112cf979 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 112cf97b push 0x112eb184 */
  push32((uint32_t)(0x112eb184u));
  /* 112cf980 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf982 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 112cf987 call 0x112c4030 */
  push32(0x112cf98cu); f_112c4030();
  /* 112cf98c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf98f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112cf992 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112cf994 push 0x112eb184 */
  push32((uint32_t)(0x112eb184u));
  /* 112cf999 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf99b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 112cf9a0 call 0x112c4030 */
  push32(0x112cf9a5u); f_112c4030();
  /* 112cf9a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf9a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 112cf9ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 112cf9ad push 0x112eb184 */
  push32((uint32_t)(0x112eb184u));
  /* 112cf9b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cf9b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 112cf9b9 call 0x112c4030 */
  push32(0x112cf9beu); f_112c4030();
  /* 112cf9be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf9c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112cf9c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf9c8 je 0x112cf9dc */
  if (C.zf) goto L_112cf9dc;
  /* 112cf9ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf9ce je 0x112cf9dc */
  if (C.zf) goto L_112cf9dc;
  /* 112cf9d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf9d4 je 0x112cf9dc */
  if (C.zf) goto L_112cf9dc;
  /* 112cf9d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cf9da jne 0x112cf9e1 */
  if (!C.zf) goto L_112cf9e1;
L_112cf9dc:;
  /* 112cf9dc jmp 0x112cfc22 */
  goto L_112cfc22;
L_112cf9e1:;
  /* 112cf9e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cf9e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112cf9e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112cf9ee jmp 0x112cf9f9 */
  goto L_112cf9f9;
L_112cf9f0:;
  /* 112cf9f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cf9f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cf9f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_112cf9f9:;
  /* 112cf9f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfa00 jge 0x112cfa15 */
  if ((C.sf==C.of)) goto L_112cfa15;
  /* 112cfa02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa05 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 112cfa08 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 112cfa0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfa10 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112cfa13 jmp 0x112cf9f0 */
  goto L_112cf9f0;
L_112cfa15:;
  /* 112cfa15 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 112cfa18 push eax */
  push32((uint32_t)(EAX));
  /* 112cfa19 mov ecx, dword ptr [0x112ef748] */
  ECX = (r32((uint32_t)(0x112ef748)));
  /* 112cfa1f push ecx */
  push32((uint32_t)(ECX));
  /* 112cfa20 call dword ptr [0x112f2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2314))), 0x112cfa26u);
  /* 112cfa26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cfa28 jne 0x112cfa2f */
  if (!C.zf) goto L_112cfa2f;
  /* 112cfa2a jmp 0x112cfc22 */
  goto L_112cfc22;
L_112cfa2f:;
  /* 112cfa2f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfa33 jbe 0x112cfa3a */
  if ((C.cf||C.zf)) goto L_112cfa3a;
  /* 112cfa35 jmp 0x112cfc22 */
  goto L_112cfc22;
L_112cfa3a:;
  /* 112cfa3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112cfa3d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112cfa43 mov dword ptr [0x112edea4], edx */
  w32((uint32_t)(0x112edea4), (EDX));
  /* 112cfa49 cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfa50 jle 0x112cfaa9 */
  if ((C.zf||C.sf!=C.of)) goto L_112cfaa9;
  /* 112cfa52 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 112cfa55 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112cfa58 jmp 0x112cfa63 */
  goto L_112cfa63;
L_112cfa5a:;
  /* 112cfa5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa5d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfa60 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_112cfa63:;
  /* 112cfa63 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfa68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cfa6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cfa6c je 0x112cfaa9 */
  if (C.zf) goto L_112cfaa9;
  /* 112cfa6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112cfa73 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112cfa76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cfa78 je 0x112cfaa9 */
  if (C.zf) goto L_112cfaa9;
  /* 112cfa7a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cfa7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112cfa81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112cfa84 jmp 0x112cfa8f */
  goto L_112cfa8f;
L_112cfa86:;
  /* 112cfa86 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cfa89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfa8c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_112cfa8f:;
  /* 112cfa8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfa92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cfa94 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 112cfa97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfa9a jg 0x112cfaa7 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cfaa7;
  /* 112cfa9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cfa9f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfaa2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112cfaa5 jmp 0x112cfa86 */
  goto L_112cfa86;
L_112cfaa7:;
  /* 112cfaa7 jmp 0x112cfa5a */
  goto L_112cfa5a;
L_112cfaa9:;
  /* 112cfaa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cfaab push 0 */
  push32((uint32_t)(0x0u));
  /* 112cfaad push 0 */
  push32((uint32_t)(0x0u));
  /* 112cfaaf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cfab2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfab5 push eax */
  push32((uint32_t)(EAX));
  /* 112cfab6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112cfabb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cfabe push ecx */
  push32((uint32_t)(ECX));
  /* 112cfabf push 1 */
  push32((uint32_t)(0x1u));
  /* 112cfac1 call 0x112cc260 */
  push32(0x112cfac6u); f_112cc260();
  /* 112cfac6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cfacb jne 0x112cfad2 */
  if (!C.zf) goto L_112cfad2;
  /* 112cfacd jmp 0x112cfc22 */
  goto L_112cfc22;
L_112cfad2:;
  /* 112cfad2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cfad5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 112cfada mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cfadd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112cfae0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112cfae7 jmp 0x112cfaf2 */
  goto L_112cfaf2;
L_112cfae9:;
  /* 112cfae9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cfaec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfaef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_112cfaf2:;
  /* 112cfaf2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfaf9 jge 0x112cfb10 */
  if ((C.sf==C.of)) goto L_112cfb10;
  /* 112cfafb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cfafe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 112cfb02 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 112cfb05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112cfb08 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfb0b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112cfb0e jmp 0x112cfae9 */
  goto L_112cfae9;
L_112cfb10:;
  /* 112cfb10 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cfb12 push 0 */
  push32((uint32_t)(0x0u));
  /* 112cfb14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cfb17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfb1a push edx */
  push32((uint32_t)(EDX));
  /* 112cfb1b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112cfb20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cfb23 push eax */
  push32((uint32_t)(EAX));
  /* 112cfb24 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cfb26 call 0x112d2490 */
  push32(0x112cfb2bu); f_112d2490();
  /* 112cfb2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfb2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cfb30 jne 0x112cfb37 */
  if (!C.zf) goto L_112cfb37;
  /* 112cfb32 jmp 0x112cfc22 */
  goto L_112cfc22;
L_112cfb37:;
  /* 112cfb37 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cfb3a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 112cfb3f cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfb46 jle 0x112cfba3 */
  if ((C.zf||C.sf!=C.of)) goto L_112cfba3;
  /* 112cfb48 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 112cfb4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112cfb4e jmp 0x112cfb59 */
  goto L_112cfb59;
L_112cfb50:;
  /* 112cfb50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfb53 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfb56 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_112cfb59:;
  /* 112cfb59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfb5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112cfb5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112cfb60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cfb62 je 0x112cfba3 */
  if (C.zf) goto L_112cfba3;
  /* 112cfb64 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfb67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cfb69 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 112cfb6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cfb6e je 0x112cfba3 */
  if (C.zf) goto L_112cfba3;
  /* 112cfb70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfb73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfb75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cfb77 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112cfb7a jmp 0x112cfb85 */
  goto L_112cfb85;
L_112cfb7c:;
  /* 112cfb7c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cfb7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfb82 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_112cfb85:;
  /* 112cfb85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112cfb88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfb8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112cfb8d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfb90 jg 0x112cfba1 */
  if ((!C.zf&&C.sf==C.of)) goto L_112cfba1;
  /* 112cfb92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112cfb95 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cfb98 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 112cfb9f jmp 0x112cfb7c */
  goto L_112cfb7c;
L_112cfba1:;
  /* 112cfba1 jmp 0x112cfb50 */
  goto L_112cfb50;
L_112cfba3:;
  /* 112cfba3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cfba6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfba9 mov dword ptr [0x112edc98], eax */
  w32((uint32_t)(0x112edc98), (EAX));
  /* 112cfbae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cfbb1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfbb4 mov dword ptr [0x112edc9c], ecx */
  w32((uint32_t)(0x112edc9c), (ECX));
  /* 112cfbba cmp dword ptr [0x112ef778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfbc1 je 0x112cfbd4 */
  if (C.zf) goto L_112cfbd4;
  /* 112cfbc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfbc5 mov edx, dword ptr [0x112ef778] */
  EDX = (r32((uint32_t)(0x112ef778)));
  /* 112cfbcb push edx */
  push32((uint32_t)(EDX));
  /* 112cfbcc call 0x112c4ac0 */
  push32(0x112cfbd1u); f_112c4ac0();
  /* 112cfbd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cfbd4:;
  /* 112cfbd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cfbd7 mov dword ptr [0x112ef778], eax */
  w32((uint32_t)(0x112ef778), (EAX));
  /* 112cfbdc cmp dword ptr [0x112ef77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfbe3 je 0x112cfbf6 */
  if (C.zf) goto L_112cfbf6;
  /* 112cfbe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfbe7 mov ecx, dword ptr [0x112ef77c] */
  ECX = (r32((uint32_t)(0x112ef77c)));
  /* 112cfbed push ecx */
  push32((uint32_t)(ECX));
  /* 112cfbee call 0x112c4ac0 */
  push32(0x112cfbf3u); f_112c4ac0();
  /* 112cfbf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cfbf6:;
  /* 112cfbf6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cfbf9 mov dword ptr [0x112ef77c], edx */
  w32((uint32_t)(0x112ef77c), (EDX));
  /* 112cfbff push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc01 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cfc04 push eax */
  push32((uint32_t)(EAX));
  /* 112cfc05 call 0x112c4ac0 */
  push32(0x112cfc0au); f_112c4ac0();
  /* 112cfc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cfc12 push ecx */
  push32((uint32_t)(ECX));
  /* 112cfc13 call 0x112c4ac0 */
  push32(0x112cfc18u); f_112c4ac0();
  /* 112cfc18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfc1d jmp 0x112cfcac */
  goto L_112cfcac;
L_112cfc22:;
  /* 112cfc22 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 112cfc27 push edx */
  push32((uint32_t)(EDX));
  /* 112cfc28 call 0x112c4ac0 */
  push32(0x112cfc2du); f_112c4ac0();
  /* 112cfc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc30 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112cfc35 push eax */
  push32((uint32_t)(EAX));
  /* 112cfc36 call 0x112c4ac0 */
  push32(0x112cfc3bu); f_112c4ac0();
  /* 112cfc3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc3e push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112cfc43 push ecx */
  push32((uint32_t)(ECX));
  /* 112cfc44 call 0x112c4ac0 */
  push32(0x112cfc49u); f_112c4ac0();
  /* 112cfc49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc4c push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc4e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112cfc51 push edx */
  push32((uint32_t)(EDX));
  /* 112cfc52 call 0x112c4ac0 */
  push32(0x112cfc57u); f_112c4ac0();
  /* 112cfc57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc5a mov eax, 1 */
  EAX = (0x1u);
  /* 112cfc5f jmp 0x112cfcac */
  goto L_112cfcac;
L_112cfc61:;
  /* 112cfc61 mov dword ptr [0x112edc98], 0x112edca2 */
  w32((uint32_t)(0x112edc98), (0x112edca2u));
  /* 112cfc6b mov dword ptr [0x112edc9c], 0x112edca2 */
  w32((uint32_t)(0x112edc9c), (0x112edca2u));
  /* 112cfc75 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc77 mov eax, dword ptr [0x112ef778] */
  EAX = (r32((uint32_t)(0x112ef778)));
  /* 112cfc7c push eax */
  push32((uint32_t)(EAX));
  /* 112cfc7d call 0x112c4ac0 */
  push32(0x112cfc82u); f_112c4ac0();
  /* 112cfc82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 112cfc87 mov ecx, dword ptr [0x112ef77c] */
  ECX = (r32((uint32_t)(0x112ef77c)));
  /* 112cfc8d push ecx */
  push32((uint32_t)(ECX));
  /* 112cfc8e call 0x112c4ac0 */
  push32(0x112cfc93u); f_112c4ac0();
  /* 112cfc93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfc96 mov dword ptr [0x112ef778], 0 */
  w32((uint32_t)(0x112ef778), (0x0u));
  /* 112cfca0 mov dword ptr [0x112ef77c], 0 */
  w32((uint32_t)(0x112ef77c), (0x0u));
  /* 112cfcaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112cfcac:;
  /* 112cfcac mov esp, ebp */
  ESP = (EBP);
  /* 112cfcae pop ebp */
  EBP = (pop32());
  /* 112cfcaf ret  */
  ESPCHK(0x112cf910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcb0 @ 0x112cfcb0 (7 bytes, 5 insns) */
void f_112cfcb0(void) {
  FTRACE(0x112cfcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cfcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cfcb1 mov ebp, esp */
  EBP = (ESP);
  /* 112cfcb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfcb5 pop ebp */
  EBP = (pop32());
  /* 112cfcb6 ret  */
  ESPCHK(0x112cfcb0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x112cfcc0 (129 bytes, 56 insns) */
void f_112cfcc0(void) {
  FTRACE(0x112cfcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cfcc0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 112cfcc4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112cfcc8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 112cfcce jne 0x112cfd0c */
  if (!C.zf) goto L_112cfd0c;
L_112cfcd0:;
  /* 112cfcd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112cfcd2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfcd4 jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfcd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfcd8 je 0x112cfd00 */
  if (C.zf) goto L_112cfd00;
  /* 112cfcda cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfcdd jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfcdf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112cfce1 je 0x112cfd00 */
  if (C.zf) goto L_112cfd00;
  /* 112cfce3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112cfce6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfce9 jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfceb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfced je 0x112cfd00 */
  if (C.zf) goto L_112cfd00;
  /* 112cfcef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfcf2 jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfcf4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfcf7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfcfa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112cfcfc jne 0x112cfcd0 */
  if (!C.zf) goto L_112cfcd0;
  /* 112cfcfe mov edi, edi */
  EDI = (EDI);
L_112cfd00:;
  /* 112cfd00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfd02 ret  */
  ESPCHK(0x112cfcc0u, _esp0);
  ESP += 4; return;
  /* 112cfd03 nop  */
  /* nop */
L_112cfd04:;
  /* 112cfd04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cfd06 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112cfd08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112cfd09 ret  */
  ESPCHK(0x112cfcc0u, _esp0);
  ESP += 4; return;
  /* 112cfd0a mov edi, edi */
  EDI = (EDI);
L_112cfd0c:;
  /* 112cfd0c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 112cfd12 je 0x112cfd28 */
  if (C.zf) goto L_112cfd28;
  /* 112cfd14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cfd16 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112cfd17 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfd19 jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfd1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112cfd1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfd1e je 0x112cfd00 */
  if (C.zf) goto L_112cfd00;
  /* 112cfd20 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 112cfd26 je 0x112cfcd0 */
  if (C.zf) goto L_112cfcd0;
L_112cfd28:;
  /* 112cfd28 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 112cfd2b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfd2e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfd30 jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfd32 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfd34 je 0x112cfd00 */
  if (C.zf) goto L_112cfd00;
  /* 112cfd36 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfd39 jne 0x112cfd04 */
  if (!C.zf) goto L_112cfd04;
  /* 112cfd3b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112cfd3d je 0x112cfd00 */
  if (C.zf) goto L_112cfd00;
  /* 112cfd3f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfd42 jmp 0x112cfcd0 */
  goto L_112cfcd0;
}

/* FUN_1000fd50 @ 0x112cfd50 (62 bytes, 35 insns) */
void f_112cfd50(void) {
  FTRACE(0x112cfd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cfd50 push ebp */
  push32((uint32_t)(EBP));
  /* 112cfd51 mov ebp, esp */
  EBP = (ESP);
  /* 112cfd53 push esi */
  push32((uint32_t)(ESI));
  /* 112cfd54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfd56 push eax */
  push32((uint32_t)(EAX));
  /* 112cfd57 push eax */
  push32((uint32_t)(EAX));
  /* 112cfd58 push eax */
  push32((uint32_t)(EAX));
  /* 112cfd59 push eax */
  push32((uint32_t)(EAX));
  /* 112cfd5a push eax */
  push32((uint32_t)(EAX));
  /* 112cfd5b push eax */
  push32((uint32_t)(EAX));
  /* 112cfd5c push eax */
  push32((uint32_t)(EAX));
  /* 112cfd5d push eax */
  push32((uint32_t)(EAX));
  /* 112cfd5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cfd61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cfd64:;
  /* 112cfd64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cfd66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfd68 je 0x112cfd71 */
  if (C.zf) goto L_112cfd71;
  /* 112cfd6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112cfd6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x112cfd6b");
  /* 112cfd6f jmp 0x112cfd64 */
  goto L_112cfd64;
L_112cfd71:;
  /* 112cfd71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112cfd74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112cfd77 nop  */
  /* nop */
L_112cfd78:;
  /* 112cfd78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112cfd79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cfd7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfd7d je 0x112cfd86 */
  if (C.zf) goto L_112cfd86;
  /* 112cfd7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112cfd80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x112cfd80");
  /* 112cfd84 jae 0x112cfd78 */
  if (!C.cf) goto L_112cfd78;
L_112cfd86:;
  /* 112cfd86 mov eax, ecx */
  EAX = (ECX);
  /* 112cfd88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfd8b pop esi */
  ESI = (pop32());
  /* 112cfd8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cfd8d ret  */
  ESPCHK(0x112cfd50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x112cfd90 (56 bytes, 31 insns) */
void f_112cfd90(void) {
  FTRACE(0x112cfd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cfd90 push ebp */
  push32((uint32_t)(EBP));
  /* 112cfd91 mov ebp, esp */
  EBP = (ESP);
  /* 112cfd93 push edi */
  push32((uint32_t)(EDI));
  /* 112cfd94 push esi */
  push32((uint32_t)(ESI));
  /* 112cfd95 push ebx */
  push32((uint32_t)(EBX));
  /* 112cfd96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cfd99 jecxz 0x112cfdc1 */
  x86_unimpl("jecxz @ 0x112cfd99");
  /* 112cfd9b mov ebx, ecx */
  EBX = (ECX);
  /* 112cfd9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112cfda0 mov esi, edi */
  ESI = (EDI);
  /* 112cfda2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfda4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112cfda6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112cfda8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfdaa mov edi, esi */
  EDI = (ESI);
  /* 112cfdac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112cfdaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 112cfdb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 112cfdb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112cfdb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112cfdb9 ja 0x112cfdbf */
  if ((!C.cf&&!C.zf)) goto L_112cfdbf;
  /* 112cfdbb je 0x112cfdc1 */
  if (C.zf) goto L_112cfdc1;
  /* 112cfdbd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112cfdbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_112cfdbf:;
  /* 112cfdbf not ecx */
  ECX = (~(ECX));
L_112cfdc1:;
  /* 112cfdc1 mov eax, ecx */
  EAX = (ECX);
  /* 112cfdc3 pop ebx */
  EBX = (pop32());
  /* 112cfdc4 pop esi */
  ESI = (pop32());
  /* 112cfdc5 pop edi */
  EDI = (pop32());
  /* 112cfdc6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cfdc7 ret  */
  ESPCHK(0x112cfd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x112cfdd0 (58 bytes, 32 insns) */
void f_112cfdd0(void) {
  FTRACE(0x112cfdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cfdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 112cfdd1 mov ebp, esp */
  EBP = (ESP);
  /* 112cfdd3 push esi */
  push32((uint32_t)(ESI));
  /* 112cfdd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cfdd6 push eax */
  push32((uint32_t)(EAX));
  /* 112cfdd7 push eax */
  push32((uint32_t)(EAX));
  /* 112cfdd8 push eax */
  push32((uint32_t)(EAX));
  /* 112cfdd9 push eax */
  push32((uint32_t)(EAX));
  /* 112cfdda push eax */
  push32((uint32_t)(EAX));
  /* 112cfddb push eax */
  push32((uint32_t)(EAX));
  /* 112cfddc push eax */
  push32((uint32_t)(EAX));
  /* 112cfddd push eax */
  push32((uint32_t)(EAX));
  /* 112cfdde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cfde1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112cfde4:;
  /* 112cfde4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112cfde6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfde8 je 0x112cfdf1 */
  if (C.zf) goto L_112cfdf1;
  /* 112cfdea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112cfdeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x112cfdeb");
  /* 112cfdef jmp 0x112cfde4 */
  goto L_112cfde4;
L_112cfdf1:;
  /* 112cfdf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_112cfdf4:;
  /* 112cfdf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112cfdf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112cfdf8 je 0x112cfe04 */
  if (C.zf) goto L_112cfe04;
  /* 112cfdfa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112cfdfb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x112cfdfb");
  /* 112cfdff jae 0x112cfdf4 */
  if (!C.cf) goto L_112cfdf4;
  /* 112cfe01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_112cfe04:;
  /* 112cfe04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfe07 pop esi */
  ESI = (pop32());
  /* 112cfe08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112cfe09 ret  */
  ESPCHK(0x112cfdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe10 @ 0x112cfe10 (512 bytes, 147 insns) */
void f_112cfe10(void) {
  FTRACE(0x112cfe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112cfe10 push ebp */
  push32((uint32_t)(EBP));
  /* 112cfe11 mov ebp, esp */
  EBP = (ESP);
  /* 112cfe13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112cfe16 cmp dword ptr [0x112ef7c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfe1d jne 0x112cfe42 */
  if (!C.zf) goto L_112cfe42;
  /* 112cfe1f call 0x112d08e0 */
  push32(0x112cfe24u); f_112d08e0();
  /* 112cfe24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cfe26 je 0x112cfe32 */
  if (C.zf) goto L_112cfe32;
  /* 112cfe28 mov eax, dword ptr [0x112f22d8] */
  EAX = (r32((uint32_t)(0x112f22d8)));
  /* 112cfe2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112cfe30 jmp 0x112cfe39 */
  goto L_112cfe39;
L_112cfe32:;
  /* 112cfe32 mov dword ptr [ebp - 8], 0x112d0930 */
  w32((uint32_t)(EBP + -0x8), (0x112d0930u));
L_112cfe39:;
  /* 112cfe39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112cfe3c mov dword ptr [0x112ef7c4], ecx */
  w32((uint32_t)(0x112ef7c4), (ECX));
L_112cfe42:;
  /* 112cfe42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfe46 jne 0x112cfe52 */
  if (!C.zf) goto L_112cfe52;
  /* 112cfe48 call 0x112d0730 */
  push32(0x112cfe4du); f_112d0730();
  /* 112cfe4d jmp 0x112cff1e */
  goto L_112cff1e;
L_112cfe52:;
  /* 112cfe52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cfe55 mov dword ptr [0x112ef7b4], edx */
  w32((uint32_t)(0x112ef7b4), (EDX));
  /* 112cfe5b cmp dword ptr [0x112ef7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfe62 je 0x112cfe84 */
  if (C.zf) goto L_112cfe84;
  /* 112cfe64 mov eax, dword ptr [0x112ef7b4] */
  EAX = (r32((uint32_t)(0x112ef7b4)));
  /* 112cfe69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cfe6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cfe6e je 0x112cfe84 */
  if (C.zf) goto L_112cfe84;
  /* 112cfe70 push 0x112ef7b4 */
  push32((uint32_t)(0x112ef7b4u));
  /* 112cfe75 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112cfe77 push 0x112eea90 */
  push32((uint32_t)(0x112eea90u));
  /* 112cfe7c call 0x112d0010 */
  push32(0x112cfe81u); f_112d0010();
  /* 112cfe81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cfe84:;
  /* 112cfe84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cfe87 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfe8a mov dword ptr [0x112ef7b8], edx */
  w32((uint32_t)(0x112ef7b8), (EDX));
  /* 112cfe90 cmp dword ptr [0x112ef7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfe97 je 0x112cfeb9 */
  if (C.zf) goto L_112cfeb9;
  /* 112cfe99 mov eax, dword ptr [0x112ef7b8] */
  EAX = (r32((uint32_t)(0x112ef7b8)));
  /* 112cfe9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cfea1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cfea3 je 0x112cfeb9 */
  if (C.zf) goto L_112cfeb9;
  /* 112cfea5 push 0x112ef7b8 */
  push32((uint32_t)(0x112ef7b8u));
  /* 112cfeaa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112cfeac push 0x112ee9d8 */
  push32((uint32_t)(0x112ee9d8u));
  /* 112cfeb1 call 0x112d0010 */
  push32(0x112cfeb6u); f_112d0010();
  /* 112cfeb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112cfeb9:;
  /* 112cfeb9 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
  /* 112cfec3 cmp dword ptr [0x112ef7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfeca je 0x112cfefd */
  if (C.zf) goto L_112cfefd;
  /* 112cfecc mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112cfed2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112cfed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cfed7 je 0x112cfefd */
  if (C.zf) goto L_112cfefd;
  /* 112cfed9 cmp dword ptr [0x112ef7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cfee0 je 0x112cfef6 */
  if (C.zf) goto L_112cfef6;
  /* 112cfee2 mov ecx, dword ptr [0x112ef7b8] */
  ECX = (r32((uint32_t)(0x112ef7b8)));
  /* 112cfee8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112cfeeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112cfeed je 0x112cfef6 */
  if (C.zf) goto L_112cfef6;
  /* 112cfeef call 0x112d00a0 */
  push32(0x112cfef4u); f_112d00a0();
  /* 112cfef4 jmp 0x112cfefb */
  goto L_112cfefb;
L_112cfef6:;
  /* 112cfef6 call 0x112d0490 */
  push32(0x112cfefbu); f_112d0490();
L_112cfefb:;
  /* 112cfefb jmp 0x112cff1e */
  goto L_112cff1e;
L_112cfefd:;
  /* 112cfefd cmp dword ptr [0x112ef7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cff04 je 0x112cff19 */
  if (C.zf) goto L_112cff19;
  /* 112cff06 mov eax, dword ptr [0x112ef7b8] */
  EAX = (r32((uint32_t)(0x112ef7b8)));
  /* 112cff0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112cff0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112cff10 je 0x112cff19 */
  if (C.zf) goto L_112cff19;
  /* 112cff12 call 0x112d0630 */
  push32(0x112cff17u); f_112d0630();
  /* 112cff17 jmp 0x112cff1e */
  goto L_112cff1e;
L_112cff19:;
  /* 112cff19 call 0x112d0730 */
  push32(0x112cff1eu); f_112d0730();
L_112cff1e:;
  /* 112cff1e cmp dword ptr [0x112ef7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cff25 jne 0x112cff2e */
  if (!C.zf) goto L_112cff2e;
  /* 112cff27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cff29 jmp 0x112d000c */
  goto L_112d000c;
L_112cff2e:;
  /* 112cff2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112cff31 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cff37 push edx */
  push32((uint32_t)(EDX));
  /* 112cff38 call 0x112d0760 */
  push32(0x112cff3du); f_112d0760();
  /* 112cff3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112cff40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112cff43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cff47 je 0x112cff5c */
  if (C.zf) goto L_112cff5c;
  /* 112cff49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cff4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112cff51 push eax */
  push32((uint32_t)(EAX));
  /* 112cff52 call dword ptr [0x112f22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22dc))), 0x112cff58u);
  /* 112cff58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cff5a jne 0x112cff63 */
  if (!C.zf) goto L_112cff63;
L_112cff5c:;
  /* 112cff5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cff5e jmp 0x112d000c */
  goto L_112d000c;
L_112cff63:;
  /* 112cff63 push 1 */
  push32((uint32_t)(0x1u));
  /* 112cff65 mov ecx, dword ptr [0x112ef7a4] */
  ECX = (r32((uint32_t)(0x112ef7a4)));
  /* 112cff6b push ecx */
  push32((uint32_t)(ECX));
  /* 112cff6c call dword ptr [0x112f22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22ec))), 0x112cff72u);
  /* 112cff72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cff74 jne 0x112cff7d */
  if (!C.zf) goto L_112cff7d;
  /* 112cff76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cff78 jmp 0x112d000c */
  goto L_112d000c;
L_112cff7d:;
  /* 112cff7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cff81 je 0x112cffa8 */
  if (C.zf) goto L_112cffa8;
  /* 112cff83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cff86 mov ax, word ptr [0x112ef7a4] */
  AX = (r16((uint32_t)(0x112ef7a4)));
  /* 112cff8c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 112cff8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cff92 mov dx, word ptr [0x112ef7c0] */
  DX = (r16((uint32_t)(0x112ef7c0)));
  /* 112cff99 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 112cff9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112cffa0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 112cffa4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_112cffa8:;
  /* 112cffa8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112cffac je 0x112d0007 */
  if (C.zf) goto L_112d0007;
  /* 112cffae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112cffb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cffb3 push edx */
  push32((uint32_t)(EDX));
  /* 112cffb4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 112cffb9 mov eax, dword ptr [0x112ef7a4] */
  EAX = (r32((uint32_t)(0x112ef7a4)));
  /* 112cffbe push eax */
  push32((uint32_t)(EAX));
  /* 112cffbf call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112cffc5u);
  /* 112cffc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cffc7 jne 0x112cffcd */
  if (!C.zf) goto L_112cffcd;
  /* 112cffc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cffcb jmp 0x112d000c */
  goto L_112d000c;
L_112cffcd:;
  /* 112cffcd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112cffcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cffd2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cffd5 push ecx */
  push32((uint32_t)(ECX));
  /* 112cffd6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 112cffdb mov edx, dword ptr [0x112ef7c0] */
  EDX = (r32((uint32_t)(0x112ef7c0)));
  /* 112cffe1 push edx */
  push32((uint32_t)(EDX));
  /* 112cffe2 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112cffe8u);
  /* 112cffe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112cffea jne 0x112cfff0 */
  if (!C.zf) goto L_112cfff0;
  /* 112cffec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112cffee jmp 0x112d000c */
  goto L_112d000c;
L_112cfff0:;
  /* 112cfff0 push 0xa */
  push32((uint32_t)(0xau));
  /* 112cfff2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112cfff5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112cfffa push eax */
  push32((uint32_t)(EAX));
  /* 112cfffb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112cfffe push ecx */
  push32((uint32_t)(ECX));
  /* 112cffff call 0x112c6b70 */
  push32(0x112d0004u); f_112c6b70();
  /* 112d0004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d0007:;
  /* 112d0007 mov eax, 1 */
  EAX = (0x1u);
L_112d000c:;
  /* 112d000c mov esp, ebp */
  ESP = (EBP);
  /* 112d000e pop ebp */
  EBP = (pop32());
  /* 112d000f ret  */
  ESPCHK(0x112cfe10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x112d0010 (130 bytes, 47 insns) */
void f_112d0010(void) {
  FTRACE(0x112d0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0010 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0011 mov ebp, esp */
  EBP = (ESP);
  /* 112d0013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0016 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112d001d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_112d0024:;
  /* 112d0024 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0027 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d002a jg 0x112d008e */
  if ((!C.zf&&C.sf==C.of)) goto L_112d008e;
  /* 112d002c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0030 je 0x112d008e */
  if (C.zf) goto L_112d008e;
  /* 112d0032 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0035 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0038 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d0039 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d003b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112d003d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d0040 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0046 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 112d0049 push eax */
  push32((uint32_t)(EAX));
  /* 112d004a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d004d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d004f push edx */
  push32((uint32_t)(EDX));
  /* 112d0050 call 0x112d2700 */
  push32(0x112d0055u); f_112d2700();
  /* 112d0055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0058 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d005b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d005f jne 0x112d0072 */
  if (!C.zf) goto L_112d0072;
  /* 112d0061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0067 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 112d006b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d006e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d0070 jmp 0x112d008c */
  goto L_112d008c;
L_112d0072:;
  /* 112d0072 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0076 jge 0x112d0083 */
  if ((C.sf==C.of)) goto L_112d0083;
  /* 112d0078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d007b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d007e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112d0081 jmp 0x112d008c */
  goto L_112d008c;
L_112d0083:;
  /* 112d0083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0086 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0089 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112d008c:;
  /* 112d008c jmp 0x112d0024 */
  goto L_112d0024;
L_112d008e:;
  /* 112d008e mov esp, ebp */
  ESP = (EBP);
  /* 112d0090 pop ebp */
  EBP = (pop32());
  /* 112d0091 ret  */
  ESPCHK(0x112d0010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x112d00a0 (186 bytes, 50 insns) */
void f_112d00a0(void) {
  FTRACE(0x112d00a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d00a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d00a1 mov ebp, esp */
  EBP = (ESP);
  /* 112d00a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d00a4 mov eax, dword ptr [0x112ef7b4] */
  EAX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d00a9 push eax */
  push32((uint32_t)(EAX));
  /* 112d00aa call 0x112c6e60 */
  push32(0x112d00afu); f_112c6e60();
  /* 112d00af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d00b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d00b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d00b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 112d00ba mov dword ptr [0x112ef7b0], ecx */
  w32((uint32_t)(0x112ef7b0), (ECX));
  /* 112d00c0 mov edx, dword ptr [0x112ef7b8] */
  EDX = (r32((uint32_t)(0x112ef7b8)));
  /* 112d00c6 push edx */
  push32((uint32_t)(EDX));
  /* 112d00c7 call 0x112c6e60 */
  push32(0x112d00ccu); f_112c6e60();
  /* 112d00cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d00cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d00d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d00d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 112d00d7 mov dword ptr [0x112ef7a8], ecx */
  w32((uint32_t)(0x112ef7a8), (ECX));
  /* 112d00dd mov dword ptr [0x112ef7a4], 0 */
  w32((uint32_t)(0x112ef7a4), (0x0u));
  /* 112d00e7 cmp dword ptr [0x112ef7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d00ee je 0x112d00f9 */
  if (C.zf) goto L_112d00f9;
  /* 112d00f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 112d00f7 jmp 0x112d010b */
  goto L_112d010b;
L_112d00f9:;
  /* 112d00f9 mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d00ff push edx */
  push32((uint32_t)(EDX));
  /* 112d0100 call 0x112d0b40 */
  push32(0x112d0105u); f_112d0b40();
  /* 112d0105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0108 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112d010b:;
  /* 112d010b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d010e mov dword ptr [0x112ef7ac], eax */
  w32((uint32_t)(0x112ef7ac), (EAX));
  /* 112d0113 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d0115 push 0x112d0160 */
  push32((uint32_t)(0x112d0160u));
  /* 112d011a call dword ptr [0x112f22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22e0))), 0x112d0120u);
  /* 112d0120 mov ecx, dword ptr [0x112ef7bc] */
  ECX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0126 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 112d012c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d012e je 0x112d014c */
  if (C.zf) goto L_112d014c;
  /* 112d0130 mov edx, dword ptr [0x112ef7bc] */
  EDX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0136 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 112d013c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d013e je 0x112d014c */
  if (C.zf) goto L_112d014c;
  /* 112d0140 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0145 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 112d0148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d014a jne 0x112d0156 */
  if (!C.zf) goto L_112d0156;
L_112d014c:;
  /* 112d014c mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
L_112d0156:;
  /* 112d0156 mov esp, ebp */
  ESP = (EBP);
  /* 112d0158 pop ebp */
  EBP = (pop32());
  /* 112d0159 ret  */
  ESPCHK(0x112d00a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x112d0160 (804 bytes, 220 insns) */
void f_112d0160(void) {
  FTRACE(0x112d0160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0160 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0161 mov ebp, esp */
  EBP = (ESP);
  /* 112d0163 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0169 push eax */
  push32((uint32_t)(EAX));
  /* 112d016a call 0x112d0ac0 */
  push32(0x112d016fu); f_112d0ac0();
  /* 112d016f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0172 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 112d0175 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112d0177 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d017a push ecx */
  push32((uint32_t)(ECX));
  /* 112d017b mov edx, dword ptr [0x112ef7a8] */
  EDX = (r32((uint32_t)(0x112ef7a8)));
  /* 112d0181 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d0183 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0185 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 112d018b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0191 push edx */
  push32((uint32_t)(EDX));
  /* 112d0192 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0195 push eax */
  push32((uint32_t)(EAX));
  /* 112d0196 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d019cu);
  /* 112d019c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d019e jne 0x112d01b4 */
  if (!C.zf) goto L_112d01b4;
  /* 112d01a0 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
  /* 112d01aa mov eax, 1 */
  EAX = (0x1u);
  /* 112d01af jmp 0x112d047e */
  goto L_112d047e;
L_112d01b4:;
  /* 112d01b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d01b7 push ecx */
  push32((uint32_t)(ECX));
  /* 112d01b8 mov edx, dword ptr [0x112ef7b8] */
  EDX = (r32((uint32_t)(0x112ef7b8)));
  /* 112d01be push edx */
  push32((uint32_t)(EDX));
  /* 112d01bf call 0x112d2700 */
  push32(0x112d01c4u); f_112d2700();
  /* 112d01c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d01c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d01c9 jne 0x112d02ef */
  if (!C.zf) goto L_112d02ef;
  /* 112d01cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112d01d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 112d01d4 push eax */
  push32((uint32_t)(EAX));
  /* 112d01d5 mov ecx, dword ptr [0x112ef7b0] */
  ECX = (r32((uint32_t)(0x112ef7b0)));
  /* 112d01db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d01dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d01df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 112d01e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d01eb push ecx */
  push32((uint32_t)(ECX));
  /* 112d01ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d01ef push edx */
  push32((uint32_t)(EDX));
  /* 112d01f0 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d01f6u);
  /* 112d01f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d01f8 jne 0x112d020e */
  if (!C.zf) goto L_112d020e;
  /* 112d01fa mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
  /* 112d0204 mov eax, 1 */
  EAX = (0x1u);
  /* 112d0209 jmp 0x112d047e */
  goto L_112d047e;
L_112d020e:;
  /* 112d020e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 112d0211 push eax */
  push32((uint32_t)(EAX));
  /* 112d0212 mov ecx, dword ptr [0x112ef7b4] */
  ECX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d0218 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0219 call 0x112d2700 */
  push32(0x112d021eu); f_112d2700();
  /* 112d021e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0223 jne 0x112d0250 */
  if (!C.zf) goto L_112d0250;
  /* 112d0225 mov edx, dword ptr [0x112ef7bc] */
  EDX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d022b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 112d0231 mov dword ptr [0x112ef7bc], edx */
  w32((uint32_t)(0x112ef7bc), (EDX));
  /* 112d0237 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d023a mov dword ptr [0x112ef7c0], eax */
  w32((uint32_t)(0x112ef7c0), (EAX));
  /* 112d023f mov ecx, dword ptr [0x112ef7c0] */
  ECX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d0245 mov dword ptr [0x112ef7a4], ecx */
  w32((uint32_t)(0x112ef7a4), (ECX));
  /* 112d024b jmp 0x112d02ef */
  goto L_112d02ef;
L_112d0250:;
  /* 112d0250 mov edx, dword ptr [0x112ef7bc] */
  EDX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0256 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 112d0259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d025b jne 0x112d02ef */
  if (!C.zf) goto L_112d02ef;
  /* 112d0261 cmp dword ptr [0x112ef7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0268 je 0x112d02bd */
  if (C.zf) goto L_112d02bd;
  /* 112d026a mov eax, dword ptr [0x112ef7ac] */
  EAX = (r32((uint32_t)(0x112ef7ac)));
  /* 112d026f push eax */
  push32((uint32_t)(EAX));
  /* 112d0270 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d0273 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0274 mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d027a push edx */
  push32((uint32_t)(EDX));
  /* 112d027b call 0x112d27d0 */
  push32(0x112d0280u); f_112d27d0();
  /* 112d0280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0283 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0285 jne 0x112d02bd */
  if (!C.zf) goto L_112d02bd;
  /* 112d0287 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d028c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 112d028e mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
  /* 112d0293 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0296 mov dword ptr [0x112ef7c0], ecx */
  w32((uint32_t)(0x112ef7c0), (ECX));
  /* 112d029c mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d02a2 push edx */
  push32((uint32_t)(EDX));
  /* 112d02a3 call 0x112c6e60 */
  push32(0x112d02a8u); f_112c6e60();
  /* 112d02a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d02ab cmp eax, dword ptr [0x112ef7ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112ef7ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d02b1 jne 0x112d02bb */
  if (!C.zf) goto L_112d02bb;
  /* 112d02b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d02b6 mov dword ptr [0x112ef7a4], eax */
  w32((uint32_t)(0x112ef7a4), (EAX));
L_112d02bb:;
  /* 112d02bb jmp 0x112d02ef */
  goto L_112d02ef;
L_112d02bd:;
  /* 112d02bd mov ecx, dword ptr [0x112ef7bc] */
  ECX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d02c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112d02c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d02c8 jne 0x112d02ef */
  if (!C.zf) goto L_112d02ef;
  /* 112d02ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d02cd push edx */
  push32((uint32_t)(EDX));
  /* 112d02ce call 0x112d0800 */
  push32(0x112d02d3u); f_112d0800();
  /* 112d02d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d02d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d02d8 je 0x112d02ef */
  if (C.zf) goto L_112d02ef;
  /* 112d02da mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d02df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 112d02e1 mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
  /* 112d02e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d02e9 mov dword ptr [0x112ef7c0], ecx */
  w32((uint32_t)(0x112ef7c0), (ECX));
L_112d02ef:;
  /* 112d02ef mov edx, dword ptr [0x112ef7bc] */
  EDX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d02f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 112d02fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0301 je 0x112d0471 */
  if (C.zf) goto L_112d0471;
  /* 112d0307 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112d0309 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 112d030c push eax */
  push32((uint32_t)(EAX));
  /* 112d030d mov ecx, dword ptr [0x112ef7b0] */
  ECX = (r32((uint32_t)(0x112ef7b0)));
  /* 112d0313 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d0315 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0317 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 112d031d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0323 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0324 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0327 push edx */
  push32((uint32_t)(EDX));
  /* 112d0328 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d032eu);
  /* 112d032e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0330 jne 0x112d0346 */
  if (!C.zf) goto L_112d0346;
  /* 112d0332 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
  /* 112d033c mov eax, 1 */
  EAX = (0x1u);
  /* 112d0341 jmp 0x112d047e */
  goto L_112d047e;
L_112d0346:;
  /* 112d0346 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 112d0349 push eax */
  push32((uint32_t)(EAX));
  /* 112d034a mov ecx, dword ptr [0x112ef7b4] */
  ECX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d0350 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0351 call 0x112d2700 */
  push32(0x112d0356u); f_112d2700();
  /* 112d0356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d035b jne 0x112d0410 */
  if (!C.zf) goto L_112d0410;
  /* 112d0361 mov edx, dword ptr [0x112ef7bc] */
  EDX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0367 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112d036a mov dword ptr [0x112ef7bc], edx */
  w32((uint32_t)(0x112ef7bc), (EDX));
  /* 112d0370 cmp dword ptr [0x112ef7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0377 je 0x112d039a */
  if (C.zf) goto L_112d039a;
  /* 112d0379 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d037e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 112d0381 mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
  /* 112d0386 cmp dword ptr [0x112ef7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d038d jne 0x112d0398 */
  if (!C.zf) goto L_112d0398;
  /* 112d038f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0392 mov dword ptr [0x112ef7a4], ecx */
  w32((uint32_t)(0x112ef7a4), (ECX));
L_112d0398:;
  /* 112d0398 jmp 0x112d040e */
  goto L_112d040e;
L_112d039a:;
  /* 112d039a cmp dword ptr [0x112ef7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d03a1 je 0x112d03ef */
  if (C.zf) goto L_112d03ef;
  /* 112d03a3 mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d03a9 push edx */
  push32((uint32_t)(EDX));
  /* 112d03aa call 0x112c6e60 */
  push32(0x112d03afu); f_112c6e60();
  /* 112d03af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d03b2 cmp eax, dword ptr [0x112ef7ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112ef7ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d03b8 jne 0x112d03ef */
  if (!C.zf) goto L_112d03ef;
  /* 112d03ba push 1 */
  push32((uint32_t)(0x1u));
  /* 112d03bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d03bf push eax */
  push32((uint32_t)(EAX));
  /* 112d03c0 call 0x112d0850 */
  push32(0x112d03c5u); f_112d0850();
  /* 112d03c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d03c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d03ca je 0x112d03ed */
  if (C.zf) goto L_112d03ed;
  /* 112d03cc mov ecx, dword ptr [0x112ef7bc] */
  ECX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d03d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112d03d5 mov dword ptr [0x112ef7bc], ecx */
  w32((uint32_t)(0x112ef7bc), (ECX));
  /* 112d03db cmp dword ptr [0x112ef7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d03e2 jne 0x112d03ed */
  if (!C.zf) goto L_112d03ed;
  /* 112d03e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d03e7 mov dword ptr [0x112ef7a4], edx */
  w32((uint32_t)(0x112ef7a4), (EDX));
L_112d03ed:;
  /* 112d03ed jmp 0x112d040e */
  goto L_112d040e;
L_112d03ef:;
  /* 112d03ef mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d03f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 112d03f7 mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
  /* 112d03fc cmp dword ptr [0x112ef7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0403 jne 0x112d040e */
  if (!C.zf) goto L_112d040e;
  /* 112d0405 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0408 mov dword ptr [0x112ef7a4], ecx */
  w32((uint32_t)(0x112ef7a4), (ECX));
L_112d040e:;
  /* 112d040e jmp 0x112d0471 */
  goto L_112d0471;
L_112d0410:;
  /* 112d0410 cmp dword ptr [0x112ef7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0417 jne 0x112d0471 */
  if (!C.zf) goto L_112d0471;
  /* 112d0419 cmp dword ptr [0x112ef7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0420 je 0x112d0471 */
  if (C.zf) goto L_112d0471;
  /* 112d0422 mov edx, dword ptr [0x112ef7ac] */
  EDX = (r32((uint32_t)(0x112ef7ac)));
  /* 112d0428 push edx */
  push32((uint32_t)(EDX));
  /* 112d0429 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 112d042c push eax */
  push32((uint32_t)(EAX));
  /* 112d042d mov ecx, dword ptr [0x112ef7b4] */
  ECX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d0433 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0434 call 0x112d27d0 */
  push32(0x112d0439u); f_112d27d0();
  /* 112d0439 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d043c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d043e jne 0x112d0471 */
  if (!C.zf) goto L_112d0471;
  /* 112d0440 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d0442 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0445 push edx */
  push32((uint32_t)(EDX));
  /* 112d0446 call 0x112d0850 */
  push32(0x112d044bu); f_112d0850();
  /* 112d044b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d044e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0450 je 0x112d0471 */
  if (C.zf) goto L_112d0471;
  /* 112d0452 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0457 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 112d045a mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
  /* 112d045f cmp dword ptr [0x112ef7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0466 jne 0x112d0471 */
  if (!C.zf) goto L_112d0471;
  /* 112d0468 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d046b mov dword ptr [0x112ef7a4], ecx */
  w32((uint32_t)(0x112ef7a4), (ECX));
L_112d0471:;
  /* 112d0471 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0476 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112d0479 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d047b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d047d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112d047e:;
  /* 112d047e mov esp, ebp */
  ESP = (EBP);
  /* 112d0480 pop ebp */
  EBP = (pop32());
  /* 112d0481 ret 4 */
  ESPCHK(0x112d0160u, _esp0);
  ESP += 8; return;
}

/* FUN_10010490 @ 0x112d0490 (116 bytes, 33 insns) */
void f_112d0490(void) {
  FTRACE(0x112d0490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0490 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0491 mov ebp, esp */
  EBP = (ESP);
  /* 112d0493 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0494 mov eax, dword ptr [0x112ef7b4] */
  EAX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d0499 push eax */
  push32((uint32_t)(EAX));
  /* 112d049a call 0x112c6e60 */
  push32(0x112d049fu); f_112c6e60();
  /* 112d049f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d04a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d04a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d04a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 112d04aa mov dword ptr [0x112ef7b0], ecx */
  w32((uint32_t)(0x112ef7b0), (ECX));
  /* 112d04b0 cmp dword ptr [0x112ef7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d04b7 je 0x112d04c2 */
  if (C.zf) goto L_112d04c2;
  /* 112d04b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 112d04c0 jmp 0x112d04d4 */
  goto L_112d04d4;
L_112d04c2:;
  /* 112d04c2 mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d04c8 push edx */
  push32((uint32_t)(EDX));
  /* 112d04c9 call 0x112d0b40 */
  push32(0x112d04ceu); f_112d0b40();
  /* 112d04ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d04d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112d04d4:;
  /* 112d04d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d04d7 mov dword ptr [0x112ef7ac], eax */
  w32((uint32_t)(0x112ef7ac), (EAX));
  /* 112d04dc push 1 */
  push32((uint32_t)(0x1u));
  /* 112d04de push 0x112d0510 */
  push32((uint32_t)(0x112d0510u));
  /* 112d04e3 call dword ptr [0x112f22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22e0))), 0x112d04e9u);
  /* 112d04e9 mov ecx, dword ptr [0x112ef7bc] */
  ECX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d04ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112d04f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d04f4 jne 0x112d0500 */
  if (!C.zf) goto L_112d0500;
  /* 112d04f6 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
L_112d0500:;
  /* 112d0500 mov esp, ebp */
  ESP = (EBP);
  /* 112d0502 pop ebp */
  EBP = (pop32());
  /* 112d0503 ret  */
  ESPCHK(0x112d0490u, _esp0);
  ESP += 4; return;
}

/* FUN_10010510 @ 0x112d0510 (287 bytes, 86 insns) */
void f_112d0510(void) {
  FTRACE(0x112d0510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0510 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0511 mov ebp, esp */
  EBP = (ESP);
  /* 112d0513 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0519 push eax */
  push32((uint32_t)(EAX));
  /* 112d051a call 0x112d0ac0 */
  push32(0x112d051fu); f_112d0ac0();
  /* 112d051f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0522 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 112d0525 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112d0527 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d052a push ecx */
  push32((uint32_t)(ECX));
  /* 112d052b mov edx, dword ptr [0x112ef7b0] */
  EDX = (r32((uint32_t)(0x112ef7b0)));
  /* 112d0531 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d0533 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0535 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 112d053b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0541 push edx */
  push32((uint32_t)(EDX));
  /* 112d0542 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0545 push eax */
  push32((uint32_t)(EAX));
  /* 112d0546 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d054cu);
  /* 112d054c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d054e jne 0x112d0564 */
  if (!C.zf) goto L_112d0564;
  /* 112d0550 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
  /* 112d055a mov eax, 1 */
  EAX = (0x1u);
  /* 112d055f jmp 0x112d0629 */
  goto L_112d0629;
L_112d0564:;
  /* 112d0564 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d0567 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0568 mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d056e push edx */
  push32((uint32_t)(EDX));
  /* 112d056f call 0x112d2700 */
  push32(0x112d0574u); f_112d2700();
  /* 112d0574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0579 jne 0x112d05b9 */
  if (!C.zf) goto L_112d05b9;
  /* 112d057b cmp dword ptr [0x112ef7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0582 jne 0x112d0596 */
  if (!C.zf) goto L_112d0596;
  /* 112d0584 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d0586 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0589 push eax */
  push32((uint32_t)(EAX));
  /* 112d058a call 0x112d0850 */
  push32(0x112d058fu); f_112d0850();
  /* 112d058f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0594 je 0x112d05b7 */
  if (C.zf) goto L_112d05b7;
L_112d0596:;
  /* 112d0596 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d0599 mov dword ptr [0x112ef7c0], ecx */
  w32((uint32_t)(0x112ef7c0), (ECX));
  /* 112d059f mov edx, dword ptr [0x112ef7c0] */
  EDX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d05a5 mov dword ptr [0x112ef7a4], edx */
  w32((uint32_t)(0x112ef7a4), (EDX));
  /* 112d05ab mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d05b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 112d05b2 mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
L_112d05b7:;
  /* 112d05b7 jmp 0x112d061c */
  goto L_112d061c;
L_112d05b9:;
  /* 112d05b9 cmp dword ptr [0x112ef7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d05c0 jne 0x112d061c */
  if (!C.zf) goto L_112d061c;
  /* 112d05c2 cmp dword ptr [0x112ef7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d05c9 je 0x112d061c */
  if (C.zf) goto L_112d061c;
  /* 112d05cb mov ecx, dword ptr [0x112ef7ac] */
  ECX = (r32((uint32_t)(0x112ef7ac)));
  /* 112d05d1 push ecx */
  push32((uint32_t)(ECX));
  /* 112d05d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 112d05d5 push edx */
  push32((uint32_t)(EDX));
  /* 112d05d6 mov eax, dword ptr [0x112ef7b4] */
  EAX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d05db push eax */
  push32((uint32_t)(EAX));
  /* 112d05dc call 0x112d27d0 */
  push32(0x112d05e1u); f_112d27d0();
  /* 112d05e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d05e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d05e6 jne 0x112d061c */
  if (!C.zf) goto L_112d061c;
  /* 112d05e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d05ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d05ed push ecx */
  push32((uint32_t)(ECX));
  /* 112d05ee call 0x112d0850 */
  push32(0x112d05f3u); f_112d0850();
  /* 112d05f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d05f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d05f8 je 0x112d061c */
  if (C.zf) goto L_112d061c;
  /* 112d05fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d05fd mov dword ptr [0x112ef7c0], edx */
  w32((uint32_t)(0x112ef7c0), (EDX));
  /* 112d0603 mov eax, dword ptr [0x112ef7c0] */
  EAX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d0608 mov dword ptr [0x112ef7a4], eax */
  w32((uint32_t)(0x112ef7a4), (EAX));
  /* 112d060d mov ecx, dword ptr [0x112ef7bc] */
  ECX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0613 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112d0616 mov dword ptr [0x112ef7bc], ecx */
  w32((uint32_t)(0x112ef7bc), (ECX));
L_112d061c:;
  /* 112d061c mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0621 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112d0624 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d0626 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0628 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112d0629:;
  /* 112d0629 mov esp, ebp */
  ESP = (EBP);
  /* 112d062b pop ebp */
  EBP = (pop32());
  /* 112d062c ret 4 */
  ESPCHK(0x112d0510u, _esp0);
  ESP += 8; return;
}

/* FUN_10010630 @ 0x112d0630 (69 bytes, 20 insns) */
void f_112d0630(void) {
  FTRACE(0x112d0630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0630 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0631 mov ebp, esp */
  EBP = (ESP);
  /* 112d0633 mov eax, dword ptr [0x112ef7b8] */
  EAX = (r32((uint32_t)(0x112ef7b8)));
  /* 112d0638 push eax */
  push32((uint32_t)(EAX));
  /* 112d0639 call 0x112c6e60 */
  push32(0x112d063eu); f_112c6e60();
  /* 112d063e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0641 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d0643 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0646 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 112d0649 mov dword ptr [0x112ef7a8], ecx */
  w32((uint32_t)(0x112ef7a8), (ECX));
  /* 112d064f push 1 */
  push32((uint32_t)(0x1u));
  /* 112d0651 push 0x112d0680 */
  push32((uint32_t)(0x112d0680u));
  /* 112d0656 call dword ptr [0x112f22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22e0))), 0x112d065cu);
  /* 112d065c mov edx, dword ptr [0x112ef7bc] */
  EDX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0662 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112d0665 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d0667 jne 0x112d0673 */
  if (!C.zf) goto L_112d0673;
  /* 112d0669 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
L_112d0673:;
  /* 112d0673 pop ebp */
  EBP = (pop32());
  /* 112d0674 ret  */
  ESPCHK(0x112d0630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x112d0680 (172 bytes, 54 insns) */
void f_112d0680(void) {
  FTRACE(0x112d0680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0680 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0681 mov ebp, esp */
  EBP = (ESP);
  /* 112d0683 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0689 push eax */
  push32((uint32_t)(EAX));
  /* 112d068a call 0x112d0ac0 */
  push32(0x112d068fu); f_112d0ac0();
  /* 112d068f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0692 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 112d0695 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112d0697 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d069a push ecx */
  push32((uint32_t)(ECX));
  /* 112d069b mov edx, dword ptr [0x112ef7a8] */
  EDX = (r32((uint32_t)(0x112ef7a8)));
  /* 112d06a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d06a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d06a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 112d06ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d06b1 push edx */
  push32((uint32_t)(EDX));
  /* 112d06b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d06b5 push eax */
  push32((uint32_t)(EAX));
  /* 112d06b6 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d06bcu);
  /* 112d06bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d06be jne 0x112d06d1 */
  if (!C.zf) goto L_112d06d1;
  /* 112d06c0 mov dword ptr [0x112ef7bc], 0 */
  w32((uint32_t)(0x112ef7bc), (0x0u));
  /* 112d06ca mov eax, 1 */
  EAX = (0x1u);
  /* 112d06cf jmp 0x112d0726 */
  goto L_112d0726;
L_112d06d1:;
  /* 112d06d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 112d06d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112d06d5 mov edx, dword ptr [0x112ef7b8] */
  EDX = (r32((uint32_t)(0x112ef7b8)));
  /* 112d06db push edx */
  push32((uint32_t)(EDX));
  /* 112d06dc call 0x112d2700 */
  push32(0x112d06e1u); f_112d2700();
  /* 112d06e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d06e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d06e6 jne 0x112d0719 */
  if (!C.zf) goto L_112d0719;
  /* 112d06e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d06eb push eax */
  push32((uint32_t)(EAX));
  /* 112d06ec call 0x112d0800 */
  push32(0x112d06f1u); f_112d0800();
  /* 112d06f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d06f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d06f6 je 0x112d0719 */
  if (C.zf) goto L_112d0719;
  /* 112d06f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 112d06fb mov dword ptr [0x112ef7c0], ecx */
  w32((uint32_t)(0x112ef7c0), (ECX));
  /* 112d0701 mov edx, dword ptr [0x112ef7c0] */
  EDX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d0707 mov dword ptr [0x112ef7a4], edx */
  w32((uint32_t)(0x112ef7a4), (EDX));
  /* 112d070d mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0712 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 112d0714 mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
L_112d0719:;
  /* 112d0719 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d071e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112d0721 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d0723 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0725 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112d0726:;
  /* 112d0726 mov esp, ebp */
  ESP = (EBP);
  /* 112d0728 pop ebp */
  EBP = (pop32());
  /* 112d0729 ret 4 */
  ESPCHK(0x112d0680u, _esp0);
  ESP += 8; return;
}

/* FUN_10010730 @ 0x112d0730 (43 bytes, 11 insns) */
void f_112d0730(void) {
  FTRACE(0x112d0730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0730 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0731 mov ebp, esp */
  EBP = (ESP);
  /* 112d0733 mov eax, dword ptr [0x112ef7bc] */
  EAX = (r32((uint32_t)(0x112ef7bc)));
  /* 112d0738 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 112d073d mov dword ptr [0x112ef7bc], eax */
  w32((uint32_t)(0x112ef7bc), (EAX));
  /* 112d0742 call dword ptr [0x112f22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d0))), 0x112d0748u);
  /* 112d0748 mov dword ptr [0x112ef7c0], eax */
  w32((uint32_t)(0x112ef7c0), (EAX));
  /* 112d074d mov ecx, dword ptr [0x112ef7c0] */
  ECX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d0753 mov dword ptr [0x112ef7a4], ecx */
  w32((uint32_t)(0x112ef7a4), (ECX));
  /* 112d0759 pop ebp */
  EBP = (pop32());
  /* 112d075a ret  */
  ESPCHK(0x112d0730u, _esp0);
  ESP += 4; return;
}

/* FUN_10010760 @ 0x112d0760 (155 bytes, 57 insns) */
void f_112d0760(void) {
  FTRACE(0x112d0760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0760 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0761 mov ebp, esp */
  EBP = (ESP);
  /* 112d0763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0766 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d076a je 0x112d078b */
  if (C.zf) goto L_112d078b;
  /* 112d076c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d076f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d0772 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d0774 je 0x112d078b */
  if (C.zf) goto L_112d078b;
  /* 112d0776 push 0x112eb814 */
  push32((uint32_t)(0x112eb814u));
  /* 112d077b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d077e push edx */
  push32((uint32_t)(EDX));
  /* 112d077f call 0x112cfcc0 */
  push32(0x112d0784u); f_112cfcc0();
  /* 112d0784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0789 jne 0x112d07b3 */
  if (!C.zf) goto L_112d07b3;
L_112d078b:;
  /* 112d078b push 8 */
  push32((uint32_t)(0x8u));
  /* 112d078d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112d0790 push eax */
  push32((uint32_t)(EAX));
  /* 112d0791 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 112d0796 mov ecx, dword ptr [0x112ef7c0] */
  ECX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d079c push ecx */
  push32((uint32_t)(ECX));
  /* 112d079d call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d07a3u);
  /* 112d07a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d07a5 jne 0x112d07ab */
  if (!C.zf) goto L_112d07ab;
  /* 112d07a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d07a9 jmp 0x112d07f7 */
  goto L_112d07f7;
L_112d07ab:;
  /* 112d07ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 112d07ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112d07b1 jmp 0x112d07eb */
  goto L_112d07eb;
L_112d07b3:;
  /* 112d07b3 push 0x112eb810 */
  push32((uint32_t)(0x112eb810u));
  /* 112d07b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d07bb push eax */
  push32((uint32_t)(EAX));
  /* 112d07bc call 0x112cfcc0 */
  push32(0x112d07c1u); f_112cfcc0();
  /* 112d07c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d07c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d07c6 jne 0x112d07eb */
  if (!C.zf) goto L_112d07eb;
  /* 112d07c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 112d07ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 112d07cd push ecx */
  push32((uint32_t)(ECX));
  /* 112d07ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d07d0 mov edx, dword ptr [0x112ef7c0] */
  EDX = (r32((uint32_t)(0x112ef7c0)));
  /* 112d07d6 push edx */
  push32((uint32_t)(EDX));
  /* 112d07d7 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d07ddu);
  /* 112d07dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d07df jne 0x112d07e5 */
  if (!C.zf) goto L_112d07e5;
  /* 112d07e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d07e3 jmp 0x112d07f7 */
  goto L_112d07f7;
L_112d07e5:;
  /* 112d07e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112d07e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112d07eb:;
  /* 112d07eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d07ee push ecx */
  push32((uint32_t)(ECX));
  /* 112d07ef call 0x112d28e0 */
  push32(0x112d07f4u); f_112d28e0();
  /* 112d07f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d07f7:;
  /* 112d07f7 mov esp, ebp */
  ESP = (EBP);
  /* 112d07f9 pop ebp */
  EBP = (pop32());
  /* 112d07fa ret  */
  ESPCHK(0x112d0760u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x112d0800 (79 bytes, 26 insns) */
void f_112d0800(void) {
  FTRACE(0x112d0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0800 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0801 mov ebp, esp */
  EBP = (ESP);
  /* 112d0803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0806 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 112d080a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 112d080e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112d0815 jmp 0x112d0820 */
  goto L_112d0820;
L_112d0817:;
  /* 112d0817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d081a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d081d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112d0820:;
  /* 112d0820 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0824 jae 0x112d0846 */
  if (!C.cf) goto L_112d0846;
  /* 112d0826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0829 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d082f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d0832 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d0834 mov cx, word ptr [eax*2 + 0x112ee9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x112ee9c4)));
  /* 112d083c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d083e jne 0x112d0844 */
  if (!C.zf) goto L_112d0844;
  /* 112d0840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d0842 jmp 0x112d084b */
  goto L_112d084b;
L_112d0844:;
  /* 112d0844 jmp 0x112d0817 */
  goto L_112d0817;
L_112d0846:;
  /* 112d0846 mov eax, 1 */
  EAX = (0x1u);
L_112d084b:;
  /* 112d084b mov esp, ebp */
  ESP = (EBP);
  /* 112d084d pop ebp */
  EBP = (pop32());
  /* 112d084e ret  */
  ESPCHK(0x112d0800u, _esp0);
  ESP += 4; return;
}

/* FUN_10010850 @ 0x112d0850 (135 bytes, 48 insns) */
void f_112d0850(void) {
  FTRACE(0x112d0850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0850 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0851 mov ebp, esp */
  EBP = (ESP);
  /* 112d0853 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0856 push esi */
  push32((uint32_t)(ESI));
  /* 112d0857 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d085a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d085f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d0864 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d0869 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 112d086c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d0871 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d0874 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112d0876 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 112d0879 push ecx */
  push32((uint32_t)(ECX));
  /* 112d087a push 1 */
  push32((uint32_t)(0x1u));
  /* 112d087c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d087f push edx */
  push32((uint32_t)(EDX));
  /* 112d0880 call dword ptr [0x112ef7c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef7c4))), 0x112d0886u);
  /* 112d0886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0888 jne 0x112d088e */
  if (!C.zf) goto L_112d088e;
  /* 112d088a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d088c jmp 0x112d08d2 */
  goto L_112d08d2;
L_112d088e:;
  /* 112d088e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 112d0891 push eax */
  push32((uint32_t)(EAX));
  /* 112d0892 call 0x112d0ac0 */
  push32(0x112d0897u); f_112d0ac0();
  /* 112d0897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d089a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d089d je 0x112d08cd */
  if (C.zf) goto L_112d08cd;
  /* 112d089f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d08a3 je 0x112d08cd */
  if (C.zf) goto L_112d08cd;
  /* 112d08a5 mov ecx, dword ptr [0x112ef7b4] */
  ECX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d08ab push ecx */
  push32((uint32_t)(ECX));
  /* 112d08ac call 0x112d0b40 */
  push32(0x112d08b1u); f_112d0b40();
  /* 112d08b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d08b4 mov esi, eax */
  ESI = (EAX);
  /* 112d08b6 mov edx, dword ptr [0x112ef7b4] */
  EDX = (r32((uint32_t)(0x112ef7b4)));
  /* 112d08bc push edx */
  push32((uint32_t)(EDX));
  /* 112d08bd call 0x112c6e60 */
  push32(0x112d08c2u); f_112c6e60();
  /* 112d08c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d08c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d08c7 jne 0x112d08cd */
  if (!C.zf) goto L_112d08cd;
  /* 112d08c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d08cb jmp 0x112d08d2 */
  goto L_112d08d2;
L_112d08cd:;
  /* 112d08cd mov eax, 1 */
  EAX = (0x1u);
L_112d08d2:;
  /* 112d08d2 pop esi */
  ESI = (pop32());
  /* 112d08d3 mov esp, ebp */
  ESP = (EBP);
  /* 112d08d5 pop ebp */
  EBP = (pop32());
  /* 112d08d6 ret  */
  ESPCHK(0x112d0850u, _esp0);
  ESP += 4; return;
}

/* FUN_100108e0 @ 0x112d08e0 (77 bytes, 18 insns) */
void f_112d08e0(void) {
  FTRACE(0x112d08e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d08e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d08e1 mov ebp, esp */
  EBP = (ESP);
  /* 112d08e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d08e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 112d08f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 112d08f9 push eax */
  push32((uint32_t)(EAX));
  /* 112d08fa call dword ptr [0x112f22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22cc))), 0x112d0900u);
  /* 112d0900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0902 je 0x112d0919 */
  if (C.zf) goto L_112d0919;
  /* 112d0904 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d090b jne 0x112d0919 */
  if (!C.zf) goto L_112d0919;
  /* 112d090d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 112d0917 jmp 0x112d0923 */
  goto L_112d0923;
L_112d0919:;
  /* 112d0919 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_112d0923:;
  /* 112d0923 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 112d0929 mov esp, ebp */
  ESP = (EBP);
  /* 112d092b pop ebp */
  EBP = (pop32());
  /* 112d092c ret  */
  ESPCHK(0x112d08e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x112d0930 (388 bytes, 118 insns) */
void f_112d0930(void) {
  FTRACE(0x112d0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0930 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0931 mov ebp, esp */
  EBP = (ESP);
  /* 112d0933 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0936 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d093d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 112d0944 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112d094b:;
  /* 112d094b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d094e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0951 jg 0x112d0a98 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d0a98;
  /* 112d0957 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d095a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d095d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d095e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0960 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112d0962 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d0965 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0968 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d096b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d096e cmp edx, dword ptr [ecx + 0x112ee520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x112ee520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0974 jne 0x112d0a6e */
  if (!C.zf) goto L_112d0a6e;
  /* 112d097a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d097d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d0980 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0984 ja 0x112d09a7 */
  if ((!C.cf&&!C.zf)) goto L_112d09a7;
  /* 112d0986 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d098a je 0x112d0a19 */
  if (C.zf) goto L_112d0a19;
  /* 112d0990 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0994 je 0x112d09c4 */
  if (C.zf) goto L_112d09c4;
  /* 112d0996 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d099a je 0x112d09e6 */
  if (C.zf) goto L_112d09e6;
  /* 112d099c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d09a0 je 0x112d0a08 */
  if (C.zf) goto L_112d0a08;
  /* 112d09a2 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d09a7:;
  /* 112d09a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d09ae je 0x112d09d5 */
  if (C.zf) goto L_112d09d5;
  /* 112d09b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d09b7 je 0x112d09f7 */
  if (C.zf) goto L_112d09f7;
  /* 112d09b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d09c0 je 0x112d0a2a */
  if (C.zf) goto L_112d0a2a;
  /* 112d09c2 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d09c4:;
  /* 112d09c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d09c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d09ca add ecx, 0x112ee524 */
  { uint32_t _a=(ECX),_b=(0x112ee524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d09d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d09d3 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d09d5:;
  /* 112d09d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d09d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d09db mov eax, dword ptr [edx + 0x112ee52c] */
  EAX = (r32((uint32_t)(EDX + 0x112ee52c)));
  /* 112d09e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d09e4 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d09e6:;
  /* 112d09e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d09e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d09ec add ecx, 0x112ee530 */
  { uint32_t _a=(ECX),_b=(0x112ee530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d09f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d09f5 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d09f7:;
  /* 112d09f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d09fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d09fd mov eax, dword ptr [edx + 0x112ee534] */
  EAX = (r32((uint32_t)(EDX + 0x112ee534)));
  /* 112d0a03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d0a06 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d0a08:;
  /* 112d0a08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0a0b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d0a0e add ecx, 0x112ee538 */
  { uint32_t _a=(ECX),_b=(0x112ee538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0a14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d0a17 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d0a19:;
  /* 112d0a19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0a1c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d0a1f add edx, 0x112ee53c */
  { uint32_t _a=(EDX),_b=(0x112ee53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0a25 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d0a28 jmp 0x112d0a38 */
  goto L_112d0a38;
L_112d0a2a:;
  /* 112d0a2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0a2d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d0a30 add eax, 0x112ee544 */
  { uint32_t _a=(EAX),_b=(0x112ee544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0a35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112d0a38:;
  /* 112d0a38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0a3c je 0x112d0a44 */
  if (C.zf) goto L_112d0a44;
  /* 112d0a3e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0a42 jge 0x112d0a46 */
  if ((C.sf==C.of)) goto L_112d0a46;
L_112d0a44:;
  /* 112d0a44 jmp 0x112d0a98 */
  goto L_112d0a98;
L_112d0a46:;
  /* 112d0a46 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d0a49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0a4c push ecx */
  push32((uint32_t)(ECX));
  /* 112d0a4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d0a50 push edx */
  push32((uint32_t)(EDX));
  /* 112d0a51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d0a54 push eax */
  push32((uint32_t)(EAX));
  /* 112d0a55 call 0x112c7850 */
  push32(0x112d0a5au); f_112c7850();
  /* 112d0a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0a5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d0a60 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0a63 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 112d0a67 mov eax, 1 */
  EAX = (0x1u);
  /* 112d0a6c jmp 0x112d0aae */
  goto L_112d0aae;
L_112d0a6e:;
  /* 112d0a6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0a71 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d0a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0a77 cmp eax, dword ptr [edx + 0x112ee520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x112ee520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0a7d jae 0x112d0a8a */
  if (!C.cf) goto L_112d0a8a;
  /* 112d0a7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0a82 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0a85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d0a88 jmp 0x112d0a93 */
  goto L_112d0a93;
L_112d0a8a:;
  /* 112d0a8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0a8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0a90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112d0a93:;
  /* 112d0a93 jmp 0x112d094b */
  goto L_112d094b;
L_112d0a98:;
  /* 112d0a98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d0a9b push eax */
  push32((uint32_t)(EAX));
  /* 112d0a9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d0a9f push ecx */
  push32((uint32_t)(ECX));
  /* 112d0aa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d0aa3 push edx */
  push32((uint32_t)(EDX));
  /* 112d0aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0aa7 push eax */
  push32((uint32_t)(EAX));
  /* 112d0aa8 call dword ptr [0x112f22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d8))), 0x112d0aaeu);
L_112d0aae:;
  /* 112d0aae mov esp, ebp */
  ESP = (EBP);
  /* 112d0ab0 pop ebp */
  EBP = (pop32());
  /* 112d0ab1 ret 0x10 */
  ESPCHK(0x112d0930u, _esp0);
  ESP += 20; return;
}

/* FUN_10010ac0 @ 0x112d0ac0 (118 bytes, 42 insns) */
void f_112d0ac0(void) {
  FTRACE(0x112d0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 112d0ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0ac6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112d0acd:;
  /* 112d0acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0ad0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d0ad2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 112d0ad5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d0ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0adc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0adf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d0ae2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d0ae4 je 0x112d0b2f */
  if (C.zf) goto L_112d0b2f;
  /* 112d0ae6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d0aea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0aed jl 0x112d0b02 */
  if ((C.sf!=C.of)) goto L_112d0b02;
  /* 112d0aef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d0af3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0af6 jg 0x112d0b02 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d0b02;
  /* 112d0af8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112d0afb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112d0afd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 112d0b00 jmp 0x112d0b1c */
  goto L_112d0b1c;
L_112d0b02:;
  /* 112d0b02 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d0b06 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0b09 jl 0x112d0b1c */
  if ((C.sf!=C.of)) goto L_112d0b1c;
  /* 112d0b0b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d0b0f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0b12 jg 0x112d0b1c */
  if ((!C.zf&&C.sf==C.of)) goto L_112d0b1c;
  /* 112d0b14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112d0b17 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112d0b19 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_112d0b1c:;
  /* 112d0b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0b1f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112d0b22 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d0b26 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 112d0b2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d0b2d jmp 0x112d0acd */
  goto L_112d0acd;
L_112d0b2f:;
  /* 112d0b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0b32 mov esp, ebp */
  ESP = (EBP);
  /* 112d0b34 pop ebp */
  EBP = (pop32());
  /* 112d0b35 ret  */
  ESPCHK(0x112d0ac0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x112d0b40 (101 bytes, 36 insns) */
void f_112d0b40(void) {
  FTRACE(0x112d0b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0b40 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0b41 mov ebp, esp */
  EBP = (ESP);
  /* 112d0b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0b46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112d0b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0b50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d0b52 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 112d0b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0b58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0b5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_112d0b5e:;
  /* 112d0b5e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112d0b62 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0b65 jl 0x112d0b70 */
  if ((C.sf!=C.of)) goto L_112d0b70;
  /* 112d0b67 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112d0b6b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0b6e jle 0x112d0b82 */
  if ((C.zf||C.sf!=C.of)) goto L_112d0b82;
L_112d0b70:;
  /* 112d0b70 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112d0b74 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0b77 jl 0x112d0b9e */
  if ((C.sf!=C.of)) goto L_112d0b9e;
  /* 112d0b79 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 112d0b7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0b80 jg 0x112d0b9e */
  if ((!C.zf&&C.sf==C.of)) goto L_112d0b9e;
L_112d0b82:;
  /* 112d0b82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d0b85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0b88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d0b8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0b8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d0b90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 112d0b93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0b96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0b99 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112d0b9c jmp 0x112d0b5e */
  goto L_112d0b5e;
L_112d0b9e:;
  /* 112d0b9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d0ba1 mov esp, ebp */
  ESP = (EBP);
  /* 112d0ba3 pop ebp */
  EBP = (pop32());
  /* 112d0ba4 ret  */
  ESPCHK(0x112d0b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x112d0bb0 (122 bytes, 39 insns) */
void f_112d0bb0(void) {
  FTRACE(0x112d0bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0bb1 mov ebp, esp */
  EBP = (ESP);
  /* 112d0bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0bb7 cmp eax, dword ptr [0x112f105c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112f105c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0bbd jae 0x112d0be1 */
  if (!C.cf) goto L_112d0be1;
  /* 112d0bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0bc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112d0bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0bc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 112d0bcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d0bce mov eax, dword ptr [ecx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112d0bd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 112d0bda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112d0bdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d0bdf jne 0x112d0bfc */
  if (!C.zf) goto L_112d0bfc;
L_112d0be1:;
  /* 112d0be1 call 0x112cbf00 */
  push32(0x112d0be6u); f_112cbf00();
  /* 112d0be6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112d0bec call 0x112cbf10 */
  push32(0x112d0bf1u); f_112cbf10();
  /* 112d0bf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112d0bf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d0bfa jmp 0x112d0c26 */
  goto L_112d0c26;
L_112d0bfc:;
  /* 112d0bfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0bff push edx */
  push32((uint32_t)(EDX));
  /* 112d0c00 call 0x112cd720 */
  push32(0x112d0c05u); f_112cd720();
  /* 112d0c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0c0b push eax */
  push32((uint32_t)(EAX));
  /* 112d0c0c call 0x112d0c30 */
  push32(0x112d0c11u); f_112d0c30();
  /* 112d0c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d0c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0c1a push ecx */
  push32((uint32_t)(ECX));
  /* 112d0c1b call 0x112cd7b0 */
  push32(0x112d0c20u); f_112cd7b0();
  /* 112d0c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112d0c26:;
  /* 112d0c26 mov esp, ebp */
  ESP = (EBP);
  /* 112d0c28 pop ebp */
  EBP = (pop32());
  /* 112d0c29 ret  */
  ESPCHK(0x112d0bb0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x112d0c30 (170 bytes, 59 insns) */
void f_112d0c30(void) {
  FTRACE(0x112d0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0c31 mov ebp, esp */
  EBP = (ESP);
  /* 112d0c33 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0c34 push esi */
  push32((uint32_t)(ESI));
  /* 112d0c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0c38 push eax */
  push32((uint32_t)(EAX));
  /* 112d0c39 call 0x112cd5a0 */
  push32(0x112d0c3eu); f_112cd5a0();
  /* 112d0c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c41 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0c44 je 0x112d0c83 */
  if (C.zf) goto L_112d0c83;
  /* 112d0c46 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0c4a je 0x112d0c52 */
  if (C.zf) goto L_112d0c52;
  /* 112d0c4c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0c50 jne 0x112d0c6c */
  if (!C.zf) goto L_112d0c6c;
L_112d0c52:;
  /* 112d0c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d0c54 call 0x112cd5a0 */
  push32(0x112d0c59u); f_112cd5a0();
  /* 112d0c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c5c mov esi, eax */
  ESI = (EAX);
  /* 112d0c5e push 2 */
  push32((uint32_t)(0x2u));
  /* 112d0c60 call 0x112cd5a0 */
  push32(0x112d0c65u); f_112cd5a0();
  /* 112d0c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c68 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0c6a je 0x112d0c83 */
  if (C.zf) goto L_112d0c83;
L_112d0c6c:;
  /* 112d0c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0c6f push ecx */
  push32((uint32_t)(ECX));
  /* 112d0c70 call 0x112cd5a0 */
  push32(0x112d0c75u); f_112cd5a0();
  /* 112d0c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0c78 push eax */
  push32((uint32_t)(EAX));
  /* 112d0c79 call dword ptr [0x112f22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d4))), 0x112d0c7fu);
  /* 112d0c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0c81 je 0x112d0c8c */
  if (C.zf) goto L_112d0c8c;
L_112d0c83:;
  /* 112d0c83 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d0c8a jmp 0x112d0c95 */
  goto L_112d0c95;
L_112d0c8c:;
  /* 112d0c8c call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112d0c92u);
  /* 112d0c92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112d0c95:;
  /* 112d0c95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0c98 push edx */
  push32((uint32_t)(EDX));
  /* 112d0c99 call 0x112cd4c0 */
  push32(0x112d0c9eu); f_112cd4c0();
  /* 112d0c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0ca4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112d0ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0caa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112d0cad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d0cb0 mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112d0cb7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 112d0cbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0cc0 je 0x112d0cd3 */
  if (C.zf) goto L_112d0cd3;
  /* 112d0cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0cc5 push eax */
  push32((uint32_t)(EAX));
  /* 112d0cc6 call 0x112cbe60 */
  push32(0x112d0ccbu); f_112cbe60();
  /* 112d0ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0cce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d0cd1 jmp 0x112d0cd5 */
  goto L_112d0cd5;
L_112d0cd3:;
  /* 112d0cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d0cd5:;
  /* 112d0cd5 pop esi */
  ESI = (pop32());
  /* 112d0cd6 mov esp, ebp */
  ESP = (EBP);
  /* 112d0cd8 pop ebp */
  EBP = (pop32());
  /* 112d0cd9 ret  */
  ESPCHK(0x112d0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x112d0ce0 (146 bytes, 52 insns) */
void f_112d0ce0(void) {
  FTRACE(0x112d0ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0ce1 mov ebp, esp */
  EBP = (ESP);
  /* 112d0ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 112d0ce4 push esi */
  push32((uint32_t)(ESI));
  /* 112d0ce5 push edi */
  push32((uint32_t)(EDI));
L_112d0ce6:;
  /* 112d0ce6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0cea jne 0x112d0d0a */
  if (!C.zf) goto L_112d0d0a;
  /* 112d0cec push 0x112eb150 */
  push32((uint32_t)(0x112eb150u));
  /* 112d0cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d0cf3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 112d0cf5 push 0x112eb818 */
  push32((uint32_t)(0x112eb818u));
  /* 112d0cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 112d0cfc call 0x112c30f0 */
  push32(0x112d0d01u); f_112c30f0();
  /* 112d0d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0d04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0d07 jne 0x112d0d0a */
  if (!C.zf) goto L_112d0d0a;
  /* 112d0d09 int3  */
  x86_unimpl("int3 @ 0x112d0d09");
L_112d0d0a:;
  /* 112d0d0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d0d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d0d0e jne 0x112d0ce6 */
  if (!C.zf) goto L_112d0ce6;
  /* 112d0d10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d13 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112d0d16 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 112d0d1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d0d1e je 0x112d0d6d */
  if (C.zf) goto L_112d0d6d;
  /* 112d0d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d23 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112d0d26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 112d0d29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d0d2b je 0x112d0d6d */
  if (C.zf) goto L_112d0d6d;
  /* 112d0d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 112d0d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112d0d35 push eax */
  push32((uint32_t)(EAX));
  /* 112d0d36 call 0x112c4ac0 */
  push32(0x112d0d3bu); f_112c4ac0();
  /* 112d0d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d41 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112d0d44 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 112d0d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d4d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 112d0d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d53 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 112d0d59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d5c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 112d0d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d0d66 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_112d0d6d:;
  /* 112d0d6d pop edi */
  EDI = (pop32());
  /* 112d0d6e pop esi */
  ESI = (pop32());
  /* 112d0d6f pop ebx */
  EBX = (pop32());
  /* 112d0d70 pop ebp */
  EBP = (pop32());
  /* 112d0d71 ret  */
  ESPCHK(0x112d0ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d80 @ 0x112d0d80 (289 bytes, 97 insns) */
void f_112d0d80(void) {
  FTRACE(0x112d0d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0d80 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0d81 mov ebp, esp */
  EBP = (ESP);
  /* 112d0d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0d86 push esi */
  push32((uint32_t)(ESI));
  /* 112d0d87 mov eax, dword ptr [0x112eec98] */
  EAX = (r32((uint32_t)(0x112eec98)));
  /* 112d0d8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d0d8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112d0d96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d0d9d jmp 0x112d0da8 */
  goto L_112d0da8;
L_112d0d9f:;
  /* 112d0d9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0da2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0da5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112d0da8:;
  /* 112d0da8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0dac jae 0x112d0de1 */
  if (!C.cf) goto L_112d0de1;
  /* 112d0dae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0db1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0db4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112d0db7 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0db8 call 0x112c6e60 */
  push32(0x112d0dbdu); f_112c6e60();
  /* 112d0dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0dc0 mov esi, eax */
  ESI = (EAX);
  /* 112d0dc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0dc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0dc8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 112d0dcc push ecx */
  push32((uint32_t)(ECX));
  /* 112d0dcd call 0x112c6e60 */
  push32(0x112d0dd2u); f_112c6e60();
  /* 112d0dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0dd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0dd8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112d0ddc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d0ddf jmp 0x112d0d9f */
  goto L_112d0d9f;
L_112d0de1:;
  /* 112d0de1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d0de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0de7 push eax */
  push32((uint32_t)(EAX));
  /* 112d0de8 call 0x112c4010 */
  push32(0x112d0dedu); f_112c4010();
  /* 112d0ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0df0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d0df3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0df7 je 0x112d0e99 */
  if (C.zf) goto L_112d0e99;
  /* 112d0dfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0e00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d0e03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d0e0a jmp 0x112d0e15 */
  goto L_112d0e15;
L_112d0e0c:;
  /* 112d0e0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0e0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112d0e15:;
  /* 112d0e15 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0e19 jae 0x112d0e8a */
  if (!C.cf) goto L_112d0e8a;
  /* 112d0e1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e1e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 112d0e21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e27 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d0e2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0e2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0e30 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112d0e33 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0e34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e37 push edx */
  push32((uint32_t)(EDX));
  /* 112d0e38 call 0x112c6fe0 */
  push32(0x112d0e3du); f_112c6fe0();
  /* 112d0e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e40 push eax */
  push32((uint32_t)(EAX));
  /* 112d0e41 call 0x112c6e60 */
  push32(0x112d0e46u); f_112c6e60();
  /* 112d0e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e4e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d0e51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e54 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 112d0e57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d0e60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0e63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0e66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 112d0e6a push eax */
  push32((uint32_t)(EAX));
  /* 112d0e6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e6e push ecx */
  push32((uint32_t)(ECX));
  /* 112d0e6f call 0x112c6fe0 */
  push32(0x112d0e74u); f_112c6fe0();
  /* 112d0e74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e77 push eax */
  push32((uint32_t)(EAX));
  /* 112d0e78 call 0x112c6e60 */
  push32(0x112d0e7du); f_112c6e60();
  /* 112d0e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e85 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d0e88 jmp 0x112d0e0c */
  goto L_112d0e0c;
L_112d0e8a:;
  /* 112d0e8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e8d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112d0e90 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0e93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0e96 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112d0e99:;
  /* 112d0e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0e9c pop esi */
  ESI = (pop32());
  /* 112d0e9d mov esp, ebp */
  ESP = (EBP);
  /* 112d0e9f pop ebp */
  EBP = (pop32());
  /* 112d0ea0 ret  */
  ESPCHK(0x112d0d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x112d0eb0 (291 bytes, 97 insns) */
void f_112d0eb0(void) {
  FTRACE(0x112d0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 112d0eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0eb6 push esi */
  push32((uint32_t)(ESI));
  /* 112d0eb7 mov eax, dword ptr [0x112eec98] */
  EAX = (r32((uint32_t)(0x112eec98)));
  /* 112d0ebc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d0ebf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112d0ec6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d0ecd jmp 0x112d0ed8 */
  goto L_112d0ed8;
L_112d0ecf:;
  /* 112d0ecf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0ed2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0ed5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112d0ed8:;
  /* 112d0ed8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0edc jae 0x112d0f12 */
  if (!C.cf) goto L_112d0f12;
  /* 112d0ede mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0ee1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0ee4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 112d0ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0ee9 call 0x112c6e60 */
  push32(0x112d0eeeu); f_112c6e60();
  /* 112d0eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0ef1 mov esi, eax */
  ESI = (EAX);
  /* 112d0ef3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0ef6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0ef9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 112d0efd push ecx */
  push32((uint32_t)(ECX));
  /* 112d0efe call 0x112c6e60 */
  push32(0x112d0f03u); f_112c6e60();
  /* 112d0f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f06 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f09 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112d0f0d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d0f10 jmp 0x112d0ecf */
  goto L_112d0ecf;
L_112d0f12:;
  /* 112d0f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d0f15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f18 push eax */
  push32((uint32_t)(EAX));
  /* 112d0f19 call 0x112c4010 */
  push32(0x112d0f1eu); f_112c4010();
  /* 112d0f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d0f24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0f28 je 0x112d0fcb */
  if (C.zf) goto L_112d0fcb;
  /* 112d0f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0f31 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d0f34 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d0f3b jmp 0x112d0f46 */
  goto L_112d0f46;
L_112d0f3d:;
  /* 112d0f3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0f40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112d0f46:;
  /* 112d0f46 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d0f4a jae 0x112d0fbc */
  if (!C.cf) goto L_112d0fbc;
  /* 112d0f4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0f4f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 112d0f52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d0f5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0f61 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 112d0f65 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0f66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0f69 push edx */
  push32((uint32_t)(EDX));
  /* 112d0f6a call 0x112c6fe0 */
  push32(0x112d0f6fu); f_112c6fe0();
  /* 112d0f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f72 push eax */
  push32((uint32_t)(EAX));
  /* 112d0f73 call 0x112c6e60 */
  push32(0x112d0f78u); f_112c6e60();
  /* 112d0f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0f7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d0f83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0f86 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 112d0f89 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0f8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0f8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d0f92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d0f95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d0f98 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 112d0f9c push eax */
  push32((uint32_t)(EAX));
  /* 112d0f9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 112d0fa1 call 0x112c6fe0 */
  push32(0x112d0fa6u); f_112c6fe0();
  /* 112d0fa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0fa9 push eax */
  push32((uint32_t)(EAX));
  /* 112d0faa call 0x112c6e60 */
  push32(0x112d0fafu); f_112c6e60();
  /* 112d0faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0fb2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0fb5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0fb7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d0fba jmp 0x112d0f3d */
  goto L_112d0f3d;
L_112d0fbc:;
  /* 112d0fbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0fbf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112d0fc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d0fc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d0fc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112d0fcb:;
  /* 112d0fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d0fce pop esi */
  ESI = (pop32());
  /* 112d0fcf mov esp, ebp */
  ESP = (EBP);
  /* 112d0fd1 pop ebp */
  EBP = (pop32());
  /* 112d0fd2 ret  */
  ESPCHK(0x112d0eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x112d0fe0 (878 bytes, 273 insns) */
void f_112d0fe0(void) {
  FTRACE(0x112d0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 112d0fe3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d0fe6 push esi */
  push32((uint32_t)(ESI));
  /* 112d0fe7 mov eax, dword ptr [0x112eec98] */
  EAX = (r32((uint32_t)(0x112eec98)));
  /* 112d0fec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d0fef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112d0ff6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d0ffd jmp 0x112d1008 */
  goto L_112d1008;
L_112d0fff:;
  /* 112d0fff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1002 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1005 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112d1008:;
  /* 112d1008 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d100c jae 0x112d1041 */
  if (!C.cf) goto L_112d1041;
  /* 112d100e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1011 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1014 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 112d1017 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1018 call 0x112c6e60 */
  push32(0x112d101du); f_112c6e60();
  /* 112d101d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1020 mov esi, eax */
  ESI = (EAX);
  /* 112d1022 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1025 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1028 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 112d102c push ecx */
  push32((uint32_t)(ECX));
  /* 112d102d call 0x112c6e60 */
  push32(0x112d1032u); f_112c6e60();
  /* 112d1032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1035 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1038 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112d103c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d103f jmp 0x112d0fff */
  goto L_112d0fff;
L_112d1041:;
  /* 112d1041 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d1048 jmp 0x112d1053 */
  goto L_112d1053;
L_112d104a:;
  /* 112d104a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d104d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1050 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112d1053:;
  /* 112d1053 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1057 jae 0x112d108d */
  if (!C.cf) goto L_112d108d;
  /* 112d1059 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d105c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d105f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 112d1063 push eax */
  push32((uint32_t)(EAX));
  /* 112d1064 call 0x112c6e60 */
  push32(0x112d1069u); f_112c6e60();
  /* 112d1069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d106c mov esi, eax */
  ESI = (EAX);
  /* 112d106e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1071 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1074 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 112d1078 push eax */
  push32((uint32_t)(EAX));
  /* 112d1079 call 0x112c6e60 */
  push32(0x112d107eu); f_112c6e60();
  /* 112d107e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1081 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1084 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112d1088 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d108b jmp 0x112d104a */
  goto L_112d104a;
L_112d108d:;
  /* 112d108d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1090 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 112d1096 push eax */
  push32((uint32_t)(EAX));
  /* 112d1097 call 0x112c6e60 */
  push32(0x112d109cu); f_112c6e60();
  /* 112d109c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d109f mov esi, eax */
  ESI = (EAX);
  /* 112d10a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d10a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 112d10aa push edx */
  push32((uint32_t)(EDX));
  /* 112d10ab call 0x112c6e60 */
  push32(0x112d10b0u); f_112c6e60();
  /* 112d10b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d10b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d10b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 112d10ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d10bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d10c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 112d10c6 push edx */
  push32((uint32_t)(EDX));
  /* 112d10c7 call 0x112c6e60 */
  push32(0x112d10ccu); f_112c6e60();
  /* 112d10cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d10cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d10d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112d10d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d10d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d10dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 112d10e2 push ecx */
  push32((uint32_t)(ECX));
  /* 112d10e3 call 0x112c6e60 */
  push32(0x112d10e8u); f_112c6e60();
  /* 112d10e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d10eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d10ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 112d10f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d10f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d10f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 112d10fe push edx */
  push32((uint32_t)(EDX));
  /* 112d10ff call 0x112c6e60 */
  push32(0x112d1104u); f_112c6e60();
  /* 112d1104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d110a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112d110e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d1111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d1114 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1119 push eax */
  push32((uint32_t)(EAX));
  /* 112d111a call 0x112c4010 */
  push32(0x112d111fu); f_112c4010();
  /* 112d111f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1122 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d1125 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1129 je 0x112d1346 */
  if (C.zf) goto L_112d1346;
  /* 112d112f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1132 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112d1135 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1138 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d113e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d1141 push 0xac */
  push32((uint32_t)(0xacu));
  /* 112d1146 mov eax, dword ptr [0x112eec98] */
  EAX = (r32((uint32_t)(0x112eec98)));
  /* 112d114b push eax */
  push32((uint32_t)(EAX));
  /* 112d114c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d114f push ecx */
  push32((uint32_t)(ECX));
  /* 112d1150 call 0x112ca910 */
  push32(0x112d1155u); f_112ca910();
  /* 112d1155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1158 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d115f jmp 0x112d116a */
  goto L_112d116a;
L_112d1161:;
  /* 112d1161 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1164 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1167 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112d116a:;
  /* 112d116a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d116e jae 0x112d11de */
  if (!C.cf) goto L_112d11de;
  /* 112d1170 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1173 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d1176 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1179 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 112d117c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d117f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1182 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112d1185 push edx */
  push32((uint32_t)(EDX));
  /* 112d1186 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1189 push eax */
  push32((uint32_t)(EAX));
  /* 112d118a call 0x112c6fe0 */
  push32(0x112d118fu); f_112c6fe0();
  /* 112d118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1192 push eax */
  push32((uint32_t)(EAX));
  /* 112d1193 call 0x112c6e60 */
  push32(0x112d1198u); f_112c6e60();
  /* 112d1198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d119b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d119e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112d11a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d11a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d11a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d11ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d11ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 112d11b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d11b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d11b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 112d11bc push edx */
  push32((uint32_t)(EDX));
  /* 112d11bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d11c0 push eax */
  push32((uint32_t)(EAX));
  /* 112d11c1 call 0x112c6fe0 */
  push32(0x112d11c6u); f_112c6fe0();
  /* 112d11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d11c9 push eax */
  push32((uint32_t)(EAX));
  /* 112d11ca call 0x112c6e60 */
  push32(0x112d11cfu); f_112c6e60();
  /* 112d11cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d11d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d11d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112d11d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d11dc jmp 0x112d1161 */
  goto L_112d1161;
L_112d11de:;
  /* 112d11de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d11e5 jmp 0x112d11f0 */
  goto L_112d11f0;
L_112d11e7:;
  /* 112d11e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d11ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d11ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112d11f0:;
  /* 112d11f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d11f4 jae 0x112d1266 */
  if (!C.cf) goto L_112d1266;
  /* 112d11f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d11f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d11fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d11ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 112d1203 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1206 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1209 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 112d120d push eax */
  push32((uint32_t)(EAX));
  /* 112d120e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1211 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1212 call 0x112c6fe0 */
  push32(0x112d1217u); f_112c6fe0();
  /* 112d1217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d121a push eax */
  push32((uint32_t)(EAX));
  /* 112d121b call 0x112c6e60 */
  push32(0x112d1220u); f_112c6e60();
  /* 112d1220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1223 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1226 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 112d122a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d122d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1230 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d1233 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1236 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 112d123a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d123d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1240 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 112d1244 push eax */
  push32((uint32_t)(EAX));
  /* 112d1245 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1248 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1249 call 0x112c6fe0 */
  push32(0x112d124eu); f_112c6fe0();
  /* 112d124e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1251 push eax */
  push32((uint32_t)(EAX));
  /* 112d1252 call 0x112c6e60 */
  push32(0x112d1257u); f_112c6e60();
  /* 112d1257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d125a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d125d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 112d1261 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d1264 jmp 0x112d11e7 */
  goto L_112d11e7;
L_112d1266:;
  /* 112d1266 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d1269 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d126c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 112d1272 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1275 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 112d127b push ecx */
  push32((uint32_t)(ECX));
  /* 112d127c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d127f push edx */
  push32((uint32_t)(EDX));
  /* 112d1280 call 0x112c6fe0 */
  push32(0x112d1285u); f_112c6fe0();
  /* 112d1285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1288 push eax */
  push32((uint32_t)(EAX));
  /* 112d1289 call 0x112c6e60 */
  push32(0x112d128eu); f_112c6e60();
  /* 112d128e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1291 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1294 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112d1298 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d129b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d129e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d12a1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 112d12a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d12aa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 112d12b0 push eax */
  push32((uint32_t)(EAX));
  /* 112d12b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d12b4 push ecx */
  push32((uint32_t)(ECX));
  /* 112d12b5 call 0x112c6fe0 */
  push32(0x112d12bau); f_112c6fe0();
  /* 112d12ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d12bd push eax */
  push32((uint32_t)(EAX));
  /* 112d12be call 0x112c6e60 */
  push32(0x112d12c3u); f_112c6e60();
  /* 112d12c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d12c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d12c9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 112d12cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d12d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d12d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d12d6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 112d12dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d12df mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 112d12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 112d12e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d12e9 push edx */
  push32((uint32_t)(EDX));
  /* 112d12ea call 0x112c6fe0 */
  push32(0x112d12efu); f_112c6fe0();
  /* 112d12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d12f2 push eax */
  push32((uint32_t)(EAX));
  /* 112d12f3 call 0x112c6e60 */
  push32(0x112d12f8u); f_112c6e60();
  /* 112d12f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d12fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d12fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112d1302 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d1305 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d1308 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d130b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 112d1311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1314 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 112d131a push eax */
  push32((uint32_t)(EAX));
  /* 112d131b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d131e push ecx */
  push32((uint32_t)(ECX));
  /* 112d131f call 0x112c6fe0 */
  push32(0x112d1324u); f_112c6fe0();
  /* 112d1324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1327 push eax */
  push32((uint32_t)(EAX));
  /* 112d1328 call 0x112c6e60 */
  push32(0x112d132du); f_112c6e60();
  /* 112d132d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1330 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1333 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 112d1337 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d133a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d133d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1340 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_112d1346:;
  /* 112d1346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1349 pop esi */
  ESI = (pop32());
  /* 112d134a mov esp, ebp */
  ESP = (EBP);
  /* 112d134c pop ebp */
  EBP = (pop32());
  /* 112d134d ret  */
  ESPCHK(0x112d0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x112d1350 (31 bytes, 15 insns) */
void f_112d1350(void) {
  FTRACE(0x112d1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1350 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1351 mov ebp, esp */
  EBP = (ESP);
  /* 112d1353 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d1355 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1358 push eax */
  push32((uint32_t)(EAX));
  /* 112d1359 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d135c push ecx */
  push32((uint32_t)(ECX));
  /* 112d135d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1360 push edx */
  push32((uint32_t)(EDX));
  /* 112d1361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1364 push eax */
  push32((uint32_t)(EAX));
  /* 112d1365 call 0x112d1370 */
  push32(0x112d136au); f_112d1370();
  /* 112d136a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d136d pop ebp */
  EBP = (pop32());
  /* 112d136e ret  */
  ESPCHK(0x112d1350u, _esp0);
  ESP += 4; return;
}

