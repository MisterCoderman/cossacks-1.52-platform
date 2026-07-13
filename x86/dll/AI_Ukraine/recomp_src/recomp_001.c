#include "recomp.h"

/* FUN_10007370 @ 0x10207370 (208 bytes, 85 insns) */
void f_10207370(void) {
  FTRACE(0x10207370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207370 push ebp */
  push32((uint32_t)(EBP));
  /* 10207371 mov ebp, esp */
  EBP = (ESP);
  /* 10207373 push edi */
  push32((uint32_t)(EDI));
  /* 10207374 push esi */
  push32((uint32_t)(ESI));
  /* 10207375 push ebx */
  push32((uint32_t)(EBX));
  /* 10207376 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10207379 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1020737c lea eax, [0x1020b17c] */
  EAX = ((uint32_t)(0x1020b17c));
  /* 10207382 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10207386 jne 0x102073c3 */
  if (!C.zf) goto L_102073c3;
  /* 10207388 mov al, 0xff */
  AL = (0xffu);
  /* 1020738a mov edi, edi */
  EDI = (EDI);
L_1020738c:;
  /* 1020738c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1020738e je 0x102073be */
  if (C.zf) goto L_102073be;
  /* 10207390 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10207392 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10207393 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10207395 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10207396 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207398 je 0x1020738c */
  if (C.zf) goto L_1020738c;
  /* 1020739a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1020739c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020739e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102073a0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 102073a3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102073a5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102073a7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 102073a9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102073ab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102073ad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102073af and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 102073b2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102073b4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102073b6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102073b8 je 0x1020738c */
  if (C.zf) goto L_1020738c;
  /* 102073ba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102073bc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_102073be:;
  /* 102073be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 102073c1 jmp 0x1020743b */
  goto L_1020743b;
L_102073c3:;
  /* 102073c3 lock inc dword ptr [0x1020b2ec] */
  x86_unimpl("lock inc @ 0x102073c3");
  /* 102073ca cmp dword ptr [0x1020b2e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020b2e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102073d1 jg 0x102073d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_102073d7;
  /* 102073d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102073d5 jmp 0x102073ec */
  goto L_102073ec;
L_102073d7:;
  /* 102073d7 lock dec dword ptr [0x1020b2ec] */
  x86_unimpl("lock dec @ 0x102073d7");
  /* 102073de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102073e0 call 0x10204f3a */
  push32(0x102073e5u); f_10204f3a();
  /* 102073e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_102073ec:;
  /* 102073ec mov eax, 0xff */
  EAX = (0xffu);
  /* 102073f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102073f3 nop  */
  /* nop */
L_102073f4:;
  /* 102073f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102073f6 je 0x1020741f */
  if (C.zf) goto L_1020741f;
  /* 102073f8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102073fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102073fb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102073fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102073fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207400 je 0x102073f4 */
  if (C.zf) goto L_102073f4;
  /* 10207402 push eax */
  push32((uint32_t)(EAX));
  /* 10207403 push ebx */
  push32((uint32_t)(EBX));
  /* 10207404 call 0x102075b6 */
  push32(0x10207409u); f_102075b6();
  /* 10207409 mov ebx, eax */
  EBX = (EAX);
  /* 1020740b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020740e call 0x102075b6 */
  push32(0x10207413u); f_102075b6();
  /* 10207413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207416 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207418 je 0x102073f4 */
  if (C.zf) goto L_102073f4;
  /* 1020741a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020741c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1020741f:;
  /* 1020741f mov ebx, eax */
  EBX = (EAX);
  /* 10207421 pop eax */
  EAX = (pop32());
  /* 10207422 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10207424 jne 0x1020742f */
  if (!C.zf) goto L_1020742f;
  /* 10207426 lock dec dword ptr [0x1020b2ec] */
  x86_unimpl("lock dec @ 0x10207426");
  /* 1020742d jmp 0x10207439 */
  goto L_10207439;
L_1020742f:;
  /* 1020742f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10207431 call 0x10204f9b */
  push32(0x10207436u); f_10204f9b();
  /* 10207436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10207439:;
  /* 10207439 mov eax, ebx */
  EAX = (EBX);
L_1020743b:;
  /* 1020743b pop ebx */
  EBX = (pop32());
  /* 1020743c pop esi */
  ESI = (pop32());
  /* 1020743d pop edi */
  EDI = (pop32());
  /* 1020743e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1020743f ret  */
  ESPCHK(0x10207370u, _esp0);
  ESP += 4; return;
}

/* FUN_10007440 @ 0x10207440 (257 bytes, 103 insns) */
void f_10207440(void) {
  FTRACE(0x10207440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207440 push ebp */
  push32((uint32_t)(EBP));
  /* 10207441 mov ebp, esp */
  EBP = (ESP);
  /* 10207443 push edi */
  push32((uint32_t)(EDI));
  /* 10207444 push esi */
  push32((uint32_t)(ESI));
  /* 10207445 push ebx */
  push32((uint32_t)(EBX));
  /* 10207446 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10207449 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1020744b je 0x1020753a */
  if (C.zf) goto L_1020753a;
  /* 10207451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10207454 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10207457 lea eax, [0x1020b17c] */
  EAX = ((uint32_t)(0x1020b17c));
  /* 1020745d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10207461 jne 0x102074b1 */
  if (!C.zf) goto L_102074b1;
  /* 10207463 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10207465 mov bl, 0x5a */
  BL = (0x5au);
  /* 10207467 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10207469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1020746c:;
  /* 1020746c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1020746e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10207470 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10207472 je 0x10207495 */
  if (C.zf) goto L_10207495;
  /* 10207474 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10207476 je 0x10207495 */
  if (C.zf) goto L_10207495;
  /* 10207478 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10207479 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1020747a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020747c jb 0x10207484 */
  if (C.cf) goto L_10207484;
  /* 1020747e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207480 ja 0x10207484 */
  if ((!C.cf&&!C.zf)) goto L_10207484;
  /* 10207482 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10207484:;
  /* 10207484 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207486 jb 0x1020748e */
  if (C.cf) goto L_1020748e;
  /* 10207488 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020748a ja 0x1020748e */
  if ((!C.cf&&!C.zf)) goto L_1020748e;
  /* 1020748c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1020748e:;
  /* 1020748e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207490 jne 0x1020749f */
  if (!C.zf) goto L_1020749f;
  /* 10207492 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10207493 jne 0x1020746c */
  if (!C.zf) goto L_1020746c;
L_10207495:;
  /* 10207495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10207497 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207499 je 0x1020753a */
  if (C.zf) goto L_1020753a;
L_1020749f:;
  /* 1020749f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 102074a4 jb 0x1020753a */
  if (C.cf) goto L_1020753a;
  /* 102074aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102074ac jmp 0x1020753a */
  goto L_1020753a;
L_102074b1:;
  /* 102074b1 lock inc dword ptr [0x1020b2ec] */
  x86_unimpl("lock inc @ 0x102074b1");
  /* 102074b8 cmp dword ptr [0x1020b2e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020b2e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102074bf jg 0x102074c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_102074c5;
  /* 102074c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102074c3 jmp 0x102074de */
  goto L_102074de;
L_102074c5:;
  /* 102074c5 lock dec dword ptr [0x1020b2ec] */
  x86_unimpl("lock dec @ 0x102074c5");
  /* 102074cc mov ebx, ecx */
  EBX = (ECX);
  /* 102074ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102074d0 call 0x10204f3a */
  push32(0x102074d5u); f_10204f3a();
  /* 102074d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 102074dc mov ecx, ebx */
  ECX = (EBX);
L_102074de:;
  /* 102074de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102074e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102074e2 mov edi, edi */
  EDI = (EDI);
L_102074e4:;
  /* 102074e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102074e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102074e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102074ea je 0x1020750f */
  if (C.zf) goto L_1020750f;
  /* 102074ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102074ee je 0x1020750f */
  if (C.zf) goto L_1020750f;
  /* 102074f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102074f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102074f2 push ecx */
  push32((uint32_t)(ECX));
  /* 102074f3 push eax */
  push32((uint32_t)(EAX));
  /* 102074f4 push ebx */
  push32((uint32_t)(EBX));
  /* 102074f5 call 0x102075b6 */
  push32(0x102074fau); f_102075b6();
  /* 102074fa mov ebx, eax */
  EBX = (EAX);
  /* 102074fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102074ff call 0x102075b6 */
  push32(0x10207504u); f_102075b6();
  /* 10207504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207507 pop ecx */
  ECX = (pop32());
  /* 10207508 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020750a jne 0x10207515 */
  if (!C.zf) goto L_10207515;
  /* 1020750c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1020750d jne 0x102074e4 */
  if (!C.zf) goto L_102074e4;
L_1020750f:;
  /* 1020750f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10207511 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10207513 je 0x1020751e */
  if (C.zf) goto L_1020751e;
L_10207515:;
  /* 10207515 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1020751a jb 0x1020751e */
  if (C.cf) goto L_1020751e;
  /* 1020751c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1020751e:;
  /* 1020751e pop eax */
  EAX = (pop32());
  /* 1020751f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10207521 jne 0x1020752c */
  if (!C.zf) goto L_1020752c;
  /* 10207523 lock dec dword ptr [0x1020b2ec] */
  x86_unimpl("lock dec @ 0x10207523");
  /* 1020752a jmp 0x1020753a */
  goto L_1020753a;
L_1020752c:;
  /* 1020752c mov ebx, ecx */
  EBX = (ECX);
  /* 1020752e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10207530 call 0x10204f9b */
  push32(0x10207535u); f_10204f9b();
  /* 10207535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207538 mov ecx, ebx */
  ECX = (EBX);
L_1020753a:;
  /* 1020753a mov eax, ecx */
  EAX = (ECX);
  /* 1020753c pop ebx */
  EBX = (pop32());
  /* 1020753d pop esi */
  ESI = (pop32());
  /* 1020753e pop edi */
  EDI = (pop32());
  /* 1020753f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10207540 ret  */
  ESPCHK(0x10207440u, _esp0);
  ESP += 4; return;
}

/* FUN_10007541 @ 0x10207541 (117 bytes, 46 insns) */
void f_10207541(void) {
  FTRACE(0x10207541u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207541 push ebp */
  push32((uint32_t)(EBP));
  /* 10207542 mov ebp, esp */
  EBP = (ESP);
  /* 10207544 push ecx */
  push32((uint32_t)(ECX));
  /* 10207545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10207548 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 1020754b cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10207551 ja 0x1020755f */
  if ((!C.cf&&!C.zf)) goto L_1020755f;
  /* 10207553 mov ecx, dword ptr [0x1020a0e8] */
  ECX = (r32((uint32_t)(0x1020a0e8)));
  /* 10207559 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 1020755d jmp 0x102075b1 */
  goto L_102075b1;
L_1020755f:;
  /* 1020755f mov ecx, eax */
  ECX = (EAX);
  /* 10207561 push esi */
  push32((uint32_t)(ESI));
  /* 10207562 mov esi, dword ptr [0x1020a0e8] */
  ESI = (r32((uint32_t)(0x1020a0e8)));
  /* 10207568 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1020756b movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 1020756e test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10207573 pop esi */
  ESI = (pop32());
  /* 10207574 je 0x10207584 */
  if (C.zf) goto L_10207584;
  /* 10207576 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 1020757a mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1020757d mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 10207580 push 2 */
  push32((uint32_t)(0x2u));
  /* 10207582 jmp 0x1020758d */
  goto L_1020758d;
L_10207584:;
  /* 10207584 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10207588 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1020758b push 1 */
  push32((uint32_t)(0x1u));
L_1020758d:;
  /* 1020758d pop eax */
  EAX = (pop32());
  /* 1020758e lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 10207591 push 1 */
  push32((uint32_t)(0x1u));
  /* 10207593 push 0 */
  push32((uint32_t)(0x0u));
  /* 10207595 push 0 */
  push32((uint32_t)(0x0u));
  /* 10207597 push ecx */
  push32((uint32_t)(ECX));
  /* 10207598 push eax */
  push32((uint32_t)(EAX));
  /* 10207599 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1020759c push eax */
  push32((uint32_t)(EAX));
  /* 1020759d push 1 */
  push32((uint32_t)(0x1u));
  /* 1020759f call 0x10206972 */
  push32(0x102075a4u); f_10206972();
  /* 102075a4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102075a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102075a9 jne 0x102075ad */
  if (!C.zf) goto L_102075ad;
  /* 102075ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102075ac ret  */
  ESPCHK(0x10207541u, _esp0);
  ESP += 4; return;
L_102075ad:;
  /* 102075ad movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_102075b1:;
  /* 102075b1 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 102075b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102075b5 ret  */
  ESPCHK(0x10207541u, _esp0);
  ESP += 4; return;
}

/* FUN_100075b6 @ 0x102075b6 (203 bytes, 78 insns) */
void f_102075b6(void) {
  FTRACE(0x102075b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102075b6 push ebp */
  push32((uint32_t)(EBP));
  /* 102075b7 mov ebp, esp */
  EBP = (ESP);
  /* 102075b9 push ecx */
  push32((uint32_t)(ECX));
  /* 102075ba cmp dword ptr [0x1020b184], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020b184))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102075c1 push ebx */
  push32((uint32_t)(EBX));
  /* 102075c2 push esi */
  push32((uint32_t)(ESI));
  /* 102075c3 push edi */
  push32((uint32_t)(EDI));
  /* 102075c4 jne 0x102075e3 */
  if (!C.zf) goto L_102075e3;
  /* 102075c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102075c9 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102075cc jl 0x1020767c */
  if ((C.sf!=C.of)) goto L_1020767c;
  /* 102075d2 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102075d5 jg 0x1020767c */
  if ((!C.zf&&C.sf==C.of)) goto L_1020767c;
  /* 102075db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102075de jmp 0x1020767c */
  goto L_1020767c;
L_102075e3:;
  /* 102075e3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102075e6 mov edi, 0x100 */
  EDI = (0x100u);
  /* 102075eb push 1 */
  push32((uint32_t)(0x1u));
  /* 102075ed cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102075ef pop esi */
  ESI = (pop32());
  /* 102075f0 jge 0x10207617 */
  if ((C.sf==C.of)) goto L_10207617;
  /* 102075f2 cmp dword ptr [0x1020a7d4], esi */
  { uint32_t _a=(r32((uint32_t)(0x1020a7d4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102075f8 jle 0x10207605 */
  if ((C.zf||C.sf!=C.of)) goto L_10207605;
  /* 102075fa push esi */
  push32((uint32_t)(ESI));
  /* 102075fb push ebx */
  push32((uint32_t)(EBX));
  /* 102075fc call 0x10207541 */
  push32(0x10207601u); f_10207541();
  /* 10207601 pop ecx */
  ECX = (pop32());
  /* 10207602 pop ecx */
  ECX = (pop32());
  /* 10207603 jmp 0x1020760f */
  goto L_1020760f;
L_10207605:;
  /* 10207605 mov eax, dword ptr [0x1020a0e8] */
  EAX = (r32((uint32_t)(0x1020a0e8)));
  /* 1020760a mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1020760d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1020760f:;
  /* 1020760f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10207611 jne 0x10207617 */
  if (!C.zf) goto L_10207617;
L_10207613:;
  /* 10207613 mov eax, ebx */
  EAX = (EBX);
  /* 10207615 jmp 0x1020767c */
  goto L_1020767c;
L_10207617:;
  /* 10207617 mov edx, dword ptr [0x1020a0e8] */
  EDX = (r32((uint32_t)(0x1020a0e8)));
  /* 1020761d mov eax, ebx */
  EAX = (EBX);
  /* 1020761f sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10207622 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 10207625 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1020762a je 0x1020763b */
  if (C.zf) goto L_1020763b;
  /* 1020762c and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10207630 push 2 */
  push32((uint32_t)(0x2u));
  /* 10207632 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 10207635 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10207638 pop eax */
  EAX = (pop32());
  /* 10207639 jmp 0x10207644 */
  goto L_10207644;
L_1020763b:;
  /* 1020763b and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1020763f mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 10207642 mov eax, esi */
  EAX = (ESI);
L_10207644:;
  /* 10207644 push esi */
  push32((uint32_t)(ESI));
  /* 10207645 push 0 */
  push32((uint32_t)(0x0u));
  /* 10207647 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1020764a push 3 */
  push32((uint32_t)(0x3u));
  /* 1020764c push ecx */
  push32((uint32_t)(ECX));
  /* 1020764d push eax */
  push32((uint32_t)(EAX));
  /* 1020764e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10207651 push eax */
  push32((uint32_t)(EAX));
  /* 10207652 push edi */
  push32((uint32_t)(EDI));
  /* 10207653 push dword ptr [0x1020b184] */
  push32((uint32_t)(r32((uint32_t)(0x1020b184))));
  /* 10207659 call 0x10206723 */
  push32(0x1020765eu); f_10206723();
  /* 1020765e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10207663 je 0x10207613 */
  if (C.zf) goto L_10207613;
  /* 10207665 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10207667 jne 0x1020766f */
  if (!C.zf) goto L_1020766f;
  /* 10207669 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1020766d jmp 0x1020767c */
  goto L_1020767c;
L_1020766f:;
  /* 1020766f movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 10207673 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10207677 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1020767a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1020767c:;
  /* 1020767c pop edi */
  EDI = (pop32());
  /* 1020767d pop esi */
  ESI = (pop32());
  /* 1020767e pop ebx */
  EBX = (pop32());
  /* 1020767f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10207680 ret  */
  ESPCHK(0x102075b6u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1020779c (6 bytes, 1 insns) */
void f_1020779c(void) {
  FTRACE(0x1020779cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020779c jmp dword ptr [0x102080c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102080c8)))); return;
}

