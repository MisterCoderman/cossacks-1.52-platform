#include "recomp.h"

/* FUN_10009260 @ 0x11fd9260 (7 bytes, 4 insns) */
void f_11fd9260(void) {
  FTRACE(0x11fd9260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9260 pop eax */
  EAX = (pop32());
  /* 11fd9261 pop ecx */
  ECX = (pop32());
  /* 11fd9262 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11fd9265 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009270 @ 0x11fd9270 (7 bytes, 4 insns) */
void f_11fd9270(void) {
  FTRACE(0x11fd9270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9270 pop eax */
  EAX = (pop32());
  /* 11fd9271 pop ecx */
  ECX = (pop32());
  /* 11fd9272 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11fd9275 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009280 @ 0x11fd9280 (86 bytes, 32 insns) */
void f_11fd9280(void) {
  FTRACE(0x11fd9280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9280 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9281 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9286 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9287 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9288 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9289 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fd928f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fd9292 mov dword ptr [ebp - 4], 0x11fd92ac */
  w32((uint32_t)(EBP + -0x4), (0x11fd92acu));
  /* 11fd9299 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd929b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd929e push eax */
  push32((uint32_t)(EAX));
  /* 11fd929f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd92a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd92a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd92a6 push edx */
  push32((uint32_t)(EDX));
  /* 11fd92a7 call 0x11ff077c */
  push32(0x11fd92acu); f_11ff077c();
  /* 11fd92ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd92af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd92b2 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd92b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd92b8 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fd92bb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fd92c1 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd92c4 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11fd92c6 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11fd92cd pop edi */
  EDI = (pop32());
  /* 11fd92ce pop esi */
  ESI = (pop32());
  /* 11fd92cf pop ebx */
  EBX = (pop32());
  /* 11fd92d0 mov esp, ebp */
  ESP = (EBP);
  /* 11fd92d2 pop ebp */
  EBP = (pop32());
  /* 11fd92d3 ret 8 */
  ESPCHK(0x11fd9280u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x11fd92e0 (60 bytes, 31 insns) */
void f_11fd92e0(void) {
  FTRACE(0x11fd92e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd92e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd92e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd92e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd92e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd92e7 push esi */
  push32((uint32_t)(ESI));
  /* 11fd92e8 push edi */
  push32((uint32_t)(EDI));
  /* 11fd92e9 cld  */
  C.df=0;
  /* 11fd92ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fd92ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd92ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd92f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd92f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd92f6 push eax */
  push32((uint32_t)(EAX));
  /* 11fd92f7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd92fa push ecx */
  push32((uint32_t)(ECX));
  /* 11fd92fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd92fe push edx */
  push32((uint32_t)(EDX));
  /* 11fd92ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9302 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9303 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9306 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9307 call 0x11fdd130 */
  push32(0x11fd930cu); f_11fdd130();
  /* 11fd930c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd930f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd9312 pop edi */
  EDI = (pop32());
  /* 11fd9313 pop esi */
  ESI = (pop32());
  /* 11fd9314 pop ebx */
  EBX = (pop32());
  /* 11fd9315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9318 mov esp, ebp */
  ESP = (EBP);
  /* 11fd931a pop ebp */
  EBP = (pop32());
  /* 11fd931b ret  */
  ESPCHK(0x11fd92e0u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x11fd9320 (38 bytes, 16 insns) */
void f_11fd9320(void) {
  FTRACE(0x11fd9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9320 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9321 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9326 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fd9329 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd932a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd932d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11fd9330 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9331 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd9333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9336 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fd9339 push edx */
  push32((uint32_t)(EDX));
  /* 11fd933a call 0x11fdd6a0 */
  push32(0x11fd933fu); f_11fdd6a0();
  /* 11fd933f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9342 pop ebp */
  EBP = (pop32());
  /* 11fd9343 ret 4 */
  ESPCHK(0x11fd9320u, _esp0);
  ESP += 8; return;
}

/* FUN_10009350 @ 0x11fd9350 (104 bytes, 36 insns) */
void f_11fd9350(void) {
  FTRACE(0x11fd9350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9350 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9351 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9353 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9356 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9357 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9358 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9359 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fd9360 mov dword ptr [ebp - 0x10], 0x11fd93c0 */
  w32((uint32_t)(EBP + -0x10), (0x11fd93c0u));
  /* 11fd9367 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd936a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fd936d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9370 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fd9373 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd9376 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9379 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fd937c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fd9382 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fd9385 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11fd938b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11fd9391 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fd9394 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9398 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9399 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd939c push edx */
  push32((uint32_t)(EDX));
  /* 11fd939d call 0x11fddd90 */
  push32(0x11fd93a2u); f_11fddd90();
  /* 11fd93a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fd93a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fd93a8 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11fd93ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fd93b1 pop edi */
  EDI = (pop32());
  /* 11fd93b2 pop esi */
  ESI = (pop32());
  /* 11fd93b3 pop ebx */
  EBX = (pop32());
  /* 11fd93b4 mov esp, ebp */
  ESP = (EBP);
  /* 11fd93b6 pop ebp */
  EBP = (pop32());
  /* 11fd93b7 ret  */
  ESPCHK(0x11fd9350u, _esp0);
  ESP += 4; return;
}

/* FUN_100093c0 @ 0x11fd93c0 (57 bytes, 30 insns) */
void f_11fd93c0(void) {
  FTRACE(0x11fd93c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd93c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd93c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd93c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd93c4 push esi */
  push32((uint32_t)(ESI));
  /* 11fd93c5 push edi */
  push32((uint32_t)(EDI));
  /* 11fd93c6 cld  */
  C.df=0;
  /* 11fd93c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd93c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd93cc push eax */
  push32((uint32_t)(EAX));
  /* 11fd93cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd93d0 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fd93d3 push edx */
  push32((uint32_t)(EDX));
  /* 11fd93d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd93d7 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fd93da push ecx */
  push32((uint32_t)(ECX));
  /* 11fd93db push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd93dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd93e0 push edx */
  push32((uint32_t)(EDX));
  /* 11fd93e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd93e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fd93e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd93e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd93eb push edx */
  push32((uint32_t)(EDX));
  /* 11fd93ec call 0x11fdd130 */
  push32(0x11fd93f1u); f_11fdd130();
  /* 11fd93f1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd93f4 pop edi */
  EDI = (pop32());
  /* 11fd93f5 pop esi */
  ESI = (pop32());
  /* 11fd93f6 pop ebx */
  EBX = (pop32());
  /* 11fd93f7 pop ebp */
  EBP = (pop32());
  /* 11fd93f8 ret  */
  ESPCHK(0x11fd93c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009400 @ 0x11fd9400 (204 bytes, 58 insns) */
void f_11fd9400(void) {
  FTRACE(0x11fd9400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9400 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9401 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9403 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9406 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9407 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9408 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9409 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11fd9410 mov dword ptr [ebp - 0x24], 0x11fd94d0 */
  w32((uint32_t)(EBP + -0x24), (0x11fd94d0u));
  /* 11fd9417 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fd941a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fd941d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9420 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11fd9423 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fd9426 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fd9429 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fd942c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fd942f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fd9436 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fd943d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fd9444 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fd944b mov dword ptr [ebp - 0x10], 0x11fd949c */
  w32((uint32_t)(EBP + -0x10), (0x11fd949cu));
  /* 11fd9452 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11fd9455 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11fd9458 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fd945e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fd9461 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11fd9467 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11fd946d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11fd9474 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9477 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11fd947a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd947d mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11fd9480 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11fd9483 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9487 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fd9489 push edx */
  push32((uint32_t)(EDX));
  /* 11fd948a call 0x11fddec0 */
  push32(0x11fd948fu); f_11fddec0();
  /* 11fd948f call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11fd9492u);
  /* 11fd9492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9495 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11fd949c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd94a0 je 0x11fd94b9 */
  if (C.zf) goto L_11fd94b9;
  /* 11fd94a2 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11fd94a9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11fd94ab mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fd94ae mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11fd94b0 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11fd94b7 jmp 0x11fd94c2 */
  goto L_11fd94c2;
L_11fd94b9:;
  /* 11fd94b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fd94bc mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11fd94c2:;
  /* 11fd94c2 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fd94c5 pop edi */
  EDI = (pop32());
  /* 11fd94c6 pop esi */
  ESI = (pop32());
  /* 11fd94c7 pop ebx */
  EBX = (pop32());
  /* 11fd94c8 mov esp, ebp */
  ESP = (EBP);
  /* 11fd94ca pop ebp */
  EBP = (pop32());
  /* 11fd94cb ret  */
  ESPCHK(0x11fd9400u, _esp0);
  ESP += 4; return;
}

/* FUN_100094d0 @ 0x11fd94d0 (124 bytes, 53 insns) */
void f_11fd94d0(void) {
  FTRACE(0x11fd94d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd94d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd94d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd94d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd94d4 push esi */
  push32((uint32_t)(ESI));
  /* 11fd94d5 push edi */
  push32((uint32_t)(EDI));
  /* 11fd94d6 cld  */
  C.df=0;
  /* 11fd94d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd94da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fd94dd and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 11fd94e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fd94e2 je 0x11fd94f5 */
  if (C.zf) goto L_11fd94f5;
  /* 11fd94e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd94e7 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 11fd94ee mov eax, 1 */
  EAX = (0x1u);
  /* 11fd94f3 jmp 0x11fd954c */
  goto L_11fd954c;
L_11fd94f5:;
  /* 11fd94f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd94f7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd94fa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fd94fd push ecx */
  push32((uint32_t)(ECX));
  /* 11fd94fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9501 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fd9504 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9505 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9508 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fd950b push edx */
  push32((uint32_t)(EDX));
  /* 11fd950c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd950e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9511 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9512 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9515 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fd9518 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9519 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd951c push eax */
  push32((uint32_t)(EAX));
  /* 11fd951d call 0x11fdd130 */
  push32(0x11fd9522u); f_11fdd130();
  /* 11fd9522 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9525 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9528 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd952c jne 0x11fd953b */
  if (!C.zf) goto L_11fd953b;
  /* 11fd952e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9531 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9532 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9535 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9536 call 0x11fd9280 */
  push32(0x11fd953bu); f_11fd9280();
L_11fd953b:;
  /* 11fd953b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd953e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11fd9541 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11fd9544 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11fd9547 mov eax, 1 */
  EAX = (0x1u);
L_11fd954c:;
  /* 11fd954c pop edi */
  EDI = (pop32());
  /* 11fd954d pop esi */
  ESI = (pop32());
  /* 11fd954e pop ebx */
  EBX = (pop32());
  /* 11fd954f pop ebp */
  EBP = (pop32());
  /* 11fd9550 ret  */
  ESPCHK(0x11fd94d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009560 @ 0x11fd9560 (130 bytes, 57 insns) */
void f_11fd9560(void) {
  FTRACE(0x11fd9560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9560 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9561 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9563 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9567 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9568 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9569 push edi */
  push32((uint32_t)(EDI));
  /* 11fd956a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fd956d mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11fd9570 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fd9573 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fd9578 mov edi, esi */
  EDI = (ESI);
  /* 11fd957a mov ebx, esi */
  EBX = (ESI);
  /* 11fd957c jl 0x11fd95b9 */
  if ((C.sf!=C.of)) goto L_11fd95b9;
L_11fd957e:;
  /* 11fd957e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9581 jne 0x11fd9588 */
  if (!C.zf) goto L_11fd9588;
  /* 11fd9583 call 0x11fde140 */
  push32(0x11fd9588u); f_11fde140();
L_11fd9588:;
  /* 11fd9588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd958b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11fd958c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd958f lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11fd9592 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11fd9595 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9598 jge 0x11fd959f */
  if ((C.sf==C.of)) goto L_11fd959f;
  /* 11fd959a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd959d jle 0x11fd95a4 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd95a4;
L_11fd959f:;
  /* 11fd959f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd95a2 jne 0x11fd95af */
  if (!C.zf) goto L_11fd95af;
L_11fd95a4:;
  /* 11fd95a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd95a7 mov edi, ebx */
  EDI = (EBX);
  /* 11fd95a9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11fd95aa mov ebx, esi */
  EBX = (ESI);
  /* 11fd95ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11fd95af:;
  /* 11fd95af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd95b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd95b4 jge 0x11fd957e */
  if ((C.sf==C.of)) goto L_11fd957e;
  /* 11fd95b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11fd95b9:;
  /* 11fd95b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fd95bc mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fd95bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fd95c0 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11fd95c2 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 11fd95c4 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd95c7 ja 0x11fd95cd */
  if ((!C.cf&&!C.zf)) goto L_11fd95cd;
  /* 11fd95c9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd95cb jbe 0x11fd95d2 */
  if ((C.cf||C.zf)) goto L_11fd95d2;
L_11fd95cd:;
  /* 11fd95cd call 0x11fde140 */
  push32(0x11fd95d2u); f_11fde140();
L_11fd95d2:;
  /* 11fd95d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd95d5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11fd95d8 pop edi */
  EDI = (pop32());
  /* 11fd95d9 pop esi */
  ESI = (pop32());
  /* 11fd95da lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11fd95dd pop ebx */
  EBX = (pop32());
  /* 11fd95de mov esp, ebp */
  ESP = (EBP);
  /* 11fd95e0 pop ebp */
  EBP = (pop32());
  /* 11fd95e1 ret  */
  ESPCHK(0x11fd9560u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11fd95f0 (32 bytes, 18 insns) */
void f_11fd95f0(void) {
  FTRACE(0x11fd95f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd95f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd95f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd95f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd95f4 push esi */
  push32((uint32_t)(ESI));
  /* 11fd95f5 push edi */
  push32((uint32_t)(EDI));
  /* 11fd95f6 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd95f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd95f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd95fb push 0x11fd9608 */
  push32((uint32_t)(0x11fd9608u));
  /* 11fd9600 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11fd9603 call 0x11ff077c */
  push32(0x11fd9608u); f_11ff077c();
  /* 11fd9608 pop ebp */
  EBP = (pop32());
  /* 11fd9609 pop edi */
  EDI = (pop32());
  /* 11fd960a pop esi */
  ESI = (pop32());
  /* 11fd960b pop ebx */
  EBX = (pop32());
  /* 11fd960c mov esp, ebp */
  ESP = (EBP);
  /* 11fd960e pop ebp */
  EBP = (pop32());
  /* 11fd960f ret  */
  ESPCHK(0x11fd95f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11fd9632 (104 bytes, 33 insns) */
void f_11fd9632(void) {
  FTRACE(0x11fd9632u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9632 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd9633 push esi */
  push32((uint32_t)(ESI));
  /* 11fd9634 push edi */
  push32((uint32_t)(EDI));
  /* 11fd9635 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fd9639 push eax */
  push32((uint32_t)(EAX));
  /* 11fd963a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11fd963c push 0x11fd9610 */
  push32((uint32_t)(0x11fd9610u));
  /* 11fd9641 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11fd9648 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11fd964f:;
  /* 11fd964f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11fd9653 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fd9656 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11fd9659 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd965c je 0x11fd968c */
  if (C.zf) goto L_11fd968c;
  /* 11fd965e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9662 je 0x11fd968c */
  if (C.zf) goto L_11fd968c;
  /* 11fd9664 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11fd9667 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11fd966a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11fd966e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11fd9671 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9676 jne 0x11fd968a */
  if (!C.zf) goto L_11fd968a;
  /* 11fd9678 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11fd967d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11fd9681 call 0x11fd96c6 */
  push32(0x11fd9686u); f_11fd96c6();
  /* 11fd9686 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11fd968au);
L_11fd968a:;
  /* 11fd968a jmp 0x11fd964f */
  goto L_11fd964f;
L_11fd968c:;
  /* 11fd968c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11fd9693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9696 pop edi */
  EDI = (pop32());
  /* 11fd9697 pop esi */
  ESI = (pop32());
  /* 11fd9698 pop ebx */
  EBX = (pop32());
  /* 11fd9699 ret  */
  ESPCHK(0x11fd9632u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11fd969a (35 bytes, 10 insns) */
void f_11fd969a(void) {
  FTRACE(0x11fd969au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd969a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd969c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11fd96a3 cmp dword ptr [ecx + 4], 0x11fd9610 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11fd9610u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd96aa jne 0x11fd96bc */
  if (!C.zf) goto L_11fd96bc;
  /* 11fd96ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fd96af mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fd96b2 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd96b5 jne 0x11fd96bc */
  if (!C.zf) goto L_11fd96bc;
  /* 11fd96b7 mov eax, 1 */
  EAX = (0x1u);
L_11fd96bc:;
  /* 11fd96bc ret  */
  ESPCHK(0x11fd969au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11fd96bd (9 bytes, 4 insns) */
void f_11fd96bd(void) {
  FTRACE(0x11fd96bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd96bd push ebx */
  push32((uint32_t)(EBX));
  /* 11fd96be push ecx */
  push32((uint32_t)(ECX));
  /* 11fd96bf mov ebx, 0x1200cdac */
  EBX = (0x1200cdacu);
  /* 11fd96c4 jmp 0x11fd96d0 */
  jmp_ind(0x11fd96d0u); return;
}

/* FUN_100096c6 @ 0x11fd96c6 (24 bytes, 10 insns) */
void f_11fd96c6(void) {
  FTRACE(0x11fd96c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd96c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fd96c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd96c8 mov ebx, 0x1200cdac */
  EBX = (0x1200cdacu);
  /* 11fd96cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd96d0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11fd96d3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11fd96d6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11fd96d9 pop ecx */
  ECX = (pop32());
  /* 11fd96da pop ebx */
  EBX = (pop32());
  /* 11fd96db ret 4 */
  ESPCHK(0x11fd96c6u, _esp0);
  ESP += 8; return;
}

/* FUN_100096e0 @ 0x11fd96e0 (179 bytes, 53 insns) */
void f_11fd96e0(void) {
  FTRACE(0x11fd96e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd96e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd96e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd96e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd96e4 call 0x11fde380 */
  push32(0x11fd96e9u); f_11fde380();
  /* 11fd96e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fd96eb mov eax, dword ptr [0x12010a38] */
  EAX = (r32((uint32_t)(0x12010a38)));
  /* 11fd96f0 push eax */
  push32((uint32_t)(EAX));
  /* 11fd96f1 call 0x11fdc090 */
  push32(0x11fd96f6u); f_11fdc090();
  /* 11fd96f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd96f9 mov ecx, dword ptr [0x12010a34] */
  ECX = (r32((uint32_t)(0x12010a34)));
  /* 11fd96ff sub ecx, dword ptr [0x12010a38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12010a38))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9705 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9708 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd970a jae 0x11fd976d */
  if (!C.cf) goto L_11fd976d;
  /* 11fd970c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 11fd970e push 0x12009298 */
  push32((uint32_t)(0x12009298u));
  /* 11fd9713 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fd9715 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fd9717 mov edx, dword ptr [0x12010a38] */
  EDX = (r32((uint32_t)(0x12010a38)));
  /* 11fd971d push edx */
  push32((uint32_t)(EDX));
  /* 11fd971e call 0x11fdc090 */
  push32(0x11fd9723u); f_11fdc090();
  /* 11fd9723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9726 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9729 push eax */
  push32((uint32_t)(EAX));
  /* 11fd972a mov eax, dword ptr [0x12010a38] */
  EAX = (r32((uint32_t)(0x12010a38)));
  /* 11fd972f push eax */
  push32((uint32_t)(EAX));
  /* 11fd9730 call 0x11fdb650 */
  push32(0x11fd9735u); f_11fdb650();
  /* 11fd9735 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9738 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd973b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd973f jne 0x11fd974a */
  if (!C.zf) goto L_11fd974a;
  /* 11fd9741 call 0x11fde390 */
  push32(0x11fd9746u); f_11fde390();
  /* 11fd9746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9748 jmp 0x11fd978f */
  goto L_11fd978f;
L_11fd974a:;
  /* 11fd974a mov ecx, dword ptr [0x12010a34] */
  ECX = (r32((uint32_t)(0x12010a34)));
  /* 11fd9750 sub ecx, dword ptr [0x12010a38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12010a38))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9756 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fd9759 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd975c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11fd975f mov dword ptr [0x12010a34], eax */
  w32((uint32_t)(0x12010a34), (EAX));
  /* 11fd9764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9767 mov dword ptr [0x12010a38], ecx */
  w32((uint32_t)(0x12010a38), (ECX));
L_11fd976d:;
  /* 11fd976d mov edx, dword ptr [0x12010a34] */
  EDX = (r32((uint32_t)(0x12010a34)));
  /* 11fd9773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9776 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fd9778 mov ecx, dword ptr [0x12010a34] */
  ECX = (r32((uint32_t)(0x12010a34)));
  /* 11fd977e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9781 mov dword ptr [0x12010a34], ecx */
  w32((uint32_t)(0x12010a34), (ECX));
  /* 11fd9787 call 0x11fde390 */
  push32(0x11fd978cu); f_11fde390();
  /* 11fd978c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11fd978f:;
  /* 11fd978f mov esp, ebp */
  ESP = (EBP);
  /* 11fd9791 pop ebp */
  EBP = (pop32());
  /* 11fd9792 ret  */
  ESPCHK(0x11fd96e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x11fd97a0 (24 bytes, 12 insns) */
void f_11fd97a0(void) {
  FTRACE(0x11fd97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd97a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd97a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd97a6 push eax */
  push32((uint32_t)(EAX));
  /* 11fd97a7 call 0x11fd96e0 */
  push32(0x11fd97acu); f_11fd96e0();
  /* 11fd97ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd97af neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fd97b1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd97b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fd97b5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11fd97b6 pop ebp */
  EBP = (pop32());
  /* 11fd97b7 ret  */
  ESPCHK(0x11fd97a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097c0 @ 0x11fd97c0 (77 bytes, 20 insns) */
void f_11fd97c0(void) {
  FTRACE(0x11fd97c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd97c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd97c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd97c3 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11fd97c8 push 0x12009298 */
  push32((uint32_t)(0x12009298u));
  /* 11fd97cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11fd97cf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11fd97d4 call 0x11fdb1c0 */
  push32(0x11fd97d9u); f_11fdb1c0();
  /* 11fd97d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd97dc mov dword ptr [0x12010a38], eax */
  w32((uint32_t)(0x12010a38), (EAX));
  /* 11fd97e1 cmp dword ptr [0x12010a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd97e8 jne 0x11fd97f4 */
  if (!C.zf) goto L_11fd97f4;
  /* 11fd97ea push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11fd97ec call 0x11fd9c30 */
  push32(0x11fd97f1u); f_11fd9c30();
  /* 11fd97f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd97f4:;
  /* 11fd97f4 mov eax, dword ptr [0x12010a38] */
  EAX = (r32((uint32_t)(0x12010a38)));
  /* 11fd97f9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fd97ff mov ecx, dword ptr [0x12010a38] */
  ECX = (r32((uint32_t)(0x12010a38)));
  /* 11fd9805 mov dword ptr [0x12010a34], ecx */
  w32((uint32_t)(0x12010a34), (ECX));
  /* 11fd980b pop ebp */
  EBP = (pop32());
  /* 11fd980c ret  */
  ESPCHK(0x11fd97c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x11fd9810 (16 bytes, 7 insns) */
void f_11fd9810(void) {
  FTRACE(0x11fd9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9810 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9811 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9813 call 0x11fddec0 */
  push32(0x11fd9818u); f_11fddec0();
  /* 11fd9818 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd981b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11fd981e pop ebp */
  EBP = (pop32());
  /* 11fd981f ret  */
  ESPCHK(0x11fd9810u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11fd9820 (54 bytes, 18 insns) */
void f_11fd9820(void) {
  FTRACE(0x11fd9820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9820 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9821 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9823 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9824 call 0x11fddec0 */
  push32(0x11fd9829u); f_11fddec0();
  /* 11fd9829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd982c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd982f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fd9832 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fd9838 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd983e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9841 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 11fd9844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9847 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fd984a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fd984d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9852 mov esp, ebp */
  ESP = (EBP);
  /* 11fd9854 pop ebp */
  EBP = (pop32());
  /* 11fd9855 ret  */
  ESPCHK(0x11fd9820u, _esp0);
  ESP += 4; return;
}

/* FUN_10009860 @ 0x11fd9860 (385 bytes, 103 insns) */
void f_11fd9860(void) {
  FTRACE(0x11fd9860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9861 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9863 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9869 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11fd986c push eax */
  push32((uint32_t)(EAX));
  /* 11fd986d call dword ptr [0x12011408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011408))), 0x11fd9873u);
  /* 11fd9873 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11fd9876 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9877 call dword ptr [0x12011404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011404))), 0x11fd987du);
  /* 11fd987d mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 11fd9880 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd9886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9888 mov ax, word ptr [0x1200ef0a] */
  AX = (r16((uint32_t)(0x1200ef0a)));
  /* 11fd988e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9890 jne 0x11fd98f8 */
  if (!C.zf) goto L_11fd98f8;
  /* 11fd9892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd9895 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd989b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fd989d mov dx, word ptr [0x1200ef08] */
  DX = (r16((uint32_t)(0x1200ef08)));
  /* 11fd98a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd98a6 jne 0x11fd98f8 */
  if (!C.zf) goto L_11fd98f8;
  /* 11fd98a8 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 11fd98ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd98b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fd98b2 mov cx, word ptr [0x1200ef06] */
  CX = (r16((uint32_t)(0x1200ef06)));
  /* 11fd98b9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd98bb jne 0x11fd98f8 */
  if (!C.zf) goto L_11fd98f8;
  /* 11fd98bd mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11fd98c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd98c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd98c8 mov ax, word ptr [0x1200ef02] */
  AX = (r16((uint32_t)(0x1200ef02)));
  /* 11fd98ce cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd98d0 jne 0x11fd98f8 */
  if (!C.zf) goto L_11fd98f8;
  /* 11fd98d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fd98d5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd98db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fd98dd mov dx, word ptr [0x1200ef00] */
  DX = (r16((uint32_t)(0x1200ef00)));
  /* 11fd98e4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd98e6 jne 0x11fd98f8 */
  if (!C.zf) goto L_11fd98f8;
  /* 11fd98e8 mov eax, dword ptr [0x1200eef8] */
  EAX = (r32((uint32_t)(0x1200eef8)));
  /* 11fd98ed mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 11fd98f3 jmp 0x11fd9980 */
  goto L_11fd9980;
L_11fd98f8:;
  /* 11fd98f8 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 11fd98fe push ecx */
  push32((uint32_t)(ECX));
  /* 11fd98ff call dword ptr [0x12011400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011400))), 0x11fd9905u);
  /* 11fd9905 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 11fd990b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9912 je 0x11fd9948 */
  if (C.zf) goto L_11fd9948;
  /* 11fd9914 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd991b jne 0x11fd993c */
  if (!C.zf) goto L_11fd993c;
  /* 11fd991d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 11fd9920 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd9926 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fd9928 je 0x11fd993c */
  if (C.zf) goto L_11fd993c;
  /* 11fd992a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd992e je 0x11fd993c */
  if (C.zf) goto L_11fd993c;
  /* 11fd9930 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 11fd993a jmp 0x11fd9946 */
  goto L_11fd9946;
L_11fd993c:;
  /* 11fd993c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_11fd9946:;
  /* 11fd9946 jmp 0x11fd9952 */
  goto L_11fd9952;
L_11fd9948:;
  /* 11fd9948 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_11fd9952:;
  /* 11fd9952 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11fd9958 mov dword ptr [0x1200eef8], eax */
  w32((uint32_t)(0x1200eef8), (EAX));
  /* 11fd995d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fd9960 mov dword ptr [0x1200ef00], ecx */
  w32((uint32_t)(0x1200ef00), (ECX));
  /* 11fd9966 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fd9969 mov dword ptr [0x1200ef04], edx */
  w32((uint32_t)(0x1200ef04), (EDX));
  /* 11fd996f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fd9972 mov dword ptr [0x1200ef08], eax */
  w32((uint32_t)(0x1200ef08), (EAX));
  /* 11fd9977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd997a mov dword ptr [0x1200ef0c], ecx */
  w32((uint32_t)(0x1200ef0c), (ECX));
L_11fd9980:;
  /* 11fd9980 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11fd9986 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9987 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fd998a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd998f push eax */
  push32((uint32_t)(EAX));
  /* 11fd9990 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 11fd9993 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd9999 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd999a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fd999d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd99a3 push edx */
  push32((uint32_t)(EDX));
  /* 11fd99a4 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 11fd99a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd99ac push eax */
  push32((uint32_t)(EAX));
  /* 11fd99ad mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 11fd99b0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd99b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd99b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fd99ba and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fd99c0 push edx */
  push32((uint32_t)(EDX));
  /* 11fd99c1 call 0x11fde3d0 */
  push32(0x11fd99c6u); f_11fde3d0();
  /* 11fd99c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd99c9 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fd99cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd99d0 je 0x11fd99da */
  if (C.zf) goto L_11fd99da;
  /* 11fd99d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd99d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fd99d8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11fd99da:;
  /* 11fd99da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fd99dd mov esp, ebp */
  ESP = (EBP);
  /* 11fd99df pop ebp */
  EBP = (pop32());
  /* 11fd99e0 ret  */
  ESPCHK(0x11fd9860u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x11fd99f0 (313 bytes, 78 insns) */
void f_11fd99f0(void) {
  FTRACE(0x11fd99f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd99f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd99f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd99f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd99f7 jne 0x11fd9ab7 */
  if (!C.zf) goto L_11fd9ab7;
  /* 11fd99fd call dword ptr [0x12011410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011410))), 0x11fd9a03u);
  /* 11fd9a03 mov dword ptr [0x1200efa0], eax */
  w32((uint32_t)(0x1200efa0), (EAX));
  /* 11fd9a08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fd9a0a call 0x11fdf110 */
  push32(0x11fd9a0fu); f_11fdf110();
  /* 11fd9a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9a14 jne 0x11fd9a1d */
  if (!C.zf) goto L_11fd9a1d;
  /* 11fd9a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9a18 jmp 0x11fd9b25 */
  goto L_11fd9b25;
L_11fd9a1d:;
  /* 11fd9a1d mov eax, dword ptr [0x1200efa0] */
  EAX = (r32((uint32_t)(0x1200efa0)));
  /* 11fd9a22 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11fd9a25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9a2a mov dword ptr [0x1200efac], eax */
  w32((uint32_t)(0x1200efac), (EAX));
  /* 11fd9a2f mov ecx, dword ptr [0x1200efa0] */
  ECX = (r32((uint32_t)(0x1200efa0)));
  /* 11fd9a35 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fd9a3b mov dword ptr [0x1200efa8], ecx */
  w32((uint32_t)(0x1200efa8), (ECX));
  /* 11fd9a41 mov edx, dword ptr [0x1200efa8] */
  EDX = (r32((uint32_t)(0x1200efa8)));
  /* 11fd9a47 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fd9a4a add edx, dword ptr [0x1200efac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200efac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9a50 mov dword ptr [0x1200efa4], edx */
  w32((uint32_t)(0x1200efa4), (EDX));
  /* 11fd9a56 mov eax, dword ptr [0x1200efa0] */
  EAX = (r32((uint32_t)(0x1200efa0)));
  /* 11fd9a5b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fd9a5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9a63 mov dword ptr [0x1200efa0], eax */
  w32((uint32_t)(0x1200efa0), (EAX));
  /* 11fd9a68 call 0x11fddde0 */
  push32(0x11fd9a6du); f_11fddde0();
  /* 11fd9a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9a6f jne 0x11fd9a7d */
  if (!C.zf) goto L_11fd9a7d;
  /* 11fd9a71 call 0x11fdf160 */
  push32(0x11fd9a76u); f_11fdf160();
  /* 11fd9a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9a78 jmp 0x11fd9b25 */
  goto L_11fd9b25;
L_11fd9a7d:;
  /* 11fd9a7d call dword ptr [0x1201140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201140c))), 0x11fd9a83u);
  /* 11fd9a83 mov dword ptr [0x12010a54], eax */
  w32((uint32_t)(0x12010a54), (EAX));
  /* 11fd9a88 call 0x11fdeef0 */
  push32(0x11fd9a8du); f_11fdeef0();
  /* 11fd9a8d mov dword ptr [0x1200ef14], eax */
  w32((uint32_t)(0x1200ef14), (EAX));
  /* 11fd9a92 call 0x11fde4c0 */
  push32(0x11fd9a97u); f_11fde4c0();
  /* 11fd9a97 call 0x11fde9e0 */
  push32(0x11fd9a9cu); f_11fde9e0();
  /* 11fd9a9c call 0x11fde890 */
  push32(0x11fd9aa1u); f_11fde890();
  /* 11fd9aa1 call 0x11fde1d0 */
  push32(0x11fd9aa6u); f_11fde1d0();
  /* 11fd9aa6 mov ecx, dword ptr [0x1200ef10] */
  ECX = (r32((uint32_t)(0x1200ef10)));
  /* 11fd9aac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9aaf mov dword ptr [0x1200ef10], ecx */
  w32((uint32_t)(0x1200ef10), (ECX));
  /* 11fd9ab5 jmp 0x11fd9b20 */
  goto L_11fd9b20;
L_11fd9ab7:;
  /* 11fd9ab7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9abb jne 0x11fd9b10 */
  if (!C.zf) goto L_11fd9b10;
  /* 11fd9abd cmp dword ptr [0x1200ef10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9ac4 jle 0x11fd9b0a */
  if ((C.zf||C.sf!=C.of)) goto L_11fd9b0a;
  /* 11fd9ac6 mov edx, dword ptr [0x1200ef10] */
  EDX = (r32((uint32_t)(0x1200ef10)));
  /* 11fd9acc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fd9acf mov dword ptr [0x1200ef10], edx */
  w32((uint32_t)(0x1200ef10), (EDX));
  /* 11fd9ad5 cmp dword ptr [0x1200efd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9adc jne 0x11fd9ae3 */
  if (!C.zf) goto L_11fd9ae3;
  /* 11fd9ade call 0x11fde250 */
  push32(0x11fd9ae3u); f_11fde250();
L_11fd9ae3:;
  /* 11fd9ae3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fd9ae5 call 0x11fdc6d0 */
  push32(0x11fd9aeau); f_11fdc6d0();
  /* 11fd9aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9aed and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9af2 je 0x11fd9af9 */
  if (C.zf) goto L_11fd9af9;
  /* 11fd9af4 call 0x11fdcfe0 */
  push32(0x11fd9af9u); f_11fdcfe0();
L_11fd9af9:;
  /* 11fd9af9 call 0x11fde7f0 */
  push32(0x11fd9afeu); f_11fde7f0();
  /* 11fd9afe call 0x11fdde70 */
  push32(0x11fd9b03u); f_11fdde70();
  /* 11fd9b03 call 0x11fdf160 */
  push32(0x11fd9b08u); f_11fdf160();
  /* 11fd9b08 jmp 0x11fd9b0e */
  goto L_11fd9b0e;
L_11fd9b0a:;
  /* 11fd9b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9b0c jmp 0x11fd9b25 */
  goto L_11fd9b25;
L_11fd9b0e:;
  /* 11fd9b0e jmp 0x11fd9b20 */
  goto L_11fd9b20;
L_11fd9b10:;
  /* 11fd9b10 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b14 jne 0x11fd9b20 */
  if (!C.zf) goto L_11fd9b20;
  /* 11fd9b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd9b18 call 0x11fddf60 */
  push32(0x11fd9b1du); f_11fddf60();
  /* 11fd9b1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9b20:;
  /* 11fd9b20 mov eax, 1 */
  EAX = (0x1u);
L_11fd9b25:;
  /* 11fd9b25 pop ebp */
  EBP = (pop32());
  /* 11fd9b26 ret 0xc */
  ESPCHK(0x11fd99f0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11fd9b30 (243 bytes, 86 insns) */
void f_11fd9b30(void) {
  FTRACE(0x11fd9b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9b31 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9b34 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fd9b3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b3f jne 0x11fd9b51 */
  if (!C.zf) goto L_11fd9b51;
  /* 11fd9b41 cmp dword ptr [0x1200ef10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b48 jne 0x11fd9b51 */
  if (!C.zf) goto L_11fd9b51;
  /* 11fd9b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9b4c jmp 0x11fd9c1d */
  goto L_11fd9c1d;
L_11fd9b51:;
  /* 11fd9b51 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b55 je 0x11fd9b5d */
  if (C.zf) goto L_11fd9b5d;
  /* 11fd9b57 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b5b jne 0x11fd9b9f */
  if (!C.zf) goto L_11fd9b9f;
L_11fd9b5d:;
  /* 11fd9b5d cmp dword ptr [0x12010a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b64 je 0x11fd9b7b */
  if (C.zf) goto L_11fd9b7b;
  /* 11fd9b66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9b69 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9b6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9b6d push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9b71 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9b72 call dword ptr [0x12010a64] */
  call_ind((uint32_t)(r32((uint32_t)(0x12010a64))), 0x11fd9b78u);
  /* 11fd9b78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fd9b7b:;
  /* 11fd9b7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b7f je 0x11fd9b95 */
  if (C.zf) goto L_11fd9b95;
  /* 11fd9b81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9b84 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9b85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9b88 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9b89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9b8c push edx */
  push32((uint32_t)(EDX));
  /* 11fd9b8d call 0x11fd99f0 */
  push32(0x11fd9b92u); f_11fd99f0();
  /* 11fd9b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fd9b95:;
  /* 11fd9b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9b99 jne 0x11fd9b9f */
  if (!C.zf) goto L_11fd9b9f;
  /* 11fd9b9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9b9d jmp 0x11fd9c1d */
  goto L_11fd9c1d;
L_11fd9b9f:;
  /* 11fd9b9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9ba2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9ba3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9baa push edx */
  push32((uint32_t)(EDX));
  /* 11fd9bab call 0x11fd106e */
  push32(0x11fd9bb0u); f_11fd106e();
  /* 11fd9bb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd9bb3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9bb7 jne 0x11fd9bce */
  if (!C.zf) goto L_11fd9bce;
  /* 11fd9bb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9bbd jne 0x11fd9bce */
  if (!C.zf) goto L_11fd9bce;
  /* 11fd9bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fd9bc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9bc9 call 0x11fd99f0 */
  push32(0x11fd9bceu); f_11fd99f0();
L_11fd9bce:;
  /* 11fd9bce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9bd2 je 0x11fd9bda */
  if (C.zf) goto L_11fd9bda;
  /* 11fd9bd4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9bd8 jne 0x11fd9c1a */
  if (!C.zf) goto L_11fd9c1a;
L_11fd9bda:;
  /* 11fd9bda mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9bdd push edx */
  push32((uint32_t)(EDX));
  /* 11fd9bde mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9be1 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9be5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9be6 call 0x11fd99f0 */
  push32(0x11fd9bebu); f_11fd99f0();
  /* 11fd9beb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9bed jne 0x11fd9bf6 */
  if (!C.zf) goto L_11fd9bf6;
  /* 11fd9bef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fd9bf6:;
  /* 11fd9bf6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9bfa je 0x11fd9c1a */
  if (C.zf) goto L_11fd9c1a;
  /* 11fd9bfc cmp dword ptr [0x12010a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c03 je 0x11fd9c1a */
  if (C.zf) goto L_11fd9c1a;
  /* 11fd9c05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9c08 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9c0c push eax */
  push32((uint32_t)(EAX));
  /* 11fd9c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9c11 call dword ptr [0x12010a64] */
  call_ind((uint32_t)(r32((uint32_t)(0x12010a64))), 0x11fd9c17u);
  /* 11fd9c17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fd9c1a:;
  /* 11fd9c1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fd9c1d:;
  /* 11fd9c1d mov esp, ebp */
  ESP = (EBP);
  /* 11fd9c1f pop ebp */
  EBP = (pop32());
  /* 11fd9c20 ret 0xc */
  ESPCHK(0x11fd9b30u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11fd9c30 (58 bytes, 18 insns) */
void f_11fd9c30(void) {
  FTRACE(0x11fd9c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9c31 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9c33 cmp dword ptr [0x1200ef1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c3a je 0x11fd9c4e */
  if (C.zf) goto L_11fd9c4e;
  /* 11fd9c3c cmp dword ptr [0x1200ef1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c43 jne 0x11fd9c53 */
  if (!C.zf) goto L_11fd9c53;
  /* 11fd9c45 cmp dword ptr [0x1200ef20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c4c jne 0x11fd9c53 */
  if (!C.zf) goto L_11fd9c53;
L_11fd9c4e:;
  /* 11fd9c4e call 0x11fdf200 */
  push32(0x11fd9c53u); f_11fdf200();
L_11fd9c53:;
  /* 11fd9c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9c56 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9c57 call 0x11fdf250 */
  push32(0x11fd9c5cu); f_11fdf250();
  /* 11fd9c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9c5f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11fd9c64 call dword ptr [0x1200cdbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200cdbc))), 0x11fd9c6au);
  /* 11fd9c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9c6d pop ebp */
  EBP = (pop32());
  /* 11fd9c6e ret  */
  ESPCHK(0x11fd9c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c70 @ 0x11fd9c70 (11 bytes, 5 insns) */
void f_11fd9c70(void) {
  FTRACE(0x11fd9c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9c71 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9c73 call dword ptr [0x12011414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011414))), 0x11fd9c79u);
  /* 11fd9c79 pop ebp */
  EBP = (pop32());
  /* 11fd9c7a ret  */
  ESPCHK(0x11fd9c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x11fd9c80 (87 bytes, 30 insns) */
void f_11fd9c80(void) {
  FTRACE(0x11fd9c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9c81 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9c84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c88 jl 0x11fd9c90 */
  if ((C.sf!=C.of)) goto L_11fd9c90;
  /* 11fd9c8a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c8e jl 0x11fd9c95 */
  if ((C.sf!=C.of)) goto L_11fd9c95;
L_11fd9c90:;
  /* 11fd9c90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9c93 jmp 0x11fd9cd3 */
  goto L_11fd9cd3;
L_11fd9c95:;
  /* 11fd9c95 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9c99 jne 0x11fd9ca7 */
  if (!C.zf) goto L_11fd9ca7;
  /* 11fd9c9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9c9e mov eax, dword ptr [eax*4 + 0x1200cdc4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1200cdc4)));
  /* 11fd9ca5 jmp 0x11fd9cd3 */
  goto L_11fd9cd3;
L_11fd9ca7:;
  /* 11fd9ca7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9caa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fd9cad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fd9caf je 0x11fd9cb6 */
  if (C.zf) goto L_11fd9cb6;
  /* 11fd9cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9cb4 jmp 0x11fd9cd3 */
  goto L_11fd9cd3;
L_11fd9cb6:;
  /* 11fd9cb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9cb9 mov eax, dword ptr [edx*4 + 0x1200cdc4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1200cdc4)));
  /* 11fd9cc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd9cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9cc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9cc9 mov dword ptr [ecx*4 + 0x1200cdc4], edx */
  w32((uint32_t)(ECX*4 + 0x1200cdc4), (EDX));
  /* 11fd9cd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fd9cd3:;
  /* 11fd9cd3 mov esp, ebp */
  ESP = (EBP);
  /* 11fd9cd5 pop ebp */
  EBP = (pop32());
  /* 11fd9cd6 ret  */
  ESPCHK(0x11fd9c80u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11fd9ce0 (126 bytes, 38 insns) */
void f_11fd9ce0(void) {
  FTRACE(0x11fd9ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9ce4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9ce8 jl 0x11fd9cf0 */
  if ((C.sf!=C.of)) goto L_11fd9cf0;
  /* 11fd9cea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9cee jl 0x11fd9cf7 */
  if ((C.sf!=C.of)) goto L_11fd9cf7;
L_11fd9cf0:;
  /* 11fd9cf0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11fd9cf5 jmp 0x11fd9d5a */
  goto L_11fd9d5a;
L_11fd9cf7:;
  /* 11fd9cf7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9cfb jne 0x11fd9d09 */
  if (!C.zf) goto L_11fd9d09;
  /* 11fd9cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9d00 mov eax, dword ptr [eax*4 + 0x1200cdd0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1200cdd0)));
  /* 11fd9d07 jmp 0x11fd9d5a */
  goto L_11fd9d5a;
L_11fd9d09:;
  /* 11fd9d09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9d0c mov edx, dword ptr [ecx*4 + 0x1200cdd0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cdd0)));
  /* 11fd9d13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fd9d16 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9d1a jne 0x11fd9d30 */
  if (!C.zf) goto L_11fd9d30;
  /* 11fd9d1c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11fd9d1e call dword ptr [0x12011418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011418))), 0x11fd9d24u);
  /* 11fd9d24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9d27 mov dword ptr [ecx*4 + 0x1200cdd0], eax */
  w32((uint32_t)(ECX*4 + 0x1200cdd0), (EAX));
  /* 11fd9d2e jmp 0x11fd9d57 */
  goto L_11fd9d57;
L_11fd9d30:;
  /* 11fd9d30 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9d34 jne 0x11fd9d4a */
  if (!C.zf) goto L_11fd9d4a;
  /* 11fd9d36 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11fd9d38 call dword ptr [0x12011418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011418))), 0x11fd9d3eu);
  /* 11fd9d3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9d41 mov dword ptr [edx*4 + 0x1200cdd0], eax */
  w32((uint32_t)(EDX*4 + 0x1200cdd0), (EAX));
  /* 11fd9d48 jmp 0x11fd9d57 */
  goto L_11fd9d57;
L_11fd9d4a:;
  /* 11fd9d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9d4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9d50 mov dword ptr [eax*4 + 0x1200cdd0], ecx */
  w32((uint32_t)(EAX*4 + 0x1200cdd0), (ECX));
L_11fd9d57:;
  /* 11fd9d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fd9d5a:;
  /* 11fd9d5a mov esp, ebp */
  ESP = (EBP);
  /* 11fd9d5c pop ebp */
  EBP = (pop32());
  /* 11fd9d5d ret  */
  ESPCHK(0x11fd9ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x11fd9d60 (28 bytes, 11 insns) */
void f_11fd9d60(void) {
  FTRACE(0x11fd9d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9d61 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9d64 mov eax, dword ptr [0x12010a48] */
  EAX = (r32((uint32_t)(0x12010a48)));
  /* 11fd9d69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fd9d6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9d6f mov dword ptr [0x12010a48], ecx */
  w32((uint32_t)(0x12010a48), (ECX));
  /* 11fd9d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fd9d78 mov esp, ebp */
  ESP = (EBP);
  /* 11fd9d7a pop ebp */
  EBP = (pop32());
  /* 11fd9d7b ret  */
  ESPCHK(0x11fd9d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d80 @ 0x11fd9d80 (912 bytes, 248 insns) */
void f_11fd9d80(void) {
  FTRACE(0x11fd9d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fd9d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fd9d81 mov ebp, esp */
  EBP = (ESP);
  /* 11fd9d83 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11fd9d88 call 0x11fdfac0 */
  push32(0x11fd9d8du); f_11fdfac0();
  /* 11fd9d8d push edi */
  push32((uint32_t)(EDI));
  /* 11fd9d8e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11fd9d95 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11fd9d9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9d9c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11fd9da2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd9da4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11fd9da6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11fd9da7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11fd9dae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11fd9db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9db5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11fd9dbb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd9dbd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11fd9dbf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11fd9dc0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11fd9dc7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11fd9dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9dce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11fd9dd4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11fd9dd6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11fd9dd8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11fd9dd9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11fd9ddc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11fd9de2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9de6 jl 0x11fd9dee */
  if ((C.sf!=C.of)) goto L_11fd9dee;
  /* 11fd9de8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9dec jl 0x11fd9df6 */
  if ((C.sf!=C.of)) goto L_11fd9df6;
L_11fd9dee:;
  /* 11fd9dee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9df1 jmp 0x11fda10b */
  goto L_11fda10b;
L_11fd9df6:;
  /* 11fd9df6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9dfa jne 0x11fd9ea0 */
  if (!C.zf) goto L_11fd9ea0;
  /* 11fd9e00 push 0x1200cdc0 */
  push32((uint32_t)(0x1200cdc0u));
  /* 11fd9e05 call dword ptr [0x12011430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011430))), 0x11fd9e0bu);
  /* 11fd9e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9e0d jle 0x11fd9ea0 */
  if ((C.zf||C.sf!=C.of)) goto L_11fd9ea0;
  /* 11fd9e13 cmp dword ptr [0x1200ef24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9e1a jne 0x11fd9e5e */
  if (!C.zf) goto L_11fd9e5e;
  /* 11fd9e1c push 0x12009370 */
  push32((uint32_t)(0x12009370u));
  /* 11fd9e21 call dword ptr [0x1201142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201142c))), 0x11fd9e27u);
  /* 11fd9e27 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11fd9e2d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9e34 je 0x11fd9e56 */
  if (C.zf) goto L_11fd9e56;
  /* 11fd9e36 push 0x12009364 */
  push32((uint32_t)(0x12009364u));
  /* 11fd9e3b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11fd9e41 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9e42 call dword ptr [0x1201131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201131c))), 0x11fd9e48u);
  /* 11fd9e48 mov dword ptr [0x1200ef24], eax */
  w32((uint32_t)(0x1200ef24), (EAX));
  /* 11fd9e4d cmp dword ptr [0x1200ef24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9e54 jne 0x11fd9e5e */
  if (!C.zf) goto L_11fd9e5e;
L_11fd9e56:;
  /* 11fd9e56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9e59 jmp 0x11fda10b */
  goto L_11fda10b;
L_11fd9e5e:;
  /* 11fd9e5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9e61 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9e62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9e65 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9e66 push 0x12009330 */
  push32((uint32_t)(0x12009330u));
  /* 11fd9e6b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11fd9e71 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9e72 call dword ptr [0x1200ef24] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200ef24))), 0x11fd9e78u);
  /* 11fd9e78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9e7b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11fd9e81 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9e82 call dword ptr [0x12011318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011318))), 0x11fd9e88u);
  /* 11fd9e88 push 0x1200cdc0 */
  push32((uint32_t)(0x1200cdc0u));
  /* 11fd9e8d call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fd9e93u);
  /* 11fd9e93 call 0x11fd9c70 */
  push32(0x11fd9e98u); f_11fd9c70();
  /* 11fd9e98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9e9b jmp 0x11fda10b */
  goto L_11fda10b;
L_11fd9ea0:;
  /* 11fd9ea0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9ea4 je 0x11fd9edd */
  if (C.zf) goto L_11fd9edd;
  /* 11fd9ea6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11fd9eac push eax */
  push32((uint32_t)(EAX));
  /* 11fd9ead mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fd9eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9eb1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11fd9eb6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11fd9ebc push edx */
  push32((uint32_t)(EDX));
  /* 11fd9ebd call 0x11fdf9c0 */
  push32(0x11fd9ec2u); f_11fdf9c0();
  /* 11fd9ec2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9ec7 jge 0x11fd9edd */
  if ((C.sf==C.of)) goto L_11fd9edd;
  /* 11fd9ec9 push 0x12009304 */
  push32((uint32_t)(0x12009304u));
  /* 11fd9ece lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11fd9ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9ed5 call 0x11fdf8d0 */
  push32(0x11fd9edau); f_11fdf8d0();
  /* 11fd9eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9edd:;
  /* 11fd9edd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9ee1 jne 0x11fd9f15 */
  if (!C.zf) goto L_11fd9f15;
  /* 11fd9ee3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9ee7 je 0x11fd9ef5 */
  if (C.zf) goto L_11fd9ef5;
  /* 11fd9ee9 mov dword ptr [ebp - 0x3028], 0x120092f0 */
  w32((uint32_t)(EBP + -0x3028), (0x120092f0u));
  /* 11fd9ef3 jmp 0x11fd9eff */
  goto L_11fd9eff;
L_11fd9ef5:;
  /* 11fd9ef5 mov dword ptr [ebp - 0x3028], 0x120092dc */
  w32((uint32_t)(EBP + -0x3028), (0x120092dcu));
L_11fd9eff:;
  /* 11fd9eff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11fd9f05 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9f06 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11fd9f0c push edx */
  push32((uint32_t)(EDX));
  /* 11fd9f0d call 0x11fdf8d0 */
  push32(0x11fd9f12u); f_11fdf8d0();
  /* 11fd9f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9f15:;
  /* 11fd9f15 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11fd9f1b push eax */
  push32((uint32_t)(EAX));
  /* 11fd9f1c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11fd9f22 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9f23 call 0x11fdf8e0 */
  push32(0x11fd9f28u); f_11fdf8e0();
  /* 11fd9f28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9f2b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9f2f jne 0x11fd9f6a */
  if (!C.zf) goto L_11fd9f6a;
  /* 11fd9f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9f34 mov eax, dword ptr [edx*4 + 0x1200cdc4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1200cdc4)));
  /* 11fd9f3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fd9f3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9f40 je 0x11fd9f56 */
  if (C.zf) goto L_11fd9f56;
  /* 11fd9f42 push 0x120092d8 */
  push32((uint32_t)(0x120092d8u));
  /* 11fd9f47 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11fd9f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9f4e call 0x11fdf8e0 */
  push32(0x11fd9f53u); f_11fdf8e0();
  /* 11fd9f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9f56:;
  /* 11fd9f56 push 0x120092d4 */
  push32((uint32_t)(0x120092d4u));
  /* 11fd9f5b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11fd9f61 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9f62 call 0x11fdf8e0 */
  push32(0x11fd9f67u); f_11fdf8e0();
  /* 11fd9f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9f6a:;
  /* 11fd9f6a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9f6e je 0x11fd9fb2 */
  if (C.zf) goto L_11fd9fb2;
  /* 11fd9f70 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11fd9f76 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9f77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fd9f7a push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9f7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fd9f7e push edx */
  push32((uint32_t)(EDX));
  /* 11fd9f7f push 0x120092c8 */
  push32((uint32_t)(0x120092c8u));
  /* 11fd9f84 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11fd9f89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11fd9f8f push eax */
  push32((uint32_t)(EAX));
  /* 11fd9f90 call 0x11fdf7d0 */
  push32(0x11fd9f95u); f_11fdf7d0();
  /* 11fd9f95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9f9a jge 0x11fd9fb0 */
  if ((C.sf==C.of)) goto L_11fd9fb0;
  /* 11fd9f9c push 0x12009304 */
  push32((uint32_t)(0x12009304u));
  /* 11fd9fa1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11fd9fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9fa8 call 0x11fdf8d0 */
  push32(0x11fd9fadu); f_11fdf8d0();
  /* 11fd9fad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9fb0:;
  /* 11fd9fb0 jmp 0x11fd9fc8 */
  goto L_11fd9fc8;
L_11fd9fb2:;
  /* 11fd9fb2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11fd9fb8 push edx */
  push32((uint32_t)(EDX));
  /* 11fd9fb9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11fd9fbf push eax */
  push32((uint32_t)(EAX));
  /* 11fd9fc0 call 0x11fdf8d0 */
  push32(0x11fd9fc5u); f_11fdf8d0();
  /* 11fd9fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fd9fc8:;
  /* 11fd9fc8 cmp dword ptr [0x12010a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9fcf je 0x11fda00c */
  if (C.zf) goto L_11fda00c;
  /* 11fd9fd1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11fd9fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fd9fd8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11fd9fde push edx */
  push32((uint32_t)(EDX));
  /* 11fd9fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fd9fe2 push eax */
  push32((uint32_t)(EAX));
  /* 11fd9fe3 call dword ptr [0x12010a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x12010a48))), 0x11fd9fe9u);
  /* 11fd9fe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fd9fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fd9fee je 0x11fda00c */
  if (C.zf) goto L_11fda00c;
  /* 11fd9ff0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fd9ff4 jne 0x11fda001 */
  if (!C.zf) goto L_11fda001;
  /* 11fd9ff6 push 0x1200cdc0 */
  push32((uint32_t)(0x1200cdc0u));
  /* 11fd9ffb call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fda001u);
L_11fda001:;
  /* 11fda001 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11fda007 jmp 0x11fda10b */
  goto L_11fda10b;
L_11fda00c:;
  /* 11fda00c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda00f mov edx, dword ptr [ecx*4 + 0x1200cdc4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cdc4)));
  /* 11fda016 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fda019 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fda01b je 0x11fda05b */
  if (C.zf) goto L_11fda05b;
  /* 11fda01d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda020 cmp dword ptr [eax*4 + 0x1200cdd0], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1200cdd0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda028 je 0x11fda05b */
  if (C.zf) goto L_11fda05b;
  /* 11fda02a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fda02c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11fda032 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda033 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11fda039 push edx */
  push32((uint32_t)(EDX));
  /* 11fda03a call 0x11fdf750 */
  push32(0x11fda03fu); f_11fdf750();
  /* 11fda03f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda042 push eax */
  push32((uint32_t)(EAX));
  /* 11fda043 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11fda049 push eax */
  push32((uint32_t)(EAX));
  /* 11fda04a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda04d mov edx, dword ptr [ecx*4 + 0x1200cdd0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cdd0)));
  /* 11fda054 push edx */
  push32((uint32_t)(EDX));
  /* 11fda055 call dword ptr [0x1201141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201141c))), 0x11fda05bu);
L_11fda05b:;
  /* 11fda05b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda05e mov ecx, dword ptr [eax*4 + 0x1200cdc4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200cdc4)));
  /* 11fda065 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fda068 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fda06a je 0x11fda079 */
  if (C.zf) goto L_11fda079;
  /* 11fda06c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11fda072 push edx */
  push32((uint32_t)(EDX));
  /* 11fda073 call dword ptr [0x12011318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011318))), 0x11fda079u);
L_11fda079:;
  /* 11fda079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda07c mov ecx, dword ptr [eax*4 + 0x1200cdc4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200cdc4)));
  /* 11fda083 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fda086 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fda088 je 0x11fda0f8 */
  if (C.zf) goto L_11fda0f8;
  /* 11fda08a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda08e je 0x11fda0ad */
  if (C.zf) goto L_11fda0ad;
  /* 11fda090 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fda092 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11fda098 push edx */
  push32((uint32_t)(EDX));
  /* 11fda099 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fda09c push eax */
  push32((uint32_t)(EAX));
  /* 11fda09d call 0x11fdf460 */
  push32(0x11fda0a2u); f_11fdf460();
  /* 11fda0a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda0a5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11fda0ab jmp 0x11fda0b7 */
  goto L_11fda0b7;
L_11fda0ad:;
  /* 11fda0ad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11fda0b7:;
  /* 11fda0b7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11fda0bd push ecx */
  push32((uint32_t)(ECX));
  /* 11fda0be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fda0c1 push edx */
  push32((uint32_t)(EDX));
  /* 11fda0c2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11fda0c8 push eax */
  push32((uint32_t)(EAX));
  /* 11fda0c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fda0cc push ecx */
  push32((uint32_t)(ECX));
  /* 11fda0cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda0d0 push edx */
  push32((uint32_t)(EDX));
  /* 11fda0d1 call 0x11fda110 */
  push32(0x11fda0d6u); f_11fda110();
  /* 11fda0d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda0d9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11fda0df cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda0e3 jne 0x11fda0f0 */
  if (!C.zf) goto L_11fda0f0;
  /* 11fda0e5 push 0x1200cdc0 */
  push32((uint32_t)(0x1200cdc0u));
  /* 11fda0ea call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fda0f0u);
L_11fda0f0:;
  /* 11fda0f0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11fda0f6 jmp 0x11fda10b */
  goto L_11fda10b;
L_11fda0f8:;
  /* 11fda0f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda0fc jne 0x11fda109 */
  if (!C.zf) goto L_11fda109;
  /* 11fda0fe push 0x1200cdc0 */
  push32((uint32_t)(0x1200cdc0u));
  /* 11fda103 call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fda109u);
L_11fda109:;
  /* 11fda109 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fda10b:;
  /* 11fda10b pop edi */
  EDI = (pop32());
  /* 11fda10c mov esp, ebp */
  ESP = (EBP);
  /* 11fda10e pop ebp */
  EBP = (pop32());
  /* 11fda10f ret  */
  ESPCHK(0x11fd9d80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x11fda110 (780 bytes, 197 insns) */
void f_11fda110(void) {
  FTRACE(0x11fda110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda110 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda111 mov ebp, esp */
  EBP = (ESP);
  /* 11fda113 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11fda118 call 0x11fdfac0 */
  push32(0x11fda11du); f_11fdfac0();
L_11fda11d:;
  /* 11fda11d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda121 jne 0x11fda148 */
  if (!C.zf) goto L_11fda148;
  /* 11fda123 push 0x120094c0 */
  push32((uint32_t)(0x120094c0u));
  /* 11fda128 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fda12a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11fda12f push 0x120094b4 */
  push32((uint32_t)(0x120094b4u));
  /* 11fda134 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fda136 call 0x11fd9d80 */
  push32(0x11fda13bu); f_11fd9d80();
  /* 11fda13b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda13e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda141 jne 0x11fda148 */
  if (!C.zf) goto L_11fda148;
  /* 11fda143 call 0x11fd9c70 */
  push32(0x11fda148u); f_11fd9c70();
L_11fda148:;
  /* 11fda148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fda14a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fda14c jne 0x11fda11d */
  if (!C.zf) goto L_11fda11d;
  /* 11fda14e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11fda153 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11fda159 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda15a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fda15c call dword ptr [0x12011434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011434))), 0x11fda162u);
  /* 11fda162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fda164 jne 0x11fda17a */
  if (!C.zf) goto L_11fda17a;
  /* 11fda166 push 0x1200949c */
  push32((uint32_t)(0x1200949cu));
  /* 11fda16b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11fda171 push edx */
  push32((uint32_t)(EDX));
  /* 11fda172 call 0x11fdf8d0 */
  push32(0x11fda177u); f_11fdf8d0();
  /* 11fda177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fda17a:;
  /* 11fda17a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11fda180 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fda183 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fda186 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda187 call 0x11fdf750 */
  push32(0x11fda18cu); f_11fdf750();
  /* 11fda18c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda18f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda192 jbe 0x11fda1bd */
  if ((C.cf||C.zf)) goto L_11fda1bd;
  /* 11fda194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fda197 push edx */
  push32((uint32_t)(EDX));
  /* 11fda198 call 0x11fdf750 */
  push32(0x11fda19du); f_11fdf750();
  /* 11fda19d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda1a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fda1a3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11fda1a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fda1aa push 3 */
  push32((uint32_t)(0x3u));
  /* 11fda1ac push 0x12009498 */
  push32((uint32_t)(0x12009498u));
  /* 11fda1b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fda1b4 push eax */
  push32((uint32_t)(EAX));
  /* 11fda1b5 call 0x11fe0140 */
  push32(0x11fda1bau); f_11fe0140();
  /* 11fda1ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fda1bd:;
  /* 11fda1bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fda1c0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11fda1c6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda1cd je 0x11fda218 */
  if (C.zf) goto L_11fda218;
  /* 11fda1cf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11fda1d5 push edx */
  push32((uint32_t)(EDX));
  /* 11fda1d6 call 0x11fdf750 */
  push32(0x11fda1dbu); f_11fdf750();
  /* 11fda1db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda1de cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda1e1 jbe 0x11fda218 */
  if ((C.cf||C.zf)) goto L_11fda218;
  /* 11fda1e3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11fda1e9 push eax */
  push32((uint32_t)(EAX));
  /* 11fda1ea call 0x11fdf750 */
  push32(0x11fda1efu); f_11fdf750();
  /* 11fda1ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda1f2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11fda1f8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11fda1fc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11fda202 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fda204 push 0x12009498 */
  push32((uint32_t)(0x12009498u));
  /* 11fda209 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11fda20f push eax */
  push32((uint32_t)(EAX));
  /* 11fda210 call 0x11fe0140 */
  push32(0x11fda215u); f_11fe0140();
  /* 11fda215 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fda218:;
  /* 11fda218 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda21c jne 0x11fda22a */
  if (!C.zf) goto L_11fda22a;
  /* 11fda21e mov dword ptr [ebp - 0x1114], 0x12009424 */
  w32((uint32_t)(EBP + -0x1114), (0x12009424u));
  /* 11fda228 jmp 0x11fda234 */
  goto L_11fda234;
L_11fda22a:;
  /* 11fda22a mov dword ptr [ebp - 0x1114], 0x12009184 */
  w32((uint32_t)(EBP + -0x1114), (0x12009184u));
L_11fda234:;
  /* 11fda234 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fda237 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fda23a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fda23c je 0x11fda249 */
  if (C.zf) goto L_11fda249;
  /* 11fda23e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fda241 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11fda247 jmp 0x11fda253 */
  goto L_11fda253;
L_11fda249:;
  /* 11fda249 mov dword ptr [ebp - 0x1118], 0x12009184 */
  w32((uint32_t)(EBP + -0x1118), (0x12009184u));
L_11fda253:;
  /* 11fda253 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fda256 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fda259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fda25b je 0x11fda26f */
  if (C.zf) goto L_11fda26f;
  /* 11fda25d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda261 jne 0x11fda26f */
  if (!C.zf) goto L_11fda26f;
  /* 11fda263 mov dword ptr [ebp - 0x111c], 0x12009414 */
  w32((uint32_t)(EBP + -0x111c), (0x12009414u));
  /* 11fda26d jmp 0x11fda279 */
  goto L_11fda279;
L_11fda26f:;
  /* 11fda26f mov dword ptr [ebp - 0x111c], 0x12009184 */
  w32((uint32_t)(EBP + -0x111c), (0x12009184u));
L_11fda279:;
  /* 11fda279 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fda27c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda27f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fda281 je 0x11fda28f */
  if (C.zf) goto L_11fda28f;
  /* 11fda283 mov dword ptr [ebp - 0x1120], 0x12009410 */
  w32((uint32_t)(EBP + -0x1120), (0x12009410u));
  /* 11fda28d jmp 0x11fda299 */
  goto L_11fda299;
L_11fda28f:;
  /* 11fda28f mov dword ptr [ebp - 0x1120], 0x12009184 */
  w32((uint32_t)(EBP + -0x1120), (0x12009184u));
L_11fda299:;
  /* 11fda299 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda29d je 0x11fda2aa */
  if (C.zf) goto L_11fda2aa;
  /* 11fda29f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fda2a2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11fda2a8 jmp 0x11fda2b4 */
  goto L_11fda2b4;
L_11fda2aa:;
  /* 11fda2aa mov dword ptr [ebp - 0x1124], 0x12009184 */
  w32((uint32_t)(EBP + -0x1124), (0x12009184u));
L_11fda2b4:;
  /* 11fda2b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda2b8 je 0x11fda2c6 */
  if (C.zf) goto L_11fda2c6;
  /* 11fda2ba mov dword ptr [ebp - 0x1128], 0x12009408 */
  w32((uint32_t)(EBP + -0x1128), (0x12009408u));
  /* 11fda2c4 jmp 0x11fda2d0 */
  goto L_11fda2d0;
L_11fda2c6:;
  /* 11fda2c6 mov dword ptr [ebp - 0x1128], 0x12009184 */
  w32((uint32_t)(EBP + -0x1128), (0x12009184u));
L_11fda2d0:;
  /* 11fda2d0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda2d4 je 0x11fda2e1 */
  if (C.zf) goto L_11fda2e1;
  /* 11fda2d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fda2d9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11fda2df jmp 0x11fda2eb */
  goto L_11fda2eb;
L_11fda2e1:;
  /* 11fda2e1 mov dword ptr [ebp - 0x112c], 0x12009184 */
  w32((uint32_t)(EBP + -0x112c), (0x12009184u));
L_11fda2eb:;
  /* 11fda2eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda2ef je 0x11fda2fd */
  if (C.zf) goto L_11fda2fd;
  /* 11fda2f1 mov dword ptr [ebp - 0x1130], 0x12009400 */
  w32((uint32_t)(EBP + -0x1130), (0x12009400u));
  /* 11fda2fb jmp 0x11fda307 */
  goto L_11fda307;
L_11fda2fd:;
  /* 11fda2fd mov dword ptr [ebp - 0x1130], 0x12009184 */
  w32((uint32_t)(EBP + -0x1130), (0x12009184u));
L_11fda307:;
  /* 11fda307 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda30e je 0x11fda31e */
  if (C.zf) goto L_11fda31e;
  /* 11fda310 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11fda316 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11fda31c jmp 0x11fda328 */
  goto L_11fda328;
L_11fda31e:;
  /* 11fda31e mov dword ptr [ebp - 0x1134], 0x12009184 */
  w32((uint32_t)(EBP + -0x1134), (0x12009184u));
L_11fda328:;
  /* 11fda328 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda32f je 0x11fda33d */
  if (C.zf) goto L_11fda33d;
  /* 11fda331 mov dword ptr [ebp - 0x1138], 0x120093f4 */
  w32((uint32_t)(EBP + -0x1138), (0x120093f4u));
  /* 11fda33b jmp 0x11fda347 */
  goto L_11fda347;
L_11fda33d:;
  /* 11fda33d mov dword ptr [ebp - 0x1138], 0x12009184 */
  w32((uint32_t)(EBP + -0x1138), (0x12009184u));
L_11fda347:;
  /* 11fda347 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11fda34d push edx */
  push32((uint32_t)(EDX));
  /* 11fda34e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11fda354 push eax */
  push32((uint32_t)(EAX));
  /* 11fda355 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11fda35b push ecx */
  push32((uint32_t)(ECX));
  /* 11fda35c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11fda362 push edx */
  push32((uint32_t)(EDX));
  /* 11fda363 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11fda369 push eax */
  push32((uint32_t)(EAX));
  /* 11fda36a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11fda370 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda371 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11fda377 push edx */
  push32((uint32_t)(EDX));
  /* 11fda378 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11fda37e push eax */
  push32((uint32_t)(EAX));
  /* 11fda37f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11fda385 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda386 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11fda38c push edx */
  push32((uint32_t)(EDX));
  /* 11fda38d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fda390 push eax */
  push32((uint32_t)(EAX));
  /* 11fda391 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda394 mov edx, dword ptr [ecx*4 + 0x1200cddc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cddc)));
  /* 11fda39b push edx */
  push32((uint32_t)(EDX));
  /* 11fda39c push 0x120093a0 */
  push32((uint32_t)(0x120093a0u));
  /* 11fda3a1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11fda3a6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11fda3ac push eax */
  push32((uint32_t)(EAX));
  /* 11fda3ad call 0x11fdf7d0 */
  push32(0x11fda3b2u); f_11fdf7d0();
  /* 11fda3b2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda3b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fda3b7 jge 0x11fda3cd */
  if ((C.sf==C.of)) goto L_11fda3cd;
  /* 11fda3b9 push 0x12009304 */
  push32((uint32_t)(0x12009304u));
  /* 11fda3be lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11fda3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda3c5 call 0x11fdf8d0 */
  push32(0x11fda3cau); f_11fdf8d0();
  /* 11fda3ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fda3cd:;
  /* 11fda3cd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11fda3d2 push 0x1200937c */
  push32((uint32_t)(0x1200937cu));
  /* 11fda3d7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11fda3dd push edx */
  push32((uint32_t)(EDX));
  /* 11fda3de call 0x11fe0080 */
  push32(0x11fda3e3u); f_11fe0080();
  /* 11fda3e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda3e6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11fda3ec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda3f3 jne 0x11fda406 */
  if (!C.zf) goto L_11fda406;
  /* 11fda3f5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11fda3f7 call 0x11fdfdc0 */
  push32(0x11fda3fcu); f_11fdfdc0();
  /* 11fda3fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda3ff push 3 */
  push32((uint32_t)(0x3u));
  /* 11fda401 call 0x11fde230 */
  push32(0x11fda406u); f_11fde230();
L_11fda406:;
  /* 11fda406 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda40d jne 0x11fda416 */
  if (!C.zf) goto L_11fda416;
  /* 11fda40f mov eax, 1 */
  EAX = (0x1u);
  /* 11fda414 jmp 0x11fda418 */
  goto L_11fda418;
L_11fda416:;
  /* 11fda416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fda418:;
  /* 11fda418 mov esp, ebp */
  ESP = (EBP);
  /* 11fda41a pop ebp */
  EBP = (pop32());
  /* 11fda41b ret  */
  ESPCHK(0x11fda110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a61c @ 0x11fda61c (25 bytes, 7 insns) */
void f_11fda61c(void) {
  FTRACE(0x11fda61cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda61c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11fda621 je 0x11fda629 */
  if (C.zf) goto L_11fda629;
  /* 11fda623 mov eax, 7 */
  EAX = (0x7u);
  /* 11fda628 ret  */
  ESPCHK(0x11fda61cu, _esp0);
  ESP += 4; return;
L_11fda629:;
  /* 11fda629 fadd qword ptr [0x120094e0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x120094e0)));
  /* 11fda62f mov eax, 1 */
  EAX = (0x1u);
  /* 11fda634 ret  */
  ESPCHK(0x11fda61cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11fda635 (67 bytes, 21 insns) */
void f_11fda635(void) {
  FTRACE(0x11fda635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda635 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fda638 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fda63d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda642 je 0x11fda647 */
  if (C.zf) goto L_11fda647;
  /* 11fda644 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11fda646 ret  */
  ESPCHK(0x11fda635u, _esp0);
  ESP += 4; return;
L_11fda647:;
  /* 11fda647 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fda64a sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fda64d or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fda652 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11fda656 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fda659 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11fda65b shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11fda65f shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11fda662 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11fda666 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11fda669 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11fda66c add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda66f test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11fda674 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fda677 ret  */
  ESPCHK(0x11fda635u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a678 @ 0x11fda678 (22 bytes, 7 insns) */
void f_11fda678(void) {
  FTRACE(0x11fda678u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda678 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fda67c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fda681 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda686 je 0x11fda689 */
  if (C.zf) goto L_11fda689;
  /* 11fda688 ret  */
  ESPCHK(0x11fda678u, _esp0);
  ESP += 4; return;
L_11fda689:;
  /* 11fda689 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fda68d ret  */
  ESPCHK(0x11fda678u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11fda69b (42 bytes, 16 insns) */
void f_11fda69b(void) {
  FTRACE(0x11fda69bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda69b mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11fda69f cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11fda6a3 je 0x11fda6c3 */
  if (C.zf) goto L_11fda6c3;
  /* 11fda6a5 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11fda6a9 je 0x11fda6c0 */
  if (C.zf) goto L_11fda6c0;
  /* 11fda6ab wait  */
  /* wait (no observable integer/reg state) */
  /* 11fda6ac fnstsw ax */
  AX = fpu_status();
  /* 11fda6ae and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11fda6b2 je 0x11fda6c0 */
  if (C.zf) goto L_11fda6c0;
  /* 11fda6b4 mov eax, 8 */
  EAX = (0x8u);
  /* 11fda6b9 call 0x11fda797 */
  push32(0x11fda6beu); f_11fda797();
  /* 11fda6be pop edx */
  EDX = (pop32());
  /* 11fda6bf ret  */
  ESPCHK(0x11fda69bu, _esp0);
  ESP += 4; return;
L_11fda6c0:;
  /* 11fda6c0 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11fda6c3:;
  /* 11fda6c3 pop edx */
  EDX = (pop32());
  /* 11fda6c4 ret  */
  ESPCHK(0x11fda69bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x11fda780 (23 bytes, 9 insns) */
void f_11fda780(void) {
  FTRACE(0x11fda780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda780 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda781 mov ebp, esp */
  EBP = (ESP);
  /* 11fda783 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda786 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fda789 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fda78c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fda78f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fda792 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fda795 jmp 0x11fda7a0 */
  jmp_ind(0x11fda7a0u); return;
}

/* __startOneArgErrorHandling @ 0x11fda797 (60 bytes, 23 insns) */
void f_11fda797(void) {
  FTRACE(0x11fda797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda797 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda798 mov ebp, esp */
  EBP = (ESP);
  /* 11fda79a add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda79d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fda7a0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11fda7a3 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11fda7a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fda7a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fda7ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fda7af mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fda7b2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11fda7b5 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11fda7b8 push eax */
  push32((uint32_t)(EAX));
  /* 11fda7b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda7ba push edx */
  push32((uint32_t)(EDX));
  /* 11fda7bb call 0x11fe0240 */
  push32(0x11fda7c0u); f_11fe0240();
  /* 11fda7c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda7c3 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11fda7c6 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11fda7cc je 0x11fda7d1 */
  if (C.zf) goto L_11fda7d1;
  /* 11fda7ce fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11fda7d1:;
  /* 11fda7d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fda7d2 ret  */
  ESPCHK(0x11fda797u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11fda7e0 (23 bytes, 8 insns) */
void f_11fda7e0(void) {
  FTRACE(0x11fda7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda7e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fda7e3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11fda7e8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11fda7ed call 0x11fe0450 */
  push32(0x11fda7f2u); f_11fe0450();
  /* 11fda7f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda7f5 pop ebp */
  EBP = (pop32());
  /* 11fda7f6 ret  */
  ESPCHK(0x11fda7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x11fda800 (94 bytes, 30 insns) */
void f_11fda800(void) {
  FTRACE(0x11fda800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda800 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda801 mov ebp, esp */
  EBP = (ESP);
  /* 11fda803 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fda806 push ebx */
  push32((uint32_t)(EBX));
  /* 11fda807 push esi */
  push32((uint32_t)(ESI));
  /* 11fda808 push edi */
  push32((uint32_t)(EDI));
  /* 11fda809 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11fda810 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11fda817 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11fda81e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11fda825 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11fda828 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11fda82b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11fda82e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11fda831 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11fda834 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11fda837 fcomp qword ptr [0x12009528] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009528)));
  (void)fpu_pop();
  /* 11fda83d fnstsw ax */
  AX = fpu_status();
  /* 11fda83f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11fda842 jne 0x11fda84d */
  if (!C.zf) goto L_11fda84d;
  /* 11fda844 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11fda84b jmp 0x11fda854 */
  goto L_11fda854;
L_11fda84d:;
  /* 11fda84d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11fda854:;
  /* 11fda854 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fda857 pop edi */
  EDI = (pop32());
  /* 11fda858 pop esi */
  ESI = (pop32());
  /* 11fda859 pop ebx */
  EBX = (pop32());
  /* 11fda85a mov esp, ebp */
  ESP = (EBP);
  /* 11fda85c pop ebp */
  EBP = (pop32());
  /* 11fda85d ret  */
  ESPCHK(0x11fda800u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11fda860 (66 bytes, 22 insns) */
void f_11fda860(void) {
  FTRACE(0x11fda860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda861 mov ebp, esp */
  EBP = (ESP);
  /* 11fda863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fda866 push 0x1200954c */
  push32((uint32_t)(0x1200954cu));
  /* 11fda86b call dword ptr [0x12011438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011438))), 0x11fda871u);
  /* 11fda871 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fda874 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda878 je 0x11fda899 */
  if (C.zf) goto L_11fda899;
  /* 11fda87a push 0x12009530 */
  push32((uint32_t)(0x12009530u));
  /* 11fda87f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fda882 push eax */
  push32((uint32_t)(EAX));
  /* 11fda883 call dword ptr [0x1201131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201131c))), 0x11fda889u);
  /* 11fda889 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fda88c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda890 je 0x11fda899 */
  if (C.zf) goto L_11fda899;
  /* 11fda892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fda894 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11fda897u);
  /* 11fda897 jmp 0x11fda89e */
  goto L_11fda89e;
L_11fda899:;
  /* 11fda899 call 0x11fda800 */
  push32(0x11fda89eu); f_11fda800();
L_11fda89e:;
  /* 11fda89e mov esp, ebp */
  ESP = (EBP);
  /* 11fda8a0 pop ebp */
  EBP = (pop32());
  /* 11fda8a1 ret  */
  ESPCHK(0x11fda860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8b0 @ 0x11fda8b0 (168 bytes, 59 insns) */
void f_11fda8b0(void) {
  FTRACE(0x11fda8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fda8b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fda8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda8b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda8bc push ecx */
  push32((uint32_t)(ECX));
  /* 11fda8bd call 0x11fe0930 */
  push32(0x11fda8c2u); f_11fe0930();
  /* 11fda8c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda8c5 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda8c8 je 0x11fda910 */
  if (C.zf) goto L_11fda910;
L_11fda8ca:;
  /* 11fda8ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda8cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda8d0 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fda8d3 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda8da jle 0x11fda8f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11fda8f2;
  /* 11fda8dc push 4 */
  push32((uint32_t)(0x4u));
  /* 11fda8de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda8e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fda8e5 call 0x11fe0860 */
  push32(0x11fda8eau); f_11fe0860();
  /* 11fda8ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda8ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fda8f0 jmp 0x11fda90a */
  goto L_11fda90a;
L_11fda8f2:;
  /* 11fda8f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda8f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fda8f8 mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fda8fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fda900 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fda904 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fda907 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fda90a:;
  /* 11fda90a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda90e jne 0x11fda8ca */
  if (!C.zf) goto L_11fda8ca;
L_11fda910:;
  /* 11fda910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda913 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fda915 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fda918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda91b mov al, byte ptr [0x1200cfe4] */
  AL = (r8((uint32_t)(0x1200cfe4)));
  /* 11fda920 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11fda922 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda925 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda928 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fda92b:;
  /* 11fda92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda92e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fda930 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11fda933 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda936 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fda939 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11fda93b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11fda93e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11fda941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda944 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fda947 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda94a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda94d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fda950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fda952 jne 0x11fda92b */
  if (!C.zf) goto L_11fda92b;
  /* 11fda954 mov esp, ebp */
  ESP = (EBP);
  /* 11fda956 pop ebp */
  EBP = (pop32());
  /* 11fda957 ret  */
  ESPCHK(0x11fda8b0u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11fda960 (215 bytes, 78 insns) */
void f_11fda960(void) {
  FTRACE(0x11fda960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fda960 push ebp */
  push32((uint32_t)(EBP));
  /* 11fda961 mov ebp, esp */
  EBP = (ESP);
  /* 11fda963 push ecx */
  push32((uint32_t)(ECX));
L_11fda964:;
  /* 11fda964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda967 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda96a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fda96c je 0x11fda98a */
  if (C.zf) goto L_11fda98a;
  /* 11fda96e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda971 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fda974 movsx ecx, byte ptr [0x1200cfe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200cfe4))));
  /* 11fda97b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda97d je 0x11fda98a */
  if (C.zf) goto L_11fda98a;
  /* 11fda97f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda982 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda985 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fda988 jmp 0x11fda964 */
  goto L_11fda964;
L_11fda98a:;
  /* 11fda98a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda98d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda990 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda993 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda996 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fda999 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fda99b je 0x11fdaa33 */
  if (C.zf) goto L_11fdaa33;
L_11fda9a1:;
  /* 11fda9a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9a4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda9a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fda9a9 je 0x11fda9cc */
  if (C.zf) goto L_11fda9cc;
  /* 11fda9ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fda9b1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda9b4 je 0x11fda9cc */
  if (C.zf) goto L_11fda9cc;
  /* 11fda9b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fda9bc cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda9bf je 0x11fda9cc */
  if (C.zf) goto L_11fda9cc;
  /* 11fda9c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fda9c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fda9ca jmp 0x11fda9a1 */
  goto L_11fda9a1;
L_11fda9cc:;
  /* 11fda9cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fda9d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fda9d8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11fda9db:;
  /* 11fda9db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda9e1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fda9e4 jne 0x11fda9f1 */
  if (!C.zf) goto L_11fda9f1;
  /* 11fda9e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fda9ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fda9ef jmp 0x11fda9db */
  goto L_11fda9db;
L_11fda9f1:;
  /* 11fda9f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fda9f4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fda9f7 movsx edx, byte ptr [0x1200cfe4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200cfe4))));
  /* 11fda9fe cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaa00 jne 0x11fdaa0b */
  if (!C.zf) goto L_11fdaa0b;
  /* 11fdaa02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaa05 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdaa08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fdaa0b:;
  /* 11fdaa0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaa0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaa11 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fdaa14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaa17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaa1a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fdaa1c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fdaa1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaa21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fdaa24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaa27 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaa2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdaa2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdaa2f je 0x11fdaa33 */
  if (C.zf) goto L_11fdaa33;
  /* 11fdaa31 jmp 0x11fdaa0b */
  goto L_11fdaa0b;
L_11fdaa33:;
  /* 11fdaa33 mov esp, ebp */
  ESP = (EBP);
  /* 11fdaa35 pop ebp */
  EBP = (pop32());
  /* 11fdaa36 ret  */
  ESPCHK(0x11fda960u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11fdaa40 (45 bytes, 16 insns) */
void f_11fdaa40(void) {
  FTRACE(0x11fdaa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdaa40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdaa41 mov ebp, esp */
  EBP = (ESP);
  /* 11fdaa43 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaa44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaa47 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11fdaa49 fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fdaa4f fnstsw ax */
  AX = fpu_status();
  /* 11fdaa51 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11fdaa54 jne 0x11fdaa5f */
  if (!C.zf) goto L_11fdaa5f;
  /* 11fdaa56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdaa5d jmp 0x11fdaa66 */
  goto L_11fdaa66;
L_11fdaa5f:;
  /* 11fdaa5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdaa66:;
  /* 11fdaa66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaa69 mov esp, ebp */
  ESP = (EBP);
  /* 11fdaa6b pop ebp */
  EBP = (pop32());
  /* 11fdaa6c ret  */
  ESPCHK(0x11fdaa40u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11fdaa70 (72 bytes, 29 insns) */
void f_11fdaa70(void) {
  FTRACE(0x11fdaa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdaa70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdaa71 mov ebp, esp */
  EBP = (ESP);
  /* 11fdaa73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdaa76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaa7a je 0x11fdaa9c */
  if (C.zf) goto L_11fdaa9c;
  /* 11fdaa7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdaa7f push eax */
  push32((uint32_t)(EAX));
  /* 11fdaa80 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fdaa83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaa84 call 0x11fe1220 */
  push32(0x11fdaa89u); f_11fe1220();
  /* 11fdaa89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaa8c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaa8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdaa92 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fdaa94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaa97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fdaa9a jmp 0x11fdaab4 */
  goto L_11fdaab4;
L_11fdaa9c:;
  /* 11fdaa9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdaa9f push edx */
  push32((uint32_t)(EDX));
  /* 11fdaaa0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fdaaa3 push eax */
  push32((uint32_t)(EAX));
  /* 11fdaaa4 call 0x11fe12a0 */
  push32(0x11fdaaa9u); f_11fe12a0();
  /* 11fdaaa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaaac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaaaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdaab2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11fdaab4:;
  /* 11fdaab4 mov esp, ebp */
  ESP = (EBP);
  /* 11fdaab6 pop ebp */
  EBP = (pop32());
  /* 11fdaab7 ret  */
  ESPCHK(0x11fdaa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x11fdaac0 (118 bytes, 49 insns) */
void f_11fdaac0(void) {
  FTRACE(0x11fdaac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdaac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdaac1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdaac3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdaac6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11fdaac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdaacc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11fdaacf push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaad0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11fdaad3 push edx */
  push32((uint32_t)(EDX));
  /* 11fdaad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaad7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdaada push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaadb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11fdaadd push edx */
  push32((uint32_t)(EDX));
  /* 11fdaade call 0x11fe13e0 */
  push32(0x11fdaae3u); f_11fe13e0();
  /* 11fdaae3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaae9 push eax */
  push32((uint32_t)(EAX));
  /* 11fdaaea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdaaed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaaf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaaf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaaf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdaaf6 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaaf9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11fdaafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaaff add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdab01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdab03 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdab07 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11fdab0a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdab0c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdab0d call 0x11fe12e0 */
  push32(0x11fdab12u); f_11fe12e0();
  /* 11fdab12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdab17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdab1a push eax */
  push32((uint32_t)(EAX));
  /* 11fdab1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdab1e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdab1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdab22 push edx */
  push32((uint32_t)(EDX));
  /* 11fdab23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdab26 push eax */
  push32((uint32_t)(EAX));
  /* 11fdab27 call 0x11fdab40 */
  push32(0x11fdab2cu); f_11fdab40();
  /* 11fdab2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdab2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdab32 mov esp, ebp */
  ESP = (EBP);
  /* 11fdab34 pop ebp */
  EBP = (pop32());
  /* 11fdab35 ret  */
  ESPCHK(0x11fdaac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab40 @ 0x11fdab40 (358 bytes, 128 insns) */
void f_11fdab40(void) {
  FTRACE(0x11fdab40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdab40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdab41 mov ebp, esp */
  EBP = (ESP);
  /* 11fdab43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdab46 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11fdab4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdab4c je 0x11fdab77 */
  if (C.zf) goto L_11fdab77;
  /* 11fdab4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdab51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdab53 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdab56 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11fdab59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdab5c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdab5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdab61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdab63 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdab67 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11fdab6a push ecx */
  push32((uint32_t)(ECX));
  /* 11fdab6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdab6e push edx */
  push32((uint32_t)(EDX));
  /* 11fdab6f call 0x11fdafb0 */
  push32(0x11fdab74u); f_11fdafb0();
  /* 11fdab74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdab77:;
  /* 11fdab77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdab7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdab7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdab80 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdab83 jne 0x11fdab94 */
  if (!C.zf) goto L_11fdab94;
  /* 11fdab85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdab88 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11fdab8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdab8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdab91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdab94:;
  /* 11fdab94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdab98 jle 0x11fdabb8 */
  if ((C.zf||C.sf!=C.of)) goto L_11fdabb8;
  /* 11fdab9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdab9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaba0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fdaba3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fdaba5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaba8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdabab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdabae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdabb1 mov al, byte ptr [0x1200cfe4] */
  AL = (r8((uint32_t)(0x1200cfe4)));
  /* 11fdabb6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11fdabb8:;
  /* 11fdabb8 push 0x12009560 */
  push32((uint32_t)(0x12009560u));
  /* 11fdabbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdabc0 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdabc3 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11fdabc7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdabc9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdabcb inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fdabcc add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdabce push ecx */
  push32((uint32_t)(ECX));
  /* 11fdabcf call 0x11fdf8d0 */
  push32(0x11fdabd4u); f_11fdf8d0();
  /* 11fdabd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdabd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdabda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdabde je 0x11fdabe6 */
  if (C.zf) goto L_11fdabe6;
  /* 11fdabe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdabe3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11fdabe6:;
  /* 11fdabe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdabe9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdabec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdabef mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdabf2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdabf5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fdabf8 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdabfb je 0x11fdac9f */
  if (C.zf) goto L_11fdac9f;
  /* 11fdac01 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdac04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdac07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdac0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdac0d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdac11 jge 0x11fdac21 */
  if ((C.sf==C.of)) goto L_11fdac21;
  /* 11fdac13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdac16 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdac18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fdac1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac1e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11fdac21:;
  /* 11fdac21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdac27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdac2a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdac2e jl 0x11fdac55 */
  if ((C.sf!=C.of)) goto L_11fdac55;
  /* 11fdac30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdac33 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fdac34 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11fdac39 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fdac3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac3e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11fdac40 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fdac42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac45 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fdac47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdac4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fdac4b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11fdac50 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fdac52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fdac55:;
  /* 11fdac55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdac5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdac5e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdac62 jl 0x11fdac89 */
  if ((C.sf!=C.of)) goto L_11fdac89;
  /* 11fdac64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdac67 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fdac68 mov ecx, 0xa */
  ECX = (0xau);
  /* 11fdac6d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fdac6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac72 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11fdac74 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fdac76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac79 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fdac7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdac7e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fdac7f mov ecx, 0xa */
  ECX = (0xau);
  /* 11fdac84 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fdac86 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fdac89:;
  /* 11fdac89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdac8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdac92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac95 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fdac97 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fdac9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdac9d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11fdac9f:;
  /* 11fdac9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaca2 mov esp, ebp */
  ESP = (EBP);
  /* 11fdaca4 pop ebp */
  EBP = (pop32());
  /* 11fdaca5 ret  */
  ESPCHK(0x11fdab40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb0 @ 0x11fdacb0 (106 bytes, 44 insns) */
void f_11fdacb0(void) {
  FTRACE(0x11fdacb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdacb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdacb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdacb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdacb6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11fdacb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdacbc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11fdacbf push ecx */
  push32((uint32_t)(ECX));
  /* 11fdacc0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11fdacc3 push edx */
  push32((uint32_t)(EDX));
  /* 11fdacc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdacc7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdacca push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaccb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11fdaccd push edx */
  push32((uint32_t)(EDX));
  /* 11fdacce call 0x11fe13e0 */
  push32(0x11fdacd3u); f_11fe13e0();
  /* 11fdacd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdacd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdacd9 push eax */
  push32((uint32_t)(EAX));
  /* 11fdacda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdacdd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdace0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdace3 push edx */
  push32((uint32_t)(EDX));
  /* 11fdace4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdace7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdace9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdacec sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fdacef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdacf2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdacf4 push edx */
  push32((uint32_t)(EDX));
  /* 11fdacf5 call 0x11fe12e0 */
  push32(0x11fdacfau); f_11fe12e0();
  /* 11fdacfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdacfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdacff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdad02 push eax */
  push32((uint32_t)(EAX));
  /* 11fdad03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdad06 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdad07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdad0a push edx */
  push32((uint32_t)(EDX));
  /* 11fdad0b call 0x11fdad20 */
  push32(0x11fdad10u); f_11fdad20();
  /* 11fdad10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdad13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdad16 mov esp, ebp */
  ESP = (EBP);
  /* 11fdad18 pop ebp */
  EBP = (pop32());
  /* 11fdad19 ret  */
  ESPCHK(0x11fdacb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad20 @ 0x11fdad20 (317 bytes, 113 insns) */
void f_11fdad20(void) {
  FTRACE(0x11fdad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdad20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdad21 mov ebp, esp */
  EBP = (ESP);
  /* 11fdad23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdad26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdad29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdad2c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdad2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fdad32 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11fdad36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdad38 je 0x11fdad73 */
  if (C.zf) goto L_11fdad73;
  /* 11fdad3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdad3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdad3f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdad42 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fdad45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdad48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdad4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdad4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdad50 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdad53 jne 0x11fdad73 */
  if (!C.zf) goto L_11fdad73;
  /* 11fdad55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdad58 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdad5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fdad5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdad61 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11fdad64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdad67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdad6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdad6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdad70 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11fdad73:;
  /* 11fdad73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdad76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fdad79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdad7c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdad7f jne 0x11fdad90 */
  if (!C.zf) goto L_11fdad90;
  /* 11fdad81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdad84 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11fdad87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdad8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdad8d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fdad90:;
  /* 11fdad90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdad93 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdad97 jg 0x11fdadb8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fdadb8;
  /* 11fdad99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdad9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdad9e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdad9f call 0x11fdafb0 */
  push32(0x11fdada4u); f_11fdafb0();
  /* 11fdada4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdada7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdadaa mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11fdadad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdadb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdadb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdadb6 jmp 0x11fdadc4 */
  goto L_11fdadc4;
L_11fdadb8:;
  /* 11fdadb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdadbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdadbe add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdadc1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fdadc4:;
  /* 11fdadc4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdadc8 jle 0x11fdae56 */
  if ((C.zf||C.sf!=C.of)) goto L_11fdae56;
  /* 11fdadce push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdadd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdadd3 push eax */
  push32((uint32_t)(EAX));
  /* 11fdadd4 call 0x11fdafb0 */
  push32(0x11fdadd9u); f_11fdafb0();
  /* 11fdadd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaddf mov dl, byte ptr [0x1200cfe4] */
  DL = (r8((uint32_t)(0x1200cfe4)));
  /* 11fdade5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11fdade7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdadea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaded mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdadf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdadf3 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdadf7 jge 0x11fdae56 */
  if ((C.sf==C.of)) goto L_11fdae56;
  /* 11fdadf9 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11fdadfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdadff je 0x11fdae0e */
  if (C.zf) goto L_11fdae0e;
  /* 11fdae01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdae04 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdae07 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdae09 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fdae0c jmp 0x11fdae34 */
  goto L_11fdae34;
L_11fdae0e:;
  /* 11fdae0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdae11 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdae14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdae16 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdae19 jge 0x11fdae23 */
  if ((C.sf==C.of)) goto L_11fdae23;
  /* 11fdae1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdae1e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fdae21 jmp 0x11fdae2e */
  goto L_11fdae2e;
L_11fdae23:;
  /* 11fdae23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdae26 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdae29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fdae2b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fdae2e:;
  /* 11fdae2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdae31 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11fdae34:;
  /* 11fdae34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdae37 push edx */
  push32((uint32_t)(EDX));
  /* 11fdae38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdae3b push eax */
  push32((uint32_t)(EAX));
  /* 11fdae3c call 0x11fdafb0 */
  push32(0x11fdae41u); f_11fdafb0();
  /* 11fdae41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdae44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdae47 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdae48 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11fdae4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdae4d push edx */
  push32((uint32_t)(EDX));
  /* 11fdae4e call 0x11fe15d0 */
  push32(0x11fdae53u); f_11fe15d0();
  /* 11fdae53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdae56:;
  /* 11fdae56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdae59 mov esp, ebp */
  ESP = (EBP);
  /* 11fdae5b pop ebp */
  EBP = (pop32());
  /* 11fdae5c ret  */
  ESPCHK(0x11fdad20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae60 @ 0x11fdae60 (229 bytes, 89 insns) */
void f_11fdae60(void) {
  FTRACE(0x11fdae60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdae60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdae61 mov ebp, esp */
  EBP = (ESP);
  /* 11fdae63 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdae66 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11fdae6a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11fdae6d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11fdae70 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11fdae73 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdae74 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11fdae77 push edx */
  push32((uint32_t)(EDX));
  /* 11fdae78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdae7b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdae7e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdae7f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11fdae81 push edx */
  push32((uint32_t)(EDX));
  /* 11fdae82 call 0x11fe13e0 */
  push32(0x11fdae87u); f_11fe13e0();
  /* 11fdae87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdae8a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdae8d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdae90 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdae93 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11fdae96 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdae99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdae9b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdae9e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11fdaea1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaea4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaea6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdaea9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdaeac push edx */
  push32((uint32_t)(EDX));
  /* 11fdaead mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdaeb0 push eax */
  push32((uint32_t)(EAX));
  /* 11fdaeb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaeb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaeb5 call 0x11fe12e0 */
  push32(0x11fdaebau); f_11fe12e0();
  /* 11fdaeba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaebd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdaec0 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdaec3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdaec6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdaec8 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaecb setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11fdaece mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11fdaed1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdaed4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdaed7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdaeda mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11fdaedd cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaee1 jl 0x11fdaeeb */
  if ((C.sf!=C.of)) goto L_11fdaeeb;
  /* 11fdaee3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fdaee6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaee9 jl 0x11fdaf07 */
  if ((C.sf!=C.of)) goto L_11fdaf07;
L_11fdaeeb:;
  /* 11fdaeeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdaeed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdaef0 push edx */
  push32((uint32_t)(EDX));
  /* 11fdaef1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdaef4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdaef5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdaef8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaef9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaefc push edx */
  push32((uint32_t)(EDX));
  /* 11fdaefd call 0x11fdab40 */
  push32(0x11fdaf02u); f_11fdab40();
  /* 11fdaf02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaf05 jmp 0x11fdaf41 */
  goto L_11fdaf41;
L_11fdaf07:;
  /* 11fdaf07 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11fdaf0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdaf0d je 0x11fdaf2b */
  if (C.zf) goto L_11fdaf2b;
L_11fdaf0f:;
  /* 11fdaf0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaf12 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fdaf15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaf18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaf1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdaf1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdaf20 je 0x11fdaf24 */
  if (C.zf) goto L_11fdaf24;
  /* 11fdaf22 jmp 0x11fdaf0f */
  goto L_11fdaf0f;
L_11fdaf24:;
  /* 11fdaf24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdaf27 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11fdaf2b:;
  /* 11fdaf2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdaf2d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fdaf30 push edx */
  push32((uint32_t)(EDX));
  /* 11fdaf31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdaf34 push eax */
  push32((uint32_t)(EAX));
  /* 11fdaf35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaf38 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaf39 call 0x11fdad20 */
  push32(0x11fdaf3eu); f_11fdad20();
  /* 11fdaf3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdaf41:;
  /* 11fdaf41 mov esp, ebp */
  ESP = (EBP);
  /* 11fdaf43 pop ebp */
  EBP = (pop32());
  /* 11fdaf44 ret  */
  ESPCHK(0x11fdae60u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11fdaf50 (95 bytes, 40 insns) */
void f_11fdaf50(void) {
  FTRACE(0x11fdaf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdaf50 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdaf51 mov ebp, esp */
  EBP = (ESP);
  /* 11fdaf53 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaf57 je 0x11fdaf5f */
  if (C.zf) goto L_11fdaf5f;
  /* 11fdaf59 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaf5d jne 0x11fdaf79 */
  if (!C.zf) goto L_11fdaf79;
L_11fdaf5f:;
  /* 11fdaf5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdaf62 push eax */
  push32((uint32_t)(EAX));
  /* 11fdaf63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdaf66 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaf67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaf6a push edx */
  push32((uint32_t)(EDX));
  /* 11fdaf6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaf6e push eax */
  push32((uint32_t)(EAX));
  /* 11fdaf6f call 0x11fdaac0 */
  push32(0x11fdaf74u); f_11fdaac0();
  /* 11fdaf74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaf77 jmp 0x11fdafad */
  goto L_11fdafad;
L_11fdaf79:;
  /* 11fdaf79 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdaf7d jne 0x11fdaf95 */
  if (!C.zf) goto L_11fdaf95;
  /* 11fdaf7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdaf82 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaf83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdaf86 push edx */
  push32((uint32_t)(EDX));
  /* 11fdaf87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdaf8a push eax */
  push32((uint32_t)(EAX));
  /* 11fdaf8b call 0x11fdacb0 */
  push32(0x11fdaf90u); f_11fdacb0();
  /* 11fdaf90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdaf93 jmp 0x11fdafad */
  goto L_11fdafad;
L_11fdaf95:;
  /* 11fdaf95 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdaf98 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaf99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdaf9c push edx */
  push32((uint32_t)(EDX));
  /* 11fdaf9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdafa0 push eax */
  push32((uint32_t)(EAX));
  /* 11fdafa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdafa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdafa5 call 0x11fdae60 */
  push32(0x11fdafaau); f_11fdae60();
  /* 11fdafaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdafad:;
  /* 11fdafad pop ebp */
  EBP = (pop32());
  /* 11fdafae ret  */
  ESPCHK(0x11fdaf50u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11fdafb0 (46 bytes, 19 insns) */
void f_11fdafb0(void) {
  FTRACE(0x11fdafb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdafb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdafb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdafb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdafb7 je 0x11fdafdc */
  if (C.zf) goto L_11fdafdc;
  /* 11fdafb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdafbc push eax */
  push32((uint32_t)(EAX));
  /* 11fdafbd call 0x11fdf750 */
  push32(0x11fdafc2u); f_11fdf750();
  /* 11fdafc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdafc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdafc8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdafc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdafcc push ecx */
  push32((uint32_t)(ECX));
  /* 11fdafcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdafd0 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdafd3 push edx */
  push32((uint32_t)(EDX));
  /* 11fdafd4 call 0x11fe1630 */
  push32(0x11fdafd9u); f_11fe1630();
  /* 11fdafd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdafdc:;
  /* 11fdafdc pop ebp */
  EBP = (pop32());
  /* 11fdafdd ret  */
  ESPCHK(0x11fdafb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe0 @ 0x11fdafe0 (55 bytes, 16 insns) */
void f_11fdafe0(void) {
  FTRACE(0x11fdafe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdafe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdafe1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdafe3 mov eax, dword ptr [0x1200ce7c] */
  EAX = (r32((uint32_t)(0x1200ce7c)));
  /* 11fdafe8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdafe9 call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fdafefu);
  /* 11fdafef mov ecx, dword ptr [0x1200ce6c] */
  ECX = (r32((uint32_t)(0x1200ce6c)));
  /* 11fdaff5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdaff6 call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fdaffcu);
  /* 11fdaffc mov edx, dword ptr [0x1200ce5c] */
  EDX = (r32((uint32_t)(0x1200ce5c)));
  /* 11fdb002 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb003 call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fdb009u);
  /* 11fdb009 mov eax, dword ptr [0x1200ce3c] */
  EAX = (r32((uint32_t)(0x1200ce3c)));
  /* 11fdb00e push eax */
  push32((uint32_t)(EAX));
  /* 11fdb00f call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fdb015u);
  /* 11fdb015 pop ebp */
  EBP = (pop32());
  /* 11fdb016 ret  */
  ESPCHK(0x11fdafe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x11fdb020 (159 bytes, 47 insns) */
void f_11fdb020(void) {
  FTRACE(0x11fdb020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb020 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb021 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb023 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdb02b jmp 0x11fdb036 */
  goto L_11fdb036;
L_11fdb02d:;
  /* 11fdb02d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb030 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdb036:;
  /* 11fdb036 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb03a jge 0x11fdb089 */
  if ((C.sf==C.of)) goto L_11fdb089;
  /* 11fdb03c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb03f cmp dword ptr [ecx*4 + 0x1200ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1200ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb047 je 0x11fdb087 */
  if (C.zf) goto L_11fdb087;
  /* 11fdb049 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb04d je 0x11fdb087 */
  if (C.zf) goto L_11fdb087;
  /* 11fdb04f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb053 je 0x11fdb087 */
  if (C.zf) goto L_11fdb087;
  /* 11fdb055 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb059 je 0x11fdb087 */
  if (C.zf) goto L_11fdb087;
  /* 11fdb05b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb05f je 0x11fdb087 */
  if (C.zf) goto L_11fdb087;
  /* 11fdb061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb064 mov eax, dword ptr [edx*4 + 0x1200ce38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1200ce38)));
  /* 11fdb06b push eax */
  push32((uint32_t)(EAX));
  /* 11fdb06c call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fdb072u);
  /* 11fdb072 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb077 mov edx, dword ptr [ecx*4 + 0x1200ce38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200ce38)));
  /* 11fdb07e push edx */
  push32((uint32_t)(EDX));
  /* 11fdb07f call 0x11fdbc50 */
  push32(0x11fdb084u); f_11fdbc50();
  /* 11fdb084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdb087:;
  /* 11fdb087 jmp 0x11fdb02d */
  goto L_11fdb02d;
L_11fdb089:;
  /* 11fdb089 mov eax, dword ptr [0x1200ce5c] */
  EAX = (r32((uint32_t)(0x1200ce5c)));
  /* 11fdb08e push eax */
  push32((uint32_t)(EAX));
  /* 11fdb08f call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fdb095u);
  /* 11fdb095 mov ecx, dword ptr [0x1200ce6c] */
  ECX = (r32((uint32_t)(0x1200ce6c)));
  /* 11fdb09b push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb09c call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fdb0a2u);
  /* 11fdb0a2 mov edx, dword ptr [0x1200ce7c] */
  EDX = (r32((uint32_t)(0x1200ce7c)));
  /* 11fdb0a8 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb0a9 call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fdb0afu);
  /* 11fdb0af mov eax, dword ptr [0x1200ce3c] */
  EAX = (r32((uint32_t)(0x1200ce3c)));
  /* 11fdb0b4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb0b5 call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fdb0bbu);
  /* 11fdb0bb mov esp, ebp */
  ESP = (EBP);
  /* 11fdb0bd pop ebp */
  EBP = (pop32());
  /* 11fdb0be ret  */
  ESPCHK(0x11fdb020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x11fdb0c0 (151 bytes, 46 insns) */
void f_11fdb0c0(void) {
  FTRACE(0x11fdb0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb0c7 cmp dword ptr [eax*4 + 0x1200ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1200ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb0cf jne 0x11fdb142 */
  if (!C.zf) goto L_11fdb142;
  /* 11fdb0d1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11fdb0d6 push 0x12009568 */
  push32((uint32_t)(0x12009568u));
  /* 11fdb0db push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb0dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11fdb0df call 0x11fdb1c0 */
  push32(0x11fdb0e4u); f_11fdb1c0();
  /* 11fdb0e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb0e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdb0ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb0ee jne 0x11fdb0fa */
  if (!C.zf) goto L_11fdb0fa;
  /* 11fdb0f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fdb0f2 call 0x11fd9c30 */
  push32(0x11fdb0f7u); f_11fd9c30();
  /* 11fdb0f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdb0fa:;
  /* 11fdb0fa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fdb0fc call 0x11fdb0c0 */
  push32(0x11fdb101u); f_11fdb0c0();
  /* 11fdb101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb104 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb107 cmp dword ptr [ecx*4 + 0x1200ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1200ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb10f jne 0x11fdb12a */
  if (!C.zf) goto L_11fdb12a;
  /* 11fdb111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb114 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb115 call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fdb11bu);
  /* 11fdb11b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb11e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb121 mov dword ptr [eax*4 + 0x1200ce38], ecx */
  w32((uint32_t)(EAX*4 + 0x1200ce38), (ECX));
  /* 11fdb128 jmp 0x11fdb138 */
  goto L_11fdb138;
L_11fdb12a:;
  /* 11fdb12a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb12f push edx */
  push32((uint32_t)(EDX));
  /* 11fdb130 call 0x11fdbc50 */
  push32(0x11fdb135u); f_11fdbc50();
  /* 11fdb135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdb138:;
  /* 11fdb138 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fdb13a call 0x11fdb160 */
  push32(0x11fdb13fu); f_11fdb160();
  /* 11fdb13f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdb142:;
  /* 11fdb142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb145 mov ecx, dword ptr [eax*4 + 0x1200ce38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200ce38)));
  /* 11fdb14c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb14d call dword ptr [0x12011440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011440))), 0x11fdb153u);
  /* 11fdb153 mov esp, ebp */
  ESP = (EBP);
  /* 11fdb155 pop ebp */
  EBP = (pop32());
  /* 11fdb156 ret  */
  ESPCHK(0x11fdb0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b160 @ 0x11fdb160 (22 bytes, 8 insns) */
void f_11fdb160(void) {
  FTRACE(0x11fdb160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb161 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb166 mov ecx, dword ptr [eax*4 + 0x1200ce38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1200ce38)));
  /* 11fdb16d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb16e call dword ptr [0x12011444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011444))), 0x11fdb174u);
  /* 11fdb174 pop ebp */
  EBP = (pop32());
  /* 11fdb175 ret  */
  ESPCHK(0x11fdb160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b180 @ 0x11fdb180 (26 bytes, 10 insns) */
void f_11fdb180(void) {
  FTRACE(0x11fdb180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb180 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb181 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb186 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb187 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb189 call dword ptr [0x1201144c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201144c))), 0x11fdb18fu);
  /* 11fdb18f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11fdb194 call dword ptr [0x12011448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011448))), 0x11fdb19au);
  /* 11fdb19a pop ebp */
  EBP = (pop32());
  /* 11fdb19b ret  */
  ESPCHK(0x11fdb180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1a0 @ 0x11fdb1a0 (29 bytes, 13 insns) */
void f_11fdb1a0(void) {
  FTRACE(0x11fdb1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb1a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb1a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb1a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb1a9 mov eax, dword ptr [0x1200f110] */
  EAX = (r32((uint32_t)(0x1200f110)));
  /* 11fdb1ae push eax */
  push32((uint32_t)(EAX));
  /* 11fdb1af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb1b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb1b3 call 0x11fdb210 */
  push32(0x11fdb1b8u); f_11fdb210();
  /* 11fdb1b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb1bb pop ebp */
  EBP = (pop32());
  /* 11fdb1bc ret  */
  ESPCHK(0x11fdb1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x11fdb1c0 (35 bytes, 16 insns) */
void f_11fdb1c0(void) {
  FTRACE(0x11fdb1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb1c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb1c6 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb1c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb1ca push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb1cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb1ce push edx */
  push32((uint32_t)(EDX));
  /* 11fdb1cf mov eax, dword ptr [0x1200f110] */
  EAX = (r32((uint32_t)(0x1200f110)));
  /* 11fdb1d4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb1d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb1d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb1d9 call 0x11fdb210 */
  push32(0x11fdb1deu); f_11fdb210();
  /* 11fdb1de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb1e1 pop ebp */
  EBP = (pop32());
  /* 11fdb1e2 ret  */
  ESPCHK(0x11fdb1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x11fdb1f0 (27 bytes, 13 insns) */
void f_11fdb1f0(void) {
  FTRACE(0x11fdb1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb1f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb1f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb1f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb1f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb1fc push eax */
  push32((uint32_t)(EAX));
  /* 11fdb1fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb200 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb201 call 0x11fdb210 */
  push32(0x11fdb206u); f_11fdb210();
  /* 11fdb206 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb209 pop ebp */
  EBP = (pop32());
  /* 11fdb20a ret  */
  ESPCHK(0x11fdb1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x11fdb210 (94 bytes, 38 insns) */
void f_11fdb210(void) {
  FTRACE(0x11fdb210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb210 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb211 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb213 push ecx */
  push32((uint32_t)(ECX));
L_11fdb214:;
  /* 11fdb214 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdb216 call 0x11fdb0c0 */
  push32(0x11fdb21bu); f_11fdb0c0();
  /* 11fdb21b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb21e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdb221 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb222 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb225 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb226 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb229 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb22d push eax */
  push32((uint32_t)(EAX));
  /* 11fdb22e call 0x11fdb290 */
  push32(0x11fdb233u); f_11fdb290();
  /* 11fdb233 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb236 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdb239 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdb23b call 0x11fdb160 */
  push32(0x11fdb240u); f_11fdb160();
  /* 11fdb240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb243 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb247 jne 0x11fdb24f */
  if (!C.zf) goto L_11fdb24f;
  /* 11fdb249 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb24d jne 0x11fdb254 */
  if (!C.zf) goto L_11fdb254;
L_11fdb24f:;
  /* 11fdb24f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb252 jmp 0x11fdb26a */
  goto L_11fdb26a;
L_11fdb254:;
  /* 11fdb254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb257 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb258 call 0x11fe19c0 */
  push32(0x11fdb25du); f_11fe19c0();
  /* 11fdb25d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb262 jne 0x11fdb268 */
  if (!C.zf) goto L_11fdb268;
  /* 11fdb264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb266 jmp 0x11fdb26a */
  goto L_11fdb26a;
L_11fdb268:;
  /* 11fdb268 jmp 0x11fdb214 */
  goto L_11fdb214;
L_11fdb26a:;
  /* 11fdb26a mov esp, ebp */
  ESP = (EBP);
  /* 11fdb26c pop ebp */
  EBP = (pop32());
  /* 11fdb26d ret  */
  ESPCHK(0x11fdb210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b270 @ 0x11fdb270 (23 bytes, 11 insns) */
void f_11fdb270(void) {
  FTRACE(0x11fdb270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb270 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb271 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb273 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb277 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb27c push eax */
  push32((uint32_t)(EAX));
  /* 11fdb27d call 0x11fdb290 */
  push32(0x11fdb282u); f_11fdb290();
  /* 11fdb282 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb285 pop ebp */
  EBP = (pop32());
  /* 11fdb286 ret  */
  ESPCHK(0x11fdb270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x11fdb290 (787 bytes, 254 insns) */
void f_11fdb290(void) {
  FTRACE(0x11fdb290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb290 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb291 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb293 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdb296 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdb297 push esi */
  push32((uint32_t)(ESI));
  /* 11fdb298 push edi */
  push32((uint32_t)(EDI));
  /* 11fdb299 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fdb2a0 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdb2a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb2aa je 0x11fdb2dc */
  if (C.zf) goto L_11fdb2dc;
L_11fdb2ac:;
  /* 11fdb2ac call 0x11fdc360 */
  push32(0x11fdb2b1u); f_11fdc360();
  /* 11fdb2b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb2b3 jne 0x11fdb2d6 */
  if (!C.zf) goto L_11fdb2d6;
  /* 11fdb2b5 push 0x12009658 */
  push32((uint32_t)(0x12009658u));
  /* 11fdb2ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb2bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11fdb2c1 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdb2c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb2c8 call 0x11fd9d80 */
  push32(0x11fdb2cdu); f_11fd9d80();
  /* 11fdb2cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb2d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb2d3 jne 0x11fdb2d6 */
  if (!C.zf) goto L_11fdb2d6;
  /* 11fdb2d5 int3  */
  x86_unimpl("int3 @ 0x11fdb2d5");
L_11fdb2d6:;
  /* 11fdb2d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb2d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdb2da jne 0x11fdb2ac */
  if (!C.zf) goto L_11fdb2ac;
L_11fdb2dc:;
  /* 11fdb2dc mov edx, dword ptr [0x1200cefc] */
  EDX = (r32((uint32_t)(0x1200cefc)));
  /* 11fdb2e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fdb2e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb2e8 cmp eax, dword ptr [0x1200cf00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200cf00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb2ee jne 0x11fdb2f1 */
  if (!C.zf) goto L_11fdb2f1;
  /* 11fdb2f0 int3  */
  x86_unimpl("int3 @ 0x11fdb2f0");
L_11fdb2f1:;
  /* 11fdb2f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb2f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb2f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb2f8 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb2f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb2fc push eax */
  push32((uint32_t)(EAX));
  /* 11fdb2fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb300 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb301 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb304 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb305 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb307 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb309 call dword ptr [0x1200d230] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200d230))), 0x11fdb30fu);
  /* 11fdb30f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb314 jne 0x11fdb374 */
  if (!C.zf) goto L_11fdb374;
  /* 11fdb316 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb31a je 0x11fdb347 */
  if (C.zf) goto L_11fdb347;
L_11fdb31c:;
  /* 11fdb31c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb31f push eax */
  push32((uint32_t)(EAX));
  /* 11fdb320 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb323 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb324 push 0x12009614 */
  push32((uint32_t)(0x12009614u));
  /* 11fdb329 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb32b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb32d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb32f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb331 call 0x11fd9d80 */
  push32(0x11fdb336u); f_11fd9d80();
  /* 11fdb336 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb339 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb33c jne 0x11fdb33f */
  if (!C.zf) goto L_11fdb33f;
  /* 11fdb33e int3  */
  x86_unimpl("int3 @ 0x11fdb33e");
L_11fdb33f:;
  /* 11fdb33f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb341 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdb343 jne 0x11fdb31c */
  if (!C.zf) goto L_11fdb31c;
  /* 11fdb345 jmp 0x11fdb36d */
  goto L_11fdb36d;
L_11fdb347:;
  /* 11fdb347 push 0x120095f0 */
  push32((uint32_t)(0x120095f0u));
  /* 11fdb34c push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdb351 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb355 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb357 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb359 call 0x11fd9d80 */
  push32(0x11fdb35eu); f_11fd9d80();
  /* 11fdb35e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb361 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb364 jne 0x11fdb367 */
  if (!C.zf) goto L_11fdb367;
  /* 11fdb366 int3  */
  x86_unimpl("int3 @ 0x11fdb366");
L_11fdb367:;
  /* 11fdb367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb36b jne 0x11fdb347 */
  if (!C.zf) goto L_11fdb347;
L_11fdb36d:;
  /* 11fdb36d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb36f jmp 0x11fdb59c */
  goto L_11fdb59c;
L_11fdb374:;
  /* 11fdb374 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb377 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb37d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb380 je 0x11fdb396 */
  if (C.zf) goto L_11fdb396;
  /* 11fdb382 mov edx, dword ptr [0x1200cef8] */
  EDX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdb388 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb38b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdb38d jne 0x11fdb396 */
  if (!C.zf) goto L_11fdb396;
  /* 11fdb38f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11fdb396:;
  /* 11fdb396 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb39a ja 0x11fdb3a7 */
  if ((!C.cf&&!C.zf)) goto L_11fdb3a7;
  /* 11fdb39c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb39f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb3a2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb3a5 jbe 0x11fdb3d3 */
  if ((C.cf||C.zf)) goto L_11fdb3d3;
L_11fdb3a7:;
  /* 11fdb3a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb3aa push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb3ab push 0x120095c8 */
  push32((uint32_t)(0x120095c8u));
  /* 11fdb3b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb3b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb3b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb3b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb3b8 call 0x11fd9d80 */
  push32(0x11fdb3bdu); f_11fd9d80();
  /* 11fdb3bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb3c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb3c3 jne 0x11fdb3c6 */
  if (!C.zf) goto L_11fdb3c6;
  /* 11fdb3c5 int3  */
  x86_unimpl("int3 @ 0x11fdb3c5");
L_11fdb3c6:;
  /* 11fdb3c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb3c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdb3ca jne 0x11fdb3a7 */
  if (!C.zf) goto L_11fdb3a7;
  /* 11fdb3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb3ce jmp 0x11fdb59c */
  goto L_11fdb59c;
L_11fdb3d3:;
  /* 11fdb3d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb3d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb3db cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb3de je 0x11fdb420 */
  if (C.zf) goto L_11fdb420;
  /* 11fdb3e0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb3e4 je 0x11fdb420 */
  if (C.zf) goto L_11fdb420;
  /* 11fdb3e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb3e9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb3ef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb3f2 je 0x11fdb420 */
  if (C.zf) goto L_11fdb420;
  /* 11fdb3f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb3f8 je 0x11fdb420 */
  if (C.zf) goto L_11fdb420;
L_11fdb3fa:;
  /* 11fdb3fa push 0x12009594 */
  push32((uint32_t)(0x12009594u));
  /* 11fdb3ff push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdb404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb408 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb40a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb40c call 0x11fd9d80 */
  push32(0x11fdb411u); f_11fd9d80();
  /* 11fdb411 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb414 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb417 jne 0x11fdb41a */
  if (!C.zf) goto L_11fdb41a;
  /* 11fdb419 int3  */
  x86_unimpl("int3 @ 0x11fdb419");
L_11fdb41a:;
  /* 11fdb41a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb41c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdb41e jne 0x11fdb3fa */
  if (!C.zf) goto L_11fdb3fa;
L_11fdb420:;
  /* 11fdb420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb423 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb426 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fdb429 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdb42c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb42d call 0x11fe1a70 */
  push32(0x11fdb432u); f_11fe1a70();
  /* 11fdb432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb435 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdb438 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb43c jne 0x11fdb445 */
  if (!C.zf) goto L_11fdb445;
  /* 11fdb43e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb440 jmp 0x11fdb59c */
  goto L_11fdb59c;
L_11fdb445:;
  /* 11fdb445 mov edx, dword ptr [0x1200cefc] */
  EDX = (r32((uint32_t)(0x1200cefc)));
  /* 11fdb44b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb44e mov dword ptr [0x1200cefc], edx */
  w32((uint32_t)(0x1200cefc), (EDX));
  /* 11fdb454 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb458 je 0x11fdb4a3 */
  if (C.zf) goto L_11fdb4a3;
  /* 11fdb45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb45d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fdb463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb466 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fdb46d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb470 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11fdb477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb47a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11fdb481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb487 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11fdb48a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb48d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11fdb494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb497 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11fdb49e jmp 0x11fdb543 */
  goto L_11fdb543;
L_11fdb4a3:;
  /* 11fdb4a3 mov edx, dword ptr [0x1200ef8c] */
  EDX = (r32((uint32_t)(0x1200ef8c)));
  /* 11fdb4a9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb4ac mov dword ptr [0x1200ef8c], edx */
  w32((uint32_t)(0x1200ef8c), (EDX));
  /* 11fdb4b2 mov eax, dword ptr [0x1200ef94] */
  EAX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb4b7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb4ba mov dword ptr [0x1200ef94], eax */
  w32((uint32_t)(0x1200ef94), (EAX));
  /* 11fdb4bf mov ecx, dword ptr [0x1200ef94] */
  ECX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb4c5 cmp ecx, dword ptr [0x1200ef98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200ef98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb4cb jbe 0x11fdb4d9 */
  if ((C.cf||C.zf)) goto L_11fdb4d9;
  /* 11fdb4cd mov edx, dword ptr [0x1200ef94] */
  EDX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb4d3 mov dword ptr [0x1200ef98], edx */
  w32((uint32_t)(0x1200ef98), (EDX));
L_11fdb4d9:;
  /* 11fdb4d9 cmp dword ptr [0x1200ef90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb4e0 je 0x11fdb4ef */
  if (C.zf) goto L_11fdb4ef;
  /* 11fdb4e2 mov eax, dword ptr [0x1200ef90] */
  EAX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdb4e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb4ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fdb4ed jmp 0x11fdb4f8 */
  goto L_11fdb4f8;
L_11fdb4ef:;
  /* 11fdb4ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb4f2 mov dword ptr [0x1200ef88], edx */
  w32((uint32_t)(0x1200ef88), (EDX));
L_11fdb4f8:;
  /* 11fdb4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb4fb mov ecx, dword ptr [0x1200ef90] */
  ECX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdb501 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fdb503 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb506 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11fdb50d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb510 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb513 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11fdb516 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb519 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb51c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11fdb51f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb522 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb525 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11fdb528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb52b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb52e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11fdb531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb537 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11fdb53a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb53d mov dword ptr [0x1200ef90], ecx */
  w32((uint32_t)(0x1200ef90), (ECX));
L_11fdb543:;
  /* 11fdb543 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdb545 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb547 mov dl, byte ptr [0x1200cf04] */
  DL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdb54d push edx */
  push32((uint32_t)(EDX));
  /* 11fdb54e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb551 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb554 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb555 call 0x11fe15d0 */
  push32(0x11fdb55au); f_11fe15d0();
  /* 11fdb55a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb55d push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdb55f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb561 mov cl, byte ptr [0x1200cf04] */
  CL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdb567 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb56e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11fdb572 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb573 call 0x11fe15d0 */
  push32(0x11fdb578u); f_11fe15d0();
  /* 11fdb578 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb57b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb57e push edx */
  push32((uint32_t)(EDX));
  /* 11fdb57f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb581 mov al, byte ptr [0x1200cf06] */
  AL = (r8((uint32_t)(0x1200cf06)));
  /* 11fdb586 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb58a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb58d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb58e call 0x11fe15d0 */
  push32(0x11fdb593u); f_11fe15d0();
  /* 11fdb593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb599 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11fdb59c:;
  /* 11fdb59c pop edi */
  EDI = (pop32());
  /* 11fdb59d pop esi */
  ESI = (pop32());
  /* 11fdb59e pop ebx */
  EBX = (pop32());
  /* 11fdb59f mov esp, ebp */
  ESP = (EBP);
  /* 11fdb5a1 pop ebp */
  EBP = (pop32());
  /* 11fdb5a2 ret  */
  ESPCHK(0x11fdb290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x11fdb5b0 (27 bytes, 13 insns) */
void f_11fdb5b0(void) {
  FTRACE(0x11fdb5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb5b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb5b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb5b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb5b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb5bc push eax */
  push32((uint32_t)(EAX));
  /* 11fdb5bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb5c1 call 0x11fdb5d0 */
  push32(0x11fdb5c6u); f_11fdb5d0();
  /* 11fdb5c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb5c9 pop ebp */
  EBP = (pop32());
  /* 11fdb5ca ret  */
  ESPCHK(0x11fdb5b0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11fdb5d0 (96 bytes, 37 insns) */
void f_11fdb5d0(void) {
  FTRACE(0x11fdb5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb5d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdb5d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb5d9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fdb5dd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fdb5e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdb5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb5e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb5e7 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb5e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb5eb push eax */
  push32((uint32_t)(EAX));
  /* 11fdb5ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb5ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb5f0 call 0x11fdb1c0 */
  push32(0x11fdb5f5u); f_11fdb1c0();
  /* 11fdb5f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb5f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdb5fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb5ff je 0x11fdb629 */
  if (C.zf) goto L_11fdb629;
  /* 11fdb601 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb604 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fdb607 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb60a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb60d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdb610:;
  /* 11fdb610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb613 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb616 jae 0x11fdb629 */
  if (!C.cf) goto L_11fdb629;
  /* 11fdb618 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb61b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fdb61e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb621 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb624 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdb627 jmp 0x11fdb610 */
  goto L_11fdb610;
L_11fdb629:;
  /* 11fdb629 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb62c mov esp, ebp */
  ESP = (EBP);
  /* 11fdb62e pop ebp */
  EBP = (pop32());
  /* 11fdb62f ret  */
  ESPCHK(0x11fdb5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b630 @ 0x11fdb630 (27 bytes, 13 insns) */
void f_11fdb630(void) {
  FTRACE(0x11fdb630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb630 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb631 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb633 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb635 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb637 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb639 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb63c push eax */
  push32((uint32_t)(EAX));
  /* 11fdb63d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb640 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb641 call 0x11fdb650 */
  push32(0x11fdb646u); f_11fdb650();
  /* 11fdb646 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb649 pop ebp */
  EBP = (pop32());
  /* 11fdb64a ret  */
  ESPCHK(0x11fdb630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b650 @ 0x11fdb650 (64 bytes, 27 insns) */
void f_11fdb650(void) {
  FTRACE(0x11fdb650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb650 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb651 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb653 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb654 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdb656 call 0x11fdb0c0 */
  push32(0x11fdb65bu); f_11fdb0c0();
  /* 11fdb65b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb65e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb660 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdb663 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb664 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb667 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb668 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb66b push edx */
  push32((uint32_t)(EDX));
  /* 11fdb66c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb66f push eax */
  push32((uint32_t)(EAX));
  /* 11fdb670 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb673 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb674 call 0x11fdb690 */
  push32(0x11fdb679u); f_11fdb690();
  /* 11fdb679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb67c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdb67f push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdb681 call 0x11fdb160 */
  push32(0x11fdb686u); f_11fdb160();
  /* 11fdb686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdb68c mov esp, ebp */
  ESP = (EBP);
  /* 11fdb68e pop ebp */
  EBP = (pop32());
  /* 11fdb68f ret  */
  ESPCHK(0x11fdb650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b690 @ 0x11fdb690 (1297 bytes, 431 insns) */
void f_11fdb690(void) {
  FTRACE(0x11fdb690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdb690 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdb691 mov ebp, esp */
  EBP = (ESP);
  /* 11fdb693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdb696 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdb697 push esi */
  push32((uint32_t)(ESI));
  /* 11fdb698 push edi */
  push32((uint32_t)(EDI));
  /* 11fdb699 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fdb6a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb6a4 jne 0x11fdb6c3 */
  if (!C.zf) goto L_11fdb6c3;
  /* 11fdb6a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdb6a9 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb6aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb6ad push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb6ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb6b1 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb6b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb6b5 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb6b6 call 0x11fdb1c0 */
  push32(0x11fdb6bbu); f_11fdb1c0();
  /* 11fdb6bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb6be jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdb6c3:;
  /* 11fdb6c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb6c7 je 0x11fdb6e6 */
  if (C.zf) goto L_11fdb6e6;
  /* 11fdb6c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb6cd jne 0x11fdb6e6 */
  if (!C.zf) goto L_11fdb6e6;
  /* 11fdb6cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb6d6 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb6d7 call 0x11fdbc50 */
  push32(0x11fdb6dcu); f_11fdbc50();
  /* 11fdb6dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb6df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb6e1 jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdb6e6:;
  /* 11fdb6e6 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdb6eb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb6ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb6f0 je 0x11fdb722 */
  if (C.zf) goto L_11fdb722;
L_11fdb6f2:;
  /* 11fdb6f2 call 0x11fdc360 */
  push32(0x11fdb6f7u); f_11fdc360();
  /* 11fdb6f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb6f9 jne 0x11fdb71c */
  if (!C.zf) goto L_11fdb71c;
  /* 11fdb6fb push 0x12009658 */
  push32((uint32_t)(0x12009658u));
  /* 11fdb700 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb702 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11fdb707 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdb70c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb70e call 0x11fd9d80 */
  push32(0x11fdb713u); f_11fd9d80();
  /* 11fdb713 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb716 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb719 jne 0x11fdb71c */
  if (!C.zf) goto L_11fdb71c;
  /* 11fdb71b int3  */
  x86_unimpl("int3 @ 0x11fdb71b");
L_11fdb71c:;
  /* 11fdb71c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb71e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdb720 jne 0x11fdb6f2 */
  if (!C.zf) goto L_11fdb6f2;
L_11fdb722:;
  /* 11fdb722 mov edx, dword ptr [0x1200cefc] */
  EDX = (r32((uint32_t)(0x1200cefc)));
  /* 11fdb728 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fdb72b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdb72e cmp eax, dword ptr [0x1200cf00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200cf00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb734 jne 0x11fdb737 */
  if (!C.zf) goto L_11fdb737;
  /* 11fdb736 int3  */
  x86_unimpl("int3 @ 0x11fdb736");
L_11fdb737:;
  /* 11fdb737 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdb73a push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb73b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb73e push edx */
  push32((uint32_t)(EDX));
  /* 11fdb73f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdb742 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb743 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb746 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb747 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb74a push edx */
  push32((uint32_t)(EDX));
  /* 11fdb74b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb74e push eax */
  push32((uint32_t)(EAX));
  /* 11fdb74f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb751 call dword ptr [0x1200d230] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200d230))), 0x11fdb757u);
  /* 11fdb757 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb75c jne 0x11fdb7bc */
  if (!C.zf) goto L_11fdb7bc;
  /* 11fdb75e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb762 je 0x11fdb78f */
  if (C.zf) goto L_11fdb78f;
L_11fdb764:;
  /* 11fdb764 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdb767 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb768 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdb76b push edx */
  push32((uint32_t)(EDX));
  /* 11fdb76c push 0x120097d4 */
  push32((uint32_t)(0x120097d4u));
  /* 11fdb771 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb773 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb777 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb779 call 0x11fd9d80 */
  push32(0x11fdb77eu); f_11fd9d80();
  /* 11fdb77e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb781 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb784 jne 0x11fdb787 */
  if (!C.zf) goto L_11fdb787;
  /* 11fdb786 int3  */
  x86_unimpl("int3 @ 0x11fdb786");
L_11fdb787:;
  /* 11fdb787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb78b jne 0x11fdb764 */
  if (!C.zf) goto L_11fdb764;
  /* 11fdb78d jmp 0x11fdb7b5 */
  goto L_11fdb7b5;
L_11fdb78f:;
  /* 11fdb78f push 0x120097b0 */
  push32((uint32_t)(0x120097b0u));
  /* 11fdb794 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdb799 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb79b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb79d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb79f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb7a1 call 0x11fd9d80 */
  push32(0x11fdb7a6u); f_11fd9d80();
  /* 11fdb7a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb7a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb7ac jne 0x11fdb7af */
  if (!C.zf) goto L_11fdb7af;
  /* 11fdb7ae int3  */
  x86_unimpl("int3 @ 0x11fdb7ae");
L_11fdb7af:;
  /* 11fdb7af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb7b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdb7b3 jne 0x11fdb78f */
  if (!C.zf) goto L_11fdb78f;
L_11fdb7b5:;
  /* 11fdb7b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb7b7 jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdb7bc:;
  /* 11fdb7bc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb7c0 jbe 0x11fdb7ee */
  if ((C.cf||C.zf)) goto L_11fdb7ee;
L_11fdb7c2:;
  /* 11fdb7c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb7c5 push edx */
  push32((uint32_t)(EDX));
  /* 11fdb7c6 push 0x12009780 */
  push32((uint32_t)(0x12009780u));
  /* 11fdb7cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb7cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb7d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb7d3 call 0x11fd9d80 */
  push32(0x11fdb7d8u); f_11fd9d80();
  /* 11fdb7d8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb7db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb7de jne 0x11fdb7e1 */
  if (!C.zf) goto L_11fdb7e1;
  /* 11fdb7e0 int3  */
  x86_unimpl("int3 @ 0x11fdb7e0");
L_11fdb7e1:;
  /* 11fdb7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb7e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb7e5 jne 0x11fdb7c2 */
  if (!C.zf) goto L_11fdb7c2;
  /* 11fdb7e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb7e9 jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdb7ee:;
  /* 11fdb7ee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb7f2 je 0x11fdb836 */
  if (C.zf) goto L_11fdb836;
  /* 11fdb7f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb7f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb7fd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb800 je 0x11fdb836 */
  if (C.zf) goto L_11fdb836;
  /* 11fdb802 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb805 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb80b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb80e je 0x11fdb836 */
  if (C.zf) goto L_11fdb836;
L_11fdb810:;
  /* 11fdb810 push 0x12009594 */
  push32((uint32_t)(0x12009594u));
  /* 11fdb815 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdb81a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb81c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb81e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb820 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdb822 call 0x11fd9d80 */
  push32(0x11fdb827u); f_11fd9d80();
  /* 11fdb827 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb82a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb82d jne 0x11fdb830 */
  if (!C.zf) goto L_11fdb830;
  /* 11fdb82f int3  */
  x86_unimpl("int3 @ 0x11fdb82f");
L_11fdb830:;
  /* 11fdb830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb834 jne 0x11fdb810 */
  if (!C.zf) goto L_11fdb810;
L_11fdb836:;
  /* 11fdb836 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb839 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb83a call 0x11fdc7c0 */
  push32(0x11fdb83fu); f_11fdc7c0();
  /* 11fdb83f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb842 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdb844 jne 0x11fdb867 */
  if (!C.zf) goto L_11fdb867;
  /* 11fdb846 push 0x1200975c */
  push32((uint32_t)(0x1200975cu));
  /* 11fdb84b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb84d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11fdb852 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdb857 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb859 call 0x11fd9d80 */
  push32(0x11fdb85eu); f_11fd9d80();
  /* 11fdb85e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb861 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb864 jne 0x11fdb867 */
  if (!C.zf) goto L_11fdb867;
  /* 11fdb866 int3  */
  x86_unimpl("int3 @ 0x11fdb866");
L_11fdb867:;
  /* 11fdb867 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdb86b jne 0x11fdb836 */
  if (!C.zf) goto L_11fdb836;
  /* 11fdb86d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdb870 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdb873 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdb876 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb879 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb87d jne 0x11fdb886 */
  if (!C.zf) goto L_11fdb886;
  /* 11fdb87f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11fdb886:;
  /* 11fdb886 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb88a je 0x11fdb8ca */
  if (C.zf) goto L_11fdb8ca;
L_11fdb88c:;
  /* 11fdb88c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb88f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb896 jne 0x11fdb8a1 */
  if (!C.zf) goto L_11fdb8a1;
  /* 11fdb898 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb89b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb89f je 0x11fdb8c2 */
  if (C.zf) goto L_11fdb8c2;
L_11fdb8a1:;
  /* 11fdb8a1 push 0x12009714 */
  push32((uint32_t)(0x12009714u));
  /* 11fdb8a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb8a8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11fdb8ad push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdb8b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb8b4 call 0x11fd9d80 */
  push32(0x11fdb8b9u); f_11fd9d80();
  /* 11fdb8b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb8bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb8bf jne 0x11fdb8c2 */
  if (!C.zf) goto L_11fdb8c2;
  /* 11fdb8c1 int3  */
  x86_unimpl("int3 @ 0x11fdb8c1");
L_11fdb8c2:;
  /* 11fdb8c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb8c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdb8c6 jne 0x11fdb88c */
  if (!C.zf) goto L_11fdb88c;
  /* 11fdb8c8 jmp 0x11fdb92e */
  goto L_11fdb92e;
L_11fdb8ca:;
  /* 11fdb8ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb8cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdb8d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb8d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb8d8 jne 0x11fdb8ef */
  if (!C.zf) goto L_11fdb8ef;
  /* 11fdb8da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb8dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb8e3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb8e6 jne 0x11fdb8ef */
  if (!C.zf) goto L_11fdb8ef;
  /* 11fdb8e8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11fdb8ef:;
  /* 11fdb8ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb8f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdb8f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb8fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdb8fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdb903 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb905 je 0x11fdb928 */
  if (C.zf) goto L_11fdb928;
  /* 11fdb907 push 0x120096d8 */
  push32((uint32_t)(0x120096d8u));
  /* 11fdb90c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdb90e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11fdb913 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdb918 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdb91a call 0x11fd9d80 */
  push32(0x11fdb91fu); f_11fd9d80();
  /* 11fdb91f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb922 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb925 jne 0x11fdb928 */
  if (!C.zf) goto L_11fdb928;
  /* 11fdb927 int3  */
  x86_unimpl("int3 @ 0x11fdb927");
L_11fdb928:;
  /* 11fdb928 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdb92a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdb92c jne 0x11fdb8ef */
  if (!C.zf) goto L_11fdb8ef;
L_11fdb92e:;
  /* 11fdb92e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb932 je 0x11fdb959 */
  if (C.zf) goto L_11fdb959;
  /* 11fdb934 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb937 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb93a push eax */
  push32((uint32_t)(EAX));
  /* 11fdb93b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb93e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdb93f call 0x11fe1ba0 */
  push32(0x11fdb944u); f_11fe1ba0();
  /* 11fdb944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb947 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdb94a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb94e jne 0x11fdb957 */
  if (!C.zf) goto L_11fdb957;
  /* 11fdb950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb952 jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdb957:;
  /* 11fdb957 jmp 0x11fdb97c */
  goto L_11fdb97c;
L_11fdb959:;
  /* 11fdb959 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb95c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb95f push edx */
  push32((uint32_t)(EDX));
  /* 11fdb960 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdb963 push eax */
  push32((uint32_t)(EAX));
  /* 11fdb964 call 0x11fe1af0 */
  push32(0x11fdb969u); f_11fe1af0();
  /* 11fdb969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb96c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdb96f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb973 jne 0x11fdb97c */
  if (!C.zf) goto L_11fdb97c;
  /* 11fdb975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdb977 jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdb97c:;
  /* 11fdb97c mov ecx, dword ptr [0x1200cefc] */
  ECX = (r32((uint32_t)(0x1200cefc)));
  /* 11fdb982 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb985 mov dword ptr [0x1200cefc], ecx */
  w32((uint32_t)(0x1200cefc), (ECX));
  /* 11fdb98b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb98f jne 0x11fdb9e7 */
  if (!C.zf) goto L_11fdb9e7;
  /* 11fdb991 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb994 mov eax, dword ptr [0x1200ef8c] */
  EAX = (r32((uint32_t)(0x1200ef8c)));
  /* 11fdb999 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdb99c mov dword ptr [0x1200ef8c], eax */
  w32((uint32_t)(0x1200ef8c), (EAX));
  /* 11fdb9a1 mov ecx, dword ptr [0x1200ef8c] */
  ECX = (r32((uint32_t)(0x1200ef8c)));
  /* 11fdb9a7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb9aa mov dword ptr [0x1200ef8c], ecx */
  w32((uint32_t)(0x1200ef8c), (ECX));
  /* 11fdb9b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb9b3 mov eax, dword ptr [0x1200ef94] */
  EAX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb9b8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdb9bb mov dword ptr [0x1200ef94], eax */
  w32((uint32_t)(0x1200ef94), (EAX));
  /* 11fdb9c0 mov ecx, dword ptr [0x1200ef94] */
  ECX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb9c6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb9c9 mov dword ptr [0x1200ef94], ecx */
  w32((uint32_t)(0x1200ef94), (ECX));
  /* 11fdb9cf mov edx, dword ptr [0x1200ef94] */
  EDX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb9d5 cmp edx, dword ptr [0x1200ef98] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1200ef98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb9db jbe 0x11fdb9e7 */
  if ((C.cf||C.zf)) goto L_11fdb9e7;
  /* 11fdb9dd mov eax, dword ptr [0x1200ef94] */
  EAX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdb9e2 mov dword ptr [0x1200ef98], eax */
  w32((uint32_t)(0x1200ef98), (EAX));
L_11fdb9e7:;
  /* 11fdb9e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb9ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdb9ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdb9f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb9f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdb9f6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdb9f9 jbe 0x11fdba1f */
  if ((C.cf||C.zf)) goto L_11fdba1f;
  /* 11fdb9fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdb9fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdba01 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdba04 push edx */
  push32((uint32_t)(EDX));
  /* 11fdba05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdba07 mov al, byte ptr [0x1200cf06] */
  AL = (r8((uint32_t)(0x1200cf06)));
  /* 11fdba0c push eax */
  push32((uint32_t)(EAX));
  /* 11fdba0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdba10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdba13 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdba16 push edx */
  push32((uint32_t)(EDX));
  /* 11fdba17 call 0x11fe15d0 */
  push32(0x11fdba1cu); f_11fe15d0();
  /* 11fdba1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdba1f:;
  /* 11fdba1f push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdba21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdba23 mov al, byte ptr [0x1200cf04] */
  AL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdba28 push eax */
  push32((uint32_t)(EAX));
  /* 11fdba29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdba2c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdba2f push ecx */
  push32((uint32_t)(ECX));
  /* 11fdba30 call 0x11fe15d0 */
  push32(0x11fdba35u); f_11fe15d0();
  /* 11fdba35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdba38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdba3c jne 0x11fdba59 */
  if (!C.zf) goto L_11fdba59;
  /* 11fdba3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdba41 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdba44 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fdba47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdba4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdba4d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11fdba50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdba53 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdba56 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11fdba59:;
  /* 11fdba59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdba5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdba5f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11fdba62:;
  /* 11fdba62 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdba66 jne 0x11fdba97 */
  if (!C.zf) goto L_11fdba97;
  /* 11fdba68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdba6c jne 0x11fdba76 */
  if (!C.zf) goto L_11fdba76;
  /* 11fdba6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdba71 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdba74 je 0x11fdba97 */
  if (C.zf) goto L_11fdba97;
L_11fdba76:;
  /* 11fdba76 push 0x120096a4 */
  push32((uint32_t)(0x120096a4u));
  /* 11fdba7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdba7d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11fdba82 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdba87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdba89 call 0x11fd9d80 */
  push32(0x11fdba8eu); f_11fd9d80();
  /* 11fdba8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdba91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdba94 jne 0x11fdba97 */
  if (!C.zf) goto L_11fdba97;
  /* 11fdba96 int3  */
  x86_unimpl("int3 @ 0x11fdba96");
L_11fdba97:;
  /* 11fdba97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdba99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdba9b jne 0x11fdba62 */
  if (!C.zf) goto L_11fdba62;
  /* 11fdba9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbaa0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbaa3 je 0x11fdbaab */
  if (C.zf) goto L_11fdbaab;
  /* 11fdbaa5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbaa9 je 0x11fdbab3 */
  if (C.zf) goto L_11fdbab3;
L_11fdbaab:;
  /* 11fdbaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbaae jmp 0x11fdbb9a */
  goto L_11fdbb9a;
L_11fdbab3:;
  /* 11fdbab3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbab6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbab9 je 0x11fdbacb */
  if (C.zf) goto L_11fdbacb;
  /* 11fdbabb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbabe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdbac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbac3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdbac6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fdbac9 jmp 0x11fdbb07 */
  goto L_11fdbb07;
L_11fdbacb:;
  /* 11fdbacb mov eax, dword ptr [0x1200ef88] */
  EAX = (r32((uint32_t)(0x1200ef88)));
  /* 11fdbad0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbad3 je 0x11fdbaf6 */
  if (C.zf) goto L_11fdbaf6;
  /* 11fdbad5 push 0x12009688 */
  push32((uint32_t)(0x12009688u));
  /* 11fdbada push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbadc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11fdbae1 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbae8 call 0x11fd9d80 */
  push32(0x11fdbaedu); f_11fd9d80();
  /* 11fdbaed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbaf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbaf3 jne 0x11fdbaf6 */
  if (!C.zf) goto L_11fdbaf6;
  /* 11fdbaf5 int3  */
  x86_unimpl("int3 @ 0x11fdbaf5");
L_11fdbaf6:;
  /* 11fdbaf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbaf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbafa jne 0x11fdbacb */
  if (!C.zf) goto L_11fdbacb;
  /* 11fdbafc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbaff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdbb02 mov dword ptr [0x1200ef88], eax */
  w32((uint32_t)(0x1200ef88), (EAX));
L_11fdbb07:;
  /* 11fdbb07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb0a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbb0e je 0x11fdbb1f */
  if (C.zf) goto L_11fdbb1f;
  /* 11fdbb10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdbb16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdbb1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fdbb1d jmp 0x11fdbb5a */
  goto L_11fdbb5a;
L_11fdbb1f:;
  /* 11fdbb1f mov eax, dword ptr [0x1200ef90] */
  EAX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdbb24 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbb27 je 0x11fdbb4a */
  if (C.zf) goto L_11fdbb4a;
  /* 11fdbb29 push 0x1200966c */
  push32((uint32_t)(0x1200966cu));
  /* 11fdbb2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbb30 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11fdbb35 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbb3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbb3c call 0x11fd9d80 */
  push32(0x11fdbb41u); f_11fd9d80();
  /* 11fdbb41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbb44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbb47 jne 0x11fdbb4a */
  if (!C.zf) goto L_11fdbb4a;
  /* 11fdbb49 int3  */
  x86_unimpl("int3 @ 0x11fdbb49");
L_11fdbb4a:;
  /* 11fdbb4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbb4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbb4e jne 0x11fdbb1f */
  if (!C.zf) goto L_11fdbb1f;
  /* 11fdbb50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb53 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdbb55 mov dword ptr [0x1200ef90], eax */
  w32((uint32_t)(0x1200ef90), (EAX));
L_11fdbb5a:;
  /* 11fdbb5a cmp dword ptr [0x1200ef90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbb61 je 0x11fdbb71 */
  if (C.zf) goto L_11fdbb71;
  /* 11fdbb63 mov ecx, dword ptr [0x1200ef90] */
  ECX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdbb69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb6c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11fdbb6f jmp 0x11fdbb79 */
  goto L_11fdbb79;
L_11fdbb71:;
  /* 11fdbb71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb74 mov dword ptr [0x1200ef88], eax */
  w32((uint32_t)(0x1200ef88), (EAX));
L_11fdbb79:;
  /* 11fdbb79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb7c mov edx, dword ptr [0x1200ef90] */
  EDX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdbb82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fdbb84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb87 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fdbb8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdbb91 mov dword ptr [0x1200ef90], ecx */
  w32((uint32_t)(0x1200ef90), (ECX));
  /* 11fdbb97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fdbb9a:;
  /* 11fdbb9a pop edi */
  EDI = (pop32());
  /* 11fdbb9b pop esi */
  ESI = (pop32());
  /* 11fdbb9c pop ebx */
  EBX = (pop32());
  /* 11fdbb9d mov esp, ebp */
  ESP = (EBP);
  /* 11fdbb9f pop ebp */
  EBP = (pop32());
  /* 11fdbba0 ret  */
  ESPCHK(0x11fdb690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbb0 @ 0x11fdbbb0 (27 bytes, 13 insns) */
void f_11fdbbb0(void) {
  FTRACE(0x11fdbbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdbbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdbbb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdbbb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbbb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbbb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdbbb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdbbbc push eax */
  push32((uint32_t)(EAX));
  /* 11fdbbbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbbc1 call 0x11fdbbd0 */
  push32(0x11fdbbc6u); f_11fdbbd0();
  /* 11fdbbc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbbc9 pop ebp */
  EBP = (pop32());
  /* 11fdbbca ret  */
  ESPCHK(0x11fdbbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x11fdbbd0 (64 bytes, 27 insns) */
void f_11fdbbd0(void) {
  FTRACE(0x11fdbbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdbbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdbbd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdbbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbbd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdbbd6 call 0x11fdb0c0 */
  push32(0x11fdbbdbu); f_11fdb0c0();
  /* 11fdbbdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbbde push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbbe0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdbbe3 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbbe4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdbbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbbe8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdbbeb push edx */
  push32((uint32_t)(EDX));
  /* 11fdbbec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdbbef push eax */
  push32((uint32_t)(EAX));
  /* 11fdbbf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbbf4 call 0x11fdb690 */
  push32(0x11fdbbf9u); f_11fdb690();
  /* 11fdbbf9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbbfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdbbff push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdbc01 call 0x11fdb160 */
  push32(0x11fdbc06u); f_11fdb160();
  /* 11fdbc06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbc09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbc0c mov esp, ebp */
  ESP = (EBP);
  /* 11fdbc0e pop ebp */
  EBP = (pop32());
  /* 11fdbc0f ret  */
  ESPCHK(0x11fdbbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x11fdbc10 (19 bytes, 9 insns) */
void f_11fdbc10(void) {
  FTRACE(0x11fdbc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdbc10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdbc11 mov ebp, esp */
  EBP = (ESP);
  /* 11fdbc13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdbc15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbc18 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbc19 call 0x11fdbc50 */
  push32(0x11fdbc1eu); f_11fdbc50();
  /* 11fdbc1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbc21 pop ebp */
  EBP = (pop32());
  /* 11fdbc22 ret  */
  ESPCHK(0x11fdbc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x11fdbc30 (19 bytes, 9 insns) */
void f_11fdbc30(void) {
  FTRACE(0x11fdbc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdbc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdbc31 mov ebp, esp */
  EBP = (ESP);
  /* 11fdbc33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdbc35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbc38 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbc39 call 0x11fdbc80 */
  push32(0x11fdbc3eu); f_11fdbc80();
  /* 11fdbc3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbc41 pop ebp */
  EBP = (pop32());
  /* 11fdbc42 ret  */
  ESPCHK(0x11fdbc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x11fdbc50 (41 bytes, 16 insns) */
void f_11fdbc50(void) {
  FTRACE(0x11fdbc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdbc50 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdbc51 mov ebp, esp */
  EBP = (ESP);
  /* 11fdbc53 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdbc55 call 0x11fdb0c0 */
  push32(0x11fdbc5au); f_11fdb0c0();
  /* 11fdbc5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbc5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdbc60 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbc61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbc64 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbc65 call 0x11fdbc80 */
  push32(0x11fdbc6au); f_11fdbc80();
  /* 11fdbc6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbc6d push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdbc6f call 0x11fdb160 */
  push32(0x11fdbc74u); f_11fdb160();
  /* 11fdbc74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbc77 pop ebp */
  EBP = (pop32());
  /* 11fdbc78 ret  */
  ESPCHK(0x11fdbc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x11fdbc80 (1004 bytes, 342 insns) */
void f_11fdbc80(void) {
  FTRACE(0x11fdbc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdbc80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdbc81 mov ebp, esp */
  EBP = (ESP);
  /* 11fdbc83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbc84 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdbc85 push esi */
  push32((uint32_t)(ESI));
  /* 11fdbc86 push edi */
  push32((uint32_t)(EDI));
  /* 11fdbc87 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdbc8c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbc8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbc91 je 0x11fdbcc3 */
  if (C.zf) goto L_11fdbcc3;
L_11fdbc93:;
  /* 11fdbc93 call 0x11fdc360 */
  push32(0x11fdbc98u); f_11fdc360();
  /* 11fdbc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbc9a jne 0x11fdbcbd */
  if (!C.zf) goto L_11fdbcbd;
  /* 11fdbc9c push 0x12009658 */
  push32((uint32_t)(0x12009658u));
  /* 11fdbca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbca3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11fdbca8 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbcad push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbcaf call 0x11fd9d80 */
  push32(0x11fdbcb4u); f_11fd9d80();
  /* 11fdbcb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbcb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbcba jne 0x11fdbcbd */
  if (!C.zf) goto L_11fdbcbd;
  /* 11fdbcbc int3  */
  x86_unimpl("int3 @ 0x11fdbcbc");
L_11fdbcbd:;
  /* 11fdbcbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbcbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbcc1 jne 0x11fdbc93 */
  if (!C.zf) goto L_11fdbc93;
L_11fdbcc3:;
  /* 11fdbcc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbcc7 jne 0x11fdbcce */
  if (!C.zf) goto L_11fdbcce;
  /* 11fdbcc9 jmp 0x11fdc065 */
  goto L_11fdc065;
L_11fdbcce:;
  /* 11fdbcce push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdbcd7 push edx */
  push32((uint32_t)(EDX));
  /* 11fdbcd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbcdd push eax */
  push32((uint32_t)(EAX));
  /* 11fdbcde push 3 */
  push32((uint32_t)(0x3u));
  /* 11fdbce0 call dword ptr [0x1200d230] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200d230))), 0x11fdbce6u);
  /* 11fdbce6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbceb jne 0x11fdbd18 */
  if (!C.zf) goto L_11fdbd18;
L_11fdbced:;
  /* 11fdbced push 0x120098f4 */
  push32((uint32_t)(0x120098f4u));
  /* 11fdbcf2 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdbcf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbcff call 0x11fd9d80 */
  push32(0x11fdbd04u); f_11fd9d80();
  /* 11fdbd04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbd07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbd0a jne 0x11fdbd0d */
  if (!C.zf) goto L_11fdbd0d;
  /* 11fdbd0c int3  */
  x86_unimpl("int3 @ 0x11fdbd0c");
L_11fdbd0d:;
  /* 11fdbd0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbd0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbd11 jne 0x11fdbced */
  if (!C.zf) goto L_11fdbced;
  /* 11fdbd13 jmp 0x11fdc065 */
  goto L_11fdc065;
L_11fdbd18:;
  /* 11fdbd18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbd1b push edx */
  push32((uint32_t)(EDX));
  /* 11fdbd1c call 0x11fdc7c0 */
  push32(0x11fdbd21u); f_11fdc7c0();
  /* 11fdbd21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbd24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbd26 jne 0x11fdbd49 */
  if (!C.zf) goto L_11fdbd49;
  /* 11fdbd28 push 0x1200975c */
  push32((uint32_t)(0x1200975cu));
  /* 11fdbd2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbd2f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11fdbd34 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbd39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbd3b call 0x11fd9d80 */
  push32(0x11fdbd40u); f_11fd9d80();
  /* 11fdbd40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbd43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbd46 jne 0x11fdbd49 */
  if (!C.zf) goto L_11fdbd49;
  /* 11fdbd48 int3  */
  x86_unimpl("int3 @ 0x11fdbd48");
L_11fdbd49:;
  /* 11fdbd49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbd4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbd4d jne 0x11fdbd18 */
  if (!C.zf) goto L_11fdbd18;
  /* 11fdbd4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdbd52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdbd55 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdbd58:;
  /* 11fdbd58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbd5b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdbd5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbd63 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbd66 je 0x11fdbdab */
  if (C.zf) goto L_11fdbdab;
  /* 11fdbd68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbd6b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbd6f je 0x11fdbdab */
  if (C.zf) goto L_11fdbdab;
  /* 11fdbd71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbd74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdbd77 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbd7c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbd7f je 0x11fdbdab */
  if (C.zf) goto L_11fdbdab;
  /* 11fdbd81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbd84 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbd88 je 0x11fdbdab */
  if (C.zf) goto L_11fdbdab;
  /* 11fdbd8a push 0x12009270 */
  push32((uint32_t)(0x12009270u));
  /* 11fdbd8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbd91 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11fdbd96 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbd9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbd9d call 0x11fd9d80 */
  push32(0x11fdbda2u); f_11fd9d80();
  /* 11fdbda2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbda5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbda8 jne 0x11fdbdab */
  if (!C.zf) goto L_11fdbdab;
  /* 11fdbdaa int3  */
  x86_unimpl("int3 @ 0x11fdbdaa");
L_11fdbdab:;
  /* 11fdbdab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdbdad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdbdaf jne 0x11fdbd58 */
  if (!C.zf) goto L_11fdbd58;
  /* 11fdbdb1 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdbdb6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbdb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbdbb jne 0x11fdbe86 */
  if (!C.zf) goto L_11fdbe86;
  /* 11fdbdc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdbdc3 mov cl, byte ptr [0x1200cf04] */
  CL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdbdc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbdca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbdcd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbdd0 push edx */
  push32((uint32_t)(EDX));
  /* 11fdbdd1 call 0x11fdc2d0 */
  push32(0x11fdbdd6u); f_11fdc2d0();
  /* 11fdbdd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbddb jne 0x11fdbe20 */
  if (!C.zf) goto L_11fdbe20;
L_11fdbddd:;
  /* 11fdbddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbde0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbde3 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbde4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbde7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fdbdea push edx */
  push32((uint32_t)(EDX));
  /* 11fdbdeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbdee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdbdf1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbdf7 mov edx, dword ptr [ecx*4 + 0x1200cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cf08)));
  /* 11fdbdfe push edx */
  push32((uint32_t)(EDX));
  /* 11fdbdff push 0x120098c8 */
  push32((uint32_t)(0x120098c8u));
  /* 11fdbe04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbe06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbe08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbe0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdbe0c call 0x11fd9d80 */
  push32(0x11fdbe11u); f_11fd9d80();
  /* 11fdbe11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbe14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbe17 jne 0x11fdbe1a */
  if (!C.zf) goto L_11fdbe1a;
  /* 11fdbe19 int3  */
  x86_unimpl("int3 @ 0x11fdbe19");
L_11fdbe1a:;
  /* 11fdbe1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbe1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbe1e jne 0x11fdbddd */
  if (!C.zf) goto L_11fdbddd;
L_11fdbe20:;
  /* 11fdbe20 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdbe22 mov cl, byte ptr [0x1200cf04] */
  CL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdbe28 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbe29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdbe2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe32 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11fdbe36 push edx */
  push32((uint32_t)(EDX));
  /* 11fdbe37 call 0x11fdc2d0 */
  push32(0x11fdbe3cu); f_11fdc2d0();
  /* 11fdbe3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbe3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbe41 jne 0x11fdbe86 */
  if (!C.zf) goto L_11fdbe86;
L_11fdbe43:;
  /* 11fdbe43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbe49 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbe4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe4d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fdbe50 push edx */
  push32((uint32_t)(EDX));
  /* 11fdbe51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe54 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdbe57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbe5d mov edx, dword ptr [ecx*4 + 0x1200cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cf08)));
  /* 11fdbe64 push edx */
  push32((uint32_t)(EDX));
  /* 11fdbe65 push 0x1200989c */
  push32((uint32_t)(0x1200989cu));
  /* 11fdbe6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbe6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbe6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbe70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdbe72 call 0x11fd9d80 */
  push32(0x11fdbe77u); f_11fd9d80();
  /* 11fdbe77 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbe7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbe7d jne 0x11fdbe80 */
  if (!C.zf) goto L_11fdbe80;
  /* 11fdbe7f int3  */
  x86_unimpl("int3 @ 0x11fdbe7f");
L_11fdbe80:;
  /* 11fdbe80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdbe82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdbe84 jne 0x11fdbe43 */
  if (!C.zf) goto L_11fdbe43;
L_11fdbe86:;
  /* 11fdbe86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe89 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbe8d jne 0x11fdbefb */
  if (!C.zf) goto L_11fdbefb;
L_11fdbe8f:;
  /* 11fdbe8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe92 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbe99 jne 0x11fdbea4 */
  if (!C.zf) goto L_11fdbea4;
  /* 11fdbe9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbe9e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbea2 je 0x11fdbec5 */
  if (C.zf) goto L_11fdbec5;
L_11fdbea4:;
  /* 11fdbea4 push 0x1200985c */
  push32((uint32_t)(0x1200985cu));
  /* 11fdbea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbeab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11fdbeb0 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbeb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbeb7 call 0x11fd9d80 */
  push32(0x11fdbebcu); f_11fd9d80();
  /* 11fdbebc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbebf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbec2 jne 0x11fdbec5 */
  if (!C.zf) goto L_11fdbec5;
  /* 11fdbec4 int3  */
  x86_unimpl("int3 @ 0x11fdbec4");
L_11fdbec5:;
  /* 11fdbec5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbec7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbec9 jne 0x11fdbe8f */
  if (!C.zf) goto L_11fdbe8f;
  /* 11fdbecb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbece mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdbed1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbed4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdbed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbed7 mov cl, byte ptr [0x1200cf05] */
  CL = (r8((uint32_t)(0x1200cf05)));
  /* 11fdbedd push ecx */
  push32((uint32_t)(ECX));
  /* 11fdbede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbee1 push edx */
  push32((uint32_t)(EDX));
  /* 11fdbee2 call 0x11fe15d0 */
  push32(0x11fdbee7u); f_11fe15d0();
  /* 11fdbee7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbeea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbeed push eax */
  push32((uint32_t)(EAX));
  /* 11fdbeee call 0x11fe1d90 */
  push32(0x11fdbef3u); f_11fe1d90();
  /* 11fdbef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbef6 jmp 0x11fdc065 */
  goto L_11fdc065;
L_11fdbefb:;
  /* 11fdbefb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbefe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbf02 jne 0x11fdbf11 */
  if (!C.zf) goto L_11fdbf11;
  /* 11fdbf04 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbf08 jne 0x11fdbf11 */
  if (!C.zf) goto L_11fdbf11;
  /* 11fdbf0a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11fdbf11:;
  /* 11fdbf11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbf14 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdbf17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbf1a je 0x11fdbf3d */
  if (C.zf) goto L_11fdbf3d;
  /* 11fdbf1c push 0x1200983c */
  push32((uint32_t)(0x1200983cu));
  /* 11fdbf21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbf23 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11fdbf28 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbf2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbf2f call 0x11fd9d80 */
  push32(0x11fdbf34u); f_11fd9d80();
  /* 11fdbf34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbf37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbf3a jne 0x11fdbf3d */
  if (!C.zf) goto L_11fdbf3d;
  /* 11fdbf3c int3  */
  x86_unimpl("int3 @ 0x11fdbf3c");
L_11fdbf3d:;
  /* 11fdbf3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbf3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbf41 jne 0x11fdbf11 */
  if (!C.zf) goto L_11fdbf11;
  /* 11fdbf43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbf46 mov eax, dword ptr [0x1200ef94] */
  EAX = (r32((uint32_t)(0x1200ef94)));
  /* 11fdbf4b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdbf4e mov dword ptr [0x1200ef94], eax */
  w32((uint32_t)(0x1200ef94), (EAX));
  /* 11fdbf53 mov ecx, dword ptr [0x1200cef8] */
  ECX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdbf59 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdbf5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdbf5e jne 0x11fdc03c */
  if (!C.zf) goto L_11fdc03c;
  /* 11fdbf64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbf67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbf6a je 0x11fdbf7c */
  if (C.zf) goto L_11fdbf7c;
  /* 11fdbf6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbf6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdbf71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbf74 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdbf77 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fdbf7a jmp 0x11fdbfba */
  goto L_11fdbfba;
L_11fdbf7c:;
  /* 11fdbf7c mov ecx, dword ptr [0x1200ef88] */
  ECX = (r32((uint32_t)(0x1200ef88)));
  /* 11fdbf82 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbf85 je 0x11fdbfa8 */
  if (C.zf) goto L_11fdbfa8;
  /* 11fdbf87 push 0x12009824 */
  push32((uint32_t)(0x12009824u));
  /* 11fdbf8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbf8e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11fdbf93 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbf98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbf9a call 0x11fd9d80 */
  push32(0x11fdbf9fu); f_11fd9d80();
  /* 11fdbf9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbfa2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbfa5 jne 0x11fdbfa8 */
  if (!C.zf) goto L_11fdbfa8;
  /* 11fdbfa7 int3  */
  x86_unimpl("int3 @ 0x11fdbfa7");
L_11fdbfa8:;
  /* 11fdbfa8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdbfaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdbfac jne 0x11fdbf7c */
  if (!C.zf) goto L_11fdbf7c;
  /* 11fdbfae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbfb1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdbfb4 mov dword ptr [0x1200ef88], ecx */
  w32((uint32_t)(0x1200ef88), (ECX));
L_11fdbfba:;
  /* 11fdbfba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbfbd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbfc1 je 0x11fdbfd2 */
  if (C.zf) goto L_11fdbfd2;
  /* 11fdbfc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbfc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdbfc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdbfcc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdbfce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fdbfd0 jmp 0x11fdc00f */
  goto L_11fdc00f;
L_11fdbfd2:;
  /* 11fdbfd2 mov ecx, dword ptr [0x1200ef90] */
  ECX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdbfd8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbfdb je 0x11fdbffe */
  if (C.zf) goto L_11fdbffe;
  /* 11fdbfdd push 0x1200980c */
  push32((uint32_t)(0x1200980cu));
  /* 11fdbfe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdbfe4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11fdbfe9 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdbfee push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdbff0 call 0x11fd9d80 */
  push32(0x11fdbff5u); f_11fd9d80();
  /* 11fdbff5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdbff8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdbffb jne 0x11fdbffe */
  if (!C.zf) goto L_11fdbffe;
  /* 11fdbffd int3  */
  x86_unimpl("int3 @ 0x11fdbffd");
L_11fdbffe:;
  /* 11fdbffe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc000 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc002 jne 0x11fdbfd2 */
  if (!C.zf) goto L_11fdbfd2;
  /* 11fdc004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc007 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdc009 mov dword ptr [0x1200ef90], ecx */
  w32((uint32_t)(0x1200ef90), (ECX));
L_11fdc00f:;
  /* 11fdc00f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc012 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdc015 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc018 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc019 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc01b mov cl, byte ptr [0x1200cf05] */
  CL = (r8((uint32_t)(0x1200cf05)));
  /* 11fdc021 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc025 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc026 call 0x11fe15d0 */
  push32(0x11fdc02bu); f_11fe15d0();
  /* 11fdc02b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc02e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc031 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc032 call 0x11fe1d90 */
  push32(0x11fdc037u); f_11fe1d90();
  /* 11fdc037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc03a jmp 0x11fdc065 */
  goto L_11fdc065;
L_11fdc03c:;
  /* 11fdc03c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc03f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11fdc046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc049 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdc04c push eax */
  push32((uint32_t)(EAX));
  /* 11fdc04d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc04f mov cl, byte ptr [0x1200cf05] */
  CL = (r8((uint32_t)(0x1200cf05)));
  /* 11fdc055 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc059 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc05c push edx */
  push32((uint32_t)(EDX));
  /* 11fdc05d call 0x11fe15d0 */
  push32(0x11fdc062u); f_11fe15d0();
  /* 11fdc062 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdc065:;
  /* 11fdc065 pop edi */
  EDI = (pop32());
  /* 11fdc066 pop esi */
  ESI = (pop32());
  /* 11fdc067 pop ebx */
  EBX = (pop32());
  /* 11fdc068 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc06a pop ebp */
  EBP = (pop32());
  /* 11fdc06b ret  */
  ESPCHK(0x11fdbc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c070 @ 0x11fdc070 (19 bytes, 9 insns) */
void f_11fdc070(void) {
  FTRACE(0x11fdc070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc070 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc071 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc073 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdc075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc078 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc079 call 0x11fdc090 */
  push32(0x11fdc07eu); f_11fdc090();
  /* 11fdc07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc081 pop ebp */
  EBP = (pop32());
  /* 11fdc082 ret  */
  ESPCHK(0x11fdc070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c090 @ 0x11fdc090 (342 bytes, 119 insns) */
void f_11fdc090(void) {
  FTRACE(0x11fdc090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc090 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc091 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc096 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdc097 push esi */
  push32((uint32_t)(ESI));
  /* 11fdc098 push edi */
  push32((uint32_t)(EDI));
  /* 11fdc099 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdc09e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc0a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc0a3 je 0x11fdc0d5 */
  if (C.zf) goto L_11fdc0d5;
L_11fdc0a5:;
  /* 11fdc0a5 call 0x11fdc360 */
  push32(0x11fdc0aau); f_11fdc360();
  /* 11fdc0aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc0ac jne 0x11fdc0cf */
  if (!C.zf) goto L_11fdc0cf;
  /* 11fdc0ae push 0x12009658 */
  push32((uint32_t)(0x12009658u));
  /* 11fdc0b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc0b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11fdc0ba push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdc0bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdc0c1 call 0x11fd9d80 */
  push32(0x11fdc0c6u); f_11fd9d80();
  /* 11fdc0c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc0c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc0cc jne 0x11fdc0cf */
  if (!C.zf) goto L_11fdc0cf;
  /* 11fdc0ce int3  */
  x86_unimpl("int3 @ 0x11fdc0ce");
L_11fdc0cf:;
  /* 11fdc0cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc0d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc0d3 jne 0x11fdc0a5 */
  if (!C.zf) goto L_11fdc0a5;
L_11fdc0d5:;
  /* 11fdc0d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc0d7 call 0x11fdb0c0 */
  push32(0x11fdc0dcu); f_11fdb0c0();
  /* 11fdc0dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdc0df:;
  /* 11fdc0df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc0e2 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc0e3 call 0x11fdc7c0 */
  push32(0x11fdc0e8u); f_11fdc7c0();
  /* 11fdc0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc0eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc0ed jne 0x11fdc110 */
  if (!C.zf) goto L_11fdc110;
  /* 11fdc0ef push 0x1200975c */
  push32((uint32_t)(0x1200975cu));
  /* 11fdc0f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc0f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11fdc0fb push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdc100 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdc102 call 0x11fd9d80 */
  push32(0x11fdc107u); f_11fd9d80();
  /* 11fdc107 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc10a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc10d jne 0x11fdc110 */
  if (!C.zf) goto L_11fdc110;
  /* 11fdc10f int3  */
  x86_unimpl("int3 @ 0x11fdc10f");
L_11fdc110:;
  /* 11fdc110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc114 jne 0x11fdc0df */
  if (!C.zf) goto L_11fdc0df;
  /* 11fdc116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc119 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fdc11f:;
  /* 11fdc11f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc122 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc125 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc12a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc12d je 0x11fdc172 */
  if (C.zf) goto L_11fdc172;
  /* 11fdc12f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc132 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc136 je 0x11fdc172 */
  if (C.zf) goto L_11fdc172;
  /* 11fdc138 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc13b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc13e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc143 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc146 je 0x11fdc172 */
  if (C.zf) goto L_11fdc172;
  /* 11fdc148 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc14b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc14f je 0x11fdc172 */
  if (C.zf) goto L_11fdc172;
  /* 11fdc151 push 0x12009270 */
  push32((uint32_t)(0x12009270u));
  /* 11fdc156 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc158 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11fdc15d push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdc162 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdc164 call 0x11fd9d80 */
  push32(0x11fdc169u); f_11fd9d80();
  /* 11fdc169 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc16c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc16f jne 0x11fdc172 */
  if (!C.zf) goto L_11fdc172;
  /* 11fdc171 int3  */
  x86_unimpl("int3 @ 0x11fdc171");
L_11fdc172:;
  /* 11fdc172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc174 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc176 jne 0x11fdc11f */
  if (!C.zf) goto L_11fdc11f;
  /* 11fdc178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc17b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc17f jne 0x11fdc18e */
  if (!C.zf) goto L_11fdc18e;
  /* 11fdc181 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc185 jne 0x11fdc18e */
  if (!C.zf) goto L_11fdc18e;
  /* 11fdc187 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11fdc18e:;
  /* 11fdc18e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc191 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc195 je 0x11fdc1c9 */
  if (C.zf) goto L_11fdc1c9;
L_11fdc197:;
  /* 11fdc197 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc19a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc19d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc1a0 je 0x11fdc1c3 */
  if (C.zf) goto L_11fdc1c3;
  /* 11fdc1a2 push 0x1200983c */
  push32((uint32_t)(0x1200983cu));
  /* 11fdc1a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc1a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11fdc1ae push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdc1b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdc1b5 call 0x11fd9d80 */
  push32(0x11fdc1bau); f_11fd9d80();
  /* 11fdc1ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc1bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc1c0 jne 0x11fdc1c3 */
  if (!C.zf) goto L_11fdc1c3;
  /* 11fdc1c2 int3  */
  x86_unimpl("int3 @ 0x11fdc1c2");
L_11fdc1c3:;
  /* 11fdc1c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc1c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc1c7 jne 0x11fdc197 */
  if (!C.zf) goto L_11fdc197;
L_11fdc1c9:;
  /* 11fdc1c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc1cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdc1cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdc1d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc1d4 call 0x11fdb160 */
  push32(0x11fdc1d9u); f_11fdb160();
  /* 11fdc1d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc1dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc1df pop edi */
  EDI = (pop32());
  /* 11fdc1e0 pop esi */
  ESI = (pop32());
  /* 11fdc1e1 pop ebx */
  EBX = (pop32());
  /* 11fdc1e2 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc1e4 pop ebp */
  EBP = (pop32());
  /* 11fdc1e5 ret  */
  ESPCHK(0x11fdc090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1f0 @ 0x11fdc1f0 (28 bytes, 11 insns) */
void f_11fdc1f0(void) {
  FTRACE(0x11fdc1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc1f4 mov eax, dword ptr [0x1200cf00] */
  EAX = (r32((uint32_t)(0x1200cf00)));
  /* 11fdc1f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdc1fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc1ff mov dword ptr [0x1200cf00], ecx */
  w32((uint32_t)(0x1200cf00), (ECX));
  /* 11fdc205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc208 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc20a pop ebp */
  EBP = (pop32());
  /* 11fdc20b ret  */
  ESPCHK(0x11fdc1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x11fdc210 (157 bytes, 59 insns) */
void f_11fdc210(void) {
  FTRACE(0x11fdc210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc210 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc211 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc213 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc214 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdc215 push esi */
  push32((uint32_t)(ESI));
  /* 11fdc216 push edi */
  push32((uint32_t)(EDI));
  /* 11fdc217 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc219 call 0x11fdb0c0 */
  push32(0x11fdc21eu); f_11fdb0c0();
  /* 11fdc21e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc224 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc225 call 0x11fdc7c0 */
  push32(0x11fdc22au); f_11fdc7c0();
  /* 11fdc22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc22d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc22f je 0x11fdc29c */
  if (C.zf) goto L_11fdc29c;
  /* 11fdc231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc234 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc237 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdc23a:;
  /* 11fdc23a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc23d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc240 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc245 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc248 je 0x11fdc28d */
  if (C.zf) goto L_11fdc28d;
  /* 11fdc24a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc24d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc251 je 0x11fdc28d */
  if (C.zf) goto L_11fdc28d;
  /* 11fdc253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc256 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc259 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc25e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc261 je 0x11fdc28d */
  if (C.zf) goto L_11fdc28d;
  /* 11fdc263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc266 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc26a je 0x11fdc28d */
  if (C.zf) goto L_11fdc28d;
  /* 11fdc26c push 0x12009270 */
  push32((uint32_t)(0x12009270u));
  /* 11fdc271 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc273 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11fdc278 push 0x1200964c */
  push32((uint32_t)(0x1200964cu));
  /* 11fdc27d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdc27f call 0x11fd9d80 */
  push32(0x11fdc284u); f_11fd9d80();
  /* 11fdc284 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc287 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc28a jne 0x11fdc28d */
  if (!C.zf) goto L_11fdc28d;
  /* 11fdc28c int3  */
  x86_unimpl("int3 @ 0x11fdc28c");
L_11fdc28d:;
  /* 11fdc28d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc28f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc291 jne 0x11fdc23a */
  if (!C.zf) goto L_11fdc23a;
  /* 11fdc293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc296 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc299 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11fdc29c:;
  /* 11fdc29c push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc29e call 0x11fdb160 */
  push32(0x11fdc2a3u); f_11fdb160();
  /* 11fdc2a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc2a6 pop edi */
  EDI = (pop32());
  /* 11fdc2a7 pop esi */
  ESI = (pop32());
  /* 11fdc2a8 pop ebx */
  EBX = (pop32());
  /* 11fdc2a9 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc2ab pop ebp */
  EBP = (pop32());
  /* 11fdc2ac ret  */
  ESPCHK(0x11fdc210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x11fdc2b0 (28 bytes, 11 insns) */
void f_11fdc2b0(void) {
  FTRACE(0x11fdc2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc2b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc2b4 mov eax, dword ptr [0x1200d230] */
  EAX = (r32((uint32_t)(0x1200d230)));
  /* 11fdc2b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdc2bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc2bf mov dword ptr [0x1200d230], ecx */
  w32((uint32_t)(0x1200d230), (ECX));
  /* 11fdc2c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc2c8 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc2ca pop ebp */
  EBP = (pop32());
  /* 11fdc2cb ret  */
  ESPCHK(0x11fdc2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d0 @ 0x11fdc2d0 (136 bytes, 55 insns) */
void f_11fdc2d0(void) {
  FTRACE(0x11fdc2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc2d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdc2d5 push esi */
  push32((uint32_t)(ESI));
  /* 11fdc2d6 push edi */
  push32((uint32_t)(EDI));
  /* 11fdc2d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11fdc2de:;
  /* 11fdc2de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdc2e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdc2e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc2e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fdc2ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc2ec je 0x11fdc34e */
  if (C.zf) goto L_11fdc34e;
  /* 11fdc2ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc2f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc2f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fdc2f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc2f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc2fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc301 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc304 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fdc307 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc309 je 0x11fdc34c */
  if (C.zf) goto L_11fdc34c;
L_11fdc30b:;
  /* 11fdc30b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc30e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc313 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc317 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc319 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11fdc31c push edx */
  push32((uint32_t)(EDX));
  /* 11fdc31d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc320 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc323 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc324 push 0x12009910 */
  push32((uint32_t)(0x12009910u));
  /* 11fdc329 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc32b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc32d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc32f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc331 call 0x11fd9d80 */
  push32(0x11fdc336u); f_11fd9d80();
  /* 11fdc336 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc339 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc33c jne 0x11fdc33f */
  if (!C.zf) goto L_11fdc33f;
  /* 11fdc33e int3  */
  x86_unimpl("int3 @ 0x11fdc33e");
L_11fdc33f:;
  /* 11fdc33f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc341 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc343 jne 0x11fdc30b */
  if (!C.zf) goto L_11fdc30b;
  /* 11fdc345 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdc34c:;
  /* 11fdc34c jmp 0x11fdc2de */
  goto L_11fdc2de;
L_11fdc34e:;
  /* 11fdc34e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc351 pop edi */
  EDI = (pop32());
  /* 11fdc352 pop esi */
  ESI = (pop32());
  /* 11fdc353 pop ebx */
  EBX = (pop32());
  /* 11fdc354 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc356 pop ebp */
  EBP = (pop32());
  /* 11fdc357 ret  */
  ESPCHK(0x11fdc2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x11fdc360 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11fdc360(void) {
  FTRACE(0x11fdc360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc360 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc361 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc363 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc366 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdc367 push esi */
  push32((uint32_t)(ESI));
  /* 11fdc368 push edi */
  push32((uint32_t)(EDI));
  /* 11fdc369 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdc370 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdc375 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc37a jne 0x11fdc386 */
  if (!C.zf) goto L_11fdc386;
  /* 11fdc37c mov eax, 1 */
  EAX = (0x1u);
  /* 11fdc381 jmp 0x11fdc6b8 */
  goto L_11fdc6b8;
L_11fdc386:;
  /* 11fdc386 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc388 call 0x11fdb0c0 */
  push32(0x11fdc38du); f_11fdb0c0();
  /* 11fdc38d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc390 call 0x11fe1e00 */
  push32(0x11fdc395u); f_11fe1e00();
  /* 11fdc395 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdc398 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc39c je 0x11fdc4a9 */
  if (C.zf) goto L_11fdc4a9;
  /* 11fdc3a2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc3a6 je 0x11fdc4a9 */
  if (C.zf) goto L_11fdc4a9;
  /* 11fdc3ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdc3af mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fdc3b2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdc3b5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc3b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fdc3bb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc3bf ja 0x11fdc472 */
  if ((!C.cf&&!C.zf)) goto L_11fdc472;
  /* 11fdc3c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdc3c8 jmp dword ptr [eax*4 + 0x11fdc6bf] */
  switch (EAX) {
    case 0: goto L_11fdc44a;
    case 1: goto L_11fdc422;
    case 2: goto L_11fdc3fa;
    case 3: goto L_11fdc3cf;
    default: x86_unimpl("switch@0x11fdc3c8 out of table"); return;
  }
L_11fdc3cf:;
  /* 11fdc3cf push 0x12009a64 */
  push32((uint32_t)(0x12009a64u));
  /* 11fdc3d4 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdc3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc3db push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc3dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc3df push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc3e1 call 0x11fd9d80 */
  push32(0x11fdc3e6u); f_11fd9d80();
  /* 11fdc3e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc3e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc3ec jne 0x11fdc3ef */
  if (!C.zf) goto L_11fdc3ef;
  /* 11fdc3ee int3  */
  x86_unimpl("int3 @ 0x11fdc3ee");
L_11fdc3ef:;
  /* 11fdc3ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc3f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc3f3 jne 0x11fdc3cf */
  if (!C.zf) goto L_11fdc3cf;
  /* 11fdc3f5 jmp 0x11fdc498 */
  goto L_11fdc498;
L_11fdc3fa:;
  /* 11fdc3fa push 0x12009a40 */
  push32((uint32_t)(0x12009a40u));
  /* 11fdc3ff push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdc404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc408 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc40a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc40c call 0x11fd9d80 */
  push32(0x11fdc411u); f_11fd9d80();
  /* 11fdc411 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc414 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc417 jne 0x11fdc41a */
  if (!C.zf) goto L_11fdc41a;
  /* 11fdc419 int3  */
  x86_unimpl("int3 @ 0x11fdc419");
L_11fdc41a:;
  /* 11fdc41a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc41c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc41e jne 0x11fdc3fa */
  if (!C.zf) goto L_11fdc3fa;
  /* 11fdc420 jmp 0x11fdc498 */
  goto L_11fdc498;
L_11fdc422:;
  /* 11fdc422 push 0x12009a1c */
  push32((uint32_t)(0x12009a1cu));
  /* 11fdc427 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdc42c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc42e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc430 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc434 call 0x11fd9d80 */
  push32(0x11fdc439u); f_11fd9d80();
  /* 11fdc439 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc43c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc43f jne 0x11fdc442 */
  if (!C.zf) goto L_11fdc442;
  /* 11fdc441 int3  */
  x86_unimpl("int3 @ 0x11fdc441");
L_11fdc442:;
  /* 11fdc442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc446 jne 0x11fdc422 */
  if (!C.zf) goto L_11fdc422;
  /* 11fdc448 jmp 0x11fdc498 */
  goto L_11fdc498;
L_11fdc44a:;
  /* 11fdc44a push 0x120099f8 */
  push32((uint32_t)(0x120099f8u));
  /* 11fdc44f push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdc454 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc456 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc458 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc45a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc45c call 0x11fd9d80 */
  push32(0x11fdc461u); f_11fd9d80();
  /* 11fdc461 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc464 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc467 jne 0x11fdc46a */
  if (!C.zf) goto L_11fdc46a;
  /* 11fdc469 int3  */
  x86_unimpl("int3 @ 0x11fdc469");
L_11fdc46a:;
  /* 11fdc46a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc46c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc46e jne 0x11fdc44a */
  if (!C.zf) goto L_11fdc44a;
  /* 11fdc470 jmp 0x11fdc498 */
  goto L_11fdc498;
L_11fdc472:;
  /* 11fdc472 push 0x120099cc */
  push32((uint32_t)(0x120099ccu));
  /* 11fdc477 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdc47c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc47e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc480 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc484 call 0x11fd9d80 */
  push32(0x11fdc489u); f_11fd9d80();
  /* 11fdc489 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc48c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc48f jne 0x11fdc492 */
  if (!C.zf) goto L_11fdc492;
  /* 11fdc491 int3  */
  x86_unimpl("int3 @ 0x11fdc491");
L_11fdc492:;
  /* 11fdc492 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc494 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc496 jne 0x11fdc472 */
  if (!C.zf) goto L_11fdc472;
L_11fdc498:;
  /* 11fdc498 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc49a call 0x11fdb160 */
  push32(0x11fdc49fu); f_11fdb160();
  /* 11fdc49f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc4a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc4a4 jmp 0x11fdc6b8 */
  goto L_11fdc6b8;
L_11fdc4a9:;
  /* 11fdc4a9 mov eax, dword ptr [0x1200ef90] */
  EAX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdc4ae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdc4b1 jmp 0x11fdc4bb */
  goto L_11fdc4bb;
L_11fdc4b3:;
  /* 11fdc4b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc4b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdc4b8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fdc4bb:;
  /* 11fdc4bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc4bf je 0x11fdc6ab */
  if (C.zf) goto L_11fdc6ab;
  /* 11fdc4c5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11fdc4cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc4cf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdc4d2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc4d8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc4db je 0x11fdc500 */
  if (C.zf) goto L_11fdc500;
  /* 11fdc4dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc4e0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc4e4 je 0x11fdc500 */
  if (C.zf) goto L_11fdc500;
  /* 11fdc4e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc4e9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdc4ec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc4f2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc4f5 je 0x11fdc500 */
  if (C.zf) goto L_11fdc500;
  /* 11fdc4f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc4fa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc4fe jne 0x11fdc518 */
  if (!C.zf) goto L_11fdc518;
L_11fdc500:;
  /* 11fdc500 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc503 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdc506 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc50c mov edx, dword ptr [ecx*4 + 0x1200cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cf08)));
  /* 11fdc513 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fdc516 jmp 0x11fdc51f */
  goto L_11fdc51f;
L_11fdc518:;
  /* 11fdc518 mov dword ptr [ebp - 0x14], 0x120099c4 */
  w32((uint32_t)(EBP + -0x14), (0x120099c4u));
L_11fdc51f:;
  /* 11fdc51f push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdc521 mov al, byte ptr [0x1200cf04] */
  AL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdc526 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc527 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc52a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc52d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc52e call 0x11fdc2d0 */
  push32(0x11fdc533u); f_11fdc2d0();
  /* 11fdc533 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc538 jne 0x11fdc574 */
  if (!C.zf) goto L_11fdc574;
L_11fdc53a:;
  /* 11fdc53a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc53d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc540 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc544 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fdc547 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc548 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdc54b push edx */
  push32((uint32_t)(EDX));
  /* 11fdc54c push 0x120098c8 */
  push32((uint32_t)(0x120098c8u));
  /* 11fdc551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc553 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc557 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc559 call 0x11fd9d80 */
  push32(0x11fdc55eu); f_11fd9d80();
  /* 11fdc55e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc561 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc564 jne 0x11fdc567 */
  if (!C.zf) goto L_11fdc567;
  /* 11fdc566 int3  */
  x86_unimpl("int3 @ 0x11fdc566");
L_11fdc567:;
  /* 11fdc567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc56b jne 0x11fdc53a */
  if (!C.zf) goto L_11fdc53a;
  /* 11fdc56d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11fdc574:;
  /* 11fdc574 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fdc576 mov cl, byte ptr [0x1200cf04] */
  CL = (r8((uint32_t)(0x1200cf04)));
  /* 11fdc57c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc57d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc580 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdc583 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc586 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11fdc58a push edx */
  push32((uint32_t)(EDX));
  /* 11fdc58b call 0x11fdc2d0 */
  push32(0x11fdc590u); f_11fdc2d0();
  /* 11fdc590 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc595 jne 0x11fdc5d1 */
  if (!C.zf) goto L_11fdc5d1;
L_11fdc597:;
  /* 11fdc597 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc59a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc59d push eax */
  push32((uint32_t)(EAX));
  /* 11fdc59e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc5a1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fdc5a4 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc5a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdc5a8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc5a9 push 0x1200989c */
  push32((uint32_t)(0x1200989cu));
  /* 11fdc5ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc5b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc5b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc5b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc5b6 call 0x11fd9d80 */
  push32(0x11fdc5bbu); f_11fd9d80();
  /* 11fdc5bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc5be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc5c1 jne 0x11fdc5c4 */
  if (!C.zf) goto L_11fdc5c4;
  /* 11fdc5c3 int3  */
  x86_unimpl("int3 @ 0x11fdc5c3");
L_11fdc5c4:;
  /* 11fdc5c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc5c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc5c8 jne 0x11fdc597 */
  if (!C.zf) goto L_11fdc597;
  /* 11fdc5ca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11fdc5d1:;
  /* 11fdc5d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc5d4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc5d8 jne 0x11fdc62a */
  if (!C.zf) goto L_11fdc62a;
  /* 11fdc5da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc5dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fdc5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc5e1 mov dl, byte ptr [0x1200cf05] */
  DL = (r8((uint32_t)(0x1200cf05)));
  /* 11fdc5e7 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc5e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc5eb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc5ee push eax */
  push32((uint32_t)(EAX));
  /* 11fdc5ef call 0x11fdc2d0 */
  push32(0x11fdc5f4u); f_11fdc2d0();
  /* 11fdc5f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc5f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc5f9 jne 0x11fdc62a */
  if (!C.zf) goto L_11fdc62a;
L_11fdc5fb:;
  /* 11fdc5fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc5fe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc601 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc602 push 0x12009998 */
  push32((uint32_t)(0x12009998u));
  /* 11fdc607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc609 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc60b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc60d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc60f call 0x11fd9d80 */
  push32(0x11fdc614u); f_11fd9d80();
  /* 11fdc614 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc617 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc61a jne 0x11fdc61d */
  if (!C.zf) goto L_11fdc61d;
  /* 11fdc61c int3  */
  x86_unimpl("int3 @ 0x11fdc61c");
L_11fdc61d:;
  /* 11fdc61d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc61f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc621 jne 0x11fdc5fb */
  if (!C.zf) goto L_11fdc5fb;
  /* 11fdc623 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11fdc62a:;
  /* 11fdc62a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc62e jne 0x11fdc6a6 */
  if (!C.zf) goto L_11fdc6a6;
  /* 11fdc630 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc633 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc637 je 0x11fdc66c */
  if (C.zf) goto L_11fdc66c;
L_11fdc639:;
  /* 11fdc639 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc63c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fdc63f push edx */
  push32((uint32_t)(EDX));
  /* 11fdc640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc643 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fdc646 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc647 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdc64a push edx */
  push32((uint32_t)(EDX));
  /* 11fdc64b push 0x12009978 */
  push32((uint32_t)(0x12009978u));
  /* 11fdc650 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc654 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc656 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc658 call 0x11fd9d80 */
  push32(0x11fdc65du); f_11fd9d80();
  /* 11fdc65d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc663 jne 0x11fdc666 */
  if (!C.zf) goto L_11fdc666;
  /* 11fdc665 int3  */
  x86_unimpl("int3 @ 0x11fdc665");
L_11fdc666:;
  /* 11fdc666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc66a jne 0x11fdc639 */
  if (!C.zf) goto L_11fdc639;
L_11fdc66c:;
  /* 11fdc66c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc66f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fdc672 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc673 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc676 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc679 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc67a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdc67d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc67e push 0x1200994c */
  push32((uint32_t)(0x1200994cu));
  /* 11fdc683 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc685 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc687 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc689 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc68b call 0x11fd9d80 */
  push32(0x11fdc690u); f_11fd9d80();
  /* 11fdc690 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc693 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc696 jne 0x11fdc699 */
  if (!C.zf) goto L_11fdc699;
  /* 11fdc698 int3  */
  x86_unimpl("int3 @ 0x11fdc698");
L_11fdc699:;
  /* 11fdc699 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc69b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdc69d jne 0x11fdc66c */
  if (!C.zf) goto L_11fdc66c;
  /* 11fdc69f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdc6a6:;
  /* 11fdc6a6 jmp 0x11fdc4b3 */
  goto L_11fdc4b3;
L_11fdc6ab:;
  /* 11fdc6ab push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc6ad call 0x11fdb160 */
  push32(0x11fdc6b2u); f_11fdb160();
  /* 11fdc6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc6b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fdc6b8:;
  /* 11fdc6b8 pop edi */
  EDI = (pop32());
  /* 11fdc6b9 pop esi */
  ESI = (pop32());
  /* 11fdc6ba pop ebx */
  EBX = (pop32());
  /* 11fdc6bb mov esp, ebp */
  ESP = (EBP);
  /* 11fdc6bd pop ebp */
  EBP = (pop32());
  /* 11fdc6be ret  */
  ESPCHK(0x11fdc360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6d0 @ 0x11fdc6d0 (34 bytes, 13 insns) */
void f_11fdc6d0(void) {
  FTRACE(0x11fdc6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc6d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc6d4 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdc6d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdc6dc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc6e0 je 0x11fdc6eb */
  if (C.zf) goto L_11fdc6eb;
  /* 11fdc6e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc6e5 mov dword ptr [0x1200cef8], ecx */
  w32((uint32_t)(0x1200cef8), (ECX));
L_11fdc6eb:;
  /* 11fdc6eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc6ee mov esp, ebp */
  ESP = (EBP);
  /* 11fdc6f0 pop ebp */
  EBP = (pop32());
  /* 11fdc6f1 ret  */
  ESPCHK(0x11fdc6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x11fdc700 (103 bytes, 38 insns) */
void f_11fdc700(void) {
  FTRACE(0x11fdc700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc700 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc701 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc703 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc704 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdc709 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc70e jne 0x11fdc712 */
  if (!C.zf) goto L_11fdc712;
  /* 11fdc710 jmp 0x11fdc763 */
  goto L_11fdc763;
L_11fdc712:;
  /* 11fdc712 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc714 call 0x11fdb0c0 */
  push32(0x11fdc719u); f_11fdb0c0();
  /* 11fdc719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc71c mov ecx, dword ptr [0x1200ef90] */
  ECX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdc722 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdc725 jmp 0x11fdc72f */
  goto L_11fdc72f;
L_11fdc727:;
  /* 11fdc727 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc72a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdc72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdc72f:;
  /* 11fdc72f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc733 je 0x11fdc759 */
  if (C.zf) goto L_11fdc759;
  /* 11fdc735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc738 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdc73b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdc741 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc744 jne 0x11fdc757 */
  if (!C.zf) goto L_11fdc757;
  /* 11fdc746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc749 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc74a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc74d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc750 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc751 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11fdc754u);
  /* 11fdc754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdc757:;
  /* 11fdc757 jmp 0x11fdc727 */
  goto L_11fdc727;
L_11fdc759:;
  /* 11fdc759 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc75b call 0x11fdb160 */
  push32(0x11fdc760u); f_11fdb160();
  /* 11fdc760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdc763:;
  /* 11fdc763 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc765 pop ebp */
  EBP = (pop32());
  /* 11fdc766 ret  */
  ESPCHK(0x11fdc700u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11fdc770 (75 bytes, 28 insns) */
void f_11fdc770(void) {
  FTRACE(0x11fdc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc770 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc771 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc773 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc774 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc778 je 0x11fdc7ad */
  if (C.zf) goto L_11fdc7ad;
  /* 11fdc77a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc77d push eax */
  push32((uint32_t)(EAX));
  /* 11fdc77e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc781 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc782 call dword ptr [0x120113f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f4))), 0x11fdc788u);
  /* 11fdc788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc78a jne 0x11fdc7ad */
  if (!C.zf) goto L_11fdc7ad;
  /* 11fdc78c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc790 je 0x11fdc7a4 */
  if (C.zf) goto L_11fdc7a4;
  /* 11fdc792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc795 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc799 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc79a call dword ptr [0x120113f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f8))), 0x11fdc7a0u);
  /* 11fdc7a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc7a2 jne 0x11fdc7ad */
  if (!C.zf) goto L_11fdc7ad;
L_11fdc7a4:;
  /* 11fdc7a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdc7ab jmp 0x11fdc7b4 */
  goto L_11fdc7b4;
L_11fdc7ad:;
  /* 11fdc7ad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdc7b4:;
  /* 11fdc7b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc7b7 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc7b9 pop ebp */
  EBP = (pop32());
  /* 11fdc7ba ret  */
  ESPCHK(0x11fdc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x11fdc7c0 (134 bytes, 50 insns) */
void f_11fdc7c0(void) {
  FTRACE(0x11fdc7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc7c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc7c8 jne 0x11fdc7ce */
  if (!C.zf) goto L_11fdc7ce;
  /* 11fdc7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc7cc jmp 0x11fdc842 */
  goto L_11fdc842;
L_11fdc7ce:;
  /* 11fdc7ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdc7d0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11fdc7d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc7d5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc7d8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc7d9 call 0x11fdc770 */
  push32(0x11fdc7deu); f_11fdc770();
  /* 11fdc7de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc7e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc7e3 jne 0x11fdc7e9 */
  if (!C.zf) goto L_11fdc7e9;
  /* 11fdc7e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc7e7 jmp 0x11fdc842 */
  goto L_11fdc842;
L_11fdc7e9:;
  /* 11fdc7e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc7ec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc7ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc7f0 call 0x11fe1f20 */
  push32(0x11fdc7f5u); f_11fe1f20();
  /* 11fdc7f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc7f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdc7fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc7ff je 0x11fdc816 */
  if (C.zf) goto L_11fdc816;
  /* 11fdc801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc804 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc807 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc80b push eax */
  push32((uint32_t)(EAX));
  /* 11fdc80c call 0x11fe1f80 */
  push32(0x11fdc811u); f_11fe1f80();
  /* 11fdc811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc814 jmp 0x11fdc842 */
  goto L_11fdc842;
L_11fdc816:;
  /* 11fdc816 mov ecx, dword ptr [0x1200efa0] */
  ECX = (r32((uint32_t)(0x1200efa0)));
  /* 11fdc81c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdc822 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdc824 je 0x11fdc82d */
  if (C.zf) goto L_11fdc82d;
  /* 11fdc826 mov eax, 1 */
  EAX = (0x1u);
  /* 11fdc82b jmp 0x11fdc842 */
  goto L_11fdc842;
L_11fdc82d:;
  /* 11fdc82d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc830 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc833 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc834 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc836 mov eax, dword ptr [0x120108cc] */
  EAX = (r32((uint32_t)(0x120108cc)));
  /* 11fdc83b push eax */
  push32((uint32_t)(EAX));
  /* 11fdc83c call dword ptr [0x12011428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011428))), 0x11fdc842u);
L_11fdc842:;
  /* 11fdc842 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc844 pop ebp */
  EBP = (pop32());
  /* 11fdc845 ret  */
  ESPCHK(0x11fdc7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x11fdc850 (227 bytes, 80 insns) */
void f_11fdc850(void) {
  FTRACE(0x11fdc850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc850 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc851 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc853 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc857 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc858 call 0x11fdc7c0 */
  push32(0x11fdc85du); f_11fdc7c0();
  /* 11fdc85d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc862 jne 0x11fdc86b */
  if (!C.zf) goto L_11fdc86b;
  /* 11fdc864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc866 jmp 0x11fdc92f */
  goto L_11fdc92f;
L_11fdc86b:;
  /* 11fdc86b push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc86d call 0x11fdb0c0 */
  push32(0x11fdc872u); f_11fdb0c0();
  /* 11fdc872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc875 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc878 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc87b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdc87e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc881 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc884 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc889 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc88c je 0x11fdc8b0 */
  if (C.zf) goto L_11fdc8b0;
  /* 11fdc88e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc891 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc895 je 0x11fdc8b0 */
  if (C.zf) goto L_11fdc8b0;
  /* 11fdc897 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc89a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdc89d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc8a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc8a5 je 0x11fdc8b0 */
  if (C.zf) goto L_11fdc8b0;
  /* 11fdc8a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc8aa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc8ae jne 0x11fdc923 */
  if (!C.zf) goto L_11fdc923;
L_11fdc8b0:;
  /* 11fdc8b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdc8b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdc8b5 push edx */
  push32((uint32_t)(EDX));
  /* 11fdc8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc8b9 push eax */
  push32((uint32_t)(EAX));
  /* 11fdc8ba call 0x11fdc770 */
  push32(0x11fdc8bfu); f_11fdc770();
  /* 11fdc8bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc8c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc8c4 je 0x11fdc923 */
  if (C.zf) goto L_11fdc923;
  /* 11fdc8c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc8c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fdc8cc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc8cf jne 0x11fdc923 */
  if (!C.zf) goto L_11fdc923;
  /* 11fdc8d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc8d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fdc8d7 cmp ecx, dword ptr [0x1200cefc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1200cefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc8dd jg 0x11fdc923 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fdc923;
  /* 11fdc8df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc8e3 je 0x11fdc8f0 */
  if (C.zf) goto L_11fdc8f0;
  /* 11fdc8e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdc8e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc8eb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fdc8ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fdc8f0:;
  /* 11fdc8f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc8f4 je 0x11fdc901 */
  if (C.zf) goto L_11fdc901;
  /* 11fdc8f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdc8f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc8fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fdc8ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fdc901:;
  /* 11fdc901 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc905 je 0x11fdc912 */
  if (C.zf) goto L_11fdc912;
  /* 11fdc907 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdc90a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc90d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fdc910 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fdc912:;
  /* 11fdc912 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc914 call 0x11fdb160 */
  push32(0x11fdc919u); f_11fdb160();
  /* 11fdc919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc91c mov eax, 1 */
  EAX = (0x1u);
  /* 11fdc921 jmp 0x11fdc92f */
  goto L_11fdc92f;
L_11fdc923:;
  /* 11fdc923 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc925 call 0x11fdb160 */
  push32(0x11fdc92au); f_11fdb160();
  /* 11fdc92a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc92d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fdc92f:;
  /* 11fdc92f mov esp, ebp */
  ESP = (EBP);
  /* 11fdc931 pop ebp */
  EBP = (pop32());
  /* 11fdc932 ret  */
  ESPCHK(0x11fdc850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x11fdc940 (28 bytes, 11 insns) */
void f_11fdc940(void) {
  FTRACE(0x11fdc940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc940 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc941 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc943 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdc944 mov eax, dword ptr [0x12010a3c] */
  EAX = (r32((uint32_t)(0x12010a3c)));
  /* 11fdc949 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdc94c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc94f mov dword ptr [0x12010a3c], ecx */
  w32((uint32_t)(0x12010a3c), (ECX));
  /* 11fdc955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc958 mov esp, ebp */
  ESP = (EBP);
  /* 11fdc95a pop ebp */
  EBP = (pop32());
  /* 11fdc95b ret  */
  ESPCHK(0x11fdc940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x11fdc960 (362 bytes, 116 insns) */
void f_11fdc960(void) {
  FTRACE(0x11fdc960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdc960 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdc961 mov ebp, esp */
  EBP = (ESP);
  /* 11fdc963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdc966 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdc967 push esi */
  push32((uint32_t)(ESI));
  /* 11fdc968 push edi */
  push32((uint32_t)(EDI));
  /* 11fdc969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc96d jne 0x11fdc99a */
  if (!C.zf) goto L_11fdc99a;
L_11fdc96f:;
  /* 11fdc96f push 0x12009aac */
  push32((uint32_t)(0x12009aacu));
  /* 11fdc974 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdc979 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc97b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc97d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc97f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdc981 call 0x11fd9d80 */
  push32(0x11fdc986u); f_11fd9d80();
  /* 11fdc986 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc989 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc98c jne 0x11fdc98f */
  if (!C.zf) goto L_11fdc98f;
  /* 11fdc98e int3  */
  x86_unimpl("int3 @ 0x11fdc98e");
L_11fdc98f:;
  /* 11fdc98f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdc991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdc993 jne 0x11fdc96f */
  if (!C.zf) goto L_11fdc96f;
  /* 11fdc995 jmp 0x11fdcac3 */
  goto L_11fdcac3;
L_11fdc99a:;
  /* 11fdc99a push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdc99c call 0x11fdb0c0 */
  push32(0x11fdc9a1u); f_11fdb0c0();
  /* 11fdc9a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc9a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc9a7 mov edx, dword ptr [0x1200ef90] */
  EDX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdc9ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fdc9af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdc9b6 jmp 0x11fdc9c1 */
  goto L_11fdc9c1;
L_11fdc9b8:;
  /* 11fdc9b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc9bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdc9be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdc9c1:;
  /* 11fdc9c1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc9c5 jge 0x11fdc9e5 */
  if ((C.sf==C.of)) goto L_11fdc9e5;
  /* 11fdc9c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc9ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc9cd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11fdc9d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdc9d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdc9db mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11fdc9e3 jmp 0x11fdc9b8 */
  goto L_11fdc9b8;
L_11fdc9e5:;
  /* 11fdc9e5 mov edx, dword ptr [0x1200ef90] */
  EDX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdc9eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fdc9ee jmp 0x11fdc9f8 */
  goto L_11fdc9f8;
L_11fdc9f0:;
  /* 11fdc9f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdc9f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdc9f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fdc9f8:;
  /* 11fdc9f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdc9fc je 0x11fdcaa1 */
  if (C.zf) goto L_11fdcaa1;
  /* 11fdca02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdca08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdca0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdca0f jl 0x11fdca77 */
  if ((C.sf!=C.of)) goto L_11fdca77;
  /* 11fdca11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca14 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdca17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdca1d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdca20 jge 0x11fdca77 */
  if ((C.sf==C.of)) goto L_11fdca77;
  /* 11fdca22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca25 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdca28 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdca2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdca31 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11fdca35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdca38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca3b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdca3e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdca44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdca47 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11fdca4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca4e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdca51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdca56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdca59 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11fdca5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca60 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdca63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca66 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdca69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdca6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdca71 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11fdca75 jmp 0x11fdca9c */
  goto L_11fdca9c;
L_11fdca77:;
  /* 11fdca77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdca7a push edx */
  push32((uint32_t)(EDX));
  /* 11fdca7b push 0x12009a88 */
  push32((uint32_t)(0x12009a88u));
  /* 11fdca80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdca82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdca84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdca86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdca88 call 0x11fd9d80 */
  push32(0x11fdca8du); f_11fd9d80();
  /* 11fdca8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdca90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdca93 jne 0x11fdca96 */
  if (!C.zf) goto L_11fdca96;
  /* 11fdca95 int3  */
  x86_unimpl("int3 @ 0x11fdca95");
L_11fdca96:;
  /* 11fdca96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdca98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdca9a jne 0x11fdca77 */
  if (!C.zf) goto L_11fdca77;
L_11fdca9c:;
  /* 11fdca9c jmp 0x11fdc9f0 */
  goto L_11fdc9f0;
L_11fdcaa1:;
  /* 11fdcaa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcaa4 mov edx, dword ptr [0x1200ef98] */
  EDX = (r32((uint32_t)(0x1200ef98)));
  /* 11fdcaaa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11fdcaad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcab0 mov ecx, dword ptr [0x1200ef8c] */
  ECX = (r32((uint32_t)(0x1200ef8c)));
  /* 11fdcab6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11fdcab9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdcabb call 0x11fdb160 */
  push32(0x11fdcac0u); f_11fdb160();
  /* 11fdcac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdcac3:;
  /* 11fdcac3 pop edi */
  EDI = (pop32());
  /* 11fdcac4 pop esi */
  ESI = (pop32());
  /* 11fdcac5 pop ebx */
  EBX = (pop32());
  /* 11fdcac6 mov esp, ebp */
  ESP = (EBP);
  /* 11fdcac8 pop ebp */
  EBP = (pop32());
  /* 11fdcac9 ret  */
  ESPCHK(0x11fdc960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x11fdcad0 (291 bytes, 95 insns) */
void f_11fdcad0(void) {
  FTRACE(0x11fdcad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdcad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdcad1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdcad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdcad7 push esi */
  push32((uint32_t)(ESI));
  /* 11fdcad8 push edi */
  push32((uint32_t)(EDI));
  /* 11fdcad9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fdcae0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcae4 je 0x11fdcaf2 */
  if (C.zf) goto L_11fdcaf2;
  /* 11fdcae6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcaea je 0x11fdcaf2 */
  if (C.zf) goto L_11fdcaf2;
  /* 11fdcaec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcaf0 jne 0x11fdcb20 */
  if (!C.zf) goto L_11fdcb20;
L_11fdcaf2:;
  /* 11fdcaf2 push 0x12009ad4 */
  push32((uint32_t)(0x12009ad4u));
  /* 11fdcaf7 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdcafc push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcafe push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcb00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcb02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcb04 call 0x11fd9d80 */
  push32(0x11fdcb09u); f_11fd9d80();
  /* 11fdcb09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcb0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcb0f jne 0x11fdcb12 */
  if (!C.zf) goto L_11fdcb12;
  /* 11fdcb11 int3  */
  x86_unimpl("int3 @ 0x11fdcb11");
L_11fdcb12:;
  /* 11fdcb12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcb14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdcb16 jne 0x11fdcaf2 */
  if (!C.zf) goto L_11fdcaf2;
  /* 11fdcb18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdcb1b jmp 0x11fdcbec */
  goto L_11fdcbec;
L_11fdcb20:;
  /* 11fdcb20 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdcb27 jmp 0x11fdcb32 */
  goto L_11fdcb32;
L_11fdcb29:;
  /* 11fdcb29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcb2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fdcb32:;
  /* 11fdcb32 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcb36 jge 0x11fdcbbc */
  if ((C.sf==C.of)) goto L_11fdcbbc;
  /* 11fdcb3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdcb42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdcb48 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11fdcb4c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcb50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcb56 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11fdcb5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdcb60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb63 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdcb66 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11fdcb6a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcb6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcb74 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11fdcb78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcb7e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcb83 jne 0x11fdcb92 */
  if (!C.zf) goto L_11fdcb92;
  /* 11fdcb85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcb88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcb8b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcb90 je 0x11fdcbb7 */
  if (C.zf) goto L_11fdcbb7;
L_11fdcb92:;
  /* 11fdcb92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcb96 je 0x11fdcbb7 */
  if (C.zf) goto L_11fdcbb7;
  /* 11fdcb98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcb9c jne 0x11fdcbb0 */
  if (!C.zf) goto L_11fdcbb0;
  /* 11fdcb9e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcba2 jne 0x11fdcbb7 */
  if (!C.zf) goto L_11fdcbb7;
  /* 11fdcba4 mov eax, dword ptr [0x1200cef8] */
  EAX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdcba9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcbac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdcbae je 0x11fdcbb7 */
  if (C.zf) goto L_11fdcbb7;
L_11fdcbb0:;
  /* 11fdcbb0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11fdcbb7:;
  /* 11fdcbb7 jmp 0x11fdcb29 */
  goto L_11fdcb29;
L_11fdcbbc:;
  /* 11fdcbbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdcbbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdcbc2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11fdcbc5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcbc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcbcb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11fdcbce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdcbd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdcbd4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11fdcbd7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcbda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcbdd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11fdcbe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcbe3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fdcbe9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fdcbec:;
  /* 11fdcbec pop edi */
  EDI = (pop32());
  /* 11fdcbed pop esi */
  ESI = (pop32());
  /* 11fdcbee pop ebx */
  EBX = (pop32());
  /* 11fdcbef mov esp, ebp */
  ESP = (EBP);
  /* 11fdcbf1 pop ebp */
  EBP = (pop32());
  /* 11fdcbf2 ret  */
  ESPCHK(0x11fdcad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc00 @ 0x11fdcc00 (697 bytes, 253 insns) */
void f_11fdcc00(void) {
  FTRACE(0x11fdcc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdcc00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdcc01 mov ebp, esp */
  EBP = (ESP);
  /* 11fdcc03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcc06 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdcc07 push esi */
  push32((uint32_t)(ESI));
  /* 11fdcc08 push edi */
  push32((uint32_t)(EDI));
  /* 11fdcc09 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fdcc10 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdcc12 call 0x11fdb0c0 */
  push32(0x11fdcc17u); f_11fdb0c0();
  /* 11fdcc17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdcc1a:;
  /* 11fdcc1a push 0x12009bcc */
  push32((uint32_t)(0x12009bccu));
  /* 11fdcc1f push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdcc24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcc26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcc28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcc2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcc2c call 0x11fd9d80 */
  push32(0x11fdcc31u); f_11fd9d80();
  /* 11fdcc31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcc34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcc37 jne 0x11fdcc3a */
  if (!C.zf) goto L_11fdcc3a;
  /* 11fdcc39 int3  */
  x86_unimpl("int3 @ 0x11fdcc39");
L_11fdcc3a:;
  /* 11fdcc3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcc3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdcc3e jne 0x11fdcc1a */
  if (!C.zf) goto L_11fdcc1a;
  /* 11fdcc40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcc44 je 0x11fdcc4e */
  if (C.zf) goto L_11fdcc4e;
  /* 11fdcc46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcc49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdcc4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fdcc4e:;
  /* 11fdcc4e mov eax, dword ptr [0x1200ef90] */
  EAX = (r32((uint32_t)(0x1200ef90)));
  /* 11fdcc53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdcc56 jmp 0x11fdcc60 */
  goto L_11fdcc60;
L_11fdcc58:;
  /* 11fdcc58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcc5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdcc5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fdcc60:;
  /* 11fdcc60 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcc64 je 0x11fdce82 */
  if (C.zf) goto L_11fdce82;
  /* 11fdcc6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcc6d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcc70 je 0x11fdce82 */
  if (C.zf) goto L_11fdce82;
  /* 11fdcc76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcc79 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdcc7c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcc82 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcc85 je 0x11fdccb4 */
  if (C.zf) goto L_11fdccb4;
  /* 11fdcc87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcc8a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fdcc8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdcc93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdcc95 je 0x11fdccb4 */
  if (C.zf) goto L_11fdccb4;
  /* 11fdcc97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcc9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdcc9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcca2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcca5 jne 0x11fdccb9 */
  if (!C.zf) goto L_11fdccb9;
  /* 11fdcca7 mov ecx, dword ptr [0x1200cef8] */
  ECX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdccad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdccb0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdccb2 jne 0x11fdccb9 */
  if (!C.zf) goto L_11fdccb9;
L_11fdccb4:;
  /* 11fdccb4 jmp 0x11fdce7d */
  goto L_11fdce7d;
L_11fdccb9:;
  /* 11fdccb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdccbc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdccc0 je 0x11fdcd32 */
  if (C.zf) goto L_11fdcd32;
  /* 11fdccc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdccc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdccc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdccc9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fdcccc push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcccd call 0x11fdc770 */
  push32(0x11fdccd2u); f_11fdc770();
  /* 11fdccd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdccd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdccd7 jne 0x11fdcd03 */
  if (!C.zf) goto L_11fdcd03;
L_11fdccd9:;
  /* 11fdccd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdccdc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdccdf push eax */
  push32((uint32_t)(EAX));
  /* 11fdcce0 push 0x12009bb8 */
  push32((uint32_t)(0x12009bb8u));
  /* 11fdcce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcced call 0x11fd9d80 */
  push32(0x11fdccf2u); f_11fd9d80();
  /* 11fdccf2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdccf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdccf8 jne 0x11fdccfb */
  if (!C.zf) goto L_11fdccfb;
  /* 11fdccfa int3  */
  x86_unimpl("int3 @ 0x11fdccfa");
L_11fdccfb:;
  /* 11fdccfb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdccfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdccff jne 0x11fdccd9 */
  if (!C.zf) goto L_11fdccd9;
  /* 11fdcd01 jmp 0x11fdcd32 */
  goto L_11fdcd32;
L_11fdcd03:;
  /* 11fdcd03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd06 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdcd09 push eax */
  push32((uint32_t)(EAX));
  /* 11fdcd0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd0d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fdcd10 push edx */
  push32((uint32_t)(EDX));
  /* 11fdcd11 push 0x12009bac */
  push32((uint32_t)(0x12009bacu));
  /* 11fdcd16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd1e call 0x11fd9d80 */
  push32(0x11fdcd23u); f_11fd9d80();
  /* 11fdcd23 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcd26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcd29 jne 0x11fdcd2c */
  if (!C.zf) goto L_11fdcd2c;
  /* 11fdcd2b int3  */
  x86_unimpl("int3 @ 0x11fdcd2b");
L_11fdcd2c:;
  /* 11fdcd2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcd2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdcd30 jne 0x11fdcd03 */
  if (!C.zf) goto L_11fdcd03;
L_11fdcd32:;
  /* 11fdcd32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd35 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fdcd38 push edx */
  push32((uint32_t)(EDX));
  /* 11fdcd39 push 0x12009ba4 */
  push32((uint32_t)(0x12009ba4u));
  /* 11fdcd3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd46 call 0x11fd9d80 */
  push32(0x11fdcd4bu); f_11fd9d80();
  /* 11fdcd4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcd4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcd51 jne 0x11fdcd54 */
  if (!C.zf) goto L_11fdcd54;
  /* 11fdcd53 int3  */
  x86_unimpl("int3 @ 0x11fdcd53");
L_11fdcd54:;
  /* 11fdcd54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcd56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdcd58 jne 0x11fdcd32 */
  if (!C.zf) goto L_11fdcd32;
  /* 11fdcd5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd5d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdcd60 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcd66 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcd69 jne 0x11fdcddc */
  if (!C.zf) goto L_11fdcddc;
L_11fdcd6b:;
  /* 11fdcd6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd6e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fdcd71 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcd72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdcd78 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fdcd7b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdcd80 push eax */
  push32((uint32_t)(EAX));
  /* 11fdcd81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcd84 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcd87 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcd88 push 0x12009b70 */
  push32((uint32_t)(0x12009b70u));
  /* 11fdcd8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcd95 call 0x11fd9d80 */
  push32(0x11fdcd9au); f_11fd9d80();
  /* 11fdcd9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcd9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcda0 jne 0x11fdcda3 */
  if (!C.zf) goto L_11fdcda3;
  /* 11fdcda2 int3  */
  x86_unimpl("int3 @ 0x11fdcda2");
L_11fdcda3:;
  /* 11fdcda3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcda5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdcda7 jne 0x11fdcd6b */
  if (!C.zf) goto L_11fdcd6b;
  /* 11fdcda9 cmp dword ptr [0x12010a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcdb0 je 0x11fdcdcb */
  if (C.zf) goto L_11fdcdcb;
  /* 11fdcdb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcdb5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fdcdb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcdb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcdbc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcdbf push edx */
  push32((uint32_t)(EDX));
  /* 11fdcdc0 call dword ptr [0x12010a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12010a3c))), 0x11fdcdc6u);
  /* 11fdcdc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcdc9 jmp 0x11fdcdd7 */
  goto L_11fdcdd7;
L_11fdcdcb:;
  /* 11fdcdcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcdce push eax */
  push32((uint32_t)(EAX));
  /* 11fdcdcf call 0x11fdcec0 */
  push32(0x11fdcdd4u); f_11fdcec0();
  /* 11fdcdd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdcdd7:;
  /* 11fdcdd7 jmp 0x11fdce7d */
  goto L_11fdce7d;
L_11fdcddc:;
  /* 11fdcddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcddf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcde3 jne 0x11fdce22 */
  if (!C.zf) goto L_11fdce22;
L_11fdcde5:;
  /* 11fdcde5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcde8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdcdeb push eax */
  push32((uint32_t)(EAX));
  /* 11fdcdec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdcdef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcdf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcdf3 push 0x12009b48 */
  push32((uint32_t)(0x12009b48u));
  /* 11fdcdf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcdfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcdfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcdfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce00 call 0x11fd9d80 */
  push32(0x11fdce05u); f_11fd9d80();
  /* 11fdce05 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdce08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdce0b jne 0x11fdce0e */
  if (!C.zf) goto L_11fdce0e;
  /* 11fdce0d int3  */
  x86_unimpl("int3 @ 0x11fdce0d");
L_11fdce0e:;
  /* 11fdce0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdce10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdce12 jne 0x11fdcde5 */
  if (!C.zf) goto L_11fdcde5;
  /* 11fdce14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdce17 push eax */
  push32((uint32_t)(EAX));
  /* 11fdce18 call 0x11fdcec0 */
  push32(0x11fdce1du); f_11fdcec0();
  /* 11fdce1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdce20 jmp 0x11fdce7d */
  goto L_11fdce7d;
L_11fdce22:;
  /* 11fdce22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdce25 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fdce28 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdce2e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdce31 jne 0x11fdce7d */
  if (!C.zf) goto L_11fdce7d;
L_11fdce33:;
  /* 11fdce33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdce36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fdce39 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdce3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdce3d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fdce40 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fdce43 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fdce48 push eax */
  push32((uint32_t)(EAX));
  /* 11fdce49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdce4c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdce4f push ecx */
  push32((uint32_t)(ECX));
  /* 11fdce50 push 0x12009b14 */
  push32((uint32_t)(0x12009b14u));
  /* 11fdce55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce5d call 0x11fd9d80 */
  push32(0x11fdce62u); f_11fd9d80();
  /* 11fdce62 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdce65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdce68 jne 0x11fdce6b */
  if (!C.zf) goto L_11fdce6b;
  /* 11fdce6a int3  */
  x86_unimpl("int3 @ 0x11fdce6a");
L_11fdce6b:;
  /* 11fdce6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdce6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdce6f jne 0x11fdce33 */
  if (!C.zf) goto L_11fdce33;
  /* 11fdce71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdce74 push eax */
  push32((uint32_t)(EAX));
  /* 11fdce75 call 0x11fdcec0 */
  push32(0x11fdce7au); f_11fdcec0();
  /* 11fdce7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdce7d:;
  /* 11fdce7d jmp 0x11fdcc58 */
  goto L_11fdcc58;
L_11fdce82:;
  /* 11fdce82 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fdce84 call 0x11fdb160 */
  push32(0x11fdce89u); f_11fdb160();
  /* 11fdce89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdce8c:;
  /* 11fdce8c push 0x12009afc */
  push32((uint32_t)(0x12009afcu));
  /* 11fdce91 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdce96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdce9e call 0x11fd9d80 */
  push32(0x11fdcea3u); f_11fd9d80();
  /* 11fdcea3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcea6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcea9 jne 0x11fdceac */
  if (!C.zf) goto L_11fdceac;
  /* 11fdceab int3  */
  x86_unimpl("int3 @ 0x11fdceab");
L_11fdceac:;
  /* 11fdceac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdceae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdceb0 jne 0x11fdce8c */
  if (!C.zf) goto L_11fdce8c;
  /* 11fdceb2 pop edi */
  EDI = (pop32());
  /* 11fdceb3 pop esi */
  ESI = (pop32());
  /* 11fdceb4 pop ebx */
  EBX = (pop32());
  /* 11fdceb5 mov esp, ebp */
  ESP = (EBP);
  /* 11fdceb7 pop ebp */
  EBP = (pop32());
  /* 11fdceb8 ret  */
  ESPCHK(0x11fdcc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x11fdcec0 (276 bytes, 89 insns) */
void f_11fdcec0(void) {
  FTRACE(0x11fdcec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdcec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdcec1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdcec3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcec6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdcec7 push esi */
  push32((uint32_t)(ESI));
  /* 11fdcec8 push edi */
  push32((uint32_t)(EDI));
  /* 11fdcec9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11fdced0 jmp 0x11fdcedb */
  goto L_11fdcedb;
L_11fdced2:;
  /* 11fdced2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fdced5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdced8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11fdcedb:;
  /* 11fdcedb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcede cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcee2 jge 0x11fdceef */
  if ((C.sf==C.of)) goto L_11fdceef;
  /* 11fdcee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcee7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fdceea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11fdceed jmp 0x11fdcef6 */
  goto L_11fdcef6;
L_11fdceef:;
  /* 11fdceef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11fdcef6:;
  /* 11fdcef6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fdcef9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcefc jge 0x11fdcf9c */
  if ((C.sf==C.of)) goto L_11fdcf9c;
  /* 11fdcf02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdcf05 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcf08 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11fdcf0b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11fdcf0e cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcf15 jle 0x11fdcf33 */
  if ((C.zf||C.sf!=C.of)) goto L_11fdcf33;
  /* 11fdcf17 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11fdcf1c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fdcf1f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdcf25 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcf26 call 0x11fe0860 */
  push32(0x11fdcf2bu); f_11fe0860();
  /* 11fdcf2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcf2e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11fdcf31 jmp 0x11fdcf50 */
  goto L_11fdcf50;
L_11fdcf33:;
  /* 11fdcf33 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fdcf36 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcf3c mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fdcf41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fdcf43 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fdcf47 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdcf4d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11fdcf50:;
  /* 11fdcf50 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcf54 je 0x11fdcf64 */
  if (C.zf) goto L_11fdcf64;
  /* 11fdcf56 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fdcf59 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcf5f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11fdcf62 jmp 0x11fdcf6b */
  goto L_11fdcf6b;
L_11fdcf64:;
  /* 11fdcf64 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11fdcf6b:;
  /* 11fdcf6b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fdcf6e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11fdcf71 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11fdcf75 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fdcf78 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcf7e push edx */
  push32((uint32_t)(EDX));
  /* 11fdcf7f push 0x12009bf0 */
  push32((uint32_t)(0x12009bf0u));
  /* 11fdcf84 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fdcf87 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fdcf8a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11fdcf8e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcf8f call 0x11fe3b30 */
  push32(0x11fdcf94u); f_11fe3b30();
  /* 11fdcf94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcf97 jmp 0x11fdced2 */
  goto L_11fdced2;
L_11fdcf9c:;
  /* 11fdcf9c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fdcf9f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11fdcfa4:;
  /* 11fdcfa4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11fdcfa7 push eax */
  push32((uint32_t)(EAX));
  /* 11fdcfa8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11fdcfab push ecx */
  push32((uint32_t)(ECX));
  /* 11fdcfac push 0x12009be0 */
  push32((uint32_t)(0x12009be0u));
  /* 11fdcfb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcfb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcfb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcfb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdcfb9 call 0x11fd9d80 */
  push32(0x11fdcfbeu); f_11fd9d80();
  /* 11fdcfbe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcfc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcfc4 jne 0x11fdcfc7 */
  if (!C.zf) goto L_11fdcfc7;
  /* 11fdcfc6 int3  */
  x86_unimpl("int3 @ 0x11fdcfc6");
L_11fdcfc7:;
  /* 11fdcfc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdcfc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdcfcb jne 0x11fdcfa4 */
  if (!C.zf) goto L_11fdcfa4;
  /* 11fdcfcd pop edi */
  EDI = (pop32());
  /* 11fdcfce pop esi */
  ESI = (pop32());
  /* 11fdcfcf pop ebx */
  EBX = (pop32());
  /* 11fdcfd0 mov esp, ebp */
  ESP = (EBP);
  /* 11fdcfd2 pop ebp */
  EBP = (pop32());
  /* 11fdcfd3 ret  */
  ESPCHK(0x11fdcec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfe0 @ 0x11fdcfe0 (116 bytes, 46 insns) */
void f_11fdcfe0(void) {
  FTRACE(0x11fdcfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdcfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdcfe1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdcfe3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdcfe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdcfe7 push esi */
  push32((uint32_t)(ESI));
  /* 11fdcfe8 push edi */
  push32((uint32_t)(EDI));
  /* 11fdcfe9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11fdcfec push eax */
  push32((uint32_t)(EAX));
  /* 11fdcfed call 0x11fdc960 */
  push32(0x11fdcff2u); f_11fdc960();
  /* 11fdcff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdcff5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcff9 jne 0x11fdd014 */
  if (!C.zf) goto L_11fdd014;
  /* 11fdcffb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdcfff jne 0x11fdd014 */
  if (!C.zf) goto L_11fdd014;
  /* 11fdd001 mov ecx, dword ptr [0x1200cef8] */
  ECX = (r32((uint32_t)(0x1200cef8)));
  /* 11fdd007 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdd00a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdd00c je 0x11fdd04b */
  if (C.zf) goto L_11fdd04b;
  /* 11fdd00e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd012 je 0x11fdd04b */
  if (C.zf) goto L_11fdd04b;
L_11fdd014:;
  /* 11fdd014 push 0x12009bf8 */
  push32((uint32_t)(0x12009bf8u));
  /* 11fdd019 push 0x120095ec */
  push32((uint32_t)(0x120095ecu));
  /* 11fdd01e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd020 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd022 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd024 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd026 call 0x11fd9d80 */
  push32(0x11fdd02bu); f_11fd9d80();
  /* 11fdd02b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd02e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd031 jne 0x11fdd034 */
  if (!C.zf) goto L_11fdd034;
  /* 11fdd033 int3  */
  x86_unimpl("int3 @ 0x11fdd033");
L_11fdd034:;
  /* 11fdd034 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fdd036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdd038 jne 0x11fdd014 */
  if (!C.zf) goto L_11fdd014;
  /* 11fdd03a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd03c call 0x11fdcc00 */
  push32(0x11fdd041u); f_11fdcc00();
  /* 11fdd041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd044 mov eax, 1 */
  EAX = (0x1u);
  /* 11fdd049 jmp 0x11fdd04d */
  goto L_11fdd04d;
L_11fdd04b:;
  /* 11fdd04b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fdd04d:;
  /* 11fdd04d pop edi */
  EDI = (pop32());
  /* 11fdd04e pop esi */
  ESI = (pop32());
  /* 11fdd04f pop ebx */
  EBX = (pop32());
  /* 11fdd050 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd052 pop ebp */
  EBP = (pop32());
  /* 11fdd053 ret  */
  ESPCHK(0x11fdcfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d060 @ 0x11fdd060 (197 bytes, 79 insns) */
void f_11fdd060(void) {
  FTRACE(0x11fdd060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd060 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd061 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd063 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd064 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdd065 push esi */
  push32((uint32_t)(ESI));
  /* 11fdd066 push edi */
  push32((uint32_t)(EDI));
  /* 11fdd067 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd06b jne 0x11fdd072 */
  if (!C.zf) goto L_11fdd072;
  /* 11fdd06d jmp 0x11fdd11e */
  goto L_11fdd11e;
L_11fdd072:;
  /* 11fdd072 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdd079 jmp 0x11fdd084 */
  goto L_11fdd084;
L_11fdd07b:;
  /* 11fdd07b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd07e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd081 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fdd084:;
  /* 11fdd084 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd088 jge 0x11fdd0ce */
  if ((C.sf==C.of)) goto L_11fdd0ce;
L_11fdd08a:;
  /* 11fdd08a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd08d mov edx, dword ptr [ecx*4 + 0x1200cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1200cf08)));
  /* 11fdd094 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd098 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd09b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11fdd09f push edx */
  push32((uint32_t)(EDX));
  /* 11fdd0a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd0a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd0a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11fdd0aa push edx */
  push32((uint32_t)(EDX));
  /* 11fdd0ab push 0x12009c54 */
  push32((uint32_t)(0x12009c54u));
  /* 11fdd0b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0b8 call 0x11fd9d80 */
  push32(0x11fdd0bdu); f_11fd9d80();
  /* 11fdd0bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd0c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd0c3 jne 0x11fdd0c6 */
  if (!C.zf) goto L_11fdd0c6;
  /* 11fdd0c5 int3  */
  x86_unimpl("int3 @ 0x11fdd0c5");
L_11fdd0c6:;
  /* 11fdd0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd0c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd0ca jne 0x11fdd08a */
  if (!C.zf) goto L_11fdd08a;
  /* 11fdd0cc jmp 0x11fdd07b */
  goto L_11fdd07b;
L_11fdd0ce:;
  /* 11fdd0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd0d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11fdd0d4 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd0d5 push 0x12009c30 */
  push32((uint32_t)(0x12009c30u));
  /* 11fdd0da push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0de push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd0e2 call 0x11fd9d80 */
  push32(0x11fdd0e7u); f_11fd9d80();
  /* 11fdd0e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd0ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd0ed jne 0x11fdd0f0 */
  if (!C.zf) goto L_11fdd0f0;
  /* 11fdd0ef int3  */
  x86_unimpl("int3 @ 0x11fdd0ef");
L_11fdd0f0:;
  /* 11fdd0f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd0f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd0f4 jne 0x11fdd0ce */
  if (!C.zf) goto L_11fdd0ce;
L_11fdd0f6:;
  /* 11fdd0f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd0f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11fdd0fc push edx */
  push32((uint32_t)(EDX));
  /* 11fdd0fd push 0x12009c10 */
  push32((uint32_t)(0x12009c10u));
  /* 11fdd102 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd104 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd106 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd108 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd10a call 0x11fd9d80 */
  push32(0x11fdd10fu); f_11fd9d80();
  /* 11fdd10f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd112 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd115 jne 0x11fdd118 */
  if (!C.zf) goto L_11fdd118;
  /* 11fdd117 int3  */
  x86_unimpl("int3 @ 0x11fdd117");
L_11fdd118:;
  /* 11fdd118 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd11a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd11c jne 0x11fdd0f6 */
  if (!C.zf) goto L_11fdd0f6;
L_11fdd11e:;
  /* 11fdd11e pop edi */
  EDI = (pop32());
  /* 11fdd11f pop esi */
  ESI = (pop32());
  /* 11fdd120 pop ebx */
  EBX = (pop32());
  /* 11fdd121 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd123 pop ebp */
  EBP = (pop32());
  /* 11fdd124 ret  */
  ESPCHK(0x11fdd060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x11fdd130 (239 bytes, 88 insns) */
void f_11fdd130(void) {
  FTRACE(0x11fdd130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd130 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd131 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd136 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd139 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd13f jne 0x11fdd14a */
  if (!C.zf) goto L_11fdd14a;
  /* 11fdd141 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fdd148 jmp 0x11fdd152 */
  goto L_11fdd152;
L_11fdd14a:;
  /* 11fdd14a call 0x11fde140 */
  push32(0x11fdd14fu); f_11fde140();
  /* 11fdd14f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fdd152:;
  /* 11fdd152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd155 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdd158 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 11fdd15b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdd15d je 0x11fdd18e */
  if (C.zf) goto L_11fdd18e;
  /* 11fdd15f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd162 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd166 je 0x11fdd184 */
  if (C.zf) goto L_11fdd184;
  /* 11fdd168 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd16c jne 0x11fdd184 */
  if (!C.zf) goto L_11fdd184;
  /* 11fdd16e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fdd170 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd173 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd174 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd177 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd178 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd17b push eax */
  push32((uint32_t)(EAX));
  /* 11fdd17c call 0x11fdd6a0 */
  push32(0x11fdd181u); f_11fdd6a0();
  /* 11fdd181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdd184:;
  /* 11fdd184 mov eax, 1 */
  EAX = (0x1u);
  /* 11fdd189 jmp 0x11fdd21b */
  goto L_11fdd21b;
L_11fdd18e:;
  /* 11fdd18e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd191 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd195 je 0x11fdd216 */
  if (C.zf) goto L_11fdd216;
  /* 11fdd197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd19a cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd1a0 jne 0x11fdd1ee */
  if (!C.zf) goto L_11fdd1ee;
  /* 11fdd1a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd1a5 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd1ac jbe 0x11fdd1ee */
  if ((C.cf||C.zf)) goto L_11fdd1ee;
  /* 11fdd1ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd1b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fdd1b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fdd1b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdd1ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd1be je 0x11fdd1ee */
  if (C.zf) goto L_11fdd1ee;
  /* 11fdd1c0 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd1c3 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdd1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd1ca mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd1cd push edx */
  push32((uint32_t)(EDX));
  /* 11fdd1ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd1d1 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd1d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd1d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd1d9 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd1da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd1dd push eax */
  push32((uint32_t)(EAX));
  /* 11fdd1de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd1e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd1e5 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd1e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11fdd1e9u);
  /* 11fdd1e9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd1ec jmp 0x11fdd21b */
  goto L_11fdd21b;
L_11fdd1ee:;
  /* 11fdd1ee mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd1f1 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd1f2 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd1f6 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 11fdd1f9 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd1fa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd1fd push eax */
  push32((uint32_t)(EAX));
  /* 11fdd1fe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd201 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd202 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd205 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd209 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd20a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd20d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd20e call 0x11fdd220 */
  push32(0x11fdd213u); f_11fdd220();
  /* 11fdd213 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdd216:;
  /* 11fdd216 mov eax, 1 */
  EAX = (0x1u);
L_11fdd21b:;
  /* 11fdd21b mov esp, ebp */
  ESP = (EBP);
  /* 11fdd21d pop ebp */
  EBP = (pop32());
  /* 11fdd21e ret  */
  ESPCHK(0x11fdd130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d220 @ 0x11fdd220 (672 bytes, 222 insns) */
void f_11fdd220(void) {
  FTRACE(0x11fdd220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd220 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd221 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd223 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd226 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fdd22a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd22d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fdd230 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdd233 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd237 jl 0x11fdd24d */
  if ((C.sf!=C.of)) goto L_11fdd24d;
  /* 11fdd239 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd23c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd23f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd242 jge 0x11fdd24d */
  if ((C.sf==C.of)) goto L_11fdd24d;
  /* 11fdd244 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11fdd24b jmp 0x11fdd255 */
  goto L_11fdd255;
L_11fdd24d:;
  /* 11fdd24d call 0x11fde140 */
  push32(0x11fdd252u); f_11fde140();
  /* 11fdd252 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_11fdd255:;
  /* 11fdd255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd258 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd25e jne 0x11fdd315 */
  if (!C.zf) goto L_11fdd315;
  /* 11fdd264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd267 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd26b jne 0x11fdd315 */
  if (!C.zf) goto L_11fdd315;
  /* 11fdd271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd274 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd27b jne 0x11fdd315 */
  if (!C.zf) goto L_11fdd315;
  /* 11fdd281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd284 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd288 jne 0x11fdd315 */
  if (!C.zf) goto L_11fdd315;
  /* 11fdd28e call 0x11fddec0 */
  push32(0x11fdd293u); f_11fddec0();
  /* 11fdd293 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd297 jne 0x11fdd29e */
  if (!C.zf) goto L_11fdd29e;
  /* 11fdd299 jmp 0x11fdd4bc */
  goto L_11fdd4bc;
L_11fdd29e:;
  /* 11fdd29e call 0x11fddec0 */
  push32(0x11fdd2a3u); f_11fddec0();
  /* 11fdd2a3 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11fdd2a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fdd2a9 call 0x11fddec0 */
  push32(0x11fdd2aeu); f_11fddec0();
  /* 11fdd2ae mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11fdd2b1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11fdd2b4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fdd2b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdd2ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd2bd push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd2be call 0x11fe3cd0 */
  push32(0x11fdd2c3u); f_11fe3cd0();
  /* 11fdd2c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd2c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd2c8 je 0x11fdd2d3 */
  if (C.zf) goto L_11fdd2d3;
  /* 11fdd2ca mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11fdd2d1 jmp 0x11fdd2db */
  goto L_11fdd2db;
L_11fdd2d3:;
  /* 11fdd2d3 call 0x11fde140 */
  push32(0x11fdd2d8u); f_11fde140();
  /* 11fdd2d8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11fdd2db:;
  /* 11fdd2db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd2de cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd2e4 jne 0x11fdd30e */
  if (!C.zf) goto L_11fdd30e;
  /* 11fdd2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd2e9 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd2ed jne 0x11fdd30e */
  if (!C.zf) goto L_11fdd30e;
  /* 11fdd2ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd2f2 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd2f9 jne 0x11fdd30e */
  if (!C.zf) goto L_11fdd30e;
  /* 11fdd2fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd2fe cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd302 jne 0x11fdd30e */
  if (!C.zf) goto L_11fdd30e;
  /* 11fdd304 call 0x11fde140 */
  push32(0x11fdd309u); f_11fde140();
  /* 11fdd309 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11fdd30c jmp 0x11fdd315 */
  goto L_11fdd315;
L_11fdd30e:;
  /* 11fdd30e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11fdd315:;
  /* 11fdd315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd318 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd31e jne 0x11fdd47c */
  if (!C.zf) goto L_11fdd47c;
  /* 11fdd324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd327 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd32b jne 0x11fdd47c */
  if (!C.zf) goto L_11fdd47c;
  /* 11fdd331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd334 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd33b jne 0x11fdd47c */
  if (!C.zf) goto L_11fdd47c;
  /* 11fdd341 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fdd344 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd345 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11fdd348 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd349 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd34c push edx */
  push32((uint32_t)(EDX));
  /* 11fdd34d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd350 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd351 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd354 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd355 call 0x11fd9560 */
  push32(0x11fdd35au); f_11fd9560();
  /* 11fdd35a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd35d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fdd360 jmp 0x11fdd374 */
  goto L_11fdd374;
L_11fdd362:;
  /* 11fdd362 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdd365 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd368 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fdd36b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd36e add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd371 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fdd374:;
  /* 11fdd374 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdd377 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd37a jae 0x11fdd45f */
  if (!C.cf) goto L_11fdd45f;
  /* 11fdd380 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd383 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdd385 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd388 jg 0x11fdd395 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fdd395;
  /* 11fdd38a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd38d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd390 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd393 jle 0x11fdd397 */
  if ((C.zf||C.sf!=C.of)) goto L_11fdd397;
L_11fdd395:;
  /* 11fdd395 jmp 0x11fdd362 */
  goto L_11fdd362;
L_11fdd397:;
  /* 11fdd397 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd39a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fdd39d mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11fdd3a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd3a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdd3a6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fdd3a9 jmp 0x11fdd3bd */
  goto L_11fdd3bd;
L_11fdd3ab:;
  /* 11fdd3ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fdd3ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd3b1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fdd3b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd3b7 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd3ba mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11fdd3bd:;
  /* 11fdd3bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd3c1 jle 0x11fdd45a */
  if ((C.zf||C.sf!=C.of)) goto L_11fdd45a;
  /* 11fdd3c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd3ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fdd3cd mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fdd3d0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd3d3 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fdd3d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd3d9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fdd3dc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fdd3df mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdd3e1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fdd3e4 jmp 0x11fdd3f8 */
  goto L_11fdd3f8;
L_11fdd3e6:;
  /* 11fdd3e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fdd3e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd3ec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fdd3ef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdd3f2 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd3f5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11fdd3f8:;
  /* 11fdd3f8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd3fc jle 0x11fdd455 */
  if ((C.zf||C.sf!=C.of)) goto L_11fdd455;
  /* 11fdd3fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd401 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fdd404 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdd408 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdd40a push eax */
  push32((uint32_t)(EAX));
  /* 11fdd40b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd40e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd40f call 0x11fdd5e0 */
  push32(0x11fdd414u); f_11fdd5e0();
  /* 11fdd414 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd419 jne 0x11fdd41d */
  if (!C.zf) goto L_11fdd41d;
  /* 11fdd41b jmp 0x11fdd3e6 */
  goto L_11fdd3e6;
L_11fdd41d:;
  /* 11fdd41d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fdd420 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd421 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd424 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd425 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd428 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd429 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd42c push edx */
  push32((uint32_t)(EDX));
  /* 11fdd42d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdd430 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdd432 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd433 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd436 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd437 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd43a push eax */
  push32((uint32_t)(EAX));
  /* 11fdd43b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd43e push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd43f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd442 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd446 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd44a push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd44b call 0x11fdd7d0 */
  push32(0x11fdd450u); f_11fdd7d0();
  /* 11fdd450 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd453 jmp 0x11fdd4ba */
  goto L_11fdd4ba;
L_11fdd455:;
  /* 11fdd455 jmp 0x11fdd3ab */
  goto L_11fdd3ab;
L_11fdd45a:;
  /* 11fdd45a jmp 0x11fdd362 */
  goto L_11fdd362;
L_11fdd45f:;
  /* 11fdd45f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd462 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fdd468 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdd46a je 0x11fdd47a */
  if (C.zf) goto L_11fdd47a;
  /* 11fdd46c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdd46e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd471 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd472 call 0x11fddcb0 */
  push32(0x11fdd477u); f_11fddcb0();
  /* 11fdd477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdd47a:;
  /* 11fdd47a jmp 0x11fdd4b8 */
  goto L_11fdd4b8;
L_11fdd47c:;
  /* 11fdd47c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd47f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fdd485 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdd487 jne 0x11fdd4b3 */
  if (!C.zf) goto L_11fdd4b3;
  /* 11fdd489 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd48c push edx */
  push32((uint32_t)(EDX));
  /* 11fdd48d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd490 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd491 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd494 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd495 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd498 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd499 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd49c push eax */
  push32((uint32_t)(EAX));
  /* 11fdd49d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd4a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd4a4 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd4a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd4a8 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd4a9 call 0x11fdd4c0 */
  push32(0x11fdd4aeu); f_11fdd4c0();
  /* 11fdd4ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd4b1 jmp 0x11fdd4b8 */
  goto L_11fdd4b8;
L_11fdd4b3:;
  /* 11fdd4b3 call 0x11fde090 */
  push32(0x11fdd4b8u); f_11fde090();
L_11fdd4b8:;
  /* 11fdd4b8 jmp 0x11fdd4bc */
  goto L_11fdd4bc;
L_11fdd4ba:;
  /* 11fdd4ba jmp 0x11fdd45a */
  goto L_11fdd45a;
L_11fdd4bc:;
  /* 11fdd4bc mov esp, ebp */
  ESP = (EBP);
  /* 11fdd4be pop ebp */
  EBP = (pop32());
  /* 11fdd4bf ret  */
  ESPCHK(0x11fdd220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4c0 @ 0x11fdd4c0 (277 bytes, 107 insns) */
void f_11fdd4c0(void) {
  FTRACE(0x11fdd4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd4c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd4c6 call 0x11fddec0 */
  push32(0x11fdd4cbu); f_11fddec0();
  /* 11fdd4cb cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd4cf je 0x11fdd4fe */
  if (C.zf) goto L_11fdd4fe;
  /* 11fdd4d1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd4d4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd4d5 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd4d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd4d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd4dc push edx */
  push32((uint32_t)(EDX));
  /* 11fdd4dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd4e0 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd4e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd4e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd4e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd4e8 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd4e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd4ec push eax */
  push32((uint32_t)(EAX));
  /* 11fdd4ed call 0x11fd9400 */
  push32(0x11fdd4f2u); f_11fd9400();
  /* 11fdd4f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd4f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd4f7 je 0x11fdd4fe */
  if (C.zf) goto L_11fdd4fe;
  /* 11fdd4f9 jmp 0x11fdd5d1 */
  goto L_11fdd5d1;
L_11fdd4fe:;
  /* 11fdd4fe lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11fdd501 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd502 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fdd505 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd506 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd509 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd50a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd50d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd50e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd511 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd512 call 0x11fd9560 */
  push32(0x11fdd517u); f_11fd9560();
  /* 11fdd517 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd51a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdd51d jmp 0x11fdd531 */
  goto L_11fdd531;
L_11fdd51f:;
  /* 11fdd51f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdd522 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd525 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fdd528 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd52b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd52e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fdd531:;
  /* 11fdd531 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fdd534 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd537 jae 0x11fdd5d1 */
  if (!C.cf) goto L_11fdd5d1;
  /* 11fdd53d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd540 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd543 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd545 jl 0x11fdd589 */
  if ((C.sf!=C.of)) goto L_11fdd589;
  /* 11fdd547 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd54a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd54d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd550 jg 0x11fdd589 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fdd589;
  /* 11fdd552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd555 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fdd558 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd55b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fdd55e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd561 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fdd564 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd569 je 0x11fdd58b */
  if (C.zf) goto L_11fdd58b;
  /* 11fdd56b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd56e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdd571 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd574 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fdd577 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd57a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fdd57d mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11fdd581 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 11fdd585 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdd587 je 0x11fdd58b */
  if (C.zf) goto L_11fdd58b;
L_11fdd589:;
  /* 11fdd589 jmp 0x11fdd51f */
  goto L_11fdd51f;
L_11fdd58b:;
  /* 11fdd58b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdd58d mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd590 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd591 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd594 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd598 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd599 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fdd59b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd59e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fdd5a1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd5a4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fdd5a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd5aa mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fdd5ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd5af push edx */
  push32((uint32_t)(EDX));
  /* 11fdd5b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd5b3 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd5b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd5b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd5bb push edx */
  push32((uint32_t)(EDX));
  /* 11fdd5bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd5bf push eax */
  push32((uint32_t)(EAX));
  /* 11fdd5c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd5c4 call 0x11fdd7d0 */
  push32(0x11fdd5c9u); f_11fdd7d0();
  /* 11fdd5c9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd5cc jmp 0x11fdd51f */
  goto L_11fdd51f;
L_11fdd5d1:;
  /* 11fdd5d1 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd5d3 pop ebp */
  EBP = (pop32());
  /* 11fdd5d4 ret  */
  ESPCHK(0x11fdd4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x11fdd5e0 (182 bytes, 69 insns) */
void f_11fdd5e0(void) {
  FTRACE(0x11fdd5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd5e7 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd5eb je 0x11fdd5fb */
  if (C.zf) goto L_11fdd5fb;
  /* 11fdd5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd5f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdd5f3 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11fdd5f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd5f9 jne 0x11fdd605 */
  if (!C.zf) goto L_11fdd605;
L_11fdd5fb:;
  /* 11fdd5fb mov eax, 1 */
  EAX = (0x1u);
  /* 11fdd600 jmp 0x11fdd692 */
  goto L_11fdd692;
L_11fdd605:;
  /* 11fdd605 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd608 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd60b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdd60e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd611 je 0x11fdd637 */
  if (C.zf) goto L_11fdd637;
  /* 11fdd613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd616 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdd619 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd61c push edx */
  push32((uint32_t)(EDX));
  /* 11fdd61d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd620 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fdd623 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd626 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd627 call 0x11fe3d60 */
  push32(0x11fdd62cu); f_11fe3d60();
  /* 11fdd62c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd631 je 0x11fdd637 */
  if (C.zf) goto L_11fdd637;
  /* 11fdd633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd635 jmp 0x11fdd692 */
  goto L_11fdd692;
L_11fdd637:;
  /* 11fdd637 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd63a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdd63c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd63f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd641 je 0x11fdd64f */
  if (C.zf) goto L_11fdd64f;
  /* 11fdd643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd646 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdd648 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fdd64b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdd64d je 0x11fdd688 */
  if (C.zf) goto L_11fdd688;
L_11fdd64f:;
  /* 11fdd64f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd652 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdd654 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdd657 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdd659 je 0x11fdd667 */
  if (C.zf) goto L_11fdd667;
  /* 11fdd65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd65e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdd660 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdd665 je 0x11fdd688 */
  if (C.zf) goto L_11fdd688;
L_11fdd667:;
  /* 11fdd667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd66a mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fdd66c and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fdd66f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fdd671 je 0x11fdd67f */
  if (C.zf) goto L_11fdd67f;
  /* 11fdd673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd676 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdd678 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdd67b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdd67d je 0x11fdd688 */
  if (C.zf) goto L_11fdd688;
L_11fdd67f:;
  /* 11fdd67f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdd686 jmp 0x11fdd68f */
  goto L_11fdd68f;
L_11fdd688:;
  /* 11fdd688 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fdd68f:;
  /* 11fdd68f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fdd692:;
  /* 11fdd692 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd694 pop ebp */
  EBP = (pop32());
  /* 11fdd695 ret  */
  ESPCHK(0x11fdd5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6a0 @ 0x11fdd6a0 (224 bytes, 77 insns) */
void f_11fdd6a0(void) {
  FTRACE(0x11fdd6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd6a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fdd6a5 push 0x12009c78 */
  push32((uint32_t)(0x12009c78u));
  /* 11fdd6aa push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fdd6af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fdd6b5 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd6b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fdd6bd add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd6c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdd6c1 push esi */
  push32((uint32_t)(ESI));
  /* 11fdd6c2 push edi */
  push32((uint32_t)(EDI));
  /* 11fdd6c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fdd6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd6c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fdd6cc mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11fdd6cf:;
  /* 11fdd6cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd6d2 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd6d5 je 0x11fdd764 */
  if (C.zf) goto L_11fdd764;
  /* 11fdd6db cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd6df jle 0x11fdd6f5 */
  if ((C.zf||C.sf!=C.of)) goto L_11fdd6f5;
  /* 11fdd6e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd6e4 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd6e7 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd6ea jge 0x11fdd6f5 */
  if ((C.sf==C.of)) goto L_11fdd6f5;
  /* 11fdd6ec mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fdd6f3 jmp 0x11fdd6fd */
  goto L_11fdd6fd;
L_11fdd6f5:;
  /* 11fdd6f5 call 0x11fde140 */
  push32(0x11fdd6fau); f_11fde140();
  /* 11fdd6fa mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11fdd6fd:;
  /* 11fdd6fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdd704 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd707 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fdd70a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd70d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd712 je 0x11fdd730 */
  if (C.zf) goto L_11fdd730;
  /* 11fdd714 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11fdd719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd71c push edx */
  push32((uint32_t)(EDX));
  /* 11fdd71d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd720 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fdd723 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd726 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11fdd72a push eax */
  push32((uint32_t)(EAX));
  /* 11fdd72b call 0x11fddd90 */
  push32(0x11fdd730u); f_11fddd90();
L_11fdd730:;
  /* 11fdd730 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fdd737 jmp 0x11fdd750 */
  goto L_11fdd750;
  /* 11fdd739 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdd73c push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd73d call 0x11fdd7a0 */
  push32(0x11fdd742u); f_11fdd7a0();
  /* 11fdd742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd745 ret  */
  ESPCHK(0x11fdd6a0u, _esp0);
  ESP += 4; return;
  /* 11fdd746 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdd749 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fdd750:;
  /* 11fdd750 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd753 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fdd756 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd759 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 11fdd75c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdd75f jmp 0x11fdd6cf */
  goto L_11fdd6cf;
L_11fdd764:;
  /* 11fdd764 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd767 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd76a jne 0x11fdd775 */
  if (!C.zf) goto L_11fdd775;
  /* 11fdd76c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fdd773 jmp 0x11fdd77d */
  goto L_11fdd77d;
L_11fdd775:;
  /* 11fdd775 call 0x11fde140 */
  push32(0x11fdd77au); f_11fde140();
  /* 11fdd77a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fdd77d:;
  /* 11fdd77d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd780 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd783 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11fdd786 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd789 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fdd790 pop edi */
  EDI = (pop32());
  /* 11fdd791 pop esi */
  ESI = (pop32());
  /* 11fdd792 pop ebx */
  EBX = (pop32());
  /* 11fdd793 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd795 pop ebp */
  EBP = (pop32());
  /* 11fdd796 ret  */
  ESPCHK(0x11fdd6a0u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x11fdd7a0 (44 bytes, 17 insns) */
void f_11fdd7a0(void) {
  FTRACE(0x11fdd7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd7a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd7a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd7a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdd7ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdd7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd7b1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fdd7b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdd7b6 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd7bd je 0x11fdd7c1 */
  if (C.zf) goto L_11fdd7c1;
  /* 11fdd7bf jmp 0x11fdd7c6 */
  goto L_11fdd7c6;
L_11fdd7c1:;
  /* 11fdd7c1 call 0x11fde090 */
  push32(0x11fdd7c6u); f_11fde090();
L_11fdd7c6:;
  /* 11fdd7c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdd7c8 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd7ca pop ebp */
  EBP = (pop32());
  /* 11fdd7cb ret  */
  ESPCHK(0x11fdd7a0u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x11fdd7d0 (183 bytes, 73 insns) */
void f_11fdd7d0(void) {
  FTRACE(0x11fdd7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fdd7d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd7d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdd7dc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd7e0 je 0x11fdd7fa */
  if (C.zf) goto L_11fdd7fa;
  /* 11fdd7e2 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd7e6 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd7e9 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd7ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd7ed push eax */
  push32((uint32_t)(EAX));
  /* 11fdd7ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd7f2 call 0x11fdda30 */
  push32(0x11fdd7f7u); f_11fdda30();
  /* 11fdd7f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdd7fa:;
  /* 11fdd7fa cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd7fe jne 0x11fdd80f */
  if (!C.zf) goto L_11fdd80f;
  /* 11fdd800 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd803 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd804 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd807 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd808 call 0x11fd9280 */
  push32(0x11fdd80du); f_11fd9280();
  /* 11fdd80d jmp 0x11fdd81c */
  goto L_11fdd81c;
L_11fdd80f:;
  /* 11fdd80f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd812 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd813 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11fdd816 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd817 call 0x11fd9280 */
  push32(0x11fdd81cu); f_11fd9280();
L_11fdd81c:;
  /* 11fdd81c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd81f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdd821 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd822 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd825 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd826 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd829 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd82a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd82d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd82e call 0x11fdd6a0 */
  push32(0x11fdd833u); f_11fdd6a0();
  /* 11fdd833 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd836 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fdd839 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fdd83c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd83f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd842 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11fdd845 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fdd84a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fdd84d push edx */
  push32((uint32_t)(EDX));
  /* 11fdd84e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd851 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fdd854 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd855 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd858 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd859 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd85c push eax */
  push32((uint32_t)(EAX));
  /* 11fdd85d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd860 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd864 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd865 call 0x11fdd890 */
  push32(0x11fdd86au); f_11fdd890();
  /* 11fdd86a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd86d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fdd870 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd874 je 0x11fdd883 */
  if (C.zf) goto L_11fdd883;
  /* 11fdd876 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd879 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd87a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fdd87d push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd87e call 0x11fd9210 */
  push32(0x11fdd883u); f_11fd9210();
L_11fdd883:;
  /* 11fdd883 mov esp, ebp */
  ESP = (EBP);
  /* 11fdd885 pop ebp */
  EBP = (pop32());
  /* 11fdd886 ret  */
  ESPCHK(0x11fdd7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d890 @ 0x11fdd890 (172 bytes, 66 insns) */
void f_11fdd890(void) {
  FTRACE(0x11fdd890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd890 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd891 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd893 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fdd895 push 0x12009c88 */
  push32((uint32_t)(0x12009c88u));
  /* 11fdd89a push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fdd89f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fdd8a5 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd8a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fdd8ad add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd8b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdd8b1 push esi */
  push32((uint32_t)(ESI));
  /* 11fdd8b2 push edi */
  push32((uint32_t)(EDI));
  /* 11fdd8b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fdd8b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd8b9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fdd8bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fdd8c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd8c6 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fdd8c9 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11fdd8cc call 0x11fddec0 */
  push32(0x11fdd8d1u); f_11fddec0();
  /* 11fdd8d1 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11fdd8d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fdd8d7 call 0x11fddec0 */
  push32(0x11fdd8dcu); f_11fddec0();
  /* 11fdd8dc mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 11fdd8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fdd8e2 call 0x11fddec0 */
  push32(0x11fdd8e7u); f_11fddec0();
  /* 11fdd8e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd8ea mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11fdd8ed call 0x11fddec0 */
  push32(0x11fdd8f2u); f_11fddec0();
  /* 11fdd8f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdd8f5 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11fdd8f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdd8ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fdd906 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fdd909 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd90a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fdd90d push eax */
  push32((uint32_t)(EAX));
  /* 11fdd90e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fdd911 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd912 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fdd915 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd919 push eax */
  push32((uint32_t)(EAX));
  /* 11fdd91a call 0x11fd9350 */
  push32(0x11fdd91fu); f_11fd9350();
  /* 11fdd91f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd922 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fdd925 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdd92c jmp 0x11fdd95f */
  goto L_11fdd95f;
  /* 11fdd92e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fdd931 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd932 call 0x11fdd9e0 */
  push32(0x11fdd937u); f_11fdd9e0();
  /* 11fdd937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd93a ret  */
  ESPCHK(0x11fdd890u, _esp0);
  ESP += 4; return;
  /* 11fdd93b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fdd93e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11fdd945 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fdd947 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 11fdd94e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11fdd951 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd952 call 0x11fd9632 */
  push32(0x11fdd957u); f_11fd9632();
  /* 11fdd957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdd95a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fdd95d jmp 0x11fdd9ce */
  jmp_ind(0x11fdd9ceu); return;
L_11fdd95f:;
  /* 11fdd95f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fdd966 call 0x11fdd96d */
  push32(0x11fdd96bu); f_11fdd96d();
  /* 11fdd96b jmp 0x11fdd9cb */
  f_11fdd9cb(); return;
}

/* FUN_1000d96d @ 0x11fdd96d (94 bytes, 29 insns) */
void f_11fdd96d(void) {
  FTRACE(0x11fdd96du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd96d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdd970 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fdd973 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11fdd976 call 0x11fddec0 */
  push32(0x11fdd97bu); f_11fddec0();
  /* 11fdd97b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fdd97e mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11fdd981 call 0x11fddec0 */
  push32(0x11fdd986u); f_11fddec0();
  /* 11fdd986 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fdd989 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11fdd98c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd98f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd995 jne 0x11fdd9ca */
  if (!C.zf) goto L_11fdd9ca;
  /* 11fdd997 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd99a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd99e jne 0x11fdd9ca */
  if (!C.zf) goto L_11fdd9ca;
  /* 11fdd9a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd9a3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd9aa jne 0x11fdd9ca */
  if (!C.zf) goto L_11fdd9ca;
  /* 11fdd9ac cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd9b0 jne 0x11fdd9ca */
  if (!C.zf) goto L_11fdd9ca;
  /* 11fdd9b2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd9b6 je 0x11fdd9ca */
  if (C.zf) goto L_11fdd9ca;
  /* 11fdd9b8 call 0x11fd969a */
  push32(0x11fdd9bdu); f_11fd969a();
  /* 11fdd9bd push eax */
  push32((uint32_t)(EAX));
  /* 11fdd9be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd9c1 push edx */
  push32((uint32_t)(EDX));
  /* 11fdd9c2 call 0x11fddcb0 */
  push32(0x11fdd9c7u); f_11fddcb0();
  /* 11fdd9c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fdd9ca:;
  /* 11fdd9ca ret  */
  ESPCHK(0x11fdd96du, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9cb @ 0x11fdd9cb (20 bytes, 9 insns) */
void f_11fdd9cb(void) {
  FTRACE(0x11fdd9cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd9cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fdd9ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fdd9d1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fdd9d8 pop edi */
  EDI = (pop32());
  /* 11fdd9d9 pop esi */
  ESI = (pop32());
  /* 11fdd9da pop ebx */
  EBX = (pop32());
  /* 11fdd9db mov esp, ebp */
  ESP = (EBP);
  /* 11fdd9dd pop ebp */
  EBP = (pop32());
  /* 11fdd9de ret  */
  ESPCHK(0x11fdd9cbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9e0 @ 0x11fdd9e0 (66 bytes, 24 insns) */
void f_11fdd9e0(void) {
  FTRACE(0x11fdd9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdd9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdd9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fdd9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdd9e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fdd9e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdd9e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fdd9ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd9ef cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd9f5 jne 0x11fdda1c */
  if (!C.zf) goto L_11fdda1c;
  /* 11fdd9f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdd9fa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdd9fe jne 0x11fdda1c */
  if (!C.zf) goto L_11fdda1c;
  /* 11fdda00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdda03 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdda0a jne 0x11fdda1c */
  if (!C.zf) goto L_11fdda1c;
  /* 11fdda0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdda0f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdda13 jne 0x11fdda1c */
  if (!C.zf) goto L_11fdda1c;
  /* 11fdda15 mov eax, 1 */
  EAX = (0x1u);
  /* 11fdda1a jmp 0x11fdda1e */
  goto L_11fdda1e;
L_11fdda1c:;
  /* 11fdda1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fdda1e:;
  /* 11fdda1e mov esp, ebp */
  ESP = (EBP);
  /* 11fdda20 pop ebp */
  EBP = (pop32());
  /* 11fdda21 ret  */
  ESPCHK(0x11fdd9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x11fdda30 (621 bytes, 229 insns) */
void f_11fdda30(void) {
  FTRACE(0x11fdda30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdda30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdda31 mov ebp, esp */
  EBP = (ESP);
  /* 11fdda33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fdda35 push 0x12009ca0 */
  push32((uint32_t)(0x12009ca0u));
  /* 11fdda3a push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fdda3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fdda45 push eax */
  push32((uint32_t)(EAX));
  /* 11fdda46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fdda4d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdda50 push ebx */
  push32((uint32_t)(EBX));
  /* 11fdda51 push esi */
  push32((uint32_t)(ESI));
  /* 11fdda52 push edi */
  push32((uint32_t)(EDI));
  /* 11fdda53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fdda56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdda59 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdda5d je 0x11fdda76 */
  if (C.zf) goto L_11fdda76;
  /* 11fdda5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdda62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fdda65 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11fdda69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdda6b je 0x11fdda76 */
  if (C.zf) goto L_11fdda76;
  /* 11fdda6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdda70 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdda74 jne 0x11fdda7b */
  if (!C.zf) goto L_11fdda7b;
L_11fdda76:;
  /* 11fdda76 jmp 0x11fddc9a */
  goto L_11fddc9a;
L_11fdda7b:;
  /* 11fdda7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdda7e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fdda81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fdda84 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 11fdda88 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fdda8b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fdda92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdda95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fdda97 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fdda9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fdda9c je 0x11fddaf6 */
  if (C.zf) goto L_11fddaf6;
  /* 11fdda9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddaa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddaa3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fddaa6 push eax */
  push32((uint32_t)(EAX));
  /* 11fddaa7 call 0x11fe3cd0 */
  push32(0x11fddaacu); f_11fe3cd0();
  /* 11fddaac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddaaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddab1 je 0x11fddaec */
  if (C.zf) goto L_11fddaec;
  /* 11fddab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddab5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddab9 call 0x11fe3d00 */
  push32(0x11fddabeu); f_11fe3d00();
  /* 11fddabe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddac3 je 0x11fddaec */
  if (C.zf) goto L_11fddaec;
  /* 11fddac5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddacb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fddace mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fddad0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddad3 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddad6 push edx */
  push32((uint32_t)(EDX));
  /* 11fddad7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddada mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fddadc push ecx */
  push32((uint32_t)(ECX));
  /* 11fddadd call 0x11fddd40 */
  push32(0x11fddae2u); f_11fddd40();
  /* 11fddae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddae5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddae8 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fddaea jmp 0x11fddaf1 */
  goto L_11fddaf1;
L_11fddaec:;
  /* 11fddaec call 0x11fde140 */
  push32(0x11fddaf1u); f_11fde140();
L_11fddaf1:;
  /* 11fddaf1 jmp 0x11fddc83 */
  goto L_11fddc83;
L_11fddaf6:;
  /* 11fddaf6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddaf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fddafb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fddafe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fddb00 je 0x11fddb7a */
  if (C.zf) goto L_11fddb7a;
  /* 11fddb02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddb04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddb07 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fddb0a push eax */
  push32((uint32_t)(EAX));
  /* 11fddb0b call 0x11fe3cd0 */
  push32(0x11fddb10u); f_11fe3cd0();
  /* 11fddb10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddb13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddb15 je 0x11fddb70 */
  if (C.zf) goto L_11fddb70;
  /* 11fddb17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddb19 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddb1c push ecx */
  push32((uint32_t)(ECX));
  /* 11fddb1d call 0x11fe3d00 */
  push32(0x11fddb22u); f_11fe3d00();
  /* 11fddb22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddb25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddb27 je 0x11fddb70 */
  if (C.zf) goto L_11fddb70;
  /* 11fddb29 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddb2c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fddb2f push eax */
  push32((uint32_t)(EAX));
  /* 11fddb30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddb33 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fddb36 push edx */
  push32((uint32_t)(EDX));
  /* 11fddb37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddb3a push eax */
  push32((uint32_t)(EAX));
  /* 11fddb3b call 0x11fe1630 */
  push32(0x11fddb40u); f_11fe1630();
  /* 11fddb40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddb43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddb46 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddb4a jne 0x11fddb6e */
  if (!C.zf) goto L_11fddb6e;
  /* 11fddb4c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddb4f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddb52 je 0x11fddb6e */
  if (C.zf) goto L_11fddb6e;
  /* 11fddb54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddb57 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddb5a push eax */
  push32((uint32_t)(EAX));
  /* 11fddb5b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddb5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fddb60 push edx */
  push32((uint32_t)(EDX));
  /* 11fddb61 call 0x11fddd40 */
  push32(0x11fddb66u); f_11fddd40();
  /* 11fddb66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddb69 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddb6c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fddb6e:;
  /* 11fddb6e jmp 0x11fddb75 */
  goto L_11fddb75;
L_11fddb70:;
  /* 11fddb70 call 0x11fde140 */
  push32(0x11fddb75u); f_11fde140();
L_11fddb75:;
  /* 11fddb75 jmp 0x11fddc83 */
  goto L_11fddc83;
L_11fddb7a:;
  /* 11fddb7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddb7d cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddb81 jne 0x11fddbe0 */
  if (!C.zf) goto L_11fddbe0;
  /* 11fddb83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddb85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddb88 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fddb8b push ecx */
  push32((uint32_t)(ECX));
  /* 11fddb8c call 0x11fe3cd0 */
  push32(0x11fddb91u); f_11fe3cd0();
  /* 11fddb91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddb94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddb96 je 0x11fddbd6 */
  if (C.zf) goto L_11fddbd6;
  /* 11fddb98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddb9a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddb9d push edx */
  push32((uint32_t)(EDX));
  /* 11fddb9e call 0x11fe3d00 */
  push32(0x11fddba3u); f_11fe3d00();
  /* 11fddba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddba8 je 0x11fddbd6 */
  if (C.zf) goto L_11fddbd6;
  /* 11fddbaa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddbad mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fddbb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddbb1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddbb4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddbb7 push edx */
  push32((uint32_t)(EDX));
  /* 11fddbb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddbbb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fddbbe push ecx */
  push32((uint32_t)(ECX));
  /* 11fddbbf call 0x11fddd40 */
  push32(0x11fddbc4u); f_11fddd40();
  /* 11fddbc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddbc7 push eax */
  push32((uint32_t)(EAX));
  /* 11fddbc8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddbcb push edx */
  push32((uint32_t)(EDX));
  /* 11fddbcc call 0x11fe1630 */
  push32(0x11fddbd1u); f_11fe1630();
  /* 11fddbd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddbd4 jmp 0x11fddbdb */
  goto L_11fddbdb;
L_11fddbd6:;
  /* 11fddbd6 call 0x11fde140 */
  push32(0x11fddbdbu); f_11fde140();
L_11fddbdb:;
  /* 11fddbdb jmp 0x11fddc83 */
  goto L_11fddc83;
L_11fddbe0:;
  /* 11fddbe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddbe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddbe5 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fddbe8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddbe9 call 0x11fe3cd0 */
  push32(0x11fddbeeu); f_11fe3cd0();
  /* 11fddbee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddbf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddbf3 je 0x11fddc7e */
  if (C.zf) goto L_11fddc7e;
  /* 11fddbf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddbfb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddbfe push edx */
  push32((uint32_t)(EDX));
  /* 11fddbff call 0x11fe3d00 */
  push32(0x11fddc04u); f_11fe3d00();
  /* 11fddc04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddc07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddc09 je 0x11fddc7e */
  if (C.zf) goto L_11fddc7e;
  /* 11fddc0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddc0e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fddc11 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddc12 call 0x11fe3d30 */
  push32(0x11fddc17u); f_11fe3d30();
  /* 11fddc17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddc1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddc1c je 0x11fddc7e */
  if (C.zf) goto L_11fddc7e;
  /* 11fddc1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddc21 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fddc23 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fddc26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddc28 je 0x11fddc55 */
  if (C.zf) goto L_11fddc55;
  /* 11fddc2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddc2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddc2f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddc32 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddc33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddc36 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fddc39 push eax */
  push32((uint32_t)(EAX));
  /* 11fddc3a call 0x11fddd40 */
  push32(0x11fddc3fu); f_11fddd40();
  /* 11fddc3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddc42 push eax */
  push32((uint32_t)(EAX));
  /* 11fddc43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddc46 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fddc49 push edx */
  push32((uint32_t)(EDX));
  /* 11fddc4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddc4d push eax */
  push32((uint32_t)(EAX));
  /* 11fddc4e call 0x11fd9270 */
  push32(0x11fddc53u); f_11fd9270();
  /* 11fddc53 jmp 0x11fddc7c */
  goto L_11fddc7c;
L_11fddc55:;
  /* 11fddc55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddc58 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddc5b push ecx */
  push32((uint32_t)(ECX));
  /* 11fddc5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddc5f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fddc62 push eax */
  push32((uint32_t)(EAX));
  /* 11fddc63 call 0x11fddd40 */
  push32(0x11fddc68u); f_11fddd40();
  /* 11fddc68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddc6b push eax */
  push32((uint32_t)(EAX));
  /* 11fddc6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fddc6f mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fddc72 push edx */
  push32((uint32_t)(EDX));
  /* 11fddc73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fddc76 push eax */
  push32((uint32_t)(EAX));
  /* 11fddc77 call 0x11fd9260 */
  push32(0x11fddc7cu); f_11fd9260();
L_11fddc7c:;
  /* 11fddc7c jmp 0x11fddc83 */
  goto L_11fddc83;
L_11fddc7e:;
  /* 11fddc7e call 0x11fde140 */
  push32(0x11fddc83u); f_11fde140();
L_11fddc83:;
  /* 11fddc83 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fddc8a jmp 0x11fddc9a */
  goto L_11fddc9a;
  /* 11fddc8c mov eax, 1 */
  EAX = (0x1u);
  /* 11fddc91 ret  */
  ESPCHK(0x11fdda30u, _esp0);
  ESP += 4; return;
  /* 11fddc92 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fddc95 call 0x11fde090 */
  push32(0x11fddc9au); f_11fde090();
L_11fddc9a:;
  /* 11fddc9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fddc9d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fddca4 pop edi */
  EDI = (pop32());
  /* 11fddca5 pop esi */
  ESI = (pop32());
  /* 11fddca6 pop ebx */
  EBX = (pop32());
  /* 11fddca7 mov esp, ebp */
  ESP = (EBP);
  /* 11fddca9 pop ebp */
  EBP = (pop32());
  /* 11fddcaa ret  */
  ESPCHK(0x11fdda30u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x11fddcb0 (111 bytes, 46 insns) */
void f_11fddcb0(void) {
  FTRACE(0x11fddcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddcb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fddcb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fddcb5 push 0x12009cb0 */
  push32((uint32_t)(0x12009cb0u));
  /* 11fddcba push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fddcbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fddcc5 push eax */
  push32((uint32_t)(EAX));
  /* 11fddcc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fddccd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fddcd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fddcd1 push esi */
  push32((uint32_t)(ESI));
  /* 11fddcd2 push edi */
  push32((uint32_t)(EDI));
  /* 11fddcd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fddcd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddcda je 0x11fddd25 */
  if (C.zf) goto L_11fddd25;
  /* 11fddcdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddcdf mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fddce2 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddce6 je 0x11fddd25 */
  if (C.zf) goto L_11fddd25;
  /* 11fddce8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fddcef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddcf2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fddcf5 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fddcf8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddcfc mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fddcff push eax */
  push32((uint32_t)(EAX));
  /* 11fddd00 call 0x11fd9250 */
  push32(0x11fddd05u); f_11fd9250();
  /* 11fddd05 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fddd0c jmp 0x11fddd25 */
  goto L_11fddd25;
  /* 11fddd0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fddd16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fddd18 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fddd1a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fddd1c ret  */
  ESPCHK(0x11fddcb0u, _esp0);
  ESP += 4; return;
  /* 11fddd1d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fddd20 call 0x11fde090 */
  push32(0x11fddd25u); f_11fde090();
L_11fddd25:;
  /* 11fddd25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fddd28 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fddd2f pop edi */
  EDI = (pop32());
  /* 11fddd30 pop esi */
  ESI = (pop32());
  /* 11fddd31 pop ebx */
  EBX = (pop32());
  /* 11fddd32 mov esp, ebp */
  ESP = (EBP);
  /* 11fddd34 pop ebp */
  EBP = (pop32());
  /* 11fddd35 ret  */
  ESPCHK(0x11fddcb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x11fddd40 (70 bytes, 27 insns) */
void f_11fddd40(void) {
  FTRACE(0x11fddd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddd40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddd41 mov ebp, esp */
  EBP = (ESP);
  /* 11fddd43 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddd44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddd4a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddd4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fddd4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd52 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddd56 jl 0x11fddd7f */
  if ((C.sf!=C.of)) goto L_11fddd7f;
  /* 11fddd58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd5b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fddd5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddd61 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11fddd64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd67 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fddd6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddd6d add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddd70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fddd73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddd79 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddd7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fddd7f:;
  /* 11fddd7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddd82 mov esp, ebp */
  ESP = (EBP);
  /* 11fddd84 pop ebp */
  EBP = (pop32());
  /* 11fddd85 ret  */
  ESPCHK(0x11fddd40u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11fddd90 (76 bytes, 34 insns) */
void f_11fddd90(void) {
  FTRACE(0x11fddd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddd90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddd91 mov ebp, esp */
  EBP = (ESP);
  /* 11fddd93 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fddd96 push ebx */
  push32((uint32_t)(EBX));
  /* 11fddd97 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddd98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fddd9b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddd9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fddda1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddda4 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddda5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11fddda8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdddab mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdddae call 0x11fd96bd */
  push32(0x11fdddb3u); f_11fd96bd();
  /* 11fdddb3 push esi */
  push32((uint32_t)(ESI));
  /* 11fdddb4 push edi */
  push32((uint32_t)(EDI));
  /* 11fdddb5 call eax */
  call_ind((uint32_t)(EAX), 0x11fdddb7u);
  /* 11fdddb7 pop edi */
  EDI = (pop32());
  /* 11fdddb8 pop esi */
  ESI = (pop32());
  /* 11fdddb9 mov ebx, ebp */
  EBX = (EBP);
  /* 11fdddbb pop ebp */
  EBP = (pop32());
  /* 11fdddbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fdddbf push ebp */
  push32((uint32_t)(EBP));
  /* 11fdddc0 mov ebp, ebx */
  EBP = (EBX);
  /* 11fdddc2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdddc8 jne 0x11fdddcf */
  if (!C.zf) goto L_11fdddcf;
  /* 11fdddca mov ecx, 2 */
  ECX = (0x2u);
L_11fdddcf:;
  /* 11fdddcf push ecx */
  push32((uint32_t)(ECX));
  /* 11fdddd0 call 0x11fd96bd */
  push32(0x11fdddd5u); f_11fd96bd();
  /* 11fdddd5 pop ebp */
  EBP = (pop32());
  /* 11fdddd6 pop ecx */
  ECX = (pop32());
  /* 11fdddd7 pop ebx */
  EBX = (pop32());
  /* 11fdddd8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fdddd9 ret 0xc */
  ESPCHK(0x11fddd90u, _esp0);
  ESP += 16; return;
}

/* FUN_1000dde0 @ 0x11fddde0 (130 bytes, 42 insns) */
void f_11fddde0(void) {
  FTRACE(0x11fddde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddde0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddde1 mov ebp, esp */
  EBP = (ESP);
  /* 11fddde3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddde4 call 0x11fdafe0 */
  push32(0x11fddde9u); f_11fdafe0();
  /* 11fddde9 call dword ptr [0x120113f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113f0))), 0x11fdddefu);
  /* 11fdddef mov dword ptr [0x1200cf20], eax */
  w32((uint32_t)(0x1200cf20), (EAX));
  /* 11fdddf4 cmp dword ptr [0x1200cf20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cf20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdddfb jne 0x11fdde01 */
  if (!C.zf) goto L_11fdde01;
  /* 11fdddfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdddff jmp 0x11fdde5e */
  goto L_11fdde5e;
L_11fdde01:;
  /* 11fdde01 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11fdde03 push 0x12009cbc */
  push32((uint32_t)(0x12009cbcu));
  /* 11fdde08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fdde0a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11fdde0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fdde0e call 0x11fdb5d0 */
  push32(0x11fdde13u); f_11fdb5d0();
  /* 11fdde13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdde16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fdde19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdde1d je 0x11fdde34 */
  if (C.zf) goto L_11fdde34;
  /* 11fdde1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdde22 push eax */
  push32((uint32_t)(EAX));
  /* 11fdde23 mov ecx, dword ptr [0x1200cf20] */
  ECX = (r32((uint32_t)(0x1200cf20)));
  /* 11fdde29 push ecx */
  push32((uint32_t)(ECX));
  /* 11fdde2a call dword ptr [0x120113e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113e8))), 0x11fdde30u);
  /* 11fdde30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fdde32 jne 0x11fdde38 */
  if (!C.zf) goto L_11fdde38;
L_11fdde34:;
  /* 11fdde34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fdde36 jmp 0x11fdde5e */
  goto L_11fdde5e;
L_11fdde38:;
  /* 11fdde38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdde3b push edx */
  push32((uint32_t)(EDX));
  /* 11fdde3c call 0x11fddea0 */
  push32(0x11fdde41u); f_11fddea0();
  /* 11fdde41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fdde44 call dword ptr [0x120113ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113ec))), 0x11fdde4au);
  /* 11fdde4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdde4d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fdde4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fdde52 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11fdde59 mov eax, 1 */
  EAX = (0x1u);
L_11fdde5e:;
  /* 11fdde5e mov esp, ebp */
  ESP = (EBP);
  /* 11fdde60 pop ebp */
  EBP = (pop32());
  /* 11fdde61 ret  */
  ESPCHK(0x11fddde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de70 @ 0x11fdde70 (41 bytes, 11 insns) */
void f_11fdde70(void) {
  FTRACE(0x11fdde70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fdde70 push ebp */
  push32((uint32_t)(EBP));
  /* 11fdde71 mov ebp, esp */
  EBP = (ESP);
  /* 11fdde73 call 0x11fdb020 */
  push32(0x11fdde78u); f_11fdb020();
  /* 11fdde78 cmp dword ptr [0x1200cf20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cf20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fdde7f je 0x11fdde97 */
  if (C.zf) goto L_11fdde97;
  /* 11fdde81 mov eax, dword ptr [0x1200cf20] */
  EAX = (r32((uint32_t)(0x1200cf20)));
  /* 11fdde86 push eax */
  push32((uint32_t)(EAX));
  /* 11fdde87 call dword ptr [0x120113e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113e0))), 0x11fdde8du);
  /* 11fdde8d mov dword ptr [0x1200cf20], 0xffffffff */
  w32((uint32_t)(0x1200cf20), (0xffffffffu));
L_11fdde97:;
  /* 11fdde97 pop ebp */
  EBP = (pop32());
  /* 11fdde98 ret  */
  ESPCHK(0x11fdde70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dea0 @ 0x11fddea0 (25 bytes, 8 insns) */
void f_11fddea0(void) {
  FTRACE(0x11fddea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddea1 mov ebp, esp */
  EBP = (ESP);
  /* 11fddea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddea6 mov dword ptr [eax + 0x50], 0x1200d240 */
  w32((uint32_t)(EAX + 0x50), (0x1200d240u));
  /* 11fddead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddeb0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11fddeb7 pop ebp */
  EBP = (pop32());
  /* 11fddeb8 ret  */
  ESPCHK(0x11fddea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dec0 @ 0x11fddec0 (152 bytes, 48 insns) */
void f_11fddec0(void) {
  FTRACE(0x11fddec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddec1 mov ebp, esp */
  EBP = (ESP);
  /* 11fddec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fddec6 call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fddeccu);
  /* 11fddecc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fddecf mov eax, dword ptr [0x1200cf20] */
  EAX = (r32((uint32_t)(0x1200cf20)));
  /* 11fdded4 push eax */
  push32((uint32_t)(EAX));
  /* 11fdded5 call dword ptr [0x120113e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113e4))), 0x11fddedbu);
  /* 11fddedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fddede cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddee2 jne 0x11fddf47 */
  if (!C.zf) goto L_11fddf47;
  /* 11fddee4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11fddee9 push 0x12009cbc */
  push32((uint32_t)(0x12009cbcu));
  /* 11fddeee push 2 */
  push32((uint32_t)(0x2u));
  /* 11fddef0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11fddef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fddef4 call 0x11fdb5d0 */
  push32(0x11fddef9u); f_11fdb5d0();
  /* 11fddef9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddefc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fddeff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddf03 je 0x11fddf3d */
  if (C.zf) goto L_11fddf3d;
  /* 11fddf05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddf08 push ecx */
  push32((uint32_t)(ECX));
  /* 11fddf09 mov edx, dword ptr [0x1200cf20] */
  EDX = (r32((uint32_t)(0x1200cf20)));
  /* 11fddf0f push edx */
  push32((uint32_t)(EDX));
  /* 11fddf10 call dword ptr [0x120113e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113e8))), 0x11fddf16u);
  /* 11fddf16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fddf18 je 0x11fddf3d */
  if (C.zf) goto L_11fddf3d;
  /* 11fddf1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddf1d push eax */
  push32((uint32_t)(EAX));
  /* 11fddf1e call 0x11fddea0 */
  push32(0x11fddf23u); f_11fddea0();
  /* 11fddf23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fddf26 call dword ptr [0x120113ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113ec))), 0x11fddf2cu);
  /* 11fddf2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddf2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fddf31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddf34 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11fddf3b jmp 0x11fddf47 */
  goto L_11fddf47;
L_11fddf3d:;
  /* 11fddf3d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11fddf3f call 0x11fd9c30 */
  push32(0x11fddf44u); f_11fd9c30();
  /* 11fddf44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fddf47:;
  /* 11fddf47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fddf4a push eax */
  push32((uint32_t)(EAX));
  /* 11fddf4b call dword ptr [0x120113dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113dc))), 0x11fddf51u);
  /* 11fddf51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fddf54 mov esp, ebp */
  ESP = (EBP);
  /* 11fddf56 pop ebp */
  EBP = (pop32());
  /* 11fddf57 ret  */
  ESPCHK(0x11fddec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df60 @ 0x11fddf60 (263 bytes, 86 insns) */
void f_11fddf60(void) {
  FTRACE(0x11fddf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fddf60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fddf61 mov ebp, esp */
  EBP = (ESP);
  /* 11fddf63 cmp dword ptr [0x1200cf20], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cf20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddf6a je 0x11fde065 */
  if (C.zf) goto L_11fde065;
  /* 11fddf70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddf74 jne 0x11fddf85 */
  if (!C.zf) goto L_11fddf85;
  /* 11fddf76 mov eax, dword ptr [0x1200cf20] */
  EAX = (r32((uint32_t)(0x1200cf20)));
  /* 11fddf7b push eax */
  push32((uint32_t)(EAX));
  /* 11fddf7c call dword ptr [0x120113e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113e4))), 0x11fddf82u);
  /* 11fddf82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fddf85:;
  /* 11fddf85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddf89 je 0x11fde056 */
  if (C.zf) goto L_11fde056;
  /* 11fddf8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddf92 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddf96 je 0x11fddfa9 */
  if (C.zf) goto L_11fddfa9;
  /* 11fddf98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fddf9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddf9d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11fddfa0 push eax */
  push32((uint32_t)(EAX));
  /* 11fddfa1 call 0x11fdbc50 */
  push32(0x11fddfa6u); f_11fdbc50();
  /* 11fddfa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fddfa9:;
  /* 11fddfa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddfac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddfb0 je 0x11fddfc3 */
  if (C.zf) goto L_11fddfc3;
  /* 11fddfb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fddfb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddfb7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11fddfba push eax */
  push32((uint32_t)(EAX));
  /* 11fddfbb call 0x11fdbc50 */
  push32(0x11fddfc0u); f_11fdbc50();
  /* 11fddfc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fddfc3:;
  /* 11fddfc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddfc6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddfca je 0x11fddfdd */
  if (C.zf) goto L_11fddfdd;
  /* 11fddfcc push 2 */
  push32((uint32_t)(0x2u));
  /* 11fddfce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddfd1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11fddfd4 push eax */
  push32((uint32_t)(EAX));
  /* 11fddfd5 call 0x11fdbc50 */
  push32(0x11fddfdau); f_11fdbc50();
  /* 11fddfda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fddfdd:;
  /* 11fddfdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddfe0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddfe4 je 0x11fddff7 */
  if (C.zf) goto L_11fddff7;
  /* 11fddfe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fddfe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddfeb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11fddfee push eax */
  push32((uint32_t)(EAX));
  /* 11fddfef call 0x11fdbc50 */
  push32(0x11fddff4u); f_11fdbc50();
  /* 11fddff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fddff7:;
  /* 11fddff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fddffa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fddffe je 0x11fde011 */
  if (C.zf) goto L_11fde011;
  /* 11fde000 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde002 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde005 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11fde008 push eax */
  push32((uint32_t)(EAX));
  /* 11fde009 call 0x11fdbc50 */
  push32(0x11fde00eu); f_11fdbc50();
  /* 11fde00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde011:;
  /* 11fde011 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde014 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde018 je 0x11fde02b */
  if (C.zf) goto L_11fde02b;
  /* 11fde01a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde01c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde01f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11fde022 push eax */
  push32((uint32_t)(EAX));
  /* 11fde023 call 0x11fdbc50 */
  push32(0x11fde028u); f_11fdbc50();
  /* 11fde028 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde02b:;
  /* 11fde02b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde02e cmp dword ptr [ecx + 0x50], 0x1200d240 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1200d240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde035 je 0x11fde048 */
  if (C.zf) goto L_11fde048;
  /* 11fde037 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde039 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde03c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11fde03f push eax */
  push32((uint32_t)(EAX));
  /* 11fde040 call 0x11fdbc50 */
  push32(0x11fde045u); f_11fdbc50();
  /* 11fde045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde048:;
  /* 11fde048 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fde04a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fde04d push ecx */
  push32((uint32_t)(ECX));
  /* 11fde04e call 0x11fdbc50 */
  push32(0x11fde053u); f_11fdbc50();
  /* 11fde053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fde056:;
  /* 11fde056 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fde058 mov edx, dword ptr [0x1200cf20] */
  EDX = (r32((uint32_t)(0x1200cf20)));
  /* 11fde05e push edx */
  push32((uint32_t)(EDX));
  /* 11fde05f call dword ptr [0x120113e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113e8))), 0x11fde065u);
L_11fde065:;
  /* 11fde065 pop ebp */
  EBP = (pop32());
  /* 11fde066 ret  */
  ESPCHK(0x11fddf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x11fde070 (11 bytes, 5 insns) */
void f_11fde070(void) {
  FTRACE(0x11fde070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde070 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde071 mov ebp, esp */
  EBP = (ESP);
  /* 11fde073 call dword ptr [0x120113ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113ec))), 0x11fde079u);
  /* 11fde079 pop ebp */
  EBP = (pop32());
  /* 11fde07a ret  */
  ESPCHK(0x11fde070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e080 @ 0x11fde080 (11 bytes, 5 insns) */
void f_11fde080(void) {
  FTRACE(0x11fde080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde080 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde081 mov ebp, esp */
  EBP = (ESP);
  /* 11fde083 call dword ptr [0x120113d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d0))), 0x11fde089u);
  /* 11fde089 pop ebp */
  EBP = (pop32());
  /* 11fde08a ret  */
  ESPCHK(0x11fde080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e090 @ 0x11fde090 (92 bytes, 29 insns) */
void f_11fde090(void) {
  FTRACE(0x11fde090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde090 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde091 mov ebp, esp */
  EBP = (ESP);
  /* 11fde093 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fde095 push 0x12009cc8 */
  push32((uint32_t)(0x12009cc8u));
  /* 11fde09a push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fde09f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fde0a5 push eax */
  push32((uint32_t)(EAX));
  /* 11fde0a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fde0ad sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde0b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fde0b1 push esi */
  push32((uint32_t)(ESI));
  /* 11fde0b2 push edi */
  push32((uint32_t)(EDI));
  /* 11fde0b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fde0b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fde0bd call 0x11fddec0 */
  push32(0x11fde0c2u); f_11fddec0();
  /* 11fde0c2 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde0c6 je 0x11fde0f0 */
  if (C.zf) goto L_11fde0f0;
  /* 11fde0c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fde0cf call 0x11fddec0 */
  push32(0x11fde0d4u); f_11fddec0();
  /* 11fde0d4 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11fde0d7u);
  /* 11fde0d7 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fde0de jmp 0x11fde0f0 */
  goto L_11fde0f0;
  /* 11fde0e0 mov eax, 1 */
  EAX = (0x1u);
  /* 11fde0e5 ret  */
  ESPCHK(0x11fde090u, _esp0);
  ESP += 4; return;
  /* 11fde0e6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fde0e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fde0f0:;
  /* 11fde0f0 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fde0f7 call 0x11fde0fe */
  push32(0x11fde0fcu); f_11fde0fe();
  /* 11fde0fc jmp 0x11fde104 */
  jmp_ind(0x11fde104u); return;
}

/* _abort @ 0x11fde0fe (5 bytes, 2 insns) */
void f_11fde0fe(void) {
  FTRACE(0x11fde0feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde0fe call 0x11fe40f0 */
  push32(0x11fde103u); f_11fe40f0();
  /* 11fde103 ret  */
  ESPCHK(0x11fde0feu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e120 @ 0x11fde120 (29 bytes, 10 insns) */
void f_11fde120(void) {
  FTRACE(0x11fde120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde120 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde121 mov ebp, esp */
  EBP = (ESP);
  /* 11fde123 call 0x11fddec0 */
  push32(0x11fde128u); f_11fddec0();
  /* 11fde128 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde12c je 0x11fde136 */
  if (C.zf) goto L_11fde136;
  /* 11fde12e call 0x11fddec0 */
  push32(0x11fde133u); f_11fddec0();
  /* 11fde133 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x11fde136u);
L_11fde136:;
  /* 11fde136 call 0x11fde090 */
  push32(0x11fde13bu); f_11fde090();
  /* 11fde13b pop ebp */
  EBP = (pop32());
  /* 11fde13c ret  */
  ESPCHK(0x11fde120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e140 @ 0x11fde140 (90 bytes, 27 insns) */
void f_11fde140(void) {
  FTRACE(0x11fde140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde140 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde141 mov ebp, esp */
  EBP = (ESP);
  /* 11fde143 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fde145 push 0x12009ce0 */
  push32((uint32_t)(0x12009ce0u));
  /* 11fde14a push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fde14f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fde155 push eax */
  push32((uint32_t)(EAX));
  /* 11fde156 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fde15d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fde160 push ebx */
  push32((uint32_t)(EBX));
  /* 11fde161 push esi */
  push32((uint32_t)(ESI));
  /* 11fde162 push edi */
  push32((uint32_t)(EDI));
  /* 11fde163 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fde166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fde16d cmp dword ptr [0x1200cf24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200cf24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde174 je 0x11fde19c */
  if (C.zf) goto L_11fde19c;
  /* 11fde176 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fde17d call dword ptr [0x1200cf24] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200cf24))), 0x11fde183u);
  /* 11fde183 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fde18a jmp 0x11fde19c */
  goto L_11fde19c;
  /* 11fde18c mov eax, 1 */
  EAX = (0x1u);
  /* 11fde191 ret  */
  ESPCHK(0x11fde140u, _esp0);
  ESP += 4; return;
  /* 11fde192 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fde195 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fde19c:;
  /* 11fde19c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fde1a3 call 0x11fde1aa */
  push32(0x11fde1a8u); f_11fde1aa();
  /* 11fde1a8 jmp 0x11fde1b0 */
  f_11fde1b0(); return;
}

/* FUN_1000e1aa @ 0x11fde1aa (6 bytes, 2 insns) */
void f_11fde1aa(void) {
  FTRACE(0x11fde1aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde1aa call 0x11fde090 */
  push32(0x11fde1afu); f_11fde090();
  /* 11fde1af ret  */
  ESPCHK(0x11fde1aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1b0 @ 0x11fde1b0 (17 bytes, 8 insns) */
void f_11fde1b0(void) {
  FTRACE(0x11fde1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde1b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fde1b3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fde1ba pop edi */
  EDI = (pop32());
  /* 11fde1bb pop esi */
  ESI = (pop32());
  /* 11fde1bc pop ebx */
  EBX = (pop32());
  /* 11fde1bd mov esp, ebp */
  ESP = (EBP);
  /* 11fde1bf pop ebp */
  EBP = (pop32());
  /* 11fde1c0 ret  */
  ESPCHK(0x11fde1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1d0 @ 0x11fde1d0 (56 bytes, 15 insns) */
void f_11fde1d0(void) {
  FTRACE(0x11fde1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fde1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fde1d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fde1d3 cmp dword ptr [0x1200cda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200cda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fde1da je 0x11fde1e2 */
  if (C.zf) goto L_11fde1e2;
  /* 11fde1dc call dword ptr [0x1200cda0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200cda0))), 0x11fde1e2u);
L_11fde1e2:;
  /* 11fde1e2 push 0x1200c630 */
  push32((uint32_t)(0x1200c630u));
  /* 11fde1e7 push 0x1200c318 */
  push32((uint32_t)(0x1200c318u));
  /* 11fde1ec call 0x11fde3a0 */
  push32(0x11fde1f1u); f_11fde3a0();
  /* 11fde1f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde1f4 push 0x1200c214 */
  push32((uint32_t)(0x1200c214u));
  /* 11fde1f9 push 0x1200c000 */
  push32((uint32_t)(0x1200c000u));
  /* 11fde1fe call 0x11fde3a0 */
  push32(0x11fde203u); f_11fde3a0();
  /* 11fde203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fde206 pop ebp */
  EBP = (pop32());
  /* 11fde207 ret  */
  ESPCHK(0x11fde1d0u, _esp0);
  ESP += 4; return;
}

