#include "recomp.h"

/* FUN_10008210 @ 0x10ac8210 (116 bytes, 34 insns) */
void f_10ac8210(void) {
  FTRACE(0x10ac8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac8210 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac8211 mov ebp, esp */
  EBP = (ESP);
  /* 10ac8213 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8214 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10ac821b push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac821d call 0x10ac7a30 */
  push32(0x10ac8222u); f_10ac7a30();
  /* 10ac8222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8225 call 0x10ac9920 */
  push32(0x10ac822au); f_10ac9920();
  /* 10ac822a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac822c jge 0x10ac8235 */
  if ((C.sf==C.of)) goto L_10ac8235;
  /* 10ac822e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10ac8235:;
  /* 10ac8235 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ac8237 call 0x10ac7ad0 */
  push32(0x10ac823cu); f_10ac7ad0();
  /* 10ac823c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac823f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8241 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8243 mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac8248 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8249 call dword ptr [0x10af2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2358))), 0x10ac824fu);
  /* 10ac824f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac8251 jne 0x10ac827d */
  if (!C.zf) goto L_10ac827d;
  /* 10ac8253 call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10ac8259u);
  /* 10ac8259 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac825c jne 0x10ac8276 */
  if (!C.zf) goto L_10ac8276;
  /* 10ac825e call 0x10acbf10 */
  push32(0x10ac8263u); f_10acbf10();
  /* 10ac8263 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10ac8269 call 0x10acbf00 */
  push32(0x10ac826eu); f_10acbf00();
  /* 10ac826e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10ac8274 jmp 0x10ac827d */
  goto L_10ac827d;
L_10ac8276:;
  /* 10ac8276 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10ac827d:;
  /* 10ac827d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8280 mov esp, ebp */
  ESP = (EBP);
  /* 10ac8282 pop ebp */
  EBP = (pop32());
  /* 10ac8283 ret  */
  ESPCHK(0x10ac8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x10ac8290 (10 bytes, 5 insns) */
void f_10ac8290(void) {
  FTRACE(0x10ac8290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac8290 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac8291 mov ebp, esp */
  EBP = (ESP);
  /* 10ac8293 call 0x10ac8210 */
  push32(0x10ac8298u); f_10ac8210();
  /* 10ac8298 pop ebp */
  EBP = (pop32());
  /* 10ac8299 ret  */
  ESPCHK(0x10ac8290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x10ac82a0 (10 bytes, 5 insns) */
void f_10ac82a0(void) {
  FTRACE(0x10ac82a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac82a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac82a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac82a3 mov eax, dword ptr [0x10aedc94] */
  EAX = (r32((uint32_t)(0x10aedc94)));
  /* 10ac82a8 pop ebp */
  EBP = (pop32());
  /* 10ac82a9 ret  */
  ESPCHK(0x10ac82a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x10ac82b0 (31 bytes, 11 insns) */
void f_10ac82b0(void) {
  FTRACE(0x10ac82b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac82b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac82b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac82b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac82ba jbe 0x10ac82c0 */
  if ((C.cf||C.zf)) goto L_10ac82c0;
  /* 10ac82bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac82be jmp 0x10ac82cd */
  goto L_10ac82cd;
L_10ac82c0:;
  /* 10ac82c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac82c3 mov dword ptr [0x10aedc94], eax */
  w32((uint32_t)(0x10aedc94), (EAX));
  /* 10ac82c8 mov eax, 1 */
  EAX = (0x1u);
L_10ac82cd:;
  /* 10ac82cd pop ebp */
  EBP = (pop32());
  /* 10ac82ce ret  */
  ESPCHK(0x10ac82b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d0 @ 0x10ac82d0 (89 bytes, 20 insns) */
void f_10ac82d0(void) {
  FTRACE(0x10ac82d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac82d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac82d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac82d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10ac82d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac82da mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac82df push eax */
  push32((uint32_t)(EAX));
  /* 10ac82e0 call dword ptr [0x10af22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22e4))), 0x10ac82e6u);
  /* 10ac82e6 mov dword ptr [0x10af0f88], eax */
  w32((uint32_t)(0x10af0f88), (EAX));
  /* 10ac82eb cmp dword ptr [0x10af0f88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0f88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac82f2 jne 0x10ac82f8 */
  if (!C.zf) goto L_10ac82f8;
  /* 10ac82f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac82f6 jmp 0x10ac8327 */
  goto L_10ac8327;
L_10ac82f8:;
  /* 10ac82f8 mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac82fe mov dword ptr [0x10af0f7c], ecx */
  w32((uint32_t)(0x10af0f7c), (ECX));
  /* 10ac8304 mov dword ptr [0x10af0f80], 0 */
  w32((uint32_t)(0x10af0f80), (0x0u));
  /* 10ac830e mov dword ptr [0x10af0f84], 0 */
  w32((uint32_t)(0x10af0f84), (0x0u));
  /* 10ac8318 mov dword ptr [0x10af0f68], 0x10 */
  w32((uint32_t)(0x10af0f68), (0x10u));
  /* 10ac8322 mov eax, 1 */
  EAX = (0x1u);
L_10ac8327:;
  /* 10ac8327 pop ebp */
  EBP = (pop32());
  /* 10ac8328 ret  */
  ESPCHK(0x10ac82d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x10ac8330 (85 bytes, 29 insns) */
void f_10ac8330(void) {
  FTRACE(0x10ac8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac8330 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac8331 mov ebp, esp */
  EBP = (ESP);
  /* 10ac8333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8336 mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac833b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac833e mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac8344 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8346 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac8349 mov edx, dword ptr [0x10af0f88] */
  EDX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac834f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ac8352:;
  /* 10ac8352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8355 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8358 jae 0x10ac837f */
  if (!C.cf) goto L_10ac837f;
  /* 10ac835a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac835d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8360 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8363 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac8366 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac836d jae 0x10ac8374 */
  if (!C.cf) goto L_10ac8374;
  /* 10ac836f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8372 jmp 0x10ac8381 */
  goto L_10ac8381;
L_10ac8374:;
  /* 10ac8374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8377 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac837a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac837d jmp 0x10ac8352 */
  goto L_10ac8352;
L_10ac837f:;
  /* 10ac837f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac8381:;
  /* 10ac8381 mov esp, ebp */
  ESP = (EBP);
  /* 10ac8383 pop ebp */
  EBP = (pop32());
  /* 10ac8384 ret  */
  ESPCHK(0x10ac8330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008390 @ 0x10ac8390 (95 bytes, 33 insns) */
void f_10ac8390(void) {
  FTRACE(0x10ac8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac8390 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac8391 mov ebp, esp */
  EBP = (ESP);
  /* 10ac8393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8399 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac839c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac839f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac83a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac83a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10ac83a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac83ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac83b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac83b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac83b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac83b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac83bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac83bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac83bf jne 0x10ac83e1 */
  if (!C.zf) goto L_10ac83e1;
  /* 10ac83c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac83c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac83c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac83c9 jne 0x10ac83e1 */
  if (!C.zf) goto L_10ac83e1;
  /* 10ac83cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac83ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac83d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac83d6 je 0x10ac83e1 */
  if (C.zf) goto L_10ac83e1;
  /* 10ac83d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10ac83df jmp 0x10ac83e8 */
  goto L_10ac83e8;
L_10ac83e1:;
  /* 10ac83e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10ac83e8:;
  /* 10ac83e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac83eb mov esp, ebp */
  ESP = (EBP);
  /* 10ac83ed pop ebp */
  EBP = (pop32());
  /* 10ac83ee ret  */
  ESPCHK(0x10ac8390u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x10ac83f0 (1485 bytes, 453 insns) */
void f_10ac83f0(void) {
  FTRACE(0x10ac83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac83f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac83f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac83f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac83f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac83fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10ac83ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8402 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac8405 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8408 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac840b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac840e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10ac8411 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac8414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8417 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac841d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8420 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10ac8427 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac842a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac842d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8430 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac8433 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8436 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac8438 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac843b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ac843e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8441 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8444 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10ac8447 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac844a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac844c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ac844f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8452 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10ac8455 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ac8458 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac845b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac845e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8460 jne 0x10ac8588 */
  if (!C.zf) goto L_10ac8588;
  /* 10ac8466 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8469 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ac846c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac846f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ac8472 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8476 jbe 0x10ac847f */
  if ((C.cf||C.zf)) goto L_10ac847f;
  /* 10ac8478 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10ac847f:;
  /* 10ac847f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8482 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8485 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8488 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac848b jne 0x10ac8561 */
  if (!C.zf) goto L_10ac8561;
  /* 10ac8491 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8495 jae 0x10ac84f6 */
  if (!C.cf) goto L_10ac84f6;
  /* 10ac8497 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac849c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac849f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac84a1 not eax */
  EAX = (~(EAX));
  /* 10ac84a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac84a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac84a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ac84ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac84af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac84b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac84b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ac84b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac84bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac84bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ac84c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac84c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac84c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac84cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ac84ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac84d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac84d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac84d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac84da jne 0x10ac84f4 */
  if (!C.zf) goto L_10ac84f4;
  /* 10ac84dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac84e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac84e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac84e6 not eax */
  EAX = (~(EAX));
  /* 10ac84e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac84eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac84ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac84ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac84f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ac84f4:;
  /* 10ac84f4 jmp 0x10ac8561 */
  goto L_10ac8561;
L_10ac84f6:;
  /* 10ac84f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac84f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac84fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8501 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8503 not edx */
  EDX = (~(EDX));
  /* 10ac8505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8508 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac850b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ac8512 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8514 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8517 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac851a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10ac8521 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8524 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8527 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac852a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac852d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8530 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8533 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ac8536 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8539 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac853c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac8540 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8542 jne 0x10ac8561 */
  if (!C.zf) goto L_10ac8561;
  /* 10ac8544 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac8547 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac854a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac854f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8551 not edx */
  EDX = (~(EDX));
  /* 10ac8553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8556 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8559 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac855b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac855e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ac8561:;
  /* 10ac8561 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8564 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac8567 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac856a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac856d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ac8570 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8573 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac8576 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8579 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac857c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ac857f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8582 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8585 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10ac8588:;
  /* 10ac8588 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac858b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ac858e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8591 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ac8594 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8598 jbe 0x10ac85a1 */
  if ((C.cf||C.zf)) goto L_10ac85a1;
  /* 10ac859a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10ac85a1:;
  /* 10ac85a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac85a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac85a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac85a9 jne 0x10ac8705 */
  if (!C.zf) goto L_10ac8705;
  /* 10ac85af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac85b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac85b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10ac85b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac85bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ac85be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac85c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ac85c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac85c8 jbe 0x10ac85d1 */
  if ((C.cf||C.zf)) goto L_10ac85d1;
  /* 10ac85ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10ac85d1:;
  /* 10ac85d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac85d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac85d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ac85da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac85dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ac85e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac85e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ac85e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac85ea jbe 0x10ac85f3 */
  if ((C.cf||C.zf)) goto L_10ac85f3;
  /* 10ac85ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10ac85f3:;
  /* 10ac85f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac85f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac85f9 je 0x10ac86ff */
  if (C.zf) goto L_10ac86ff;
  /* 10ac85ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8602 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8605 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac8608 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac860b jne 0x10ac86e1 */
  if (!C.zf) goto L_10ac86e1;
  /* 10ac8611 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8615 jae 0x10ac8676 */
  if (!C.cf) goto L_10ac8676;
  /* 10ac8617 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac861c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac861f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8621 not edx */
  EDX = (~(EDX));
  /* 10ac8623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8626 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8629 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ac862d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac862f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8632 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8635 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ac8639 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac863c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac863f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac8642 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac8645 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8648 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac864b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ac864e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8651 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8654 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac8658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac865a jne 0x10ac8674 */
  if (!C.zf) goto L_10ac8674;
  /* 10ac865c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8661 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac8664 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8666 not edx */
  EDX = (~(EDX));
  /* 10ac8668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac866b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac866d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac866f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8672 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac8674:;
  /* 10ac8674 jmp 0x10ac86e1 */
  goto L_10ac86e1;
L_10ac8676:;
  /* 10ac8676 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac8679 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac867c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac8681 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac8683 not eax */
  EAX = (~(EAX));
  /* 10ac8685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8688 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac868b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ac8692 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac8694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8697 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac869a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10ac86a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac86a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac86a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ac86aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac86ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac86b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac86b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ac86b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac86b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac86bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac86c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac86c2 jne 0x10ac86e1 */
  if (!C.zf) goto L_10ac86e1;
  /* 10ac86c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac86c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac86ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac86cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac86d1 not eax */
  EAX = (~(EAX));
  /* 10ac86d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac86d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac86d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac86db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac86de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ac86e1:;
  /* 10ac86e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac86e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac86e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac86ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac86ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ac86f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac86f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac86f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac86f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac86fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10ac86ff:;
  /* 10ac86ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8702 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10ac8705:;
  /* 10ac8705 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8708 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac870b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac870d jne 0x10ac871b */
  if (!C.zf) goto L_10ac871b;
  /* 10ac870f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac8712 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8715 je 0x10ac882b */
  if (C.zf) goto L_10ac882b;
L_10ac871b:;
  /* 10ac871b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac871e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8721 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10ac8724 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ac8727 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac872a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac872d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac8730 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ac8733 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8736 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8739 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ac873c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac873f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8742 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10ac8745 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8748 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac874b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac874e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac8751 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8754 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8757 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac875a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac875d jne 0x10ac882b */
  if (!C.zf) goto L_10ac882b;
  /* 10ac8763 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8767 jae 0x10ac87c4 */
  if (!C.cf) goto L_10ac87c4;
  /* 10ac8769 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac876c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac876f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac8773 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8776 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8779 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac877c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac877f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8782 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8785 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ac8788 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac878a jne 0x10ac87a2 */
  if (!C.zf) goto L_10ac87a2;
  /* 10ac878c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8791 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac8794 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8799 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac879b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac879d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac87a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac87a2:;
  /* 10ac87a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac87a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac87aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac87ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac87af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac87b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ac87b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac87b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac87bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac87be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ac87c2 jmp 0x10ac882b */
  goto L_10ac882b;
L_10ac87c4:;
  /* 10ac87c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac87c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac87ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac87ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac87d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac87d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac87d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac87da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac87dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac87e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ac87e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac87e5 jne 0x10ac8802 */
  if (!C.zf) goto L_10ac8802;
  /* 10ac87e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac87ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac87ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac87f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac87f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac87f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac87fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac87fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac87ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ac8802:;
  /* 10ac8802 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac8805 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8808 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac880d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac880f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8812 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8815 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ac881c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac881e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8821 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ac8824 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10ac882b:;
  /* 10ac882b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac882e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8831 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ac8833 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8836 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8839 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac883c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10ac883f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8842 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac8844 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac884a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ac884c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac884f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8852 jne 0x10ac89b9 */
  if (!C.zf) goto L_10ac89b9;
  /* 10ac8858 cmp dword ptr [0x10af0f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac885f je 0x10ac89a8 */
  if (C.zf) goto L_10ac89a8;
  /* 10ac8865 mov eax, dword ptr [0x10af0f78] */
  EAX = (r32((uint32_t)(0x10af0f78)));
  /* 10ac886a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10ac886d mov ecx, dword ptr [0x10af0f80] */
  ECX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac8873 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ac8876 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8878 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ac887b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ac8880 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ac8885 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8888 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8889 call dword ptr [0x10af237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af237c))), 0x10ac888fu);
  /* 10ac888f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8894 mov ecx, dword ptr [0x10af0f78] */
  ECX = (r32((uint32_t)(0x10af0f78)));
  /* 10ac889a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac889c mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac88a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac88a6 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ac88af mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac88b7 mov edx, dword ptr [0x10af0f78] */
  EDX = (r32((uint32_t)(0x10af0f78)));
  /* 10ac88bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10ac88c8 mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac88d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10ac88d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac88d6 mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac88de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10ac88e1 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac88ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10ac88ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac88f0 jne 0x10ac8906 */
  if (!C.zf) goto L_10ac8906;
  /* 10ac88f2 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac88f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac88fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10ac88fd mov ecx, dword ptr [0x10af0f80] */
  ECX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac8903 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ac8906:;
  /* 10ac8906 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac890c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8910 jne 0x10ac89a8 */
  if (!C.zf) goto L_10ac89a8;
  /* 10ac8916 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ac891b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac891d mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac8922 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ac8925 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8926 call dword ptr [0x10af237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af237c))), 0x10ac892cu);
  /* 10ac892c mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac8932 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac8935 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8938 mov ecx, dword ptr [0x10af0f8c] */
  ECX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac893e push ecx */
  push32((uint32_t)(ECX));
  /* 10ac893f call dword ptr [0x10af2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2378))), 0x10ac8945u);
  /* 10ac8945 mov edx, dword ptr [0x10af0f84] */
  EDX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac894b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac894e mov eax, dword ptr [0x10af0f88] */
  EAX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac8953 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8955 mov ecx, dword ptr [0x10af0f80] */
  ECX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac895b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac895e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8960 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8961 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac8967 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac896a push edx */
  push32((uint32_t)(EDX));
  /* 10ac896b mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac8970 push eax */
  push32((uint32_t)(EAX));
  /* 10ac8971 call 0x10acbf20 */
  push32(0x10ac8976u); f_10acbf20();
  /* 10ac8976 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8979 mov ecx, dword ptr [0x10af0f84] */
  ECX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac897f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8982 mov dword ptr [0x10af0f84], ecx */
  w32((uint32_t)(0x10af0f84), (ECX));
  /* 10ac8988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac898b cmp edx, dword ptr [0x10af0f80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10af0f80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8991 jbe 0x10ac899c */
  if ((C.cf||C.zf)) goto L_10ac899c;
  /* 10ac8993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac8996 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8999 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ac899c:;
  /* 10ac899c mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac89a2 mov dword ptr [0x10af0f7c], ecx */
  w32((uint32_t)(0x10af0f7c), (ECX));
L_10ac89a8:;
  /* 10ac89a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac89ab mov dword ptr [0x10af0f80], edx */
  w32((uint32_t)(0x10af0f80), (EDX));
  /* 10ac89b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac89b4 mov dword ptr [0x10af0f78], eax */
  w32((uint32_t)(0x10af0f78), (EAX));
L_10ac89b9:;
  /* 10ac89b9 mov esp, ebp */
  ESP = (EBP);
  /* 10ac89bb pop ebp */
  EBP = (pop32());
  /* 10ac89bc ret  */
  ESPCHK(0x10ac83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x10ac89c0 (1334 bytes, 427 insns) */
void f_10ac89c0(void) {
  FTRACE(0x10ac89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac89c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac89c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac89c6 push esi */
  push32((uint32_t)(ESI));
  /* 10ac89c7 mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac89cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac89cf mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac89d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac89d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ac89da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac89dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac89e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac89e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ac89e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac89e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ac89ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac89ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ac89f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac89f6 jge 0x10ac8a0c */
  if ((C.sf==C.of)) goto L_10ac8a0c;
  /* 10ac89f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ac89fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac89fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8a00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ac8a03 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10ac8a0a jmp 0x10ac8a21 */
  goto L_10ac8a21;
L_10ac8a0c:;
  /* 10ac8a0c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ac8a13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8a16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8a19 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8a1c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac8a1e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10ac8a21:;
  /* 10ac8a21 mov ecx, dword ptr [0x10af0f7c] */
  ECX = (r32((uint32_t)(0x10af0f7c)));
  /* 10ac8a27 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10ac8a2a:;
  /* 10ac8a2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a2d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8a30 jae 0x10ac8a56 */
  if (!C.cf) goto L_10ac8a56;
  /* 10ac8a32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac8a38 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10ac8a3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a3d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8a40 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8a43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac8a45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8a47 je 0x10ac8a4b */
  if (C.zf) goto L_10ac8a4b;
  /* 10ac8a49 jmp 0x10ac8a56 */
  goto L_10ac8a56;
L_10ac8a4b:;
  /* 10ac8a4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8a51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ac8a54 jmp 0x10ac8a2a */
  goto L_10ac8a2a;
L_10ac8a56:;
  /* 10ac8a56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8a5c jne 0x10ac8b3d */
  if (!C.zf) goto L_10ac8b3d;
  /* 10ac8a62 mov eax, dword ptr [0x10af0f88] */
  EAX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac8a67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10ac8a6a:;
  /* 10ac8a6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a6d cmp ecx, dword ptr [0x10af0f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8a73 jae 0x10ac8a99 */
  if (!C.cf) goto L_10ac8a99;
  /* 10ac8a75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac8a7b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8a7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8a83 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8a86 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac8a8a je 0x10ac8a8e */
  if (C.zf) goto L_10ac8a8e;
  /* 10ac8a8c jmp 0x10ac8a99 */
  goto L_10ac8a99;
L_10ac8a8e:;
  /* 10ac8a8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a91 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8a94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac8a97 jmp 0x10ac8a6a */
  goto L_10ac8a6a;
L_10ac8a99:;
  /* 10ac8a99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8a9c cmp ecx, dword ptr [0x10af0f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8aa2 jne 0x10ac8b3d */
  if (!C.zf) goto L_10ac8b3d;
L_10ac8aa8:;
  /* 10ac8aa8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8aab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8aae jae 0x10ac8ac6 */
  if (!C.cf) goto L_10ac8ac6;
  /* 10ac8ab0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ab3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8ab7 je 0x10ac8abb */
  if (C.zf) goto L_10ac8abb;
  /* 10ac8ab9 jmp 0x10ac8ac6 */
  goto L_10ac8ac6;
L_10ac8abb:;
  /* 10ac8abb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8abe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8ac1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ac8ac4 jmp 0x10ac8aa8 */
  goto L_10ac8aa8;
L_10ac8ac6:;
  /* 10ac8ac6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ac9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8acc jne 0x10ac8b17 */
  if (!C.zf) goto L_10ac8b17;
  /* 10ac8ace mov eax, dword ptr [0x10af0f88] */
  EAX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac8ad3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10ac8ad6:;
  /* 10ac8ad6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ad9 cmp ecx, dword ptr [0x10af0f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8adf jae 0x10ac8af7 */
  if (!C.cf) goto L_10ac8af7;
  /* 10ac8ae1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ae4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8ae8 je 0x10ac8aec */
  if (C.zf) goto L_10ac8aec;
  /* 10ac8aea jmp 0x10ac8af7 */
  goto L_10ac8af7;
L_10ac8aec:;
  /* 10ac8aec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8aef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8af2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac8af5 jmp 0x10ac8ad6 */
  goto L_10ac8ad6;
L_10ac8af7:;
  /* 10ac8af7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8afa cmp ecx, dword ptr [0x10af0f7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0f7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8b00 jne 0x10ac8b17 */
  if (!C.zf) goto L_10ac8b17;
  /* 10ac8b02 call 0x10ac8f00 */
  push32(0x10ac8b07u); f_10ac8f00();
  /* 10ac8b07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac8b0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8b0e jne 0x10ac8b17 */
  if (!C.zf) goto L_10ac8b17;
  /* 10ac8b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8b12 jmp 0x10ac8ef1 */
  goto L_10ac8ef1;
L_10ac8b17:;
  /* 10ac8b17 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8b1a push edx */
  push32((uint32_t)(EDX));
  /* 10ac8b1b call 0x10ac9010 */
  push32(0x10ac8b20u); f_10ac9010();
  /* 10ac8b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8b23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8b26 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ac8b29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ac8b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8b2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac8b31 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8b34 jne 0x10ac8b3d */
  if (!C.zf) goto L_10ac8b3d;
  /* 10ac8b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8b38 jmp 0x10ac8ef1 */
  goto L_10ac8ef1;
L_10ac8b3d:;
  /* 10ac8b3d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8b40 mov dword ptr [0x10af0f7c], edx */
  w32((uint32_t)(0x10af0f7c), (EDX));
  /* 10ac8b46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8b49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac8b4c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10ac8b4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8b52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac8b54 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ac8b57 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8b5b je 0x10ac8b80 */
  if (C.zf) goto L_10ac8b80;
  /* 10ac8b5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8b60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8b63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac8b66 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8b6a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8b6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8b70 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8b73 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10ac8b7a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac8b7e jne 0x10ac8bb5 */
  if (!C.zf) goto L_10ac8bb5;
L_10ac8b80:;
  /* 10ac8b80 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10ac8b87:;
  /* 10ac8b87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8b8a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8b8d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac8b90 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8b94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8b97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8b9a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8b9d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10ac8ba4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac8ba8 jne 0x10ac8bb5 */
  if (!C.zf) goto L_10ac8bb5;
  /* 10ac8baa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8bad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8bb0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ac8bb3 jmp 0x10ac8b87 */
  goto L_10ac8b87;
L_10ac8bb5:;
  /* 10ac8bb5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8bb8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac8bbe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8bc1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ac8bc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac8bcb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ac8bd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8bd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8bd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac8bdb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8bdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ac8be2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8be6 jne 0x10ac8c02 */
  if (!C.zf) goto L_10ac8c02;
  /* 10ac8be8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10ac8bef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8bf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8bf5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ac8bf8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8bff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10ac8c02:;
  /* 10ac8c02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8c06 jl 0x10ac8c1b */
  if ((C.sf!=C.of)) goto L_10ac8c1b;
  /* 10ac8c08 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac8c0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ac8c0d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ac8c10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8c13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8c16 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ac8c19 jmp 0x10ac8c02 */
  goto L_10ac8c02;
L_10ac8c1b:;
  /* 10ac8c1b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8c21 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10ac8c25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ac8c28 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8c2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac8c2d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8c30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac8c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8c36 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ac8c39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8c3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ac8c3f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8c43 jle 0x10ac8c4c */
  if ((C.zf||C.sf!=C.of)) goto L_10ac8c4c;
  /* 10ac8c45 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10ac8c4c:;
  /* 10ac8c4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8c4f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8c52 je 0x10ac8e70 */
  if (C.zf) goto L_10ac8e70;
  /* 10ac8c58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8c5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8c5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8c61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8c64 jne 0x10ac8d3a */
  if (!C.zf) goto L_10ac8d3a;
  /* 10ac8c6a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8c6e jge 0x10ac8ccf */
  if ((C.sf==C.of)) goto L_10ac8ccf;
  /* 10ac8c70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac8c75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8c78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac8c7a not eax */
  EAX = (~(EAX));
  /* 10ac8c7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8c7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8c82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ac8c86 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac8c88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8c8b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8c8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ac8c92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8c95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8c98 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ac8c9b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac8c9e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8ca1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8ca4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ac8ca7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8caa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8cad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac8cb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac8cb3 jne 0x10ac8ccd */
  if (!C.zf) goto L_10ac8ccd;
  /* 10ac8cb5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac8cba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8cbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac8cbf not eax */
  EAX = (~(EAX));
  /* 10ac8cc1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8cc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac8cc6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8cc8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ccb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ac8ccd:;
  /* 10ac8ccd jmp 0x10ac8d3a */
  goto L_10ac8d3a;
L_10ac8ccf:;
  /* 10ac8ccf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8cd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8cd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8cda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8cdc not edx */
  EDX = (~(EDX));
  /* 10ac8cde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8ce1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8ce4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ac8ceb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8ced mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8cf0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8cf3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10ac8cfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8cfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8d00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac8d03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac8d06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8d09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8d0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ac8d0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8d12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8d15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac8d19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8d1b jne 0x10ac8d3a */
  if (!C.zf) goto L_10ac8d3a;
  /* 10ac8d1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac8d20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8d23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8d28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8d2a not edx */
  EDX = (~(EDX));
  /* 10ac8d2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8d2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8d32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac8d34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8d37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ac8d3a:;
  /* 10ac8d3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac8d40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac8d46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ac8d49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac8d4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac8d55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ac8d58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8d5c je 0x10ac8e70 */
  if (C.zf) goto L_10ac8e70;
  /* 10ac8d62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8d65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8d68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10ac8d6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac8d6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8d74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8d77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ac8d7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8d80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac8d83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac8d86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ac8d8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8d92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ac8d98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8d9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac8da1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8da4 jne 0x10ac8e70 */
  if (!C.zf) goto L_10ac8e70;
  /* 10ac8daa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8dae jge 0x10ac8e0a */
  if ((C.sf==C.of)) goto L_10ac8e0a;
  /* 10ac8db0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8db3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8db6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac8dba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8dbd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8dc0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ac8dc3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac8dc5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8dc8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8dcb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ac8dce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8dd0 jne 0x10ac8de8 */
  if (!C.zf) goto L_10ac8de8;
  /* 10ac8dd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac8dd7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8dda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac8ddc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ddf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac8de1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8de3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8de6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ac8de8:;
  /* 10ac8de8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8ded mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8df0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8df2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8df5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8df8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ac8dfc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8dfe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8e01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8e04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ac8e08 jmp 0x10ac8e70 */
  goto L_10ac8e70;
L_10ac8e0a:;
  /* 10ac8e0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8e0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8e10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac8e14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8e17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8e1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ac8e1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac8e1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8e22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8e25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ac8e28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8e2a jne 0x10ac8e47 */
  if (!C.zf) goto L_10ac8e47;
  /* 10ac8e2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8e2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8e32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac8e37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac8e39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8e3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac8e3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac8e41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8e44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ac8e47:;
  /* 10ac8e47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac8e4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac8e4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac8e52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac8e54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8e57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8e5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ac8e61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8e63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8e66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8e69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10ac8e70:;
  /* 10ac8e70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8e74 je 0x10ac8e8a */
  if (C.zf) goto L_10ac8e8a;
  /* 10ac8e76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8e7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ac8e7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8e81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8e84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac8e87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10ac8e8a:;
  /* 10ac8e8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8e8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8e90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ac8e93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac8e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8e99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8e9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ac8e9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac8ea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8ea4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8ea7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8eaa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10ac8ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8eb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac8eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8eb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac8eb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8ebd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ac8ebf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac8ec1 jne 0x10ac8ee3 */
  if (!C.zf) goto L_10ac8ee3;
  /* 10ac8ec3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac8ec6 cmp eax, dword ptr [0x10af0f80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af0f80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8ecc jne 0x10ac8ee3 */
  if (!C.zf) goto L_10ac8ee3;
  /* 10ac8ece mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8ed1 cmp ecx, dword ptr [0x10af0f78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0f78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8ed7 jne 0x10ac8ee3 */
  if (!C.zf) goto L_10ac8ee3;
  /* 10ac8ed9 mov dword ptr [0x10af0f80], 0 */
  w32((uint32_t)(0x10af0f80), (0x0u));
L_10ac8ee3:;
  /* 10ac8ee3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ac8ee6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac8ee9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ac8eeb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac8eee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10ac8ef1:;
  /* 10ac8ef1 pop esi */
  ESI = (pop32());
  /* 10ac8ef2 mov esp, ebp */
  ESP = (EBP);
  /* 10ac8ef4 pop ebp */
  EBP = (pop32());
  /* 10ac8ef5 ret  */
  ESPCHK(0x10ac89c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x10ac8f00 (271 bytes, 78 insns) */
void f_10ac8f00(void) {
  FTRACE(0x10ac8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac8f01 mov ebp, esp */
  EBP = (ESP);
  /* 10ac8f03 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8f04 mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac8f09 cmp eax, dword ptr [0x10af0f68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af0f68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8f0f jne 0x10ac8f5b */
  if (!C.zf) goto L_10ac8f5b;
  /* 10ac8f11 mov ecx, dword ptr [0x10af0f68] */
  ECX = (r32((uint32_t)(0x10af0f68)));
  /* 10ac8f17 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8f1a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac8f1d push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8f1e mov edx, dword ptr [0x10af0f88] */
  EDX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac8f24 push edx */
  push32((uint32_t)(EDX));
  /* 10ac8f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8f27 mov eax, dword ptr [0x10af0f8c] */
  EAX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac8f2c push eax */
  push32((uint32_t)(EAX));
  /* 10ac8f2d call dword ptr [0x10af2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2340))), 0x10ac8f33u);
  /* 10ac8f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac8f36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8f3a jne 0x10ac8f43 */
  if (!C.zf) goto L_10ac8f43;
  /* 10ac8f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8f3e jmp 0x10ac900b */
  goto L_10ac900b;
L_10ac8f43:;
  /* 10ac8f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8f46 mov dword ptr [0x10af0f88], ecx */
  w32((uint32_t)(0x10af0f88), (ECX));
  /* 10ac8f4c mov edx, dword ptr [0x10af0f68] */
  EDX = (r32((uint32_t)(0x10af0f68)));
  /* 10ac8f52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8f55 mov dword ptr [0x10af0f68], edx */
  w32((uint32_t)(0x10af0f68), (EDX));
L_10ac8f5b:;
  /* 10ac8f5b mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac8f60 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac8f63 mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac8f69 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8f6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac8f6e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10ac8f73 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ac8f75 mov edx, dword ptr [0x10af0f8c] */
  EDX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac8f7b push edx */
  push32((uint32_t)(EDX));
  /* 10ac8f7c call dword ptr [0x10af22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22e4))), 0x10ac8f82u);
  /* 10ac8f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8f85 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10ac8f88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8f8b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8f8f jne 0x10ac8f95 */
  if (!C.zf) goto L_10ac8f95;
  /* 10ac8f91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8f93 jmp 0x10ac900b */
  goto L_10ac900b;
L_10ac8f95:;
  /* 10ac8f95 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac8f97 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10ac8f9c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10ac8fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8fa3 call dword ptr [0x10af22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22dc))), 0x10ac8fa9u);
  /* 10ac8fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10ac8faf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fb2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac8fb6 jne 0x10ac8fd2 */
  if (!C.zf) goto L_10ac8fd2;
  /* 10ac8fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fbb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac8fbe push ecx */
  push32((uint32_t)(ECX));
  /* 10ac8fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac8fc1 mov edx, dword ptr [0x10af0f8c] */
  EDX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac8fc7 push edx */
  push32((uint32_t)(EDX));
  /* 10ac8fc8 call dword ptr [0x10af2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2378))), 0x10ac8fceu);
  /* 10ac8fce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac8fd0 jmp 0x10ac900b */
  goto L_10ac900b;
L_10ac8fd2:;
  /* 10ac8fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fd5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ac8fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fde mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ac8fe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fe8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10ac8fef mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac8ff4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac8ff7 mov dword ptr [0x10af0f84], eax */
  w32((uint32_t)(0x10af0f84), (EAX));
  /* 10ac8ffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac8fff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ac9002 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10ac9008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ac900b:;
  /* 10ac900b mov esp, ebp */
  ESP = (EBP);
  /* 10ac900d pop ebp */
  EBP = (pop32());
  /* 10ac900e ret  */
  ESPCHK(0x10ac8f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x10ac9010 (494 bytes, 149 insns) */
void f_10ac9010(void) {
  FTRACE(0x10ac9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac9010 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac9011 mov ebp, esp */
  EBP = (ESP);
  /* 10ac9013 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9019 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac901c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ac901f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9022 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ac9025 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac9028 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10ac902f:;
  /* 10ac902f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9033 jl 0x10ac9048 */
  if ((C.sf!=C.of)) goto L_10ac9048;
  /* 10ac9035 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac9038 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ac903a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ac903d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac9040 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9043 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ac9046 jmp 0x10ac902f */
  goto L_10ac902f;
L_10ac9048:;
  /* 10ac9048 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac904b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac9051 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9054 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ac905b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ac905e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ac9065 jmp 0x10ac9070 */
  goto L_10ac9070;
L_10ac9067:;
  /* 10ac9067 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac906a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac906d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10ac9070:;
  /* 10ac9070 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9074 jge 0x10ac9096 */
  if ((C.sf==C.of)) goto L_10ac9096;
  /* 10ac9076 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac907c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10ac907f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac9082 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9085 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9088 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ac908b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac908e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9091 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ac9094 jmp 0x10ac9067 */
  goto L_10ac9067;
L_10ac9096:;
  /* 10ac9096 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac9099 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10ac909c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac909f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ac90a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac90a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ac90a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ac90a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10ac90ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ac90b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac90b6 push edx */
  push32((uint32_t)(EDX));
  /* 10ac90b7 call dword ptr [0x10af22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22dc))), 0x10ac90bdu);
  /* 10ac90bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac90bf jne 0x10ac90c9 */
  if (!C.zf) goto L_10ac90c9;
  /* 10ac90c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac90c4 jmp 0x10ac91fa */
  goto L_10ac91fa;
L_10ac90c9:;
  /* 10ac90c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac90cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac90d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ac90d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac90d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac90da jmp 0x10ac90e8 */
  goto L_10ac90e8;
L_10ac90dc:;
  /* 10ac90dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac90df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac90e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ac90e8:;
  /* 10ac90e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac90eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac90ee ja 0x10ac914d */
  if ((!C.cf&&!C.zf)) goto L_10ac914d;
  /* 10ac90f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac90f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10ac90fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac90fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10ac9107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac910a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac910d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac9110 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9113 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10ac9119 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac911c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9122 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9125 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ac9128 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac912b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9131 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9134 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ac9137 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac913a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac913f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ac9142 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9145 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10ac914b jmp 0x10ac90dc */
  goto L_10ac90dc;
L_10ac914d:;
  /* 10ac914d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac9150 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9156 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ac9159 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac915c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac915f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9162 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ac9165 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9168 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac916b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac916e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9171 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9174 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ac9177 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac917a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac917d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9180 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ac9183 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9186 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ac9189 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac918c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac918f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9192 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ac9195 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac9198 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac919b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10ac91a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac91a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac91a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10ac91b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac91b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10ac91bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac91be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10ac91c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac91c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac91c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10ac91ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac91cc jne 0x10ac91dd */
  if (!C.zf) goto L_10ac91dd;
  /* 10ac91ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac91d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac91d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac91d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac91da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ac91dd:;
  /* 10ac91dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac91e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac91e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac91e7 not edx */
  EDX = (~(EDX));
  /* 10ac91e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac91ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac91ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac91f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac91f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ac91f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10ac91fa:;
  /* 10ac91fa mov esp, ebp */
  ESP = (EBP);
  /* 10ac91fc pop ebp */
  EBP = (pop32());
  /* 10ac91fd ret  */
  ESPCHK(0x10ac9010u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x10ac9200 (1515 bytes, 489 insns) */
void f_10ac9200(void) {
  FTRACE(0x10ac9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac9200 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac9201 mov ebp, esp */
  EBP = (ESP);
  /* 10ac9203 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9206 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ac9209 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac920c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10ac920e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ac9211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9214 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ac9217 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ac921a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac921d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac9220 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9223 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ac9226 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac9229 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10ac922c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac922f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9232 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac9238 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac923b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10ac9242 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ac9245 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac9248 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac924b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ac924e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9251 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac9253 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9256 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ac9259 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac925c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac925f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ac9262 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9265 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac9267 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ac926a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac926d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9270 jle 0x10ac9526 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9526;
  /* 10ac9276 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9279 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac927c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac927e jne 0x10ac928b */
  if (!C.zf) goto L_10ac928b;
  /* 10ac9280 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac9283 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9286 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9289 jle 0x10ac9292 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9292;
L_10ac928b:;
  /* 10ac928b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac928d jmp 0x10ac97e7 */
  goto L_10ac97e7;
L_10ac9292:;
  /* 10ac9292 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9295 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ac9298 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac929b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ac929e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac92a2 jbe 0x10ac92ab */
  if ((C.cf||C.zf)) goto L_10ac92ab;
  /* 10ac92a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10ac92ab:;
  /* 10ac92ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac92ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac92b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac92b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac92b7 jne 0x10ac938d */
  if (!C.zf) goto L_10ac938d;
  /* 10ac92bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac92c1 jae 0x10ac9322 */
  if (!C.cf) goto L_10ac9322;
  /* 10ac92c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac92c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac92cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac92cd not edx */
  EDX = (~(EDX));
  /* 10ac92cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac92d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac92d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ac92d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac92db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac92de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac92e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ac92e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac92e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac92eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac92ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac92f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac92f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac92f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ac92fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac92fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9300 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac9304 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac9306 jne 0x10ac9320 */
  if (!C.zf) goto L_10ac9320;
  /* 10ac9308 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac930d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9312 not edx */
  EDX = (~(EDX));
  /* 10ac9314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9317 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac9319 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac931b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac931e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac9320:;
  /* 10ac9320 jmp 0x10ac938d */
  goto L_10ac938d;
L_10ac9322:;
  /* 10ac9322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9325 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9328 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac932d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac932f not eax */
  EAX = (~(EAX));
  /* 10ac9331 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9334 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9337 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ac933e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9340 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9343 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9346 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10ac934d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9350 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9353 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ac9356 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac9359 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac935c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac935f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ac9362 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9365 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9368 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac936c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac936e jne 0x10ac938d */
  if (!C.zf) goto L_10ac938d;
  /* 10ac9370 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9373 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9376 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac937b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac937d not eax */
  EAX = (~(EAX));
  /* 10ac937f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9382 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac9385 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac9387 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac938a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ac938d:;
  /* 10ac938d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9390 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac9393 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9396 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac9399 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ac939c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac939f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac93a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac93a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac93a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ac93ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac93ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac93b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac93b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ac93b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac93bb jle 0x10ac9507 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9507;
  /* 10ac93c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac93c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac93c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ac93ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac93cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ac93d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac93d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ac93d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac93da jbe 0x10ac93e3 */
  if ((C.cf||C.zf)) goto L_10ac93e3;
  /* 10ac93dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10ac93e3:;
  /* 10ac93e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac93e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac93e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10ac93ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ac93ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac93f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac93f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac93f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ac93fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac93fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9401 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ac9404 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9407 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac940a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10ac940d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9410 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac9413 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9416 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac9419 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac941c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac941f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac9422 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9425 jne 0x10ac94f3 */
  if (!C.zf) goto L_10ac94f3;
  /* 10ac942b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac942f jae 0x10ac948c */
  if (!C.cf) goto L_10ac948c;
  /* 10ac9431 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9434 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9437 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac943b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac943e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9441 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac9444 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac9447 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac944a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac944d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ac9450 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac9452 jne 0x10ac946a */
  if (!C.zf) goto L_10ac946a;
  /* 10ac9454 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9459 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac945c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac945e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9461 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac9463 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9468 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac946a:;
  /* 10ac946a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac946f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9472 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac9474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9477 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac947a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10ac947e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9480 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9483 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9486 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10ac948a jmp 0x10ac94f3 */
  goto L_10ac94f3;
L_10ac948c:;
  /* 10ac948c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac948f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9492 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac9496 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9499 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac949c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac949f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac94a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac94a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac94a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10ac94ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac94ad jne 0x10ac94ca */
  if (!C.zf) goto L_10ac94ca;
  /* 10ac94af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac94b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac94b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac94ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac94bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac94bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac94c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac94c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac94c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ac94ca:;
  /* 10ac94ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac94cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac94d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac94d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac94d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac94da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac94dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ac94e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac94e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac94e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac94ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10ac94f3:;
  /* 10ac94f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac94f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac94f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ac94fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac94fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9501 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9504 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10ac9507:;
  /* 10ac9507 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac950a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac950d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9510 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ac9512 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac9515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9518 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac951b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac951e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10ac9521 jmp 0x10ac97e2 */
  goto L_10ac97e2;
L_10ac9526:;
  /* 10ac9526 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac9529 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac952c jge 0x10ac97e2 */
  if ((C.sf==C.of)) goto L_10ac97e2;
  /* 10ac9532 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac9535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9538 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac953b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ac953d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ac9540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9543 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9546 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9549 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10ac954c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac954f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9552 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ac9555 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac9558 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac955b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ac955e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac9561 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ac9564 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9567 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ac956a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac956e jbe 0x10ac9577 */
  if ((C.cf||C.zf)) goto L_10ac9577;
  /* 10ac9570 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10ac9577:;
  /* 10ac9577 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac957a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac957d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac957f jne 0x10ac96c0 */
  if (!C.zf) goto L_10ac96c0;
  /* 10ac9585 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9588 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ac958b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac958e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ac9591 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9595 jbe 0x10ac959e */
  if ((C.cf||C.zf)) goto L_10ac959e;
  /* 10ac9597 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10ac959e:;
  /* 10ac959e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac95a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac95a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac95a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac95aa jne 0x10ac9680 */
  if (!C.zf) goto L_10ac9680;
  /* 10ac95b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac95b4 jae 0x10ac9615 */
  if (!C.cf) goto L_10ac9615;
  /* 10ac95b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac95bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac95be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac95c0 not edx */
  EDX = (~(EDX));
  /* 10ac95c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac95c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac95c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ac95cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac95ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac95d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac95d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ac95d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac95db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac95de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10ac95e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac95e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac95e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac95ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10ac95ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac95f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac95f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac95f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac95f9 jne 0x10ac9613 */
  if (!C.zf) goto L_10ac9613;
  /* 10ac95fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9600 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9603 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9605 not edx */
  EDX = (~(EDX));
  /* 10ac9607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac960a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac960c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac960e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9611 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ac9613:;
  /* 10ac9613 jmp 0x10ac9680 */
  goto L_10ac9680;
L_10ac9615:;
  /* 10ac9615 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9618 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac961b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac9620 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac9622 not eax */
  EAX = (~(EAX));
  /* 10ac9624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9627 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac962a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10ac9631 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9636 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9639 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10ac9640 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9643 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9646 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10ac9649 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac964c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac964f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9652 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10ac9655 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9658 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac965b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10ac965f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac9661 jne 0x10ac9680 */
  if (!C.zf) goto L_10ac9680;
  /* 10ac9663 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ac9666 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9669 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac966e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac9670 not eax */
  EAX = (~(EAX));
  /* 10ac9672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9675 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac9678 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac967a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac967d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ac9680:;
  /* 10ac9680 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9683 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac9686 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9689 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac968c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ac968f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9692 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac9695 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9698 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac969b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ac969e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac96a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac96a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ac96a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac96aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ac96ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac96b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ac96b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac96b7 jbe 0x10ac96c0 */
  if ((C.cf||C.zf)) goto L_10ac96c0;
  /* 10ac96b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10ac96c0:;
  /* 10ac96c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac96c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac96c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10ac96c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ac96cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac96d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac96d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ac96d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac96de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac96e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac96e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ac96ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac96f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10ac96f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac96fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac96ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9702 jne 0x10ac97ce */
  if (!C.zf) goto L_10ac97ce;
  /* 10ac9708 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac970c jae 0x10ac9768 */
  if (!C.cf) goto L_10ac9768;
  /* 10ac970e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9711 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9714 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac9718 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac971b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac971e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ac9721 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac9723 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9726 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9729 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ac972c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac972e jne 0x10ac9746 */
  if (!C.zf) goto L_10ac9746;
  /* 10ac9730 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac9735 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9738 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac973a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac973d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac973f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac9741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9744 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ac9746:;
  /* 10ac9746 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac974b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac974e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9753 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9756 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10ac975a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac975c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac975f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9762 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10ac9766 jmp 0x10ac97ce */
  goto L_10ac97ce;
L_10ac9768:;
  /* 10ac9768 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac976b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac976e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10ac9772 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9775 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9778 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10ac977b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ac977d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac9780 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9783 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10ac9786 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac9788 jne 0x10ac97a5 */
  if (!C.zf) goto L_10ac97a5;
  /* 10ac978a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac978d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9790 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10ac9795 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10ac9797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac979a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac979d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac979f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac97a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ac97a5:;
  /* 10ac97a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac97a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac97ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac97b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac97b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac97b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac97b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10ac97bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac97c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac97c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ac97c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10ac97ce:;
  /* 10ac97ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac97d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac97d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ac97d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac97d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac97dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ac97df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10ac97e2:;
  /* 10ac97e2 mov eax, 1 */
  EAX = (0x1u);
L_10ac97e7:;
  /* 10ac97e7 mov esp, ebp */
  ESP = (EBP);
  /* 10ac97e9 pop ebp */
  EBP = (pop32());
  /* 10ac97ea ret  */
  ESPCHK(0x10ac9200u, _esp0);
  ESP += 4; return;
}

/* FUN_100097f0 @ 0x10ac97f0 (304 bytes, 79 insns) */
void f_10ac97f0(void) {
  FTRACE(0x10ac97f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac97f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac97f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ac97f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac97f4 cmp dword ptr [0x10af0f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac97fb je 0x10ac991c */
  if (C.zf) goto L_10ac991c;
  /* 10ac9801 mov eax, dword ptr [0x10af0f78] */
  EAX = (r32((uint32_t)(0x10af0f78)));
  /* 10ac9806 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10ac9809 mov ecx, dword ptr [0x10af0f80] */
  ECX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac980f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ac9812 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9814 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ac9817 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10ac981c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ac9821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9824 push eax */
  push32((uint32_t)(EAX));
  /* 10ac9825 call dword ptr [0x10af237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af237c))), 0x10ac982bu);
  /* 10ac982b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9830 mov ecx, dword ptr [0x10af0f78] */
  ECX = (r32((uint32_t)(0x10af0f78)));
  /* 10ac9836 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9838 mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac983d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ac9840 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9842 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac9848 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ac984b mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac9850 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac9853 mov edx, dword ptr [0x10af0f78] */
  EDX = (r32((uint32_t)(0x10af0f78)));
  /* 10ac9859 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10ac9864 mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac9869 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac986c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10ac986f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10ac9872 mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac9877 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac987a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10ac987d mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac9883 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac9886 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10ac988a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ac988c jne 0x10ac98a2 */
  if (!C.zf) goto L_10ac98a2;
  /* 10ac988e mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac9894 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ac9897 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10ac9899 mov ecx, dword ptr [0x10af0f80] */
  ECX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac989f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ac98a2:;
  /* 10ac98a2 mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac98a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac98ac jne 0x10ac9912 */
  if (!C.zf) goto L_10ac9912;
  /* 10ac98ae cmp dword ptr [0x10af0f84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10af0f84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac98b5 jle 0x10ac9912 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9912;
  /* 10ac98b7 mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac98bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ac98bf push ecx */
  push32((uint32_t)(ECX));
  /* 10ac98c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac98c2 mov edx, dword ptr [0x10af0f8c] */
  EDX = (r32((uint32_t)(0x10af0f8c)));
  /* 10ac98c8 push edx */
  push32((uint32_t)(EDX));
  /* 10ac98c9 call dword ptr [0x10af2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2378))), 0x10ac98cfu);
  /* 10ac98cf mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac98d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac98d7 mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac98dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac98df mov edx, dword ptr [0x10af0f80] */
  EDX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac98e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac98e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac98ea push ecx */
  push32((uint32_t)(ECX));
  /* 10ac98eb mov eax, dword ptr [0x10af0f80] */
  EAX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac98f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac98f3 push eax */
  push32((uint32_t)(EAX));
  /* 10ac98f4 mov ecx, dword ptr [0x10af0f80] */
  ECX = (r32((uint32_t)(0x10af0f80)));
  /* 10ac98fa push ecx */
  push32((uint32_t)(ECX));
  /* 10ac98fb call 0x10acbf20 */
  push32(0x10ac9900u); f_10acbf20();
  /* 10ac9900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9903 mov edx, dword ptr [0x10af0f84] */
  EDX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac9909 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac990c mov dword ptr [0x10af0f84], edx */
  w32((uint32_t)(0x10af0f84), (EDX));
L_10ac9912:;
  /* 10ac9912 mov dword ptr [0x10af0f80], 0 */
  w32((uint32_t)(0x10af0f80), (0x0u));
L_10ac991c:;
  /* 10ac991c mov esp, ebp */
  ESP = (EBP);
  /* 10ac991e pop ebp */
  EBP = (pop32());
  /* 10ac991f ret  */
  ESPCHK(0x10ac97f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10ac9920 (1565 bytes, 343 insns) */
void f_10ac9920(void) {
  FTRACE(0x10ac9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac9920 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac9921 mov ebp, esp */
  EBP = (ESP);
  /* 10ac9923 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9929 mov eax, dword ptr [0x10af0f84] */
  EAX = (r32((uint32_t)(0x10af0f84)));
  /* 10ac992e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ac9931 push eax */
  push32((uint32_t)(EAX));
  /* 10ac9932 mov ecx, dword ptr [0x10af0f88] */
  ECX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac9938 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac9939 call dword ptr [0x10af2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2350))), 0x10ac993fu);
  /* 10ac993f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac9941 je 0x10ac994b */
  if (C.zf) goto L_10ac994b;
  /* 10ac9943 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9946 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac994b:;
  /* 10ac994b mov edx, dword ptr [0x10af0f88] */
  EDX = (r32((uint32_t)(0x10af0f88)));
  /* 10ac9951 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10ac9957 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10ac9961 jmp 0x10ac9972 */
  goto L_10ac9972;
L_10ac9963:;
  /* 10ac9963 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10ac9969 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac996c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10ac9972:;
  /* 10ac9972 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10ac9978 cmp ecx, dword ptr [0x10af0f84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0f84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac997e jge 0x10ac9f37 */
  if ((C.sf==C.of)) goto L_10ac9f37;
  /* 10ac9984 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ac998a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ac998d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10ac9993 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10ac9998 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ac999e push ecx */
  push32((uint32_t)(ECX));
  /* 10ac999f call dword ptr [0x10af2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2350))), 0x10ac99a5u);
  /* 10ac99a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac99a7 je 0x10ac99b3 */
  if (C.zf) goto L_10ac99b3;
  /* 10ac99a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10ac99ae jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac99b3:;
  /* 10ac99b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ac99b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ac99bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10ac99c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ac99c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac99ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ac99d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ac99d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ac99da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ac99dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10ac99e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10ac99f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ac99f8 jmp 0x10ac9a03 */
  goto L_10ac9a03;
L_10ac99fa:;
  /* 10ac99fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac99fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9a00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ac9a03:;
  /* 10ac9a03 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9a07 jge 0x10ac9efb */
  if ((C.sf==C.of)) goto L_10ac9efb;
  /* 10ac9a0d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10ac9a17 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10ac9a21 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10ac9a2b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10ac9a35 jmp 0x10ac9a46 */
  goto L_10ac9a46;
L_10ac9a37:;
  /* 10ac9a37 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ac9a3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9a40 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10ac9a46:;
  /* 10ac9a46 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9a4d jge 0x10ac9a62 */
  if ((C.sf==C.of)) goto L_10ac9a62;
  /* 10ac9a4f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ac9a55 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10ac9a60 jmp 0x10ac9a37 */
  goto L_10ac9a37;
L_10ac9a62:;
  /* 10ac9a62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9a66 jl 0x10ac9e9d */
  if ((C.sf!=C.of)) goto L_10ac9e9d;
  /* 10ac9a6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10ac9a71 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ac9a77 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac9a78 call dword ptr [0x10af2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2350))), 0x10ac9a7eu);
  /* 10ac9a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac9a80 je 0x10ac9a8c */
  if (C.zf) goto L_10ac9a8c;
  /* 10ac9a82 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10ac9a87 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9a8c:;
  /* 10ac9a8c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ac9a92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ac9a95 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10ac9a9f jmp 0x10ac9ab0 */
  goto L_10ac9ab0;
L_10ac9aa1:;
  /* 10ac9aa1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10ac9aa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9aaa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10ac9ab0:;
  /* 10ac9ab0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9ab7 jge 0x10ac9c34 */
  if ((C.sf==C.of)) goto L_10ac9c34;
  /* 10ac9abd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac9ac0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9ac3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10ac9ac9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9acf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9ad5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10ac9adb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9ae1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9ae5 jne 0x10ac9af2 */
  if (!C.zf) goto L_10ac9af2;
  /* 10ac9ae7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10ac9aed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9af0 je 0x10ac9afc */
  if (C.zf) goto L_10ac9afc;
L_10ac9af2:;
  /* 10ac9af2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10ac9af7 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9afc:;
  /* 10ac9afc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9b02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ac9b04 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10ac9b0a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ac9b10 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10ac9b16 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10ac9b1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ac9b1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac9b21 je 0x10ac9b59 */
  if (C.zf) goto L_10ac9b59;
  /* 10ac9b23 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ac9b29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9b2c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10ac9b32 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9b3c jle 0x10ac9b48 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9b48;
  /* 10ac9b3e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10ac9b43 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9b48:;
  /* 10ac9b48 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10ac9b4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9b51 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10ac9b57 jmp 0x10ac9b9b */
  goto L_10ac9b9b;
L_10ac9b59:;
  /* 10ac9b59 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ac9b5f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ac9b62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9b65 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10ac9b6b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9b72 jle 0x10ac9b7e */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9b7e;
  /* 10ac9b74 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10ac9b7e:;
  /* 10ac9b7e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ac9b84 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10ac9b8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9b8e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ac9b94 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10ac9b9b:;
  /* 10ac9b9b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9ba2 jl 0x10ac9bbd */
  if ((C.sf!=C.of)) goto L_10ac9bbd;
  /* 10ac9ba4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10ac9baa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac9baf jne 0x10ac9bbd */
  if (!C.zf) goto L_10ac9bbd;
  /* 10ac9bb1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9bbb jle 0x10ac9bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9bc7;
L_10ac9bbd:;
  /* 10ac9bbd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10ac9bc2 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9bc7:;
  /* 10ac9bc7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9bcd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9bd3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ac9bd6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9bdc je 0x10ac9be8 */
  if (C.zf) goto L_10ac9be8;
  /* 10ac9bde mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10ac9be3 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9be8:;
  /* 10ac9be8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9bee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9bf4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10ac9bfa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9c00 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9c06 jb 0x10ac9afc */
  if (C.cf) goto L_10ac9afc;
  /* 10ac9c0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9c12 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9c18 je 0x10ac9c24 */
  if (C.zf) goto L_10ac9c24;
  /* 10ac9c1a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10ac9c1f jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9c24:;
  /* 10ac9c24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ac9c27 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9c2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ac9c2f jmp 0x10ac9aa1 */
  goto L_10ac9aa1;
L_10ac9c34:;
  /* 10ac9c34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9c37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac9c39 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9c3f je 0x10ac9c4b */
  if (C.zf) goto L_10ac9c4b;
  /* 10ac9c41 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10ac9c46 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9c4b:;
  /* 10ac9c4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9c4e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10ac9c54 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ac9c5b jmp 0x10ac9c66 */
  goto L_10ac9c66;
L_10ac9c5d:;
  /* 10ac9c5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9c60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9c63 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ac9c66:;
  /* 10ac9c66 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9c6a jge 0x10ac9e9d */
  if ((C.sf==C.of)) goto L_10ac9e9d;
  /* 10ac9c70 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10ac9c7a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10ac9c80 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10ac9c86:;
  /* 10ac9c86 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9c8c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ac9c8f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10ac9c95 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ac9c9b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9ca1 je 0x10ac9dca */
  if (C.zf) goto L_10ac9dca;
  /* 10ac9ca7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9caa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10ac9cb0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9cb7 je 0x10ac9dca */
  if (C.zf) goto L_10ac9dca;
  /* 10ac9cbd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ac9cc3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9cc9 jb 0x10ac9cde */
  if (C.cf) goto L_10ac9cde;
  /* 10ac9ccb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ac9cd1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9cd6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9cdc jb 0x10ac9ce8 */
  if (C.cf) goto L_10ac9ce8;
L_10ac9cde:;
  /* 10ac9cde mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10ac9ce3 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9ce8:;
  /* 10ac9ce8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ac9cee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9cf4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10ac9cfa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10ac9d00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9d03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ac9d06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9d09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9d0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10ac9d14:;
  /* 10ac9d14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9d17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9d1d je 0x10ac9d3e */
  if (C.zf) goto L_10ac9d3e;
  /* 10ac9d1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9d22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9d28 jne 0x10ac9d2c */
  if (!C.zf) goto L_10ac9d2c;
  /* 10ac9d2a jmp 0x10ac9d3e */
  goto L_10ac9d3e;
L_10ac9d2c:;
  /* 10ac9d2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9d2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ac9d31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10ac9d34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9d37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9d39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ac9d3c jmp 0x10ac9d14 */
  goto L_10ac9d14;
L_10ac9d3e:;
  /* 10ac9d3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ac9d41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9d47 jne 0x10ac9d53 */
  if (!C.zf) goto L_10ac9d53;
  /* 10ac9d49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10ac9d4e jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9d53:;
  /* 10ac9d53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ac9d59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ac9d5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ac9d5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9d61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10ac9d67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9d6e jle 0x10ac9d7a */
  if ((C.zf||C.sf!=C.of)) goto L_10ac9d7a;
  /* 10ac9d70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10ac9d7a:;
  /* 10ac9d7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10ac9d80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9d83 je 0x10ac9d8f */
  if (C.zf) goto L_10ac9d8f;
  /* 10ac9d85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10ac9d8a jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9d8f:;
  /* 10ac9d8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ac9d95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ac9d98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9d9e je 0x10ac9daa */
  if (C.zf) goto L_10ac9daa;
  /* 10ac9da0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10ac9da5 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9daa:;
  /* 10ac9daa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10ac9db0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10ac9db6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10ac9dbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9dbf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10ac9dc5 jmp 0x10ac9c86 */
  goto L_10ac9c86;
L_10ac9dca:;
  /* 10ac9dca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9dd1 je 0x10ac9e41 */
  if (C.zf) goto L_10ac9e41;
  /* 10ac9dd3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9dd7 jge 0x10ac9e0b */
  if ((C.sf==C.of)) goto L_10ac9e0b;
  /* 10ac9dd9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9dde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9de1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9de3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10ac9de9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9deb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10ac9df1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9df6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9df9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9dfb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10ac9e01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9e03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10ac9e09 jmp 0x10ac9e41 */
  goto L_10ac9e41;
L_10ac9e0b:;
  /* 10ac9e0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9e0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9e11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9e16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9e18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10ac9e1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9e20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10ac9e26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9e29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9e2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10ac9e31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10ac9e33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10ac9e39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9e3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10ac9e41:;
  /* 10ac9e41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10ac9e47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac9e4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9e50 jne 0x10ac9e64 */
  if (!C.zf) goto L_10ac9e64;
  /* 10ac9e52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ac9e55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10ac9e5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9e62 je 0x10ac9e6e */
  if (C.zf) goto L_10ac9e6e;
L_10ac9e64:;
  /* 10ac9e64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10ac9e69 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9e6e:;
  /* 10ac9e6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10ac9e74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ac9e77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9e7d je 0x10ac9e89 */
  if (C.zf) goto L_10ac9e89;
  /* 10ac9e7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10ac9e84 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9e89:;
  /* 10ac9e89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10ac9e8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9e92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10ac9e98 jmp 0x10ac9c5d */
  goto L_10ac9c5d;
L_10ac9e9d:;
  /* 10ac9e9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac9ea0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ac9ea6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10ac9eac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9eb0 jne 0x10ac9eca */
  if (!C.zf) goto L_10ac9eca;
  /* 10ac9eb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ac9eb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10ac9ebb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10ac9ec1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9ec8 je 0x10ac9ed1 */
  if (C.zf) goto L_10ac9ed1;
L_10ac9eca:;
  /* 10ac9eca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10ac9ecf jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9ed1:;
  /* 10ac9ed1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10ac9ed7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9edd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10ac9ee3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ac9ee6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9eeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ac9eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ac9ef1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ac9ef3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ac9ef6 jmp 0x10ac99fa */
  goto L_10ac99fa;
L_10ac9efb:;
  /* 10ac9efb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ac9f01 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10ac9f07 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9f09 jne 0x10ac9f1c */
  if (!C.zf) goto L_10ac9f1c;
  /* 10ac9f0b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ac9f11 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10ac9f17 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9f1a je 0x10ac9f23 */
  if (C.zf) goto L_10ac9f23;
L_10ac9f1c:;
  /* 10ac9f1c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10ac9f21 jmp 0x10ac9f39 */
  goto L_10ac9f39;
L_10ac9f23:;
  /* 10ac9f23 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10ac9f29 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9f2c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10ac9f32 jmp 0x10ac9963 */
  goto L_10ac9963;
L_10ac9f37:;
  /* 10ac9f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ac9f39:;
  /* 10ac9f39 mov esp, ebp */
  ESP = (EBP);
  /* 10ac9f3b pop ebp */
  EBP = (pop32());
  /* 10ac9f3c ret  */
  ESPCHK(0x10ac9920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f40 @ 0x10ac9f40 (250 bytes, 92 insns) */
void f_10ac9f40(void) {
  FTRACE(0x10ac9f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ac9f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ac9f41 mov ebp, esp */
  EBP = (ESP);
  /* 10ac9f43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9f46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ac9f47 push esi */
  push32((uint32_t)(ESI));
  /* 10ac9f48 push edi */
  push32((uint32_t)(EDI));
  /* 10ac9f49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10ac9f4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ac9f4f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ac9f52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10ac9f55:;
  /* 10ac9f55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9f59 jne 0x10ac9f79 */
  if (!C.zf) goto L_10ac9f79;
  /* 10ac9f5b push 0x10aeafd0 */
  push32((uint32_t)(0x10aeafd0u));
  /* 10ac9f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac9f62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10ac9f64 push 0x10aeafc4 */
  push32((uint32_t)(0x10aeafc4u));
  /* 10ac9f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac9f6b call 0x10ac30f0 */
  push32(0x10ac9f70u); f_10ac30f0();
  /* 10ac9f70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9f73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9f76 jne 0x10ac9f79 */
  if (!C.zf) goto L_10ac9f79;
  /* 10ac9f78 int3  */
  x86_unimpl("int3 @ 0x10ac9f78");
L_10ac9f79:;
  /* 10ac9f79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ac9f7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ac9f7d jne 0x10ac9f55 */
  if (!C.zf) goto L_10ac9f55;
L_10ac9f7f:;
  /* 10ac9f7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9f83 jne 0x10ac9fa3 */
  if (!C.zf) goto L_10ac9fa3;
  /* 10ac9f85 push 0x10aeafb4 */
  push32((uint32_t)(0x10aeafb4u));
  /* 10ac9f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ac9f8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10ac9f8e push 0x10aeafc4 */
  push32((uint32_t)(0x10aeafc4u));
  /* 10ac9f93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ac9f95 call 0x10ac30f0 */
  push32(0x10ac9f9au); f_10ac30f0();
  /* 10ac9f9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9f9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9fa0 jne 0x10ac9fa3 */
  if (!C.zf) goto L_10ac9fa3;
  /* 10ac9fa2 int3  */
  x86_unimpl("int3 @ 0x10ac9fa2");
L_10ac9fa3:;
  /* 10ac9fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ac9fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ac9fa7 jne 0x10ac9f7f */
  if (!C.zf) goto L_10ac9f7f;
  /* 10ac9fa9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9fac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10ac9fb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9fb9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10ac9fbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9fbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ac9fc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ac9fc4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9fc7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10ac9fce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ac9fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ac9fd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ac9fd5 push edx */
  push32((uint32_t)(EDX));
  /* 10ac9fd6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9fd9 push eax */
  push32((uint32_t)(EAX));
  /* 10ac9fda call 0x10acafc0 */
  push32(0x10ac9fdfu); f_10acafc0();
  /* 10ac9fdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ac9fe2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ac9fe5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9fe8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ac9feb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ac9fee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9ff1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ac9ff4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ac9ff7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ac9ffb jl 0x10aca01f */
  if ((C.sf!=C.of)) goto L_10aca01f;
  /* 10ac9ffd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca000 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10aca002 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10aca005 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10aca007 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10aca00d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10aca010 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca013 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10aca015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca018 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca01b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10aca01d jmp 0x10aca030 */
  goto L_10aca030;
L_10aca01f:;
  /* 10aca01f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca022 push edx */
  push32((uint32_t)(EDX));
  /* 10aca023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10aca025 call 0x10acad40 */
  push32(0x10aca02au); f_10acad40();
  /* 10aca02a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca02d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10aca030:;
  /* 10aca030 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10aca033 pop edi */
  EDI = (pop32());
  /* 10aca034 pop esi */
  ESI = (pop32());
  /* 10aca035 pop ebx */
  EBX = (pop32());
  /* 10aca036 mov esp, ebp */
  ESP = (EBP);
  /* 10aca038 pop ebp */
  EBP = (pop32());
  /* 10aca039 ret  */
  ESPCHK(0x10ac9f40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a040 @ 0x10aca040 (183 bytes, 58 insns) */
void f_10aca040(void) {
  FTRACE(0x10aca040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca040 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca041 mov ebp, esp */
  EBP = (ESP);
  /* 10aca043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10aca046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca04c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca051 ja 0x10aca06a */
  if ((!C.cf&&!C.zf)) goto L_10aca06a;
  /* 10aca053 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca056 mov edx, dword ptr [0x10aedc98] */
  EDX = (r32((uint32_t)(0x10aedc98)));
  /* 10aca05c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca05e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10aca062 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10aca065 jmp 0x10aca0f3 */
  goto L_10aca0f3;
L_10aca06a:;
  /* 10aca06a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca06d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10aca070 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10aca076 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10aca07c mov edx, dword ptr [0x10aedc98] */
  EDX = (r32((uint32_t)(0x10aedc98)));
  /* 10aca082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca084 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10aca088 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10aca08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10aca08f je 0x10aca0b3 */
  if (C.zf) goto L_10aca0b3;
  /* 10aca091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca094 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10aca097 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10aca09d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10aca0a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10aca0a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10aca0a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10aca0aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10aca0b1 jmp 0x10aca0c4 */
  goto L_10aca0c4;
L_10aca0b3:;
  /* 10aca0b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10aca0b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10aca0b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10aca0bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10aca0c4:;
  /* 10aca0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aca0c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10aca0c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10aca0ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10aca0cd push ecx */
  push32((uint32_t)(ECX));
  /* 10aca0ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10aca0d1 push edx */
  push32((uint32_t)(EDX));
  /* 10aca0d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10aca0d5 push eax */
  push32((uint32_t)(EAX));
  /* 10aca0d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aca0d8 call 0x10acc260 */
  push32(0x10aca0ddu); f_10acc260();
  /* 10aca0dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca0e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10aca0e2 jne 0x10aca0e8 */
  if (!C.zf) goto L_10aca0e8;
  /* 10aca0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca0e6 jmp 0x10aca0f3 */
  goto L_10aca0f3;
L_10aca0e8:;
  /* 10aca0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca0eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10aca0f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10aca0f3:;
  /* 10aca0f3 mov esp, ebp */
  ESP = (EBP);
  /* 10aca0f5 pop ebp */
  EBP = (pop32());
  /* 10aca0f6 ret  */
  ESPCHK(0x10aca040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x10aca100 (836 bytes, 238 insns) */
void f_10aca100(void) {
  FTRACE(0x10aca100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca100 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca101 mov ebp, esp */
  EBP = (ESP);
  /* 10aca103 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10aca106 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca108 call 0x10ac7a30 */
  push32(0x10aca10du); f_10ac7a30();
  /* 10aca10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca113 push eax */
  push32((uint32_t)(EAX));
  /* 10aca114 call 0x10aca450 */
  push32(0x10aca119u); f_10aca450();
  /* 10aca119 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca11c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10aca11f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca122 cmp ecx, dword ptr [0x10af0cc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0cc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca128 jne 0x10aca13b */
  if (!C.zf) goto L_10aca13b;
  /* 10aca12a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca12c call 0x10ac7ad0 */
  push32(0x10aca131u); f_10ac7ad0();
  /* 10aca131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca136 jmp 0x10aca440 */
  goto L_10aca440;
L_10aca13b:;
  /* 10aca13b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca13f jne 0x10aca15c */
  if (!C.zf) goto L_10aca15c;
  /* 10aca141 call 0x10aca530 */
  push32(0x10aca146u); f_10aca530();
  /* 10aca146 call 0x10aca5b0 */
  push32(0x10aca14bu); f_10aca5b0();
  /* 10aca14b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca14d call 0x10ac7ad0 */
  push32(0x10aca152u); f_10ac7ad0();
  /* 10aca152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca157 jmp 0x10aca440 */
  goto L_10aca440;
L_10aca15c:;
  /* 10aca15c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10aca163 jmp 0x10aca16e */
  goto L_10aca16e;
L_10aca165:;
  /* 10aca165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca168 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca16b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10aca16e:;
  /* 10aca16e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca172 jae 0x10aca2bf */
  if (!C.cf) goto L_10aca2bf;
  /* 10aca178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca17b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10aca17e mov ecx, dword ptr [eax + 0x10aedeb8] */
  ECX = (r32((uint32_t)(EAX + 0x10aedeb8)));
  /* 10aca184 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca187 jne 0x10aca2ba */
  if (!C.zf) goto L_10aca2ba;
  /* 10aca18d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10aca194 jmp 0x10aca19f */
  goto L_10aca19f;
L_10aca196:;
  /* 10aca196 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca199 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca19c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10aca19f:;
  /* 10aca19f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca1a6 jae 0x10aca1b4 */
  if (!C.cf) goto L_10aca1b4;
  /* 10aca1a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca1ab mov byte ptr [eax + 0x10af0e60], 0 */
  w8((uint32_t)(EAX + 0x10af0e60), (0x0u));
  /* 10aca1b2 jmp 0x10aca196 */
  goto L_10aca196;
L_10aca1b4:;
  /* 10aca1b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10aca1bb jmp 0x10aca1c6 */
  goto L_10aca1c6;
L_10aca1bd:;
  /* 10aca1bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca1c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca1c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10aca1c6:;
  /* 10aca1c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca1ca jae 0x10aca247 */
  if (!C.cf) goto L_10aca247;
  /* 10aca1cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca1cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10aca1d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca1d5 lea ecx, [edx + eax*8 + 0x10aedec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10aedec8));
  /* 10aca1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10aca1df jmp 0x10aca1ea */
  goto L_10aca1ea;
L_10aca1e1:;
  /* 10aca1e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10aca1e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca1e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10aca1ea:;
  /* 10aca1ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10aca1ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10aca1ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10aca1f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10aca1f3 je 0x10aca242 */
  if (C.zf) goto L_10aca242;
  /* 10aca1f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10aca1f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca1fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10aca1fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10aca1ff je 0x10aca242 */
  if (C.zf) goto L_10aca242;
  /* 10aca201 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10aca204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10aca208 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10aca20b jmp 0x10aca216 */
  goto L_10aca216;
L_10aca20d:;
  /* 10aca20d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca210 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca213 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10aca216:;
  /* 10aca216 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10aca219 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca21b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10aca21e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca221 ja 0x10aca240 */
  if ((!C.cf&&!C.zf)) goto L_10aca240;
  /* 10aca223 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca229 mov dl, byte ptr [eax + 0x10af0e61] */
  DL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10aca22f or dl, byte ptr [ecx + 0x10aedeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10aedeb0))); DL = (_r); fl_logic(_r,8); }
  /* 10aca235 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca238 mov byte ptr [eax + 0x10af0e61], dl */
  w8((uint32_t)(EAX + 0x10af0e61), (DL));
  /* 10aca23e jmp 0x10aca20d */
  goto L_10aca20d;
L_10aca240:;
  /* 10aca240 jmp 0x10aca1e1 */
  goto L_10aca1e1;
L_10aca242:;
  /* 10aca242 jmp 0x10aca1bd */
  goto L_10aca1bd;
L_10aca247:;
  /* 10aca247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca24a mov dword ptr [0x10af0cc4], ecx */
  w32((uint32_t)(0x10af0cc4), (ECX));
  /* 10aca250 mov dword ptr [0x10af0d4c], 1 */
  w32((uint32_t)(0x10af0d4c), (0x1u));
  /* 10aca25a mov edx, dword ptr [0x10af0cc4] */
  EDX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca260 push edx */
  push32((uint32_t)(EDX));
  /* 10aca261 call 0x10aca4b0 */
  push32(0x10aca266u); f_10aca4b0();
  /* 10aca266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca269 mov dword ptr [0x10af0f64], eax */
  w32((uint32_t)(0x10af0f64), (EAX));
  /* 10aca26e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10aca275 jmp 0x10aca280 */
  goto L_10aca280;
L_10aca277:;
  /* 10aca277 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca27a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca27d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10aca280:;
  /* 10aca280 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca284 jae 0x10aca2a4 */
  if (!C.cf) goto L_10aca2a4;
  /* 10aca286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca289 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10aca28c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca28f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca292 mov cx, word ptr [ecx + eax*2 + 0x10aedebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10aedebc)));
  /* 10aca29a mov word ptr [edx*2 + 0x10af0d40], cx */
  w16((uint32_t)(EDX*2 + 0x10af0d40), (CX));
  /* 10aca2a2 jmp 0x10aca277 */
  goto L_10aca277;
L_10aca2a4:;
  /* 10aca2a4 call 0x10aca5b0 */
  push32(0x10aca2a9u); f_10aca5b0();
  /* 10aca2a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca2ab call 0x10ac7ad0 */
  push32(0x10aca2b0u); f_10ac7ad0();
  /* 10aca2b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca2b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca2b5 jmp 0x10aca440 */
  goto L_10aca440;
L_10aca2ba:;
  /* 10aca2ba jmp 0x10aca165 */
  goto L_10aca165;
L_10aca2bf:;
  /* 10aca2bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10aca2c2 push edx */
  push32((uint32_t)(EDX));
  /* 10aca2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca2c6 push eax */
  push32((uint32_t)(EAX));
  /* 10aca2c7 call dword ptr [0x10af22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d8))), 0x10aca2cdu);
  /* 10aca2cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca2d0 jne 0x10aca412 */
  if (!C.zf) goto L_10aca412;
  /* 10aca2d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10aca2dd jmp 0x10aca2e8 */
  goto L_10aca2e8;
L_10aca2df:;
  /* 10aca2df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca2e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca2e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10aca2e8:;
  /* 10aca2e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca2ef jae 0x10aca2fd */
  if (!C.cf) goto L_10aca2fd;
  /* 10aca2f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca2f4 mov byte ptr [edx + 0x10af0e60], 0 */
  w8((uint32_t)(EDX + 0x10af0e60), (0x0u));
  /* 10aca2fb jmp 0x10aca2df */
  goto L_10aca2df;
L_10aca2fd:;
  /* 10aca2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca300 mov dword ptr [0x10af0cc4], eax */
  w32((uint32_t)(0x10af0cc4), (EAX));
  /* 10aca305 mov dword ptr [0x10af0f64], 0 */
  w32((uint32_t)(0x10af0f64), (0x0u));
  /* 10aca30f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca313 jbe 0x10aca3ce */
  if ((C.cf||C.zf)) goto L_10aca3ce;
  /* 10aca319 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10aca31c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10aca31f jmp 0x10aca32a */
  goto L_10aca32a;
L_10aca321:;
  /* 10aca321 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10aca324 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca327 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10aca32a:;
  /* 10aca32a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10aca32d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10aca32f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10aca331 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10aca333 je 0x10aca37c */
  if (C.zf) goto L_10aca37c;
  /* 10aca335 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10aca338 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca33a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10aca33d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10aca33f je 0x10aca37c */
  if (C.zf) goto L_10aca37c;
  /* 10aca341 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10aca344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca346 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10aca348 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10aca34b jmp 0x10aca356 */
  goto L_10aca356;
L_10aca34d:;
  /* 10aca34d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca350 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca353 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10aca356:;
  /* 10aca356 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10aca359 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca35b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10aca35e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca361 ja 0x10aca37a */
  if ((!C.cf&&!C.zf)) goto L_10aca37a;
  /* 10aca363 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca366 mov cl, byte ptr [eax + 0x10af0e61] */
  CL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10aca36c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10aca36f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca372 mov byte ptr [edx + 0x10af0e61], cl */
  w8((uint32_t)(EDX + 0x10af0e61), (CL));
  /* 10aca378 jmp 0x10aca34d */
  goto L_10aca34d;
L_10aca37a:;
  /* 10aca37a jmp 0x10aca321 */
  goto L_10aca321;
L_10aca37c:;
  /* 10aca37c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10aca383 jmp 0x10aca38e */
  goto L_10aca38e;
L_10aca385:;
  /* 10aca385 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca38b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10aca38e:;
  /* 10aca38e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca395 jae 0x10aca3ae */
  if (!C.cf) goto L_10aca3ae;
  /* 10aca397 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca39a mov dl, byte ptr [ecx + 0x10af0e61] */
  DL = (r8((uint32_t)(ECX + 0x10af0e61)));
  /* 10aca3a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10aca3a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10aca3a6 mov byte ptr [eax + 0x10af0e61], dl */
  w8((uint32_t)(EAX + 0x10af0e61), (DL));
  /* 10aca3ac jmp 0x10aca385 */
  goto L_10aca385;
L_10aca3ae:;
  /* 10aca3ae mov ecx, dword ptr [0x10af0cc4] */
  ECX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca3b5 call 0x10aca4b0 */
  push32(0x10aca3bau); f_10aca4b0();
  /* 10aca3ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca3bd mov dword ptr [0x10af0f64], eax */
  w32((uint32_t)(0x10af0f64), (EAX));
  /* 10aca3c2 mov dword ptr [0x10af0d4c], 1 */
  w32((uint32_t)(0x10af0d4c), (0x1u));
  /* 10aca3cc jmp 0x10aca3d8 */
  goto L_10aca3d8;
L_10aca3ce:;
  /* 10aca3ce mov dword ptr [0x10af0d4c], 0 */
  w32((uint32_t)(0x10af0d4c), (0x0u));
L_10aca3d8:;
  /* 10aca3d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10aca3df jmp 0x10aca3ea */
  goto L_10aca3ea;
L_10aca3e1:;
  /* 10aca3e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca3e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca3e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10aca3ea:;
  /* 10aca3ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca3ee jae 0x10aca3ff */
  if (!C.cf) goto L_10aca3ff;
  /* 10aca3f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aca3f3 mov word ptr [eax*2 + 0x10af0d40], 0 */
  w16((uint32_t)(EAX*2 + 0x10af0d40), (0x0u));
  /* 10aca3fd jmp 0x10aca3e1 */
  goto L_10aca3e1;
L_10aca3ff:;
  /* 10aca3ff call 0x10aca5b0 */
  push32(0x10aca404u); f_10aca5b0();
  /* 10aca404 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca406 call 0x10ac7ad0 */
  push32(0x10aca40bu); f_10ac7ad0();
  /* 10aca40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca40e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca410 jmp 0x10aca440 */
  goto L_10aca440;
L_10aca412:;
  /* 10aca412 cmp dword ptr [0x10aef7c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca419 je 0x10aca433 */
  if (C.zf) goto L_10aca433;
  /* 10aca41b call 0x10aca530 */
  push32(0x10aca420u); f_10aca530();
  /* 10aca420 call 0x10aca5b0 */
  push32(0x10aca425u); f_10aca5b0();
  /* 10aca425 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca427 call 0x10ac7ad0 */
  push32(0x10aca42cu); f_10ac7ad0();
  /* 10aca42c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca42f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10aca431 jmp 0x10aca440 */
  goto L_10aca440;
L_10aca433:;
  /* 10aca433 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10aca435 call 0x10ac7ad0 */
  push32(0x10aca43au); f_10ac7ad0();
  /* 10aca43a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca43d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10aca440:;
  /* 10aca440 mov esp, ebp */
  ESP = (EBP);
  /* 10aca442 pop ebp */
  EBP = (pop32());
  /* 10aca443 ret  */
  ESPCHK(0x10aca100u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10aca450 (89 bytes, 21 insns) */
void f_10aca450(void) {
  FTRACE(0x10aca450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca450 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca451 mov ebp, esp */
  EBP = (ESP);
  /* 10aca453 mov dword ptr [0x10aef7c8], 0 */
  w32((uint32_t)(0x10aef7c8), (0x0u));
  /* 10aca45d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca461 jne 0x10aca475 */
  if (!C.zf) goto L_10aca475;
  /* 10aca463 mov dword ptr [0x10aef7c8], 1 */
  w32((uint32_t)(0x10aef7c8), (0x1u));
  /* 10aca46d call dword ptr [0x10af22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d0))), 0x10aca473u);
  /* 10aca473 jmp 0x10aca4a7 */
  goto L_10aca4a7;
L_10aca475:;
  /* 10aca475 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca479 jne 0x10aca48d */
  if (!C.zf) goto L_10aca48d;
  /* 10aca47b mov dword ptr [0x10aef7c8], 1 */
  w32((uint32_t)(0x10aef7c8), (0x1u));
  /* 10aca485 call dword ptr [0x10af22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22e0))), 0x10aca48bu);
  /* 10aca48b jmp 0x10aca4a7 */
  goto L_10aca4a7;
L_10aca48d:;
  /* 10aca48d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca491 jne 0x10aca4a4 */
  if (!C.zf) goto L_10aca4a4;
  /* 10aca493 mov dword ptr [0x10aef7c8], 1 */
  w32((uint32_t)(0x10aef7c8), (0x1u));
  /* 10aca49d mov eax, dword ptr [0x10aef7e8] */
  EAX = (r32((uint32_t)(0x10aef7e8)));
  /* 10aca4a2 jmp 0x10aca4a7 */
  goto L_10aca4a7;
L_10aca4a4:;
  /* 10aca4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10aca4a7:;
  /* 10aca4a7 pop ebp */
  EBP = (pop32());
  /* 10aca4a8 ret  */
  ESPCHK(0x10aca450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4b0 @ 0x10aca4b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10aca4b0(void) {
  FTRACE(0x10aca4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10aca4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca4b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10aca4ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca4bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10aca4c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10aca4c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca4ca ja 0x10aca4fa */
  if ((!C.cf&&!C.zf)) goto L_10aca4fa;
  /* 10aca4cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca4cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca4d1 mov dl, byte ptr [eax + 0x10aca514] */
  DL = (r8((uint32_t)(EAX + 0x10aca514)));
  /* 10aca4d7 jmp dword ptr [edx*4 + 0x10aca500] */
  switch (EDX) {
    case 0: goto L_10aca4de;
    case 1: goto L_10aca4e5;
    case 2: goto L_10aca4ec;
    case 3: goto L_10aca4f3;
    case 4: goto L_10aca4fa;
    default: x86_unimpl("switch@0x10aca4d7 out of table"); return;
  }
L_10aca4de:;
  /* 10aca4de mov eax, 0x411 */
  EAX = (0x411u);
  /* 10aca4e3 jmp 0x10aca4fc */
  goto L_10aca4fc;
L_10aca4e5:;
  /* 10aca4e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10aca4ea jmp 0x10aca4fc */
  goto L_10aca4fc;
L_10aca4ec:;
  /* 10aca4ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 10aca4f1 jmp 0x10aca4fc */
  goto L_10aca4fc;
L_10aca4f3:;
  /* 10aca4f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10aca4f8 jmp 0x10aca4fc */
  goto L_10aca4fc;
L_10aca4fa:;
  /* 10aca4fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10aca4fc:;
  /* 10aca4fc mov esp, ebp */
  ESP = (EBP);
  /* 10aca4fe pop ebp */
  EBP = (pop32());
  /* 10aca4ff ret  */
  ESPCHK(0x10aca4b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10aca530 (116 bytes, 29 insns) */
void f_10aca530(void) {
  FTRACE(0x10aca530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca530 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca531 mov ebp, esp */
  EBP = (ESP);
  /* 10aca533 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10aca53b jmp 0x10aca546 */
  goto L_10aca546;
L_10aca53d:;
  /* 10aca53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10aca546:;
  /* 10aca546 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca54d jge 0x10aca55b */
  if ((C.sf==C.of)) goto L_10aca55b;
  /* 10aca54f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca552 mov byte ptr [ecx + 0x10af0e60], 0 */
  w8((uint32_t)(ECX + 0x10af0e60), (0x0u));
  /* 10aca559 jmp 0x10aca53d */
  goto L_10aca53d;
L_10aca55b:;
  /* 10aca55b mov dword ptr [0x10af0cc4], 0 */
  w32((uint32_t)(0x10af0cc4), (0x0u));
  /* 10aca565 mov dword ptr [0x10af0d4c], 0 */
  w32((uint32_t)(0x10af0d4c), (0x0u));
  /* 10aca56f mov dword ptr [0x10af0f64], 0 */
  w32((uint32_t)(0x10af0f64), (0x0u));
  /* 10aca579 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10aca580 jmp 0x10aca58b */
  goto L_10aca58b;
L_10aca582:;
  /* 10aca582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca585 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca588 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10aca58b:;
  /* 10aca58b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca58f jge 0x10aca5a0 */
  if ((C.sf==C.of)) goto L_10aca5a0;
  /* 10aca591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca594 mov word ptr [eax*2 + 0x10af0d40], 0 */
  w16((uint32_t)(EAX*2 + 0x10af0d40), (0x0u));
  /* 10aca59e jmp 0x10aca582 */
  goto L_10aca582;
L_10aca5a0:;
  /* 10aca5a0 mov esp, ebp */
  ESP = (EBP);
  /* 10aca5a2 pop ebp */
  EBP = (pop32());
  /* 10aca5a3 ret  */
  ESPCHK(0x10aca530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x10aca5b0 (770 bytes, 175 insns) */
void f_10aca5b0(void) {
  FTRACE(0x10aca5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10aca5b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10aca5b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10aca5bf push eax */
  push32((uint32_t)(EAX));
  /* 10aca5c0 mov ecx, dword ptr [0x10af0cc4] */
  ECX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca5c7 call dword ptr [0x10af22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d8))), 0x10aca5cdu);
  /* 10aca5cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca5d0 jne 0x10aca7e9 */
  if (!C.zf) goto L_10aca7e9;
  /* 10aca5d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10aca5e0 jmp 0x10aca5f1 */
  goto L_10aca5f1;
L_10aca5e2:;
  /* 10aca5e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca5e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca5eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10aca5f1:;
  /* 10aca5f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca5fb jae 0x10aca612 */
  if (!C.cf) goto L_10aca612;
  /* 10aca5fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca603 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10aca609 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10aca610 jmp 0x10aca5e2 */
  goto L_10aca5e2;
L_10aca612:;
  /* 10aca612 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10aca619 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10aca61f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10aca622 jmp 0x10aca62d */
  goto L_10aca62d;
L_10aca624:;
  /* 10aca624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca627 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca62a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10aca62d:;
  /* 10aca62d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca630 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca632 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10aca634 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10aca636 je 0x10aca678 */
  if (C.zf) goto L_10aca678;
  /* 10aca638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca63b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10aca63d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10aca63f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10aca645 jmp 0x10aca656 */
  goto L_10aca656;
L_10aca647:;
  /* 10aca647 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca64d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca650 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10aca656:;
  /* 10aca656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aca659 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10aca65b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10aca65e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca664 ja 0x10aca676 */
  if ((!C.cf&&!C.zf)) goto L_10aca676;
  /* 10aca666 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca66c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10aca674 jmp 0x10aca647 */
  goto L_10aca647;
L_10aca676:;
  /* 10aca676 jmp 0x10aca624 */
  goto L_10aca624;
L_10aca678:;
  /* 10aca678 push 0 */
  push32((uint32_t)(0x0u));
  /* 10aca67a mov eax, dword ptr [0x10af0f64] */
  EAX = (r32((uint32_t)(0x10af0f64)));
  /* 10aca67f push eax */
  push32((uint32_t)(EAX));
  /* 10aca680 mov ecx, dword ptr [0x10af0cc4] */
  ECX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca686 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca687 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10aca68d push edx */
  push32((uint32_t)(EDX));
  /* 10aca68e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10aca693 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10aca699 push eax */
  push32((uint32_t)(EAX));
  /* 10aca69a push 1 */
  push32((uint32_t)(0x1u));
  /* 10aca69c call 0x10acc260 */
  push32(0x10aca6a1u); f_10acc260();
  /* 10aca6a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca6a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10aca6a6 mov ecx, dword ptr [0x10af0cc4] */
  ECX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca6ac push ecx */
  push32((uint32_t)(ECX));
  /* 10aca6ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10aca6b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10aca6b8 push edx */
  push32((uint32_t)(EDX));
  /* 10aca6b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10aca6be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10aca6c4 push eax */
  push32((uint32_t)(EAX));
  /* 10aca6c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10aca6ca mov ecx, dword ptr [0x10af0f64] */
  ECX = (r32((uint32_t)(0x10af0f64)));
  /* 10aca6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca6d1 call 0x10acc420 */
  push32(0x10aca6d6u); f_10acc420();
  /* 10aca6d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca6d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10aca6db mov edx, dword ptr [0x10af0cc4] */
  EDX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca6e1 push edx */
  push32((uint32_t)(EDX));
  /* 10aca6e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10aca6e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10aca6ed push eax */
  push32((uint32_t)(EAX));
  /* 10aca6ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10aca6f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10aca6f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10aca6fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10aca6ff mov edx, dword ptr [0x10af0f64] */
  EDX = (r32((uint32_t)(0x10af0f64)));
  /* 10aca705 push edx */
  push32((uint32_t)(EDX));
  /* 10aca706 call 0x10acc420 */
  push32(0x10aca70bu); f_10acc420();
  /* 10aca70b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca70e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10aca718 jmp 0x10aca729 */
  goto L_10aca729;
L_10aca71a:;
  /* 10aca71a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca720 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca723 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10aca729:;
  /* 10aca729 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca733 jae 0x10aca7e4 */
  if (!C.cf) goto L_10aca7e4;
  /* 10aca739 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca73f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca741 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10aca749 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10aca74c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10aca74e je 0x10aca786 */
  if (C.zf) goto L_10aca786;
  /* 10aca750 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca756 mov cl, byte ptr [eax + 0x10af0e61] */
  CL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10aca75c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10aca75f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca765 mov byte ptr [edx + 0x10af0e61], cl */
  w8((uint32_t)(EDX + 0x10af0e61), (CL));
  /* 10aca76b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca771 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca777 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10aca77e mov byte ptr [eax + 0x10af0d60], dl */
  w8((uint32_t)(EAX + 0x10af0d60), (DL));
  /* 10aca784 jmp 0x10aca7df */
  goto L_10aca7df;
L_10aca786:;
  /* 10aca786 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca78c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10aca78e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10aca796 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10aca799 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10aca79b je 0x10aca7d2 */
  if (C.zf) goto L_10aca7d2;
  /* 10aca79d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca7a3 mov al, byte ptr [edx + 0x10af0e61] */
  AL = (r8((uint32_t)(EDX + 0x10af0e61)));
  /* 10aca7a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10aca7ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca7b1 mov byte ptr [ecx + 0x10af0e61], al */
  w8((uint32_t)(ECX + 0x10af0e61), (AL));
  /* 10aca7b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca7bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca7c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10aca7ca mov byte ptr [edx + 0x10af0d60], cl */
  w8((uint32_t)(EDX + 0x10af0d60), (CL));
  /* 10aca7d0 jmp 0x10aca7df */
  goto L_10aca7df;
L_10aca7d2:;
  /* 10aca7d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca7d8 mov byte ptr [edx + 0x10af0d60], 0 */
  w8((uint32_t)(EDX + 0x10af0d60), (0x0u));
L_10aca7df:;
  /* 10aca7df jmp 0x10aca71a */
  goto L_10aca71a;
L_10aca7e4:;
  /* 10aca7e4 jmp 0x10aca8ae */
  goto L_10aca8ae;
L_10aca7e9:;
  /* 10aca7e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10aca7f3 jmp 0x10aca804 */
  goto L_10aca804;
L_10aca7f5:;
  /* 10aca7f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca7fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca7fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10aca804:;
  /* 10aca804 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca80e jae 0x10aca8ae */
  if (!C.cf) goto L_10aca8ae;
  /* 10aca814 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca81b jb 0x10aca858 */
  if (C.cf) goto L_10aca858;
  /* 10aca81d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca824 ja 0x10aca858 */
  if ((!C.cf&&!C.zf)) goto L_10aca858;
  /* 10aca826 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca82c mov dl, byte ptr [ecx + 0x10af0e61] */
  DL = (r8((uint32_t)(ECX + 0x10af0e61)));
  /* 10aca832 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10aca835 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca83b mov byte ptr [eax + 0x10af0e61], dl */
  w8((uint32_t)(EAX + 0x10af0e61), (DL));
  /* 10aca841 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca847 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca84a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca850 mov byte ptr [edx + 0x10af0d60], cl */
  w8((uint32_t)(EDX + 0x10af0d60), (CL));
  /* 10aca856 jmp 0x10aca8a9 */
  goto L_10aca8a9;
L_10aca858:;
  /* 10aca858 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca85f jb 0x10aca89c */
  if (C.cf) goto L_10aca89c;
  /* 10aca861 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca868 ja 0x10aca89c */
  if ((!C.cf&&!C.zf)) goto L_10aca89c;
  /* 10aca86a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca870 mov cl, byte ptr [eax + 0x10af0e61] */
  CL = (r8((uint32_t)(EAX + 0x10af0e61)));
  /* 10aca876 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10aca879 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca87f mov byte ptr [edx + 0x10af0e61], cl */
  w8((uint32_t)(EDX + 0x10af0e61), (CL));
  /* 10aca885 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca88b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10aca88e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca894 mov byte ptr [ecx + 0x10af0d60], al */
  w8((uint32_t)(ECX + 0x10af0d60), (AL));
  /* 10aca89a jmp 0x10aca8a9 */
  goto L_10aca8a9;
L_10aca89c:;
  /* 10aca89c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10aca8a2 mov byte ptr [edx + 0x10af0d60], 0 */
  w8((uint32_t)(EDX + 0x10af0d60), (0x0u));
L_10aca8a9:;
  /* 10aca8a9 jmp 0x10aca7f5 */
  goto L_10aca7f5;
L_10aca8ae:;
  /* 10aca8ae mov esp, ebp */
  ESP = (EBP);
  /* 10aca8b0 pop ebp */
  EBP = (pop32());
  /* 10aca8b1 ret  */
  ESPCHK(0x10aca5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x10aca8c0 (23 bytes, 9 insns) */
void f_10aca8c0(void) {
  FTRACE(0x10aca8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10aca8c3 cmp dword ptr [0x10af0d4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0d4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca8ca je 0x10aca8d3 */
  if (C.zf) goto L_10aca8d3;
  /* 10aca8cc mov eax, dword ptr [0x10af0cc4] */
  EAX = (r32((uint32_t)(0x10af0cc4)));
  /* 10aca8d1 jmp 0x10aca8d5 */
  goto L_10aca8d5;
L_10aca8d3:;
  /* 10aca8d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10aca8d5:;
  /* 10aca8d5 pop ebp */
  EBP = (pop32());
  /* 10aca8d6 ret  */
  ESPCHK(0x10aca8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8e0 @ 0x10aca8e0 (34 bytes, 10 insns) */
void f_10aca8e0(void) {
  FTRACE(0x10aca8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10aca8e3 cmp dword ptr [0x10af1110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca8ea jne 0x10aca900 */
  if (!C.zf) goto L_10aca900;
  /* 10aca8ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10aca8ee call 0x10aca100 */
  push32(0x10aca8f3u); f_10aca100();
  /* 10aca8f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca8f6 mov dword ptr [0x10af1110], 1 */
  w32((uint32_t)(0x10af1110), (0x1u));
L_10aca900:;
  /* 10aca900 pop ebp */
  EBP = (pop32());
  /* 10aca901 ret  */
  ESPCHK(0x10aca8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x10aca910 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10aca910(void) {
  FTRACE(0x10aca910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10aca910 push ebp */
  push32((uint32_t)(EBP));
  /* 10aca911 mov ebp, esp */
  EBP = (ESP);
  /* 10aca913 push edi */
  push32((uint32_t)(EDI));
  /* 10aca914 push esi */
  push32((uint32_t)(ESI));
  /* 10aca915 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10aca918 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10aca91b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10aca91e mov eax, ecx */
  EAX = (ECX);
  /* 10aca920 mov edx, ecx */
  EDX = (ECX);
  /* 10aca922 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca924 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca926 jbe 0x10aca930 */
  if ((C.cf||C.zf)) goto L_10aca930;
  /* 10aca928 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca92a jb 0x10acaaa8 */
  if (C.cf) goto L_10acaaa8;
L_10aca930:;
  /* 10aca930 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10aca936 jne 0x10aca94c */
  if (!C.zf) goto L_10aca94c;
  /* 10aca938 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10aca93b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10aca93e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca941 jb 0x10aca96c */
  if (C.cf) goto L_10aca96c;
  /* 10aca943 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10aca945 jmp dword ptr [edx*4 + 0x10acaa58] */
  switch (EDX) {
    case 0: goto L_10acaa68;
    case 1: goto L_10acaa70;
    case 2: goto L_10acaa7c;
    case 3: goto L_10acaa90;
    default: x86_unimpl("switch@0x10aca945 out of table"); return;
  }
L_10aca94c:;
  /* 10aca94c mov eax, edi */
  EAX = (EDI);
  /* 10aca94e mov edx, 3 */
  EDX = (0x3u);
  /* 10aca953 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10aca956 jb 0x10aca964 */
  if (C.cf) goto L_10aca964;
  /* 10aca958 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10aca95b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca95d jmp dword ptr [eax*4 + 0x10aca970] */
  switch (EAX) {
    case 1: goto L_10aca980;
    case 2: goto L_10aca9ac;
    case 3: goto L_10aca9d0;
    default: x86_unimpl("switch@0x10aca95d out of table"); return;
  }
L_10aca964:;
  /* 10aca964 jmp dword ptr [ecx*4 + 0x10acaa68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10acaa68)))); return;
  /* 10aca96b nop  */
  /* nop */
L_10aca96c:;
  /* 10aca96c jmp dword ptr [ecx*4 + 0x10aca9ec] */
  switch (ECX) {
    case 0: goto L_10acaa4f;
    case 1: goto L_10acaa3c;
    case 2: goto L_10acaa34;
    case 3: goto L_10acaa2c;
    case 4: goto L_10acaa24;
    case 5: goto L_10acaa1c;
    case 6: goto L_10acaa14;
    case 7: goto L_10acaa0c;
    default: x86_unimpl("switch@0x10aca96c out of table"); return;
  }
  /* 10aca973 nop  */
  /* nop */
L_10aca980:;
  /* 10aca980 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca982 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10aca984 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10aca986 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10aca989 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10aca98c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10aca98f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10aca992 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10aca995 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca998 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca99b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca99e jb 0x10aca96c */
  if (C.cf) goto L_10aca96c;
  /* 10aca9a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10aca9a2 jmp dword ptr [edx*4 + 0x10acaa58] */
  switch (EDX) {
    case 0: goto L_10acaa68;
    case 1: goto L_10acaa70;
    case 2: goto L_10acaa7c;
    case 3: goto L_10acaa90;
    default: x86_unimpl("switch@0x10aca9a2 out of table"); return;
  }
  /* 10aca9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10aca9ac:;
  /* 10aca9ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca9ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10aca9b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10aca9b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10aca9b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10aca9b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10aca9bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca9be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10aca9c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca9c4 jb 0x10aca96c */
  if (C.cf) goto L_10aca96c;
  /* 10aca9c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10aca9c8 jmp dword ptr [edx*4 + 0x10acaa58] */
  switch (EDX) {
    case 0: goto L_10acaa68;
    case 1: goto L_10acaa70;
    case 2: goto L_10acaa7c;
    case 3: goto L_10acaa90;
    default: x86_unimpl("switch@0x10aca9c8 out of table"); return;
  }
  /* 10aca9cf nop  */
  /* nop */
L_10aca9d0:;
  /* 10aca9d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10aca9d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10aca9d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10aca9d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10aca9d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10aca9da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10aca9db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10aca9de jb 0x10aca96c */
  if (C.cf) goto L_10aca96c;
  /* 10aca9e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10aca9e2 jmp dword ptr [edx*4 + 0x10acaa58] */
  switch (EDX) {
    case 0: goto L_10acaa68;
    case 1: goto L_10acaa70;
    case 2: goto L_10acaa7c;
    case 3: goto L_10acaa90;
    default: x86_unimpl("switch@0x10aca9e2 out of table"); return;
  }
  /* 10aca9e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acaa0c:;
  /* 10acaa0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10acaa10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10acaa14:;
  /* 10acaa14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10acaa18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10acaa1c:;
  /* 10acaa1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10acaa20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10acaa24:;
  /* 10acaa24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10acaa28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10acaa2c:;
  /* 10acaa2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10acaa30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10acaa34:;
  /* 10acaa34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10acaa38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10acaa3c:;
  /* 10acaa3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10acaa40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10acaa44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10acaa4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaa4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10acaa4f:;
  /* 10acaa4f jmp dword ptr [edx*4 + 0x10acaa58] */
  switch (EDX) {
    case 0: goto L_10acaa68;
    case 1: goto L_10acaa70;
    case 2: goto L_10acaa7c;
    case 3: goto L_10acaa90;
    default: x86_unimpl("switch@0x10acaa4f out of table"); return;
  }
  /* 10acaa56 mov edi, edi */
  EDI = (EDI);
L_10acaa68:;
  /* 10acaa68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acaa6b pop esi */
  ESI = (pop32());
  /* 10acaa6c pop edi */
  EDI = (pop32());
  /* 10acaa6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acaa6e ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acaa6f nop  */
  /* nop */
L_10acaa70:;
  /* 10acaa70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acaa72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acaa74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acaa77 pop esi */
  ESI = (pop32());
  /* 10acaa78 pop edi */
  EDI = (pop32());
  /* 10acaa79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acaa7a ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acaa7b nop  */
  /* nop */
L_10acaa7c:;
  /* 10acaa7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acaa7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acaa80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acaa83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acaa86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acaa89 pop esi */
  ESI = (pop32());
  /* 10acaa8a pop edi */
  EDI = (pop32());
  /* 10acaa8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acaa8c ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acaa8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acaa90:;
  /* 10acaa90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acaa92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acaa94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acaa97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acaa9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acaa9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acaaa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acaaa3 pop esi */
  ESI = (pop32());
  /* 10acaaa4 pop edi */
  EDI = (pop32());
  /* 10acaaa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acaaa6 ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acaaa7 nop  */
  /* nop */
L_10acaaa8:;
  /* 10acaaa8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10acaaac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10acaab0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10acaab6 jne 0x10acaadc */
  if (!C.zf) goto L_10acaadc;
  /* 10acaab8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acaabb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10acaabe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaac1 jb 0x10acaad0 */
  if (C.cf) goto L_10acaad0;
  /* 10acaac3 std  */
  C.df=1;
  /* 10acaac4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acaac6 cld  */
  C.df=0;
  /* 10acaac7 jmp dword ptr [edx*4 + 0x10acabf0] */
  switch (EDX) {
    case 0: goto L_10acac00;
    case 1: goto L_10acac08;
    case 2: goto L_10acac18;
    case 3: goto L_10acac2c;
    default: x86_unimpl("switch@0x10acaac7 out of table"); return;
  }
  /* 10acaace mov edi, edi */
  EDI = (EDI);
L_10acaad0:;
  /* 10acaad0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acaad2 jmp dword ptr [ecx*4 + 0x10acaba0] */
  switch (ECX) {
    case 0: goto L_10acabe7;
    default: x86_unimpl("switch@0x10acaad2 out of table"); return;
  }
  /* 10acaad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acaadc:;
  /* 10acaadc mov eax, edi */
  EAX = (EDI);
  /* 10acaade mov edx, 3 */
  EDX = (0x3u);
  /* 10acaae3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaae6 jb 0x10acaaf4 */
  if (C.cf) goto L_10acaaf4;
  /* 10acaae8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10acaaeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acaaed jmp dword ptr [eax*4 + 0x10acaaf8] */
  switch (EAX) {
    case 1: goto L_10acab08;
    case 2: goto L_10acab28;
    case 3: goto L_10acab50;
    default: x86_unimpl("switch@0x10acaaed out of table"); return;
  }
L_10acaaf4:;
  /* 10acaaf4 jmp dword ptr [ecx*4 + 0x10acabf0] */
  switch (ECX) {
    case 0: goto L_10acac00;
    case 1: goto L_10acac08;
    case 2: goto L_10acac18;
    case 3: goto L_10acac2c;
    default: x86_unimpl("switch@0x10acaaf4 out of table"); return;
  }
  /* 10acaafb nop  */
  /* nop */
L_10acab08:;
  /* 10acab08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acab0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acab0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acab10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10acab11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acab14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10acab15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acab18 jb 0x10acaad0 */
  if (C.cf) goto L_10acaad0;
  /* 10acab1a std  */
  C.df=1;
  /* 10acab1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acab1d cld  */
  C.df=0;
  /* 10acab1e jmp dword ptr [edx*4 + 0x10acabf0] */
  switch (EDX) {
    case 0: goto L_10acac00;
    case 1: goto L_10acac08;
    case 2: goto L_10acac18;
    case 3: goto L_10acac2c;
    default: x86_unimpl("switch@0x10acab1e out of table"); return;
  }
  /* 10acab25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acab28:;
  /* 10acab28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acab2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acab2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acab30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acab33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acab36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acab39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acab3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acab3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acab42 jb 0x10acaad0 */
  if (C.cf) goto L_10acaad0;
  /* 10acab44 std  */
  C.df=1;
  /* 10acab45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acab47 cld  */
  C.df=0;
  /* 10acab48 jmp dword ptr [edx*4 + 0x10acabf0] */
  switch (EDX) {
    case 0: goto L_10acac00;
    case 1: goto L_10acac08;
    case 2: goto L_10acac18;
    case 3: goto L_10acac2c;
    default: x86_unimpl("switch@0x10acab48 out of table"); return;
  }
  /* 10acab4f nop  */
  /* nop */
L_10acab50:;
  /* 10acab50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acab53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acab55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acab58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acab5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acab5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acab61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acab64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acab67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acab6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acab6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acab70 jb 0x10acaad0 */
  if (C.cf) goto L_10acaad0;
  /* 10acab76 std  */
  C.df=1;
  /* 10acab77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acab79 cld  */
  C.df=0;
  /* 10acab7a jmp dword ptr [edx*4 + 0x10acabf0] */
  switch (EDX) {
    case 0: goto L_10acac00;
    case 1: goto L_10acac08;
    case 2: goto L_10acac18;
    case 3: goto L_10acac2c;
    default: x86_unimpl("switch@0x10acab7a out of table"); return;
  }
  /* 10acab81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10acab84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10acab85 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10acab86 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acab87 adc byte ptr [ebx + ebp*4 - 0x544bef54], ch */
  { uint32_t _a=(r8((uint32_t)(EBX + EBP*4 + -0x544bef54))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBP*4 + -0x544bef54), (_r)); fl_add(_a,_b,_r,8); }
  /* 10acab8e lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acab8f adc byte ptr [ebx + ebp*4 - 0x543bef54], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EBP*4 + -0x543bef54))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBP*4 + -0x543bef54), (_r)); fl_add(_a,_b,_r,8); }
  /* 10acab96 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acab97 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10acab99 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10acab9a lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acab9b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10acab9d stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10acab9e lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acaba4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10acaba8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10acabac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10acabb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10acabb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10acabb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10acabbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10acabc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10acabc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10acabc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10acabcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10acabd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10acabd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10acabd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10acabdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10acabe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acabe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10acabe7:;
  /* 10acabe7 jmp dword ptr [edx*4 + 0x10acabf0] */
  switch (EDX) {
    case 0: goto L_10acac00;
    case 1: goto L_10acac08;
    case 2: goto L_10acac18;
    case 3: goto L_10acac2c;
    default: x86_unimpl("switch@0x10acabe7 out of table"); return;
  }
  /* 10acabee mov edi, edi */
  EDI = (EDI);
L_10acac00:;
  /* 10acac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acac03 pop esi */
  ESI = (pop32());
  /* 10acac04 pop edi */
  EDI = (pop32());
  /* 10acac05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acac06 ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acac07 nop  */
  /* nop */
L_10acac08:;
  /* 10acac08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acac0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acac0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acac11 pop esi */
  ESI = (pop32());
  /* 10acac12 pop edi */
  EDI = (pop32());
  /* 10acac13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acac14 ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acac15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acac18:;
  /* 10acac18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acac1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acac1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acac21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acac24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acac27 pop esi */
  ESI = (pop32());
  /* 10acac28 pop edi */
  EDI = (pop32());
  /* 10acac29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acac2a ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
  /* 10acac2b nop  */
  /* nop */
L_10acac2c:;
  /* 10acac2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acac2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acac32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acac35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acac38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acac3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acac3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acac41 pop esi */
  ESI = (pop32());
  /* 10acac42 pop edi */
  EDI = (pop32());
  /* 10acac43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acac44 ret  */
  ESPCHK(0x10aca910u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10acac50 (104 bytes, 43 insns) */
void f_10acac50(void) {
  FTRACE(0x10acac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acac50 push ebx */
  push32((uint32_t)(EBX));
  /* 10acac51 push esi */
  push32((uint32_t)(ESI));
  /* 10acac52 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10acac56 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acac58 jne 0x10acac72 */
  if (!C.zf) goto L_10acac72;
  /* 10acac5a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10acac5e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10acac62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10acac64 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acac66 mov ebx, eax */
  EBX = (EAX);
  /* 10acac68 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10acac6c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acac6e mov edx, ebx */
  EDX = (EBX);
  /* 10acac70 jmp 0x10acacb3 */
  goto L_10acacb3;
L_10acac72:;
  /* 10acac72 mov ecx, eax */
  ECX = (EAX);
  /* 10acac74 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10acac78 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10acac7c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10acac80:;
  /* 10acac80 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10acac82 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10acac84 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10acac86 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10acac88 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acac8a jne 0x10acac80 */
  if (!C.zf) goto L_10acac80;
  /* 10acac8c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acac8e mov esi, eax */
  ESI = (EAX);
  /* 10acac90 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10acac94 mov ecx, eax */
  ECX = (EAX);
  /* 10acac96 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10acac9a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10acac9c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acac9e jb 0x10acacae */
  if (C.cf) goto L_10acacae;
  /* 10acaca0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaca4 ja 0x10acacae */
  if ((!C.cf&&!C.zf)) goto L_10acacae;
  /* 10acaca6 jb 0x10acacaf */
  if (C.cf) goto L_10acacaf;
  /* 10acaca8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acacac jbe 0x10acacaf */
  if ((C.cf||C.zf)) goto L_10acacaf;
L_10acacae:;
  /* 10acacae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10acacaf:;
  /* 10acacaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10acacb1 mov eax, esi */
  EAX = (ESI);
L_10acacb3:;
  /* 10acacb3 pop esi */
  ESI = (pop32());
  /* 10acacb4 pop ebx */
  EBX = (pop32());
  /* 10acacb5 ret 0x10 */
  ESPCHK(0x10acac50u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10acacc0 (117 bytes, 44 insns) */
void f_10acacc0(void) {
  FTRACE(0x10acacc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acacc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10acacc1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10acacc5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acacc7 jne 0x10acace1 */
  if (!C.zf) goto L_10acace1;
  /* 10acacc9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10acaccd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10acacd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10acacd3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acacd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10acacd9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acacdb mov eax, edx */
  EAX = (EDX);
  /* 10acacdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10acacdf jmp 0x10acad31 */
  goto L_10acad31;
L_10acace1:;
  /* 10acace1 mov ecx, eax */
  ECX = (EAX);
  /* 10acace3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10acace7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10acaceb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10acacef:;
  /* 10acacef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10acacf1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10acacf3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10acacf5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10acacf7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acacf9 jne 0x10acacef */
  if (!C.zf) goto L_10acacef;
  /* 10acacfb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acacfd mov ecx, eax */
  ECX = (EAX);
  /* 10acacff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10acad03 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10acad04 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10acad08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acad0a jb 0x10acad1a */
  if (C.cf) goto L_10acad1a;
  /* 10acad0c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acad10 ja 0x10acad1a */
  if ((!C.cf&&!C.zf)) goto L_10acad1a;
  /* 10acad12 jb 0x10acad22 */
  if (C.cf) goto L_10acad22;
  /* 10acad14 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acad18 jbe 0x10acad22 */
  if ((C.cf||C.zf)) goto L_10acad22;
L_10acad1a:;
  /* 10acad1a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acad1e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10acad22:;
  /* 10acad22 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acad26 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acad2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acad2c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acad2e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10acad31:;
  /* 10acad31 pop ebx */
  EBX = (pop32());
  /* 10acad32 ret 0x10 */
  ESPCHK(0x10acacc0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ad40 @ 0x10acad40 (628 bytes, 214 insns) */
void f_10acad40(void) {
  FTRACE(0x10acad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acad40 push ebp */
  push32((uint32_t)(EBP));
  /* 10acad41 mov ebp, esp */
  EBP = (ESP);
  /* 10acad43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acad46 push ebx */
  push32((uint32_t)(EBX));
  /* 10acad47 push esi */
  push32((uint32_t)(ESI));
  /* 10acad48 push edi */
  push32((uint32_t)(EDI));
L_10acad49:;
  /* 10acad49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acad4d jne 0x10acad6d */
  if (!C.zf) goto L_10acad6d;
  /* 10acad4f push 0x10aeb07c */
  push32((uint32_t)(0x10aeb07cu));
  /* 10acad54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acad56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10acad58 push 0x10aeb070 */
  push32((uint32_t)(0x10aeb070u));
  /* 10acad5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acad5f call 0x10ac30f0 */
  push32(0x10acad64u); f_10ac30f0();
  /* 10acad64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acad67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acad6a jne 0x10acad6d */
  if (!C.zf) goto L_10acad6d;
  /* 10acad6c int3  */
  x86_unimpl("int3 @ 0x10acad6c");
L_10acad6d:;
  /* 10acad6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acad6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acad71 jne 0x10acad49 */
  if (!C.zf) goto L_10acad49;
  /* 10acad73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acad76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acad79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acad7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10acad7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10acad82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acad85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acad88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10acad8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acad90 je 0x10acad9f */
  if (C.zf) goto L_10acad9f;
  /* 10acad92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acad95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acad98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10acad9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acad9d je 0x10acadb5 */
  if (C.zf) goto L_10acadb5;
L_10acad9f:;
  /* 10acad9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acada2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10acada5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10acada7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acadaa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10acadad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acadb0 jmp 0x10acafad */
  goto L_10acafad;
L_10acadb5:;
  /* 10acadb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acadb8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10acadbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10acadbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acadc0 je 0x10acae0c */
  if (C.zf) goto L_10acae0c;
  /* 10acadc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acadc5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10acadcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acadcf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10acadd2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10acadd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acadd7 je 0x10acadf5 */
  if (C.zf) goto L_10acadf5;
  /* 10acadd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaddc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaddf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10acade2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10acade4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acade7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acadea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10acaded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acadf0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10acadf3 jmp 0x10acae0c */
  goto L_10acae0c;
L_10acadf5:;
  /* 10acadf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acadf8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acadfb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10acadfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae01 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10acae04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acae07 jmp 0x10acafad */
  goto L_10acafad;
L_10acae0c:;
  /* 10acae0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acae12 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10acae15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae18 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10acae1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae1e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acae21 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10acae24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae27 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10acae2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae2d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10acae34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acae3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acae3e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10acae41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acae47 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10acae4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acae4f jne 0x10acae7f */
  if (!C.zf) goto L_10acae7f;
  /* 10acae51 cmp dword ptr [ebp - 8], 0x10aee140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10aee140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acae58 je 0x10acae63 */
  if (C.zf) goto L_10acae63;
  /* 10acae5a cmp dword ptr [ebp - 8], 0x10aee160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10aee160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acae61 jne 0x10acae73 */
  if (!C.zf) goto L_10acae73;
L_10acae63:;
  /* 10acae63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acae66 push edx */
  push32((uint32_t)(EDX));
  /* 10acae67 call 0x10acccb0 */
  push32(0x10acae6cu); f_10acccb0();
  /* 10acae6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acae6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acae71 jne 0x10acae7f */
  if (!C.zf) goto L_10acae7f;
L_10acae73:;
  /* 10acae73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae76 push eax */
  push32((uint32_t)(EAX));
  /* 10acae77 call 0x10accbe0 */
  push32(0x10acae7cu); f_10accbe0();
  /* 10acae7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acae7f:;
  /* 10acae7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae82 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acae85 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10acae8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acae8d je 0x10acaf6b */
  if (C.zf) goto L_10acaf6b;
L_10acae93:;
  /* 10acae93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acae99 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10acae9b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acae9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acaea0 jge 0x10acaec3 */
  if ((C.sf==C.of)) goto L_10acaec3;
  /* 10acaea2 push 0x10aeb030 */
  push32((uint32_t)(0x10aeb030u));
  /* 10acaea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acaea9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10acaeae push 0x10aeb070 */
  push32((uint32_t)(0x10aeb070u));
  /* 10acaeb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acaeb5 call 0x10ac30f0 */
  push32(0x10acaebau); f_10ac30f0();
  /* 10acaeba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaebd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaec0 jne 0x10acaec3 */
  if (!C.zf) goto L_10acaec3;
  /* 10acaec2 int3  */
  x86_unimpl("int3 @ 0x10acaec2");
L_10acaec3:;
  /* 10acaec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acaec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acaec7 jne 0x10acae93 */
  if (!C.zf) goto L_10acae93;
  /* 10acaec9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaecc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaecf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10acaed1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acaed4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acaed7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaeda mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10acaedd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaee0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaee3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10acaee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaee8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10acaeeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acaeee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaef1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10acaef4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaef8 jle 0x10acaf16 */
  if ((C.zf||C.sf!=C.of)) goto L_10acaf16;
  /* 10acaefa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acaefd push ecx */
  push32((uint32_t)(ECX));
  /* 10acaefe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaf01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10acaf04 push eax */
  push32((uint32_t)(EAX));
  /* 10acaf05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acaf08 push ecx */
  push32((uint32_t)(ECX));
  /* 10acaf09 call 0x10acc8d0 */
  push32(0x10acaf0eu); f_10acc8d0();
  /* 10acaf0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaf11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10acaf14 jmp 0x10acaf5e */
  goto L_10acaf5e;
L_10acaf16:;
  /* 10acaf16 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaf1a je 0x10acaf39 */
  if (C.zf) goto L_10acaf39;
  /* 10acaf1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acaf1f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10acaf22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acaf25 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10acaf28 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acaf2b mov ecx, dword ptr [edx*4 + 0x10af0fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acaf32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaf34 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10acaf37 jmp 0x10acaf40 */
  goto L_10acaf40;
L_10acaf39:;
  /* 10acaf39 mov dword ptr [ebp - 0x14], 0x10aeda60 */
  w32((uint32_t)(EBP + -0x14), (0x10aeda60u));
L_10acaf40:;
  /* 10acaf40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10acaf43 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10acaf47 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10acaf4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acaf4c je 0x10acaf5e */
  if (C.zf) goto L_10acaf5e;
  /* 10acaf4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10acaf50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acaf52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acaf55 push ecx */
  push32((uint32_t)(ECX));
  /* 10acaf56 call 0x10acc780 */
  push32(0x10acaf5bu); f_10acc780();
  /* 10acaf5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acaf5e:;
  /* 10acaf5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaf61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10acaf64 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10acaf67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10acaf69 jmp 0x10acaf89 */
  goto L_10acaf89;
L_10acaf6b:;
  /* 10acaf6b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10acaf72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acaf75 push edx */
  push32((uint32_t)(EDX));
  /* 10acaf76 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10acaf79 push eax */
  push32((uint32_t)(EAX));
  /* 10acaf7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acaf7d push ecx */
  push32((uint32_t)(ECX));
  /* 10acaf7e call 0x10acc8d0 */
  push32(0x10acaf83u); f_10acc8d0();
  /* 10acaf83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaf86 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10acaf89:;
  /* 10acaf89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acaf8c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acaf8f je 0x10acafa5 */
  if (C.zf) goto L_10acafa5;
  /* 10acaf91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaf94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acaf97 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10acaf9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acaf9d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10acafa0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acafa3 jmp 0x10acafad */
  goto L_10acafad;
L_10acafa5:;
  /* 10acafa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acafa8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10acafad:;
  /* 10acafad pop edi */
  EDI = (pop32());
  /* 10acafae pop esi */
  ESI = (pop32());
  /* 10acafaf pop ebx */
  EBX = (pop32());
  /* 10acafb0 mov esp, ebp */
  ESP = (EBP);
  /* 10acafb2 pop ebp */
  EBP = (pop32());
  /* 10acafb3 ret  */
  ESPCHK(0x10acad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x10acafc0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10acafc0(void) {
  FTRACE(0x10acafc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acafc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acafc1 mov ebp, esp */
  EBP = (ESP);
  /* 10acafc3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acafc9 push ebx */
  push32((uint32_t)(EBX));
  /* 10acafca push esi */
  push32((uint32_t)(ESI));
  /* 10acafcb push edi */
  push32((uint32_t)(EDI));
  /* 10acafcc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10acafd3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10acafdd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10acafe4:;
  /* 10acafe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acafe7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10acafe9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10acafec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acaff0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acaff3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acaff6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10acaff9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acaffb je 0x10acbbd7 */
  if (C.zf) goto L_10acbbd7;
  /* 10acb001 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb008 jl 0x10acbbd7 */
  if ((C.sf!=C.of)) goto L_10acbbd7;
  /* 10acb00e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb012 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb015 jl 0x10acb036 */
  if ((C.sf!=C.of)) goto L_10acb036;
  /* 10acb017 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb01b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb01e jg 0x10acb036 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acb036;
  /* 10acb020 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb024 movsx ecx, byte ptr [eax + 0x10aeb068] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10aeb068))));
  /* 10acb02b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10acb02e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10acb034 jmp 0x10acb040 */
  goto L_10acb040;
L_10acb036:;
  /* 10acb036 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10acb040:;
  /* 10acb040 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10acb046 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10acb049 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acb04c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acb04f movsx edx, byte ptr [ecx + eax*8 + 0x10aeb088] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10aeb088))));
  /* 10acb057 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10acb05a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10acb05d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acb060 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10acb066 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb06d ja 0x10acbbd2 */
  if ((!C.cf&&!C.zf)) goto L_10acbbd2;
  /* 10acb073 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10acb079 jmp dword ptr [ecx*4 + 0x10acbbe4] */
  switch (ECX) {
    case 0: goto L_10acb080;
    case 1: goto L_10acb11a;
    case 2: goto L_10acb15c;
    case 3: goto L_10acb1cb;
    case 4: goto L_10acb223;
    case 5: goto L_10acb232;
    case 6: goto L_10acb27e;
    case 7: goto L_10acb311;
    case 8: goto L_10acb1a8;
    case 9: goto L_10acb1b3;
    case 10: goto L_10acb19e;
    case 11: goto L_10acb193;
    case 12: goto L_10acb1be;
    case 13: goto L_10acb1c6;
    default: x86_unimpl("switch@0x10acb079 out of table"); return;
  }
L_10acb080:;
  /* 10acb080 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10acb087 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acb08a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10acb090 mov eax, dword ptr [0x10aedc98] */
  EAX = (r32((uint32_t)(0x10aedc98)));
  /* 10acb095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acb097 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10acb09b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb0a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acb0a3 je 0x10acb0fd */
  if (C.zf) goto L_10acb0fd;
  /* 10acb0a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10acb0ab push edx */
  push32((uint32_t)(EDX));
  /* 10acb0ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acb0af push eax */
  push32((uint32_t)(EAX));
  /* 10acb0b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb0b5 call 0x10acbcf0 */
  push32(0x10acb0bau); f_10acbcf0();
  /* 10acb0ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb0bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acb0c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acb0c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10acb0c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acb0c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb0cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10acb0ce:;
  /* 10acb0ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb0d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb0d4 jne 0x10acb0f7 */
  if (!C.zf) goto L_10acb0f7;
  /* 10acb0d6 push 0x10aeb108 */
  push32((uint32_t)(0x10aeb108u));
  /* 10acb0db push 0 */
  push32((uint32_t)(0x0u));
  /* 10acb0dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10acb0e2 push 0x10aeb0fc */
  push32((uint32_t)(0x10aeb0fcu));
  /* 10acb0e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acb0e9 call 0x10ac30f0 */
  push32(0x10acb0eeu); f_10ac30f0();
  /* 10acb0ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb0f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb0f4 jne 0x10acb0f7 */
  if (!C.zf) goto L_10acb0f7;
  /* 10acb0f6 int3  */
  x86_unimpl("int3 @ 0x10acb0f6");
L_10acb0f7:;
  /* 10acb0f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acb0f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb0fb jne 0x10acb0ce */
  if (!C.zf) goto L_10acb0ce;
L_10acb0fd:;
  /* 10acb0fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10acb103 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acb107 push edx */
  push32((uint32_t)(EDX));
  /* 10acb108 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb10c push eax */
  push32((uint32_t)(EAX));
  /* 10acb10d call 0x10acbcf0 */
  push32(0x10acb112u); f_10acbcf0();
  /* 10acb112 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb115 jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb11a:;
  /* 10acb11a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10acb121 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acb124 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10acb12a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10acb130 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10acb136 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10acb13c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10acb13f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acb146 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10acb150 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10acb157 jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb15c:;
  /* 10acb15c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb160 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10acb166 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10acb16c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb16f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10acb175 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb17c ja 0x10acb1c6 */
  if ((!C.cf&&!C.zf)) goto L_10acb1c6;
  /* 10acb17e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10acb184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acb186 mov al, byte ptr [ecx + 0x10acbc1c] */
  AL = (r8((uint32_t)(ECX + 0x10acbc1c)));
  /* 10acb18c jmp dword ptr [eax*4 + 0x10acbc04] */
  switch (EAX) {
    case 0: goto L_10acb1a8;
    case 1: goto L_10acb1b3;
    case 2: goto L_10acb19e;
    case 3: goto L_10acb193;
    case 4: goto L_10acb1be;
    case 5: goto L_10acb1c6;
    default: x86_unimpl("switch@0x10acb18c out of table"); return;
  }
L_10acb193:;
  /* 10acb193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb196 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb199 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acb19c jmp 0x10acb1c6 */
  goto L_10acb1c6;
L_10acb19e:;
  /* 10acb19e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb1a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10acb1a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acb1a6 jmp 0x10acb1c6 */
  goto L_10acb1c6;
L_10acb1a8:;
  /* 10acb1a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb1ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb1ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acb1b1 jmp 0x10acb1c6 */
  goto L_10acb1c6;
L_10acb1b3:;
  /* 10acb1b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb1b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10acb1b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acb1bc jmp 0x10acb1c6 */
  goto L_10acb1c6;
L_10acb1be:;
  /* 10acb1be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb1c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10acb1c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10acb1c6:;
  /* 10acb1c6 jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb1cb:;
  /* 10acb1cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb1cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb1d2 jne 0x10acb207 */
  if (!C.zf) goto L_10acb207;
  /* 10acb1d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10acb1d7 push edx */
  push32((uint32_t)(EDX));
  /* 10acb1d8 call 0x10acbe00 */
  push32(0x10acb1ddu); f_10acbe00();
  /* 10acb1dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb1e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10acb1e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb1ed jge 0x10acb205 */
  if ((C.sf==C.of)) goto L_10acb205;
  /* 10acb1ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb1f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10acb1f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acb1f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10acb1fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acb1ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10acb205:;
  /* 10acb205 jmp 0x10acb21e */
  goto L_10acb21e;
L_10acb207:;
  /* 10acb207 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10acb20d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acb210 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb214 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10acb218 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10acb21e:;
  /* 10acb21e jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb223:;
  /* 10acb223 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10acb22d jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb232:;
  /* 10acb232 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb236 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb239 jne 0x10acb262 */
  if (!C.zf) goto L_10acb262;
  /* 10acb23b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10acb23e push eax */
  push32((uint32_t)(EAX));
  /* 10acb23f call 0x10acbe00 */
  push32(0x10acb244u); f_10acbe00();
  /* 10acb244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb247 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10acb24d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb254 jge 0x10acb260 */
  if ((C.sf==C.of)) goto L_10acb260;
  /* 10acb256 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10acb260:;
  /* 10acb260 jmp 0x10acb279 */
  goto L_10acb279;
L_10acb262:;
  /* 10acb262 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10acb268 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acb26b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb26f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10acb273 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10acb279:;
  /* 10acb279 jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb27e:;
  /* 10acb27e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb282 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10acb288 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10acb28e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb291 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10acb297 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb29e ja 0x10acb30c */
  if ((!C.cf&&!C.zf)) goto L_10acb30c;
  /* 10acb2a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10acb2a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acb2a8 mov al, byte ptr [ecx + 0x10acbc41] */
  AL = (r8((uint32_t)(ECX + 0x10acbc41)));
  /* 10acb2ae jmp dword ptr [eax*4 + 0x10acbc2d] */
  switch (EAX) {
    case 0: goto L_10acb2c0;
    case 1: goto L_10acb2f9;
    case 2: goto L_10acb2b5;
    case 3: goto L_10acb303;
    case 4: goto L_10acb30c;
    default: x86_unimpl("switch@0x10acb2ae out of table"); return;
  }
L_10acb2b5:;
  /* 10acb2b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb2b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb2bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acb2be jmp 0x10acb30c */
  goto L_10acb30c;
L_10acb2c0:;
  /* 10acb2c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acb2c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acb2c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb2c9 jne 0x10acb2eb */
  if (!C.zf) goto L_10acb2eb;
  /* 10acb2cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acb2ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10acb2d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb2d5 jne 0x10acb2eb */
  if (!C.zf) goto L_10acb2eb;
  /* 10acb2d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acb2da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb2dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10acb2e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb2e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10acb2e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acb2e9 jmp 0x10acb2f7 */
  goto L_10acb2f7;
L_10acb2eb:;
  /* 10acb2eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10acb2f2 jmp 0x10acb080 */
  goto L_10acb080;
L_10acb2f7:;
  /* 10acb2f7 jmp 0x10acb30c */
  goto L_10acb30c;
L_10acb2f9:;
  /* 10acb2f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb2fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10acb2fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acb301 jmp 0x10acb30c */
  goto L_10acb30c;
L_10acb303:;
  /* 10acb303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb306 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10acb309 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10acb30c:;
  /* 10acb30c jmp 0x10acbbd2 */
  goto L_10acbbd2;
L_10acb311:;
  /* 10acb311 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb315 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10acb31b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10acb321 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb324 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10acb32a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb331 ja 0x10acb9f7 */
  if ((!C.cf&&!C.zf)) goto L_10acb9f7;
  /* 10acb337 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10acb33d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acb33f mov cl, byte ptr [edx + 0x10acbcac] */
  CL = (r8((uint32_t)(EDX + 0x10acbcac)));
  /* 10acb345 jmp dword ptr [ecx*4 + 0x10acbc70] */
  switch (ECX) {
    case 0: goto L_10acb34c;
    case 1: goto L_10acb5e0;
    case 2: goto L_10acb470;
    case 3: goto L_10acb719;
    case 4: goto L_10acb3db;
    case 5: goto L_10acb361;
    case 6: goto L_10acb6eb;
    case 7: goto L_10acb5f0;
    case 8: goto L_10acb595;
    case 9: goto L_10acb765;
    case 10: goto L_10acb70f;
    case 11: goto L_10acb486;
    case 12: goto L_10acb703;
    case 13: goto L_10acb725;
    case 14: goto L_10acb9f7;
    default: x86_unimpl("switch@0x10acb345 out of table"); return;
  }
L_10acb34c:;
  /* 10acb34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb34f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb356 jne 0x10acb361 */
  if (!C.zf) goto L_10acb361;
  /* 10acb358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb35b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10acb35e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10acb361:;
  /* 10acb361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb364 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb36a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb36c je 0x10acb3a7 */
  if (C.zf) goto L_10acb3a7;
  /* 10acb36e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10acb371 push eax */
  push32((uint32_t)(EAX));
  /* 10acb372 call 0x10acbe40 */
  push32(0x10acb377u); f_10acbe40();
  /* 10acb377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb37a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10acb37e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10acb382 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb383 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10acb389 push edx */
  push32((uint32_t)(EDX));
  /* 10acb38a call 0x10accf20 */
  push32(0x10acb38fu); f_10accf20();
  /* 10acb38f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb392 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10acb395 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb399 jge 0x10acb3a5 */
  if ((C.sf==C.of)) goto L_10acb3a5;
  /* 10acb39b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10acb3a5:;
  /* 10acb3a5 jmp 0x10acb3cd */
  goto L_10acb3cd;
L_10acb3a7:;
  /* 10acb3a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10acb3aa push eax */
  push32((uint32_t)(EAX));
  /* 10acb3ab call 0x10acbe00 */
  push32(0x10acb3b0u); f_10acbe00();
  /* 10acb3b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb3b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10acb3ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10acb3c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10acb3c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10acb3cd:;
  /* 10acb3cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10acb3d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10acb3d6 jmp 0x10acb9f7 */
  goto L_10acb9f7;
L_10acb3db:;
  /* 10acb3db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10acb3de push eax */
  push32((uint32_t)(EAX));
  /* 10acb3df call 0x10acbe00 */
  push32(0x10acb3e4u); f_10acbe00();
  /* 10acb3e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb3e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10acb3ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb3f4 je 0x10acb402 */
  if (C.zf) goto L_10acb402;
  /* 10acb3f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10acb3fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb400 jne 0x10acb41c */
  if (!C.zf) goto L_10acb41c;
L_10acb402:;
  /* 10acb402 mov edx, dword ptr [0x10aedfb0] */
  EDX = (r32((uint32_t)(0x10aedfb0)));
  /* 10acb408 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10acb40b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb40e push eax */
  push32((uint32_t)(EAX));
  /* 10acb40f call 0x10ac6e60 */
  push32(0x10acb414u); f_10ac6e60();
  /* 10acb414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb417 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10acb41a jmp 0x10acb46b */
  goto L_10acb46b;
L_10acb41c:;
  /* 10acb41c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb41f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb425 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acb427 je 0x10acb44c */
  if (C.zf) goto L_10acb44c;
  /* 10acb429 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10acb42f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10acb432 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10acb435 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10acb43b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10acb43e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10acb440 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10acb443 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10acb44a jmp 0x10acb46b */
  goto L_10acb46b;
L_10acb44c:;
  /* 10acb44c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10acb453 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10acb459 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10acb45c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10acb45f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10acb465 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10acb468 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10acb46b:;
  /* 10acb46b jmp 0x10acb9f7 */
  goto L_10acb9f7;
L_10acb470:;
  /* 10acb470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb473 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb479 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acb47b jne 0x10acb486 */
  if (!C.zf) goto L_10acb486;
  /* 10acb47d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb480 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10acb483 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10acb486:;
  /* 10acb486 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb48d jne 0x10acb49b */
  if (!C.zf) goto L_10acb49b;
  /* 10acb48f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10acb499 jmp 0x10acb4a7 */
  goto L_10acb4a7;
L_10acb49b:;
  /* 10acb49b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10acb4a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10acb4a7:;
  /* 10acb4a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10acb4ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10acb4b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10acb4b6 push edx */
  push32((uint32_t)(EDX));
  /* 10acb4b7 call 0x10acbe00 */
  push32(0x10acb4bcu); f_10acbe00();
  /* 10acb4bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb4bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10acb4c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb4c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb4ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb4cc je 0x10acb536 */
  if (C.zf) goto L_10acb536;
  /* 10acb4ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb4d2 jne 0x10acb4dd */
  if (!C.zf) goto L_10acb4dd;
  /* 10acb4d4 mov ecx, dword ptr [0x10aedfb4] */
  ECX = (r32((uint32_t)(0x10aedfb4)));
  /* 10acb4da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10acb4dd:;
  /* 10acb4dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10acb4e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb4e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10acb4ed:;
  /* 10acb4ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10acb4f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10acb4f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb4fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10acb502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb504 je 0x10acb526 */
  if (C.zf) goto L_10acb526;
  /* 10acb506 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10acb50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acb50e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10acb511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb513 je 0x10acb526 */
  if (C.zf) goto L_10acb526;
  /* 10acb515 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10acb51b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb51e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10acb524 jmp 0x10acb4ed */
  goto L_10acb4ed;
L_10acb526:;
  /* 10acb526 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10acb52c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb52f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10acb531 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10acb534 jmp 0x10acb590 */
  goto L_10acb590;
L_10acb536:;
  /* 10acb536 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb53a jne 0x10acb544 */
  if (!C.zf) goto L_10acb544;
  /* 10acb53c mov eax, dword ptr [0x10aedfb0] */
  EAX = (r32((uint32_t)(0x10aedfb0)));
  /* 10acb541 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10acb544:;
  /* 10acb544 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb547 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10acb54d:;
  /* 10acb54d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10acb553 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10acb559 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb55c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10acb562 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb564 je 0x10acb584 */
  if (C.zf) goto L_10acb584;
  /* 10acb566 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10acb56c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acb56f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb571 je 0x10acb584 */
  if (C.zf) goto L_10acb584;
  /* 10acb573 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10acb579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb57c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10acb582 jmp 0x10acb54d */
  goto L_10acb54d;
L_10acb584:;
  /* 10acb584 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10acb58a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb58d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10acb590:;
  /* 10acb590 jmp 0x10acb9f7 */
  goto L_10acb9f7;
L_10acb595:;
  /* 10acb595 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10acb598 push edx */
  push32((uint32_t)(EDX));
  /* 10acb599 call 0x10acbe00 */
  push32(0x10acb59eu); f_10acbe00();
  /* 10acb59e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb5a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10acb5a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb5aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb5ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb5af je 0x10acb5c3 */
  if (C.zf) goto L_10acb5c3;
  /* 10acb5b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10acb5b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10acb5be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10acb5c1 jmp 0x10acb5d1 */
  goto L_10acb5d1;
L_10acb5c3:;
  /* 10acb5c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10acb5c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10acb5cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10acb5d1:;
  /* 10acb5d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10acb5db jmp 0x10acb9f7 */
  goto L_10acb9f7;
L_10acb5e0:;
  /* 10acb5e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10acb5e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10acb5ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10acb5ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10acb5f0:;
  /* 10acb5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb5f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10acb5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acb5f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10acb5fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10acb601 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb608 jge 0x10acb616 */
  if ((C.sf==C.of)) goto L_10acb616;
  /* 10acb60a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10acb614 jmp 0x10acb632 */
  goto L_10acb632;
L_10acb616:;
  /* 10acb616 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb61d jne 0x10acb632 */
  if (!C.zf) goto L_10acb632;
  /* 10acb61f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb623 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb626 jne 0x10acb632 */
  if (!C.zf) goto L_10acb632;
  /* 10acb628 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10acb632:;
  /* 10acb632 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acb635 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb638 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10acb63b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acb63e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb641 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10acb643 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10acb646 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10acb64c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10acb652 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acb655 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb656 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10acb65c push edx */
  push32((uint32_t)(EDX));
  /* 10acb65d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb661 push eax */
  push32((uint32_t)(EAX));
  /* 10acb662 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb665 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb666 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10acb66c push edx */
  push32((uint32_t)(EDX));
  /* 10acb66d call dword ptr [0x10aee3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aee3a0))), 0x10acb673u);
  /* 10acb673 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb679 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb67e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb680 je 0x10acb698 */
  if (C.zf) goto L_10acb698;
  /* 10acb682 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb689 jne 0x10acb698 */
  if (!C.zf) goto L_10acb698;
  /* 10acb68b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb68e push ecx */
  push32((uint32_t)(ECX));
  /* 10acb68f call dword ptr [0x10aee3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aee3ac))), 0x10acb695u);
  /* 10acb695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acb698:;
  /* 10acb698 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10acb69c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb69f jne 0x10acb6ba */
  if (!C.zf) goto L_10acb6ba;
  /* 10acb6a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb6a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb6ab jne 0x10acb6ba */
  if (!C.zf) goto L_10acb6ba;
  /* 10acb6ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb6b1 call dword ptr [0x10aee3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aee3a4))), 0x10acb6b7u);
  /* 10acb6b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acb6ba:;
  /* 10acb6ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb6bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acb6c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb6c3 jne 0x10acb6d7 */
  if (!C.zf) goto L_10acb6d7;
  /* 10acb6c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb6c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10acb6cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acb6ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb6d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb6d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10acb6d7:;
  /* 10acb6d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb6da push eax */
  push32((uint32_t)(EAX));
  /* 10acb6db call 0x10ac6e60 */
  push32(0x10acb6e0u); f_10ac6e60();
  /* 10acb6e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb6e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10acb6e6 jmp 0x10acb9f7 */
  goto L_10acb9f7;
L_10acb6eb:;
  /* 10acb6eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb6ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb6f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acb6f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10acb6fe jmp 0x10acb785 */
  goto L_10acb785;
L_10acb703:;
  /* 10acb703 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10acb70d jmp 0x10acb785 */
  goto L_10acb785;
L_10acb70f:;
  /* 10acb70f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10acb719:;
  /* 10acb719 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10acb723 jmp 0x10acb72f */
  goto L_10acb72f;
L_10acb725:;
  /* 10acb725 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10acb72f:;
  /* 10acb72f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10acb739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb73c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb742 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb744 je 0x10acb763 */
  if (C.zf) goto L_10acb763;
  /* 10acb746 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10acb74d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10acb753 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb756 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10acb75c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10acb763:;
  /* 10acb763 jmp 0x10acb785 */
  goto L_10acb785;
L_10acb765:;
  /* 10acb765 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10acb76f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb772 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb778 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acb77a je 0x10acb785 */
  if (C.zf) goto L_10acb785;
  /* 10acb77c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb77f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10acb782 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10acb785:;
  /* 10acb785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb788 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb78d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb78f je 0x10acb7ae */
  if (C.zf) goto L_10acb7ae;
  /* 10acb791 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10acb794 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb795 call 0x10acbe20 */
  push32(0x10acb79au); f_10acbe20();
  /* 10acb79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb79d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10acb7a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10acb7a9 jmp 0x10acb83f */
  goto L_10acb83f;
L_10acb7ae:;
  /* 10acb7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb7b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb7b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb7b6 je 0x10acb800 */
  if (C.zf) goto L_10acb800;
  /* 10acb7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb7bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb7be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb7c0 je 0x10acb7e0 */
  if (C.zf) goto L_10acb7e0;
  /* 10acb7c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10acb7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb7c6 call 0x10acbe00 */
  push32(0x10acb7cbu); f_10acbe00();
  /* 10acb7cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb7ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10acb7d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10acb7d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10acb7d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10acb7de jmp 0x10acb7fe */
  goto L_10acb7fe;
L_10acb7e0:;
  /* 10acb7e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10acb7e3 push edx */
  push32((uint32_t)(EDX));
  /* 10acb7e4 call 0x10acbe00 */
  push32(0x10acb7e9u); f_10acbe00();
  /* 10acb7e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb7ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acb7f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10acb7f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10acb7f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10acb7fe:;
  /* 10acb7fe jmp 0x10acb83f */
  goto L_10acb83f;
L_10acb800:;
  /* 10acb800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb803 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb808 je 0x10acb825 */
  if (C.zf) goto L_10acb825;
  /* 10acb80a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10acb80d push ecx */
  push32((uint32_t)(ECX));
  /* 10acb80e call 0x10acbe00 */
  push32(0x10acb813u); f_10acbe00();
  /* 10acb813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb816 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10acb817 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10acb81d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10acb823 jmp 0x10acb83f */
  goto L_10acb83f;
L_10acb825:;
  /* 10acb825 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10acb828 push edx */
  push32((uint32_t)(EDX));
  /* 10acb829 call 0x10acbe00 */
  push32(0x10acb82eu); f_10acbe00();
  /* 10acb82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acb833 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10acb839 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10acb83f:;
  /* 10acb83f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb842 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb845 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb847 je 0x10acb887 */
  if (C.zf) goto L_10acb887;
  /* 10acb849 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb850 jg 0x10acb887 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acb887;
  /* 10acb852 jl 0x10acb85d */
  if ((C.sf!=C.of)) goto L_10acb85d;
  /* 10acb854 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb85b jae 0x10acb887 */
  if (!C.cf) goto L_10acb887;
L_10acb85d:;
  /* 10acb85d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10acb863 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acb865 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10acb86b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb86e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acb870 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10acb876 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10acb87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb87f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10acb882 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acb885 jmp 0x10acb89f */
  goto L_10acb89f;
L_10acb887:;
  /* 10acb887 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10acb88d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10acb893 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10acb899 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10acb89f:;
  /* 10acb89f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb8a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb8a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb8aa jne 0x10acb8c7 */
  if (!C.zf) goto L_10acb8c7;
  /* 10acb8ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10acb8b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10acb8b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10acb8bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10acb8c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10acb8c7:;
  /* 10acb8c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb8ce jge 0x10acb8dc */
  if ((C.sf==C.of)) goto L_10acb8dc;
  /* 10acb8d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10acb8da jmp 0x10acb8e5 */
  goto L_10acb8e5;
L_10acb8dc:;
  /* 10acb8dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb8df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10acb8e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10acb8e5:;
  /* 10acb8e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10acb8eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10acb8f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb8f3 jne 0x10acb8fc */
  if (!C.zf) goto L_10acb8fc;
  /* 10acb8f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10acb8fc:;
  /* 10acb8fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10acb8ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10acb902:;
  /* 10acb902 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10acb908 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10acb90e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb911 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10acb917 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acb919 jg 0x10acb92f */
  if ((!C.zf&&C.sf==C.of)) goto L_10acb92f;
  /* 10acb91b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10acb921 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10acb927 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acb929 je 0x10acb9b0 */
  if (C.zf) goto L_10acb9b0;
L_10acb92f:;
  /* 10acb92f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10acb935 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10acb936 push edx */
  push32((uint32_t)(EDX));
  /* 10acb937 push eax */
  push32((uint32_t)(EAX));
  /* 10acb938 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10acb93e push edx */
  push32((uint32_t)(EDX));
  /* 10acb93f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10acb945 push eax */
  push32((uint32_t)(EAX));
  /* 10acb946 call 0x10acacc0 */
  push32(0x10acb94bu); f_10acacc0();
  /* 10acb94b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb94e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10acb954 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10acb95a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10acb95b push edx */
  push32((uint32_t)(EDX));
  /* 10acb95c push eax */
  push32((uint32_t)(EAX));
  /* 10acb95d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10acb963 push ecx */
  push32((uint32_t)(ECX));
  /* 10acb964 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10acb96a push edx */
  push32((uint32_t)(EDX));
  /* 10acb96b call 0x10acac50 */
  push32(0x10acb970u); f_10acac50();
  /* 10acb970 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10acb976 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10acb97c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb983 jle 0x10acb997 */
  if ((C.zf||C.sf!=C.of)) goto L_10acb997;
  /* 10acb985 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10acb98b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb991 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10acb997:;
  /* 10acb997 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb99a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10acb9a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10acb9a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb9a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb9a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10acb9ab jmp 0x10acb902 */
  goto L_10acb902;
L_10acb9b0:;
  /* 10acb9b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10acb9b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb9b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10acb9b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb9bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb9bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10acb9c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acb9c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10acb9ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acb9cc je 0x10acb9f7 */
  if (C.zf) goto L_10acb9f7;
  /* 10acb9ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb9d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acb9d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb9d7 jne 0x10acb9df */
  if (!C.zf) goto L_10acb9df;
  /* 10acb9d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb9dd jne 0x10acb9f7 */
  if (!C.zf) goto L_10acb9f7;
L_10acb9df:;
  /* 10acb9df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb9e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acb9e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10acb9e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acb9eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10acb9ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acb9f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acb9f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10acb9f7:;
  /* 10acb9f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acb9fe jne 0x10acbbd2 */
  if (!C.zf) goto L_10acbbd2;
  /* 10acba04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acba07 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10acba0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acba0c je 0x10acba5d */
  if (C.zf) goto L_10acba5d;
  /* 10acba0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acba11 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10acba17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acba19 je 0x10acba2b */
  if (C.zf) goto L_10acba2b;
  /* 10acba1b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10acba22 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10acba29 jmp 0x10acba5d */
  goto L_10acba5d;
L_10acba2b:;
  /* 10acba2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acba2e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10acba31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acba33 je 0x10acba45 */
  if (C.zf) goto L_10acba45;
  /* 10acba35 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10acba3c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10acba43 jmp 0x10acba5d */
  goto L_10acba5d;
L_10acba45:;
  /* 10acba45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acba48 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10acba4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acba4d je 0x10acba5d */
  if (C.zf) goto L_10acba5d;
  /* 10acba4f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10acba56 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10acba5d:;
  /* 10acba5d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10acba63 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acba66 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acba69 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10acba6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acba72 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10acba75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acba77 jne 0x10acba95 */
  if (!C.zf) goto L_10acba95;
  /* 10acba79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10acba7f push eax */
  push32((uint32_t)(EAX));
  /* 10acba80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acba83 push ecx */
  push32((uint32_t)(ECX));
  /* 10acba84 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10acba8a push edx */
  push32((uint32_t)(EDX));
  /* 10acba8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10acba8d call 0x10acbd70 */
  push32(0x10acba92u); f_10acbd70();
  /* 10acba92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acba95:;
  /* 10acba95 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10acba9b push eax */
  push32((uint32_t)(EAX));
  /* 10acba9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acba9f push ecx */
  push32((uint32_t)(ECX));
  /* 10acbaa0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acbaa3 push edx */
  push32((uint32_t)(EDX));
  /* 10acbaa4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10acbaaa push eax */
  push32((uint32_t)(EAX));
  /* 10acbaab call 0x10acbdb0 */
  push32(0x10acbab0u); f_10acbdb0();
  /* 10acbab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbab6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10acbab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acbabb je 0x10acbae3 */
  if (C.zf) goto L_10acbae3;
  /* 10acbabd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbac0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10acbac3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acbac5 jne 0x10acbae3 */
  if (!C.zf) goto L_10acbae3;
  /* 10acbac7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10acbacd push eax */
  push32((uint32_t)(EAX));
  /* 10acbace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbad1 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbad2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10acbad8 push edx */
  push32((uint32_t)(EDX));
  /* 10acbad9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10acbadb call 0x10acbd70 */
  push32(0x10acbae0u); f_10acbd70();
  /* 10acbae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acbae3:;
  /* 10acbae3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbae7 je 0x10acbb91 */
  if (C.zf) goto L_10acbb91;
  /* 10acbaed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbaf1 jle 0x10acbb91 */
  if ((C.zf||C.sf!=C.of)) goto L_10acbb91;
  /* 10acbaf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acbafa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10acbb00 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acbb03 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10acbb09:;
  /* 10acbb09 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10acbb0f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10acbb15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acbb18 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10acbb1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acbb20 je 0x10acbb8f */
  if (C.zf) goto L_10acbb8f;
  /* 10acbb22 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10acbb28 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10acbb2b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10acbb32 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10acbb39 push eax */
  push32((uint32_t)(EAX));
  /* 10acbb3a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10acbb40 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbb41 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10acbb47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbb4a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10acbb50 call 0x10accf20 */
  push32(0x10acbb55u); f_10accf20();
  /* 10acbb55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbb58 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10acbb5e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbb65 jg 0x10acbb69 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acbb69;
  /* 10acbb67 jmp 0x10acbb8f */
  goto L_10acbb8f;
L_10acbb69:;
  /* 10acbb69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10acbb6f push eax */
  push32((uint32_t)(EAX));
  /* 10acbb70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbb73 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbb74 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10acbb7a push edx */
  push32((uint32_t)(EDX));
  /* 10acbb7b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10acbb81 push eax */
  push32((uint32_t)(EAX));
  /* 10acbb82 call 0x10acbdb0 */
  push32(0x10acbb87u); f_10acbdb0();
  /* 10acbb87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbb8a jmp 0x10acbb09 */
  goto L_10acbb09;
L_10acbb8f:;
  /* 10acbb8f jmp 0x10acbbac */
  goto L_10acbbac;
L_10acbb91:;
  /* 10acbb91 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10acbb97 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbb98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbb9b push edx */
  push32((uint32_t)(EDX));
  /* 10acbb9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acbb9f push eax */
  push32((uint32_t)(EAX));
  /* 10acbba0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acbba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbba4 call 0x10acbdb0 */
  push32(0x10acbba9u); f_10acbdb0();
  /* 10acbba9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acbbac:;
  /* 10acbbac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbbaf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10acbbb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acbbb4 je 0x10acbbd2 */
  if (C.zf) goto L_10acbbd2;
  /* 10acbbb6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10acbbbc push eax */
  push32((uint32_t)(EAX));
  /* 10acbbbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbbc1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10acbbc7 push edx */
  push32((uint32_t)(EDX));
  /* 10acbbc8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10acbbca call 0x10acbd70 */
  push32(0x10acbbcfu); f_10acbd70();
  /* 10acbbcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acbbd2:;
  /* 10acbbd2 jmp 0x10acafe4 */
  goto L_10acafe4;
L_10acbbd7:;
  /* 10acbbd7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10acbbdd pop edi */
  EDI = (pop32());
  /* 10acbbde pop esi */
  ESI = (pop32());
  /* 10acbbdf pop ebx */
  EBX = (pop32());
  /* 10acbbe0 mov esp, ebp */
  ESP = (EBP);
  /* 10acbbe2 pop ebp */
  EBP = (pop32());
  /* 10acbbe3 ret  */
  ESPCHK(0x10acafc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x10acbcf0 (119 bytes, 44 insns) */
void f_10acbcf0(void) {
  FTRACE(0x10acbcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbcf1 mov ebp, esp */
  EBP = (ESP);
  /* 10acbcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbcf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbcf7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10acbcfa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acbcfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10acbd03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbd0a jl 0x10acbd32 */
  if ((C.sf!=C.of)) goto L_10acbd32;
  /* 10acbd0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10acbd11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10acbd14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10acbd16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10acbd1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10acbd20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acbd23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10acbd28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbd2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10acbd30 jmp 0x10acbd45 */
  goto L_10acbd45;
L_10acbd32:;
  /* 10acbd32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd35 push edx */
  push32((uint32_t)(EDX));
  /* 10acbd36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbd39 push eax */
  push32((uint32_t)(EAX));
  /* 10acbd3a call 0x10acad40 */
  push32(0x10acbd3fu); f_10acad40();
  /* 10acbd3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbd42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10acbd45:;
  /* 10acbd45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbd49 jne 0x10acbd56 */
  if (!C.zf) goto L_10acbd56;
  /* 10acbd4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acbd4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10acbd54 jmp 0x10acbd63 */
  goto L_10acbd63;
L_10acbd56:;
  /* 10acbd56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acbd59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10acbd5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbd5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acbd61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10acbd63:;
  /* 10acbd63 mov esp, ebp */
  ESP = (EBP);
  /* 10acbd65 pop ebp */
  EBP = (pop32());
  /* 10acbd66 ret  */
  ESPCHK(0x10acbcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x10acbd70 (53 bytes, 23 insns) */
void f_10acbd70(void) {
  FTRACE(0x10acbd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbd71 mov ebp, esp */
  EBP = (ESP);
L_10acbd73:;
  /* 10acbd73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbd79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acbd7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10acbd7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acbd81 jle 0x10acbda3 */
  if ((C.zf||C.sf!=C.of)) goto L_10acbda3;
  /* 10acbd83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acbd86 push edx */
  push32((uint32_t)(EDX));
  /* 10acbd87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acbd8a push eax */
  push32((uint32_t)(EAX));
  /* 10acbd8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbd8e push ecx */
  push32((uint32_t)(ECX));
  /* 10acbd8f call 0x10acbcf0 */
  push32(0x10acbd94u); f_10acbcf0();
  /* 10acbd94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbd97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acbd9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbd9d jne 0x10acbda1 */
  if (!C.zf) goto L_10acbda1;
  /* 10acbd9f jmp 0x10acbda3 */
  goto L_10acbda3;
L_10acbda1:;
  /* 10acbda1 jmp 0x10acbd73 */
  goto L_10acbd73;
L_10acbda3:;
  /* 10acbda3 pop ebp */
  EBP = (pop32());
  /* 10acbda4 ret  */
  ESPCHK(0x10acbd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x10acbdb0 (74 bytes, 31 insns) */
void f_10acbdb0(void) {
  FTRACE(0x10acbdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbdb1 mov ebp, esp */
  EBP = (ESP);
  /* 10acbdb3 push ecx */
  push32((uint32_t)(ECX));
L_10acbdb4:;
  /* 10acbdb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbdb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbdba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acbdbd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10acbdc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acbdc2 jle 0x10acbdf6 */
  if ((C.zf||C.sf!=C.of)) goto L_10acbdf6;
  /* 10acbdc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acbdc7 push edx */
  push32((uint32_t)(EDX));
  /* 10acbdc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acbdcb push eax */
  push32((uint32_t)(EAX));
  /* 10acbdcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbdcf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acbdd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acbdd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbdd8 push eax */
  push32((uint32_t)(EAX));
  /* 10acbdd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbddc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbddf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10acbde2 call 0x10acbcf0 */
  push32(0x10acbde7u); f_10acbcf0();
  /* 10acbde7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbdea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acbded cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbdf0 jne 0x10acbdf4 */
  if (!C.zf) goto L_10acbdf4;
  /* 10acbdf2 jmp 0x10acbdf6 */
  goto L_10acbdf6;
L_10acbdf4:;
  /* 10acbdf4 jmp 0x10acbdb4 */
  goto L_10acbdb4;
L_10acbdf6:;
  /* 10acbdf6 mov esp, ebp */
  ESP = (EBP);
  /* 10acbdf8 pop ebp */
  EBP = (pop32());
  /* 10acbdf9 ret  */
  ESPCHK(0x10acbdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be00 @ 0x10acbe00 (26 bytes, 12 insns) */
void f_10acbe00(void) {
  FTRACE(0x10acbe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbe00 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbe01 mov ebp, esp */
  EBP = (ESP);
  /* 10acbe03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acbe08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbe0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10acbe10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acbe15 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10acbe18 pop ebp */
  EBP = (pop32());
  /* 10acbe19 ret  */
  ESPCHK(0x10acbe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be20 @ 0x10acbe20 (31 bytes, 14 insns) */
void f_10acbe20(void) {
  FTRACE(0x10acbe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbe20 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbe21 mov ebp, esp */
  EBP = (ESP);
  /* 10acbe23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acbe28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbe2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10acbe30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acbe35 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acbe38 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10acbe3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10acbe3d pop ebp */
  EBP = (pop32());
  /* 10acbe3e ret  */
  ESPCHK(0x10acbe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be40 @ 0x10acbe40 (27 bytes, 12 insns) */
void f_10acbe40(void) {
  FTRACE(0x10acbe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbe40 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbe41 mov ebp, esp */
  EBP = (ESP);
  /* 10acbe43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acbe48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbe4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10acbe50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acbe55 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10acbe59 pop ebp */
  EBP = (pop32());
  /* 10acbe5a ret  */
  ESPCHK(0x10acbe40u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10acbe60 (145 bytes, 42 insns) */
void f_10acbe60(void) {
  FTRACE(0x10acbe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbe60 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbe61 mov ebp, esp */
  EBP = (ESP);
  /* 10acbe63 push ecx */
  push32((uint32_t)(ECX));
  /* 10acbe64 call 0x10acbf10 */
  push32(0x10acbe69u); f_10acbf10();
  /* 10acbe69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10acbe6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acbe75 jmp 0x10acbe80 */
  goto L_10acbe80;
L_10acbe77:;
  /* 10acbe77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbe7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbe7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10acbe80:;
  /* 10acbe80 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbe84 jae 0x10acbeaa */
  if (!C.cf) goto L_10acbeaa;
  /* 10acbe86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbe89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbe8c cmp ecx, dword ptr [eax*8 + 0x10aedfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10aedfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbe93 jne 0x10acbea8 */
  if (!C.zf) goto L_10acbea8;
  /* 10acbe95 call 0x10acbf00 */
  push32(0x10acbe9au); f_10acbf00();
  /* 10acbe9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acbe9d mov ecx, dword ptr [edx*8 + 0x10aedfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10aedfbc)));
  /* 10acbea4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10acbea6 jmp 0x10acbeed */
  goto L_10acbeed;
L_10acbea8:;
  /* 10acbea8 jmp 0x10acbe77 */
  goto L_10acbe77;
L_10acbeaa:;
  /* 10acbeaa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbeae jb 0x10acbec3 */
  if (C.cf) goto L_10acbec3;
  /* 10acbeb0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbeb4 ja 0x10acbec3 */
  if ((!C.cf&&!C.zf)) goto L_10acbec3;
  /* 10acbeb6 call 0x10acbf00 */
  push32(0x10acbebbu); f_10acbf00();
  /* 10acbebb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10acbec1 jmp 0x10acbeed */
  goto L_10acbeed;
L_10acbec3:;
  /* 10acbec3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbeca jb 0x10acbee2 */
  if (C.cf) goto L_10acbee2;
  /* 10acbecc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbed3 ja 0x10acbee2 */
  if ((!C.cf&&!C.zf)) goto L_10acbee2;
  /* 10acbed5 call 0x10acbf00 */
  push32(0x10acbedau); f_10acbf00();
  /* 10acbeda mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10acbee0 jmp 0x10acbeed */
  goto L_10acbeed;
L_10acbee2:;
  /* 10acbee2 call 0x10acbf00 */
  push32(0x10acbee7u); f_10acbf00();
  /* 10acbee7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10acbeed:;
  /* 10acbeed mov esp, ebp */
  ESP = (EBP);
  /* 10acbeef pop ebp */
  EBP = (pop32());
  /* 10acbef0 ret  */
  ESPCHK(0x10acbe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x10acbf00 (13 bytes, 6 insns) */
void f_10acbf00(void) {
  FTRACE(0x10acbf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbf00 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbf01 mov ebp, esp */
  EBP = (ESP);
  /* 10acbf03 call 0x10ac3a70 */
  push32(0x10acbf08u); f_10ac3a70();
  /* 10acbf08 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbf0b pop ebp */
  EBP = (pop32());
  /* 10acbf0c ret  */
  ESPCHK(0x10acbf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x10acbf10 (13 bytes, 6 insns) */
void f_10acbf10(void) {
  FTRACE(0x10acbf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbf10 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbf11 mov ebp, esp */
  EBP = (ESP);
  /* 10acbf13 call 0x10ac3a70 */
  push32(0x10acbf18u); f_10ac3a70();
  /* 10acbf18 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbf1b pop ebp */
  EBP = (pop32());
  /* 10acbf1c ret  */
  ESPCHK(0x10acbf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x10acbf20 (664 bytes, 260 insns) [15 switch table(s)] */
void f_10acbf20(void) {
  FTRACE(0x10acbf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acbf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10acbf21 mov ebp, esp */
  EBP = (ESP);
  /* 10acbf23 push edi */
  push32((uint32_t)(EDI));
  /* 10acbf24 push esi */
  push32((uint32_t)(ESI));
  /* 10acbf25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10acbf28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acbf2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10acbf2e mov eax, ecx */
  EAX = (ECX);
  /* 10acbf30 mov edx, ecx */
  EDX = (ECX);
  /* 10acbf32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbf34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbf36 jbe 0x10acbf40 */
  if ((C.cf||C.zf)) goto L_10acbf40;
  /* 10acbf38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbf3a jb 0x10acc0b8 */
  if (C.cf) goto L_10acc0b8;
L_10acbf40:;
  /* 10acbf40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10acbf46 jne 0x10acbf5c */
  if (!C.zf) goto L_10acbf5c;
  /* 10acbf48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acbf4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10acbf4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbf51 jb 0x10acbf7c */
  if (C.cf) goto L_10acbf7c;
  /* 10acbf53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acbf55 jmp dword ptr [edx*4 + 0x10acc068] */
  switch (EDX) {
    case 0: goto L_10acc078;
    case 1: goto L_10acc080;
    case 2: goto L_10acc08c;
    case 3: goto L_10acc0a0;
    default: x86_unimpl("switch@0x10acbf55 out of table"); return;
  }
L_10acbf5c:;
  /* 10acbf5c mov eax, edi */
  EAX = (EDI);
  /* 10acbf5e mov edx, 3 */
  EDX = (0x3u);
  /* 10acbf63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acbf66 jb 0x10acbf74 */
  if (C.cf) goto L_10acbf74;
  /* 10acbf68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10acbf6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbf6d jmp dword ptr [eax*4 + 0x10acbf80] */
  switch (EAX) {
    case 1: goto L_10acbf90;
    case 2: goto L_10acbfbc;
    case 3: goto L_10acbfe0;
    default: x86_unimpl("switch@0x10acbf6d out of table"); return;
  }
L_10acbf74:;
  /* 10acbf74 jmp dword ptr [ecx*4 + 0x10acc078] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10acc078)))); return;
  /* 10acbf7b nop  */
  /* nop */
L_10acbf7c:;
  /* 10acbf7c jmp dword ptr [ecx*4 + 0x10acbffc] */
  switch (ECX) {
    case 0: goto L_10acc05f;
    case 1: goto L_10acc04c;
    case 2: goto L_10acc044;
    case 3: goto L_10acc03c;
    case 4: goto L_10acc034;
    case 5: goto L_10acc02c;
    case 6: goto L_10acc024;
    case 7: goto L_10acc01c;
    default: x86_unimpl("switch@0x10acbf7c out of table"); return;
  }
  /* 10acbf83 nop  */
  /* nop */
L_10acbf90:;
  /* 10acbf90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acbf92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acbf94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acbf96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acbf99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acbf9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acbf9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acbfa2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acbfa5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbfa8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbfab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbfae jb 0x10acbf7c */
  if (C.cf) goto L_10acbf7c;
  /* 10acbfb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acbfb2 jmp dword ptr [edx*4 + 0x10acc068] */
  switch (EDX) {
    case 0: goto L_10acc078;
    case 1: goto L_10acc080;
    case 2: goto L_10acc08c;
    case 3: goto L_10acc0a0;
    default: x86_unimpl("switch@0x10acbfb2 out of table"); return;
  }
  /* 10acbfb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acbfbc:;
  /* 10acbfbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acbfbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acbfc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acbfc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acbfc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acbfc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acbfcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbfce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acbfd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbfd4 jb 0x10acbf7c */
  if (C.cf) goto L_10acbf7c;
  /* 10acbfd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acbfd8 jmp dword ptr [edx*4 + 0x10acc068] */
  switch (EDX) {
    case 0: goto L_10acc078;
    case 1: goto L_10acc080;
    case 2: goto L_10acc08c;
    case 3: goto L_10acc0a0;
    default: x86_unimpl("switch@0x10acbfd8 out of table"); return;
  }
  /* 10acbfdf nop  */
  /* nop */
L_10acbfe0:;
  /* 10acbfe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acbfe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acbfe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acbfe6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10acbfe7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acbfea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10acbfeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acbfee jb 0x10acbf7c */
  if (C.cf) goto L_10acbf7c;
  /* 10acbff0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acbff2 jmp dword ptr [edx*4 + 0x10acc068] */
  switch (EDX) {
    case 0: goto L_10acc078;
    case 1: goto L_10acc080;
    case 2: goto L_10acc08c;
    case 3: goto L_10acc0a0;
    default: x86_unimpl("switch@0x10acbff2 out of table"); return;
  }
  /* 10acbff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acc01c:;
  /* 10acc01c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10acc020 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10acc024:;
  /* 10acc024 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10acc028 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10acc02c:;
  /* 10acc02c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10acc030 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10acc034:;
  /* 10acc034 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10acc038 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10acc03c:;
  /* 10acc03c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10acc040 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10acc044:;
  /* 10acc044 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10acc048 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10acc04c:;
  /* 10acc04c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10acc050 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10acc054 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10acc05b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc05d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10acc05f:;
  /* 10acc05f jmp dword ptr [edx*4 + 0x10acc068] */
  switch (EDX) {
    case 0: goto L_10acc078;
    case 1: goto L_10acc080;
    case 2: goto L_10acc08c;
    case 3: goto L_10acc0a0;
    default: x86_unimpl("switch@0x10acc05f out of table"); return;
  }
  /* 10acc066 mov edi, edi */
  EDI = (EDI);
L_10acc078:;
  /* 10acc078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc07b pop esi */
  ESI = (pop32());
  /* 10acc07c pop edi */
  EDI = (pop32());
  /* 10acc07d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc07e ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc07f nop  */
  /* nop */
L_10acc080:;
  /* 10acc080 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acc082 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acc084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc087 pop esi */
  ESI = (pop32());
  /* 10acc088 pop edi */
  EDI = (pop32());
  /* 10acc089 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc08a ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc08b nop  */
  /* nop */
L_10acc08c:;
  /* 10acc08c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acc08e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acc090 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acc093 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acc096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc099 pop esi */
  ESI = (pop32());
  /* 10acc09a pop edi */
  EDI = (pop32());
  /* 10acc09b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc09c ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc09d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acc0a0:;
  /* 10acc0a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acc0a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10acc0a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acc0a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acc0aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acc0ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acc0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc0b3 pop esi */
  ESI = (pop32());
  /* 10acc0b4 pop edi */
  EDI = (pop32());
  /* 10acc0b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc0b6 ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc0b7 nop  */
  /* nop */
L_10acc0b8:;
  /* 10acc0b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10acc0bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10acc0c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10acc0c6 jne 0x10acc0ec */
  if (!C.zf) goto L_10acc0ec;
  /* 10acc0c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acc0cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10acc0ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc0d1 jb 0x10acc0e0 */
  if (C.cf) goto L_10acc0e0;
  /* 10acc0d3 std  */
  C.df=1;
  /* 10acc0d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acc0d6 cld  */
  C.df=0;
  /* 10acc0d7 jmp dword ptr [edx*4 + 0x10acc200] */
  switch (EDX) {
    case 0: goto L_10acc210;
    case 1: goto L_10acc218;
    case 2: goto L_10acc228;
    case 3: goto L_10acc23c;
    default: x86_unimpl("switch@0x10acc0d7 out of table"); return;
  }
  /* 10acc0de mov edi, edi */
  EDI = (EDI);
L_10acc0e0:;
  /* 10acc0e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acc0e2 jmp dword ptr [ecx*4 + 0x10acc1b0] */
  switch (ECX) {
    case 0: goto L_10acc1f7;
    default: x86_unimpl("switch@0x10acc0e2 out of table"); return;
  }
  /* 10acc0e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acc0ec:;
  /* 10acc0ec mov eax, edi */
  EAX = (EDI);
  /* 10acc0ee mov edx, 3 */
  EDX = (0x3u);
  /* 10acc0f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc0f6 jb 0x10acc104 */
  if (C.cf) goto L_10acc104;
  /* 10acc0f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10acc0fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc0fd jmp dword ptr [eax*4 + 0x10acc108] */
  switch (EAX) {
    case 1: goto L_10acc118;
    case 2: goto L_10acc138;
    case 3: goto L_10acc160;
    default: x86_unimpl("switch@0x10acc0fd out of table"); return;
  }
L_10acc104:;
  /* 10acc104 jmp dword ptr [ecx*4 + 0x10acc200] */
  switch (ECX) {
    case 0: goto L_10acc210;
    case 1: goto L_10acc218;
    case 2: goto L_10acc228;
    case 3: goto L_10acc23c;
    default: x86_unimpl("switch@0x10acc104 out of table"); return;
  }
  /* 10acc10b nop  */
  /* nop */
L_10acc118:;
  /* 10acc118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acc11b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acc11d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acc120 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10acc121 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acc124 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10acc125 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc128 jb 0x10acc0e0 */
  if (C.cf) goto L_10acc0e0;
  /* 10acc12a std  */
  C.df=1;
  /* 10acc12b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acc12d cld  */
  C.df=0;
  /* 10acc12e jmp dword ptr [edx*4 + 0x10acc200] */
  switch (EDX) {
    case 0: goto L_10acc210;
    case 1: goto L_10acc218;
    case 2: goto L_10acc228;
    case 3: goto L_10acc23c;
    default: x86_unimpl("switch@0x10acc12e out of table"); return;
  }
  /* 10acc135 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acc138:;
  /* 10acc138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acc13b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acc13d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acc140 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acc143 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acc146 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acc149 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc14c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc14f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc152 jb 0x10acc0e0 */
  if (C.cf) goto L_10acc0e0;
  /* 10acc154 std  */
  C.df=1;
  /* 10acc155 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acc157 cld  */
  C.df=0;
  /* 10acc158 jmp dword ptr [edx*4 + 0x10acc200] */
  switch (EDX) {
    case 0: goto L_10acc210;
    case 1: goto L_10acc218;
    case 2: goto L_10acc228;
    case 3: goto L_10acc23c;
    default: x86_unimpl("switch@0x10acc158 out of table"); return;
  }
  /* 10acc15f nop  */
  /* nop */
L_10acc160:;
  /* 10acc160 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acc163 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10acc165 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acc168 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acc16b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acc16e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acc171 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10acc174 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acc177 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc17a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc17d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc180 jb 0x10acc0e0 */
  if (C.cf) goto L_10acc0e0;
  /* 10acc186 std  */
  C.df=1;
  /* 10acc187 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10acc189 cld  */
  C.df=0;
  /* 10acc18a jmp dword ptr [edx*4 + 0x10acc200] */
  switch (EDX) {
    case 0: goto L_10acc210;
    case 1: goto L_10acc218;
    case 2: goto L_10acc228;
    case 3: goto L_10acc23c;
    default: x86_unimpl("switch@0x10acc18a out of table"); return;
  }
  /* 10acc191 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10acc194 mov ah, 0xc1 */
  AH = (0xc1u);
  /* 10acc196 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acc197 adc byte ptr [ecx + eax*8 - 0x3e3bef54], bh */
  { uint32_t _a=(r8((uint32_t)(ECX + EAX*8 + -0x3e3bef54))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EAX*8 + -0x3e3bef54), (_r)); fl_add(_a,_b,_r,8); }
  /* 10acc19e lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acc19f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10acc1a1 shr dword ptr [eax + edx + 0x10acc1d4], 0xdc */
  w32((uint32_t)(EAX + EDX*1 + 0x10acc1d4), (sh_shr((uint32_t)(r32((uint32_t)(EAX + EDX*1 + 0x10acc1d4))), (0xdcu)&0x1f, 32)));
  /* 10acc1aa lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acc1ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10acc1ae lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10acc1b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10acc1b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10acc1bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10acc1c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10acc1c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10acc1c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10acc1cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10acc1d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10acc1d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10acc1d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10acc1dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10acc1e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10acc1e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10acc1e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10acc1ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10acc1f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc1f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10acc1f7:;
  /* 10acc1f7 jmp dword ptr [edx*4 + 0x10acc200] */
  switch (EDX) {
    case 0: goto L_10acc210;
    case 1: goto L_10acc218;
    case 2: goto L_10acc228;
    case 3: goto L_10acc23c;
    default: x86_unimpl("switch@0x10acc1f7 out of table"); return;
  }
  /* 10acc1fe mov edi, edi */
  EDI = (EDI);
L_10acc210:;
  /* 10acc210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc213 pop esi */
  ESI = (pop32());
  /* 10acc214 pop edi */
  EDI = (pop32());
  /* 10acc215 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc216 ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc217 nop  */
  /* nop */
L_10acc218:;
  /* 10acc218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acc21b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acc21e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc221 pop esi */
  ESI = (pop32());
  /* 10acc222 pop edi */
  EDI = (pop32());
  /* 10acc223 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc224 ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc225 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acc228:;
  /* 10acc228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acc22b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acc22e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acc231 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acc234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc237 pop esi */
  ESI = (pop32());
  /* 10acc238 pop edi */
  EDI = (pop32());
  /* 10acc239 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc23a ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
  /* 10acc23b nop  */
  /* nop */
L_10acc23c:;
  /* 10acc23c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10acc23f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10acc242 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10acc245 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10acc248 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10acc24b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10acc24e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc251 pop esi */
  ESI = (pop32());
  /* 10acc252 pop edi */
  EDI = (pop32());
  /* 10acc253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acc254 ret  */
  ESPCHK(0x10acbf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x10acc260 (421 bytes, 148 insns) */
void f_10acc260(void) {
  FTRACE(0x10acc260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc260 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc261 mov ebp, esp */
  EBP = (ESP);
  /* 10acc263 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10acc265 push 0x10aeb120 */
  push32((uint32_t)(0x10aeb120u));
  /* 10acc26a push 0x10acd138 */
  push32((uint32_t)(0x10acd138u));
  /* 10acc26f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10acc275 push eax */
  push32((uint32_t)(EAX));
  /* 10acc276 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10acc27d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc280 push ebx */
  push32((uint32_t)(EBX));
  /* 10acc281 push esi */
  push32((uint32_t)(ESI));
  /* 10acc282 push edi */
  push32((uint32_t)(EDI));
  /* 10acc283 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10acc286 cmp dword ptr [0x10aef7cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc28d jne 0x10acc2de */
  if (!C.zf) goto L_10acc2de;
  /* 10acc28f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10acc292 push eax */
  push32((uint32_t)(EAX));
  /* 10acc293 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc295 push 0x10aeb11c */
  push32((uint32_t)(0x10aeb11cu));
  /* 10acc29a push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc29c call dword ptr [0x10af22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c4))), 0x10acc2a2u);
  /* 10acc2a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc2a4 je 0x10acc2b2 */
  if (C.zf) goto L_10acc2b2;
  /* 10acc2a6 mov dword ptr [0x10aef7cc], 1 */
  w32((uint32_t)(0x10aef7cc), (0x1u));
  /* 10acc2b0 jmp 0x10acc2de */
  goto L_10acc2de;
L_10acc2b2:;
  /* 10acc2b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10acc2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc2b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc2b8 push 0x10aeb118 */
  push32((uint32_t)(0x10aeb118u));
  /* 10acc2bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc2bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc2c1 call dword ptr [0x10af22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d4))), 0x10acc2c7u);
  /* 10acc2c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc2c9 je 0x10acc2d7 */
  if (C.zf) goto L_10acc2d7;
  /* 10acc2cb mov dword ptr [0x10aef7cc], 2 */
  w32((uint32_t)(0x10aef7cc), (0x2u));
  /* 10acc2d5 jmp 0x10acc2de */
  goto L_10acc2de;
L_10acc2d7:;
  /* 10acc2d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc2d9 jmp 0x10acc408 */
  goto L_10acc408;
L_10acc2de:;
  /* 10acc2de cmp dword ptr [0x10aef7cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc2e5 jne 0x10acc315 */
  if (!C.zf) goto L_10acc315;
  /* 10acc2e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc2eb jne 0x10acc2f6 */
  if (!C.zf) goto L_10acc2f6;
  /* 10acc2ed mov edx, dword ptr [0x10aef7d8] */
  EDX = (r32((uint32_t)(0x10aef7d8)));
  /* 10acc2f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10acc2f6:;
  /* 10acc2f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acc2f9 push eax */
  push32((uint32_t)(EAX));
  /* 10acc2fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc2fd push ecx */
  push32((uint32_t)(ECX));
  /* 10acc2fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc301 push edx */
  push32((uint32_t)(EDX));
  /* 10acc302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc305 push eax */
  push32((uint32_t)(EAX));
  /* 10acc306 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10acc309 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc30a call dword ptr [0x10af22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d4))), 0x10acc310u);
  /* 10acc310 jmp 0x10acc408 */
  goto L_10acc408;
L_10acc315:;
  /* 10acc315 cmp dword ptr [0x10aef7cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc31c jne 0x10acc406 */
  if (!C.zf) goto L_10acc406;
  /* 10acc322 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc326 jne 0x10acc331 */
  if (!C.zf) goto L_10acc331;
  /* 10acc328 mov edx, dword ptr [0x10aef7e8] */
  EDX = (r32((uint32_t)(0x10aef7e8)));
  /* 10acc32e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10acc331:;
  /* 10acc331 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc335 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc338 push eax */
  push32((uint32_t)(EAX));
  /* 10acc339 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc33c push ecx */
  push32((uint32_t)(ECX));
  /* 10acc33d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10acc340 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acc342 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc344 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10acc347 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc34a push edx */
  push32((uint32_t)(EDX));
  /* 10acc34b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10acc34e push eax */
  push32((uint32_t)(EAX));
  /* 10acc34f call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10acc355u);
  /* 10acc355 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10acc358 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc35c jne 0x10acc365 */
  if (!C.zf) goto L_10acc365;
  /* 10acc35e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc360 jmp 0x10acc408 */
  goto L_10acc408;
L_10acc365:;
  /* 10acc365 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acc36c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acc36f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10acc371 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc374 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10acc376 call 0x10ac71d0 */
  push32(0x10acc37bu); f_10ac71d0();
  /* 10acc37b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10acc37e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10acc381 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acc384 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10acc387 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acc38a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10acc38c push edx */
  push32((uint32_t)(EDX));
  /* 10acc38d push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc38f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc392 push eax */
  push32((uint32_t)(EAX));
  /* 10acc393 call 0x10ac7da0 */
  push32(0x10acc398u); f_10ac7da0();
  /* 10acc398 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc39b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10acc3a2 jmp 0x10acc3bb */
  goto L_10acc3bb;
  /* 10acc3a4 mov eax, 1 */
  EAX = (0x1u);
  /* 10acc3a9 ret  */
  ESPCHK(0x10acc260u, _esp0);
  ESP += 4; return;
  /* 10acc3aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10acc3ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10acc3b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10acc3bb:;
  /* 10acc3bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc3bf jne 0x10acc3c5 */
  if (!C.zf) goto L_10acc3c5;
  /* 10acc3c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc3c3 jmp 0x10acc408 */
  goto L_10acc408;
L_10acc3c5:;
  /* 10acc3c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acc3c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc3c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc3cc push edx */
  push32((uint32_t)(EDX));
  /* 10acc3cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc3d0 push eax */
  push32((uint32_t)(EAX));
  /* 10acc3d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc3d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc3d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10acc3da push edx */
  push32((uint32_t)(EDX));
  /* 10acc3db call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10acc3e1u);
  /* 10acc3e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10acc3e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc3e8 jne 0x10acc3ee */
  if (!C.zf) goto L_10acc3ee;
  /* 10acc3ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc3ec jmp 0x10acc408 */
  goto L_10acc408;
L_10acc3ee:;
  /* 10acc3ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acc3f1 push eax */
  push32((uint32_t)(EAX));
  /* 10acc3f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acc3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc3f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc3f9 push edx */
  push32((uint32_t)(EDX));
  /* 10acc3fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc3fd push eax */
  push32((uint32_t)(EAX));
  /* 10acc3fe call dword ptr [0x10af22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c4))), 0x10acc404u);
  /* 10acc404 jmp 0x10acc408 */
  goto L_10acc408;
L_10acc406:;
  /* 10acc406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10acc408:;
  /* 10acc408 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10acc40b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acc40e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10acc415 pop edi */
  EDI = (pop32());
  /* 10acc416 pop esi */
  ESI = (pop32());
  /* 10acc417 pop ebx */
  EBX = (pop32());
  /* 10acc418 mov esp, ebp */
  ESP = (EBP);
  /* 10acc41a pop ebp */
  EBP = (pop32());
  /* 10acc41b ret  */
  ESPCHK(0x10acc260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x10acc420 (727 bytes, 263 insns) */
void f_10acc420(void) {
  FTRACE(0x10acc420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc420 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc421 mov ebp, esp */
  EBP = (ESP);
  /* 10acc423 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10acc425 push 0x10aeb130 */
  push32((uint32_t)(0x10aeb130u));
  /* 10acc42a push 0x10acd138 */
  push32((uint32_t)(0x10acd138u));
  /* 10acc42f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10acc435 push eax */
  push32((uint32_t)(EAX));
  /* 10acc436 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10acc43d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc440 push ebx */
  push32((uint32_t)(EBX));
  /* 10acc441 push esi */
  push32((uint32_t)(ESI));
  /* 10acc442 push edi */
  push32((uint32_t)(EDI));
  /* 10acc443 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10acc446 cmp dword ptr [0x10aef7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc44d jne 0x10acc4a6 */
  if (!C.zf) goto L_10acc4a6;
  /* 10acc44f push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc451 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc455 push 0x10aeb11c */
  push32((uint32_t)(0x10aeb11cu));
  /* 10acc45a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10acc45f push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc461 call dword ptr [0x10af22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c8))), 0x10acc467u);
  /* 10acc467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc469 je 0x10acc477 */
  if (C.zf) goto L_10acc477;
  /* 10acc46b mov dword ptr [0x10aef7f0], 1 */
  w32((uint32_t)(0x10aef7f0), (0x1u));
  /* 10acc475 jmp 0x10acc4a6 */
  goto L_10acc4a6;
L_10acc477:;
  /* 10acc477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc479 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc47b push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc47d push 0x10aeb118 */
  push32((uint32_t)(0x10aeb118u));
  /* 10acc482 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10acc487 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc489 call dword ptr [0x10af22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c0))), 0x10acc48fu);
  /* 10acc48f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc491 je 0x10acc49f */
  if (C.zf) goto L_10acc49f;
  /* 10acc493 mov dword ptr [0x10aef7f0], 2 */
  w32((uint32_t)(0x10aef7f0), (0x2u));
  /* 10acc49d jmp 0x10acc4a6 */
  goto L_10acc4a6;
L_10acc49f:;
  /* 10acc49f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc4a1 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc4a6:;
  /* 10acc4a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc4aa jle 0x10acc4bf */
  if ((C.zf||C.sf!=C.of)) goto L_10acc4bf;
  /* 10acc4ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acc4af push eax */
  push32((uint32_t)(EAX));
  /* 10acc4b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc4b4 call 0x10acc730 */
  push32(0x10acc4b9u); f_10acc730();
  /* 10acc4b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc4bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10acc4bf:;
  /* 10acc4bf cmp dword ptr [0x10aef7f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc4c6 jne 0x10acc4eb */
  if (!C.zf) goto L_10acc4eb;
  /* 10acc4c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10acc4cb push edx */
  push32((uint32_t)(EDX));
  /* 10acc4cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10acc4cf push eax */
  push32((uint32_t)(EAX));
  /* 10acc4d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acc4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc4d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc4d7 push edx */
  push32((uint32_t)(EDX));
  /* 10acc4d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc4db push eax */
  push32((uint32_t)(EAX));
  /* 10acc4dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc4df push ecx */
  push32((uint32_t)(ECX));
  /* 10acc4e0 call dword ptr [0x10af22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c0))), 0x10acc4e6u);
  /* 10acc4e6 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc4eb:;
  /* 10acc4eb cmp dword ptr [0x10aef7f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc4f2 jne 0x10acc70f */
  if (!C.zf) goto L_10acc70f;
  /* 10acc4f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc4fc jne 0x10acc507 */
  if (!C.zf) goto L_10acc507;
  /* 10acc4fe mov edx, dword ptr [0x10aef7e8] */
  EDX = (r32((uint32_t)(0x10aef7e8)));
  /* 10acc504 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10acc507:;
  /* 10acc507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc509 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc50b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acc50e push eax */
  push32((uint32_t)(EAX));
  /* 10acc50f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc512 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc513 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10acc516 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acc518 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc51a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10acc51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc520 push edx */
  push32((uint32_t)(EDX));
  /* 10acc521 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10acc524 push eax */
  push32((uint32_t)(EAX));
  /* 10acc525 call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10acc52bu);
  /* 10acc52b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10acc52e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc532 jne 0x10acc53b */
  if (!C.zf) goto L_10acc53b;
  /* 10acc534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc536 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc53b:;
  /* 10acc53b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acc542 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acc545 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10acc547 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc54a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10acc54c call 0x10ac71d0 */
  push32(0x10acc551u); f_10ac71d0();
  /* 10acc551 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10acc554 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10acc557 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acc55a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10acc55d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10acc564 jmp 0x10acc57d */
  goto L_10acc57d;
  /* 10acc566 mov eax, 1 */
  EAX = (0x1u);
  /* 10acc56b ret  */
  ESPCHK(0x10acc420u, _esp0);
  ESP += 4; return;
  /* 10acc56c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10acc56f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10acc576 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10acc57d:;
  /* 10acc57d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc581 jne 0x10acc58a */
  if (!C.zf) goto L_10acc58a;
  /* 10acc583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc585 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc58a:;
  /* 10acc58a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acc58d push edx */
  push32((uint32_t)(EDX));
  /* 10acc58e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc591 push eax */
  push32((uint32_t)(EAX));
  /* 10acc592 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10acc595 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc596 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc599 push edx */
  push32((uint32_t)(EDX));
  /* 10acc59a push 1 */
  push32((uint32_t)(0x1u));
  /* 10acc59c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10acc59f push eax */
  push32((uint32_t)(EAX));
  /* 10acc5a0 call dword ptr [0x10af22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22cc))), 0x10acc5a6u);
  /* 10acc5a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc5a8 jne 0x10acc5b1 */
  if (!C.zf) goto L_10acc5b1;
  /* 10acc5aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc5ac jmp 0x10acc711 */
  goto L_10acc711;
L_10acc5b1:;
  /* 10acc5b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc5b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc5b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acc5b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc5b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc5bc push edx */
  push32((uint32_t)(EDX));
  /* 10acc5bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc5c0 push eax */
  push32((uint32_t)(EAX));
  /* 10acc5c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc5c5 call dword ptr [0x10af22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c8))), 0x10acc5cbu);
  /* 10acc5cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10acc5ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc5d2 jne 0x10acc5db */
  if (!C.zf) goto L_10acc5db;
  /* 10acc5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc5d6 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc5db:;
  /* 10acc5db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc5de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10acc5e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acc5e6 je 0x10acc62b */
  if (C.zf) goto L_10acc62b;
  /* 10acc5e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc5ec je 0x10acc626 */
  if (C.zf) goto L_10acc626;
  /* 10acc5ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acc5f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc5f4 jle 0x10acc5fd */
  if ((C.zf||C.sf!=C.of)) goto L_10acc5fd;
  /* 10acc5f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc5f8 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc5fd:;
  /* 10acc5fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10acc600 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc601 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10acc604 push edx */
  push32((uint32_t)(EDX));
  /* 10acc605 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acc608 push eax */
  push32((uint32_t)(EAX));
  /* 10acc609 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc60c push ecx */
  push32((uint32_t)(ECX));
  /* 10acc60d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc610 push edx */
  push32((uint32_t)(EDX));
  /* 10acc611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc614 push eax */
  push32((uint32_t)(EAX));
  /* 10acc615 call dword ptr [0x10af22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c8))), 0x10acc61bu);
  /* 10acc61b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc61d jne 0x10acc626 */
  if (!C.zf) goto L_10acc626;
  /* 10acc61f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc621 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc626:;
  /* 10acc626 jmp 0x10acc70a */
  goto L_10acc70a;
L_10acc62b:;
  /* 10acc62b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acc62e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10acc631 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10acc638 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acc63b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10acc63d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc640 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10acc642 call 0x10ac71d0 */
  push32(0x10acc647u); f_10ac71d0();
  /* 10acc647 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10acc64a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10acc64d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10acc650 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10acc653 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10acc65a jmp 0x10acc673 */
  goto L_10acc673;
  /* 10acc65c mov eax, 1 */
  EAX = (0x1u);
  /* 10acc661 ret  */
  ESPCHK(0x10acc420u, _esp0);
  ESP += 4; return;
  /* 10acc662 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10acc665 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10acc66c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10acc673:;
  /* 10acc673 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc677 jne 0x10acc680 */
  if (!C.zf) goto L_10acc680;
  /* 10acc679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc67b jmp 0x10acc711 */
  goto L_10acc711;
L_10acc680:;
  /* 10acc680 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acc683 push eax */
  push32((uint32_t)(EAX));
  /* 10acc684 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acc687 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc688 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acc68b push edx */
  push32((uint32_t)(EDX));
  /* 10acc68c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acc68f push eax */
  push32((uint32_t)(EAX));
  /* 10acc690 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc693 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc697 push edx */
  push32((uint32_t)(EDX));
  /* 10acc698 call dword ptr [0x10af22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22c8))), 0x10acc69eu);
  /* 10acc69e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc6a0 jne 0x10acc6a6 */
  if (!C.zf) goto L_10acc6a6;
  /* 10acc6a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc6a4 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc6a6:;
  /* 10acc6a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc6aa jne 0x10acc6da */
  if (!C.zf) goto L_10acc6da;
  /* 10acc6ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc6ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc6b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acc6b7 push eax */
  push32((uint32_t)(EAX));
  /* 10acc6b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acc6bb push ecx */
  push32((uint32_t)(ECX));
  /* 10acc6bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10acc6c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10acc6c4 push edx */
  push32((uint32_t)(EDX));
  /* 10acc6c5 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10acc6cbu);
  /* 10acc6cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10acc6ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc6d2 jne 0x10acc6d8 */
  if (!C.zf) goto L_10acc6d8;
  /* 10acc6d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc6d6 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc6d8:;
  /* 10acc6d8 jmp 0x10acc70a */
  goto L_10acc70a;
L_10acc6da:;
  /* 10acc6da push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc6dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc6de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10acc6e1 push eax */
  push32((uint32_t)(EAX));
  /* 10acc6e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10acc6e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc6e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acc6e9 push edx */
  push32((uint32_t)(EDX));
  /* 10acc6ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acc6ed push eax */
  push32((uint32_t)(EAX));
  /* 10acc6ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10acc6f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10acc6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc6f7 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10acc6fdu);
  /* 10acc6fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10acc700 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc704 jne 0x10acc70a */
  if (!C.zf) goto L_10acc70a;
  /* 10acc706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc708 jmp 0x10acc711 */
  goto L_10acc711;
L_10acc70a:;
  /* 10acc70a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acc70d jmp 0x10acc711 */
  goto L_10acc711;
L_10acc70f:;
  /* 10acc70f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10acc711:;
  /* 10acc711 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10acc714 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acc717 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10acc71e pop edi */
  EDI = (pop32());
  /* 10acc71f pop esi */
  ESI = (pop32());
  /* 10acc720 pop ebx */
  EBX = (pop32());
  /* 10acc721 mov esp, ebp */
  ESP = (EBP);
  /* 10acc723 pop ebp */
  EBP = (pop32());
  /* 10acc724 ret  */
  ESPCHK(0x10acc420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c730 @ 0x10acc730 (80 bytes, 32 insns) */
void f_10acc730(void) {
  FTRACE(0x10acc730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc730 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc731 mov ebp, esp */
  EBP = (ESP);
  /* 10acc733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc739 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acc73c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc73f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10acc742:;
  /* 10acc742 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acc745 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acc748 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc74b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acc74e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acc750 je 0x10acc767 */
  if (C.zf) goto L_10acc767;
  /* 10acc752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acc755 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acc758 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acc75a je 0x10acc767 */
  if (C.zf) goto L_10acc767;
  /* 10acc75c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acc75f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acc765 jmp 0x10acc742 */
  goto L_10acc742;
L_10acc767:;
  /* 10acc767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acc76a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acc76d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acc76f jne 0x10acc779 */
  if (!C.zf) goto L_10acc779;
  /* 10acc771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acc774 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc777 jmp 0x10acc77c */
  goto L_10acc77c;
L_10acc779:;
  /* 10acc779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10acc77c:;
  /* 10acc77c mov esp, ebp */
  ESP = (EBP);
  /* 10acc77e pop ebp */
  EBP = (pop32());
  /* 10acc77f ret  */
  ESPCHK(0x10acc730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x10acc780 (130 bytes, 43 insns) */
void f_10acc780(void) {
  FTRACE(0x10acc780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc780 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc781 mov ebp, esp */
  EBP = (ESP);
  /* 10acc783 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc787 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc78d jae 0x10acc7b1 */
  if (!C.cf) goto L_10acc7b1;
  /* 10acc78f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc792 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acc795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc798 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acc79b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acc79e mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acc7a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10acc7aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10acc7ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acc7af jne 0x10acc7cc */
  if (!C.zf) goto L_10acc7cc;
L_10acc7b1:;
  /* 10acc7b1 call 0x10acbf00 */
  push32(0x10acc7b6u); f_10acbf00();
  /* 10acc7b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10acc7bc call 0x10acbf10 */
  push32(0x10acc7c1u); f_10acbf10();
  /* 10acc7c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10acc7c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acc7ca jmp 0x10acc7fe */
  goto L_10acc7fe;
L_10acc7cc:;
  /* 10acc7cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc7cf push edx */
  push32((uint32_t)(EDX));
  /* 10acc7d0 call 0x10acd720 */
  push32(0x10acc7d5u); f_10acd720();
  /* 10acc7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc7d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc7db push eax */
  push32((uint32_t)(EAX));
  /* 10acc7dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc7df push ecx */
  push32((uint32_t)(ECX));
  /* 10acc7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc7e3 push edx */
  push32((uint32_t)(EDX));
  /* 10acc7e4 call 0x10acc810 */
  push32(0x10acc7e9u); f_10acc810();
  /* 10acc7e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc7ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acc7ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc7f2 push eax */
  push32((uint32_t)(EAX));
  /* 10acc7f3 call 0x10acd7b0 */
  push32(0x10acc7f8u); f_10acd7b0();
  /* 10acc7f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc7fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10acc7fe:;
  /* 10acc7fe mov esp, ebp */
  ESP = (EBP);
  /* 10acc800 pop ebp */
  EBP = (pop32());
  /* 10acc801 ret  */
  ESPCHK(0x10acc780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x10acc810 (178 bytes, 56 insns) */
void f_10acc810(void) {
  FTRACE(0x10acc810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc810 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc811 mov ebp, esp */
  EBP = (ESP);
  /* 10acc813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc819 push eax */
  push32((uint32_t)(EAX));
  /* 10acc81a call 0x10acd5a0 */
  push32(0x10acc81fu); f_10acd5a0();
  /* 10acc81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc822 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10acc825 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc829 jne 0x10acc83e */
  if (!C.zf) goto L_10acc83e;
  /* 10acc82b call 0x10acbf00 */
  push32(0x10acc830u); f_10acbf00();
  /* 10acc830 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10acc836 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acc839 jmp 0x10acc8be */
  goto L_10acc8be;
L_10acc83e:;
  /* 10acc83e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc841 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc842 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc844 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc847 push edx */
  push32((uint32_t)(EDX));
  /* 10acc848 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acc84b push eax */
  push32((uint32_t)(EAX));
  /* 10acc84c call dword ptr [0x10af22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22b8))), 0x10acc852u);
  /* 10acc852 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acc855 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc859 jne 0x10acc866 */
  if (!C.zf) goto L_10acc866;
  /* 10acc85b call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10acc861u);
  /* 10acc861 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acc864 jmp 0x10acc86d */
  goto L_10acc86d;
L_10acc866:;
  /* 10acc866 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10acc86d:;
  /* 10acc86d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc871 je 0x10acc884 */
  if (C.zf) goto L_10acc884;
  /* 10acc873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acc876 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc877 call 0x10acbe60 */
  push32(0x10acc87cu); f_10acbe60();
  /* 10acc87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc87f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acc882 jmp 0x10acc8be */
  goto L_10acc8be;
L_10acc884:;
  /* 10acc884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc887 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10acc88a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc88d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10acc890 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acc893 mov ecx, dword ptr [edx*4 + 0x10af0fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acc89a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10acc89e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10acc8a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc8a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acc8a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc8aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acc8ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acc8b0 mov eax, dword ptr [eax*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acc8b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10acc8bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10acc8be:;
  /* 10acc8be mov esp, ebp */
  ESP = (EBP);
  /* 10acc8c0 pop ebp */
  EBP = (pop32());
  /* 10acc8c1 ret  */
  ESPCHK(0x10acc810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x10acc8d0 (130 bytes, 43 insns) */
void f_10acc8d0(void) {
  FTRACE(0x10acc8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc8d1 mov ebp, esp */
  EBP = (ESP);
  /* 10acc8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acc8d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc8d7 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc8dd jae 0x10acc901 */
  if (!C.cf) goto L_10acc901;
  /* 10acc8df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc8e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acc8e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc8e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acc8eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acc8ee mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acc8f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10acc8fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10acc8fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acc8ff jne 0x10acc91c */
  if (!C.zf) goto L_10acc91c;
L_10acc901:;
  /* 10acc901 call 0x10acbf00 */
  push32(0x10acc906u); f_10acbf00();
  /* 10acc906 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10acc90c call 0x10acbf10 */
  push32(0x10acc911u); f_10acbf10();
  /* 10acc911 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10acc917 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acc91a jmp 0x10acc94e */
  goto L_10acc94e;
L_10acc91c:;
  /* 10acc91c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc91f push edx */
  push32((uint32_t)(EDX));
  /* 10acc920 call 0x10acd720 */
  push32(0x10acc925u); f_10acd720();
  /* 10acc925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc928 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acc92b push eax */
  push32((uint32_t)(EAX));
  /* 10acc92c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc92f push ecx */
  push32((uint32_t)(ECX));
  /* 10acc930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc933 push edx */
  push32((uint32_t)(EDX));
  /* 10acc934 call 0x10acc960 */
  push32(0x10acc939u); f_10acc960();
  /* 10acc939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc93c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acc93f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc942 push eax */
  push32((uint32_t)(EAX));
  /* 10acc943 call 0x10acd7b0 */
  push32(0x10acc948u); f_10acd7b0();
  /* 10acc948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acc94b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10acc94e:;
  /* 10acc94e mov esp, ebp */
  ESP = (EBP);
  /* 10acc950 pop ebp */
  EBP = (pop32());
  /* 10acc951 ret  */
  ESPCHK(0x10acc8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x10acc960 (627 bytes, 182 insns) */
void f_10acc960(void) {
  FTRACE(0x10acc960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acc960 push ebp */
  push32((uint32_t)(EBP));
  /* 10acc961 mov ebp, esp */
  EBP = (ESP);
  /* 10acc963 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc969 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10acc970 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acc973 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10acc979 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc97d jne 0x10acc986 */
  if (!C.zf) goto L_10acc986;
  /* 10acc97f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acc981 jmp 0x10accbcf */
  goto L_10accbcf;
L_10acc986:;
  /* 10acc986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc989 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acc98c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc98f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acc992 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acc995 mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acc99c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10acc9a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10acc9a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acc9a6 je 0x10acc9b8 */
  if (C.zf) goto L_10acc9b8;
  /* 10acc9a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acc9aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10acc9ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc9af push edx */
  push32((uint32_t)(EDX));
  /* 10acc9b0 call 0x10acc810 */
  push32(0x10acc9b5u); f_10acc810();
  /* 10acc9b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acc9b8:;
  /* 10acc9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc9bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acc9be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acc9c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acc9c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acc9c7 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acc9ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10acc9d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10acc9d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acc9da je 0x10accaec */
  if (C.zf) goto L_10accaec;
  /* 10acc9e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acc9e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acc9e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10acc9ed:;
  /* 10acc9ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acc9f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acc9f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acc9f6 jae 0x10accaea */
  if (!C.cf) goto L_10accaea;
  /* 10acc9fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10acca02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10acca05:;
  /* 10acca05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acca08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10acca0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acca10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acca16 jge 0x10acca77 */
  if ((C.sf==C.of)) goto L_10acca77;
  /* 10acca18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acca1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acca1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acca21 jae 0x10acca77 */
  if (!C.cf) goto L_10acca77;
  /* 10acca23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acca26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10acca28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10acca2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acca31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acca34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acca37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10acca3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acca41 jne 0x10acca61 */
  if (!C.zf) goto L_10acca61;
  /* 10acca43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10acca49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acca4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10acca52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acca55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10acca58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acca5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acca5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10acca61:;
  /* 10acca61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acca64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10acca6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10acca6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acca6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acca72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acca75 jmp 0x10acca05 */
  goto L_10acca05;
L_10acca77:;
  /* 10acca77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acca79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10acca7f push edx */
  push32((uint32_t)(EDX));
  /* 10acca80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acca83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10acca89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acca8b push eax */
  push32((uint32_t)(EAX));
  /* 10acca8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10acca92 push edx */
  push32((uint32_t)(EDX));
  /* 10acca93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acca96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acca99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acca9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acca9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10accaa2 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10accaa9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10accaac push eax */
  push32((uint32_t)(EAX));
  /* 10accaad call dword ptr [0x10af22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f8))), 0x10accab3u);
  /* 10accab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10accab5 je 0x10accada */
  if (C.zf) goto L_10accada;
  /* 10accab7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10accaba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accac0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10accac3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10accac6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10accacc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10accace cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accad4 jge 0x10accad8 */
  if ((C.sf==C.of)) goto L_10accad8;
  /* 10accad6 jmp 0x10accaea */
  goto L_10accaea;
L_10accad8:;
  /* 10accad8 jmp 0x10accae5 */
  goto L_10accae5;
L_10accada:;
  /* 10accada call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10accae0u);
  /* 10accae0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10accae3 jmp 0x10accaea */
  goto L_10accaea;
L_10accae5:;
  /* 10accae5 jmp 0x10acc9ed */
  goto L_10acc9ed;
L_10accaea:;
  /* 10accaea jmp 0x10accb3c */
  goto L_10accb3c;
L_10accaec:;
  /* 10accaec push 0 */
  push32((uint32_t)(0x0u));
  /* 10accaee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10accaf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10accaf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10accaf8 push edx */
  push32((uint32_t)(EDX));
  /* 10accaf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10accafc push eax */
  push32((uint32_t)(EAX));
  /* 10accafd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accb00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10accb03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accb06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10accb09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10accb0c mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10accb13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10accb16 push ecx */
  push32((uint32_t)(ECX));
  /* 10accb17 call dword ptr [0x10af22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22f8))), 0x10accb1du);
  /* 10accb1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10accb1f je 0x10accb33 */
  if (C.zf) goto L_10accb33;
  /* 10accb21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10accb28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10accb2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10accb31 jmp 0x10accb3c */
  goto L_10accb3c;
L_10accb33:;
  /* 10accb33 call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10accb39u);
  /* 10accb39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10accb3c:;
  /* 10accb3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accb40 jne 0x10accbc6 */
  if (!C.zf) goto L_10accbc6;
  /* 10accb46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accb4a je 0x10accb7a */
  if (C.zf) goto L_10accb7a;
  /* 10accb4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accb50 jne 0x10accb69 */
  if (!C.zf) goto L_10accb69;
  /* 10accb52 call 0x10acbf00 */
  push32(0x10accb57u); f_10acbf00();
  /* 10accb57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10accb5d call 0x10acbf10 */
  push32(0x10accb62u); f_10acbf10();
  /* 10accb62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10accb65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10accb67 jmp 0x10accb75 */
  goto L_10accb75;
L_10accb69:;
  /* 10accb69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10accb6c push edx */
  push32((uint32_t)(EDX));
  /* 10accb6d call 0x10acbe60 */
  push32(0x10accb72u); f_10acbe60();
  /* 10accb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10accb75:;
  /* 10accb75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10accb78 jmp 0x10accbcf */
  goto L_10accbcf;
L_10accb7a:;
  /* 10accb7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accb7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10accb80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accb83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10accb86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10accb89 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10accb90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10accb95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10accb98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10accb9a je 0x10accbab */
  if (C.zf) goto L_10accbab;
  /* 10accb9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10accb9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10accba2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accba5 jne 0x10accbab */
  if (!C.zf) goto L_10accbab;
  /* 10accba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10accba9 jmp 0x10accbcf */
  goto L_10accbcf;
L_10accbab:;
  /* 10accbab call 0x10acbf00 */
  push32(0x10accbb0u); f_10acbf00();
  /* 10accbb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10accbb6 call 0x10acbf10 */
  push32(0x10accbbbu); f_10acbf10();
  /* 10accbbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10accbc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10accbc4 jmp 0x10accbcf */
  goto L_10accbcf;
L_10accbc6:;
  /* 10accbc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10accbc9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10accbcf:;
  /* 10accbcf mov esp, ebp */
  ESP = (EBP);
  /* 10accbd1 pop ebp */
  EBP = (pop32());
  /* 10accbd2 ret  */
  ESPCHK(0x10acc960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x10accbe0 (199 bytes, 68 insns) */
void f_10accbe0(void) {
  FTRACE(0x10accbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10accbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10accbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10accbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10accbe4 push ebx */
  push32((uint32_t)(EBX));
  /* 10accbe5 push esi */
  push32((uint32_t)(ESI));
  /* 10accbe6 push edi */
  push32((uint32_t)(EDI));
L_10accbe7:;
  /* 10accbe7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accbeb jne 0x10accc0b */
  if (!C.zf) goto L_10accc0b;
  /* 10accbed push 0x10aeb07c */
  push32((uint32_t)(0x10aeb07cu));
  /* 10accbf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10accbf4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10accbf6 push 0x10aeb148 */
  push32((uint32_t)(0x10aeb148u));
  /* 10accbfb push 2 */
  push32((uint32_t)(0x2u));
  /* 10accbfd call 0x10ac30f0 */
  push32(0x10accc02u); f_10ac30f0();
  /* 10accc02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accc05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accc08 jne 0x10accc0b */
  if (!C.zf) goto L_10accc0b;
  /* 10accc0a int3  */
  x86_unimpl("int3 @ 0x10accc0a");
L_10accc0b:;
  /* 10accc0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10accc0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10accc0f jne 0x10accbe7 */
  if (!C.zf) goto L_10accbe7;
  /* 10accc11 mov ecx, dword ptr [0x10aef7f4] */
  ECX = (r32((uint32_t)(0x10aef7f4)));
  /* 10accc17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accc1a mov dword ptr [0x10aef7f4], ecx */
  w32((uint32_t)(0x10aef7f4), (ECX));
  /* 10accc20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accc23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10accc26 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10accc28 push 0x10aeb148 */
  push32((uint32_t)(0x10aeb148u));
  /* 10accc2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10accc2f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10accc34 call 0x10ac4030 */
  push32(0x10accc39u); f_10ac4030();
  /* 10accc39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accc3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc3f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10accc42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc45 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accc49 je 0x10accc66 */
  if (C.zf) goto L_10accc66;
  /* 10accc4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc4e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10accc51 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10accc54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc57 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10accc5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc5d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10accc64 jmp 0x10accc8b */
  goto L_10accc8b;
L_10accc66:;
  /* 10accc66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc69 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10accc6c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10accc6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc72 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10accc75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc78 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accc7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc7e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10accc81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc84 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10accc8b:;
  /* 10accc8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10accc94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10accc96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accc99 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10accca0 pop edi */
  EDI = (pop32());
  /* 10accca1 pop esi */
  ESI = (pop32());
  /* 10accca2 pop ebx */
  EBX = (pop32());
  /* 10accca3 mov esp, ebp */
  ESP = (EBP);
  /* 10accca5 pop ebp */
  EBP = (pop32());
  /* 10accca6 ret  */
  ESPCHK(0x10accbe0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10acccb0 (50 bytes, 17 insns) */
void f_10acccb0(void) {
  FTRACE(0x10acccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acccb1 mov ebp, esp */
  EBP = (ESP);
  /* 10acccb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acccb6 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acccbc jb 0x10acccc2 */
  if (C.cf) goto L_10acccc2;
  /* 10acccbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acccc0 jmp 0x10accce0 */
  goto L_10accce0;
L_10acccc2:;
  /* 10acccc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acccc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acccc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accccb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acccce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acccd1 mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acccd8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10acccdd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10accce0:;
  /* 10accce0 pop ebp */
  EBP = (pop32());
  /* 10accce1 ret  */
  ESPCHK(0x10acccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x10acccf0 (300 bytes, 80 insns) */
void f_10acccf0(void) {
  FTRACE(0x10acccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acccf1 mov ebp, esp */
  EBP = (ESP);
  /* 10acccf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acccf4 cmp dword ptr [0x10af0cc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10af0cc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acccfb jne 0x10accd09 */
  if (!C.zf) goto L_10accd09;
  /* 10acccfd mov dword ptr [0x10af0cc0], 0x200 */
  w32((uint32_t)(0x10af0cc0), (0x200u));
  /* 10accd07 jmp 0x10accd1c */
  goto L_10accd1c;
L_10accd09:;
  /* 10accd09 cmp dword ptr [0x10af0cc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10af0cc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accd10 jge 0x10accd1c */
  if ((C.sf==C.of)) goto L_10accd1c;
  /* 10accd12 mov dword ptr [0x10af0cc0], 0x14 */
  w32((uint32_t)(0x10af0cc0), (0x14u));
L_10accd1c:;
  /* 10accd1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10accd21 push 0x10aeb154 */
  push32((uint32_t)(0x10aeb154u));
  /* 10accd26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10accd28 push 4 */
  push32((uint32_t)(0x4u));
  /* 10accd2a mov eax, dword ptr [0x10af0cc0] */
  EAX = (r32((uint32_t)(0x10af0cc0)));
  /* 10accd2f push eax */
  push32((uint32_t)(EAX));
  /* 10accd30 call 0x10ac4440 */
  push32(0x10accd35u); f_10ac4440();
  /* 10accd35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accd38 mov dword ptr [0x10aef968], eax */
  w32((uint32_t)(0x10aef968), (EAX));
  /* 10accd3d cmp dword ptr [0x10aef968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accd44 jne 0x10accd85 */
  if (!C.zf) goto L_10accd85;
  /* 10accd46 mov dword ptr [0x10af0cc0], 0x14 */
  w32((uint32_t)(0x10af0cc0), (0x14u));
  /* 10accd50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10accd55 push 0x10aeb154 */
  push32((uint32_t)(0x10aeb154u));
  /* 10accd5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10accd5c push 4 */
  push32((uint32_t)(0x4u));
  /* 10accd5e mov ecx, dword ptr [0x10af0cc0] */
  ECX = (r32((uint32_t)(0x10af0cc0)));
  /* 10accd64 push ecx */
  push32((uint32_t)(ECX));
  /* 10accd65 call 0x10ac4440 */
  push32(0x10accd6au); f_10ac4440();
  /* 10accd6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accd6d mov dword ptr [0x10aef968], eax */
  w32((uint32_t)(0x10aef968), (EAX));
  /* 10accd72 cmp dword ptr [0x10aef968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accd79 jne 0x10accd85 */
  if (!C.zf) goto L_10accd85;
  /* 10accd7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10accd7d call 0x10ac2fa0 */
  push32(0x10accd82u); f_10ac2fa0();
  /* 10accd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10accd85:;
  /* 10accd85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10accd8c jmp 0x10accd97 */
  goto L_10accd97;
L_10accd8e:;
  /* 10accd8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accd91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accd94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10accd97:;
  /* 10accd97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accd9b jge 0x10accdb6 */
  if ((C.sf==C.of)) goto L_10accdb6;
  /* 10accd9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accda0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10accda3 add eax, 0x10aee120 */
  { uint32_t _a=(EAX),_b=(0x10aee120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accda8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accdab mov edx, dword ptr [0x10aef968] */
  EDX = (r32((uint32_t)(0x10aef968)));
  /* 10accdb1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10accdb4 jmp 0x10accd8e */
  goto L_10accd8e;
L_10accdb6:;
  /* 10accdb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10accdbd jmp 0x10accdc8 */
  goto L_10accdc8;
L_10accdbf:;
  /* 10accdbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accdc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accdc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10accdc8:;
  /* 10accdc8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accdcc jge 0x10acce18 */
  if ((C.sf==C.of)) goto L_10acce18;
  /* 10accdce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accdd1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10accdd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accdd7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10accdda imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10accddd mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10accde4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accde8 je 0x10acce06 */
  if (C.zf) goto L_10acce06;
  /* 10accdea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accded sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10accdf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10accdf3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10accdf6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10accdf9 mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acce00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acce04 jne 0x10acce16 */
  if (!C.zf) goto L_10acce16;
L_10acce06:;
  /* 10acce06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acce09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acce0c mov dword ptr [ecx + 0x10aee130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10aee130), (0xffffffffu));
L_10acce16:;
  /* 10acce16 jmp 0x10accdbf */
  goto L_10accdbf;
L_10acce18:;
  /* 10acce18 mov esp, ebp */
  ESP = (EBP);
  /* 10acce1a pop ebp */
  EBP = (pop32());
  /* 10acce1b ret  */
  ESPCHK(0x10acccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x10acce20 (26 bytes, 9 insns) */
void f_10acce20(void) {
  FTRACE(0x10acce20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acce20 push ebp */
  push32((uint32_t)(EBP));
  /* 10acce21 mov ebp, esp */
  EBP = (ESP);
  /* 10acce23 call 0x10acda20 */
  push32(0x10acce28u); f_10acda20();
  /* 10acce28 movsx eax, byte ptr [0x10aef60c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10aef60c))));
  /* 10acce2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acce31 je 0x10acce38 */
  if (C.zf) goto L_10acce38;
  /* 10acce33 call 0x10acd7e0 */
  push32(0x10acce38u); f_10acd7e0();
L_10acce38:;
  /* 10acce38 pop ebp */
  EBP = (pop32());
  /* 10acce39 ret  */
  ESPCHK(0x10acce20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce40 @ 0x10acce40 (61 bytes, 20 insns) */
void f_10acce40(void) {
  FTRACE(0x10acce40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acce40 push ebp */
  push32((uint32_t)(EBP));
  /* 10acce41 mov ebp, esp */
  EBP = (ESP);
  /* 10acce43 cmp dword ptr [ebp + 8], 0x10aee120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aee120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acce4a jb 0x10acce6e */
  if (C.cf) goto L_10acce6e;
  /* 10acce4c cmp dword ptr [ebp + 8], 0x10aee380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aee380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acce53 ja 0x10acce6e */
  if ((!C.cf&&!C.zf)) goto L_10acce6e;
  /* 10acce55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acce58 sub eax, 0x10aee120 */
  { uint32_t _a=(EAX),_b=(0x10aee120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acce5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acce60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acce63 push eax */
  push32((uint32_t)(EAX));
  /* 10acce64 call 0x10ac7a30 */
  push32(0x10acce69u); f_10ac7a30();
  /* 10acce69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acce6c jmp 0x10acce7b */
  goto L_10acce7b;
L_10acce6e:;
  /* 10acce6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acce71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acce74 push ecx */
  push32((uint32_t)(ECX));
  /* 10acce75 call dword ptr [0x10af2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2388))), 0x10acce7bu);
L_10acce7b:;
  /* 10acce7b pop ebp */
  EBP = (pop32());
  /* 10acce7c ret  */
  ESPCHK(0x10acce40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x10acce80 (41 bytes, 16 insns) */
void f_10acce80(void) {
  FTRACE(0x10acce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acce80 push ebp */
  push32((uint32_t)(EBP));
  /* 10acce81 mov ebp, esp */
  EBP = (ESP);
  /* 10acce83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acce87 jge 0x10acce9a */
  if ((C.sf==C.of)) goto L_10acce9a;
  /* 10acce89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acce8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acce8f push eax */
  push32((uint32_t)(EAX));
  /* 10acce90 call 0x10ac7a30 */
  push32(0x10acce95u); f_10ac7a30();
  /* 10acce95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acce98 jmp 0x10accea7 */
  goto L_10accea7;
L_10acce9a:;
  /* 10acce9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acce9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accea0 push ecx */
  push32((uint32_t)(ECX));
  /* 10accea1 call dword ptr [0x10af2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2388))), 0x10accea7u);
L_10accea7:;
  /* 10accea7 pop ebp */
  EBP = (pop32());
  /* 10accea8 ret  */
  ESPCHK(0x10acce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x10acceb0 (61 bytes, 20 insns) */
void f_10acceb0(void) {
  FTRACE(0x10acceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acceb1 mov ebp, esp */
  EBP = (ESP);
  /* 10acceb3 cmp dword ptr [ebp + 8], 0x10aee120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aee120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acceba jb 0x10accede */
  if (C.cf) goto L_10accede;
  /* 10accebc cmp dword ptr [ebp + 8], 0x10aee380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aee380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accec3 ja 0x10accede */
  if ((!C.cf&&!C.zf)) goto L_10accede;
  /* 10accec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accec8 sub eax, 0x10aee120 */
  { uint32_t _a=(EAX),_b=(0x10aee120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10accecd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acced0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acced3 push eax */
  push32((uint32_t)(EAX));
  /* 10acced4 call 0x10ac7ad0 */
  push32(0x10acced9u); f_10ac7ad0();
  /* 10acced9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accedc jmp 0x10acceeb */
  goto L_10acceeb;
L_10accede:;
  /* 10accede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accee1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10accee5 call dword ptr [0x10af238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af238c))), 0x10acceebu);
L_10acceeb:;
  /* 10acceeb pop ebp */
  EBP = (pop32());
  /* 10acceec ret  */
  ESPCHK(0x10acceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cef0 @ 0x10accef0 (41 bytes, 16 insns) */
void f_10accef0(void) {
  FTRACE(0x10accef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10accef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10accef1 mov ebp, esp */
  EBP = (ESP);
  /* 10accef3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accef7 jge 0x10accf0a */
  if ((C.sf==C.of)) goto L_10accf0a;
  /* 10accef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accefc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acceff push eax */
  push32((uint32_t)(EAX));
  /* 10accf00 call 0x10ac7ad0 */
  push32(0x10accf05u); f_10ac7ad0();
  /* 10accf05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accf08 jmp 0x10accf17 */
  goto L_10accf17;
L_10accf0a:;
  /* 10accf0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10accf0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10accf10 push ecx */
  push32((uint32_t)(ECX));
  /* 10accf11 call dword ptr [0x10af238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af238c))), 0x10accf17u);
L_10accf17:;
  /* 10accf17 pop ebp */
  EBP = (pop32());
  /* 10accf18 ret  */
  ESPCHK(0x10accef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x10accf20 (119 bytes, 34 insns) */
void f_10accf20(void) {
  FTRACE(0x10accf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10accf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10accf21 mov ebp, esp */
  EBP = (ESP);
  /* 10accf23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10accf26 push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10accf2b call dword ptr [0x10af230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af230c))), 0x10accf31u);
  /* 10accf31 cmp dword ptr [0x10aef954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accf38 je 0x10accf58 */
  if (C.zf) goto L_10accf58;
  /* 10accf3a push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10accf3f call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10accf45u);
  /* 10accf45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10accf47 call 0x10ac7a30 */
  push32(0x10accf4cu); f_10ac7a30();
  /* 10accf4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accf4f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10accf56 jmp 0x10accf5f */
  goto L_10accf5f;
L_10accf58:;
  /* 10accf58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10accf5f:;
  /* 10accf5f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10accf63 push eax */
  push32((uint32_t)(EAX));
  /* 10accf64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accf67 push ecx */
  push32((uint32_t)(ECX));
  /* 10accf68 call 0x10accfa0 */
  push32(0x10accf6du); f_10accfa0();
  /* 10accf6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accf70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10accf73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accf77 je 0x10accf85 */
  if (C.zf) goto L_10accf85;
  /* 10accf79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10accf7b call 0x10ac7ad0 */
  push32(0x10accf80u); f_10ac7ad0();
  /* 10accf80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10accf83 jmp 0x10accf90 */
  goto L_10accf90;
L_10accf85:;
  /* 10accf85 push 0x10aef964 */
  push32((uint32_t)(0x10aef964u));
  /* 10accf8a call dword ptr [0x10af22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22fc))), 0x10accf90u);
L_10accf90:;
  /* 10accf90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10accf93 mov esp, ebp */
  ESP = (EBP);
  /* 10accf95 pop ebp */
  EBP = (pop32());
  /* 10accf96 ret  */
  ESPCHK(0x10accf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x10accfa0 (160 bytes, 50 insns) */
void f_10accfa0(void) {
  FTRACE(0x10accfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10accfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10accfa1 mov ebp, esp */
  EBP = (ESP);
  /* 10accfa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10accfa6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accfaa jne 0x10accfb3 */
  if (!C.zf) goto L_10accfb3;
  /* 10accfac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10accfae jmp 0x10acd03c */
  goto L_10acd03c;
L_10accfb3:;
  /* 10accfb3 cmp dword ptr [0x10aef7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accfba jne 0x10accfea */
  if (!C.zf) goto L_10accfea;
  /* 10accfbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10accfbf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10accfc4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10accfc9 jle 0x10accfdb */
  if ((C.zf||C.sf!=C.of)) goto L_10accfdb;
  /* 10accfcb call 0x10acbf00 */
  push32(0x10accfd0u); f_10acbf00();
  /* 10accfd0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10accfd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10accfd9 jmp 0x10acd03c */
  goto L_10acd03c;
L_10accfdb:;
  /* 10accfdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10accfde mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10accfe1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10accfe3 mov eax, 1 */
  EAX = (0x1u);
  /* 10accfe8 jmp 0x10acd03c */
  goto L_10acd03c;
L_10accfea:;
  /* 10accfea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10accff1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10accff4 push eax */
  push32((uint32_t)(EAX));
  /* 10accff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10accff7 mov ecx, dword ptr [0x10aedea4] */
  ECX = (r32((uint32_t)(0x10aedea4)));
  /* 10accffd push ecx */
  push32((uint32_t)(ECX));
  /* 10accffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd001 push edx */
  push32((uint32_t)(EDX));
  /* 10acd002 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acd004 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10acd007 push eax */
  push32((uint32_t)(EAX));
  /* 10acd008 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10acd00d mov ecx, dword ptr [0x10aef7e8] */
  ECX = (r32((uint32_t)(0x10aef7e8)));
  /* 10acd013 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd014 call dword ptr [0x10af2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2364))), 0x10acd01au);
  /* 10acd01a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acd01d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd021 je 0x10acd029 */
  if (C.zf) goto L_10acd029;
  /* 10acd023 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd027 je 0x10acd039 */
  if (C.zf) goto L_10acd039;
L_10acd029:;
  /* 10acd029 call 0x10acbf00 */
  push32(0x10acd02eu); f_10acbf00();
  /* 10acd02e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10acd034 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd037 jmp 0x10acd03c */
  goto L_10acd03c;
L_10acd039:;
  /* 10acd039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10acd03c:;
  /* 10acd03c mov esp, ebp */
  ESP = (EBP);
  /* 10acd03e pop ebp */
  EBP = (pop32());
  /* 10acd03f ret  */
  ESPCHK(0x10accfa0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10acd040 (32 bytes, 18 insns) */
void f_10acd040(void) {
  FTRACE(0x10acd040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd040 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd041 mov ebp, esp */
  EBP = (ESP);
  /* 10acd043 push ebx */
  push32((uint32_t)(EBX));
  /* 10acd044 push esi */
  push32((uint32_t)(ESI));
  /* 10acd045 push edi */
  push32((uint32_t)(EDI));
  /* 10acd046 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd047 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acd049 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acd04b push 0x10acd058 */
  push32((uint32_t)(0x10acd058u));
  /* 10acd050 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10acd053 call 0x10ad478c */
  push32(0x10acd058u); f_10ad478c();
  /* 10acd058 pop ebp */
  EBP = (pop32());
  /* 10acd059 pop edi */
  EDI = (pop32());
  /* 10acd05a pop esi */
  ESI = (pop32());
  /* 10acd05b pop ebx */
  EBX = (pop32());
  /* 10acd05c mov esp, ebp */
  ESP = (EBP);
  /* 10acd05e pop ebp */
  EBP = (pop32());
  /* 10acd05f ret  */
  ESPCHK(0x10acd040u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10acd082 (104 bytes, 33 insns) */
void f_10acd082(void) {
  FTRACE(0x10acd082u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd082 push ebx */
  push32((uint32_t)(EBX));
  /* 10acd083 push esi */
  push32((uint32_t)(ESI));
  /* 10acd084 push edi */
  push32((uint32_t)(EDI));
  /* 10acd085 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10acd089 push eax */
  push32((uint32_t)(EAX));
  /* 10acd08a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10acd08c push 0x10acd060 */
  push32((uint32_t)(0x10acd060u));
  /* 10acd091 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10acd098 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10acd09f:;
  /* 10acd09f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10acd0a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10acd0a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10acd0a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd0ac je 0x10acd0dc */
  if (C.zf) goto L_10acd0dc;
  /* 10acd0ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd0b2 je 0x10acd0dc */
  if (C.zf) goto L_10acd0dc;
  /* 10acd0b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10acd0b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10acd0ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10acd0be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10acd0c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd0c6 jne 0x10acd0da */
  if (!C.zf) goto L_10acd0da;
  /* 10acd0c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10acd0cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10acd0d1 call 0x10acd116 */
  push32(0x10acd0d6u); f_10acd116();
  /* 10acd0d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10acd0dau);
L_10acd0da:;
  /* 10acd0da jmp 0x10acd09f */
  goto L_10acd09f;
L_10acd0dc:;
  /* 10acd0dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10acd0e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd0e6 pop edi */
  EDI = (pop32());
  /* 10acd0e7 pop esi */
  ESI = (pop32());
  /* 10acd0e8 pop ebx */
  EBX = (pop32());
  /* 10acd0e9 ret  */
  ESPCHK(0x10acd082u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d116 @ 0x10acd116 (24 bytes, 10 insns) */
void f_10acd116(void) {
  FTRACE(0x10acd116u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd116 push ebx */
  push32((uint32_t)(EBX));
  /* 10acd117 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd118 mov ebx, 0x10aee3b8 */
  EBX = (0x10aee3b8u);
  /* 10acd11d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd120 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10acd123 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10acd126 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10acd129 pop ecx */
  ECX = (pop32());
  /* 10acd12a pop ebx */
  EBX = (pop32());
  /* 10acd12b ret 4 */
  ESPCHK(0x10acd116u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d1f5 @ 0x10acd1f5 (27 bytes, 11 insns) */
void f_10acd1f5(void) {
  FTRACE(0x10acd1f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd1f5 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd1f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10acd1fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10acd1fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10acd1ff push eax */
  push32((uint32_t)(EAX));
  /* 10acd200 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10acd203 push eax */
  push32((uint32_t)(EAX));
  /* 10acd204 call 0x10acd082 */
  push32(0x10acd209u); f_10acd082();
  /* 10acd209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd20c pop ebp */
  EBP = (pop32());
  /* 10acd20d ret 4 */
  ESPCHK(0x10acd1f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d210 @ 0x10acd210 (482 bytes, 138 insns) */
void f_10acd210(void) {
  FTRACE(0x10acd210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd210 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd211 mov ebp, esp */
  EBP = (ESP);
  /* 10acd213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd216 push esi */
  push32((uint32_t)(ESI));
  /* 10acd217 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10acd21e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10acd220 call 0x10ac7a30 */
  push32(0x10acd225u); f_10ac7a30();
  /* 10acd225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd228 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10acd22f jmp 0x10acd23a */
  goto L_10acd23a;
L_10acd231:;
  /* 10acd231 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd237 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10acd23a:;
  /* 10acd23a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd23e jge 0x10acd3e0 */
  if ((C.sf==C.of)) goto L_10acd3e0;
  /* 10acd244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd247 cmp dword ptr [ecx*4 + 0x10af0fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10af0fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd24f je 0x10acd346 */
  if (C.zf) goto L_10acd346;
  /* 10acd255 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd258 mov eax, dword ptr [edx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acd25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acd262 jmp 0x10acd26d */
  goto L_10acd26d;
L_10acd264:;
  /* 10acd264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd267 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd26a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10acd26d:;
  /* 10acd26d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd270 mov eax, dword ptr [edx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acd277 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd27c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd27f jae 0x10acd336 */
  if (!C.cf) goto L_10acd336;
  /* 10acd285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd288 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10acd28c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10acd28f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acd291 jne 0x10acd331 */
  if (!C.zf) goto L_10acd331;
  /* 10acd297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd29a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd29e jne 0x10acd2d9 */
  if (!C.zf) goto L_10acd2d9;
  /* 10acd2a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10acd2a2 call 0x10ac7a30 */
  push32(0x10acd2a7u); f_10ac7a30();
  /* 10acd2a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd2aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd2b1 jne 0x10acd2cf */
  if (!C.zf) goto L_10acd2cf;
  /* 10acd2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd2b9 push edx */
  push32((uint32_t)(EDX));
  /* 10acd2ba call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10acd2c0u);
  /* 10acd2c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10acd2c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd2c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10acd2cf:;
  /* 10acd2cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10acd2d1 call 0x10ac7ad0 */
  push32(0x10acd2d6u); f_10ac7ad0();
  /* 10acd2d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acd2d9:;
  /* 10acd2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd2df push eax */
  push32((uint32_t)(EAX));
  /* 10acd2e0 call dword ptr [0x10af2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2388))), 0x10acd2e6u);
  /* 10acd2e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10acd2ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10acd2f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acd2f2 je 0x10acd306 */
  if (C.zf) goto L_10acd306;
  /* 10acd2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd2f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd2fa push eax */
  push32((uint32_t)(EAX));
  /* 10acd2fb call dword ptr [0x10af238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af238c))), 0x10acd301u);
  /* 10acd301 jmp 0x10acd264 */
  goto L_10acd264;
L_10acd306:;
  /* 10acd306 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd309 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10acd30f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd312 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acd315 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd31b sub eax, dword ptr [edx*4 + 0x10af0fc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10af0fc0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd322 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10acd323 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10acd328 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10acd32a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd32c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acd32f jmp 0x10acd336 */
  goto L_10acd336;
L_10acd331:;
  /* 10acd331 jmp 0x10acd264 */
  goto L_10acd264;
L_10acd336:;
  /* 10acd336 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd33a je 0x10acd341 */
  if (C.zf) goto L_10acd341;
  /* 10acd33c jmp 0x10acd3e0 */
  goto L_10acd3e0;
L_10acd341:;
  /* 10acd341 jmp 0x10acd3db */
  goto L_10acd3db;
L_10acd346:;
  /* 10acd346 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10acd348 push 0x10aeb15c */
  push32((uint32_t)(0x10aeb15cu));
  /* 10acd34d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acd34f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10acd354 call 0x10ac4030 */
  push32(0x10acd359u); f_10ac4030();
  /* 10acd359 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd35c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acd35f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd363 je 0x10acd3d9 */
  if (C.zf) goto L_10acd3d9;
  /* 10acd365 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd36b mov dword ptr [eax*4 + 0x10af0fc0], ecx */
  w32((uint32_t)(EAX*4 + 0x10af0fc0), (ECX));
  /* 10acd372 mov edx, dword ptr [0x10af10fc] */
  EDX = (r32((uint32_t)(0x10af10fc)));
  /* 10acd378 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd37b mov dword ptr [0x10af10fc], edx */
  w32((uint32_t)(0x10af10fc), (EDX));
  /* 10acd381 jmp 0x10acd38c */
  goto L_10acd38c;
L_10acd383:;
  /* 10acd383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd386 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10acd38c:;
  /* 10acd38c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd38f mov edx, dword ptr [ecx*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acd396 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd39c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd39f jae 0x10acd3c4 */
  if (!C.cf) goto L_10acd3c4;
  /* 10acd3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd3a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10acd3a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd3ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10acd3b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd3b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10acd3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd3bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10acd3c2 jmp 0x10acd383 */
  goto L_10acd383;
L_10acd3c4:;
  /* 10acd3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd3c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acd3ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acd3cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd3d0 push edx */
  push32((uint32_t)(EDX));
  /* 10acd3d1 call 0x10acd720 */
  push32(0x10acd3d6u); f_10acd720();
  /* 10acd3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acd3d9:;
  /* 10acd3d9 jmp 0x10acd3e0 */
  goto L_10acd3e0;
L_10acd3db:;
  /* 10acd3db jmp 0x10acd231 */
  goto L_10acd231;
L_10acd3e0:;
  /* 10acd3e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10acd3e2 call 0x10ac7ad0 */
  push32(0x10acd3e7u); f_10ac7ad0();
  /* 10acd3e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd3ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd3ed pop esi */
  ESI = (pop32());
  /* 10acd3ee mov esp, ebp */
  ESP = (EBP);
  /* 10acd3f0 pop ebp */
  EBP = (pop32());
  /* 10acd3f1 ret  */
  ESPCHK(0x10acd210u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10acd400 (183 bytes, 57 insns) */
void f_10acd400(void) {
  FTRACE(0x10acd400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd400 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd401 mov ebp, esp */
  EBP = (ESP);
  /* 10acd403 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd407 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd40d jae 0x10acd49a */
  if (!C.cf) goto L_10acd49a;
  /* 10acd413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd416 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acd419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd41c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acd41f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd422 mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acd429 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd42d jne 0x10acd49a */
  if (!C.zf) goto L_10acd49a;
  /* 10acd42f cmp dword ptr [0x10aef5cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd436 jne 0x10acd47a */
  if (!C.zf) goto L_10acd47a;
  /* 10acd438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd43b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acd43e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd442 je 0x10acd452 */
  if (C.zf) goto L_10acd452;
  /* 10acd444 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd448 je 0x10acd460 */
  if (C.zf) goto L_10acd460;
  /* 10acd44a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd44e je 0x10acd46e */
  if (C.zf) goto L_10acd46e;
  /* 10acd450 jmp 0x10acd47a */
  goto L_10acd47a;
L_10acd452:;
  /* 10acd452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd455 push edx */
  push32((uint32_t)(EDX));
  /* 10acd456 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10acd458 call dword ptr [0x10af22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22bc))), 0x10acd45eu);
  /* 10acd45e jmp 0x10acd47a */
  goto L_10acd47a;
L_10acd460:;
  /* 10acd460 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd463 push eax */
  push32((uint32_t)(EAX));
  /* 10acd464 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10acd466 call dword ptr [0x10af22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22bc))), 0x10acd46cu);
  /* 10acd46c jmp 0x10acd47a */
  goto L_10acd47a;
L_10acd46e:;
  /* 10acd46e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd471 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd472 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10acd474 call dword ptr [0x10af22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22bc))), 0x10acd47au);
L_10acd47a:;
  /* 10acd47a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd47d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10acd480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd483 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd486 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd489 mov ecx, dword ptr [edx*4 + 0x10af0fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acd490 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd493 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10acd496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acd498 jmp 0x10acd4b3 */
  goto L_10acd4b3;
L_10acd49a:;
  /* 10acd49a call 0x10acbf00 */
  push32(0x10acd49fu); f_10acbf00();
  /* 10acd49f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10acd4a5 call 0x10acbf10 */
  push32(0x10acd4aau); f_10acbf10();
  /* 10acd4aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10acd4b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10acd4b3:;
  /* 10acd4b3 mov esp, ebp */
  ESP = (EBP);
  /* 10acd4b5 pop ebp */
  EBP = (pop32());
  /* 10acd4b6 ret  */
  ESPCHK(0x10acd400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4c0 @ 0x10acd4c0 (216 bytes, 63 insns) */
void f_10acd4c0(void) {
  FTRACE(0x10acd4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd4c1 mov ebp, esp */
  EBP = (ESP);
  /* 10acd4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd4c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd4c7 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd4cd jae 0x10acd57b */
  if (!C.cf) goto L_10acd57b;
  /* 10acd4d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd4d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acd4d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd4dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acd4df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd4e2 mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acd4e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10acd4ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10acd4f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acd4f3 je 0x10acd57b */
  if (C.zf) goto L_10acd57b;
  /* 10acd4f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd4fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10acd4ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd502 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd505 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd508 mov ecx, dword ptr [edx*4 + 0x10af0fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acd50f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd513 je 0x10acd57b */
  if (C.zf) goto L_10acd57b;
  /* 10acd515 cmp dword ptr [0x10aef5cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aef5cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd51c jne 0x10acd55a */
  if (!C.zf) goto L_10acd55a;
  /* 10acd51e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd521 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acd524 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd528 je 0x10acd538 */
  if (C.zf) goto L_10acd538;
  /* 10acd52a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd52e je 0x10acd544 */
  if (C.zf) goto L_10acd544;
  /* 10acd530 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd534 je 0x10acd550 */
  if (C.zf) goto L_10acd550;
  /* 10acd536 jmp 0x10acd55a */
  goto L_10acd55a;
L_10acd538:;
  /* 10acd538 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acd53a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10acd53c call dword ptr [0x10af22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22bc))), 0x10acd542u);
  /* 10acd542 jmp 0x10acd55a */
  goto L_10acd55a;
L_10acd544:;
  /* 10acd544 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acd546 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10acd548 call dword ptr [0x10af22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22bc))), 0x10acd54eu);
  /* 10acd54e jmp 0x10acd55a */
  goto L_10acd55a;
L_10acd550:;
  /* 10acd550 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acd552 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10acd554 call dword ptr [0x10af22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22bc))), 0x10acd55au);
L_10acd55a:;
  /* 10acd55a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd55d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acd560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd563 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acd566 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd569 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acd570 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10acd577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acd579 jmp 0x10acd594 */
  goto L_10acd594;
L_10acd57b:;
  /* 10acd57b call 0x10acbf00 */
  push32(0x10acd580u); f_10acbf00();
  /* 10acd580 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10acd586 call 0x10acbf10 */
  push32(0x10acd58bu); f_10acbf10();
  /* 10acd58b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10acd591 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10acd594:;
  /* 10acd594 mov esp, ebp */
  ESP = (EBP);
  /* 10acd596 pop ebp */
  EBP = (pop32());
  /* 10acd597 ret  */
  ESPCHK(0x10acd4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5a0 @ 0x10acd5a0 (102 bytes, 30 insns) */
void f_10acd5a0(void) {
  FTRACE(0x10acd5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd5a1 mov ebp, esp */
  EBP = (ESP);
  /* 10acd5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd5a6 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd5ac jae 0x10acd5eb */
  if (!C.cf) goto L_10acd5eb;
  /* 10acd5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd5b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10acd5b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd5b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10acd5ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd5bd mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10acd5c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10acd5c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10acd5cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acd5ce je 0x10acd5eb */
  if (C.zf) goto L_10acd5eb;
  /* 10acd5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd5d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10acd5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd5d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd5dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd5df mov ecx, dword ptr [edx*4 + 0x10af0fc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10af0fc0)));
  /* 10acd5e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10acd5e9 jmp 0x10acd604 */
  goto L_10acd604;
L_10acd5eb:;
  /* 10acd5eb call 0x10acbf00 */
  push32(0x10acd5f0u); f_10acbf00();
  /* 10acd5f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10acd5f6 call 0x10acbf10 */
  push32(0x10acd5fbu); f_10acbf10();
  /* 10acd5fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10acd601 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10acd604:;
  /* 10acd604 pop ebp */
  EBP = (pop32());
  /* 10acd605 ret  */
  ESPCHK(0x10acd5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d610 @ 0x10acd610 (260 bytes, 83 insns) */
void f_10acd610(void) {
  FTRACE(0x10acd610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd610 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd611 mov ebp, esp */
  EBP = (ESP);
  /* 10acd613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd616 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10acd61a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd61d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10acd620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acd622 je 0x10acd62d */
  if (C.zf) goto L_10acd62d;
  /* 10acd624 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd627 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10acd62a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10acd62d:;
  /* 10acd62d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd630 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10acd636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acd638 je 0x10acd642 */
  if (C.zf) goto L_10acd642;
  /* 10acd63a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd63d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10acd63f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10acd642:;
  /* 10acd642 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acd645 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10acd64b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acd64d je 0x10acd658 */
  if (C.zf) goto L_10acd658;
  /* 10acd64f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd652 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10acd655 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10acd658:;
  /* 10acd658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd65b push eax */
  push32((uint32_t)(EAX));
  /* 10acd65c call dword ptr [0x10af2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2344))), 0x10acd662u);
  /* 10acd662 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acd665 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd669 jne 0x10acd682 */
  if (!C.zf) goto L_10acd682;
  /* 10acd66b call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10acd671u);
  /* 10acd671 push eax */
  push32((uint32_t)(EAX));
  /* 10acd672 call 0x10acbe60 */
  push32(0x10acd677u); f_10acbe60();
  /* 10acd677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd67a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd67d jmp 0x10acd710 */
  goto L_10acd710;
L_10acd682:;
  /* 10acd682 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd686 jne 0x10acd693 */
  if (!C.zf) goto L_10acd693;
  /* 10acd688 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd68b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10acd68e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10acd691 jmp 0x10acd6a2 */
  goto L_10acd6a2;
L_10acd693:;
  /* 10acd693 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd697 jne 0x10acd6a2 */
  if (!C.zf) goto L_10acd6a2;
  /* 10acd699 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd69c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10acd69f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10acd6a2:;
  /* 10acd6a2 call 0x10acd210 */
  push32(0x10acd6a7u); f_10acd210();
  /* 10acd6a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acd6aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd6ae jne 0x10acd6cb */
  if (!C.zf) goto L_10acd6cb;
  /* 10acd6b0 call 0x10acbf00 */
  push32(0x10acd6b5u); f_10acbf00();
  /* 10acd6b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10acd6bb call 0x10acbf10 */
  push32(0x10acd6c0u); f_10acbf10();
  /* 10acd6c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10acd6c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd6c9 jmp 0x10acd710 */
  goto L_10acd710;
L_10acd6cb:;
  /* 10acd6cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd6ce push eax */
  push32((uint32_t)(EAX));
  /* 10acd6cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd6d3 call 0x10acd400 */
  push32(0x10acd6d8u); f_10acd400();
  /* 10acd6d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd6db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd6de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10acd6e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10acd6e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd6e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acd6ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd6ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acd6f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd6f3 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acd6fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10acd6fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10acd701 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd704 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd705 call 0x10acd7b0 */
  push32(0x10acd70au); f_10acd7b0();
  /* 10acd70a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd70d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10acd710:;
  /* 10acd710 mov esp, ebp */
  ESP = (EBP);
  /* 10acd712 pop ebp */
  EBP = (pop32());
  /* 10acd713 ret  */
  ESPCHK(0x10acd610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x10acd720 (134 bytes, 44 insns) */
void f_10acd720(void) {
  FTRACE(0x10acd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd720 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd721 mov ebp, esp */
  EBP = (ESP);
  /* 10acd723 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd727 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acd72a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd72d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acd730 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd733 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acd73a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd73c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10acd73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd742 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd746 jne 0x10acd781 */
  if (!C.zf) goto L_10acd781;
  /* 10acd748 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10acd74a call 0x10ac7a30 */
  push32(0x10acd74fu); f_10ac7a30();
  /* 10acd74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd755 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd759 jne 0x10acd777 */
  if (!C.zf) goto L_10acd777;
  /* 10acd75b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd75e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd761 push edx */
  push32((uint32_t)(EDX));
  /* 10acd762 call dword ptr [0x10af2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2384))), 0x10acd768u);
  /* 10acd768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd76b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10acd76e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd774 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10acd777:;
  /* 10acd777 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10acd779 call 0x10ac7ad0 */
  push32(0x10acd77eu); f_10ac7ad0();
  /* 10acd77e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acd781:;
  /* 10acd781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acd787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd78a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acd78d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd790 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acd797 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10acd79b push eax */
  push32((uint32_t)(EAX));
  /* 10acd79c call dword ptr [0x10af2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2388))), 0x10acd7a2u);
  /* 10acd7a2 mov esp, ebp */
  ESP = (EBP);
  /* 10acd7a4 pop ebp */
  EBP = (pop32());
  /* 10acd7a5 ret  */
  ESPCHK(0x10acd720u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10acd7b0 (38 bytes, 13 insns) */
void f_10acd7b0(void) {
  FTRACE(0x10acd7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10acd7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd7b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10acd7b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd7bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10acd7bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acd7c2 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10acd7c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10acd7cd push eax */
  push32((uint32_t)(EAX));
  /* 10acd7ce call dword ptr [0x10af238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af238c))), 0x10acd7d4u);
  /* 10acd7d4 pop ebp */
  EBP = (pop32());
  /* 10acd7d5 ret  */
  ESPCHK(0x10acd7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e0 @ 0x10acd7e0 (218 bytes, 63 insns) */
void f_10acd7e0(void) {
  FTRACE(0x10acd7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd7e1 mov ebp, esp */
  EBP = (ESP);
  /* 10acd7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd7e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acd7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10acd7ef call 0x10ac7a30 */
  push32(0x10acd7f4u); f_10ac7a30();
  /* 10acd7f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd7f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10acd7fe jmp 0x10acd809 */
  goto L_10acd809;
L_10acd800:;
  /* 10acd800 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd803 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10acd809:;
  /* 10acd809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd80c cmp ecx, dword ptr [0x10af0cc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0cc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd812 jge 0x10acd8a9 */
  if ((C.sf==C.of)) goto L_10acd8a9;
  /* 10acd818 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd81b mov eax, dword ptr [0x10aef968] */
  EAX = (r32((uint32_t)(0x10aef968)));
  /* 10acd820 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd824 je 0x10acd8a4 */
  if (C.zf) goto L_10acd8a4;
  /* 10acd826 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd829 mov edx, dword ptr [0x10aef968] */
  EDX = (r32((uint32_t)(0x10aef968)));
  /* 10acd82f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10acd832 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acd835 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10acd83b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acd83d je 0x10acd861 */
  if (C.zf) goto L_10acd861;
  /* 10acd83f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd842 mov eax, dword ptr [0x10aef968] */
  EAX = (r32((uint32_t)(0x10aef968)));
  /* 10acd847 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10acd84a push ecx */
  push32((uint32_t)(ECX));
  /* 10acd84b call 0x10ace5d0 */
  push32(0x10acd850u); f_10ace5d0();
  /* 10acd850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd853 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd856 je 0x10acd861 */
  if (C.zf) goto L_10acd861;
  /* 10acd858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd85b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd85e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10acd861:;
  /* 10acd861 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd865 jl 0x10acd8a4 */
  if ((C.sf!=C.of)) goto L_10acd8a4;
  /* 10acd867 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd86a mov ecx, dword ptr [0x10aef968] */
  ECX = (r32((uint32_t)(0x10aef968)));
  /* 10acd870 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10acd873 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd876 push edx */
  push32((uint32_t)(EDX));
  /* 10acd877 call dword ptr [0x10af234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af234c))), 0x10acd87du);
  /* 10acd87d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acd87f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd882 mov ecx, dword ptr [0x10aef968] */
  ECX = (r32((uint32_t)(0x10aef968)));
  /* 10acd888 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10acd88b push edx */
  push32((uint32_t)(EDX));
  /* 10acd88c call 0x10ac4ac0 */
  push32(0x10acd891u); f_10ac4ac0();
  /* 10acd891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd897 mov ecx, dword ptr [0x10aef968] */
  ECX = (r32((uint32_t)(0x10aef968)));
  /* 10acd89d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10acd8a4:;
  /* 10acd8a4 jmp 0x10acd800 */
  goto L_10acd800;
L_10acd8a9:;
  /* 10acd8a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acd8ab call 0x10ac7ad0 */
  push32(0x10acd8b0u); f_10ac7ad0();
  /* 10acd8b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd8b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acd8b6 mov esp, ebp */
  ESP = (EBP);
  /* 10acd8b8 pop ebp */
  EBP = (pop32());
  /* 10acd8b9 ret  */
  ESPCHK(0x10acd7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x10acd8c0 (68 bytes, 26 insns) */
void f_10acd8c0(void) {
  FTRACE(0x10acd8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10acd8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd8c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd8c8 jne 0x10acd8d6 */
  if (!C.zf) goto L_10acd8d6;
  /* 10acd8ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10acd8cc call 0x10acda30 */
  push32(0x10acd8d1u); f_10acda30();
  /* 10acd8d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd8d4 jmp 0x10acd900 */
  goto L_10acd900;
L_10acd8d6:;
  /* 10acd8d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd8d9 push eax */
  push32((uint32_t)(EAX));
  /* 10acd8da call 0x10acce40 */
  push32(0x10acd8dfu); f_10acce40();
  /* 10acd8df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd8e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10acd8e6 call 0x10acd910 */
  push32(0x10acd8ebu); f_10acd910();
  /* 10acd8eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd8ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acd8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd8f4 push edx */
  push32((uint32_t)(EDX));
  /* 10acd8f5 call 0x10acceb0 */
  push32(0x10acd8fau); f_10acceb0();
  /* 10acd8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd8fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10acd900:;
  /* 10acd900 mov esp, ebp */
  ESP = (EBP);
  /* 10acd902 pop ebp */
  EBP = (pop32());
  /* 10acd903 ret  */
  ESPCHK(0x10acd8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x10acd910 (65 bytes, 26 insns) */
void f_10acd910(void) {
  FTRACE(0x10acd910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd910 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd911 mov ebp, esp */
  EBP = (ESP);
  /* 10acd913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd916 push eax */
  push32((uint32_t)(EAX));
  /* 10acd917 call 0x10acd960 */
  push32(0x10acd91cu); f_10acd960();
  /* 10acd91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd91f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acd921 je 0x10acd928 */
  if (C.zf) goto L_10acd928;
  /* 10acd923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acd926 jmp 0x10acd94f */
  goto L_10acd94f;
L_10acd928:;
  /* 10acd928 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd92b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acd92e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10acd934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acd936 je 0x10acd94d */
  if (C.zf) goto L_10acd94d;
  /* 10acd938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd93b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10acd93e push ecx */
  push32((uint32_t)(ECX));
  /* 10acd93f call 0x10ace720 */
  push32(0x10acd944u); f_10ace720();
  /* 10acd944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd947 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acd949 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd94b jmp 0x10acd94f */
  goto L_10acd94f;
L_10acd94d:;
  /* 10acd94d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10acd94f:;
  /* 10acd94f pop ebp */
  EBP = (pop32());
  /* 10acd950 ret  */
  ESPCHK(0x10acd910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x10acd960 (183 bytes, 62 insns) */
void f_10acd960(void) {
  FTRACE(0x10acd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acd960 push ebp */
  push32((uint32_t)(EBP));
  /* 10acd961 mov ebp, esp */
  EBP = (ESP);
  /* 10acd963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acd96d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acd970 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acd973 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd976 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acd979 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10acd97c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd97f jne 0x10acd9fb */
  if (!C.zf) goto L_10acd9fb;
  /* 10acd981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd984 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acd987 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10acd98d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acd98f je 0x10acd9fb */
  if (C.zf) goto L_10acd9fb;
  /* 10acd991 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd997 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10acd999 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acd99c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acd99f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd9a3 jle 0x10acd9fb */
  if ((C.zf||C.sf!=C.of)) goto L_10acd9fb;
  /* 10acd9a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acd9a8 push edx */
  push32((uint32_t)(EDX));
  /* 10acd9a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10acd9af push ecx */
  push32((uint32_t)(ECX));
  /* 10acd9b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10acd9b6 push eax */
  push32((uint32_t)(EAX));
  /* 10acd9b7 call 0x10acc8d0 */
  push32(0x10acd9bcu); f_10acc8d0();
  /* 10acd9bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acd9bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acd9c2 jne 0x10acd9e5 */
  if (!C.zf) goto L_10acd9e5;
  /* 10acd9c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acd9ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10acd9d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acd9d2 je 0x10acd9e3 */
  if (C.zf) goto L_10acd9e3;
  /* 10acd9d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acd9da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10acd9dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10acd9e3:;
  /* 10acd9e3 jmp 0x10acd9fb */
  goto L_10acd9fb;
L_10acd9e5:;
  /* 10acd9e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acd9eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10acd9ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10acd9f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10acd9fb:;
  /* 10acd9fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acd9fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acda01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10acda04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10acda06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acda09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10acda10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acda13 mov esp, ebp */
  ESP = (EBP);
  /* 10acda15 pop ebp */
  EBP = (pop32());
  /* 10acda16 ret  */
  ESPCHK(0x10acd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x10acda20 (15 bytes, 7 insns) */
void f_10acda20(void) {
  FTRACE(0x10acda20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acda20 push ebp */
  push32((uint32_t)(EBP));
  /* 10acda21 mov ebp, esp */
  EBP = (ESP);
  /* 10acda23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acda25 call 0x10acda30 */
  push32(0x10acda2au); f_10acda30();
  /* 10acda2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acda2d pop ebp */
  EBP = (pop32());
  /* 10acda2e ret  */
  ESPCHK(0x10acda20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x10acda30 (319 bytes, 94 insns) */
void f_10acda30(void) {
  FTRACE(0x10acda30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acda30 push ebp */
  push32((uint32_t)(EBP));
  /* 10acda31 mov ebp, esp */
  EBP = (ESP);
  /* 10acda33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acda36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10acda3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10acda44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acda46 call 0x10ac7a30 */
  push32(0x10acda4bu); f_10ac7a30();
  /* 10acda4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acda4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10acda55 jmp 0x10acda60 */
  goto L_10acda60;
L_10acda57:;
  /* 10acda57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acda5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acda5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10acda60:;
  /* 10acda60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acda63 cmp ecx, dword ptr [0x10af0cc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10af0cc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acda69 jge 0x10acdb53 */
  if ((C.sf==C.of)) goto L_10acdb53;
  /* 10acda6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acda72 mov eax, dword ptr [0x10aef968] */
  EAX = (r32((uint32_t)(0x10aef968)));
  /* 10acda77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acda7b je 0x10acdb4e */
  if (C.zf) goto L_10acdb4e;
  /* 10acda81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acda84 mov edx, dword ptr [0x10aef968] */
  EDX = (r32((uint32_t)(0x10aef968)));
  /* 10acda8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10acda8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10acda90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10acda96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acda98 je 0x10acdb4e */
  if (C.zf) goto L_10acdb4e;
  /* 10acda9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdaa1 mov eax, dword ptr [0x10aef968] */
  EAX = (r32((uint32_t)(0x10aef968)));
  /* 10acdaa6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10acdaa9 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdaaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdaad push edx */
  push32((uint32_t)(EDX));
  /* 10acdaae call 0x10acce80 */
  push32(0x10acdab3u); f_10acce80();
  /* 10acdab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdab6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdab9 mov ecx, dword ptr [0x10aef968] */
  ECX = (r32((uint32_t)(0x10aef968)));
  /* 10acdabf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10acdac2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10acdac5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10acdaca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acdacc je 0x10acdb35 */
  if (C.zf) goto L_10acdb35;
  /* 10acdace cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdad2 jne 0x10acdaf9 */
  if (!C.zf) goto L_10acdaf9;
  /* 10acdad4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdad7 mov edx, dword ptr [0x10aef968] */
  EDX = (r32((uint32_t)(0x10aef968)));
  /* 10acdadd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10acdae0 push eax */
  push32((uint32_t)(EAX));
  /* 10acdae1 call 0x10acd910 */
  push32(0x10acdae6u); f_10acd910();
  /* 10acdae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdae9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdaec je 0x10acdaf7 */
  if (C.zf) goto L_10acdaf7;
  /* 10acdaee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acdaf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdaf4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10acdaf7:;
  /* 10acdaf7 jmp 0x10acdb35 */
  goto L_10acdb35;
L_10acdaf9:;
  /* 10acdaf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdafd jne 0x10acdb35 */
  if (!C.zf) goto L_10acdb35;
  /* 10acdaff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdb02 mov eax, dword ptr [0x10aef968] */
  EAX = (r32((uint32_t)(0x10aef968)));
  /* 10acdb07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10acdb0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acdb0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10acdb10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acdb12 je 0x10acdb35 */
  if (C.zf) goto L_10acdb35;
  /* 10acdb14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdb17 mov ecx, dword ptr [0x10aef968] */
  ECX = (r32((uint32_t)(0x10aef968)));
  /* 10acdb1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10acdb20 push edx */
  push32((uint32_t)(EDX));
  /* 10acdb21 call 0x10acd910 */
  push32(0x10acdb26u); f_10acd910();
  /* 10acdb26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdb29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdb2c jne 0x10acdb35 */
  if (!C.zf) goto L_10acdb35;
  /* 10acdb2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10acdb35:;
  /* 10acdb35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdb38 mov ecx, dword ptr [0x10aef968] */
  ECX = (r32((uint32_t)(0x10aef968)));
  /* 10acdb3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10acdb41 push edx */
  push32((uint32_t)(EDX));
  /* 10acdb42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdb45 push eax */
  push32((uint32_t)(EAX));
  /* 10acdb46 call 0x10accef0 */
  push32(0x10acdb4bu); f_10accef0();
  /* 10acdb4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acdb4e:;
  /* 10acdb4e jmp 0x10acda57 */
  goto L_10acda57;
L_10acdb53:;
  /* 10acdb53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acdb55 call 0x10ac7ad0 */
  push32(0x10acdb5au); f_10ac7ad0();
  /* 10acdb5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdb5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdb61 jne 0x10acdb68 */
  if (!C.zf) goto L_10acdb68;
  /* 10acdb63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acdb66 jmp 0x10acdb6b */
  goto L_10acdb6b;
L_10acdb68:;
  /* 10acdb68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10acdb6b:;
  /* 10acdb6b mov esp, ebp */
  ESP = (EBP);
  /* 10acdb6d pop ebp */
  EBP = (pop32());
  /* 10acdb6e ret  */
  ESPCHK(0x10acda30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10acdb70 (15 bytes, 7 insns) */
void f_10acdb70(void) {
  FTRACE(0x10acdb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acdb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10acdb71 mov ebp, esp */
  EBP = (ESP);
  /* 10acdb73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acdb75 call 0x10ac2fa0 */
  push32(0x10acdb7au); f_10ac2fa0();
  /* 10acdb7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdb7d pop ebp */
  EBP = (pop32());
  /* 10acdb7e ret  */
  ESPCHK(0x10acdb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x10acdb80 (1007 bytes, 269 insns) */
void f_10acdb80(void) {
  FTRACE(0x10acdb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acdb80 push ebp */
  push32((uint32_t)(EBP));
  /* 10acdb81 mov ebp, esp */
  EBP = (ESP);
  /* 10acdb83 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acdb89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdb8d jl 0x10acdb95 */
  if ((C.sf!=C.of)) goto L_10acdb95;
  /* 10acdb8f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdb93 jle 0x10acdb9c */
  if ((C.zf||C.sf!=C.of)) goto L_10acdb9c;
L_10acdb95:;
  /* 10acdb95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acdb97 jmp 0x10acdf6b */
  goto L_10acdf6b;
L_10acdb9c:;
  /* 10acdb9c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10acdb9e call 0x10ac7a30 */
  push32(0x10acdba3u); f_10ac7a30();
  /* 10acdba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdba6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10acdbad mov eax, dword ptr [0x10aef954] */
  EAX = (r32((uint32_t)(0x10aef954)));
  /* 10acdbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdbb5 mov dword ptr [0x10aef954], eax */
  w32((uint32_t)(0x10aef954), (EAX));
L_10acdbba:;
  /* 10acdbba cmp dword ptr [0x10aef964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdbc1 je 0x10acdbcd */
  if (C.zf) goto L_10acdbcd;
  /* 10acdbc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acdbc5 call dword ptr [0x10af22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22ac))), 0x10acdbcbu);
  /* 10acdbcb jmp 0x10acdbba */
  goto L_10acdbba;
L_10acdbcd:;
  /* 10acdbcd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdbd1 je 0x10acdc11 */
  if (C.zf) goto L_10acdc11;
  /* 10acdbd3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdbd7 je 0x10acdbf1 */
  if (C.zf) goto L_10acdbf1;
  /* 10acdbd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acdbdc push ecx */
  push32((uint32_t)(ECX));
  /* 10acdbdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acdbe0 push edx */
  push32((uint32_t)(EDX));
  /* 10acdbe1 call 0x10acdf70 */
  push32(0x10acdbe6u); f_10acdf70();
  /* 10acdbe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdbe9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10acdbef jmp 0x10acdc03 */
  goto L_10acdc03;
L_10acdbf1:;
  /* 10acdbf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acdbf4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acdbf7 mov ecx, dword ptr [eax + 0x10aee4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10aee4dc)));
  /* 10acdbfd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10acdc03:;
  /* 10acdc03 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10acdc09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10acdc0c jmp 0x10acdf4b */
  goto L_10acdf4b;
L_10acdc11:;
  /* 10acdc11 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10acdc18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10acdc1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdc23 je 0x10acdf43 */
  if (C.zf) goto L_10acdf43;
  /* 10acdc29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acdc2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acdc2f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdc32 jne 0x10acde54 */
  if (!C.zf) goto L_10acde54;
  /* 10acdc38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acdc3b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10acdc3f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdc42 jne 0x10acde54 */
  if (!C.zf) goto L_10acde54;
  /* 10acdc48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acdc4b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10acdc4f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdc52 jne 0x10acde54 */
  if (!C.zf) goto L_10acde54;
  /* 10acdc58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acdc5b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10acdc61:;
  /* 10acdc61 push 0x10aeb1ac */
  push32((uint32_t)(0x10aeb1acu));
  /* 10acdc66 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10acdc6c push ecx */
  push32((uint32_t)(ECX));
  /* 10acdc6d call 0x10acfdd0 */
  push32(0x10acdc72u); f_10acfdd0();
  /* 10acdc72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdc75 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10acdc7b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdc82 je 0x10acdcad */
  if (C.zf) goto L_10acdcad;
  /* 10acdc84 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acdc8a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acdc90 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10acdc96 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdc9d je 0x10acdcad */
  if (C.zf) goto L_10acdcad;
  /* 10acdc9f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acdca5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acdca8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdcab jne 0x10acdcd3 */
  if (!C.zf) goto L_10acdcd3;
L_10acdcad:;
  /* 10acdcad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdcb1 je 0x10acdccc */
  if (C.zf) goto L_10acdccc;
  /* 10acdcb3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10acdcb5 call 0x10ac7ad0 */
  push32(0x10acdcbau); f_10ac7ad0();
  /* 10acdcba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdcbd mov edx, dword ptr [0x10aef954] */
  EDX = (r32((uint32_t)(0x10aef954)));
  /* 10acdcc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acdcc6 mov dword ptr [0x10aef954], edx */
  w32((uint32_t)(0x10aef954), (EDX));
L_10acdccc:;
  /* 10acdccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acdcce jmp 0x10acdf6b */
  goto L_10acdf6b;
L_10acdcd3:;
  /* 10acdcd3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10acdcda jmp 0x10acdce5 */
  goto L_10acdce5;
L_10acdcdc:;
  /* 10acdcdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acdcdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdce2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10acdce5:;
  /* 10acdce5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdce9 jg 0x10acdd33 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acdd33;
  /* 10acdceb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10acdcf1 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdcf2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10acdcf8 push edx */
  push32((uint32_t)(EDX));
  /* 10acdcf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acdcfc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acdcff mov ecx, dword ptr [eax + 0x10aee4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10aee4d8)));
  /* 10acdd05 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdd06 call 0x10acfd90 */
  push32(0x10acdd0bu); f_10acfd90();
  /* 10acdd0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdd0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acdd10 jne 0x10acdd31 */
  if (!C.zf) goto L_10acdd31;
  /* 10acdd12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acdd15 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acdd18 mov eax, dword ptr [edx + 0x10aee4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10aee4d8)));
  /* 10acdd1e push eax */
  push32((uint32_t)(EAX));
  /* 10acdd1f call 0x10ac6e60 */
  push32(0x10acdd24u); f_10ac6e60();
  /* 10acdd24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdd27 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdd2d jne 0x10acdd31 */
  if (!C.zf) goto L_10acdd31;
  /* 10acdd2f jmp 0x10acdd33 */
  goto L_10acdd33;
L_10acdd31:;
  /* 10acdd31 jmp 0x10acdcdc */
  goto L_10acdcdc;
L_10acdd33:;
  /* 10acdd33 push 0x10aeb1a8 */
  push32((uint32_t)(0x10aeb1a8u));
  /* 10acdd38 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acdd3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdd41 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10acdd47 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acdd4d push edx */
  push32((uint32_t)(EDX));
  /* 10acdd4e call 0x10acfd50 */
  push32(0x10acdd53u); f_10acfd50();
  /* 10acdd53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdd56 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10acdd5c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdd63 jne 0x10acdd99 */
  if (!C.zf) goto L_10acdd99;
  /* 10acdd65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acdd6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acdd6e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdd71 je 0x10acdd99 */
  if (C.zf) goto L_10acdd99;
  /* 10acdd73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdd77 je 0x10acdd92 */
  if (C.zf) goto L_10acdd92;
  /* 10acdd79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10acdd7b call 0x10ac7ad0 */
  push32(0x10acdd80u); f_10ac7ad0();
  /* 10acdd80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdd83 mov edx, dword ptr [0x10aef954] */
  EDX = (r32((uint32_t)(0x10aef954)));
  /* 10acdd89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acdd8c mov dword ptr [0x10aef954], edx */
  w32((uint32_t)(0x10aef954), (EDX));
L_10acdd92:;
  /* 10acdd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acdd94 jmp 0x10acdf6b */
  goto L_10acdf6b;
L_10acdd99:;
  /* 10acdd99 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdd9d jg 0x10acddea */
  if ((!C.zf&&C.sf==C.of)) goto L_10acddea;
  /* 10acdd9f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10acdda5 push eax */
  push32((uint32_t)(EAX));
  /* 10acdda6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acddac push ecx */
  push32((uint32_t)(ECX));
  /* 10acddad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10acddb3 push edx */
  push32((uint32_t)(EDX));
  /* 10acddb4 call 0x10ac7850 */
  push32(0x10acddb9u); f_10ac7850();
  /* 10acddb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acddbc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10acddc2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10acddca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10acddd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10acddd1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acddd4 push edx */
  push32((uint32_t)(EDX));
  /* 10acddd5 call 0x10acdf70 */
  push32(0x10acdddau); f_10acdf70();
  /* 10acddda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acdddf je 0x10acddea */
  if (C.zf) goto L_10acddea;
  /* 10acdde1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdde4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdde7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10acddea:;
  /* 10acddea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10acddf0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acddf6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10acddfc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10acde02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acde05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acde07 je 0x10acde18 */
  if (C.zf) goto L_10acde18;
  /* 10acde09 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10acde0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acde12 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10acde18:;
  /* 10acde18 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10acde1e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acde21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acde23 jne 0x10acdc61 */
  if (!C.zf) goto L_10acdc61;
  /* 10acde29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acde2d je 0x10acde3c */
  if (C.zf) goto L_10acde3c;
  /* 10acde2f call 0x10ace110 */
  push32(0x10acde34u); f_10ace110();
  /* 10acde34 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10acde3a jmp 0x10acde46 */
  goto L_10acde46;
L_10acde3c:;
  /* 10acde3c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10acde46:;
  /* 10acde46 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10acde4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acde4f jmp 0x10acdf41 */
  goto L_10acdf41;
L_10acde54:;
  /* 10acde54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acde57 push edx */
  push32((uint32_t)(EDX));
  /* 10acde58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acde5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10acde5c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10acde62 push eax */
  push32((uint32_t)(EAX));
  /* 10acde63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acde66 push ecx */
  push32((uint32_t)(ECX));
  /* 10acde67 call 0x10ace210 */
  push32(0x10acde6cu); f_10ace210();
  /* 10acde6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acde6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acde72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acde76 je 0x10acdf41 */
  if (C.zf) goto L_10acdf41;
  /* 10acde7c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10acde83 jmp 0x10acde8e */
  goto L_10acde8e;
L_10acde85:;
  /* 10acde85 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acde88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acde8b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10acde8e:;
  /* 10acde8e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acde92 jg 0x10acdef0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acdef0;
  /* 10acde94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acde98 je 0x10acdeee */
  if (C.zf) goto L_10acdeee;
  /* 10acde9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acde9d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acdea0 mov ecx, dword ptr [eax + 0x10aee4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10aee4dc)));
  /* 10acdea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdea7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10acdead push edx */
  push32((uint32_t)(EDX));
  /* 10acdeae call 0x10acfcc0 */
  push32(0x10acdeb3u); f_10acfcc0();
  /* 10acdeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdeb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acdeb8 je 0x10acdee5 */
  if (C.zf) goto L_10acdee5;
  /* 10acdeba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10acdec0 push eax */
  push32((uint32_t)(EAX));
  /* 10acdec1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10acdec4 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdec5 call 0x10acdf70 */
  push32(0x10acdecau); f_10acdf70();
  /* 10acdeca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acdecf je 0x10acdedc */
  if (C.zf) goto L_10acdedc;
  /* 10acded1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acded4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acded7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10acdeda jmp 0x10acdee3 */
  goto L_10acdee3;
L_10acdedc:;
  /* 10acdedc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10acdee3:;
  /* 10acdee3 jmp 0x10acdeee */
  goto L_10acdeee;
L_10acdee5:;
  /* 10acdee5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acdee8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdeeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10acdeee:;
  /* 10acdeee jmp 0x10acde85 */
  goto L_10acde85;
L_10acdef0:;
  /* 10acdef0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdef4 je 0x10acdf1b */
  if (C.zf) goto L_10acdf1b;
  /* 10acdef6 call 0x10ace110 */
  push32(0x10acdefbu); f_10ace110();
  /* 10acdefb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acdefe push 2 */
  push32((uint32_t)(0x2u));
  /* 10acdf00 mov ecx, dword ptr [0x10aee4dc] */
  ECX = (r32((uint32_t)(0x10aee4dc)));
  /* 10acdf06 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdf07 call 0x10ac4ac0 */
  push32(0x10acdf0cu); f_10ac4ac0();
  /* 10acdf0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdf0f mov dword ptr [0x10aee4dc], 0 */
  w32((uint32_t)(0x10aee4dc), (0x0u));
  /* 10acdf19 jmp 0x10acdf41 */
  goto L_10acdf41;
L_10acdf1b:;
  /* 10acdf1b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdf1f je 0x10acdf2e */
  if (C.zf) goto L_10acdf2e;
  /* 10acdf21 call 0x10ace110 */
  push32(0x10acdf26u); f_10ace110();
  /* 10acdf26 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10acdf2c jmp 0x10acdf38 */
  goto L_10acdf38;
L_10acdf2e:;
  /* 10acdf2e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10acdf38:;
  /* 10acdf38 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10acdf3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10acdf41:;
  /* 10acdf41 jmp 0x10acdf4b */
  goto L_10acdf4b;
L_10acdf43:;
  /* 10acdf43 call 0x10ace110 */
  push32(0x10acdf48u); f_10ace110();
  /* 10acdf48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10acdf4b:;
  /* 10acdf4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdf4f je 0x10acdf68 */
  if (C.zf) goto L_10acdf68;
  /* 10acdf51 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10acdf53 call 0x10ac7ad0 */
  push32(0x10acdf58u); f_10ac7ad0();
  /* 10acdf58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdf5b mov eax, dword ptr [0x10aef954] */
  EAX = (r32((uint32_t)(0x10aef954)));
  /* 10acdf60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acdf63 mov dword ptr [0x10aef954], eax */
  w32((uint32_t)(0x10aef954), (EAX));
L_10acdf68:;
  /* 10acdf68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10acdf6b:;
  /* 10acdf6b mov esp, ebp */
  ESP = (EBP);
  /* 10acdf6d pop ebp */
  EBP = (pop32());
  /* 10acdf6e ret  */
  ESPCHK(0x10acdb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x10acdf70 (403 bytes, 117 insns) */
void f_10acdf70(void) {
  FTRACE(0x10acdf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acdf70 push ebp */
  push32((uint32_t)(EBP));
  /* 10acdf71 mov ebp, esp */
  EBP = (ESP);
  /* 10acdf73 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acdf79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acdf7c push eax */
  push32((uint32_t)(EAX));
  /* 10acdf7d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10acdf83 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdf84 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10acdf8a push edx */
  push32((uint32_t)(EDX));
  /* 10acdf8b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10acdf91 push eax */
  push32((uint32_t)(EAX));
  /* 10acdf92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acdf95 push ecx */
  push32((uint32_t)(ECX));
  /* 10acdf96 call 0x10ace210 */
  push32(0x10acdf9bu); f_10ace210();
  /* 10acdf9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdf9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acdfa0 jne 0x10acdfa9 */
  if (!C.zf) goto L_10acdfa9;
  /* 10acdfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acdfa4 jmp 0x10ace0ff */
  goto L_10ace0ff;
L_10acdfa9:;
  /* 10acdfa9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10acdfae push 0x10aeb1b0 */
  push32((uint32_t)(0x10aeb1b0u));
  /* 10acdfb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acdfb5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10acdfbb push edx */
  push32((uint32_t)(EDX));
  /* 10acdfbc call 0x10ac6e60 */
  push32(0x10acdfc1u); f_10ac6e60();
  /* 10acdfc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdfc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdfc7 push eax */
  push32((uint32_t)(EAX));
  /* 10acdfc8 call 0x10ac4030 */
  push32(0x10acdfcdu); f_10ac4030();
  /* 10acdfcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acdfd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acdfd3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acdfd7 jne 0x10acdfe0 */
  if (!C.zf) goto L_10acdfe0;
  /* 10acdfd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acdfdb jmp 0x10ace0ff */
  goto L_10ace0ff;
L_10acdfe0:;
  /* 10acdfe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acdfe3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10acdfe6 mov ecx, dword ptr [eax + 0x10aee4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10aee4dc)));
  /* 10acdfec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acdfef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acdff2 mov eax, dword ptr [edx*4 + 0x10aef7d0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10aef7d0)));
  /* 10acdff9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acdffc push 6 */
  push32((uint32_t)(0x6u));
  /* 10acdffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace001 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace004 add ecx, 0x10aef820 */
  { uint32_t _a=(ECX),_b=(0x10aef820u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace00a push ecx */
  push32((uint32_t)(ECX));
  /* 10ace00b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10ace00e push edx */
  push32((uint32_t)(EDX));
  /* 10ace00f call 0x10aca910 */
  push32(0x10ace014u); f_10aca910();
  /* 10ace014 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace017 mov eax, dword ptr [0x10aef7e8] */
  EAX = (r32((uint32_t)(0x10aef7e8)));
  /* 10ace01c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ace01f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10ace025 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace026 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace029 push edx */
  push32((uint32_t)(EDX));
  /* 10ace02a call 0x10ac6fe0 */
  push32(0x10ace02fu); f_10ac6fe0();
  /* 10ace02f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace035 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace038 mov dword ptr [ecx + 0x10aee4dc], eax */
  w32((uint32_t)(ECX + 0x10aee4dc), (EAX));
  /* 10ace03e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10ace044 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ace04a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace04d mov dword ptr [eax*4 + 0x10aef7d0], edx */
  w32((uint32_t)(EAX*4 + 0x10aef7d0), (EDX));
  /* 10ace054 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ace056 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10ace05c push ecx */
  push32((uint32_t)(ECX));
  /* 10ace05d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace060 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace063 add edx, 0x10aef820 */
  { uint32_t _a=(EDX),_b=(0x10aef820u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace069 push edx */
  push32((uint32_t)(EDX));
  /* 10ace06a call 0x10aca910 */
  push32(0x10ace06fu); f_10aca910();
  /* 10ace06f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace072 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace076 jne 0x10ace083 */
  if (!C.zf) goto L_10ace083;
  /* 10ace078 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ace07e mov dword ptr [0x10aef7e8], eax */
  w32((uint32_t)(0x10aef7e8), (EAX));
L_10ace083:;
  /* 10ace083 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace087 jne 0x10ace095 */
  if (!C.zf) goto L_10ace095;
  /* 10ace089 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ace08f mov dword ptr [0x10aef7ec], ecx */
  w32((uint32_t)(0x10aef7ec), (ECX));
L_10ace095:;
  /* 10ace095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace098 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace09b call dword ptr [edx + 0x10aee4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10aee4e0))), 0x10ace0a1u);
  /* 10ace0a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace0a3 je 0x10ace0dc */
  if (C.zf) goto L_10ace0dc;
  /* 10ace0a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace0a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace0ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace0ae mov dword ptr [eax + 0x10aee4dc], ecx */
  w32((uint32_t)(EAX + 0x10aee4dc), (ECX));
  /* 10ace0b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace0b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace0b9 push edx */
  push32((uint32_t)(EDX));
  /* 10ace0ba call 0x10ac4ac0 */
  push32(0x10ace0bfu); f_10ac4ac0();
  /* 10ace0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace0c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace0c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace0c8 mov dword ptr [eax*4 + 0x10aef7d0], ecx */
  w32((uint32_t)(EAX*4 + 0x10aef7d0), (ECX));
  /* 10ace0cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ace0d2 mov dword ptr [0x10aef7e8], edx */
  w32((uint32_t)(0x10aef7e8), (EDX));
  /* 10ace0d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace0da jmp 0x10ace0ff */
  goto L_10ace0ff;
L_10ace0dc:;
  /* 10ace0dc cmp dword ptr [ebp - 0xc], 0x10aee3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10aee3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace0e3 je 0x10ace0f3 */
  if (C.zf) goto L_10ace0f3;
  /* 10ace0e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace0e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace0ea push eax */
  push32((uint32_t)(EAX));
  /* 10ace0eb call 0x10ac4ac0 */
  push32(0x10ace0f0u); f_10ac4ac0();
  /* 10ace0f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace0f3:;
  /* 10ace0f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace0f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace0f9 mov eax, dword ptr [ecx + 0x10aee4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10aee4dc)));
L_10ace0ff:;
  /* 10ace0ff mov esp, ebp */
  ESP = (EBP);
  /* 10ace101 pop ebp */
  EBP = (pop32());
  /* 10ace102 ret  */
  ESPCHK(0x10acdf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e110 @ 0x10ace110 (256 bytes, 72 insns) */
void f_10ace110(void) {
  FTRACE(0x10ace110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace110 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace111 mov ebp, esp */
  EBP = (ESP);
  /* 10ace113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ace116 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ace11d cmp dword ptr [0x10aee4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aee4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace124 jne 0x10ace144 */
  if (!C.zf) goto L_10ace144;
  /* 10ace126 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10ace12b push 0x10aeb1b0 */
  push32((uint32_t)(0x10aeb1b0u));
  /* 10ace130 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace132 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10ace137 call 0x10ac4030 */
  push32(0x10ace13cu); f_10ac4030();
  /* 10ace13c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace13f mov dword ptr [0x10aee4dc], eax */
  w32((uint32_t)(0x10aee4dc), (EAX));
L_10ace144:;
  /* 10ace144 mov eax, dword ptr [0x10aee4dc] */
  EAX = (r32((uint32_t)(0x10aee4dc)));
  /* 10ace149 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ace14c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ace153 jmp 0x10ace15e */
  goto L_10ace15e;
L_10ace155:;
  /* 10ace155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace158 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace15b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ace15e:;
  /* 10ace15e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace161 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace164 mov eax, dword ptr [edx + 0x10aee4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10aee4dc)));
  /* 10ace16a push eax */
  push32((uint32_t)(EAX));
  /* 10ace16b push 0x10aeb1bc */
  push32((uint32_t)(0x10aeb1bcu));
  /* 10ace170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace173 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace176 mov edx, dword ptr [ecx + 0x10aee4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10aee4d8)));
  /* 10ace17c push edx */
  push32((uint32_t)(EDX));
  /* 10ace17d push 3 */
  push32((uint32_t)(0x3u));
  /* 10ace17f mov eax, dword ptr [0x10aee4dc] */
  EAX = (r32((uint32_t)(0x10aee4dc)));
  /* 10ace184 push eax */
  push32((uint32_t)(EAX));
  /* 10ace185 call 0x10ace3b0 */
  push32(0x10ace18au); f_10ace3b0();
  /* 10ace18a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace18d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace191 jge 0x10ace1d9 */
  if ((C.sf==C.of)) goto L_10ace1d9;
  /* 10ace193 push 0x10aeb1a8 */
  push32((uint32_t)(0x10aeb1a8u));
  /* 10ace198 mov ecx, dword ptr [0x10aee4dc] */
  ECX = (r32((uint32_t)(0x10aee4dc)));
  /* 10ace19e push ecx */
  push32((uint32_t)(ECX));
  /* 10ace19f call 0x10ac6ff0 */
  push32(0x10ace1a4u); f_10ac6ff0();
  /* 10ace1a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace1a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace1aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace1ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace1b0 mov eax, dword ptr [edx + 0x10aee4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10aee4dc)));
  /* 10ace1b6 push eax */
  push32((uint32_t)(EAX));
  /* 10ace1b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace1ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace1bd mov edx, dword ptr [ecx + 0x10aee4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10aee4dc)));
  /* 10ace1c3 push edx */
  push32((uint32_t)(EDX));
  /* 10ace1c4 call 0x10acfcc0 */
  push32(0x10ace1c9u); f_10acfcc0();
  /* 10ace1c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace1ce je 0x10ace1d7 */
  if (C.zf) goto L_10ace1d7;
  /* 10ace1d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ace1d7:;
  /* 10ace1d7 jmp 0x10ace207 */
  goto L_10ace207;
L_10ace1d9:;
  /* 10ace1d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace1dd jne 0x10ace1e6 */
  if (!C.zf) goto L_10ace1e6;
  /* 10ace1df mov eax, dword ptr [0x10aee4dc] */
  EAX = (r32((uint32_t)(0x10aee4dc)));
  /* 10ace1e4 jmp 0x10ace20c */
  goto L_10ace20c;
L_10ace1e6:;
  /* 10ace1e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace1e8 mov eax, dword ptr [0x10aee4dc] */
  EAX = (r32((uint32_t)(0x10aee4dc)));
  /* 10ace1ed push eax */
  push32((uint32_t)(EAX));
  /* 10ace1ee call 0x10ac4ac0 */
  push32(0x10ace1f3u); f_10ac4ac0();
  /* 10ace1f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace1f6 mov dword ptr [0x10aee4dc], 0 */
  w32((uint32_t)(0x10aee4dc), (0x0u));
  /* 10ace200 mov eax, dword ptr [0x10aee4f4] */
  EAX = (r32((uint32_t)(0x10aee4f4)));
  /* 10ace205 jmp 0x10ace20c */
  goto L_10ace20c;
L_10ace207:;
  /* 10ace207 jmp 0x10ace155 */
  goto L_10ace155;
L_10ace20c:;
  /* 10ace20c mov esp, ebp */
  ESP = (EBP);
  /* 10ace20e pop ebp */
  EBP = (pop32());
  /* 10ace20f ret  */
  ESPCHK(0x10ace110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e210 @ 0x10ace210 (388 bytes, 115 insns) */
void f_10ace210(void) {
  FTRACE(0x10ace210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace210 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace211 mov ebp, esp */
  EBP = (ESP);
  /* 10ace213 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ace219 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace21d jne 0x10ace226 */
  if (!C.zf) goto L_10ace226;
  /* 10ace21f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace221 jmp 0x10ace390 */
  goto L_10ace390;
L_10ace226:;
  /* 10ace226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace229 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ace22c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace22f jne 0x10ace280 */
  if (!C.zf) goto L_10ace280;
  /* 10ace231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace234 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ace238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace23a jne 0x10ace280 */
  if (!C.zf) goto L_10ace280;
  /* 10ace23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace23f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10ace242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace245 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10ace249 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace24d je 0x10ace269 */
  if (C.zf) goto L_10ace269;
  /* 10ace24f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ace252 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10ace257 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ace25a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10ace260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ace263 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10ace269:;
  /* 10ace269 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace26d je 0x10ace278 */
  if (C.zf) goto L_10ace278;
  /* 10ace26f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ace272 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ace278:;
  /* 10ace278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace27b jmp 0x10ace390 */
  goto L_10ace390;
L_10ace280:;
  /* 10ace280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace283 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace284 push 0x10aee450 */
  push32((uint32_t)(0x10aee450u));
  /* 10ace289 call 0x10acfcc0 */
  push32(0x10ace28eu); f_10acfcc0();
  /* 10ace28e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace293 je 0x10ace348 */
  if (C.zf) goto L_10ace348;
  /* 10ace299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace29c push edx */
  push32((uint32_t)(EDX));
  /* 10ace29d push 0x10aee3cc */
  push32((uint32_t)(0x10aee3ccu));
  /* 10ace2a2 call 0x10acfcc0 */
  push32(0x10ace2a7u); f_10acfcc0();
  /* 10ace2a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace2aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace2ac je 0x10ace348 */
  if (C.zf) goto L_10ace348;
  /* 10ace2b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace2b5 push eax */
  push32((uint32_t)(EAX));
  /* 10ace2b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10ace2bc push ecx */
  push32((uint32_t)(ECX));
  /* 10ace2bd call 0x10ace400 */
  push32(0x10ace2c2u); f_10ace400();
  /* 10ace2c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace2c7 je 0x10ace2d0 */
  if (C.zf) goto L_10ace2d0;
  /* 10ace2c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace2cb jmp 0x10ace390 */
  goto L_10ace390;
L_10ace2d0:;
  /* 10ace2d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10ace2d6 push edx */
  push32((uint32_t)(EDX));
  /* 10ace2d7 push 0x10aef7f8 */
  push32((uint32_t)(0x10aef7f8u));
  /* 10ace2dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10ace2e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ace2e3 call 0x10acfe10 */
  push32(0x10ace2e8u); f_10acfe10();
  /* 10ace2e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace2eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace2ed jne 0x10ace2f6 */
  if (!C.zf) goto L_10ace2f6;
  /* 10ace2ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace2f1 jmp 0x10ace390 */
  goto L_10ace390;
L_10ace2f6:;
  /* 10ace2f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace2f8 mov cx, word ptr [0x10aef7fc] */
  CX = (r16((uint32_t)(0x10aef7fc)));
  /* 10ace2ff mov dword ptr [0x10aef800], ecx */
  w32((uint32_t)(0x10aef800), (ECX));
  /* 10ace305 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10ace30b push edx */
  push32((uint32_t)(EDX));
  /* 10ace30c push 0x10aee450 */
  push32((uint32_t)(0x10aee450u));
  /* 10ace311 call 0x10ace560 */
  push32(0x10ace316u); f_10ace560();
  /* 10ace316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace31c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ace31f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ace321 je 0x10ace336 */
  if (C.zf) goto L_10ace336;
  /* 10ace323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace326 push edx */
  push32((uint32_t)(EDX));
  /* 10ace327 push 0x10aee3cc */
  push32((uint32_t)(0x10aee3ccu));
  /* 10ace32c call 0x10ac6fe0 */
  push32(0x10ace331u); f_10ac6fe0();
  /* 10ace331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace334 jmp 0x10ace348 */
  goto L_10ace348;
L_10ace336:;
  /* 10ace336 push 0x10aee450 */
  push32((uint32_t)(0x10aee450u));
  /* 10ace33b push 0x10aee3cc */
  push32((uint32_t)(0x10aee3ccu));
  /* 10ace340 call 0x10ac6fe0 */
  push32(0x10ace345u); f_10ac6fe0();
  /* 10ace345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace348:;
  /* 10ace348 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace34c je 0x10ace361 */
  if (C.zf) goto L_10ace361;
  /* 10ace34e push 6 */
  push32((uint32_t)(0x6u));
  /* 10ace350 push 0x10aef7f8 */
  push32((uint32_t)(0x10aef7f8u));
  /* 10ace355 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ace358 push eax */
  push32((uint32_t)(EAX));
  /* 10ace359 call 0x10aca910 */
  push32(0x10ace35eu); f_10aca910();
  /* 10ace35e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace361:;
  /* 10ace361 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace365 je 0x10ace37a */
  if (C.zf) goto L_10ace37a;
  /* 10ace367 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ace369 push 0x10aef800 */
  push32((uint32_t)(0x10aef800u));
  /* 10ace36e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ace371 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace372 call 0x10aca910 */
  push32(0x10ace377u); f_10aca910();
  /* 10ace377 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace37a:;
  /* 10ace37a push 0x10aee450 */
  push32((uint32_t)(0x10aee450u));
  /* 10ace37f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace382 push edx */
  push32((uint32_t)(EDX));
  /* 10ace383 call 0x10ac6fe0 */
  push32(0x10ace388u); f_10ac6fe0();
  /* 10ace388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace38b mov eax, 0x10aee450 */
  EAX = (0x10aee450u);
L_10ace390:;
  /* 10ace390 mov esp, ebp */
  ESP = (EBP);
  /* 10ace392 pop ebp */
  EBP = (pop32());
  /* 10ace393 ret  */
  ESPCHK(0x10ace210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x10ace3a0 (7 bytes, 5 insns) */
void f_10ace3a0(void) {
  FTRACE(0x10ace3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ace3a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace3a5 pop ebp */
  EBP = (pop32());
  /* 10ace3a6 ret  */
  ESPCHK(0x10ace3a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10ace3b0 (79 bytes, 28 insns) */
void f_10ace3b0(void) {
  FTRACE(0x10ace3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ace3b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ace3b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ace3b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace3bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ace3c3 jmp 0x10ace3ce */
  goto L_10ace3ce;
L_10ace3c5:;
  /* 10ace3c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace3c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace3cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ace3ce:;
  /* 10ace3ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace3d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace3d4 jge 0x10ace3f4 */
  if ((C.sf==C.of)) goto L_10ace3f4;
  /* 10ace3d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace3d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace3dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace3df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace3e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ace3e5 push edx */
  push32((uint32_t)(EDX));
  /* 10ace3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace3e9 push eax */
  push32((uint32_t)(EAX));
  /* 10ace3ea call 0x10ac6ff0 */
  push32(0x10ace3efu); f_10ac6ff0();
  /* 10ace3ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace3f2 jmp 0x10ace3c5 */
  goto L_10ace3c5;
L_10ace3f4:;
  /* 10ace3f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ace3fb mov esp, ebp */
  ESP = (EBP);
  /* 10ace3fd pop ebp */
  EBP = (pop32());
  /* 10ace3fe ret  */
  ESPCHK(0x10ace3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e400 @ 0x10ace400 (349 bytes, 122 insns) */
void f_10ace400(void) {
  FTRACE(0x10ace400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace400 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace401 mov ebp, esp */
  EBP = (ESP);
  /* 10ace403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ace406 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10ace40b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ace40d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace410 push eax */
  push32((uint32_t)(EAX));
  /* 10ace411 call 0x10ac7da0 */
  push32(0x10ace416u); f_10ac7da0();
  /* 10ace416 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace419 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace41c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ace41f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ace421 jne 0x10ace42a */
  if (!C.zf) goto L_10ace42a;
  /* 10ace423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace425 jmp 0x10ace559 */
  goto L_10ace559;
L_10ace42a:;
  /* 10ace42a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace42d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ace430 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace433 jne 0x10ace460 */
  if (!C.zf) goto L_10ace460;
  /* 10ace435 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace438 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ace43c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace43e je 0x10ace460 */
  if (C.zf) goto L_10ace460;
  /* 10ace440 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace443 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace446 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace44a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace450 push edx */
  push32((uint32_t)(EDX));
  /* 10ace451 call 0x10ac6fe0 */
  push32(0x10ace456u); f_10ac6fe0();
  /* 10ace456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace45b jmp 0x10ace559 */
  goto L_10ace559;
L_10ace460:;
  /* 10ace460 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ace467 jmp 0x10ace472 */
  goto L_10ace472;
L_10ace469:;
  /* 10ace469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace46c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace46f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ace472:;
  /* 10ace472 push 0x10aeb1c0 */
  push32((uint32_t)(0x10aeb1c0u));
  /* 10ace477 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace47a push ecx */
  push32((uint32_t)(ECX));
  /* 10ace47b call 0x10acfd50 */
  push32(0x10ace480u); f_10acfd50();
  /* 10ace480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace483 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ace486 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace48a jne 0x10ace494 */
  if (!C.zf) goto L_10ace494;
  /* 10ace48c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ace48f jmp 0x10ace559 */
  goto L_10ace559;
L_10ace494:;
  /* 10ace494 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace497 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace49a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ace49c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10ace49f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4a3 jne 0x10ace4ca */
  if (!C.zf) goto L_10ace4ca;
  /* 10ace4a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4a9 jge 0x10ace4ca */
  if ((C.sf==C.of)) goto L_10ace4ca;
  /* 10ace4ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ace4af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4b2 je 0x10ace4ca */
  if (C.zf) goto L_10ace4ca;
  /* 10ace4b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace4b7 push edx */
  push32((uint32_t)(EDX));
  /* 10ace4b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace4bb push eax */
  push32((uint32_t)(EAX));
  /* 10ace4bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace4bf push ecx */
  push32((uint32_t)(ECX));
  /* 10ace4c0 call 0x10ac7850 */
  push32(0x10ace4c5u); f_10ac7850();
  /* 10ace4c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace4c8 jmp 0x10ace530 */
  goto L_10ace530;
L_10ace4ca:;
  /* 10ace4ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4ce jne 0x10ace4f8 */
  if (!C.zf) goto L_10ace4f8;
  /* 10ace4d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4d4 jge 0x10ace4f8 */
  if ((C.sf==C.of)) goto L_10ace4f8;
  /* 10ace4d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ace4da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4dd je 0x10ace4f8 */
  if (C.zf) goto L_10ace4f8;
  /* 10ace4df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace4e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ace4e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace4e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace4ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace4ed push edx */
  push32((uint32_t)(EDX));
  /* 10ace4ee call 0x10ac7850 */
  push32(0x10ace4f3u); f_10ac7850();
  /* 10ace4f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace4f6 jmp 0x10ace530 */
  goto L_10ace530;
L_10ace4f8:;
  /* 10ace4f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace4fc jne 0x10ace52b */
  if (!C.zf) goto L_10ace52b;
  /* 10ace4fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ace502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace504 je 0x10ace50f */
  if (C.zf) goto L_10ace50f;
  /* 10ace506 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ace50a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace50d jne 0x10ace52b */
  if (!C.zf) goto L_10ace52b;
L_10ace50f:;
  /* 10ace50f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace512 push edx */
  push32((uint32_t)(EDX));
  /* 10ace513 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace516 push eax */
  push32((uint32_t)(EAX));
  /* 10ace517 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace51a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace520 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace521 call 0x10ac7850 */
  push32(0x10ace526u); f_10ac7850();
  /* 10ace526 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace529 jmp 0x10ace530 */
  goto L_10ace530;
L_10ace52b:;
  /* 10ace52b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ace52e jmp 0x10ace559 */
  goto L_10ace559;
L_10ace530:;
  /* 10ace530 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ace534 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace537 jne 0x10ace53b */
  if (!C.zf) goto L_10ace53b;
  /* 10ace539 jmp 0x10ace557 */
  goto L_10ace557;
L_10ace53b:;
  /* 10ace53b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ace53f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace541 jne 0x10ace545 */
  if (!C.zf) goto L_10ace545;
  /* 10ace543 jmp 0x10ace557 */
  goto L_10ace557;
L_10ace545:;
  /* 10ace545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace54b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10ace54f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ace552 jmp 0x10ace469 */
  goto L_10ace469;
L_10ace557:;
  /* 10ace557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ace559:;
  /* 10ace559 mov esp, ebp */
  ESP = (EBP);
  /* 10ace55b pop ebp */
  EBP = (pop32());
  /* 10ace55c ret  */
  ESPCHK(0x10ace400u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10ace560 (101 bytes, 36 insns) */
void f_10ace560(void) {
  FTRACE(0x10ace560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace560 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace561 mov ebp, esp */
  EBP = (ESP);
  /* 10ace563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace566 push eax */
  push32((uint32_t)(EAX));
  /* 10ace567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace56a push ecx */
  push32((uint32_t)(ECX));
  /* 10ace56b call 0x10ac6fe0 */
  push32(0x10ace570u); f_10ac6fe0();
  /* 10ace570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace576 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10ace57a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace57c je 0x10ace598 */
  if (C.zf) goto L_10ace598;
  /* 10ace57e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace581 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace584 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace585 push 0x10aeb1c8 */
  push32((uint32_t)(0x10aeb1c8u));
  /* 10ace58a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace58c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace58f push edx */
  push32((uint32_t)(EDX));
  /* 10ace590 call 0x10ace3b0 */
  push32(0x10ace595u); f_10ace3b0();
  /* 10ace595 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace598:;
  /* 10ace598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace59b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10ace5a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ace5a4 je 0x10ace5c3 */
  if (C.zf) goto L_10ace5c3;
  /* 10ace5a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ace5a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace5af push edx */
  push32((uint32_t)(EDX));
  /* 10ace5b0 push 0x10aeb1c4 */
  push32((uint32_t)(0x10aeb1c4u));
  /* 10ace5b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace5b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace5ba push eax */
  push32((uint32_t)(EAX));
  /* 10ace5bb call 0x10ace3b0 */
  push32(0x10ace5c0u); f_10ace3b0();
  /* 10ace5c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace5c3:;
  /* 10ace5c3 pop ebp */
  EBP = (pop32());
  /* 10ace5c4 ret  */
  ESPCHK(0x10ace560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5d0 @ 0x10ace5d0 (130 bytes, 50 insns) */
void f_10ace5d0(void) {
  FTRACE(0x10ace5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ace5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace5d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ace5d5 push esi */
  push32((uint32_t)(ESI));
  /* 10ace5d6 push edi */
  push32((uint32_t)(EDI));
  /* 10ace5d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ace5de:;
  /* 10ace5de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace5e2 jne 0x10ace602 */
  if (!C.zf) goto L_10ace602;
  /* 10ace5e4 push 0x10aeb1d8 */
  push32((uint32_t)(0x10aeb1d8u));
  /* 10ace5e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ace5eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10ace5ed push 0x10aeb1cc */
  push32((uint32_t)(0x10aeb1ccu));
  /* 10ace5f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace5f4 call 0x10ac30f0 */
  push32(0x10ace5f9u); f_10ac30f0();
  /* 10ace5f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace5fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace5ff jne 0x10ace602 */
  if (!C.zf) goto L_10ace602;
  /* 10ace601 int3  */
  x86_unimpl("int3 @ 0x10ace601");
L_10ace602:;
  /* 10ace602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace606 jne 0x10ace5de */
  if (!C.zf) goto L_10ace5de;
  /* 10ace608 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace60b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ace60e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10ace611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ace613 je 0x10ace621 */
  if (C.zf) goto L_10ace621;
  /* 10ace615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace618 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10ace61f jmp 0x10ace648 */
  goto L_10ace648;
L_10ace621:;
  /* 10ace621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace624 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace625 call 0x10acce40 */
  push32(0x10ace62au); f_10acce40();
  /* 10ace62a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace62d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace630 push edx */
  push32((uint32_t)(EDX));
  /* 10ace631 call 0x10ace660 */
  push32(0x10ace636u); f_10ace660();
  /* 10ace636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace63c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace63f push eax */
  push32((uint32_t)(EAX));
  /* 10ace640 call 0x10acceb0 */
  push32(0x10ace645u); f_10acceb0();
  /* 10ace645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ace648:;
  /* 10ace648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace64b pop edi */
  EDI = (pop32());
  /* 10ace64c pop esi */
  ESI = (pop32());
  /* 10ace64d pop ebx */
  EBX = (pop32());
  /* 10ace64e mov esp, ebp */
  ESP = (EBP);
  /* 10ace650 pop ebp */
  EBP = (pop32());
  /* 10ace651 ret  */
  ESPCHK(0x10ace5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x10ace660 (190 bytes, 67 insns) */
void f_10ace660(void) {
  FTRACE(0x10ace660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace660 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace661 mov ebp, esp */
  EBP = (ESP);
  /* 10ace663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ace666 push ebx */
  push32((uint32_t)(EBX));
  /* 10ace667 push esi */
  push32((uint32_t)(ESI));
  /* 10ace668 push edi */
  push32((uint32_t)(EDI));
  /* 10ace669 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ace670 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace673 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ace676:;
  /* 10ace676 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace67a jne 0x10ace69a */
  if (!C.zf) goto L_10ace69a;
  /* 10ace67c push 0x10aeb07c */
  push32((uint32_t)(0x10aeb07cu));
  /* 10ace681 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ace683 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10ace685 push 0x10aeb1cc */
  push32((uint32_t)(0x10aeb1ccu));
  /* 10ace68a push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace68c call 0x10ac30f0 */
  push32(0x10ace691u); f_10ac30f0();
  /* 10ace691 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace694 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace697 jne 0x10ace69a */
  if (!C.zf) goto L_10ace69a;
  /* 10ace699 int3  */
  x86_unimpl("int3 @ 0x10ace699");
L_10ace69a:;
  /* 10ace69a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace69c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ace69e jne 0x10ace676 */
  if (!C.zf) goto L_10ace676;
  /* 10ace6a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace6a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ace6a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10ace6ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace6ad je 0x10ace70a */
  if (C.zf) goto L_10ace70a;
  /* 10ace6af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace6b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace6b3 call 0x10acd960 */
  push32(0x10ace6b8u); f_10acd960();
  /* 10ace6b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace6bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace6be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace6c1 push edx */
  push32((uint32_t)(EDX));
  /* 10ace6c2 call 0x10ad0ce0 */
  push32(0x10ace6c7u); f_10ad0ce0();
  /* 10ace6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace6ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace6cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ace6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace6d1 call 0x10ad0bb0 */
  push32(0x10ace6d6u); f_10ad0bb0();
  /* 10ace6d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace6d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace6db jge 0x10ace6e6 */
  if ((C.sf==C.of)) goto L_10ace6e6;
  /* 10ace6dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ace6e4 jmp 0x10ace70a */
  goto L_10ace70a;
L_10ace6e6:;
  /* 10ace6e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace6e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace6ed je 0x10ace70a */
  if (C.zf) goto L_10ace70a;
  /* 10ace6ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace6f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace6f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ace6f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace6f8 call 0x10ac4ac0 */
  push32(0x10ace6fdu); f_10ac4ac0();
  /* 10ace6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace700 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace703 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10ace70a:;
  /* 10ace70a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ace70d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10ace714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace717 pop edi */
  EDI = (pop32());
  /* 10ace718 pop esi */
  ESI = (pop32());
  /* 10ace719 pop ebx */
  EBX = (pop32());
  /* 10ace71a mov esp, ebp */
  ESP = (EBP);
  /* 10ace71c pop ebp */
  EBP = (pop32());
  /* 10ace71d ret  */
  ESPCHK(0x10ace660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e720 @ 0x10ace720 (210 bytes, 63 insns) */
void f_10ace720(void) {
  FTRACE(0x10ace720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace720 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace721 mov ebp, esp */
  EBP = (ESP);
  /* 10ace723 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace727 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace72d jae 0x10ace751 */
  if (!C.cf) goto L_10ace751;
  /* 10ace72f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace732 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ace735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace738 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ace73b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace73e mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10ace745 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ace74a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ace74d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ace74f jne 0x10ace764 */
  if (!C.zf) goto L_10ace764;
L_10ace751:;
  /* 10ace751 call 0x10acbf00 */
  push32(0x10ace756u); f_10acbf00();
  /* 10ace756 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ace75c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ace75f jmp 0x10ace7ee */
  goto L_10ace7ee;
L_10ace764:;
  /* 10ace764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace767 push edx */
  push32((uint32_t)(EDX));
  /* 10ace768 call 0x10acd720 */
  push32(0x10ace76du); f_10acd720();
  /* 10ace76d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace773 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ace776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace779 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ace77c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ace77f mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10ace786 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10ace78b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ace78e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace790 je 0x10ace7cd */
  if (C.zf) goto L_10ace7cd;
  /* 10ace792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace795 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace796 call 0x10acd5a0 */
  push32(0x10ace79bu); f_10acd5a0();
  /* 10ace79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace79e push eax */
  push32((uint32_t)(EAX));
  /* 10ace79f call dword ptr [0x10af22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22a8))), 0x10ace7a5u);
  /* 10ace7a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace7a7 jne 0x10ace7b4 */
  if (!C.zf) goto L_10ace7b4;
  /* 10ace7a9 call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10ace7afu);
  /* 10ace7af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace7b2 jmp 0x10ace7bb */
  goto L_10ace7bb;
L_10ace7b4:;
  /* 10ace7b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ace7bb:;
  /* 10ace7bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace7bf jne 0x10ace7c3 */
  if (!C.zf) goto L_10ace7c3;
  /* 10ace7c1 jmp 0x10ace7df */
  goto L_10ace7df;
L_10ace7c3:;
  /* 10ace7c3 call 0x10acbf10 */
  push32(0x10ace7c8u); f_10acbf10();
  /* 10ace7c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace7cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ace7cd:;
  /* 10ace7cd call 0x10acbf00 */
  push32(0x10ace7d2u); f_10acbf00();
  /* 10ace7d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ace7d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ace7df:;
  /* 10ace7df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace7e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ace7e3 call 0x10acd7b0 */
  push32(0x10ace7e8u); f_10acd7b0();
  /* 10ace7e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace7eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ace7ee:;
  /* 10ace7ee mov esp, ebp */
  ESP = (EBP);
  /* 10ace7f0 pop ebp */
  EBP = (pop32());
  /* 10ace7f1 ret  */
  ESPCHK(0x10ace720u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10ace800 (219 bytes, 64 insns) */
void f_10ace800(void) {
  FTRACE(0x10ace800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace800 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace801 mov ebp, esp */
  EBP = (ESP);
  /* 10ace803 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace804 cmp dword ptr [0x10aef7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace80b je 0x10ace8a1 */
  if (C.zf) goto L_10ace8a1;
  /* 10ace811 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10ace813 push 0x10aeb1e8 */
  push32((uint32_t)(0x10aeb1e8u));
  /* 10ace818 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace81a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10ace81f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace821 call 0x10ac4440 */
  push32(0x10ace826u); f_10ac4440();
  /* 10ace826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace82c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace830 jne 0x10ace83c */
  if (!C.zf) goto L_10ace83c;
  /* 10ace832 mov eax, 1 */
  EAX = (0x1u);
  /* 10ace837 jmp 0x10ace8d7 */
  goto L_10ace8d7;
L_10ace83c:;
  /* 10ace83c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace83f push eax */
  push32((uint32_t)(EAX));
  /* 10ace840 call 0x10ace8e0 */
  push32(0x10ace845u); f_10ace8e0();
  /* 10ace845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ace84a je 0x10ace86d */
  if (C.zf) goto L_10ace86d;
  /* 10ace84c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace84f push ecx */
  push32((uint32_t)(ECX));
  /* 10ace850 call 0x10acee70 */
  push32(0x10ace855u); f_10acee70();
  /* 10ace855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace858 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace85a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace85d push edx */
  push32((uint32_t)(EDX));
  /* 10ace85e call 0x10ac4ac0 */
  push32(0x10ace863u); f_10ac4ac0();
  /* 10ace863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace866 mov eax, 1 */
  EAX = (0x1u);
  /* 10ace86b jmp 0x10ace8d7 */
  goto L_10ace8d7;
L_10ace86d:;
  /* 10ace86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace870 mov dword ptr [0x10aeec98], eax */
  w32((uint32_t)(0x10aeec98), (EAX));
  /* 10ace875 mov ecx, dword ptr [0x10aef804] */
  ECX = (r32((uint32_t)(0x10aef804)));
  /* 10ace87b push ecx */
  push32((uint32_t)(ECX));
  /* 10ace87c call 0x10acee70 */
  push32(0x10ace881u); f_10acee70();
  /* 10ace881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace884 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace886 mov edx, dword ptr [0x10aef804] */
  EDX = (r32((uint32_t)(0x10aef804)));
  /* 10ace88c push edx */
  push32((uint32_t)(EDX));
  /* 10ace88d call 0x10ac4ac0 */
  push32(0x10ace892u); f_10ac4ac0();
  /* 10ace892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace898 mov dword ptr [0x10aef804], eax */
  w32((uint32_t)(0x10aef804), (EAX));
  /* 10ace89d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace89f jmp 0x10ace8d7 */
  goto L_10ace8d7;
L_10ace8a1:;
  /* 10ace8a1 mov dword ptr [0x10aeec98], 0x10aeeca0 */
  w32((uint32_t)(0x10aeec98), (0x10aeeca0u));
  /* 10ace8ab mov ecx, dword ptr [0x10aef804] */
  ECX = (r32((uint32_t)(0x10aef804)));
  /* 10ace8b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ace8b2 call 0x10acee70 */
  push32(0x10ace8b7u); f_10acee70();
  /* 10ace8b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace8ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10ace8bc mov edx, dword ptr [0x10aef804] */
  EDX = (r32((uint32_t)(0x10aef804)));
  /* 10ace8c2 push edx */
  push32((uint32_t)(EDX));
  /* 10ace8c3 call 0x10ac4ac0 */
  push32(0x10ace8c8u); f_10ac4ac0();
  /* 10ace8c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace8cb mov dword ptr [0x10aef804], 0 */
  w32((uint32_t)(0x10aef804), (0x0u));
  /* 10ace8d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ace8d7:;
  /* 10ace8d7 mov esp, ebp */
  ESP = (EBP);
  /* 10ace8d9 pop ebp */
  EBP = (pop32());
  /* 10ace8da ret  */
  ESPCHK(0x10ace800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x10ace8e0 (1423 bytes, 533 insns) */
void f_10ace8e0(void) {
  FTRACE(0x10ace8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ace8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ace8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ace8e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ace8e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ace8ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ace8ef mov ax, word ptr [0x10aef83e] */
  AX = (r16((uint32_t)(0x10aef83e)));
  /* 10ace8f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ace8f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace8fa mov cx, word ptr [0x10aef840] */
  CX = (r16((uint32_t)(0x10aef840)));
  /* 10ace901 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ace904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ace908 jne 0x10ace912 */
  if (!C.zf) goto L_10ace912;
  /* 10ace90a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ace90d jmp 0x10acee6b */
  goto L_10acee6b;
L_10ace912:;
  /* 10ace912 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace915 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace918 push edx */
  push32((uint32_t)(EDX));
  /* 10ace919 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10ace91b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace91e push eax */
  push32((uint32_t)(EAX));
  /* 10ace91f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace921 call 0x10ad21f0 */
  push32(0x10ace926u); f_10ad21f0();
  /* 10ace926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace929 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace92c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace92e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace934 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace937 push edx */
  push32((uint32_t)(EDX));
  /* 10ace938 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10ace93a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace93d push eax */
  push32((uint32_t)(EAX));
  /* 10ace93e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace940 call 0x10ad21f0 */
  push32(0x10ace945u); f_10ad21f0();
  /* 10ace945 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace948 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace94b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace94d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace953 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace956 push edx */
  push32((uint32_t)(EDX));
  /* 10ace957 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10ace959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace95c push eax */
  push32((uint32_t)(EAX));
  /* 10ace95d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace95f call 0x10ad21f0 */
  push32(0x10ace964u); f_10ad21f0();
  /* 10ace964 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace967 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace96a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace96c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace96f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace972 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace975 push edx */
  push32((uint32_t)(EDX));
  /* 10ace976 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10ace978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace97b push eax */
  push32((uint32_t)(EAX));
  /* 10ace97c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace97e call 0x10ad21f0 */
  push32(0x10ace983u); f_10ad21f0();
  /* 10ace983 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace986 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace989 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace98b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace98e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace991 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace994 push edx */
  push32((uint32_t)(EDX));
  /* 10ace995 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10ace997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace99a push eax */
  push32((uint32_t)(EAX));
  /* 10ace99b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace99d call 0x10ad21f0 */
  push32(0x10ace9a2u); f_10ad21f0();
  /* 10ace9a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace9a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace9a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace9aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace9ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace9b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace9b3 push edx */
  push32((uint32_t)(EDX));
  /* 10ace9b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10ace9b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace9b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ace9ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace9bc call 0x10ad21f0 */
  push32(0x10ace9c1u); f_10ad21f0();
  /* 10ace9c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace9c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace9c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace9c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace9cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace9cf push edx */
  push32((uint32_t)(EDX));
  /* 10ace9d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10ace9d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace9d5 push eax */
  push32((uint32_t)(EAX));
  /* 10ace9d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace9d8 call 0x10ad21f0 */
  push32(0x10ace9ddu); f_10ad21f0();
  /* 10ace9dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace9e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ace9e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10ace9e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ace9e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ace9eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace9ee push edx */
  push32((uint32_t)(EDX));
  /* 10ace9ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10ace9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ace9f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ace9f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ace9f7 call 0x10ad21f0 */
  push32(0x10ace9fcu); f_10ad21f0();
  /* 10ace9fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ace9ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acea02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acea04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acea07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acea0a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea0d push edx */
  push32((uint32_t)(EDX));
  /* 10acea0e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10acea10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acea13 push eax */
  push32((uint32_t)(EAX));
  /* 10acea14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acea16 call 0x10ad21f0 */
  push32(0x10acea1bu); f_10ad21f0();
  /* 10acea1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acea21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acea23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acea26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acea29 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea2c push edx */
  push32((uint32_t)(EDX));
  /* 10acea2d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10acea2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acea32 push eax */
  push32((uint32_t)(EAX));
  /* 10acea33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acea35 call 0x10ad21f0 */
  push32(0x10acea3au); f_10ad21f0();
  /* 10acea3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acea40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acea42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acea45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acea48 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea4b push edx */
  push32((uint32_t)(EDX));
  /* 10acea4c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10acea4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acea51 push eax */
  push32((uint32_t)(EAX));
  /* 10acea52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acea54 call 0x10ad21f0 */
  push32(0x10acea59u); f_10ad21f0();
  /* 10acea59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acea5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acea61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acea64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acea67 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea6a push edx */
  push32((uint32_t)(EDX));
  /* 10acea6b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10acea6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acea70 push eax */
  push32((uint32_t)(EAX));
  /* 10acea71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acea73 call 0x10ad21f0 */
  push32(0x10acea78u); f_10ad21f0();
  /* 10acea78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acea7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acea80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acea83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acea86 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea89 push edx */
  push32((uint32_t)(EDX));
  /* 10acea8a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10acea8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acea8f push eax */
  push32((uint32_t)(EAX));
  /* 10acea90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acea92 call 0x10ad21f0 */
  push32(0x10acea97u); f_10ad21f0();
  /* 10acea97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acea9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acea9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acea9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceaa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceaa5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceaa8 push edx */
  push32((uint32_t)(EDX));
  /* 10aceaa9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10aceaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceaae push eax */
  push32((uint32_t)(EAX));
  /* 10aceaaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceab1 call 0x10ad21f0 */
  push32(0x10aceab6u); f_10ad21f0();
  /* 10aceab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceab9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceabc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceabe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceac4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceac7 push edx */
  push32((uint32_t)(EDX));
  /* 10aceac8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10aceaca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceacd push eax */
  push32((uint32_t)(EAX));
  /* 10aceace push 1 */
  push32((uint32_t)(0x1u));
  /* 10acead0 call 0x10ad21f0 */
  push32(0x10acead5u); f_10ad21f0();
  /* 10acead5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acead8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceadb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceadd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceae3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceae6 push edx */
  push32((uint32_t)(EDX));
  /* 10aceae7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10aceae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceaec push eax */
  push32((uint32_t)(EAX));
  /* 10aceaed push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceaef call 0x10ad21f0 */
  push32(0x10aceaf4u); f_10ad21f0();
  /* 10aceaf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceaf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceafa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceaff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceb02 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb05 push edx */
  push32((uint32_t)(EDX));
  /* 10aceb06 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10aceb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceb0b push eax */
  push32((uint32_t)(EAX));
  /* 10aceb0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceb0e call 0x10ad21f0 */
  push32(0x10aceb13u); f_10ad21f0();
  /* 10aceb13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceb19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceb1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceb1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceb21 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb24 push edx */
  push32((uint32_t)(EDX));
  /* 10aceb25 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10aceb27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceb2a push eax */
  push32((uint32_t)(EAX));
  /* 10aceb2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceb2d call 0x10ad21f0 */
  push32(0x10aceb32u); f_10ad21f0();
  /* 10aceb32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceb38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceb3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceb3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceb40 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb43 push edx */
  push32((uint32_t)(EDX));
  /* 10aceb44 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10aceb46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceb49 push eax */
  push32((uint32_t)(EAX));
  /* 10aceb4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceb4c call 0x10ad21f0 */
  push32(0x10aceb51u); f_10ad21f0();
  /* 10aceb51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceb57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceb59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceb5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceb5f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb62 push edx */
  push32((uint32_t)(EDX));
  /* 10aceb63 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10aceb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceb68 push eax */
  push32((uint32_t)(EAX));
  /* 10aceb69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceb6b call 0x10ad21f0 */
  push32(0x10aceb70u); f_10ad21f0();
  /* 10aceb70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceb76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceb78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceb7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceb7e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb81 push edx */
  push32((uint32_t)(EDX));
  /* 10aceb82 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10aceb84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceb87 push eax */
  push32((uint32_t)(EAX));
  /* 10aceb88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceb8a call 0x10ad21f0 */
  push32(0x10aceb8fu); f_10ad21f0();
  /* 10aceb8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceb92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceb95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceb97 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceb9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceb9d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceba0 push edx */
  push32((uint32_t)(EDX));
  /* 10aceba1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10aceba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceba6 push eax */
  push32((uint32_t)(EAX));
  /* 10aceba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceba9 call 0x10ad21f0 */
  push32(0x10acebaeu); f_10ad21f0();
  /* 10acebae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acebb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acebb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acebb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acebb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acebbc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acebbf push edx */
  push32((uint32_t)(EDX));
  /* 10acebc0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10acebc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acebc5 push eax */
  push32((uint32_t)(EAX));
  /* 10acebc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acebc8 call 0x10ad21f0 */
  push32(0x10acebcdu); f_10ad21f0();
  /* 10acebcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acebd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acebd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acebd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acebd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acebdb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acebde push edx */
  push32((uint32_t)(EDX));
  /* 10acebdf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10acebe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acebe4 push eax */
  push32((uint32_t)(EAX));
  /* 10acebe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acebe7 call 0x10ad21f0 */
  push32(0x10acebecu); f_10ad21f0();
  /* 10acebec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acebef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acebf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acebf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acebf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acebfa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acebfd push edx */
  push32((uint32_t)(EDX));
  /* 10acebfe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10acec00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acec03 push eax */
  push32((uint32_t)(EAX));
  /* 10acec04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acec06 call 0x10ad21f0 */
  push32(0x10acec0bu); f_10ad21f0();
  /* 10acec0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acec11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acec13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acec16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acec19 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec1c push edx */
  push32((uint32_t)(EDX));
  /* 10acec1d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10acec1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acec22 push eax */
  push32((uint32_t)(EAX));
  /* 10acec23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acec25 call 0x10ad21f0 */
  push32(0x10acec2au); f_10ad21f0();
  /* 10acec2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acec30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acec32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acec35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acec38 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec3b push edx */
  push32((uint32_t)(EDX));
  /* 10acec3c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10acec3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acec41 push eax */
  push32((uint32_t)(EAX));
  /* 10acec42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acec44 call 0x10ad21f0 */
  push32(0x10acec49u); f_10ad21f0();
  /* 10acec49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acec4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acec51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acec54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acec57 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec5a push edx */
  push32((uint32_t)(EDX));
  /* 10acec5b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10acec5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acec60 push eax */
  push32((uint32_t)(EAX));
  /* 10acec61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acec63 call 0x10ad21f0 */
  push32(0x10acec68u); f_10ad21f0();
  /* 10acec68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acec6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acec70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acec73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acec76 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec79 push edx */
  push32((uint32_t)(EDX));
  /* 10acec7a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10acec7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acec7f push eax */
  push32((uint32_t)(EAX));
  /* 10acec80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acec82 call 0x10ad21f0 */
  push32(0x10acec87u); f_10ad21f0();
  /* 10acec87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acec8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acec8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acec92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acec95 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acec98 push edx */
  push32((uint32_t)(EDX));
  /* 10acec99 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10acec9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acec9e push eax */
  push32((uint32_t)(EAX));
  /* 10acec9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10aceca1 call 0x10ad21f0 */
  push32(0x10aceca6u); f_10ad21f0();
  /* 10aceca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acecac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acecae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acecb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acecb4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acecb7 push edx */
  push32((uint32_t)(EDX));
  /* 10acecb8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10acecba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acecbd push eax */
  push32((uint32_t)(EAX));
  /* 10acecbe push 1 */
  push32((uint32_t)(0x1u));
  /* 10acecc0 call 0x10ad21f0 */
  push32(0x10acecc5u); f_10ad21f0();
  /* 10acecc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acecc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aceccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aceccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acecd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acecd3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acecd6 push edx */
  push32((uint32_t)(EDX));
  /* 10acecd7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10acecd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acecdc push eax */
  push32((uint32_t)(EAX));
  /* 10acecdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10acecdf call 0x10ad21f0 */
  push32(0x10acece4u); f_10ad21f0();
  /* 10acece4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acece7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acecea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acecec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acecef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acecf2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acecf8 push edx */
  push32((uint32_t)(EDX));
  /* 10acecf9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10acecfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acecfe push eax */
  push32((uint32_t)(EAX));
  /* 10acecff push 1 */
  push32((uint32_t)(0x1u));
  /* 10aced01 call 0x10ad21f0 */
  push32(0x10aced06u); f_10ad21f0();
  /* 10aced06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aced0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aced0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aced11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aced14 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced1a push edx */
  push32((uint32_t)(EDX));
  /* 10aced1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10aced1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aced20 push eax */
  push32((uint32_t)(EAX));
  /* 10aced21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aced23 call 0x10ad21f0 */
  push32(0x10aced28u); f_10ad21f0();
  /* 10aced28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aced2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aced30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aced33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aced36 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced3c push edx */
  push32((uint32_t)(EDX));
  /* 10aced3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10aced3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aced42 push eax */
  push32((uint32_t)(EAX));
  /* 10aced43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aced45 call 0x10ad21f0 */
  push32(0x10aced4au); f_10ad21f0();
  /* 10aced4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aced50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aced52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aced55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aced58 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced5e push edx */
  push32((uint32_t)(EDX));
  /* 10aced5f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10aced61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aced64 push eax */
  push32((uint32_t)(EAX));
  /* 10aced65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aced67 call 0x10ad21f0 */
  push32(0x10aced6cu); f_10ad21f0();
  /* 10aced6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aced72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aced74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aced77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aced7a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced80 push edx */
  push32((uint32_t)(EDX));
  /* 10aced81 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10aced83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aced86 push eax */
  push32((uint32_t)(EAX));
  /* 10aced87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10aced89 call 0x10ad21f0 */
  push32(0x10aced8eu); f_10ad21f0();
  /* 10aced8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aced91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10aced94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10aced96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aced99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aced9c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceda2 push edx */
  push32((uint32_t)(EDX));
  /* 10aceda3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10aceda5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10aceda8 push eax */
  push32((uint32_t)(EAX));
  /* 10aceda9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acedab call 0x10ad21f0 */
  push32(0x10acedb0u); f_10ad21f0();
  /* 10acedb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acedb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acedb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acedb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acedbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acedbe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acedc4 push edx */
  push32((uint32_t)(EDX));
  /* 10acedc5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10acedc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acedca push eax */
  push32((uint32_t)(EAX));
  /* 10acedcb push 1 */
  push32((uint32_t)(0x1u));
  /* 10acedcd call 0x10ad21f0 */
  push32(0x10acedd2u); f_10ad21f0();
  /* 10acedd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acedd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acedd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acedda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10aceddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acede0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acede6 push edx */
  push32((uint32_t)(EDX));
  /* 10acede7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10acede9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acedec push eax */
  push32((uint32_t)(EAX));
  /* 10aceded push 1 */
  push32((uint32_t)(0x1u));
  /* 10acedef call 0x10ad21f0 */
  push32(0x10acedf4u); f_10ad21f0();
  /* 10acedf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acedf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acedfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acedfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acedff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acee02 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee08 push edx */
  push32((uint32_t)(EDX));
  /* 10acee09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10acee0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acee0e push eax */
  push32((uint32_t)(EAX));
  /* 10acee0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10acee11 call 0x10ad21f0 */
  push32(0x10acee16u); f_10ad21f0();
  /* 10acee16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acee1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acee1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acee21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acee24 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee2a push edx */
  push32((uint32_t)(EDX));
  /* 10acee2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10acee2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acee30 push eax */
  push32((uint32_t)(EAX));
  /* 10acee31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acee33 call 0x10ad21f0 */
  push32(0x10acee38u); f_10ad21f0();
  /* 10acee38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acee3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acee40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acee43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acee46 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee4c push edx */
  push32((uint32_t)(EDX));
  /* 10acee4d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10acee52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acee55 push eax */
  push32((uint32_t)(EAX));
  /* 10acee56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acee58 call 0x10ad21f0 */
  push32(0x10acee5du); f_10ad21f0();
  /* 10acee5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10acee63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acee65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10acee68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10acee6b:;
  /* 10acee6b mov esp, ebp */
  ESP = (EBP);
  /* 10acee6d pop ebp */
  EBP = (pop32());
  /* 10acee6e ret  */
  ESPCHK(0x10ace8e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10acee70 (779 bytes, 265 insns) */
void f_10acee70(void) {
  FTRACE(0x10acee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acee70 push ebp */
  push32((uint32_t)(EBP));
  /* 10acee71 mov ebp, esp */
  EBP = (ESP);
  /* 10acee73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acee77 jne 0x10acee7e */
  if (!C.zf) goto L_10acee7e;
  /* 10acee79 jmp 0x10acf179 */
  goto L_10acf179;
L_10acee7e:;
  /* 10acee7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10acee80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acee83 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10acee86 push ecx */
  push32((uint32_t)(ECX));
  /* 10acee87 call 0x10ac4ac0 */
  push32(0x10acee8cu); f_10ac4ac0();
  /* 10acee8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acee8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10acee91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acee94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10acee97 push eax */
  push32((uint32_t)(EAX));
  /* 10acee98 call 0x10ac4ac0 */
  push32(0x10acee9du); f_10ac4ac0();
  /* 10acee9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceea5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10aceea8 push edx */
  push32((uint32_t)(EDX));
  /* 10aceea9 call 0x10ac4ac0 */
  push32(0x10aceeaeu); f_10ac4ac0();
  /* 10aceeae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceeb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceeb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceeb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10aceeb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10aceeba call 0x10ac4ac0 */
  push32(0x10aceebfu); f_10ac4ac0();
  /* 10aceebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceec7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10aceeca push eax */
  push32((uint32_t)(EAX));
  /* 10aceecb call 0x10ac4ac0 */
  push32(0x10aceed0u); f_10ac4ac0();
  /* 10aceed0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceed8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10aceedb push edx */
  push32((uint32_t)(EDX));
  /* 10aceedc call 0x10ac4ac0 */
  push32(0x10aceee1u); f_10ac4ac0();
  /* 10aceee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceee9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10aceeeb push ecx */
  push32((uint32_t)(ECX));
  /* 10aceeec call 0x10ac4ac0 */
  push32(0x10aceef1u); f_10ac4ac0();
  /* 10aceef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceef4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceef6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceef9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10aceefc push eax */
  push32((uint32_t)(EAX));
  /* 10aceefd call 0x10ac4ac0 */
  push32(0x10acef02u); f_10ac4ac0();
  /* 10acef02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef0a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10acef0d push edx */
  push32((uint32_t)(EDX));
  /* 10acef0e call 0x10ac4ac0 */
  push32(0x10acef13u); f_10ac4ac0();
  /* 10acef13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef1b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10acef1e push ecx */
  push32((uint32_t)(ECX));
  /* 10acef1f call 0x10ac4ac0 */
  push32(0x10acef24u); f_10ac4ac0();
  /* 10acef24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef2c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10acef2f push eax */
  push32((uint32_t)(EAX));
  /* 10acef30 call 0x10ac4ac0 */
  push32(0x10acef35u); f_10ac4ac0();
  /* 10acef35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef3d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10acef40 push edx */
  push32((uint32_t)(EDX));
  /* 10acef41 call 0x10ac4ac0 */
  push32(0x10acef46u); f_10ac4ac0();
  /* 10acef46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef4e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10acef51 push ecx */
  push32((uint32_t)(ECX));
  /* 10acef52 call 0x10ac4ac0 */
  push32(0x10acef57u); f_10ac4ac0();
  /* 10acef57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef5f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10acef62 push eax */
  push32((uint32_t)(EAX));
  /* 10acef63 call 0x10ac4ac0 */
  push32(0x10acef68u); f_10ac4ac0();
  /* 10acef68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef70 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10acef73 push edx */
  push32((uint32_t)(EDX));
  /* 10acef74 call 0x10ac4ac0 */
  push32(0x10acef79u); f_10ac4ac0();
  /* 10acef79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef81 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10acef84 push ecx */
  push32((uint32_t)(ECX));
  /* 10acef85 call 0x10ac4ac0 */
  push32(0x10acef8au); f_10ac4ac0();
  /* 10acef8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acef8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acef92 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10acef95 push eax */
  push32((uint32_t)(EAX));
  /* 10acef96 call 0x10ac4ac0 */
  push32(0x10acef9bu); f_10ac4ac0();
  /* 10acef9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acef9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10acefa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acefa3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10acefa6 push edx */
  push32((uint32_t)(EDX));
  /* 10acefa7 call 0x10ac4ac0 */
  push32(0x10acefacu); f_10ac4ac0();
  /* 10acefac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acefaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10acefb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acefb4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10acefb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10acefb8 call 0x10ac4ac0 */
  push32(0x10acefbdu); f_10ac4ac0();
  /* 10acefbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acefc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acefc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acefc5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10acefc8 push eax */
  push32((uint32_t)(EAX));
  /* 10acefc9 call 0x10ac4ac0 */
  push32(0x10acefceu); f_10ac4ac0();
  /* 10acefce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acefd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acefd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acefd6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10acefd9 push edx */
  push32((uint32_t)(EDX));
  /* 10acefda call 0x10ac4ac0 */
  push32(0x10acefdfu); f_10ac4ac0();
  /* 10acefdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acefe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acefe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acefe7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10acefea push ecx */
  push32((uint32_t)(ECX));
  /* 10acefeb call 0x10ac4ac0 */
  push32(0x10aceff0u); f_10ac4ac0();
  /* 10aceff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10aceff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10aceff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10aceff8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10aceffb push eax */
  push32((uint32_t)(EAX));
  /* 10aceffc call 0x10ac4ac0 */
  push32(0x10acf001u); f_10ac4ac0();
  /* 10acf001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf004 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf009 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10acf00c push edx */
  push32((uint32_t)(EDX));
  /* 10acf00d call 0x10ac4ac0 */
  push32(0x10acf012u); f_10ac4ac0();
  /* 10acf012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf015 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf01a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10acf01d push ecx */
  push32((uint32_t)(ECX));
  /* 10acf01e call 0x10ac4ac0 */
  push32(0x10acf023u); f_10ac4ac0();
  /* 10acf023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf026 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf02b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10acf02e push eax */
  push32((uint32_t)(EAX));
  /* 10acf02f call 0x10ac4ac0 */
  push32(0x10acf034u); f_10ac4ac0();
  /* 10acf034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf037 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf039 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf03c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10acf03f push edx */
  push32((uint32_t)(EDX));
  /* 10acf040 call 0x10ac4ac0 */
  push32(0x10acf045u); f_10ac4ac0();
  /* 10acf045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf048 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf04a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf04d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10acf050 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf051 call 0x10ac4ac0 */
  push32(0x10acf056u); f_10ac4ac0();
  /* 10acf056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf059 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf05b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf05e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10acf061 push eax */
  push32((uint32_t)(EAX));
  /* 10acf062 call 0x10ac4ac0 */
  push32(0x10acf067u); f_10ac4ac0();
  /* 10acf067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf06a push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf06c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf06f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10acf072 push edx */
  push32((uint32_t)(EDX));
  /* 10acf073 call 0x10ac4ac0 */
  push32(0x10acf078u); f_10ac4ac0();
  /* 10acf078 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf07b push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf07d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf080 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10acf083 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf084 call 0x10ac4ac0 */
  push32(0x10acf089u); f_10ac4ac0();
  /* 10acf089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf08c push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf091 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10acf094 push eax */
  push32((uint32_t)(EAX));
  /* 10acf095 call 0x10ac4ac0 */
  push32(0x10acf09au); f_10ac4ac0();
  /* 10acf09a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf09d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf09f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf0a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10acf0a8 push edx */
  push32((uint32_t)(EDX));
  /* 10acf0a9 call 0x10ac4ac0 */
  push32(0x10acf0aeu); f_10ac4ac0();
  /* 10acf0ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf0b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf0b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10acf0bc push ecx */
  push32((uint32_t)(ECX));
  /* 10acf0bd call 0x10ac4ac0 */
  push32(0x10acf0c2u); f_10ac4ac0();
  /* 10acf0c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf0c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf0c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf0ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10acf0d0 push eax */
  push32((uint32_t)(EAX));
  /* 10acf0d1 call 0x10ac4ac0 */
  push32(0x10acf0d6u); f_10ac4ac0();
  /* 10acf0d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf0d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf0de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10acf0e4 push edx */
  push32((uint32_t)(EDX));
  /* 10acf0e5 call 0x10ac4ac0 */
  push32(0x10acf0eau); f_10ac4ac0();
  /* 10acf0ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf0ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf0ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf0f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10acf0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf0f9 call 0x10ac4ac0 */
  push32(0x10acf0feu); f_10ac4ac0();
  /* 10acf0fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf101 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf103 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf106 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10acf10c push eax */
  push32((uint32_t)(EAX));
  /* 10acf10d call 0x10ac4ac0 */
  push32(0x10acf112u); f_10ac4ac0();
  /* 10acf112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf115 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf11a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10acf120 push edx */
  push32((uint32_t)(EDX));
  /* 10acf121 call 0x10ac4ac0 */
  push32(0x10acf126u); f_10ac4ac0();
  /* 10acf126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf129 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf12b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf12e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10acf134 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf135 call 0x10ac4ac0 */
  push32(0x10acf13au); f_10ac4ac0();
  /* 10acf13a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf13d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf142 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10acf148 push eax */
  push32((uint32_t)(EAX));
  /* 10acf149 call 0x10ac4ac0 */
  push32(0x10acf14eu); f_10ac4ac0();
  /* 10acf14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf151 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf156 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10acf15c push edx */
  push32((uint32_t)(EDX));
  /* 10acf15d call 0x10ac4ac0 */
  push32(0x10acf162u); f_10ac4ac0();
  /* 10acf162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf165 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf16a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10acf170 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf171 call 0x10ac4ac0 */
  push32(0x10acf176u); f_10ac4ac0();
  /* 10acf176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acf179:;
  /* 10acf179 pop ebp */
  EBP = (pop32());
  /* 10acf17a ret  */
  ESPCHK(0x10acee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x10acf180 (678 bytes, 180 insns) */
void f_10acf180(void) {
  FTRACE(0x10acf180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf180 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf181 mov ebp, esp */
  EBP = (ESP);
  /* 10acf183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acf186 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10acf18d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acf18f mov ax, word ptr [0x10aef83a] */
  AX = (r16((uint32_t)(0x10aef83a)));
  /* 10acf195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acf198 cmp dword ptr [0x10aef7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf19f je 0x10acf2fa */
  if (C.zf) goto L_10acf2fa;
  /* 10acf1a5 push 0x10aef808 */
  push32((uint32_t)(0x10aef808u));
  /* 10acf1aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 10acf1ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf1af push ecx */
  push32((uint32_t)(ECX));
  /* 10acf1b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf1b2 call 0x10ad21f0 */
  push32(0x10acf1b7u); f_10ad21f0();
  /* 10acf1b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf1ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf1bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10acf1bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10acf1c2 push 0x10aef80c */
  push32((uint32_t)(0x10aef80cu));
  /* 10acf1c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10acf1c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf1cc push eax */
  push32((uint32_t)(EAX));
  /* 10acf1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf1cf call 0x10ad21f0 */
  push32(0x10acf1d4u); f_10ad21f0();
  /* 10acf1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf1d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf1da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf1df push 0x10aef810 */
  push32((uint32_t)(0x10aef810u));
  /* 10acf1e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10acf1e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf1e9 push edx */
  push32((uint32_t)(EDX));
  /* 10acf1ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf1ec call 0x10ad21f0 */
  push32(0x10acf1f1u); f_10ad21f0();
  /* 10acf1f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf1f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf1f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf1f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf1fc mov edx, dword ptr [0x10aef810] */
  EDX = (r32((uint32_t)(0x10aef810)));
  /* 10acf202 push edx */
  push32((uint32_t)(EDX));
  /* 10acf203 call 0x10acf430 */
  push32(0x10acf208u); f_10acf430();
  /* 10acf208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf20b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf20f je 0x10acf269 */
  if (C.zf) goto L_10acf269;
  /* 10acf211 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf213 mov eax, dword ptr [0x10aef808] */
  EAX = (r32((uint32_t)(0x10aef808)));
  /* 10acf218 push eax */
  push32((uint32_t)(EAX));
  /* 10acf219 call 0x10ac4ac0 */
  push32(0x10acf21eu); f_10ac4ac0();
  /* 10acf21e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf221 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf223 mov ecx, dword ptr [0x10aef80c] */
  ECX = (r32((uint32_t)(0x10aef80c)));
  /* 10acf229 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf22a call 0x10ac4ac0 */
  push32(0x10acf22fu); f_10ac4ac0();
  /* 10acf22f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf232 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf234 mov edx, dword ptr [0x10aef810] */
  EDX = (r32((uint32_t)(0x10aef810)));
  /* 10acf23a push edx */
  push32((uint32_t)(EDX));
  /* 10acf23b call 0x10ac4ac0 */
  push32(0x10acf240u); f_10ac4ac0();
  /* 10acf240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf243 mov dword ptr [0x10aef808], 0 */
  w32((uint32_t)(0x10aef808), (0x0u));
  /* 10acf24d mov dword ptr [0x10aef80c], 0 */
  w32((uint32_t)(0x10aef80c), (0x0u));
  /* 10acf257 mov dword ptr [0x10aef810], 0 */
  w32((uint32_t)(0x10aef810), (0x0u));
  /* 10acf261 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acf264 jmp 0x10acf422 */
  goto L_10acf422;
L_10acf269:;
  /* 10acf269 mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf26e cmp dword ptr [eax], 0x10aeed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10aeed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf274 je 0x10acf2b0 */
  if (C.zf) goto L_10acf2b0;
  /* 10acf276 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf278 mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf27e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10acf280 push edx */
  push32((uint32_t)(EDX));
  /* 10acf281 call 0x10ac4ac0 */
  push32(0x10acf286u); f_10ac4ac0();
  /* 10acf286 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf289 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf28b mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf290 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10acf293 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf294 call 0x10ac4ac0 */
  push32(0x10acf299u); f_10ac4ac0();
  /* 10acf299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf29c push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf29e mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf2a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10acf2a7 push eax */
  push32((uint32_t)(EAX));
  /* 10acf2a8 call 0x10ac4ac0 */
  push32(0x10acf2adu); f_10ac4ac0();
  /* 10acf2ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acf2b0:;
  /* 10acf2b0 mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf2b6 mov edx, dword ptr [0x10aef808] */
  EDX = (r32((uint32_t)(0x10aef808)));
  /* 10acf2bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10acf2be mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf2c3 mov ecx, dword ptr [0x10aef80c] */
  ECX = (r32((uint32_t)(0x10aef80c)));
  /* 10acf2c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10acf2cc mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf2d2 mov eax, dword ptr [0x10aef810] */
  EAX = (r32((uint32_t)(0x10aef810)));
  /* 10acf2d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10acf2da mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf2e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10acf2e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acf2e4 mov byte ptr [0x10aedea8], al */
  w8((uint32_t)(0x10aedea8), (AL));
  /* 10acf2e9 mov dword ptr [0x10aedeac], 1 */
  w32((uint32_t)(0x10aedeac), (0x1u));
  /* 10acf2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acf2f5 jmp 0x10acf422 */
  goto L_10acf422;
L_10acf2fa:;
  /* 10acf2fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf2fc mov ecx, dword ptr [0x10aef808] */
  ECX = (r32((uint32_t)(0x10aef808)));
  /* 10acf302 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf303 call 0x10ac4ac0 */
  push32(0x10acf308u); f_10ac4ac0();
  /* 10acf308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf30b push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf30d mov edx, dword ptr [0x10aef80c] */
  EDX = (r32((uint32_t)(0x10aef80c)));
  /* 10acf313 push edx */
  push32((uint32_t)(EDX));
  /* 10acf314 call 0x10ac4ac0 */
  push32(0x10acf319u); f_10ac4ac0();
  /* 10acf319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf31c push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf31e mov eax, dword ptr [0x10aef810] */
  EAX = (r32((uint32_t)(0x10aef810)));
  /* 10acf323 push eax */
  push32((uint32_t)(EAX));
  /* 10acf324 call 0x10ac4ac0 */
  push32(0x10acf329u); f_10ac4ac0();
  /* 10acf329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf32c mov dword ptr [0x10aef808], 0 */
  w32((uint32_t)(0x10aef808), (0x0u));
  /* 10acf336 mov dword ptr [0x10aef80c], 0 */
  w32((uint32_t)(0x10aef80c), (0x0u));
  /* 10acf340 mov dword ptr [0x10aef810], 0 */
  w32((uint32_t)(0x10aef810), (0x0u));
  /* 10acf34a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10acf34f push 0x10aeb1f4 */
  push32((uint32_t)(0x10aeb1f4u));
  /* 10acf354 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf356 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf358 call 0x10ac4030 */
  push32(0x10acf35du); f_10ac4030();
  /* 10acf35d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf360 mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf366 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10acf368 mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf36e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf371 jne 0x10acf37b */
  if (!C.zf) goto L_10acf37b;
  /* 10acf373 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acf376 jmp 0x10acf422 */
  goto L_10acf422;
L_10acf37b:;
  /* 10acf37b push 0x10aeb1c4 */
  push32((uint32_t)(0x10aeb1c4u));
  /* 10acf380 mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf385 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10acf387 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf388 call 0x10ac6fe0 */
  push32(0x10acf38du); f_10ac6fe0();
  /* 10acf38d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf390 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10acf395 push 0x10aeb1f4 */
  push32((uint32_t)(0x10aeb1f4u));
  /* 10acf39a push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf39c push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf39e call 0x10ac4030 */
  push32(0x10acf3a3u); f_10ac4030();
  /* 10acf3a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf3a6 mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf3ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10acf3af mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf3b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf3b8 jne 0x10acf3bf */
  if (!C.zf) goto L_10acf3bf;
  /* 10acf3ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acf3bd jmp 0x10acf422 */
  goto L_10acf422;
L_10acf3bf:;
  /* 10acf3bf mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf3c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10acf3c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10acf3cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10acf3d0 push 0x10aeb1f4 */
  push32((uint32_t)(0x10aeb1f4u));
  /* 10acf3d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf3d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf3d9 call 0x10ac4030 */
  push32(0x10acf3deu); f_10ac4030();
  /* 10acf3de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf3e1 mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf3e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10acf3ea mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf3f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf3f4 jne 0x10acf3fb */
  if (!C.zf) goto L_10acf3fb;
  /* 10acf3f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acf3f9 jmp 0x10acf422 */
  goto L_10acf422;
L_10acf3fb:;
  /* 10acf3fb mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf400 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10acf403 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10acf406 mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf40c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10acf40e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10acf410 mov byte ptr [0x10aedea8], cl */
  w8((uint32_t)(0x10aedea8), (CL));
  /* 10acf416 mov dword ptr [0x10aedeac], 1 */
  w32((uint32_t)(0x10aedeac), (0x1u));
  /* 10acf420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10acf422:;
  /* 10acf422 mov esp, ebp */
  ESP = (EBP);
  /* 10acf424 pop ebp */
  EBP = (pop32());
  /* 10acf425 ret  */
  ESPCHK(0x10acf180u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10acf430 (125 bytes, 49 insns) */
void f_10acf430(void) {
  FTRACE(0x10acf430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf430 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf431 mov ebp, esp */
  EBP = (ESP);
  /* 10acf433 push ecx */
  push32((uint32_t)(ECX));
L_10acf434:;
  /* 10acf434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf437 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acf43a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acf43c je 0x10acf4a9 */
  if (C.zf) goto L_10acf4a9;
  /* 10acf43e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf441 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acf444 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf447 jl 0x10acf46d */
  if ((C.sf!=C.of)) goto L_10acf46d;
  /* 10acf449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf44c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acf44f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf452 jg 0x10acf46d */
  if ((!C.zf&&C.sf==C.of)) goto L_10acf46d;
  /* 10acf454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf457 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acf45a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acf45d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf460 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10acf462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf465 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf468 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10acf46b jmp 0x10acf4a7 */
  goto L_10acf4a7;
L_10acf46d:;
  /* 10acf46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf470 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acf473 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf476 jne 0x10acf49e */
  if (!C.zf) goto L_10acf49e;
  /* 10acf478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf47b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10acf47e:;
  /* 10acf47e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf484 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10acf487 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10acf489 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf48c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf48f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acf492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf495 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acf498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acf49a jne 0x10acf47e */
  if (!C.zf) goto L_10acf47e;
  /* 10acf49c jmp 0x10acf4a7 */
  goto L_10acf4a7;
L_10acf49e:;
  /* 10acf49e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf4a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf4a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10acf4a7:;
  /* 10acf4a7 jmp 0x10acf434 */
  goto L_10acf434;
L_10acf4a9:;
  /* 10acf4a9 mov esp, ebp */
  ESP = (EBP);
  /* 10acf4ab pop ebp */
  EBP = (pop32());
  /* 10acf4ac ret  */
  ESPCHK(0x10acf430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x10acf4b0 (304 bytes, 85 insns) */
void f_10acf4b0(void) {
  FTRACE(0x10acf4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10acf4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf4b4 cmp dword ptr [0x10aef7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf4bb je 0x10acf57c */
  if (C.zf) goto L_10acf57c;
  /* 10acf4c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10acf4c3 push 0x10aeb200 */
  push32((uint32_t)(0x10aeb200u));
  /* 10acf4c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf4ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10acf4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf4ce call 0x10ac4440 */
  push32(0x10acf4d3u); f_10ac4440();
  /* 10acf4d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf4d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acf4d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf4dd jne 0x10acf4e9 */
  if (!C.zf) goto L_10acf4e9;
  /* 10acf4df mov eax, 1 */
  EAX = (0x1u);
  /* 10acf4e4 jmp 0x10acf5dc */
  goto L_10acf5dc;
L_10acf4e9:;
  /* 10acf4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf4ec push eax */
  push32((uint32_t)(EAX));
  /* 10acf4ed call 0x10acf5e0 */
  push32(0x10acf4f2u); f_10acf5e0();
  /* 10acf4f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf4f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acf4f7 je 0x10acf51d */
  if (C.zf) goto L_10acf51d;
  /* 10acf4f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf4fc push ecx */
  push32((uint32_t)(ECX));
  /* 10acf4fd call 0x10acf870 */
  push32(0x10acf502u); f_10acf870();
  /* 10acf502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf505 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf507 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf50a push edx */
  push32((uint32_t)(EDX));
  /* 10acf50b call 0x10ac4ac0 */
  push32(0x10acf510u); f_10ac4ac0();
  /* 10acf510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf513 mov eax, 1 */
  EAX = (0x1u);
  /* 10acf518 jmp 0x10acf5dc */
  goto L_10acf5dc;
L_10acf51d:;
  /* 10acf51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf520 mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf526 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10acf528 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10acf52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf52d mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf533 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10acf536 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10acf539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf53c mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf542 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10acf545 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10acf548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf54b mov dword ptr [0x10aeed88], eax */
  w32((uint32_t)(0x10aeed88), (EAX));
  /* 10acf550 mov ecx, dword ptr [0x10aef814] */
  ECX = (r32((uint32_t)(0x10aef814)));
  /* 10acf556 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf557 call 0x10acf870 */
  push32(0x10acf55cu); f_10acf870();
  /* 10acf55c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf55f push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf561 mov edx, dword ptr [0x10aef814] */
  EDX = (r32((uint32_t)(0x10aef814)));
  /* 10acf567 push edx */
  push32((uint32_t)(EDX));
  /* 10acf568 call 0x10ac4ac0 */
  push32(0x10acf56du); f_10ac4ac0();
  /* 10acf56d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf573 mov dword ptr [0x10aef814], eax */
  w32((uint32_t)(0x10aef814), (EAX));
  /* 10acf578 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acf57a jmp 0x10acf5dc */
  goto L_10acf5dc;
L_10acf57c:;
  /* 10acf57c mov ecx, dword ptr [0x10aeed88] */
  ECX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf582 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10acf584 mov dword ptr [0x10aeed58], edx */
  w32((uint32_t)(0x10aeed58), (EDX));
  /* 10acf58a mov eax, dword ptr [0x10aeed88] */
  EAX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf58f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10acf592 mov dword ptr [0x10aeed5c], ecx */
  w32((uint32_t)(0x10aeed5c), (ECX));
  /* 10acf598 mov edx, dword ptr [0x10aeed88] */
  EDX = (r32((uint32_t)(0x10aeed88)));
  /* 10acf59e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10acf5a1 mov dword ptr [0x10aeed60], eax */
  w32((uint32_t)(0x10aeed60), (EAX));
  /* 10acf5a6 mov dword ptr [0x10aeed88], 0x10aeed58 */
  w32((uint32_t)(0x10aeed88), (0x10aeed58u));
  /* 10acf5b0 mov ecx, dword ptr [0x10aef814] */
  ECX = (r32((uint32_t)(0x10aef814)));
  /* 10acf5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf5b7 call 0x10acf870 */
  push32(0x10acf5bcu); f_10acf870();
  /* 10acf5bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf5bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf5c1 mov edx, dword ptr [0x10aef814] */
  EDX = (r32((uint32_t)(0x10aef814)));
  /* 10acf5c7 push edx */
  push32((uint32_t)(EDX));
  /* 10acf5c8 call 0x10ac4ac0 */
  push32(0x10acf5cdu); f_10ac4ac0();
  /* 10acf5cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf5d0 mov dword ptr [0x10aef814], 0 */
  w32((uint32_t)(0x10aef814), (0x0u));
  /* 10acf5da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10acf5dc:;
  /* 10acf5dc mov esp, ebp */
  ESP = (EBP);
  /* 10acf5de pop ebp */
  EBP = (pop32());
  /* 10acf5df ret  */
  ESPCHK(0x10acf4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5e0 @ 0x10acf5e0 (525 bytes, 200 insns) */
void f_10acf5e0(void) {
  FTRACE(0x10acf5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10acf5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acf5e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10acf5ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acf5ef mov ax, word ptr [0x10aef834] */
  AX = (r16((uint32_t)(0x10aef834)));
  /* 10acf5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acf5f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf5fc jne 0x10acf606 */
  if (!C.zf) goto L_10acf606;
  /* 10acf5fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acf601 jmp 0x10acf7e9 */
  goto L_10acf7e9;
L_10acf606:;
  /* 10acf606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf609 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf60c push ecx */
  push32((uint32_t)(ECX));
  /* 10acf60d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10acf60f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf612 push edx */
  push32((uint32_t)(EDX));
  /* 10acf613 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf615 call 0x10ad21f0 */
  push32(0x10acf61au); f_10ad21f0();
  /* 10acf61a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf61d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf620 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf622 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf628 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf62b push edx */
  push32((uint32_t)(EDX));
  /* 10acf62c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10acf62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf631 push eax */
  push32((uint32_t)(EAX));
  /* 10acf632 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf634 call 0x10ad21f0 */
  push32(0x10acf639u); f_10ad21f0();
  /* 10acf639 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf63c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf63f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf641 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf647 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf64a push edx */
  push32((uint32_t)(EDX));
  /* 10acf64b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10acf64d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf650 push eax */
  push32((uint32_t)(EAX));
  /* 10acf651 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf653 call 0x10ad21f0 */
  push32(0x10acf658u); f_10ad21f0();
  /* 10acf658 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf65b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf65e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf660 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf666 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf669 push edx */
  push32((uint32_t)(EDX));
  /* 10acf66a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10acf66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf66f push eax */
  push32((uint32_t)(EAX));
  /* 10acf670 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf672 call 0x10ad21f0 */
  push32(0x10acf677u); f_10ad21f0();
  /* 10acf677 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf67a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf67d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf67f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf685 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf688 push edx */
  push32((uint32_t)(EDX));
  /* 10acf689 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10acf68b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf68e push eax */
  push32((uint32_t)(EAX));
  /* 10acf68f push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf691 call 0x10ad21f0 */
  push32(0x10acf696u); f_10ad21f0();
  /* 10acf696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf69c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf69e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf6a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10acf6a7 push eax */
  push32((uint32_t)(EAX));
  /* 10acf6a8 call 0x10acf7f0 */
  push32(0x10acf6adu); f_10acf7f0();
  /* 10acf6ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf6b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf6b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf6b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf6b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10acf6b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf6bc push edx */
  push32((uint32_t)(EDX));
  /* 10acf6bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf6bf call 0x10ad21f0 */
  push32(0x10acf6c4u); f_10ad21f0();
  /* 10acf6c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf6c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf6ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf6d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf6d5 push edx */
  push32((uint32_t)(EDX));
  /* 10acf6d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10acf6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf6db push eax */
  push32((uint32_t)(EAX));
  /* 10acf6dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10acf6de call 0x10ad21f0 */
  push32(0x10acf6e3u); f_10ad21f0();
  /* 10acf6e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf6e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf6e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf6eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf6ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf6f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf6f4 push edx */
  push32((uint32_t)(EDX));
  /* 10acf6f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10acf6f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf6fa push eax */
  push32((uint32_t)(EAX));
  /* 10acf6fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf6fd call 0x10ad21f0 */
  push32(0x10acf702u); f_10ad21f0();
  /* 10acf702 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf705 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf708 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf70a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf70d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf710 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf713 push edx */
  push32((uint32_t)(EDX));
  /* 10acf714 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10acf716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf719 push eax */
  push32((uint32_t)(EAX));
  /* 10acf71a push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf71c call 0x10ad21f0 */
  push32(0x10acf721u); f_10ad21f0();
  /* 10acf721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf724 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf727 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf729 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf72c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf72f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf732 push edx */
  push32((uint32_t)(EDX));
  /* 10acf733 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10acf735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf738 push eax */
  push32((uint32_t)(EAX));
  /* 10acf739 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf73b call 0x10ad21f0 */
  push32(0x10acf740u); f_10ad21f0();
  /* 10acf740 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf746 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf748 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf74b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf74e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf751 push edx */
  push32((uint32_t)(EDX));
  /* 10acf752 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10acf754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf757 push eax */
  push32((uint32_t)(EAX));
  /* 10acf758 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf75a call 0x10ad21f0 */
  push32(0x10acf75fu); f_10ad21f0();
  /* 10acf75f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf762 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf765 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf767 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf76a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf76d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf770 push edx */
  push32((uint32_t)(EDX));
  /* 10acf771 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10acf773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf776 push eax */
  push32((uint32_t)(EAX));
  /* 10acf777 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf779 call 0x10ad21f0 */
  push32(0x10acf77eu); f_10ad21f0();
  /* 10acf77e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf781 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf784 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf786 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf78c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf78f push edx */
  push32((uint32_t)(EDX));
  /* 10acf790 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10acf792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf795 push eax */
  push32((uint32_t)(EAX));
  /* 10acf796 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf798 call 0x10ad21f0 */
  push32(0x10acf79du); f_10ad21f0();
  /* 10acf79d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf7a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf7a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf7a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf7a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf7ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf7ae push edx */
  push32((uint32_t)(EDX));
  /* 10acf7af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10acf7b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf7b4 push eax */
  push32((uint32_t)(EAX));
  /* 10acf7b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf7b7 call 0x10ad21f0 */
  push32(0x10acf7bcu); f_10ad21f0();
  /* 10acf7bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf7bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf7c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf7c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf7ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf7cd push edx */
  push32((uint32_t)(EDX));
  /* 10acf7ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10acf7d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf7d3 push eax */
  push32((uint32_t)(EAX));
  /* 10acf7d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf7d6 call 0x10ad21f0 */
  push32(0x10acf7dbu); f_10ad21f0();
  /* 10acf7db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf7de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acf7e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10acf7e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10acf7e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10acf7e9:;
  /* 10acf7e9 mov esp, ebp */
  ESP = (EBP);
  /* 10acf7eb pop ebp */
  EBP = (pop32());
  /* 10acf7ec ret  */
  ESPCHK(0x10acf5e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10acf7f0 (125 bytes, 49 insns) */
void f_10acf7f0(void) {
  FTRACE(0x10acf7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10acf7f3 push ecx */
  push32((uint32_t)(ECX));
L_10acf7f4:;
  /* 10acf7f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf7f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acf7fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acf7fc je 0x10acf869 */
  if (C.zf) goto L_10acf869;
  /* 10acf7fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf801 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acf804 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf807 jl 0x10acf82d */
  if ((C.sf!=C.of)) goto L_10acf82d;
  /* 10acf809 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf80c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acf80f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf812 jg 0x10acf82d */
  if ((!C.zf&&C.sf==C.of)) goto L_10acf82d;
  /* 10acf814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf817 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acf81a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acf81d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf820 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10acf822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10acf82b jmp 0x10acf867 */
  goto L_10acf867;
L_10acf82d:;
  /* 10acf82d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf830 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acf833 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf836 jne 0x10acf85e */
  if (!C.zf) goto L_10acf85e;
  /* 10acf838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf83b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10acf83e:;
  /* 10acf83e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf844 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10acf847 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10acf849 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf84c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf84f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10acf852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acf855 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acf858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acf85a jne 0x10acf83e */
  if (!C.zf) goto L_10acf83e;
  /* 10acf85c jmp 0x10acf867 */
  goto L_10acf867;
L_10acf85e:;
  /* 10acf85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf861 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf864 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10acf867:;
  /* 10acf867 jmp 0x10acf7f4 */
  goto L_10acf7f4;
L_10acf869:;
  /* 10acf869 mov esp, ebp */
  ESP = (EBP);
  /* 10acf86b pop ebp */
  EBP = (pop32());
  /* 10acf86c ret  */
  ESPCHK(0x10acf7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x10acf870 (147 bytes, 52 insns) */
void f_10acf870(void) {
  FTRACE(0x10acf870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf870 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf871 mov ebp, esp */
  EBP = (ESP);
  /* 10acf873 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf877 jne 0x10acf87e */
  if (!C.zf) goto L_10acf87e;
  /* 10acf879 jmp 0x10acf901 */
  goto L_10acf901;
L_10acf87e:;
  /* 10acf87e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf881 cmp dword ptr [eax + 0xc], 0x10aef870 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10aef870u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf888 je 0x10acf901 */
  if (C.zf) goto L_10acf901;
  /* 10acf88a push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf88f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10acf892 push edx */
  push32((uint32_t)(EDX));
  /* 10acf893 call 0x10ac4ac0 */
  push32(0x10acf898u); f_10ac4ac0();
  /* 10acf898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf89b push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf89d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf8a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10acf8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf8a4 call 0x10ac4ac0 */
  push32(0x10acf8a9u); f_10ac4ac0();
  /* 10acf8a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf8ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf8ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf8b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10acf8b4 push eax */
  push32((uint32_t)(EAX));
  /* 10acf8b5 call 0x10ac4ac0 */
  push32(0x10acf8bau); f_10ac4ac0();
  /* 10acf8ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf8bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf8bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf8c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10acf8c5 push edx */
  push32((uint32_t)(EDX));
  /* 10acf8c6 call 0x10ac4ac0 */
  push32(0x10acf8cbu); f_10ac4ac0();
  /* 10acf8cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf8ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf8d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf8d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10acf8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10acf8d7 call 0x10ac4ac0 */
  push32(0x10acf8dcu); f_10ac4ac0();
  /* 10acf8dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf8df push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf8e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf8e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10acf8e7 push eax */
  push32((uint32_t)(EAX));
  /* 10acf8e8 call 0x10ac4ac0 */
  push32(0x10acf8edu); f_10ac4ac0();
  /* 10acf8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf8f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf8f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acf8f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10acf8f8 push edx */
  push32((uint32_t)(EDX));
  /* 10acf8f9 call 0x10ac4ac0 */
  push32(0x10acf8feu); f_10ac4ac0();
  /* 10acf8fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acf901:;
  /* 10acf901 pop ebp */
  EBP = (pop32());
  /* 10acf902 ret  */
  ESPCHK(0x10acf870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f910 @ 0x10acf910 (928 bytes, 284 insns) */
void f_10acf910(void) {
  FTRACE(0x10acf910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acf910 push ebp */
  push32((uint32_t)(EBP));
  /* 10acf911 mov ebp, esp */
  EBP = (ESP);
  /* 10acf913 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acf916 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10acf91d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10acf924 cmp dword ptr [0x10aef7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf92b je 0x10acfc61 */
  if (C.zf) goto L_10acfc61;
  /* 10acf931 cmp dword ptr [0x10aef7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf938 jne 0x10acf960 */
  if (!C.zf) goto L_10acf960;
  /* 10acf93a push 0x10aef7e8 */
  push32((uint32_t)(0x10aef7e8u));
  /* 10acf93f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10acf944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acf946 mov ax, word ptr [0x10aef82c] */
  AX = (r16((uint32_t)(0x10aef82c)));
  /* 10acf94c push eax */
  push32((uint32_t)(EAX));
  /* 10acf94d push 0 */
  push32((uint32_t)(0x0u));
  /* 10acf94f call 0x10ad21f0 */
  push32(0x10acf954u); f_10ad21f0();
  /* 10acf954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acf959 je 0x10acf960 */
  if (C.zf) goto L_10acf960;
  /* 10acf95b jmp 0x10acfc22 */
  goto L_10acfc22;
L_10acf960:;
  /* 10acf960 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10acf962 push 0x10aeb20c */
  push32((uint32_t)(0x10aeb20cu));
  /* 10acf967 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf969 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10acf96e call 0x10ac4030 */
  push32(0x10acf973u); f_10ac4030();
  /* 10acf973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf976 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10acf979 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10acf97b push 0x10aeb20c */
  push32((uint32_t)(0x10aeb20cu));
  /* 10acf980 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf982 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10acf987 call 0x10ac4030 */
  push32(0x10acf98cu); f_10ac4030();
  /* 10acf98c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf98f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10acf992 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10acf994 push 0x10aeb20c */
  push32((uint32_t)(0x10aeb20cu));
  /* 10acf999 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf99b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10acf9a0 call 0x10ac4030 */
  push32(0x10acf9a5u); f_10ac4030();
  /* 10acf9a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf9a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10acf9ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10acf9ad push 0x10aeb20c */
  push32((uint32_t)(0x10aeb20cu));
  /* 10acf9b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acf9b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10acf9b9 call 0x10ac4030 */
  push32(0x10acf9beu); f_10ac4030();
  /* 10acf9be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf9c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10acf9c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf9c8 je 0x10acf9dc */
  if (C.zf) goto L_10acf9dc;
  /* 10acf9ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf9ce je 0x10acf9dc */
  if (C.zf) goto L_10acf9dc;
  /* 10acf9d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf9d4 je 0x10acf9dc */
  if (C.zf) goto L_10acf9dc;
  /* 10acf9d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acf9da jne 0x10acf9e1 */
  if (!C.zf) goto L_10acf9e1;
L_10acf9dc:;
  /* 10acf9dc jmp 0x10acfc22 */
  goto L_10acfc22;
L_10acf9e1:;
  /* 10acf9e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acf9e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10acf9e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10acf9ee jmp 0x10acf9f9 */
  goto L_10acf9f9;
L_10acf9f0:;
  /* 10acf9f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acf9f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acf9f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10acf9f9:;
  /* 10acf9f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfa00 jge 0x10acfa15 */
  if ((C.sf==C.of)) goto L_10acfa15;
  /* 10acfa02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa05 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10acfa08 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10acfa0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfa10 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10acfa13 jmp 0x10acf9f0 */
  goto L_10acf9f0;
L_10acfa15:;
  /* 10acfa15 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10acfa18 push eax */
  push32((uint32_t)(EAX));
  /* 10acfa19 mov ecx, dword ptr [0x10aef7e8] */
  ECX = (r32((uint32_t)(0x10aef7e8)));
  /* 10acfa1f push ecx */
  push32((uint32_t)(ECX));
  /* 10acfa20 call dword ptr [0x10af22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22d8))), 0x10acfa26u);
  /* 10acfa26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acfa28 jne 0x10acfa2f */
  if (!C.zf) goto L_10acfa2f;
  /* 10acfa2a jmp 0x10acfc22 */
  goto L_10acfc22;
L_10acfa2f:;
  /* 10acfa2f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfa33 jbe 0x10acfa3a */
  if ((C.cf||C.zf)) goto L_10acfa3a;
  /* 10acfa35 jmp 0x10acfc22 */
  goto L_10acfc22;
L_10acfa3a:;
  /* 10acfa3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10acfa3d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10acfa43 mov dword ptr [0x10aedea4], edx */
  w32((uint32_t)(0x10aedea4), (EDX));
  /* 10acfa49 cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfa50 jle 0x10acfaa9 */
  if ((C.zf||C.sf!=C.of)) goto L_10acfaa9;
  /* 10acfa52 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10acfa55 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10acfa58 jmp 0x10acfa63 */
  goto L_10acfa63;
L_10acfa5a:;
  /* 10acfa5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa5d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfa60 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10acfa63:;
  /* 10acfa63 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfa68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acfa6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acfa6c je 0x10acfaa9 */
  if (C.zf) goto L_10acfaa9;
  /* 10acfa6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10acfa73 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10acfa76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acfa78 je 0x10acfaa9 */
  if (C.zf) goto L_10acfaa9;
  /* 10acfa7a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acfa7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10acfa81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10acfa84 jmp 0x10acfa8f */
  goto L_10acfa8f;
L_10acfa86:;
  /* 10acfa86 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acfa89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfa8c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10acfa8f:;
  /* 10acfa8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfa92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acfa94 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10acfa97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfa9a jg 0x10acfaa7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acfaa7;
  /* 10acfa9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acfa9f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfaa2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10acfaa5 jmp 0x10acfa86 */
  goto L_10acfa86;
L_10acfaa7:;
  /* 10acfaa7 jmp 0x10acfa5a */
  goto L_10acfa5a;
L_10acfaa9:;
  /* 10acfaa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acfaab push 0 */
  push32((uint32_t)(0x0u));
  /* 10acfaad push 0 */
  push32((uint32_t)(0x0u));
  /* 10acfaaf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acfab2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfab5 push eax */
  push32((uint32_t)(EAX));
  /* 10acfab6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10acfabb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acfabe push ecx */
  push32((uint32_t)(ECX));
  /* 10acfabf push 1 */
  push32((uint32_t)(0x1u));
  /* 10acfac1 call 0x10acc260 */
  push32(0x10acfac6u); f_10acc260();
  /* 10acfac6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acfacb jne 0x10acfad2 */
  if (!C.zf) goto L_10acfad2;
  /* 10acfacd jmp 0x10acfc22 */
  goto L_10acfc22;
L_10acfad2:;
  /* 10acfad2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acfad5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10acfada mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acfadd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10acfae0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10acfae7 jmp 0x10acfaf2 */
  goto L_10acfaf2;
L_10acfae9:;
  /* 10acfae9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acfaec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfaef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10acfaf2:;
  /* 10acfaf2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfaf9 jge 0x10acfb10 */
  if ((C.sf==C.of)) goto L_10acfb10;
  /* 10acfafb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acfafe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10acfb02 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10acfb05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10acfb08 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfb0b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10acfb0e jmp 0x10acfae9 */
  goto L_10acfae9;
L_10acfb10:;
  /* 10acfb10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acfb12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10acfb14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acfb17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfb1a push edx */
  push32((uint32_t)(EDX));
  /* 10acfb1b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10acfb20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acfb23 push eax */
  push32((uint32_t)(EAX));
  /* 10acfb24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acfb26 call 0x10ad2490 */
  push32(0x10acfb2bu); f_10ad2490();
  /* 10acfb2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfb2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acfb30 jne 0x10acfb37 */
  if (!C.zf) goto L_10acfb37;
  /* 10acfb32 jmp 0x10acfc22 */
  goto L_10acfc22;
L_10acfb37:;
  /* 10acfb37 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acfb3a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10acfb3f cmp dword ptr [0x10aedea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aedea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfb46 jle 0x10acfba3 */
  if ((C.zf||C.sf!=C.of)) goto L_10acfba3;
  /* 10acfb48 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10acfb4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10acfb4e jmp 0x10acfb59 */
  goto L_10acfb59;
L_10acfb50:;
  /* 10acfb50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfb53 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfb56 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10acfb59:;
  /* 10acfb59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfb5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10acfb5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10acfb60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acfb62 je 0x10acfba3 */
  if (C.zf) goto L_10acfba3;
  /* 10acfb64 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfb67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acfb69 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10acfb6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acfb6e je 0x10acfba3 */
  if (C.zf) goto L_10acfba3;
  /* 10acfb70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfb73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfb75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acfb77 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10acfb7a jmp 0x10acfb85 */
  goto L_10acfb85;
L_10acfb7c:;
  /* 10acfb7c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acfb7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfb82 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10acfb85:;
  /* 10acfb85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10acfb88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfb8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10acfb8d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfb90 jg 0x10acfba1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10acfba1;
  /* 10acfb92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10acfb95 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acfb98 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10acfb9f jmp 0x10acfb7c */
  goto L_10acfb7c;
L_10acfba1:;
  /* 10acfba1 jmp 0x10acfb50 */
  goto L_10acfb50;
L_10acfba3:;
  /* 10acfba3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acfba6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfba9 mov dword ptr [0x10aedc98], eax */
  w32((uint32_t)(0x10aedc98), (EAX));
  /* 10acfbae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acfbb1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfbb4 mov dword ptr [0x10aedc9c], ecx */
  w32((uint32_t)(0x10aedc9c), (ECX));
  /* 10acfbba cmp dword ptr [0x10aef818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfbc1 je 0x10acfbd4 */
  if (C.zf) goto L_10acfbd4;
  /* 10acfbc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfbc5 mov edx, dword ptr [0x10aef818] */
  EDX = (r32((uint32_t)(0x10aef818)));
  /* 10acfbcb push edx */
  push32((uint32_t)(EDX));
  /* 10acfbcc call 0x10ac4ac0 */
  push32(0x10acfbd1u); f_10ac4ac0();
  /* 10acfbd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acfbd4:;
  /* 10acfbd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acfbd7 mov dword ptr [0x10aef818], eax */
  w32((uint32_t)(0x10aef818), (EAX));
  /* 10acfbdc cmp dword ptr [0x10aef81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfbe3 je 0x10acfbf6 */
  if (C.zf) goto L_10acfbf6;
  /* 10acfbe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfbe7 mov ecx, dword ptr [0x10aef81c] */
  ECX = (r32((uint32_t)(0x10aef81c)));
  /* 10acfbed push ecx */
  push32((uint32_t)(ECX));
  /* 10acfbee call 0x10ac4ac0 */
  push32(0x10acfbf3u); f_10ac4ac0();
  /* 10acfbf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acfbf6:;
  /* 10acfbf6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acfbf9 mov dword ptr [0x10aef81c], edx */
  w32((uint32_t)(0x10aef81c), (EDX));
  /* 10acfbff push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc01 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acfc04 push eax */
  push32((uint32_t)(EAX));
  /* 10acfc05 call 0x10ac4ac0 */
  push32(0x10acfc0au); f_10ac4ac0();
  /* 10acfc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acfc12 push ecx */
  push32((uint32_t)(ECX));
  /* 10acfc13 call 0x10ac4ac0 */
  push32(0x10acfc18u); f_10ac4ac0();
  /* 10acfc18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfc1d jmp 0x10acfcac */
  goto L_10acfcac;
L_10acfc22:;
  /* 10acfc22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10acfc27 push edx */
  push32((uint32_t)(EDX));
  /* 10acfc28 call 0x10ac4ac0 */
  push32(0x10acfc2du); f_10ac4ac0();
  /* 10acfc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10acfc35 push eax */
  push32((uint32_t)(EAX));
  /* 10acfc36 call 0x10ac4ac0 */
  push32(0x10acfc3bu); f_10ac4ac0();
  /* 10acfc3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10acfc43 push ecx */
  push32((uint32_t)(ECX));
  /* 10acfc44 call 0x10ac4ac0 */
  push32(0x10acfc49u); f_10ac4ac0();
  /* 10acfc49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc4e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10acfc51 push edx */
  push32((uint32_t)(EDX));
  /* 10acfc52 call 0x10ac4ac0 */
  push32(0x10acfc57u); f_10ac4ac0();
  /* 10acfc57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc5a mov eax, 1 */
  EAX = (0x1u);
  /* 10acfc5f jmp 0x10acfcac */
  goto L_10acfcac;
L_10acfc61:;
  /* 10acfc61 mov dword ptr [0x10aedc98], 0x10aedca2 */
  w32((uint32_t)(0x10aedc98), (0x10aedca2u));
  /* 10acfc6b mov dword ptr [0x10aedc9c], 0x10aedca2 */
  w32((uint32_t)(0x10aedc9c), (0x10aedca2u));
  /* 10acfc75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc77 mov eax, dword ptr [0x10aef818] */
  EAX = (r32((uint32_t)(0x10aef818)));
  /* 10acfc7c push eax */
  push32((uint32_t)(EAX));
  /* 10acfc7d call 0x10ac4ac0 */
  push32(0x10acfc82u); f_10ac4ac0();
  /* 10acfc82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10acfc87 mov ecx, dword ptr [0x10aef81c] */
  ECX = (r32((uint32_t)(0x10aef81c)));
  /* 10acfc8d push ecx */
  push32((uint32_t)(ECX));
  /* 10acfc8e call 0x10ac4ac0 */
  push32(0x10acfc93u); f_10ac4ac0();
  /* 10acfc93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfc96 mov dword ptr [0x10aef818], 0 */
  w32((uint32_t)(0x10aef818), (0x0u));
  /* 10acfca0 mov dword ptr [0x10aef81c], 0 */
  w32((uint32_t)(0x10aef81c), (0x0u));
  /* 10acfcaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10acfcac:;
  /* 10acfcac mov esp, ebp */
  ESP = (EBP);
  /* 10acfcae pop ebp */
  EBP = (pop32());
  /* 10acfcaf ret  */
  ESPCHK(0x10acf910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcb0 @ 0x10acfcb0 (7 bytes, 5 insns) */
void f_10acfcb0(void) {
  FTRACE(0x10acfcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acfcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acfcb1 mov ebp, esp */
  EBP = (ESP);
  /* 10acfcb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfcb5 pop ebp */
  EBP = (pop32());
  /* 10acfcb6 ret  */
  ESPCHK(0x10acfcb0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10acfcc0 (129 bytes, 56 insns) */
void f_10acfcc0(void) {
  FTRACE(0x10acfcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acfcc0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10acfcc4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10acfcc8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10acfcce jne 0x10acfd0c */
  if (!C.zf) goto L_10acfd0c;
L_10acfcd0:;
  /* 10acfcd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10acfcd2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfcd4 jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfcd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfcd8 je 0x10acfd00 */
  if (C.zf) goto L_10acfd00;
  /* 10acfcda cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfcdd jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfcdf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10acfce1 je 0x10acfd00 */
  if (C.zf) goto L_10acfd00;
  /* 10acfce3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10acfce6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfce9 jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfceb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfced je 0x10acfd00 */
  if (C.zf) goto L_10acfd00;
  /* 10acfcef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfcf2 jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfcf4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfcf7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfcfa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10acfcfc jne 0x10acfcd0 */
  if (!C.zf) goto L_10acfcd0;
  /* 10acfcfe mov edi, edi */
  EDI = (EDI);
L_10acfd00:;
  /* 10acfd00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfd02 ret  */
  ESPCHK(0x10acfcc0u, _esp0);
  ESP += 4; return;
  /* 10acfd03 nop  */
  /* nop */
L_10acfd04:;
  /* 10acfd04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acfd06 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10acfd08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10acfd09 ret  */
  ESPCHK(0x10acfcc0u, _esp0);
  ESP += 4; return;
  /* 10acfd0a mov edi, edi */
  EDI = (EDI);
L_10acfd0c:;
  /* 10acfd0c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10acfd12 je 0x10acfd28 */
  if (C.zf) goto L_10acfd28;
  /* 10acfd14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acfd16 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10acfd17 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfd19 jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfd1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10acfd1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfd1e je 0x10acfd00 */
  if (C.zf) goto L_10acfd00;
  /* 10acfd20 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10acfd26 je 0x10acfcd0 */
  if (C.zf) goto L_10acfcd0;
L_10acfd28:;
  /* 10acfd28 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10acfd2b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfd2e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfd30 jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfd32 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfd34 je 0x10acfd00 */
  if (C.zf) goto L_10acfd00;
  /* 10acfd36 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfd39 jne 0x10acfd04 */
  if (!C.zf) goto L_10acfd04;
  /* 10acfd3b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10acfd3d je 0x10acfd00 */
  if (C.zf) goto L_10acfd00;
  /* 10acfd3f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfd42 jmp 0x10acfcd0 */
  goto L_10acfcd0;
}

/* FUN_1000fd50 @ 0x10acfd50 (62 bytes, 35 insns) */
void f_10acfd50(void) {
  FTRACE(0x10acfd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acfd50 push ebp */
  push32((uint32_t)(EBP));
  /* 10acfd51 mov ebp, esp */
  EBP = (ESP);
  /* 10acfd53 push esi */
  push32((uint32_t)(ESI));
  /* 10acfd54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfd56 push eax */
  push32((uint32_t)(EAX));
  /* 10acfd57 push eax */
  push32((uint32_t)(EAX));
  /* 10acfd58 push eax */
  push32((uint32_t)(EAX));
  /* 10acfd59 push eax */
  push32((uint32_t)(EAX));
  /* 10acfd5a push eax */
  push32((uint32_t)(EAX));
  /* 10acfd5b push eax */
  push32((uint32_t)(EAX));
  /* 10acfd5c push eax */
  push32((uint32_t)(EAX));
  /* 10acfd5d push eax */
  push32((uint32_t)(EAX));
  /* 10acfd5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acfd61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acfd64:;
  /* 10acfd64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acfd66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfd68 je 0x10acfd71 */
  if (C.zf) goto L_10acfd71;
  /* 10acfd6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10acfd6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10acfd6b");
  /* 10acfd6f jmp 0x10acfd64 */
  goto L_10acfd64;
L_10acfd71:;
  /* 10acfd71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10acfd74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10acfd77 nop  */
  /* nop */
L_10acfd78:;
  /* 10acfd78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10acfd79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acfd7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfd7d je 0x10acfd86 */
  if (C.zf) goto L_10acfd86;
  /* 10acfd7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10acfd80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10acfd80");
  /* 10acfd84 jae 0x10acfd78 */
  if (!C.cf) goto L_10acfd78;
L_10acfd86:;
  /* 10acfd86 mov eax, ecx */
  EAX = (ECX);
  /* 10acfd88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfd8b pop esi */
  ESI = (pop32());
  /* 10acfd8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acfd8d ret  */
  ESPCHK(0x10acfd50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10acfd90 (56 bytes, 31 insns) */
void f_10acfd90(void) {
  FTRACE(0x10acfd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acfd90 push ebp */
  push32((uint32_t)(EBP));
  /* 10acfd91 mov ebp, esp */
  EBP = (ESP);
  /* 10acfd93 push edi */
  push32((uint32_t)(EDI));
  /* 10acfd94 push esi */
  push32((uint32_t)(ESI));
  /* 10acfd95 push ebx */
  push32((uint32_t)(EBX));
  /* 10acfd96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acfd99 jecxz 0x10acfdc1 */
  x86_unimpl("jecxz @ 0x10acfd99");
  /* 10acfd9b mov ebx, ecx */
  EBX = (ECX);
  /* 10acfd9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10acfda0 mov esi, edi */
  ESI = (EDI);
  /* 10acfda2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfda4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10acfda6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10acfda8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfdaa mov edi, esi */
  EDI = (ESI);
  /* 10acfdac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10acfdaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10acfdb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10acfdb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10acfdb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10acfdb9 ja 0x10acfdbf */
  if ((!C.cf&&!C.zf)) goto L_10acfdbf;
  /* 10acfdbb je 0x10acfdc1 */
  if (C.zf) goto L_10acfdc1;
  /* 10acfdbd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10acfdbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10acfdbf:;
  /* 10acfdbf not ecx */
  ECX = (~(ECX));
L_10acfdc1:;
  /* 10acfdc1 mov eax, ecx */
  EAX = (ECX);
  /* 10acfdc3 pop ebx */
  EBX = (pop32());
  /* 10acfdc4 pop esi */
  ESI = (pop32());
  /* 10acfdc5 pop edi */
  EDI = (pop32());
  /* 10acfdc6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acfdc7 ret  */
  ESPCHK(0x10acfd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x10acfdd0 (58 bytes, 32 insns) */
void f_10acfdd0(void) {
  FTRACE(0x10acfdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acfdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10acfdd1 mov ebp, esp */
  EBP = (ESP);
  /* 10acfdd3 push esi */
  push32((uint32_t)(ESI));
  /* 10acfdd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acfdd6 push eax */
  push32((uint32_t)(EAX));
  /* 10acfdd7 push eax */
  push32((uint32_t)(EAX));
  /* 10acfdd8 push eax */
  push32((uint32_t)(EAX));
  /* 10acfdd9 push eax */
  push32((uint32_t)(EAX));
  /* 10acfdda push eax */
  push32((uint32_t)(EAX));
  /* 10acfddb push eax */
  push32((uint32_t)(EAX));
  /* 10acfddc push eax */
  push32((uint32_t)(EAX));
  /* 10acfddd push eax */
  push32((uint32_t)(EAX));
  /* 10acfdde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acfde1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10acfde4:;
  /* 10acfde4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10acfde6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfde8 je 0x10acfdf1 */
  if (C.zf) goto L_10acfdf1;
  /* 10acfdea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10acfdeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10acfdeb");
  /* 10acfdef jmp 0x10acfde4 */
  goto L_10acfde4;
L_10acfdf1:;
  /* 10acfdf1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10acfdf4:;
  /* 10acfdf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10acfdf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10acfdf8 je 0x10acfe04 */
  if (C.zf) goto L_10acfe04;
  /* 10acfdfa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10acfdfb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10acfdfb");
  /* 10acfdff jae 0x10acfdf4 */
  if (!C.cf) goto L_10acfdf4;
  /* 10acfe01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10acfe04:;
  /* 10acfe04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfe07 pop esi */
  ESI = (pop32());
  /* 10acfe08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10acfe09 ret  */
  ESPCHK(0x10acfdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe10 @ 0x10acfe10 (512 bytes, 147 insns) */
void f_10acfe10(void) {
  FTRACE(0x10acfe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10acfe10 push ebp */
  push32((uint32_t)(EBP));
  /* 10acfe11 mov ebp, esp */
  EBP = (ESP);
  /* 10acfe13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10acfe16 cmp dword ptr [0x10aef864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfe1d jne 0x10acfe42 */
  if (!C.zf) goto L_10acfe42;
  /* 10acfe1f call 0x10ad08e0 */
  push32(0x10acfe24u); f_10ad08e0();
  /* 10acfe24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acfe26 je 0x10acfe32 */
  if (C.zf) goto L_10acfe32;
  /* 10acfe28 mov eax, dword ptr [0x10af229c] */
  EAX = (r32((uint32_t)(0x10af229c)));
  /* 10acfe2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10acfe30 jmp 0x10acfe39 */
  goto L_10acfe39;
L_10acfe32:;
  /* 10acfe32 mov dword ptr [ebp - 8], 0x10ad0930 */
  w32((uint32_t)(EBP + -0x8), (0x10ad0930u));
L_10acfe39:;
  /* 10acfe39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10acfe3c mov dword ptr [0x10aef864], ecx */
  w32((uint32_t)(0x10aef864), (ECX));
L_10acfe42:;
  /* 10acfe42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfe46 jne 0x10acfe52 */
  if (!C.zf) goto L_10acfe52;
  /* 10acfe48 call 0x10ad0730 */
  push32(0x10acfe4du); f_10ad0730();
  /* 10acfe4d jmp 0x10acff1e */
  goto L_10acff1e;
L_10acfe52:;
  /* 10acfe52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acfe55 mov dword ptr [0x10aef854], edx */
  w32((uint32_t)(0x10aef854), (EDX));
  /* 10acfe5b cmp dword ptr [0x10aef854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfe62 je 0x10acfe84 */
  if (C.zf) goto L_10acfe84;
  /* 10acfe64 mov eax, dword ptr [0x10aef854] */
  EAX = (r32((uint32_t)(0x10aef854)));
  /* 10acfe69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acfe6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acfe6e je 0x10acfe84 */
  if (C.zf) goto L_10acfe84;
  /* 10acfe70 push 0x10aef854 */
  push32((uint32_t)(0x10aef854u));
  /* 10acfe75 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10acfe77 push 0x10aeea90 */
  push32((uint32_t)(0x10aeea90u));
  /* 10acfe7c call 0x10ad0010 */
  push32(0x10acfe81u); f_10ad0010();
  /* 10acfe81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acfe84:;
  /* 10acfe84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acfe87 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfe8a mov dword ptr [0x10aef858], edx */
  w32((uint32_t)(0x10aef858), (EDX));
  /* 10acfe90 cmp dword ptr [0x10aef858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfe97 je 0x10acfeb9 */
  if (C.zf) goto L_10acfeb9;
  /* 10acfe99 mov eax, dword ptr [0x10aef858] */
  EAX = (r32((uint32_t)(0x10aef858)));
  /* 10acfe9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acfea1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acfea3 je 0x10acfeb9 */
  if (C.zf) goto L_10acfeb9;
  /* 10acfea5 push 0x10aef858 */
  push32((uint32_t)(0x10aef858u));
  /* 10acfeaa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10acfeac push 0x10aee9d8 */
  push32((uint32_t)(0x10aee9d8u));
  /* 10acfeb1 call 0x10ad0010 */
  push32(0x10acfeb6u); f_10ad0010();
  /* 10acfeb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10acfeb9:;
  /* 10acfeb9 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
  /* 10acfec3 cmp dword ptr [0x10aef854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfeca je 0x10acfefd */
  if (C.zf) goto L_10acfefd;
  /* 10acfecc mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10acfed2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10acfed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acfed7 je 0x10acfefd */
  if (C.zf) goto L_10acfefd;
  /* 10acfed9 cmp dword ptr [0x10aef858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acfee0 je 0x10acfef6 */
  if (C.zf) goto L_10acfef6;
  /* 10acfee2 mov ecx, dword ptr [0x10aef858] */
  ECX = (r32((uint32_t)(0x10aef858)));
  /* 10acfee8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10acfeeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10acfeed je 0x10acfef6 */
  if (C.zf) goto L_10acfef6;
  /* 10acfeef call 0x10ad00a0 */
  push32(0x10acfef4u); f_10ad00a0();
  /* 10acfef4 jmp 0x10acfefb */
  goto L_10acfefb;
L_10acfef6:;
  /* 10acfef6 call 0x10ad0490 */
  push32(0x10acfefbu); f_10ad0490();
L_10acfefb:;
  /* 10acfefb jmp 0x10acff1e */
  goto L_10acff1e;
L_10acfefd:;
  /* 10acfefd cmp dword ptr [0x10aef858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acff04 je 0x10acff19 */
  if (C.zf) goto L_10acff19;
  /* 10acff06 mov eax, dword ptr [0x10aef858] */
  EAX = (r32((uint32_t)(0x10aef858)));
  /* 10acff0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10acff0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10acff10 je 0x10acff19 */
  if (C.zf) goto L_10acff19;
  /* 10acff12 call 0x10ad0630 */
  push32(0x10acff17u); f_10ad0630();
  /* 10acff17 jmp 0x10acff1e */
  goto L_10acff1e;
L_10acff19:;
  /* 10acff19 call 0x10ad0730 */
  push32(0x10acff1eu); f_10ad0730();
L_10acff1e:;
  /* 10acff1e cmp dword ptr [0x10aef85c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef85c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acff25 jne 0x10acff2e */
  if (!C.zf) goto L_10acff2e;
  /* 10acff27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acff29 jmp 0x10ad000c */
  goto L_10ad000c;
L_10acff2e:;
  /* 10acff2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10acff31 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acff37 push edx */
  push32((uint32_t)(EDX));
  /* 10acff38 call 0x10ad0760 */
  push32(0x10acff3du); f_10ad0760();
  /* 10acff3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10acff40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10acff43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acff47 je 0x10acff5c */
  if (C.zf) goto L_10acff5c;
  /* 10acff49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acff4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10acff51 push eax */
  push32((uint32_t)(EAX));
  /* 10acff52 call dword ptr [0x10af22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22a0))), 0x10acff58u);
  /* 10acff58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acff5a jne 0x10acff63 */
  if (!C.zf) goto L_10acff63;
L_10acff5c:;
  /* 10acff5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acff5e jmp 0x10ad000c */
  goto L_10ad000c;
L_10acff63:;
  /* 10acff63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10acff65 mov ecx, dword ptr [0x10aef844] */
  ECX = (r32((uint32_t)(0x10aef844)));
  /* 10acff6b push ecx */
  push32((uint32_t)(ECX));
  /* 10acff6c call dword ptr [0x10af22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22b0))), 0x10acff72u);
  /* 10acff72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acff74 jne 0x10acff7d */
  if (!C.zf) goto L_10acff7d;
  /* 10acff76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acff78 jmp 0x10ad000c */
  goto L_10ad000c;
L_10acff7d:;
  /* 10acff7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acff81 je 0x10acffa8 */
  if (C.zf) goto L_10acffa8;
  /* 10acff83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acff86 mov ax, word ptr [0x10aef844] */
  AX = (r16((uint32_t)(0x10aef844)));
  /* 10acff8c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10acff8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acff92 mov dx, word ptr [0x10aef860] */
  DX = (r16((uint32_t)(0x10aef860)));
  /* 10acff99 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10acff9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10acffa0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10acffa4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10acffa8:;
  /* 10acffa8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10acffac je 0x10ad0007 */
  if (C.zf) goto L_10ad0007;
  /* 10acffae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10acffb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acffb3 push edx */
  push32((uint32_t)(EDX));
  /* 10acffb4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10acffb9 mov eax, dword ptr [0x10aef844] */
  EAX = (r32((uint32_t)(0x10aef844)));
  /* 10acffbe push eax */
  push32((uint32_t)(EAX));
  /* 10acffbf call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10acffc5u);
  /* 10acffc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acffc7 jne 0x10acffcd */
  if (!C.zf) goto L_10acffcd;
  /* 10acffc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acffcb jmp 0x10ad000c */
  goto L_10ad000c;
L_10acffcd:;
  /* 10acffcd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10acffcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acffd2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acffd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10acffd6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10acffdb mov edx, dword ptr [0x10aef860] */
  EDX = (r32((uint32_t)(0x10aef860)));
  /* 10acffe1 push edx */
  push32((uint32_t)(EDX));
  /* 10acffe2 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10acffe8u);
  /* 10acffe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10acffea jne 0x10acfff0 */
  if (!C.zf) goto L_10acfff0;
  /* 10acffec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10acffee jmp 0x10ad000c */
  goto L_10ad000c;
L_10acfff0:;
  /* 10acfff0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10acfff2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10acfff5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10acfffa push eax */
  push32((uint32_t)(EAX));
  /* 10acfffb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10acfffe push ecx */
  push32((uint32_t)(ECX));
  /* 10acffff call 0x10ac6b70 */
  push32(0x10ad0004u); f_10ac6b70();
  /* 10ad0004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad0007:;
  /* 10ad0007 mov eax, 1 */
  EAX = (0x1u);
L_10ad000c:;
  /* 10ad000c mov esp, ebp */
  ESP = (EBP);
  /* 10ad000e pop ebp */
  EBP = (pop32());
  /* 10ad000f ret  */
  ESPCHK(0x10acfe10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x10ad0010 (130 bytes, 47 insns) */
void f_10ad0010(void) {
  FTRACE(0x10ad0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0010 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0011 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0016 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ad001d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10ad0024:;
  /* 10ad0024 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0027 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad002a jg 0x10ad008e */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad008e;
  /* 10ad002c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0030 je 0x10ad008e */
  if (C.zf) goto L_10ad008e;
  /* 10ad0032 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0035 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0038 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad0039 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad003b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ad003d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad0040 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0046 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10ad0049 push eax */
  push32((uint32_t)(EAX));
  /* 10ad004a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad004d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ad004f push edx */
  push32((uint32_t)(EDX));
  /* 10ad0050 call 0x10ad2700 */
  push32(0x10ad0055u); f_10ad2700();
  /* 10ad0055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0058 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad005b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad005f jne 0x10ad0072 */
  if (!C.zf) goto L_10ad0072;
  /* 10ad0061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0067 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10ad006b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad006e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ad0070 jmp 0x10ad008c */
  goto L_10ad008c;
L_10ad0072:;
  /* 10ad0072 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0076 jge 0x10ad0083 */
  if ((C.sf==C.of)) goto L_10ad0083;
  /* 10ad0078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad007b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad007e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ad0081 jmp 0x10ad008c */
  goto L_10ad008c;
L_10ad0083:;
  /* 10ad0083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0086 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0089 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ad008c:;
  /* 10ad008c jmp 0x10ad0024 */
  goto L_10ad0024;
L_10ad008e:;
  /* 10ad008e mov esp, ebp */
  ESP = (EBP);
  /* 10ad0090 pop ebp */
  EBP = (pop32());
  /* 10ad0091 ret  */
  ESPCHK(0x10ad0010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100a0 @ 0x10ad00a0 (186 bytes, 50 insns) */
void f_10ad00a0(void) {
  FTRACE(0x10ad00a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad00a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad00a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad00a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad00a4 mov eax, dword ptr [0x10aef854] */
  EAX = (r32((uint32_t)(0x10aef854)));
  /* 10ad00a9 push eax */
  push32((uint32_t)(EAX));
  /* 10ad00aa call 0x10ac6e60 */
  push32(0x10ad00afu); f_10ac6e60();
  /* 10ad00af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad00b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad00b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad00b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ad00ba mov dword ptr [0x10aef850], ecx */
  w32((uint32_t)(0x10aef850), (ECX));
  /* 10ad00c0 mov edx, dword ptr [0x10aef858] */
  EDX = (r32((uint32_t)(0x10aef858)));
  /* 10ad00c6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad00c7 call 0x10ac6e60 */
  push32(0x10ad00ccu); f_10ac6e60();
  /* 10ad00cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad00cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad00d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad00d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ad00d7 mov dword ptr [0x10aef848], ecx */
  w32((uint32_t)(0x10aef848), (ECX));
  /* 10ad00dd mov dword ptr [0x10aef844], 0 */
  w32((uint32_t)(0x10aef844), (0x0u));
  /* 10ad00e7 cmp dword ptr [0x10aef850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad00ee je 0x10ad00f9 */
  if (C.zf) goto L_10ad00f9;
  /* 10ad00f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ad00f7 jmp 0x10ad010b */
  goto L_10ad010b;
L_10ad00f9:;
  /* 10ad00f9 mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad00ff push edx */
  push32((uint32_t)(EDX));
  /* 10ad0100 call 0x10ad0b40 */
  push32(0x10ad0105u); f_10ad0b40();
  /* 10ad0105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0108 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ad010b:;
  /* 10ad010b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad010e mov dword ptr [0x10aef84c], eax */
  w32((uint32_t)(0x10aef84c), (EAX));
  /* 10ad0113 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad0115 push 0x10ad0160 */
  push32((uint32_t)(0x10ad0160u));
  /* 10ad011a call dword ptr [0x10af22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22a4))), 0x10ad0120u);
  /* 10ad0120 mov ecx, dword ptr [0x10aef85c] */
  ECX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0126 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad012c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad012e je 0x10ad014c */
  if (C.zf) goto L_10ad014c;
  /* 10ad0130 mov edx, dword ptr [0x10aef85c] */
  EDX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0136 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad013c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad013e je 0x10ad014c */
  if (C.zf) goto L_10ad014c;
  /* 10ad0140 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0145 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad014a jne 0x10ad0156 */
  if (!C.zf) goto L_10ad0156;
L_10ad014c:;
  /* 10ad014c mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
L_10ad0156:;
  /* 10ad0156 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0158 pop ebp */
  EBP = (pop32());
  /* 10ad0159 ret  */
  ESPCHK(0x10ad00a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x10ad0160 (804 bytes, 220 insns) */
void f_10ad0160(void) {
  FTRACE(0x10ad0160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0160 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0161 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0163 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0169 push eax */
  push32((uint32_t)(EAX));
  /* 10ad016a call 0x10ad0ac0 */
  push32(0x10ad016fu); f_10ad0ac0();
  /* 10ad016f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0172 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10ad0175 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ad0177 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad017a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad017b mov edx, dword ptr [0x10aef848] */
  EDX = (r32((uint32_t)(0x10aef848)));
  /* 10ad0181 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad0183 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0185 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad018b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0191 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0192 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0195 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0196 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad019cu);
  /* 10ad019c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad019e jne 0x10ad01b4 */
  if (!C.zf) goto L_10ad01b4;
  /* 10ad01a0 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
  /* 10ad01aa mov eax, 1 */
  EAX = (0x1u);
  /* 10ad01af jmp 0x10ad047e */
  goto L_10ad047e;
L_10ad01b4:;
  /* 10ad01b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad01b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad01b8 mov edx, dword ptr [0x10aef858] */
  EDX = (r32((uint32_t)(0x10aef858)));
  /* 10ad01be push edx */
  push32((uint32_t)(EDX));
  /* 10ad01bf call 0x10ad2700 */
  push32(0x10ad01c4u); f_10ad2700();
  /* 10ad01c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad01c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad01c9 jne 0x10ad02ef */
  if (!C.zf) goto L_10ad02ef;
  /* 10ad01cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ad01d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ad01d4 push eax */
  push32((uint32_t)(EAX));
  /* 10ad01d5 mov ecx, dword ptr [0x10aef850] */
  ECX = (r32((uint32_t)(0x10aef850)));
  /* 10ad01db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad01dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad01df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad01e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad01eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ad01ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad01ef push edx */
  push32((uint32_t)(EDX));
  /* 10ad01f0 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad01f6u);
  /* 10ad01f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad01f8 jne 0x10ad020e */
  if (!C.zf) goto L_10ad020e;
  /* 10ad01fa mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
  /* 10ad0204 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad0209 jmp 0x10ad047e */
  goto L_10ad047e;
L_10ad020e:;
  /* 10ad020e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ad0211 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0212 mov ecx, dword ptr [0x10aef854] */
  ECX = (r32((uint32_t)(0x10aef854)));
  /* 10ad0218 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0219 call 0x10ad2700 */
  push32(0x10ad021eu); f_10ad2700();
  /* 10ad021e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0223 jne 0x10ad0250 */
  if (!C.zf) goto L_10ad0250;
  /* 10ad0225 mov edx, dword ptr [0x10aef85c] */
  EDX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad022b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad0231 mov dword ptr [0x10aef85c], edx */
  w32((uint32_t)(0x10aef85c), (EDX));
  /* 10ad0237 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad023a mov dword ptr [0x10aef860], eax */
  w32((uint32_t)(0x10aef860), (EAX));
  /* 10ad023f mov ecx, dword ptr [0x10aef860] */
  ECX = (r32((uint32_t)(0x10aef860)));
  /* 10ad0245 mov dword ptr [0x10aef844], ecx */
  w32((uint32_t)(0x10aef844), (ECX));
  /* 10ad024b jmp 0x10ad02ef */
  goto L_10ad02ef;
L_10ad0250:;
  /* 10ad0250 mov edx, dword ptr [0x10aef85c] */
  EDX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0256 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad0259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad025b jne 0x10ad02ef */
  if (!C.zf) goto L_10ad02ef;
  /* 10ad0261 cmp dword ptr [0x10aef84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0268 je 0x10ad02bd */
  if (C.zf) goto L_10ad02bd;
  /* 10ad026a mov eax, dword ptr [0x10aef84c] */
  EAX = (r32((uint32_t)(0x10aef84c)));
  /* 10ad026f push eax */
  push32((uint32_t)(EAX));
  /* 10ad0270 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad0273 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0274 mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad027a push edx */
  push32((uint32_t)(EDX));
  /* 10ad027b call 0x10ad27d0 */
  push32(0x10ad0280u); f_10ad27d0();
  /* 10ad0280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0283 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0285 jne 0x10ad02bd */
  if (!C.zf) goto L_10ad02bd;
  /* 10ad0287 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad028c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10ad028e mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
  /* 10ad0293 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0296 mov dword ptr [0x10aef860], ecx */
  w32((uint32_t)(0x10aef860), (ECX));
  /* 10ad029c mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad02a2 push edx */
  push32((uint32_t)(EDX));
  /* 10ad02a3 call 0x10ac6e60 */
  push32(0x10ad02a8u); f_10ac6e60();
  /* 10ad02a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad02ab cmp eax, dword ptr [0x10aef84c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aef84c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad02b1 jne 0x10ad02bb */
  if (!C.zf) goto L_10ad02bb;
  /* 10ad02b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad02b6 mov dword ptr [0x10aef844], eax */
  w32((uint32_t)(0x10aef844), (EAX));
L_10ad02bb:;
  /* 10ad02bb jmp 0x10ad02ef */
  goto L_10ad02ef;
L_10ad02bd:;
  /* 10ad02bd mov ecx, dword ptr [0x10aef85c] */
  ECX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad02c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad02c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad02c8 jne 0x10ad02ef */
  if (!C.zf) goto L_10ad02ef;
  /* 10ad02ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad02cd push edx */
  push32((uint32_t)(EDX));
  /* 10ad02ce call 0x10ad0800 */
  push32(0x10ad02d3u); f_10ad0800();
  /* 10ad02d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad02d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad02d8 je 0x10ad02ef */
  if (C.zf) goto L_10ad02ef;
  /* 10ad02da mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad02df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ad02e1 mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
  /* 10ad02e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad02e9 mov dword ptr [0x10aef860], ecx */
  w32((uint32_t)(0x10aef860), (ECX));
L_10ad02ef:;
  /* 10ad02ef mov edx, dword ptr [0x10aef85c] */
  EDX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad02f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad02fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0301 je 0x10ad0471 */
  if (C.zf) goto L_10ad0471;
  /* 10ad0307 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ad0309 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ad030c push eax */
  push32((uint32_t)(EAX));
  /* 10ad030d mov ecx, dword ptr [0x10aef850] */
  ECX = (r32((uint32_t)(0x10aef850)));
  /* 10ad0313 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad0315 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0317 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad031d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0323 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0324 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0327 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0328 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad032eu);
  /* 10ad032e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0330 jne 0x10ad0346 */
  if (!C.zf) goto L_10ad0346;
  /* 10ad0332 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
  /* 10ad033c mov eax, 1 */
  EAX = (0x1u);
  /* 10ad0341 jmp 0x10ad047e */
  goto L_10ad047e;
L_10ad0346:;
  /* 10ad0346 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ad0349 push eax */
  push32((uint32_t)(EAX));
  /* 10ad034a mov ecx, dword ptr [0x10aef854] */
  ECX = (r32((uint32_t)(0x10aef854)));
  /* 10ad0350 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0351 call 0x10ad2700 */
  push32(0x10ad0356u); f_10ad2700();
  /* 10ad0356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad035b jne 0x10ad0410 */
  if (!C.zf) goto L_10ad0410;
  /* 10ad0361 mov edx, dword ptr [0x10aef85c] */
  EDX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0367 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ad036a mov dword ptr [0x10aef85c], edx */
  w32((uint32_t)(0x10aef85c), (EDX));
  /* 10ad0370 cmp dword ptr [0x10aef850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0377 je 0x10ad039a */
  if (C.zf) goto L_10ad039a;
  /* 10ad0379 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad037e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ad0381 mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
  /* 10ad0386 cmp dword ptr [0x10aef844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad038d jne 0x10ad0398 */
  if (!C.zf) goto L_10ad0398;
  /* 10ad038f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0392 mov dword ptr [0x10aef844], ecx */
  w32((uint32_t)(0x10aef844), (ECX));
L_10ad0398:;
  /* 10ad0398 jmp 0x10ad040e */
  goto L_10ad040e;
L_10ad039a:;
  /* 10ad039a cmp dword ptr [0x10aef84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad03a1 je 0x10ad03ef */
  if (C.zf) goto L_10ad03ef;
  /* 10ad03a3 mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad03a9 push edx */
  push32((uint32_t)(EDX));
  /* 10ad03aa call 0x10ac6e60 */
  push32(0x10ad03afu); f_10ac6e60();
  /* 10ad03af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad03b2 cmp eax, dword ptr [0x10aef84c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aef84c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad03b8 jne 0x10ad03ef */
  if (!C.zf) goto L_10ad03ef;
  /* 10ad03ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad03bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad03bf push eax */
  push32((uint32_t)(EAX));
  /* 10ad03c0 call 0x10ad0850 */
  push32(0x10ad03c5u); f_10ad0850();
  /* 10ad03c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad03c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad03ca je 0x10ad03ed */
  if (C.zf) goto L_10ad03ed;
  /* 10ad03cc mov ecx, dword ptr [0x10aef85c] */
  ECX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad03d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ad03d5 mov dword ptr [0x10aef85c], ecx */
  w32((uint32_t)(0x10aef85c), (ECX));
  /* 10ad03db cmp dword ptr [0x10aef844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad03e2 jne 0x10ad03ed */
  if (!C.zf) goto L_10ad03ed;
  /* 10ad03e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad03e7 mov dword ptr [0x10aef844], edx */
  w32((uint32_t)(0x10aef844), (EDX));
L_10ad03ed:;
  /* 10ad03ed jmp 0x10ad040e */
  goto L_10ad040e;
L_10ad03ef:;
  /* 10ad03ef mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad03f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ad03f7 mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
  /* 10ad03fc cmp dword ptr [0x10aef844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0403 jne 0x10ad040e */
  if (!C.zf) goto L_10ad040e;
  /* 10ad0405 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0408 mov dword ptr [0x10aef844], ecx */
  w32((uint32_t)(0x10aef844), (ECX));
L_10ad040e:;
  /* 10ad040e jmp 0x10ad0471 */
  goto L_10ad0471;
L_10ad0410:;
  /* 10ad0410 cmp dword ptr [0x10aef850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0417 jne 0x10ad0471 */
  if (!C.zf) goto L_10ad0471;
  /* 10ad0419 cmp dword ptr [0x10aef84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0420 je 0x10ad0471 */
  if (C.zf) goto L_10ad0471;
  /* 10ad0422 mov edx, dword ptr [0x10aef84c] */
  EDX = (r32((uint32_t)(0x10aef84c)));
  /* 10ad0428 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0429 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10ad042c push eax */
  push32((uint32_t)(EAX));
  /* 10ad042d mov ecx, dword ptr [0x10aef854] */
  ECX = (r32((uint32_t)(0x10aef854)));
  /* 10ad0433 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0434 call 0x10ad27d0 */
  push32(0x10ad0439u); f_10ad27d0();
  /* 10ad0439 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad043c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad043e jne 0x10ad0471 */
  if (!C.zf) goto L_10ad0471;
  /* 10ad0440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad0442 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0445 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0446 call 0x10ad0850 */
  push32(0x10ad044bu); f_10ad0850();
  /* 10ad044b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad044e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0450 je 0x10ad0471 */
  if (C.zf) goto L_10ad0471;
  /* 10ad0452 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0457 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10ad045a mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
  /* 10ad045f cmp dword ptr [0x10aef844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0466 jne 0x10ad0471 */
  if (!C.zf) goto L_10ad0471;
  /* 10ad0468 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad046b mov dword ptr [0x10aef844], ecx */
  w32((uint32_t)(0x10aef844), (ECX));
L_10ad0471:;
  /* 10ad0471 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0476 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0479 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad047b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad047d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ad047e:;
  /* 10ad047e mov esp, ebp */
  ESP = (EBP);
  /* 10ad0480 pop ebp */
  EBP = (pop32());
  /* 10ad0481 ret 4 */
  ESPCHK(0x10ad0160u, _esp0);
  ESP += 8; return;
}

/* FUN_10010490 @ 0x10ad0490 (116 bytes, 33 insns) */
void f_10ad0490(void) {
  FTRACE(0x10ad0490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0490 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0491 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0493 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0494 mov eax, dword ptr [0x10aef854] */
  EAX = (r32((uint32_t)(0x10aef854)));
  /* 10ad0499 push eax */
  push32((uint32_t)(EAX));
  /* 10ad049a call 0x10ac6e60 */
  push32(0x10ad049fu); f_10ac6e60();
  /* 10ad049f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad04a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad04a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad04a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ad04aa mov dword ptr [0x10aef850], ecx */
  w32((uint32_t)(0x10aef850), (ECX));
  /* 10ad04b0 cmp dword ptr [0x10aef850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad04b7 je 0x10ad04c2 */
  if (C.zf) goto L_10ad04c2;
  /* 10ad04b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ad04c0 jmp 0x10ad04d4 */
  goto L_10ad04d4;
L_10ad04c2:;
  /* 10ad04c2 mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad04c8 push edx */
  push32((uint32_t)(EDX));
  /* 10ad04c9 call 0x10ad0b40 */
  push32(0x10ad04ceu); f_10ad0b40();
  /* 10ad04ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad04d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ad04d4:;
  /* 10ad04d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad04d7 mov dword ptr [0x10aef84c], eax */
  w32((uint32_t)(0x10aef84c), (EAX));
  /* 10ad04dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad04de push 0x10ad0510 */
  push32((uint32_t)(0x10ad0510u));
  /* 10ad04e3 call dword ptr [0x10af22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22a4))), 0x10ad04e9u);
  /* 10ad04e9 mov ecx, dword ptr [0x10aef85c] */
  ECX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad04ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad04f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad04f4 jne 0x10ad0500 */
  if (!C.zf) goto L_10ad0500;
  /* 10ad04f6 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
L_10ad0500:;
  /* 10ad0500 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0502 pop ebp */
  EBP = (pop32());
  /* 10ad0503 ret  */
  ESPCHK(0x10ad0490u, _esp0);
  ESP += 4; return;
}

/* FUN_10010510 @ 0x10ad0510 (287 bytes, 86 insns) */
void f_10ad0510(void) {
  FTRACE(0x10ad0510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0510 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0511 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0513 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0519 push eax */
  push32((uint32_t)(EAX));
  /* 10ad051a call 0x10ad0ac0 */
  push32(0x10ad051fu); f_10ad0ac0();
  /* 10ad051f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0522 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10ad0525 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ad0527 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad052a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad052b mov edx, dword ptr [0x10aef850] */
  EDX = (r32((uint32_t)(0x10aef850)));
  /* 10ad0531 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad0533 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0535 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad053b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0541 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0542 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0545 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0546 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad054cu);
  /* 10ad054c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad054e jne 0x10ad0564 */
  if (!C.zf) goto L_10ad0564;
  /* 10ad0550 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
  /* 10ad055a mov eax, 1 */
  EAX = (0x1u);
  /* 10ad055f jmp 0x10ad0629 */
  goto L_10ad0629;
L_10ad0564:;
  /* 10ad0564 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad0567 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0568 mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad056e push edx */
  push32((uint32_t)(EDX));
  /* 10ad056f call 0x10ad2700 */
  push32(0x10ad0574u); f_10ad2700();
  /* 10ad0574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0579 jne 0x10ad05b9 */
  if (!C.zf) goto L_10ad05b9;
  /* 10ad057b cmp dword ptr [0x10aef850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0582 jne 0x10ad0596 */
  if (!C.zf) goto L_10ad0596;
  /* 10ad0584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad0586 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0589 push eax */
  push32((uint32_t)(EAX));
  /* 10ad058a call 0x10ad0850 */
  push32(0x10ad058fu); f_10ad0850();
  /* 10ad058f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0594 je 0x10ad05b7 */
  if (C.zf) goto L_10ad05b7;
L_10ad0596:;
  /* 10ad0596 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad0599 mov dword ptr [0x10aef860], ecx */
  w32((uint32_t)(0x10aef860), (ECX));
  /* 10ad059f mov edx, dword ptr [0x10aef860] */
  EDX = (r32((uint32_t)(0x10aef860)));
  /* 10ad05a5 mov dword ptr [0x10aef844], edx */
  w32((uint32_t)(0x10aef844), (EDX));
  /* 10ad05ab mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad05b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10ad05b2 mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
L_10ad05b7:;
  /* 10ad05b7 jmp 0x10ad061c */
  goto L_10ad061c;
L_10ad05b9:;
  /* 10ad05b9 cmp dword ptr [0x10aef850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad05c0 jne 0x10ad061c */
  if (!C.zf) goto L_10ad061c;
  /* 10ad05c2 cmp dword ptr [0x10aef84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aef84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad05c9 je 0x10ad061c */
  if (C.zf) goto L_10ad061c;
  /* 10ad05cb mov ecx, dword ptr [0x10aef84c] */
  ECX = (r32((uint32_t)(0x10aef84c)));
  /* 10ad05d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad05d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10ad05d5 push edx */
  push32((uint32_t)(EDX));
  /* 10ad05d6 mov eax, dword ptr [0x10aef854] */
  EAX = (r32((uint32_t)(0x10aef854)));
  /* 10ad05db push eax */
  push32((uint32_t)(EAX));
  /* 10ad05dc call 0x10ad27d0 */
  push32(0x10ad05e1u); f_10ad27d0();
  /* 10ad05e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad05e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad05e6 jne 0x10ad061c */
  if (!C.zf) goto L_10ad061c;
  /* 10ad05e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad05ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad05ed push ecx */
  push32((uint32_t)(ECX));
  /* 10ad05ee call 0x10ad0850 */
  push32(0x10ad05f3u); f_10ad0850();
  /* 10ad05f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad05f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad05f8 je 0x10ad061c */
  if (C.zf) goto L_10ad061c;
  /* 10ad05fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad05fd mov dword ptr [0x10aef860], edx */
  w32((uint32_t)(0x10aef860), (EDX));
  /* 10ad0603 mov eax, dword ptr [0x10aef860] */
  EAX = (r32((uint32_t)(0x10aef860)));
  /* 10ad0608 mov dword ptr [0x10aef844], eax */
  w32((uint32_t)(0x10aef844), (EAX));
  /* 10ad060d mov ecx, dword ptr [0x10aef85c] */
  ECX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0613 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad0616 mov dword ptr [0x10aef85c], ecx */
  w32((uint32_t)(0x10aef85c), (ECX));
L_10ad061c:;
  /* 10ad061c mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0621 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0624 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad0626 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0628 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ad0629:;
  /* 10ad0629 mov esp, ebp */
  ESP = (EBP);
  /* 10ad062b pop ebp */
  EBP = (pop32());
  /* 10ad062c ret 4 */
  ESPCHK(0x10ad0510u, _esp0);
  ESP += 8; return;
}

/* FUN_10010630 @ 0x10ad0630 (69 bytes, 20 insns) */
void f_10ad0630(void) {
  FTRACE(0x10ad0630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0630 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0631 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0633 mov eax, dword ptr [0x10aef858] */
  EAX = (r32((uint32_t)(0x10aef858)));
  /* 10ad0638 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0639 call 0x10ac6e60 */
  push32(0x10ad063eu); f_10ac6e60();
  /* 10ad063e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0641 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad0643 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0646 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10ad0649 mov dword ptr [0x10aef848], ecx */
  w32((uint32_t)(0x10aef848), (ECX));
  /* 10ad064f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad0651 push 0x10ad0680 */
  push32((uint32_t)(0x10ad0680u));
  /* 10ad0656 call dword ptr [0x10af22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af22a4))), 0x10ad065cu);
  /* 10ad065c mov edx, dword ptr [0x10aef85c] */
  EDX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0662 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad0665 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad0667 jne 0x10ad0673 */
  if (!C.zf) goto L_10ad0673;
  /* 10ad0669 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
L_10ad0673:;
  /* 10ad0673 pop ebp */
  EBP = (pop32());
  /* 10ad0674 ret  */
  ESPCHK(0x10ad0630u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x10ad0680 (172 bytes, 54 insns) */
void f_10ad0680(void) {
  FTRACE(0x10ad0680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0680 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0681 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0683 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0689 push eax */
  push32((uint32_t)(EAX));
  /* 10ad068a call 0x10ad0ac0 */
  push32(0x10ad068fu); f_10ad0ac0();
  /* 10ad068f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0692 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10ad0695 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ad0697 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad069a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad069b mov edx, dword ptr [0x10aef848] */
  EDX = (r32((uint32_t)(0x10aef848)));
  /* 10ad06a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad06a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad06a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad06ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad06b1 push edx */
  push32((uint32_t)(EDX));
  /* 10ad06b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad06b5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad06b6 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad06bcu);
  /* 10ad06bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad06be jne 0x10ad06d1 */
  if (!C.zf) goto L_10ad06d1;
  /* 10ad06c0 mov dword ptr [0x10aef85c], 0 */
  w32((uint32_t)(0x10aef85c), (0x0u));
  /* 10ad06ca mov eax, 1 */
  EAX = (0x1u);
  /* 10ad06cf jmp 0x10ad0726 */
  goto L_10ad0726;
L_10ad06d1:;
  /* 10ad06d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10ad06d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad06d5 mov edx, dword ptr [0x10aef858] */
  EDX = (r32((uint32_t)(0x10aef858)));
  /* 10ad06db push edx */
  push32((uint32_t)(EDX));
  /* 10ad06dc call 0x10ad2700 */
  push32(0x10ad06e1u); f_10ad2700();
  /* 10ad06e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad06e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad06e6 jne 0x10ad0719 */
  if (!C.zf) goto L_10ad0719;
  /* 10ad06e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad06eb push eax */
  push32((uint32_t)(EAX));
  /* 10ad06ec call 0x10ad0800 */
  push32(0x10ad06f1u); f_10ad0800();
  /* 10ad06f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad06f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad06f6 je 0x10ad0719 */
  if (C.zf) goto L_10ad0719;
  /* 10ad06f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ad06fb mov dword ptr [0x10aef860], ecx */
  w32((uint32_t)(0x10aef860), (ECX));
  /* 10ad0701 mov edx, dword ptr [0x10aef860] */
  EDX = (r32((uint32_t)(0x10aef860)));
  /* 10ad0707 mov dword ptr [0x10aef844], edx */
  w32((uint32_t)(0x10aef844), (EDX));
  /* 10ad070d mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0712 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10ad0714 mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
L_10ad0719:;
  /* 10ad0719 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad071e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0721 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ad0723 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0725 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10ad0726:;
  /* 10ad0726 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0728 pop ebp */
  EBP = (pop32());
  /* 10ad0729 ret 4 */
  ESPCHK(0x10ad0680u, _esp0);
  ESP += 8; return;
}

/* FUN_10010730 @ 0x10ad0730 (43 bytes, 11 insns) */
void f_10ad0730(void) {
  FTRACE(0x10ad0730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0730 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0731 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0733 mov eax, dword ptr [0x10aef85c] */
  EAX = (r32((uint32_t)(0x10aef85c)));
  /* 10ad0738 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10ad073d mov dword ptr [0x10aef85c], eax */
  w32((uint32_t)(0x10aef85c), (EAX));
  /* 10ad0742 call dword ptr [0x10af2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2294))), 0x10ad0748u);
  /* 10ad0748 mov dword ptr [0x10aef860], eax */
  w32((uint32_t)(0x10aef860), (EAX));
  /* 10ad074d mov ecx, dword ptr [0x10aef860] */
  ECX = (r32((uint32_t)(0x10aef860)));
  /* 10ad0753 mov dword ptr [0x10aef844], ecx */
  w32((uint32_t)(0x10aef844), (ECX));
  /* 10ad0759 pop ebp */
  EBP = (pop32());
  /* 10ad075a ret  */
  ESPCHK(0x10ad0730u, _esp0);
  ESP += 4; return;
}

/* FUN_10010760 @ 0x10ad0760 (155 bytes, 57 insns) */
void f_10ad0760(void) {
  FTRACE(0x10ad0760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0760 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0761 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0766 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad076a je 0x10ad078b */
  if (C.zf) goto L_10ad078b;
  /* 10ad076c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad076f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ad0772 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad0774 je 0x10ad078b */
  if (C.zf) goto L_10ad078b;
  /* 10ad0776 push 0x10aeb89c */
  push32((uint32_t)(0x10aeb89cu));
  /* 10ad077b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad077e push edx */
  push32((uint32_t)(EDX));
  /* 10ad077f call 0x10acfcc0 */
  push32(0x10ad0784u); f_10acfcc0();
  /* 10ad0784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0789 jne 0x10ad07b3 */
  if (!C.zf) goto L_10ad07b3;
L_10ad078b:;
  /* 10ad078b push 8 */
  push32((uint32_t)(0x8u));
  /* 10ad078d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ad0790 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0791 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10ad0796 mov ecx, dword ptr [0x10aef860] */
  ECX = (r32((uint32_t)(0x10aef860)));
  /* 10ad079c push ecx */
  push32((uint32_t)(ECX));
  /* 10ad079d call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad07a3u);
  /* 10ad07a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad07a5 jne 0x10ad07ab */
  if (!C.zf) goto L_10ad07ab;
  /* 10ad07a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad07a9 jmp 0x10ad07f7 */
  goto L_10ad07f7;
L_10ad07ab:;
  /* 10ad07ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10ad07ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ad07b1 jmp 0x10ad07eb */
  goto L_10ad07eb;
L_10ad07b3:;
  /* 10ad07b3 push 0x10aeb898 */
  push32((uint32_t)(0x10aeb898u));
  /* 10ad07b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad07bb push eax */
  push32((uint32_t)(EAX));
  /* 10ad07bc call 0x10acfcc0 */
  push32(0x10ad07c1u); f_10acfcc0();
  /* 10ad07c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad07c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad07c6 jne 0x10ad07eb */
  if (!C.zf) goto L_10ad07eb;
  /* 10ad07c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ad07ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ad07cd push ecx */
  push32((uint32_t)(ECX));
  /* 10ad07ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ad07d0 mov edx, dword ptr [0x10aef860] */
  EDX = (r32((uint32_t)(0x10aef860)));
  /* 10ad07d6 push edx */
  push32((uint32_t)(EDX));
  /* 10ad07d7 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad07ddu);
  /* 10ad07dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad07df jne 0x10ad07e5 */
  if (!C.zf) goto L_10ad07e5;
  /* 10ad07e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad07e3 jmp 0x10ad07f7 */
  goto L_10ad07f7;
L_10ad07e5:;
  /* 10ad07e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ad07e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10ad07eb:;
  /* 10ad07eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad07ee push ecx */
  push32((uint32_t)(ECX));
  /* 10ad07ef call 0x10ad28e0 */
  push32(0x10ad07f4u); f_10ad28e0();
  /* 10ad07f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ad07f7:;
  /* 10ad07f7 mov esp, ebp */
  ESP = (EBP);
  /* 10ad07f9 pop ebp */
  EBP = (pop32());
  /* 10ad07fa ret  */
  ESPCHK(0x10ad0760u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x10ad0800 (79 bytes, 26 insns) */
void f_10ad0800(void) {
  FTRACE(0x10ad0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0800 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0801 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0806 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10ad080a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ad080e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ad0815 jmp 0x10ad0820 */
  goto L_10ad0820;
L_10ad0817:;
  /* 10ad0817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad081a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad081d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ad0820:;
  /* 10ad0820 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0824 jae 0x10ad0846 */
  if (!C.cf) goto L_10ad0846;
  /* 10ad0826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0829 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad082f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad0832 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ad0834 mov cx, word ptr [eax*2 + 0x10aee9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10aee9c4)));
  /* 10ad083c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad083e jne 0x10ad0844 */
  if (!C.zf) goto L_10ad0844;
  /* 10ad0840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0842 jmp 0x10ad084b */
  goto L_10ad084b;
L_10ad0844:;
  /* 10ad0844 jmp 0x10ad0817 */
  goto L_10ad0817;
L_10ad0846:;
  /* 10ad0846 mov eax, 1 */
  EAX = (0x1u);
L_10ad084b:;
  /* 10ad084b mov esp, ebp */
  ESP = (EBP);
  /* 10ad084d pop ebp */
  EBP = (pop32());
  /* 10ad084e ret  */
  ESPCHK(0x10ad0800u, _esp0);
  ESP += 4; return;
}

/* FUN_10010850 @ 0x10ad0850 (135 bytes, 48 insns) */
void f_10ad0850(void) {
  FTRACE(0x10ad0850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0850 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0851 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0853 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0856 push esi */
  push32((uint32_t)(ESI));
  /* 10ad0857 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad085a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad085f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0864 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0869 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10ad086c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0871 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad0874 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10ad0876 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10ad0879 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad087a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad087c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad087f push edx */
  push32((uint32_t)(EDX));
  /* 10ad0880 call dword ptr [0x10aef864] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aef864))), 0x10ad0886u);
  /* 10ad0886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0888 jne 0x10ad088e */
  if (!C.zf) goto L_10ad088e;
  /* 10ad088a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad088c jmp 0x10ad08d2 */
  goto L_10ad08d2;
L_10ad088e:;
  /* 10ad088e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10ad0891 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0892 call 0x10ad0ac0 */
  push32(0x10ad0897u); f_10ad0ac0();
  /* 10ad0897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad089a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad089d je 0x10ad08cd */
  if (C.zf) goto L_10ad08cd;
  /* 10ad089f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad08a3 je 0x10ad08cd */
  if (C.zf) goto L_10ad08cd;
  /* 10ad08a5 mov ecx, dword ptr [0x10aef854] */
  ECX = (r32((uint32_t)(0x10aef854)));
  /* 10ad08ab push ecx */
  push32((uint32_t)(ECX));
  /* 10ad08ac call 0x10ad0b40 */
  push32(0x10ad08b1u); f_10ad0b40();
  /* 10ad08b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad08b4 mov esi, eax */
  ESI = (EAX);
  /* 10ad08b6 mov edx, dword ptr [0x10aef854] */
  EDX = (r32((uint32_t)(0x10aef854)));
  /* 10ad08bc push edx */
  push32((uint32_t)(EDX));
  /* 10ad08bd call 0x10ac6e60 */
  push32(0x10ad08c2u); f_10ac6e60();
  /* 10ad08c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad08c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad08c7 jne 0x10ad08cd */
  if (!C.zf) goto L_10ad08cd;
  /* 10ad08c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad08cb jmp 0x10ad08d2 */
  goto L_10ad08d2;
L_10ad08cd:;
  /* 10ad08cd mov eax, 1 */
  EAX = (0x1u);
L_10ad08d2:;
  /* 10ad08d2 pop esi */
  ESI = (pop32());
  /* 10ad08d3 mov esp, ebp */
  ESP = (EBP);
  /* 10ad08d5 pop ebp */
  EBP = (pop32());
  /* 10ad08d6 ret  */
  ESPCHK(0x10ad0850u, _esp0);
  ESP += 4; return;
}

/* FUN_100108e0 @ 0x10ad08e0 (77 bytes, 18 insns) */
void f_10ad08e0(void) {
  FTRACE(0x10ad08e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad08e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad08e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad08e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad08e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10ad08f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10ad08f9 push eax */
  push32((uint32_t)(EAX));
  /* 10ad08fa call dword ptr [0x10af2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2290))), 0x10ad0900u);
  /* 10ad0900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0902 je 0x10ad0919 */
  if (C.zf) goto L_10ad0919;
  /* 10ad0904 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad090b jne 0x10ad0919 */
  if (!C.zf) goto L_10ad0919;
  /* 10ad090d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10ad0917 jmp 0x10ad0923 */
  goto L_10ad0923;
L_10ad0919:;
  /* 10ad0919 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10ad0923:;
  /* 10ad0923 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10ad0929 mov esp, ebp */
  ESP = (EBP);
  /* 10ad092b pop ebp */
  EBP = (pop32());
  /* 10ad092c ret  */
  ESPCHK(0x10ad08e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10ad0930 (388 bytes, 118 insns) */
void f_10ad0930(void) {
  FTRACE(0x10ad0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0930 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0931 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0933 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0936 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad093d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10ad0944 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ad094b:;
  /* 10ad094b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad094e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0951 jg 0x10ad0a98 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad0a98;
  /* 10ad0957 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad095a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad095d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ad095e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0960 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ad0962 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad0965 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0968 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad096b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad096e cmp edx, dword ptr [ecx + 0x10aee520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10aee520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0974 jne 0x10ad0a6e */
  if (!C.zf) goto L_10ad0a6e;
  /* 10ad097a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad097d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad0980 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0984 ja 0x10ad09a7 */
  if ((!C.cf&&!C.zf)) goto L_10ad09a7;
  /* 10ad0986 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad098a je 0x10ad0a19 */
  if (C.zf) goto L_10ad0a19;
  /* 10ad0990 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0994 je 0x10ad09c4 */
  if (C.zf) goto L_10ad09c4;
  /* 10ad0996 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad099a je 0x10ad09e6 */
  if (C.zf) goto L_10ad09e6;
  /* 10ad099c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad09a0 je 0x10ad0a08 */
  if (C.zf) goto L_10ad0a08;
  /* 10ad09a2 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad09a7:;
  /* 10ad09a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad09ae je 0x10ad09d5 */
  if (C.zf) goto L_10ad09d5;
  /* 10ad09b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad09b7 je 0x10ad09f7 */
  if (C.zf) goto L_10ad09f7;
  /* 10ad09b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad09c0 je 0x10ad0a2a */
  if (C.zf) goto L_10ad0a2a;
  /* 10ad09c2 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad09c4:;
  /* 10ad09c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad09c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad09ca add ecx, 0x10aee524 */
  { uint32_t _a=(ECX),_b=(0x10aee524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad09d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad09d3 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad09d5:;
  /* 10ad09d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad09d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad09db mov eax, dword ptr [edx + 0x10aee52c] */
  EAX = (r32((uint32_t)(EDX + 0x10aee52c)));
  /* 10ad09e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad09e4 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad09e6:;
  /* 10ad09e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad09e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad09ec add ecx, 0x10aee530 */
  { uint32_t _a=(ECX),_b=(0x10aee530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad09f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad09f5 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad09f7:;
  /* 10ad09f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad09fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad09fd mov eax, dword ptr [edx + 0x10aee534] */
  EAX = (r32((uint32_t)(EDX + 0x10aee534)));
  /* 10ad0a03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ad0a06 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad0a08:;
  /* 10ad0a08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0a0b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad0a0e add ecx, 0x10aee538 */
  { uint32_t _a=(ECX),_b=(0x10aee538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0a14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad0a17 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad0a19:;
  /* 10ad0a19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0a1c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad0a1f add edx, 0x10aee53c */
  { uint32_t _a=(EDX),_b=(0x10aee53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0a25 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad0a28 jmp 0x10ad0a38 */
  goto L_10ad0a38;
L_10ad0a2a:;
  /* 10ad0a2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0a2d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad0a30 add eax, 0x10aee544 */
  { uint32_t _a=(EAX),_b=(0x10aee544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0a35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ad0a38:;
  /* 10ad0a38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0a3c je 0x10ad0a44 */
  if (C.zf) goto L_10ad0a44;
  /* 10ad0a3e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0a42 jge 0x10ad0a46 */
  if ((C.sf==C.of)) goto L_10ad0a46;
L_10ad0a44:;
  /* 10ad0a44 jmp 0x10ad0a98 */
  goto L_10ad0a98;
L_10ad0a46:;
  /* 10ad0a46 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad0a49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0a4c push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0a4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad0a50 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0a51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad0a54 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0a55 call 0x10ac7850 */
  push32(0x10ad0a5au); f_10ac7850();
  /* 10ad0a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0a5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad0a60 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0a63 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10ad0a67 mov eax, 1 */
  EAX = (0x1u);
  /* 10ad0a6c jmp 0x10ad0aae */
  goto L_10ad0aae;
L_10ad0a6e:;
  /* 10ad0a6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0a71 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad0a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0a77 cmp eax, dword ptr [edx + 0x10aee520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10aee520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0a7d jae 0x10ad0a8a */
  if (!C.cf) goto L_10ad0a8a;
  /* 10ad0a7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0a82 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0a85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ad0a88 jmp 0x10ad0a93 */
  goto L_10ad0a93;
L_10ad0a8a:;
  /* 10ad0a8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0a8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0a90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ad0a93:;
  /* 10ad0a93 jmp 0x10ad094b */
  goto L_10ad094b;
L_10ad0a98:;
  /* 10ad0a98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ad0a9b push eax */
  push32((uint32_t)(EAX));
  /* 10ad0a9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ad0a9f push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0aa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ad0aa3 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0aa7 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0aa8 call dword ptr [0x10af229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af229c))), 0x10ad0aaeu);
L_10ad0aae:;
  /* 10ad0aae mov esp, ebp */
  ESP = (EBP);
  /* 10ad0ab0 pop ebp */
  EBP = (pop32());
  /* 10ad0ab1 ret 0x10 */
  ESPCHK(0x10ad0930u, _esp0);
  ESP += 20; return;
}

/* FUN_10010ac0 @ 0x10ad0ac0 (118 bytes, 42 insns) */
void f_10ad0ac0(void) {
  FTRACE(0x10ad0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0ac6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ad0acd:;
  /* 10ad0acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0ad0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad0ad2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ad0ad5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad0ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0adc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0adf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ad0ae2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad0ae4 je 0x10ad0b2f */
  if (C.zf) goto L_10ad0b2f;
  /* 10ad0ae6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad0aea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0aed jl 0x10ad0b02 */
  if ((C.sf!=C.of)) goto L_10ad0b02;
  /* 10ad0aef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad0af3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0af6 jg 0x10ad0b02 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad0b02;
  /* 10ad0af8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ad0afb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ad0afd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10ad0b00 jmp 0x10ad0b1c */
  goto L_10ad0b1c;
L_10ad0b02:;
  /* 10ad0b02 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad0b06 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0b09 jl 0x10ad0b1c */
  if ((C.sf!=C.of)) goto L_10ad0b1c;
  /* 10ad0b0b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad0b0f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0b12 jg 0x10ad0b1c */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad0b1c;
  /* 10ad0b14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ad0b17 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ad0b19 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10ad0b1c:;
  /* 10ad0b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0b1f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10ad0b22 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ad0b26 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ad0b2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad0b2d jmp 0x10ad0acd */
  goto L_10ad0acd;
L_10ad0b2f:;
  /* 10ad0b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0b32 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0b34 pop ebp */
  EBP = (pop32());
  /* 10ad0b35 ret  */
  ESPCHK(0x10ad0ac0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10ad0b40 (101 bytes, 36 insns) */
void f_10ad0b40(void) {
  FTRACE(0x10ad0b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0b41 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0b46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ad0b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0b50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ad0b52 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10ad0b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0b58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0b5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10ad0b5e:;
  /* 10ad0b5e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10ad0b62 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0b65 jl 0x10ad0b70 */
  if ((C.sf!=C.of)) goto L_10ad0b70;
  /* 10ad0b67 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10ad0b6b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0b6e jle 0x10ad0b82 */
  if ((C.zf||C.sf!=C.of)) goto L_10ad0b82;
L_10ad0b70:;
  /* 10ad0b70 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10ad0b74 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0b77 jl 0x10ad0b9e */
  if ((C.sf!=C.of)) goto L_10ad0b9e;
  /* 10ad0b79 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10ad0b7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0b80 jg 0x10ad0b9e */
  if ((!C.zf&&C.sf==C.of)) goto L_10ad0b9e;
L_10ad0b82:;
  /* 10ad0b82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad0b85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0b88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ad0b8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0b8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ad0b90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10ad0b93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0b96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0b99 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ad0b9c jmp 0x10ad0b5e */
  goto L_10ad0b5e;
L_10ad0b9e:;
  /* 10ad0b9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad0ba1 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0ba3 pop ebp */
  EBP = (pop32());
  /* 10ad0ba4 ret  */
  ESPCHK(0x10ad0b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x10ad0bb0 (122 bytes, 39 insns) */
void f_10ad0bb0(void) {
  FTRACE(0x10ad0bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0bb7 cmp eax, dword ptr [0x10af10fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10af10fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0bbd jae 0x10ad0be1 */
  if (!C.cf) goto L_10ad0be1;
  /* 10ad0bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0bc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10ad0bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0bc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ad0bcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad0bce mov eax, dword ptr [ecx*4 + 0x10af0fc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10af0fc0)));
  /* 10ad0bd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10ad0bda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad0bdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad0bdf jne 0x10ad0bfc */
  if (!C.zf) goto L_10ad0bfc;
L_10ad0be1:;
  /* 10ad0be1 call 0x10acbf00 */
  push32(0x10ad0be6u); f_10acbf00();
  /* 10ad0be6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10ad0bec call 0x10acbf10 */
  push32(0x10ad0bf1u); f_10acbf10();
  /* 10ad0bf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ad0bf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0bfa jmp 0x10ad0c26 */
  goto L_10ad0c26;
L_10ad0bfc:;
  /* 10ad0bfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0bff push edx */
  push32((uint32_t)(EDX));
  /* 10ad0c00 call 0x10acd720 */
  push32(0x10ad0c05u); f_10acd720();
  /* 10ad0c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0c0b push eax */
  push32((uint32_t)(EAX));
  /* 10ad0c0c call 0x10ad0c30 */
  push32(0x10ad0c11u); f_10ad0c30();
  /* 10ad0c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad0c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0c1a push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0c1b call 0x10acd7b0 */
  push32(0x10ad0c20u); f_10acd7b0();
  /* 10ad0c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ad0c26:;
  /* 10ad0c26 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0c28 pop ebp */
  EBP = (pop32());
  /* 10ad0c29 ret  */
  ESPCHK(0x10ad0bb0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10ad0c30 (170 bytes, 59 insns) */
void f_10ad0c30(void) {
  FTRACE(0x10ad0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0c31 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0c34 push esi */
  push32((uint32_t)(ESI));
  /* 10ad0c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0c38 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0c39 call 0x10acd5a0 */
  push32(0x10ad0c3eu); f_10acd5a0();
  /* 10ad0c3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c41 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0c44 je 0x10ad0c83 */
  if (C.zf) goto L_10ad0c83;
  /* 10ad0c46 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0c4a je 0x10ad0c52 */
  if (C.zf) goto L_10ad0c52;
  /* 10ad0c4c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0c50 jne 0x10ad0c6c */
  if (!C.zf) goto L_10ad0c6c;
L_10ad0c52:;
  /* 10ad0c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ad0c54 call 0x10acd5a0 */
  push32(0x10ad0c59u); f_10acd5a0();
  /* 10ad0c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c5c mov esi, eax */
  ESI = (EAX);
  /* 10ad0c5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad0c60 call 0x10acd5a0 */
  push32(0x10ad0c65u); f_10acd5a0();
  /* 10ad0c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c68 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0c6a je 0x10ad0c83 */
  if (C.zf) goto L_10ad0c83;
L_10ad0c6c:;
  /* 10ad0c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0c6f push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0c70 call 0x10acd5a0 */
  push32(0x10ad0c75u); f_10acd5a0();
  /* 10ad0c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0c78 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0c79 call dword ptr [0x10af2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2298))), 0x10ad0c7fu);
  /* 10ad0c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0c81 je 0x10ad0c8c */
  if (C.zf) goto L_10ad0c8c;
L_10ad0c83:;
  /* 10ad0c83 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ad0c8a jmp 0x10ad0c95 */
  goto L_10ad0c95;
L_10ad0c8c:;
  /* 10ad0c8c call dword ptr [0x10af2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10af2338))), 0x10ad0c92u);
  /* 10ad0c92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ad0c95:;
  /* 10ad0c95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0c98 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0c99 call 0x10acd4c0 */
  push32(0x10ad0c9eu); f_10acd4c0();
  /* 10ad0c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0ca4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ad0ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0caa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10ad0cad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ad0cb0 mov edx, dword ptr [eax*4 + 0x10af0fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10af0fc0)));
  /* 10ad0cb7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10ad0cbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0cc0 je 0x10ad0cd3 */
  if (C.zf) goto L_10ad0cd3;
  /* 10ad0cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0cc5 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0cc6 call 0x10acbe60 */
  push32(0x10ad0ccbu); f_10acbe60();
  /* 10ad0ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0cce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0cd1 jmp 0x10ad0cd5 */
  goto L_10ad0cd5;
L_10ad0cd3:;
  /* 10ad0cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ad0cd5:;
  /* 10ad0cd5 pop esi */
  ESI = (pop32());
  /* 10ad0cd6 mov esp, ebp */
  ESP = (EBP);
  /* 10ad0cd8 pop ebp */
  EBP = (pop32());
  /* 10ad0cd9 ret  */
  ESPCHK(0x10ad0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x10ad0ce0 (146 bytes, 52 insns) */
void f_10ad0ce0(void) {
  FTRACE(0x10ad0ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ad0ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10ad0ce5 push edi */
  push32((uint32_t)(EDI));
L_10ad0ce6:;
  /* 10ad0ce6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0cea jne 0x10ad0d0a */
  if (!C.zf) goto L_10ad0d0a;
  /* 10ad0cec push 0x10aeb1d8 */
  push32((uint32_t)(0x10aeb1d8u));
  /* 10ad0cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ad0cf3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10ad0cf5 push 0x10aeb8a0 */
  push32((uint32_t)(0x10aeb8a0u));
  /* 10ad0cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad0cfc call 0x10ac30f0 */
  push32(0x10ad0d01u); f_10ac30f0();
  /* 10ad0d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0d04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0d07 jne 0x10ad0d0a */
  if (!C.zf) goto L_10ad0d0a;
  /* 10ad0d09 int3  */
  x86_unimpl("int3 @ 0x10ad0d09");
L_10ad0d0a:;
  /* 10ad0d0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ad0d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ad0d0e jne 0x10ad0ce6 */
  if (!C.zf) goto L_10ad0ce6;
  /* 10ad0d10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d13 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ad0d16 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad0d1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ad0d1e je 0x10ad0d6d */
  if (C.zf) goto L_10ad0d6d;
  /* 10ad0d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d23 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ad0d26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ad0d29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ad0d2b je 0x10ad0d6d */
  if (C.zf) goto L_10ad0d6d;
  /* 10ad0d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ad0d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ad0d35 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0d36 call 0x10ac4ac0 */
  push32(0x10ad0d3bu); f_10ac4ac0();
  /* 10ad0d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d41 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ad0d44 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10ad0d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d4d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ad0d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d53 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10ad0d59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d5c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ad0d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ad0d66 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10ad0d6d:;
  /* 10ad0d6d pop edi */
  EDI = (pop32());
  /* 10ad0d6e pop esi */
  ESI = (pop32());
  /* 10ad0d6f pop ebx */
  EBX = (pop32());
  /* 10ad0d70 pop ebp */
  EBP = (pop32());
  /* 10ad0d71 ret  */
  ESPCHK(0x10ad0ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d80 @ 0x10ad0d80 (289 bytes, 97 insns) */
void f_10ad0d80(void) {
  FTRACE(0x10ad0d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0d81 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0d86 push esi */
  push32((uint32_t)(ESI));
  /* 10ad0d87 mov eax, dword ptr [0x10aeec98] */
  EAX = (r32((uint32_t)(0x10aeec98)));
  /* 10ad0d8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad0d8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ad0d96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad0d9d jmp 0x10ad0da8 */
  goto L_10ad0da8;
L_10ad0d9f:;
  /* 10ad0d9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0da2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0da5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ad0da8:;
  /* 10ad0da8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0dac jae 0x10ad0de1 */
  if (!C.cf) goto L_10ad0de1;
  /* 10ad0dae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0db1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0db4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10ad0db7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0db8 call 0x10ac6e60 */
  push32(0x10ad0dbdu); f_10ac6e60();
  /* 10ad0dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0dc0 mov esi, eax */
  ESI = (EAX);
  /* 10ad0dc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0dc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0dc8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10ad0dcc push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0dcd call 0x10ac6e60 */
  push32(0x10ad0dd2u); f_10ac6e60();
  /* 10ad0dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0dd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0dd8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10ad0ddc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad0ddf jmp 0x10ad0d9f */
  goto L_10ad0d9f;
L_10ad0de1:;
  /* 10ad0de1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad0de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0de7 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0de8 call 0x10ac4010 */
  push32(0x10ad0dedu); f_10ac4010();
  /* 10ad0ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0df0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad0df3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0df7 je 0x10ad0e99 */
  if (C.zf) goto L_10ad0e99;
  /* 10ad0dfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0e00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad0e03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad0e0a jmp 0x10ad0e15 */
  goto L_10ad0e15;
L_10ad0e0c:;
  /* 10ad0e0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0e0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ad0e15:;
  /* 10ad0e15 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0e19 jae 0x10ad0e8a */
  if (!C.cf) goto L_10ad0e8a;
  /* 10ad0e1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e1e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10ad0e21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e27 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad0e2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0e2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0e30 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10ad0e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0e34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e37 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0e38 call 0x10ac6fe0 */
  push32(0x10ad0e3du); f_10ac6fe0();
  /* 10ad0e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e40 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0e41 call 0x10ac6e60 */
  push32(0x10ad0e46u); f_10ac6e60();
  /* 10ad0e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e4e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad0e51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e54 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10ad0e57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad0e60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0e63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0e66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10ad0e6a push eax */
  push32((uint32_t)(EAX));
  /* 10ad0e6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e6e push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0e6f call 0x10ac6fe0 */
  push32(0x10ad0e74u); f_10ac6fe0();
  /* 10ad0e74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e77 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0e78 call 0x10ac6e60 */
  push32(0x10ad0e7du); f_10ac6e60();
  /* 10ad0e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e85 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad0e88 jmp 0x10ad0e0c */
  goto L_10ad0e0c;
L_10ad0e8a:;
  /* 10ad0e8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e8d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ad0e90 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0e93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0e96 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ad0e99:;
  /* 10ad0e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0e9c pop esi */
  ESI = (pop32());
  /* 10ad0e9d mov esp, ebp */
  ESP = (EBP);
  /* 10ad0e9f pop ebp */
  EBP = (pop32());
  /* 10ad0ea0 ret  */
  ESPCHK(0x10ad0d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x10ad0eb0 (291 bytes, 97 insns) */
void f_10ad0eb0(void) {
  FTRACE(0x10ad0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ad0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ad0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ad0eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ad0eb6 push esi */
  push32((uint32_t)(ESI));
  /* 10ad0eb7 mov eax, dword ptr [0x10aeec98] */
  EAX = (r32((uint32_t)(0x10aeec98)));
  /* 10ad0ebc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ad0ebf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ad0ec6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad0ecd jmp 0x10ad0ed8 */
  goto L_10ad0ed8;
L_10ad0ecf:;
  /* 10ad0ecf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0ed2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0ed5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10ad0ed8:;
  /* 10ad0ed8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0edc jae 0x10ad0f12 */
  if (!C.cf) goto L_10ad0f12;
  /* 10ad0ede mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0ee1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0ee4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10ad0ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0ee9 call 0x10ac6e60 */
  push32(0x10ad0eeeu); f_10ac6e60();
  /* 10ad0eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0ef1 mov esi, eax */
  ESI = (EAX);
  /* 10ad0ef3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0ef6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0ef9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10ad0efd push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0efe call 0x10ac6e60 */
  push32(0x10ad0f03u); f_10ac6e60();
  /* 10ad0f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f06 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f09 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10ad0f0d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ad0f10 jmp 0x10ad0ecf */
  goto L_10ad0ecf;
L_10ad0f12:;
  /* 10ad0f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ad0f15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f18 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0f19 call 0x10ac4010 */
  push32(0x10ad0f1eu); f_10ac4010();
  /* 10ad0f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ad0f24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0f28 je 0x10ad0fcb */
  if (C.zf) goto L_10ad0fcb;
  /* 10ad0f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0f31 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad0f34 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ad0f3b jmp 0x10ad0f46 */
  goto L_10ad0f46;
L_10ad0f3d:;
  /* 10ad0f3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0f40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ad0f46:;
  /* 10ad0f46 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ad0f4a jae 0x10ad0fbc */
  if (!C.cf) goto L_10ad0fbc;
  /* 10ad0f4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0f4f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10ad0f52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f58 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad0f5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0f61 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10ad0f65 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0f66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0f69 push edx */
  push32((uint32_t)(EDX));
  /* 10ad0f6a call 0x10ac6fe0 */
  push32(0x10ad0f6fu); f_10ac6fe0();
  /* 10ad0f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f72 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0f73 call 0x10ac6e60 */
  push32(0x10ad0f78u); f_10ac6e60();
  /* 10ad0f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0f7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ad0f83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0f86 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10ad0f89 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0f8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0f8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ad0f92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ad0f95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ad0f98 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10ad0f9c push eax */
  push32((uint32_t)(EAX));
  /* 10ad0f9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ad0fa1 call 0x10ac6fe0 */
  push32(0x10ad0fa6u); f_10ac6fe0();
  /* 10ad0fa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10ad0faa call 0x10ac6e60 */
  push32(0x10ad0fafu); f_10ac6e60();
  /* 10ad0faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0fb2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0fb5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0fb7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ad0fba jmp 0x10ad0f3d */
  goto L_10ad0f3d;
L_10ad0fbc:;
  /* 10ad0fbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0fbf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ad0fc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ad0fc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ad0fc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ad0fcb:;
  /* 10ad0fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ad0fce pop esi */
  ESI = (pop32());
  /* 10ad0fcf mov esp, ebp */
  ESP = (EBP);
  /* 10ad0fd1 pop ebp */
  EBP = (pop32());
  /* 10ad0fd2 ret  */
  ESPCHK(0x10ad0eb0u, _esp0);
  ESP += 4; return;
}

