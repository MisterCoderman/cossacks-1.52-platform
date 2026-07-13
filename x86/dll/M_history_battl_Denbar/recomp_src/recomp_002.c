#include "recomp.h"

/* _GetPrimaryLen @ 0x12d3f2e0 (101 bytes, 36 insns) */
void f_12d3f2e0(void) {
  FTRACE(0x12d3f2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f2e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f2e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f2e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3f2ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f2f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d3f2f2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12d3f2f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f2f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f2fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d3f2fe:;
  /* 12d3f2fe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d3f302 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f305 jl 0x12d3f310 */
  if ((C.sf!=C.of)) goto L_12d3f310;
  /* 12d3f307 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d3f30b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f30e jle 0x12d3f322 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3f322;
L_12d3f310:;
  /* 12d3f310 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d3f314 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f317 jl 0x12d3f33e */
  if ((C.sf!=C.of)) goto L_12d3f33e;
  /* 12d3f319 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d3f31d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f320 jg 0x12d3f33e */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3f33e;
L_12d3f322:;
  /* 12d3f322 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f328 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3f32b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f32e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3f330 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12d3f333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f336 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f339 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d3f33c jmp 0x12d3f2fe */
  goto L_12d3f2fe;
L_12d3f33e:;
  /* 12d3f33e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f341 mov esp, ebp */
  ESP = (EBP);
  /* 12d3f343 pop ebp */
  EBP = (pop32());
  /* 12d3f344 ret  */
  ESPCHK(0x12d3f2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x12d3f350 (122 bytes, 39 insns) */
void f_12d3f350(void) {
  FTRACE(0x12d3f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f350 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f351 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f353 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f357 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f35d jae 0x12d3f381 */
  if (!C.cf) goto L_12d3f381;
  /* 12d3f35f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f362 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3f365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f368 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3f36b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f36e mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3f375 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3f37a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3f37d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3f37f jne 0x12d3f39c */
  if (!C.zf) goto L_12d3f39c;
L_12d3f381:;
  /* 12d3f381 call 0x12d3a6a0 */
  push32(0x12d3f386u); f_12d3a6a0();
  /* 12d3f386 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3f38c call 0x12d3a6b0 */
  push32(0x12d3f391u); f_12d3a6b0();
  /* 12d3f391 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3f397 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f39a jmp 0x12d3f3c6 */
  goto L_12d3f3c6;
L_12d3f39c:;
  /* 12d3f39c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f39f push edx */
  push32((uint32_t)(EDX));
  /* 12d3f3a0 call 0x12d3bec0 */
  push32(0x12d3f3a5u); f_12d3bec0();
  /* 12d3f3a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f3a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f3ab push eax */
  push32((uint32_t)(EAX));
  /* 12d3f3ac call 0x12d3f3d0 */
  push32(0x12d3f3b1u); f_12d3f3d0();
  /* 12d3f3b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f3b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3f3b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f3ba push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f3bb call 0x12d3bf50 */
  push32(0x12d3f3c0u); f_12d3bf50();
  /* 12d3f3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f3c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3f3c6:;
  /* 12d3f3c6 mov esp, ebp */
  ESP = (EBP);
  /* 12d3f3c8 pop ebp */
  EBP = (pop32());
  /* 12d3f3c9 ret  */
  ESPCHK(0x12d3f350u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12d3f3d0 (170 bytes, 59 insns) */
void f_12d3f3d0(void) {
  FTRACE(0x12d3f3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f3d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f3d4 push esi */
  push32((uint32_t)(ESI));
  /* 12d3f3d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f3d8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f3d9 call 0x12d3bd40 */
  push32(0x12d3f3deu); f_12d3bd40();
  /* 12d3f3de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f3e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f3e4 je 0x12d3f423 */
  if (C.zf) goto L_12d3f423;
  /* 12d3f3e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f3ea je 0x12d3f3f2 */
  if (C.zf) goto L_12d3f3f2;
  /* 12d3f3ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f3f0 jne 0x12d3f40c */
  if (!C.zf) goto L_12d3f40c;
L_12d3f3f2:;
  /* 12d3f3f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3f3f4 call 0x12d3bd40 */
  push32(0x12d3f3f9u); f_12d3bd40();
  /* 12d3f3f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f3fc mov esi, eax */
  ESI = (EAX);
  /* 12d3f3fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3f400 call 0x12d3bd40 */
  push32(0x12d3f405u); f_12d3bd40();
  /* 12d3f405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f408 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f40a je 0x12d3f423 */
  if (C.zf) goto L_12d3f423;
L_12d3f40c:;
  /* 12d3f40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f40f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f410 call 0x12d3bd40 */
  push32(0x12d3f415u); f_12d3bd40();
  /* 12d3f415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f418 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f419 call dword ptr [0x12d5022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5022c))), 0x12d3f41fu);
  /* 12d3f41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3f421 je 0x12d3f42c */
  if (C.zf) goto L_12d3f42c;
L_12d3f423:;
  /* 12d3f423 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3f42a jmp 0x12d3f435 */
  goto L_12d3f435;
L_12d3f42c:;
  /* 12d3f42c call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3f432u);
  /* 12d3f432 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3f435:;
  /* 12d3f435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f438 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f439 call 0x12d3bc60 */
  push32(0x12d3f43eu); f_12d3bc60();
  /* 12d3f43e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f444 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3f447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f44a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3f44d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f450 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3f457 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12d3f45c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f460 je 0x12d3f473 */
  if (C.zf) goto L_12d3f473;
  /* 12d3f462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f465 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f466 call 0x12d3a600 */
  push32(0x12d3f46bu); f_12d3a600();
  /* 12d3f46b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f46e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f471 jmp 0x12d3f475 */
  goto L_12d3f475;
L_12d3f473:;
  /* 12d3f473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3f475:;
  /* 12d3f475 pop esi */
  ESI = (pop32());
  /* 12d3f476 mov esp, ebp */
  ESP = (EBP);
  /* 12d3f478 pop ebp */
  EBP = (pop32());
  /* 12d3f479 ret  */
  ESPCHK(0x12d3f3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x12d3f480 (146 bytes, 52 insns) */
void f_12d3f480(void) {
  FTRACE(0x12d3f480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f480 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f481 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f483 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3f484 push esi */
  push32((uint32_t)(ESI));
  /* 12d3f485 push edi */
  push32((uint32_t)(EDI));
L_12d3f486:;
  /* 12d3f486 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f48a jne 0x12d3f4aa */
  if (!C.zf) goto L_12d3f4aa;
  /* 12d3f48c push 0x12d4a008 */
  push32((uint32_t)(0x12d4a008u));
  /* 12d3f491 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3f493 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d3f495 push 0x12d4a6d0 */
  push32((uint32_t)(0x12d4a6d0u));
  /* 12d3f49a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3f49c call 0x12d31890 */
  push32(0x12d3f4a1u); f_12d31890();
  /* 12d3f4a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f4a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f4a7 jne 0x12d3f4aa */
  if (!C.zf) goto L_12d3f4aa;
  /* 12d3f4a9 int3  */
  x86_unimpl("int3 @ 0x12d3f4a9");
L_12d3f4aa:;
  /* 12d3f4aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3f4ae jne 0x12d3f486 */
  if (!C.zf) goto L_12d3f486;
  /* 12d3f4b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3f4b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3f4bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3f4be je 0x12d3f50d */
  if (C.zf) goto L_12d3f50d;
  /* 12d3f4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3f4c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3f4c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3f4cb je 0x12d3f50d */
  if (C.zf) goto L_12d3f50d;
  /* 12d3f4cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3f4cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d3f4d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f4d6 call 0x12d33260 */
  push32(0x12d3f4dbu); f_12d33260();
  /* 12d3f4db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f4de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3f4e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3f4ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d3f4f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d3f4f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f4fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d3f503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f506 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12d3f50d:;
  /* 12d3f50d pop edi */
  EDI = (pop32());
  /* 12d3f50e pop esi */
  ESI = (pop32());
  /* 12d3f50f pop ebx */
  EBX = (pop32());
  /* 12d3f510 pop ebp */
  EBP = (pop32());
  /* 12d3f511 ret  */
  ESPCHK(0x12d3f480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x12d3f520 (289 bytes, 97 insns) */
void f_12d3f520(void) {
  FTRACE(0x12d3f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f521 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f526 push esi */
  push32((uint32_t)(ESI));
  /* 12d3f527 mov eax, dword ptr [0x12d4dcb8] */
  EAX = (r32((uint32_t)(0x12d4dcb8)));
  /* 12d3f52c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3f52f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3f536 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f53d jmp 0x12d3f548 */
  goto L_12d3f548;
L_12d3f53f:;
  /* 12d3f53f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f542 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f545 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d3f548:;
  /* 12d3f548 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f54c jae 0x12d3f581 */
  if (!C.cf) goto L_12d3f581;
  /* 12d3f54e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f554 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d3f557 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f558 call 0x12d35600 */
  push32(0x12d3f55du); f_12d35600();
  /* 12d3f55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f560 mov esi, eax */
  ESI = (EAX);
  /* 12d3f562 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f565 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f568 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d3f56c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f56d call 0x12d35600 */
  push32(0x12d3f572u); f_12d35600();
  /* 12d3f572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f575 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f578 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d3f57c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3f57f jmp 0x12d3f53f */
  goto L_12d3f53f;
L_12d3f581:;
  /* 12d3f581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f584 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f587 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f588 call 0x12d327b0 */
  push32(0x12d3f58du); f_12d327b0();
  /* 12d3f58d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3f593 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f597 je 0x12d3f639 */
  if (C.zf) goto L_12d3f639;
  /* 12d3f59d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f5a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d3f5a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f5aa jmp 0x12d3f5b5 */
  goto L_12d3f5b5;
L_12d3f5ac:;
  /* 12d3f5ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f5af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f5b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d3f5b5:;
  /* 12d3f5b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f5b9 jae 0x12d3f62a */
  if (!C.cf) goto L_12d3f62a;
  /* 12d3f5bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f5be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d3f5c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f5c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f5c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d3f5ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f5cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f5d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d3f5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f5d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f5d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f5d8 call 0x12d35780 */
  push32(0x12d3f5ddu); f_12d35780();
  /* 12d3f5dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f5e0 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f5e1 call 0x12d35600 */
  push32(0x12d3f5e6u); f_12d35600();
  /* 12d3f5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f5e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f5ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f5ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d3f5f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f5f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d3f5f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f5fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f5fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3f600 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f603 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f606 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d3f60a push eax */
  push32((uint32_t)(EAX));
  /* 12d3f60b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f60e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f60f call 0x12d35780 */
  push32(0x12d3f614u); f_12d35780();
  /* 12d3f614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f617 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f618 call 0x12d35600 */
  push32(0x12d3f61du); f_12d35600();
  /* 12d3f61d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f620 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f623 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f625 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3f628 jmp 0x12d3f5ac */
  goto L_12d3f5ac;
L_12d3f62a:;
  /* 12d3f62a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f62d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d3f630 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f633 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f636 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d3f639:;
  /* 12d3f639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f63c pop esi */
  ESI = (pop32());
  /* 12d3f63d mov esp, ebp */
  ESP = (EBP);
  /* 12d3f63f pop ebp */
  EBP = (pop32());
  /* 12d3f640 ret  */
  ESPCHK(0x12d3f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x12d3f650 (291 bytes, 97 insns) */
void f_12d3f650(void) {
  FTRACE(0x12d3f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f650 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f651 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f653 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f656 push esi */
  push32((uint32_t)(ESI));
  /* 12d3f657 mov eax, dword ptr [0x12d4dcb8] */
  EAX = (r32((uint32_t)(0x12d4dcb8)));
  /* 12d3f65c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3f65f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3f666 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f66d jmp 0x12d3f678 */
  goto L_12d3f678;
L_12d3f66f:;
  /* 12d3f66f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f672 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f675 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d3f678:;
  /* 12d3f678 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f67c jae 0x12d3f6b2 */
  if (!C.cf) goto L_12d3f6b2;
  /* 12d3f67e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f684 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d3f688 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f689 call 0x12d35600 */
  push32(0x12d3f68eu); f_12d35600();
  /* 12d3f68e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f691 mov esi, eax */
  ESI = (EAX);
  /* 12d3f693 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f696 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f699 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12d3f69d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f69e call 0x12d35600 */
  push32(0x12d3f6a3u); f_12d35600();
  /* 12d3f6a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f6a6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f6a9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d3f6ad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3f6b0 jmp 0x12d3f66f */
  goto L_12d3f66f;
L_12d3f6b2:;
  /* 12d3f6b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f6b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f6b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f6b9 call 0x12d327b0 */
  push32(0x12d3f6beu); f_12d327b0();
  /* 12d3f6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f6c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3f6c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f6c8 je 0x12d3f76b */
  if (C.zf) goto L_12d3f76b;
  /* 12d3f6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f6d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d3f6d4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f6db jmp 0x12d3f6e6 */
  goto L_12d3f6e6;
L_12d3f6dd:;
  /* 12d3f6dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f6e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f6e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d3f6e6:;
  /* 12d3f6e6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f6ea jae 0x12d3f75c */
  if (!C.cf) goto L_12d3f75c;
  /* 12d3f6ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f6ef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d3f6f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f6f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f6f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d3f6fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f6fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f701 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d3f705 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f706 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f709 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f70a call 0x12d35780 */
  push32(0x12d3f70fu); f_12d35780();
  /* 12d3f70f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f712 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f713 call 0x12d35600 */
  push32(0x12d3f718u); f_12d35600();
  /* 12d3f718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f71b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f71e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f720 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d3f723 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f726 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d3f729 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f72c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f72f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3f732 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f735 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f738 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d3f73c push eax */
  push32((uint32_t)(EAX));
  /* 12d3f73d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f740 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f741 call 0x12d35780 */
  push32(0x12d3f746u); f_12d35780();
  /* 12d3f746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f749 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f74a call 0x12d35600 */
  push32(0x12d3f74fu); f_12d35600();
  /* 12d3f74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f752 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f755 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f757 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3f75a jmp 0x12d3f6dd */
  goto L_12d3f6dd;
L_12d3f75c:;
  /* 12d3f75c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f75f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d3f762 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f768 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d3f76b:;
  /* 12d3f76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f76e pop esi */
  ESI = (pop32());
  /* 12d3f76f mov esp, ebp */
  ESP = (EBP);
  /* 12d3f771 pop ebp */
  EBP = (pop32());
  /* 12d3f772 ret  */
  ESPCHK(0x12d3f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x12d3f780 (878 bytes, 273 insns) */
void f_12d3f780(void) {
  FTRACE(0x12d3f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f781 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f786 push esi */
  push32((uint32_t)(ESI));
  /* 12d3f787 mov eax, dword ptr [0x12d4dcb8] */
  EAX = (r32((uint32_t)(0x12d4dcb8)));
  /* 12d3f78c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3f78f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3f796 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f79d jmp 0x12d3f7a8 */
  goto L_12d3f7a8;
L_12d3f79f:;
  /* 12d3f79f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f7a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f7a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d3f7a8:;
  /* 12d3f7a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f7ac jae 0x12d3f7e1 */
  if (!C.cf) goto L_12d3f7e1;
  /* 12d3f7ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f7b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f7b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d3f7b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f7b8 call 0x12d35600 */
  push32(0x12d3f7bdu); f_12d35600();
  /* 12d3f7bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f7c0 mov esi, eax */
  ESI = (EAX);
  /* 12d3f7c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f7c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f7c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d3f7cc push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f7cd call 0x12d35600 */
  push32(0x12d3f7d2u); f_12d35600();
  /* 12d3f7d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f7d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f7d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d3f7dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3f7df jmp 0x12d3f79f */
  goto L_12d3f79f;
L_12d3f7e1:;
  /* 12d3f7e1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f7e8 jmp 0x12d3f7f3 */
  goto L_12d3f7f3;
L_12d3f7ea:;
  /* 12d3f7ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f7ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f7f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d3f7f3:;
  /* 12d3f7f3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f7f7 jae 0x12d3f82d */
  if (!C.cf) goto L_12d3f82d;
  /* 12d3f7f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f7fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f7ff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d3f803 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f804 call 0x12d35600 */
  push32(0x12d3f809u); f_12d35600();
  /* 12d3f809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f80c mov esi, eax */
  ESI = (EAX);
  /* 12d3f80e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f811 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f814 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d3f818 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f819 call 0x12d35600 */
  push32(0x12d3f81eu); f_12d35600();
  /* 12d3f81e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f821 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f824 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d3f828 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3f82b jmp 0x12d3f7ea */
  goto L_12d3f7ea;
L_12d3f82d:;
  /* 12d3f82d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f830 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d3f836 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f837 call 0x12d35600 */
  push32(0x12d3f83cu); f_12d35600();
  /* 12d3f83c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f83f mov esi, eax */
  ESI = (EAX);
  /* 12d3f841 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f844 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12d3f84a push edx */
  push32((uint32_t)(EDX));
  /* 12d3f84b call 0x12d35600 */
  push32(0x12d3f850u); f_12d35600();
  /* 12d3f850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f853 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f856 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d3f85a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3f85d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f860 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d3f866 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f867 call 0x12d35600 */
  push32(0x12d3f86cu); f_12d35600();
  /* 12d3f86c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f86f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f872 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d3f876 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3f879 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f87c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12d3f882 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f883 call 0x12d35600 */
  push32(0x12d3f888u); f_12d35600();
  /* 12d3f888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f88b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f88e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d3f892 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3f895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f898 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d3f89e push edx */
  push32((uint32_t)(EDX));
  /* 12d3f89f call 0x12d35600 */
  push32(0x12d3f8a4u); f_12d35600();
  /* 12d3f8a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f8a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f8aa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d3f8ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3f8b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f8b4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f8b9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f8ba call 0x12d327b0 */
  push32(0x12d3f8bfu); f_12d327b0();
  /* 12d3f8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f8c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3f8c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f8c9 je 0x12d3fae6 */
  if (C.zf) goto L_12d3fae6;
  /* 12d3f8cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f8d2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d3f8d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f8d8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f8de mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3f8e1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d3f8e6 mov eax, dword ptr [0x12d4dcb8] */
  EAX = (r32((uint32_t)(0x12d4dcb8)));
  /* 12d3f8eb push eax */
  push32((uint32_t)(EAX));
  /* 12d3f8ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f8ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f8f0 call 0x12d390b0 */
  push32(0x12d3f8f5u); f_12d390b0();
  /* 12d3f8f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f8f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f8ff jmp 0x12d3f90a */
  goto L_12d3f90a;
L_12d3f901:;
  /* 12d3f901 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f904 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f907 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d3f90a:;
  /* 12d3f90a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f90e jae 0x12d3f97e */
  if (!C.cf) goto L_12d3f97e;
  /* 12d3f910 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3f916 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f919 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d3f91c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f91f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f922 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d3f925 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f926 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f929 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f92a call 0x12d35780 */
  push32(0x12d3f92fu); f_12d35780();
  /* 12d3f92f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f932 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f933 call 0x12d35600 */
  push32(0x12d3f938u); f_12d35600();
  /* 12d3f938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f93b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f93e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d3f942 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3f945 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f948 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3f94b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f94e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12d3f952 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f958 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12d3f95c push edx */
  push32((uint32_t)(EDX));
  /* 12d3f95d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f960 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f961 call 0x12d35780 */
  push32(0x12d3f966u); f_12d35780();
  /* 12d3f966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f969 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f96a call 0x12d35600 */
  push32(0x12d3f96fu); f_12d35600();
  /* 12d3f96f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f972 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f975 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d3f979 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3f97c jmp 0x12d3f901 */
  goto L_12d3f901;
L_12d3f97e:;
  /* 12d3f97e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f985 jmp 0x12d3f990 */
  goto L_12d3f990;
L_12d3f987:;
  /* 12d3f987 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f98a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f98d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d3f990:;
  /* 12d3f990 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f994 jae 0x12d3fa06 */
  if (!C.cf) goto L_12d3fa06;
  /* 12d3f996 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f999 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3f99c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f99f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12d3f9a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f9a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f9a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d3f9ad push eax */
  push32((uint32_t)(EAX));
  /* 12d3f9ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f9b2 call 0x12d35780 */
  push32(0x12d3f9b7u); f_12d35780();
  /* 12d3f9b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f9ba push eax */
  push32((uint32_t)(EAX));
  /* 12d3f9bb call 0x12d35600 */
  push32(0x12d3f9c0u); f_12d35600();
  /* 12d3f9c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f9c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f9c6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d3f9ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3f9cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f9d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3f9d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f9d6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12d3f9da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f9dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f9e0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d3f9e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f9e5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f9e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f9e9 call 0x12d35780 */
  push32(0x12d3f9eeu); f_12d35780();
  /* 12d3f9ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f9f1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f9f2 call 0x12d35600 */
  push32(0x12d3f9f7u); f_12d35600();
  /* 12d3f9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f9fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3f9fd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d3fa01 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3fa04 jmp 0x12d3f987 */
  goto L_12d3f987;
L_12d3fa06:;
  /* 12d3fa06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3fa09 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa0c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12d3fa12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fa15 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d3fa1b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fa1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa1f push edx */
  push32((uint32_t)(EDX));
  /* 12d3fa20 call 0x12d35780 */
  push32(0x12d3fa25u); f_12d35780();
  /* 12d3fa25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fa28 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fa29 call 0x12d35600 */
  push32(0x12d3fa2eu); f_12d35600();
  /* 12d3fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fa31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa34 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d3fa38 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3fa3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3fa3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa41 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12d3fa47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fa4a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d3fa50 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fa51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa54 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fa55 call 0x12d35780 */
  push32(0x12d3fa5au); f_12d35780();
  /* 12d3fa5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fa5d push eax */
  push32((uint32_t)(EAX));
  /* 12d3fa5e call 0x12d35600 */
  push32(0x12d3fa63u); f_12d35600();
  /* 12d3fa63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fa66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa69 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d3fa6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3fa70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3fa73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa76 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12d3fa7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fa7f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12d3fa85 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fa86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa89 push edx */
  push32((uint32_t)(EDX));
  /* 12d3fa8a call 0x12d35780 */
  push32(0x12d3fa8fu); f_12d35780();
  /* 12d3fa8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fa92 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fa93 call 0x12d35600 */
  push32(0x12d3fa98u); f_12d35600();
  /* 12d3fa98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fa9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fa9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d3faa2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d3faa5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3faa8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3faab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12d3fab1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fab4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d3faba push eax */
  push32((uint32_t)(EAX));
  /* 12d3fabb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fabe push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fabf call 0x12d35780 */
  push32(0x12d3fac4u); f_12d35780();
  /* 12d3fac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fac7 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fac8 call 0x12d35600 */
  push32(0x12d3facdu); f_12d35600();
  /* 12d3facd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fad0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fad3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d3fad7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3fada mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3fadd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3fae0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12d3fae6:;
  /* 12d3fae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3fae9 pop esi */
  ESI = (pop32());
  /* 12d3faea mov esp, ebp */
  ESP = (EBP);
  /* 12d3faec pop ebp */
  EBP = (pop32());
  /* 12d3faed ret  */
  ESPCHK(0x12d3f780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x12d3faf0 (31 bytes, 15 insns) */
void f_12d3faf0(void) {
  FTRACE(0x12d3faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3faf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3faf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3faf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3faf8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3faf9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fafc push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fafd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fb00 push edx */
  push32((uint32_t)(EDX));
  /* 12d3fb01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3fb04 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fb05 call 0x12d3fb10 */
  push32(0x12d3fb0au); f_12d3fb10();
  /* 12d3fb0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fb0d pop ebp */
  EBP = (pop32());
  /* 12d3fb0e ret  */
  ESPCHK(0x12d3faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x12d3fb10 (394 bytes, 123 insns) */
void f_12d3fb10(void) {
  FTRACE(0x12d3fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3fb11 mov ebp, esp */
  EBP = (ESP);
  /* 12d3fb13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fb16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fb19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3fb1c push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d3fb21 call dword ptr [0x12d50254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50254))), 0x12d3fb27u);
  /* 12d3fb27 cmp dword ptr [0x12d4e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fb2e je 0x12d3fb4e */
  if (C.zf) goto L_12d3fb4e;
  /* 12d3fb30 push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d3fb35 call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d3fb3bu);
  /* 12d3fb3b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3fb3d call 0x12d361d0 */
  push32(0x12d3fb42u); f_12d361d0();
  /* 12d3fb42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fb45 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d3fb4c jmp 0x12d3fb55 */
  goto L_12d3fb55;
L_12d3fb4e:;
  /* 12d3fb4e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d3fb55:;
  /* 12d3fb55 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fb59 jne 0x12d3fb66 */
  if (!C.zf) goto L_12d3fb66;
  /* 12d3fb5b mov ecx, dword ptr [0x12d4dcb8] */
  ECX = (r32((uint32_t)(0x12d4dcb8)));
  /* 12d3fb61 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d3fb64 jmp 0x12d3fb6c */
  goto L_12d3fb6c;
L_12d3fb66:;
  /* 12d3fb66 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fb69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d3fb6c:;
  /* 12d3fb6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3fb6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3fb72:;
  /* 12d3fb72 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fb76 jbe 0x12d3fc63 */
  if ((C.cf||C.zf)) goto L_12d3fc63;
  /* 12d3fb7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fb7f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d3fb81 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12d3fb84 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3fb88 je 0x12d3fb92 */
  if (C.zf) goto L_12d3fb92;
  /* 12d3fb8a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3fb8e je 0x12d3fb97 */
  if (C.zf) goto L_12d3fb97;
  /* 12d3fb90 jmp 0x12d3fbf1 */
  goto L_12d3fbf1;
L_12d3fb92:;
  /* 12d3fb92 jmp 0x12d3fc63 */
  goto L_12d3fc63;
L_12d3fb97:;
  /* 12d3fb97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fb9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fb9d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12d3fba0 mov dword ptr [0x12d4e7c8], 0 */
  w32((uint32_t)(0x12d4e7c8), (0x0u));
  /* 12d3fbaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fbad movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3fbb0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fbb3 jne 0x12d3fbc8 */
  if (!C.zf) goto L_12d3fbc8;
  /* 12d3fbb5 mov dword ptr [0x12d4e7c8], 1 */
  w32((uint32_t)(0x12d4e7c8), (0x1u));
  /* 12d3fbbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fbc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fbc5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d3fbc8:;
  /* 12d3fbc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3fbcb push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fbcc lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12d3fbcf push edx */
  push32((uint32_t)(EDX));
  /* 12d3fbd0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12d3fbd3 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fbd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fbd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fbd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fbdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3fbdd push eax */
  push32((uint32_t)(EAX));
  /* 12d3fbde call 0x12d3fca0 */
  push32(0x12d3fbe3u); f_12d3fca0();
  /* 12d3fbe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fbe6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fbe9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fbec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d3fbef jmp 0x12d3fc5e */
  goto L_12d3fc5e;
L_12d3fbf1:;
  /* 12d3fbf1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fbf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3fbf6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3fbf8 mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d3fbfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3fc00 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d3fc04 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3fc0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3fc0c je 0x12d3fc39 */
  if (C.zf) goto L_12d3fc39;
  /* 12d3fc0e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fc12 jbe 0x12d3fc39 */
  if ((C.cf||C.zf)) goto L_12d3fc39;
  /* 12d3fc14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3fc17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fc1a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d3fc1c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d3fc1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3fc21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fc24 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d3fc27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fc2a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fc2d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d3fc30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fc33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fc36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d3fc39:;
  /* 12d3fc39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3fc3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fc3f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d3fc41 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d3fc43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3fc46 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fc49 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d3fc4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fc4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fc52 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d3fc55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fc58 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fc5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d3fc5e:;
  /* 12d3fc5e jmp 0x12d3fb72 */
  goto L_12d3fb72;
L_12d3fc63:;
  /* 12d3fc63 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fc67 je 0x12d3fc75 */
  if (C.zf) goto L_12d3fc75;
  /* 12d3fc69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3fc6b call 0x12d36270 */
  push32(0x12d3fc70u); f_12d36270();
  /* 12d3fc70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fc73 jmp 0x12d3fc80 */
  goto L_12d3fc80;
L_12d3fc75:;
  /* 12d3fc75 push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d3fc7a call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d3fc80u);
L_12d3fc80:;
  /* 12d3fc80 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fc84 jbe 0x12d3fc94 */
  if ((C.cf||C.zf)) goto L_12d3fc94;
  /* 12d3fc86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3fc89 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d3fc8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fc8f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fc92 jmp 0x12d3fc96 */
  goto L_12d3fc96;
L_12d3fc94:;
  /* 12d3fc94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3fc96:;
  /* 12d3fc96 mov esp, ebp */
  ESP = (EBP);
  /* 12d3fc98 pop ebp */
  EBP = (pop32());
  /* 12d3fc99 ret  */
  ESPCHK(0x12d3fb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x12d3fca0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12d3fca0(void) {
  FTRACE(0x12d3fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3fca1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3fca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fca6 push esi */
  push32((uint32_t)(ESI));
  /* 12d3fca7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12d3fcab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3fcae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fcb1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fcb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3fcb7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fcbb ja 0x12d40208 */
  if ((!C.cf&&!C.zf)) goto L_12d40208;
  /* 12d3fcc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3fcc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3fcc6 mov dl, byte ptr [eax + 0x12d40269] */
  DL = (r8((uint32_t)(EAX + 0x12d40269)));
  /* 12d3fccc jmp dword ptr [edx*4 + 0x12d4020d] */
  switch (EDX) {
    case 0: goto L_12d401e6;
    case 1: goto L_12d3fcf5;
    case 2: goto L_12d3fd3b;
    case 3: goto L_12d3fe88;
    case 4: goto L_12d3feb0;
    case 5: goto L_12d3ff4f;
    case 6: goto L_12d3ffbb;
    case 7: goto L_12d3ffe4;
    case 8: goto L_12d40025;
    case 9: goto L_12d40107;
    case 10: goto L_12d4016e;
    case 11: goto L_12d401bb;
    case 12: goto L_12d3fcd3;
    case 13: goto L_12d3fd18;
    case 14: goto L_12d3fd5e;
    case 15: goto L_12d3fe5e;
    case 16: goto L_12d3fef5;
    case 17: goto L_12d3ff22;
    case 18: goto L_12d3ff77;
    case 19: goto L_12d3fffb;
    case 20: goto L_12d400a9;
    case 21: goto L_12d40138;
    case 22: goto L_12d40208;
    default: x86_unimpl("switch@0x12d3fccc out of table"); return;
  }
L_12d3fcd3:;
  /* 12d3fcd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fcd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fcd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fcda push edx */
  push32((uint32_t)(EDX));
  /* 12d3fcdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fcde mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d3fce1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fce4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d3fce7 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fce8 call 0x12d402c0 */
  push32(0x12d3fcedu); f_12d402c0();
  /* 12d3fced add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fcf0 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fcf5:;
  /* 12d3fcf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fcf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fcf9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fcfc push edx */
  push32((uint32_t)(EDX));
  /* 12d3fcfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fd00 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d3fd03 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fd06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d3fd0a push eax */
  push32((uint32_t)(EAX));
  /* 12d3fd0b call 0x12d402c0 */
  push32(0x12d3fd10u); f_12d402c0();
  /* 12d3fd10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fd13 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fd18:;
  /* 12d3fd18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fd1b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fd1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fd1f push edx */
  push32((uint32_t)(EDX));
  /* 12d3fd20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fd23 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3fd26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fd29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d3fd2d push eax */
  push32((uint32_t)(EAX));
  /* 12d3fd2e call 0x12d402c0 */
  push32(0x12d3fd33u); f_12d402c0();
  /* 12d3fd33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fd36 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fd3b:;
  /* 12d3fd3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fd3e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fd3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fd42 push edx */
  push32((uint32_t)(EDX));
  /* 12d3fd43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fd46 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3fd49 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fd4c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d3fd50 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fd51 call 0x12d402c0 */
  push32(0x12d3fd56u); f_12d402c0();
  /* 12d3fd56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fd59 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fd5e:;
  /* 12d3fd5e cmp dword ptr [0x12d4e7c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fd65 je 0x12d3fde6 */
  if (C.zf) goto L_12d3fde6;
  /* 12d3fd67 mov dword ptr [0x12d4e7c8], 0 */
  w32((uint32_t)(0x12d4e7c8), (0x0u));
  /* 12d3fd71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fd74 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fd75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fd78 push edx */
  push32((uint32_t)(EDX));
  /* 12d3fd79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fd7c push eax */
  push32((uint32_t)(EAX));
  /* 12d3fd7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fd80 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fd81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fd84 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d3fd8a push eax */
  push32((uint32_t)(EAX));
  /* 12d3fd8b call 0x12d40470 */
  push32(0x12d3fd90u); f_12d40470();
  /* 12d3fd90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fd93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fd96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fd99 jne 0x12d3fda0 */
  if (!C.zf) goto L_12d3fda0;
  /* 12d3fd9b jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fda0:;
  /* 12d3fda0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fda3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3fda5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12d3fda8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fdab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3fdad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fdb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fdb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3fdb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fdb8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3fdba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fdbd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fdc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3fdc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fdc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fdc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fdc9 push edx */
  push32((uint32_t)(EDX));
  /* 12d3fdca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fdcd push eax */
  push32((uint32_t)(EAX));
  /* 12d3fdce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fdd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fdd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fdd5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12d3fddb push eax */
  push32((uint32_t)(EAX));
  /* 12d3fddc call 0x12d40470 */
  push32(0x12d3fde1u); f_12d40470();
  /* 12d3fde1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fde4 jmp 0x12d3fe59 */
  goto L_12d3fe59;
L_12d3fde6:;
  /* 12d3fde6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fde9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fdea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fded push edx */
  push32((uint32_t)(EDX));
  /* 12d3fdee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fdf1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fdf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fdf6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fdf9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12d3fdff push eax */
  push32((uint32_t)(EAX));
  /* 12d3fe00 call 0x12d40470 */
  push32(0x12d3fe05u); f_12d40470();
  /* 12d3fe05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fe08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fe0b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fe0e jne 0x12d3fe15 */
  if (!C.zf) goto L_12d3fe15;
  /* 12d3fe10 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fe15:;
  /* 12d3fe15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fe18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3fe1a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12d3fe1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fe20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3fe22 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fe25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fe28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3fe2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fe2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3fe2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3fe32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fe35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3fe37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fe3a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fe3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fe3e push edx */
  push32((uint32_t)(EDX));
  /* 12d3fe3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fe42 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fe43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fe46 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fe47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3fe4a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12d3fe50 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fe51 call 0x12d40470 */
  push32(0x12d3fe56u); f_12d40470();
  /* 12d3fe56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3fe59:;
  /* 12d3fe59 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fe5e:;
  /* 12d3fe5e mov ecx, dword ptr [0x12d4e7c8] */
  ECX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3fe64 mov dword ptr [0x12d4e7d8], ecx */
  w32((uint32_t)(0x12d4e7d8), (ECX));
  /* 12d3fe6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fe6d push edx */
  push32((uint32_t)(EDX));
  /* 12d3fe6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fe71 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fe72 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3fe74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fe77 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3fe7a push edx */
  push32((uint32_t)(EDX));
  /* 12d3fe7b call 0x12d40310 */
  push32(0x12d3fe80u); f_12d40310();
  /* 12d3fe80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fe83 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fe88:;
  /* 12d3fe88 mov eax, dword ptr [0x12d4e7c8] */
  EAX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3fe8d mov dword ptr [0x12d4e7d8], eax */
  w32((uint32_t)(0x12d4e7d8), (EAX));
  /* 12d3fe92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fe95 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fe96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fe99 push edx */
  push32((uint32_t)(EDX));
  /* 12d3fe9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3fe9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fe9f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3fea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fea3 call 0x12d40310 */
  push32(0x12d3fea8u); f_12d40310();
  /* 12d3fea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3feab jmp 0x12d40208 */
  goto L_12d40208;
L_12d3feb0:;
  /* 12d3feb0 mov edx, dword ptr [0x12d4e7c8] */
  EDX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3feb6 mov dword ptr [0x12d4e7d8], edx */
  w32((uint32_t)(0x12d4e7d8), (EDX));
  /* 12d3febc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3febf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3fec2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d3fec3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12d3fec8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d3feca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3fecd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3fed1 jne 0x12d3feda */
  if (!C.zf) goto L_12d3feda;
  /* 12d3fed3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12d3feda:;
  /* 12d3feda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3fedd push edx */
  push32((uint32_t)(EDX));
  /* 12d3fede mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3fee1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3fee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3fee4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3fee7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3fee8 call 0x12d40310 */
  push32(0x12d3feedu); f_12d40310();
  /* 12d3feed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3fef0 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3fef5:;
  /* 12d3fef5 mov edx, dword ptr [0x12d4e7c8] */
  EDX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3fefb mov dword ptr [0x12d4e7d8], edx */
  w32((uint32_t)(0x12d4e7d8), (EDX));
  /* 12d3ff01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ff04 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ff05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ff08 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ff09 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d3ff0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ff0e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d3ff11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ff14 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ff15 call 0x12d40310 */
  push32(0x12d3ff1au); f_12d40310();
  /* 12d3ff1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ff1d jmp 0x12d40208 */
  goto L_12d40208;
L_12d3ff22:;
  /* 12d3ff22 mov ecx, dword ptr [0x12d4e7c8] */
  ECX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3ff28 mov dword ptr [0x12d4e7d8], ecx */
  w32((uint32_t)(0x12d4e7d8), (ECX));
  /* 12d3ff2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ff31 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ff32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ff35 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ff36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3ff38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ff3b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d3ff3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ff41 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ff42 call 0x12d40310 */
  push32(0x12d3ff47u); f_12d40310();
  /* 12d3ff47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ff4a jmp 0x12d40208 */
  goto L_12d40208;
L_12d3ff4f:;
  /* 12d3ff4f mov eax, dword ptr [0x12d4e7c8] */
  EAX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3ff54 mov dword ptr [0x12d4e7d8], eax */
  w32((uint32_t)(0x12d4e7d8), (EAX));
  /* 12d3ff59 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ff5c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ff5d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ff60 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ff61 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3ff63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ff66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3ff69 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ff6a call 0x12d40310 */
  push32(0x12d3ff6fu); f_12d40310();
  /* 12d3ff6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ff72 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3ff77:;
  /* 12d3ff77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ff7a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ff7e jg 0x12d3ff9c */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3ff9c;
  /* 12d3ff80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ff83 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ff84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ff87 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ff88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3ff8b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d3ff91 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ff92 call 0x12d402c0 */
  push32(0x12d3ff97u); f_12d402c0();
  /* 12d3ff97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ff9a jmp 0x12d3ffb6 */
  goto L_12d3ffb6;
L_12d3ff9c:;
  /* 12d3ff9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ff9f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ffa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ffa3 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ffa4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3ffa7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12d3ffad push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ffae call 0x12d402c0 */
  push32(0x12d3ffb3u); f_12d402c0();
  /* 12d3ffb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3ffb6:;
  /* 12d3ffb6 jmp 0x12d40208 */
  goto L_12d40208;
L_12d3ffbb:;
  /* 12d3ffbb mov edx, dword ptr [0x12d4e7c8] */
  EDX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3ffc1 mov dword ptr [0x12d4e7d8], edx */
  w32((uint32_t)(0x12d4e7d8), (EDX));
  /* 12d3ffc7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ffca push eax */
  push32((uint32_t)(EAX));
  /* 12d3ffcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ffce push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ffcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3ffd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ffd4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3ffd6 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ffd7 call 0x12d40310 */
  push32(0x12d3ffdcu); f_12d40310();
  /* 12d3ffdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ffdf jmp 0x12d40208 */
  goto L_12d40208;
L_12d3ffe4:;
  /* 12d3ffe4 mov ecx, dword ptr [0x12d4e7c8] */
  ECX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d3ffea mov dword ptr [0x12d4e7d8], ecx */
  w32((uint32_t)(0x12d4e7d8), (ECX));
  /* 12d3fff0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3fff3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12d3fff6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3fff9 jmp 0x12d4004d */
  goto L_12d4004d;
L_12d3fffb:;
  /* 12d3fffb mov ecx, dword ptr [0x12d4e7c8] */
  ECX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d40001 mov dword ptr [0x12d4e7d8], ecx */
  w32((uint32_t)(0x12d4e7d8), (ECX));
  /* 12d40007 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4000a push edx */
  push32((uint32_t)(EDX));
  /* 12d4000b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4000e push eax */
  push32((uint32_t)(EAX));
  /* 12d4000f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d40011 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40014 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d40017 push edx */
  push32((uint32_t)(EDX));
  /* 12d40018 call 0x12d40310 */
  push32(0x12d4001du); f_12d40310();
  /* 12d4001d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40020 jmp 0x12d40208 */
  goto L_12d40208;
L_12d40025:;
  /* 12d40025 mov eax, dword ptr [0x12d4e7c8] */
  EAX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d4002a mov dword ptr [0x12d4e7d8], eax */
  w32((uint32_t)(0x12d4e7d8), (EAX));
  /* 12d4002f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40032 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40036 jne 0x12d40041 */
  if (!C.zf) goto L_12d40041;
  /* 12d40038 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12d4003f jmp 0x12d4004d */
  goto L_12d4004d;
L_12d40041:;
  /* 12d40041 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40044 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12d40047 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d4004a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d4004d:;
  /* 12d4004d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40050 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d40053 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40056 jge 0x12d40061 */
  if ((C.sf==C.of)) goto L_12d40061;
  /* 12d40058 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d4005f jmp 0x12d4008e */
  goto L_12d4008e;
L_12d40061:;
  /* 12d40061 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40064 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d40067 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40068 mov ecx, 7 */
  ECX = (0x7u);
  /* 12d4006d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d4006f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d40072 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40075 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d40078 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40079 mov ecx, 7 */
  ECX = (0x7u);
  /* 12d4007e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d40080 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40083 jl 0x12d4008e */
  if ((C.sf!=C.of)) goto L_12d4008e;
  /* 12d40085 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4008b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d4008e:;
  /* 12d4008e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40091 push eax */
  push32((uint32_t)(EAX));
  /* 12d40092 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40095 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40096 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d40098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4009b push edx */
  push32((uint32_t)(EDX));
  /* 12d4009c call 0x12d40310 */
  push32(0x12d400a1u); f_12d40310();
  /* 12d400a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d400a4 jmp 0x12d40208 */
  goto L_12d40208;
L_12d400a9:;
  /* 12d400a9 cmp dword ptr [0x12d4e7c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d400b0 je 0x12d400e0 */
  if (C.zf) goto L_12d400e0;
  /* 12d400b2 mov dword ptr [0x12d4e7c8], 0 */
  w32((uint32_t)(0x12d4e7c8), (0x0u));
  /* 12d400bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d400bf push eax */
  push32((uint32_t)(EAX));
  /* 12d400c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d400c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d400c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d400c7 push edx */
  push32((uint32_t)(EDX));
  /* 12d400c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d400cb push eax */
  push32((uint32_t)(EAX));
  /* 12d400cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d400cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12d400d5 push edx */
  push32((uint32_t)(EDX));
  /* 12d400d6 call 0x12d40470 */
  push32(0x12d400dbu); f_12d40470();
  /* 12d400db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d400de jmp 0x12d40102 */
  goto L_12d40102;
L_12d400e0:;
  /* 12d400e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d400e3 push eax */
  push32((uint32_t)(EAX));
  /* 12d400e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d400e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d400e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d400eb push edx */
  push32((uint32_t)(EDX));
  /* 12d400ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d400ef push eax */
  push32((uint32_t)(EAX));
  /* 12d400f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d400f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d400f9 push edx */
  push32((uint32_t)(EDX));
  /* 12d400fa call 0x12d40470 */
  push32(0x12d400ffu); f_12d40470();
  /* 12d400ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d40102:;
  /* 12d40102 jmp 0x12d40208 */
  goto L_12d40208;
L_12d40107:;
  /* 12d40107 mov dword ptr [0x12d4e7c8], 0 */
  w32((uint32_t)(0x12d4e7c8), (0x0u));
  /* 12d40111 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d40114 push eax */
  push32((uint32_t)(EAX));
  /* 12d40115 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40118 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40119 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4011c push edx */
  push32((uint32_t)(EDX));
  /* 12d4011d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40120 push eax */
  push32((uint32_t)(EAX));
  /* 12d40121 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d40124 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d4012a push edx */
  push32((uint32_t)(EDX));
  /* 12d4012b call 0x12d40470 */
  push32(0x12d40130u); f_12d40470();
  /* 12d40130 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40133 jmp 0x12d40208 */
  goto L_12d40208;
L_12d40138:;
  /* 12d40138 mov eax, dword ptr [0x12d4e7c8] */
  EAX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d4013d mov dword ptr [0x12d4e7d8], eax */
  w32((uint32_t)(0x12d4e7d8), (EAX));
  /* 12d40142 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40145 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d40148 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40149 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12d4014e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d40150 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d40153 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40156 push edx */
  push32((uint32_t)(EDX));
  /* 12d40157 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4015a push eax */
  push32((uint32_t)(EAX));
  /* 12d4015b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d4015d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40160 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40161 call 0x12d40310 */
  push32(0x12d40166u); f_12d40310();
  /* 12d40166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40169 jmp 0x12d40208 */
  goto L_12d40208;
L_12d4016e:;
  /* 12d4016e mov edx, dword ptr [0x12d4e7c8] */
  EDX = (r32((uint32_t)(0x12d4e7c8)));
  /* 12d40174 mov dword ptr [0x12d4e7d8], edx */
  w32((uint32_t)(0x12d4e7d8), (EDX));
  /* 12d4017a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d4017d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d40180 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40181 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12d40186 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d40188 mov ecx, eax */
  ECX = (EAX);
  /* 12d4018a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4018d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d40190 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40193 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d40196 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40197 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12d4019c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d4019e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d401a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d401a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d401a6 push eax */
  push32((uint32_t)(EAX));
  /* 12d401a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d401aa push ecx */
  push32((uint32_t)(ECX));
  /* 12d401ab push 4 */
  push32((uint32_t)(0x4u));
  /* 12d401ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d401b0 push edx */
  push32((uint32_t)(EDX));
  /* 12d401b1 call 0x12d40310 */
  push32(0x12d401b6u); f_12d40310();
  /* 12d401b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d401b9 jmp 0x12d40208 */
  goto L_12d40208;
L_12d401bb:;
  /* 12d401bb call 0x12d412d0 */
  push32(0x12d401c0u); f_12d412d0();
  /* 12d401c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d401c3 push eax */
  push32((uint32_t)(EAX));
  /* 12d401c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d401c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d401c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d401cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d401cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d401d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12d401d4 mov ecx, dword ptr [eax*4 + 0x12d4de3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4de3c)));
  /* 12d401db push ecx */
  push32((uint32_t)(ECX));
  /* 12d401dc call 0x12d402c0 */
  push32(0x12d401e1u); f_12d402c0();
  /* 12d401e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d401e4 jmp 0x12d40208 */
  goto L_12d40208;
L_12d401e6:;
  /* 12d401e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d401e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d401eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12d401ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d401f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d401f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d401f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d401f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d401fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d401fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d40200 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40203 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40206 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d40208:;
  /* 12d40208 pop esi */
  ESI = (pop32());
  /* 12d40209 mov esp, ebp */
  ESP = (EBP);
  /* 12d4020b pop ebp */
  EBP = (pop32());
  /* 12d4020c ret  */
  ESPCHK(0x12d3fca0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12d402c0 (72 bytes, 30 insns) */
void f_12d402c0(void) {
  FTRACE(0x12d402c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d402c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d402c1 mov ebp, esp */
  EBP = (ESP);
L_12d402c3:;
  /* 12d402c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d402c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d402c9 je 0x12d40306 */
  if (C.zf) goto L_12d40306;
  /* 12d402cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d402ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d402d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d402d3 je 0x12d40306 */
  if (C.zf) goto L_12d40306;
  /* 12d402d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d402d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d402da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d402dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d402df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d402e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d402e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d402e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d402e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d402ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d402ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d402f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d402f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d402f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d402fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d402fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d402ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40302 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d40304 jmp 0x12d402c3 */
  goto L_12d402c3;
L_12d40306:;
  /* 12d40306 pop ebp */
  EBP = (pop32());
  /* 12d40307 ret  */
  ESPCHK(0x12d402c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010310 @ 0x12d40310 (173 bytes, 64 insns) */
void f_12d40310(void) {
  FTRACE(0x12d40310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40310 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40311 mov ebp, esp */
  EBP = (ESP);
  /* 12d40313 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d4031b cmp dword ptr [0x12d4e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40322 je 0x12d4033a */
  if (C.zf) goto L_12d4033a;
  /* 12d40324 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40327 push eax */
  push32((uint32_t)(EAX));
  /* 12d40328 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4032b push ecx */
  push32((uint32_t)(ECX));
  /* 12d4032c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4032f push edx */
  push32((uint32_t)(EDX));
  /* 12d40330 call 0x12d403c0 */
  push32(0x12d40335u); f_12d403c0();
  /* 12d40335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40338 jmp 0x12d403b9 */
  goto L_12d403b9;
L_12d4033a:;
  /* 12d4033a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4033d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40340 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40342 jae 0x12d403b0 */
  if (!C.cf) goto L_12d403b0;
  /* 12d40344 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40347 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d4034a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d4034d jmp 0x12d40358 */
  goto L_12d40358;
L_12d4034f:;
  /* 12d4034f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40352 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40355 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12d40358:;
  /* 12d40358 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d4035b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4035e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d40360 je 0x12d40394 */
  if (C.zf) goto L_12d40394;
  /* 12d40362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40365 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40366 mov ecx, 0xa */
  ECX = (0xau);
  /* 12d4036b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d4036d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40370 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40373 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d40375 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40378 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12d4037b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4037e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d4037f mov ecx, 0xa */
  ECX = (0xau);
  /* 12d40384 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d40386 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d40389 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4038c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4038f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d40392 jmp 0x12d4034f */
  goto L_12d4034f;
L_12d40394:;
  /* 12d40394 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40397 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d40399 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4039c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4039f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d403a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d403a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d403a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d403a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d403ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d403ae jmp 0x12d403b9 */
  goto L_12d403b9;
L_12d403b0:;
  /* 12d403b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d403b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d403b9:;
  /* 12d403b9 mov esp, ebp */
  ESP = (EBP);
  /* 12d403bb pop ebp */
  EBP = (pop32());
  /* 12d403bc ret  */
  ESPCHK(0x12d40310u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12d403c0 (172 bytes, 65 insns) */
void f_12d403c0(void) {
  FTRACE(0x12d403c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d403c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d403c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d403c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d403c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d403c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d403cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d403ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d403d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d403d4 jbe 0x12d4041b */
  if ((C.cf||C.zf)) goto L_12d4041b;
L_12d403d6:;
  /* 12d403d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d403d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d403da mov ecx, 0xa */
  ECX = (0xau);
  /* 12d403df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d403e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d403e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d403e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d403e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d403ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d403ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d403f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d403f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d403f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d403fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d403fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d403ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40402 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d40403 mov ecx, 0xa */
  ECX = (0xau);
  /* 12d40408 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d4040a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d4040d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40411 jle 0x12d4041b */
  if ((C.zf||C.sf!=C.of)) goto L_12d4041b;
  /* 12d40413 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40416 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40419 ja 0x12d403d6 */
  if ((!C.cf&&!C.zf)) goto L_12d403d6;
L_12d4041b:;
  /* 12d4041b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d4041e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d40420 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d40423 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40429 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d4042b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4042e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40431 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d40434:;
  /* 12d40434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40437 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d40439 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12d4043c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4043f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d40442 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d40444 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d40446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40449 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d4044c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d4044f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d40452 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d40455 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d40457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d4045a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4045d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d40460 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d40463 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40466 jb 0x12d40434 */
  if (C.cf) goto L_12d40434;
  /* 12d40468 mov esp, ebp */
  ESP = (EBP);
  /* 12d4046a pop ebp */
  EBP = (pop32());
  /* 12d4046b ret  */
  ESPCHK(0x12d403c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x12d40470 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12d40470(void) {
  FTRACE(0x12d40470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40470 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40471 mov ebp, esp */
  EBP = (ESP);
  /* 12d40473 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12d40476:;
  /* 12d40476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40479 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d4047c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d4047e je 0x12d408ec */
  if (C.zf) goto L_12d408ec;
  /* 12d40484 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40487 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4048a je 0x12d408ec */
  if (C.zf) goto L_12d408ec;
  /* 12d40490 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d40494 mov dword ptr [0x12d4e7d8], 0 */
  w32((uint32_t)(0x12d4e7d8), (0x0u));
  /* 12d4049e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d404a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d404a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d404ab jmp 0x12d404b6 */
  goto L_12d404b6;
L_12d404ad:;
  /* 12d404ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d404b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d404b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d404b6:;
  /* 12d404b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d404b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d404bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d404bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d404c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d404c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d404c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d404cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d404cd jne 0x12d404d1 */
  if (!C.zf) goto L_12d404d1;
  /* 12d404cf jmp 0x12d404ad */
  goto L_12d404ad;
L_12d404d1:;
  /* 12d404d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d404d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d404d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d404da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d404dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d404e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d404e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d404e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d404e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d404ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d404f0 ja 0x12d40840 */
  if ((!C.cf&&!C.zf)) goto L_12d40840;
  /* 12d404f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d404f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d404fb mov al, byte ptr [ecx + 0x12d4091c] */
  AL = (r8((uint32_t)(ECX + 0x12d4091c)));
  /* 12d40501 jmp dword ptr [eax*4 + 0x12d408f0] */
  switch (EAX) {
    case 0: goto L_12d4075f;
    case 1: goto L_12d40643;
    case 2: goto L_12d405ce;
    case 3: goto L_12d40508;
    case 4: goto L_12d40546;
    case 5: goto L_12d405a7;
    case 6: goto L_12d405f5;
    case 7: goto L_12d4061c;
    case 8: goto L_12d4068a;
    case 9: goto L_12d40584;
    case 10: goto L_12d40840;
    default: x86_unimpl("switch@0x12d40501 out of table"); return;
  }
L_12d40508:;
  /* 12d40508 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4050b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d4050e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d40511 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40514 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d40517 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4051b ja 0x12d40541 */
  if ((!C.cf&&!C.zf)) goto L_12d40541;
  /* 12d4051d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d40520 jmp dword ptr [ecx*4 + 0x12d4096f] */
  switch (ECX) {
    case 0: goto L_12d40527;
    case 1: goto L_12d40531;
    case 2: goto L_12d40537;
    case 3: goto L_12d4053d;
    case 4: goto L_12d40565;
    case 5: goto L_12d4056f;
    case 6: goto L_12d40575;
    case 7: goto L_12d4057b;
    default: x86_unimpl("switch@0x12d40520 out of table"); return;
  }
L_12d40527:;
  /* 12d40527 mov dword ptr [0x12d4e7d8], 1 */
  w32((uint32_t)(0x12d4e7d8), (0x1u));
L_12d40531:;
  /* 12d40531 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12d40535 jmp 0x12d40541 */
  goto L_12d40541;
L_12d40537:;
  /* 12d40537 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12d4053b jmp 0x12d40541 */
  goto L_12d40541;
L_12d4053d:;
  /* 12d4053d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12d40541:;
  /* 12d40541 jmp 0x12d40840 */
  goto L_12d40840;
L_12d40546:;
  /* 12d40546 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40549 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d4054c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d4054f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40552 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d40555 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40559 ja 0x12d4057f */
  if ((!C.cf&&!C.zf)) goto L_12d4057f;
  /* 12d4055b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d4055e jmp dword ptr [ecx*4 + 0x12d4097f] */
  switch (ECX) {
    case 0: goto L_12d40565;
    case 1: goto L_12d4056f;
    case 2: goto L_12d40575;
    case 3: goto L_12d4057b;
    default: x86_unimpl("switch@0x12d4055e out of table"); return;
  }
L_12d40565:;
  /* 12d40565 mov dword ptr [0x12d4e7d8], 1 */
  w32((uint32_t)(0x12d4e7d8), (0x1u));
L_12d4056f:;
  /* 12d4056f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12d40573 jmp 0x12d4057f */
  goto L_12d4057f;
L_12d40575:;
  /* 12d40575 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12d40579 jmp 0x12d4057f */
  goto L_12d4057f;
L_12d4057b:;
  /* 12d4057b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12d4057f:;
  /* 12d4057f jmp 0x12d40840 */
  goto L_12d40840;
L_12d40584:;
  /* 12d40584 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40587 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d4058a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4058e je 0x12d40598 */
  if (C.zf) goto L_12d40598;
  /* 12d40590 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40594 je 0x12d4059e */
  if (C.zf) goto L_12d4059e;
  /* 12d40596 jmp 0x12d405a2 */
  goto L_12d405a2;
L_12d40598:;
  /* 12d40598 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12d4059c jmp 0x12d405a2 */
  goto L_12d405a2;
L_12d4059e:;
  /* 12d4059e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12d405a2:;
  /* 12d405a2 jmp 0x12d40840 */
  goto L_12d40840;
L_12d405a7:;
  /* 12d405a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d405aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d405ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d405b1 je 0x12d405bb */
  if (C.zf) goto L_12d405bb;
  /* 12d405b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d405b7 je 0x12d405c5 */
  if (C.zf) goto L_12d405c5;
  /* 12d405b9 jmp 0x12d405c9 */
  goto L_12d405c9;
L_12d405bb:;
  /* 12d405bb mov dword ptr [0x12d4e7d8], 1 */
  w32((uint32_t)(0x12d4e7d8), (0x1u));
L_12d405c5:;
  /* 12d405c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12d405c9:;
  /* 12d405c9 jmp 0x12d40840 */
  goto L_12d40840;
L_12d405ce:;
  /* 12d405ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d405d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d405d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d405d8 je 0x12d405e2 */
  if (C.zf) goto L_12d405e2;
  /* 12d405da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d405de je 0x12d405ec */
  if (C.zf) goto L_12d405ec;
  /* 12d405e0 jmp 0x12d405f0 */
  goto L_12d405f0;
L_12d405e2:;
  /* 12d405e2 mov dword ptr [0x12d4e7d8], 1 */
  w32((uint32_t)(0x12d4e7d8), (0x1u));
L_12d405ec:;
  /* 12d405ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12d405f0:;
  /* 12d405f0 jmp 0x12d40840 */
  goto L_12d40840;
L_12d405f5:;
  /* 12d405f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d405f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12d405fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d405ff je 0x12d40609 */
  if (C.zf) goto L_12d40609;
  /* 12d40601 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40605 je 0x12d40613 */
  if (C.zf) goto L_12d40613;
  /* 12d40607 jmp 0x12d40617 */
  goto L_12d40617;
L_12d40609:;
  /* 12d40609 mov dword ptr [0x12d4e7d8], 1 */
  w32((uint32_t)(0x12d4e7d8), (0x1u));
L_12d40613:;
  /* 12d40613 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12d40617:;
  /* 12d40617 jmp 0x12d40840 */
  goto L_12d40840;
L_12d4061c:;
  /* 12d4061c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4061f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d40622 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40626 je 0x12d40630 */
  if (C.zf) goto L_12d40630;
  /* 12d40628 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4062c je 0x12d4063a */
  if (C.zf) goto L_12d4063a;
  /* 12d4062e jmp 0x12d4063e */
  goto L_12d4063e;
L_12d40630:;
  /* 12d40630 mov dword ptr [0x12d4e7d8], 1 */
  w32((uint32_t)(0x12d4e7d8), (0x1u));
L_12d4063a:;
  /* 12d4063a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12d4063e:;
  /* 12d4063e jmp 0x12d40840 */
  goto L_12d40840;
L_12d40643:;
  /* 12d40643 push 0x12d4a804 */
  push32((uint32_t)(0x12d4a804u));
  /* 12d40648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4064b push ecx */
  push32((uint32_t)(ECX));
  /* 12d4064c call 0x12d40ea0 */
  push32(0x12d40651u); f_12d40ea0();
  /* 12d40651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d40656 jne 0x12d40663 */
  if (!C.zf) goto L_12d40663;
  /* 12d40658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4065b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4065e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d40661 jmp 0x12d40681 */
  goto L_12d40681;
L_12d40663:;
  /* 12d40663 push 0x12d4a800 */
  push32((uint32_t)(0x12d4a800u));
  /* 12d40668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4066b push eax */
  push32((uint32_t)(EAX));
  /* 12d4066c call 0x12d40ea0 */
  push32(0x12d40671u); f_12d40ea0();
  /* 12d40671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d40676 jne 0x12d40681 */
  if (!C.zf) goto L_12d40681;
  /* 12d40678 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4067b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4067e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d40681:;
  /* 12d40681 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12d40685 jmp 0x12d40840 */
  goto L_12d40840;
L_12d4068a:;
  /* 12d4068a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d4068d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40691 jg 0x12d406a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d406a1;
  /* 12d40693 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d40696 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d4069c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d4069f jmp 0x12d406ad */
  goto L_12d406ad;
L_12d406a1:;
  /* 12d406a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d406a4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d406aa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d406ad:;
  /* 12d406ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d406b1 jle 0x12d40754 */
  if ((C.zf||C.sf!=C.of)) goto L_12d40754;
  /* 12d406b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d406ba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d406bd jbe 0x12d40754 */
  if ((C.cf||C.zf)) goto L_12d40754;
  /* 12d406c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d406c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d406c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d406ca mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d406d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d406d2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d406d6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d406dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d406de je 0x12d40717 */
  if (C.zf) goto L_12d40717;
  /* 12d406e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d406e3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d406e6 jbe 0x12d40717 */
  if ((C.cf||C.zf)) goto L_12d40717;
  /* 12d406e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d406eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d406ed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d406f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d406f2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d406f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d406f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d406f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d406fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d406ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d40701 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d40704 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40707 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d4070a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4070d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d4070f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40712 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40715 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d40717:;
  /* 12d40717 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4071a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d4071c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d4071f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d40721 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d40723 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40726 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d40728 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4072b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4072e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d40730 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d40733 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40736 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d40739 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4073c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d4073e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40741 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40744 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d40746 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40749 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d4074c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d4074f jmp 0x12d406ad */
  goto L_12d406ad;
L_12d40754:;
  /* 12d40754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40757 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d4075a jmp 0x12d40476 */
  goto L_12d40476;
L_12d4075f:;
  /* 12d4075f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40762 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d40765 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d40767 je 0x12d40832 */
  if (C.zf) goto L_12d40832;
  /* 12d4076d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40770 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40773 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d40776:;
  /* 12d40776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40779 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d4077c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d4077e je 0x12d40830 */
  if (C.zf) goto L_12d40830;
  /* 12d40784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40787 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4078a je 0x12d40830 */
  if (C.zf) goto L_12d40830;
  /* 12d40790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40793 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d40796 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40799 jne 0x12d407a9 */
  if (!C.zf) goto L_12d407a9;
  /* 12d4079b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4079e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d407a1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d407a4 jmp 0x12d40830 */
  goto L_12d40830;
L_12d407a9:;
  /* 12d407a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d407ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d407ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d407b0 mov edx, dword ptr [0x12d4ccb8] */
  EDX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d407b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d407b8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d407bc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d407c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d407c3 je 0x12d407fc */
  if (C.zf) goto L_12d407fc;
  /* 12d407c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d407c8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d407cb jbe 0x12d407fc */
  if ((C.cf||C.zf)) goto L_12d407fc;
  /* 12d407cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d407d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d407d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d407d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d407d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d407d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d407dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d407de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d407e1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d407e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d407e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d407e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d407ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d407ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d407f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d407f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d407f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d407fa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d407fc:;
  /* 12d407fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d407ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d40801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40804 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d40806 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d40808 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4080b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d4080d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40813 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d40815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4081b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d4081e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40821 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d40823 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40826 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40829 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d4082b jmp 0x12d40776 */
  goto L_12d40776;
L_12d40830:;
  /* 12d40830 jmp 0x12d4083b */
  goto L_12d4083b;
L_12d40832:;
  /* 12d40832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40835 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40838 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d4083b:;
  /* 12d4083b jmp 0x12d40476 */
  goto L_12d40476;
L_12d40840:;
  /* 12d40840 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d40844 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d40846 je 0x12d4086c */
  if (C.zf) goto L_12d4086c;
  /* 12d40848 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d4084b push edx */
  push32((uint32_t)(EDX));
  /* 12d4084c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4084f push eax */
  push32((uint32_t)(EAX));
  /* 12d40850 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40853 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40854 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40857 push edx */
  push32((uint32_t)(EDX));
  /* 12d40858 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d4085b push eax */
  push32((uint32_t)(EAX));
  /* 12d4085c call 0x12d3fca0 */
  push32(0x12d40861u); f_12d3fca0();
  /* 12d40861 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d40867 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d4086a jmp 0x12d408e7 */
  goto L_12d408e7;
L_12d4086c:;
  /* 12d4086c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4086f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40871 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d40873 mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d40879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d4087b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d4087f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d40885 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d40887 je 0x12d408b8 */
  if (C.zf) goto L_12d408b8;
  /* 12d40889 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4088c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d4088e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40891 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d40893 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d40895 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40898 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d4089a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4089d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d408a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d408a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d408a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d408a8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d408ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d408ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d408b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d408b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d408b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d408b8:;
  /* 12d408b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d408bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d408bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d408c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d408c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d408c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d408c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d408c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d408cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d408cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d408d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d408d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d408d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d408da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d408dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d408df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d408e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d408e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d408e7:;
  /* 12d408e7 jmp 0x12d40476 */
  goto L_12d40476;
L_12d408ec:;
  /* 12d408ec mov esp, ebp */
  ESP = (EBP);
  /* 12d408ee pop ebp */
  EBP = (pop32());
  /* 12d408ef ret  */
  ESPCHK(0x12d40470u, _esp0);
  ESP += 4; return;
}

/* FUN_10010990 @ 0x12d40990 (650 bytes, 178 insns) */
void f_12d40990(void) {
  FTRACE(0x12d40990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40990 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40991 mov ebp, esp */
  EBP = (ESP);
  /* 12d40993 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40999 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4099d jne 0x12d40af9 */
  if (!C.zf) goto L_12d40af9;
  /* 12d409a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d409a6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12d409ac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12d409b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d409b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d409bc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12d409c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d409c8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d409ce push edx */
  push32((uint32_t)(EDX));
  /* 12d409cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d409d2 push eax */
  push32((uint32_t)(EAX));
  /* 12d409d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d409d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d409d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d409da push edx */
  push32((uint32_t)(EDX));
  /* 12d409db call 0x12d41db0 */
  push32(0x12d409e0u); f_12d41db0();
  /* 12d409e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d409e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d409e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d409ea jne 0x12d40a7f */
  if (!C.zf) goto L_12d40a7f;
  /* 12d409f0 call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d409f6u);
  /* 12d409f6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d409f9 je 0x12d40a00 */
  if (C.zf) goto L_12d40a00;
  /* 12d409fb jmp 0x12d40add */
  goto L_12d40add;
L_12d40a00:;
  /* 12d40a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40a06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40a09 push eax */
  push32((uint32_t)(EAX));
  /* 12d40a0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40a0d push ecx */
  push32((uint32_t)(ECX));
  /* 12d40a0e call 0x12d41db0 */
  push32(0x12d40a13u); f_12d41db0();
  /* 12d40a13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40a16 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12d40a1c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40a23 jne 0x12d40a2a */
  if (!C.zf) goto L_12d40a2a;
  /* 12d40a25 jmp 0x12d40add */
  goto L_12d40add;
L_12d40a2a:;
  /* 12d40a2a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12d40a2c push 0x12d4a80c */
  push32((uint32_t)(0x12d4a80cu));
  /* 12d40a31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d40a33 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d40a39 push edx */
  push32((uint32_t)(EDX));
  /* 12d40a3a call 0x12d327d0 */
  push32(0x12d40a3fu); f_12d327d0();
  /* 12d40a3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40a42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d40a45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40a49 jne 0x12d40a50 */
  if (!C.zf) goto L_12d40a50;
  /* 12d40a4b jmp 0x12d40add */
  goto L_12d40add;
L_12d40a50:;
  /* 12d40a50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d40a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40a59 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d40a5f push eax */
  push32((uint32_t)(EAX));
  /* 12d40a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40a64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40a67 push edx */
  push32((uint32_t)(EDX));
  /* 12d40a68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40a6b push eax */
  push32((uint32_t)(EAX));
  /* 12d40a6c call 0x12d41db0 */
  push32(0x12d40a71u); f_12d41db0();
  /* 12d40a71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40a74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d40a77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40a7b jne 0x12d40a7f */
  if (!C.zf) goto L_12d40a7f;
  /* 12d40a7d jmp 0x12d40add */
  goto L_12d40add;
L_12d40a7f:;
  /* 12d40a7f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12d40a81 push 0x12d4a80c */
  push32((uint32_t)(0x12d4a80cu));
  /* 12d40a86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d40a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d40a8b push ecx */
  push32((uint32_t)(ECX));
  /* 12d40a8c call 0x12d327d0 */
  push32(0x12d40a91u); f_12d327d0();
  /* 12d40a91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40a94 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d40a9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d40a9c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d40aa2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40aa5 jne 0x12d40aa9 */
  if (!C.zf) goto L_12d40aa9;
  /* 12d40aa7 jmp 0x12d40add */
  goto L_12d40add;
L_12d40aa9:;
  /* 12d40aa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d40aac push ecx */
  push32((uint32_t)(ECX));
  /* 12d40aad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40ab0 push edx */
  push32((uint32_t)(EDX));
  /* 12d40ab1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d40ab7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d40ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40aba call 0x12d35ff0 */
  push32(0x12d40abfu); f_12d35ff0();
  /* 12d40abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40ac2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40ac6 je 0x12d40ad6 */
  if (C.zf) goto L_12d40ad6;
  /* 12d40ac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d40aca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40acd push edx */
  push32((uint32_t)(EDX));
  /* 12d40ace call 0x12d33260 */
  push32(0x12d40ad3u); f_12d33260();
  /* 12d40ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d40ad6:;
  /* 12d40ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40ad8 jmp 0x12d40c16 */
  goto L_12d40c16;
L_12d40add:;
  /* 12d40add cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40ae1 je 0x12d40af1 */
  if (C.zf) goto L_12d40af1;
  /* 12d40ae3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d40ae5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d40ae8 push eax */
  push32((uint32_t)(EAX));
  /* 12d40ae9 call 0x12d33260 */
  push32(0x12d40aeeu); f_12d33260();
  /* 12d40aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d40af1:;
  /* 12d40af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d40af4 jmp 0x12d40c16 */
  goto L_12d40c16;
L_12d40af9:;
  /* 12d40af9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40afd jne 0x12d40c13 */
  if (!C.zf) goto L_12d40c13;
  /* 12d40b03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12d40b0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40b10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12d40b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40b18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d40b1e push edx */
  push32((uint32_t)(EDX));
  /* 12d40b1f push 0x12d4e6f0 */
  push32((uint32_t)(0x12d4e6f0u));
  /* 12d40b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40b27 push eax */
  push32((uint32_t)(EAX));
  /* 12d40b28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40b2b push ecx */
  push32((uint32_t)(ECX));
  /* 12d40b2c call 0x12d41c10 */
  push32(0x12d40b31u); f_12d41c10();
  /* 12d40b31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d40b36 jne 0x12d40b40 */
  if (!C.zf) goto L_12d40b40;
  /* 12d40b38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d40b3b jmp 0x12d40c16 */
  goto L_12d40c16;
L_12d40b40:;
  /* 12d40b40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d40b46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d40b49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12d40b53 jmp 0x12d40b64 */
  goto L_12d40b64;
L_12d40b55:;
  /* 12d40b55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d40b5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40b5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12d40b64:;
  /* 12d40b64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40b6b jge 0x12d40c0f */
  if ((C.sf==C.of)) goto L_12d40c0f;
  /* 12d40b71 cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40b78 jle 0x12d40bab */
  if ((C.zf||C.sf!=C.of)) goto L_12d40bab;
  /* 12d40b7a push 4 */
  push32((uint32_t)(0x4u));
  /* 12d40b7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d40b82 mov dl, byte ptr [ecx*2 + 0x12d4e6f0] */
  DL = (r8((uint32_t)(ECX*2 + 0x12d4e6f0)));
  /* 12d40b89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12d40b8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d40b95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d40b9a push eax */
  push32((uint32_t)(EAX));
  /* 12d40b9b call 0x12d387e0 */
  push32(0x12d40ba0u); f_12d387e0();
  /* 12d40ba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40ba3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12d40ba9 jmp 0x12d40bde */
  goto L_12d40bde;
L_12d40bab:;
  /* 12d40bab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d40bb1 mov dl, byte ptr [ecx*2 + 0x12d4e6f0] */
  DL = (r8((uint32_t)(ECX*2 + 0x12d4e6f0)));
  /* 12d40bb8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12d40bbe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d40bc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d40bc9 mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d40bcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d40bd1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d40bd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d40bd8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12d40bde:;
  /* 12d40bde cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40be5 je 0x12d40c08 */
  if (C.zf) goto L_12d40c08;
  /* 12d40be7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d40bed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d40bf0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d40bf3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12d40bfa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d40bfe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d40c04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d40c06 jmp 0x12d40c0a */
  goto L_12d40c0a;
L_12d40c08:;
  /* 12d40c08 jmp 0x12d40c0f */
  goto L_12d40c0f;
L_12d40c0a:;
  /* 12d40c0a jmp 0x12d40b55 */
  goto L_12d40b55;
L_12d40c0f:;
  /* 12d40c0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40c11 jmp 0x12d40c16 */
  goto L_12d40c16;
L_12d40c13:;
  /* 12d40c13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d40c16:;
  /* 12d40c16 mov esp, ebp */
  ESP = (EBP);
  /* 12d40c18 pop ebp */
  EBP = (pop32());
  /* 12d40c19 ret  */
  ESPCHK(0x12d40990u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x12d40c20 (10 bytes, 5 insns) */
void f_12d40c20(void) {
  FTRACE(0x12d40c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40c21 mov ebp, esp */
  EBP = (ESP);
  /* 12d40c23 mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d40c28 pop ebp */
  EBP = (pop32());
  /* 12d40c29 ret  */
  ESPCHK(0x12d40c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x12d40c30 (575 bytes, 196 insns) */
void f_12d40c30(void) {
  FTRACE(0x12d40c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40c31 mov ebp, esp */
  EBP = (ESP);
  /* 12d40c33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d40c35 push 0x12d4a818 */
  push32((uint32_t)(0x12d4a818u));
  /* 12d40c3a push 0x12d3b8d8 */
  push32((uint32_t)(0x12d3b8d8u));
  /* 12d40c3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d40c45 push eax */
  push32((uint32_t)(EAX));
  /* 12d40c46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d40c4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40c50 push ebx */
  push32((uint32_t)(EBX));
  /* 12d40c51 push esi */
  push32((uint32_t)(ESI));
  /* 12d40c52 push edi */
  push32((uint32_t)(EDI));
  /* 12d40c53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d40c56 cmp dword ptr [0x12d4e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40c5d jne 0x12d40cae */
  if (!C.zf) goto L_12d40cae;
  /* 12d40c5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12d40c62 push eax */
  push32((uint32_t)(EAX));
  /* 12d40c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d40c65 push 0x12d49f4c */
  push32((uint32_t)(0x12d49f4cu));
  /* 12d40c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d40c6c call dword ptr [0x12d50300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50300))), 0x12d40c72u);
  /* 12d40c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d40c74 je 0x12d40c82 */
  if (C.zf) goto L_12d40c82;
  /* 12d40c76 mov dword ptr [0x12d4e6fc], 1 */
  w32((uint32_t)(0x12d4e6fc), (0x1u));
  /* 12d40c80 jmp 0x12d40cae */
  goto L_12d40cae;
L_12d40c82:;
  /* 12d40c82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12d40c85 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d40c88 push 0x12d49f48 */
  push32((uint32_t)(0x12d49f48u));
  /* 12d40c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d40c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40c91 call dword ptr [0x12d502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502fc))), 0x12d40c97u);
  /* 12d40c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d40c99 je 0x12d40ca7 */
  if (C.zf) goto L_12d40ca7;
  /* 12d40c9b mov dword ptr [0x12d4e6fc], 2 */
  w32((uint32_t)(0x12d4e6fc), (0x2u));
  /* 12d40ca5 jmp 0x12d40cae */
  goto L_12d40cae;
L_12d40ca7:;
  /* 12d40ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40ca9 jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40cae:;
  /* 12d40cae cmp dword ptr [0x12d4e6fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40cb5 jne 0x12d40cd2 */
  if (!C.zf) goto L_12d40cd2;
  /* 12d40cb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40cba push edx */
  push32((uint32_t)(EDX));
  /* 12d40cbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40cbe push eax */
  push32((uint32_t)(EAX));
  /* 12d40cbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40cc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40cc6 push edx */
  push32((uint32_t)(EDX));
  /* 12d40cc7 call dword ptr [0x12d50300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50300))), 0x12d40ccdu);
  /* 12d40ccd jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40cd2:;
  /* 12d40cd2 cmp dword ptr [0x12d4e6fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40cd9 jne 0x12d40e87 */
  if (!C.zf) goto L_12d40e87;
  /* 12d40cdf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40ce3 jne 0x12d40ced */
  if (!C.zf) goto L_12d40ced;
  /* 12d40ce5 mov eax, dword ptr [0x12d4e670] */
  EAX = (r32((uint32_t)(0x12d4e670)));
  /* 12d40cea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12d40ced:;
  /* 12d40ced push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40cef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40cf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40cf9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40cfc push edx */
  push32((uint32_t)(EDX));
  /* 12d40cfd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d40d02 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d40d05 push eax */
  push32((uint32_t)(EAX));
  /* 12d40d06 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d40d0cu);
  /* 12d40d0c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d40d0f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40d13 jne 0x12d40d1c */
  if (!C.zf) goto L_12d40d1c;
  /* 12d40d15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40d17 jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40d1c:;
  /* 12d40d1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d40d23 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d40d26 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40d29 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d40d2b call 0x12d35970 */
  push32(0x12d40d30u); f_12d35970();
  /* 12d40d30 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12d40d33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d40d36 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d40d39 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d40d3c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d40d3f push edx */
  push32((uint32_t)(EDX));
  /* 12d40d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40d42 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d40d45 push eax */
  push32((uint32_t)(EAX));
  /* 12d40d46 call 0x12d36540 */
  push32(0x12d40d4bu); f_12d36540();
  /* 12d40d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40d4e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d40d55 jmp 0x12d40d6e */
  goto L_12d40d6e;
  /* 12d40d57 mov eax, 1 */
  EAX = (0x1u);
  /* 12d40d5c ret  */
  ESPCHK(0x12d40c30u, _esp0);
  ESP += 4; return;
  /* 12d40d5d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d40d60 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12d40d67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d40d6e:;
  /* 12d40d6e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40d72 jne 0x12d40d7b */
  if (!C.zf) goto L_12d40d7b;
  /* 12d40d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40d76 jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40d7b:;
  /* 12d40d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40d7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d40d82 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40d83 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d40d86 push edx */
  push32((uint32_t)(EDX));
  /* 12d40d87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40d8a push eax */
  push32((uint32_t)(EAX));
  /* 12d40d8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40d8e push ecx */
  push32((uint32_t)(ECX));
  /* 12d40d8f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d40d94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d40d97 push edx */
  push32((uint32_t)(EDX));
  /* 12d40d98 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d40d9eu);
  /* 12d40d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d40da0 jne 0x12d40da9 */
  if (!C.zf) goto L_12d40da9;
  /* 12d40da2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40da4 jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40da9:;
  /* 12d40da9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d40db0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d40db3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12d40db7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40dba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d40dbc call 0x12d35970 */
  push32(0x12d40dc1u); f_12d35970();
  /* 12d40dc1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12d40dc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d40dc7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d40dca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d40dcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d40dd4 jmp 0x12d40ded */
  goto L_12d40ded;
  /* 12d40dd6 mov eax, 1 */
  EAX = (0x1u);
  /* 12d40ddb ret  */
  ESPCHK(0x12d40c30u, _esp0);
  ESP += 4; return;
  /* 12d40ddc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d40ddf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d40de6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d40ded:;
  /* 12d40ded cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40df1 jne 0x12d40dfa */
  if (!C.zf) goto L_12d40dfa;
  /* 12d40df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40df5 jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40dfa:;
  /* 12d40dfa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40dfe jne 0x12d40e09 */
  if (!C.zf) goto L_12d40e09;
  /* 12d40e00 mov edx, dword ptr [0x12d4e660] */
  EDX = (r32((uint32_t)(0x12d4e660)));
  /* 12d40e06 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12d40e09:;
  /* 12d40e09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40e0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d40e0f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12d40e15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40e18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d40e1b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12d40e22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d40e25 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40e26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d40e29 push edx */
  push32((uint32_t)(EDX));
  /* 12d40e2a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d40e2d push eax */
  push32((uint32_t)(EAX));
  /* 12d40e2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40e31 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40e32 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d40e35 push edx */
  push32((uint32_t)(EDX));
  /* 12d40e36 call dword ptr [0x12d502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502fc))), 0x12d40e3cu);
  /* 12d40e3c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d40e3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40e42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d40e45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d40e47 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12d40e4c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40e52 je 0x12d40e68 */
  if (C.zf) goto L_12d40e68;
  /* 12d40e54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40e57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d40e5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d40e5c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d40e60 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40e66 je 0x12d40e6c */
  if (C.zf) goto L_12d40e6c;
L_12d40e68:;
  /* 12d40e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40e6a jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40e6c:;
  /* 12d40e6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40e6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d40e71 push eax */
  push32((uint32_t)(EAX));
  /* 12d40e72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d40e75 push ecx */
  push32((uint32_t)(ECX));
  /* 12d40e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d40e79 push edx */
  push32((uint32_t)(EDX));
  /* 12d40e7a call 0x12d3a6c0 */
  push32(0x12d40e7fu); f_12d3a6c0();
  /* 12d40e7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40e82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d40e85 jmp 0x12d40e89 */
  goto L_12d40e89;
L_12d40e87:;
  /* 12d40e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d40e89:;
  /* 12d40e89 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12d40e8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d40e8f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d40e96 pop edi */
  EDI = (pop32());
  /* 12d40e97 pop esi */
  ESI = (pop32());
  /* 12d40e98 pop ebx */
  EBX = (pop32());
  /* 12d40e99 mov esp, ebp */
  ESP = (EBP);
  /* 12d40e9b pop ebp */
  EBP = (pop32());
  /* 12d40e9c ret  */
  ESPCHK(0x12d40c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ea0 @ 0x12d40ea0 (208 bytes, 85 insns) */
void f_12d40ea0(void) {
  FTRACE(0x12d40ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12d40ea3 push edi */
  push32((uint32_t)(EDI));
  /* 12d40ea4 push esi */
  push32((uint32_t)(ESI));
  /* 12d40ea5 push ebx */
  push32((uint32_t)(EBX));
  /* 12d40ea6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40ea9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40eac lea eax, [0x12d4e658] */
  EAX = ((uint32_t)(0x12d4e658));
  /* 12d40eb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40eb6 jne 0x12d40ef3 */
  if (!C.zf) goto L_12d40ef3;
  /* 12d40eb8 mov al, 0xff */
  AL = (0xffu);
  /* 12d40eba mov edi, edi */
  EDI = (EDI);
L_12d40ebc:;
  /* 12d40ebc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d40ebe je 0x12d40eee */
  if (C.zf) goto L_12d40eee;
  /* 12d40ec0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d40ec2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d40ec3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12d40ec5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d40ec6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40ec8 je 0x12d40ebc */
  if (C.zf) goto L_12d40ebc;
  /* 12d40eca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d40ecc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40ece sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d40ed0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d40ed3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d40ed5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d40ed7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12d40ed9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d40edb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40edd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d40edf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d40ee2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d40ee4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d40ee6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40ee8 je 0x12d40ebc */
  if (C.zf) goto L_12d40ebc;
  /* 12d40eea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d40eec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12d40eee:;
  /* 12d40eee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12d40ef1 jmp 0x12d40f6b */
  goto L_12d40f6b;
L_12d40ef3:;
  /* 12d40ef3 lock inc dword ptr [0x12d4e7ec] */
  x86_unimpl("lock inc @ 0x12d40ef3");
  /* 12d40efa cmp dword ptr [0x12d4e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40f01 jg 0x12d40f07 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d40f07;
  /* 12d40f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40f05 jmp 0x12d40f1c */
  goto L_12d40f1c;
L_12d40f07:;
  /* 12d40f07 lock dec dword ptr [0x12d4e7ec] */
  x86_unimpl("lock dec @ 0x12d40f07");
  /* 12d40f0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d40f10 call 0x12d361d0 */
  push32(0x12d40f15u); f_12d361d0();
  /* 12d40f15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12d40f1c:;
  /* 12d40f1c mov eax, 0xff */
  EAX = (0xffu);
  /* 12d40f21 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d40f23 nop  */
  /* nop */
L_12d40f24:;
  /* 12d40f24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d40f26 je 0x12d40f4f */
  if (C.zf) goto L_12d40f4f;
  /* 12d40f28 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d40f2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d40f2b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12d40f2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d40f2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40f30 je 0x12d40f24 */
  if (C.zf) goto L_12d40f24;
  /* 12d40f32 push eax */
  push32((uint32_t)(EAX));
  /* 12d40f33 push ebx */
  push32((uint32_t)(EBX));
  /* 12d40f34 call 0x12d42010 */
  push32(0x12d40f39u); f_12d42010();
  /* 12d40f39 mov ebx, eax */
  EBX = (EAX);
  /* 12d40f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40f3e call 0x12d42010 */
  push32(0x12d40f43u); f_12d42010();
  /* 12d40f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d40f46 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40f48 je 0x12d40f24 */
  if (C.zf) goto L_12d40f24;
  /* 12d40f4a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d40f4c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d40f4f:;
  /* 12d40f4f mov ebx, eax */
  EBX = (EAX);
  /* 12d40f51 pop eax */
  EAX = (pop32());
  /* 12d40f52 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d40f54 jne 0x12d40f5f */
  if (!C.zf) goto L_12d40f5f;
  /* 12d40f56 lock dec dword ptr [0x12d4e7ec] */
  x86_unimpl("lock dec @ 0x12d40f56");
  /* 12d40f5d jmp 0x12d40f69 */
  goto L_12d40f69;
L_12d40f5f:;
  /* 12d40f5f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d40f61 call 0x12d36270 */
  push32(0x12d40f66u); f_12d36270();
  /* 12d40f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d40f69:;
  /* 12d40f69 mov eax, ebx */
  EAX = (EBX);
L_12d40f6b:;
  /* 12d40f6b pop ebx */
  EBX = (pop32());
  /* 12d40f6c pop esi */
  ESI = (pop32());
  /* 12d40f6d pop edi */
  EDI = (pop32());
  /* 12d40f6e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d40f6f ret  */
  ESPCHK(0x12d40ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f70 @ 0x12d40f70 (257 bytes, 103 insns) */
void f_12d40f70(void) {
  FTRACE(0x12d40f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d40f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d40f71 mov ebp, esp */
  EBP = (ESP);
  /* 12d40f73 push edi */
  push32((uint32_t)(EDI));
  /* 12d40f74 push esi */
  push32((uint32_t)(ESI));
  /* 12d40f75 push ebx */
  push32((uint32_t)(EBX));
  /* 12d40f76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d40f79 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d40f7b je 0x12d4106a */
  if (C.zf) goto L_12d4106a;
  /* 12d40f81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d40f84 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d40f87 lea eax, [0x12d4e658] */
  EAX = ((uint32_t)(0x12d4e658));
  /* 12d40f8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40f91 jne 0x12d40fe1 */
  if (!C.zf) goto L_12d40fe1;
  /* 12d40f93 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12d40f95 mov bl, 0x5a */
  BL = (0x5au);
  /* 12d40f97 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12d40f99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d40f9c:;
  /* 12d40f9c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12d40f9e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d40fa0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12d40fa2 je 0x12d40fc5 */
  if (C.zf) goto L_12d40fc5;
  /* 12d40fa4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d40fa6 je 0x12d40fc5 */
  if (C.zf) goto L_12d40fc5;
  /* 12d40fa8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d40fa9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d40faa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40fac jb 0x12d40fb4 */
  if (C.cf) goto L_12d40fb4;
  /* 12d40fae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40fb0 ja 0x12d40fb4 */
  if ((!C.cf&&!C.zf)) goto L_12d40fb4;
  /* 12d40fb2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12d40fb4:;
  /* 12d40fb4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40fb6 jb 0x12d40fbe */
  if (C.cf) goto L_12d40fbe;
  /* 12d40fb8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40fba ja 0x12d40fbe */
  if ((!C.cf&&!C.zf)) goto L_12d40fbe;
  /* 12d40fbc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12d40fbe:;
  /* 12d40fbe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40fc0 jne 0x12d40fcf */
  if (!C.zf) goto L_12d40fcf;
  /* 12d40fc2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d40fc3 jne 0x12d40f9c */
  if (!C.zf) goto L_12d40f9c;
L_12d40fc5:;
  /* 12d40fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d40fc7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d40fc9 je 0x12d4106a */
  if (C.zf) goto L_12d4106a;
L_12d40fcf:;
  /* 12d40fcf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12d40fd4 jb 0x12d4106a */
  if (C.cf) goto L_12d4106a;
  /* 12d40fda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d40fdc jmp 0x12d4106a */
  goto L_12d4106a;
L_12d40fe1:;
  /* 12d40fe1 lock inc dword ptr [0x12d4e7ec] */
  x86_unimpl("lock inc @ 0x12d40fe1");
  /* 12d40fe8 cmp dword ptr [0x12d4e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d40fef jg 0x12d40ff5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d40ff5;
  /* 12d40ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d40ff3 jmp 0x12d4100e */
  goto L_12d4100e;
L_12d40ff5:;
  /* 12d40ff5 lock dec dword ptr [0x12d4e7ec] */
  x86_unimpl("lock dec @ 0x12d40ff5");
  /* 12d40ffc mov ebx, ecx */
  EBX = (ECX);
  /* 12d40ffe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d41000 call 0x12d361d0 */
  push32(0x12d41005u); f_12d361d0();
  /* 12d41005 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12d4100c mov ecx, ebx */
  ECX = (EBX);
L_12d4100e:;
  /* 12d4100e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41010 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d41012 mov edi, edi */
  EDI = (EDI);
L_12d41014:;
  /* 12d41014 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d41016 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41018 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12d4101a je 0x12d4103f */
  if (C.zf) goto L_12d4103f;
  /* 12d4101c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d4101e je 0x12d4103f */
  if (C.zf) goto L_12d4103f;
  /* 12d41020 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d41021 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d41022 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41023 push eax */
  push32((uint32_t)(EAX));
  /* 12d41024 push ebx */
  push32((uint32_t)(EBX));
  /* 12d41025 call 0x12d42010 */
  push32(0x12d4102au); f_12d42010();
  /* 12d4102a mov ebx, eax */
  EBX = (EAX);
  /* 12d4102c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4102f call 0x12d42010 */
  push32(0x12d41034u); f_12d42010();
  /* 12d41034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41037 pop ecx */
  ECX = (pop32());
  /* 12d41038 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4103a jne 0x12d41045 */
  if (!C.zf) goto L_12d41045;
  /* 12d4103c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d4103d jne 0x12d41014 */
  if (!C.zf) goto L_12d41014;
L_12d4103f:;
  /* 12d4103f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d41041 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41043 je 0x12d4104e */
  if (C.zf) goto L_12d4104e;
L_12d41045:;
  /* 12d41045 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12d4104a jb 0x12d4104e */
  if (C.cf) goto L_12d4104e;
  /* 12d4104c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12d4104e:;
  /* 12d4104e pop eax */
  EAX = (pop32());
  /* 12d4104f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41051 jne 0x12d4105c */
  if (!C.zf) goto L_12d4105c;
  /* 12d41053 lock dec dword ptr [0x12d4e7ec] */
  x86_unimpl("lock dec @ 0x12d41053");
  /* 12d4105a jmp 0x12d4106a */
  goto L_12d4106a;
L_12d4105c:;
  /* 12d4105c mov ebx, ecx */
  EBX = (ECX);
  /* 12d4105e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d41060 call 0x12d36270 */
  push32(0x12d41065u); f_12d36270();
  /* 12d41065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41068 mov ecx, ebx */
  ECX = (EBX);
L_12d4106a:;
  /* 12d4106a mov eax, ecx */
  EAX = (ECX);
  /* 12d4106c pop ebx */
  EBX = (pop32());
  /* 12d4106d pop esi */
  ESI = (pop32());
  /* 12d4106e pop edi */
  EDI = (pop32());
  /* 12d4106f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d41070 ret  */
  ESPCHK(0x12d40f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x12d41080 (255 bytes, 88 insns) */
void f_12d41080(void) {
  FTRACE(0x12d41080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41080 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41081 mov ebp, esp */
  EBP = (ESP);
  /* 12d41083 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12d41086:;
  /* 12d41086 cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4108d jle 0x12d410a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12d410a6;
  /* 12d4108f push 8 */
  push32((uint32_t)(0x8u));
  /* 12d41091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41094 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d41096 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d41098 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41099 call 0x12d387e0 */
  push32(0x12d4109eu); f_12d387e0();
  /* 12d4109e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d410a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d410a4 jmp 0x12d410bf */
  goto L_12d410bf;
L_12d410a6:;
  /* 12d410a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d410a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d410ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d410ad mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d410b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d410b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d410b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d410bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d410bf:;
  /* 12d410bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d410c3 je 0x12d410d0 */
  if (C.zf) goto L_12d410d0;
  /* 12d410c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d410c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d410cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d410ce jmp 0x12d41086 */
  goto L_12d41086;
L_12d410d0:;
  /* 12d410d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d410d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d410d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d410d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d410da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d410dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d410e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d410e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d410e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d410e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d410ed je 0x12d410f5 */
  if (C.zf) goto L_12d410f5;
  /* 12d410ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d410f3 jne 0x12d41108 */
  if (!C.zf) goto L_12d41108;
L_12d410f5:;
  /* 12d410f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d410f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d410fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d410fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d410ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41105 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d41108:;
  /* 12d41108 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d4110f:;
  /* 12d4110f cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41116 jle 0x12d4112b */
  if ((C.zf||C.sf!=C.of)) goto L_12d4112b;
  /* 12d41118 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d4111a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4111d push edx */
  push32((uint32_t)(EDX));
  /* 12d4111e call 0x12d387e0 */
  push32(0x12d41123u); f_12d387e0();
  /* 12d41123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41126 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d41129 jmp 0x12d41140 */
  goto L_12d41140;
L_12d4112b:;
  /* 12d4112b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4112e mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d41134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41136 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d4113a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d4113d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d41140:;
  /* 12d41140 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41144 je 0x12d4116b */
  if (C.zf) goto L_12d4116b;
  /* 12d41146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41149 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d4114c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4114f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12d41153 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d41156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41159 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4115b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d4115d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d41160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41163 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41166 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d41169 jmp 0x12d4110f */
  goto L_12d4110f;
L_12d4116b:;
  /* 12d4116b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4116f jne 0x12d41178 */
  if (!C.zf) goto L_12d41178;
  /* 12d41171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41174 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d41176 jmp 0x12d4117b */
  goto L_12d4117b;
L_12d41178:;
  /* 12d41178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d4117b:;
  /* 12d4117b mov esp, ebp */
  ESP = (EBP);
  /* 12d4117d pop ebp */
  EBP = (pop32());
  /* 12d4117e ret  */
  ESPCHK(0x12d41080u, _esp0);
  ESP += 4; return;
}

/* FUN_10011180 @ 0x12d41180 (17 bytes, 8 insns) */
void f_12d41180(void) {
  FTRACE(0x12d41180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41180 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41181 mov ebp, esp */
  EBP = (ESP);
  /* 12d41183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41186 push eax */
  push32((uint32_t)(EAX));
  /* 12d41187 call 0x12d41080 */
  push32(0x12d4118cu); f_12d41080();
  /* 12d4118c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4118f pop ebp */
  EBP = (pop32());
  /* 12d41190 ret  */
  ESPCHK(0x12d41180u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x12d411a0 (297 bytes, 106 insns) */
void f_12d411a0(void) {
  FTRACE(0x12d411a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d411a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d411a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d411a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d411a6 push esi */
  push32((uint32_t)(ESI));
L_12d411a7:;
  /* 12d411a7 cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d411ae jle 0x12d411c7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d411c7;
  /* 12d411b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d411b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d411b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d411b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d411b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d411ba call 0x12d387e0 */
  push32(0x12d411bfu); f_12d387e0();
  /* 12d411bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d411c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d411c5 jmp 0x12d411e0 */
  goto L_12d411e0;
L_12d411c7:;
  /* 12d411c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d411ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d411cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d411ce mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d411d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d411d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d411da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d411dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d411e0:;
  /* 12d411e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d411e4 je 0x12d411f1 */
  if (C.zf) goto L_12d411f1;
  /* 12d411e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d411e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d411ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d411ef jmp 0x12d411a7 */
  goto L_12d411a7;
L_12d411f1:;
  /* 12d411f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d411f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d411f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d411f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d411fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d411fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41201 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d41204 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d41207 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d4120a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4120e je 0x12d41216 */
  if (C.zf) goto L_12d41216;
  /* 12d41210 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41214 jne 0x12d41229 */
  if (!C.zf) goto L_12d41229;
L_12d41216:;
  /* 12d41216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4121b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d4121d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d41220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41223 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41226 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d41229:;
  /* 12d41229 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d41230 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d41237:;
  /* 12d41237 cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4123e jle 0x12d41253 */
  if ((C.zf||C.sf!=C.of)) goto L_12d41253;
  /* 12d41240 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d41242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d41245 push edx */
  push32((uint32_t)(EDX));
  /* 12d41246 call 0x12d387e0 */
  push32(0x12d4124bu); f_12d387e0();
  /* 12d4124b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4124e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d41251 jmp 0x12d41268 */
  goto L_12d41268;
L_12d41253:;
  /* 12d41253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d41256 mov ecx, dword ptr [0x12d4ccb8] */
  ECX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d4125c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d4125e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d41262 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d41265 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12d41268:;
  /* 12d41268 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4126c je 0x12d412a9 */
  if (C.zf) goto L_12d412a9;
  /* 12d4126e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41270 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d41272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41275 push eax */
  push32((uint32_t)(EAX));
  /* 12d41276 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41279 push ecx */
  push32((uint32_t)(ECX));
  /* 12d4127a call 0x12d42140 */
  push32(0x12d4127fu); f_12d42140();
  /* 12d4127f mov ecx, eax */
  ECX = (EAX);
  /* 12d41281 mov esi, edx */
  ESI = (EDX);
  /* 12d41283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d41286 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41289 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d4128a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4128c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4128e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d41291 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12d41294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41299 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d4129b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d4129e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d412a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d412a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d412a7 jmp 0x12d41237 */
  goto L_12d41237;
L_12d412a9:;
  /* 12d412a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d412ad jne 0x12d412be */
  if (!C.zf) goto L_12d412be;
  /* 12d412af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d412b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d412b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d412b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d412ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d412bc jmp 0x12d412c4 */
  goto L_12d412c4;
L_12d412be:;
  /* 12d412be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d412c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12d412c4:;
  /* 12d412c4 pop esi */
  ESI = (pop32());
  /* 12d412c5 mov esp, ebp */
  ESP = (EBP);
  /* 12d412c7 pop ebp */
  EBP = (pop32());
  /* 12d412c8 ret  */
  ESPCHK(0x12d411a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x12d412d0 (61 bytes, 18 insns) */
void f_12d412d0(void) {
  FTRACE(0x12d412d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d412d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d412d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d412d3 cmp dword ptr [0x12d4e7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d412da jne 0x12d4130b */
  if (!C.zf) goto L_12d4130b;
  /* 12d412dc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d412de call 0x12d361d0 */
  push32(0x12d412e3u); f_12d361d0();
  /* 12d412e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d412e6 cmp dword ptr [0x12d4e7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d412ed jne 0x12d41301 */
  if (!C.zf) goto L_12d41301;
  /* 12d412ef call 0x12d41330 */
  push32(0x12d412f4u); f_12d41330();
  /* 12d412f4 mov eax, dword ptr [0x12d4e7b8] */
  EAX = (r32((uint32_t)(0x12d4e7b8)));
  /* 12d412f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d412fc mov dword ptr [0x12d4e7b8], eax */
  w32((uint32_t)(0x12d4e7b8), (EAX));
L_12d41301:;
  /* 12d41301 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d41303 call 0x12d36270 */
  push32(0x12d41308u); f_12d36270();
  /* 12d41308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d4130b:;
  /* 12d4130b pop ebp */
  EBP = (pop32());
  /* 12d4130c ret  */
  ESPCHK(0x12d412d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011310 @ 0x12d41310 (30 bytes, 11 insns) */
void f_12d41310(void) {
  FTRACE(0x12d41310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41310 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41311 mov ebp, esp */
  EBP = (ESP);
  /* 12d41313 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d41315 call 0x12d361d0 */
  push32(0x12d4131au); f_12d361d0();
  /* 12d4131a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4131d call 0x12d41330 */
  push32(0x12d41322u); f_12d41330();
  /* 12d41322 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d41324 call 0x12d36270 */
  push32(0x12d41329u); f_12d36270();
  /* 12d41329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4132c pop ebp */
  EBP = (pop32());
  /* 12d4132d ret  */
  ESPCHK(0x12d41310u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x12d41330 (939 bytes, 266 insns) */
void f_12d41330(void) {
  FTRACE(0x12d41330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41330 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41331 mov ebp, esp */
  EBP = (ESP);
  /* 12d41333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d4133d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d4133f call 0x12d361d0 */
  push32(0x12d41344u); f_12d361d0();
  /* 12d41344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41347 mov dword ptr [0x12d4e700], 0 */
  w32((uint32_t)(0x12d4e700), (0x0u));
  /* 12d41351 mov dword ptr [0x12d4de58], 0xffffffff */
  w32((uint32_t)(0x12d4de58), (0xffffffffu));
  /* 12d4135b mov eax, dword ptr [0x12d4de58] */
  EAX = (r32((uint32_t)(0x12d4de58)));
  /* 12d41360 mov dword ptr [0x12d4de48], eax */
  w32((uint32_t)(0x12d4de48), (EAX));
  /* 12d41365 push 0x12d4a878 */
  push32((uint32_t)(0x12d4a878u));
  /* 12d4136a call 0x12d421b0 */
  push32(0x12d4136fu); f_12d421b0();
  /* 12d4136f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41372 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d41375 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41379 jne 0x12d414b3 */
  if (!C.zf) goto L_12d414b3;
  /* 12d4137f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d41381 call 0x12d36270 */
  push32(0x12d41386u); f_12d36270();
  /* 12d41386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41389 push 0x12d4e708 */
  push32((uint32_t)(0x12d4e708u));
  /* 12d4138e call dword ptr [0x12d50228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50228))), 0x12d41394u);
  /* 12d41394 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41397 je 0x12d414ae */
  if (C.zf) goto L_12d414ae;
  /* 12d4139d mov dword ptr [0x12d4e700], 1 */
  w32((uint32_t)(0x12d4e700), (0x1u));
  /* 12d413a7 mov ecx, dword ptr [0x12d4e708] */
  ECX = (r32((uint32_t)(0x12d4e708)));
  /* 12d413ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d413b0 mov dword ptr [0x12d4ddb0], ecx */
  w32((uint32_t)(0x12d4ddb0), (ECX));
  /* 12d413b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d413b8 mov dx, word ptr [0x12d4e74e] */
  DX = (r16((uint32_t)(0x12d4e74e)));
  /* 12d413bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d413c1 je 0x12d413d9 */
  if (C.zf) goto L_12d413d9;
  /* 12d413c3 mov eax, dword ptr [0x12d4e75c] */
  EAX = (r32((uint32_t)(0x12d4e75c)));
  /* 12d413c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d413cb mov ecx, dword ptr [0x12d4ddb0] */
  ECX = (r32((uint32_t)(0x12d4ddb0)));
  /* 12d413d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d413d3 mov dword ptr [0x12d4ddb0], ecx */
  w32((uint32_t)(0x12d4ddb0), (ECX));
L_12d413d9:;
  /* 12d413d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d413db mov dx, word ptr [0x12d4e7a2] */
  DX = (r16((uint32_t)(0x12d4e7a2)));
  /* 12d413e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d413e4 je 0x12d4140e */
  if (C.zf) goto L_12d4140e;
  /* 12d413e6 cmp dword ptr [0x12d4e7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d413ed je 0x12d4140e */
  if (C.zf) goto L_12d4140e;
  /* 12d413ef mov dword ptr [0x12d4ddb4], 1 */
  w32((uint32_t)(0x12d4ddb4), (0x1u));
  /* 12d413f9 mov eax, dword ptr [0x12d4e7b0] */
  EAX = (r32((uint32_t)(0x12d4e7b0)));
  /* 12d413fe sub eax, dword ptr [0x12d4e75c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4e75c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41404 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41407 mov dword ptr [0x12d4ddb8], eax */
  w32((uint32_t)(0x12d4ddb8), (EAX));
  /* 12d4140c jmp 0x12d41422 */
  goto L_12d41422;
L_12d4140e:;
  /* 12d4140e mov dword ptr [0x12d4ddb4], 0 */
  w32((uint32_t)(0x12d4ddb4), (0x0u));
  /* 12d41418 mov dword ptr [0x12d4ddb8], 0 */
  w32((uint32_t)(0x12d4ddb8), (0x0u));
L_12d41422:;
  /* 12d41422 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d41425 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41426 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41428 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d4142a mov edx, dword ptr [0x12d4de3c] */
  EDX = (r32((uint32_t)(0x12d4de3c)));
  /* 12d41430 push edx */
  push32((uint32_t)(EDX));
  /* 12d41431 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41433 push 0x12d4e70c */
  push32((uint32_t)(0x12d4e70cu));
  /* 12d41438 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d4143d mov eax, dword ptr [0x12d4e670] */
  EAX = (r32((uint32_t)(0x12d4e670)));
  /* 12d41442 push eax */
  push32((uint32_t)(EAX));
  /* 12d41443 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d41449u);
  /* 12d41449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d4144b je 0x12d4145f */
  if (C.zf) goto L_12d4145f;
  /* 12d4144d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41451 jne 0x12d4145f */
  if (!C.zf) goto L_12d4145f;
  /* 12d41453 mov ecx, dword ptr [0x12d4de3c] */
  ECX = (r32((uint32_t)(0x12d4de3c)));
  /* 12d41459 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12d4145d jmp 0x12d41468 */
  goto L_12d41468;
L_12d4145f:;
  /* 12d4145f mov edx, dword ptr [0x12d4de3c] */
  EDX = (r32((uint32_t)(0x12d4de3c)));
  /* 12d41465 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12d41468:;
  /* 12d41468 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d4146b push eax */
  push32((uint32_t)(EAX));
  /* 12d4146c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d4146e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d41470 mov ecx, dword ptr [0x12d4de40] */
  ECX = (r32((uint32_t)(0x12d4de40)));
  /* 12d41476 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41477 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41479 push 0x12d4e760 */
  push32((uint32_t)(0x12d4e760u));
  /* 12d4147e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d41483 mov edx, dword ptr [0x12d4e670] */
  EDX = (r32((uint32_t)(0x12d4e670)));
  /* 12d41489 push edx */
  push32((uint32_t)(EDX));
  /* 12d4148a call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d41490u);
  /* 12d41490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41492 je 0x12d414a5 */
  if (C.zf) goto L_12d414a5;
  /* 12d41494 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41498 jne 0x12d414a5 */
  if (!C.zf) goto L_12d414a5;
  /* 12d4149a mov eax, dword ptr [0x12d4de40] */
  EAX = (r32((uint32_t)(0x12d4de40)));
  /* 12d4149f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12d414a3 jmp 0x12d414ae */
  goto L_12d414ae;
L_12d414a5:;
  /* 12d414a5 mov ecx, dword ptr [0x12d4de40] */
  ECX = (r32((uint32_t)(0x12d4de40)));
  /* 12d414ab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12d414ae:;
  /* 12d414ae jmp 0x12d416d7 */
  goto L_12d416d7;
L_12d414b3:;
  /* 12d414b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d414b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d414b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d414bb je 0x12d414dd */
  if (C.zf) goto L_12d414dd;
  /* 12d414bd cmp dword ptr [0x12d4e7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d414c4 je 0x12d414ec */
  if (C.zf) goto L_12d414ec;
  /* 12d414c6 mov ecx, dword ptr [0x12d4e7b4] */
  ECX = (r32((uint32_t)(0x12d4e7b4)));
  /* 12d414cc push ecx */
  push32((uint32_t)(ECX));
  /* 12d414cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d414d0 push edx */
  push32((uint32_t)(EDX));
  /* 12d414d1 call 0x12d3e460 */
  push32(0x12d414d6u); f_12d3e460();
  /* 12d414d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d414d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d414db jne 0x12d414ec */
  if (!C.zf) goto L_12d414ec;
L_12d414dd:;
  /* 12d414dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d414df call 0x12d36270 */
  push32(0x12d414e4u); f_12d36270();
  /* 12d414e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d414e7 jmp 0x12d416d7 */
  goto L_12d416d7;
L_12d414ec:;
  /* 12d414ec push 2 */
  push32((uint32_t)(0x2u));
  /* 12d414ee mov eax, dword ptr [0x12d4e7b4] */
  EAX = (r32((uint32_t)(0x12d4e7b4)));
  /* 12d414f3 push eax */
  push32((uint32_t)(EAX));
  /* 12d414f4 call 0x12d33260 */
  push32(0x12d414f9u); f_12d33260();
  /* 12d414f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d414fc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12d41501 push 0x12d4a870 */
  push32((uint32_t)(0x12d4a870u));
  /* 12d41506 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d41508 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4150b push ecx */
  push32((uint32_t)(ECX));
  /* 12d4150c call 0x12d35600 */
  push32(0x12d41511u); f_12d35600();
  /* 12d41511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41514 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41517 push eax */
  push32((uint32_t)(EAX));
  /* 12d41518 call 0x12d327d0 */
  push32(0x12d4151du); f_12d327d0();
  /* 12d4151d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41520 mov dword ptr [0x12d4e7b4], eax */
  w32((uint32_t)(0x12d4e7b4), (EAX));
  /* 12d41525 cmp dword ptr [0x12d4e7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4152c jne 0x12d4153d */
  if (!C.zf) goto L_12d4153d;
  /* 12d4152e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d41530 call 0x12d36270 */
  push32(0x12d41535u); f_12d36270();
  /* 12d41535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41538 jmp 0x12d416d7 */
  goto L_12d416d7;
L_12d4153d:;
  /* 12d4153d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41540 push edx */
  push32((uint32_t)(EDX));
  /* 12d41541 mov eax, dword ptr [0x12d4e7b4] */
  EAX = (r32((uint32_t)(0x12d4e7b4)));
  /* 12d41546 push eax */
  push32((uint32_t)(EAX));
  /* 12d41547 call 0x12d35780 */
  push32(0x12d4154cu); f_12d35780();
  /* 12d4154c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4154f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d41551 call 0x12d36270 */
  push32(0x12d41556u); f_12d36270();
  /* 12d41556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41559 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d4155b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4155e push ecx */
  push32((uint32_t)(ECX));
  /* 12d4155f mov edx, dword ptr [0x12d4de3c] */
  EDX = (r32((uint32_t)(0x12d4de3c)));
  /* 12d41565 push edx */
  push32((uint32_t)(EDX));
  /* 12d41566 call 0x12d35ff0 */
  push32(0x12d4156bu); f_12d35ff0();
  /* 12d4156b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4156e mov eax, dword ptr [0x12d4de3c] */
  EAX = (r32((uint32_t)(0x12d4de3c)));
  /* 12d41573 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12d41577 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4157a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4157d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d41580 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41583 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d41586 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41589 jne 0x12d4159d */
  if (!C.zf) goto L_12d4159d;
  /* 12d4158b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4158e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41591 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d41594 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4159a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d4159d:;
  /* 12d4159d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415a0 push eax */
  push32((uint32_t)(EAX));
  /* 12d415a1 call 0x12d41080 */
  push32(0x12d415a6u); f_12d41080();
  /* 12d415a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d415a9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d415af mov dword ptr [0x12d4ddb0], eax */
  w32((uint32_t)(0x12d4ddb0), (EAX));
L_12d415b4:;
  /* 12d415b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d415ba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d415bd je 0x12d415d5 */
  if (C.zf) goto L_12d415d5;
  /* 12d415bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415c2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d415c5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d415c8 jl 0x12d415e0 */
  if ((C.sf!=C.of)) goto L_12d415e0;
  /* 12d415ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d415d0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d415d3 jg 0x12d415e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d415e0;
L_12d415d5:;
  /* 12d415d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d415db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d415de jmp 0x12d415b4 */
  goto L_12d415b4;
L_12d415e0:;
  /* 12d415e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d415e6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d415e9 jne 0x12d41685 */
  if (!C.zf) goto L_12d41685;
  /* 12d415ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d415f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d415f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d415fb push edx */
  push32((uint32_t)(EDX));
  /* 12d415fc call 0x12d41080 */
  push32(0x12d41601u); f_12d41080();
  /* 12d41601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41604 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41607 mov ecx, dword ptr [0x12d4ddb0] */
  ECX = (r32((uint32_t)(0x12d4ddb0)));
  /* 12d4160d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4160f mov dword ptr [0x12d4ddb0], ecx */
  w32((uint32_t)(0x12d4ddb0), (ECX));
L_12d41615:;
  /* 12d41615 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41618 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d4161b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4161e jl 0x12d41636 */
  if ((C.sf!=C.of)) goto L_12d41636;
  /* 12d41620 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41623 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d41626 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41629 jg 0x12d41636 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d41636;
  /* 12d4162b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4162e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41631 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d41634 jmp 0x12d41615 */
  goto L_12d41615;
L_12d41636:;
  /* 12d41636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41639 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d4163c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4163f jne 0x12d41685 */
  if (!C.zf) goto L_12d41685;
  /* 12d41641 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41647 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d4164a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4164d push ecx */
  push32((uint32_t)(ECX));
  /* 12d4164e call 0x12d41080 */
  push32(0x12d41653u); f_12d41080();
  /* 12d41653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41656 mov edx, dword ptr [0x12d4ddb0] */
  EDX = (r32((uint32_t)(0x12d4ddb0)));
  /* 12d4165c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4165e mov dword ptr [0x12d4ddb0], edx */
  w32((uint32_t)(0x12d4ddb0), (EDX));
L_12d41664:;
  /* 12d41664 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41667 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d4166a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4166d jl 0x12d41685 */
  if ((C.sf!=C.of)) goto L_12d41685;
  /* 12d4166f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41672 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d41675 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41678 jg 0x12d41685 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d41685;
  /* 12d4167a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4167d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41680 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d41683 jmp 0x12d41664 */
  goto L_12d41664;
L_12d41685:;
  /* 12d41685 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41689 je 0x12d41699 */
  if (C.zf) goto L_12d41699;
  /* 12d4168b mov edx, dword ptr [0x12d4ddb0] */
  EDX = (r32((uint32_t)(0x12d4ddb0)));
  /* 12d41691 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d41693 mov dword ptr [0x12d4ddb0], edx */
  w32((uint32_t)(0x12d4ddb0), (EDX));
L_12d41699:;
  /* 12d41699 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4169c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d4169f mov dword ptr [0x12d4ddb4], ecx */
  w32((uint32_t)(0x12d4ddb4), (ECX));
  /* 12d416a5 cmp dword ptr [0x12d4ddb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ddb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d416ac je 0x12d416ce */
  if (C.zf) goto L_12d416ce;
  /* 12d416ae push 3 */
  push32((uint32_t)(0x3u));
  /* 12d416b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d416b3 push edx */
  push32((uint32_t)(EDX));
  /* 12d416b4 mov eax, dword ptr [0x12d4de40] */
  EAX = (r32((uint32_t)(0x12d4de40)));
  /* 12d416b9 push eax */
  push32((uint32_t)(EAX));
  /* 12d416ba call 0x12d35ff0 */
  push32(0x12d416bfu); f_12d35ff0();
  /* 12d416bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d416c2 mov ecx, dword ptr [0x12d4de40] */
  ECX = (r32((uint32_t)(0x12d4de40)));
  /* 12d416c8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12d416cc jmp 0x12d416d7 */
  goto L_12d416d7;
L_12d416ce:;
  /* 12d416ce mov edx, dword ptr [0x12d4de40] */
  EDX = (r32((uint32_t)(0x12d4de40)));
  /* 12d416d4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12d416d7:;
  /* 12d416d7 mov esp, ebp */
  ESP = (EBP);
  /* 12d416d9 pop ebp */
  EBP = (pop32());
  /* 12d416da ret  */
  ESPCHK(0x12d41330u, _esp0);
  ESP += 4; return;
}

/* FUN_100116e0 @ 0x12d416e0 (46 bytes, 18 insns) */
void f_12d416e0(void) {
  FTRACE(0x12d416e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d416e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d416e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d416e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d416e4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d416e6 call 0x12d361d0 */
  push32(0x12d416ebu); f_12d361d0();
  /* 12d416eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d416ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d416f1 push eax */
  push32((uint32_t)(EAX));
  /* 12d416f2 call 0x12d41710 */
  push32(0x12d416f7u); f_12d41710();
  /* 12d416f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d416fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d416fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d416ff call 0x12d36270 */
  push32(0x12d41704u); f_12d36270();
  /* 12d41704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4170a mov esp, ebp */
  ESP = (EBP);
  /* 12d4170c pop ebp */
  EBP = (pop32());
  /* 12d4170d ret  */
  ESPCHK(0x12d416e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011710 @ 0x12d41710 (762 bytes, 246 insns) */
void f_12d41710(void) {
  FTRACE(0x12d41710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41710 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41711 mov ebp, esp */
  EBP = (ESP);
  /* 12d41713 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41714 cmp dword ptr [0x12d4ddb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ddb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4171b jne 0x12d41724 */
  if (!C.zf) goto L_12d41724;
  /* 12d4171d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4171f jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d41724:;
  /* 12d41724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41727 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d4172a cmp ecx, dword ptr [0x12d4de48] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4de48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41730 jne 0x12d41744 */
  if (!C.zf) goto L_12d41744;
  /* 12d41732 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41735 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d41738 cmp eax, dword ptr [0x12d4de58] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4de58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4173e je 0x12d4190b */
  if (C.zf) goto L_12d4190b;
L_12d41744:;
  /* 12d41744 cmp dword ptr [0x12d4e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4174b je 0x12d418c5 */
  if (C.zf) goto L_12d418c5;
  /* 12d41751 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d41753 mov cx, word ptr [0x12d4e7a0] */
  CX = (r16((uint32_t)(0x12d4e7a0)));
  /* 12d4175a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d4175c jne 0x12d417b9 */
  if (!C.zf) goto L_12d417b9;
  /* 12d4175e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41760 mov dx, word ptr [0x12d4e7ae] */
  DX = (r16((uint32_t)(0x12d4e7ae)));
  /* 12d41767 push edx */
  push32((uint32_t)(EDX));
  /* 12d41768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4176a mov ax, word ptr [0x12d4e7ac] */
  AX = (r16((uint32_t)(0x12d4e7ac)));
  /* 12d41770 push eax */
  push32((uint32_t)(EAX));
  /* 12d41771 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d41773 mov cx, word ptr [0x12d4e7aa] */
  CX = (r16((uint32_t)(0x12d4e7aa)));
  /* 12d4177a push ecx */
  push32((uint32_t)(ECX));
  /* 12d4177b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d4177d mov dx, word ptr [0x12d4e7a8] */
  DX = (r16((uint32_t)(0x12d4e7a8)));
  /* 12d41784 push edx */
  push32((uint32_t)(EDX));
  /* 12d41785 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41789 mov ax, word ptr [0x12d4e7a4] */
  AX = (r16((uint32_t)(0x12d4e7a4)));
  /* 12d4178f push eax */
  push32((uint32_t)(EAX));
  /* 12d41790 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d41792 mov cx, word ptr [0x12d4e7a6] */
  CX = (r16((uint32_t)(0x12d4e7a6)));
  /* 12d41799 push ecx */
  push32((uint32_t)(ECX));
  /* 12d4179a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d4179c mov dx, word ptr [0x12d4e7a2] */
  DX = (r16((uint32_t)(0x12d4e7a2)));
  /* 12d417a3 push edx */
  push32((uint32_t)(EDX));
  /* 12d417a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d417a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d417aa push ecx */
  push32((uint32_t)(ECX));
  /* 12d417ab push 1 */
  push32((uint32_t)(0x1u));
  /* 12d417ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12d417af call 0x12d41a10 */
  push32(0x12d417b4u); f_12d41a10();
  /* 12d417b4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d417b7 jmp 0x12d4180a */
  goto L_12d4180a;
L_12d417b9:;
  /* 12d417b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d417bb mov dx, word ptr [0x12d4e7ae] */
  DX = (r16((uint32_t)(0x12d4e7ae)));
  /* 12d417c2 push edx */
  push32((uint32_t)(EDX));
  /* 12d417c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d417c5 mov ax, word ptr [0x12d4e7ac] */
  AX = (r16((uint32_t)(0x12d4e7ac)));
  /* 12d417cb push eax */
  push32((uint32_t)(EAX));
  /* 12d417cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d417ce mov cx, word ptr [0x12d4e7aa] */
  CX = (r16((uint32_t)(0x12d4e7aa)));
  /* 12d417d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d417d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d417d8 mov dx, word ptr [0x12d4e7a8] */
  DX = (r16((uint32_t)(0x12d4e7a8)));
  /* 12d417df push edx */
  push32((uint32_t)(EDX));
  /* 12d417e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d417e2 mov ax, word ptr [0x12d4e7a6] */
  AX = (r16((uint32_t)(0x12d4e7a6)));
  /* 12d417e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d417e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d417eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d417ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d417ef mov cx, word ptr [0x12d4e7a2] */
  CX = (r16((uint32_t)(0x12d4e7a2)));
  /* 12d417f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d417f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d417fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d417fd push eax */
  push32((uint32_t)(EAX));
  /* 12d417fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41800 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41802 call 0x12d41a10 */
  push32(0x12d41807u); f_12d41a10();
  /* 12d41807 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d4180a:;
  /* 12d4180a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4180c mov cx, word ptr [0x12d4e74c] */
  CX = (r16((uint32_t)(0x12d4e74c)));
  /* 12d41813 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d41815 jne 0x12d41872 */
  if (!C.zf) goto L_12d41872;
  /* 12d41817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41819 mov dx, word ptr [0x12d4e75a] */
  DX = (r16((uint32_t)(0x12d4e75a)));
  /* 12d41820 push edx */
  push32((uint32_t)(EDX));
  /* 12d41821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41823 mov ax, word ptr [0x12d4e758] */
  AX = (r16((uint32_t)(0x12d4e758)));
  /* 12d41829 push eax */
  push32((uint32_t)(EAX));
  /* 12d4182a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4182c mov cx, word ptr [0x12d4e756] */
  CX = (r16((uint32_t)(0x12d4e756)));
  /* 12d41833 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41836 mov dx, word ptr [0x12d4e754] */
  DX = (r16((uint32_t)(0x12d4e754)));
  /* 12d4183d push edx */
  push32((uint32_t)(EDX));
  /* 12d4183e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41842 mov ax, word ptr [0x12d4e750] */
  AX = (r16((uint32_t)(0x12d4e750)));
  /* 12d41848 push eax */
  push32((uint32_t)(EAX));
  /* 12d41849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4184b mov cx, word ptr [0x12d4e752] */
  CX = (r16((uint32_t)(0x12d4e752)));
  /* 12d41852 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41853 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41855 mov dx, word ptr [0x12d4e74e] */
  DX = (r16((uint32_t)(0x12d4e74e)));
  /* 12d4185c push edx */
  push32((uint32_t)(EDX));
  /* 12d4185d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41860 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d41863 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41864 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41866 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41868 call 0x12d41a10 */
  push32(0x12d4186du); f_12d41a10();
  /* 12d4186d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41870 jmp 0x12d418c3 */
  goto L_12d418c3;
L_12d41872:;
  /* 12d41872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41874 mov dx, word ptr [0x12d4e75a] */
  DX = (r16((uint32_t)(0x12d4e75a)));
  /* 12d4187b push edx */
  push32((uint32_t)(EDX));
  /* 12d4187c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4187e mov ax, word ptr [0x12d4e758] */
  AX = (r16((uint32_t)(0x12d4e758)));
  /* 12d41884 push eax */
  push32((uint32_t)(EAX));
  /* 12d41885 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d41887 mov cx, word ptr [0x12d4e756] */
  CX = (r16((uint32_t)(0x12d4e756)));
  /* 12d4188e push ecx */
  push32((uint32_t)(ECX));
  /* 12d4188f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d41891 mov dx, word ptr [0x12d4e754] */
  DX = (r16((uint32_t)(0x12d4e754)));
  /* 12d41898 push edx */
  push32((uint32_t)(EDX));
  /* 12d41899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4189b mov ax, word ptr [0x12d4e752] */
  AX = (r16((uint32_t)(0x12d4e752)));
  /* 12d418a1 push eax */
  push32((uint32_t)(EAX));
  /* 12d418a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d418a8 mov cx, word ptr [0x12d4e74e] */
  CX = (r16((uint32_t)(0x12d4e74e)));
  /* 12d418af push ecx */
  push32((uint32_t)(ECX));
  /* 12d418b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d418b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d418b6 push eax */
  push32((uint32_t)(EAX));
  /* 12d418b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418bb call 0x12d41a10 */
  push32(0x12d418c0u); f_12d41a10();
  /* 12d418c0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d418c3:;
  /* 12d418c3 jmp 0x12d4190b */
  goto L_12d4190b;
L_12d418c5:;
  /* 12d418c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12d418cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d418d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d418d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d418d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d418db push edx */
  push32((uint32_t)(EDX));
  /* 12d418dc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d418de push 1 */
  push32((uint32_t)(0x1u));
  /* 12d418e0 call 0x12d41a10 */
  push32(0x12d418e5u); f_12d41a10();
  /* 12d418e5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d418e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12d418f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d418f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12d418f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d418f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d418fb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d418fe push ecx */
  push32((uint32_t)(ECX));
  /* 12d418ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41903 call 0x12d41a10 */
  push32(0x12d41908u); f_12d41a10();
  /* 12d41908 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d4190b:;
  /* 12d4190b mov edx, dword ptr [0x12d4de4c] */
  EDX = (r32((uint32_t)(0x12d4de4c)));
  /* 12d41911 cmp edx, dword ptr [0x12d4de5c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41917 jge 0x12d41964 */
  if ((C.sf==C.of)) goto L_12d41964;
  /* 12d41919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4191c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d4191f cmp ecx, dword ptr [0x12d4de4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41925 jl 0x12d41935 */
  if ((C.sf!=C.of)) goto L_12d41935;
  /* 12d41927 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4192a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d4192d cmp eax, dword ptr [0x12d4de5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41933 jle 0x12d4193c */
  if ((C.zf||C.sf!=C.of)) goto L_12d4193c;
L_12d41935:;
  /* 12d41935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41937 jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d4193c:;
  /* 12d4193c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4193f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d41942 cmp edx, dword ptr [0x12d4de4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41948 jle 0x12d41962 */
  if ((C.zf||C.sf!=C.of)) goto L_12d41962;
  /* 12d4194a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4194d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d41950 cmp ecx, dword ptr [0x12d4de5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41956 jge 0x12d41962 */
  if ((C.sf==C.of)) goto L_12d41962;
  /* 12d41958 mov eax, 1 */
  EAX = (0x1u);
  /* 12d4195d jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d41962:;
  /* 12d41962 jmp 0x12d419a7 */
  goto L_12d419a7;
L_12d41964:;
  /* 12d41964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41967 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d4196a cmp eax, dword ptr [0x12d4de5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41970 jl 0x12d41980 */
  if ((C.sf!=C.of)) goto L_12d41980;
  /* 12d41972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41975 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d41978 cmp edx, dword ptr [0x12d4de4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4197e jle 0x12d41987 */
  if ((C.zf||C.sf!=C.of)) goto L_12d41987;
L_12d41980:;
  /* 12d41980 mov eax, 1 */
  EAX = (0x1u);
  /* 12d41985 jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d41987:;
  /* 12d41987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4198a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d4198d cmp ecx, dword ptr [0x12d4de5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4de5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41993 jle 0x12d419a7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d419a7;
  /* 12d41995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41998 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d4199b cmp eax, dword ptr [0x12d4de4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d419a1 jge 0x12d419a7 */
  if ((C.sf==C.of)) goto L_12d419a7;
  /* 12d419a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d419a5 jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d419a7:;
  /* 12d419a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d419aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d419ad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d419b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d419b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d419b5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d419b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d419ba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d419bd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d419c3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d419c5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d419cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d419ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d419d1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d419d4 cmp edx, dword ptr [0x12d4de4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4de4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d419da jne 0x12d419f2 */
  if (!C.zf) goto L_12d419f2;
  /* 12d419dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d419df cmp eax, dword ptr [0x12d4de50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4de50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d419e5 jl 0x12d419ee */
  if ((C.sf!=C.of)) goto L_12d419ee;
  /* 12d419e7 mov eax, 1 */
  EAX = (0x1u);
  /* 12d419ec jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d419ee:;
  /* 12d419ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d419f0 jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d419f2:;
  /* 12d419f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d419f5 cmp ecx, dword ptr [0x12d4de60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4de60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d419fb jge 0x12d41a04 */
  if ((C.sf==C.of)) goto L_12d41a04;
  /* 12d419fd mov eax, 1 */
  EAX = (0x1u);
  /* 12d41a02 jmp 0x12d41a06 */
  goto L_12d41a06;
L_12d41a04:;
  /* 12d41a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d41a06:;
  /* 12d41a06 mov esp, ebp */
  ESP = (EBP);
  /* 12d41a08 pop ebp */
  EBP = (pop32());
  /* 12d41a09 ret  */
  ESPCHK(0x12d41710u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x12d41a10 (504 bytes, 145 insns) */
void f_12d41a10(void) {
  FTRACE(0x12d41a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41a11 mov ebp, esp */
  EBP = (ESP);
  /* 12d41a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41a16 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41a1a jne 0x12d41aec */
  if (!C.zf) goto L_12d41aec;
  /* 12d41a20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41a23 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d41a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41a28 jne 0x12d41a39 */
  if (!C.zf) goto L_12d41a39;
  /* 12d41a2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41a2d mov edx, dword ptr [ecx*4 + 0x12d4de6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4de6c)));
  /* 12d41a34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d41a37 jmp 0x12d41a46 */
  goto L_12d41a46;
L_12d41a39:;
  /* 12d41a39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41a3c mov ecx, dword ptr [eax*4 + 0x12d4dea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4dea0)));
  /* 12d41a43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d41a46:;
  /* 12d41a46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d41a49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41a4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d41a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41a52 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41a55 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41a5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41a60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41a63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41a66 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12d41a69 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12d41a6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d41a6e mov ecx, 7 */
  ECX = (0x7u);
  /* 12d41a73 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d41a75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d41a78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d41a7b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41a7e jg 0x12d41a99 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d41a99;
  /* 12d41a80 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d41a83 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41a86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d41a89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41a8c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41a8f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41a92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41a94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d41a97 jmp 0x12d41aad */
  goto L_12d41aad;
L_12d41a99:;
  /* 12d41a99 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d41a9c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41a9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d41aa2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41aa5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41aa8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41aaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d41aad:;
  /* 12d41aad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41ab1 jne 0x12d41aea */
  if (!C.zf) goto L_12d41aea;
  /* 12d41ab3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41ab6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12d41ab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d41abb jne 0x12d41acc */
  if (!C.zf) goto L_12d41acc;
  /* 12d41abd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41ac0 mov eax, dword ptr [edx*4 + 0x12d4de70] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4de70)));
  /* 12d41ac7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d41aca jmp 0x12d41ad9 */
  goto L_12d41ad9;
L_12d41acc:;
  /* 12d41acc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41acf mov edx, dword ptr [ecx*4 + 0x12d4dea4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4dea4)));
  /* 12d41ad6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d41ad9:;
  /* 12d41ad9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41adc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41adf jle 0x12d41aea */
  if ((C.zf||C.sf!=C.of)) goto L_12d41aea;
  /* 12d41ae1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41ae4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41ae7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d41aea:;
  /* 12d41aea jmp 0x12d41b21 */
  goto L_12d41b21;
L_12d41aec:;
  /* 12d41aec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41aef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d41af2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d41af4 jne 0x12d41b05 */
  if (!C.zf) goto L_12d41b05;
  /* 12d41af6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41af9 mov ecx, dword ptr [eax*4 + 0x12d4de6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d4de6c)));
  /* 12d41b00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d41b03 jmp 0x12d41b12 */
  goto L_12d41b12;
L_12d41b05:;
  /* 12d41b05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41b08 mov eax, dword ptr [edx*4 + 0x12d4dea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4dea0)));
  /* 12d41b0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12d41b12:;
  /* 12d41b12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d41b15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d41b18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41b1b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d41b21:;
  /* 12d41b21 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41b25 jne 0x12d41b61 */
  if (!C.zf) goto L_12d41b61;
  /* 12d41b27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41b2a mov dword ptr [0x12d4de4c], eax */
  w32((uint32_t)(0x12d4de4c), (EAX));
  /* 12d41b2f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d41b32 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b35 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12d41b38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b3a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b3d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12d41b40 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b42 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b48 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12d41b4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b4d mov dword ptr [0x12d4de50], ecx */
  w32((uint32_t)(0x12d4de50), (ECX));
  /* 12d41b53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41b56 mov dword ptr [0x12d4de48], edx */
  w32((uint32_t)(0x12d4de48), (EDX));
  /* 12d41b5c jmp 0x12d41c04 */
  goto L_12d41c04;
L_12d41b61:;
  /* 12d41b61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d41b64 mov dword ptr [0x12d4de5c], eax */
  w32((uint32_t)(0x12d4de5c), (EAX));
  /* 12d41b69 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d41b6c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b6f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12d41b72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b74 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b77 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12d41b7a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b7c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b82 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12d41b85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41b87 mov dword ptr [0x12d4de60], ecx */
  w32((uint32_t)(0x12d4de60), (ECX));
  /* 12d41b8d mov edx, dword ptr [0x12d4ddb8] */
  EDX = (r32((uint32_t)(0x12d4ddb8)));
  /* 12d41b93 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d41b99 mov eax, dword ptr [0x12d4de60] */
  EAX = (r32((uint32_t)(0x12d4de60)));
  /* 12d41b9e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41ba0 mov dword ptr [0x12d4de60], eax */
  w32((uint32_t)(0x12d4de60), (EAX));
  /* 12d41ba5 cmp dword ptr [0x12d4de60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4de60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41bac jge 0x12d41bd1 */
  if ((C.sf==C.of)) goto L_12d41bd1;
  /* 12d41bae mov ecx, dword ptr [0x12d4de60] */
  ECX = (r32((uint32_t)(0x12d4de60)));
  /* 12d41bb4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41bba mov dword ptr [0x12d4de60], ecx */
  w32((uint32_t)(0x12d4de60), (ECX));
  /* 12d41bc0 mov edx, dword ptr [0x12d4de5c] */
  EDX = (r32((uint32_t)(0x12d4de5c)));
  /* 12d41bc6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41bc9 mov dword ptr [0x12d4de5c], edx */
  w32((uint32_t)(0x12d4de5c), (EDX));
  /* 12d41bcf jmp 0x12d41bfb */
  goto L_12d41bfb;
L_12d41bd1:;
  /* 12d41bd1 cmp dword ptr [0x12d4de60], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12d4de60))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41bdb jl 0x12d41bfb */
  if ((C.sf!=C.of)) goto L_12d41bfb;
  /* 12d41bdd mov eax, dword ptr [0x12d4de60] */
  EAX = (r32((uint32_t)(0x12d4de60)));
  /* 12d41be2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d41be7 mov dword ptr [0x12d4de60], eax */
  w32((uint32_t)(0x12d4de60), (EAX));
  /* 12d41bec mov ecx, dword ptr [0x12d4de5c] */
  ECX = (r32((uint32_t)(0x12d4de5c)));
  /* 12d41bf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41bf5 mov dword ptr [0x12d4de5c], ecx */
  w32((uint32_t)(0x12d4de5c), (ECX));
L_12d41bfb:;
  /* 12d41bfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41bfe mov dword ptr [0x12d4de58], edx */
  w32((uint32_t)(0x12d4de58), (EDX));
L_12d41c04:;
  /* 12d41c04 mov esp, ebp */
  ESP = (EBP);
  /* 12d41c06 pop ebp */
  EBP = (pop32());
  /* 12d41c07 ret  */
  ESPCHK(0x12d41a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c10 @ 0x12d41c10 (382 bytes, 135 insns) */
void f_12d41c10(void) {
  FTRACE(0x12d41c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41c11 mov ebp, esp */
  EBP = (ESP);
  /* 12d41c13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41c15 push 0x12d4a880 */
  push32((uint32_t)(0x12d4a880u));
  /* 12d41c1a push 0x12d3b8d8 */
  push32((uint32_t)(0x12d3b8d8u));
  /* 12d41c1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d41c25 push eax */
  push32((uint32_t)(EAX));
  /* 12d41c26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d41c2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41c30 push ebx */
  push32((uint32_t)(EBX));
  /* 12d41c31 push esi */
  push32((uint32_t)(ESI));
  /* 12d41c32 push edi */
  push32((uint32_t)(EDI));
  /* 12d41c33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d41c36 cmp dword ptr [0x12d4e7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41c3d jne 0x12d41c82 */
  if (!C.zf) goto L_12d41c82;
  /* 12d41c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41c43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41c47 call dword ptr [0x12d50224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50224))), 0x12d41c4du);
  /* 12d41c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41c4f je 0x12d41c5d */
  if (C.zf) goto L_12d41c5d;
  /* 12d41c51 mov dword ptr [0x12d4e7bc], 1 */
  w32((uint32_t)(0x12d4e7bc), (0x1u));
  /* 12d41c5b jmp 0x12d41c82 */
  goto L_12d41c82;
L_12d41c5d:;
  /* 12d41c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41c65 call dword ptr [0x12d50324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50324))), 0x12d41c6bu);
  /* 12d41c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41c6d je 0x12d41c7b */
  if (C.zf) goto L_12d41c7b;
  /* 12d41c6f mov dword ptr [0x12d4e7bc], 2 */
  w32((uint32_t)(0x12d4e7bc), (0x2u));
  /* 12d41c79 jmp 0x12d41c82 */
  goto L_12d41c82;
L_12d41c7b:;
  /* 12d41c7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41c7d jmp 0x12d41d91 */
  goto L_12d41d91;
L_12d41c82:;
  /* 12d41c82 cmp dword ptr [0x12d4e7bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41c89 jne 0x12d41ca6 */
  if (!C.zf) goto L_12d41ca6;
  /* 12d41c8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41c8e push eax */
  push32((uint32_t)(EAX));
  /* 12d41c8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41c92 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41c93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d41c96 push edx */
  push32((uint32_t)(EDX));
  /* 12d41c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41c9a push eax */
  push32((uint32_t)(EAX));
  /* 12d41c9b call dword ptr [0x12d50224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50224))), 0x12d41ca1u);
  /* 12d41ca1 jmp 0x12d41d91 */
  goto L_12d41d91;
L_12d41ca6:;
  /* 12d41ca6 cmp dword ptr [0x12d4e7bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41cad jne 0x12d41d8f */
  if (!C.zf) goto L_12d41d8f;
  /* 12d41cb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41cb7 jne 0x12d41cc2 */
  if (!C.zf) goto L_12d41cc2;
  /* 12d41cb9 mov ecx, dword ptr [0x12d4e670] */
  ECX = (r32((uint32_t)(0x12d4e670)));
  /* 12d41cbf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12d41cc2:;
  /* 12d41cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41cc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d41cc9 push edx */
  push32((uint32_t)(EDX));
  /* 12d41cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41ccd push eax */
  push32((uint32_t)(EAX));
  /* 12d41cce call dword ptr [0x12d50324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50324))), 0x12d41cd4u);
  /* 12d41cd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d41cd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41cdb jne 0x12d41ce4 */
  if (!C.zf) goto L_12d41ce4;
  /* 12d41cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41cdf jmp 0x12d41d91 */
  goto L_12d41d91;
L_12d41ce4:;
  /* 12d41ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d41ceb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d41cee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41cf1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d41cf3 call 0x12d35970 */
  push32(0x12d41cf8u); f_12d35970();
  /* 12d41cf8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12d41cfb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d41cfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d41d01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d41d04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d41d0b jmp 0x12d41d24 */
  goto L_12d41d24;
  /* 12d41d0d mov eax, 1 */
  EAX = (0x1u);
  /* 12d41d12 ret  */
  ESPCHK(0x12d41c10u, _esp0);
  ESP += 4; return;
  /* 12d41d13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d41d16 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d41d1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d41d24:;
  /* 12d41d24 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41d28 jne 0x12d41d2e */
  if (!C.zf) goto L_12d41d2e;
  /* 12d41d2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41d2c jmp 0x12d41d91 */
  goto L_12d41d91;
L_12d41d2e:;
  /* 12d41d2e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d41d31 push edx */
  push32((uint32_t)(EDX));
  /* 12d41d32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d41d35 push eax */
  push32((uint32_t)(EAX));
  /* 12d41d36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d41d39 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41d3d push edx */
  push32((uint32_t)(EDX));
  /* 12d41d3e call dword ptr [0x12d50324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50324))), 0x12d41d44u);
  /* 12d41d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41d46 jne 0x12d41d4c */
  if (!C.zf) goto L_12d41d4c;
  /* 12d41d48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41d4a jmp 0x12d41d91 */
  goto L_12d41d91;
L_12d41d4c:;
  /* 12d41d4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41d50 jne 0x12d41d6d */
  if (!C.zf) goto L_12d41d6d;
  /* 12d41d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41d56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41d58 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d41d5b push eax */
  push32((uint32_t)(EAX));
  /* 12d41d5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41d5e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d41d61 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41d62 call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d41d68u);
  /* 12d41d68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d41d6b jmp 0x12d41d8a */
  goto L_12d41d8a;
L_12d41d6d:;
  /* 12d41d6d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41d70 push edx */
  push32((uint32_t)(EDX));
  /* 12d41d71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41d74 push eax */
  push32((uint32_t)(EAX));
  /* 12d41d75 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41d77 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d41d7a push ecx */
  push32((uint32_t)(ECX));
  /* 12d41d7b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41d7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d41d80 push edx */
  push32((uint32_t)(EDX));
  /* 12d41d81 call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d41d87u);
  /* 12d41d87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d41d8a:;
  /* 12d41d8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d41d8d jmp 0x12d41d91 */
  goto L_12d41d91;
L_12d41d8f:;
  /* 12d41d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d41d91:;
  /* 12d41d91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12d41d94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d41d97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d41d9e pop edi */
  EDI = (pop32());
  /* 12d41d9f pop esi */
  ESI = (pop32());
  /* 12d41da0 pop ebx */
  EBX = (pop32());
  /* 12d41da1 mov esp, ebp */
  ESP = (EBP);
  /* 12d41da3 pop ebp */
  EBP = (pop32());
  /* 12d41da4 ret  */
  ESPCHK(0x12d41c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011db0 @ 0x12d41db0 (398 bytes, 140 insns) */
void f_12d41db0(void) {
  FTRACE(0x12d41db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41db1 mov ebp, esp */
  EBP = (ESP);
  /* 12d41db3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41db5 push 0x12d4a890 */
  push32((uint32_t)(0x12d4a890u));
  /* 12d41dba push 0x12d3b8d8 */
  push32((uint32_t)(0x12d3b8d8u));
  /* 12d41dbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d41dc5 push eax */
  push32((uint32_t)(EAX));
  /* 12d41dc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d41dcd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d41dd1 push esi */
  push32((uint32_t)(ESI));
  /* 12d41dd2 push edi */
  push32((uint32_t)(EDI));
  /* 12d41dd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d41dd6 cmp dword ptr [0x12d4e7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41ddd jne 0x12d41e22 */
  if (!C.zf) goto L_12d41e22;
  /* 12d41ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41de7 call dword ptr [0x12d50224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50224))), 0x12d41dedu);
  /* 12d41ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41def je 0x12d41dfd */
  if (C.zf) goto L_12d41dfd;
  /* 12d41df1 mov dword ptr [0x12d4e7c0], 1 */
  w32((uint32_t)(0x12d4e7c0), (0x1u));
  /* 12d41dfb jmp 0x12d41e22 */
  goto L_12d41e22;
L_12d41dfd:;
  /* 12d41dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41dff push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41e01 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d41e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41e05 call dword ptr [0x12d50324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50324))), 0x12d41e0bu);
  /* 12d41e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41e0d je 0x12d41e1b */
  if (C.zf) goto L_12d41e1b;
  /* 12d41e0f mov dword ptr [0x12d4e7c0], 2 */
  w32((uint32_t)(0x12d4e7c0), (0x2u));
  /* 12d41e19 jmp 0x12d41e22 */
  goto L_12d41e22;
L_12d41e1b:;
  /* 12d41e1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41e1d jmp 0x12d41f41 */
  goto L_12d41f41;
L_12d41e22:;
  /* 12d41e22 cmp dword ptr [0x12d4e7c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41e29 jne 0x12d41e46 */
  if (!C.zf) goto L_12d41e46;
  /* 12d41e2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41e2e push eax */
  push32((uint32_t)(EAX));
  /* 12d41e2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41e32 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41e33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d41e36 push edx */
  push32((uint32_t)(EDX));
  /* 12d41e37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41e3a push eax */
  push32((uint32_t)(EAX));
  /* 12d41e3b call dword ptr [0x12d50324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50324))), 0x12d41e41u);
  /* 12d41e41 jmp 0x12d41f41 */
  goto L_12d41f41;
L_12d41e46:;
  /* 12d41e46 cmp dword ptr [0x12d4e7c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41e4d jne 0x12d41f3f */
  if (!C.zf) goto L_12d41f3f;
  /* 12d41e53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41e57 jne 0x12d41e62 */
  if (!C.zf) goto L_12d41e62;
  /* 12d41e59 mov ecx, dword ptr [0x12d4e670] */
  ECX = (r32((uint32_t)(0x12d4e670)));
  /* 12d41e5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12d41e62:;
  /* 12d41e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41e66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d41e69 push edx */
  push32((uint32_t)(EDX));
  /* 12d41e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41e6d push eax */
  push32((uint32_t)(EAX));
  /* 12d41e6e call dword ptr [0x12d50224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50224))), 0x12d41e74u);
  /* 12d41e74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d41e77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41e7b jne 0x12d41e84 */
  if (!C.zf) goto L_12d41e84;
  /* 12d41e7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41e7f jmp 0x12d41f41 */
  goto L_12d41f41;
L_12d41e84:;
  /* 12d41e84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d41e8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d41e8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d41e90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41e93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d41e95 call 0x12d35970 */
  push32(0x12d41e9au); f_12d35970();
  /* 12d41e9a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12d41e9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d41ea0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d41ea3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d41ea6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d41ead jmp 0x12d41ec6 */
  goto L_12d41ec6;
  /* 12d41eaf mov eax, 1 */
  EAX = (0x1u);
  /* 12d41eb4 ret  */
  ESPCHK(0x12d41db0u, _esp0);
  ESP += 4; return;
  /* 12d41eb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d41eb8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d41ebf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d41ec6:;
  /* 12d41ec6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41eca jne 0x12d41ed0 */
  if (!C.zf) goto L_12d41ed0;
  /* 12d41ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41ece jmp 0x12d41f41 */
  goto L_12d41f41;
L_12d41ed0:;
  /* 12d41ed0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d41ed3 push edx */
  push32((uint32_t)(EDX));
  /* 12d41ed4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d41ed7 push eax */
  push32((uint32_t)(EAX));
  /* 12d41ed8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d41edb push ecx */
  push32((uint32_t)(ECX));
  /* 12d41edc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41edf push edx */
  push32((uint32_t)(EDX));
  /* 12d41ee0 call dword ptr [0x12d50224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50224))), 0x12d41ee6u);
  /* 12d41ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d41ee8 jne 0x12d41eee */
  if (!C.zf) goto L_12d41eee;
  /* 12d41eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d41eec jmp 0x12d41f41 */
  goto L_12d41f41;
L_12d41eee:;
  /* 12d41eee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41ef2 jne 0x12d41f16 */
  if (!C.zf) goto L_12d41f16;
  /* 12d41ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41efa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41efc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41efe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d41f01 push eax */
  push32((uint32_t)(EAX));
  /* 12d41f02 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d41f07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d41f0a push ecx */
  push32((uint32_t)(ECX));
  /* 12d41f0b call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d41f11u);
  /* 12d41f11 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d41f14 jmp 0x12d41f3a */
  goto L_12d41f3a;
L_12d41f16:;
  /* 12d41f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d41f1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d41f1d push edx */
  push32((uint32_t)(EDX));
  /* 12d41f1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d41f21 push eax */
  push32((uint32_t)(EAX));
  /* 12d41f22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d41f24 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d41f27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41f28 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d41f2d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d41f30 push edx */
  push32((uint32_t)(EDX));
  /* 12d41f31 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d41f37u);
  /* 12d41f37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d41f3a:;
  /* 12d41f3a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d41f3d jmp 0x12d41f41 */
  goto L_12d41f41;
L_12d41f3f:;
  /* 12d41f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d41f41:;
  /* 12d41f41 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12d41f44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d41f47 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d41f4e pop edi */
  EDI = (pop32());
  /* 12d41f4f pop esi */
  ESI = (pop32());
  /* 12d41f50 pop ebx */
  EBX = (pop32());
  /* 12d41f51 mov esp, ebp */
  ESP = (EBP);
  /* 12d41f53 pop ebp */
  EBP = (pop32());
  /* 12d41f54 ret  */
  ESPCHK(0x12d41db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x12d41f60 (11 bytes, 6 insns) */
void f_12d41f60(void) {
  FTRACE(0x12d41f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41f61 mov ebp, esp */
  EBP = (ESP);
  /* 12d41f63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41f66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41f69 pop ebp */
  EBP = (pop32());
  /* 12d41f6a ret  */
  ESPCHK(0x12d41f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f70 @ 0x12d41f70 (147 bytes, 43 insns) */
void f_12d41f70(void) {
  FTRACE(0x12d41f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d41f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d41f71 mov ebp, esp */
  EBP = (ESP);
  /* 12d41f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41f74 cmp dword ptr [0x12d4e660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41f7b jne 0x12d41f97 */
  if (!C.zf) goto L_12d41f97;
  /* 12d41f7d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41f81 jl 0x12d41f92 */
  if ((C.sf!=C.of)) goto L_12d41f92;
  /* 12d41f83 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41f87 jg 0x12d41f92 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d41f92;
  /* 12d41f89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41f8c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41f8f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d41f92:;
  /* 12d41f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41f95 jmp 0x12d41fff */
  goto L_12d41fff;
L_12d41f97:;
  /* 12d41f97 push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d41f9c call dword ptr [0x12d50254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50254))), 0x12d41fa2u);
  /* 12d41fa2 cmp dword ptr [0x12d4e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41fa9 je 0x12d41fc9 */
  if (C.zf) goto L_12d41fc9;
  /* 12d41fab push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d41fb0 call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d41fb6u);
  /* 12d41fb6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d41fb8 call 0x12d361d0 */
  push32(0x12d41fbdu); f_12d361d0();
  /* 12d41fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41fc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d41fc7 jmp 0x12d41fd0 */
  goto L_12d41fd0;
L_12d41fc9:;
  /* 12d41fc9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d41fd0:;
  /* 12d41fd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d41fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d41fd4 call 0x12d42010 */
  push32(0x12d41fd9u); f_12d42010();
  /* 12d41fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41fdc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d41fdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d41fe3 je 0x12d41ff1 */
  if (C.zf) goto L_12d41ff1;
  /* 12d41fe5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d41fe7 call 0x12d36270 */
  push32(0x12d41fecu); f_12d36270();
  /* 12d41fec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d41fef jmp 0x12d41ffc */
  goto L_12d41ffc;
L_12d41ff1:;
  /* 12d41ff1 push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d41ff6 call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d41ffcu);
L_12d41ffc:;
  /* 12d41ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12d41fff:;
  /* 12d41fff mov esp, ebp */
  ESP = (EBP);
  /* 12d42001 pop ebp */
  EBP = (pop32());
  /* 12d42002 ret  */
  ESPCHK(0x12d41f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x12d42010 (299 bytes, 91 insns) */
void f_12d42010(void) {
  FTRACE(0x12d42010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42010 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42011 mov ebp, esp */
  EBP = (ESP);
  /* 12d42013 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42016 cmp dword ptr [0x12d4e660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4201d jne 0x12d4203c */
  if (!C.zf) goto L_12d4203c;
  /* 12d4201f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42023 jl 0x12d42034 */
  if ((C.sf!=C.of)) goto L_12d42034;
  /* 12d42025 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42029 jg 0x12d42034 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d42034;
  /* 12d4202b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4202e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42031 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d42034:;
  /* 12d42034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42037 jmp 0x12d42137 */
  goto L_12d42137;
L_12d4203c:;
  /* 12d4203c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42043 jge 0x12d42083 */
  if ((C.sf==C.of)) goto L_12d42083;
  /* 12d42045 cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4204c jle 0x12d42061 */
  if ((C.zf||C.sf!=C.of)) goto L_12d42061;
  /* 12d4204e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d42050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42053 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42054 call 0x12d387e0 */
  push32(0x12d42059u); f_12d387e0();
  /* 12d42059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4205c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d4205f jmp 0x12d42075 */
  goto L_12d42075;
L_12d42061:;
  /* 12d42061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42064 mov eax, dword ptr [0x12d4ccb8] */
  EAX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d42069 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4206b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d4206f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d42072 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d42075:;
  /* 12d42075 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42079 jne 0x12d42083 */
  if (!C.zf) goto L_12d42083;
  /* 12d4207b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4207e jmp 0x12d42137 */
  goto L_12d42137;
L_12d42083:;
  /* 12d42083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42086 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d42089 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d4208f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d42095 mov eax, dword ptr [0x12d4ccb8] */
  EAX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d4209a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4209c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d420a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d420a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d420a8 je 0x12d420cc */
  if (C.zf) goto L_12d420cc;
  /* 12d420aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d420ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d420b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d420b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12d420b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d420bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12d420bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12d420c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d420ca jmp 0x12d420dd */
  goto L_12d420dd;
L_12d420cc:;
  /* 12d420cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d420cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d420d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12d420d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12d420dd:;
  /* 12d420dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d420df push 0 */
  push32((uint32_t)(0x0u));
  /* 12d420e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d420e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12d420e6 push edx */
  push32((uint32_t)(EDX));
  /* 12d420e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d420ea push eax */
  push32((uint32_t)(EAX));
  /* 12d420eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d420ee push ecx */
  push32((uint32_t)(ECX));
  /* 12d420ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d420f4 mov edx, dword ptr [0x12d4e660] */
  EDX = (r32((uint32_t)(0x12d4e660)));
  /* 12d420fa push edx */
  push32((uint32_t)(EDX));
  /* 12d420fb call 0x12d3abc0 */
  push32(0x12d42100u); f_12d3abc0();
  /* 12d42100 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d42106 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4210a jne 0x12d42111 */
  if (!C.zf) goto L_12d42111;
  /* 12d4210c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4210f jmp 0x12d42137 */
  goto L_12d42137;
L_12d42111:;
  /* 12d42111 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42115 jne 0x12d42121 */
  if (!C.zf) goto L_12d42121;
  /* 12d42117 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4211a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d4211f jmp 0x12d42137 */
  goto L_12d42137;
L_12d42121:;
  /* 12d42121 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42124 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d42129 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12d4212c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d42132 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d42135 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12d42137:;
  /* 12d42137 mov esp, ebp */
  ESP = (EBP);
  /* 12d42139 pop ebp */
  EBP = (pop32());
  /* 12d4213a ret  */
  ESPCHK(0x12d42010u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12d42140 (52 bytes, 19 insns) */
void f_12d42140(void) {
  FTRACE(0x12d42140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42140 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d42144 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d42148 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4214a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d4214e jne 0x12d42159 */
  if (!C.zf) goto L_12d42159;
  /* 12d42150 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d42154 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d42156 ret 0x10 */
  ESPCHK(0x12d42140u, _esp0);
  ESP += 20; return;
L_12d42159:;
  /* 12d42159 push ebx */
  push32((uint32_t)(EBX));
  /* 12d4215a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d4215c mov ebx, eax */
  EBX = (EAX);
  /* 12d4215e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d42162 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d42166 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42168 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d4216c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d4216e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42170 pop ebx */
  EBX = (pop32());
  /* 12d42171 ret 0x10 */
  ESPCHK(0x12d42140u, _esp0);
  ESP += 20; return;
}

/* FUN_10012180 @ 0x12d42180 (46 bytes, 18 insns) */
void f_12d42180(void) {
  FTRACE(0x12d42180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42180 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42181 mov ebp, esp */
  EBP = (ESP);
  /* 12d42183 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42184 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d42186 call 0x12d361d0 */
  push32(0x12d4218bu); f_12d361d0();
  /* 12d4218b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4218e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42191 push eax */
  push32((uint32_t)(EAX));
  /* 12d42192 call 0x12d421b0 */
  push32(0x12d42197u); f_12d421b0();
  /* 12d42197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4219a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d4219d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d4219f call 0x12d36270 */
  push32(0x12d421a4u); f_12d36270();
  /* 12d421a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d421a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d421aa mov esp, ebp */
  ESP = (EBP);
  /* 12d421ac pop ebp */
  EBP = (pop32());
  /* 12d421ad ret  */
  ESPCHK(0x12d42180u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12d421b0 (198 bytes, 69 insns) */
void f_12d421b0(void) {
  FTRACE(0x12d421b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d421b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d421b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d421b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d421b6 mov eax, dword ptr [0x12d4e480] */
  EAX = (r32((uint32_t)(0x12d4e480)));
  /* 12d421bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d421be cmp dword ptr [0x12d4ff80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ff80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d421c5 jne 0x12d421ce */
  if (!C.zf) goto L_12d421ce;
  /* 12d421c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d421c9 jmp 0x12d42272 */
  goto L_12d42272;
L_12d421ce:;
  /* 12d421ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d421d2 jne 0x12d421f6 */
  if (!C.zf) goto L_12d421f6;
  /* 12d421d4 cmp dword ptr [0x12d4e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d421db je 0x12d421f6 */
  if (C.zf) goto L_12d421f6;
  /* 12d421dd call 0x12d422d0 */
  push32(0x12d421e2u); f_12d422d0();
  /* 12d421e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d421e4 je 0x12d421ed */
  if (C.zf) goto L_12d421ed;
  /* 12d421e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d421e8 jmp 0x12d42272 */
  goto L_12d42272;
L_12d421ed:;
  /* 12d421ed mov ecx, dword ptr [0x12d4e480] */
  ECX = (r32((uint32_t)(0x12d4e480)));
  /* 12d421f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d421f6:;
  /* 12d421f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d421fa je 0x12d42270 */
  if (C.zf) goto L_12d42270;
  /* 12d421fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42200 je 0x12d42270 */
  if (C.zf) goto L_12d42270;
  /* 12d42202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42205 push edx */
  push32((uint32_t)(EDX));
  /* 12d42206 call 0x12d35600 */
  push32(0x12d4220bu); f_12d35600();
  /* 12d4220b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4220e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d42211:;
  /* 12d42211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42214 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42217 je 0x12d42270 */
  if (C.zf) goto L_12d42270;
  /* 12d42219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d4221c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d4221e push edx */
  push32((uint32_t)(EDX));
  /* 12d4221f call 0x12d35600 */
  push32(0x12d42224u); f_12d35600();
  /* 12d42224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42227 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4222a jbe 0x12d42265 */
  if ((C.cf||C.zf)) goto L_12d42265;
  /* 12d4222c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d4222f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d42231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42234 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12d42238 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4223b jne 0x12d42265 */
  if (!C.zf) goto L_12d42265;
  /* 12d4223d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42240 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42244 push edx */
  push32((uint32_t)(EDX));
  /* 12d42245 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42248 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d4224a push ecx */
  push32((uint32_t)(ECX));
  /* 12d4224b call 0x12d42280 */
  push32(0x12d42250u); f_12d42280();
  /* 12d42250 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d42255 jne 0x12d42265 */
  if (!C.zf) goto L_12d42265;
  /* 12d42257 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d4225a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d4225c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4225f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12d42263 jmp 0x12d42272 */
  goto L_12d42272;
L_12d42265:;
  /* 12d42265 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42268 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4226b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d4226e jmp 0x12d42211 */
  goto L_12d42211;
L_12d42270:;
  /* 12d42270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d42272:;
  /* 12d42272 mov esp, ebp */
  ESP = (EBP);
  /* 12d42274 pop ebp */
  EBP = (pop32());
  /* 12d42275 ret  */
  ESPCHK(0x12d421b0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12d42280 (79 bytes, 32 insns) */
void f_12d42280(void) {
  FTRACE(0x12d42280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42280 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42281 mov ebp, esp */
  EBP = (ESP);
  /* 12d42283 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42284 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42288 jne 0x12d4228e */
  if (!C.zf) goto L_12d4228e;
  /* 12d4228a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4228c jmp 0x12d422cb */
  goto L_12d422cb;
L_12d4228e:;
  /* 12d4228e mov eax, dword ptr [0x12d4fb44] */
  EAX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d42293 push eax */
  push32((uint32_t)(EAX));
  /* 12d42294 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d42297 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d4229b push edx */
  push32((uint32_t)(EDX));
  /* 12d4229c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4229f push eax */
  push32((uint32_t)(EAX));
  /* 12d422a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d422a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d422a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d422a6 mov edx, dword ptr [0x12d4fde4] */
  EDX = (r32((uint32_t)(0x12d4fde4)));
  /* 12d422ac push edx */
  push32((uint32_t)(EDX));
  /* 12d422ad call 0x12d42380 */
  push32(0x12d422b2u); f_12d42380();
  /* 12d422b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d422b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d422b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d422bc jne 0x12d422c5 */
  if (!C.zf) goto L_12d422c5;
  /* 12d422be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12d422c3 jmp 0x12d422cb */
  goto L_12d422cb;
L_12d422c5:;
  /* 12d422c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d422c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d422cb:;
  /* 12d422cb mov esp, ebp */
  ESP = (EBP);
  /* 12d422cd pop ebp */
  EBP = (pop32());
  /* 12d422ce ret  */
  ESPCHK(0x12d42280u, _esp0);
  ESP += 4; return;
}

/* FUN_100122d0 @ 0x12d422d0 (174 bytes, 66 insns) */
void f_12d422d0(void) {
  FTRACE(0x12d422d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d422d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d422d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d422d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d422d6 mov eax, dword ptr [0x12d4e488] */
  EAX = (r32((uint32_t)(0x12d4e488)));
  /* 12d422db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d422de:;
  /* 12d422de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d422e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d422e4 je 0x12d42378 */
  if (C.zf) goto L_12d42378;
  /* 12d422ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d422ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d422ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d422f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d422f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d422f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d422f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d422f9 push eax */
  push32((uint32_t)(EAX));
  /* 12d422fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d422fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d422fe call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d42304u);
  /* 12d42304 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d42307 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4230b jne 0x12d42312 */
  if (!C.zf) goto L_12d42312;
  /* 12d4230d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d42310 jmp 0x12d4237a */
  goto L_12d4237a;
L_12d42312:;
  /* 12d42312 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d42314 push 0x12d4a89c */
  push32((uint32_t)(0x12d4a89cu));
  /* 12d42319 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d4231b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4231e push ecx */
  push32((uint32_t)(ECX));
  /* 12d4231f call 0x12d327d0 */
  push32(0x12d42324u); f_12d327d0();
  /* 12d42324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42327 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d4232a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4232e jne 0x12d42335 */
  if (!C.zf) goto L_12d42335;
  /* 12d42330 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d42333 jmp 0x12d4237a */
  goto L_12d4237a;
L_12d42335:;
  /* 12d42335 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d42337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d42339 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4233c push edx */
  push32((uint32_t)(EDX));
  /* 12d4233d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42340 push eax */
  push32((uint32_t)(EAX));
  /* 12d42341 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d42343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42346 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d42348 push edx */
  push32((uint32_t)(EDX));
  /* 12d42349 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d4234b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d4234d call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d42353u);
  /* 12d42353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d42355 jne 0x12d4235c */
  if (!C.zf) goto L_12d4235c;
  /* 12d42357 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d4235a jmp 0x12d4237a */
  goto L_12d4237a;
L_12d4235c:;
  /* 12d4235c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d4235e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42361 push eax */
  push32((uint32_t)(EAX));
  /* 12d42362 call 0x12d427d0 */
  push32(0x12d42367u); f_12d427d0();
  /* 12d42367 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4236a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d4236d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42370 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d42373 jmp 0x12d422de */
  goto L_12d422de;
L_12d42378:;
  /* 12d42378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d4237a:;
  /* 12d4237a mov esp, ebp */
  ESP = (EBP);
  /* 12d4237c pop ebp */
  EBP = (pop32());
  /* 12d4237d ret  */
  ESPCHK(0x12d422d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x12d42380 (970 bytes, 340 insns) */
void f_12d42380(void) {
  FTRACE(0x12d42380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42380 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42381 mov ebp, esp */
  EBP = (ESP);
  /* 12d42383 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d42385 push 0x12d4a8f0 */
  push32((uint32_t)(0x12d4a8f0u));
  /* 12d4238a push 0x12d3b8d8 */
  push32((uint32_t)(0x12d3b8d8u));
  /* 12d4238f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d42395 push eax */
  push32((uint32_t)(EAX));
  /* 12d42396 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d4239d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d423a0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d423a1 push esi */
  push32((uint32_t)(ESI));
  /* 12d423a2 push edi */
  push32((uint32_t)(EDI));
  /* 12d423a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d423a6 cmp dword ptr [0x12d4e7c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d423ad jne 0x12d42406 */
  if (!C.zf) goto L_12d42406;
  /* 12d423af push 1 */
  push32((uint32_t)(0x1u));
  /* 12d423b1 push 0x12d49f4c */
  push32((uint32_t)(0x12d49f4cu));
  /* 12d423b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d423b8 push 0x12d49f4c */
  push32((uint32_t)(0x12d49f4cu));
  /* 12d423bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d423bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d423c1 call dword ptr [0x12d5021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5021c))), 0x12d423c7u);
  /* 12d423c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d423c9 je 0x12d423d7 */
  if (C.zf) goto L_12d423d7;
  /* 12d423cb mov dword ptr [0x12d4e7c4], 1 */
  w32((uint32_t)(0x12d4e7c4), (0x1u));
  /* 12d423d5 jmp 0x12d42406 */
  goto L_12d42406;
L_12d423d7:;
  /* 12d423d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d423d9 push 0x12d49f48 */
  push32((uint32_t)(0x12d49f48u));
  /* 12d423de push 1 */
  push32((uint32_t)(0x1u));
  /* 12d423e0 push 0x12d49f48 */
  push32((uint32_t)(0x12d49f48u));
  /* 12d423e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d423e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d423e9 call dword ptr [0x12d50220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50220))), 0x12d423efu);
  /* 12d423ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d423f1 je 0x12d423ff */
  if (C.zf) goto L_12d423ff;
  /* 12d423f3 mov dword ptr [0x12d4e7c4], 2 */
  w32((uint32_t)(0x12d4e7c4), (0x2u));
  /* 12d423fd jmp 0x12d42406 */
  goto L_12d42406;
L_12d423ff:;
  /* 12d423ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42401 jmp 0x12d42764 */
  goto L_12d42764;
L_12d42406:;
  /* 12d42406 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4240a jle 0x12d4241f */
  if ((C.zf||C.sf!=C.of)) goto L_12d4241f;
  /* 12d4240c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4240f push eax */
  push32((uint32_t)(EAX));
  /* 12d42410 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d42413 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42414 call 0x12d42780 */
  push32(0x12d42419u); f_12d42780();
  /* 12d42419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4241c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12d4241f:;
  /* 12d4241f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42423 jle 0x12d42438 */
  if ((C.zf||C.sf!=C.of)) goto L_12d42438;
  /* 12d42425 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d42428 push edx */
  push32((uint32_t)(EDX));
  /* 12d42429 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d4242c push eax */
  push32((uint32_t)(EAX));
  /* 12d4242d call 0x12d42780 */
  push32(0x12d42432u); f_12d42780();
  /* 12d42432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42435 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12d42438:;
  /* 12d42438 cmp dword ptr [0x12d4e7c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4243f jne 0x12d42464 */
  if (!C.zf) goto L_12d42464;
  /* 12d42441 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d42444 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42445 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d42448 push edx */
  push32((uint32_t)(EDX));
  /* 12d42449 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4244c push eax */
  push32((uint32_t)(EAX));
  /* 12d4244d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d42450 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42451 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42454 push edx */
  push32((uint32_t)(EDX));
  /* 12d42455 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42458 push eax */
  push32((uint32_t)(EAX));
  /* 12d42459 call dword ptr [0x12d50220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50220))), 0x12d4245fu);
  /* 12d4245f jmp 0x12d42764 */
  goto L_12d42764;
L_12d42464:;
  /* 12d42464 cmp dword ptr [0x12d4e7c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4246b jne 0x12d42762 */
  if (!C.zf) goto L_12d42762;
  /* 12d42471 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42475 jne 0x12d42480 */
  if (!C.zf) goto L_12d42480;
  /* 12d42477 mov ecx, dword ptr [0x12d4e670] */
  ECX = (r32((uint32_t)(0x12d4e670)));
  /* 12d4247d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12d42480:;
  /* 12d42480 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42484 je 0x12d42490 */
  if (C.zf) goto L_12d42490;
  /* 12d42486 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4248a jne 0x12d4260c */
  if (!C.zf) goto L_12d4260c;
L_12d42490:;
  /* 12d42490 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d42493 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42496 jne 0x12d424a2 */
  if (!C.zf) goto L_12d424a2;
  /* 12d42498 mov eax, 2 */
  EAX = (0x2u);
  /* 12d4249d jmp 0x12d42764 */
  goto L_12d42764;
L_12d424a2:;
  /* 12d424a2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d424a6 jle 0x12d424b2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d424b2;
  /* 12d424a8 mov eax, 1 */
  EAX = (0x1u);
  /* 12d424ad jmp 0x12d42764 */
  goto L_12d42764;
L_12d424b2:;
  /* 12d424b2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d424b6 jle 0x12d424c2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d424c2;
  /* 12d424b8 mov eax, 3 */
  EAX = (0x3u);
  /* 12d424bd jmp 0x12d42764 */
  goto L_12d42764;
L_12d424c2:;
  /* 12d424c2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12d424c5 push eax */
  push32((uint32_t)(EAX));
  /* 12d424c6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d424c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d424ca call dword ptr [0x12d502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502ec))), 0x12d424d0u);
  /* 12d424d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d424d2 jne 0x12d424db */
  if (!C.zf) goto L_12d424db;
  /* 12d424d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d424d6 jmp 0x12d42764 */
  goto L_12d42764;
L_12d424db:;
  /* 12d424db cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d424df jne 0x12d424e7 */
  if (!C.zf) goto L_12d424e7;
  /* 12d424e1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d424e5 je 0x12d42514 */
  if (C.zf) goto L_12d42514;
L_12d424e7:;
  /* 12d424e7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d424eb jne 0x12d424f3 */
  if (!C.zf) goto L_12d424f3;
  /* 12d424ed cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d424f1 je 0x12d42514 */
  if (C.zf) goto L_12d42514;
L_12d424f3:;
  /* 12d424f3 push 0x12d4a8b0 */
  push32((uint32_t)(0x12d4a8b0u));
  /* 12d424f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d424fa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12d424ff push 0x12d4a8a8 */
  push32((uint32_t)(0x12d4a8a8u));
  /* 12d42504 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42506 call 0x12d31890 */
  push32(0x12d4250bu); f_12d31890();
  /* 12d4250b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4250e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42511 jne 0x12d42514 */
  if (!C.zf) goto L_12d42514;
  /* 12d42513 int3  */
  x86_unimpl("int3 @ 0x12d42513");
L_12d42514:;
  /* 12d42514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d42516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d42518 jne 0x12d424db */
  if (!C.zf) goto L_12d424db;
  /* 12d4251a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4251e jle 0x12d42593 */
  if ((C.zf||C.sf!=C.of)) goto L_12d42593;
  /* 12d42520 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42524 jae 0x12d42530 */
  if (!C.cf) goto L_12d42530;
  /* 12d42526 mov eax, 3 */
  EAX = (0x3u);
  /* 12d4252b jmp 0x12d42764 */
  goto L_12d42764;
L_12d42530:;
  /* 12d42530 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12d42533 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12d42536 jmp 0x12d42541 */
  goto L_12d42541;
L_12d42538:;
  /* 12d42538 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d4253b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4253e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12d42541:;
  /* 12d42541 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d42544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42546 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d42548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d4254a je 0x12d42589 */
  if (C.zf) goto L_12d42589;
  /* 12d4254c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d4254f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d42551 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d42554 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d42556 je 0x12d42589 */
  if (C.zf) goto L_12d42589;
  /* 12d42558 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4255b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d4255d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d4255f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d42562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42564 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d42566 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42568 jl 0x12d42587 */
  if ((C.sf!=C.of)) goto L_12d42587;
  /* 12d4256a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d4256d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d4256f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d42571 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d42574 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d42576 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d42579 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4257b jg 0x12d42587 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d42587;
  /* 12d4257d mov eax, 2 */
  EAX = (0x2u);
  /* 12d42582 jmp 0x12d42764 */
  goto L_12d42764;
L_12d42587:;
  /* 12d42587 jmp 0x12d42538 */
  goto L_12d42538;
L_12d42589:;
  /* 12d42589 mov eax, 3 */
  EAX = (0x3u);
  /* 12d4258e jmp 0x12d42764 */
  goto L_12d42764;
L_12d42593:;
  /* 12d42593 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42597 jle 0x12d4260c */
  if ((C.zf||C.sf!=C.of)) goto L_12d4260c;
  /* 12d42599 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4259d jae 0x12d425a9 */
  if (!C.cf) goto L_12d425a9;
  /* 12d4259f mov eax, 1 */
  EAX = (0x1u);
  /* 12d425a4 jmp 0x12d42764 */
  goto L_12d42764;
L_12d425a9:;
  /* 12d425a9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12d425ac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12d425af jmp 0x12d425ba */
  goto L_12d425ba;
L_12d425b1:;
  /* 12d425b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d425b4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d425b7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12d425ba:;
  /* 12d425ba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d425bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d425bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d425c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d425c3 je 0x12d42602 */
  if (C.zf) goto L_12d42602;
  /* 12d425c5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d425c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d425ca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d425cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d425cf je 0x12d42602 */
  if (C.zf) goto L_12d42602;
  /* 12d425d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d425d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d425d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d425d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d425db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d425dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d425df cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d425e1 jl 0x12d42600 */
  if ((C.sf!=C.of)) goto L_12d42600;
  /* 12d425e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d425e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d425e8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d425ea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d425ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d425ef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d425f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d425f4 jg 0x12d42600 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d42600;
  /* 12d425f6 mov eax, 2 */
  EAX = (0x2u);
  /* 12d425fb jmp 0x12d42764 */
  goto L_12d42764;
L_12d42600:;
  /* 12d42600 jmp 0x12d425b1 */
  goto L_12d425b1;
L_12d42602:;
  /* 12d42602 mov eax, 1 */
  EAX = (0x1u);
  /* 12d42607 jmp 0x12d42764 */
  goto L_12d42764;
L_12d4260c:;
  /* 12d4260c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d4260e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d42610 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d42613 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42614 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d42617 push edx */
  push32((uint32_t)(EDX));
  /* 12d42618 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d4261a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d4261d push eax */
  push32((uint32_t)(EAX));
  /* 12d4261e call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d42624u);
  /* 12d42624 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d42627 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4262b jne 0x12d42634 */
  if (!C.zf) goto L_12d42634;
  /* 12d4262d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4262f jmp 0x12d42764 */
  goto L_12d42764;
L_12d42634:;
  /* 12d42634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d4263b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d4263e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d42640 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42643 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d42645 call 0x12d35970 */
  push32(0x12d4264au); f_12d35970();
  /* 12d4264a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12d4264d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d42650 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12d42653 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d42656 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d4265d jmp 0x12d42676 */
  goto L_12d42676;
  /* 12d4265f mov eax, 1 */
  EAX = (0x1u);
  /* 12d42664 ret  */
  ESPCHK(0x12d42380u, _esp0);
  ESP += 4; return;
  /* 12d42665 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d42668 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d4266f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d42676:;
  /* 12d42676 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4267a jne 0x12d42683 */
  if (!C.zf) goto L_12d42683;
  /* 12d4267c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4267e jmp 0x12d42764 */
  goto L_12d42764;
L_12d42683:;
  /* 12d42683 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d42686 push edx */
  push32((uint32_t)(EDX));
  /* 12d42687 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d4268a push eax */
  push32((uint32_t)(EAX));
  /* 12d4268b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d4268e push ecx */
  push32((uint32_t)(ECX));
  /* 12d4268f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d42692 push edx */
  push32((uint32_t)(EDX));
  /* 12d42693 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d42695 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d42698 push eax */
  push32((uint32_t)(EAX));
  /* 12d42699 call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d4269fu);
  /* 12d4269f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d426a1 jne 0x12d426aa */
  if (!C.zf) goto L_12d426aa;
  /* 12d426a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d426a5 jmp 0x12d42764 */
  goto L_12d42764;
L_12d426aa:;
  /* 12d426aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d426ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12d426ae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d426b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d426b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d426b5 push edx */
  push32((uint32_t)(EDX));
  /* 12d426b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d426b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d426bb push eax */
  push32((uint32_t)(EAX));
  /* 12d426bc call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d426c2u);
  /* 12d426c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d426c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d426c9 jne 0x12d426d2 */
  if (!C.zf) goto L_12d426d2;
  /* 12d426cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d426cd jmp 0x12d42764 */
  goto L_12d42764;
L_12d426d2:;
  /* 12d426d2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d426d9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d426dc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d426de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d426e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d426e3 call 0x12d35970 */
  push32(0x12d426e8u); f_12d35970();
  /* 12d426e8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12d426eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d426ee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12d426f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d426f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d426fb jmp 0x12d42714 */
  goto L_12d42714;
  /* 12d426fd mov eax, 1 */
  EAX = (0x1u);
  /* 12d42702 ret  */
  ESPCHK(0x12d42380u, _esp0);
  ESP += 4; return;
  /* 12d42703 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d42706 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d4270d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d42714:;
  /* 12d42714 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42718 jne 0x12d4271e */
  if (!C.zf) goto L_12d4271e;
  /* 12d4271a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4271c jmp 0x12d42764 */
  goto L_12d42764;
L_12d4271e:;
  /* 12d4271e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d42721 push edx */
  push32((uint32_t)(EDX));
  /* 12d42722 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d42725 push eax */
  push32((uint32_t)(EAX));
  /* 12d42726 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d42729 push ecx */
  push32((uint32_t)(ECX));
  /* 12d4272a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d4272d push edx */
  push32((uint32_t)(EDX));
  /* 12d4272e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d42730 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d42733 push eax */
  push32((uint32_t)(EAX));
  /* 12d42734 call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d4273au);
  /* 12d4273a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d4273c jne 0x12d42742 */
  if (!C.zf) goto L_12d42742;
  /* 12d4273e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42740 jmp 0x12d42764 */
  goto L_12d42764;
L_12d42742:;
  /* 12d42742 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d42745 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42746 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d42749 push edx */
  push32((uint32_t)(EDX));
  /* 12d4274a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d4274d push eax */
  push32((uint32_t)(EAX));
  /* 12d4274e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d42751 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42752 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42755 push edx */
  push32((uint32_t)(EDX));
  /* 12d42756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42759 push eax */
  push32((uint32_t)(EAX));
  /* 12d4275a call dword ptr [0x12d5021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5021c))), 0x12d42760u);
  /* 12d42760 jmp 0x12d42764 */
  goto L_12d42764;
L_12d42762:;
  /* 12d42762 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d42764:;
  /* 12d42764 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12d42767 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d4276a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d42771 pop edi */
  EDI = (pop32());
  /* 12d42772 pop esi */
  ESI = (pop32());
  /* 12d42773 pop ebx */
  EBX = (pop32());
  /* 12d42774 mov esp, ebp */
  ESP = (EBP);
  /* 12d42776 pop ebp */
  EBP = (pop32());
  /* 12d42777 ret  */
  ESPCHK(0x12d42380u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x12d42780 (80 bytes, 32 insns) */
void f_12d42780(void) {
  FTRACE(0x12d42780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42781 mov ebp, esp */
  EBP = (ESP);
  /* 12d42783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42789 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d4278c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d4278f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d42792:;
  /* 12d42792 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42798 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d4279b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d4279e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d427a0 je 0x12d427b7 */
  if (C.zf) goto L_12d427b7;
  /* 12d427a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d427a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d427a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d427aa je 0x12d427b7 */
  if (C.zf) goto L_12d427b7;
  /* 12d427ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d427af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d427b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d427b5 jmp 0x12d42792 */
  goto L_12d42792;
L_12d427b7:;
  /* 12d427b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d427ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d427bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d427bf jne 0x12d427c9 */
  if (!C.zf) goto L_12d427c9;
  /* 12d427c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d427c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d427c7 jmp 0x12d427cc */
  goto L_12d427cc;
L_12d427c9:;
  /* 12d427c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12d427cc:;
  /* 12d427cc mov esp, ebp */
  ESP = (EBP);
  /* 12d427ce pop ebp */
  EBP = (pop32());
  /* 12d427cf ret  */
  ESPCHK(0x12d42780u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x12d427d0 (736 bytes, 224 insns) */
void f_12d427d0(void) {
  FTRACE(0x12d427d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d427d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d427d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d427d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d427d6 push esi */
  push32((uint32_t)(ESI));
  /* 12d427d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d427db je 0x12d427fc */
  if (C.zf) goto L_12d427fc;
  /* 12d427dd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d427df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d427e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d427e3 call 0x12d42c20 */
  push32(0x12d427e8u); f_12d42c20();
  /* 12d427e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d427eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d427ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d427f2 je 0x12d427fc */
  if (C.zf) goto L_12d427fc;
  /* 12d427f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d427f7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d427fa jne 0x12d42804 */
  if (!C.zf) goto L_12d42804;
L_12d427fc:;
  /* 12d427fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d427ff jmp 0x12d42aab */
  goto L_12d42aab;
L_12d42804:;
  /* 12d42804 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d42807 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d4280b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d4280d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d4280f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12d42810 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d42813 mov ecx, dword ptr [0x12d4e480] */
  ECX = (r32((uint32_t)(0x12d4e480)));
  /* 12d42819 cmp ecx, dword ptr [0x12d4e484] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4e484))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4281f jne 0x12d42835 */
  if (!C.zf) goto L_12d42835;
  /* 12d42821 mov edx, dword ptr [0x12d4e480] */
  EDX = (r32((uint32_t)(0x12d4e480)));
  /* 12d42827 push edx */
  push32((uint32_t)(EDX));
  /* 12d42828 call 0x12d42b30 */
  push32(0x12d4282du); f_12d42b30();
  /* 12d4282d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42830 mov dword ptr [0x12d4e480], eax */
  w32((uint32_t)(0x12d4e480), (EAX));
L_12d42835:;
  /* 12d42835 cmp dword ptr [0x12d4e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4283c jne 0x12d428f5 */
  if (!C.zf) goto L_12d428f5;
  /* 12d42842 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42846 je 0x12d42867 */
  if (C.zf) goto L_12d42867;
  /* 12d42848 cmp dword ptr [0x12d4e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4284f je 0x12d42867 */
  if (C.zf) goto L_12d42867;
  /* 12d42851 call 0x12d422d0 */
  push32(0x12d42856u); f_12d422d0();
  /* 12d42856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d42858 je 0x12d42862 */
  if (C.zf) goto L_12d42862;
  /* 12d4285a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d4285d jmp 0x12d42aab */
  goto L_12d42aab;
L_12d42862:;
  /* 12d42862 jmp 0x12d428f5 */
  goto L_12d428f5;
L_12d42867:;
  /* 12d42867 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4286b je 0x12d42874 */
  if (C.zf) goto L_12d42874;
  /* 12d4286d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d4286f jmp 0x12d42aab */
  goto L_12d42aab;
L_12d42874:;
  /* 12d42874 cmp dword ptr [0x12d4e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4287b jne 0x12d428b4 */
  if (!C.zf) goto L_12d428b4;
  /* 12d4287d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12d42882 push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d42887 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42889 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d4288b call 0x12d327d0 */
  push32(0x12d42890u); f_12d327d0();
  /* 12d42890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42893 mov dword ptr [0x12d4e480], eax */
  w32((uint32_t)(0x12d4e480), (EAX));
  /* 12d42898 cmp dword ptr [0x12d4e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4289f jne 0x12d428a9 */
  if (!C.zf) goto L_12d428a9;
  /* 12d428a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d428a4 jmp 0x12d42aab */
  goto L_12d42aab;
L_12d428a9:;
  /* 12d428a9 mov eax, dword ptr [0x12d4e480] */
  EAX = (r32((uint32_t)(0x12d4e480)));
  /* 12d428ae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d428b4:;
  /* 12d428b4 cmp dword ptr [0x12d4e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d428bb jne 0x12d428f5 */
  if (!C.zf) goto L_12d428f5;
  /* 12d428bd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12d428c2 push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d428c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d428c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d428cb call 0x12d327d0 */
  push32(0x12d428d0u); f_12d327d0();
  /* 12d428d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d428d3 mov dword ptr [0x12d4e488], eax */
  w32((uint32_t)(0x12d4e488), (EAX));
  /* 12d428d8 cmp dword ptr [0x12d4e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d428df jne 0x12d428e9 */
  if (!C.zf) goto L_12d428e9;
  /* 12d428e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d428e4 jmp 0x12d42aab */
  goto L_12d42aab;
L_12d428e9:;
  /* 12d428e9 mov ecx, dword ptr [0x12d4e488] */
  ECX = (r32((uint32_t)(0x12d4e488)));
  /* 12d428ef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12d428f5:;
  /* 12d428f5 mov edx, dword ptr [0x12d4e480] */
  EDX = (r32((uint32_t)(0x12d4e480)));
  /* 12d428fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d428fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d42901 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42904 push eax */
  push32((uint32_t)(EAX));
  /* 12d42905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42908 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42909 call 0x12d42ab0 */
  push32(0x12d4290eu); f_12d42ab0();
  /* 12d4290e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42911 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d42914 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42918 jl 0x12d429b1 */
  if ((C.sf!=C.of)) goto L_12d429b1;
  /* 12d4291e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42921 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42924 je 0x12d429b1 */
  if (C.zf) goto L_12d429b1;
  /* 12d4292a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d4292e je 0x12d429a3 */
  if (C.zf) goto L_12d429a3;
  /* 12d42930 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42938 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d4293b push edx */
  push32((uint32_t)(EDX));
  /* 12d4293c call 0x12d33260 */
  push32(0x12d42941u); f_12d33260();
  /* 12d42941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42944 jmp 0x12d4294f */
  goto L_12d4294f;
L_12d42946:;
  /* 12d42946 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4294c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d4294f:;
  /* 12d4294f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42952 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42955 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42959 je 0x12d42970 */
  if (C.zf) goto L_12d42970;
  /* 12d4295b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d4295e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42961 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42964 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42967 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12d4296b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d4296e jmp 0x12d42946 */
  goto L_12d42946;
L_12d42970:;
  /* 12d42970 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12d42975 push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d4297a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d4297c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d4297f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d42982 push eax */
  push32((uint32_t)(EAX));
  /* 12d42983 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42986 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42987 call 0x12d32c60 */
  push32(0x12d4298cu); f_12d32c60();
  /* 12d4298c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d4298f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d42992 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42996 je 0x12d429a1 */
  if (C.zf) goto L_12d429a1;
  /* 12d42998 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d4299b mov dword ptr [0x12d4e480], edx */
  w32((uint32_t)(0x12d4e480), (EDX));
L_12d429a1:;
  /* 12d429a1 jmp 0x12d429af */
  goto L_12d429af;
L_12d429a3:;
  /* 12d429a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d429a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d429a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d429ac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12d429af:;
  /* 12d429af jmp 0x12d42a24 */
  goto L_12d42a24;
L_12d429b1:;
  /* 12d429b1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d429b5 jne 0x12d42a1d */
  if (!C.zf) goto L_12d42a1d;
  /* 12d429b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d429bb jge 0x12d429c5 */
  if ((C.sf==C.of)) goto L_12d429c5;
  /* 12d429bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d429c0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d429c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d429c5:;
  /* 12d429c5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12d429ca push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d429cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d429d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d429d4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12d429db push edx */
  push32((uint32_t)(EDX));
  /* 12d429dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d429df push eax */
  push32((uint32_t)(EAX));
  /* 12d429e0 call 0x12d32c60 */
  push32(0x12d429e5u); f_12d32c60();
  /* 12d429e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d429e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d429eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d429ef jne 0x12d429f9 */
  if (!C.zf) goto L_12d429f9;
  /* 12d429f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d429f4 jmp 0x12d42aab */
  goto L_12d42aab;
L_12d429f9:;
  /* 12d429f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d429fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d429ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42a02 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12d42a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42a08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42a0b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12d42a13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42a16 mov dword ptr [0x12d4e480], eax */
  w32((uint32_t)(0x12d4e480), (EAX));
  /* 12d42a1b jmp 0x12d42a24 */
  goto L_12d42a24;
L_12d42a1d:;
  /* 12d42a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42a1f jmp 0x12d42aab */
  goto L_12d42aab;
L_12d42a24:;
  /* 12d42a24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42a28 je 0x12d42aa9 */
  if (C.zf) goto L_12d42aa9;
  /* 12d42a2a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12d42a2f push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d42a34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42a39 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42a3a call 0x12d35600 */
  push32(0x12d42a3fu); f_12d35600();
  /* 12d42a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42a42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42a45 push eax */
  push32((uint32_t)(EAX));
  /* 12d42a46 call 0x12d327d0 */
  push32(0x12d42a4bu); f_12d327d0();
  /* 12d42a4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42a4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d42a51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42a55 je 0x12d42aa9 */
  if (C.zf) goto L_12d42aa9;
  /* 12d42a57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42a5a push edx */
  push32((uint32_t)(EDX));
  /* 12d42a5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d42a5e push eax */
  push32((uint32_t)(EAX));
  /* 12d42a5f call 0x12d35780 */
  push32(0x12d42a64u); f_12d35780();
  /* 12d42a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42a67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d42a6a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42a6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d42a70 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42a72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d42a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42a78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d42a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42a7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d42a84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d42a87 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d42a89 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42a8b not edx */
  EDX = (~(EDX));
  /* 12d42a8d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d42a90 push edx */
  push32((uint32_t)(EDX));
  /* 12d42a91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d42a94 push eax */
  push32((uint32_t)(EAX));
  /* 12d42a95 call dword ptr [0x12d50218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50218))), 0x12d42a9bu);
  /* 12d42a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42a9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d42aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42aa1 call 0x12d33260 */
  push32(0x12d42aa6u); f_12d33260();
  /* 12d42aa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d42aa9:;
  /* 12d42aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d42aab:;
  /* 12d42aab pop esi */
  ESI = (pop32());
  /* 12d42aac mov esp, ebp */
  ESP = (EBP);
  /* 12d42aae pop ebp */
  EBP = (pop32());
  /* 12d42aaf ret  */
  ESPCHK(0x12d427d0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12d42ab0 (124 bytes, 47 insns) */
void f_12d42ab0(void) {
  FTRACE(0x12d42ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12d42ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42ab4 mov eax, dword ptr [0x12d4e480] */
  EAX = (r32((uint32_t)(0x12d4e480)));
  /* 12d42ab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d42abc jmp 0x12d42ac7 */
  goto L_12d42ac7;
L_12d42abe:;
  /* 12d42abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42ac1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42ac4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d42ac7:;
  /* 12d42ac7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42aca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42acd je 0x12d42b1a */
  if (C.zf) goto L_12d42b1a;
  /* 12d42acf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42ad2 push eax */
  push32((uint32_t)(EAX));
  /* 12d42ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42ad6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d42ad8 push edx */
  push32((uint32_t)(EDX));
  /* 12d42ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42adc push eax */
  push32((uint32_t)(EAX));
  /* 12d42add call 0x12d42280 */
  push32(0x12d42ae2u); f_12d42280();
  /* 12d42ae2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d42ae7 jne 0x12d42b18 */
  if (!C.zf) goto L_12d42b18;
  /* 12d42ae9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42aec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d42aee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42af1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12d42af5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42af8 je 0x12d42b0a */
  if (C.zf) goto L_12d42b0a;
  /* 12d42afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42afd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d42aff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42b02 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12d42b06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d42b08 jne 0x12d42b18 */
  if (!C.zf) goto L_12d42b18;
L_12d42b0a:;
  /* 12d42b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42b0d sub eax, dword ptr [0x12d4e480] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4e480))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42b13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d42b16 jmp 0x12d42b28 */
  goto L_12d42b28;
L_12d42b18:;
  /* 12d42b18 jmp 0x12d42abe */
  goto L_12d42abe;
L_12d42b1a:;
  /* 12d42b1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42b1d sub eax, dword ptr [0x12d4e480] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4e480))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42b23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d42b26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12d42b28:;
  /* 12d42b28 mov esp, ebp */
  ESP = (EBP);
  /* 12d42b2a pop ebp */
  EBP = (pop32());
  /* 12d42b2b ret  */
  ESPCHK(0x12d42ab0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12d42b30 (238 bytes, 80 insns) */
void f_12d42b30(void) {
  FTRACE(0x12d42b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42b31 mov ebp, esp */
  EBP = (ESP);
  /* 12d42b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42b36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d42b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42b40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d42b43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42b47 jne 0x12d42b50 */
  if (!C.zf) goto L_12d42b50;
  /* 12d42b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42b4b jmp 0x12d42c1a */
  goto L_12d42c1a;
L_12d42b50:;
  /* 12d42b50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42b53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d42b55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42b58 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42b5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d42b5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d42b60 je 0x12d42b6d */
  if (C.zf) goto L_12d42b6d;
  /* 12d42b62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d42b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42b68 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d42b6b jmp 0x12d42b50 */
  goto L_12d42b50;
L_12d42b6d:;
  /* 12d42b6d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12d42b72 push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d42b77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42b79 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d42b7c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12d42b83 push eax */
  push32((uint32_t)(EAX));
  /* 12d42b84 call 0x12d327d0 */
  push32(0x12d42b89u); f_12d327d0();
  /* 12d42b89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42b8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d42b8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42b92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d42b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42b99 jne 0x12d42ba5 */
  if (!C.zf) goto L_12d42ba5;
  /* 12d42b9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d42b9d call 0x12d31740 */
  push32(0x12d42ba2u); f_12d31740();
  /* 12d42ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d42ba5:;
  /* 12d42ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42ba8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d42bab:;
  /* 12d42bab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42bae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42bb1 je 0x12d42c0e */
  if (C.zf) goto L_12d42c0e;
  /* 12d42bb3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12d42bb8 push 0x12d4a908 */
  push32((uint32_t)(0x12d4a908u));
  /* 12d42bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d42bbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42bc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d42bc4 push edx */
  push32((uint32_t)(EDX));
  /* 12d42bc5 call 0x12d35600 */
  push32(0x12d42bcau); f_12d35600();
  /* 12d42bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42bd0 push eax */
  push32((uint32_t)(EAX));
  /* 12d42bd1 call 0x12d327d0 */
  push32(0x12d42bd6u); f_12d327d0();
  /* 12d42bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42bd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42bdc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d42bde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42be1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42be4 je 0x12d42bfa */
  if (C.zf) goto L_12d42bfa;
  /* 12d42be6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42be9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d42beb push ecx */
  push32((uint32_t)(ECX));
  /* 12d42bec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42bef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d42bf1 push eax */
  push32((uint32_t)(EAX));
  /* 12d42bf2 call 0x12d35780 */
  push32(0x12d42bf7u); f_12d35780();
  /* 12d42bf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d42bfa:;
  /* 12d42bfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d42bfd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42c00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d42c03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42c06 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42c09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d42c0c jmp 0x12d42bab */
  goto L_12d42bab;
L_12d42c0e:;
  /* 12d42c0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d42c11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d42c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d42c1a:;
  /* 12d42c1a mov esp, ebp */
  ESP = (EBP);
  /* 12d42c1c pop ebp */
  EBP = (pop32());
  /* 12d42c1d ret  */
  ESPCHK(0x12d42b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c20 @ 0x12d42c20 (237 bytes, 81 insns) */
void f_12d42c20(void) {
  FTRACE(0x12d42c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d42c21 mov ebp, esp */
  EBP = (ESP);
  /* 12d42c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42c24 cmp dword ptr [0x12d4fbcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fbcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42c2b jne 0x12d42c42 */
  if (!C.zf) goto L_12d42c42;
  /* 12d42c2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d42c30 push eax */
  push32((uint32_t)(EAX));
  /* 12d42c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42c34 push ecx */
  push32((uint32_t)(ECX));
  /* 12d42c35 call 0x12d42d20 */
  push32(0x12d42c3au); f_12d42d20();
  /* 12d42c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42c3d jmp 0x12d42d09 */
  goto L_12d42d09;
L_12d42c42:;
  /* 12d42c42 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d42c44 call 0x12d361d0 */
  push32(0x12d42c49u); f_12d361d0();
  /* 12d42c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42c4c jmp 0x12d42c57 */
  goto L_12d42c57;
L_12d42c4e:;
  /* 12d42c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42c51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42c54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d42c57:;
  /* 12d42c57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42c5a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12d42c5e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12d42c62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42c65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d42c6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d42c6d je 0x12d42ceb */
  if (C.zf) goto L_12d42ceb;
  /* 12d42c6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42c72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d42c77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d42c79 mov cl, byte ptr [eax + 0x12d4fce1] */
  CL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d42c7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d42c82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d42c84 je 0x12d42cd6 */
  if (C.zf) goto L_12d42cd6;
  /* 12d42c86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42c89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42c8c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d42c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42c92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d42c94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d42c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d42c98 jne 0x12d42ca8 */
  if (!C.zf) goto L_12d42ca8;
  /* 12d42c9a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d42c9c call 0x12d36270 */
  push32(0x12d42ca1u); f_12d36270();
  /* 12d42ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42ca6 jmp 0x12d42d09 */
  goto L_12d42d09;
L_12d42ca8:;
  /* 12d42ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42cab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d42cb1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d42cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42cb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d42cb9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d42cbb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d42cbd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42cc0 jne 0x12d42cd4 */
  if (!C.zf) goto L_12d42cd4;
  /* 12d42cc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d42cc4 call 0x12d36270 */
  push32(0x12d42cc9u); f_12d36270();
  /* 12d42cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42ccc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42ccf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d42cd2 jmp 0x12d42d09 */
  goto L_12d42d09;
L_12d42cd4:;
  /* 12d42cd4 jmp 0x12d42ce6 */
  goto L_12d42ce6;
L_12d42cd6:;
  /* 12d42cd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42cd9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d42cdf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42ce2 jne 0x12d42ce6 */
  if (!C.zf) goto L_12d42ce6;
  /* 12d42ce4 jmp 0x12d42ceb */
  goto L_12d42ceb;
L_12d42ce6:;
  /* 12d42ce6 jmp 0x12d42c4e */
  goto L_12d42c4e;
L_12d42ceb:;
  /* 12d42ceb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d42ced call 0x12d36270 */
  push32(0x12d42cf2u); f_12d36270();
  /* 12d42cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d42cf8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d42cfd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d42d00 jne 0x12d42d07 */
  if (!C.zf) goto L_12d42d07;
  /* 12d42d02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d42d05 jmp 0x12d42d09 */
  goto L_12d42d09;
L_12d42d07:;
  /* 12d42d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d42d09:;
  /* 12d42d09 mov esp, ebp */
  ESP = (EBP);
  /* 12d42d0b pop ebp */
  EBP = (pop32());
  /* 12d42d0c ret  */
  ESPCHK(0x12d42c20u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12d42d20 (193 bytes, 87 insns) */
void f_12d42d20(void) {
  FTRACE(0x12d42d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42d20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42d22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12d42d26 push ebx */
  push32((uint32_t)(EBX));
  /* 12d42d27 mov ebx, eax */
  EBX = (EAX);
  /* 12d42d29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d42d2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d42d30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d42d36 je 0x12d42d4b */
  if (C.zf) goto L_12d42d4b;
L_12d42d38:;
  /* 12d42d38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12d42d3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d42d3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d42d3d je 0x12d42d10 */
  if (C.zf) { jmp_ind(0x12d42d10u); return; }
  /* 12d42d3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12d42d41 je 0x12d42d94 */
  if (C.zf) goto L_12d42d94;
  /* 12d42d43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d42d49 jne 0x12d42d38 */
  if (!C.zf) goto L_12d42d38;
L_12d42d4b:;
  /* 12d42d4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12d42d4d push edi */
  push32((uint32_t)(EDI));
  /* 12d42d4e mov eax, ebx */
  EAX = (EBX);
  /* 12d42d50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12d42d53 push esi */
  push32((uint32_t)(ESI));
  /* 12d42d54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12d42d56:;
  /* 12d42d56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12d42d58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12d42d5d mov eax, ecx */
  EAX = (ECX);
  /* 12d42d5f mov esi, edi */
  ESI = (EDI);
  /* 12d42d61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12d42d63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42d65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42d67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d42d6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d42d6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12d42d6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12d42d71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d42d74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d42d7a jne 0x12d42d98 */
  if (!C.zf) goto L_12d42d98;
  /* 12d42d7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12d42d81 je 0x12d42d56 */
  if (C.zf) goto L_12d42d56;
  /* 12d42d83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12d42d88 jne 0x12d42d92 */
  if (!C.zf) goto L_12d42d92;
  /* 12d42d8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12d42d90 jne 0x12d42d56 */
  if (!C.zf) goto L_12d42d56;
L_12d42d92:;
  /* 12d42d92 pop esi */
  ESI = (pop32());
  /* 12d42d93 pop edi */
  EDI = (pop32());
L_12d42d94:;
  /* 12d42d94 pop ebx */
  EBX = (pop32());
  /* 12d42d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d42d97 ret  */
  ESPCHK(0x12d42d20u, _esp0);
  ESP += 4; return;
L_12d42d98:;
  /* 12d42d98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12d42d9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d42d9d je 0x12d42dd5 */
  if (C.zf) goto L_12d42dd5;
  /* 12d42d9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d42da1 je 0x12d42d92 */
  if (C.zf) goto L_12d42d92;
  /* 12d42da3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d42da5 je 0x12d42dce */
  if (C.zf) goto L_12d42dce;
  /* 12d42da7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d42da9 je 0x12d42d92 */
  if (C.zf) goto L_12d42d92;
  /* 12d42dab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d42dae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d42db0 je 0x12d42dc7 */
  if (C.zf) goto L_12d42dc7;
  /* 12d42db2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d42db4 je 0x12d42d92 */
  if (C.zf) goto L_12d42d92;
  /* 12d42db6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d42db8 je 0x12d42dc0 */
  if (C.zf) goto L_12d42dc0;
  /* 12d42dba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d42dbc je 0x12d42d92 */
  if (C.zf) goto L_12d42d92;
  /* 12d42dbe jmp 0x12d42d56 */
  goto L_12d42d56;
L_12d42dc0:;
  /* 12d42dc0 pop esi */
  ESI = (pop32());
  /* 12d42dc1 pop edi */
  EDI = (pop32());
  /* 12d42dc2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12d42dc5 pop ebx */
  EBX = (pop32());
  /* 12d42dc6 ret  */
  ESPCHK(0x12d42d20u, _esp0);
  ESP += 4; return;
L_12d42dc7:;
  /* 12d42dc7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12d42dca pop esi */
  ESI = (pop32());
  /* 12d42dcb pop edi */
  EDI = (pop32());
  /* 12d42dcc pop ebx */
  EBX = (pop32());
  /* 12d42dcd ret  */
  ESPCHK(0x12d42d20u, _esp0);
  ESP += 4; return;
L_12d42dce:;
  /* 12d42dce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12d42dd1 pop esi */
  ESI = (pop32());
  /* 12d42dd2 pop edi */
  EDI = (pop32());
  /* 12d42dd3 pop ebx */
  EBX = (pop32());
  /* 12d42dd4 ret  */
  ESPCHK(0x12d42d20u, _esp0);
  ESP += 4; return;
L_12d42dd5:;
  /* 12d42dd5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12d42dd8 pop esi */
  ESI = (pop32());
  /* 12d42dd9 pop edi */
  EDI = (pop32());
  /* 12d42dda pop ebx */
  EBX = (pop32());
  /* 12d42ddb ret  */
  ESPCHK(0x12d42d20u, _esp0);
  ESP += 4; return;
  /* 12d42ddc jmp dword ptr [0x12d50230] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12d50230)))); return;
}

/* RtlUnwind @ 0x12d42f2c (6 bytes, 1 insns) */
void f_12d42f2c(void) {
  FTRACE(0x12d42f2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d42f2c jmp dword ptr [0x12d502f0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12d502f0)))); return;
}

