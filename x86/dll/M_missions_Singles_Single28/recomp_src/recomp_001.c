#include "recomp.h"

/* FUN_100082b7 @ 0x114182b7 (21 bytes, 7 insns) */
void f_114182b7(void) {
  FTRACE(0x114182b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114182b7 push ebp */
  push32((uint32_t)(EBP));
  /* 114182b8 mov ebp, esp */
  EBP = (ESP);
  /* 114182ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114182bd push dword ptr [eax*4 + 0x1141ed00] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x1141ed00))));
  /* 114182c4 call dword ptr [0x1141b084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b084))), 0x114182cau);
  /* 114182ca pop ebp */
  EBP = (pop32());
  /* 114182cb ret  */
  ESPCHK(0x114182b7u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x114182cc (32 bytes, 18 insns) */
void f_114182cc(void) {
  FTRACE(0x114182ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114182cc push ebp */
  push32((uint32_t)(EBP));
  /* 114182cd mov ebp, esp */
  EBP = (ESP);
  /* 114182cf push ebx */
  push32((uint32_t)(EBX));
  /* 114182d0 push esi */
  push32((uint32_t)(ESI));
  /* 114182d1 push edi */
  push32((uint32_t)(EDI));
  /* 114182d2 push ebp */
  push32((uint32_t)(EBP));
  /* 114182d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114182d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114182d7 push 0x114182e4 */
  push32((uint32_t)(0x114182e4u));
  /* 114182dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 114182df call 0x1141a674 */
  push32(0x114182e4u); f_1141a674();
  /* 114182e4 pop ebp */
  EBP = (pop32());
  /* 114182e5 pop edi */
  EDI = (pop32());
  /* 114182e6 pop esi */
  ESI = (pop32());
  /* 114182e7 pop ebx */
  EBX = (pop32());
  /* 114182e8 mov esp, ebp */
  ESP = (EBP);
  /* 114182ea pop ebp */
  EBP = (pop32());
  /* 114182eb ret  */
  ESPCHK(0x114182ccu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1141830e (104 bytes, 33 insns) */
void f_1141830e(void) {
  FTRACE(0x1141830eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141830e push ebx */
  push32((uint32_t)(EBX));
  /* 1141830f push esi */
  push32((uint32_t)(ESI));
  /* 11418310 push edi */
  push32((uint32_t)(EDI));
  /* 11418311 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11418315 push eax */
  push32((uint32_t)(EAX));
  /* 11418316 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11418318 push 0x114182ec */
  push32((uint32_t)(0x114182ecu));
  /* 1141831d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11418324 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1141832b:;
  /* 1141832b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1141832f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11418332 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11418335 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418338 je 0x11418368 */
  if (C.zf) goto L_11418368;
  /* 1141833a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141833e je 0x11418368 */
  if (C.zf) goto L_11418368;
  /* 11418340 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11418343 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11418346 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1141834a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1141834d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418352 jne 0x11418366 */
  if (!C.zf) goto L_11418366;
  /* 11418354 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11418359 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1141835d call 0x114183a2 */
  push32(0x11418362u); f_114183a2();
  /* 11418362 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11418366u);
L_11418366:;
  /* 11418366 jmp 0x1141832b */
  goto L_1141832b;
L_11418368:;
  /* 11418368 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1141836f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11418372 pop edi */
  EDI = (pop32());
  /* 11418373 pop esi */
  ESI = (pop32());
  /* 11418374 pop ebx */
  EBX = (pop32());
  /* 11418375 ret  */
  ESPCHK(0x1141830eu, _esp0);
  ESP += 4; return;
}

/* FUN_100083a2 @ 0x114183a2 (24 bytes, 10 insns) */
void f_114183a2(void) {
  FTRACE(0x114183a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114183a2 push ebx */
  push32((uint32_t)(EBX));
  /* 114183a3 push ecx */
  push32((uint32_t)(ECX));
  /* 114183a4 mov ebx, 0x1141edc0 */
  EBX = (0x1141edc0u);
  /* 114183a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114183ac mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 114183af mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 114183b2 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 114183b5 pop ecx */
  ECX = (pop32());
  /* 114183b6 pop ebx */
  EBX = (pop32());
  /* 114183b7 ret 4 */
  ESPCHK(0x114183a2u, _esp0);
  ESP += 8; return;
}

/* FUN_10008481 @ 0x11418481 (27 bytes, 11 insns) */
void f_11418481(void) {
  FTRACE(0x11418481u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418481 push ebp */
  push32((uint32_t)(EBP));
  /* 11418482 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11418486 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11418488 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1141848b push eax */
  push32((uint32_t)(EAX));
  /* 1141848c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1141848f push eax */
  push32((uint32_t)(EAX));
  /* 11418490 call 0x1141830e */
  push32(0x11418495u); f_1141830e();
  /* 11418495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11418498 pop ebp */
  EBP = (pop32());
  /* 11418499 ret 4 */
  ESPCHK(0x11418481u, _esp0);
  ESP += 8; return;
}

/* FUN_1000849c @ 0x1141849c (289 bytes, 98 insns) */
void f_1141849c(void) {
  FTRACE(0x1141849cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141849c push ebp */
  push32((uint32_t)(EBP));
  /* 1141849d mov ebp, esp */
  EBP = (ESP);
  /* 1141849f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114184a1 push 0x1141b4e8 */
  push32((uint32_t)(0x1141b4e8u));
  /* 114184a6 push 0x114183c4 */
  push32((uint32_t)(0x114183c4u));
  /* 114184ab mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114184b1 push eax */
  push32((uint32_t)(EAX));
  /* 114184b2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114184b9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114184bc push ebx */
  push32((uint32_t)(EBX));
  /* 114184bd push esi */
  push32((uint32_t)(ESI));
  /* 114184be push edi */
  push32((uint32_t)(EDI));
  /* 114184bf mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114184c2 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114184c6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 114184c9 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 114184cc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114184cf ja 0x114184e5 */
  if ((!C.cf&&!C.zf)) goto L_114184e5;
  /* 114184d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114184d3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114184d5 jne 0x114184da */
  if (!C.zf) goto L_114184da;
  /* 114184d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114184d9 pop esi */
  ESI = (pop32());
L_114184da:;
  /* 114184da add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114184dd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 114184e0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 114184e3 jmp 0x114184e7 */
  goto L_114184e7;
L_114184e5:;
  /* 114184e5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_114184e7:;
  /* 114184e7 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 114184ea cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114184ed ja 0x1141859b */
  if ((!C.cf&&!C.zf)) goto L_1141859b;
  /* 114184f3 mov eax, dword ptr [0x11421b48] */
  EAX = (r32((uint32_t)(0x11421b48)));
  /* 114184f8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114184fb jne 0x1141853e */
  if (!C.zf) goto L_1141853e;
  /* 114184fd mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11418500 cmp edi, dword ptr [0x11421b40] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11421b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418506 ja 0x11418584 */
  if ((!C.cf&&!C.zf)) goto L_11418584;
  /* 11418508 push 9 */
  push32((uint32_t)(0x9u));
  /* 1141850a call 0x11418256 */
  push32(0x1141850fu); f_11418256();
  /* 1141850f pop ecx */
  ECX = (pop32());
  /* 11418510 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11418513 push edi */
  push32((uint32_t)(EDI));
  /* 11418514 call 0x114176e8 */
  push32(0x11418519u); f_114176e8();
  /* 11418519 pop ecx */
  ECX = (pop32());
  /* 1141851a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1141851d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11418521 call 0x11418535 */
  push32(0x11418526u); f_11418535();
  /* 11418526 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418529 je 0x11418589 */
  if (C.zf) goto L_11418589;
  /* 1141852b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1141852e jmp 0x11418578 */
  goto L_11418578;
  /* 11418530 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11418532 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11418535 push 9 */
  push32((uint32_t)(0x9u));
  /* 11418537 call 0x114182b7 */
  push32(0x1141853cu); f_114182b7();
  /* 1141853c pop ecx */
  ECX = (pop32());
  /* 1141853d ret  */
  ESPCHK(0x1141849cu, _esp0);
  ESP += 4; return;
L_1141853e:;
  /* 1141853e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418541 jne 0x11418584 */
  if (!C.zf) goto L_11418584;
  /* 11418543 cmp esi, dword ptr [0x1141ecfc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1141ecfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418549 ja 0x11418584 */
  if ((!C.cf&&!C.zf)) goto L_11418584;
  /* 1141854b push 9 */
  push32((uint32_t)(0x9u));
  /* 1141854d call 0x11418256 */
  push32(0x11418552u); f_11418256();
  /* 11418552 pop ecx */
  ECX = (pop32());
  /* 11418553 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1141855a mov eax, esi */
  EAX = (ESI);
  /* 1141855c shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1141855f push eax */
  push32((uint32_t)(EAX));
  /* 11418560 call 0x11417e95 */
  push32(0x11418565u); f_11417e95();
  /* 11418565 pop ecx */
  ECX = (pop32());
  /* 11418566 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11418569 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1141856d call 0x114185be */
  push32(0x11418572u); f_114185be();
  /* 11418572 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418575 je 0x11418589 */
  if (C.zf) goto L_11418589;
  /* 11418577 push esi */
  push32((uint32_t)(ESI));
L_11418578:;
  /* 11418578 push ebx */
  push32((uint32_t)(EBX));
  /* 11418579 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1141857c call 0x11419ab0 */
  push32(0x11418581u); f_11419ab0();
  /* 11418581 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11418584:;
  /* 11418584 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418587 jne 0x114185c7 */
  if (!C.zf) { jmp_ind(0x114185c7u); return; }
L_11418589:;
  /* 11418589 push esi */
  push32((uint32_t)(ESI));
  /* 1141858a push 8 */
  push32((uint32_t)(0x8u));
  /* 1141858c push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11418592 call dword ptr [0x1141b094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b094))), 0x11418598u);
  /* 11418598 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1141859b:;
  /* 1141859b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141859e jne 0x114185c7 */
  if (!C.zf) { jmp_ind(0x114185c7u); return; }
  /* 114185a0 cmp dword ptr [0x11421770], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421770))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114185a6 je 0x114185c7 */
  if (C.zf) { jmp_ind(0x114185c7u); return; }
  /* 114185a8 push esi */
  push32((uint32_t)(ESI));
  /* 114185a9 call 0x11418c02 */
  push32(0x114185aeu); f_11418c02();
  /* 114185ae pop ecx */
  ECX = (pop32());
  /* 114185af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114185b1 jne 0x114184e7 */
  if (!C.zf) goto L_114184e7;
  /* 114185b7 jmp 0x114185ca */
  jmp_ind(0x114185cau); return;
  /* 114185b9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10008535 @ 0x11418535 (9 bytes, 4 insns) */
void f_11418535(void) {
  FTRACE(0x11418535u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418535 push 9 */
  push32((uint32_t)(0x9u));
  /* 11418537 call 0x114182b7 */
  push32(0x1141853cu); f_114182b7();
  /* 1141853c pop ecx */
  ECX = (pop32());
  /* 1141853d ret  */
  ESPCHK(0x11418535u, _esp0);
  ESP += 4; return;
}

/* FUN_100085be @ 0x114185be (9 bytes, 4 insns) */
void f_114185be(void) {
  FTRACE(0x114185beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114185be push 9 */
  push32((uint32_t)(0x9u));
  /* 114185c0 call 0x114182b7 */
  push32(0x114185c5u); f_114182b7();
  /* 114185c5 pop ecx */
  ECX = (pop32());
  /* 114185c6 ret  */
  ESPCHK(0x114185beu, _esp0);
  ESP += 4; return;
}

/* FUN_1000865a @ 0x1141865a (291 bytes, 103 insns) */
void f_1141865a(void) {
  FTRACE(0x1141865au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141865a push ecx */
  push32((uint32_t)(ECX));
  /* 1141865b push ecx */
  push32((uint32_t)(ECX));
  /* 1141865c push ebx */
  push32((uint32_t)(EBX));
  /* 1141865d push ebp */
  push32((uint32_t)(EBP));
  /* 1141865e push esi */
  push32((uint32_t)(ESI));
  /* 1141865f push edi */
  push32((uint32_t)(EDI));
  /* 11418660 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11418662 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11418665 call 0x11418256 */
  push32(0x1141866au); f_11418256();
  /* 1141866a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1141866c pop ecx */
  ECX = (pop32());
  /* 1141866d mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11418671 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11418675 mov ebp, 0x11421b60 */
  EBP = (0x11421b60u);
L_1141867a:;
  /* 1141867a mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 1141867d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1141867f je 0x1141871e */
  if (C.zf) goto L_1141871e;
  /* 11418685 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_1141868b:;
  /* 1141868b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141868d jae 0x11418703 */
  if (!C.cf) goto L_11418703;
  /* 1141868f test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11418693 jne 0x114186d9 */
  if (!C.zf) goto L_114186d9;
  /* 11418695 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418699 jne 0x114186be */
  if (!C.zf) goto L_114186be;
  /* 1141869b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1141869d call 0x11418256 */
  push32(0x114186a2u); f_11418256();
  /* 114186a2 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114186a6 pop ecx */
  ECX = (pop32());
  /* 114186a7 jne 0x114186b6 */
  if (!C.zf) goto L_114186b6;
  /* 114186a9 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 114186ac push eax */
  push32((uint32_t)(EAX));
  /* 114186ad call dword ptr [0x1141b004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b004))), 0x114186b3u);
  /* 114186b3 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_114186b6:;
  /* 114186b6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114186b8 call 0x114182b7 */
  push32(0x114186bdu); f_114182b7();
  /* 114186bd pop ecx */
  ECX = (pop32());
L_114186be:;
  /* 114186be lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 114186c1 push ebx */
  push32((uint32_t)(EBX));
  /* 114186c2 call dword ptr [0x1141b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b080))), 0x114186c8u);
  /* 114186c8 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 114186cc je 0x114186e6 */
  if (C.zf) goto L_114186e6;
  /* 114186ce push ebx */
  push32((uint32_t)(EBX));
  /* 114186cf call dword ptr [0x1141b084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b084))), 0x114186d5u);
  /* 114186d5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_114186d9:;
  /* 114186d9 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 114186dc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114186df add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114186e4 jmp 0x1141868b */
  goto L_1141868b;
L_114186e6:;
  /* 114186e6 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 114186e9 mov eax, esi */
  EAX = (ESI);
  /* 114186eb sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114186ee push 0x24 */
  push32((uint32_t)(0x24u));
  /* 114186f0 pop ecx */
  ECX = (pop32());
  /* 114186f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114186f2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114186f4 mov edi, eax */
  EDI = (EAX);
  /* 114186f6 add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114186fa cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114186fd jne 0x1141876c */
  if (!C.zf) goto L_1141876c;
  /* 114186ff mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11418703:;
  /* 11418703 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 11418708 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141870b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1141870c cmp ebp, 0x11421c60 */
  { uint32_t _a=(EBP),_b=(0x11421c60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418712 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11418716 jl 0x1141867a */
  if ((C.sf!=C.of)) goto L_1141867a;
  /* 1141871c jmp 0x1141876c */
  goto L_1141876c;
L_1141871e:;
  /* 1141871e mov esi, 0x480 */
  ESI = (0x480u);
  /* 11418723 push esi */
  push32((uint32_t)(ESI));
  /* 11418724 call 0x11416185 */
  push32(0x11418729u); f_11416185();
  /* 11418729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141872b pop ecx */
  ECX = (pop32());
  /* 1141872c je 0x1141876c */
  if (C.zf) goto L_1141876c;
  /* 1141872e add dword ptr [0x11421c60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11421c60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11421c60), (_r)); fl_add(_a,_b,_r,32); }
  /* 11418735 lea ecx, [ebx*4 + 0x11421b60] */
  ECX = ((uint32_t)(EBX*4 + 0x11421b60));
  /* 1141873c lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 11418742 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11418744:;
  /* 11418744 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418746 jae 0x11418760 */
  if (!C.cf) goto L_11418760;
  /* 11418748 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1141874c or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1141874f and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11418753 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11418757 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11418759 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141875c add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141875e jmp 0x11418744 */
  goto L_11418744;
L_11418760:;
  /* 11418760 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 11418763 mov edi, ebx */
  EDI = (EBX);
  /* 11418765 push edi */
  push32((uint32_t)(EDI));
  /* 11418766 call 0x114188ba */
  push32(0x1141876bu); f_114188ba();
  /* 1141876b pop ecx */
  ECX = (pop32());
L_1141876c:;
  /* 1141876c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1141876e call 0x114182b7 */
  push32(0x11418773u); f_114182b7();
  /* 11418773 pop ecx */
  ECX = (pop32());
  /* 11418774 mov eax, edi */
  EAX = (EDI);
  /* 11418776 pop edi */
  EDI = (pop32());
  /* 11418777 pop esi */
  ESI = (pop32());
  /* 11418778 pop ebp */
  EBP = (pop32());
  /* 11418779 pop ebx */
  EBX = (pop32());
  /* 1141877a pop ecx */
  ECX = (pop32());
  /* 1141877b pop ecx */
  ECX = (pop32());
  /* 1141877c ret  */
  ESPCHK(0x1141865au, _esp0);
  ESP += 4; return;
}

/* FUN_1000877d @ 0x1141877d (124 bytes, 47 insns) */
void f_1141877d(void) {
  FTRACE(0x1141877du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141877d mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11418781 push esi */
  push32((uint32_t)(ESI));
  /* 11418782 cmp ecx, dword ptr [0x11421c60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418788 push edi */
  push32((uint32_t)(EDI));
  /* 11418789 jae 0x114187e0 */
  if (!C.cf) goto L_114187e0;
  /* 1141878b mov eax, ecx */
  EAX = (ECX);
  /* 1141878d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11418790 lea edi, [eax*4 + 0x11421b60] */
  EDI = ((uint32_t)(EAX*4 + 0x11421b60));
  /* 11418797 mov eax, ecx */
  EAX = (ECX);
  /* 11418799 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1141879c lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1141879f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 114187a1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 114187a4 cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114187a8 jne 0x114187e0 */
  if (!C.zf) goto L_114187e0;
  /* 114187aa cmp dword ptr [0x114215b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114215b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114187b1 push ebx */
  push32((uint32_t)(EBX));
  /* 114187b2 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 114187b6 jne 0x114187d6 */
  if (!C.zf) goto L_114187d6;
  /* 114187b8 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114187bb je 0x114187cd */
  if (C.zf) goto L_114187cd;
  /* 114187bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114187be je 0x114187c8 */
  if (C.zf) goto L_114187c8;
  /* 114187c0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114187c1 jne 0x114187d6 */
  if (!C.zf) goto L_114187d6;
  /* 114187c3 push ebx */
  push32((uint32_t)(EBX));
  /* 114187c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 114187c6 jmp 0x114187d0 */
  goto L_114187d0;
L_114187c8:;
  /* 114187c8 push ebx */
  push32((uint32_t)(EBX));
  /* 114187c9 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 114187cb jmp 0x114187d0 */
  goto L_114187d0;
L_114187cd:;
  /* 114187cd push ebx */
  push32((uint32_t)(EBX));
  /* 114187ce push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_114187d0:;
  /* 114187d0 call dword ptr [0x1141b040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b040))), 0x114187d6u);
L_114187d6:;
  /* 114187d6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 114187d8 mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 114187db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114187dd pop ebx */
  EBX = (pop32());
  /* 114187de jmp 0x114187f6 */
  goto L_114187f6;
L_114187e0:;
  /* 114187e0 call 0x11416332 */
  push32(0x114187e5u); f_11416332();
  /* 114187e5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114187eb call 0x1141633b */
  push32(0x114187f0u); f_1141633b();
  /* 114187f0 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 114187f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114187f6:;
  /* 114187f6 pop edi */
  EDI = (pop32());
  /* 114187f7 pop esi */
  ESI = (pop32());
  /* 114187f8 ret  */
  ESPCHK(0x1141877du, _esp0);
  ESP += 4; return;
}

/* FUN_100087f9 @ 0x114187f9 (127 bytes, 48 insns) */
void f_114187f9(void) {
  FTRACE(0x114187f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114187f9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114187fd push esi */
  push32((uint32_t)(ESI));
  /* 114187fe cmp ecx, dword ptr [0x11421c60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418804 push edi */
  push32((uint32_t)(EDI));
  /* 11418805 jae 0x1141885f */
  if (!C.cf) goto L_1141885f;
  /* 11418807 mov eax, ecx */
  EAX = (ECX);
  /* 11418809 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1141880c lea edi, [eax*4 + 0x11421b60] */
  EDI = ((uint32_t)(EAX*4 + 0x11421b60));
  /* 11418813 mov eax, ecx */
  EAX = (ECX);
  /* 11418815 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11418818 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1141881b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1141881d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11418820 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418822 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11418826 je 0x1141885f */
  if (C.zf) goto L_1141885f;
  /* 11418828 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141882b je 0x1141885f */
  if (C.zf) goto L_1141885f;
  /* 1141882d cmp dword ptr [0x114215b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114215b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418834 jne 0x11418855 */
  if (!C.zf) goto L_11418855;
  /* 11418836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11418838 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141883a je 0x1141884c */
  if (C.zf) goto L_1141884c;
  /* 1141883c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1141883d je 0x11418847 */
  if (C.zf) goto L_11418847;
  /* 1141883f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11418840 jne 0x11418855 */
  if (!C.zf) goto L_11418855;
  /* 11418842 push eax */
  push32((uint32_t)(EAX));
  /* 11418843 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11418845 jmp 0x1141884f */
  goto L_1141884f;
L_11418847:;
  /* 11418847 push eax */
  push32((uint32_t)(EAX));
  /* 11418848 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1141884a jmp 0x1141884f */
  goto L_1141884f;
L_1141884c:;
  /* 1141884c push eax */
  push32((uint32_t)(EAX));
  /* 1141884d push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1141884f:;
  /* 1141884f call dword ptr [0x1141b040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b040))), 0x11418855u);
L_11418855:;
  /* 11418855 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11418857 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1141885b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141885d jmp 0x11418875 */
  goto L_11418875;
L_1141885f:;
  /* 1141885f call 0x11416332 */
  push32(0x11418864u); f_11416332();
  /* 11418864 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1141886a call 0x1141633b */
  push32(0x1141886fu); f_1141633b();
  /* 1141886f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11418872 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11418875:;
  /* 11418875 pop edi */
  EDI = (pop32());
  /* 11418876 pop esi */
  ESI = (pop32());
  /* 11418877 ret  */
  ESPCHK(0x114187f9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008878 @ 0x11418878 (66 bytes, 19 insns) */
void f_11418878(void) {
  FTRACE(0x11418878u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418878 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141887c cmp eax, dword ptr [0x11421c60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418882 jae 0x114188a3 */
  if (!C.cf) goto L_114188a3;
  /* 11418884 mov ecx, eax */
  ECX = (EAX);
  /* 11418886 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11418889 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1141888c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1141888f mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 11418896 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1141889b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1141889e je 0x114188a3 */
  if (C.zf) goto L_114188a3;
  /* 114188a0 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 114188a2 ret  */
  ESPCHK(0x11418878u, _esp0);
  ESP += 4; return;
L_114188a3:;
  /* 114188a3 call 0x11416332 */
  push32(0x114188a8u); f_11416332();
  /* 114188a8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114188ae call 0x1141633b */
  push32(0x114188b3u); f_1141633b();
  /* 114188b3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 114188b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114188b9 ret  */
  ESPCHK(0x11418878u, _esp0);
  ESP += 4; return;
}

/* FUN_100088ba @ 0x114188ba (95 bytes, 34 insns) */
void f_114188ba(void) {
  FTRACE(0x114188bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114188ba mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114188be push ebx */
  push32((uint32_t)(EBX));
  /* 114188bf mov ecx, eax */
  ECX = (EAX);
  /* 114188c1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114188c4 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114188c7 push esi */
  push32((uint32_t)(ESI));
  /* 114188c8 push edi */
  push32((uint32_t)(EDI));
  /* 114188c9 mov esi, dword ptr [ecx*4 + 0x11421b60] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 114188d0 lea ebx, [ecx*4 + 0x11421b60] */
  EBX = ((uint32_t)(ECX*4 + 0x11421b60));
  /* 114188d7 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 114188da shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 114188dd add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114188df cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114188e3 jne 0x11418908 */
  if (!C.zf) goto L_11418908;
  /* 114188e5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114188e7 call 0x11418256 */
  push32(0x114188ecu); f_11418256();
  /* 114188ec cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114188f0 pop ecx */
  ECX = (pop32());
  /* 114188f1 jne 0x11418900 */
  if (!C.zf) goto L_11418900;
  /* 114188f3 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 114188f6 push eax */
  push32((uint32_t)(EAX));
  /* 114188f7 call dword ptr [0x1141b004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b004))), 0x114188fdu);
  /* 114188fd inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11418900:;
  /* 11418900 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11418902 call 0x114182b7 */
  push32(0x11418907u); f_114182b7();
  /* 11418907 pop ecx */
  ECX = (pop32());
L_11418908:;
  /* 11418908 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1141890a lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1141890e push eax */
  push32((uint32_t)(EAX));
  /* 1141890f call dword ptr [0x1141b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b080))), 0x11418915u);
  /* 11418915 pop edi */
  EDI = (pop32());
  /* 11418916 pop esi */
  ESI = (pop32());
  /* 11418917 pop ebx */
  EBX = (pop32());
  /* 11418918 ret  */
  ESPCHK(0x114188bau, _esp0);
  ESP += 4; return;
}

/* FUN_10008919 @ 0x11418919 (34 bytes, 10 insns) */
void f_11418919(void) {
  FTRACE(0x11418919u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418919 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141891d mov ecx, eax */
  ECX = (EAX);
  /* 1141891f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11418922 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11418925 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11418928 mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 1141892f lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11418933 push eax */
  push32((uint32_t)(EAX));
  /* 11418934 call dword ptr [0x1141b084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b084))), 0x1141893au);
  /* 1141893a ret  */
  ESPCHK(0x11418919u, _esp0);
  ESP += 4; return;
}

/* FUN_1000893b @ 0x1141893b (147 bytes, 52 insns) */
void f_1141893b(void) {
  FTRACE(0x1141893bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141893b push ebx */
  push32((uint32_t)(EBX));
  /* 1141893c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11418940 cmp ebx, dword ptr [0x11421c60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418946 push esi */
  push32((uint32_t)(ESI));
  /* 11418947 push edi */
  push32((uint32_t)(EDI));
  /* 11418948 jae 0x114189bc */
  if (!C.cf) goto L_114189bc;
  /* 1141894a mov eax, ebx */
  EAX = (EBX);
  /* 1141894c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1141894f lea edi, [eax*4 + 0x11421b60] */
  EDI = ((uint32_t)(EAX*4 + 0x11421b60));
  /* 11418956 mov eax, ebx */
  EAX = (EBX);
  /* 11418958 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1141895b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1141895e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11418960 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11418963 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11418968 je 0x114189bc */
  if (C.zf) goto L_114189bc;
  /* 1141896a push ebx */
  push32((uint32_t)(EBX));
  /* 1141896b call 0x114188ba */
  push32(0x11418970u); f_114188ba();
  /* 11418970 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11418972 pop ecx */
  ECX = (pop32());
  /* 11418973 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11418978 je 0x114189a3 */
  if (C.zf) goto L_114189a3;
  /* 1141897a push ebx */
  push32((uint32_t)(EBX));
  /* 1141897b call 0x11418878 */
  push32(0x11418980u); f_11418878();
  /* 11418980 pop ecx */
  ECX = (pop32());
  /* 11418981 push eax */
  push32((uint32_t)(EAX));
  /* 11418982 call dword ptr [0x1141b048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b048))), 0x11418988u);
  /* 11418988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141898a jne 0x11418996 */
  if (!C.zf) goto L_11418996;
  /* 1141898c call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11418992u);
  /* 11418992 mov esi, eax */
  ESI = (EAX);
  /* 11418994 jmp 0x11418998 */
  goto L_11418998;
L_11418996:;
  /* 11418996 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11418998:;
  /* 11418998 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1141899a je 0x114189b1 */
  if (C.zf) goto L_114189b1;
  /* 1141899c call 0x1141633b */
  push32(0x114189a1u); f_1141633b();
  /* 114189a1 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_114189a3:;
  /* 114189a3 call 0x11416332 */
  push32(0x114189a8u); f_11416332();
  /* 114189a8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114189ae or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_114189b1:;
  /* 114189b1 push ebx */
  push32((uint32_t)(EBX));
  /* 114189b2 call 0x11418919 */
  push32(0x114189b7u); f_11418919();
  /* 114189b7 pop ecx */
  ECX = (pop32());
  /* 114189b8 mov eax, esi */
  EAX = (ESI);
  /* 114189ba jmp 0x114189ca */
  goto L_114189ca;
L_114189bc:;
  /* 114189bc call 0x11416332 */
  push32(0x114189c1u); f_11416332();
  /* 114189c1 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114189c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114189ca:;
  /* 114189ca pop edi */
  EDI = (pop32());
  /* 114189cb pop esi */
  ESI = (pop32());
  /* 114189cc pop ebx */
  EBX = (pop32());
  /* 114189cd ret  */
  ESPCHK(0x1141893bu, _esp0);
  ESP += 4; return;
}

/* FUN_100089ce @ 0x114189ce (101 bytes, 34 insns) */
void f_114189ce(void) {
  FTRACE(0x114189ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114189ce push esi */
  push32((uint32_t)(ESI));
  /* 114189cf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114189d3 cmp esi, dword ptr [0x11421c60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114189d9 jae 0x11418a1b */
  if (!C.cf) goto L_11418a1b;
  /* 114189db mov ecx, esi */
  ECX = (ESI);
  /* 114189dd mov eax, esi */
  EAX = (ESI);
  /* 114189df sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114189e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114189e5 mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 114189ec lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 114189ef test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 114189f4 je 0x11418a1b */
  if (C.zf) goto L_11418a1b;
  /* 114189f6 push edi */
  push32((uint32_t)(EDI));
  /* 114189f7 push esi */
  push32((uint32_t)(ESI));
  /* 114189f8 call 0x114188ba */
  push32(0x114189fdu); f_114188ba();
  /* 114189fd push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11418a01 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11418a05 push esi */
  push32((uint32_t)(ESI));
  /* 11418a06 call 0x11418a33 */
  push32(0x11418a0bu); f_11418a33();
  /* 11418a0b push esi */
  push32((uint32_t)(ESI));
  /* 11418a0c mov edi, eax */
  EDI = (EAX);
  /* 11418a0e call 0x11418919 */
  push32(0x11418a13u); f_11418919();
  /* 11418a13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11418a16 mov eax, edi */
  EAX = (EDI);
  /* 11418a18 pop edi */
  EDI = (pop32());
  /* 11418a19 pop esi */
  ESI = (pop32());
  /* 11418a1a ret  */
  ESPCHK(0x114189ceu, _esp0);
  ESP += 4; return;
L_11418a1b:;
  /* 11418a1b call 0x11416332 */
  push32(0x11418a20u); f_11416332();
  /* 11418a20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11418a26 call 0x1141633b */
  push32(0x11418a2bu); f_1141633b();
  /* 11418a2b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11418a2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11418a31 pop esi */
  ESI = (pop32());
  /* 11418a32 ret  */
  ESPCHK(0x114189ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10008a33 @ 0x11418a33 (395 bytes, 135 insns) */
void f_11418a33(void) {
  FTRACE(0x11418a33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418a33 push ebp */
  push32((uint32_t)(EBP));
  /* 11418a34 mov ebp, esp */
  EBP = (ESP);
  /* 11418a36 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418a3c push ebx */
  push32((uint32_t)(EBX));
  /* 11418a3d push esi */
  push32((uint32_t)(ESI));
  /* 11418a3e push edi */
  push32((uint32_t)(EDI));
  /* 11418a3f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11418a41 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418a44 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11418a47 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11418a4a jne 0x11418a53 */
  if (!C.zf) goto L_11418a53;
L_11418a4c:;
  /* 11418a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11418a4e jmp 0x11418bb9 */
  goto L_11418bb9;
L_11418a53:;
  /* 11418a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11418a56 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11418a59 lea ebx, [eax*4 + 0x11421b60] */
  EBX = ((uint32_t)(EAX*4 + 0x11421b60));
  /* 11418a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11418a63 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11418a66 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11418a69 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11418a6b shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11418a6e test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11418a73 je 0x11418a83 */
  if (C.zf) goto L_11418a83;
  /* 11418a75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11418a77 push edi */
  push32((uint32_t)(EDI));
  /* 11418a78 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11418a7b call 0x114165b9 */
  push32(0x11418a80u); f_114165b9();
  /* 11418a80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11418a83:;
  /* 11418a83 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11418a85 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418a87 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11418a8b je 0x11418b52 */
  if (C.zf) goto L_11418b52;
  /* 11418a91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11418a94 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418a97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11418a9a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11418a9d jbe 0x11418b8d */
  if ((C.cf||C.zf)) goto L_11418b8d;
L_11418aa3:;
  /* 11418aa3 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11418aa9:;
  /* 11418aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11418aac sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418aaf cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418ab2 jae 0x11418add */
  if (!C.cf) goto L_11418add;
  /* 11418ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11418ab7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11418aba mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11418abc cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11418abf jne 0x11418ac8 */
  if (!C.zf) goto L_11418ac8;
  /* 11418ac1 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11418ac4 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11418ac7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11418ac8:;
  /* 11418ac8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11418aca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11418acb mov ecx, eax */
  ECX = (EAX);
  /* 11418acd lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11418ad3 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418ad5 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418adb jl 0x11418aa9 */
  if ((C.sf!=C.of)) goto L_11418aa9;
L_11418add:;
  /* 11418add mov edi, eax */
  EDI = (EAX);
  /* 11418adf lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11418ae5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418ae7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11418aea push 0 */
  push32((uint32_t)(0x0u));
  /* 11418aec push eax */
  push32((uint32_t)(EAX));
  /* 11418aed lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11418af3 push edi */
  push32((uint32_t)(EDI));
  /* 11418af4 push eax */
  push32((uint32_t)(EAX));
  /* 11418af5 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11418af7 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11418afa call dword ptr [0x1141b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b050))), 0x11418b00u);
  /* 11418b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418b02 je 0x11418b47 */
  if (C.zf) goto L_11418b47;
  /* 11418b04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11418b07 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11418b0a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418b0c jl 0x11418b19 */
  if ((C.sf!=C.of)) goto L_11418b19;
  /* 11418b0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11418b11 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418b14 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418b17 jb 0x11418aa3 */
  if (C.cf) goto L_11418aa3;
L_11418b19:;
  /* 11418b19 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11418b1b:;
  /* 11418b1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11418b1e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418b20 jne 0x11418bb6 */
  if (!C.zf) goto L_11418bb6;
  /* 11418b26 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418b29 je 0x11418b8d */
  if (C.zf) goto L_11418b8d;
  /* 11418b2b push 5 */
  push32((uint32_t)(0x5u));
  /* 11418b2d pop esi */
  ESI = (pop32());
  /* 11418b2e cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418b31 jne 0x11418b7f */
  if (!C.zf) goto L_11418b7f;
  /* 11418b33 call 0x11416332 */
  push32(0x11418b38u); f_11416332();
  /* 11418b38 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11418b3e call 0x1141633b */
  push32(0x11418b43u); f_1141633b();
  /* 11418b43 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11418b45 jmp 0x11418b88 */
  goto L_11418b88;
L_11418b47:;
  /* 11418b47 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11418b4du);
  /* 11418b4d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11418b50 jmp 0x11418b19 */
  goto L_11418b19;
L_11418b52:;
  /* 11418b52 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11418b55 push edi */
  push32((uint32_t)(EDI));
  /* 11418b56 push ecx */
  push32((uint32_t)(ECX));
  /* 11418b57 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11418b5a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11418b5d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11418b5f call dword ptr [0x1141b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b050))), 0x11418b65u);
  /* 11418b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418b67 je 0x11418b74 */
  if (C.zf) goto L_11418b74;
  /* 11418b69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11418b6c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11418b6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11418b72 jmp 0x11418b1b */
  goto L_11418b1b;
L_11418b74:;
  /* 11418b74 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11418b7au);
  /* 11418b7a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11418b7d jmp 0x11418b1b */
  goto L_11418b1b;
L_11418b7f:;
  /* 11418b7f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11418b82 call 0x114162bf */
  push32(0x11418b87u); f_114162bf();
  /* 11418b87 pop ecx */
  ECX = (pop32());
L_11418b88:;
  /* 11418b88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11418b8b jmp 0x11418bb9 */
  goto L_11418bb9;
L_11418b8d:;
  /* 11418b8d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11418b8f test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11418b94 je 0x11418ba2 */
  if (C.zf) goto L_11418ba2;
  /* 11418b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11418b99 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11418b9c je 0x11418a4c */
  if (C.zf) goto L_11418a4c;
L_11418ba2:;
  /* 11418ba2 call 0x11416332 */
  push32(0x11418ba7u); f_11416332();
  /* 11418ba7 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11418bad call 0x1141633b */
  push32(0x11418bb2u); f_1141633b();
  /* 11418bb2 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11418bb4 jmp 0x11418b88 */
  goto L_11418b88;
L_11418bb6:;
  /* 11418bb6 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11418bb9:;
  /* 11418bb9 pop edi */
  EDI = (pop32());
  /* 11418bba pop esi */
  ESI = (pop32());
  /* 11418bbb pop ebx */
  EBX = (pop32());
  /* 11418bbc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11418bbd ret  */
  ESPCHK(0x11418a33u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bbe @ 0x11418bbe (68 bytes, 19 insns) */
void f_11418bbe(void) {
  FTRACE(0x11418bbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418bbe inc dword ptr [0x114215b8] */
  { uint32_t _r=(r32((uint32_t)(0x114215b8)))+1; w32((uint32_t)(0x114215b8), (_r)); fl_inc(_r,32); }
  /* 11418bc4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11418bc9 call 0x11416185 */
  push32(0x11418bceu); f_11416185();
  /* 11418bce pop ecx */
  ECX = (pop32());
  /* 11418bcf mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11418bd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418bd5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11418bd8 je 0x11418be7 */
  if (C.zf) goto L_11418be7;
  /* 11418bda or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 11418bde mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 11418be5 jmp 0x11418bf8 */
  goto L_11418bf8;
L_11418be7:;
  /* 11418be7 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 11418beb lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 11418bee mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11418bf1 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_11418bf8:;
  /* 11418bf8 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11418bfb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11418bff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11418c01 ret  */
  ESPCHK(0x11418bbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10008c02 @ 0x11418c02 (27 bytes, 13 insns) */
void f_11418c02(void) {
  FTRACE(0x11418c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418c02 mov eax, dword ptr [0x11421774] */
  EAX = (r32((uint32_t)(0x11421774)));
  /* 11418c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418c09 je 0x11418c1a */
  if (C.zf) goto L_11418c1a;
  /* 11418c0b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11418c0f call eax */
  call_ind((uint32_t)(EAX), 0x11418c11u);
  /* 11418c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418c13 pop ecx */
  ECX = (pop32());
  /* 11418c14 je 0x11418c1a */
  if (C.zf) goto L_11418c1a;
  /* 11418c16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11418c18 pop eax */
  EAX = (pop32());
  /* 11418c19 ret  */
  ESPCHK(0x11418c02u, _esp0);
  ESP += 4; return;
L_11418c1a:;
  /* 11418c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11418c1c ret  */
  ESPCHK(0x11418c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c1d @ 0x11418c1d (719 bytes, 241 insns) */
void f_11418c1d(void) {
  FTRACE(0x11418c1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418c1d push ebp */
  push32((uint32_t)(EBP));
  /* 11418c1e mov ebp, esp */
  EBP = (ESP);
  /* 11418c20 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418c23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11418c26 push ebx */
  push32((uint32_t)(EBX));
  /* 11418c27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11418c29 push esi */
  push32((uint32_t)(ESI));
  /* 11418c2a test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11418c2d push edi */
  push32((uint32_t)(EDI));
  /* 11418c2e mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 11418c35 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 11418c38 je 0x11418c43 */
  if (C.zf) goto L_11418c43;
  /* 11418c3a mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11418c3d mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 11418c41 jmp 0x11418c4e */
  goto L_11418c4e;
L_11418c43:;
  /* 11418c43 and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 11418c47 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11418c4e:;
  /* 11418c4e mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 11418c53 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 11418c55 jne 0x11418c68 */
  if (!C.zf) goto L_11418c68;
  /* 11418c57 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 11418c5a jne 0x11418c64 */
  if (!C.zf) goto L_11418c64;
  /* 11418c5c cmp dword ptr [0x1142178c], eax */
  { uint32_t _a=(r32((uint32_t)(0x1142178c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418c62 je 0x11418c68 */
  if (C.zf) goto L_11418c68;
L_11418c64:;
  /* 11418c64 or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_11418c68:;
  /* 11418c68 push 3 */
  push32((uint32_t)(0x3u));
  /* 11418c6a mov eax, ecx */
  EAX = (ECX);
  /* 11418c6c pop esi */
  ESI = (pop32());
  /* 11418c6d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11418c6f sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418c71 je 0x11418c8f */
  if (C.zf) goto L_11418c8f;
  /* 11418c73 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11418c74 je 0x11418c86 */
  if (C.zf) goto L_11418c86;
  /* 11418c76 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11418c77 jne 0x11418d21 */
  if (!C.zf) goto L_11418d21;
  /* 11418c7d mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 11418c84 jmp 0x11418c96 */
  goto L_11418c96;
L_11418c86:;
  /* 11418c86 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 11418c8d jmp 0x11418c96 */
  goto L_11418c96;
L_11418c8f:;
  /* 11418c8f mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_11418c96:;
  /* 11418c96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11418c99 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418c9c je 0x11418cc4 */
  if (C.zf) goto L_11418cc4;
  /* 11418c9e cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418ca1 je 0x11418cbb */
  if (C.zf) goto L_11418cbb;
  /* 11418ca3 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418ca6 je 0x11418cb2 */
  if (C.zf) goto L_11418cb2;
  /* 11418ca8 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418cab jne 0x11418d21 */
  if (!C.zf) goto L_11418d21;
  /* 11418cad mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 11418cb0 jmp 0x11418cc7 */
  goto L_11418cc7;
L_11418cb2:;
  /* 11418cb2 mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 11418cb9 jmp 0x11418cc7 */
  goto L_11418cc7;
L_11418cbb:;
  /* 11418cbb mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11418cc2 jmp 0x11418cc7 */
  goto L_11418cc7;
L_11418cc4:;
  /* 11418cc4 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_11418cc7:;
  /* 11418cc7 mov edx, 0x700 */
  EDX = (0x700u);
  /* 11418ccc mov eax, 0x400 */
  EAX = (0x400u);
  /* 11418cd1 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11418cd3 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11418cd8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418cda jg 0x11418d0d */
  if ((!C.zf&&C.sf==C.of)) goto L_11418d0d;
  /* 11418cdc je 0x11418d08 */
  if (C.zf) goto L_11418d08;
  /* 11418cde cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418ce0 je 0x11418d08 */
  if (C.zf) goto L_11418d08;
  /* 11418ce2 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418ce4 je 0x11418cff */
  if (C.zf) goto L_11418cff;
  /* 11418ce6 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418cec je 0x11418d3b */
  if (C.zf) goto L_11418d3b;
  /* 11418cee cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418cf4 jne 0x11418d21 */
  if (!C.zf) goto L_11418d21;
  /* 11418cf6 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11418cfd jmp 0x11418d4b */
  goto L_11418d4b;
L_11418cff:;
  /* 11418cff mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 11418d06 jmp 0x11418d4b */
  goto L_11418d4b;
L_11418d08:;
  /* 11418d08 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11418d0b jmp 0x11418d4b */
  goto L_11418d4b;
L_11418d0d:;
  /* 11418d0d cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418d13 je 0x11418d44 */
  if (C.zf) goto L_11418d44;
  /* 11418d15 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418d1b je 0x11418d3b */
  if (C.zf) goto L_11418d3b;
  /* 11418d1d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418d1f je 0x11418d44 */
  if (C.zf) goto L_11418d44;
L_11418d21:;
  /* 11418d21 call 0x11416332 */
  push32(0x11418d26u); f_11416332();
  /* 11418d26 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11418d2c call 0x1141633b */
  push32(0x11418d31u); f_1141633b();
  /* 11418d31 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11418d33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11418d36 jmp 0x11418ee7 */
  goto L_11418ee7;
L_11418d3b:;
  /* 11418d3b mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 11418d42 jmp 0x11418d4b */
  goto L_11418d4b;
L_11418d44:;
  /* 11418d44 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11418d4b:;
  /* 11418d4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11418d4e mov esi, 0x80 */
  ESI = (0x80u);
  /* 11418d53 test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 11418d55 je 0x11418d6a */
  if (C.zf) goto L_11418d6a;
  /* 11418d57 mov ecx, dword ptr [0x114215bc] */
  ECX = (r32((uint32_t)(0x114215bc)));
  /* 11418d5d not ecx */
  ECX = (~(ECX));
  /* 11418d5f and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 11418d62 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11418d65 jne 0x11418d6a */
  if (!C.zf) goto L_11418d6a;
  /* 11418d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11418d69 pop esi */
  ESI = (pop32());
L_11418d6a:;
  /* 11418d6a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11418d6c je 0x11418d78 */
  if (C.zf) goto L_11418d78;
  /* 11418d6e or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11418d74 or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_11418d78:;
  /* 11418d78 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 11418d7b je 0x11418d7f */
  if (C.zf) goto L_11418d7f;
  /* 11418d7d or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_11418d7f:;
  /* 11418d7f test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 11418d81 je 0x11418d8b */
  if (C.zf) goto L_11418d8b;
  /* 11418d83 or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11418d89 jmp 0x11418d95 */
  goto L_11418d95;
L_11418d8b:;
  /* 11418d8b test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 11418d8d je 0x11418d95 */
  if (C.zf) goto L_11418d95;
  /* 11418d8f or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_11418d95:;
  /* 11418d95 call 0x1141865a */
  push32(0x11418d9au); f_1141865a();
  /* 11418d9a mov ebx, eax */
  EBX = (EAX);
  /* 11418d9c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11418d9f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418da1 jne 0x11418dbd */
  if (!C.zf) goto L_11418dbd;
  /* 11418da3 call 0x11416332 */
  push32(0x11418da8u); f_11416332();
  /* 11418da8 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11418dae call 0x1141633b */
  push32(0x11418db3u); f_1141633b();
  /* 11418db3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11418db6 mov eax, edi */
  EAX = (EDI);
  /* 11418db8 jmp 0x11418ee7 */
  goto L_11418ee7;
L_11418dbd:;
  /* 11418dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11418dbf push esi */
  push32((uint32_t)(ESI));
  /* 11418dc0 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11418dc3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11418dc6 push eax */
  push32((uint32_t)(EAX));
  /* 11418dc7 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11418dca push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11418dcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11418dd0 call dword ptr [0x1141b038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b038))), 0x11418dd6u);
  /* 11418dd6 mov esi, eax */
  ESI = (EAX);
  /* 11418dd8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418dda jne 0x11418df0 */
  if (!C.zf) goto L_11418df0;
L_11418ddc:;
  /* 11418ddc call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11418de2u);
  /* 11418de2 push eax */
  push32((uint32_t)(EAX));
  /* 11418de3 call 0x114162bf */
  push32(0x11418de8u); f_114162bf();
  /* 11418de8 pop ecx */
  ECX = (pop32());
  /* 11418de9 mov esi, edi */
  ESI = (EDI);
  /* 11418deb jmp 0x11418ede */
  goto L_11418ede;
L_11418df0:;
  /* 11418df0 push esi */
  push32((uint32_t)(ESI));
  /* 11418df1 call dword ptr [0x1141b0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0a0))), 0x11418df7u);
  /* 11418df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418df9 jne 0x11418e04 */
  if (!C.zf) goto L_11418e04;
  /* 11418dfb push esi */
  push32((uint32_t)(ESI));
  /* 11418dfc call dword ptr [0x1141b08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b08c))), 0x11418e02u);
  /* 11418e02 jmp 0x11418ddc */
  goto L_11418ddc;
L_11418e04:;
  /* 11418e04 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418e07 jne 0x11418e0f */
  if (!C.zf) goto L_11418e0f;
  /* 11418e09 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 11418e0d jmp 0x11418e18 */
  goto L_11418e18;
L_11418e0f:;
  /* 11418e0f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418e12 jne 0x11418e18 */
  if (!C.zf) goto L_11418e18;
  /* 11418e14 or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_11418e18:;
  /* 11418e18 push esi */
  push32((uint32_t)(ESI));
  /* 11418e19 push ebx */
  push32((uint32_t)(EBX));
  /* 11418e1a call 0x1141877d */
  push32(0x11418e1fu); f_1141877d();
  /* 11418e1f mov eax, ebx */
  EAX = (EBX);
  /* 11418e21 pop ecx */
  ECX = (pop32());
  /* 11418e22 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11418e25 pop ecx */
  ECX = (pop32());
  /* 11418e26 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 11418e29 lea edi, [eax*4 + 0x11421b60] */
  EDI = ((uint32_t)(EAX*4 + 0x11421b60));
  /* 11418e30 mov eax, ebx */
  EAX = (EBX);
  /* 11418e32 or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11418e35 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11418e38 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11418e3b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11418e3e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11418e40 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11418e43 and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 11418e47 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 11418e4b jne 0x11418ec5 */
  if (!C.zf) goto L_11418ec5;
  /* 11418e4d test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11418e50 je 0x11418ec5 */
  if (C.zf) goto L_11418ec5;
  /* 11418e52 test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 11418e56 je 0x11418ec5 */
  if (C.zf) goto L_11418ec5;
  /* 11418e58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11418e5a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11418e5c push ebx */
  push32((uint32_t)(EBX));
  /* 11418e5d call 0x114165b9 */
  push32(0x11418e62u); f_114165b9();
  /* 11418e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11418e65 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418e68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11418e6b jne 0x11418e86 */
  if (!C.zf) goto L_11418e86;
  /* 11418e6d call 0x1141633b */
  push32(0x11418e72u); f_1141633b();
  /* 11418e72 cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418e78 je 0x11418ec5 */
  if (C.zf) goto L_11418ec5;
L_11418e7a:;
  /* 11418e7a push ebx */
  push32((uint32_t)(EBX));
  /* 11418e7b call 0x114158ec */
  push32(0x11418e80u); f_114158ec();
  /* 11418e80 pop ecx */
  ECX = (pop32());
  /* 11418e81 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11418e84 jmp 0x11418ede */
  goto L_11418ede;
L_11418e86:;
  /* 11418e86 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 11418e8a lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 11418e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11418e8f push eax */
  push32((uint32_t)(EAX));
  /* 11418e90 push ebx */
  push32((uint32_t)(EBX));
  /* 11418e91 call 0x11415c6f */
  push32(0x11418e96u); f_11415c6f();
  /* 11418e96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11418e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11418e9b jne 0x11418eb3 */
  if (!C.zf) goto L_11418eb3;
  /* 11418e9d cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11418ea1 jne 0x11418eb3 */
  if (!C.zf) goto L_11418eb3;
  /* 11418ea3 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11418ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11418ea7 call 0x11419b08 */
  push32(0x11418eacu); f_11419b08();
  /* 11418eac pop ecx */
  ECX = (pop32());
  /* 11418ead cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418eb0 pop ecx */
  ECX = (pop32());
  /* 11418eb1 je 0x11418e7a */
  if (C.zf) goto L_11418e7a;
L_11418eb3:;
  /* 11418eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11418eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11418eb7 push ebx */
  push32((uint32_t)(EBX));
  /* 11418eb8 call 0x114165b9 */
  push32(0x11418ebdu); f_114165b9();
  /* 11418ebd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11418ec0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418ec3 je 0x11418e7a */
  if (C.zf) goto L_11418e7a;
L_11418ec5:;
  /* 11418ec5 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11418ec9 jne 0x11418edc */
  if (!C.zf) goto L_11418edc;
  /* 11418ecb test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 11418ecf je 0x11418edc */
  if (C.zf) goto L_11418edc;
  /* 11418ed1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11418ed3 or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11418ed8 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_11418edc:;
  /* 11418edc mov esi, ebx */
  ESI = (EBX);
L_11418ede:;
  /* 11418ede push ebx */
  push32((uint32_t)(EBX));
  /* 11418edf call 0x11418919 */
  push32(0x11418ee4u); f_11418919();
  /* 11418ee4 pop ecx */
  ECX = (pop32());
  /* 11418ee5 mov eax, esi */
  EAX = (ESI);
L_11418ee7:;
  /* 11418ee7 pop edi */
  EDI = (pop32());
  /* 11418ee8 pop esi */
  ESI = (pop32());
  /* 11418ee9 pop ebx */
  EBX = (pop32());
  /* 11418eea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11418eeb ret  */
  ESPCHK(0x11418c1du, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x11418ef0 (7 bytes, 3 insns) */
void f_11418ef0(void) {
  FTRACE(0x11418ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418ef0 push edi */
  push32((uint32_t)(EDI));
  /* 11418ef1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11418ef5 jmp 0x11418f61 */
  jmp_ind(0x11418f61u); return;
}

/* FUN_10008f00 @ 0x11418f00 (224 bytes, 84 insns) */
void f_11418f00(void) {
  FTRACE(0x11418f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418f00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11418f04 push edi */
  push32((uint32_t)(EDI));
  /* 11418f05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11418f0b je 0x11418f1c */
  if (C.zf) goto L_11418f1c;
L_11418f0d:;
  /* 11418f0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11418f0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11418f10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11418f12 je 0x11418f4f */
  if (C.zf) goto L_11418f4f;
  /* 11418f14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11418f1a jne 0x11418f0d */
  if (!C.zf) goto L_11418f0d;
L_11418f1c:;
  /* 11418f1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11418f1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11418f23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418f25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11418f28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11418f2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418f2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11418f32 je 0x11418f1c */
  if (C.zf) goto L_11418f1c;
  /* 11418f34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11418f37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11418f39 je 0x11418f5e */
  if (C.zf) goto L_11418f5e;
  /* 11418f3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11418f3d je 0x11418f59 */
  if (C.zf) goto L_11418f59;
  /* 11418f3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11418f44 je 0x11418f54 */
  if (C.zf) goto L_11418f54;
  /* 11418f46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11418f4b je 0x11418f4f */
  if (C.zf) goto L_11418f4f;
  /* 11418f4d jmp 0x11418f1c */
  goto L_11418f1c;
L_11418f4f:;
  /* 11418f4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11418f52 jmp 0x11418f61 */
  goto L_11418f61;
L_11418f54:;
  /* 11418f54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11418f57 jmp 0x11418f61 */
  goto L_11418f61;
L_11418f59:;
  /* 11418f59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11418f5c jmp 0x11418f61 */
  goto L_11418f61;
L_11418f5e:;
  /* 11418f5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11418f61:;
  /* 11418f61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11418f65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11418f6b je 0x11418f86 */
  if (C.zf) goto L_11418f86;
L_11418f6d:;
  /* 11418f6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11418f6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11418f70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11418f72 je 0x11418fd8 */
  if (C.zf) goto L_11418fd8;
  /* 11418f74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11418f76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11418f77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11418f7d jne 0x11418f6d */
  if (!C.zf) goto L_11418f6d;
  /* 11418f7f jmp 0x11418f86 */
  goto L_11418f86;
L_11418f81:;
  /* 11418f81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11418f83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11418f86:;
  /* 11418f86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11418f8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11418f8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418f8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11418f92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11418f94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11418f96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418f99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11418f9e je 0x11418f81 */
  if (C.zf) goto L_11418f81;
  /* 11418fa0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11418fa2 je 0x11418fd8 */
  if (C.zf) goto L_11418fd8;
  /* 11418fa4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11418fa6 je 0x11418fcf */
  if (C.zf) goto L_11418fcf;
  /* 11418fa8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11418fae je 0x11418fc2 */
  if (C.zf) goto L_11418fc2;
  /* 11418fb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11418fb6 je 0x11418fba */
  if (C.zf) goto L_11418fba;
  /* 11418fb8 jmp 0x11418f81 */
  goto L_11418f81;
L_11418fba:;
  /* 11418fba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11418fbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11418fc0 pop edi */
  EDI = (pop32());
  /* 11418fc1 ret  */
  ESPCHK(0x11418f00u, _esp0);
  ESP += 4; return;
L_11418fc2:;
  /* 11418fc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11418fc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11418fc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11418fcd pop edi */
  EDI = (pop32());
  /* 11418fce ret  */
  ESPCHK(0x11418f00u, _esp0);
  ESP += 4; return;
L_11418fcf:;
  /* 11418fcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11418fd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11418fd6 pop edi */
  EDI = (pop32());
  /* 11418fd7 ret  */
  ESPCHK(0x11418f00u, _esp0);
  ESP += 4; return;
L_11418fd8:;
  /* 11418fd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11418fda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11418fde pop edi */
  EDI = (pop32());
  /* 11418fdf ret  */
  ESPCHK(0x11418f00u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11418fe0 (123 bytes, 44 insns) */
void f_11418fe0(void) {
  FTRACE(0x11418fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418fe0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11418fe4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11418fea je 0x11419000 */
  if (C.zf) goto L_11419000;
L_11418fec:;
  /* 11418fec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11418fee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11418fef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11418ff1 je 0x11419033 */
  if (C.zf) goto L_11419033;
  /* 11418ff3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11418ff9 jne 0x11418fec */
  if (!C.zf) goto L_11418fec;
  /* 11418ffb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11419000:;
  /* 11419000 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11419002 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11419007 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419009 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1141900c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1141900e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419011 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11419016 je 0x11419000 */
  if (C.zf) goto L_11419000;
  /* 11419018 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1141901b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1141901d je 0x11419051 */
  if (C.zf) goto L_11419051;
  /* 1141901f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11419021 je 0x11419047 */
  if (C.zf) goto L_11419047;
  /* 11419023 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11419028 je 0x1141903d */
  if (C.zf) goto L_1141903d;
  /* 1141902a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1141902f je 0x11419033 */
  if (C.zf) goto L_11419033;
  /* 11419031 jmp 0x11419000 */
  goto L_11419000;
L_11419033:;
  /* 11419033 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11419036 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141903a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141903c ret  */
  ESPCHK(0x11418fe0u, _esp0);
  ESP += 4; return;
L_1141903d:;
  /* 1141903d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11419040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11419044 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419046 ret  */
  ESPCHK(0x11418fe0u, _esp0);
  ESP += 4; return;
L_11419047:;
  /* 11419047 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1141904a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141904e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419050 ret  */
  ESPCHK(0x11418fe0u, _esp0);
  ESP += 4; return;
L_11419051:;
  /* 11419051 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11419054 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11419058 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141905a ret  */
  ESPCHK(0x11418fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000905b @ 0x1141905b (429 bytes, 143 insns) */
void f_1141905b(void) {
  FTRACE(0x1141905bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141905b push ebp */
  push32((uint32_t)(EBP));
  /* 1141905c mov ebp, esp */
  EBP = (ESP);
  /* 1141905e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419061 push ebx */
  push32((uint32_t)(EBX));
  /* 11419062 push esi */
  push32((uint32_t)(ESI));
  /* 11419063 push edi */
  push32((uint32_t)(EDI));
  /* 11419064 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11419066 call 0x11418256 */
  push32(0x1141906bu); f_11418256();
  /* 1141906b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1141906e call 0x11419208 */
  push32(0x11419073u); f_11419208();
  /* 11419073 mov ebx, eax */
  EBX = (EAX);
  /* 11419075 pop ecx */
  ECX = (pop32());
  /* 11419076 cmp ebx, dword ptr [0x11421908] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11421908))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141907c pop ecx */
  ECX = (pop32());
  /* 1141907d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11419080 jne 0x11419089 */
  if (!C.zf) goto L_11419089;
L_11419082:;
  /* 11419082 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11419084 jmp 0x114191f9 */
  goto L_114191f9;
L_11419089:;
  /* 11419089 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1141908b je 0x114191e7 */
  if (C.zf) goto L_114191e7;
  /* 11419091 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11419093 mov eax, 0x1141ee68 */
  EAX = (0x1141ee68u);
L_11419098:;
  /* 11419098 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141909a je 0x11419110 */
  if (C.zf) goto L_11419110;
  /* 1141909c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141909f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114190a0 cmp eax, 0x1141ef58 */
  { uint32_t _a=(EAX),_b=(0x1141ef58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114190a5 jl 0x11419098 */
  if ((C.sf!=C.of)) goto L_11419098;
  /* 114190a7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114190aa push eax */
  push32((uint32_t)(EAX));
  /* 114190ab push ebx */
  push32((uint32_t)(EBX));
  /* 114190ac call dword ptr [0x1141b03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b03c))), 0x114190b2u);
  /* 114190b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 114190b4 pop esi */
  ESI = (pop32());
  /* 114190b5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114190b7 jne 0x114191de */
  if (!C.zf) goto L_114191de;
  /* 114190bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114190bf and dword ptr [0x11421b24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11421b24)))&(0x0u); w32((uint32_t)(0x11421b24), (_r)); fl_logic(_r,32); }
  /* 114190c6 pop ecx */
  ECX = (pop32());
  /* 114190c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114190c9 mov edi, 0x11421a20 */
  EDI = (0x11421a20u);
  /* 114190ce cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114190d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114190d3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 114190d4 mov dword ptr [0x11421908], ebx */
  w32((uint32_t)(0x11421908), (EBX));
  /* 114190da jbe 0x114191cb */
  if ((C.cf||C.zf)) goto L_114191cb;
  /* 114190e0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114190e4 je 0x114191a6 */
  if (C.zf) goto L_114191a6;
  /* 114190ea lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_114190ed:;
  /* 114190ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114190ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114190f1 je 0x114191a6 */
  if (C.zf) goto L_114191a6;
  /* 114190f7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 114190fb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_114190fe:;
  /* 114190fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419100 ja 0x1141919a */
  if ((!C.cf&&!C.zf)) goto L_1141919a;
  /* 11419106 or byte ptr [eax + 0x11421a21], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(0x4u); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 1141910d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1141910e jmp 0x114190fe */
  goto L_114190fe;
L_11419110:;
  /* 11419110 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11419114 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11419116 pop ecx */
  ECX = (pop32());
  /* 11419117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11419119 mov edi, 0x11421a20 */
  EDI = (0x11421a20u);
  /* 1141911e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11419121 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11419123 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11419126 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11419127 lea ebx, [esi + 0x1141ee78] */
  EBX = ((uint32_t)(ESI + 0x1141ee78));
L_1141912d:;
  /* 1141912d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419130 mov ecx, ebx */
  ECX = (EBX);
  /* 11419132 je 0x11419160 */
  if (C.zf) goto L_11419160;
L_11419134:;
  /* 11419134 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11419137 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11419139 je 0x11419160 */
  if (C.zf) goto L_11419160;
  /* 1141913b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1141913e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11419141 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419143 ja 0x11419159 */
  if ((!C.cf&&!C.zf)) goto L_11419159;
  /* 11419145 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11419148 mov dl, byte ptr [edx + 0x1141ee60] */
  DL = (r8((uint32_t)(EDX + 0x1141ee60)));
L_1141914e:;
  /* 1141914e or byte ptr [eax + 0x11421a21], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(DL); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 11419154 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11419155 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419157 jbe 0x1141914e */
  if ((C.cf||C.zf)) goto L_1141914e;
L_11419159:;
  /* 11419159 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1141915a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1141915b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141915e jne 0x11419134 */
  if (!C.zf) goto L_11419134;
L_11419160:;
  /* 11419160 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11419163 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419166 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141916a jb 0x1141912d */
  if (C.cf) goto L_1141912d;
  /* 1141916c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141916f mov dword ptr [0x1142191c], 1 */
  w32((uint32_t)(0x1142191c), (0x1u));
  /* 11419179 push eax */
  push32((uint32_t)(EAX));
  /* 1141917a mov dword ptr [0x11421908], eax */
  w32((uint32_t)(0x11421908), (EAX));
  /* 1141917f call 0x11419252 */
  push32(0x11419184u); f_11419252();
  /* 11419184 lea esi, [esi + 0x1141ee6c] */
  ESI = ((uint32_t)(ESI + 0x1141ee6c));
  /* 1141918a mov edi, 0x11421910 */
  EDI = (0x11421910u);
  /* 1141918f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11419190 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11419191 pop ecx */
  ECX = (pop32());
  /* 11419192 mov dword ptr [0x11421b24], eax */
  w32((uint32_t)(0x11421b24), (EAX));
  /* 11419197 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11419198 jmp 0x114191ec */
  goto L_114191ec;
L_1141919a:;
  /* 1141919a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1141919b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1141919c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114191a0 jne 0x114190ed */
  if (!C.zf) goto L_114190ed;
L_114191a6:;
  /* 114191a6 mov eax, esi */
  EAX = (ESI);
L_114191a8:;
  /* 114191a8 or byte ptr [eax + 0x11421a21], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(0x8u); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 114191af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114191b0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114191b5 jb 0x114191a8 */
  if (C.cf) goto L_114191a8;
  /* 114191b7 push ebx */
  push32((uint32_t)(EBX));
  /* 114191b8 call 0x11419252 */
  push32(0x114191bdu); f_11419252();
  /* 114191bd pop ecx */
  ECX = (pop32());
  /* 114191be mov dword ptr [0x11421b24], eax */
  w32((uint32_t)(0x11421b24), (EAX));
  /* 114191c3 mov dword ptr [0x1142191c], esi */
  w32((uint32_t)(0x1142191c), (ESI));
  /* 114191c9 jmp 0x114191d2 */
  goto L_114191d2;
L_114191cb:;
  /* 114191cb and dword ptr [0x1142191c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1142191c)))&(0x0u); w32((uint32_t)(0x1142191c), (_r)); fl_logic(_r,32); }
L_114191d2:;
  /* 114191d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114191d4 mov edi, 0x11421910 */
  EDI = (0x11421910u);
  /* 114191d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 114191da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 114191db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 114191dc jmp 0x114191ec */
  goto L_114191ec;
L_114191de:;
  /* 114191de cmp dword ptr [0x1142177c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1142177c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114191e5 je 0x114191f6 */
  if (C.zf) goto L_114191f6;
L_114191e7:;
  /* 114191e7 call 0x11419285 */
  push32(0x114191ecu); f_11419285();
L_114191ec:;
  /* 114191ec call 0x114192ae */
  push32(0x114191f1u); f_114192ae();
  /* 114191f1 jmp 0x11419082 */
  goto L_11419082;
L_114191f6:;
  /* 114191f6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_114191f9:;
  /* 114191f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114191fb call 0x114182b7 */
  push32(0x11419200u); f_114182b7();
  /* 11419200 pop ecx */
  ECX = (pop32());
  /* 11419201 mov eax, esi */
  EAX = (ESI);
  /* 11419203 pop edi */
  EDI = (pop32());
  /* 11419204 pop esi */
  ESI = (pop32());
  /* 11419205 pop ebx */
  EBX = (pop32());
  /* 11419206 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419207 ret  */
  ESPCHK(0x1141905bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009208 @ 0x11419208 (74 bytes, 15 insns) */
void f_11419208(void) {
  FTRACE(0x11419208u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419208 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141920c and dword ptr [0x1142177c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1142177c)))&(0x0u); w32((uint32_t)(0x1142177c), (_r)); fl_logic(_r,32); }
  /* 11419213 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419216 jne 0x11419228 */
  if (!C.zf) goto L_11419228;
  /* 11419218 mov dword ptr [0x1142177c], 1 */
  w32((uint32_t)(0x1142177c), (0x1u));
  /* 11419222 jmp dword ptr [0x1141b02c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1141b02c)))); return;
L_11419228:;
  /* 11419228 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141922b jne 0x1141923d */
  if (!C.zf) goto L_1141923d;
  /* 1141922d mov dword ptr [0x1142177c], 1 */
  w32((uint32_t)(0x1142177c), (0x1u));
  /* 11419237 jmp dword ptr [0x1141b030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1141b030)))); return;
L_1141923d:;
  /* 1141923d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419240 jne 0x11419251 */
  if (!C.zf) goto L_11419251;
  /* 11419242 mov eax, dword ptr [0x114217a8] */
  EAX = (r32((uint32_t)(0x114217a8)));
  /* 11419247 mov dword ptr [0x1142177c], 1 */
  w32((uint32_t)(0x1142177c), (0x1u));
L_11419251:;
  /* 11419251 ret  */
  ESPCHK(0x11419208u, _esp0);
  ESP += 4; return;
}

/* FUN_10009252 @ 0x11419252 (51 bytes, 19 insns) */
void f_11419252(void) {
  FTRACE(0x11419252u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419252 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11419256 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141925b je 0x1141927f */
  if (C.zf) goto L_1141927f;
  /* 1141925d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419260 je 0x11419279 */
  if (C.zf) goto L_11419279;
  /* 11419262 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419265 je 0x11419273 */
  if (C.zf) goto L_11419273;
  /* 11419267 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11419268 je 0x1141926d */
  if (C.zf) goto L_1141926d;
  /* 1141926a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141926c ret  */
  ESPCHK(0x11419252u, _esp0);
  ESP += 4; return;
L_1141926d:;
  /* 1141926d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11419272 ret  */
  ESPCHK(0x11419252u, _esp0);
  ESP += 4; return;
L_11419273:;
  /* 11419273 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11419278 ret  */
  ESPCHK(0x11419252u, _esp0);
  ESP += 4; return;
L_11419279:;
  /* 11419279 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1141927e ret  */
  ESPCHK(0x11419252u, _esp0);
  ESP += 4; return;
L_1141927f:;
  /* 1141927f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11419284 ret  */
  ESPCHK(0x11419252u, _esp0);
  ESP += 4; return;
}

/* FUN_10009285 @ 0x11419285 (41 bytes, 17 insns) */
void f_11419285(void) {
  FTRACE(0x11419285u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419285 push edi */
  push32((uint32_t)(EDI));
  /* 11419286 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11419288 pop ecx */
  ECX = (pop32());
  /* 11419289 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141928b mov edi, 0x11421a20 */
  EDI = (0x11421a20u);
  /* 11419290 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11419292 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11419293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11419295 mov edi, 0x11421910 */
  EDI = (0x11421910u);
  /* 1141929a mov dword ptr [0x11421908], eax */
  w32((uint32_t)(0x11421908), (EAX));
  /* 1141929f mov dword ptr [0x1142191c], eax */
  w32((uint32_t)(0x1142191c), (EAX));
  /* 114192a4 mov dword ptr [0x11421b24], eax */
  w32((uint32_t)(0x11421b24), (EAX));
  /* 114192a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 114192aa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 114192ab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 114192ac pop edi */
  EDI = (pop32());
  /* 114192ad ret  */
  ESPCHK(0x11419285u, _esp0);
  ESP += 4; return;
}

/* FUN_100092ae @ 0x114192ae (389 bytes, 124 insns) */
void f_114192ae(void) {
  FTRACE(0x114192aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114192ae push ebp */
  push32((uint32_t)(EBP));
  /* 114192af mov ebp, esp */
  EBP = (ESP);
  /* 114192b1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114192b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114192ba push esi */
  push32((uint32_t)(ESI));
  /* 114192bb push eax */
  push32((uint32_t)(EAX));
  /* 114192bc push dword ptr [0x11421908] */
  push32((uint32_t)(r32((uint32_t)(0x11421908))));
  /* 114192c2 call dword ptr [0x1141b03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b03c))), 0x114192c8u);
  /* 114192c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114192cb jne 0x114193e7 */
  if (!C.zf) goto L_114193e7;
  /* 114192d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114192d3 mov esi, 0x100 */
  ESI = (0x100u);
L_114192d8:;
  /* 114192d8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 114192df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114192e0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114192e2 jb 0x114192d8 */
  if (C.cf) goto L_114192d8;
  /* 114192e4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 114192e7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 114192ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114192f0 je 0x11419329 */
  if (C.zf) goto L_11419329;
  /* 114192f2 push ebx */
  push32((uint32_t)(EBX));
  /* 114192f3 push edi */
  push32((uint32_t)(EDI));
  /* 114192f4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_114192f7:;
  /* 114192f7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 114192fa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 114192fd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114192ff ja 0x1141931e */
  if ((!C.cf&&!C.zf)) goto L_1141931e;
  /* 11419301 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419303 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1141930a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1141930b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11419310 mov ebx, ecx */
  EBX = (ECX);
  /* 11419312 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11419315 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11419317 mov ecx, ebx */
  ECX = (EBX);
  /* 11419319 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141931c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1141931e:;
  /* 1141931e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1141931f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11419320 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11419323 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11419325 jne 0x114192f7 */
  if (!C.zf) goto L_114192f7;
  /* 11419327 pop edi */
  EDI = (pop32());
  /* 11419328 pop ebx */
  EBX = (pop32());
L_11419329:;
  /* 11419329 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141932b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11419331 push dword ptr [0x11421b24] */
  push32((uint32_t)(r32((uint32_t)(0x11421b24))));
  /* 11419337 push dword ptr [0x11421908] */
  push32((uint32_t)(r32((uint32_t)(0x11421908))));
  /* 1141933d push eax */
  push32((uint32_t)(EAX));
  /* 1141933e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11419344 push esi */
  push32((uint32_t)(ESI));
  /* 11419345 push eax */
  push32((uint32_t)(EAX));
  /* 11419346 push 1 */
  push32((uint32_t)(0x1u));
  /* 11419348 call 0x11419e7c */
  push32(0x1141934du); f_11419e7c();
  /* 1141934d push 0 */
  push32((uint32_t)(0x0u));
  /* 1141934f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11419355 push dword ptr [0x11421908] */
  push32((uint32_t)(r32((uint32_t)(0x11421908))));
  /* 1141935b push esi */
  push32((uint32_t)(ESI));
  /* 1141935c push eax */
  push32((uint32_t)(EAX));
  /* 1141935d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11419363 push esi */
  push32((uint32_t)(ESI));
  /* 11419364 push eax */
  push32((uint32_t)(EAX));
  /* 11419365 push esi */
  push32((uint32_t)(ESI));
  /* 11419366 push dword ptr [0x11421b24] */
  push32((uint32_t)(r32((uint32_t)(0x11421b24))));
  /* 1141936c call 0x11419c2d */
  push32(0x11419371u); f_11419c2d();
  /* 11419371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11419373 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11419379 push dword ptr [0x11421908] */
  push32((uint32_t)(r32((uint32_t)(0x11421908))));
  /* 1141937f push esi */
  push32((uint32_t)(ESI));
  /* 11419380 push eax */
  push32((uint32_t)(EAX));
  /* 11419381 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11419387 push esi */
  push32((uint32_t)(ESI));
  /* 11419388 push eax */
  push32((uint32_t)(EAX));
  /* 11419389 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1141938e push dword ptr [0x11421b24] */
  push32((uint32_t)(r32((uint32_t)(0x11421b24))));
  /* 11419394 call 0x11419c2d */
  push32(0x11419399u); f_11419c2d();
  /* 11419399 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141939c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141939e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_114193a4:;
  /* 114193a4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 114193a7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 114193aa je 0x114193c2 */
  if (C.zf) goto L_114193c2;
  /* 114193ac or byte ptr [eax + 0x11421a21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(0x10u); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 114193b3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_114193ba:;
  /* 114193ba mov byte ptr [eax + 0x11421920], dl */
  w8((uint32_t)(EAX + 0x11421920), (DL));
  /* 114193c0 jmp 0x114193de */
  goto L_114193de;
L_114193c2:;
  /* 114193c2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 114193c5 je 0x114193d7 */
  if (C.zf) goto L_114193d7;
  /* 114193c7 or byte ptr [eax + 0x11421a21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(0x20u); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 114193ce mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 114193d5 jmp 0x114193ba */
  goto L_114193ba;
L_114193d7:;
  /* 114193d7 and byte ptr [eax + 0x11421920], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421920)))&(0x0u); w8((uint32_t)(EAX + 0x11421920), (_r)); fl_logic(_r,8); }
L_114193de:;
  /* 114193de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114193df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114193e0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114193e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114193e3 jb 0x114193a4 */
  if (C.cf) goto L_114193a4;
  /* 114193e5 jmp 0x11419430 */
  goto L_11419430;
L_114193e7:;
  /* 114193e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114193e9 mov esi, 0x100 */
  ESI = (0x100u);
L_114193ee:;
  /* 114193ee cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114193f1 jb 0x1141940c */
  if (C.cf) goto L_1141940c;
  /* 114193f3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114193f6 ja 0x1141940c */
  if ((!C.cf&&!C.zf)) goto L_1141940c;
  /* 114193f8 or byte ptr [eax + 0x11421a21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(0x10u); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 114193ff mov cl, al */
  CL = (AL);
  /* 11419401 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11419404:;
  /* 11419404 mov byte ptr [eax + 0x11421920], cl */
  w8((uint32_t)(EAX + 0x11421920), (CL));
  /* 1141940a jmp 0x1141942b */
  goto L_1141942b;
L_1141940c:;
  /* 1141940c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141940f jb 0x11419424 */
  if (C.cf) goto L_11419424;
  /* 11419411 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419414 ja 0x11419424 */
  if ((!C.cf&&!C.zf)) goto L_11419424;
  /* 11419416 or byte ptr [eax + 0x11421a21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421a21)))|(0x20u); w8((uint32_t)(EAX + 0x11421a21), (_r)); fl_logic(_r,8); }
  /* 1141941d mov cl, al */
  CL = (AL);
  /* 1141941f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11419422 jmp 0x11419404 */
  goto L_11419404;
L_11419424:;
  /* 11419424 and byte ptr [eax + 0x11421920], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11421920)))&(0x0u); w8((uint32_t)(EAX + 0x11421920), (_r)); fl_logic(_r,8); }
L_1141942b:;
  /* 1141942b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1141942c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141942e jb 0x114193ee */
  if (C.cf) goto L_114193ee;
L_11419430:;
  /* 11419430 pop esi */
  ESI = (pop32());
  /* 11419431 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419432 ret  */
  ESPCHK(0x114192aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10009433 @ 0x11419433 (28 bytes, 7 insns) */
void f_11419433(void) {
  FTRACE(0x11419433u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419433 cmp dword ptr [0x11421b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11421b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141943a jne 0x1141944e */
  if (!C.zf) goto L_1141944e;
  /* 1141943c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1141943e call 0x1141905b */
  push32(0x11419443u); f_1141905b();
  /* 11419443 pop ecx */
  ECX = (pop32());
  /* 11419444 mov dword ptr [0x11421b50], 1 */
  w32((uint32_t)(0x11421b50), (0x1u));
L_1141944e:;
  /* 1141944e ret  */
  ESPCHK(0x11419433u, _esp0);
  ESP += 4; return;
}

/* FUN_1000944f @ 0x1141944f (23 bytes, 7 insns) */
void f_1141944f(void) {
  FTRACE(0x1141944fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141944f push 0 */
  push32((uint32_t)(0x0u));
  /* 11419451 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11419455 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11419459 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1141945d call 0x11419466 */
  push32(0x11419462u); f_11419466();
  /* 11419462 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419465 ret  */
  ESPCHK(0x1141944fu, _esp0);
  ESP += 4; return;
}

/* FUN_10009466 @ 0x11419466 (517 bytes, 195 insns) */
void f_11419466(void) {
  FTRACE(0x11419466u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419466 push ebp */
  push32((uint32_t)(EBP));
  /* 11419467 mov ebp, esp */
  EBP = (ESP);
  /* 11419469 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141946c push ebx */
  push32((uint32_t)(EBX));
  /* 1141946d and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11419471 push esi */
  push32((uint32_t)(ESI));
  /* 11419472 push edi */
  push32((uint32_t)(EDI));
  /* 11419473 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11419476 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11419478 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1141947b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1141947e:;
  /* 1141947e cmp dword ptr [0x1141f16c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1141f16c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419485 jle 0x11419496 */
  if ((C.zf||C.sf!=C.of)) goto L_11419496;
  /* 11419487 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1141948a push 8 */
  push32((uint32_t)(0x8u));
  /* 1141948c push eax */
  push32((uint32_t)(EAX));
  /* 1141948d call 0x1141a100 */
  push32(0x11419492u); f_1141a100();
  /* 11419492 pop ecx */
  ECX = (pop32());
  /* 11419493 pop ecx */
  ECX = (pop32());
  /* 11419494 jmp 0x114194a5 */
  goto L_114194a5;
L_11419496:;
  /* 11419496 mov ecx, dword ptr [0x1141ef60] */
  ECX = (r32((uint32_t)(0x1141ef60)));
  /* 1141949c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1141949f mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 114194a2 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_114194a5:;
  /* 114194a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114194a7 je 0x114194ae */
  if (C.zf) goto L_114194ae;
  /* 114194a9 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 114194ab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114194ac jmp 0x1141947e */
  goto L_1141947e;
L_114194ae:;
  /* 114194ae cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114194b1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 114194b4 jne 0x114194bc */
  if (!C.zf) goto L_114194bc;
  /* 114194b6 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 114194ba jmp 0x114194c1 */
  goto L_114194c1;
L_114194bc:;
  /* 114194bc cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114194bf jne 0x114194c7 */
  if (!C.zf) goto L_114194c7;
L_114194c1:;
  /* 114194c1 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 114194c3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114194c4 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_114194c7:;
  /* 114194c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114194ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114194cc jl 0x1141965b */
  if ((C.sf!=C.of)) goto L_1141965b;
  /* 114194d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114194d5 je 0x1141965b */
  if (C.zf) goto L_1141965b;
  /* 114194db cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114194de jg 0x1141965b */
  if ((!C.zf&&C.sf==C.of)) goto L_1141965b;
  /* 114194e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 114194e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114194e8 pop ecx */
  ECX = (pop32());
  /* 114194e9 jne 0x1141950f */
  if (!C.zf) goto L_1141950f;
  /* 114194eb cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114194ee je 0x114194f9 */
  if (C.zf) goto L_114194f9;
  /* 114194f0 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 114194f7 jmp 0x1141952b */
  goto L_1141952b;
L_114194f9:;
  /* 114194f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114194fb cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114194fd je 0x1141950c */
  if (C.zf) goto L_1141950c;
  /* 114194ff cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419501 je 0x1141950c */
  if (C.zf) goto L_1141950c;
  /* 11419503 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1141950a jmp 0x1141952b */
  goto L_1141952b;
L_1141950c:;
  /* 1141950c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1141950f:;
  /* 1141950f cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419512 jne 0x1141952b */
  if (!C.zf) goto L_1141952b;
  /* 11419514 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419517 jne 0x1141952b */
  if (!C.zf) goto L_1141952b;
  /* 11419519 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1141951b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141951d je 0x11419523 */
  if (C.zf) goto L_11419523;
  /* 1141951f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419521 jne 0x1141952b */
  if (!C.zf) goto L_1141952b;
L_11419523:;
  /* 11419523 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11419526 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11419527 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11419528 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1141952b:;
  /* 1141952b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1141952e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11419530 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11419533 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11419538 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1141953b:;
  /* 1141953b cmp dword ptr [0x1141f16c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1141f16c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419542 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11419545 jle 0x11419553 */
  if ((C.zf||C.sf!=C.of)) goto L_11419553;
  /* 11419547 push 4 */
  push32((uint32_t)(0x4u));
  /* 11419549 push esi */
  push32((uint32_t)(ESI));
  /* 1141954a call 0x1141a100 */
  push32(0x1141954fu); f_1141a100();
  /* 1141954f pop ecx */
  ECX = (pop32());
  /* 11419550 pop ecx */
  ECX = (pop32());
  /* 11419551 jmp 0x1141955e */
  goto L_1141955e;
L_11419553:;
  /* 11419553 mov eax, dword ptr [0x1141ef60] */
  EAX = (r32((uint32_t)(0x1141ef60)));
  /* 11419558 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1141955b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1141955e:;
  /* 1141955e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419560 je 0x1141956a */
  if (C.zf) goto L_1141956a;
  /* 11419562 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11419565 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419568 jmp 0x1141959c */
  goto L_1141959c;
L_1141956a:;
  /* 1141956a cmp dword ptr [0x1141f16c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1141f16c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419571 jle 0x1141957e */
  if ((C.zf||C.sf!=C.of)) goto L_1141957e;
  /* 11419573 push edi */
  push32((uint32_t)(EDI));
  /* 11419574 push esi */
  push32((uint32_t)(ESI));
  /* 11419575 call 0x1141a100 */
  push32(0x1141957au); f_1141a100();
  /* 1141957a pop ecx */
  ECX = (pop32());
  /* 1141957b pop ecx */
  ECX = (pop32());
  /* 1141957c jmp 0x11419589 */
  goto L_11419589;
L_1141957e:;
  /* 1141957e mov eax, dword ptr [0x1141ef60] */
  EAX = (r32((uint32_t)(0x1141ef60)));
  /* 11419583 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11419587 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11419589:;
  /* 11419589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141958b je 0x114195d7 */
  if (C.zf) goto L_114195d7;
  /* 1141958d movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11419590 push eax */
  push32((uint32_t)(EAX));
  /* 11419591 call 0x11419fc5 */
  push32(0x11419596u); f_11419fc5();
  /* 11419596 pop ecx */
  ECX = (pop32());
  /* 11419597 mov ecx, eax */
  ECX = (EAX);
  /* 11419599 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1141959c:;
  /* 1141959c cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141959f jae 0x114195d7 */
  if (!C.cf) goto L_114195d7;
  /* 114195a1 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 114195a4 or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 114195a8 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114195ab jb 0x114195c1 */
  if (C.cf) goto L_114195c1;
  /* 114195ad jne 0x114195bb */
  if (!C.zf) goto L_114195bb;
  /* 114195af or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114195b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114195b4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114195b7 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114195b9 jbe 0x114195c1 */
  if ((C.cf||C.zf)) goto L_114195c1;
L_114195bb:;
  /* 114195bb or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 114195bf jmp 0x114195ca */
  goto L_114195ca;
L_114195c1:;
  /* 114195c1 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114195c5 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114195c7 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_114195ca:;
  /* 114195ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114195cd inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 114195d0 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 114195d2 jmp 0x1141953b */
  goto L_1141953b;
L_114195d7:;
  /* 114195d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114195da dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 114195dd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 114195e0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 114195e2 jne 0x114195f4 */
  if (!C.zf) goto L_114195f4;
  /* 114195e4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 114195e6 je 0x114195ee */
  if (C.zf) goto L_114195ee;
  /* 114195e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114195eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114195ee:;
  /* 114195ee and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 114195f2 jmp 0x1141963f */
  goto L_1141963f;
L_114195f4:;
  /* 114195f4 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 114195f6 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 114195fb jne 0x11419618 */
  if (!C.zf) goto L_11419618;
  /* 114195fd test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 114195ff jne 0x1141963f */
  if (!C.zf) goto L_1141963f;
  /* 11419601 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11419604 je 0x1141960f */
  if (C.zf) goto L_1141960f;
  /* 11419606 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141960d ja 0x11419618 */
  if ((!C.cf&&!C.zf)) goto L_11419618;
L_1141960f:;
  /* 1141960f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419611 jne 0x1141963f */
  if (!C.zf) goto L_1141963f;
  /* 11419613 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419616 jbe 0x1141963f */
  if ((C.cf||C.zf)) goto L_1141963f;
L_11419618:;
  /* 11419618 call 0x11416332 */
  push32(0x1141961du); f_11416332();
  /* 1141961d test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11419621 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11419627 je 0x1141962f */
  if (C.zf) goto L_1141962f;
  /* 11419629 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1141962d jmp 0x1141963f */
  goto L_1141963f;
L_1141962f:;
  /* 1141962f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11419632 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11419634 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11419636 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419638 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1141963a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141963c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1141963f:;
  /* 1141963f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11419641 je 0x11419648 */
  if (C.zf) goto L_11419648;
  /* 11419643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11419646 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11419648:;
  /* 11419648 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1141964c je 0x11419656 */
  if (C.zf) goto L_11419656;
  /* 1141964e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11419651 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11419653 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11419656:;
  /* 11419656 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11419659 jmp 0x11419666 */
  goto L_11419666;
L_1141965b:;
  /* 1141965b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1141965e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419660 je 0x11419664 */
  if (C.zf) goto L_11419664;
  /* 11419662 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11419664:;
  /* 11419664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11419666:;
  /* 11419666 pop edi */
  EDI = (pop32());
  /* 11419667 pop esi */
  ESI = (pop32());
  /* 11419668 pop ebx */
  EBX = (pop32());
  /* 11419669 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141966a ret  */
  ESPCHK(0x11419466u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11419670 (56 bytes, 31 insns) */
void f_11419670(void) {
  FTRACE(0x11419670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419670 push ebp */
  push32((uint32_t)(EBP));
  /* 11419671 mov ebp, esp */
  EBP = (ESP);
  /* 11419673 push edi */
  push32((uint32_t)(EDI));
  /* 11419674 push esi */
  push32((uint32_t)(ESI));
  /* 11419675 push ebx */
  push32((uint32_t)(EBX));
  /* 11419676 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11419679 jecxz 0x114196a1 */
  x86_unimpl("jecxz @ 0x11419679");
  /* 1141967b mov ebx, ecx */
  EBX = (ECX);
  /* 1141967d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11419680 mov esi, edi */
  ESI = (EDI);
  /* 11419682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11419684 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11419686 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11419688 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141968a mov edi, esi */
  EDI = (ESI);
  /* 1141968c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1141968f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11419691 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11419694 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11419696 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419699 ja 0x1141969f */
  if ((!C.cf&&!C.zf)) goto L_1141969f;
  /* 1141969b je 0x114196a1 */
  if (C.zf) goto L_114196a1;
  /* 1141969d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1141969e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1141969f:;
  /* 1141969f not ecx */
  ECX = (~(ECX));
L_114196a1:;
  /* 114196a1 mov eax, ecx */
  EAX = (ECX);
  /* 114196a3 pop ebx */
  EBX = (pop32());
  /* 114196a4 pop esi */
  ESI = (pop32());
  /* 114196a5 pop edi */
  EDI = (pop32());
  /* 114196a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114196a7 ret  */
  ESPCHK(0x11419670u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x114196b0 (47 bytes, 17 insns) */
void f_114196b0(void) {
  FTRACE(0x114196b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114196b0 push ecx */
  push32((uint32_t)(ECX));
  /* 114196b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114196b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 114196ba jb 0x114196d0 */
  if (C.cf) goto L_114196d0;
L_114196bc:;
  /* 114196bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114196c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114196c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 114196c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114196ce jae 0x114196bc */
  if (!C.cf) goto L_114196bc;
L_114196d0:;
  /* 114196d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114196d2 mov eax, esp */
  EAX = (ESP);
  /* 114196d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 114196d6 mov esp, ecx */
  ESP = (ECX);
  /* 114196d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114196da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 114196dd push eax */
  push32((uint32_t)(EAX));
  /* 114196de ret  */
  ESPCHK(0x114196b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096df @ 0x114196df (137 bytes, 50 insns) */
void f_114196df(void) {
  FTRACE(0x114196dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114196df push ebx */
  push32((uint32_t)(EBX));
  /* 114196e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114196e2 cmp dword ptr [0x11421780], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421780))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114196e8 push esi */
  push32((uint32_t)(ESI));
  /* 114196e9 push edi */
  push32((uint32_t)(EDI));
  /* 114196ea jne 0x1141972e */
  if (!C.zf) goto L_1141972e;
  /* 114196ec push 0x1141b530 */
  push32((uint32_t)(0x1141b530u));
  /* 114196f1 call dword ptr [0x1141b024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b024))), 0x114196f7u);
  /* 114196f7 mov edi, eax */
  EDI = (EAX);
  /* 114196f9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114196fb je 0x11419764 */
  if (C.zf) goto L_11419764;
  /* 114196fd mov esi, dword ptr [0x1141b034] */
  ESI = (r32((uint32_t)(0x1141b034)));
  /* 11419703 push 0x1141b524 */
  push32((uint32_t)(0x1141b524u));
  /* 11419708 push edi */
  push32((uint32_t)(EDI));
  /* 11419709 call esi */
  call_ind((uint32_t)(ESI), 0x1141970bu);
  /* 1141970b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141970d mov dword ptr [0x11421780], eax */
  w32((uint32_t)(0x11421780), (EAX));
  /* 11419712 je 0x11419764 */
  if (C.zf) goto L_11419764;
  /* 11419714 push 0x1141b514 */
  push32((uint32_t)(0x1141b514u));
  /* 11419719 push edi */
  push32((uint32_t)(EDI));
  /* 1141971a call esi */
  call_ind((uint32_t)(ESI), 0x1141971cu);
  /* 1141971c push 0x1141b500 */
  push32((uint32_t)(0x1141b500u));
  /* 11419721 push edi */
  push32((uint32_t)(EDI));
  /* 11419722 mov dword ptr [0x11421784], eax */
  w32((uint32_t)(0x11421784), (EAX));
  /* 11419727 call esi */
  call_ind((uint32_t)(ESI), 0x11419729u);
  /* 11419729 mov dword ptr [0x11421788], eax */
  w32((uint32_t)(0x11421788), (EAX));
L_1141972e:;
  /* 1141972e mov eax, dword ptr [0x11421784] */
  EAX = (r32((uint32_t)(0x11421784)));
  /* 11419733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419735 je 0x1141974d */
  if (C.zf) goto L_1141974d;
  /* 11419737 call eax */
  call_ind((uint32_t)(EAX), 0x11419739u);
  /* 11419739 mov ebx, eax */
  EBX = (EAX);
  /* 1141973b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1141973d je 0x1141974d */
  if (C.zf) goto L_1141974d;
  /* 1141973f mov eax, dword ptr [0x11421788] */
  EAX = (r32((uint32_t)(0x11421788)));
  /* 11419744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419746 je 0x1141974d */
  if (C.zf) goto L_1141974d;
  /* 11419748 push ebx */
  push32((uint32_t)(EBX));
  /* 11419749 call eax */
  call_ind((uint32_t)(EAX), 0x1141974bu);
  /* 1141974b mov ebx, eax */
  EBX = (EAX);
L_1141974d:;
  /* 1141974d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11419751 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11419755 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11419759 push ebx */
  push32((uint32_t)(EBX));
  /* 1141975a call dword ptr [0x11421780] */
  call_ind((uint32_t)(r32((uint32_t)(0x11421780))), 0x11419760u);
L_11419760:;
  /* 11419760 pop edi */
  EDI = (pop32());
  /* 11419761 pop esi */
  ESI = (pop32());
  /* 11419762 pop ebx */
  EBX = (pop32());
  /* 11419763 ret  */
  ESPCHK(0x114196dfu, _esp0);
  ESP += 4; return;
L_11419764:;
  /* 11419764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11419766 jmp 0x11419760 */
  goto L_11419760;
}

/* FUN_10009770 @ 0x11419770 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11419770(void) {
  FTRACE(0x11419770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419770 push ebp */
  push32((uint32_t)(EBP));
  /* 11419771 mov ebp, esp */
  EBP = (ESP);
  /* 11419773 push edi */
  push32((uint32_t)(EDI));
  /* 11419774 push esi */
  push32((uint32_t)(ESI));
  /* 11419775 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11419778 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1141977b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1141977e mov eax, ecx */
  EAX = (ECX);
  /* 11419780 mov edx, ecx */
  EDX = (ECX);
  /* 11419782 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419784 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419786 jbe 0x11419790 */
  if ((C.cf||C.zf)) goto L_11419790;
  /* 11419788 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141978a jb 0x11419908 */
  if (C.cf) goto L_11419908;
L_11419790:;
  /* 11419790 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11419796 jne 0x114197ac */
  if (!C.zf) goto L_114197ac;
  /* 11419798 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1141979b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1141979e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114197a1 jb 0x114197cc */
  if (C.cf) goto L_114197cc;
  /* 114197a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114197a5 jmp dword ptr [edx*4 + 0x114198b8] */
  switch (EDX) {
    case 0: goto L_114198c8;
    case 1: goto L_114198d0;
    case 2: goto L_114198dc;
    case 3: goto L_114198f0;
    default: x86_unimpl("switch@0x114197a5 out of table"); return;
  }
L_114197ac:;
  /* 114197ac mov eax, edi */
  EAX = (EDI);
  /* 114197ae mov edx, 3 */
  EDX = (0x3u);
  /* 114197b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114197b6 jb 0x114197c4 */
  if (C.cf) goto L_114197c4;
  /* 114197b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114197bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114197bd jmp dword ptr [eax*4 + 0x114197d0] */
  switch (EAX) {
    case 1: goto L_114197e0;
    case 2: goto L_1141980c;
    case 3: goto L_11419830;
    default: x86_unimpl("switch@0x114197bd out of table"); return;
  }
L_114197c4:;
  /* 114197c4 jmp dword ptr [ecx*4 + 0x114198c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x114198c8)))); return;
  /* 114197cb nop  */
  /* nop */
L_114197cc:;
  /* 114197cc jmp dword ptr [ecx*4 + 0x1141984c] */
  switch (ECX) {
    case 0: goto L_114198af;
    case 1: goto L_1141989c;
    case 2: goto L_11419894;
    case 3: goto L_1141988c;
    case 4: goto L_11419884;
    case 5: goto L_1141987c;
    case 6: goto L_11419874;
    case 7: goto L_1141986c;
    default: x86_unimpl("switch@0x114197cc out of table"); return;
  }
  /* 114197d3 nop  */
  /* nop */
L_114197e0:;
  /* 114197e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114197e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114197e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114197e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114197e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114197ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114197ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114197f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114197f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114197f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114197fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114197fe jb 0x114197cc */
  if (C.cf) goto L_114197cc;
  /* 11419800 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11419802 jmp dword ptr [edx*4 + 0x114198b8] */
  switch (EDX) {
    case 0: goto L_114198c8;
    case 1: goto L_114198d0;
    case 2: goto L_114198dc;
    case 3: goto L_114198f0;
    default: x86_unimpl("switch@0x11419802 out of table"); return;
  }
  /* 11419809 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1141980c:;
  /* 1141980c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1141980e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11419810 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11419812 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11419815 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11419818 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1141981b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141981e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11419821 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419824 jb 0x114197cc */
  if (C.cf) goto L_114197cc;
  /* 11419826 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11419828 jmp dword ptr [edx*4 + 0x114198b8] */
  switch (EDX) {
    case 0: goto L_114198c8;
    case 1: goto L_114198d0;
    case 2: goto L_114198dc;
    case 3: goto L_114198f0;
    default: x86_unimpl("switch@0x11419828 out of table"); return;
  }
  /* 1141982f nop  */
  /* nop */
L_11419830:;
  /* 11419830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11419832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11419834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11419836 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11419837 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1141983a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1141983b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141983e jb 0x114197cc */
  if (C.cf) goto L_114197cc;
  /* 11419840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11419842 jmp dword ptr [edx*4 + 0x114198b8] */
  switch (EDX) {
    case 0: goto L_114198c8;
    case 1: goto L_114198d0;
    case 2: goto L_114198dc;
    case 3: goto L_114198f0;
    default: x86_unimpl("switch@0x11419842 out of table"); return;
  }
  /* 11419849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1141986c:;
  /* 1141986c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11419870 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11419874:;
  /* 11419874 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11419878 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1141987c:;
  /* 1141987c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11419880 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11419884:;
  /* 11419884 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11419888 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1141988c:;
  /* 1141988c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11419890 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11419894:;
  /* 11419894 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11419898 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1141989c:;
  /* 1141989c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 114198a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 114198a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 114198ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114198ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114198af:;
  /* 114198af jmp dword ptr [edx*4 + 0x114198b8] */
  switch (EDX) {
    case 0: goto L_114198c8;
    case 1: goto L_114198d0;
    case 2: goto L_114198dc;
    case 3: goto L_114198f0;
    default: x86_unimpl("switch@0x114198af out of table"); return;
  }
  /* 114198b6 mov edi, edi */
  EDI = (EDI);
L_114198c8:;
  /* 114198c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114198cb pop esi */
  ESI = (pop32());
  /* 114198cc pop edi */
  EDI = (pop32());
  /* 114198cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114198ce ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 114198cf nop  */
  /* nop */
L_114198d0:;
  /* 114198d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114198d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114198d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114198d7 pop esi */
  ESI = (pop32());
  /* 114198d8 pop edi */
  EDI = (pop32());
  /* 114198d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114198da ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 114198db nop  */
  /* nop */
L_114198dc:;
  /* 114198dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114198de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114198e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114198e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114198e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114198e9 pop esi */
  ESI = (pop32());
  /* 114198ea pop edi */
  EDI = (pop32());
  /* 114198eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114198ec ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 114198ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114198f0:;
  /* 114198f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114198f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114198f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114198f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114198fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114198fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11419900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11419903 pop esi */
  ESI = (pop32());
  /* 11419904 pop edi */
  EDI = (pop32());
  /* 11419905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419906 ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 11419907 nop  */
  /* nop */
L_11419908:;
  /* 11419908 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1141990c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11419910 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11419916 jne 0x1141993c */
  if (!C.zf) goto L_1141993c;
  /* 11419918 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1141991b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1141991e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419921 jb 0x11419930 */
  if (C.cf) goto L_11419930;
  /* 11419923 std  */
  C.df=1;
  /* 11419924 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11419926 cld  */
  C.df=0;
  /* 11419927 jmp dword ptr [edx*4 + 0x11419a50] */
  switch (EDX) {
    case 0: goto L_11419a60;
    case 1: goto L_11419a68;
    case 2: goto L_11419a78;
    case 3: goto L_11419a8c;
    default: x86_unimpl("switch@0x11419927 out of table"); return;
  }
  /* 1141992e mov edi, edi */
  EDI = (EDI);
L_11419930:;
  /* 11419930 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11419932 jmp dword ptr [ecx*4 + 0x11419a00] */
  switch (ECX) {
    case 0: goto L_11419a47;
    default: x86_unimpl("switch@0x11419932 out of table"); return;
  }
  /* 11419939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1141993c:;
  /* 1141993c mov eax, edi */
  EAX = (EDI);
  /* 1141993e mov edx, 3 */
  EDX = (0x3u);
  /* 11419943 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419946 jb 0x11419954 */
  if (C.cf) goto L_11419954;
  /* 11419948 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1141994b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141994d jmp dword ptr [eax*4 + 0x11419958] */
  switch (EAX) {
    case 1: goto L_11419968;
    case 2: goto L_11419988;
    case 3: goto L_114199b0;
    default: x86_unimpl("switch@0x1141994d out of table"); return;
  }
L_11419954:;
  /* 11419954 jmp dword ptr [ecx*4 + 0x11419a50] */
  switch (ECX) {
    case 0: goto L_11419a60;
    case 1: goto L_11419a68;
    case 2: goto L_11419a78;
    case 3: goto L_11419a8c;
    default: x86_unimpl("switch@0x11419954 out of table"); return;
  }
  /* 1141995b nop  */
  /* nop */
L_11419968:;
  /* 11419968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141996b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1141996d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11419970 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11419971 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11419974 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11419975 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419978 jb 0x11419930 */
  if (C.cf) goto L_11419930;
  /* 1141997a std  */
  C.df=1;
  /* 1141997b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1141997d cld  */
  C.df=0;
  /* 1141997e jmp dword ptr [edx*4 + 0x11419a50] */
  switch (EDX) {
    case 0: goto L_11419a60;
    case 1: goto L_11419a68;
    case 2: goto L_11419a78;
    case 3: goto L_11419a8c;
    default: x86_unimpl("switch@0x1141997e out of table"); return;
  }
  /* 11419985 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11419988:;
  /* 11419988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141998b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1141998d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11419990 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11419993 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11419996 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11419999 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141999c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141999f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114199a2 jb 0x11419930 */
  if (C.cf) goto L_11419930;
  /* 114199a4 std  */
  C.df=1;
  /* 114199a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114199a7 cld  */
  C.df=0;
  /* 114199a8 jmp dword ptr [edx*4 + 0x11419a50] */
  switch (EDX) {
    case 0: goto L_11419a60;
    case 1: goto L_11419a68;
    case 2: goto L_11419a78;
    case 3: goto L_11419a8c;
    default: x86_unimpl("switch@0x114199a8 out of table"); return;
  }
  /* 114199af nop  */
  /* nop */
L_114199b0:;
  /* 114199b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114199b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114199b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114199b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114199bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114199be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114199c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114199c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114199c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114199ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114199cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114199d0 jb 0x11419930 */
  if (C.cf) goto L_11419930;
  /* 114199d6 std  */
  C.df=1;
  /* 114199d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114199d9 cld  */
  C.df=0;
  /* 114199da jmp dword ptr [edx*4 + 0x11419a50] */
  switch (EDX) {
    case 0: goto L_11419a60;
    case 1: goto L_11419a68;
    case 2: goto L_11419a78;
    case 3: goto L_11419a8c;
    default: x86_unimpl("switch@0x114199da out of table"); return;
  }
  /* 114199e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 114199e4 add al, 0x9a */
  { uint32_t _a=(AL),_b=(0x9au),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114199e6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114199e7 adc dword ptr [edx + ebx*4], ecx */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*4))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114199ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114199eb adc dword ptr [edx + ebx*4], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*4))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114199ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114199ef adc dword ptr [edx + ebx*4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*4))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114199f2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114199f3 adc dword ptr [edx + ebx*4], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*4))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114199f6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114199f7 adc dword ptr [edx + ebx*4], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*4))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114199fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114199fb adc dword ptr [edx + ebx*4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + EBX*4))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114199fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11419a04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11419a08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11419a0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11419a10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11419a14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11419a18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11419a1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11419a20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11419a24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11419a28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11419a2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11419a30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11419a34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11419a38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11419a3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11419a43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11419a45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11419a47:;
  /* 11419a47 jmp dword ptr [edx*4 + 0x11419a50] */
  switch (EDX) {
    case 0: goto L_11419a60;
    case 1: goto L_11419a68;
    case 2: goto L_11419a78;
    case 3: goto L_11419a8c;
    default: x86_unimpl("switch@0x11419a47 out of table"); return;
  }
  /* 11419a4e mov edi, edi */
  EDI = (EDI);
L_11419a60:;
  /* 11419a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11419a63 pop esi */
  ESI = (pop32());
  /* 11419a64 pop edi */
  EDI = (pop32());
  /* 11419a65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419a66 ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 11419a67 nop  */
  /* nop */
L_11419a68:;
  /* 11419a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11419a6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11419a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11419a71 pop esi */
  ESI = (pop32());
  /* 11419a72 pop edi */
  EDI = (pop32());
  /* 11419a73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419a74 ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 11419a75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11419a78:;
  /* 11419a78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11419a7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11419a7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11419a81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11419a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11419a87 pop esi */
  ESI = (pop32());
  /* 11419a88 pop edi */
  EDI = (pop32());
  /* 11419a89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419a8a ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
  /* 11419a8b nop  */
  /* nop */
L_11419a8c:;
  /* 11419a8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11419a8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11419a92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11419a95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11419a98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11419a9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11419a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11419aa1 pop esi */
  ESI = (pop32());
  /* 11419aa2 pop edi */
  EDI = (pop32());
  /* 11419aa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419aa4 ret  */
  ESPCHK(0x11419770u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11419ab0 (88 bytes, 40 insns) */
void f_11419ab0(void) {
  FTRACE(0x11419ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419ab0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11419ab4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11419ab8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11419aba je 0x11419b03 */
  if (C.zf) goto L_11419b03;
  /* 11419abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11419abe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11419ac2 push edi */
  push32((uint32_t)(EDI));
  /* 11419ac3 mov edi, ecx */
  EDI = (ECX);
  /* 11419ac5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419ac8 jb 0x11419af7 */
  if (C.cf) goto L_11419af7;
  /* 11419aca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11419acc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11419acf je 0x11419ad9 */
  if (C.zf) goto L_11419ad9;
  /* 11419ad1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11419ad3:;
  /* 11419ad3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11419ad5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11419ad6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11419ad7 jne 0x11419ad3 */
  if (!C.zf) goto L_11419ad3;
L_11419ad9:;
  /* 11419ad9 mov ecx, eax */
  ECX = (EAX);
  /* 11419adb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11419ade add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419ae0 mov ecx, eax */
  ECX = (EAX);
  /* 11419ae2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11419ae5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419ae7 mov ecx, edx */
  ECX = (EDX);
  /* 11419ae9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11419aec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11419aef je 0x11419af7 */
  if (C.zf) goto L_11419af7;
  /* 11419af1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11419af3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11419af5 je 0x11419afd */
  if (C.zf) goto L_11419afd;
L_11419af7:;
  /* 11419af7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11419af9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11419afa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11419afb jne 0x11419af7 */
  if (!C.zf) goto L_11419af7;
L_11419afd:;
  /* 11419afd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11419b01 pop edi */
  EDI = (pop32());
  /* 11419b02 ret  */
  ESPCHK(0x11419ab0u, _esp0);
  ESP += 4; return;
L_11419b03:;
  /* 11419b03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11419b07 ret  */
  ESPCHK(0x11419ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b08 @ 0x11419b08 (293 bytes, 103 insns) */
void f_11419b08(void) {
  FTRACE(0x11419b08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419b08 push ebp */
  push32((uint32_t)(EBP));
  /* 11419b09 mov ebp, esp */
  EBP = (ESP);
  /* 11419b0b mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 11419b10 call 0x114196b0 */
  push32(0x11419b15u); f_114196b0();
  /* 11419b15 push ebx */
  push32((uint32_t)(EBX));
  /* 11419b16 push esi */
  push32((uint32_t)(ESI));
  /* 11419b17 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11419b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11419b1b push esi */
  push32((uint32_t)(ESI));
  /* 11419b1c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419b1f call 0x114165b9 */
  push32(0x11419b24u); f_114165b9();
  /* 11419b24 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 11419b27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419b2a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419b2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11419b2f je 0x11419c27 */
  if (C.zf) goto L_11419c27;
  /* 11419b35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11419b37 push esi */
  push32((uint32_t)(ESI));
  /* 11419b38 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419b3b call 0x114165b9 */
  push32(0x11419b40u); f_114165b9();
  /* 11419b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419b43 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419b45 je 0x11419c27 */
  if (C.zf) goto L_11419c27;
  /* 11419b4b push edi */
  push32((uint32_t)(EDI));
  /* 11419b4c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11419b4f sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419b51 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11419b53 jle 0x11419bca */
  if ((C.zf||C.sf!=C.of)) goto L_11419bca;
  /* 11419b55 mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 11419b5a lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 11419b60 push ebx */
  push32((uint32_t)(EBX));
  /* 11419b61 push esi */
  push32((uint32_t)(ESI));
  /* 11419b62 push eax */
  push32((uint32_t)(EAX));
  /* 11419b63 call 0x11419ab0 */
  push32(0x11419b68u); f_11419ab0();
  /* 11419b68 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11419b6d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419b70 call 0x1141a175 */
  push32(0x11419b75u); f_1141a175();
  /* 11419b75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419b78 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11419b7b:;
  /* 11419b7b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419b7d mov eax, ebx */
  EAX = (EBX);
  /* 11419b7f jge 0x11419b83 */
  if ((C.sf==C.of)) goto L_11419b83;
  /* 11419b81 mov eax, edi */
  EAX = (EDI);
L_11419b83:;
  /* 11419b83 push eax */
  push32((uint32_t)(EAX));
  /* 11419b84 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 11419b8a push eax */
  push32((uint32_t)(EAX));
  /* 11419b8b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419b8e call 0x11418a33 */
  push32(0x11419b93u); f_11418a33();
  /* 11419b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419b96 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419b99 je 0x11419ba3 */
  if (C.zf) goto L_11419ba3;
  /* 11419b9b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419b9d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11419b9f jle 0x11419bbb */
  if ((C.zf||C.sf!=C.of)) goto L_11419bbb;
  /* 11419ba1 jmp 0x11419b7b */
  goto L_11419b7b;
L_11419ba3:;
  /* 11419ba3 call 0x1141633b */
  push32(0x11419ba8u); f_1141633b();
  /* 11419ba8 cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419bab jne 0x11419bb8 */
  if (!C.zf) goto L_11419bb8;
  /* 11419bad call 0x11416332 */
  push32(0x11419bb2u); f_11416332();
  /* 11419bb2 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_11419bb8:;
  /* 11419bb8 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11419bbb:;
  /* 11419bbb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419bbe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419bc1 call 0x1141a175 */
  push32(0x11419bc6u); f_1141a175();
  /* 11419bc6 pop ecx */
  ECX = (pop32());
  /* 11419bc7 pop ecx */
  ECX = (pop32());
  /* 11419bc8 jmp 0x11419c12 */
  goto L_11419c12;
L_11419bca:;
  /* 11419bca jge 0x11419c12 */
  if ((C.sf==C.of)) goto L_11419c12;
  /* 11419bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11419bce push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419bd1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419bd4 call 0x114165b9 */
  push32(0x11419bd9u); f_114165b9();
  /* 11419bd9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419bdc call 0x11418878 */
  push32(0x11419be1u); f_11418878();
  /* 11419be1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419be4 push eax */
  push32((uint32_t)(EAX));
  /* 11419be5 call dword ptr [0x1141b020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b020))), 0x11419bebu);
  /* 11419beb mov esi, eax */
  ESI = (EAX);
  /* 11419bed neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11419bef sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419bf1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11419bf3 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11419bf4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419bf6 jne 0x11419c12 */
  if (!C.zf) goto L_11419c12;
  /* 11419bf8 call 0x11416332 */
  push32(0x11419bfdu); f_11416332();
  /* 11419bfd mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11419c03 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11419c09u);
  /* 11419c09 mov edi, eax */
  EDI = (EAX);
  /* 11419c0b call 0x1141633b */
  push32(0x11419c10u); f_1141633b();
  /* 11419c10 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11419c12:;
  /* 11419c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11419c14 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11419c17 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419c1a call 0x114165b9 */
  push32(0x11419c1fu); f_114165b9();
  /* 11419c1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419c22 mov eax, esi */
  EAX = (ESI);
  /* 11419c24 pop edi */
  EDI = (pop32());
  /* 11419c25 jmp 0x11419c29 */
  goto L_11419c29;
L_11419c27:;
  /* 11419c27 mov eax, ebx */
  EAX = (EBX);
L_11419c29:;
  /* 11419c29 pop esi */
  ESI = (pop32());
  /* 11419c2a pop ebx */
  EBX = (pop32());
  /* 11419c2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419c2c ret  */
  ESPCHK(0x11419b08u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c2d @ 0x11419c2d (511 bytes, 193 insns) */
void f_11419c2d(void) {
  FTRACE(0x11419c2du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419c2d push ebp */
  push32((uint32_t)(EBP));
  /* 11419c2e mov ebp, esp */
  EBP = (ESP);
  /* 11419c30 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11419c32 push 0x1141b548 */
  push32((uint32_t)(0x1141b548u));
  /* 11419c37 push 0x114183c4 */
  push32((uint32_t)(0x114183c4u));
  /* 11419c3c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11419c42 push eax */
  push32((uint32_t)(EAX));
  /* 11419c43 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11419c4a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419c4d push ebx */
  push32((uint32_t)(EBX));
  /* 11419c4e push esi */
  push32((uint32_t)(ESI));
  /* 11419c4f push edi */
  push32((uint32_t)(EDI));
  /* 11419c50 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11419c53 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11419c55 cmp dword ptr [0x114217b0], edi */
  { uint32_t _a=(r32((uint32_t)(0x114217b0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419c5b jne 0x11419ca3 */
  if (!C.zf) goto L_11419ca3;
  /* 11419c5d push edi */
  push32((uint32_t)(EDI));
  /* 11419c5e push edi */
  push32((uint32_t)(EDI));
  /* 11419c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11419c61 pop ebx */
  EBX = (pop32());
  /* 11419c62 push ebx */
  push32((uint32_t)(EBX));
  /* 11419c63 push 0x1141b540 */
  push32((uint32_t)(0x1141b540u));
  /* 11419c68 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11419c6d push esi */
  push32((uint32_t)(ESI));
  /* 11419c6e push edi */
  push32((uint32_t)(EDI));
  /* 11419c6f call dword ptr [0x1141b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b014))), 0x11419c75u);
  /* 11419c75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419c77 je 0x11419c81 */
  if (C.zf) goto L_11419c81;
  /* 11419c79 mov dword ptr [0x114217b0], ebx */
  w32((uint32_t)(0x114217b0), (EBX));
  /* 11419c7f jmp 0x11419ca3 */
  goto L_11419ca3;
L_11419c81:;
  /* 11419c81 push edi */
  push32((uint32_t)(EDI));
  /* 11419c82 push edi */
  push32((uint32_t)(EDI));
  /* 11419c83 push ebx */
  push32((uint32_t)(EBX));
  /* 11419c84 push 0x1141b53c */
  push32((uint32_t)(0x1141b53cu));
  /* 11419c89 push esi */
  push32((uint32_t)(ESI));
  /* 11419c8a push edi */
  push32((uint32_t)(EDI));
  /* 11419c8b call dword ptr [0x1141b018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b018))), 0x11419c91u);
  /* 11419c91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419c93 je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419c99 mov dword ptr [0x114217b0], 2 */
  w32((uint32_t)(0x114217b0), (0x2u));
L_11419ca3:;
  /* 11419ca3 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419ca6 jle 0x11419cb8 */
  if ((C.zf||C.sf!=C.of)) goto L_11419cb8;
  /* 11419ca8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11419cab push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419cae call 0x11419e51 */
  push32(0x11419cb3u); f_11419e51();
  /* 11419cb3 pop ecx */
  ECX = (pop32());
  /* 11419cb4 pop ecx */
  ECX = (pop32());
  /* 11419cb5 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11419cb8:;
  /* 11419cb8 mov eax, dword ptr [0x114217b0] */
  EAX = (r32((uint32_t)(0x114217b0)));
  /* 11419cbd cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419cc0 jne 0x11419cdf */
  if (!C.zf) goto L_11419cdf;
  /* 11419cc2 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11419cc5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11419cc8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11419ccb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419cce push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419cd1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419cd4 call dword ptr [0x1141b018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b018))), 0x11419cdau);
  /* 11419cda jmp 0x11419dbd */
  goto L_11419dbd;
L_11419cdf:;
  /* 11419cdf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419ce2 jne 0x11419dbb */
  if (!C.zf) goto L_11419dbb;
  /* 11419ce8 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419ceb jne 0x11419cf5 */
  if (!C.zf) goto L_11419cf5;
  /* 11419ced mov eax, dword ptr [0x114217a8] */
  EAX = (r32((uint32_t)(0x114217a8)));
  /* 11419cf2 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11419cf5:;
  /* 11419cf5 push edi */
  push32((uint32_t)(EDI));
  /* 11419cf6 push edi */
  push32((uint32_t)(EDI));
  /* 11419cf7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11419cfa push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419cfd mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11419d00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11419d02 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419d04 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11419d07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11419d08 push eax */
  push32((uint32_t)(EAX));
  /* 11419d09 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11419d0c call dword ptr [0x1141b028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b028))), 0x11419d12u);
  /* 11419d12 mov ebx, eax */
  EBX = (EAX);
  /* 11419d14 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11419d17 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419d19 je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419d1f mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11419d22 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11419d25 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419d28 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11419d2a call 0x114196b0 */
  push32(0x11419d2fu); f_114196b0();
  /* 11419d2f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11419d32 mov eax, esp */
  EAX = (ESP);
  /* 11419d34 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11419d37 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11419d3b jmp 0x11419d50 */
  goto L_11419d50;
  /* 11419d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11419d3f pop eax */
  EAX = (pop32());
  /* 11419d40 ret  */
  ESPCHK(0x11419c2du, _esp0);
  ESP += 4; return;
  /* 11419d41 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11419d44 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11419d46 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11419d49 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11419d4d mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11419d50:;
  /* 11419d50 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419d53 je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419d55 push ebx */
  push32((uint32_t)(EBX));
  /* 11419d56 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11419d59 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11419d5c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11419d61 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11419d64 call dword ptr [0x1141b028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b028))), 0x11419d6au);
  /* 11419d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419d6c je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419d6e push edi */
  push32((uint32_t)(EDI));
  /* 11419d6f push edi */
  push32((uint32_t)(EDI));
  /* 11419d70 push ebx */
  push32((uint32_t)(EBX));
  /* 11419d71 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11419d74 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419d77 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419d7a call dword ptr [0x1141b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b014))), 0x11419d80u);
  /* 11419d80 mov esi, eax */
  ESI = (EAX);
  /* 11419d82 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11419d85 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419d87 je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419d89 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11419d8d je 0x11419dcf */
  if (C.zf) goto L_11419dcf;
  /* 11419d8f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419d92 je 0x11419e4a */
  if (C.zf) goto L_11419e4a;
  /* 11419d98 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419d9b jg 0x11419dbb */
  if ((!C.zf&&C.sf==C.of)) goto L_11419dbb;
  /* 11419d9d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11419da0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11419da3 push ebx */
  push32((uint32_t)(EBX));
  /* 11419da4 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11419da7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419daa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419dad call dword ptr [0x1141b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b014))), 0x11419db3u);
  /* 11419db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419db5 jne 0x11419e4a */
  if (!C.zf) goto L_11419e4a;
L_11419dbb:;
  /* 11419dbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11419dbd:;
  /* 11419dbd lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11419dc0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11419dc3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11419dca pop edi */
  EDI = (pop32());
  /* 11419dcb pop esi */
  ESI = (pop32());
  /* 11419dcc pop ebx */
  EBX = (pop32());
  /* 11419dcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419dce ret  */
  ESPCHK(0x11419c2du, _esp0);
  ESP += 4; return;
L_11419dcf:;
  /* 11419dcf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11419dd6 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11419dd9 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419ddc and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11419dde call 0x114196b0 */
  push32(0x11419de3u); f_114196b0();
  /* 11419de3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11419de6 mov ebx, esp */
  EBX = (ESP);
  /* 11419de8 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11419deb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11419def jmp 0x11419e03 */
  goto L_11419e03;
  /* 11419df1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11419df3 pop eax */
  EAX = (pop32());
  /* 11419df4 ret  */
  ESPCHK(0x11419c2du, _esp0);
  ESP += 4; return;
  /* 11419df5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11419df8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11419dfa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11419dfc or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11419e00 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11419e03:;
  /* 11419e03 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419e05 je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419e07 push esi */
  push32((uint32_t)(ESI));
  /* 11419e08 push ebx */
  push32((uint32_t)(EBX));
  /* 11419e09 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11419e0c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11419e0f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419e12 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419e15 call dword ptr [0x1141b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b014))), 0x11419e1bu);
  /* 11419e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419e1d je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
  /* 11419e1f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419e22 push edi */
  push32((uint32_t)(EDI));
  /* 11419e23 push edi */
  push32((uint32_t)(EDI));
  /* 11419e24 jne 0x11419e2a */
  if (!C.zf) goto L_11419e2a;
  /* 11419e26 push edi */
  push32((uint32_t)(EDI));
  /* 11419e27 push edi */
  push32((uint32_t)(EDI));
  /* 11419e28 jmp 0x11419e30 */
  goto L_11419e30;
L_11419e2a:;
  /* 11419e2a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11419e2d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11419e30:;
  /* 11419e30 push esi */
  push32((uint32_t)(ESI));
  /* 11419e31 push ebx */
  push32((uint32_t)(EBX));
  /* 11419e32 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11419e37 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11419e3a call dword ptr [0x1141b0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0d4))), 0x11419e40u);
  /* 11419e40 mov esi, eax */
  ESI = (EAX);
  /* 11419e42 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419e44 je 0x11419dbb */
  if (C.zf) goto L_11419dbb;
L_11419e4a:;
  /* 11419e4a mov eax, esi */
  EAX = (ESI);
  /* 11419e4c jmp 0x11419dbd */
  goto L_11419dbd;
}

/* FUN_10009e51 @ 0x11419e51 (43 bytes, 20 insns) */
void f_11419e51(void) {
  FTRACE(0x11419e51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419e51 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11419e55 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11419e59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11419e5b push esi */
  push32((uint32_t)(ESI));
  /* 11419e5c lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11419e5f je 0x11419e6e */
  if (C.zf) goto L_11419e6e;
L_11419e61:;
  /* 11419e61 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419e64 je 0x11419e6e */
  if (C.zf) goto L_11419e6e;
  /* 11419e66 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11419e67 mov esi, ecx */
  ESI = (ECX);
  /* 11419e69 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11419e6a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11419e6c jne 0x11419e61 */
  if (!C.zf) goto L_11419e61;
L_11419e6e:;
  /* 11419e6e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11419e71 pop esi */
  ESI = (pop32());
  /* 11419e72 jne 0x11419e79 */
  if (!C.zf) goto L_11419e79;
  /* 11419e74 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419e78 ret  */
  ESPCHK(0x11419e51u, _esp0);
  ESP += 4; return;
L_11419e79:;
  /* 11419e79 mov eax, edx */
  EAX = (EDX);
  /* 11419e7b ret  */
  ESPCHK(0x11419e51u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e7c @ 0x11419e7c (318 bytes, 123 insns) */
void f_11419e7c(void) {
  FTRACE(0x11419e7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419e7c push ebp */
  push32((uint32_t)(EBP));
  /* 11419e7d mov ebp, esp */
  EBP = (ESP);
  /* 11419e7f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11419e81 push 0x1141b560 */
  push32((uint32_t)(0x1141b560u));
  /* 11419e86 push 0x114183c4 */
  push32((uint32_t)(0x114183c4u));
  /* 11419e8b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11419e91 push eax */
  push32((uint32_t)(EAX));
  /* 11419e92 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11419e99 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419e9c push ebx */
  push32((uint32_t)(EBX));
  /* 11419e9d push esi */
  push32((uint32_t)(ESI));
  /* 11419e9e push edi */
  push32((uint32_t)(EDI));
  /* 11419e9f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11419ea2 mov eax, dword ptr [0x114217b4] */
  EAX = (r32((uint32_t)(0x114217b4)));
  /* 11419ea7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11419ea9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419eab jne 0x11419eeb */
  if (!C.zf) goto L_11419eeb;
  /* 11419ead lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11419eb0 push eax */
  push32((uint32_t)(EAX));
  /* 11419eb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11419eb3 pop esi */
  ESI = (pop32());
  /* 11419eb4 push esi */
  push32((uint32_t)(ESI));
  /* 11419eb5 push 0x1141b540 */
  push32((uint32_t)(0x1141b540u));
  /* 11419eba push esi */
  push32((uint32_t)(ESI));
  /* 11419ebb call dword ptr [0x1141b00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b00c))), 0x11419ec1u);
  /* 11419ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419ec3 je 0x11419ec9 */
  if (C.zf) goto L_11419ec9;
  /* 11419ec5 mov eax, esi */
  EAX = (ESI);
  /* 11419ec7 jmp 0x11419ee6 */
  goto L_11419ee6;
L_11419ec9:;
  /* 11419ec9 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11419ecc push eax */
  push32((uint32_t)(EAX));
  /* 11419ecd push esi */
  push32((uint32_t)(ESI));
  /* 11419ece push 0x1141b53c */
  push32((uint32_t)(0x1141b53cu));
  /* 11419ed3 push esi */
  push32((uint32_t)(ESI));
  /* 11419ed4 push ebx */
  push32((uint32_t)(EBX));
  /* 11419ed5 call dword ptr [0x1141b01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b01c))), 0x11419edbu);
  /* 11419edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11419edd je 0x11419fb1 */
  if (C.zf) goto L_11419fb1;
  /* 11419ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11419ee5 pop eax */
  EAX = (pop32());
L_11419ee6:;
  /* 11419ee6 mov dword ptr [0x114217b4], eax */
  w32((uint32_t)(0x114217b4), (EAX));
L_11419eeb:;
  /* 11419eeb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419eee jne 0x11419f14 */
  if (!C.zf) goto L_11419f14;
  /* 11419ef0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11419ef3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419ef5 jne 0x11419efc */
  if (!C.zf) goto L_11419efc;
  /* 11419ef7 mov eax, dword ptr [0x11421798] */
  EAX = (r32((uint32_t)(0x11421798)));
L_11419efc:;
  /* 11419efc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11419eff push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419f02 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419f05 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419f08 push eax */
  push32((uint32_t)(EAX));
  /* 11419f09 call dword ptr [0x1141b01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b01c))), 0x11419f0fu);
  /* 11419f0f jmp 0x11419fb3 */
  goto L_11419fb3;
L_11419f14:;
  /* 11419f14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419f17 jne 0x11419fb1 */
  if (!C.zf) goto L_11419fb1;
  /* 11419f1d cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419f20 jne 0x11419f2a */
  if (!C.zf) goto L_11419f2a;
  /* 11419f22 mov eax, dword ptr [0x114217a8] */
  EAX = (r32((uint32_t)(0x114217a8)));
  /* 11419f27 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11419f2a:;
  /* 11419f2a push ebx */
  push32((uint32_t)(EBX));
  /* 11419f2b push ebx */
  push32((uint32_t)(EBX));
  /* 11419f2c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419f2f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419f32 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11419f35 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11419f37 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419f39 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11419f3c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11419f3d push eax */
  push32((uint32_t)(EAX));
  /* 11419f3e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11419f41 call dword ptr [0x1141b028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b028))), 0x11419f47u);
  /* 11419f47 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11419f4a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419f4c je 0x11419fb1 */
  if (C.zf) goto L_11419fb1;
  /* 11419f4e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11419f51 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11419f54 mov eax, edi */
  EAX = (EDI);
  /* 11419f56 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11419f59 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11419f5b call 0x114196b0 */
  push32(0x11419f60u); f_114196b0();
  /* 11419f60 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11419f63 mov esi, esp */
  ESI = (ESP);
  /* 11419f65 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11419f68 push edi */
  push32((uint32_t)(EDI));
  /* 11419f69 push ebx */
  push32((uint32_t)(EBX));
  /* 11419f6a push esi */
  push32((uint32_t)(ESI));
  /* 11419f6b call 0x11419ab0 */
  push32(0x11419f70u); f_11419ab0();
  /* 11419f70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11419f73 jmp 0x11419f80 */
  goto L_11419f80;
  /* 11419f75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11419f77 pop eax */
  EAX = (pop32());
  /* 11419f78 ret  */
  ESPCHK(0x11419e7cu, _esp0);
  ESP += 4; return;
  /* 11419f79 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11419f7c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11419f7e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11419f80:;
  /* 11419f80 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11419f84 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419f86 je 0x11419fb1 */
  if (C.zf) goto L_11419fb1;
  /* 11419f88 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11419f8b push esi */
  push32((uint32_t)(ESI));
  /* 11419f8c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11419f8f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11419f92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11419f94 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11419f97 call dword ptr [0x1141b028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b028))), 0x11419f9du);
  /* 11419f9d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419f9f je 0x11419fb1 */
  if (C.zf) goto L_11419fb1;
  /* 11419fa1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11419fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11419fa5 push esi */
  push32((uint32_t)(ESI));
  /* 11419fa6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11419fa9 call dword ptr [0x1141b00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b00c))), 0x11419fafu);
  /* 11419faf jmp 0x11419fb3 */
  goto L_11419fb3;
L_11419fb1:;
  /* 11419fb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11419fb3:;
  /* 11419fb3 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11419fb6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11419fb9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11419fc0 pop edi */
  EDI = (pop32());
  /* 11419fc1 pop esi */
  ESI = (pop32());
  /* 11419fc2 pop ebx */
  EBX = (pop32());
  /* 11419fc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11419fc4 ret  */
  ESPCHK(0x11419e7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fc5 @ 0x11419fc5 (111 bytes, 44 insns) */
void f_11419fc5(void) {
  FTRACE(0x11419fc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11419fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 11419fc6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11419fc8 cmp dword ptr [0x11421798], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421798))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419fce jne 0x11419fe3 */
  if (!C.zf) goto L_11419fe3;
  /* 11419fd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11419fd4 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419fd7 jl 0x1141a032 */
  if ((C.sf!=C.of)) goto L_1141a032;
  /* 11419fd9 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419fdc jg 0x1141a032 */
  if ((!C.zf&&C.sf==C.of)) goto L_1141a032;
  /* 11419fde sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11419fe1 pop ebx */
  EBX = (pop32());
  /* 11419fe2 ret  */
  ESPCHK(0x11419fc5u, _esp0);
  ESP += 4; return;
L_11419fe3:;
  /* 11419fe3 push esi */
  push32((uint32_t)(ESI));
  /* 11419fe4 mov esi, 0x11421904 */
  ESI = (0x11421904u);
  /* 11419fe9 push edi */
  push32((uint32_t)(EDI));
  /* 11419fea push esi */
  push32((uint32_t)(ESI));
  /* 11419feb call dword ptr [0x1141b010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b010))), 0x11419ff1u);
  /* 11419ff1 cmp dword ptr [0x11421900], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421900))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11419ff7 mov edi, dword ptr [0x1141b008] */
  EDI = (r32((uint32_t)(0x1141b008)));
  /* 11419ffd je 0x1141a00d */
  if (C.zf) goto L_1141a00d;
  /* 11419fff push esi */
  push32((uint32_t)(ESI));
  /* 1141a000 call edi */
  call_ind((uint32_t)(EDI), 0x1141a002u);
  /* 1141a002 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1141a004 call 0x11418256 */
  push32(0x1141a009u); f_11418256();
  /* 1141a009 pop ecx */
  ECX = (pop32());
  /* 1141a00a push 1 */
  push32((uint32_t)(0x1u));
  /* 1141a00c pop ebx */
  EBX = (pop32());
L_1141a00d:;
  /* 1141a00d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1141a011 call 0x1141a034 */
  push32(0x1141a016u); f_1141a034();
  /* 1141a016 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1141a018 pop ecx */
  ECX = (pop32());
  /* 1141a019 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1141a01d je 0x1141a029 */
  if (C.zf) goto L_1141a029;
  /* 1141a01f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1141a021 call 0x114182b7 */
  push32(0x1141a026u); f_114182b7();
  /* 1141a026 pop ecx */
  ECX = (pop32());
  /* 1141a027 jmp 0x1141a02c */
  goto L_1141a02c;
L_1141a029:;
  /* 1141a029 push esi */
  push32((uint32_t)(ESI));
  /* 1141a02a call edi */
  call_ind((uint32_t)(EDI), 0x1141a02cu);
L_1141a02c:;
  /* 1141a02c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1141a030 pop edi */
  EDI = (pop32());
  /* 1141a031 pop esi */
  ESI = (pop32());
L_1141a032:;
  /* 1141a032 pop ebx */
  EBX = (pop32());
  /* 1141a033 ret  */
  ESPCHK(0x11419fc5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a034 @ 0x1141a034 (204 bytes, 71 insns) */
void f_1141a034(void) {
  FTRACE(0x1141a034u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a034 push ebp */
  push32((uint32_t)(EBP));
  /* 1141a035 mov ebp, esp */
  EBP = (ESP);
  /* 1141a037 push ecx */
  push32((uint32_t)(ECX));
  /* 1141a038 cmp dword ptr [0x11421798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11421798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a03f push ebx */
  push32((uint32_t)(EBX));
  /* 1141a040 jne 0x1141a05f */
  if (!C.zf) goto L_1141a05f;
  /* 1141a042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a045 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a048 jl 0x1141a0fd */
  if ((C.sf!=C.of)) goto L_1141a0fd;
  /* 1141a04e cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a051 jg 0x1141a0fd */
  if ((!C.zf&&C.sf==C.of)) goto L_1141a0fd;
  /* 1141a057 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141a05a jmp 0x1141a0fd */
  goto L_1141a0fd;
L_1141a05f:;
  /* 1141a05f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a062 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a068 jge 0x1141a092 */
  if ((C.sf==C.of)) goto L_1141a092;
  /* 1141a06a cmp dword ptr [0x1141f16c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1141f16c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a071 jle 0x1141a07f */
  if ((C.zf||C.sf!=C.of)) goto L_1141a07f;
  /* 1141a073 push 2 */
  push32((uint32_t)(0x2u));
  /* 1141a075 push ebx */
  push32((uint32_t)(EBX));
  /* 1141a076 call 0x1141a100 */
  push32(0x1141a07bu); f_1141a100();
  /* 1141a07b pop ecx */
  ECX = (pop32());
  /* 1141a07c pop ecx */
  ECX = (pop32());
  /* 1141a07d jmp 0x1141a08a */
  goto L_1141a08a;
L_1141a07f:;
  /* 1141a07f mov eax, dword ptr [0x1141ef60] */
  EAX = (r32((uint32_t)(0x1141ef60)));
  /* 1141a084 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1141a087 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1141a08a:;
  /* 1141a08a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141a08c jne 0x1141a092 */
  if (!C.zf) goto L_1141a092;
L_1141a08e:;
  /* 1141a08e mov eax, ebx */
  EAX = (EBX);
  /* 1141a090 jmp 0x1141a0fd */
  goto L_1141a0fd;
L_1141a092:;
  /* 1141a092 mov edx, dword ptr [0x1141ef60] */
  EDX = (r32((uint32_t)(0x1141ef60)));
  /* 1141a098 mov eax, ebx */
  EAX = (EBX);
  /* 1141a09a sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1141a09d movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1141a0a0 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1141a0a5 je 0x1141a0b5 */
  if (C.zf) goto L_1141a0b5;
  /* 1141a0a7 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1141a0ab mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1141a0ae mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1141a0b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1141a0b3 jmp 0x1141a0be */
  goto L_1141a0be;
L_1141a0b5:;
  /* 1141a0b5 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1141a0b9 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1141a0bc push 1 */
  push32((uint32_t)(0x1u));
L_1141a0be:;
  /* 1141a0be pop eax */
  EAX = (pop32());
  /* 1141a0bf lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1141a0c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141a0c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141a0c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 1141a0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1141a0c9 push eax */
  push32((uint32_t)(EAX));
  /* 1141a0ca lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1141a0cd push eax */
  push32((uint32_t)(EAX));
  /* 1141a0ce push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1141a0d3 push dword ptr [0x11421798] */
  push32((uint32_t)(r32((uint32_t)(0x11421798))));
  /* 1141a0d9 call 0x11419c2d */
  push32(0x1141a0deu); f_11419c2d();
  /* 1141a0de add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a0e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141a0e3 je 0x1141a08e */
  if (C.zf) goto L_1141a08e;
  /* 1141a0e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a0e8 jne 0x1141a0f0 */
  if (!C.zf) goto L_1141a0f0;
  /* 1141a0ea movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1141a0ee jmp 0x1141a0fd */
  goto L_1141a0fd;
L_1141a0f0:;
  /* 1141a0f0 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1141a0f4 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1141a0f8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1141a0fb or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1141a0fd:;
  /* 1141a0fd pop ebx */
  EBX = (pop32());
  /* 1141a0fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a0ff ret  */
  ESPCHK(0x1141a034u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x1141a100 (117 bytes, 46 insns) */
void f_1141a100(void) {
  FTRACE(0x1141a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1141a101 mov ebp, esp */
  EBP = (ESP);
  /* 1141a103 push ecx */
  push32((uint32_t)(ECX));
  /* 1141a104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a107 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 1141a10a cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a110 ja 0x1141a11e */
  if ((!C.cf&&!C.zf)) goto L_1141a11e;
  /* 1141a112 mov ecx, dword ptr [0x1141ef60] */
  ECX = (r32((uint32_t)(0x1141ef60)));
  /* 1141a118 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 1141a11c jmp 0x1141a170 */
  goto L_1141a170;
L_1141a11e:;
  /* 1141a11e mov ecx, eax */
  ECX = (EAX);
  /* 1141a120 push esi */
  push32((uint32_t)(ESI));
  /* 1141a121 mov esi, dword ptr [0x1141ef60] */
  ESI = (r32((uint32_t)(0x1141ef60)));
  /* 1141a127 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1141a12a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 1141a12d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1141a132 pop esi */
  ESI = (pop32());
  /* 1141a133 je 0x1141a143 */
  if (C.zf) goto L_1141a143;
  /* 1141a135 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 1141a139 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1141a13c mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1141a13f push 2 */
  push32((uint32_t)(0x2u));
  /* 1141a141 jmp 0x1141a14c */
  goto L_1141a14c;
L_1141a143:;
  /* 1141a143 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1141a147 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1141a14a push 1 */
  push32((uint32_t)(0x1u));
L_1141a14c:;
  /* 1141a14c pop eax */
  EAX = (pop32());
  /* 1141a14d lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1141a150 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141a152 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141a154 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141a156 push ecx */
  push32((uint32_t)(ECX));
  /* 1141a157 push eax */
  push32((uint32_t)(EAX));
  /* 1141a158 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1141a15b push eax */
  push32((uint32_t)(EAX));
  /* 1141a15c push 1 */
  push32((uint32_t)(0x1u));
  /* 1141a15e call 0x11419e7c */
  push32(0x1141a163u); f_11419e7c();
  /* 1141a163 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141a168 jne 0x1141a16c */
  if (!C.zf) goto L_1141a16c;
  /* 1141a16a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a16b ret  */
  ESPCHK(0x1141a100u, _esp0);
  ESP += 4; return;
L_1141a16c:;
  /* 1141a16c movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1141a170:;
  /* 1141a170 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1141a173 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a174 ret  */
  ESPCHK(0x1141a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a175 @ 0x1141a175 (97 bytes, 31 insns) */
void f_1141a175(void) {
  FTRACE(0x1141a175u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a175 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141a179 push esi */
  push32((uint32_t)(ESI));
  /* 1141a17a mov ecx, eax */
  ECX = (EAX);
  /* 1141a17c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1141a17f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1141a182 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1141a185 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 1141a18a mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 1141a191 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 1141a195 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1141a199 mov al, cl */
  AL = (CL);
  /* 1141a19b and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1141a1a0 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a1a4 jne 0x1141a1ab */
  if (!C.zf) goto L_1141a1ab;
  /* 1141a1a6 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 1141a1a9 jmp 0x1141a1b8 */
  goto L_1141a1b8;
L_1141a1ab:;
  /* 1141a1ab cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a1b3 jne 0x1141a1c6 */
  if (!C.zf) goto L_1141a1c6;
  /* 1141a1b5 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_1141a1b8:;
  /* 1141a1b8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1141a1ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141a1bc mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1141a1be and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 1141a1c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a1c4 pop esi */
  ESI = (pop32());
  /* 1141a1c5 ret  */
  ESPCHK(0x1141a175u, _esp0);
  ESP += 4; return;
L_1141a1c6:;
  /* 1141a1c6 call 0x11416332 */
  push32(0x1141a1cbu); f_11416332();
  /* 1141a1cb mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1141a1d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1141a1d4 pop esi */
  ESI = (pop32());
  /* 1141a1d5 ret  */
  ESPCHK(0x1141a175u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a270 @ 0x1141a270 (58 bytes, 32 insns) */
void f_1141a270(void) {
  FTRACE(0x1141a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a270 push ebp */
  push32((uint32_t)(EBP));
  /* 1141a271 mov ebp, esp */
  EBP = (ESP);
  /* 1141a273 push esi */
  push32((uint32_t)(ESI));
  /* 1141a274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141a276 push eax */
  push32((uint32_t)(EAX));
  /* 1141a277 push eax */
  push32((uint32_t)(EAX));
  /* 1141a278 push eax */
  push32((uint32_t)(EAX));
  /* 1141a279 push eax */
  push32((uint32_t)(EAX));
  /* 1141a27a push eax */
  push32((uint32_t)(EAX));
  /* 1141a27b push eax */
  push32((uint32_t)(EAX));
  /* 1141a27c push eax */
  push32((uint32_t)(EAX));
  /* 1141a27d push eax */
  push32((uint32_t)(EAX));
  /* 1141a27e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1141a281 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1141a284:;
  /* 1141a284 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1141a286 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1141a288 je 0x1141a291 */
  if (C.zf) goto L_1141a291;
  /* 1141a28a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1141a28b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1141a28b");
  /* 1141a28f jmp 0x1141a284 */
  goto L_1141a284;
L_1141a291:;
  /* 1141a291 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1141a294:;
  /* 1141a294 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1141a296 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1141a298 je 0x1141a2a4 */
  if (C.zf) goto L_1141a2a4;
  /* 1141a29a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1141a29b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1141a29b");
  /* 1141a29f jae 0x1141a294 */
  if (!C.cf) goto L_1141a294;
  /* 1141a2a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1141a2a4:;
  /* 1141a2a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a2a7 pop esi */
  ESI = (pop32());
  /* 1141a2a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a2a9 ret  */
  ESPCHK(0x1141a270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x1141a2b0 (208 bytes, 85 insns) */
void f_1141a2b0(void) {
  FTRACE(0x1141a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1141a2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1141a2b3 push edi */
  push32((uint32_t)(EDI));
  /* 1141a2b4 push esi */
  push32((uint32_t)(ESI));
  /* 1141a2b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1141a2b6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1141a2b9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a2bc lea eax, [0x11421790] */
  EAX = ((uint32_t)(0x11421790));
  /* 1141a2c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a2c6 jne 0x1141a303 */
  if (!C.zf) goto L_1141a303;
  /* 1141a2c8 mov al, 0xff */
  AL = (0xffu);
  /* 1141a2ca mov edi, edi */
  EDI = (EDI);
L_1141a2cc:;
  /* 1141a2cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1141a2ce je 0x1141a2fe */
  if (C.zf) goto L_1141a2fe;
  /* 1141a2d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1141a2d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1141a2d3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1141a2d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1141a2d6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a2d8 je 0x1141a2cc */
  if (C.zf) goto L_1141a2cc;
  /* 1141a2da sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1141a2dc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a2de sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1141a2e0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1141a2e3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1141a2e5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1141a2e7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1141a2e9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1141a2eb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a2ed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1141a2ef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1141a2f2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1141a2f4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1141a2f6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a2f8 je 0x1141a2cc */
  if (C.zf) goto L_1141a2cc;
  /* 1141a2fa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1141a2fc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1141a2fe:;
  /* 1141a2fe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1141a301 jmp 0x1141a37b */
  goto L_1141a37b;
L_1141a303:;
  /* 1141a303 lock inc dword ptr [0x11421904] */
  x86_unimpl("lock inc @ 0x1141a303");
  /* 1141a30a cmp dword ptr [0x11421900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11421900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a311 jg 0x1141a317 */
  if ((!C.zf&&C.sf==C.of)) goto L_1141a317;
  /* 1141a313 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141a315 jmp 0x1141a32c */
  goto L_1141a32c;
L_1141a317:;
  /* 1141a317 lock dec dword ptr [0x11421904] */
  x86_unimpl("lock dec @ 0x1141a317");
  /* 1141a31e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1141a320 call 0x11418256 */
  push32(0x1141a325u); f_11418256();
  /* 1141a325 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1141a32c:;
  /* 1141a32c mov eax, 0xff */
  EAX = (0xffu);
  /* 1141a331 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1141a333 nop  */
  /* nop */
L_1141a334:;
  /* 1141a334 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1141a336 je 0x1141a35f */
  if (C.zf) goto L_1141a35f;
  /* 1141a338 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1141a33a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1141a33b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1141a33d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1141a33e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a340 je 0x1141a334 */
  if (C.zf) goto L_1141a334;
  /* 1141a342 push eax */
  push32((uint32_t)(EAX));
  /* 1141a343 push ebx */
  push32((uint32_t)(EBX));
  /* 1141a344 call 0x1141a575 */
  push32(0x1141a349u); f_1141a575();
  /* 1141a349 mov ebx, eax */
  EBX = (EAX);
  /* 1141a34b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a34e call 0x1141a575 */
  push32(0x1141a353u); f_1141a575();
  /* 1141a353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a356 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a358 je 0x1141a334 */
  if (C.zf) goto L_1141a334;
  /* 1141a35a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141a35c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1141a35f:;
  /* 1141a35f mov ebx, eax */
  EBX = (EAX);
  /* 1141a361 pop eax */
  EAX = (pop32());
  /* 1141a362 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141a364 jne 0x1141a36f */
  if (!C.zf) goto L_1141a36f;
  /* 1141a366 lock dec dword ptr [0x11421904] */
  x86_unimpl("lock dec @ 0x1141a366");
  /* 1141a36d jmp 0x1141a379 */
  goto L_1141a379;
L_1141a36f:;
  /* 1141a36f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1141a371 call 0x114182b7 */
  push32(0x1141a376u); f_114182b7();
  /* 1141a376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141a379:;
  /* 1141a379 mov eax, ebx */
  EAX = (EBX);
L_1141a37b:;
  /* 1141a37b pop ebx */
  EBX = (pop32());
  /* 1141a37c pop esi */
  ESI = (pop32());
  /* 1141a37d pop edi */
  EDI = (pop32());
  /* 1141a37e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a37f ret  */
  ESPCHK(0x1141a2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x1141a380 (257 bytes, 103 insns) */
void f_1141a380(void) {
  FTRACE(0x1141a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a380 push ebp */
  push32((uint32_t)(EBP));
  /* 1141a381 mov ebp, esp */
  EBP = (ESP);
  /* 1141a383 push edi */
  push32((uint32_t)(EDI));
  /* 1141a384 push esi */
  push32((uint32_t)(ESI));
  /* 1141a385 push ebx */
  push32((uint32_t)(EBX));
  /* 1141a386 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1141a389 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1141a38b je 0x1141a47a */
  if (C.zf) goto L_1141a47a;
  /* 1141a391 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a394 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1141a397 lea eax, [0x11421790] */
  EAX = ((uint32_t)(0x11421790));
  /* 1141a39d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a3a1 jne 0x1141a3f1 */
  if (!C.zf) goto L_1141a3f1;
  /* 1141a3a3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1141a3a5 mov bl, 0x5a */
  BL = (0x5au);
  /* 1141a3a7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1141a3a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1141a3ac:;
  /* 1141a3ac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1141a3ae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1141a3b0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1141a3b2 je 0x1141a3d5 */
  if (C.zf) goto L_1141a3d5;
  /* 1141a3b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1141a3b6 je 0x1141a3d5 */
  if (C.zf) goto L_1141a3d5;
  /* 1141a3b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1141a3b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1141a3ba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a3bc jb 0x1141a3c4 */
  if (C.cf) goto L_1141a3c4;
  /* 1141a3be cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a3c0 ja 0x1141a3c4 */
  if ((!C.cf&&!C.zf)) goto L_1141a3c4;
  /* 1141a3c2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1141a3c4:;
  /* 1141a3c4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a3c6 jb 0x1141a3ce */
  if (C.cf) goto L_1141a3ce;
  /* 1141a3c8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a3ca ja 0x1141a3ce */
  if ((!C.cf&&!C.zf)) goto L_1141a3ce;
  /* 1141a3cc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1141a3ce:;
  /* 1141a3ce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a3d0 jne 0x1141a3df */
  if (!C.zf) goto L_1141a3df;
  /* 1141a3d2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1141a3d3 jne 0x1141a3ac */
  if (!C.zf) goto L_1141a3ac;
L_1141a3d5:;
  /* 1141a3d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1141a3d7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141a3d9 je 0x1141a47a */
  if (C.zf) goto L_1141a47a;
L_1141a3df:;
  /* 1141a3df mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1141a3e4 jb 0x1141a47a */
  if (C.cf) goto L_1141a47a;
  /* 1141a3ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1141a3ec jmp 0x1141a47a */
  goto L_1141a47a;
L_1141a3f1:;
  /* 1141a3f1 lock inc dword ptr [0x11421904] */
  x86_unimpl("lock inc @ 0x1141a3f1");
  /* 1141a3f8 cmp dword ptr [0x11421900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11421900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a3ff jg 0x1141a405 */
  if ((!C.zf&&C.sf==C.of)) goto L_1141a405;
  /* 1141a401 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141a403 jmp 0x1141a41e */
  goto L_1141a41e;
L_1141a405:;
  /* 1141a405 lock dec dword ptr [0x11421904] */
  x86_unimpl("lock dec @ 0x1141a405");
  /* 1141a40c mov ebx, ecx */
  EBX = (ECX);
  /* 1141a40e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1141a410 call 0x11418256 */
  push32(0x1141a415u); f_11418256();
  /* 1141a415 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1141a41c mov ecx, ebx */
  ECX = (EBX);
L_1141a41e:;
  /* 1141a41e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141a420 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1141a422 mov edi, edi */
  EDI = (EDI);
L_1141a424:;
  /* 1141a424 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1141a426 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141a428 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1141a42a je 0x1141a44f */
  if (C.zf) goto L_1141a44f;
  /* 1141a42c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1141a42e je 0x1141a44f */
  if (C.zf) goto L_1141a44f;
  /* 1141a430 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1141a431 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1141a432 push ecx */
  push32((uint32_t)(ECX));
  /* 1141a433 push eax */
  push32((uint32_t)(EAX));
  /* 1141a434 push ebx */
  push32((uint32_t)(EBX));
  /* 1141a435 call 0x1141a575 */
  push32(0x1141a43au); f_1141a575();
  /* 1141a43a mov ebx, eax */
  EBX = (EAX);
  /* 1141a43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a43f call 0x1141a575 */
  push32(0x1141a444u); f_1141a575();
  /* 1141a444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a447 pop ecx */
  ECX = (pop32());
  /* 1141a448 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a44a jne 0x1141a455 */
  if (!C.zf) goto L_1141a455;
  /* 1141a44c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1141a44d jne 0x1141a424 */
  if (!C.zf) goto L_1141a424;
L_1141a44f:;
  /* 1141a44f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1141a451 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a453 je 0x1141a45e */
  if (C.zf) goto L_1141a45e;
L_1141a455:;
  /* 1141a455 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1141a45a jb 0x1141a45e */
  if (C.cf) goto L_1141a45e;
  /* 1141a45c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1141a45e:;
  /* 1141a45e pop eax */
  EAX = (pop32());
  /* 1141a45f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141a461 jne 0x1141a46c */
  if (!C.zf) goto L_1141a46c;
  /* 1141a463 lock dec dword ptr [0x11421904] */
  x86_unimpl("lock dec @ 0x1141a463");
  /* 1141a46a jmp 0x1141a47a */
  goto L_1141a47a;
L_1141a46c:;
  /* 1141a46c mov ebx, ecx */
  EBX = (ECX);
  /* 1141a46e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1141a470 call 0x114182b7 */
  push32(0x1141a475u); f_114182b7();
  /* 1141a475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a478 mov ecx, ebx */
  ECX = (EBX);
L_1141a47a:;
  /* 1141a47a mov eax, ecx */
  EAX = (ECX);
  /* 1141a47c pop ebx */
  EBX = (pop32());
  /* 1141a47d pop esi */
  ESI = (pop32());
  /* 1141a47e pop edi */
  EDI = (pop32());
  /* 1141a47f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a480 ret  */
  ESPCHK(0x1141a380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a575 @ 0x1141a575 (203 bytes, 78 insns) */
void f_1141a575(void) {
  FTRACE(0x1141a575u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a575 push ebp */
  push32((uint32_t)(EBP));
  /* 1141a576 mov ebp, esp */
  EBP = (ESP);
  /* 1141a578 push ecx */
  push32((uint32_t)(ECX));
  /* 1141a579 cmp dword ptr [0x11421798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11421798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a580 push ebx */
  push32((uint32_t)(EBX));
  /* 1141a581 push esi */
  push32((uint32_t)(ESI));
  /* 1141a582 push edi */
  push32((uint32_t)(EDI));
  /* 1141a583 jne 0x1141a5a2 */
  if (!C.zf) goto L_1141a5a2;
  /* 1141a585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a588 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a58b jl 0x1141a63b */
  if ((C.sf!=C.of)) goto L_1141a63b;
  /* 1141a591 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a594 jg 0x1141a63b */
  if ((!C.zf&&C.sf==C.of)) goto L_1141a63b;
  /* 1141a59a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a59d jmp 0x1141a63b */
  goto L_1141a63b;
L_1141a5a2:;
  /* 1141a5a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141a5a5 mov edi, 0x100 */
  EDI = (0x100u);
  /* 1141a5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1141a5ac cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a5ae pop esi */
  ESI = (pop32());
  /* 1141a5af jge 0x1141a5d6 */
  if ((C.sf==C.of)) goto L_1141a5d6;
  /* 1141a5b1 cmp dword ptr [0x1141f16c], esi */
  { uint32_t _a=(r32((uint32_t)(0x1141f16c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a5b7 jle 0x1141a5c4 */
  if ((C.zf||C.sf!=C.of)) goto L_1141a5c4;
  /* 1141a5b9 push esi */
  push32((uint32_t)(ESI));
  /* 1141a5ba push ebx */
  push32((uint32_t)(EBX));
  /* 1141a5bb call 0x1141a100 */
  push32(0x1141a5c0u); f_1141a100();
  /* 1141a5c0 pop ecx */
  ECX = (pop32());
  /* 1141a5c1 pop ecx */
  ECX = (pop32());
  /* 1141a5c2 jmp 0x1141a5ce */
  goto L_1141a5ce;
L_1141a5c4:;
  /* 1141a5c4 mov eax, dword ptr [0x1141ef60] */
  EAX = (r32((uint32_t)(0x1141ef60)));
  /* 1141a5c9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1141a5cc and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1141a5ce:;
  /* 1141a5ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141a5d0 jne 0x1141a5d6 */
  if (!C.zf) goto L_1141a5d6;
L_1141a5d2:;
  /* 1141a5d2 mov eax, ebx */
  EAX = (EBX);
  /* 1141a5d4 jmp 0x1141a63b */
  goto L_1141a63b;
L_1141a5d6:;
  /* 1141a5d6 mov edx, dword ptr [0x1141ef60] */
  EDX = (r32((uint32_t)(0x1141ef60)));
  /* 1141a5dc mov eax, ebx */
  EAX = (EBX);
  /* 1141a5de sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1141a5e1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1141a5e4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1141a5e9 je 0x1141a5fa */
  if (C.zf) goto L_1141a5fa;
  /* 1141a5eb and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1141a5ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1141a5f1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1141a5f4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1141a5f7 pop eax */
  EAX = (pop32());
  /* 1141a5f8 jmp 0x1141a603 */
  goto L_1141a603;
L_1141a5fa:;
  /* 1141a5fa and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1141a5fe mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1141a601 mov eax, esi */
  EAX = (ESI);
L_1141a603:;
  /* 1141a603 push esi */
  push32((uint32_t)(ESI));
  /* 1141a604 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141a606 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1141a609 push 3 */
  push32((uint32_t)(0x3u));
  /* 1141a60b push ecx */
  push32((uint32_t)(ECX));
  /* 1141a60c push eax */
  push32((uint32_t)(EAX));
  /* 1141a60d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1141a610 push eax */
  push32((uint32_t)(EAX));
  /* 1141a611 push edi */
  push32((uint32_t)(EDI));
  /* 1141a612 push dword ptr [0x11421798] */
  push32((uint32_t)(r32((uint32_t)(0x11421798))));
  /* 1141a618 call 0x11419c2d */
  push32(0x1141a61du); f_11419c2d();
  /* 1141a61d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141a620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141a622 je 0x1141a5d2 */
  if (C.zf) goto L_1141a5d2;
  /* 1141a624 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141a626 jne 0x1141a62e */
  if (!C.zf) goto L_1141a62e;
  /* 1141a628 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1141a62c jmp 0x1141a63b */
  goto L_1141a63b;
L_1141a62e:;
  /* 1141a62e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1141a632 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1141a636 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1141a639 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1141a63b:;
  /* 1141a63b pop edi */
  EDI = (pop32());
  /* 1141a63c pop esi */
  ESI = (pop32());
  /* 1141a63d pop ebx */
  EBX = (pop32());
  /* 1141a63e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141a63f ret  */
  ESPCHK(0x1141a575u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1141a674 (6 bytes, 1 insns) */
void f_1141a674(void) {
  FTRACE(0x1141a674u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141a674 jmp dword ptr [0x1141b044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1141b044)))); return;
}

