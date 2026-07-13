#include "recomp.h"

/* FUN_10009200 @ 0x11ef9200 (69 bytes, 29 insns) */
void f_11ef9200(void) {
  FTRACE(0x11ef9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9200 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9201 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9203 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9206 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9207 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9208 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9209 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef920a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef920d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef9212 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9217 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9219 pop ecx */
  ECX = (pop32());
  /* 11ef921a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef921d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef9221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9224 call 0x11ef123f */
  push32(0x11ef9229u); f_11ef123f();
  /* 11ef9229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef922b jle 0x11ef9231 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef9231;
  /* 11ef922d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef9231:;
  /* 11ef9231 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef9234 pop edi */
  EDI = (pop32());
  /* 11ef9235 pop esi */
  ESI = (pop32());
  /* 11ef9236 pop ebx */
  EBX = (pop32());
  /* 11ef9237 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef923a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef923c call 0x11ef9720 */
  push32(0x11ef9241u); f_11ef9720();
  /* 11ef9241 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9243 pop ebp */
  EBP = (pop32());
  /* 11ef9244 ret  */
  ESPCHK(0x11ef9200u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x11ef9260 (88 bytes, 35 insns) */
void f_11ef9260(void) {
  FTRACE(0x11ef9260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9260 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9261 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9263 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9266 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9267 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9268 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9269 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef926a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef926d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9272 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9277 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9279 pop ecx */
  ECX = (pop32());
  /* 11ef927a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef927d mov esi, esp */
  ESI = (ESP);
  /* 11ef927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9282 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9286 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9287 call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef928du);
  /* 11ef928d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9292 call 0x11ef9720 */
  push32(0x11ef9297u); f_11ef9720();
  /* 11ef9297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef929a call 0x11ef1299 */
  push32(0x11ef929fu); f_11ef1299();
  /* 11ef929f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef92a2 mov byte ptr [edx + 0x3c], al */
  w8((uint32_t)(EDX + 0x3c), (AL));
  /* 11ef92a5 pop edi */
  EDI = (pop32());
  /* 11ef92a6 pop esi */
  ESI = (pop32());
  /* 11ef92a7 pop ebx */
  EBX = (pop32());
  /* 11ef92a8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef92ab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef92ad call 0x11ef9720 */
  push32(0x11ef92b2u); f_11ef9720();
  /* 11ef92b2 mov esp, ebp */
  ESP = (EBP);
  /* 11ef92b4 pop ebp */
  EBP = (pop32());
  /* 11ef92b5 ret 4 */
  ESPCHK(0x11ef9260u, _esp0);
  ESP += 8; return;
}

/* FUN_100092d0 @ 0x11ef92d0 (110 bytes, 42 insns) */
void f_11ef92d0(void) {
  FTRACE(0x11ef92d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef92d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef92d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef92d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef92d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef92d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef92d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef92d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef92da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef92dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef92e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef92e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef92e9 pop ecx */
  ECX = (pop32());
  /* 11ef92ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef92ed mov esi, esp */
  ESI = (ESP);
  /* 11ef92ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef92f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ef92f3 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef92f9u);
  /* 11ef92f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef92fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef92fe call 0x11ef9720 */
  push32(0x11ef9303u); f_11ef9720();
  /* 11ef9303 mov esi, esp */
  ESI = (ESP);
  /* 11ef9305 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9308 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef930c push edx */
  push32((uint32_t)(EDX));
  /* 11ef930d call dword ptr [0x11f334b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334b8))), 0x11ef9313u);
  /* 11ef9313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9316 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9318 call 0x11ef9720 */
  push32(0x11ef931du); f_11ef9720();
  /* 11ef931d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9320 call 0x11ef1299 */
  push32(0x11ef9325u); f_11ef1299();
  /* 11ef9325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9328 mov byte ptr [ecx + 0x3c], al */
  w8((uint32_t)(ECX + 0x3c), (AL));
  /* 11ef932b pop edi */
  EDI = (pop32());
  /* 11ef932c pop esi */
  ESI = (pop32());
  /* 11ef932d pop ebx */
  EBX = (pop32());
  /* 11ef932e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9331 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9333 call 0x11ef9720 */
  push32(0x11ef9338u); f_11ef9720();
  /* 11ef9338 mov esp, ebp */
  ESP = (EBP);
  /* 11ef933a pop ebp */
  EBP = (pop32());
  /* 11ef933b ret 4 */
  ESPCHK(0x11ef92d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009360 @ 0x11ef9360 (113 bytes, 44 insns) */
void f_11ef9360(void) {
  FTRACE(0x11ef9360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9360 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9361 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9363 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9366 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9367 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9368 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9369 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef936a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef936d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef9372 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9377 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9379 pop ecx */
  ECX = (pop32());
  /* 11ef937a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef937d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef9381 mov esi, esp */
  ESI = (ESP);
  /* 11ef9383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9386 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9387 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef938du);
  /* 11ef938d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9392 call 0x11ef9720 */
  push32(0x11ef9397u); f_11ef9720();
  /* 11ef9397 mov esi, eax */
  ESI = (EAX);
  /* 11ef9399 mov edi, esp */
  EDI = (ESP);
  /* 11ef939b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef939e push ecx */
  push32((uint32_t)(ECX));
  /* 11ef939f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef93a2 push edx */
  push32((uint32_t)(EDX));
  /* 11ef93a3 call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef93a9u);
  /* 11ef93a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef93ac cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef93ae call 0x11ef9720 */
  push32(0x11ef93b3u); f_11ef9720();
  /* 11ef93b3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef93b5 jne 0x11ef93bb */
  if (!C.zf) goto L_11ef93bb;
  /* 11ef93b7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef93bb:;
  /* 11ef93bb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef93be pop edi */
  EDI = (pop32());
  /* 11ef93bf pop esi */
  ESI = (pop32());
  /* 11ef93c0 pop ebx */
  EBX = (pop32());
  /* 11ef93c1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef93c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef93c6 call 0x11ef9720 */
  push32(0x11ef93cbu); f_11ef9720();
  /* 11ef93cb mov esp, ebp */
  ESP = (EBP);
  /* 11ef93cd pop ebp */
  EBP = (pop32());
  /* 11ef93ce ret 4 */
  ESPCHK(0x11ef9360u, _esp0);
  ESP += 8; return;
}

/* FUN_100093f0 @ 0x11ef93f0 (47 bytes, 22 insns) */
void f_11ef93f0(void) {
  FTRACE(0x11ef93f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef93f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef93f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef93f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef93f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef93f7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef93f8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef93f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef93fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef93fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9409 pop ecx */
  ECX = (pop32());
  /* 11ef940a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef940d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9410 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ef9413 mov byte ptr [eax + 0x3c], cl */
  w8((uint32_t)(EAX + 0x3c), (CL));
  /* 11ef9416 pop edi */
  EDI = (pop32());
  /* 11ef9417 pop esi */
  ESI = (pop32());
  /* 11ef9418 pop ebx */
  EBX = (pop32());
  /* 11ef9419 mov esp, ebp */
  ESP = (EBP);
  /* 11ef941b pop ebp */
  EBP = (pop32());
  /* 11ef941c ret 4 */
  ESPCHK(0x11ef93f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009430 @ 0x11ef9430 (47 bytes, 22 insns) */
void f_11ef9430(void) {
  FTRACE(0x11ef9430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9430 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9431 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9433 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9436 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9437 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9438 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9439 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef943a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef943d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9442 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9447 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9449 pop ecx */
  ECX = (pop32());
  /* 11ef944a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef944d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9453 mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11ef9456 pop edi */
  EDI = (pop32());
  /* 11ef9457 pop esi */
  ESI = (pop32());
  /* 11ef9458 pop ebx */
  EBX = (pop32());
  /* 11ef9459 mov esp, ebp */
  ESP = (EBP);
  /* 11ef945b pop ebp */
  EBP = (pop32());
  /* 11ef945c ret 4 */
  ESPCHK(0x11ef9430u, _esp0);
  ESP += 8; return;
}

/* FUN_10009470 @ 0x11ef9470 (127 bytes, 48 insns) */
void f_11ef9470(void) {
  FTRACE(0x11ef9470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9470 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9471 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9473 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9476 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9477 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9478 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9479 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef947a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef947d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9482 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9487 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9489 pop ecx */
  ECX = (pop32());
  /* 11ef948a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef948d mov esi, esp */
  ESI = (ESP);
  /* 11ef948f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9492 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9493 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef9499u);
  /* 11ef9499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef949c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef949e call 0x11ef9720 */
  push32(0x11ef94a3u); f_11ef9720();
  /* 11ef94a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef94a5 jle 0x11ef94dc */
  if ((C.zf||C.sf!=C.of)) goto L_11ef94dc;
  /* 11ef94a7 mov esi, esp */
  ESI = (ESP);
  /* 11ef94a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef94ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef94ae call 0x11ef11f9 */
  push32(0x11ef94b3u); f_11ef11f9();
  /* 11ef94b3 push eax */
  push32((uint32_t)(EAX));
  /* 11ef94b4 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef94bau);
  /* 11ef94ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef94bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef94bf call 0x11ef9720 */
  push32(0x11ef94c4u); f_11ef9720();
  /* 11ef94c4 mov esi, esp */
  ESI = (ESP);
  /* 11ef94c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef94c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef94ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef94cc call dword ptr [0x11f334b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334b4))), 0x11ef94d2u);
  /* 11ef94d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef94d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef94d7 call 0x11ef9720 */
  push32(0x11ef94dcu); f_11ef9720();
L_11ef94dc:;
  /* 11ef94dc pop edi */
  EDI = (pop32());
  /* 11ef94dd pop esi */
  ESI = (pop32());
  /* 11ef94de pop ebx */
  EBX = (pop32());
  /* 11ef94df add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef94e2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef94e4 call 0x11ef9720 */
  push32(0x11ef94e9u); f_11ef9720();
  /* 11ef94e9 mov esp, ebp */
  ESP = (EBP);
  /* 11ef94eb pop ebp */
  EBP = (pop32());
  /* 11ef94ec ret 4 */
  ESPCHK(0x11ef9470u, _esp0);
  ESP += 8; return;
}

/* FUN_10009510 @ 0x11ef9510 (70 bytes, 30 insns) */
void f_11ef9510(void) {
  FTRACE(0x11ef9510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9510 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9511 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9513 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9516 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9517 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9518 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9519 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef951a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef951d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9522 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9527 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9529 pop ecx */
  ECX = (pop32());
  /* 11ef952a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef952d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9530 cmp dword ptr [eax + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9534 je 0x11ef9545 */
  if (C.zf) goto L_11ef9545;
  /* 11ef9536 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9539 mov edx, dword ptr [ecx + 0x3d] */
  EDX = (r32((uint32_t)(ECX + 0x3d)));
  /* 11ef953c push edx */
  push32((uint32_t)(EDX));
  /* 11ef953d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9540 call 0x11ef1055 */
  push32(0x11ef9545u); f_11ef1055();
L_11ef9545:;
  /* 11ef9545 pop edi */
  EDI = (pop32());
  /* 11ef9546 pop esi */
  ESI = (pop32());
  /* 11ef9547 pop ebx */
  EBX = (pop32());
  /* 11ef9548 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef954b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef954d call 0x11ef9720 */
  push32(0x11ef9552u); f_11ef9720();
  /* 11ef9552 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9554 pop ebp */
  EBP = (pop32());
  /* 11ef9555 ret  */
  ESPCHK(0x11ef9510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x11ef9570 (73 bytes, 30 insns) */
void f_11ef9570(void) {
  FTRACE(0x11ef9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9570 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9571 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9573 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9576 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9577 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9578 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9579 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef957a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef957d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9582 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9587 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9589 pop ecx */
  ECX = (pop32());
  /* 11ef958a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef958d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9590 call 0x11ef11f9 */
  push32(0x11ef9595u); f_11ef11f9();
  /* 11ef9595 mov esi, esp */
  ESI = (ESP);
  /* 11ef9597 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9598 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef959eu);
  /* 11ef959e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef95a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef95a3 call 0x11ef9720 */
  push32(0x11ef95a8u); f_11ef9720();
  /* 11ef95a8 pop edi */
  EDI = (pop32());
  /* 11ef95a9 pop esi */
  ESI = (pop32());
  /* 11ef95aa pop ebx */
  EBX = (pop32());
  /* 11ef95ab add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef95ae cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef95b0 call 0x11ef9720 */
  push32(0x11ef95b5u); f_11ef9720();
  /* 11ef95b5 mov esp, ebp */
  ESP = (EBP);
  /* 11ef95b7 pop ebp */
  EBP = (pop32());
  /* 11ef95b8 ret  */
  ESPCHK(0x11ef9570u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11ef9720 (56 bytes, 28 insns) */
void f_11ef9720(void) {
  FTRACE(0x11ef9720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9720 jne 0x11ef9723 */
  if (!C.zf) goto L_11ef9723;
  /* 11ef9722 ret  */
  ESPCHK(0x11ef9720u, _esp0);
  ESP += 4; return;
L_11ef9723:;
  /* 11ef9723 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9724 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9726 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9729 push eax */
  push32((uint32_t)(EAX));
  /* 11ef972a push edx */
  push32((uint32_t)(EDX));
  /* 11ef972b push ebx */
  push32((uint32_t)(EBX));
  /* 11ef972c push esi */
  push32((uint32_t)(ESI));
  /* 11ef972d push edi */
  push32((uint32_t)(EDI));
  /* 11ef972e push 0x11f2a364 */
  push32((uint32_t)(0x11f2a364u));
  /* 11ef9733 push 0x11f2a360 */
  push32((uint32_t)(0x11f2a360u));
  /* 11ef9738 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11ef973a push 0x11f2a350 */
  push32((uint32_t)(0x11f2a350u));
  /* 11ef973f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef9741 call 0x11efa680 */
  push32(0x11ef9746u); f_11efa680();
  /* 11ef9746 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9749 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef974c jne 0x11ef974f */
  if (!C.zf) goto L_11ef974f;
  /* 11ef974e int3  */
  x86_unimpl("int3 @ 0x11ef974e");
L_11ef974f:;
  /* 11ef974f pop edi */
  EDI = (pop32());
  /* 11ef9750 pop esi */
  ESI = (pop32());
  /* 11ef9751 pop ebx */
  EBX = (pop32());
  /* 11ef9752 pop edx */
  EDX = (pop32());
  /* 11ef9753 pop eax */
  EAX = (pop32());
  /* 11ef9754 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9756 pop ebp */
  EBP = (pop32());
  /* 11ef9757 ret  */
  ESPCHK(0x11ef9720u, _esp0);
  ESP += 4; return;
}

/* FUN_10009760 @ 0x11ef9760 (20 bytes, 6 insns) */
void f_11ef9760(void) {
  FTRACE(0x11ef9760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9760 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9763 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11ef9766 call 0x11efaf78 */
  push32(0x11ef976bu); f_11efaf78();
  /* 11ef976b call 0x11ef977d */
  push32(0x11ef9770u); f_11ef977d();
  /* 11ef9770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9773 ret  */
  ESPCHK(0x11ef9760u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x11ef9774 (9 bytes, 2 insns) */
void f_11ef9774(void) {
  FTRACE(0x11ef9774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9774 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11ef9778 call 0x11efaf35 */
  push32(0x11ef977du); f_11efaf35();
}

/* FUN_1000977d @ 0x11ef977d (145 bytes, 43 insns) */
void f_11ef977d(void) {
  FTRACE(0x11ef977du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef977d push edx */
  push32((uint32_t)(EDX));
  /* 11ef977e wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef977f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11ef9782 je 0x11ef97d4 */
  if (C.zf) goto L_11ef97d4;
  /* 11ef9784 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ef978a je 0x11ef9792 */
  if (C.zf) goto L_11ef9792;
  /* 11ef978c fldcw word ptr [0x11f2a6c8] */
  C.fcw = r16((uint32_t)(0x11f2a6c8));
L_11ef9792:;
  /* 11ef9792 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11ef9794 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef9795 fnstsw ax */
  AX = fpu_status();
  /* 11ef9797 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ef9798 jp 0x11ef97b7 */
  if (C.pf) goto L_11ef97b7;
L_11ef979a:;
  /* 11ef979a cmp dword ptr [0x11f306c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef97a1 jne 0x11efaf8e */
  if (!C.zf) { jmp_ind(0x11efaf8eu); return; }
  /* 11ef97a7 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11ef97ac lea ecx, [0x11f2dde0] */
  ECX = ((uint32_t)(0x11f2dde0));
  /* 11ef97b2 jmp 0x11efaf9b */
  f_11efaf9b(); return;
L_11ef97b7:;
  /* 11ef97b7 fld xword ptr [0x11f2a6ca] */
  fpu_push(rf80((uint32_t)(0x11f2a6ca)));
  /* 11ef97bd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11ef97bf:;
  /* 11ef97bf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11ef97c1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef97c2 fnstsw ax */
  AX = fpu_status();
  /* 11ef97c4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ef97c5 jp 0x11ef97bf */
  if (C.pf) goto L_11ef97bf;
  /* 11ef97c7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ef97c9 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11ef97cb jmp 0x11ef979a */
  goto L_11ef979a;
L_11ef97cd:;
  /* 11ef97cd call 0x11efaf1c */
  push32(0x11ef97d2u); f_11efaf1c();
  /* 11ef97d2 jmp 0x11ef97ef */
  goto L_11ef97ef;
L_11ef97d4:;
  /* 11ef97d4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11ef97d9 jne 0x11ef97cd */
  if (!C.zf) goto L_11ef97cd;
  /* 11ef97db cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef97e0 jne 0x11ef97cd */
  if (!C.zf) goto L_11ef97cd;
  /* 11ef97e2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ef97e4 fld xword ptr [0x11f2de60] */
  fpu_push(rf80((uint32_t)(0x11f2de60)));
  /* 11ef97ea mov eax, 1 */
  EAX = (0x1u);
L_11ef97ef:;
  /* 11ef97ef cmp dword ptr [0x11f306c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef97f6 jne 0x11efaf8e */
  if (!C.zf) { jmp_ind(0x11efaf8eu); return; }
  /* 11ef97fc mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11ef9801 lea ecx, [0x11f2dde0] */
  ECX = ((uint32_t)(0x11f2dde0));
  /* 11ef9807 call 0x11efb097 */
  push32(0x11ef980cu); f_11efb097();
  /* 11ef980c pop edx */
  EDX = (pop32());
  /* 11ef980d ret  */
  ESPCHK(0x11ef977du, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x11ef9810 (20 bytes, 6 insns) */
void f_11ef9810(void) {
  FTRACE(0x11ef9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9810 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9813 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11ef9816 call 0x11efaf78 */
  push32(0x11ef981bu); f_11efaf78();
  /* 11ef981b call 0x11ef982d */
  push32(0x11ef9820u); f_11ef982d();
  /* 11ef9820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9823 ret  */
  ESPCHK(0x11ef9810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009824 @ 0x11ef9824 (9 bytes, 2 insns) */
void f_11ef9824(void) {
  FTRACE(0x11ef9824u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9824 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11ef9828 call 0x11efaf35 */
  push32(0x11ef982du); f_11efaf35();
}

/* FUN_1000982d @ 0x11ef982d (145 bytes, 43 insns) */
void f_11ef982d(void) {
  FTRACE(0x11ef982du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef982d push edx */
  push32((uint32_t)(EDX));
  /* 11ef982e wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef982f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11ef9832 je 0x11ef9884 */
  if (C.zf) goto L_11ef9884;
  /* 11ef9834 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ef983a je 0x11ef9842 */
  if (C.zf) goto L_11ef9842;
  /* 11ef983c fldcw word ptr [0x11f2a6c8] */
  C.fcw = r16((uint32_t)(0x11f2a6c8));
L_11ef9842:;
  /* 11ef9842 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11ef9844 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef9845 fnstsw ax */
  AX = fpu_status();
  /* 11ef9847 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ef9848 jp 0x11ef9867 */
  if (C.pf) goto L_11ef9867;
L_11ef984a:;
  /* 11ef984a cmp dword ptr [0x11f306c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9851 jne 0x11efaf8e */
  if (!C.zf) { jmp_ind(0x11efaf8eu); return; }
  /* 11ef9857 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11ef985c lea ecx, [0x11f2ddf0] */
  ECX = ((uint32_t)(0x11f2ddf0));
  /* 11ef9862 jmp 0x11efaf9b */
  f_11efaf9b(); return;
L_11ef9867:;
  /* 11ef9867 fld xword ptr [0x11f2a6ca] */
  fpu_push(rf80((uint32_t)(0x11f2a6ca)));
  /* 11ef986d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11ef986f:;
  /* 11ef986f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11ef9871 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef9872 fnstsw ax */
  AX = fpu_status();
  /* 11ef9874 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ef9875 jp 0x11ef986f */
  if (C.pf) goto L_11ef986f;
  /* 11ef9877 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ef9879 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11ef987b jmp 0x11ef984a */
  goto L_11ef984a;
L_11ef987d:;
  /* 11ef987d call 0x11efaf1c */
  push32(0x11ef9882u); f_11efaf1c();
  /* 11ef9882 jmp 0x11ef989f */
  goto L_11ef989f;
L_11ef9884:;
  /* 11ef9884 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11ef9889 jne 0x11ef987d */
  if (!C.zf) goto L_11ef987d;
  /* 11ef988b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9890 jne 0x11ef987d */
  if (!C.zf) goto L_11ef987d;
  /* 11ef9892 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ef9894 fld xword ptr [0x11f2de60] */
  fpu_push(rf80((uint32_t)(0x11f2de60)));
  /* 11ef989a mov eax, 1 */
  EAX = (0x1u);
L_11ef989f:;
  /* 11ef989f cmp dword ptr [0x11f306c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef98a6 jne 0x11efaf8e */
  if (!C.zf) { jmp_ind(0x11efaf8eu); return; }
  /* 11ef98ac mov edx, 0x12 */
  EDX = (0x12u);
  /* 11ef98b1 lea ecx, [0x11f2ddf0] */
  ECX = ((uint32_t)(0x11f2ddf0));
  /* 11ef98b7 call 0x11efb097 */
  push32(0x11ef98bcu); f_11efb097();
  /* 11ef98bc pop edx */
  EDX = (pop32());
  /* 11ef98bd ret  */
  ESPCHK(0x11ef982du, _esp0);
  ESP += 4; return;
}

/* FUN_100098c0 @ 0x11ef98c0 (20 bytes, 6 insns) */
void f_11ef98c0(void) {
  FTRACE(0x11ef98c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef98c0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef98c3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11ef98c6 call 0x11efaf78 */
  push32(0x11ef98cbu); f_11efaf78();
  /* 11ef98cb call 0x11ef98dd */
  push32(0x11ef98d0u); f_11ef98dd();
  /* 11ef98d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef98d3 ret  */
  ESPCHK(0x11ef98c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d4 @ 0x11ef98d4 (9 bytes, 2 insns) */
void f_11ef98d4(void) {
  FTRACE(0x11ef98d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef98d4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11ef98d8 call 0x11efaf35 */
  push32(0x11ef98ddu); f_11efaf35();
}

/* FUN_100098dd @ 0x11ef98dd (138 bytes, 40 insns) */
void f_11ef98dd(void) {
  FTRACE(0x11ef98ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef98dd push edx */
  push32((uint32_t)(EDX));
  /* 11ef98de wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef98df fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11ef98e2 je 0x11ef991a */
  if (C.zf) goto L_11ef991a;
  /* 11ef98e4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ef98ea je 0x11ef98f2 */
  if (C.zf) goto L_11ef98f2;
  /* 11ef98ec fldcw word ptr [0x11f2a6c8] */
  C.fcw = r16((uint32_t)(0x11f2a6c8));
L_11ef98f2:;
  /* 11ef98f2 fld1  */
  fpu_push(1.0);
  /* 11ef98f4 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11ef98f6:;
  /* 11ef98f6 cmp dword ptr [0x11f306c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef98fd jne 0x11efaf8e */
  if (!C.zf) { jmp_ind(0x11efaf8eu); return; }
  /* 11ef9903 mov edx, 0xf */
  EDX = (0xfu);
  /* 11ef9908 lea ecx, [0x11f2de00] */
  ECX = ((uint32_t)(0x11f2de00));
  /* 11ef990e jmp 0x11efaf9b */
  f_11efaf9b(); return;
L_11ef9913:;
  /* 11ef9913 call 0x11efaf1c */
  push32(0x11ef9918u); f_11efaf1c();
  /* 11ef9918 jmp 0x11ef9940 */
  goto L_11ef9940;
L_11ef991a:;
  /* 11ef991a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11ef991f jne 0x11ef9913 */
  if (!C.zf) goto L_11ef9913;
  /* 11ef9921 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9926 jne 0x11ef9913 */
  if (!C.zf) goto L_11ef9913;
  /* 11ef9928 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ef992a fld xword ptr [0x11f2de6a] */
  fpu_push(rf80((uint32_t)(0x11f2de6a)));
  /* 11ef9930 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11ef9935 je 0x11ef98f6 */
  if (C.zf) goto L_11ef98f6;
  /* 11ef9937 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ef9939 jmp 0x11ef98f6 */
  goto L_11ef98f6;
  /* 11ef993b mov eax, 1 */
  EAX = (0x1u);
L_11ef9940:;
  /* 11ef9940 cmp dword ptr [0x11f306c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9947 jne 0x11efaf8e */
  if (!C.zf) { jmp_ind(0x11efaf8eu); return; }
  /* 11ef994d mov edx, 0xf */
  EDX = (0xfu);
  /* 11ef9952 lea ecx, [0x11f2de00] */
  ECX = ((uint32_t)(0x11f2de00));
  /* 11ef9958 call 0x11efb097 */
  push32(0x11ef995du); f_11efb097();
  /* 11ef995d pop edx */
  EDX = (pop32());
  /* 11ef995e ret  */
  ESPCHK(0x11ef98ddu, _esp0);
  ESP += 4; return;
  /* 11ef995f int3  */
  x86_unimpl("int3 @ 0x11ef995f");
  /* 11ef9960 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9961 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9963 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9964 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9965 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_10009960 @ 0x11ef9960 (33 bytes, 15 insns) */
void f_11ef9960(void) {
  FTRACE(0x11ef9960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9960 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9961 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9963 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9964 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9965 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9966 call 0x11ef99a0 */
  push32(0x11ef996bu); f_11ef99a0();
  /* 11ef996b call 0x11efb160 */
  push32(0x11ef9970u); f_11efb160();
  /* 11ef9970 mov dword ptr [0x11f306c4], eax */
  w32((uint32_t)(0x11f306c4), (EAX));
  /* 11ef9975 call 0x11efb0e0 */
  push32(0x11ef997au); f_11efb0e0();
  /* 11ef997a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11ef997c pop edi */
  EDI = (pop32());
  /* 11ef997d pop esi */
  ESI = (pop32());
  /* 11ef997e pop ebx */
  EBX = (pop32());
  /* 11ef997f pop ebp */
  EBP = (pop32());
  /* 11ef9980 ret  */
  ESPCHK(0x11ef9960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009990 @ 0x11ef9990 (5 bytes, 4 insns) */
void f_11ef9990(void) {
  FTRACE(0x11ef9990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9990 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9991 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9993 pop ebp */
  EBP = (pop32());
  /* 11ef9994 ret  */
  ESPCHK(0x11ef9990u, _esp0);
  ESP += 4; return;
}

/* FUN_100099a0 @ 0x11ef99a0 (65 bytes, 10 insns) */
void f_11ef99a0(void) {
  FTRACE(0x11ef99a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef99a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef99a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef99a3 mov dword ptr [0x11f2de90], 0x11efb850 */
  w32((uint32_t)(0x11f2de90), (0x11efb850u));
  /* 11ef99ad mov dword ptr [0x11f2de94], 0x11efb260 */
  w32((uint32_t)(0x11f2de94), (0x11efb260u));
  /* 11ef99b7 mov dword ptr [0x11f2de98], 0x11efb370 */
  w32((uint32_t)(0x11f2de98), (0x11efb370u));
  /* 11ef99c1 mov dword ptr [0x11f2de9c], 0x11efb1b0 */
  w32((uint32_t)(0x11f2de9c), (0x11efb1b0u));
  /* 11ef99cb mov dword ptr [0x11f2dea0], 0x11efb340 */
  w32((uint32_t)(0x11f2dea0), (0x11efb340u));
  /* 11ef99d5 mov dword ptr [0x11f2dea4], 0x11efb850 */
  w32((uint32_t)(0x11f2dea4), (0x11efb850u));
  /* 11ef99df pop ebp */
  EBP = (pop32());
  /* 11ef99e0 ret  */
  ESPCHK(0x11ef99a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x11ef99f0 (28 bytes, 11 insns) */
void f_11ef99f0(void) {
  FTRACE(0x11ef99f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef99f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef99f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef99f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef99f4 mov eax, dword ptr [0x11f306c0] */
  EAX = (r32((uint32_t)(0x11f306c0)));
  /* 11ef99f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ef99fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef99ff mov dword ptr [0x11f306c0], ecx */
  w32((uint32_t)(0x11f306c0), (ECX));
  /* 11ef9a05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9a08 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9a0a pop ebp */
  EBP = (pop32());
  /* 11ef9a0b ret  */
  ESPCHK(0x11ef99f0u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11ef9a0c (39 bytes, 16 insns) */
void f_11ef9a0c(void) {
  FTRACE(0x11ef9a0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9a0c push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9a0d mov ebp, esp */
  EBP = (ESP);
  /* 11ef9a0f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9a12 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef9a13 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11ef9a16 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ef9a17 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11ef9a1b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11ef9a1e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ef9a22 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11ef9a25 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11ef9a28 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11ef9a2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef9a2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef9a31 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ef9a32 ret  */
  ESPCHK(0x11ef9a0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a40 @ 0x11ef9a40 (161 bytes, 60 insns) */
void f_11ef9a40(void) {
  FTRACE(0x11ef9a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9a41 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9a44 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9a45 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9a46 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9a47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9a4b jne 0x11ef9a52 */
  if (!C.zf) goto L_11ef9a52;
  /* 11ef9a4d jmp 0x11ef9ada */
  goto L_11ef9ada;
L_11ef9a52:;
  /* 11ef9a52 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ef9a54 call 0x11efb9c0 */
  push32(0x11ef9a59u); f_11efb9c0();
  /* 11ef9a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9a5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9a5f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9a62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ef9a65:;
  /* 11ef9a65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9a68 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ef9a6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef9a71 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9a74 je 0x11ef9ab7 */
  if (C.zf) goto L_11ef9ab7;
  /* 11ef9a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9a79 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9a7d je 0x11ef9ab7 */
  if (C.zf) goto L_11ef9ab7;
  /* 11ef9a7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9a82 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ef9a85 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef9a8b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9a8e je 0x11ef9ab7 */
  if (C.zf) goto L_11ef9ab7;
  /* 11ef9a90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9a93 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9a97 je 0x11ef9ab7 */
  if (C.zf) goto L_11ef9ab7;
  /* 11ef9a99 push 0x11f2a44c */
  push32((uint32_t)(0x11f2a44cu));
  /* 11ef9a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9aa0 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11ef9aa2 push 0x11f2a440 */
  push32((uint32_t)(0x11f2a440u));
  /* 11ef9aa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef9aa9 call 0x11efa680 */
  push32(0x11ef9aaeu); f_11efa680();
  /* 11ef9aae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9ab1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9ab4 jne 0x11ef9ab7 */
  if (!C.zf) goto L_11ef9ab7;
  /* 11ef9ab6 int3  */
  x86_unimpl("int3 @ 0x11ef9ab6");
L_11ef9ab7:;
  /* 11ef9ab7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef9ab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef9abb jne 0x11ef9a65 */
  if (!C.zf) goto L_11ef9a65;
  /* 11ef9abd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9ac0 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ef9ac3 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9ac8 call 0x11efc550 */
  push32(0x11ef9acdu); f_11efc550();
  /* 11ef9acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9ad0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ef9ad2 call 0x11efba60 */
  push32(0x11ef9ad7u); f_11efba60();
  /* 11ef9ad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ef9ada:;
  /* 11ef9ada pop edi */
  EDI = (pop32());
  /* 11ef9adb pop esi */
  ESI = (pop32());
  /* 11ef9adc pop ebx */
  EBX = (pop32());
  /* 11ef9add mov esp, ebp */
  ESP = (EBP);
  /* 11ef9adf pop ebp */
  EBP = (pop32());
  /* 11ef9ae0 ret  */
  ESPCHK(0x11ef9a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x11ef9af0 (19 bytes, 9 insns) */
void f_11ef9af0(void) {
  FTRACE(0x11ef9af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9af1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef9af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9af8 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9af9 call 0x11efbaf0 */
  push32(0x11ef9afeu); f_11efbaf0();
  /* 11ef9afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9b01 pop ebp */
  EBP = (pop32());
  /* 11ef9b02 ret  */
  ESPCHK(0x11ef9af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x11ef9b10 (45 bytes, 17 insns) */
void f_11ef9b10(void) {
  FTRACE(0x11ef9b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9b11 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9b14 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9b15 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9b16 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9b17 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9b1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9b1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ef9b20 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11ef9b27 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11ef9b29 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11ef9b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9b32 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9b35 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11ef9b38 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9b3b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x11ef9b50 (7 bytes, 4 insns) */
void f_11ef9b50(void) {
  FTRACE(0x11ef9b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9b50 pop eax */
  EAX = (pop32());
  /* 11ef9b51 pop ecx */
  ECX = (pop32());
  /* 11ef9b52 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11ef9b55 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009b60 @ 0x11ef9b60 (7 bytes, 4 insns) */
void f_11ef9b60(void) {
  FTRACE(0x11ef9b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9b60 pop eax */
  EAX = (pop32());
  /* 11ef9b61 pop ecx */
  ECX = (pop32());
  /* 11ef9b62 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11ef9b65 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009b70 @ 0x11ef9b70 (7 bytes, 4 insns) */
void f_11ef9b70(void) {
  FTRACE(0x11ef9b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9b70 pop eax */
  EAX = (pop32());
  /* 11ef9b71 pop ecx */
  ECX = (pop32());
  /* 11ef9b72 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11ef9b75 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009b80 @ 0x11ef9b80 (86 bytes, 32 insns) */
void f_11ef9b80(void) {
  FTRACE(0x11ef9b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9b81 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9b86 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9b87 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9b88 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9b89 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ef9b8f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef9b92 mov dword ptr [ebp - 4], 0x11ef9bac */
  w32((uint32_t)(EBP + -0x4), (0x11ef9bacu));
  /* 11ef9b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9b9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9b9e push eax */
  push32((uint32_t)(EAX));
  /* 11ef9b9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9ba6 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9ba7 call 0x11f1107c */
  push32(0x11ef9bacu); f_11f1107c();
  /* 11ef9bac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9baf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef9bb2 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef9bb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9bb8 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ef9bbb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ef9bc1 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef9bc4 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11ef9bc6 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11ef9bcd pop edi */
  EDI = (pop32());
  /* 11ef9bce pop esi */
  ESI = (pop32());
  /* 11ef9bcf pop ebx */
  EBX = (pop32());
  /* 11ef9bd0 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9bd2 pop ebp */
  EBP = (pop32());
  /* 11ef9bd3 ret 8 */
  ESPCHK(0x11ef9b80u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x11ef9be0 (60 bytes, 31 insns) */
void f_11ef9be0(void) {
  FTRACE(0x11ef9be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9be1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9be6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9be7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9be8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9be9 cld  */
  C.df=0;
  /* 11ef9bea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef9bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9bf3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef9bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9bf7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef9bfa push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9bfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef9bfe push edx */
  push32((uint32_t)(EDX));
  /* 11ef9bff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9c02 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9c03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9c06 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9c07 call 0x11efda30 */
  push32(0x11ef9c0cu); f_11efda30();
  /* 11ef9c0c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9c0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ef9c12 pop edi */
  EDI = (pop32());
  /* 11ef9c13 pop esi */
  ESI = (pop32());
  /* 11ef9c14 pop ebx */
  EBX = (pop32());
  /* 11ef9c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9c18 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9c1a pop ebp */
  EBP = (pop32());
  /* 11ef9c1b ret  */
  ESPCHK(0x11ef9be0u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x11ef9c20 (38 bytes, 16 insns) */
void f_11ef9c20(void) {
  FTRACE(0x11ef9c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9c21 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9c23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9c26 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef9c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9c2d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11ef9c30 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9c33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9c36 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ef9c39 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9c3a call 0x11efdfa0 */
  push32(0x11ef9c3fu); f_11efdfa0();
  /* 11ef9c3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9c42 pop ebp */
  EBP = (pop32());
  /* 11ef9c43 ret 4 */
  ESPCHK(0x11ef9c20u, _esp0);
  ESP += 8; return;
}

/* FUN_10009c50 @ 0x11ef9c50 (104 bytes, 36 insns) */
void f_11ef9c50(void) {
  FTRACE(0x11ef9c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9c51 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9c53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9c56 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9c57 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9c58 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9c59 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ef9c60 mov dword ptr [ebp - 0x10], 0x11ef9cc0 */
  w32((uint32_t)(EBP + -0x10), (0x11ef9cc0u));
  /* 11ef9c67 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9c6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ef9c6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9c70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ef9c73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef9c76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9c79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ef9c7c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ef9c82 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ef9c85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ef9c8b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11ef9c91 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ef9c94 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9c95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9c99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef9c9c push edx */
  push32((uint32_t)(EDX));
  /* 11ef9c9d call 0x11efe690 */
  push32(0x11ef9ca2u); f_11efe690();
  /* 11ef9ca2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ef9ca5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ef9ca8 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11ef9cae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ef9cb1 pop edi */
  EDI = (pop32());
  /* 11ef9cb2 pop esi */
  ESI = (pop32());
  /* 11ef9cb3 pop ebx */
  EBX = (pop32());
  /* 11ef9cb4 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9cb6 pop ebp */
  EBP = (pop32());
  /* 11ef9cb7 ret  */
  ESPCHK(0x11ef9c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cc0 @ 0x11ef9cc0 (57 bytes, 30 insns) */
void f_11ef9cc0(void) {
  FTRACE(0x11ef9cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9cc4 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9cc5 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9cc6 cld  */
  C.df=0;
  /* 11ef9cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9ccc push eax */
  push32((uint32_t)(EAX));
  /* 11ef9ccd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9cd0 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ef9cd3 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9cd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9cd7 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ef9cda push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9cdd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef9ce0 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9ce1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9ce4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ef9ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9ce8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9ceb push edx */
  push32((uint32_t)(EDX));
  /* 11ef9cec call 0x11efda30 */
  push32(0x11ef9cf1u); f_11efda30();
  /* 11ef9cf1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9cf4 pop edi */
  EDI = (pop32());
  /* 11ef9cf5 pop esi */
  ESI = (pop32());
  /* 11ef9cf6 pop ebx */
  EBX = (pop32());
  /* 11ef9cf7 pop ebp */
  EBP = (pop32());
  /* 11ef9cf8 ret  */
  ESPCHK(0x11ef9cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d00 @ 0x11ef9d00 (204 bytes, 58 insns) */
void f_11ef9d00(void) {
  FTRACE(0x11ef9d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9d01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9d03 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9d07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9d08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9d09 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ef9d10 mov dword ptr [ebp - 0x24], 0x11ef9dd0 */
  w32((uint32_t)(EBP + -0x24), (0x11ef9dd0u));
  /* 11ef9d17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ef9d1a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ef9d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9d20 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ef9d23 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ef9d26 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ef9d29 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ef9d2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ef9d2f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ef9d36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ef9d3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef9d44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef9d4b mov dword ptr [ebp - 0x10], 0x11ef9d9c */
  w32((uint32_t)(EBP + -0x10), (0x11ef9d9cu));
  /* 11ef9d52 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11ef9d55 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11ef9d58 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11ef9d5e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ef9d61 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11ef9d67 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11ef9d6d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11ef9d74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9d77 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11ef9d7a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef9d7d mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11ef9d80 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef9d83 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9d84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9d87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ef9d89 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9d8a call 0x11efe7c0 */
  push32(0x11ef9d8fu); f_11efe7c0();
  /* 11ef9d8f call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11ef9d92u);
  /* 11ef9d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9d95 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11ef9d9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9da0 je 0x11ef9db9 */
  if (C.zf) goto L_11ef9db9;
  /* 11ef9da2 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11ef9da9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11ef9dab mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef9dae mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11ef9db0 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11ef9db7 jmp 0x11ef9dc2 */
  goto L_11ef9dc2;
L_11ef9db9:;
  /* 11ef9db9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef9dbc mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11ef9dc2:;
  /* 11ef9dc2 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ef9dc5 pop edi */
  EDI = (pop32());
  /* 11ef9dc6 pop esi */
  ESI = (pop32());
  /* 11ef9dc7 pop ebx */
  EBX = (pop32());
  /* 11ef9dc8 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9dca pop ebp */
  EBP = (pop32());
  /* 11ef9dcb ret  */
  ESPCHK(0x11ef9d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dd0 @ 0x11ef9dd0 (124 bytes, 53 insns) */
void f_11ef9dd0(void) {
  FTRACE(0x11ef9dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9dd4 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9dd6 cld  */
  C.df=0;
  /* 11ef9dd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9dda mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef9ddd and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 11ef9de0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef9de2 je 0x11ef9df5 */
  if (C.zf) goto L_11ef9df5;
  /* 11ef9de4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9de7 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 11ef9dee mov eax, 1 */
  EAX = (0x1u);
  /* 11ef9df3 jmp 0x11ef9e4c */
  goto L_11ef9e4c;
L_11ef9df5:;
  /* 11ef9df5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef9df7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9dfa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ef9dfd push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9dfe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e01 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ef9e04 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9e05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ef9e0b push edx */
  push32((uint32_t)(EDX));
  /* 11ef9e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9e0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef9e11 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9e12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e15 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ef9e18 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9e19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9e1c push eax */
  push32((uint32_t)(EAX));
  /* 11ef9e1d call 0x11efda30 */
  push32(0x11ef9e22u); f_11efda30();
  /* 11ef9e22 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9e25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e28 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9e2c jne 0x11ef9e3b */
  if (!C.zf) goto L_11ef9e3b;
  /* 11ef9e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9e31 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9e32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e35 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9e36 call 0x11ef9b80 */
  push32(0x11ef9e3bu); f_11ef9b80();
L_11ef9e3b:;
  /* 11ef9e3b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e3e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11ef9e41 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11ef9e44 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11ef9e47 mov eax, 1 */
  EAX = (0x1u);
L_11ef9e4c:;
  /* 11ef9e4c pop edi */
  EDI = (pop32());
  /* 11ef9e4d pop esi */
  ESI = (pop32());
  /* 11ef9e4e pop ebx */
  EBX = (pop32());
  /* 11ef9e4f pop ebp */
  EBP = (pop32());
  /* 11ef9e50 ret  */
  ESPCHK(0x11ef9dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e60 @ 0x11ef9e60 (130 bytes, 57 insns) */
void f_11ef9e60(void) {
  FTRACE(0x11ef9e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9e61 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9e67 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9e68 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9e69 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9e6a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ef9e6d mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11ef9e70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef9e73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9e76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef9e78 mov edi, esi */
  EDI = (ESI);
  /* 11ef9e7a mov ebx, esi */
  EBX = (ESI);
  /* 11ef9e7c jl 0x11ef9eb9 */
  if ((C.sf!=C.of)) goto L_11ef9eb9;
L_11ef9e7e:;
  /* 11ef9e7e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9e81 jne 0x11ef9e88 */
  if (!C.zf) goto L_11ef9e88;
  /* 11ef9e83 call 0x11efea40 */
  push32(0x11ef9e88u); f_11efea40();
L_11ef9e88:;
  /* 11ef9e88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9e8b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ef9e8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef9e8f lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11ef9e92 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11ef9e95 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9e98 jge 0x11ef9e9f */
  if ((C.sf==C.of)) goto L_11ef9e9f;
  /* 11ef9e9a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9e9d jle 0x11ef9ea4 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef9ea4;
L_11ef9e9f:;
  /* 11ef9e9f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9ea2 jne 0x11ef9eaf */
  if (!C.zf) goto L_11ef9eaf;
L_11ef9ea4:;
  /* 11ef9ea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9ea7 mov edi, ebx */
  EDI = (EBX);
  /* 11ef9ea9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ef9eaa mov ebx, esi */
  EBX = (ESI);
  /* 11ef9eac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11ef9eaf:;
  /* 11ef9eaf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef9eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef9eb4 jge 0x11ef9e7e */
  if ((C.sf==C.of)) goto L_11ef9e7e;
  /* 11ef9eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ef9eb9:;
  /* 11ef9eb9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef9ebc mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ef9ebf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ef9ec0 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11ef9ec2 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 11ef9ec4 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9ec7 ja 0x11ef9ecd */
  if ((!C.cf&&!C.zf)) goto L_11ef9ecd;
  /* 11ef9ec9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9ecb jbe 0x11ef9ed2 */
  if ((C.cf||C.zf)) goto L_11ef9ed2;
L_11ef9ecd:;
  /* 11ef9ecd call 0x11efea40 */
  push32(0x11ef9ed2u); f_11efea40();
L_11ef9ed2:;
  /* 11ef9ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9ed5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11ef9ed8 pop edi */
  EDI = (pop32());
  /* 11ef9ed9 pop esi */
  ESI = (pop32());
  /* 11ef9eda lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11ef9edd pop ebx */
  EBX = (pop32());
  /* 11ef9ede mov esp, ebp */
  ESP = (EBP);
  /* 11ef9ee0 pop ebp */
  EBP = (pop32());
  /* 11ef9ee1 ret  */
  ESPCHK(0x11ef9e60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11ef9ef0 (32 bytes, 18 insns) */
void f_11ef9ef0(void) {
  FTRACE(0x11ef9ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9ef3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9ef4 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9ef5 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9ef6 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef9efb push 0x11ef9f08 */
  push32((uint32_t)(0x11ef9f08u));
  /* 11ef9f00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ef9f03 call 0x11f1107c */
  push32(0x11ef9f08u); f_11f1107c();
  /* 11ef9f08 pop ebp */
  EBP = (pop32());
  /* 11ef9f09 pop edi */
  EDI = (pop32());
  /* 11ef9f0a pop esi */
  ESI = (pop32());
  /* 11ef9f0b pop ebx */
  EBX = (pop32());
  /* 11ef9f0c mov esp, ebp */
  ESP = (EBP);
  /* 11ef9f0e pop ebp */
  EBP = (pop32());
  /* 11ef9f0f ret  */
  ESPCHK(0x11ef9ef0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11ef9f32 (104 bytes, 33 insns) */
void f_11ef9f32(void) {
  FTRACE(0x11ef9f32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9f32 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9f33 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9f34 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9f35 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ef9f39 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9f3a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11ef9f3c push 0x11ef9f10 */
  push32((uint32_t)(0x11ef9f10u));
  /* 11ef9f41 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11ef9f48 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11ef9f4f:;
  /* 11ef9f4f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11ef9f53 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ef9f56 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11ef9f59 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9f5c je 0x11ef9f8c */
  if (C.zf) goto L_11ef9f8c;
  /* 11ef9f5e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9f62 je 0x11ef9f8c */
  if (C.zf) goto L_11ef9f8c;
  /* 11ef9f64 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11ef9f67 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11ef9f6a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11ef9f6e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ef9f71 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9f76 jne 0x11ef9f8a */
  if (!C.zf) goto L_11ef9f8a;
  /* 11ef9f78 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11ef9f7d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11ef9f81 call 0x11ef9fc6 */
  push32(0x11ef9f86u); f_11ef9fc6();
  /* 11ef9f86 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11ef9f8au);
L_11ef9f8a:;
  /* 11ef9f8a jmp 0x11ef9f4f */
  goto L_11ef9f4f;
L_11ef9f8c:;
  /* 11ef9f8c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11ef9f93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9f96 pop edi */
  EDI = (pop32());
  /* 11ef9f97 pop esi */
  ESI = (pop32());
  /* 11ef9f98 pop ebx */
  EBX = (pop32());
  /* 11ef9f99 ret  */
  ESPCHK(0x11ef9f32u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11ef9f9a (35 bytes, 10 insns) */
void f_11ef9f9a(void) {
  FTRACE(0x11ef9f9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9f9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef9f9c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11ef9fa3 cmp dword ptr [ecx + 4], 0x11ef9f10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11ef9f10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9faa jne 0x11ef9fbc */
  if (!C.zf) goto L_11ef9fbc;
  /* 11ef9fac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ef9faf mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ef9fb2 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9fb5 jne 0x11ef9fbc */
  if (!C.zf) goto L_11ef9fbc;
  /* 11ef9fb7 mov eax, 1 */
  EAX = (0x1u);
L_11ef9fbc:;
  /* 11ef9fbc ret  */
  ESPCHK(0x11ef9f9au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11ef9fbd (9 bytes, 4 insns) */
void f_11ef9fbd(void) {
  FTRACE(0x11ef9fbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9fbd push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9fbe push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9fbf mov ebx, 0x11f2de1c */
  EBX = (0x11f2de1cu);
  /* 11ef9fc4 jmp 0x11ef9fd0 */
  jmp_ind(0x11ef9fd0u); return;
}

/* FUN_10009fc6 @ 0x11ef9fc6 (24 bytes, 10 insns) */
void f_11ef9fc6(void) {
  FTRACE(0x11ef9fc6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9fc8 mov ebx, 0x11f2de1c */
  EBX = (0x11f2de1cu);
  /* 11ef9fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9fd0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11ef9fd3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11ef9fd6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11ef9fd9 pop ecx */
  ECX = (pop32());
  /* 11ef9fda pop ebx */
  EBX = (pop32());
  /* 11ef9fdb ret 4 */
  ESPCHK(0x11ef9fc6u, _esp0);
  ESP += 8; return;
}

/* FUN_10009fe0 @ 0x11ef9fe0 (179 bytes, 53 insns) */
void f_11ef9fe0(void) {
  FTRACE(0x11ef9fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef9fe4 call 0x11efec80 */
  push32(0x11ef9fe9u); f_11efec80();
  /* 11ef9fe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef9feb mov eax, dword ptr [0x11f321f8] */
  EAX = (r32((uint32_t)(0x11f321f8)));
  /* 11ef9ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9ff1 call 0x11efc990 */
  push32(0x11ef9ff6u); f_11efc990();
  /* 11ef9ff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9ff9 mov ecx, dword ptr [0x11f321f4] */
  ECX = (r32((uint32_t)(0x11f321f4)));
  /* 11ef9fff sub ecx, dword ptr [0x11f321f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f321f8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efa005 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa008 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa00a jae 0x11efa06d */
  if (!C.cf) goto L_11efa06d;
  /* 11efa00c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 11efa00e push 0x11f2a474 */
  push32((uint32_t)(0x11f2a474u));
  /* 11efa013 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efa015 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efa017 mov edx, dword ptr [0x11f321f8] */
  EDX = (r32((uint32_t)(0x11f321f8)));
  /* 11efa01d push edx */
  push32((uint32_t)(EDX));
  /* 11efa01e call 0x11efc990 */
  push32(0x11efa023u); f_11efc990();
  /* 11efa023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa026 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa029 push eax */
  push32((uint32_t)(EAX));
  /* 11efa02a mov eax, dword ptr [0x11f321f8] */
  EAX = (r32((uint32_t)(0x11f321f8)));
  /* 11efa02f push eax */
  push32((uint32_t)(EAX));
  /* 11efa030 call 0x11efbf50 */
  push32(0x11efa035u); f_11efbf50();
  /* 11efa035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa038 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efa03b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa03f jne 0x11efa04a */
  if (!C.zf) goto L_11efa04a;
  /* 11efa041 call 0x11efec90 */
  push32(0x11efa046u); f_11efec90();
  /* 11efa046 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa048 jmp 0x11efa08f */
  goto L_11efa08f;
L_11efa04a:;
  /* 11efa04a mov ecx, dword ptr [0x11f321f4] */
  ECX = (r32((uint32_t)(0x11f321f4)));
  /* 11efa050 sub ecx, dword ptr [0x11f321f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f321f8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efa056 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11efa059 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa05c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11efa05f mov dword ptr [0x11f321f4], eax */
  w32((uint32_t)(0x11f321f4), (EAX));
  /* 11efa064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa067 mov dword ptr [0x11f321f8], ecx */
  w32((uint32_t)(0x11f321f8), (ECX));
L_11efa06d:;
  /* 11efa06d mov edx, dword ptr [0x11f321f4] */
  EDX = (r32((uint32_t)(0x11f321f4)));
  /* 11efa073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa076 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11efa078 mov ecx, dword ptr [0x11f321f4] */
  ECX = (r32((uint32_t)(0x11f321f4)));
  /* 11efa07e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa081 mov dword ptr [0x11f321f4], ecx */
  w32((uint32_t)(0x11f321f4), (ECX));
  /* 11efa087 call 0x11efec90 */
  push32(0x11efa08cu); f_11efec90();
  /* 11efa08c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11efa08f:;
  /* 11efa08f mov esp, ebp */
  ESP = (EBP);
  /* 11efa091 pop ebp */
  EBP = (pop32());
  /* 11efa092 ret  */
  ESPCHK(0x11ef9fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a0 @ 0x11efa0a0 (24 bytes, 12 insns) */
void f_11efa0a0(void) {
  FTRACE(0x11efa0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa0a1 mov ebp, esp */
  EBP = (ESP);
  /* 11efa0a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa0a6 push eax */
  push32((uint32_t)(EAX));
  /* 11efa0a7 call 0x11ef9fe0 */
  push32(0x11efa0acu); f_11ef9fe0();
  /* 11efa0ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa0af neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efa0b1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efa0b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efa0b5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11efa0b6 pop ebp */
  EBP = (pop32());
  /* 11efa0b7 ret  */
  ESPCHK(0x11efa0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c0 @ 0x11efa0c0 (77 bytes, 20 insns) */
void f_11efa0c0(void) {
  FTRACE(0x11efa0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11efa0c3 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11efa0c8 push 0x11f2a474 */
  push32((uint32_t)(0x11f2a474u));
  /* 11efa0cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11efa0cf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11efa0d4 call 0x11efbac0 */
  push32(0x11efa0d9u); f_11efbac0();
  /* 11efa0d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa0dc mov dword ptr [0x11f321f8], eax */
  w32((uint32_t)(0x11f321f8), (EAX));
  /* 11efa0e1 cmp dword ptr [0x11f321f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa0e8 jne 0x11efa0f4 */
  if (!C.zf) goto L_11efa0f4;
  /* 11efa0ea push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11efa0ec call 0x11efa530 */
  push32(0x11efa0f1u); f_11efa530();
  /* 11efa0f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa0f4:;
  /* 11efa0f4 mov eax, dword ptr [0x11f321f8] */
  EAX = (r32((uint32_t)(0x11f321f8)));
  /* 11efa0f9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11efa0ff mov ecx, dword ptr [0x11f321f8] */
  ECX = (r32((uint32_t)(0x11f321f8)));
  /* 11efa105 mov dword ptr [0x11f321f4], ecx */
  w32((uint32_t)(0x11f321f4), (ECX));
  /* 11efa10b pop ebp */
  EBP = (pop32());
  /* 11efa10c ret  */
  ESPCHK(0x11efa0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x11efa110 (16 bytes, 7 insns) */
void f_11efa110(void) {
  FTRACE(0x11efa110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa110 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa111 mov ebp, esp */
  EBP = (ESP);
  /* 11efa113 call 0x11efe7c0 */
  push32(0x11efa118u); f_11efe7c0();
  /* 11efa118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa11b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11efa11e pop ebp */
  EBP = (pop32());
  /* 11efa11f ret  */
  ESPCHK(0x11efa110u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11efa120 (54 bytes, 18 insns) */
void f_11efa120(void) {
  FTRACE(0x11efa120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa120 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa121 mov ebp, esp */
  EBP = (ESP);
  /* 11efa123 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa124 call 0x11efe7c0 */
  push32(0x11efa129u); f_11efe7c0();
  /* 11efa129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efa12c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa12f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efa132 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efa138 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa13e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa141 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 11efa144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa147 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efa14a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11efa14d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa152 mov esp, ebp */
  ESP = (EBP);
  /* 11efa154 pop ebp */
  EBP = (pop32());
  /* 11efa155 ret  */
  ESPCHK(0x11efa120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a160 @ 0x11efa160 (385 bytes, 103 insns) */
void f_11efa160(void) {
  FTRACE(0x11efa160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa160 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa161 mov ebp, esp */
  EBP = (ESP);
  /* 11efa163 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efa169 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11efa16c push eax */
  push32((uint32_t)(EAX));
  /* 11efa16d call dword ptr [0x11f33400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33400))), 0x11efa173u);
  /* 11efa173 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11efa176 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa177 call dword ptr [0x11f333fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333fc))), 0x11efa17du);
  /* 11efa17d mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 11efa180 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efa186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa188 mov ax, word ptr [0x11f306da] */
  AX = (r16((uint32_t)(0x11f306da)));
  /* 11efa18e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa190 jne 0x11efa1f8 */
  if (!C.zf) goto L_11efa1f8;
  /* 11efa192 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efa195 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efa19b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efa19d mov dx, word ptr [0x11f306d8] */
  DX = (r16((uint32_t)(0x11f306d8)));
  /* 11efa1a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa1a6 jne 0x11efa1f8 */
  if (!C.zf) goto L_11efa1f8;
  /* 11efa1a8 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 11efa1ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa1b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efa1b2 mov cx, word ptr [0x11f306d6] */
  CX = (r16((uint32_t)(0x11f306d6)));
  /* 11efa1b9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa1bb jne 0x11efa1f8 */
  if (!C.zf) goto L_11efa1f8;
  /* 11efa1bd mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11efa1c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efa1c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa1c8 mov ax, word ptr [0x11f306d2] */
  AX = (r16((uint32_t)(0x11f306d2)));
  /* 11efa1ce cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa1d0 jne 0x11efa1f8 */
  if (!C.zf) goto L_11efa1f8;
  /* 11efa1d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efa1d5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efa1db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efa1dd mov dx, word ptr [0x11f306d0] */
  DX = (r16((uint32_t)(0x11f306d0)));
  /* 11efa1e4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa1e6 jne 0x11efa1f8 */
  if (!C.zf) goto L_11efa1f8;
  /* 11efa1e8 mov eax, dword ptr [0x11f306c8] */
  EAX = (r32((uint32_t)(0x11f306c8)));
  /* 11efa1ed mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 11efa1f3 jmp 0x11efa280 */
  goto L_11efa280;
L_11efa1f8:;
  /* 11efa1f8 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 11efa1fe push ecx */
  push32((uint32_t)(ECX));
  /* 11efa1ff call dword ptr [0x11f333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333f8))), 0x11efa205u);
  /* 11efa205 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 11efa20b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa212 je 0x11efa248 */
  if (C.zf) goto L_11efa248;
  /* 11efa214 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa21b jne 0x11efa23c */
  if (!C.zf) goto L_11efa23c;
  /* 11efa21d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 11efa220 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efa226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efa228 je 0x11efa23c */
  if (C.zf) goto L_11efa23c;
  /* 11efa22a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa22e je 0x11efa23c */
  if (C.zf) goto L_11efa23c;
  /* 11efa230 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 11efa23a jmp 0x11efa246 */
  goto L_11efa246;
L_11efa23c:;
  /* 11efa23c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_11efa246:;
  /* 11efa246 jmp 0x11efa252 */
  goto L_11efa252;
L_11efa248:;
  /* 11efa248 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_11efa252:;
  /* 11efa252 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11efa258 mov dword ptr [0x11f306c8], eax */
  w32((uint32_t)(0x11f306c8), (EAX));
  /* 11efa25d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efa260 mov dword ptr [0x11f306d0], ecx */
  w32((uint32_t)(0x11f306d0), (ECX));
  /* 11efa266 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efa269 mov dword ptr [0x11f306d4], edx */
  w32((uint32_t)(0x11f306d4), (EDX));
  /* 11efa26f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efa272 mov dword ptr [0x11f306d8], eax */
  w32((uint32_t)(0x11f306d8), (EAX));
  /* 11efa277 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa27a mov dword ptr [0x11f306dc], ecx */
  w32((uint32_t)(0x11f306dc), (ECX));
L_11efa280:;
  /* 11efa280 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11efa286 push edx */
  push32((uint32_t)(EDX));
  /* 11efa287 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11efa28a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa28f push eax */
  push32((uint32_t)(EAX));
  /* 11efa290 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 11efa293 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efa299 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa29a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efa29d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efa2a3 push edx */
  push32((uint32_t)(EDX));
  /* 11efa2a4 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 11efa2a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa2ac push eax */
  push32((uint32_t)(EAX));
  /* 11efa2ad mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 11efa2b0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efa2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa2b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11efa2ba and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efa2c0 push edx */
  push32((uint32_t)(EDX));
  /* 11efa2c1 call 0x11efecd0 */
  push32(0x11efa2c6u); f_11efecd0();
  /* 11efa2c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa2c9 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11efa2cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa2d0 je 0x11efa2da */
  if (C.zf) goto L_11efa2da;
  /* 11efa2d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa2d5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efa2d8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11efa2da:;
  /* 11efa2da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efa2dd mov esp, ebp */
  ESP = (EBP);
  /* 11efa2df pop ebp */
  EBP = (pop32());
  /* 11efa2e0 ret  */
  ESPCHK(0x11efa160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2f0 @ 0x11efa2f0 (313 bytes, 78 insns) */
void f_11efa2f0(void) {
  FTRACE(0x11efa2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11efa2f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa2f7 jne 0x11efa3b7 */
  if (!C.zf) goto L_11efa3b7;
  /* 11efa2fd call dword ptr [0x11f33408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33408))), 0x11efa303u);
  /* 11efa303 mov dword ptr [0x11f30770], eax */
  w32((uint32_t)(0x11f30770), (EAX));
  /* 11efa308 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efa30a call 0x11effa10 */
  push32(0x11efa30fu); f_11effa10();
  /* 11efa30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa314 jne 0x11efa31d */
  if (!C.zf) goto L_11efa31d;
  /* 11efa316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa318 jmp 0x11efa425 */
  goto L_11efa425;
L_11efa31d:;
  /* 11efa31d mov eax, dword ptr [0x11f30770] */
  EAX = (r32((uint32_t)(0x11f30770)));
  /* 11efa322 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11efa325 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa32a mov dword ptr [0x11f3077c], eax */
  w32((uint32_t)(0x11f3077c), (EAX));
  /* 11efa32f mov ecx, dword ptr [0x11f30770] */
  ECX = (r32((uint32_t)(0x11f30770)));
  /* 11efa335 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efa33b mov dword ptr [0x11f30778], ecx */
  w32((uint32_t)(0x11f30778), (ECX));
  /* 11efa341 mov edx, dword ptr [0x11f30778] */
  EDX = (r32((uint32_t)(0x11f30778)));
  /* 11efa347 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11efa34a add edx, dword ptr [0x11f3077c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f3077c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa350 mov dword ptr [0x11f30774], edx */
  w32((uint32_t)(0x11f30774), (EDX));
  /* 11efa356 mov eax, dword ptr [0x11f30770] */
  EAX = (r32((uint32_t)(0x11f30770)));
  /* 11efa35b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11efa35e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa363 mov dword ptr [0x11f30770], eax */
  w32((uint32_t)(0x11f30770), (EAX));
  /* 11efa368 call 0x11efe6e0 */
  push32(0x11efa36du); f_11efe6e0();
  /* 11efa36d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa36f jne 0x11efa37d */
  if (!C.zf) goto L_11efa37d;
  /* 11efa371 call 0x11effa60 */
  push32(0x11efa376u); f_11effa60();
  /* 11efa376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa378 jmp 0x11efa425 */
  goto L_11efa425;
L_11efa37d:;
  /* 11efa37d call dword ptr [0x11f33404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33404))), 0x11efa383u);
  /* 11efa383 mov dword ptr [0x11f32214], eax */
  w32((uint32_t)(0x11f32214), (EAX));
  /* 11efa388 call 0x11eff7f0 */
  push32(0x11efa38du); f_11eff7f0();
  /* 11efa38d mov dword ptr [0x11f306e4], eax */
  w32((uint32_t)(0x11f306e4), (EAX));
  /* 11efa392 call 0x11efedc0 */
  push32(0x11efa397u); f_11efedc0();
  /* 11efa397 call 0x11eff2e0 */
  push32(0x11efa39cu); f_11eff2e0();
  /* 11efa39c call 0x11eff190 */
  push32(0x11efa3a1u); f_11eff190();
  /* 11efa3a1 call 0x11efead0 */
  push32(0x11efa3a6u); f_11efead0();
  /* 11efa3a6 mov ecx, dword ptr [0x11f306e0] */
  ECX = (r32((uint32_t)(0x11f306e0)));
  /* 11efa3ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa3af mov dword ptr [0x11f306e0], ecx */
  w32((uint32_t)(0x11f306e0), (ECX));
  /* 11efa3b5 jmp 0x11efa420 */
  goto L_11efa420;
L_11efa3b7:;
  /* 11efa3b7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa3bb jne 0x11efa410 */
  if (!C.zf) goto L_11efa410;
  /* 11efa3bd cmp dword ptr [0x11f306e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa3c4 jle 0x11efa40a */
  if ((C.zf||C.sf!=C.of)) goto L_11efa40a;
  /* 11efa3c6 mov edx, dword ptr [0x11f306e0] */
  EDX = (r32((uint32_t)(0x11f306e0)));
  /* 11efa3cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efa3cf mov dword ptr [0x11f306e0], edx */
  w32((uint32_t)(0x11f306e0), (EDX));
  /* 11efa3d5 cmp dword ptr [0x11f307a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f307a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa3dc jne 0x11efa3e3 */
  if (!C.zf) goto L_11efa3e3;
  /* 11efa3de call 0x11efeb50 */
  push32(0x11efa3e3u); f_11efeb50();
L_11efa3e3:;
  /* 11efa3e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efa3e5 call 0x11efcfd0 */
  push32(0x11efa3eau); f_11efcfd0();
  /* 11efa3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa3ed and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11efa3f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa3f2 je 0x11efa3f9 */
  if (C.zf) goto L_11efa3f9;
  /* 11efa3f4 call 0x11efd8e0 */
  push32(0x11efa3f9u); f_11efd8e0();
L_11efa3f9:;
  /* 11efa3f9 call 0x11eff0f0 */
  push32(0x11efa3feu); f_11eff0f0();
  /* 11efa3fe call 0x11efe770 */
  push32(0x11efa403u); f_11efe770();
  /* 11efa403 call 0x11effa60 */
  push32(0x11efa408u); f_11effa60();
  /* 11efa408 jmp 0x11efa40e */
  goto L_11efa40e;
L_11efa40a:;
  /* 11efa40a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa40c jmp 0x11efa425 */
  goto L_11efa425;
L_11efa40e:;
  /* 11efa40e jmp 0x11efa420 */
  goto L_11efa420;
L_11efa410:;
  /* 11efa410 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa414 jne 0x11efa420 */
  if (!C.zf) goto L_11efa420;
  /* 11efa416 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efa418 call 0x11efe860 */
  push32(0x11efa41du); f_11efe860();
  /* 11efa41d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa420:;
  /* 11efa420 mov eax, 1 */
  EAX = (0x1u);
L_11efa425:;
  /* 11efa425 pop ebp */
  EBP = (pop32());
  /* 11efa426 ret 0xc */
  ESPCHK(0x11efa2f0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11efa430 (243 bytes, 86 insns) */
void f_11efa430(void) {
  FTRACE(0x11efa430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa430 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa431 mov ebp, esp */
  EBP = (ESP);
  /* 11efa433 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa434 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efa43b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa43f jne 0x11efa451 */
  if (!C.zf) goto L_11efa451;
  /* 11efa441 cmp dword ptr [0x11f306e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa448 jne 0x11efa451 */
  if (!C.zf) goto L_11efa451;
  /* 11efa44a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa44c jmp 0x11efa51d */
  goto L_11efa51d;
L_11efa451:;
  /* 11efa451 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa455 je 0x11efa45d */
  if (C.zf) goto L_11efa45d;
  /* 11efa457 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa45b jne 0x11efa49f */
  if (!C.zf) goto L_11efa49f;
L_11efa45d:;
  /* 11efa45d cmp dword ptr [0x11f32224], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f32224))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa464 je 0x11efa47b */
  if (C.zf) goto L_11efa47b;
  /* 11efa466 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa469 push eax */
  push32((uint32_t)(EAX));
  /* 11efa46a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa46d push ecx */
  push32((uint32_t)(ECX));
  /* 11efa46e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa471 push edx */
  push32((uint32_t)(EDX));
  /* 11efa472 call dword ptr [0x11f32224] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f32224))), 0x11efa478u);
  /* 11efa478 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efa47b:;
  /* 11efa47b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa47f je 0x11efa495 */
  if (C.zf) goto L_11efa495;
  /* 11efa481 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa484 push eax */
  push32((uint32_t)(EAX));
  /* 11efa485 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa488 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa489 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa48c push edx */
  push32((uint32_t)(EDX));
  /* 11efa48d call 0x11efa2f0 */
  push32(0x11efa492u); f_11efa2f0();
  /* 11efa492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efa495:;
  /* 11efa495 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa499 jne 0x11efa49f */
  if (!C.zf) goto L_11efa49f;
  /* 11efa49b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa49d jmp 0x11efa51d */
  goto L_11efa51d;
L_11efa49f:;
  /* 11efa49f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa4a2 push eax */
  push32((uint32_t)(EAX));
  /* 11efa4a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa4a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa4aa push edx */
  push32((uint32_t)(EDX));
  /* 11efa4ab call 0x11ef1073 */
  push32(0x11efa4b0u); f_11ef1073();
  /* 11efa4b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efa4b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa4b7 jne 0x11efa4ce */
  if (!C.zf) goto L_11efa4ce;
  /* 11efa4b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa4bd jne 0x11efa4ce */
  if (!C.zf) goto L_11efa4ce;
  /* 11efa4bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa4c2 push eax */
  push32((uint32_t)(EAX));
  /* 11efa4c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efa4c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa4c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa4c9 call 0x11efa2f0 */
  push32(0x11efa4ceu); f_11efa2f0();
L_11efa4ce:;
  /* 11efa4ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa4d2 je 0x11efa4da */
  if (C.zf) goto L_11efa4da;
  /* 11efa4d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa4d8 jne 0x11efa51a */
  if (!C.zf) goto L_11efa51a;
L_11efa4da:;
  /* 11efa4da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa4dd push edx */
  push32((uint32_t)(EDX));
  /* 11efa4de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa4e1 push eax */
  push32((uint32_t)(EAX));
  /* 11efa4e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa4e6 call 0x11efa2f0 */
  push32(0x11efa4ebu); f_11efa2f0();
  /* 11efa4eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa4ed jne 0x11efa4f6 */
  if (!C.zf) goto L_11efa4f6;
  /* 11efa4ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efa4f6:;
  /* 11efa4f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa4fa je 0x11efa51a */
  if (C.zf) goto L_11efa51a;
  /* 11efa4fc cmp dword ptr [0x11f32224], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f32224))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa503 je 0x11efa51a */
  if (C.zf) goto L_11efa51a;
  /* 11efa505 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa508 push edx */
  push32((uint32_t)(EDX));
  /* 11efa509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa50c push eax */
  push32((uint32_t)(EAX));
  /* 11efa50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa510 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa511 call dword ptr [0x11f32224] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f32224))), 0x11efa517u);
  /* 11efa517 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efa51a:;
  /* 11efa51a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efa51d:;
  /* 11efa51d mov esp, ebp */
  ESP = (EBP);
  /* 11efa51f pop ebp */
  EBP = (pop32());
  /* 11efa520 ret 0xc */
  ESPCHK(0x11efa430u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11efa530 (58 bytes, 18 insns) */
void f_11efa530(void) {
  FTRACE(0x11efa530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa530 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa531 mov ebp, esp */
  EBP = (ESP);
  /* 11efa533 cmp dword ptr [0x11f306ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa53a je 0x11efa54e */
  if (C.zf) goto L_11efa54e;
  /* 11efa53c cmp dword ptr [0x11f306ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa543 jne 0x11efa553 */
  if (!C.zf) goto L_11efa553;
  /* 11efa545 cmp dword ptr [0x11f306f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa54c jne 0x11efa553 */
  if (!C.zf) goto L_11efa553;
L_11efa54e:;
  /* 11efa54e call 0x11effb00 */
  push32(0x11efa553u); f_11effb00();
L_11efa553:;
  /* 11efa553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa556 push eax */
  push32((uint32_t)(EAX));
  /* 11efa557 call 0x11effb50 */
  push32(0x11efa55cu); f_11effb50();
  /* 11efa55c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa55f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11efa564 call dword ptr [0x11f2de2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2de2c))), 0x11efa56au);
  /* 11efa56a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa56d pop ebp */
  EBP = (pop32());
  /* 11efa56e ret  */
  ESPCHK(0x11efa530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x11efa570 (11 bytes, 5 insns) */
void f_11efa570(void) {
  FTRACE(0x11efa570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa570 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa571 mov ebp, esp */
  EBP = (ESP);
  /* 11efa573 call dword ptr [0x11f3340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3340c))), 0x11efa579u);
  /* 11efa579 pop ebp */
  EBP = (pop32());
  /* 11efa57a ret  */
  ESPCHK(0x11efa570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x11efa580 (87 bytes, 30 insns) */
void f_11efa580(void) {
  FTRACE(0x11efa580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa580 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa581 mov ebp, esp */
  EBP = (ESP);
  /* 11efa583 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa584 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa588 jl 0x11efa590 */
  if ((C.sf!=C.of)) goto L_11efa590;
  /* 11efa58a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa58e jl 0x11efa595 */
  if ((C.sf!=C.of)) goto L_11efa595;
L_11efa590:;
  /* 11efa590 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa593 jmp 0x11efa5d3 */
  goto L_11efa5d3;
L_11efa595:;
  /* 11efa595 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa599 jne 0x11efa5a7 */
  if (!C.zf) goto L_11efa5a7;
  /* 11efa59b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa59e mov eax, dword ptr [eax*4 + 0x11f2de34] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11f2de34)));
  /* 11efa5a5 jmp 0x11efa5d3 */
  goto L_11efa5d3;
L_11efa5a7:;
  /* 11efa5a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa5aa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11efa5ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efa5af je 0x11efa5b6 */
  if (C.zf) goto L_11efa5b6;
  /* 11efa5b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa5b4 jmp 0x11efa5d3 */
  goto L_11efa5d3;
L_11efa5b6:;
  /* 11efa5b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa5b9 mov eax, dword ptr [edx*4 + 0x11f2de34] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f2de34)));
  /* 11efa5c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efa5c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa5c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa5c9 mov dword ptr [ecx*4 + 0x11f2de34], edx */
  w32((uint32_t)(ECX*4 + 0x11f2de34), (EDX));
  /* 11efa5d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efa5d3:;
  /* 11efa5d3 mov esp, ebp */
  ESP = (EBP);
  /* 11efa5d5 pop ebp */
  EBP = (pop32());
  /* 11efa5d6 ret  */
  ESPCHK(0x11efa580u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11efa5e0 (126 bytes, 38 insns) */
void f_11efa5e0(void) {
  FTRACE(0x11efa5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11efa5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa5e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa5e8 jl 0x11efa5f0 */
  if ((C.sf!=C.of)) goto L_11efa5f0;
  /* 11efa5ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa5ee jl 0x11efa5f7 */
  if ((C.sf!=C.of)) goto L_11efa5f7;
L_11efa5f0:;
  /* 11efa5f0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11efa5f5 jmp 0x11efa65a */
  goto L_11efa65a;
L_11efa5f7:;
  /* 11efa5f7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa5fb jne 0x11efa609 */
  if (!C.zf) goto L_11efa609;
  /* 11efa5fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa600 mov eax, dword ptr [eax*4 + 0x11f2de40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11f2de40)));
  /* 11efa607 jmp 0x11efa65a */
  goto L_11efa65a;
L_11efa609:;
  /* 11efa609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa60c mov edx, dword ptr [ecx*4 + 0x11f2de40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2de40)));
  /* 11efa613 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efa616 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa61a jne 0x11efa630 */
  if (!C.zf) goto L_11efa630;
  /* 11efa61c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11efa61e call dword ptr [0x11f33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33410))), 0x11efa624u);
  /* 11efa624 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa627 mov dword ptr [ecx*4 + 0x11f2de40], eax */
  w32((uint32_t)(ECX*4 + 0x11f2de40), (EAX));
  /* 11efa62e jmp 0x11efa657 */
  goto L_11efa657;
L_11efa630:;
  /* 11efa630 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa634 jne 0x11efa64a */
  if (!C.zf) goto L_11efa64a;
  /* 11efa636 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11efa638 call dword ptr [0x11f33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33410))), 0x11efa63eu);
  /* 11efa63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa641 mov dword ptr [edx*4 + 0x11f2de40], eax */
  w32((uint32_t)(EDX*4 + 0x11f2de40), (EAX));
  /* 11efa648 jmp 0x11efa657 */
  goto L_11efa657;
L_11efa64a:;
  /* 11efa64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa64d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa650 mov dword ptr [eax*4 + 0x11f2de40], ecx */
  w32((uint32_t)(EAX*4 + 0x11f2de40), (ECX));
L_11efa657:;
  /* 11efa657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efa65a:;
  /* 11efa65a mov esp, ebp */
  ESP = (EBP);
  /* 11efa65c pop ebp */
  EBP = (pop32());
  /* 11efa65d ret  */
  ESPCHK(0x11efa5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x11efa660 (28 bytes, 11 insns) */
void f_11efa660(void) {
  FTRACE(0x11efa660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa660 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa661 mov ebp, esp */
  EBP = (ESP);
  /* 11efa663 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa664 mov eax, dword ptr [0x11f32208] */
  EAX = (r32((uint32_t)(0x11f32208)));
  /* 11efa669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efa66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa66f mov dword ptr [0x11f32208], ecx */
  w32((uint32_t)(0x11f32208), (ECX));
  /* 11efa675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efa678 mov esp, ebp */
  ESP = (EBP);
  /* 11efa67a pop ebp */
  EBP = (pop32());
  /* 11efa67b ret  */
  ESPCHK(0x11efa660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x11efa680 (912 bytes, 248 insns) */
void f_11efa680(void) {
  FTRACE(0x11efa680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efa680 push ebp */
  push32((uint32_t)(EBP));
  /* 11efa681 mov ebp, esp */
  EBP = (ESP);
  /* 11efa683 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11efa688 call 0x11f003c0 */
  push32(0x11efa68du); f_11f003c0();
  /* 11efa68d push edi */
  push32((uint32_t)(EDI));
  /* 11efa68e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11efa695 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11efa69a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa69c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11efa6a2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11efa6a4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11efa6a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11efa6a7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11efa6ae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11efa6b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa6b5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11efa6bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11efa6bd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11efa6bf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11efa6c0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11efa6c7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11efa6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efa6ce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11efa6d4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11efa6d6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11efa6d8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11efa6d9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11efa6dc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11efa6e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa6e6 jl 0x11efa6ee */
  if ((C.sf!=C.of)) goto L_11efa6ee;
  /* 11efa6e8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa6ec jl 0x11efa6f6 */
  if ((C.sf!=C.of)) goto L_11efa6f6;
L_11efa6ee:;
  /* 11efa6ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa6f1 jmp 0x11efaa0b */
  goto L_11efaa0b;
L_11efa6f6:;
  /* 11efa6f6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa6fa jne 0x11efa7a0 */
  if (!C.zf) goto L_11efa7a0;
  /* 11efa700 push 0x11f2de30 */
  push32((uint32_t)(0x11f2de30u));
  /* 11efa705 call dword ptr [0x11f33428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33428))), 0x11efa70bu);
  /* 11efa70b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa70d jle 0x11efa7a0 */
  if ((C.zf||C.sf!=C.of)) goto L_11efa7a0;
  /* 11efa713 cmp dword ptr [0x11f306f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa71a jne 0x11efa75e */
  if (!C.zf) goto L_11efa75e;
  /* 11efa71c push 0x11f2a54c */
  push32((uint32_t)(0x11f2a54cu));
  /* 11efa721 call dword ptr [0x11f33424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33424))), 0x11efa727u);
  /* 11efa727 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11efa72d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa734 je 0x11efa756 */
  if (C.zf) goto L_11efa756;
  /* 11efa736 push 0x11f2a540 */
  push32((uint32_t)(0x11f2a540u));
  /* 11efa73b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11efa741 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa742 call dword ptr [0x11f33314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33314))), 0x11efa748u);
  /* 11efa748 mov dword ptr [0x11f306f4], eax */
  w32((uint32_t)(0x11f306f4), (EAX));
  /* 11efa74d cmp dword ptr [0x11f306f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f306f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa754 jne 0x11efa75e */
  if (!C.zf) goto L_11efa75e;
L_11efa756:;
  /* 11efa756 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa759 jmp 0x11efaa0b */
  goto L_11efaa0b;
L_11efa75e:;
  /* 11efa75e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa761 push edx */
  push32((uint32_t)(EDX));
  /* 11efa762 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa765 push eax */
  push32((uint32_t)(EAX));
  /* 11efa766 push 0x11f2a50c */
  push32((uint32_t)(0x11f2a50cu));
  /* 11efa76b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11efa771 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa772 call dword ptr [0x11f306f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f306f4))), 0x11efa778u);
  /* 11efa778 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa77b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11efa781 push edx */
  push32((uint32_t)(EDX));
  /* 11efa782 call dword ptr [0x11f33318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33318))), 0x11efa788u);
  /* 11efa788 push 0x11f2de30 */
  push32((uint32_t)(0x11f2de30u));
  /* 11efa78d call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11efa793u);
  /* 11efa793 call 0x11efa570 */
  push32(0x11efa798u); f_11efa570();
  /* 11efa798 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efa79b jmp 0x11efaa0b */
  goto L_11efaa0b;
L_11efa7a0:;
  /* 11efa7a0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa7a4 je 0x11efa7dd */
  if (C.zf) goto L_11efa7dd;
  /* 11efa7a6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11efa7ac push eax */
  push32((uint32_t)(EAX));
  /* 11efa7ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efa7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa7b1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11efa7b6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11efa7bc push edx */
  push32((uint32_t)(EDX));
  /* 11efa7bd call 0x11f002c0 */
  push32(0x11efa7c2u); f_11f002c0();
  /* 11efa7c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa7c7 jge 0x11efa7dd */
  if ((C.sf==C.of)) goto L_11efa7dd;
  /* 11efa7c9 push 0x11f2a4e0 */
  push32((uint32_t)(0x11f2a4e0u));
  /* 11efa7ce lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11efa7d4 push eax */
  push32((uint32_t)(EAX));
  /* 11efa7d5 call 0x11f001d0 */
  push32(0x11efa7dau); f_11f001d0();
  /* 11efa7da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa7dd:;
  /* 11efa7dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa7e1 jne 0x11efa815 */
  if (!C.zf) goto L_11efa815;
  /* 11efa7e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa7e7 je 0x11efa7f5 */
  if (C.zf) goto L_11efa7f5;
  /* 11efa7e9 mov dword ptr [ebp - 0x3028], 0x11f2a4cc */
  w32((uint32_t)(EBP + -0x3028), (0x11f2a4ccu));
  /* 11efa7f3 jmp 0x11efa7ff */
  goto L_11efa7ff;
L_11efa7f5:;
  /* 11efa7f5 mov dword ptr [ebp - 0x3028], 0x11f2a4b8 */
  w32((uint32_t)(EBP + -0x3028), (0x11f2a4b8u));
L_11efa7ff:;
  /* 11efa7ff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11efa805 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa806 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11efa80c push edx */
  push32((uint32_t)(EDX));
  /* 11efa80d call 0x11f001d0 */
  push32(0x11efa812u); f_11f001d0();
  /* 11efa812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa815:;
  /* 11efa815 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11efa81b push eax */
  push32((uint32_t)(EAX));
  /* 11efa81c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11efa822 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa823 call 0x11f001e0 */
  push32(0x11efa828u); f_11f001e0();
  /* 11efa828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa82b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa82f jne 0x11efa86a */
  if (!C.zf) goto L_11efa86a;
  /* 11efa831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa834 mov eax, dword ptr [edx*4 + 0x11f2de34] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f2de34)));
  /* 11efa83b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11efa83e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa840 je 0x11efa856 */
  if (C.zf) goto L_11efa856;
  /* 11efa842 push 0x11f2a4b4 */
  push32((uint32_t)(0x11f2a4b4u));
  /* 11efa847 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11efa84d push ecx */
  push32((uint32_t)(ECX));
  /* 11efa84e call 0x11f001e0 */
  push32(0x11efa853u); f_11f001e0();
  /* 11efa853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa856:;
  /* 11efa856 push 0x11f2a4b0 */
  push32((uint32_t)(0x11f2a4b0u));
  /* 11efa85b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11efa861 push edx */
  push32((uint32_t)(EDX));
  /* 11efa862 call 0x11f001e0 */
  push32(0x11efa867u); f_11f001e0();
  /* 11efa867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa86a:;
  /* 11efa86a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa86e je 0x11efa8b2 */
  if (C.zf) goto L_11efa8b2;
  /* 11efa870 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11efa876 push eax */
  push32((uint32_t)(EAX));
  /* 11efa877 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa87a push ecx */
  push32((uint32_t)(ECX));
  /* 11efa87b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa87e push edx */
  push32((uint32_t)(EDX));
  /* 11efa87f push 0x11f2a4a4 */
  push32((uint32_t)(0x11f2a4a4u));
  /* 11efa884 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11efa889 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11efa88f push eax */
  push32((uint32_t)(EAX));
  /* 11efa890 call 0x11f000d0 */
  push32(0x11efa895u); f_11f000d0();
  /* 11efa895 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa89a jge 0x11efa8b0 */
  if ((C.sf==C.of)) goto L_11efa8b0;
  /* 11efa89c push 0x11f2a4e0 */
  push32((uint32_t)(0x11f2a4e0u));
  /* 11efa8a1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11efa8a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa8a8 call 0x11f001d0 */
  push32(0x11efa8adu); f_11f001d0();
  /* 11efa8ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa8b0:;
  /* 11efa8b0 jmp 0x11efa8c8 */
  goto L_11efa8c8;
L_11efa8b2:;
  /* 11efa8b2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11efa8b8 push edx */
  push32((uint32_t)(EDX));
  /* 11efa8b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11efa8bf push eax */
  push32((uint32_t)(EAX));
  /* 11efa8c0 call 0x11f001d0 */
  push32(0x11efa8c5u); f_11f001d0();
  /* 11efa8c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efa8c8:;
  /* 11efa8c8 cmp dword ptr [0x11f32208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f32208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa8cf je 0x11efa90c */
  if (C.zf) goto L_11efa90c;
  /* 11efa8d1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11efa8d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa8d8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11efa8de push edx */
  push32((uint32_t)(EDX));
  /* 11efa8df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa8e2 push eax */
  push32((uint32_t)(EAX));
  /* 11efa8e3 call dword ptr [0x11f32208] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f32208))), 0x11efa8e9u);
  /* 11efa8e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa8ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efa8ee je 0x11efa90c */
  if (C.zf) goto L_11efa90c;
  /* 11efa8f0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa8f4 jne 0x11efa901 */
  if (!C.zf) goto L_11efa901;
  /* 11efa8f6 push 0x11f2de30 */
  push32((uint32_t)(0x11f2de30u));
  /* 11efa8fb call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11efa901u);
L_11efa901:;
  /* 11efa901 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11efa907 jmp 0x11efaa0b */
  goto L_11efaa0b;
L_11efa90c:;
  /* 11efa90c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa90f mov edx, dword ptr [ecx*4 + 0x11f2de34] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2de34)));
  /* 11efa916 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11efa919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efa91b je 0x11efa95b */
  if (C.zf) goto L_11efa95b;
  /* 11efa91d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa920 cmp dword ptr [eax*4 + 0x11f2de40], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11f2de40))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa928 je 0x11efa95b */
  if (C.zf) goto L_11efa95b;
  /* 11efa92a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efa92c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11efa932 push ecx */
  push32((uint32_t)(ECX));
  /* 11efa933 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11efa939 push edx */
  push32((uint32_t)(EDX));
  /* 11efa93a call 0x11f00050 */
  push32(0x11efa93fu); f_11f00050();
  /* 11efa93f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa942 push eax */
  push32((uint32_t)(EAX));
  /* 11efa943 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11efa949 push eax */
  push32((uint32_t)(EAX));
  /* 11efa94a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa94d mov edx, dword ptr [ecx*4 + 0x11f2de40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2de40)));
  /* 11efa954 push edx */
  push32((uint32_t)(EDX));
  /* 11efa955 call dword ptr [0x11f33414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33414))), 0x11efa95bu);
L_11efa95b:;
  /* 11efa95b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa95e mov ecx, dword ptr [eax*4 + 0x11f2de34] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2de34)));
  /* 11efa965 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11efa968 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efa96a je 0x11efa979 */
  if (C.zf) goto L_11efa979;
  /* 11efa96c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11efa972 push edx */
  push32((uint32_t)(EDX));
  /* 11efa973 call dword ptr [0x11f33318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33318))), 0x11efa979u);
L_11efa979:;
  /* 11efa979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa97c mov ecx, dword ptr [eax*4 + 0x11f2de34] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2de34)));
  /* 11efa983 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11efa986 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efa988 je 0x11efa9f8 */
  if (C.zf) goto L_11efa9f8;
  /* 11efa98a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa98e je 0x11efa9ad */
  if (C.zf) goto L_11efa9ad;
  /* 11efa990 push 0xa */
  push32((uint32_t)(0xau));
  /* 11efa992 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11efa998 push edx */
  push32((uint32_t)(EDX));
  /* 11efa999 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efa99c push eax */
  push32((uint32_t)(EAX));
  /* 11efa99d call 0x11effd60 */
  push32(0x11efa9a2u); f_11effd60();
  /* 11efa9a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa9a5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11efa9ab jmp 0x11efa9b7 */
  goto L_11efa9b7;
L_11efa9ad:;
  /* 11efa9ad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11efa9b7:;
  /* 11efa9b7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11efa9bd push ecx */
  push32((uint32_t)(ECX));
  /* 11efa9be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efa9c1 push edx */
  push32((uint32_t)(EDX));
  /* 11efa9c2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11efa9c8 push eax */
  push32((uint32_t)(EAX));
  /* 11efa9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efa9cc push ecx */
  push32((uint32_t)(ECX));
  /* 11efa9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efa9d0 push edx */
  push32((uint32_t)(EDX));
  /* 11efa9d1 call 0x11efaa10 */
  push32(0x11efa9d6u); f_11efaa10();
  /* 11efa9d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efa9d9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11efa9df cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa9e3 jne 0x11efa9f0 */
  if (!C.zf) goto L_11efa9f0;
  /* 11efa9e5 push 0x11f2de30 */
  push32((uint32_t)(0x11f2de30u));
  /* 11efa9ea call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11efa9f0u);
L_11efa9f0:;
  /* 11efa9f0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11efa9f6 jmp 0x11efaa0b */
  goto L_11efaa0b;
L_11efa9f8:;
  /* 11efa9f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efa9fc jne 0x11efaa09 */
  if (!C.zf) goto L_11efaa09;
  /* 11efa9fe push 0x11f2de30 */
  push32((uint32_t)(0x11f2de30u));
  /* 11efaa03 call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11efaa09u);
L_11efaa09:;
  /* 11efaa09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11efaa0b:;
  /* 11efaa0b pop edi */
  EDI = (pop32());
  /* 11efaa0c mov esp, ebp */
  ESP = (EBP);
  /* 11efaa0e pop ebp */
  EBP = (pop32());
  /* 11efaa0f ret  */
  ESPCHK(0x11efa680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x11efaa10 (780 bytes, 197 insns) */
void f_11efaa10(void) {
  FTRACE(0x11efaa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efaa10 push ebp */
  push32((uint32_t)(EBP));
  /* 11efaa11 mov ebp, esp */
  EBP = (ESP);
  /* 11efaa13 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11efaa18 call 0x11f003c0 */
  push32(0x11efaa1du); f_11f003c0();
L_11efaa1d:;
  /* 11efaa1d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaa21 jne 0x11efaa48 */
  if (!C.zf) goto L_11efaa48;
  /* 11efaa23 push 0x11f2a69c */
  push32((uint32_t)(0x11f2a69cu));
  /* 11efaa28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efaa2a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11efaa2f push 0x11f2a690 */
  push32((uint32_t)(0x11f2a690u));
  /* 11efaa34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efaa36 call 0x11efa680 */
  push32(0x11efaa3bu); f_11efa680();
  /* 11efaa3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efaa3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaa41 jne 0x11efaa48 */
  if (!C.zf) goto L_11efaa48;
  /* 11efaa43 call 0x11efa570 */
  push32(0x11efaa48u); f_11efa570();
L_11efaa48:;
  /* 11efaa48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efaa4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efaa4c jne 0x11efaa1d */
  if (!C.zf) goto L_11efaa1d;
  /* 11efaa4e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11efaa53 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11efaa59 push ecx */
  push32((uint32_t)(ECX));
  /* 11efaa5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efaa5c call dword ptr [0x11f3342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3342c))), 0x11efaa62u);
  /* 11efaa62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efaa64 jne 0x11efaa7a */
  if (!C.zf) goto L_11efaa7a;
  /* 11efaa66 push 0x11f2a678 */
  push32((uint32_t)(0x11f2a678u));
  /* 11efaa6b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11efaa71 push edx */
  push32((uint32_t)(EDX));
  /* 11efaa72 call 0x11f001d0 */
  push32(0x11efaa77u); f_11f001d0();
  /* 11efaa77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efaa7a:;
  /* 11efaa7a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11efaa80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efaa83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efaa86 push ecx */
  push32((uint32_t)(ECX));
  /* 11efaa87 call 0x11f00050 */
  push32(0x11efaa8cu); f_11f00050();
  /* 11efaa8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efaa8f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaa92 jbe 0x11efaabd */
  if ((C.cf||C.zf)) goto L_11efaabd;
  /* 11efaa94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efaa97 push edx */
  push32((uint32_t)(EDX));
  /* 11efaa98 call 0x11f00050 */
  push32(0x11efaa9du); f_11f00050();
  /* 11efaa9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efaaa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efaaa3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11efaaa7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efaaaa push 3 */
  push32((uint32_t)(0x3u));
  /* 11efaaac push 0x11f2a674 */
  push32((uint32_t)(0x11f2a674u));
  /* 11efaab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efaab4 push eax */
  push32((uint32_t)(EAX));
  /* 11efaab5 call 0x11f00a40 */
  push32(0x11efaabau); f_11f00a40();
  /* 11efaaba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efaabd:;
  /* 11efaabd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efaac0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11efaac6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaacd je 0x11efab18 */
  if (C.zf) goto L_11efab18;
  /* 11efaacf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11efaad5 push edx */
  push32((uint32_t)(EDX));
  /* 11efaad6 call 0x11f00050 */
  push32(0x11efaadbu); f_11f00050();
  /* 11efaadb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efaade cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaae1 jbe 0x11efab18 */
  if ((C.cf||C.zf)) goto L_11efab18;
  /* 11efaae3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11efaae9 push eax */
  push32((uint32_t)(EAX));
  /* 11efaaea call 0x11f00050 */
  push32(0x11efaaefu); f_11f00050();
  /* 11efaaef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efaaf2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11efaaf8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11efaafc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11efab02 push 3 */
  push32((uint32_t)(0x3u));
  /* 11efab04 push 0x11f2a674 */
  push32((uint32_t)(0x11f2a674u));
  /* 11efab09 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11efab0f push eax */
  push32((uint32_t)(EAX));
  /* 11efab10 call 0x11f00a40 */
  push32(0x11efab15u); f_11f00a40();
  /* 11efab15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efab18:;
  /* 11efab18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efab1c jne 0x11efab2a */
  if (!C.zf) goto L_11efab2a;
  /* 11efab1e mov dword ptr [ebp - 0x1114], 0x11f2a600 */
  w32((uint32_t)(EBP + -0x1114), (0x11f2a600u));
  /* 11efab28 jmp 0x11efab34 */
  goto L_11efab34;
L_11efab2a:;
  /* 11efab2a mov dword ptr [ebp - 0x1114], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1114), (0x11f2a360u));
L_11efab34:;
  /* 11efab34 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efab37 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11efab3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efab3c je 0x11efab49 */
  if (C.zf) goto L_11efab49;
  /* 11efab3e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efab41 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11efab47 jmp 0x11efab53 */
  goto L_11efab53;
L_11efab49:;
  /* 11efab49 mov dword ptr [ebp - 0x1118], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1118), (0x11f2a360u));
L_11efab53:;
  /* 11efab53 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efab56 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11efab59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efab5b je 0x11efab6f */
  if (C.zf) goto L_11efab6f;
  /* 11efab5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efab61 jne 0x11efab6f */
  if (!C.zf) goto L_11efab6f;
  /* 11efab63 mov dword ptr [ebp - 0x111c], 0x11f2a5f0 */
  w32((uint32_t)(EBP + -0x111c), (0x11f2a5f0u));
  /* 11efab6d jmp 0x11efab79 */
  goto L_11efab79;
L_11efab6f:;
  /* 11efab6f mov dword ptr [ebp - 0x111c], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x111c), (0x11f2a360u));
L_11efab79:;
  /* 11efab79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efab7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efab7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efab81 je 0x11efab8f */
  if (C.zf) goto L_11efab8f;
  /* 11efab83 mov dword ptr [ebp - 0x1120], 0x11f2a5ec */
  w32((uint32_t)(EBP + -0x1120), (0x11f2a5ecu));
  /* 11efab8d jmp 0x11efab99 */
  goto L_11efab99;
L_11efab8f:;
  /* 11efab8f mov dword ptr [ebp - 0x1120], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1120), (0x11f2a360u));
L_11efab99:;
  /* 11efab99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efab9d je 0x11efabaa */
  if (C.zf) goto L_11efabaa;
  /* 11efab9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efaba2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11efaba8 jmp 0x11efabb4 */
  goto L_11efabb4;
L_11efabaa:;
  /* 11efabaa mov dword ptr [ebp - 0x1124], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1124), (0x11f2a360u));
L_11efabb4:;
  /* 11efabb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efabb8 je 0x11efabc6 */
  if (C.zf) goto L_11efabc6;
  /* 11efabba mov dword ptr [ebp - 0x1128], 0x11f2a5e4 */
  w32((uint32_t)(EBP + -0x1128), (0x11f2a5e4u));
  /* 11efabc4 jmp 0x11efabd0 */
  goto L_11efabd0;
L_11efabc6:;
  /* 11efabc6 mov dword ptr [ebp - 0x1128], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1128), (0x11f2a360u));
L_11efabd0:;
  /* 11efabd0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efabd4 je 0x11efabe1 */
  if (C.zf) goto L_11efabe1;
  /* 11efabd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efabd9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11efabdf jmp 0x11efabeb */
  goto L_11efabeb;
L_11efabe1:;
  /* 11efabe1 mov dword ptr [ebp - 0x112c], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x112c), (0x11f2a360u));
L_11efabeb:;
  /* 11efabeb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efabef je 0x11efabfd */
  if (C.zf) goto L_11efabfd;
  /* 11efabf1 mov dword ptr [ebp - 0x1130], 0x11f2a5dc */
  w32((uint32_t)(EBP + -0x1130), (0x11f2a5dcu));
  /* 11efabfb jmp 0x11efac07 */
  goto L_11efac07;
L_11efabfd:;
  /* 11efabfd mov dword ptr [ebp - 0x1130], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1130), (0x11f2a360u));
L_11efac07:;
  /* 11efac07 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efac0e je 0x11efac1e */
  if (C.zf) goto L_11efac1e;
  /* 11efac10 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11efac16 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11efac1c jmp 0x11efac28 */
  goto L_11efac28;
L_11efac1e:;
  /* 11efac1e mov dword ptr [ebp - 0x1134], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1134), (0x11f2a360u));
L_11efac28:;
  /* 11efac28 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efac2f je 0x11efac3d */
  if (C.zf) goto L_11efac3d;
  /* 11efac31 mov dword ptr [ebp - 0x1138], 0x11f2a5d0 */
  w32((uint32_t)(EBP + -0x1138), (0x11f2a5d0u));
  /* 11efac3b jmp 0x11efac47 */
  goto L_11efac47;
L_11efac3d:;
  /* 11efac3d mov dword ptr [ebp - 0x1138], 0x11f2a360 */
  w32((uint32_t)(EBP + -0x1138), (0x11f2a360u));
L_11efac47:;
  /* 11efac47 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11efac4d push edx */
  push32((uint32_t)(EDX));
  /* 11efac4e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11efac54 push eax */
  push32((uint32_t)(EAX));
  /* 11efac55 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11efac5b push ecx */
  push32((uint32_t)(ECX));
  /* 11efac5c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11efac62 push edx */
  push32((uint32_t)(EDX));
  /* 11efac63 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11efac69 push eax */
  push32((uint32_t)(EAX));
  /* 11efac6a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11efac70 push ecx */
  push32((uint32_t)(ECX));
  /* 11efac71 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11efac77 push edx */
  push32((uint32_t)(EDX));
  /* 11efac78 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11efac7e push eax */
  push32((uint32_t)(EAX));
  /* 11efac7f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11efac85 push ecx */
  push32((uint32_t)(ECX));
  /* 11efac86 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11efac8c push edx */
  push32((uint32_t)(EDX));
  /* 11efac8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efac90 push eax */
  push32((uint32_t)(EAX));
  /* 11efac91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efac94 mov edx, dword ptr [ecx*4 + 0x11f2de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2de4c)));
  /* 11efac9b push edx */
  push32((uint32_t)(EDX));
  /* 11efac9c push 0x11f2a57c */
  push32((uint32_t)(0x11f2a57cu));
  /* 11efaca1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11efaca6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11efacac push eax */
  push32((uint32_t)(EAX));
  /* 11efacad call 0x11f000d0 */
  push32(0x11efacb2u); f_11f000d0();
  /* 11efacb2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efacb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efacb7 jge 0x11efaccd */
  if ((C.sf==C.of)) goto L_11efaccd;
  /* 11efacb9 push 0x11f2a4e0 */
  push32((uint32_t)(0x11f2a4e0u));
  /* 11efacbe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11efacc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11efacc5 call 0x11f001d0 */
  push32(0x11efaccau); f_11f001d0();
  /* 11efacca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efaccd:;
  /* 11efaccd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11efacd2 push 0x11f2a558 */
  push32((uint32_t)(0x11f2a558u));
  /* 11efacd7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11efacdd push edx */
  push32((uint32_t)(EDX));
  /* 11efacde call 0x11f00980 */
  push32(0x11eface3u); f_11f00980();
  /* 11eface3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eface6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11efacec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efacf3 jne 0x11efad06 */
  if (!C.zf) goto L_11efad06;
  /* 11efacf5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11efacf7 call 0x11f006c0 */
  push32(0x11efacfcu); f_11f006c0();
  /* 11efacfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efacff push 3 */
  push32((uint32_t)(0x3u));
  /* 11efad01 call 0x11efeb30 */
  push32(0x11efad06u); f_11efeb30();
L_11efad06:;
  /* 11efad06 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efad0d jne 0x11efad16 */
  if (!C.zf) goto L_11efad16;
  /* 11efad0f mov eax, 1 */
  EAX = (0x1u);
  /* 11efad14 jmp 0x11efad18 */
  goto L_11efad18;
L_11efad16:;
  /* 11efad16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11efad18:;
  /* 11efad18 mov esp, ebp */
  ESP = (EBP);
  /* 11efad1a pop ebp */
  EBP = (pop32());
  /* 11efad1b ret  */
  ESPCHK(0x11efaa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af1c @ 0x11efaf1c (25 bytes, 7 insns) */
void f_11efaf1c(void) {
  FTRACE(0x11efaf1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efaf1c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11efaf21 je 0x11efaf29 */
  if (C.zf) goto L_11efaf29;
  /* 11efaf23 mov eax, 7 */
  EAX = (0x7u);
  /* 11efaf28 ret  */
  ESPCHK(0x11efaf1cu, _esp0);
  ESP += 4; return;
L_11efaf29:;
  /* 11efaf29 fadd qword ptr [0x11f2a6c0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11f2a6c0)));
  /* 11efaf2f mov eax, 1 */
  EAX = (0x1u);
  /* 11efaf34 ret  */
  ESPCHK(0x11efaf1cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11efaf35 (67 bytes, 21 insns) */
void f_11efaf35(void) {
  FTRACE(0x11efaf35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efaf35 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efaf38 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11efaf3d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaf42 je 0x11efaf47 */
  if (C.zf) goto L_11efaf47;
  /* 11efaf44 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11efaf46 ret  */
  ESPCHK(0x11efaf35u, _esp0);
  ESP += 4; return;
L_11efaf47:;
  /* 11efaf47 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efaf4a sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efaf4d or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11efaf52 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11efaf56 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efaf59 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11efaf5b shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11efaf5f shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11efaf62 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11efaf66 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11efaf69 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11efaf6c add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efaf6f test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11efaf74 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efaf77 ret  */
  ESPCHK(0x11efaf35u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af78 @ 0x11efaf78 (22 bytes, 7 insns) */
void f_11efaf78(void) {
  FTRACE(0x11efaf78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efaf78 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11efaf7c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11efaf81 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efaf86 je 0x11efaf89 */
  if (C.zf) goto L_11efaf89;
  /* 11efaf88 ret  */
  ESPCHK(0x11efaf78u, _esp0);
  ESP += 4; return;
L_11efaf89:;
  /* 11efaf89 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11efaf8d ret  */
  ESPCHK(0x11efaf78u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11efaf9b (42 bytes, 16 insns) */
void f_11efaf9b(void) {
  FTRACE(0x11efaf9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efaf9b mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11efaf9f cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11efafa3 je 0x11efafc3 */
  if (C.zf) goto L_11efafc3;
  /* 11efafa5 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11efafa9 je 0x11efafc0 */
  if (C.zf) goto L_11efafc0;
  /* 11efafab wait  */
  /* wait (no observable integer/reg state) */
  /* 11efafac fnstsw ax */
  AX = fpu_status();
  /* 11efafae and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11efafb2 je 0x11efafc0 */
  if (C.zf) goto L_11efafc0;
  /* 11efafb4 mov eax, 8 */
  EAX = (0x8u);
  /* 11efafb9 call 0x11efb097 */
  push32(0x11efafbeu); f_11efb097();
  /* 11efafbe pop edx */
  EDX = (pop32());
  /* 11efafbf ret  */
  ESPCHK(0x11efaf9bu, _esp0);
  ESP += 4; return;
L_11efafc0:;
  /* 11efafc0 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11efafc3:;
  /* 11efafc3 pop edx */
  EDX = (pop32());
  /* 11efafc4 ret  */
  ESPCHK(0x11efaf9bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b080 @ 0x11efb080 (23 bytes, 9 insns) */
void f_11efb080(void) {
  FTRACE(0x11efb080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb080 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb081 mov ebp, esp */
  EBP = (ESP);
  /* 11efb083 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb086 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11efb089 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efb08c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11efb08f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efb092 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efb095 jmp 0x11efb0a0 */
  jmp_ind(0x11efb0a0u); return;
}

/* __startOneArgErrorHandling @ 0x11efb097 (60 bytes, 23 insns) */
void f_11efb097(void) {
  FTRACE(0x11efb097u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb097 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb098 mov ebp, esp */
  EBP = (ESP);
  /* 11efb09a add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb09d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11efb0a0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11efb0a3 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11efb0a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb0a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb0ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11efb0af mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11efb0b2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11efb0b5 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11efb0b8 push eax */
  push32((uint32_t)(EAX));
  /* 11efb0b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb0ba push edx */
  push32((uint32_t)(EDX));
  /* 11efb0bb call 0x11f00b40 */
  push32(0x11efb0c0u); f_11f00b40();
  /* 11efb0c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb0c3 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11efb0c6 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11efb0cc je 0x11efb0d1 */
  if (C.zf) goto L_11efb0d1;
  /* 11efb0ce fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11efb0d1:;
  /* 11efb0d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11efb0d2 ret  */
  ESPCHK(0x11efb097u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11efb0e0 (23 bytes, 8 insns) */
void f_11efb0e0(void) {
  FTRACE(0x11efb0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb0e1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb0e3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11efb0e8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11efb0ed call 0x11f00d50 */
  push32(0x11efb0f2u); f_11f00d50();
  /* 11efb0f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb0f5 pop ebp */
  EBP = (pop32());
  /* 11efb0f6 ret  */
  ESPCHK(0x11efb0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x11efb100 (94 bytes, 30 insns) */
void f_11efb100(void) {
  FTRACE(0x11efb100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb100 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb101 mov ebp, esp */
  EBP = (ESP);
  /* 11efb103 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb106 push ebx */
  push32((uint32_t)(EBX));
  /* 11efb107 push esi */
  push32((uint32_t)(ESI));
  /* 11efb108 push edi */
  push32((uint32_t)(EDI));
  /* 11efb109 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11efb110 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11efb117 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11efb11e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11efb125 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11efb128 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11efb12b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11efb12e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11efb131 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11efb134 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11efb137 fcomp qword ptr [0x11f2a708] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a708)));
  (void)fpu_pop();
  /* 11efb13d fnstsw ax */
  AX = fpu_status();
  /* 11efb13f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11efb142 jne 0x11efb14d */
  if (!C.zf) goto L_11efb14d;
  /* 11efb144 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11efb14b jmp 0x11efb154 */
  goto L_11efb154;
L_11efb14d:;
  /* 11efb14d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11efb154:;
  /* 11efb154 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11efb157 pop edi */
  EDI = (pop32());
  /* 11efb158 pop esi */
  ESI = (pop32());
  /* 11efb159 pop ebx */
  EBX = (pop32());
  /* 11efb15a mov esp, ebp */
  ESP = (EBP);
  /* 11efb15c pop ebp */
  EBP = (pop32());
  /* 11efb15d ret  */
  ESPCHK(0x11efb100u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11efb160 (66 bytes, 22 insns) */
void f_11efb160(void) {
  FTRACE(0x11efb160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb160 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb161 mov ebp, esp */
  EBP = (ESP);
  /* 11efb163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb166 push 0x11f2a72c */
  push32((uint32_t)(0x11f2a72cu));
  /* 11efb16b call dword ptr [0x11f33430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33430))), 0x11efb171u);
  /* 11efb171 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb174 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb178 je 0x11efb199 */
  if (C.zf) goto L_11efb199;
  /* 11efb17a push 0x11f2a710 */
  push32((uint32_t)(0x11f2a710u));
  /* 11efb17f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb182 push eax */
  push32((uint32_t)(EAX));
  /* 11efb183 call dword ptr [0x11f33314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33314))), 0x11efb189u);
  /* 11efb189 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efb18c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb190 je 0x11efb199 */
  if (C.zf) goto L_11efb199;
  /* 11efb192 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efb194 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11efb197u);
  /* 11efb197 jmp 0x11efb19e */
  goto L_11efb19e;
L_11efb199:;
  /* 11efb199 call 0x11efb100 */
  push32(0x11efb19eu); f_11efb100();
L_11efb19e:;
  /* 11efb19e mov esp, ebp */
  ESP = (EBP);
  /* 11efb1a0 pop ebp */
  EBP = (pop32());
  /* 11efb1a1 ret  */
  ESPCHK(0x11efb160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1b0 @ 0x11efb1b0 (168 bytes, 59 insns) */
void f_11efb1b0(void) {
  FTRACE(0x11efb1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb1b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb1b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb1bc push ecx */
  push32((uint32_t)(ECX));
  /* 11efb1bd call 0x11f01230 */
  push32(0x11efb1c2u); f_11f01230();
  /* 11efb1c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb1c5 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb1c8 je 0x11efb210 */
  if (C.zf) goto L_11efb210;
L_11efb1ca:;
  /* 11efb1ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb1cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb1d0 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11efb1d3 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb1da jle 0x11efb1f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11efb1f2;
  /* 11efb1dc push 4 */
  push32((uint32_t)(0x4u));
  /* 11efb1de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb1e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb1e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb1e5 call 0x11f01160 */
  push32(0x11efb1eau); f_11f01160();
  /* 11efb1ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb1ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efb1f0 jmp 0x11efb20a */
  goto L_11efb20a;
L_11efb1f2:;
  /* 11efb1f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb1f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11efb1f8 mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11efb1fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efb200 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11efb204 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11efb207 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11efb20a:;
  /* 11efb20a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb20e jne 0x11efb1ca */
  if (!C.zf) goto L_11efb1ca;
L_11efb210:;
  /* 11efb210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb213 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11efb215 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11efb218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb21b mov al, byte ptr [0x11f2e054] */
  AL = (r8((uint32_t)(0x11f2e054)));
  /* 11efb220 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11efb222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb228 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11efb22b:;
  /* 11efb22b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb22e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11efb230 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11efb233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb236 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11efb239 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11efb23b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11efb23e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11efb241 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb244 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11efb247 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb24a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb24d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11efb250 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efb252 jne 0x11efb22b */
  if (!C.zf) goto L_11efb22b;
  /* 11efb254 mov esp, ebp */
  ESP = (EBP);
  /* 11efb256 pop ebp */
  EBP = (pop32());
  /* 11efb257 ret  */
  ESPCHK(0x11efb1b0u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11efb260 (215 bytes, 78 insns) */
void f_11efb260(void) {
  FTRACE(0x11efb260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb260 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb261 mov ebp, esp */
  EBP = (ESP);
  /* 11efb263 push ecx */
  push32((uint32_t)(ECX));
L_11efb264:;
  /* 11efb264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb267 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb26a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efb26c je 0x11efb28a */
  if (C.zf) goto L_11efb28a;
  /* 11efb26e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb271 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11efb274 movsx ecx, byte ptr [0x11f2e054] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f2e054))));
  /* 11efb27b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb27d je 0x11efb28a */
  if (C.zf) goto L_11efb28a;
  /* 11efb27f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb282 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb285 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11efb288 jmp 0x11efb264 */
  goto L_11efb264;
L_11efb28a:;
  /* 11efb28a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb28d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb293 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb296 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11efb299 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efb29b je 0x11efb333 */
  if (C.zf) goto L_11efb333;
L_11efb2a1:;
  /* 11efb2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2a4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb2a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efb2a9 je 0x11efb2cc */
  if (C.zf) goto L_11efb2cc;
  /* 11efb2ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11efb2b1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb2b4 je 0x11efb2cc */
  if (C.zf) goto L_11efb2cc;
  /* 11efb2b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11efb2bc cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb2bf je 0x11efb2cc */
  if (C.zf) goto L_11efb2cc;
  /* 11efb2c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb2c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11efb2ca jmp 0x11efb2a1 */
  goto L_11efb2a1;
L_11efb2cc:;
  /* 11efb2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efb2d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb2d8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11efb2db:;
  /* 11efb2db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb2e1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb2e4 jne 0x11efb2f1 */
  if (!C.zf) goto L_11efb2f1;
  /* 11efb2e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb2ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11efb2ef jmp 0x11efb2db */
  goto L_11efb2db;
L_11efb2f1:;
  /* 11efb2f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb2f4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb2f7 movsx edx, byte ptr [0x11f2e054] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f2e054))));
  /* 11efb2fe cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb300 jne 0x11efb30b */
  if (!C.zf) goto L_11efb30b;
  /* 11efb302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb305 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb308 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11efb30b:;
  /* 11efb30b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb30e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb311 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11efb314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb31a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11efb31c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11efb31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11efb324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb327 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb32a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efb32d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efb32f je 0x11efb333 */
  if (C.zf) goto L_11efb333;
  /* 11efb331 jmp 0x11efb30b */
  goto L_11efb30b;
L_11efb333:;
  /* 11efb333 mov esp, ebp */
  ESP = (EBP);
  /* 11efb335 pop ebp */
  EBP = (pop32());
  /* 11efb336 ret  */
  ESPCHK(0x11efb260u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11efb340 (45 bytes, 16 insns) */
void f_11efb340(void) {
  FTRACE(0x11efb340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb340 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb341 mov ebp, esp */
  EBP = (ESP);
  /* 11efb343 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb347 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11efb349 fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11efb34f fnstsw ax */
  AX = fpu_status();
  /* 11efb351 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11efb354 jne 0x11efb35f */
  if (!C.zf) goto L_11efb35f;
  /* 11efb356 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efb35d jmp 0x11efb366 */
  goto L_11efb366;
L_11efb35f:;
  /* 11efb35f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efb366:;
  /* 11efb366 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb369 mov esp, ebp */
  ESP = (EBP);
  /* 11efb36b pop ebp */
  EBP = (pop32());
  /* 11efb36c ret  */
  ESPCHK(0x11efb340u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11efb370 (72 bytes, 29 insns) */
void f_11efb370(void) {
  FTRACE(0x11efb370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb370 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb371 mov ebp, esp */
  EBP = (ESP);
  /* 11efb373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb37a je 0x11efb39c */
  if (C.zf) goto L_11efb39c;
  /* 11efb37c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb37f push eax */
  push32((uint32_t)(EAX));
  /* 11efb380 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11efb383 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb384 call 0x11f01b20 */
  push32(0x11efb389u); f_11f01b20();
  /* 11efb389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb38c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb38f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb392 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11efb394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb397 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11efb39a jmp 0x11efb3b4 */
  goto L_11efb3b4;
L_11efb39c:;
  /* 11efb39c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb39f push edx */
  push32((uint32_t)(EDX));
  /* 11efb3a0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11efb3a3 push eax */
  push32((uint32_t)(EAX));
  /* 11efb3a4 call 0x11f01ba0 */
  push32(0x11efb3a9u); f_11f01ba0();
  /* 11efb3a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb3ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb3af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efb3b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11efb3b4:;
  /* 11efb3b4 mov esp, ebp */
  ESP = (EBP);
  /* 11efb3b6 pop ebp */
  EBP = (pop32());
  /* 11efb3b7 ret  */
  ESPCHK(0x11efb370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c0 @ 0x11efb3c0 (118 bytes, 49 insns) */
void f_11efb3c0(void) {
  FTRACE(0x11efb3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb3c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb3c6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11efb3c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb3cc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11efb3cf push ecx */
  push32((uint32_t)(ECX));
  /* 11efb3d0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11efb3d3 push edx */
  push32((uint32_t)(EDX));
  /* 11efb3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb3d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efb3da push ecx */
  push32((uint32_t)(ECX));
  /* 11efb3db mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11efb3dd push edx */
  push32((uint32_t)(EDX));
  /* 11efb3de call 0x11f01ce0 */
  push32(0x11efb3e3u); f_11f01ce0();
  /* 11efb3e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb3e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb3e9 push eax */
  push32((uint32_t)(EAX));
  /* 11efb3ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb3ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb3f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efb3f6 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb3f9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11efb3fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb3ff add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb401 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efb403 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb407 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11efb40a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb40c push ecx */
  push32((uint32_t)(ECX));
  /* 11efb40d call 0x11f01be0 */
  push32(0x11efb412u); f_11f01be0();
  /* 11efb412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb415 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efb417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb41a push eax */
  push32((uint32_t)(EAX));
  /* 11efb41b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb41e push ecx */
  push32((uint32_t)(ECX));
  /* 11efb41f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb422 push edx */
  push32((uint32_t)(EDX));
  /* 11efb423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb426 push eax */
  push32((uint32_t)(EAX));
  /* 11efb427 call 0x11efb440 */
  push32(0x11efb42cu); f_11efb440();
  /* 11efb42c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb42f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb432 mov esp, ebp */
  ESP = (EBP);
  /* 11efb434 pop ebp */
  EBP = (pop32());
  /* 11efb435 ret  */
  ESPCHK(0x11efb3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b440 @ 0x11efb440 (358 bytes, 128 insns) */
void f_11efb440(void) {
  FTRACE(0x11efb440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb440 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb441 mov ebp, esp */
  EBP = (ESP);
  /* 11efb443 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb446 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11efb44a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efb44c je 0x11efb477 */
  if (C.zf) goto L_11efb477;
  /* 11efb44e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb451 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efb453 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb456 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11efb459 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb45c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb45e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb461 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efb463 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb467 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11efb46a push ecx */
  push32((uint32_t)(ECX));
  /* 11efb46b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb46e push edx */
  push32((uint32_t)(EDX));
  /* 11efb46f call 0x11efb8b0 */
  push32(0x11efb474u); f_11efb8b0();
  /* 11efb474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb477:;
  /* 11efb477 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb47a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb47d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb480 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb483 jne 0x11efb494 */
  if (!C.zf) goto L_11efb494;
  /* 11efb485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb488 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11efb48b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb48e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb491 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efb494:;
  /* 11efb494 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb498 jle 0x11efb4b8 */
  if ((C.zf||C.sf!=C.of)) goto L_11efb4b8;
  /* 11efb49a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb49d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb4a0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11efb4a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11efb4a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb4a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb4ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efb4ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb4b1 mov al, byte ptr [0x11f2e054] */
  AL = (r8((uint32_t)(0x11f2e054)));
  /* 11efb4b6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11efb4b8:;
  /* 11efb4b8 push 0x11f2a740 */
  push32((uint32_t)(0x11f2a740u));
  /* 11efb4bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb4c0 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb4c3 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11efb4c7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efb4c9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb4cb inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11efb4cc add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb4ce push ecx */
  push32((uint32_t)(ECX));
  /* 11efb4cf call 0x11f001d0 */
  push32(0x11efb4d4u); f_11f001d0();
  /* 11efb4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb4d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb4da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb4de je 0x11efb4e6 */
  if (C.zf) goto L_11efb4e6;
  /* 11efb4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb4e3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11efb4e6:;
  /* 11efb4e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb4e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb4ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efb4ef mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb4f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11efb4f5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11efb4f8 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb4fb je 0x11efb59f */
  if (C.zf) goto L_11efb59f;
  /* 11efb501 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb504 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efb507 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb50a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efb50d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb511 jge 0x11efb521 */
  if ((C.sf==C.of)) goto L_11efb521;
  /* 11efb513 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb516 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efb518 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11efb51b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb51e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11efb521:;
  /* 11efb521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb524 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb527 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb52a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb52e jl 0x11efb555 */
  if ((C.sf!=C.of)) goto L_11efb555;
  /* 11efb530 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb533 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11efb534 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11efb539 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11efb53b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb53e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11efb540 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11efb542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb545 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11efb547 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb54a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11efb54b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11efb550 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11efb552 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11efb555:;
  /* 11efb555 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb558 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb55b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efb55e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb562 jl 0x11efb589 */
  if ((C.sf!=C.of)) goto L_11efb589;
  /* 11efb564 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb567 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11efb568 mov ecx, 0xa */
  ECX = (0xau);
  /* 11efb56d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11efb56f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb572 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11efb574 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11efb576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb579 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11efb57b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb57e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11efb57f mov ecx, 0xa */
  ECX = (0xau);
  /* 11efb584 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11efb586 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11efb589:;
  /* 11efb589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb58c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb58f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efb592 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb595 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11efb597 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11efb59a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb59d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11efb59f:;
  /* 11efb59f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb5a2 mov esp, ebp */
  ESP = (EBP);
  /* 11efb5a4 pop ebp */
  EBP = (pop32());
  /* 11efb5a5 ret  */
  ESPCHK(0x11efb440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x11efb5b0 (106 bytes, 44 insns) */
void f_11efb5b0(void) {
  FTRACE(0x11efb5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb5b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb5b6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11efb5b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb5bc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11efb5bf push ecx */
  push32((uint32_t)(ECX));
  /* 11efb5c0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11efb5c3 push edx */
  push32((uint32_t)(EDX));
  /* 11efb5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb5c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efb5ca push ecx */
  push32((uint32_t)(ECX));
  /* 11efb5cb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11efb5cd push edx */
  push32((uint32_t)(EDX));
  /* 11efb5ce call 0x11f01ce0 */
  push32(0x11efb5d3u); f_11f01ce0();
  /* 11efb5d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb5d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb5d9 push eax */
  push32((uint32_t)(EAX));
  /* 11efb5da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb5dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb5e0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb5e3 push edx */
  push32((uint32_t)(EDX));
  /* 11efb5e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb5e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efb5e9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb5ec sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11efb5ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb5f2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb5f4 push edx */
  push32((uint32_t)(EDX));
  /* 11efb5f5 call 0x11f01be0 */
  push32(0x11efb5fau); f_11f01be0();
  /* 11efb5fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb5fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11efb5ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb602 push eax */
  push32((uint32_t)(EAX));
  /* 11efb603 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb606 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb607 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb60a push edx */
  push32((uint32_t)(EDX));
  /* 11efb60b call 0x11efb620 */
  push32(0x11efb610u); f_11efb620();
  /* 11efb610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb613 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb616 mov esp, ebp */
  ESP = (EBP);
  /* 11efb618 pop ebp */
  EBP = (pop32());
  /* 11efb619 ret  */
  ESPCHK(0x11efb5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b620 @ 0x11efb620 (317 bytes, 113 insns) */
void f_11efb620(void) {
  FTRACE(0x11efb620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb620 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb621 mov ebp, esp */
  EBP = (ESP);
  /* 11efb623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb629 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efb62c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb62f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11efb632 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11efb636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efb638 je 0x11efb673 */
  if (C.zf) goto L_11efb673;
  /* 11efb63a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb63d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efb63f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb642 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11efb645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb648 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb64a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efb64d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efb650 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb653 jne 0x11efb673 */
  if (!C.zf) goto L_11efb673;
  /* 11efb655 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb658 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb65b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11efb65e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efb661 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11efb664 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efb667 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb66a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efb66d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efb670 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11efb673:;
  /* 11efb673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb676 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11efb679 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb67c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb67f jne 0x11efb690 */
  if (!C.zf) goto L_11efb690;
  /* 11efb681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb684 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11efb687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb68a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb68d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11efb690:;
  /* 11efb690 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb693 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb697 jg 0x11efb6b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11efb6b8;
  /* 11efb699 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efb69b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb69e push ecx */
  push32((uint32_t)(ECX));
  /* 11efb69f call 0x11efb8b0 */
  push32(0x11efb6a4u); f_11efb8b0();
  /* 11efb6a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb6a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb6aa mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11efb6ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb6b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb6b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb6b6 jmp 0x11efb6c4 */
  goto L_11efb6c4;
L_11efb6b8:;
  /* 11efb6b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb6bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb6be add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb6c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11efb6c4:;
  /* 11efb6c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb6c8 jle 0x11efb756 */
  if ((C.zf||C.sf!=C.of)) goto L_11efb756;
  /* 11efb6ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11efb6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb6d3 push eax */
  push32((uint32_t)(EAX));
  /* 11efb6d4 call 0x11efb8b0 */
  push32(0x11efb6d9u); f_11efb8b0();
  /* 11efb6d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb6dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb6df mov dl, byte ptr [0x11f2e054] */
  DL = (r8((uint32_t)(0x11f2e054)));
  /* 11efb6e5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11efb6e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb6ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb6ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb6f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb6f3 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb6f7 jge 0x11efb756 */
  if ((C.sf==C.of)) goto L_11efb756;
  /* 11efb6f9 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11efb6fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efb6ff je 0x11efb70e */
  if (C.zf) goto L_11efb70e;
  /* 11efb701 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb704 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efb707 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efb709 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11efb70c jmp 0x11efb734 */
  goto L_11efb734;
L_11efb70e:;
  /* 11efb70e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb711 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efb714 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efb716 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb719 jge 0x11efb723 */
  if ((C.sf==C.of)) goto L_11efb723;
  /* 11efb71b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb71e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11efb721 jmp 0x11efb72e */
  goto L_11efb72e;
L_11efb723:;
  /* 11efb723 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb726 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efb729 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11efb72b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11efb72e:;
  /* 11efb72e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efb731 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11efb734:;
  /* 11efb734 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb737 push edx */
  push32((uint32_t)(EDX));
  /* 11efb738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb73b push eax */
  push32((uint32_t)(EAX));
  /* 11efb73c call 0x11efb8b0 */
  push32(0x11efb741u); f_11efb8b0();
  /* 11efb741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb744 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb747 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb748 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11efb74a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb74d push edx */
  push32((uint32_t)(EDX));
  /* 11efb74e call 0x11f01ed0 */
  push32(0x11efb753u); f_11f01ed0();
  /* 11efb753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb756:;
  /* 11efb756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb759 mov esp, ebp */
  ESP = (EBP);
  /* 11efb75b pop ebp */
  EBP = (pop32());
  /* 11efb75c ret  */
  ESPCHK(0x11efb620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b760 @ 0x11efb760 (229 bytes, 89 insns) */
void f_11efb760(void) {
  FTRACE(0x11efb760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb760 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb761 mov ebp, esp */
  EBP = (ESP);
  /* 11efb763 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb766 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11efb76a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11efb76d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11efb770 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11efb773 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb774 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11efb777 push edx */
  push32((uint32_t)(EDX));
  /* 11efb778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb77b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efb77e push ecx */
  push32((uint32_t)(ECX));
  /* 11efb77f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11efb781 push edx */
  push32((uint32_t)(EDX));
  /* 11efb782 call 0x11f01ce0 */
  push32(0x11efb787u); f_11f01ce0();
  /* 11efb787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb78a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb78d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efb790 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb793 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11efb796 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb799 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efb79b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb79e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11efb7a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb7a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb7a6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efb7a9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb7ac push edx */
  push32((uint32_t)(EDX));
  /* 11efb7ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb7b0 push eax */
  push32((uint32_t)(EAX));
  /* 11efb7b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb7b5 call 0x11f01be0 */
  push32(0x11efb7bau); f_11f01be0();
  /* 11efb7ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb7bd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb7c0 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efb7c3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb7c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efb7c8 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb7cb setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11efb7ce mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11efb7d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb7d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efb7d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efb7da mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11efb7dd cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb7e1 jl 0x11efb7eb */
  if ((C.sf!=C.of)) goto L_11efb7eb;
  /* 11efb7e3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11efb7e6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb7e9 jl 0x11efb807 */
  if ((C.sf!=C.of)) goto L_11efb807;
L_11efb7eb:;
  /* 11efb7eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11efb7ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb7f0 push edx */
  push32((uint32_t)(EDX));
  /* 11efb7f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb7f4 push eax */
  push32((uint32_t)(EAX));
  /* 11efb7f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb7f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb7f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb7fc push edx */
  push32((uint32_t)(EDX));
  /* 11efb7fd call 0x11efb440 */
  push32(0x11efb802u); f_11efb440();
  /* 11efb802 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb805 jmp 0x11efb841 */
  goto L_11efb841;
L_11efb807:;
  /* 11efb807 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11efb80b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efb80d je 0x11efb82b */
  if (C.zf) goto L_11efb82b;
L_11efb80f:;
  /* 11efb80f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb812 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11efb815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb818 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb81b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb81e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efb820 je 0x11efb824 */
  if (C.zf) goto L_11efb824;
  /* 11efb822 jmp 0x11efb80f */
  goto L_11efb80f;
L_11efb824:;
  /* 11efb824 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb827 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11efb82b:;
  /* 11efb82b push 1 */
  push32((uint32_t)(0x1u));
  /* 11efb82d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11efb830 push edx */
  push32((uint32_t)(EDX));
  /* 11efb831 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efb834 push eax */
  push32((uint32_t)(EAX));
  /* 11efb835 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb838 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb839 call 0x11efb620 */
  push32(0x11efb83eu); f_11efb620();
  /* 11efb83e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb841:;
  /* 11efb841 mov esp, ebp */
  ESP = (EBP);
  /* 11efb843 pop ebp */
  EBP = (pop32());
  /* 11efb844 ret  */
  ESPCHK(0x11efb760u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11efb850 (95 bytes, 40 insns) */
void f_11efb850(void) {
  FTRACE(0x11efb850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb850 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb851 mov ebp, esp */
  EBP = (ESP);
  /* 11efb853 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb857 je 0x11efb85f */
  if (C.zf) goto L_11efb85f;
  /* 11efb859 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb85d jne 0x11efb879 */
  if (!C.zf) goto L_11efb879;
L_11efb85f:;
  /* 11efb85f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efb862 push eax */
  push32((uint32_t)(EAX));
  /* 11efb863 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb866 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb867 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb86a push edx */
  push32((uint32_t)(EDX));
  /* 11efb86b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb86e push eax */
  push32((uint32_t)(EAX));
  /* 11efb86f call 0x11efb3c0 */
  push32(0x11efb874u); f_11efb3c0();
  /* 11efb874 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb877 jmp 0x11efb8ad */
  goto L_11efb8ad;
L_11efb879:;
  /* 11efb879 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb87d jne 0x11efb895 */
  if (!C.zf) goto L_11efb895;
  /* 11efb87f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb882 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb883 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb886 push edx */
  push32((uint32_t)(EDX));
  /* 11efb887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb88a push eax */
  push32((uint32_t)(EAX));
  /* 11efb88b call 0x11efb5b0 */
  push32(0x11efb890u); f_11efb5b0();
  /* 11efb890 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb893 jmp 0x11efb8ad */
  goto L_11efb8ad;
L_11efb895:;
  /* 11efb895 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efb898 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb899 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efb89c push edx */
  push32((uint32_t)(EDX));
  /* 11efb89d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efb8a0 push eax */
  push32((uint32_t)(EAX));
  /* 11efb8a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb8a5 call 0x11efb760 */
  push32(0x11efb8aau); f_11efb760();
  /* 11efb8aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb8ad:;
  /* 11efb8ad pop ebp */
  EBP = (pop32());
  /* 11efb8ae ret  */
  ESPCHK(0x11efb850u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11efb8b0 (46 bytes, 19 insns) */
void f_11efb8b0(void) {
  FTRACE(0x11efb8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb8b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb8b7 je 0x11efb8dc */
  if (C.zf) goto L_11efb8dc;
  /* 11efb8b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb8bc push eax */
  push32((uint32_t)(EAX));
  /* 11efb8bd call 0x11f00050 */
  push32(0x11efb8c2u); f_11f00050();
  /* 11efb8c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb8c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb8c8 push eax */
  push32((uint32_t)(EAX));
  /* 11efb8c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb8cc push ecx */
  push32((uint32_t)(ECX));
  /* 11efb8cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb8d0 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb8d3 push edx */
  push32((uint32_t)(EDX));
  /* 11efb8d4 call 0x11f01f30 */
  push32(0x11efb8d9u); f_11f01f30();
  /* 11efb8d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb8dc:;
  /* 11efb8dc pop ebp */
  EBP = (pop32());
  /* 11efb8dd ret  */
  ESPCHK(0x11efb8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x11efb8e0 (55 bytes, 16 insns) */
void f_11efb8e0(void) {
  FTRACE(0x11efb8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb8e3 mov eax, dword ptr [0x11f2deec] */
  EAX = (r32((uint32_t)(0x11f2deec)));
  /* 11efb8e8 push eax */
  push32((uint32_t)(EAX));
  /* 11efb8e9 call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11efb8efu);
  /* 11efb8ef mov ecx, dword ptr [0x11f2dedc] */
  ECX = (r32((uint32_t)(0x11f2dedc)));
  /* 11efb8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb8f6 call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11efb8fcu);
  /* 11efb8fc mov edx, dword ptr [0x11f2decc] */
  EDX = (r32((uint32_t)(0x11f2decc)));
  /* 11efb902 push edx */
  push32((uint32_t)(EDX));
  /* 11efb903 call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11efb909u);
  /* 11efb909 mov eax, dword ptr [0x11f2deac] */
  EAX = (r32((uint32_t)(0x11f2deac)));
  /* 11efb90e push eax */
  push32((uint32_t)(EAX));
  /* 11efb90f call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11efb915u);
  /* 11efb915 pop ebp */
  EBP = (pop32());
  /* 11efb916 ret  */
  ESPCHK(0x11efb8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b920 @ 0x11efb920 (159 bytes, 47 insns) */
void f_11efb920(void) {
  FTRACE(0x11efb920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb920 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb921 mov ebp, esp */
  EBP = (ESP);
  /* 11efb923 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb924 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efb92b jmp 0x11efb936 */
  goto L_11efb936;
L_11efb92d:;
  /* 11efb92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb930 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb933 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efb936:;
  /* 11efb936 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb93a jge 0x11efb989 */
  if ((C.sf==C.of)) goto L_11efb989;
  /* 11efb93c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb93f cmp dword ptr [ecx*4 + 0x11f2dea8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11f2dea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb947 je 0x11efb987 */
  if (C.zf) goto L_11efb987;
  /* 11efb949 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb94d je 0x11efb987 */
  if (C.zf) goto L_11efb987;
  /* 11efb94f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb953 je 0x11efb987 */
  if (C.zf) goto L_11efb987;
  /* 11efb955 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb959 je 0x11efb987 */
  if (C.zf) goto L_11efb987;
  /* 11efb95b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb95f je 0x11efb987 */
  if (C.zf) goto L_11efb987;
  /* 11efb961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb964 mov eax, dword ptr [edx*4 + 0x11f2dea8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f2dea8)));
  /* 11efb96b push eax */
  push32((uint32_t)(EAX));
  /* 11efb96c call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11efb972u);
  /* 11efb972 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efb974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efb977 mov edx, dword ptr [ecx*4 + 0x11f2dea8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2dea8)));
  /* 11efb97e push edx */
  push32((uint32_t)(EDX));
  /* 11efb97f call 0x11efc550 */
  push32(0x11efb984u); f_11efc550();
  /* 11efb984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb987:;
  /* 11efb987 jmp 0x11efb92d */
  goto L_11efb92d;
L_11efb989:;
  /* 11efb989 mov eax, dword ptr [0x11f2decc] */
  EAX = (r32((uint32_t)(0x11f2decc)));
  /* 11efb98e push eax */
  push32((uint32_t)(EAX));
  /* 11efb98f call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11efb995u);
  /* 11efb995 mov ecx, dword ptr [0x11f2dedc] */
  ECX = (r32((uint32_t)(0x11f2dedc)));
  /* 11efb99b push ecx */
  push32((uint32_t)(ECX));
  /* 11efb99c call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11efb9a2u);
  /* 11efb9a2 mov edx, dword ptr [0x11f2deec] */
  EDX = (r32((uint32_t)(0x11f2deec)));
  /* 11efb9a8 push edx */
  push32((uint32_t)(EDX));
  /* 11efb9a9 call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11efb9afu);
  /* 11efb9af mov eax, dword ptr [0x11f2deac] */
  EAX = (r32((uint32_t)(0x11f2deac)));
  /* 11efb9b4 push eax */
  push32((uint32_t)(EAX));
  /* 11efb9b5 call dword ptr [0x11f33420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33420))), 0x11efb9bbu);
  /* 11efb9bb mov esp, ebp */
  ESP = (EBP);
  /* 11efb9bd pop ebp */
  EBP = (pop32());
  /* 11efb9be ret  */
  ESPCHK(0x11efb920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x11efb9c0 (151 bytes, 46 insns) */
void f_11efb9c0(void) {
  FTRACE(0x11efb9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efb9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efb9c1 mov ebp, esp */
  EBP = (ESP);
  /* 11efb9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efb9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efb9c7 cmp dword ptr [eax*4 + 0x11f2dea8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11f2dea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb9cf jne 0x11efba42 */
  if (!C.zf) goto L_11efba42;
  /* 11efb9d1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11efb9d6 push 0x11f2a748 */
  push32((uint32_t)(0x11f2a748u));
  /* 11efb9db push 2 */
  push32((uint32_t)(0x2u));
  /* 11efb9dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11efb9df call 0x11efbac0 */
  push32(0x11efb9e4u); f_11efbac0();
  /* 11efb9e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efb9e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efb9ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efb9ee jne 0x11efb9fa */
  if (!C.zf) goto L_11efb9fa;
  /* 11efb9f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11efb9f2 call 0x11efa530 */
  push32(0x11efb9f7u); f_11efa530();
  /* 11efb9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efb9fa:;
  /* 11efb9fa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11efb9fc call 0x11efb9c0 */
  push32(0x11efba01u); f_11efb9c0();
  /* 11efba01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efba04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efba07 cmp dword ptr [ecx*4 + 0x11f2dea8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11f2dea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efba0f jne 0x11efba2a */
  if (!C.zf) goto L_11efba2a;
  /* 11efba11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efba14 push edx */
  push32((uint32_t)(EDX));
  /* 11efba15 call dword ptr [0x11f33434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33434))), 0x11efba1bu);
  /* 11efba1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efba1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efba21 mov dword ptr [eax*4 + 0x11f2dea8], ecx */
  w32((uint32_t)(EAX*4 + 0x11f2dea8), (ECX));
  /* 11efba28 jmp 0x11efba38 */
  goto L_11efba38;
L_11efba2a:;
  /* 11efba2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11efba2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efba2f push edx */
  push32((uint32_t)(EDX));
  /* 11efba30 call 0x11efc550 */
  push32(0x11efba35u); f_11efc550();
  /* 11efba35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efba38:;
  /* 11efba38 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11efba3a call 0x11efba60 */
  push32(0x11efba3fu); f_11efba60();
  /* 11efba3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efba42:;
  /* 11efba42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efba45 mov ecx, dword ptr [eax*4 + 0x11f2dea8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2dea8)));
  /* 11efba4c push ecx */
  push32((uint32_t)(ECX));
  /* 11efba4d call dword ptr [0x11f33438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33438))), 0x11efba53u);
  /* 11efba53 mov esp, ebp */
  ESP = (EBP);
  /* 11efba55 pop ebp */
  EBP = (pop32());
  /* 11efba56 ret  */
  ESPCHK(0x11efb9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba60 @ 0x11efba60 (22 bytes, 8 insns) */
void f_11efba60(void) {
  FTRACE(0x11efba60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efba60 push ebp */
  push32((uint32_t)(EBP));
  /* 11efba61 mov ebp, esp */
  EBP = (ESP);
  /* 11efba63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efba66 mov ecx, dword ptr [eax*4 + 0x11f2dea8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2dea8)));
  /* 11efba6d push ecx */
  push32((uint32_t)(ECX));
  /* 11efba6e call dword ptr [0x11f3343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3343c))), 0x11efba74u);
  /* 11efba74 pop ebp */
  EBP = (pop32());
  /* 11efba75 ret  */
  ESPCHK(0x11efba60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba80 @ 0x11efba80 (26 bytes, 10 insns) */
void f_11efba80(void) {
  FTRACE(0x11efba80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efba80 push ebp */
  push32((uint32_t)(EBP));
  /* 11efba81 mov ebp, esp */
  EBP = (ESP);
  /* 11efba83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efba86 push eax */
  push32((uint32_t)(EAX));
  /* 11efba87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efba89 call dword ptr [0x11f33444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33444))), 0x11efba8fu);
  /* 11efba8f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11efba94 call dword ptr [0x11f33440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33440))), 0x11efba9au);
  /* 11efba9a pop ebp */
  EBP = (pop32());
  /* 11efba9b ret  */
  ESPCHK(0x11efba80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x11efbaa0 (29 bytes, 13 insns) */
void f_11efbaa0(void) {
  FTRACE(0x11efbaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbaa1 mov ebp, esp */
  EBP = (ESP);
  /* 11efbaa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbaa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbaa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbaa9 mov eax, dword ptr [0x11f308e0] */
  EAX = (r32((uint32_t)(0x11f308e0)));
  /* 11efbaae push eax */
  push32((uint32_t)(EAX));
  /* 11efbaaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbab2 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbab3 call 0x11efbb10 */
  push32(0x11efbab8u); f_11efbb10();
  /* 11efbab8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbabb pop ebp */
  EBP = (pop32());
  /* 11efbabc ret  */
  ESPCHK(0x11efbaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x11efbac0 (35 bytes, 16 insns) */
void f_11efbac0(void) {
  FTRACE(0x11efbac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbac1 mov ebp, esp */
  EBP = (ESP);
  /* 11efbac3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbac6 push eax */
  push32((uint32_t)(EAX));
  /* 11efbac7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbaca push ecx */
  push32((uint32_t)(ECX));
  /* 11efbacb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbace push edx */
  push32((uint32_t)(EDX));
  /* 11efbacf mov eax, dword ptr [0x11f308e0] */
  EAX = (r32((uint32_t)(0x11f308e0)));
  /* 11efbad4 push eax */
  push32((uint32_t)(EAX));
  /* 11efbad5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbad8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbad9 call 0x11efbb10 */
  push32(0x11efbadeu); f_11efbb10();
  /* 11efbade add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbae1 pop ebp */
  EBP = (pop32());
  /* 11efbae2 ret  */
  ESPCHK(0x11efbac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baf0 @ 0x11efbaf0 (27 bytes, 13 insns) */
void f_11efbaf0(void) {
  FTRACE(0x11efbaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbaf1 mov ebp, esp */
  EBP = (ESP);
  /* 11efbaf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbaf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbaf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbaf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbafc push eax */
  push32((uint32_t)(EAX));
  /* 11efbafd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbb00 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbb01 call 0x11efbb10 */
  push32(0x11efbb06u); f_11efbb10();
  /* 11efbb06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbb09 pop ebp */
  EBP = (pop32());
  /* 11efbb0a ret  */
  ESPCHK(0x11efbaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb10 @ 0x11efbb10 (94 bytes, 38 insns) */
void f_11efbb10(void) {
  FTRACE(0x11efbb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbb11 mov ebp, esp */
  EBP = (ESP);
  /* 11efbb13 push ecx */
  push32((uint32_t)(ECX));
L_11efbb14:;
  /* 11efbb14 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efbb16 call 0x11efb9c0 */
  push32(0x11efbb1bu); f_11efb9c0();
  /* 11efbb1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbb1e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efbb21 push eax */
  push32((uint32_t)(EAX));
  /* 11efbb22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbb25 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbb26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbb29 push edx */
  push32((uint32_t)(EDX));
  /* 11efbb2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbb2d push eax */
  push32((uint32_t)(EAX));
  /* 11efbb2e call 0x11efbb90 */
  push32(0x11efbb33u); f_11efbb90();
  /* 11efbb33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbb36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efbb39 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efbb3b call 0x11efba60 */
  push32(0x11efbb40u); f_11efba60();
  /* 11efbb40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbb43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbb47 jne 0x11efbb4f */
  if (!C.zf) goto L_11efbb4f;
  /* 11efbb49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbb4d jne 0x11efbb54 */
  if (!C.zf) goto L_11efbb54;
L_11efbb4f:;
  /* 11efbb4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbb52 jmp 0x11efbb6a */
  goto L_11efbb6a;
L_11efbb54:;
  /* 11efbb54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbb57 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbb58 call 0x11f022c0 */
  push32(0x11efbb5du); f_11f022c0();
  /* 11efbb5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbb60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbb62 jne 0x11efbb68 */
  if (!C.zf) goto L_11efbb68;
  /* 11efbb64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbb66 jmp 0x11efbb6a */
  goto L_11efbb6a;
L_11efbb68:;
  /* 11efbb68 jmp 0x11efbb14 */
  goto L_11efbb14;
L_11efbb6a:;
  /* 11efbb6a mov esp, ebp */
  ESP = (EBP);
  /* 11efbb6c pop ebp */
  EBP = (pop32());
  /* 11efbb6d ret  */
  ESPCHK(0x11efbb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb70 @ 0x11efbb70 (23 bytes, 11 insns) */
void f_11efbb70(void) {
  FTRACE(0x11efbb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbb70 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbb71 mov ebp, esp */
  EBP = (ESP);
  /* 11efbb73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbb75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbb77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbb79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbb7c push eax */
  push32((uint32_t)(EAX));
  /* 11efbb7d call 0x11efbb90 */
  push32(0x11efbb82u); f_11efbb90();
  /* 11efbb82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbb85 pop ebp */
  EBP = (pop32());
  /* 11efbb86 ret  */
  ESPCHK(0x11efbb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb90 @ 0x11efbb90 (787 bytes, 254 insns) */
void f_11efbb90(void) {
  FTRACE(0x11efbb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbb91 mov ebp, esp */
  EBP = (ESP);
  /* 11efbb93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efbb96 push ebx */
  push32((uint32_t)(EBX));
  /* 11efbb97 push esi */
  push32((uint32_t)(ESI));
  /* 11efbb98 push edi */
  push32((uint32_t)(EDI));
  /* 11efbb99 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11efbba0 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efbba5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11efbba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbbaa je 0x11efbbdc */
  if (C.zf) goto L_11efbbdc;
L_11efbbac:;
  /* 11efbbac call 0x11efcc60 */
  push32(0x11efbbb1u); f_11efcc60();
  /* 11efbbb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbbb3 jne 0x11efbbd6 */
  if (!C.zf) goto L_11efbbd6;
  /* 11efbbb5 push 0x11f2a838 */
  push32((uint32_t)(0x11f2a838u));
  /* 11efbbba push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbbbc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11efbbc1 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efbbc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efbbc8 call 0x11efa680 */
  push32(0x11efbbcdu); f_11efa680();
  /* 11efbbcd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbbd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbbd3 jne 0x11efbbd6 */
  if (!C.zf) goto L_11efbbd6;
  /* 11efbbd5 int3  */
  x86_unimpl("int3 @ 0x11efbbd5");
L_11efbbd6:;
  /* 11efbbd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efbbd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efbbda jne 0x11efbbac */
  if (!C.zf) goto L_11efbbac;
L_11efbbdc:;
  /* 11efbbdc mov edx, dword ptr [0x11f2df6c] */
  EDX = (r32((uint32_t)(0x11f2df6c)));
  /* 11efbbe2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11efbbe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efbbe8 cmp eax, dword ptr [0x11f2df70] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2df70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbbee jne 0x11efbbf1 */
  if (!C.zf) goto L_11efbbf1;
  /* 11efbbf0 int3  */
  x86_unimpl("int3 @ 0x11efbbf0");
L_11efbbf1:;
  /* 11efbbf1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbbf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbbf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbbf8 push edx */
  push32((uint32_t)(EDX));
  /* 11efbbf9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efbbfc push eax */
  push32((uint32_t)(EAX));
  /* 11efbbfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbc00 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbc01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbc04 push edx */
  push32((uint32_t)(EDX));
  /* 11efbc05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbc09 call dword ptr [0x11f2e2a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2e2a0))), 0x11efbc0fu);
  /* 11efbc0f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbc12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbc14 jne 0x11efbc74 */
  if (!C.zf) goto L_11efbc74;
  /* 11efbc16 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbc1a je 0x11efbc47 */
  if (C.zf) goto L_11efbc47;
L_11efbc1c:;
  /* 11efbc1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbc1f push eax */
  push32((uint32_t)(EAX));
  /* 11efbc20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbc23 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbc24 push 0x11f2a7f4 */
  push32((uint32_t)(0x11f2a7f4u));
  /* 11efbc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc31 call 0x11efa680 */
  push32(0x11efbc36u); f_11efa680();
  /* 11efbc36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbc39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbc3c jne 0x11efbc3f */
  if (!C.zf) goto L_11efbc3f;
  /* 11efbc3e int3  */
  x86_unimpl("int3 @ 0x11efbc3e");
L_11efbc3f:;
  /* 11efbc3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efbc41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efbc43 jne 0x11efbc1c */
  if (!C.zf) goto L_11efbc1c;
  /* 11efbc45 jmp 0x11efbc6d */
  goto L_11efbc6d;
L_11efbc47:;
  /* 11efbc47 push 0x11f2a7d0 */
  push32((uint32_t)(0x11f2a7d0u));
  /* 11efbc4c push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efbc51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbc59 call 0x11efa680 */
  push32(0x11efbc5eu); f_11efa680();
  /* 11efbc5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbc61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbc64 jne 0x11efbc67 */
  if (!C.zf) goto L_11efbc67;
  /* 11efbc66 int3  */
  x86_unimpl("int3 @ 0x11efbc66");
L_11efbc67:;
  /* 11efbc67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbc69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbc6b jne 0x11efbc47 */
  if (!C.zf) goto L_11efbc47;
L_11efbc6d:;
  /* 11efbc6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbc6f jmp 0x11efbe9c */
  goto L_11efbe9c;
L_11efbc74:;
  /* 11efbc74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbc77 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efbc7d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbc80 je 0x11efbc96 */
  if (C.zf) goto L_11efbc96;
  /* 11efbc82 mov edx, dword ptr [0x11f2df68] */
  EDX = (r32((uint32_t)(0x11f2df68)));
  /* 11efbc88 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11efbc8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efbc8d jne 0x11efbc96 */
  if (!C.zf) goto L_11efbc96;
  /* 11efbc8f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11efbc96:;
  /* 11efbc96 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbc9a ja 0x11efbca7 */
  if ((!C.cf&&!C.zf)) goto L_11efbca7;
  /* 11efbc9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbc9f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbca2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbca5 jbe 0x11efbcd3 */
  if ((C.cf||C.zf)) goto L_11efbcd3;
L_11efbca7:;
  /* 11efbca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbcaa push ecx */
  push32((uint32_t)(ECX));
  /* 11efbcab push 0x11f2a7a8 */
  push32((uint32_t)(0x11f2a7a8u));
  /* 11efbcb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbcb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbcb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbcb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbcb8 call 0x11efa680 */
  push32(0x11efbcbdu); f_11efa680();
  /* 11efbcbd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbcc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbcc3 jne 0x11efbcc6 */
  if (!C.zf) goto L_11efbcc6;
  /* 11efbcc5 int3  */
  x86_unimpl("int3 @ 0x11efbcc5");
L_11efbcc6:;
  /* 11efbcc6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efbcc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efbcca jne 0x11efbca7 */
  if (!C.zf) goto L_11efbca7;
  /* 11efbccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbcce jmp 0x11efbe9c */
  goto L_11efbe9c;
L_11efbcd3:;
  /* 11efbcd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbcd6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efbcdb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbcde je 0x11efbd20 */
  if (C.zf) goto L_11efbd20;
  /* 11efbce0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbce4 je 0x11efbd20 */
  if (C.zf) goto L_11efbd20;
  /* 11efbce6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbce9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efbcef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbcf2 je 0x11efbd20 */
  if (C.zf) goto L_11efbd20;
  /* 11efbcf4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbcf8 je 0x11efbd20 */
  if (C.zf) goto L_11efbd20;
L_11efbcfa:;
  /* 11efbcfa push 0x11f2a774 */
  push32((uint32_t)(0x11f2a774u));
  /* 11efbcff push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efbd04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbd06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbd08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbd0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbd0c call 0x11efa680 */
  push32(0x11efbd11u); f_11efa680();
  /* 11efbd11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbd14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbd17 jne 0x11efbd1a */
  if (!C.zf) goto L_11efbd1a;
  /* 11efbd19 int3  */
  x86_unimpl("int3 @ 0x11efbd19");
L_11efbd1a:;
  /* 11efbd1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efbd1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efbd1e jne 0x11efbcfa */
  if (!C.zf) goto L_11efbcfa;
L_11efbd20:;
  /* 11efbd20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbd23 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbd26 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11efbd29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efbd2c push ecx */
  push32((uint32_t)(ECX));
  /* 11efbd2d call 0x11f02370 */
  push32(0x11efbd32u); f_11f02370();
  /* 11efbd32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbd35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efbd38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbd3c jne 0x11efbd45 */
  if (!C.zf) goto L_11efbd45;
  /* 11efbd3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbd40 jmp 0x11efbe9c */
  goto L_11efbe9c;
L_11efbd45:;
  /* 11efbd45 mov edx, dword ptr [0x11f2df6c] */
  EDX = (r32((uint32_t)(0x11f2df6c)));
  /* 11efbd4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbd4e mov dword ptr [0x11f2df6c], edx */
  w32((uint32_t)(0x11f2df6c), (EDX));
  /* 11efbd54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbd58 je 0x11efbda3 */
  if (C.zf) goto L_11efbda3;
  /* 11efbd5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd5d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11efbd63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd66 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11efbd6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd70 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11efbd77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd7a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11efbd81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbd87 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11efbd8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd8d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11efbd94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbd97 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11efbd9e jmp 0x11efbe43 */
  goto L_11efbe43;
L_11efbda3:;
  /* 11efbda3 mov edx, dword ptr [0x11f3075c] */
  EDX = (r32((uint32_t)(0x11f3075c)));
  /* 11efbda9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbdac mov dword ptr [0x11f3075c], edx */
  w32((uint32_t)(0x11f3075c), (EDX));
  /* 11efbdb2 mov eax, dword ptr [0x11f30764] */
  EAX = (r32((uint32_t)(0x11f30764)));
  /* 11efbdb7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbdba mov dword ptr [0x11f30764], eax */
  w32((uint32_t)(0x11f30764), (EAX));
  /* 11efbdbf mov ecx, dword ptr [0x11f30764] */
  ECX = (r32((uint32_t)(0x11f30764)));
  /* 11efbdc5 cmp ecx, dword ptr [0x11f30768] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f30768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbdcb jbe 0x11efbdd9 */
  if ((C.cf||C.zf)) goto L_11efbdd9;
  /* 11efbdcd mov edx, dword ptr [0x11f30764] */
  EDX = (r32((uint32_t)(0x11f30764)));
  /* 11efbdd3 mov dword ptr [0x11f30768], edx */
  w32((uint32_t)(0x11f30768), (EDX));
L_11efbdd9:;
  /* 11efbdd9 cmp dword ptr [0x11f30760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbde0 je 0x11efbdef */
  if (C.zf) goto L_11efbdef;
  /* 11efbde2 mov eax, dword ptr [0x11f30760] */
  EAX = (r32((uint32_t)(0x11f30760)));
  /* 11efbde7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbdea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11efbded jmp 0x11efbdf8 */
  goto L_11efbdf8;
L_11efbdef:;
  /* 11efbdef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbdf2 mov dword ptr [0x11f30758], edx */
  w32((uint32_t)(0x11f30758), (EDX));
L_11efbdf8:;
  /* 11efbdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbdfb mov ecx, dword ptr [0x11f30760] */
  ECX = (r32((uint32_t)(0x11f30760)));
  /* 11efbe01 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11efbe03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe06 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11efbe0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbe13 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11efbe16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbe1c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11efbe1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbe25 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11efbe28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbe2e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11efbe31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efbe37 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11efbe3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe3d mov dword ptr [0x11f30760], ecx */
  w32((uint32_t)(0x11f30760), (ECX));
L_11efbe43:;
  /* 11efbe43 push 4 */
  push32((uint32_t)(0x4u));
  /* 11efbe45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efbe47 mov dl, byte ptr [0x11f2df74] */
  DL = (r8((uint32_t)(0x11f2df74)));
  /* 11efbe4d push edx */
  push32((uint32_t)(EDX));
  /* 11efbe4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe51 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbe54 push eax */
  push32((uint32_t)(EAX));
  /* 11efbe55 call 0x11f01ed0 */
  push32(0x11efbe5au); f_11f01ed0();
  /* 11efbe5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbe5d push 4 */
  push32((uint32_t)(0x4u));
  /* 11efbe5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efbe61 mov cl, byte ptr [0x11f2df74] */
  CL = (r8((uint32_t)(0x11f2df74)));
  /* 11efbe67 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbe68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbe6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe6e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11efbe72 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbe73 call 0x11f01ed0 */
  push32(0x11efbe78u); f_11f01ed0();
  /* 11efbe78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbe7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbe7e push edx */
  push32((uint32_t)(EDX));
  /* 11efbe7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbe81 mov al, byte ptr [0x11f2df76] */
  AL = (r8((uint32_t)(0x11f2df76)));
  /* 11efbe86 push eax */
  push32((uint32_t)(EAX));
  /* 11efbe87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbe8d push ecx */
  push32((uint32_t)(ECX));
  /* 11efbe8e call 0x11f01ed0 */
  push32(0x11efbe93u); f_11f01ed0();
  /* 11efbe93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbe96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbe99 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11efbe9c:;
  /* 11efbe9c pop edi */
  EDI = (pop32());
  /* 11efbe9d pop esi */
  ESI = (pop32());
  /* 11efbe9e pop ebx */
  EBX = (pop32());
  /* 11efbe9f mov esp, ebp */
  ESP = (EBP);
  /* 11efbea1 pop ebp */
  EBP = (pop32());
  /* 11efbea2 ret  */
  ESPCHK(0x11efbb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beb0 @ 0x11efbeb0 (27 bytes, 13 insns) */
void f_11efbeb0(void) {
  FTRACE(0x11efbeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbeb1 mov ebp, esp */
  EBP = (ESP);
  /* 11efbeb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbeb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbeb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbeb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbebc push eax */
  push32((uint32_t)(EAX));
  /* 11efbebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbec0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbec1 call 0x11efbed0 */
  push32(0x11efbec6u); f_11efbed0();
  /* 11efbec6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbec9 pop ebp */
  EBP = (pop32());
  /* 11efbeca ret  */
  ESPCHK(0x11efbeb0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11efbed0 (96 bytes, 37 insns) */
void f_11efbed0(void) {
  FTRACE(0x11efbed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbed1 mov ebp, esp */
  EBP = (ESP);
  /* 11efbed3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efbed6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbed9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efbedd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11efbee0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efbee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbee4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbee7 push edx */
  push32((uint32_t)(EDX));
  /* 11efbee8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbeeb push eax */
  push32((uint32_t)(EAX));
  /* 11efbeec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbeef push ecx */
  push32((uint32_t)(ECX));
  /* 11efbef0 call 0x11efbac0 */
  push32(0x11efbef5u); f_11efbac0();
  /* 11efbef5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbef8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efbefb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbeff je 0x11efbf29 */
  if (C.zf) goto L_11efbf29;
  /* 11efbf01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efbf04 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11efbf07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efbf0a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbf0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efbf10:;
  /* 11efbf10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efbf13 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbf16 jae 0x11efbf29 */
  if (!C.cf) goto L_11efbf29;
  /* 11efbf18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efbf1b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11efbf1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efbf21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbf24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efbf27 jmp 0x11efbf10 */
  goto L_11efbf10;
L_11efbf29:;
  /* 11efbf29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efbf2c mov esp, ebp */
  ESP = (EBP);
  /* 11efbf2e pop ebp */
  EBP = (pop32());
  /* 11efbf2f ret  */
  ESPCHK(0x11efbed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf30 @ 0x11efbf30 (27 bytes, 13 insns) */
void f_11efbf30(void) {
  FTRACE(0x11efbf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbf30 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbf31 mov ebp, esp */
  EBP = (ESP);
  /* 11efbf33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbf35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efbf37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbf39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbf3c push eax */
  push32((uint32_t)(EAX));
  /* 11efbf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbf40 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbf41 call 0x11efbf50 */
  push32(0x11efbf46u); f_11efbf50();
  /* 11efbf46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbf49 pop ebp */
  EBP = (pop32());
  /* 11efbf4a ret  */
  ESPCHK(0x11efbf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x11efbf50 (64 bytes, 27 insns) */
void f_11efbf50(void) {
  FTRACE(0x11efbf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbf50 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbf51 mov ebp, esp */
  EBP = (ESP);
  /* 11efbf53 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbf54 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efbf56 call 0x11efb9c0 */
  push32(0x11efbf5bu); f_11efb9c0();
  /* 11efbf5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbf5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11efbf60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efbf63 push eax */
  push32((uint32_t)(EAX));
  /* 11efbf64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbf67 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbf68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbf6b push edx */
  push32((uint32_t)(EDX));
  /* 11efbf6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbf6f push eax */
  push32((uint32_t)(EAX));
  /* 11efbf70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbf73 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbf74 call 0x11efbf90 */
  push32(0x11efbf79u); f_11efbf90();
  /* 11efbf79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbf7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efbf7f push 9 */
  push32((uint32_t)(0x9u));
  /* 11efbf81 call 0x11efba60 */
  push32(0x11efbf86u); f_11efba60();
  /* 11efbf86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbf89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efbf8c mov esp, ebp */
  ESP = (EBP);
  /* 11efbf8e pop ebp */
  EBP = (pop32());
  /* 11efbf8f ret  */
  ESPCHK(0x11efbf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x11efbf90 (1297 bytes, 431 insns) */
void f_11efbf90(void) {
  FTRACE(0x11efbf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efbf90 push ebp */
  push32((uint32_t)(EBP));
  /* 11efbf91 mov ebp, esp */
  EBP = (ESP);
  /* 11efbf93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efbf96 push ebx */
  push32((uint32_t)(EBX));
  /* 11efbf97 push esi */
  push32((uint32_t)(ESI));
  /* 11efbf98 push edi */
  push32((uint32_t)(EDI));
  /* 11efbf99 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11efbfa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbfa4 jne 0x11efbfc3 */
  if (!C.zf) goto L_11efbfc3;
  /* 11efbfa6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efbfa9 push eax */
  push32((uint32_t)(EAX));
  /* 11efbfaa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efbfad push ecx */
  push32((uint32_t)(ECX));
  /* 11efbfae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbfb1 push edx */
  push32((uint32_t)(EDX));
  /* 11efbfb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efbfb5 push eax */
  push32((uint32_t)(EAX));
  /* 11efbfb6 call 0x11efbac0 */
  push32(0x11efbfbbu); f_11efbac0();
  /* 11efbfbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbfbe jmp 0x11efc49a */
  goto L_11efc49a;
L_11efbfc3:;
  /* 11efbfc3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbfc7 je 0x11efbfe6 */
  if (C.zf) goto L_11efbfe6;
  /* 11efbfc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efbfcd jne 0x11efbfe6 */
  if (!C.zf) goto L_11efbfe6;
  /* 11efbfcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efbfd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11efbfd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efbfd6 push edx */
  push32((uint32_t)(EDX));
  /* 11efbfd7 call 0x11efc550 */
  push32(0x11efbfdcu); f_11efc550();
  /* 11efbfdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efbfdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efbfe1 jmp 0x11efc49a */
  goto L_11efc49a;
L_11efbfe6:;
  /* 11efbfe6 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efbfeb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11efbfee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbff0 je 0x11efc022 */
  if (C.zf) goto L_11efc022;
L_11efbff2:;
  /* 11efbff2 call 0x11efcc60 */
  push32(0x11efbff7u); f_11efcc60();
  /* 11efbff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efbff9 jne 0x11efc01c */
  if (!C.zf) goto L_11efc01c;
  /* 11efbffb push 0x11f2a838 */
  push32((uint32_t)(0x11f2a838u));
  /* 11efc000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc002 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11efc007 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc00c push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc00e call 0x11efa680 */
  push32(0x11efc013u); f_11efa680();
  /* 11efc013 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc016 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc019 jne 0x11efc01c */
  if (!C.zf) goto L_11efc01c;
  /* 11efc01b int3  */
  x86_unimpl("int3 @ 0x11efc01b");
L_11efc01c:;
  /* 11efc01c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc01e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc020 jne 0x11efbff2 */
  if (!C.zf) goto L_11efbff2;
L_11efc022:;
  /* 11efc022 mov edx, dword ptr [0x11f2df6c] */
  EDX = (r32((uint32_t)(0x11f2df6c)));
  /* 11efc028 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11efc02b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efc02e cmp eax, dword ptr [0x11f2df70] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2df70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc034 jne 0x11efc037 */
  if (!C.zf) goto L_11efc037;
  /* 11efc036 int3  */
  x86_unimpl("int3 @ 0x11efc036");
L_11efc037:;
  /* 11efc037 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efc03a push ecx */
  push32((uint32_t)(ECX));
  /* 11efc03b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efc03e push edx */
  push32((uint32_t)(EDX));
  /* 11efc03f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efc042 push eax */
  push32((uint32_t)(EAX));
  /* 11efc043 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efc046 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc047 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc04a push edx */
  push32((uint32_t)(EDX));
  /* 11efc04b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc04e push eax */
  push32((uint32_t)(EAX));
  /* 11efc04f push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc051 call dword ptr [0x11f2e2a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2e2a0))), 0x11efc057u);
  /* 11efc057 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc05a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc05c jne 0x11efc0bc */
  if (!C.zf) goto L_11efc0bc;
  /* 11efc05e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc062 je 0x11efc08f */
  if (C.zf) goto L_11efc08f;
L_11efc064:;
  /* 11efc064 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efc067 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc068 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efc06b push edx */
  push32((uint32_t)(EDX));
  /* 11efc06c push 0x11f2a9b4 */
  push32((uint32_t)(0x11f2a9b4u));
  /* 11efc071 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc073 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc075 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc079 call 0x11efa680 */
  push32(0x11efc07eu); f_11efa680();
  /* 11efc07e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc081 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc084 jne 0x11efc087 */
  if (!C.zf) goto L_11efc087;
  /* 11efc086 int3  */
  x86_unimpl("int3 @ 0x11efc086");
L_11efc087:;
  /* 11efc087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc08b jne 0x11efc064 */
  if (!C.zf) goto L_11efc064;
  /* 11efc08d jmp 0x11efc0b5 */
  goto L_11efc0b5;
L_11efc08f:;
  /* 11efc08f push 0x11f2a990 */
  push32((uint32_t)(0x11f2a990u));
  /* 11efc094 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efc099 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc09b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc09d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc09f push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc0a1 call 0x11efa680 */
  push32(0x11efc0a6u); f_11efa680();
  /* 11efc0a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc0a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc0ac jne 0x11efc0af */
  if (!C.zf) goto L_11efc0af;
  /* 11efc0ae int3  */
  x86_unimpl("int3 @ 0x11efc0ae");
L_11efc0af:;
  /* 11efc0af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc0b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc0b3 jne 0x11efc08f */
  if (!C.zf) goto L_11efc08f;
L_11efc0b5:;
  /* 11efc0b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc0b7 jmp 0x11efc49a */
  goto L_11efc49a;
L_11efc0bc:;
  /* 11efc0bc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc0c0 jbe 0x11efc0ee */
  if ((C.cf||C.zf)) goto L_11efc0ee;
L_11efc0c2:;
  /* 11efc0c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc0c5 push edx */
  push32((uint32_t)(EDX));
  /* 11efc0c6 push 0x11f2a960 */
  push32((uint32_t)(0x11f2a960u));
  /* 11efc0cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc0cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc0cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc0d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc0d3 call 0x11efa680 */
  push32(0x11efc0d8u); f_11efa680();
  /* 11efc0d8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc0db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc0de jne 0x11efc0e1 */
  if (!C.zf) goto L_11efc0e1;
  /* 11efc0e0 int3  */
  x86_unimpl("int3 @ 0x11efc0e0");
L_11efc0e1:;
  /* 11efc0e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc0e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc0e5 jne 0x11efc0c2 */
  if (!C.zf) goto L_11efc0c2;
  /* 11efc0e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc0e9 jmp 0x11efc49a */
  goto L_11efc49a;
L_11efc0ee:;
  /* 11efc0ee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc0f2 je 0x11efc136 */
  if (C.zf) goto L_11efc136;
  /* 11efc0f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efc0f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efc0fd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc100 je 0x11efc136 */
  if (C.zf) goto L_11efc136;
  /* 11efc102 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efc105 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efc10b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc10e je 0x11efc136 */
  if (C.zf) goto L_11efc136;
L_11efc110:;
  /* 11efc110 push 0x11f2a774 */
  push32((uint32_t)(0x11f2a774u));
  /* 11efc115 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efc11a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc11c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc11e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc120 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc122 call 0x11efa680 */
  push32(0x11efc127u); f_11efa680();
  /* 11efc127 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc12a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc12d jne 0x11efc130 */
  if (!C.zf) goto L_11efc130;
  /* 11efc12f int3  */
  x86_unimpl("int3 @ 0x11efc12f");
L_11efc130:;
  /* 11efc130 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc134 jne 0x11efc110 */
  if (!C.zf) goto L_11efc110;
L_11efc136:;
  /* 11efc136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc139 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc13a call 0x11efd0c0 */
  push32(0x11efc13fu); f_11efd0c0();
  /* 11efc13f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc144 jne 0x11efc167 */
  if (!C.zf) goto L_11efc167;
  /* 11efc146 push 0x11f2a93c */
  push32((uint32_t)(0x11f2a93cu));
  /* 11efc14b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc14d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11efc152 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc157 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc159 call 0x11efa680 */
  push32(0x11efc15eu); f_11efa680();
  /* 11efc15e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc161 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc164 jne 0x11efc167 */
  if (!C.zf) goto L_11efc167;
  /* 11efc166 int3  */
  x86_unimpl("int3 @ 0x11efc166");
L_11efc167:;
  /* 11efc167 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efc169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efc16b jne 0x11efc136 */
  if (!C.zf) goto L_11efc136;
  /* 11efc16d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc170 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc173 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efc176 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc179 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc17d jne 0x11efc186 */
  if (!C.zf) goto L_11efc186;
  /* 11efc17f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11efc186:;
  /* 11efc186 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc18a je 0x11efc1ca */
  if (C.zf) goto L_11efc1ca;
L_11efc18c:;
  /* 11efc18c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc18f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc196 jne 0x11efc1a1 */
  if (!C.zf) goto L_11efc1a1;
  /* 11efc198 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc19b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc19f je 0x11efc1c2 */
  if (C.zf) goto L_11efc1c2;
L_11efc1a1:;
  /* 11efc1a1 push 0x11f2a8f4 */
  push32((uint32_t)(0x11f2a8f4u));
  /* 11efc1a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc1a8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11efc1ad push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc1b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc1b4 call 0x11efa680 */
  push32(0x11efc1b9u); f_11efa680();
  /* 11efc1b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc1bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc1bf jne 0x11efc1c2 */
  if (!C.zf) goto L_11efc1c2;
  /* 11efc1c1 int3  */
  x86_unimpl("int3 @ 0x11efc1c1");
L_11efc1c2:;
  /* 11efc1c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc1c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc1c6 jne 0x11efc18c */
  if (!C.zf) goto L_11efc18c;
  /* 11efc1c8 jmp 0x11efc22e */
  goto L_11efc22e;
L_11efc1ca:;
  /* 11efc1ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc1cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efc1d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efc1d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc1d8 jne 0x11efc1ef */
  if (!C.zf) goto L_11efc1ef;
  /* 11efc1da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efc1dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efc1e3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc1e6 jne 0x11efc1ef */
  if (!C.zf) goto L_11efc1ef;
  /* 11efc1e8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11efc1ef:;
  /* 11efc1ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc1f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efc1f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efc1fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efc1fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efc203 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc205 je 0x11efc228 */
  if (C.zf) goto L_11efc228;
  /* 11efc207 push 0x11f2a8b8 */
  push32((uint32_t)(0x11f2a8b8u));
  /* 11efc20c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc20e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11efc213 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc218 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc21a call 0x11efa680 */
  push32(0x11efc21fu); f_11efa680();
  /* 11efc21f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc222 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc225 jne 0x11efc228 */
  if (!C.zf) goto L_11efc228;
  /* 11efc227 int3  */
  x86_unimpl("int3 @ 0x11efc227");
L_11efc228:;
  /* 11efc228 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efc22a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efc22c jne 0x11efc1ef */
  if (!C.zf) goto L_11efc1ef;
L_11efc22e:;
  /* 11efc22e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc232 je 0x11efc259 */
  if (C.zf) goto L_11efc259;
  /* 11efc234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc237 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc23a push eax */
  push32((uint32_t)(EAX));
  /* 11efc23b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc23e push ecx */
  push32((uint32_t)(ECX));
  /* 11efc23f call 0x11f024a0 */
  push32(0x11efc244u); f_11f024a0();
  /* 11efc244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc247 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efc24a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc24e jne 0x11efc257 */
  if (!C.zf) goto L_11efc257;
  /* 11efc250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc252 jmp 0x11efc49a */
  goto L_11efc49a;
L_11efc257:;
  /* 11efc257 jmp 0x11efc27c */
  goto L_11efc27c;
L_11efc259:;
  /* 11efc259 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc25c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc25f push edx */
  push32((uint32_t)(EDX));
  /* 11efc260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efc263 push eax */
  push32((uint32_t)(EAX));
  /* 11efc264 call 0x11f023f0 */
  push32(0x11efc269u); f_11f023f0();
  /* 11efc269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc26c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efc26f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc273 jne 0x11efc27c */
  if (!C.zf) goto L_11efc27c;
  /* 11efc275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc277 jmp 0x11efc49a */
  goto L_11efc49a;
L_11efc27c:;
  /* 11efc27c mov ecx, dword ptr [0x11f2df6c] */
  ECX = (r32((uint32_t)(0x11f2df6c)));
  /* 11efc282 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc285 mov dword ptr [0x11f2df6c], ecx */
  w32((uint32_t)(0x11f2df6c), (ECX));
  /* 11efc28b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc28f jne 0x11efc2e7 */
  if (!C.zf) goto L_11efc2e7;
  /* 11efc291 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc294 mov eax, dword ptr [0x11f3075c] */
  EAX = (r32((uint32_t)(0x11f3075c)));
  /* 11efc299 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc29c mov dword ptr [0x11f3075c], eax */
  w32((uint32_t)(0x11f3075c), (EAX));
  /* 11efc2a1 mov ecx, dword ptr [0x11f3075c] */
  ECX = (r32((uint32_t)(0x11f3075c)));
  /* 11efc2a7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc2aa mov dword ptr [0x11f3075c], ecx */
  w32((uint32_t)(0x11f3075c), (ECX));
  /* 11efc2b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc2b3 mov eax, dword ptr [0x11f30764] */
  EAX = (r32((uint32_t)(0x11f30764)));
  /* 11efc2b8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc2bb mov dword ptr [0x11f30764], eax */
  w32((uint32_t)(0x11f30764), (EAX));
  /* 11efc2c0 mov ecx, dword ptr [0x11f30764] */
  ECX = (r32((uint32_t)(0x11f30764)));
  /* 11efc2c6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc2c9 mov dword ptr [0x11f30764], ecx */
  w32((uint32_t)(0x11f30764), (ECX));
  /* 11efc2cf mov edx, dword ptr [0x11f30764] */
  EDX = (r32((uint32_t)(0x11f30764)));
  /* 11efc2d5 cmp edx, dword ptr [0x11f30768] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f30768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc2db jbe 0x11efc2e7 */
  if ((C.cf||C.zf)) goto L_11efc2e7;
  /* 11efc2dd mov eax, dword ptr [0x11f30764] */
  EAX = (r32((uint32_t)(0x11f30764)));
  /* 11efc2e2 mov dword ptr [0x11f30768], eax */
  w32((uint32_t)(0x11f30768), (EAX));
L_11efc2e7:;
  /* 11efc2e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc2ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc2ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efc2f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc2f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc2f6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc2f9 jbe 0x11efc31f */
  if ((C.cf||C.zf)) goto L_11efc31f;
  /* 11efc2fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc2fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc301 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc304 push edx */
  push32((uint32_t)(EDX));
  /* 11efc305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc307 mov al, byte ptr [0x11f2df76] */
  AL = (r8((uint32_t)(0x11f2df76)));
  /* 11efc30c push eax */
  push32((uint32_t)(EAX));
  /* 11efc30d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc310 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc313 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc316 push edx */
  push32((uint32_t)(EDX));
  /* 11efc317 call 0x11f01ed0 */
  push32(0x11efc31cu); f_11f01ed0();
  /* 11efc31c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efc31f:;
  /* 11efc31f push 4 */
  push32((uint32_t)(0x4u));
  /* 11efc321 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc323 mov al, byte ptr [0x11f2df74] */
  AL = (r8((uint32_t)(0x11f2df74)));
  /* 11efc328 push eax */
  push32((uint32_t)(EAX));
  /* 11efc329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc32c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc32f push ecx */
  push32((uint32_t)(ECX));
  /* 11efc330 call 0x11f01ed0 */
  push32(0x11efc335u); f_11f01ed0();
  /* 11efc335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc338 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc33c jne 0x11efc359 */
  if (!C.zf) goto L_11efc359;
  /* 11efc33e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc341 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efc344 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11efc347 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc34a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efc34d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11efc350 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc353 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11efc356 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11efc359:;
  /* 11efc359 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc35c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc35f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11efc362:;
  /* 11efc362 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc366 jne 0x11efc397 */
  if (!C.zf) goto L_11efc397;
  /* 11efc368 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc36c jne 0x11efc376 */
  if (!C.zf) goto L_11efc376;
  /* 11efc36e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc371 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc374 je 0x11efc397 */
  if (C.zf) goto L_11efc397;
L_11efc376:;
  /* 11efc376 push 0x11f2a884 */
  push32((uint32_t)(0x11f2a884u));
  /* 11efc37b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc37d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11efc382 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc387 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc389 call 0x11efa680 */
  push32(0x11efc38eu); f_11efa680();
  /* 11efc38e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc391 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc394 jne 0x11efc397 */
  if (!C.zf) goto L_11efc397;
  /* 11efc396 int3  */
  x86_unimpl("int3 @ 0x11efc396");
L_11efc397:;
  /* 11efc397 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efc399 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efc39b jne 0x11efc362 */
  if (!C.zf) goto L_11efc362;
  /* 11efc39d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc3a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc3a3 je 0x11efc3ab */
  if (C.zf) goto L_11efc3ab;
  /* 11efc3a5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc3a9 je 0x11efc3b3 */
  if (C.zf) goto L_11efc3b3;
L_11efc3ab:;
  /* 11efc3ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc3ae jmp 0x11efc49a */
  goto L_11efc49a;
L_11efc3b3:;
  /* 11efc3b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc3b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc3b9 je 0x11efc3cb */
  if (C.zf) goto L_11efc3cb;
  /* 11efc3bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc3be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efc3c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc3c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11efc3c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11efc3c9 jmp 0x11efc407 */
  goto L_11efc407;
L_11efc3cb:;
  /* 11efc3cb mov eax, dword ptr [0x11f30758] */
  EAX = (r32((uint32_t)(0x11f30758)));
  /* 11efc3d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc3d3 je 0x11efc3f6 */
  if (C.zf) goto L_11efc3f6;
  /* 11efc3d5 push 0x11f2a868 */
  push32((uint32_t)(0x11f2a868u));
  /* 11efc3da push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc3dc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11efc3e1 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc3e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc3e8 call 0x11efa680 */
  push32(0x11efc3edu); f_11efa680();
  /* 11efc3ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc3f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc3f3 jne 0x11efc3f6 */
  if (!C.zf) goto L_11efc3f6;
  /* 11efc3f5 int3  */
  x86_unimpl("int3 @ 0x11efc3f5");
L_11efc3f6:;
  /* 11efc3f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc3f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc3fa jne 0x11efc3cb */
  if (!C.zf) goto L_11efc3cb;
  /* 11efc3fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc3ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efc402 mov dword ptr [0x11f30758], eax */
  w32((uint32_t)(0x11f30758), (EAX));
L_11efc407:;
  /* 11efc407 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc40a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc40e je 0x11efc41f */
  if (C.zf) goto L_11efc41f;
  /* 11efc410 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc413 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efc416 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc419 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efc41b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11efc41d jmp 0x11efc45a */
  goto L_11efc45a;
L_11efc41f:;
  /* 11efc41f mov eax, dword ptr [0x11f30760] */
  EAX = (r32((uint32_t)(0x11f30760)));
  /* 11efc424 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc427 je 0x11efc44a */
  if (C.zf) goto L_11efc44a;
  /* 11efc429 push 0x11f2a84c */
  push32((uint32_t)(0x11f2a84cu));
  /* 11efc42e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc430 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11efc435 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc43a push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc43c call 0x11efa680 */
  push32(0x11efc441u); f_11efa680();
  /* 11efc441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc444 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc447 jne 0x11efc44a */
  if (!C.zf) goto L_11efc44a;
  /* 11efc449 int3  */
  x86_unimpl("int3 @ 0x11efc449");
L_11efc44a:;
  /* 11efc44a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc44c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc44e jne 0x11efc41f */
  if (!C.zf) goto L_11efc41f;
  /* 11efc450 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc453 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efc455 mov dword ptr [0x11f30760], eax */
  w32((uint32_t)(0x11f30760), (EAX));
L_11efc45a:;
  /* 11efc45a cmp dword ptr [0x11f30760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc461 je 0x11efc471 */
  if (C.zf) goto L_11efc471;
  /* 11efc463 mov ecx, dword ptr [0x11f30760] */
  ECX = (r32((uint32_t)(0x11f30760)));
  /* 11efc469 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc46c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11efc46f jmp 0x11efc479 */
  goto L_11efc479;
L_11efc471:;
  /* 11efc471 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc474 mov dword ptr [0x11f30758], eax */
  w32((uint32_t)(0x11f30758), (EAX));
L_11efc479:;
  /* 11efc479 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc47c mov edx, dword ptr [0x11f30760] */
  EDX = (r32((uint32_t)(0x11f30760)));
  /* 11efc482 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11efc484 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc487 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11efc48e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efc491 mov dword ptr [0x11f30760], ecx */
  w32((uint32_t)(0x11f30760), (ECX));
  /* 11efc497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efc49a:;
  /* 11efc49a pop edi */
  EDI = (pop32());
  /* 11efc49b pop esi */
  ESI = (pop32());
  /* 11efc49c pop ebx */
  EBX = (pop32());
  /* 11efc49d mov esp, ebp */
  ESP = (EBP);
  /* 11efc49f pop ebp */
  EBP = (pop32());
  /* 11efc4a0 ret  */
  ESPCHK(0x11efbf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4b0 @ 0x11efc4b0 (27 bytes, 13 insns) */
void f_11efc4b0(void) {
  FTRACE(0x11efc4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11efc4b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc4b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc4b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc4b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc4bc push eax */
  push32((uint32_t)(EAX));
  /* 11efc4bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc4c1 call 0x11efc4d0 */
  push32(0x11efc4c6u); f_11efc4d0();
  /* 11efc4c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc4c9 pop ebp */
  EBP = (pop32());
  /* 11efc4ca ret  */
  ESPCHK(0x11efc4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x11efc4d0 (64 bytes, 27 insns) */
void f_11efc4d0(void) {
  FTRACE(0x11efc4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11efc4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc4d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efc4d6 call 0x11efb9c0 */
  push32(0x11efc4dbu); f_11efb9c0();
  /* 11efc4db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc4de push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc4e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efc4e3 push eax */
  push32((uint32_t)(EAX));
  /* 11efc4e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efc4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc4e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efc4eb push edx */
  push32((uint32_t)(EDX));
  /* 11efc4ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc4ef push eax */
  push32((uint32_t)(EAX));
  /* 11efc4f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc4f4 call 0x11efbf90 */
  push32(0x11efc4f9u); f_11efbf90();
  /* 11efc4f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc4fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efc4ff push 9 */
  push32((uint32_t)(0x9u));
  /* 11efc501 call 0x11efba60 */
  push32(0x11efc506u); f_11efba60();
  /* 11efc506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc50c mov esp, ebp */
  ESP = (EBP);
  /* 11efc50e pop ebp */
  EBP = (pop32());
  /* 11efc50f ret  */
  ESPCHK(0x11efc4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x11efc510 (19 bytes, 9 insns) */
void f_11efc510(void) {
  FTRACE(0x11efc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc510 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc511 mov ebp, esp */
  EBP = (ESP);
  /* 11efc513 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc518 push eax */
  push32((uint32_t)(EAX));
  /* 11efc519 call 0x11efc550 */
  push32(0x11efc51eu); f_11efc550();
  /* 11efc51e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc521 pop ebp */
  EBP = (pop32());
  /* 11efc522 ret  */
  ESPCHK(0x11efc510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c530 @ 0x11efc530 (19 bytes, 9 insns) */
void f_11efc530(void) {
  FTRACE(0x11efc530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc530 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc531 mov ebp, esp */
  EBP = (ESP);
  /* 11efc533 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc538 push eax */
  push32((uint32_t)(EAX));
  /* 11efc539 call 0x11efc580 */
  push32(0x11efc53eu); f_11efc580();
  /* 11efc53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc541 pop ebp */
  EBP = (pop32());
  /* 11efc542 ret  */
  ESPCHK(0x11efc530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c550 @ 0x11efc550 (41 bytes, 16 insns) */
void f_11efc550(void) {
  FTRACE(0x11efc550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc550 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc551 mov ebp, esp */
  EBP = (ESP);
  /* 11efc553 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efc555 call 0x11efb9c0 */
  push32(0x11efc55au); f_11efb9c0();
  /* 11efc55a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc55d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc560 push eax */
  push32((uint32_t)(EAX));
  /* 11efc561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc564 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc565 call 0x11efc580 */
  push32(0x11efc56au); f_11efc580();
  /* 11efc56a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc56d push 9 */
  push32((uint32_t)(0x9u));
  /* 11efc56f call 0x11efba60 */
  push32(0x11efc574u); f_11efba60();
  /* 11efc574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc577 pop ebp */
  EBP = (pop32());
  /* 11efc578 ret  */
  ESPCHK(0x11efc550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x11efc580 (1004 bytes, 342 insns) */
void f_11efc580(void) {
  FTRACE(0x11efc580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc580 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc581 mov ebp, esp */
  EBP = (ESP);
  /* 11efc583 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc584 push ebx */
  push32((uint32_t)(EBX));
  /* 11efc585 push esi */
  push32((uint32_t)(ESI));
  /* 11efc586 push edi */
  push32((uint32_t)(EDI));
  /* 11efc587 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efc58c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11efc58f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc591 je 0x11efc5c3 */
  if (C.zf) goto L_11efc5c3;
L_11efc593:;
  /* 11efc593 call 0x11efcc60 */
  push32(0x11efc598u); f_11efcc60();
  /* 11efc598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc59a jne 0x11efc5bd */
  if (!C.zf) goto L_11efc5bd;
  /* 11efc59c push 0x11f2a838 */
  push32((uint32_t)(0x11f2a838u));
  /* 11efc5a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5a3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11efc5a8 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc5ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc5af call 0x11efa680 */
  push32(0x11efc5b4u); f_11efa680();
  /* 11efc5b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc5b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc5ba jne 0x11efc5bd */
  if (!C.zf) goto L_11efc5bd;
  /* 11efc5bc int3  */
  x86_unimpl("int3 @ 0x11efc5bc");
L_11efc5bd:;
  /* 11efc5bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc5bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc5c1 jne 0x11efc593 */
  if (!C.zf) goto L_11efc593;
L_11efc5c3:;
  /* 11efc5c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc5c7 jne 0x11efc5ce */
  if (!C.zf) goto L_11efc5ce;
  /* 11efc5c9 jmp 0x11efc965 */
  goto L_11efc965;
L_11efc5ce:;
  /* 11efc5ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efc5d7 push edx */
  push32((uint32_t)(EDX));
  /* 11efc5d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc5dd push eax */
  push32((uint32_t)(EAX));
  /* 11efc5de push 3 */
  push32((uint32_t)(0x3u));
  /* 11efc5e0 call dword ptr [0x11f2e2a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2e2a0))), 0x11efc5e6u);
  /* 11efc5e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc5e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc5eb jne 0x11efc618 */
  if (!C.zf) goto L_11efc618;
L_11efc5ed:;
  /* 11efc5ed push 0x11f2aad4 */
  push32((uint32_t)(0x11f2aad4u));
  /* 11efc5f2 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efc5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc5ff call 0x11efa680 */
  push32(0x11efc604u); f_11efa680();
  /* 11efc604 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc60a jne 0x11efc60d */
  if (!C.zf) goto L_11efc60d;
  /* 11efc60c int3  */
  x86_unimpl("int3 @ 0x11efc60c");
L_11efc60d:;
  /* 11efc60d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc60f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc611 jne 0x11efc5ed */
  if (!C.zf) goto L_11efc5ed;
  /* 11efc613 jmp 0x11efc965 */
  goto L_11efc965;
L_11efc618:;
  /* 11efc618 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc61b push edx */
  push32((uint32_t)(EDX));
  /* 11efc61c call 0x11efd0c0 */
  push32(0x11efc621u); f_11efd0c0();
  /* 11efc621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc626 jne 0x11efc649 */
  if (!C.zf) goto L_11efc649;
  /* 11efc628 push 0x11f2a93c */
  push32((uint32_t)(0x11f2a93cu));
  /* 11efc62d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc62f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11efc634 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc639 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc63b call 0x11efa680 */
  push32(0x11efc640u); f_11efa680();
  /* 11efc640 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc643 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc646 jne 0x11efc649 */
  if (!C.zf) goto L_11efc649;
  /* 11efc648 int3  */
  x86_unimpl("int3 @ 0x11efc648");
L_11efc649:;
  /* 11efc649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc64b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc64d jne 0x11efc618 */
  if (!C.zf) goto L_11efc618;
  /* 11efc64f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc652 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc655 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11efc658:;
  /* 11efc658 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc65b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efc65e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efc663 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc666 je 0x11efc6ab */
  if (C.zf) goto L_11efc6ab;
  /* 11efc668 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc66b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc66f je 0x11efc6ab */
  if (C.zf) goto L_11efc6ab;
  /* 11efc671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc674 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efc677 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efc67c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc67f je 0x11efc6ab */
  if (C.zf) goto L_11efc6ab;
  /* 11efc681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc684 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc688 je 0x11efc6ab */
  if (C.zf) goto L_11efc6ab;
  /* 11efc68a push 0x11f2a44c */
  push32((uint32_t)(0x11f2a44cu));
  /* 11efc68f push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc691 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11efc696 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc69b push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc69d call 0x11efa680 */
  push32(0x11efc6a2u); f_11efa680();
  /* 11efc6a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc6a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc6a8 jne 0x11efc6ab */
  if (!C.zf) goto L_11efc6ab;
  /* 11efc6aa int3  */
  x86_unimpl("int3 @ 0x11efc6aa");
L_11efc6ab:;
  /* 11efc6ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efc6ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efc6af jne 0x11efc658 */
  if (!C.zf) goto L_11efc658;
  /* 11efc6b1 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efc6b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11efc6b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc6bb jne 0x11efc786 */
  if (!C.zf) goto L_11efc786;
  /* 11efc6c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11efc6c3 mov cl, byte ptr [0x11f2df74] */
  CL = (r8((uint32_t)(0x11f2df74)));
  /* 11efc6c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc6ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc6cd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc6d0 push edx */
  push32((uint32_t)(EDX));
  /* 11efc6d1 call 0x11efcbd0 */
  push32(0x11efc6d6u); f_11efcbd0();
  /* 11efc6d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc6d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc6db jne 0x11efc720 */
  if (!C.zf) goto L_11efc720;
L_11efc6dd:;
  /* 11efc6dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc6e0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc6e3 push eax */
  push32((uint32_t)(EAX));
  /* 11efc6e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc6e7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efc6ea push edx */
  push32((uint32_t)(EDX));
  /* 11efc6eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc6ee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efc6f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efc6f7 mov edx, dword ptr [ecx*4 + 0x11f2df78] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2df78)));
  /* 11efc6fe push edx */
  push32((uint32_t)(EDX));
  /* 11efc6ff push 0x11f2aaa8 */
  push32((uint32_t)(0x11f2aaa8u));
  /* 11efc704 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc706 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc708 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc70a push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc70c call 0x11efa680 */
  push32(0x11efc711u); f_11efa680();
  /* 11efc711 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc714 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc717 jne 0x11efc71a */
  if (!C.zf) goto L_11efc71a;
  /* 11efc719 int3  */
  x86_unimpl("int3 @ 0x11efc719");
L_11efc71a:;
  /* 11efc71a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc71c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc71e jne 0x11efc6dd */
  if (!C.zf) goto L_11efc6dd;
L_11efc720:;
  /* 11efc720 push 4 */
  push32((uint32_t)(0x4u));
  /* 11efc722 mov cl, byte ptr [0x11f2df74] */
  CL = (r8((uint32_t)(0x11f2df74)));
  /* 11efc728 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc729 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc72c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efc72f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc732 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11efc736 push edx */
  push32((uint32_t)(EDX));
  /* 11efc737 call 0x11efcbd0 */
  push32(0x11efc73cu); f_11efcbd0();
  /* 11efc73c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc73f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc741 jne 0x11efc786 */
  if (!C.zf) goto L_11efc786;
L_11efc743:;
  /* 11efc743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc746 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc749 push eax */
  push32((uint32_t)(EAX));
  /* 11efc74a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc74d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efc750 push edx */
  push32((uint32_t)(EDX));
  /* 11efc751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc754 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efc757 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efc75d mov edx, dword ptr [ecx*4 + 0x11f2df78] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2df78)));
  /* 11efc764 push edx */
  push32((uint32_t)(EDX));
  /* 11efc765 push 0x11f2aa7c */
  push32((uint32_t)(0x11f2aa7cu));
  /* 11efc76a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc76c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc76e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc770 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc772 call 0x11efa680 */
  push32(0x11efc777u); f_11efa680();
  /* 11efc777 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc77a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc77d jne 0x11efc780 */
  if (!C.zf) goto L_11efc780;
  /* 11efc77f int3  */
  x86_unimpl("int3 @ 0x11efc77f");
L_11efc780:;
  /* 11efc780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efc782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc784 jne 0x11efc743 */
  if (!C.zf) goto L_11efc743;
L_11efc786:;
  /* 11efc786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc789 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc78d jne 0x11efc7fb */
  if (!C.zf) goto L_11efc7fb;
L_11efc78f:;
  /* 11efc78f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc792 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc799 jne 0x11efc7a4 */
  if (!C.zf) goto L_11efc7a4;
  /* 11efc79b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc79e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc7a2 je 0x11efc7c5 */
  if (C.zf) goto L_11efc7c5;
L_11efc7a4:;
  /* 11efc7a4 push 0x11f2aa3c */
  push32((uint32_t)(0x11f2aa3cu));
  /* 11efc7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc7ab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11efc7b0 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc7b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc7b7 call 0x11efa680 */
  push32(0x11efc7bcu); f_11efa680();
  /* 11efc7bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc7bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc7c2 jne 0x11efc7c5 */
  if (!C.zf) goto L_11efc7c5;
  /* 11efc7c4 int3  */
  x86_unimpl("int3 @ 0x11efc7c4");
L_11efc7c5:;
  /* 11efc7c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc7c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc7c9 jne 0x11efc78f */
  if (!C.zf) goto L_11efc78f;
  /* 11efc7cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc7ce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efc7d1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc7d4 push eax */
  push32((uint32_t)(EAX));
  /* 11efc7d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc7d7 mov cl, byte ptr [0x11f2df75] */
  CL = (r8((uint32_t)(0x11f2df75)));
  /* 11efc7dd push ecx */
  push32((uint32_t)(ECX));
  /* 11efc7de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc7e1 push edx */
  push32((uint32_t)(EDX));
  /* 11efc7e2 call 0x11f01ed0 */
  push32(0x11efc7e7u); f_11f01ed0();
  /* 11efc7e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc7ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc7ed push eax */
  push32((uint32_t)(EAX));
  /* 11efc7ee call 0x11f02690 */
  push32(0x11efc7f3u); f_11f02690();
  /* 11efc7f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc7f6 jmp 0x11efc965 */
  goto L_11efc965;
L_11efc7fb:;
  /* 11efc7fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc7fe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc802 jne 0x11efc811 */
  if (!C.zf) goto L_11efc811;
  /* 11efc804 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc808 jne 0x11efc811 */
  if (!C.zf) goto L_11efc811;
  /* 11efc80a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11efc811:;
  /* 11efc811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc814 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efc817 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc81a je 0x11efc83d */
  if (C.zf) goto L_11efc83d;
  /* 11efc81c push 0x11f2aa1c */
  push32((uint32_t)(0x11f2aa1cu));
  /* 11efc821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc823 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11efc828 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc82d push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc82f call 0x11efa680 */
  push32(0x11efc834u); f_11efa680();
  /* 11efc834 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc837 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc83a jne 0x11efc83d */
  if (!C.zf) goto L_11efc83d;
  /* 11efc83c int3  */
  x86_unimpl("int3 @ 0x11efc83c");
L_11efc83d:;
  /* 11efc83d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc83f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc841 jne 0x11efc811 */
  if (!C.zf) goto L_11efc811;
  /* 11efc843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc846 mov eax, dword ptr [0x11f30764] */
  EAX = (r32((uint32_t)(0x11f30764)));
  /* 11efc84b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc84e mov dword ptr [0x11f30764], eax */
  w32((uint32_t)(0x11f30764), (EAX));
  /* 11efc853 mov ecx, dword ptr [0x11f2df68] */
  ECX = (r32((uint32_t)(0x11f2df68)));
  /* 11efc859 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11efc85c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc85e jne 0x11efc93c */
  if (!C.zf) goto L_11efc93c;
  /* 11efc864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc867 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc86a je 0x11efc87c */
  if (C.zf) goto L_11efc87c;
  /* 11efc86c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc86f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efc871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc874 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11efc877 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11efc87a jmp 0x11efc8ba */
  goto L_11efc8ba;
L_11efc87c:;
  /* 11efc87c mov ecx, dword ptr [0x11f30758] */
  ECX = (r32((uint32_t)(0x11f30758)));
  /* 11efc882 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc885 je 0x11efc8a8 */
  if (C.zf) goto L_11efc8a8;
  /* 11efc887 push 0x11f2aa04 */
  push32((uint32_t)(0x11f2aa04u));
  /* 11efc88c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc88e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11efc893 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc898 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc89a call 0x11efa680 */
  push32(0x11efc89fu); f_11efa680();
  /* 11efc89f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc8a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc8a5 jne 0x11efc8a8 */
  if (!C.zf) goto L_11efc8a8;
  /* 11efc8a7 int3  */
  x86_unimpl("int3 @ 0x11efc8a7");
L_11efc8a8:;
  /* 11efc8a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efc8aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efc8ac jne 0x11efc87c */
  if (!C.zf) goto L_11efc87c;
  /* 11efc8ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc8b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efc8b4 mov dword ptr [0x11f30758], ecx */
  w32((uint32_t)(0x11f30758), (ECX));
L_11efc8ba:;
  /* 11efc8ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc8bd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc8c1 je 0x11efc8d2 */
  if (C.zf) goto L_11efc8d2;
  /* 11efc8c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc8c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11efc8c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc8cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efc8ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11efc8d0 jmp 0x11efc90f */
  goto L_11efc90f;
L_11efc8d2:;
  /* 11efc8d2 mov ecx, dword ptr [0x11f30760] */
  ECX = (r32((uint32_t)(0x11f30760)));
  /* 11efc8d8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc8db je 0x11efc8fe */
  if (C.zf) goto L_11efc8fe;
  /* 11efc8dd push 0x11f2a9ec */
  push32((uint32_t)(0x11f2a9ecu));
  /* 11efc8e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc8e4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11efc8e9 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc8ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc8f0 call 0x11efa680 */
  push32(0x11efc8f5u); f_11efa680();
  /* 11efc8f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc8f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc8fb jne 0x11efc8fe */
  if (!C.zf) goto L_11efc8fe;
  /* 11efc8fd int3  */
  x86_unimpl("int3 @ 0x11efc8fd");
L_11efc8fe:;
  /* 11efc8fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efc900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efc902 jne 0x11efc8d2 */
  if (!C.zf) goto L_11efc8d2;
  /* 11efc904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc907 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efc909 mov dword ptr [0x11f30760], ecx */
  w32((uint32_t)(0x11f30760), (ECX));
L_11efc90f:;
  /* 11efc90f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc912 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efc915 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc918 push eax */
  push32((uint32_t)(EAX));
  /* 11efc919 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc91b mov cl, byte ptr [0x11f2df75] */
  CL = (r8((uint32_t)(0x11f2df75)));
  /* 11efc921 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc925 push edx */
  push32((uint32_t)(EDX));
  /* 11efc926 call 0x11f01ed0 */
  push32(0x11efc92bu); f_11f01ed0();
  /* 11efc92b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc92e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc931 push eax */
  push32((uint32_t)(EAX));
  /* 11efc932 call 0x11f02690 */
  push32(0x11efc937u); f_11f02690();
  /* 11efc937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc93a jmp 0x11efc965 */
  goto L_11efc965;
L_11efc93c:;
  /* 11efc93c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc93f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11efc946 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc949 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efc94c push eax */
  push32((uint32_t)(EAX));
  /* 11efc94d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc94f mov cl, byte ptr [0x11f2df75] */
  CL = (r8((uint32_t)(0x11f2df75)));
  /* 11efc955 push ecx */
  push32((uint32_t)(ECX));
  /* 11efc956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efc959 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc95c push edx */
  push32((uint32_t)(EDX));
  /* 11efc95d call 0x11f01ed0 */
  push32(0x11efc962u); f_11f01ed0();
  /* 11efc962 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efc965:;
  /* 11efc965 pop edi */
  EDI = (pop32());
  /* 11efc966 pop esi */
  ESI = (pop32());
  /* 11efc967 pop ebx */
  EBX = (pop32());
  /* 11efc968 mov esp, ebp */
  ESP = (EBP);
  /* 11efc96a pop ebp */
  EBP = (pop32());
  /* 11efc96b ret  */
  ESPCHK(0x11efc580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x11efc970 (19 bytes, 9 insns) */
void f_11efc970(void) {
  FTRACE(0x11efc970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc970 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc971 mov ebp, esp */
  EBP = (ESP);
  /* 11efc973 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efc975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc978 push eax */
  push32((uint32_t)(EAX));
  /* 11efc979 call 0x11efc990 */
  push32(0x11efc97eu); f_11efc990();
  /* 11efc97e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc981 pop ebp */
  EBP = (pop32());
  /* 11efc982 ret  */
  ESPCHK(0x11efc970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x11efc990 (342 bytes, 119 insns) */
void f_11efc990(void) {
  FTRACE(0x11efc990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efc990 push ebp */
  push32((uint32_t)(EBP));
  /* 11efc991 mov ebp, esp */
  EBP = (ESP);
  /* 11efc993 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efc996 push ebx */
  push32((uint32_t)(EBX));
  /* 11efc997 push esi */
  push32((uint32_t)(ESI));
  /* 11efc998 push edi */
  push32((uint32_t)(EDI));
  /* 11efc999 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efc99e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11efc9a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc9a3 je 0x11efc9d5 */
  if (C.zf) goto L_11efc9d5;
L_11efc9a5:;
  /* 11efc9a5 call 0x11efcc60 */
  push32(0x11efc9aau); f_11efcc60();
  /* 11efc9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc9ac jne 0x11efc9cf */
  if (!C.zf) goto L_11efc9cf;
  /* 11efc9ae push 0x11f2a838 */
  push32((uint32_t)(0x11f2a838u));
  /* 11efc9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc9b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11efc9ba push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efc9bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11efc9c1 call 0x11efa680 */
  push32(0x11efc9c6u); f_11efa680();
  /* 11efc9c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc9c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efc9cc jne 0x11efc9cf */
  if (!C.zf) goto L_11efc9cf;
  /* 11efc9ce int3  */
  x86_unimpl("int3 @ 0x11efc9ce");
L_11efc9cf:;
  /* 11efc9cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efc9d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efc9d3 jne 0x11efc9a5 */
  if (!C.zf) goto L_11efc9a5;
L_11efc9d5:;
  /* 11efc9d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efc9d7 call 0x11efb9c0 */
  push32(0x11efc9dcu); f_11efb9c0();
  /* 11efc9dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efc9df:;
  /* 11efc9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efc9e2 push edx */
  push32((uint32_t)(EDX));
  /* 11efc9e3 call 0x11efd0c0 */
  push32(0x11efc9e8u); f_11efd0c0();
  /* 11efc9e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efc9eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efc9ed jne 0x11efca10 */
  if (!C.zf) goto L_11efca10;
  /* 11efc9ef push 0x11f2a93c */
  push32((uint32_t)(0x11f2a93cu));
  /* 11efc9f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efc9f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11efc9fb push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efca00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efca02 call 0x11efa680 */
  push32(0x11efca07u); f_11efa680();
  /* 11efca07 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efca0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca0d jne 0x11efca10 */
  if (!C.zf) goto L_11efca10;
  /* 11efca0f int3  */
  x86_unimpl("int3 @ 0x11efca0f");
L_11efca10:;
  /* 11efca10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efca12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efca14 jne 0x11efc9df */
  if (!C.zf) goto L_11efc9df;
  /* 11efca16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efca19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efca1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11efca1f:;
  /* 11efca1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca22 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efca25 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efca2a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca2d je 0x11efca72 */
  if (C.zf) goto L_11efca72;
  /* 11efca2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca32 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca36 je 0x11efca72 */
  if (C.zf) goto L_11efca72;
  /* 11efca38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca3b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efca3e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efca43 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca46 je 0x11efca72 */
  if (C.zf) goto L_11efca72;
  /* 11efca48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca4b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca4f je 0x11efca72 */
  if (C.zf) goto L_11efca72;
  /* 11efca51 push 0x11f2a44c */
  push32((uint32_t)(0x11f2a44cu));
  /* 11efca56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efca58 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11efca5d push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efca62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efca64 call 0x11efa680 */
  push32(0x11efca69u); f_11efa680();
  /* 11efca69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efca6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca6f jne 0x11efca72 */
  if (!C.zf) goto L_11efca72;
  /* 11efca71 int3  */
  x86_unimpl("int3 @ 0x11efca71");
L_11efca72:;
  /* 11efca72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efca74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efca76 jne 0x11efca1f */
  if (!C.zf) goto L_11efca1f;
  /* 11efca78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca7b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca7f jne 0x11efca8e */
  if (!C.zf) goto L_11efca8e;
  /* 11efca81 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca85 jne 0x11efca8e */
  if (!C.zf) goto L_11efca8e;
  /* 11efca87 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11efca8e:;
  /* 11efca8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca91 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efca95 je 0x11efcac9 */
  if (C.zf) goto L_11efcac9;
L_11efca97:;
  /* 11efca97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efca9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efca9d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcaa0 je 0x11efcac3 */
  if (C.zf) goto L_11efcac3;
  /* 11efcaa2 push 0x11f2aa1c */
  push32((uint32_t)(0x11f2aa1cu));
  /* 11efcaa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcaa9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11efcaae push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efcab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11efcab5 call 0x11efa680 */
  push32(0x11efcabau); f_11efa680();
  /* 11efcaba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcabd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcac0 jne 0x11efcac3 */
  if (!C.zf) goto L_11efcac3;
  /* 11efcac2 int3  */
  x86_unimpl("int3 @ 0x11efcac2");
L_11efcac3:;
  /* 11efcac3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efcac5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efcac7 jne 0x11efca97 */
  if (!C.zf) goto L_11efca97;
L_11efcac9:;
  /* 11efcac9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcacc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efcacf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efcad2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efcad4 call 0x11efba60 */
  push32(0x11efcad9u); f_11efba60();
  /* 11efcad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcadc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcadf pop edi */
  EDI = (pop32());
  /* 11efcae0 pop esi */
  ESI = (pop32());
  /* 11efcae1 pop ebx */
  EBX = (pop32());
  /* 11efcae2 mov esp, ebp */
  ESP = (EBP);
  /* 11efcae4 pop ebp */
  EBP = (pop32());
  /* 11efcae5 ret  */
  ESPCHK(0x11efc990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x11efcaf0 (28 bytes, 11 insns) */
void f_11efcaf0(void) {
  FTRACE(0x11efcaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efcaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efcaf1 mov ebp, esp */
  EBP = (ESP);
  /* 11efcaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcaf4 mov eax, dword ptr [0x11f2df70] */
  EAX = (r32((uint32_t)(0x11f2df70)));
  /* 11efcaf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efcafc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcaff mov dword ptr [0x11f2df70], ecx */
  w32((uint32_t)(0x11f2df70), (ECX));
  /* 11efcb05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcb08 mov esp, ebp */
  ESP = (EBP);
  /* 11efcb0a pop ebp */
  EBP = (pop32());
  /* 11efcb0b ret  */
  ESPCHK(0x11efcaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb10 @ 0x11efcb10 (157 bytes, 59 insns) */
void f_11efcb10(void) {
  FTRACE(0x11efcb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efcb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11efcb11 mov ebp, esp */
  EBP = (ESP);
  /* 11efcb13 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcb14 push ebx */
  push32((uint32_t)(EBX));
  /* 11efcb15 push esi */
  push32((uint32_t)(ESI));
  /* 11efcb16 push edi */
  push32((uint32_t)(EDI));
  /* 11efcb17 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efcb19 call 0x11efb9c0 */
  push32(0x11efcb1eu); f_11efb9c0();
  /* 11efcb1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcb21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcb24 push eax */
  push32((uint32_t)(EAX));
  /* 11efcb25 call 0x11efd0c0 */
  push32(0x11efcb2au); f_11efd0c0();
  /* 11efcb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcb2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efcb2f je 0x11efcb9c */
  if (C.zf) goto L_11efcb9c;
  /* 11efcb31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcb34 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efcb37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11efcb3a:;
  /* 11efcb3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcb3d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efcb40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efcb45 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcb48 je 0x11efcb8d */
  if (C.zf) goto L_11efcb8d;
  /* 11efcb4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcb4d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcb51 je 0x11efcb8d */
  if (C.zf) goto L_11efcb8d;
  /* 11efcb53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcb56 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efcb59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efcb5e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcb61 je 0x11efcb8d */
  if (C.zf) goto L_11efcb8d;
  /* 11efcb63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcb66 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcb6a je 0x11efcb8d */
  if (C.zf) goto L_11efcb8d;
  /* 11efcb6c push 0x11f2a44c */
  push32((uint32_t)(0x11f2a44cu));
  /* 11efcb71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcb73 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11efcb78 push 0x11f2a82c */
  push32((uint32_t)(0x11f2a82cu));
  /* 11efcb7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11efcb7f call 0x11efa680 */
  push32(0x11efcb84u); f_11efa680();
  /* 11efcb84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcb87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcb8a jne 0x11efcb8d */
  if (!C.zf) goto L_11efcb8d;
  /* 11efcb8c int3  */
  x86_unimpl("int3 @ 0x11efcb8c");
L_11efcb8d:;
  /* 11efcb8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efcb8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efcb91 jne 0x11efcb3a */
  if (!C.zf) goto L_11efcb3a;
  /* 11efcb93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcb96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efcb99 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11efcb9c:;
  /* 11efcb9c push 9 */
  push32((uint32_t)(0x9u));
  /* 11efcb9e call 0x11efba60 */
  push32(0x11efcba3u); f_11efba60();
  /* 11efcba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcba6 pop edi */
  EDI = (pop32());
  /* 11efcba7 pop esi */
  ESI = (pop32());
  /* 11efcba8 pop ebx */
  EBX = (pop32());
  /* 11efcba9 mov esp, ebp */
  ESP = (EBP);
  /* 11efcbab pop ebp */
  EBP = (pop32());
  /* 11efcbac ret  */
  ESPCHK(0x11efcb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbb0 @ 0x11efcbb0 (28 bytes, 11 insns) */
void f_11efcbb0(void) {
  FTRACE(0x11efcbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efcbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efcbb1 mov ebp, esp */
  EBP = (ESP);
  /* 11efcbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcbb4 mov eax, dword ptr [0x11f2e2a0] */
  EAX = (r32((uint32_t)(0x11f2e2a0)));
  /* 11efcbb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efcbbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcbbf mov dword ptr [0x11f2e2a0], ecx */
  w32((uint32_t)(0x11f2e2a0), (ECX));
  /* 11efcbc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcbc8 mov esp, ebp */
  ESP = (EBP);
  /* 11efcbca pop ebp */
  EBP = (pop32());
  /* 11efcbcb ret  */
  ESPCHK(0x11efcbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbd0 @ 0x11efcbd0 (136 bytes, 55 insns) */
void f_11efcbd0(void) {
  FTRACE(0x11efcbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efcbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efcbd1 mov ebp, esp */
  EBP = (ESP);
  /* 11efcbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcbd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11efcbd5 push esi */
  push32((uint32_t)(ESI));
  /* 11efcbd6 push edi */
  push32((uint32_t)(EDI));
  /* 11efcbd7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11efcbde:;
  /* 11efcbde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efcbe1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efcbe4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efcbe7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11efcbea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efcbec je 0x11efcc4e */
  if (C.zf) goto L_11efcc4e;
  /* 11efcbee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcbf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efcbf3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11efcbf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efcbf8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efcbfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcc01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcc04 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11efcc07 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcc09 je 0x11efcc4c */
  if (C.zf) goto L_11efcc4c;
L_11efcc0b:;
  /* 11efcc0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efcc0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efcc13 push eax */
  push32((uint32_t)(EAX));
  /* 11efcc14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcc17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efcc19 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11efcc1c push edx */
  push32((uint32_t)(EDX));
  /* 11efcc1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcc20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efcc23 push eax */
  push32((uint32_t)(EAX));
  /* 11efcc24 push 0x11f2aaf0 */
  push32((uint32_t)(0x11f2aaf0u));
  /* 11efcc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcc2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcc2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcc2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcc31 call 0x11efa680 */
  push32(0x11efcc36u); f_11efa680();
  /* 11efcc36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcc39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcc3c jne 0x11efcc3f */
  if (!C.zf) goto L_11efcc3f;
  /* 11efcc3e int3  */
  x86_unimpl("int3 @ 0x11efcc3e");
L_11efcc3f:;
  /* 11efcc3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efcc41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efcc43 jne 0x11efcc0b */
  if (!C.zf) goto L_11efcc0b;
  /* 11efcc45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efcc4c:;
  /* 11efcc4c jmp 0x11efcbde */
  goto L_11efcbde;
L_11efcc4e:;
  /* 11efcc4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcc51 pop edi */
  EDI = (pop32());
  /* 11efcc52 pop esi */
  ESI = (pop32());
  /* 11efcc53 pop ebx */
  EBX = (pop32());
  /* 11efcc54 mov esp, ebp */
  ESP = (EBP);
  /* 11efcc56 pop ebp */
  EBP = (pop32());
  /* 11efcc57 ret  */
  ESPCHK(0x11efcbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x11efcc60 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11efcc60(void) {
  FTRACE(0x11efcc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efcc60 push ebp */
  push32((uint32_t)(EBP));
  /* 11efcc61 mov ebp, esp */
  EBP = (ESP);
  /* 11efcc63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efcc66 push ebx */
  push32((uint32_t)(EBX));
  /* 11efcc67 push esi */
  push32((uint32_t)(ESI));
  /* 11efcc68 push edi */
  push32((uint32_t)(EDI));
  /* 11efcc69 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efcc70 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efcc75 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11efcc78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efcc7a jne 0x11efcc86 */
  if (!C.zf) goto L_11efcc86;
  /* 11efcc7c mov eax, 1 */
  EAX = (0x1u);
  /* 11efcc81 jmp 0x11efcfb8 */
  goto L_11efcfb8;
L_11efcc86:;
  /* 11efcc86 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efcc88 call 0x11efb9c0 */
  push32(0x11efcc8du); f_11efb9c0();
  /* 11efcc8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcc90 call 0x11f02700 */
  push32(0x11efcc95u); f_11f02700();
  /* 11efcc95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11efcc98 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcc9c je 0x11efcda9 */
  if (C.zf) goto L_11efcda9;
  /* 11efcca2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcca6 je 0x11efcda9 */
  if (C.zf) goto L_11efcda9;
  /* 11efccac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11efccaf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11efccb2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11efccb5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efccb8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11efccbb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efccbf ja 0x11efcd72 */
  if ((!C.cf&&!C.zf)) goto L_11efcd72;
  /* 11efccc5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11efccc8 jmp dword ptr [eax*4 + 0x11efcfbf] */
  switch (EAX) {
    case 0: goto L_11efcd4a;
    case 1: goto L_11efcd22;
    case 2: goto L_11efccfa;
    case 3: goto L_11efcccf;
    default: x86_unimpl("switch@0x11efccc8 out of table"); return;
  }
L_11efcccf:;
  /* 11efcccf push 0x11f2ac44 */
  push32((uint32_t)(0x11f2ac44u));
  /* 11efccd4 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efccd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efccdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11efccdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11efccdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcce1 call 0x11efa680 */
  push32(0x11efcce6u); f_11efa680();
  /* 11efcce6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcce9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efccec jne 0x11efccef */
  if (!C.zf) goto L_11efccef;
  /* 11efccee int3  */
  x86_unimpl("int3 @ 0x11efccee");
L_11efccef:;
  /* 11efccef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efccf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efccf3 jne 0x11efcccf */
  if (!C.zf) goto L_11efcccf;
  /* 11efccf5 jmp 0x11efcd98 */
  goto L_11efcd98;
L_11efccfa:;
  /* 11efccfa push 0x11f2ac20 */
  push32((uint32_t)(0x11f2ac20u));
  /* 11efccff push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efcd04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd0c call 0x11efa680 */
  push32(0x11efcd11u); f_11efa680();
  /* 11efcd11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcd14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcd17 jne 0x11efcd1a */
  if (!C.zf) goto L_11efcd1a;
  /* 11efcd19 int3  */
  x86_unimpl("int3 @ 0x11efcd19");
L_11efcd1a:;
  /* 11efcd1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efcd1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efcd1e jne 0x11efccfa */
  if (!C.zf) goto L_11efccfa;
  /* 11efcd20 jmp 0x11efcd98 */
  goto L_11efcd98;
L_11efcd22:;
  /* 11efcd22 push 0x11f2abfc */
  push32((uint32_t)(0x11f2abfcu));
  /* 11efcd27 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efcd2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd34 call 0x11efa680 */
  push32(0x11efcd39u); f_11efa680();
  /* 11efcd39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcd3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcd3f jne 0x11efcd42 */
  if (!C.zf) goto L_11efcd42;
  /* 11efcd41 int3  */
  x86_unimpl("int3 @ 0x11efcd41");
L_11efcd42:;
  /* 11efcd42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efcd44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efcd46 jne 0x11efcd22 */
  if (!C.zf) goto L_11efcd22;
  /* 11efcd48 jmp 0x11efcd98 */
  goto L_11efcd98;
L_11efcd4a:;
  /* 11efcd4a push 0x11f2abd8 */
  push32((uint32_t)(0x11f2abd8u));
  /* 11efcd4f push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efcd54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd5c call 0x11efa680 */
  push32(0x11efcd61u); f_11efa680();
  /* 11efcd61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcd64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcd67 jne 0x11efcd6a */
  if (!C.zf) goto L_11efcd6a;
  /* 11efcd69 int3  */
  x86_unimpl("int3 @ 0x11efcd69");
L_11efcd6a:;
  /* 11efcd6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efcd6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efcd6e jne 0x11efcd4a */
  if (!C.zf) goto L_11efcd4a;
  /* 11efcd70 jmp 0x11efcd98 */
  goto L_11efcd98;
L_11efcd72:;
  /* 11efcd72 push 0x11f2abac */
  push32((uint32_t)(0x11f2abacu));
  /* 11efcd77 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efcd7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcd84 call 0x11efa680 */
  push32(0x11efcd89u); f_11efa680();
  /* 11efcd89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcd8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcd8f jne 0x11efcd92 */
  if (!C.zf) goto L_11efcd92;
  /* 11efcd91 int3  */
  x86_unimpl("int3 @ 0x11efcd91");
L_11efcd92:;
  /* 11efcd92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efcd94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efcd96 jne 0x11efcd72 */
  if (!C.zf) goto L_11efcd72;
L_11efcd98:;
  /* 11efcd98 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efcd9a call 0x11efba60 */
  push32(0x11efcd9fu); f_11efba60();
  /* 11efcd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcda2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efcda4 jmp 0x11efcfb8 */
  goto L_11efcfb8;
L_11efcda9:;
  /* 11efcda9 mov eax, dword ptr [0x11f30760] */
  EAX = (r32((uint32_t)(0x11f30760)));
  /* 11efcdae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11efcdb1 jmp 0x11efcdbb */
  goto L_11efcdbb;
L_11efcdb3:;
  /* 11efcdb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcdb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efcdb8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11efcdbb:;
  /* 11efcdbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcdbf je 0x11efcfab */
  if (C.zf) goto L_11efcfab;
  /* 11efcdc5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11efcdcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcdcf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efcdd2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efcdd8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcddb je 0x11efce00 */
  if (C.zf) goto L_11efce00;
  /* 11efcddd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcde0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcde4 je 0x11efce00 */
  if (C.zf) goto L_11efce00;
  /* 11efcde6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcde9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efcdec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efcdf2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcdf5 je 0x11efce00 */
  if (C.zf) goto L_11efce00;
  /* 11efcdf7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcdfa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcdfe jne 0x11efce18 */
  if (!C.zf) goto L_11efce18;
L_11efce00:;
  /* 11efce00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce03 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efce06 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efce0c mov edx, dword ptr [ecx*4 + 0x11f2df78] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2df78)));
  /* 11efce13 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11efce16 jmp 0x11efce1f */
  goto L_11efce1f;
L_11efce18:;
  /* 11efce18 mov dword ptr [ebp - 0x14], 0x11f2aba4 */
  w32((uint32_t)(EBP + -0x14), (0x11f2aba4u));
L_11efce1f:;
  /* 11efce1f push 4 */
  push32((uint32_t)(0x4u));
  /* 11efce21 mov al, byte ptr [0x11f2df74] */
  AL = (r8((uint32_t)(0x11f2df74)));
  /* 11efce26 push eax */
  push32((uint32_t)(EAX));
  /* 11efce27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce2a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efce2d push ecx */
  push32((uint32_t)(ECX));
  /* 11efce2e call 0x11efcbd0 */
  push32(0x11efce33u); f_11efcbd0();
  /* 11efce33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efce36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efce38 jne 0x11efce74 */
  if (!C.zf) goto L_11efce74;
L_11efce3a:;
  /* 11efce3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce3d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efce40 push edx */
  push32((uint32_t)(EDX));
  /* 11efce41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efce47 push ecx */
  push32((uint32_t)(ECX));
  /* 11efce48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efce4b push edx */
  push32((uint32_t)(EDX));
  /* 11efce4c push 0x11f2aaa8 */
  push32((uint32_t)(0x11f2aaa8u));
  /* 11efce51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efce53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efce55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efce57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efce59 call 0x11efa680 */
  push32(0x11efce5eu); f_11efa680();
  /* 11efce5e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efce61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efce64 jne 0x11efce67 */
  if (!C.zf) goto L_11efce67;
  /* 11efce66 int3  */
  x86_unimpl("int3 @ 0x11efce66");
L_11efce67:;
  /* 11efce67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efce69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efce6b jne 0x11efce3a */
  if (!C.zf) goto L_11efce3a;
  /* 11efce6d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11efce74:;
  /* 11efce74 push 4 */
  push32((uint32_t)(0x4u));
  /* 11efce76 mov cl, byte ptr [0x11f2df74] */
  CL = (r8((uint32_t)(0x11f2df74)));
  /* 11efce7c push ecx */
  push32((uint32_t)(ECX));
  /* 11efce7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce80 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efce83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce86 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11efce8a push edx */
  push32((uint32_t)(EDX));
  /* 11efce8b call 0x11efcbd0 */
  push32(0x11efce90u); f_11efcbd0();
  /* 11efce90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efce93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efce95 jne 0x11efced1 */
  if (!C.zf) goto L_11efced1;
L_11efce97:;
  /* 11efce97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efce9a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efce9d push eax */
  push32((uint32_t)(EAX));
  /* 11efce9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcea1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efcea4 push edx */
  push32((uint32_t)(EDX));
  /* 11efcea5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efcea8 push eax */
  push32((uint32_t)(EAX));
  /* 11efcea9 push 0x11f2aa7c */
  push32((uint32_t)(0x11f2aa7cu));
  /* 11efceae push 0 */
  push32((uint32_t)(0x0u));
  /* 11efceb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efceb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efceb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efceb6 call 0x11efa680 */
  push32(0x11efcebbu); f_11efa680();
  /* 11efcebb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcebe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcec1 jne 0x11efcec4 */
  if (!C.zf) goto L_11efcec4;
  /* 11efcec3 int3  */
  x86_unimpl("int3 @ 0x11efcec3");
L_11efcec4:;
  /* 11efcec4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efcec6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efcec8 jne 0x11efce97 */
  if (!C.zf) goto L_11efce97;
  /* 11efceca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11efced1:;
  /* 11efced1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efced4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efced8 jne 0x11efcf2a */
  if (!C.zf) goto L_11efcf2a;
  /* 11efceda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcedd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11efcee0 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcee1 mov dl, byte ptr [0x11f2df75] */
  DL = (r8((uint32_t)(0x11f2df75)));
  /* 11efcee7 push edx */
  push32((uint32_t)(EDX));
  /* 11efcee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efceeb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efceee push eax */
  push32((uint32_t)(EAX));
  /* 11efceef call 0x11efcbd0 */
  push32(0x11efcef4u); f_11efcbd0();
  /* 11efcef4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcef7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efcef9 jne 0x11efcf2a */
  if (!C.zf) goto L_11efcf2a;
L_11efcefb:;
  /* 11efcefb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcefe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcf01 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcf02 push 0x11f2ab78 */
  push32((uint32_t)(0x11f2ab78u));
  /* 11efcf07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf0f call 0x11efa680 */
  push32(0x11efcf14u); f_11efa680();
  /* 11efcf14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcf17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcf1a jne 0x11efcf1d */
  if (!C.zf) goto L_11efcf1d;
  /* 11efcf1c int3  */
  x86_unimpl("int3 @ 0x11efcf1c");
L_11efcf1d:;
  /* 11efcf1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efcf1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efcf21 jne 0x11efcefb */
  if (!C.zf) goto L_11efcefb;
  /* 11efcf23 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11efcf2a:;
  /* 11efcf2a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcf2e jne 0x11efcfa6 */
  if (!C.zf) goto L_11efcfa6;
  /* 11efcf30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcf33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcf37 je 0x11efcf6c */
  if (C.zf) goto L_11efcf6c;
L_11efcf39:;
  /* 11efcf39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcf3c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11efcf3f push edx */
  push32((uint32_t)(EDX));
  /* 11efcf40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcf43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11efcf46 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcf47 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efcf4a push edx */
  push32((uint32_t)(EDX));
  /* 11efcf4b push 0x11f2ab58 */
  push32((uint32_t)(0x11f2ab58u));
  /* 11efcf50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf58 call 0x11efa680 */
  push32(0x11efcf5du); f_11efa680();
  /* 11efcf5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcf60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcf63 jne 0x11efcf66 */
  if (!C.zf) goto L_11efcf66;
  /* 11efcf65 int3  */
  x86_unimpl("int3 @ 0x11efcf65");
L_11efcf66:;
  /* 11efcf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efcf68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efcf6a jne 0x11efcf39 */
  if (!C.zf) goto L_11efcf39;
L_11efcf6c:;
  /* 11efcf6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcf6f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11efcf72 push edx */
  push32((uint32_t)(EDX));
  /* 11efcf73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efcf76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcf79 push eax */
  push32((uint32_t)(EAX));
  /* 11efcf7a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11efcf7d push ecx */
  push32((uint32_t)(ECX));
  /* 11efcf7e push 0x11f2ab2c */
  push32((uint32_t)(0x11f2ab2cu));
  /* 11efcf83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efcf8b call 0x11efa680 */
  push32(0x11efcf90u); f_11efa680();
  /* 11efcf90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcf93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcf96 jne 0x11efcf99 */
  if (!C.zf) goto L_11efcf99;
  /* 11efcf98 int3  */
  x86_unimpl("int3 @ 0x11efcf98");
L_11efcf99:;
  /* 11efcf99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efcf9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efcf9d jne 0x11efcf6c */
  if (!C.zf) goto L_11efcf6c;
  /* 11efcf9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efcfa6:;
  /* 11efcfa6 jmp 0x11efcdb3 */
  goto L_11efcdb3;
L_11efcfab:;
  /* 11efcfab push 9 */
  push32((uint32_t)(0x9u));
  /* 11efcfad call 0x11efba60 */
  push32(0x11efcfb2u); f_11efba60();
  /* 11efcfb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efcfb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11efcfb8:;
  /* 11efcfb8 pop edi */
  EDI = (pop32());
  /* 11efcfb9 pop esi */
  ESI = (pop32());
  /* 11efcfba pop ebx */
  EBX = (pop32());
  /* 11efcfbb mov esp, ebp */
  ESP = (EBP);
  /* 11efcfbd pop ebp */
  EBP = (pop32());
  /* 11efcfbe ret  */
  ESPCHK(0x11efcc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfd0 @ 0x11efcfd0 (34 bytes, 13 insns) */
void f_11efcfd0(void) {
  FTRACE(0x11efcfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efcfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efcfd1 mov ebp, esp */
  EBP = (ESP);
  /* 11efcfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efcfd4 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efcfd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efcfdc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efcfe0 je 0x11efcfeb */
  if (C.zf) goto L_11efcfeb;
  /* 11efcfe2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efcfe5 mov dword ptr [0x11f2df68], ecx */
  w32((uint32_t)(0x11f2df68), (ECX));
L_11efcfeb:;
  /* 11efcfeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efcfee mov esp, ebp */
  ESP = (EBP);
  /* 11efcff0 pop ebp */
  EBP = (pop32());
  /* 11efcff1 ret  */
  ESPCHK(0x11efcfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x11efd000 (103 bytes, 38 insns) */
void f_11efd000(void) {
  FTRACE(0x11efd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd000 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd001 mov ebp, esp */
  EBP = (ESP);
  /* 11efd003 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd004 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efd009 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11efd00c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd00e jne 0x11efd012 */
  if (!C.zf) goto L_11efd012;
  /* 11efd010 jmp 0x11efd063 */
  goto L_11efd063;
L_11efd012:;
  /* 11efd012 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd014 call 0x11efb9c0 */
  push32(0x11efd019u); f_11efb9c0();
  /* 11efd019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd01c mov ecx, dword ptr [0x11f30760] */
  ECX = (r32((uint32_t)(0x11f30760)));
  /* 11efd022 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efd025 jmp 0x11efd02f */
  goto L_11efd02f;
L_11efd027:;
  /* 11efd027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd02a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11efd02c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efd02f:;
  /* 11efd02f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd033 je 0x11efd059 */
  if (C.zf) goto L_11efd059;
  /* 11efd035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd038 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd03b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd041 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd044 jne 0x11efd057 */
  if (!C.zf) goto L_11efd057;
  /* 11efd046 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd049 push eax */
  push32((uint32_t)(EAX));
  /* 11efd04a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd04d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd050 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd051 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11efd054u);
  /* 11efd054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd057:;
  /* 11efd057 jmp 0x11efd027 */
  goto L_11efd027;
L_11efd059:;
  /* 11efd059 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd05b call 0x11efba60 */
  push32(0x11efd060u); f_11efba60();
  /* 11efd060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd063:;
  /* 11efd063 mov esp, ebp */
  ESP = (EBP);
  /* 11efd065 pop ebp */
  EBP = (pop32());
  /* 11efd066 ret  */
  ESPCHK(0x11efd000u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11efd070 (75 bytes, 28 insns) */
void f_11efd070(void) {
  FTRACE(0x11efd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd070 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd071 mov ebp, esp */
  EBP = (ESP);
  /* 11efd073 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd074 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd078 je 0x11efd0ad */
  if (C.zf) goto L_11efd0ad;
  /* 11efd07a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd07d push eax */
  push32((uint32_t)(EAX));
  /* 11efd07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd081 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd082 call dword ptr [0x11f3341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3341c))), 0x11efd088u);
  /* 11efd088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd08a jne 0x11efd0ad */
  if (!C.zf) goto L_11efd0ad;
  /* 11efd08c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd090 je 0x11efd0a4 */
  if (C.zf) goto L_11efd0a4;
  /* 11efd092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd095 push edx */
  push32((uint32_t)(EDX));
  /* 11efd096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd099 push eax */
  push32((uint32_t)(EAX));
  /* 11efd09a call dword ptr [0x11f33448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33448))), 0x11efd0a0u);
  /* 11efd0a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd0a2 jne 0x11efd0ad */
  if (!C.zf) goto L_11efd0ad;
L_11efd0a4:;
  /* 11efd0a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11efd0ab jmp 0x11efd0b4 */
  goto L_11efd0b4;
L_11efd0ad:;
  /* 11efd0ad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11efd0b4:;
  /* 11efd0b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd0b7 mov esp, ebp */
  ESP = (EBP);
  /* 11efd0b9 pop ebp */
  EBP = (pop32());
  /* 11efd0ba ret  */
  ESPCHK(0x11efd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0c0 @ 0x11efd0c0 (134 bytes, 50 insns) */
void f_11efd0c0(void) {
  FTRACE(0x11efd0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11efd0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd0c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd0c8 jne 0x11efd0ce */
  if (!C.zf) goto L_11efd0ce;
  /* 11efd0ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd0cc jmp 0x11efd142 */
  goto L_11efd142;
L_11efd0ce:;
  /* 11efd0ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11efd0d0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11efd0d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd0d5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd0d8 push eax */
  push32((uint32_t)(EAX));
  /* 11efd0d9 call 0x11efd070 */
  push32(0x11efd0deu); f_11efd070();
  /* 11efd0de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd0e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd0e3 jne 0x11efd0e9 */
  if (!C.zf) goto L_11efd0e9;
  /* 11efd0e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd0e7 jmp 0x11efd142 */
  goto L_11efd142;
L_11efd0e9:;
  /* 11efd0e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd0ec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd0ef push ecx */
  push32((uint32_t)(ECX));
  /* 11efd0f0 call 0x11f02820 */
  push32(0x11efd0f5u); f_11f02820();
  /* 11efd0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd0f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efd0fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd0ff je 0x11efd116 */
  if (C.zf) goto L_11efd116;
  /* 11efd101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd104 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd107 push edx */
  push32((uint32_t)(EDX));
  /* 11efd108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd10b push eax */
  push32((uint32_t)(EAX));
  /* 11efd10c call 0x11f02880 */
  push32(0x11efd111u); f_11f02880();
  /* 11efd111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd114 jmp 0x11efd142 */
  goto L_11efd142;
L_11efd116:;
  /* 11efd116 mov ecx, dword ptr [0x11f30770] */
  ECX = (r32((uint32_t)(0x11f30770)));
  /* 11efd11c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11efd122 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efd124 je 0x11efd12d */
  if (C.zf) goto L_11efd12d;
  /* 11efd126 mov eax, 1 */
  EAX = (0x1u);
  /* 11efd12b jmp 0x11efd142 */
  goto L_11efd142;
L_11efd12d:;
  /* 11efd12d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd130 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd133 push edx */
  push32((uint32_t)(EDX));
  /* 11efd134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd136 mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11efd13b push eax */
  push32((uint32_t)(EAX));
  /* 11efd13c call dword ptr [0x11f333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333f0))), 0x11efd142u);
L_11efd142:;
  /* 11efd142 mov esp, ebp */
  ESP = (EBP);
  /* 11efd144 pop ebp */
  EBP = (pop32());
  /* 11efd145 ret  */
  ESPCHK(0x11efd0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x11efd150 (227 bytes, 80 insns) */
void f_11efd150(void) {
  FTRACE(0x11efd150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd150 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd151 mov ebp, esp */
  EBP = (ESP);
  /* 11efd153 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd157 push eax */
  push32((uint32_t)(EAX));
  /* 11efd158 call 0x11efd0c0 */
  push32(0x11efd15du); f_11efd0c0();
  /* 11efd15d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd162 jne 0x11efd16b */
  if (!C.zf) goto L_11efd16b;
  /* 11efd164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd166 jmp 0x11efd22f */
  goto L_11efd22f;
L_11efd16b:;
  /* 11efd16b push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd16d call 0x11efb9c0 */
  push32(0x11efd172u); f_11efb9c0();
  /* 11efd172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd175 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd178 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd17b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11efd17e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd181 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd184 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd189 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd18c je 0x11efd1b0 */
  if (C.zf) goto L_11efd1b0;
  /* 11efd18e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd191 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd195 je 0x11efd1b0 */
  if (C.zf) goto L_11efd1b0;
  /* 11efd197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd19a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd19d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd1a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd1a5 je 0x11efd1b0 */
  if (C.zf) goto L_11efd1b0;
  /* 11efd1a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd1aa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd1ae jne 0x11efd223 */
  if (!C.zf) goto L_11efd223;
L_11efd1b0:;
  /* 11efd1b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efd1b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd1b5 push edx */
  push32((uint32_t)(EDX));
  /* 11efd1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd1b9 push eax */
  push32((uint32_t)(EAX));
  /* 11efd1ba call 0x11efd070 */
  push32(0x11efd1bfu); f_11efd070();
  /* 11efd1bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd1c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd1c4 je 0x11efd223 */
  if (C.zf) goto L_11efd223;
  /* 11efd1c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd1c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11efd1cc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd1cf jne 0x11efd223 */
  if (!C.zf) goto L_11efd223;
  /* 11efd1d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd1d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efd1d7 cmp ecx, dword ptr [0x11f2df6c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2df6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd1dd jg 0x11efd223 */
  if ((!C.zf&&C.sf==C.of)) goto L_11efd223;
  /* 11efd1df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd1e3 je 0x11efd1f0 */
  if (C.zf) goto L_11efd1f0;
  /* 11efd1e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efd1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd1eb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11efd1ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11efd1f0:;
  /* 11efd1f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd1f4 je 0x11efd201 */
  if (C.zf) goto L_11efd201;
  /* 11efd1f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efd1f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd1fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11efd1ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11efd201:;
  /* 11efd201 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd205 je 0x11efd212 */
  if (C.zf) goto L_11efd212;
  /* 11efd207 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efd20a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd20d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11efd210 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11efd212:;
  /* 11efd212 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd214 call 0x11efba60 */
  push32(0x11efd219u); f_11efba60();
  /* 11efd219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd21c mov eax, 1 */
  EAX = (0x1u);
  /* 11efd221 jmp 0x11efd22f */
  goto L_11efd22f;
L_11efd223:;
  /* 11efd223 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd225 call 0x11efba60 */
  push32(0x11efd22au); f_11efba60();
  /* 11efd22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd22d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11efd22f:;
  /* 11efd22f mov esp, ebp */
  ESP = (EBP);
  /* 11efd231 pop ebp */
  EBP = (pop32());
  /* 11efd232 ret  */
  ESPCHK(0x11efd150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x11efd240 (28 bytes, 11 insns) */
void f_11efd240(void) {
  FTRACE(0x11efd240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd240 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd241 mov ebp, esp */
  EBP = (ESP);
  /* 11efd243 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd244 mov eax, dword ptr [0x11f321fc] */
  EAX = (r32((uint32_t)(0x11f321fc)));
  /* 11efd249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efd24c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd24f mov dword ptr [0x11f321fc], ecx */
  w32((uint32_t)(0x11f321fc), (ECX));
  /* 11efd255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd258 mov esp, ebp */
  ESP = (EBP);
  /* 11efd25a pop ebp */
  EBP = (pop32());
  /* 11efd25b ret  */
  ESPCHK(0x11efd240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d260 @ 0x11efd260 (362 bytes, 116 insns) */
void f_11efd260(void) {
  FTRACE(0x11efd260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd260 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd261 mov ebp, esp */
  EBP = (ESP);
  /* 11efd263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd266 push ebx */
  push32((uint32_t)(EBX));
  /* 11efd267 push esi */
  push32((uint32_t)(ESI));
  /* 11efd268 push edi */
  push32((uint32_t)(EDI));
  /* 11efd269 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd26d jne 0x11efd29a */
  if (!C.zf) goto L_11efd29a;
L_11efd26f:;
  /* 11efd26f push 0x11f2ac8c */
  push32((uint32_t)(0x11f2ac8cu));
  /* 11efd274 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efd279 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd27b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd27d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd27f push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd281 call 0x11efa680 */
  push32(0x11efd286u); f_11efa680();
  /* 11efd286 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd289 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd28c jne 0x11efd28f */
  if (!C.zf) goto L_11efd28f;
  /* 11efd28e int3  */
  x86_unimpl("int3 @ 0x11efd28e");
L_11efd28f:;
  /* 11efd28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd293 jne 0x11efd26f */
  if (!C.zf) goto L_11efd26f;
  /* 11efd295 jmp 0x11efd3c3 */
  goto L_11efd3c3;
L_11efd29a:;
  /* 11efd29a push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd29c call 0x11efb9c0 */
  push32(0x11efd2a1u); f_11efb9c0();
  /* 11efd2a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd2a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd2a7 mov edx, dword ptr [0x11f30760] */
  EDX = (r32((uint32_t)(0x11f30760)));
  /* 11efd2ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11efd2af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efd2b6 jmp 0x11efd2c1 */
  goto L_11efd2c1;
L_11efd2b8:;
  /* 11efd2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd2bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd2be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efd2c1:;
  /* 11efd2c1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd2c5 jge 0x11efd2e5 */
  if ((C.sf==C.of)) goto L_11efd2e5;
  /* 11efd2c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd2ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd2cd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11efd2d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd2d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd2db mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11efd2e3 jmp 0x11efd2b8 */
  goto L_11efd2b8;
L_11efd2e5:;
  /* 11efd2e5 mov edx, dword ptr [0x11f30760] */
  EDX = (r32((uint32_t)(0x11f30760)));
  /* 11efd2eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11efd2ee jmp 0x11efd2f8 */
  goto L_11efd2f8;
L_11efd2f0:;
  /* 11efd2f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd2f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11efd2f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11efd2f8:;
  /* 11efd2f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd2fc je 0x11efd3a1 */
  if (C.zf) goto L_11efd3a1;
  /* 11efd302 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd305 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd308 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd30f jl 0x11efd377 */
  if ((C.sf!=C.of)) goto L_11efd377;
  /* 11efd311 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd314 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd317 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd31d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd320 jge 0x11efd377 */
  if ((C.sf==C.of)) goto L_11efd377;
  /* 11efd322 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd325 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efd328 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efd32e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd331 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11efd335 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd338 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd33b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd33e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd344 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd347 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11efd34b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd34e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd351 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd359 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11efd35d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd360 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd363 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd366 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd369 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd36e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd371 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11efd375 jmp 0x11efd39c */
  goto L_11efd39c;
L_11efd377:;
  /* 11efd377 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd37a push edx */
  push32((uint32_t)(EDX));
  /* 11efd37b push 0x11f2ac68 */
  push32((uint32_t)(0x11f2ac68u));
  /* 11efd380 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd384 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd386 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd388 call 0x11efa680 */
  push32(0x11efd38du); f_11efa680();
  /* 11efd38d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd390 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd393 jne 0x11efd396 */
  if (!C.zf) goto L_11efd396;
  /* 11efd395 int3  */
  x86_unimpl("int3 @ 0x11efd395");
L_11efd396:;
  /* 11efd396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd39a jne 0x11efd377 */
  if (!C.zf) goto L_11efd377;
L_11efd39c:;
  /* 11efd39c jmp 0x11efd2f0 */
  goto L_11efd2f0;
L_11efd3a1:;
  /* 11efd3a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd3a4 mov edx, dword ptr [0x11f30768] */
  EDX = (r32((uint32_t)(0x11f30768)));
  /* 11efd3aa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11efd3ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd3b0 mov ecx, dword ptr [0x11f3075c] */
  ECX = (r32((uint32_t)(0x11f3075c)));
  /* 11efd3b6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11efd3b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd3bb call 0x11efba60 */
  push32(0x11efd3c0u); f_11efba60();
  /* 11efd3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd3c3:;
  /* 11efd3c3 pop edi */
  EDI = (pop32());
  /* 11efd3c4 pop esi */
  ESI = (pop32());
  /* 11efd3c5 pop ebx */
  EBX = (pop32());
  /* 11efd3c6 mov esp, ebp */
  ESP = (EBP);
  /* 11efd3c8 pop ebp */
  EBP = (pop32());
  /* 11efd3c9 ret  */
  ESPCHK(0x11efd260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3d0 @ 0x11efd3d0 (291 bytes, 95 insns) */
void f_11efd3d0(void) {
  FTRACE(0x11efd3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11efd3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd3d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11efd3d7 push esi */
  push32((uint32_t)(ESI));
  /* 11efd3d8 push edi */
  push32((uint32_t)(EDI));
  /* 11efd3d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11efd3e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd3e4 je 0x11efd3f2 */
  if (C.zf) goto L_11efd3f2;
  /* 11efd3e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd3ea je 0x11efd3f2 */
  if (C.zf) goto L_11efd3f2;
  /* 11efd3ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd3f0 jne 0x11efd420 */
  if (!C.zf) goto L_11efd420;
L_11efd3f2:;
  /* 11efd3f2 push 0x11f2acb4 */
  push32((uint32_t)(0x11f2acb4u));
  /* 11efd3f7 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efd3fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd3fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd400 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd402 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd404 call 0x11efa680 */
  push32(0x11efd409u); f_11efa680();
  /* 11efd409 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd40c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd40f jne 0x11efd412 */
  if (!C.zf) goto L_11efd412;
  /* 11efd411 int3  */
  x86_unimpl("int3 @ 0x11efd411");
L_11efd412:;
  /* 11efd412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd416 jne 0x11efd3f2 */
  if (!C.zf) goto L_11efd3f2;
  /* 11efd418 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11efd41b jmp 0x11efd4ec */
  goto L_11efd4ec;
L_11efd420:;
  /* 11efd420 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efd427 jmp 0x11efd432 */
  goto L_11efd432;
L_11efd429:;
  /* 11efd429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd42c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd42f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11efd432:;
  /* 11efd432 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd436 jge 0x11efd4bc */
  if ((C.sf==C.of)) goto L_11efd4bc;
  /* 11efd43c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd43f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efd442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd445 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd448 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11efd44c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd456 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11efd45a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd45d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efd460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd463 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd466 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11efd46a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd46e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd474 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11efd478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd47b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd47e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd483 jne 0x11efd492 */
  if (!C.zf) goto L_11efd492;
  /* 11efd485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd48b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd490 je 0x11efd4b7 */
  if (C.zf) goto L_11efd4b7;
L_11efd492:;
  /* 11efd492 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd496 je 0x11efd4b7 */
  if (C.zf) goto L_11efd4b7;
  /* 11efd498 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd49c jne 0x11efd4b0 */
  if (!C.zf) goto L_11efd4b0;
  /* 11efd49e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd4a2 jne 0x11efd4b7 */
  if (!C.zf) goto L_11efd4b7;
  /* 11efd4a4 mov eax, dword ptr [0x11f2df68] */
  EAX = (r32((uint32_t)(0x11f2df68)));
  /* 11efd4a9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11efd4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd4ae je 0x11efd4b7 */
  if (C.zf) goto L_11efd4b7;
L_11efd4b0:;
  /* 11efd4b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11efd4b7:;
  /* 11efd4b7 jmp 0x11efd429 */
  goto L_11efd429;
L_11efd4bc:;
  /* 11efd4bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efd4bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd4c2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11efd4c5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd4c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd4cb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11efd4ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efd4d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efd4d4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11efd4d7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd4da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd4dd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11efd4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd4e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11efd4e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11efd4ec:;
  /* 11efd4ec pop edi */
  EDI = (pop32());
  /* 11efd4ed pop esi */
  ESI = (pop32());
  /* 11efd4ee pop ebx */
  EBX = (pop32());
  /* 11efd4ef mov esp, ebp */
  ESP = (EBP);
  /* 11efd4f1 pop ebp */
  EBP = (pop32());
  /* 11efd4f2 ret  */
  ESPCHK(0x11efd3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d500 @ 0x11efd500 (697 bytes, 253 insns) */
void f_11efd500(void) {
  FTRACE(0x11efd500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd500 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd501 mov ebp, esp */
  EBP = (ESP);
  /* 11efd503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd506 push ebx */
  push32((uint32_t)(EBX));
  /* 11efd507 push esi */
  push32((uint32_t)(ESI));
  /* 11efd508 push edi */
  push32((uint32_t)(EDI));
  /* 11efd509 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11efd510 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd512 call 0x11efb9c0 */
  push32(0x11efd517u); f_11efb9c0();
  /* 11efd517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd51a:;
  /* 11efd51a push 0x11f2adac */
  push32((uint32_t)(0x11f2adacu));
  /* 11efd51f push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efd524 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd526 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd528 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd52a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd52c call 0x11efa680 */
  push32(0x11efd531u); f_11efa680();
  /* 11efd531 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd534 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd537 jne 0x11efd53a */
  if (!C.zf) goto L_11efd53a;
  /* 11efd539 int3  */
  x86_unimpl("int3 @ 0x11efd539");
L_11efd53a:;
  /* 11efd53a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd53c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd53e jne 0x11efd51a */
  if (!C.zf) goto L_11efd51a;
  /* 11efd540 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd544 je 0x11efd54e */
  if (C.zf) goto L_11efd54e;
  /* 11efd546 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd549 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efd54b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11efd54e:;
  /* 11efd54e mov eax, dword ptr [0x11f30760] */
  EAX = (r32((uint32_t)(0x11f30760)));
  /* 11efd553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efd556 jmp 0x11efd560 */
  goto L_11efd560;
L_11efd558:;
  /* 11efd558 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd55b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11efd55d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11efd560:;
  /* 11efd560 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd564 je 0x11efd782 */
  if (C.zf) goto L_11efd782;
  /* 11efd56a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd56d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd570 je 0x11efd782 */
  if (C.zf) goto L_11efd782;
  /* 11efd576 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd579 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd57c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd582 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd585 je 0x11efd5b4 */
  if (C.zf) goto L_11efd5b4;
  /* 11efd587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd58a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11efd58d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efd593 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efd595 je 0x11efd5b4 */
  if (C.zf) goto L_11efd5b4;
  /* 11efd597 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd59a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd59d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd5a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd5a5 jne 0x11efd5b9 */
  if (!C.zf) goto L_11efd5b9;
  /* 11efd5a7 mov ecx, dword ptr [0x11f2df68] */
  ECX = (r32((uint32_t)(0x11f2df68)));
  /* 11efd5ad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11efd5b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efd5b2 jne 0x11efd5b9 */
  if (!C.zf) goto L_11efd5b9;
L_11efd5b4:;
  /* 11efd5b4 jmp 0x11efd77d */
  goto L_11efd77d;
L_11efd5b9:;
  /* 11efd5b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd5bc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd5c0 je 0x11efd632 */
  if (C.zf) goto L_11efd632;
  /* 11efd5c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd5c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11efd5c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd5c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11efd5cc push ecx */
  push32((uint32_t)(ECX));
  /* 11efd5cd call 0x11efd070 */
  push32(0x11efd5d2u); f_11efd070();
  /* 11efd5d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd5d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd5d7 jne 0x11efd603 */
  if (!C.zf) goto L_11efd603;
L_11efd5d9:;
  /* 11efd5d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd5dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11efd5df push eax */
  push32((uint32_t)(EAX));
  /* 11efd5e0 push 0x11f2ad98 */
  push32((uint32_t)(0x11f2ad98u));
  /* 11efd5e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd5e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd5e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd5eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd5ed call 0x11efa680 */
  push32(0x11efd5f2u); f_11efa680();
  /* 11efd5f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd5f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd5f8 jne 0x11efd5fb */
  if (!C.zf) goto L_11efd5fb;
  /* 11efd5fa int3  */
  x86_unimpl("int3 @ 0x11efd5fa");
L_11efd5fb:;
  /* 11efd5fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efd5fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efd5ff jne 0x11efd5d9 */
  if (!C.zf) goto L_11efd5d9;
  /* 11efd601 jmp 0x11efd632 */
  goto L_11efd632;
L_11efd603:;
  /* 11efd603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd606 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11efd609 push eax */
  push32((uint32_t)(EAX));
  /* 11efd60a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd60d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11efd610 push edx */
  push32((uint32_t)(EDX));
  /* 11efd611 push 0x11f2ad8c */
  push32((uint32_t)(0x11f2ad8cu));
  /* 11efd616 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd618 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd61a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd61c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd61e call 0x11efa680 */
  push32(0x11efd623u); f_11efa680();
  /* 11efd623 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd626 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd629 jne 0x11efd62c */
  if (!C.zf) goto L_11efd62c;
  /* 11efd62b int3  */
  x86_unimpl("int3 @ 0x11efd62b");
L_11efd62c:;
  /* 11efd62c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd62e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd630 jne 0x11efd603 */
  if (!C.zf) goto L_11efd603;
L_11efd632:;
  /* 11efd632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd635 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11efd638 push edx */
  push32((uint32_t)(EDX));
  /* 11efd639 push 0x11f2ad84 */
  push32((uint32_t)(0x11f2ad84u));
  /* 11efd63e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd640 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd642 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd646 call 0x11efa680 */
  push32(0x11efd64bu); f_11efa680();
  /* 11efd64b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd64e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd651 jne 0x11efd654 */
  if (!C.zf) goto L_11efd654;
  /* 11efd653 int3  */
  x86_unimpl("int3 @ 0x11efd653");
L_11efd654:;
  /* 11efd654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd658 jne 0x11efd632 */
  if (!C.zf) goto L_11efd632;
  /* 11efd65a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd65d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd660 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd666 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd669 jne 0x11efd6dc */
  if (!C.zf) goto L_11efd6dc;
L_11efd66b:;
  /* 11efd66b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd66e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11efd671 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd672 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd675 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd678 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11efd67b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd680 push eax */
  push32((uint32_t)(EAX));
  /* 11efd681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd684 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd687 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd688 push 0x11f2ad50 */
  push32((uint32_t)(0x11f2ad50u));
  /* 11efd68d push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd68f push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd693 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd695 call 0x11efa680 */
  push32(0x11efd69au); f_11efa680();
  /* 11efd69a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd69d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd6a0 jne 0x11efd6a3 */
  if (!C.zf) goto L_11efd6a3;
  /* 11efd6a2 int3  */
  x86_unimpl("int3 @ 0x11efd6a2");
L_11efd6a3:;
  /* 11efd6a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efd6a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efd6a7 jne 0x11efd66b */
  if (!C.zf) goto L_11efd66b;
  /* 11efd6a9 cmp dword ptr [0x11f321fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd6b0 je 0x11efd6cb */
  if (C.zf) goto L_11efd6cb;
  /* 11efd6b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd6b5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11efd6b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd6b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd6bc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd6bf push edx */
  push32((uint32_t)(EDX));
  /* 11efd6c0 call dword ptr [0x11f321fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f321fc))), 0x11efd6c6u);
  /* 11efd6c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd6c9 jmp 0x11efd6d7 */
  goto L_11efd6d7;
L_11efd6cb:;
  /* 11efd6cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd6ce push eax */
  push32((uint32_t)(EAX));
  /* 11efd6cf call 0x11efd7c0 */
  push32(0x11efd6d4u); f_11efd7c0();
  /* 11efd6d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd6d7:;
  /* 11efd6d7 jmp 0x11efd77d */
  goto L_11efd77d;
L_11efd6dc:;
  /* 11efd6dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd6df cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd6e3 jne 0x11efd722 */
  if (!C.zf) goto L_11efd722;
L_11efd6e5:;
  /* 11efd6e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd6e8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efd6eb push eax */
  push32((uint32_t)(EAX));
  /* 11efd6ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd6ef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd6f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd6f3 push 0x11f2ad28 */
  push32((uint32_t)(0x11f2ad28u));
  /* 11efd6f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd6fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd6fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd6fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd700 call 0x11efa680 */
  push32(0x11efd705u); f_11efa680();
  /* 11efd705 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd708 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd70b jne 0x11efd70e */
  if (!C.zf) goto L_11efd70e;
  /* 11efd70d int3  */
  x86_unimpl("int3 @ 0x11efd70d");
L_11efd70e:;
  /* 11efd70e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efd710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efd712 jne 0x11efd6e5 */
  if (!C.zf) goto L_11efd6e5;
  /* 11efd714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd717 push eax */
  push32((uint32_t)(EAX));
  /* 11efd718 call 0x11efd7c0 */
  push32(0x11efd71du); f_11efd7c0();
  /* 11efd71d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd720 jmp 0x11efd77d */
  goto L_11efd77d;
L_11efd722:;
  /* 11efd722 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd725 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11efd728 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd72e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd731 jne 0x11efd77d */
  if (!C.zf) goto L_11efd77d;
L_11efd733:;
  /* 11efd733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd736 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11efd739 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd73a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd73d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11efd740 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11efd743 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11efd748 push eax */
  push32((uint32_t)(EAX));
  /* 11efd749 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd74c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd74f push ecx */
  push32((uint32_t)(ECX));
  /* 11efd750 push 0x11f2acf4 */
  push32((uint32_t)(0x11f2acf4u));
  /* 11efd755 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd759 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd75b push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd75d call 0x11efa680 */
  push32(0x11efd762u); f_11efa680();
  /* 11efd762 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd765 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd768 jne 0x11efd76b */
  if (!C.zf) goto L_11efd76b;
  /* 11efd76a int3  */
  x86_unimpl("int3 @ 0x11efd76a");
L_11efd76b:;
  /* 11efd76b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efd76d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efd76f jne 0x11efd733 */
  if (!C.zf) goto L_11efd733;
  /* 11efd771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd774 push eax */
  push32((uint32_t)(EAX));
  /* 11efd775 call 0x11efd7c0 */
  push32(0x11efd77au); f_11efd7c0();
  /* 11efd77a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd77d:;
  /* 11efd77d jmp 0x11efd558 */
  goto L_11efd558;
L_11efd782:;
  /* 11efd782 push 9 */
  push32((uint32_t)(0x9u));
  /* 11efd784 call 0x11efba60 */
  push32(0x11efd789u); f_11efba60();
  /* 11efd789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efd78c:;
  /* 11efd78c push 0x11f2acdc */
  push32((uint32_t)(0x11f2acdcu));
  /* 11efd791 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efd796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd798 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd79a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd79c push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd79e call 0x11efa680 */
  push32(0x11efd7a3u); f_11efa680();
  /* 11efd7a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd7a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd7a9 jne 0x11efd7ac */
  if (!C.zf) goto L_11efd7ac;
  /* 11efd7ab int3  */
  x86_unimpl("int3 @ 0x11efd7ab");
L_11efd7ac:;
  /* 11efd7ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efd7ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efd7b0 jne 0x11efd78c */
  if (!C.zf) goto L_11efd78c;
  /* 11efd7b2 pop edi */
  EDI = (pop32());
  /* 11efd7b3 pop esi */
  ESI = (pop32());
  /* 11efd7b4 pop ebx */
  EBX = (pop32());
  /* 11efd7b5 mov esp, ebp */
  ESP = (EBP);
  /* 11efd7b7 pop ebp */
  EBP = (pop32());
  /* 11efd7b8 ret  */
  ESPCHK(0x11efd500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x11efd7c0 (276 bytes, 89 insns) */
void f_11efd7c0(void) {
  FTRACE(0x11efd7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11efd7c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd7c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11efd7c7 push esi */
  push32((uint32_t)(ESI));
  /* 11efd7c8 push edi */
  push32((uint32_t)(EDI));
  /* 11efd7c9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11efd7d0 jmp 0x11efd7db */
  goto L_11efd7db;
L_11efd7d2:;
  /* 11efd7d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11efd7d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd7d8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11efd7db:;
  /* 11efd7db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd7de cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd7e2 jge 0x11efd7ef */
  if ((C.sf==C.of)) goto L_11efd7ef;
  /* 11efd7e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd7e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11efd7ea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11efd7ed jmp 0x11efd7f6 */
  goto L_11efd7f6;
L_11efd7ef:;
  /* 11efd7ef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11efd7f6:;
  /* 11efd7f6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11efd7f9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd7fc jge 0x11efd89c */
  if ((C.sf==C.of)) goto L_11efd89c;
  /* 11efd802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd805 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd808 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11efd80b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11efd80e cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd815 jle 0x11efd833 */
  if ((C.zf||C.sf!=C.of)) goto L_11efd833;
  /* 11efd817 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11efd81c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efd81f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efd825 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd826 call 0x11f01160 */
  push32(0x11efd82bu); f_11f01160();
  /* 11efd82b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd82e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11efd831 jmp 0x11efd850 */
  goto L_11efd850;
L_11efd833:;
  /* 11efd833 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efd836 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd83c mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11efd841 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11efd843 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11efd847 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11efd84d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11efd850:;
  /* 11efd850 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd854 je 0x11efd864 */
  if (C.zf) goto L_11efd864;
  /* 11efd856 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efd859 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd85f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11efd862 jmp 0x11efd86b */
  goto L_11efd86b;
L_11efd864:;
  /* 11efd864 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11efd86b:;
  /* 11efd86b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11efd86e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11efd871 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11efd875 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11efd878 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11efd87e push edx */
  push32((uint32_t)(EDX));
  /* 11efd87f push 0x11f2add0 */
  push32((uint32_t)(0x11f2add0u));
  /* 11efd884 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11efd887 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11efd88a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11efd88e push ecx */
  push32((uint32_t)(ECX));
  /* 11efd88f call 0x11f04430 */
  push32(0x11efd894u); f_11f04430();
  /* 11efd894 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd897 jmp 0x11efd7d2 */
  goto L_11efd7d2;
L_11efd89c:;
  /* 11efd89c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11efd89f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11efd8a4:;
  /* 11efd8a4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11efd8a7 push eax */
  push32((uint32_t)(EAX));
  /* 11efd8a8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11efd8ab push ecx */
  push32((uint32_t)(ECX));
  /* 11efd8ac push 0x11f2adc0 */
  push32((uint32_t)(0x11f2adc0u));
  /* 11efd8b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd8b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd8b9 call 0x11efa680 */
  push32(0x11efd8beu); f_11efa680();
  /* 11efd8be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd8c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd8c4 jne 0x11efd8c7 */
  if (!C.zf) goto L_11efd8c7;
  /* 11efd8c6 int3  */
  x86_unimpl("int3 @ 0x11efd8c6");
L_11efd8c7:;
  /* 11efd8c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efd8c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efd8cb jne 0x11efd8a4 */
  if (!C.zf) goto L_11efd8a4;
  /* 11efd8cd pop edi */
  EDI = (pop32());
  /* 11efd8ce pop esi */
  ESI = (pop32());
  /* 11efd8cf pop ebx */
  EBX = (pop32());
  /* 11efd8d0 mov esp, ebp */
  ESP = (EBP);
  /* 11efd8d2 pop ebp */
  EBP = (pop32());
  /* 11efd8d3 ret  */
  ESPCHK(0x11efd7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8e0 @ 0x11efd8e0 (116 bytes, 46 insns) */
void f_11efd8e0(void) {
  FTRACE(0x11efd8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11efd8e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efd8e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11efd8e7 push esi */
  push32((uint32_t)(ESI));
  /* 11efd8e8 push edi */
  push32((uint32_t)(EDI));
  /* 11efd8e9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11efd8ec push eax */
  push32((uint32_t)(EAX));
  /* 11efd8ed call 0x11efd260 */
  push32(0x11efd8f2u); f_11efd260();
  /* 11efd8f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd8f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd8f9 jne 0x11efd914 */
  if (!C.zf) goto L_11efd914;
  /* 11efd8fb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd8ff jne 0x11efd914 */
  if (!C.zf) goto L_11efd914;
  /* 11efd901 mov ecx, dword ptr [0x11f2df68] */
  ECX = (r32((uint32_t)(0x11f2df68)));
  /* 11efd907 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11efd90a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11efd90c je 0x11efd94b */
  if (C.zf) goto L_11efd94b;
  /* 11efd90e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd912 je 0x11efd94b */
  if (C.zf) goto L_11efd94b;
L_11efd914:;
  /* 11efd914 push 0x11f2add8 */
  push32((uint32_t)(0x11f2add8u));
  /* 11efd919 push 0x11f2a7cc */
  push32((uint32_t)(0x11f2a7ccu));
  /* 11efd91e push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd920 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd922 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd926 call 0x11efa680 */
  push32(0x11efd92bu); f_11efa680();
  /* 11efd92b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd92e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd931 jne 0x11efd934 */
  if (!C.zf) goto L_11efd934;
  /* 11efd933 int3  */
  x86_unimpl("int3 @ 0x11efd933");
L_11efd934:;
  /* 11efd934 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11efd936 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efd938 jne 0x11efd914 */
  if (!C.zf) goto L_11efd914;
  /* 11efd93a push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd93c call 0x11efd500 */
  push32(0x11efd941u); f_11efd500();
  /* 11efd941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd944 mov eax, 1 */
  EAX = (0x1u);
  /* 11efd949 jmp 0x11efd94d */
  goto L_11efd94d;
L_11efd94b:;
  /* 11efd94b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11efd94d:;
  /* 11efd94d pop edi */
  EDI = (pop32());
  /* 11efd94e pop esi */
  ESI = (pop32());
  /* 11efd94f pop ebx */
  EBX = (pop32());
  /* 11efd950 mov esp, ebp */
  ESP = (EBP);
  /* 11efd952 pop ebp */
  EBP = (pop32());
  /* 11efd953 ret  */
  ESPCHK(0x11efd8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x11efd960 (197 bytes, 79 insns) */
void f_11efd960(void) {
  FTRACE(0x11efd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efd960 push ebp */
  push32((uint32_t)(EBP));
  /* 11efd961 mov ebp, esp */
  EBP = (ESP);
  /* 11efd963 push ecx */
  push32((uint32_t)(ECX));
  /* 11efd964 push ebx */
  push32((uint32_t)(EBX));
  /* 11efd965 push esi */
  push32((uint32_t)(ESI));
  /* 11efd966 push edi */
  push32((uint32_t)(EDI));
  /* 11efd967 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd96b jne 0x11efd972 */
  if (!C.zf) goto L_11efd972;
  /* 11efd96d jmp 0x11efda1e */
  goto L_11efda1e;
L_11efd972:;
  /* 11efd972 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11efd979 jmp 0x11efd984 */
  goto L_11efd984;
L_11efd97b:;
  /* 11efd97b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd97e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd981 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11efd984:;
  /* 11efd984 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd988 jge 0x11efd9ce */
  if ((C.sf==C.of)) goto L_11efd9ce;
L_11efd98a:;
  /* 11efd98a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd98d mov edx, dword ptr [ecx*4 + 0x11f2df78] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2df78)));
  /* 11efd994 push edx */
  push32((uint32_t)(EDX));
  /* 11efd995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd998 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd99b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11efd99f push edx */
  push32((uint32_t)(EDX));
  /* 11efd9a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11efd9a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd9a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11efd9aa push edx */
  push32((uint32_t)(EDX));
  /* 11efd9ab push 0x11f2ae34 */
  push32((uint32_t)(0x11f2ae34u));
  /* 11efd9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9b8 call 0x11efa680 */
  push32(0x11efd9bdu); f_11efa680();
  /* 11efd9bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd9c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd9c3 jne 0x11efd9c6 */
  if (!C.zf) goto L_11efd9c6;
  /* 11efd9c5 int3  */
  x86_unimpl("int3 @ 0x11efd9c5");
L_11efd9c6:;
  /* 11efd9c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd9c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd9ca jne 0x11efd98a */
  if (!C.zf) goto L_11efd98a;
  /* 11efd9cc jmp 0x11efd97b */
  goto L_11efd97b;
L_11efd9ce:;
  /* 11efd9ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd9d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11efd9d4 push edx */
  push32((uint32_t)(EDX));
  /* 11efd9d5 push 0x11f2ae10 */
  push32((uint32_t)(0x11f2ae10u));
  /* 11efd9da push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9de push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efd9e2 call 0x11efa680 */
  push32(0x11efd9e7u); f_11efa680();
  /* 11efd9e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efd9ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efd9ed jne 0x11efd9f0 */
  if (!C.zf) goto L_11efd9f0;
  /* 11efd9ef int3  */
  x86_unimpl("int3 @ 0x11efd9ef");
L_11efd9f0:;
  /* 11efd9f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efd9f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efd9f4 jne 0x11efd9ce */
  if (!C.zf) goto L_11efd9ce;
L_11efd9f6:;
  /* 11efd9f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efd9f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11efd9fc push edx */
  push32((uint32_t)(EDX));
  /* 11efd9fd push 0x11f2adf0 */
  push32((uint32_t)(0x11f2adf0u));
  /* 11efda02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efda04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efda06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efda08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11efda0a call 0x11efa680 */
  push32(0x11efda0fu); f_11efa680();
  /* 11efda0f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efda12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efda15 jne 0x11efda18 */
  if (!C.zf) goto L_11efda18;
  /* 11efda17 int3  */
  x86_unimpl("int3 @ 0x11efda17");
L_11efda18:;
  /* 11efda18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11efda1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11efda1c jne 0x11efd9f6 */
  if (!C.zf) goto L_11efd9f6;
L_11efda1e:;
  /* 11efda1e pop edi */
  EDI = (pop32());
  /* 11efda1f pop esi */
  ESI = (pop32());
  /* 11efda20 pop ebx */
  EBX = (pop32());
  /* 11efda21 mov esp, ebp */
  ESP = (EBP);
  /* 11efda23 pop ebp */
  EBP = (pop32());
  /* 11efda24 ret  */
  ESPCHK(0x11efd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x11efda30 (239 bytes, 88 insns) */
void f_11efda30(void) {
  FTRACE(0x11efda30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11efda30 push ebp */
  push32((uint32_t)(EBP));
  /* 11efda31 mov ebp, esp */
  EBP = (ESP);
  /* 11efda33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11efda36 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efda39 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efda3f jne 0x11efda4a */
  if (!C.zf) goto L_11efda4a;
  /* 11efda41 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11efda48 jmp 0x11efda52 */
  goto L_11efda52;
L_11efda4a:;
  /* 11efda4a call 0x11efea40 */
  push32(0x11efda4fu); f_11efea40();
  /* 11efda4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11efda52:;
  /* 11efda52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efda55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11efda58 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 11efda5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11efda5d je 0x11efda8e */
  if (C.zf) goto L_11efda8e;
  /* 11efda5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efda62 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efda66 je 0x11efda84 */
  if (C.zf) goto L_11efda84;
  /* 11efda68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efda6c jne 0x11efda84 */
  if (!C.zf) goto L_11efda84;
  /* 11efda6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11efda70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efda73 push ecx */
  push32((uint32_t)(ECX));
  /* 11efda74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efda77 push edx */
  push32((uint32_t)(EDX));
  /* 11efda78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efda7b push eax */
  push32((uint32_t)(EAX));
  /* 11efda7c call 0x11efdfa0 */
  push32(0x11efda81u); f_11efdfa0();
  /* 11efda81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efda84:;
  /* 11efda84 mov eax, 1 */
  EAX = (0x1u);
  /* 11efda89 jmp 0x11efdb1b */
  goto L_11efdb1b;
L_11efda8e:;
  /* 11efda8e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efda91 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efda95 je 0x11efdb16 */
  if (C.zf) goto L_11efdb16;
  /* 11efda97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efda9a cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdaa0 jne 0x11efdaee */
  if (!C.zf) goto L_11efdaee;
  /* 11efdaa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdaa5 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdaac jbe 0x11efdaee */
  if ((C.cf||C.zf)) goto L_11efdaee;
  /* 11efdaae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdab1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11efdab4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11efdab7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11efdaba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11efdabe je 0x11efdaee */
  if (C.zf) goto L_11efdaee;
  /* 11efdac0 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11efdac3 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11efdac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdaca mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efdacd push edx */
  push32((uint32_t)(EDX));
  /* 11efdace mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efdad1 push eax */
  push32((uint32_t)(EAX));
  /* 11efdad2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdad5 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdad6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efdad9 push edx */
  push32((uint32_t)(EDX));
  /* 11efdada mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdadd push eax */
  push32((uint32_t)(EAX));
  /* 11efdade mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdae1 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdae5 push edx */
  push32((uint32_t)(EDX));
  /* 11efdae6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11efdae9u);
  /* 11efdae9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11efdaec jmp 0x11efdb1b */
  goto L_11efdb1b;
L_11efdaee:;
  /* 11efdaee mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11efdaf1 push eax */
  push32((uint32_t)(EAX));
  /* 11efdaf2 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11efdaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdaf6 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 11efdaf9 push edx */
  push32((uint32_t)(EDX));
  /* 11efdafa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11efdafd push eax */
  push32((uint32_t)(EAX));
  /* 11efdafe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11efdb01 push ecx */
  push32((uint32_t)(ECX));
  /* 11efdb02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11efdb05 push edx */
  push32((uint32_t)(EDX));
  /* 11efdb06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11efdb09 push eax */
  push32((uint32_t)(EAX));
  /* 11efdb0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11efdb0d push ecx */
  push32((uint32_t)(ECX));
  /* 11efdb0e call 0x11efdb20 */
  push32(0x11efdb13u); f_11efdb20();
  /* 11efdb13 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11efdb16:;
  /* 11efdb16 mov eax, 1 */
  EAX = (0x1u);
L_11efdb1b:;
  /* 11efdb1b mov esp, ebp */
  ESP = (EBP);
  /* 11efdb1d pop ebp */
  EBP = (pop32());
  /* 11efdb1e ret  */
  ESPCHK(0x11efda30u, _esp0);
  ESP += 4; return;
}

