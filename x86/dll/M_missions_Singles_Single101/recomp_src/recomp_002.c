#include "recomp.h"

/* FUN_1000a370 @ 0x10f2a370 (208 bytes, 85 insns) */
void f_10f2a370(void) {
  FTRACE(0x10f2a370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a370 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2a371 mov ebp, esp */
  EBP = (ESP);
  /* 10f2a373 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a374 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a375 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a376 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2a379 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2a37c lea eax, [0x10f47bc8] */
  EAX = ((uint32_t)(0x10f47bc8));
  /* 10f2a382 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a386 jne 0x10f2a3c3 */
  if (!C.zf) goto L_10f2a3c3;
  /* 10f2a388 mov al, 0xff */
  AL = (0xffu);
  /* 10f2a38a mov edi, edi */
  EDI = (EDI);
L_10f2a38c:;
  /* 10f2a38c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f2a38e je 0x10f2a3be */
  if (C.zf) goto L_10f2a3be;
  /* 10f2a390 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2a392 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2a393 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10f2a395 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2a396 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a398 je 0x10f2a38c */
  if (C.zf) goto L_10f2a38c;
  /* 10f2a39a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2a39c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a39e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2a3a0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f2a3a3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f2a3a5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f2a3a7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10f2a3a9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2a3ab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a3ad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2a3af and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f2a3b2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f2a3b4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f2a3b6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a3b8 je 0x10f2a38c */
  if (C.zf) goto L_10f2a38c;
  /* 10f2a3ba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2a3bc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10f2a3be:;
  /* 10f2a3be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10f2a3c1 jmp 0x10f2a43b */
  goto L_10f2a43b;
L_10f2a3c3:;
  /* 10f2a3c3 lock inc dword ptr [0x10f47d70] */
  x86_unimpl("lock inc @ 0x10f2a3c3");
  /* 10f2a3ca cmp dword ptr [0x10f47d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f47d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a3d1 jg 0x10f2a3d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2a3d7;
  /* 10f2a3d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2a3d5 jmp 0x10f2a3ec */
  goto L_10f2a3ec;
L_10f2a3d7:;
  /* 10f2a3d7 lock dec dword ptr [0x10f47d70] */
  x86_unimpl("lock dec @ 0x10f2a3d7");
  /* 10f2a3de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f2a3e0 call 0x10f26892 */
  push32(0x10f2a3e5u); f_10f26892();
  /* 10f2a3e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10f2a3ec:;
  /* 10f2a3ec mov eax, 0xff */
  EAX = (0xffu);
  /* 10f2a3f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2a3f3 nop  */
  /* nop */
L_10f2a3f4:;
  /* 10f2a3f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f2a3f6 je 0x10f2a41f */
  if (C.zf) goto L_10f2a41f;
  /* 10f2a3f8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2a3fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2a3fb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f2a3fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2a3fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a400 je 0x10f2a3f4 */
  if (C.zf) goto L_10f2a3f4;
  /* 10f2a402 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a403 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a404 call 0x10f26d22 */
  push32(0x10f2a409u); f_10f26d22();
  /* 10f2a409 mov ebx, eax */
  EBX = (EAX);
  /* 10f2a40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a40e call 0x10f26d22 */
  push32(0x10f2a413u); f_10f26d22();
  /* 10f2a413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a416 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a418 je 0x10f2a3f4 */
  if (C.zf) goto L_10f2a3f4;
  /* 10f2a41a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2a41c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f2a41f:;
  /* 10f2a41f mov ebx, eax */
  EBX = (EAX);
  /* 10f2a421 pop eax */
  EAX = (pop32());
  /* 10f2a422 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a424 jne 0x10f2a42f */
  if (!C.zf) goto L_10f2a42f;
  /* 10f2a426 lock dec dword ptr [0x10f47d70] */
  x86_unimpl("lock dec @ 0x10f2a426");
  /* 10f2a42d jmp 0x10f2a439 */
  goto L_10f2a439;
L_10f2a42f:;
  /* 10f2a42f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f2a431 call 0x10f268f3 */
  push32(0x10f2a436u); f_10f268f3();
  /* 10f2a436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2a439:;
  /* 10f2a439 mov eax, ebx */
  EAX = (EBX);
L_10f2a43b:;
  /* 10f2a43b pop ebx */
  EBX = (pop32());
  /* 10f2a43c pop esi */
  ESI = (pop32());
  /* 10f2a43d pop edi */
  EDI = (pop32());
  /* 10f2a43e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a43f ret  */
  ESPCHK(0x10f2a370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x10f2a440 (257 bytes, 103 insns) */
void f_10f2a440(void) {
  FTRACE(0x10f2a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a440 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2a441 mov ebp, esp */
  EBP = (ESP);
  /* 10f2a443 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a444 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a445 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a446 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2a449 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2a44b je 0x10f2a53a */
  if (C.zf) goto L_10f2a53a;
  /* 10f2a451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2a454 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2a457 lea eax, [0x10f47bc8] */
  EAX = ((uint32_t)(0x10f47bc8));
  /* 10f2a45d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a461 jne 0x10f2a4b1 */
  if (!C.zf) goto L_10f2a4b1;
  /* 10f2a463 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10f2a465 mov bl, 0x5a */
  BL = (0x5au);
  /* 10f2a467 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10f2a469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f2a46c:;
  /* 10f2a46c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10f2a46e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f2a470 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10f2a472 je 0x10f2a495 */
  if (C.zf) goto L_10f2a495;
  /* 10f2a474 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f2a476 je 0x10f2a495 */
  if (C.zf) goto L_10f2a495;
  /* 10f2a478 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2a479 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2a47a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a47c jb 0x10f2a484 */
  if (C.cf) goto L_10f2a484;
  /* 10f2a47e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a480 ja 0x10f2a484 */
  if ((!C.cf&&!C.zf)) goto L_10f2a484;
  /* 10f2a482 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10f2a484:;
  /* 10f2a484 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a486 jb 0x10f2a48e */
  if (C.cf) goto L_10f2a48e;
  /* 10f2a488 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a48a ja 0x10f2a48e */
  if ((!C.cf&&!C.zf)) goto L_10f2a48e;
  /* 10f2a48c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10f2a48e:;
  /* 10f2a48e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a490 jne 0x10f2a49f */
  if (!C.zf) goto L_10f2a49f;
  /* 10f2a492 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f2a493 jne 0x10f2a46c */
  if (!C.zf) goto L_10f2a46c;
L_10f2a495:;
  /* 10f2a495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2a497 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2a499 je 0x10f2a53a */
  if (C.zf) goto L_10f2a53a;
L_10f2a49f:;
  /* 10f2a49f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10f2a4a4 jb 0x10f2a53a */
  if (C.cf) goto L_10f2a53a;
  /* 10f2a4aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2a4ac jmp 0x10f2a53a */
  goto L_10f2a53a;
L_10f2a4b1:;
  /* 10f2a4b1 lock inc dword ptr [0x10f47d70] */
  x86_unimpl("lock inc @ 0x10f2a4b1");
  /* 10f2a4b8 cmp dword ptr [0x10f47d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f47d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a4bf jg 0x10f2a4c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2a4c5;
  /* 10f2a4c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2a4c3 jmp 0x10f2a4de */
  goto L_10f2a4de;
L_10f2a4c5:;
  /* 10f2a4c5 lock dec dword ptr [0x10f47d70] */
  x86_unimpl("lock dec @ 0x10f2a4c5");
  /* 10f2a4cc mov ebx, ecx */
  EBX = (ECX);
  /* 10f2a4ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f2a4d0 call 0x10f26892 */
  push32(0x10f2a4d5u); f_10f26892();
  /* 10f2a4d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10f2a4dc mov ecx, ebx */
  ECX = (EBX);
L_10f2a4de:;
  /* 10f2a4de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a4e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2a4e2 mov edi, edi */
  EDI = (EDI);
L_10f2a4e4:;
  /* 10f2a4e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2a4e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a4e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f2a4ea je 0x10f2a50f */
  if (C.zf) goto L_10f2a50f;
  /* 10f2a4ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2a4ee je 0x10f2a50f */
  if (C.zf) goto L_10f2a50f;
  /* 10f2a4f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2a4f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2a4f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a4f3 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a4f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a4f5 call 0x10f26d22 */
  push32(0x10f2a4fau); f_10f26d22();
  /* 10f2a4fa mov ebx, eax */
  EBX = (EAX);
  /* 10f2a4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a4ff call 0x10f26d22 */
  push32(0x10f2a504u); f_10f26d22();
  /* 10f2a504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a507 pop ecx */
  ECX = (pop32());
  /* 10f2a508 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a50a jne 0x10f2a515 */
  if (!C.zf) goto L_10f2a515;
  /* 10f2a50c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f2a50d jne 0x10f2a4e4 */
  if (!C.zf) goto L_10f2a4e4;
L_10f2a50f:;
  /* 10f2a50f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2a511 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a513 je 0x10f2a51e */
  if (C.zf) goto L_10f2a51e;
L_10f2a515:;
  /* 10f2a515 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10f2a51a jb 0x10f2a51e */
  if (C.cf) goto L_10f2a51e;
  /* 10f2a51c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10f2a51e:;
  /* 10f2a51e pop eax */
  EAX = (pop32());
  /* 10f2a51f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a521 jne 0x10f2a52c */
  if (!C.zf) goto L_10f2a52c;
  /* 10f2a523 lock dec dword ptr [0x10f47d70] */
  x86_unimpl("lock dec @ 0x10f2a523");
  /* 10f2a52a jmp 0x10f2a53a */
  goto L_10f2a53a;
L_10f2a52c:;
  /* 10f2a52c mov ebx, ecx */
  EBX = (ECX);
  /* 10f2a52e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f2a530 call 0x10f268f3 */
  push32(0x10f2a535u); f_10f268f3();
  /* 10f2a535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a538 mov ecx, ebx */
  ECX = (EBX);
L_10f2a53a:;
  /* 10f2a53a mov eax, ecx */
  EAX = (ECX);
  /* 10f2a53c pop ebx */
  EBX = (pop32());
  /* 10f2a53d pop esi */
  ESI = (pop32());
  /* 10f2a53e pop edi */
  EDI = (pop32());
  /* 10f2a53f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a540 ret  */
  ESPCHK(0x10f2a440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a541 @ 0x10f2a541 (93 bytes, 32 insns) */
void f_10f2a541(void) {
  FTRACE(0x10f2a541u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a541 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a542 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a546 cmp esi, dword ptr [0x10f49100] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a54c jae 0x10f2a586 */
  if (!C.cf) goto L_10f2a586;
  /* 10f2a54e mov ecx, esi */
  ECX = (ESI);
  /* 10f2a550 mov eax, esi */
  EAX = (ESI);
  /* 10f2a552 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f2a555 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a558 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f2a55f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f2a562 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f2a567 je 0x10f2a586 */
  if (C.zf) goto L_10f2a586;
  /* 10f2a569 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a56a push esi */
  push32((uint32_t)(ESI));
  /* 10f2a56b call 0x10f29b30 */
  push32(0x10f2a570u); f_10f29b30();
  /* 10f2a570 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a571 call 0x10f2a59e */
  push32(0x10f2a576u); f_10f2a59e();
  /* 10f2a576 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a577 mov edi, eax */
  EDI = (EAX);
  /* 10f2a579 call 0x10f29b8f */
  push32(0x10f2a57eu); f_10f29b8f();
  /* 10f2a57e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a581 mov eax, edi */
  EAX = (EDI);
  /* 10f2a583 pop edi */
  EDI = (pop32());
  /* 10f2a584 pop esi */
  ESI = (pop32());
  /* 10f2a585 ret  */
  ESPCHK(0x10f2a541u, _esp0);
  ESP += 4; return;
L_10f2a586:;
  /* 10f2a586 call 0x10f29a5d */
  push32(0x10f2a58bu); f_10f29a5d();
  /* 10f2a58b mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f2a591 call 0x10f29a66 */
  push32(0x10f2a596u); f_10f29a66();
  /* 10f2a596 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f2a599 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a59c pop esi */
  ESI = (pop32());
  /* 10f2a59d ret  */
  ESPCHK(0x10f2a541u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a59e @ 0x10f2a59e (131 bytes, 52 insns) */
void f_10f2a59e(void) {
  FTRACE(0x10f2a59eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a59e push esi */
  push32((uint32_t)(ESI));
  /* 10f2a59f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a5a3 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a5a4 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a5a5 call 0x10f29aee */
  push32(0x10f2a5aau); f_10f29aee();
  /* 10f2a5aa cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a5ad pop ecx */
  ECX = (pop32());
  /* 10f2a5ae je 0x10f2a5ec */
  if (C.zf) goto L_10f2a5ec;
  /* 10f2a5b0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a5b3 je 0x10f2a5ba */
  if (C.zf) goto L_10f2a5ba;
  /* 10f2a5b5 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a5b8 jne 0x10f2a5d0 */
  if (!C.zf) goto L_10f2a5d0;
L_10f2a5ba:;
  /* 10f2a5ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2a5bc call 0x10f29aee */
  push32(0x10f2a5c1u); f_10f29aee();
  /* 10f2a5c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2a5c3 mov edi, eax */
  EDI = (EAX);
  /* 10f2a5c5 call 0x10f29aee */
  push32(0x10f2a5cau); f_10f29aee();
  /* 10f2a5ca pop ecx */
  ECX = (pop32());
  /* 10f2a5cb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a5cd pop ecx */
  ECX = (pop32());
  /* 10f2a5ce je 0x10f2a5ec */
  if (C.zf) goto L_10f2a5ec;
L_10f2a5d0:;
  /* 10f2a5d0 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a5d1 call 0x10f29aee */
  push32(0x10f2a5d6u); f_10f29aee();
  /* 10f2a5d6 pop ecx */
  ECX = (pop32());
  /* 10f2a5d7 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a5d8 call dword ptr [0x10f2d018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d018))), 0x10f2a5deu);
  /* 10f2a5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a5e0 jne 0x10f2a5ec */
  if (!C.zf) goto L_10f2a5ec;
  /* 10f2a5e2 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f2a5e8u);
  /* 10f2a5e8 mov edi, eax */
  EDI = (EAX);
  /* 10f2a5ea jmp 0x10f2a5ee */
  goto L_10f2a5ee;
L_10f2a5ec:;
  /* 10f2a5ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10f2a5ee:;
  /* 10f2a5ee push esi */
  push32((uint32_t)(ESI));
  /* 10f2a5ef call 0x10f29a6f */
  push32(0x10f2a5f4u); f_10f29a6f();
  /* 10f2a5f4 mov eax, esi */
  EAX = (ESI);
  /* 10f2a5f6 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10f2a5f9 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f2a5fc pop ecx */
  ECX = (pop32());
  /* 10f2a5fd mov eax, dword ptr [eax*4 + 0x10f49000] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f49000)));
  /* 10f2a604 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 10f2a607 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10f2a60c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f2a60e je 0x10f2a61c */
  if (C.zf) goto L_10f2a61c;
  /* 10f2a610 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a611 call 0x10f299ea */
  push32(0x10f2a616u); f_10f299ea();
  /* 10f2a616 pop ecx */
  ECX = (pop32());
  /* 10f2a617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a61a jmp 0x10f2a61e */
  goto L_10f2a61e;
L_10f2a61c:;
  /* 10f2a61c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2a61e:;
  /* 10f2a61e pop edi */
  EDI = (pop32());
  /* 10f2a61f pop esi */
  ESI = (pop32());
  /* 10f2a620 ret  */
  ESPCHK(0x10f2a59eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a621 @ 0x10f2a621 (43 bytes, 17 insns) */
void f_10f2a621(void) {
  FTRACE(0x10f2a621u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a621 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a622 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a626 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10f2a629 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 10f2a62b je 0x10f2a64a */
  if (C.zf) goto L_10f2a64a;
  /* 10f2a62d test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10f2a62f je 0x10f2a64a */
  if (C.zf) goto L_10f2a64a;
  /* 10f2a631 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 10f2a634 call 0x10f23e12 */
  push32(0x10f2a639u); f_10f23e12();
  /* 10f2a639 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 10f2a63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a641 pop ecx */
  ECX = (pop32());
  /* 10f2a642 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f2a644 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10f2a647 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_10f2a64a:;
  /* 10f2a64a pop esi */
  ESI = (pop32());
  /* 10f2a64b ret  */
  ESPCHK(0x10f2a621u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a684 @ 0x10f2a684 (150 bytes, 54 insns) */
void f_10f2a684(void) {
  FTRACE(0x10f2a684u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a684 mov eax, 0x10f2c0e4 */
  EAX = (0x10f2c0e4u);
  /* 10f2a689 call 0x10f2b470 */
  push32(0x10f2a68eu); f_10f2b470();
  /* 10f2a68e push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a68f push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a690 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a691 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a692 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a693 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2a695 cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a698 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a69a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2a69c mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10f2a69f mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 10f2a6a2 pop edi */
  EDI = (pop32());
  /* 10f2a6a3 je 0x10f2a6c0 */
  if (C.zf) goto L_10f2a6c0;
  /* 10f2a6a5 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 10f2a6a8 mov dword ptr [esi], 0x10f2d854 */
  w32((uint32_t)(ESI), (0x10f2d854u));
  /* 10f2a6ae mov dword ptr [esi + 0xc], 0x10f2d84c */
  w32((uint32_t)(ESI + 0xc), (0x10f2d84cu));
  /* 10f2a6b5 call 0x10f2a758 */
  push32(0x10f2a6bau); f_10f2a758();
  /* 10f2a6ba mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10f2a6bd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10f2a6c0:;
  /* 10f2a6c0 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10f2a6c2 call 0x10f2b17b */
  push32(0x10f2a6c7u); f_10f2b17b();
  /* 10f2a6c7 pop ecx */
  ECX = (pop32());
  /* 10f2a6c8 mov ecx, eax */
  ECX = (EAX);
  /* 10f2a6ca mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f2a6cd cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a6cf mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10f2a6d2 je 0x10f2a6db */
  if (C.zf) goto L_10f2a6db;
  /* 10f2a6d4 call 0x10f2a938 */
  push32(0x10f2a6d9u); f_10f2a938();
  /* 10f2a6d9 jmp 0x10f2a6dd */
  goto L_10f2a6dd;
L_10f2a6db:;
  /* 10f2a6db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2a6dd:;
  /* 10f2a6dd push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a6de push eax */
  push32((uint32_t)(EAX));
  /* 10f2a6df mov ecx, esi */
  ECX = (ESI);
  /* 10f2a6e1 mov byte ptr [ebp - 4], bl */
  w8((uint32_t)(EBP + -0x4), (BL));
  /* 10f2a6e4 call 0x10f2a876 */
  push32(0x10f2a6e9u); f_10f2a876();
  /* 10f2a6e9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2a6eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2a6ee mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2a6f1 mov dword ptr [eax + esi], 0x10f2d848 */
  w32((uint32_t)(EAX + ESI*1), (0x10f2d848u));
  /* 10f2a6f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2a6fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2a6fd mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 10f2a701 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2a703 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2a706 mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 10f2a70a mov eax, esi */
  EAX = (ESI);
  /* 10f2a70c pop edi */
  EDI = (pop32());
  /* 10f2a70d pop esi */
  ESI = (pop32());
  /* 10f2a70e pop ebx */
  EBX = (pop32());
  /* 10f2a70f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2a716 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a717 ret 4 */
  ESPCHK(0x10f2a684u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a745 @ 0x10f2a745 (19 bytes, 4 insns) */
void f_10f2a745(void) {
  FTRACE(0x10f2a745u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a745 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 10f2a748 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2a74b mov dword ptr [eax + ecx - 0x14], 0x10f2d848 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x10f2d848u));
  /* 10f2a753 jmp 0x10f2a8eb */
  f_10f2a8eb(); return;
}

/* FUN_1000a758 @ 0x10f2a758 (94 bytes, 29 insns) */
void f_10f2a758(void) {
  FTRACE(0x10f2a758u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a758 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a759 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a75b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a75d or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 10f2a761 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f2a764 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10f2a767 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10f2a76a mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 10f2a76d mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 10f2a770 mov dword ptr [esi + 0x30], eax */
  w32((uint32_t)(ESI + 0x30), (EAX));
  /* 10f2a773 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 10f2a776 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 10f2a779 mov dword ptr [esi], 0x10f2d86c */
  w32((uint32_t)(ESI), (0x10f2d86cu));
  /* 10f2a77f push eax */
  push32((uint32_t)(EAX));
  /* 10f2a780 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 10f2a787 mov dword ptr [esi + 0x28], 6 */
  w32((uint32_t)(ESI + 0x28), (0x6u));
  /* 10f2a78e mov byte ptr [esi + 0x2c], 0x20 */
  w8((uint32_t)(ESI + 0x2c), (0x20u));
  /* 10f2a792 call 0x10f2acde */
  push32(0x10f2a797u); f_10f2acde();
  /* 10f2a797 mov eax, dword ptr [0x10f47d60] */
  EAX = (r32((uint32_t)(0x10f47d60)));
  /* 10f2a79c inc dword ptr [0x10f47d60] */
  { uint32_t _r=(r32((uint32_t)(0x10f47d60)))+1; w32((uint32_t)(0x10f47d60), (_r)); fl_inc(_r,32); }
  /* 10f2a7a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a7a4 pop ecx */
  ECX = (pop32());
  /* 10f2a7a5 jne 0x10f2a7b2 */
  if (!C.zf) goto L_10f2a7b2;
  /* 10f2a7a7 push 0x10f47d28 */
  push32((uint32_t)(0x10f47d28u));
  /* 10f2a7ac call 0x10f2acde */
  push32(0x10f2a7b1u); f_10f2acde();
  /* 10f2a7b1 pop ecx */
  ECX = (pop32());
L_10f2a7b2:;
  /* 10f2a7b2 mov eax, esi */
  EAX = (ESI);
  /* 10f2a7b4 pop esi */
  ESI = (pop32());
  /* 10f2a7b5 ret  */
  ESPCHK(0x10f2a758u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7b6 @ 0x10f2a7b6 (28 bytes, 11 insns) */
void f_10f2a7b6(void) {
  FTRACE(0x10f2a7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a7b6 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a7b7 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a7b9 call 0x10f2a7d2 */
  push32(0x10f2a7beu); f_10f2a7d2();
  /* 10f2a7be test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 10f2a7c3 je 0x10f2a7cc */
  if (C.zf) goto L_10f2a7cc;
  /* 10f2a7c5 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a7c6 call 0x10f23ae0 */
  push32(0x10f2a7cbu); f_10f23ae0();
  /* 10f2a7cb pop ecx */
  ECX = (pop32());
L_10f2a7cc:;
  /* 10f2a7cc mov eax, esi */
  EAX = (ESI);
  /* 10f2a7ce pop esi */
  ESI = (pop32());
  /* 10f2a7cf ret 4 */
  ESPCHK(0x10f2a7b6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a7d2 @ 0x10f2a7d2 (74 bytes, 25 insns) */
void f_10f2a7d2(void) {
  FTRACE(0x10f2a7d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a7d2 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a7d3 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a7d5 or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 10f2a7d9 mov dword ptr [esi], 0x10f2d86c */
  w32((uint32_t)(ESI), (0x10f2d86cu));
  /* 10f2a7df dec dword ptr [0x10f47d60] */
  { uint32_t _r=(r32((uint32_t)(0x10f47d60)))-1; w32((uint32_t)(0x10f47d60), (_r)); fl_dec(_r,32); }
  /* 10f2a7e5 jne 0x10f2a7f2 */
  if (!C.zf) goto L_10f2a7f2;
  /* 10f2a7e7 push 0x10f47d28 */
  push32((uint32_t)(0x10f47d28u));
  /* 10f2a7ec call 0x10f2ace9 */
  push32(0x10f2a7f1u); f_10f2ace9();
  /* 10f2a7f1 pop ecx */
  ECX = (pop32());
L_10f2a7f2:;
  /* 10f2a7f2 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 10f2a7f5 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a7f6 call 0x10f2ace9 */
  push32(0x10f2a7fbu); f_10f2ace9();
  /* 10f2a7fb cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a7ff pop ecx */
  ECX = (pop32());
  /* 10f2a800 je 0x10f2a80f */
  if (C.zf) goto L_10f2a80f;
  /* 10f2a802 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2a805 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2a807 je 0x10f2a80f */
  if (C.zf) goto L_10f2a80f;
  /* 10f2a809 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2a80b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2a80d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10f2a80fu);
L_10f2a80f:;
  /* 10f2a80f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f2a813 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 10f2a81a pop esi */
  ESI = (pop32());
  /* 10f2a81b ret  */
  ESPCHK(0x10f2a7d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a81c @ 0x10f2a81c (47 bytes, 19 insns) */
void f_10f2a81c(void) {
  FTRACE(0x10f2a81cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a81c push esi */
  push32((uint32_t)(ESI));
  /* 10f2a81d mov esi, ecx */
  ESI = (ECX);
  /* 10f2a81f cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a823 je 0x10f2a832 */
  if (C.zf) goto L_10f2a832;
  /* 10f2a825 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2a828 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2a82a je 0x10f2a832 */
  if (C.zf) goto L_10f2a832;
  /* 10f2a82c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2a82e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2a830 call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10f2a832u);
L_10f2a832:;
  /* 10f2a832 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a838 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f2a83b je 0x10f2a843 */
  if (C.zf) goto L_10f2a843;
  /* 10f2a83d and dword ptr [esi + 8], 0xfffffffb */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0xfffffffbu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10f2a841 jmp 0x10f2a847 */
  goto L_10f2a847;
L_10f2a843:;
  /* 10f2a843 or dword ptr [esi + 8], 4 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0x4u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
L_10f2a847:;
  /* 10f2a847 pop esi */
  ESI = (pop32());
  /* 10f2a848 ret 4 */
  ESPCHK(0x10f2a81cu, _esp0);
  ESP += 8; return;
}

/* FUN_1000a876 @ 0x10f2a876 (117 bytes, 41 insns) */
void f_10f2a876(void) {
  FTRACE(0x10f2a876u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a876 mov eax, 0x10f2c115 */
  EAX = (0x10f2c115u);
  /* 10f2a87b call 0x10f2b470 */
  push32(0x10f2a880u); f_10f2b470();
  /* 10f2a880 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a881 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a882 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a883 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a884 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a885 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2a887 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a88a mov esi, ecx */
  ESI = (ECX);
  /* 10f2a88c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2a88e mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10f2a891 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 10f2a894 pop edi */
  EDI = (pop32());
  /* 10f2a895 je 0x10f2a8b2 */
  if (C.zf) goto L_10f2a8b2;
  /* 10f2a897 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 10f2a89a mov dword ptr [esi], 0x10f2d880 */
  w32((uint32_t)(ESI), (0x10f2d880u));
  /* 10f2a8a0 mov dword ptr [esi + 0xc], 0x10f2d878 */
  w32((uint32_t)(ESI + 0xc), (0x10f2d878u));
  /* 10f2a8a7 call 0x10f2a758 */
  push32(0x10f2a8acu); f_10f2a758();
  /* 10f2a8ac mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10f2a8af mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10f2a8b2:;
  /* 10f2a8b2 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a8b3 mov ecx, esi */
  ECX = (ESI);
  /* 10f2a8b5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2a8b8 call 0x10f2ad35 */
  push32(0x10f2a8bdu); f_10f2ad35();
  /* 10f2a8bd push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a8be lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 10f2a8c1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2a8c4 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10f2a8c7 call 0x10f2ae0a */
  push32(0x10f2a8ccu); f_10f2ae0a();
  /* 10f2a8cc mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2a8ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2a8d1 pop edi */
  EDI = (pop32());
  /* 10f2a8d2 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2a8d5 mov dword ptr [eax + esi], 0x10f2d874 */
  w32((uint32_t)(EAX + ESI*1), (0x10f2d874u));
  /* 10f2a8dc mov eax, esi */
  EAX = (ESI);
  /* 10f2a8de pop esi */
  ESI = (pop32());
  /* 10f2a8df pop ebx */
  EBX = (pop32());
  /* 10f2a8e0 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2a8e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a8e8 ret 8 */
  ESPCHK(0x10f2a876u, _esp0);
  ESP += 12; return;
}

/* FUN_1000a8eb @ 0x10f2a8eb (77 bytes, 24 insns) */
void f_10f2a8eb(void) {
  FTRACE(0x10f2a8ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a8eb mov eax, 0x10f2c12b */
  EAX = (0x10f2c12bu);
  /* 10f2a8f0 call 0x10f2b470 */
  push32(0x10f2a8f5u); f_10f2b470();
  /* 10f2a8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a8f6 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 10f2a8f9 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a8fa mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f2a8fd mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2a900 mov dword ptr [eax + ecx - 0x14], 0x10f2d874 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x10f2d874u));
  /* 10f2a908 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2a90c lea esi, [ecx - 8] */
  ESI = ((uint32_t)(ECX + -0x8));
  /* 10f2a90f add ecx, -0x14 */
  { uint32_t _a=(ECX),_b=(0xffffffecu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a912 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2a914 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2a916 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10f2a918 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a91b call 0x10f2ae6f */
  push32(0x10f2a920u); f_10f2ae6f();
  /* 10f2a920 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2a924 mov ecx, esi */
  ECX = (ESI);
  /* 10f2a926 call 0x10f2adab */
  push32(0x10f2a92bu); f_10f2adab();
  /* 10f2a92b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2a92e pop esi */
  ESI = (pop32());
  /* 10f2a92f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2a936 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a937 ret  */
  ESPCHK(0x10f2a8ebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a938 @ 0x10f2a938 (26 bytes, 9 insns) */
void f_10f2a938(void) {
  FTRACE(0x10f2a938u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a938 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a939 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a93b call 0x10f2ae7e */
  push32(0x10f2a940u); f_10f2ae7e();
  /* 10f2a940 and dword ptr [esi + 0x50], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x50)))&(0x0u); w32((uint32_t)(ESI + 0x50), (_r)); fl_logic(_r,32); }
  /* 10f2a944 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 10f2a948 mov dword ptr [esi], 0x10f2d8a4 */
  w32((uint32_t)(ESI), (0x10f2d8a4u));
  /* 10f2a94e mov eax, esi */
  EAX = (ESI);
  /* 10f2a950 pop esi */
  ESI = (pop32());
  /* 10f2a951 ret  */
  ESPCHK(0x10f2a938u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a952 @ 0x10f2a952 (28 bytes, 11 insns) */
void f_10f2a952(void) {
  FTRACE(0x10f2a952u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a952 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a953 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a955 call 0x10f2a96e */
  push32(0x10f2a95au); f_10f2a96e();
  /* 10f2a95a test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 10f2a95f je 0x10f2a968 */
  if (C.zf) goto L_10f2a968;
  /* 10f2a961 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a962 call 0x10f23ae0 */
  push32(0x10f2a967u); f_10f23ae0();
  /* 10f2a967 pop ecx */
  ECX = (pop32());
L_10f2a968:;
  /* 10f2a968 mov eax, esi */
  EAX = (ESI);
  /* 10f2a96a pop esi */
  ESI = (pop32());
  /* 10f2a96b ret 4 */
  ESPCHK(0x10f2a952u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a96e @ 0x10f2a96e (87 bytes, 28 insns) */
void f_10f2a96e(void) {
  FTRACE(0x10f2a96eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a96e mov eax, 0x10f2c140 */
  EAX = (0x10f2c140u);
  /* 10f2a973 call 0x10f2b470 */
  push32(0x10f2a978u); f_10f2b470();
  /* 10f2a978 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a979 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a97a mov esi, ecx */
  ESI = (ECX);
  /* 10f2a97c mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 10f2a97f mov dword ptr [esi], 0x10f2d8a4 */
  w32((uint32_t)(ESI), (0x10f2d8a4u));
  /* 10f2a985 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2a989 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a98d jge 0x10f2a999 */
  if ((C.sf==C.of)) goto L_10f2a999;
  /* 10f2a98f lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2a992 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a993 call 0x10f2acf4 */
  push32(0x10f2a998u); f_10f2acf4();
  /* 10f2a998 pop ecx */
  ECX = (pop32());
L_10f2a999:;
  /* 10f2a999 cmp dword ptr [esi + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a99d mov ecx, esi */
  ECX = (ESI);
  /* 10f2a99f je 0x10f2a9a8 */
  if (C.zf) goto L_10f2a9a8;
  /* 10f2a9a1 call 0x10f2a9c5 */
  push32(0x10f2a9a6u); f_10f2a9c5();
  /* 10f2a9a6 jmp 0x10f2a9ad */
  goto L_10f2a9ad;
L_10f2a9a8:;
  /* 10f2a9a8 call 0x10f2ab9f */
  push32(0x10f2a9adu); f_10f2ab9f();
L_10f2a9ad:;
  /* 10f2a9ad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2a9b1 mov ecx, esi */
  ECX = (ESI);
  /* 10f2a9b3 call 0x10f2aed9 */
  push32(0x10f2a9b8u); f_10f2aed9();
  /* 10f2a9b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2a9bb pop esi */
  ESI = (pop32());
  /* 10f2a9bc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2a9c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a9c4 ret  */
  ESPCHK(0x10f2a96eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c5 @ 0x10f2a9c5 (99 bytes, 41 insns) */
void f_10f2a9c5(void) {
  FTRACE(0x10f2a9c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a9c5 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a9c6 mov esi, ecx */
  ESI = (ECX);
  /* 10f2a9c8 push edi */
  push32((uint32_t)(EDI));
  /* 10f2a9c9 cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a9cd je 0x10f2aa23 */
  if (C.zf) goto L_10f2aa23;
  /* 10f2a9cf cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a9d3 jge 0x10f2a9df */
  if ((C.sf==C.of)) goto L_10f2a9df;
  /* 10f2a9d5 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2a9d8 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a9d9 call 0x10f2acf4 */
  push32(0x10f2a9deu); f_10f2acf4();
  /* 10f2a9de pop ecx */
  ECX = (pop32());
L_10f2a9df:;
  /* 10f2a9df mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2a9e1 mov ecx, esi */
  ECX = (ESI);
  /* 10f2a9e3 call dword ptr [eax + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x4))), 0x10f2a9e6u);
  /* 10f2a9e6 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 10f2a9e9 mov edi, eax */
  EDI = (EAX);
  /* 10f2a9eb call 0x10f2a541 */
  push32(0x10f2a9f0u); f_10f2a541();
  /* 10f2a9f0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a9f3 pop ecx */
  ECX = (pop32());
  /* 10f2a9f4 je 0x10f2aa13 */
  if (C.zf) goto L_10f2aa13;
  /* 10f2a9f6 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a9f9 je 0x10f2aa13 */
  if (C.zf) goto L_10f2aa13;
  /* 10f2a9fb or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 10f2a9ff cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa03 jge 0x10f2aa0f */
  if ((C.sf==C.of)) goto L_10f2aa0f;
  /* 10f2aa05 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2aa08 push eax */
  push32((uint32_t)(EAX));
  /* 10f2aa09 call 0x10f2acff */
  push32(0x10f2aa0eu); f_10f2acff();
  /* 10f2aa0e pop ecx */
  ECX = (pop32());
L_10f2aa0f:;
  /* 10f2aa0f mov eax, esi */
  EAX = (ESI);
  /* 10f2aa11 jmp 0x10f2aa25 */
  goto L_10f2aa25;
L_10f2aa13:;
  /* 10f2aa13 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa17 jge 0x10f2aa23 */
  if ((C.sf==C.of)) goto L_10f2aa23;
  /* 10f2aa19 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2aa1c push esi */
  push32((uint32_t)(ESI));
  /* 10f2aa1d call 0x10f2acff */
  push32(0x10f2aa22u); f_10f2acff();
  /* 10f2aa22 pop ecx */
  ECX = (pop32());
L_10f2aa23:;
  /* 10f2aa23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2aa25:;
  /* 10f2aa25 pop edi */
  EDI = (pop32());
  /* 10f2aa26 pop esi */
  ESI = (pop32());
  /* 10f2aa27 ret  */
  ESPCHK(0x10f2a9c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa28 @ 0x10f2aa28 (113 bytes, 44 insns) */
void f_10f2aa28(void) {
  FTRACE(0x10f2aa28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2aa28 push esi */
  push32((uint32_t)(ESI));
  /* 10f2aa29 push edi */
  push32((uint32_t)(EDI));
  /* 10f2aa2a mov esi, ecx */
  ESI = (ECX);
  /* 10f2aa2c call 0x10f2b041 */
  push32(0x10f2aa31u); f_10f2b041();
  /* 10f2aa31 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10f2aa34 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa36 je 0x10f2aa95 */
  if (C.zf) goto L_10f2aa95;
  /* 10f2aa38 mov ecx, esi */
  ECX = (ESI);
  /* 10f2aa3a call 0x10f2ab9f */
  push32(0x10f2aa3fu); f_10f2ab9f();
  /* 10f2aa3f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa41 je 0x10f2aa95 */
  if (C.zf) goto L_10f2aa95;
  /* 10f2aa43 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10f2aa46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2aa48 jne 0x10f2aa59 */
  if (!C.zf) goto L_10f2aa59;
  /* 10f2aa4a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f2aa4d mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 10f2aa50 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 10f2aa53 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 10f2aa56 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
L_10f2aa59:;
  /* 10f2aa59 cmp dword ptr [esp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa5d je 0x10f2aa76 */
  if (C.zf) goto L_10f2aa76;
  /* 10f2aa5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2aa61 jne 0x10f2aa7e */
  if (!C.zf) goto L_10f2aa7e;
  /* 10f2aa63 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 10f2aa66 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa69 jae 0x10f2aa7e */
  if (!C.cf) goto L_10f2aa7e;
  /* 10f2aa6b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f2aa6f mov ecx, esi */
  ECX = (ESI);
  /* 10f2aa71 call 0x10f2aa99 */
  push32(0x10f2aa76u); f_10f2aa99();
L_10f2aa76:;
  /* 10f2aa76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2aa78 pop eax */
  EAX = (pop32());
L_10f2aa79:;
  /* 10f2aa79 pop edi */
  EDI = (pop32());
  /* 10f2aa7a pop esi */
  ESI = (pop32());
  /* 10f2aa7b ret 4 */
  ESPCHK(0x10f2aa28u, _esp0);
  ESP += 8; return;
L_10f2aa7e:;
  /* 10f2aa7e lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 10f2aa82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2aa84 push eax */
  push32((uint32_t)(EAX));
  /* 10f2aa85 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 10f2aa88 call 0x10f27dea */
  push32(0x10f2aa8du); f_10f27dea();
  /* 10f2aa8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2aa90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa93 je 0x10f2aa76 */
  if (C.zf) goto L_10f2aa76;
L_10f2aa95:;
  /* 10f2aa95 mov eax, edi */
  EAX = (EDI);
  /* 10f2aa97 jmp 0x10f2aa79 */
  goto L_10f2aa79;
}

/* FUN_1000aa99 @ 0x10f2aa99 (34 bytes, 12 insns) */
void f_10f2aa99(void) {
  FTRACE(0x10f2aa99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2aa99 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f2aa9c cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aa9f jae 0x10f2aaaf */
  if (!C.cf) goto L_10f2aaaf;
  /* 10f2aaa1 mov dl, byte ptr [esp + 4] */
  DL = (r8((uint32_t)(ESP + 0x4)));
  /* 10f2aaa5 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f2aaa7 inc dword ptr [ecx + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x1c)))+1; w32((uint32_t)(ECX + 0x1c), (_r)); fl_inc(_r,32); }
  /* 10f2aaaa movzx eax, dl */
  EAX = ((uint32_t)(DL));
  /* 10f2aaad jmp 0x10f2aab8 */
  goto L_10f2aab8;
L_10f2aaaf:;
  /* 10f2aaaf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2aab1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f2aab5 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x10f2aab8u);
L_10f2aab8:;
  /* 10f2aab8 ret 4 */
  ESPCHK(0x10f2aa99u, _esp0);
  ESP += 8; return;
}

/* FUN_1000aabb @ 0x10f2aabb (144 bytes, 60 insns) */
void f_10f2aabb(void) {
  FTRACE(0x10f2aabbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2aabb push ebp */
  push32((uint32_t)(EBP));
  /* 10f2aabc mov ebp, esp */
  EBP = (ESP);
  /* 10f2aabe push ecx */
  push32((uint32_t)(ECX));
  /* 10f2aabf push esi */
  push32((uint32_t)(ESI));
  /* 10f2aac0 push edi */
  push32((uint32_t)(EDI));
  /* 10f2aac1 mov esi, ecx */
  ESI = (ECX);
  /* 10f2aac3 call 0x10f2ab4b */
  push32(0x10f2aac8u); f_10f2ab4b();
  /* 10f2aac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2aaca je 0x10f2aad4 */
  if (C.zf) goto L_10f2aad4;
  /* 10f2aacc mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10f2aacf movzx eax, byte ptr [eax] */
  EAX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10f2aad2 jmp 0x10f2ab47 */
  goto L_10f2ab47;
L_10f2aad4:;
  /* 10f2aad4 mov ecx, esi */
  ECX = (ESI);
  /* 10f2aad6 call 0x10f2b041 */
  push32(0x10f2aadbu); f_10f2b041();
  /* 10f2aadb or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10f2aade cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aae0 je 0x10f2ab2f */
  if (C.zf) goto L_10f2ab2f;
  /* 10f2aae2 mov ecx, esi */
  ECX = (ESI);
  /* 10f2aae4 call 0x10f2ab9f */
  push32(0x10f2aae9u); f_10f2ab9f();
  /* 10f2aae9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aaeb je 0x10f2ab2f */
  if (C.zf) goto L_10f2ab2f;
  /* 10f2aaed cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aaf1 je 0x10f2ab0e */
  if (C.zf) goto L_10f2ab0e;
  /* 10f2aaf3 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 10f2aaf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2aaf8 push eax */
  push32((uint32_t)(EAX));
  /* 10f2aaf9 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 10f2aafc call 0x10f2b48f */
  push32(0x10f2ab01u); f_10f2b48f();
  /* 10f2ab01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2ab04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2ab06 jle 0x10f2ab2f */
  if ((C.zf||C.sf!=C.of)) goto L_10f2ab2f;
  /* 10f2ab08 movzx eax, byte ptr [ebp - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x1))));
  /* 10f2ab0c jmp 0x10f2ab47 */
  goto L_10f2ab47;
L_10f2ab0e:;
  /* 10f2ab0e mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 10f2ab11 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f2ab14 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ab16 jbe 0x10f2ab1c */
  if ((C.cf||C.zf)) goto L_10f2ab1c;
  /* 10f2ab18 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2ab1a jmp 0x10f2ab1e */
  goto L_10f2ab1e;
L_10f2ab1c:;
  /* 10f2ab1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2ab1e:;
  /* 10f2ab1e push eax */
  push32((uint32_t)(EAX));
  /* 10f2ab1f push ecx */
  push32((uint32_t)(ECX));
  /* 10f2ab20 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 10f2ab23 call 0x10f2b48f */
  push32(0x10f2ab28u); f_10f2b48f();
  /* 10f2ab28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2ab2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2ab2d jg 0x10f2ab33 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2ab33;
L_10f2ab2f:;
  /* 10f2ab2f mov eax, edi */
  EAX = (EDI);
  /* 10f2ab31 jmp 0x10f2ab47 */
  goto L_10f2ab47;
L_10f2ab33:;
  /* 10f2ab33 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f2ab36 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10f2ab39 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2ab3b mov dword ptr [esi + 0x24], ecx */
  w32((uint32_t)(ESI + 0x24), (ECX));
  /* 10f2ab3e mov dword ptr [esi + 0x28], ecx */
  w32((uint32_t)(ESI + 0x28), (ECX));
  /* 10f2ab41 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 10f2ab44 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
L_10f2ab47:;
  /* 10f2ab47 pop edi */
  EDI = (pop32());
  /* 10f2ab48 pop esi */
  ESI = (pop32());
  /* 10f2ab49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2ab4a ret  */
  ESPCHK(0x10f2aabbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab4b @ 0x10f2ab4b (16 bytes, 8 insns) */
void f_10f2ab4b(void) {
  FTRACE(0x10f2ab4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ab4b mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 10f2ab4e mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10f2ab51 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ab53 jae 0x10f2ab58 */
  if (!C.cf) goto L_10f2ab58;
  /* 10f2ab55 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2ab57 ret  */
  ESPCHK(0x10f2ab4bu, _esp0);
  ESP += 4; return;
L_10f2ab58:;
  /* 10f2ab58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2ab5a ret  */
  ESPCHK(0x10f2ab4bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab9f @ 0x10f2ab9f (219 bytes, 90 insns) */
void f_10f2ab9f(void) {
  FTRACE(0x10f2ab9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ab9f push ebx */
  push32((uint32_t)(EBX));
  /* 10f2aba0 push esi */
  push32((uint32_t)(ESI));
  /* 10f2aba1 mov esi, ecx */
  ESI = (ECX);
  /* 10f2aba3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2aba6 push edi */
  push32((uint32_t)(EDI));
  /* 10f2aba7 mov ecx, dword ptr [esi + 0x4c] */
  ECX = (r32((uint32_t)(ESI + 0x4c)));
  /* 10f2abaa cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abac je 0x10f2ac76 */
  if (C.zf) goto L_10f2ac76;
  /* 10f2abb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2abb4 cmp dword ptr [esi + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abb7 jne 0x10f2ac74 */
  if (!C.zf) goto L_10f2ac74;
  /* 10f2abbd mov edi, dword ptr [esi + 0x1c] */
  EDI = (r32((uint32_t)(ESI + 0x1c)));
  /* 10f2abc0 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 10f2abc3 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abc5 jb 0x10f2abcb */
  if (C.cf) goto L_10f2abcb;
  /* 10f2abc7 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2abc9 jmp 0x10f2abcd */
  goto L_10f2abcd;
L_10f2abcb:;
  /* 10f2abcb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10f2abcd:;
  /* 10f2abcd cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abcf je 0x10f2ac00 */
  if (C.zf) goto L_10f2ac00;
  /* 10f2abd1 push edi */
  push32((uint32_t)(EDI));
  /* 10f2abd2 push eax */
  push32((uint32_t)(EAX));
  /* 10f2abd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2abd4 call 0x10f27dea */
  push32(0x10f2abd9u); f_10f27dea();
  /* 10f2abd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2abdc cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abde je 0x10f2ac00 */
  if (C.zf) goto L_10f2ac00;
  /* 10f2abe0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abe2 jle 0x10f2ac60 */
  if ((C.zf||C.sf!=C.of)) goto L_10f2ac60;
  /* 10f2abe4 cmp dword ptr [esi + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2abe7 je 0x10f2abec */
  if (C.zf) goto L_10f2abec;
  /* 10f2abe9 sub dword ptr [esi + 0x1c], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x1c), (_r)); fl_sub(_a,_b,_r,32); }
L_10f2abec:;
  /* 10f2abec mov esi, dword ptr [esi + 0x18] */
  ESI = (r32((uint32_t)(ESI + 0x18)));
  /* 10f2abef sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2abf1 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2abf3 push edi */
  push32((uint32_t)(EDI));
  /* 10f2abf4 push eax */
  push32((uint32_t)(EAX));
  /* 10f2abf5 push esi */
  push32((uint32_t)(ESI));
  /* 10f2abf6 call 0x10f274c0 */
  push32(0x10f2abfbu); f_10f274c0();
  /* 10f2abfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2abfe jmp 0x10f2ac60 */
  goto L_10f2ac60;
L_10f2ac00:;
  /* 10f2ac00 mov ecx, esi */
  ECX = (ESI);
  /* 10f2ac02 mov dword ptr [esi + 0x18], ebx */
  w32((uint32_t)(ESI + 0x18), (EBX));
  /* 10f2ac05 mov dword ptr [esi + 0x1c], ebx */
  w32((uint32_t)(ESI + 0x1c), (EBX));
  /* 10f2ac08 mov dword ptr [esi + 0x20], ebx */
  w32((uint32_t)(ESI + 0x20), (EBX));
  /* 10f2ac0b call 0x10f2ab4b */
  push32(0x10f2ac10u); f_10f2ab4b();
  /* 10f2ac10 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ac12 jle 0x10f2ac67 */
  if ((C.zf||C.sf!=C.of)) goto L_10f2ac67;
  /* 10f2ac14 mov edx, dword ptr [esi + 0x4c] */
  EDX = (r32((uint32_t)(ESI + 0x4c)));
  /* 10f2ac17 mov edi, edx */
  EDI = (EDX);
  /* 10f2ac19 mov ecx, edx */
  ECX = (EDX);
  /* 10f2ac1b sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 10f2ac1e and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f2ac21 mov edi, dword ptr [edi*4 + 0x10f49000] */
  EDI = (r32((uint32_t)(EDI*4 + 0x10f49000)));
  /* 10f2ac28 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 10f2ac2b mov bl, byte ptr [edi + ecx*4 + 4] */
  BL = (r8((uint32_t)(EDI + ECX*4 + 0x4)));
  /* 10f2ac2f test bl, 0x80 */
  { uint32_t _r=(BL)&(0x80u); fl_logic(_r,8); }
  /* 10f2ac32 je 0x10f2ac4d */
  if (C.zf) goto L_10f2ac4d;
  /* 10f2ac34 mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 10f2ac37 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
L_10f2ac3a:;
  /* 10f2ac3a cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ac3c jae 0x10f2ac47 */
  if (!C.cf) goto L_10f2ac47;
  /* 10f2ac3e cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2ac41 jne 0x10f2ac44 */
  if (!C.zf) goto L_10f2ac44;
  /* 10f2ac43 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f2ac44:;
  /* 10f2ac44 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f2ac45 jmp 0x10f2ac3a */
  goto L_10f2ac3a;
L_10f2ac47:;
  /* 10f2ac47 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10f2ac4a je 0x10f2ac4d */
  if (C.zf) goto L_10f2ac4d;
  /* 10f2ac4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f2ac4d:;
  /* 10f2ac4d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2ac4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2ac51 push eax */
  push32((uint32_t)(EAX));
  /* 10f2ac52 push edx */
  push32((uint32_t)(EDX));
  /* 10f2ac53 call 0x10f27d12 */
  push32(0x10f2ac58u); f_10f27d12();
  /* 10f2ac58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2ac5b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ac5e jne 0x10f2ac65 */
  if (!C.zf) goto L_10f2ac65;
L_10f2ac60:;
  /* 10f2ac60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2ac63 jmp 0x10f2ac76 */
  goto L_10f2ac76;
L_10f2ac65:;
  /* 10f2ac65 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10f2ac67:;
  /* 10f2ac67 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10f2ac6b mov dword ptr [esi + 0x24], ebx */
  w32((uint32_t)(ESI + 0x24), (EBX));
  /* 10f2ac6e mov dword ptr [esi + 0x28], ebx */
  w32((uint32_t)(ESI + 0x28), (EBX));
  /* 10f2ac71 mov dword ptr [esi + 0x2c], ebx */
  w32((uint32_t)(ESI + 0x2c), (EBX));
L_10f2ac74:;
  /* 10f2ac74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2ac76:;
  /* 10f2ac76 pop edi */
  EDI = (pop32());
  /* 10f2ac77 pop esi */
  ESI = (pop32());
  /* 10f2ac78 pop ebx */
  EBX = (pop32());
  /* 10f2ac79 ret  */
  ESPCHK(0x10f2ab9fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac7a @ 0x10f2ac7a (100 bytes, 41 insns) */
void f_10f2ac7a(void) {
  FTRACE(0x10f2ac7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ac7a push esi */
  push32((uint32_t)(ESI));
  /* 10f2ac7b mov esi, ecx */
  ESI = (ECX);
  /* 10f2ac7d cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ac81 je 0x10f2ac8d */
  if (C.zf) goto L_10f2ac8d;
  /* 10f2ac83 cmp dword ptr [esi + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ac87 je 0x10f2ac8d */
  if (C.zf) goto L_10f2ac8d;
  /* 10f2ac89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2ac8b jmp 0x10f2acda */
  goto L_10f2acda;
L_10f2ac8d:;
  /* 10f2ac8d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2ac8e push edi */
  push32((uint32_t)(EDI));
  /* 10f2ac8f mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f2ac93 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f2ac95 je 0x10f2accf */
  if (C.zf) goto L_10f2accf;
  /* 10f2ac97 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f2ac9b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f2ac9d jle 0x10f2accf */
  if ((C.zf||C.sf!=C.of)) goto L_10f2accf;
  /* 10f2ac9f cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aca3 jge 0x10f2acaf */
  if ((C.sf==C.of)) goto L_10f2acaf;
  /* 10f2aca5 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2aca8 push eax */
  push32((uint32_t)(EAX));
  /* 10f2aca9 call 0x10f2acf4 */
  push32(0x10f2acaeu); f_10f2acf4();
  /* 10f2acae pop ecx */
  ECX = (pop32());
L_10f2acaf:;
  /* 10f2acaf lea eax, [edi + ebx] */
  EAX = ((uint32_t)(EDI + EBX*1));
  /* 10f2acb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2acb4 push eax */
  push32((uint32_t)(EAX));
  /* 10f2acb5 push edi */
  push32((uint32_t)(EDI));
  /* 10f2acb6 mov ecx, esi */
  ECX = (ESI);
  /* 10f2acb8 call 0x10f2b08c */
  push32(0x10f2acbdu); f_10f2b08c();
  /* 10f2acbd cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2acc1 jge 0x10f2acd6 */
  if ((C.sf==C.of)) goto L_10f2acd6;
  /* 10f2acc3 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2acc6 push eax */
  push32((uint32_t)(EAX));
  /* 10f2acc7 call 0x10f2acff */
  push32(0x10f2acccu); f_10f2acff();
  /* 10f2accc pop ecx */
  ECX = (pop32());
  /* 10f2accd jmp 0x10f2acd6 */
  goto L_10f2acd6;
L_10f2accf:;
  /* 10f2accf mov dword ptr [esi + 8], 1 */
  w32((uint32_t)(ESI + 0x8), (0x1u));
L_10f2acd6:;
  /* 10f2acd6 pop edi */
  EDI = (pop32());
  /* 10f2acd7 mov eax, esi */
  EAX = (ESI);
  /* 10f2acd9 pop ebx */
  EBX = (pop32());
L_10f2acda:;
  /* 10f2acda pop esi */
  ESI = (pop32());
  /* 10f2acdb ret 8 */
  ESPCHK(0x10f2ac7au, _esp0);
  ESP += 12; return;
}

/* FUN_1000acde @ 0x10f2acde (11 bytes, 3 insns) */
void f_10f2acde(void) {
  FTRACE(0x10f2acdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2acde push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f2ace2 call dword ptr [0x10f2d060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d060))), 0x10f2ace8u);
  /* 10f2ace8 ret  */
  ESPCHK(0x10f2acdeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace9 @ 0x10f2ace9 (11 bytes, 3 insns) */
void f_10f2ace9(void) {
  FTRACE(0x10f2ace9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ace9 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f2aced call dword ptr [0x10f2d09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d09c))), 0x10f2acf3u);
  /* 10f2acf3 ret  */
  ESPCHK(0x10f2ace9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf4 @ 0x10f2acf4 (11 bytes, 3 insns) */
void f_10f2acf4(void) {
  FTRACE(0x10f2acf4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2acf4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f2acf8 call dword ptr [0x10f2d05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d05c))), 0x10f2acfeu);
  /* 10f2acfe ret  */
  ESPCHK(0x10f2acf4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acff @ 0x10f2acff (11 bytes, 3 insns) */
void f_10f2acff(void) {
  FTRACE(0x10f2acffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2acff push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f2ad03 call dword ptr [0x10f2d058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d058))), 0x10f2ad09u);
  /* 10f2ad09 ret  */
  ESPCHK(0x10f2acffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad35 @ 0x10f2ad35 (118 bytes, 38 insns) */
void f_10f2ad35(void) {
  FTRACE(0x10f2ad35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ad35 mov eax, 0x10f2c166 */
  EAX = (0x10f2c166u);
  /* 10f2ad3a call 0x10f2b470 */
  push32(0x10f2ad3fu); f_10f2b470();
  /* 10f2ad3f push ecx */
  push32((uint32_t)(ECX));
  /* 10f2ad40 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2ad41 push esi */
  push32((uint32_t)(ESI));
  /* 10f2ad42 push edi */
  push32((uint32_t)(EDI));
  /* 10f2ad43 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f2ad45 mov esi, ecx */
  ESI = (ECX);
  /* 10f2ad47 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ad4a mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10f2ad4d mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10f2ad50 je 0x10f2ad6a */
  if (C.zf) goto L_10f2ad6a;
  /* 10f2ad52 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 10f2ad55 mov dword ptr [esi], 0x10f2d8d8 */
  w32((uint32_t)(ESI), (0x10f2d8d8u));
  /* 10f2ad5b call 0x10f2a758 */
  push32(0x10f2ad60u); f_10f2a758();
  /* 10f2ad60 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f2ad67 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
L_10f2ad6a:;
  /* 10f2ad6a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2ad6c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2ad6f mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2ad72 mov dword ptr [eax + esi], 0x10f2d8d4 */
  w32((uint32_t)(EAX + ESI*1), (0x10f2d8d4u));
  /* 10f2ad79 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2ad7b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2ad7e add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2ad80 call 0x10f2a81c */
  push32(0x10f2ad85u); f_10f2a81c();
  /* 10f2ad85 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2ad87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2ad8a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2ad8d or dword ptr [eax + esi + 0x24], 1 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1 + 0x24)))|(0x1u); w32((uint32_t)(EAX + ESI*1 + 0x24), (_r)); fl_logic(_r,32); }
  /* 10f2ad92 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 10f2ad95 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10f2ad98 lea eax, [eax + esi + 0x24] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x24));
  /* 10f2ad9c pop edi */
  EDI = (pop32());
  /* 10f2ad9d mov eax, esi */
  EAX = (ESI);
  /* 10f2ad9f pop esi */
  ESI = (pop32());
  /* 10f2ada0 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2ada7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2ada8 ret 8 */
  ESPCHK(0x10f2ad35u, _esp0);
  ESP += 12; return;
}

/* FUN_1000adab @ 0x10f2adab (15 bytes, 4 insns) */
void f_10f2adab(void) {
  FTRACE(0x10f2adabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2adab mov eax, dword ptr [ecx - 0xc] */
  EAX = (r32((uint32_t)(ECX + -0xc)));
  /* 10f2adae mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2adb1 mov dword ptr [eax + ecx - 0xc], 0x10f2d8d4 */
  w32((uint32_t)(EAX + ECX*1 + -0xc), (0x10f2d8d4u));
  /* 10f2adb9 ret  */
  ESPCHK(0x10f2adabu, _esp0);
  ESP += 4; return;
}

/* FUN_1000adba @ 0x10f2adba (37 bytes, 14 insns) */
void f_10f2adba(void) {
  FTRACE(0x10f2adbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2adba mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 10f2adbd cmp dword ptr [ecx + 0x24], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2adc0 jae 0x10f2add1 */
  if (!C.cf) goto L_10f2add1;
  /* 10f2adc2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2adc3 mov dword ptr [ecx + 0x28], eax */
  w32((uint32_t)(ECX + 0x28), (EAX));
  /* 10f2adc6 mov cl, byte ptr [esp + 4] */
  CL = (r8((uint32_t)(ESP + 0x4)));
  /* 10f2adca mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f2adcc movsx eax, cl */
  EAX = ((uint32_t)(int32_t)(int8_t)(CL));
  /* 10f2adcf jmp 0x10f2addc */
  goto L_10f2addc;
L_10f2add1:;
  /* 10f2add1 movsx edx, byte ptr [esp + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESP + 0x4))));
  /* 10f2add6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2add8 push edx */
  push32((uint32_t)(EDX));
  /* 10f2add9 call dword ptr [eax + 0x24] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x24))), 0x10f2addcu);
L_10f2addc:;
  /* 10f2addc ret 4 */
  ESPCHK(0x10f2adbau, _esp0);
  ESP += 8; return;
}

/* FUN_1000ae0a @ 0x10f2ae0a (101 bytes, 30 insns) */
void f_10f2ae0a(void) {
  FTRACE(0x10f2ae0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ae0a mov eax, 0x10f2c18a */
  EAX = (0x10f2c18au);
  /* 10f2ae0f call 0x10f2b470 */
  push32(0x10f2ae14u); f_10f2b470();
  /* 10f2ae14 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2ae15 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2ae16 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10f2ae1a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ae1e push esi */
  push32((uint32_t)(ESI));
  /* 10f2ae1f mov esi, ecx */
  ESI = (ECX);
  /* 10f2ae21 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10f2ae24 je 0x10f2ae3f */
  if (C.zf) goto L_10f2ae3f;
  /* 10f2ae26 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 10f2ae29 mov dword ptr [esi], 0x10f2d8e8 */
  w32((uint32_t)(ESI), (0x10f2d8e8u));
  /* 10f2ae2f call 0x10f2a758 */
  push32(0x10f2ae34u); f_10f2a758();
  /* 10f2ae34 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f2ae3b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10f2ae3f:;
  /* 10f2ae3f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2ae41 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2ae44 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2ae47 mov dword ptr [eax + esi], 0x10f2d8e4 */
  w32((uint32_t)(EAX + ESI*1), (0x10f2d8e4u));
  /* 10f2ae4e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2ae50 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2ae53 add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2ae55 call 0x10f2a81c */
  push32(0x10f2ae5au); f_10f2a81c();
  /* 10f2ae5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2ae5d and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f2ae61 mov eax, esi */
  EAX = (ESI);
  /* 10f2ae63 pop esi */
  ESI = (pop32());
  /* 10f2ae64 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2ae6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2ae6c ret 8 */
  ESPCHK(0x10f2ae0au, _esp0);
  ESP += 12; return;
}

/* FUN_1000ae6f @ 0x10f2ae6f (15 bytes, 4 insns) */
void f_10f2ae6f(void) {
  FTRACE(0x10f2ae6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ae6f mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10f2ae72 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2ae75 mov dword ptr [eax + ecx - 8], 0x10f2d8e4 */
  w32((uint32_t)(EAX + ECX*1 + -0x8), (0x10f2d8e4u));
  /* 10f2ae7d ret  */
  ESPCHK(0x10f2ae6fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae7e @ 0x10f2ae7e (63 bytes, 23 insns) */
void f_10f2ae7e(void) {
  FTRACE(0x10f2ae7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ae7e push esi */
  push32((uint32_t)(ESI));
  /* 10f2ae7f mov esi, ecx */
  ESI = (ECX);
  /* 10f2ae81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2ae83 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10f2ae87 or dword ptr [esi + 0x30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x30)))|(0xffffffffu); w32((uint32_t)(ESI + 0x30), (_r)); fl_logic(_r,32); }
  /* 10f2ae8b mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f2ae8e mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10f2ae91 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10f2ae94 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 10f2ae97 mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 10f2ae9a mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 10f2ae9d mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 10f2aea0 mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 10f2aea3 mov dword ptr [esi + 0x28], eax */
  w32((uint32_t)(ESI + 0x28), (EAX));
  /* 10f2aea6 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 10f2aea9 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2aeac mov dword ptr [esi], 0x10f2d8f4 */
  w32((uint32_t)(ESI), (0x10f2d8f4u));
  /* 10f2aeb2 push eax */
  push32((uint32_t)(EAX));
  /* 10f2aeb3 call 0x10f2acde */
  push32(0x10f2aeb8u); f_10f2acde();
  /* 10f2aeb8 pop ecx */
  ECX = (pop32());
  /* 10f2aeb9 mov eax, esi */
  EAX = (ESI);
  /* 10f2aebb pop esi */
  ESI = (pop32());
  /* 10f2aebc ret  */
  ESPCHK(0x10f2ae7eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aebd @ 0x10f2aebd (28 bytes, 11 insns) */
void f_10f2aebd(void) {
  FTRACE(0x10f2aebdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2aebd push esi */
  push32((uint32_t)(ESI));
  /* 10f2aebe mov esi, ecx */
  ESI = (ECX);
  /* 10f2aec0 call 0x10f2aed9 */
  push32(0x10f2aec5u); f_10f2aed9();
  /* 10f2aec5 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 10f2aeca je 0x10f2aed3 */
  if (C.zf) goto L_10f2aed3;
  /* 10f2aecc push esi */
  push32((uint32_t)(ESI));
  /* 10f2aecd call 0x10f23ae0 */
  push32(0x10f2aed2u); f_10f23ae0();
  /* 10f2aed2 pop ecx */
  ECX = (pop32());
L_10f2aed3:;
  /* 10f2aed3 mov eax, esi */
  EAX = (ESI);
  /* 10f2aed5 pop esi */
  ESI = (pop32());
  /* 10f2aed6 ret 4 */
  ESPCHK(0x10f2aebdu, _esp0);
  ESP += 8; return;
}

/* FUN_1000aed9 @ 0x10f2aed9 (48 bytes, 19 insns) */
void f_10f2aed9(void) {
  FTRACE(0x10f2aed9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2aed9 push esi */
  push32((uint32_t)(ESI));
  /* 10f2aeda mov esi, ecx */
  ESI = (ECX);
  /* 10f2aedc lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 10f2aedf mov dword ptr [esi], 0x10f2d8f4 */
  w32((uint32_t)(ESI), (0x10f2d8f4u));
  /* 10f2aee5 push eax */
  push32((uint32_t)(EAX));
  /* 10f2aee6 call 0x10f2ace9 */
  push32(0x10f2aeebu); f_10f2ace9();
  /* 10f2aeeb pop ecx */
  ECX = (pop32());
  /* 10f2aeec mov ecx, esi */
  ECX = (ESI);
  /* 10f2aeee call 0x10f2b02a */
  push32(0x10f2aef3u); f_10f2b02a();
  /* 10f2aef3 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2aef7 je 0x10f2af07 */
  if (C.zf) goto L_10f2af07;
  /* 10f2aef9 mov esi, dword ptr [esi + 0x10] */
  ESI = (r32((uint32_t)(ESI + 0x10)));
  /* 10f2aefc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2aefe je 0x10f2af07 */
  if (C.zf) goto L_10f2af07;
  /* 10f2af00 push esi */
  push32((uint32_t)(ESI));
  /* 10f2af01 call 0x10f23ae0 */
  push32(0x10f2af06u); f_10f23ae0();
  /* 10f2af06 pop ecx */
  ECX = (pop32());
L_10f2af07:;
  /* 10f2af07 pop esi */
  ESI = (pop32());
  /* 10f2af08 ret  */
  ESPCHK(0x10f2aed9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af3d @ 0x10f2af3d (86 bytes, 42 insns) */
void f_10f2af3d(void) {
  FTRACE(0x10f2af3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2af3d push ebp */
  push32((uint32_t)(EBP));
  /* 10f2af3e mov ebp, esp */
  EBP = (ESP);
  /* 10f2af40 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2af41 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2af45 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2af46 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2af49 push esi */
  push32((uint32_t)(ESI));
  /* 10f2af4a mov eax, ebx */
  EAX = (EBX);
  /* 10f2af4c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2af4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2af4f push edi */
  push32((uint32_t)(EDI));
  /* 10f2af50 mov esi, ecx */
  ESI = (ECX);
  /* 10f2af52 je 0x10f2af89 */
  if (C.zf) goto L_10f2af89;
  /* 10f2af54 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_10f2af57:;
  /* 10f2af57 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2af5b jne 0x10f2af6e */
  if (!C.zf) goto L_10f2af6e;
  /* 10f2af5d mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 10f2af60 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2af63 jae 0x10f2af6e */
  if (!C.cf) goto L_10f2af6e;
  /* 10f2af65 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 10f2af67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f2af69 inc dword ptr [esi + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))+1; w32((uint32_t)(ESI + 0x1c), (_r)); fl_inc(_r,32); }
  /* 10f2af6c jmp 0x10f2af7e */
  goto L_10f2af7e;
L_10f2af6e:;
  /* 10f2af6e movzx ecx, byte ptr [edi] */
  ECX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 10f2af71 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2af73 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2af74 mov ecx, esi */
  ECX = (ESI);
  /* 10f2af76 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x10f2af79u);
  /* 10f2af79 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2af7c je 0x10f2af89 */
  if (C.zf) goto L_10f2af89;
L_10f2af7e:;
  /* 10f2af7e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2af7f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2af82 mov eax, ebx */
  EAX = (EBX);
  /* 10f2af84 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2af85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2af87 jne 0x10f2af57 */
  if (!C.zf) goto L_10f2af57;
L_10f2af89:;
  /* 10f2af89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2af8c pop edi */
  EDI = (pop32());
  /* 10f2af8d pop esi */
  ESI = (pop32());
  /* 10f2af8e pop ebx */
  EBX = (pop32());
  /* 10f2af8f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2af90 ret 8 */
  ESPCHK(0x10f2af3du, _esp0);
  ESP += 12; return;
}

/* FUN_1000af93 @ 0x10f2af93 (151 bytes, 67 insns) */
void f_10f2af93(void) {
  FTRACE(0x10f2af93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2af93 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2af94 mov ebp, esp */
  EBP = (ESP);
  /* 10f2af96 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2af97 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2af9b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2af9c push esi */
  push32((uint32_t)(ESI));
  /* 10f2af9d mov esi, ecx */
  ESI = (ECX);
  /* 10f2af9f push edi */
  push32((uint32_t)(EDI));
  /* 10f2afa0 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2afa4 je 0x10f2afeb */
  if (C.zf) goto L_10f2afeb;
  /* 10f2afa6 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2afaa jne 0x10f2afb4 */
  if (!C.zf) goto L_10f2afb4;
  /* 10f2afac mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2afae call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x10f2afb1u);
  /* 10f2afb1 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10f2afb4:;
  /* 10f2afb4 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2afb7 mov eax, ebx */
  EAX = (EBX);
  /* 10f2afb9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2afba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2afbc je 0x10f2afe1 */
  if (C.zf) goto L_10f2afe1;
  /* 10f2afbe mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_10f2afc1:;
  /* 10f2afc1 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2afc5 je 0x10f2afe1 */
  if (C.zf) goto L_10f2afe1;
  /* 10f2afc7 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 10f2afca mov ecx, esi */
  ECX = (ESI);
  /* 10f2afcc mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f2afce mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2afd0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2afd1 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2afd4 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x10f2afd7u);
  /* 10f2afd7 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10f2afda mov eax, ebx */
  EAX = (EBX);
  /* 10f2afdc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2afdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2afdf jne 0x10f2afc1 */
  if (!C.zf) goto L_10f2afc1;
L_10f2afe1:;
  /* 10f2afe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2afe4 pop edi */
  EDI = (pop32());
  /* 10f2afe5 pop esi */
  ESI = (pop32());
  /* 10f2afe6 pop ebx */
  EBX = (pop32());
  /* 10f2afe7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2afe8 ret 8 */
  ESPCHK(0x10f2af93u, _esp0);
  ESP += 12; return;
L_10f2afeb:;
  /* 10f2afeb mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_10f2afee:;
  /* 10f2afee test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f2aff0 je 0x10f2afe1 */
  if (C.zf) goto L_10f2afe1;
  /* 10f2aff2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2aff4 mov ecx, esi */
  ECX = (ESI);
  /* 10f2aff6 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x10f2aff9u);
  /* 10f2aff9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2affc je 0x10f2afe1 */
  if (C.zf) goto L_10f2afe1;
  /* 10f2affe mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10f2b001 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
  /* 10f2b004 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b006 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b008 jl 0x10f2b00c */
  if ((C.sf!=C.of)) goto L_10f2b00c;
  /* 10f2b00a mov edi, ebx */
  EDI = (EBX);
L_10f2b00c:;
  /* 10f2b00c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f2b00e jle 0x10f2afee */
  if ((C.zf||C.sf!=C.of)) goto L_10f2afee;
  /* 10f2b010 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b011 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b012 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b015 call 0x10f278a0 */
  push32(0x10f2b01au); f_10f278a0();
  /* 10f2b01a add dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2b01d add dword ptr [esi + 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x28))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI + 0x28), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2b020 add dword ptr [ebp - 4], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2b023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b026 sub ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b028 jmp 0x10f2afee */
  goto L_10f2afee;
}

/* FUN_1000b02a @ 0x10f2b02a (23 bytes, 10 insns) */
void f_10f2b02a(void) {
  FTRACE(0x10f2b02au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b02a mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 10f2b02d cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b030 jb 0x10f2b03d */
  if (C.cf) goto L_10f2b03d;
  /* 10f2b032 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f2b035 cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b038 ja 0x10f2b03d */
  if ((!C.cf&&!C.zf)) goto L_10f2b03d;
  /* 10f2b03a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b03c ret  */
  ESPCHK(0x10f2b02au, _esp0);
  ESP += 4; return;
L_10f2b03d:;
  /* 10f2b03d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b040 ret  */
  ESPCHK(0x10f2b02au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b041 @ 0x10f2b041 (30 bytes, 14 insns) */
void f_10f2b041(void) {
  FTRACE(0x10f2b041u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b041 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b045 jne 0x10f2b05c */
  if (!C.zf) goto L_10f2b05c;
  /* 10f2b047 cmp dword ptr [ecx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b04b jne 0x10f2b05c */
  if (!C.zf) goto L_10f2b05c;
  /* 10f2b04d mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2b04f call dword ptr [eax + 0x28] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x28))), 0x10f2b052u);
  /* 10f2b052 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2b053 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2b055 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b057 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b05a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2b05b ret  */
  ESPCHK(0x10f2b041u, _esp0);
  ESP += 4; return;
L_10f2b05c:;
  /* 10f2b05c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b05e ret  */
  ESPCHK(0x10f2b041u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b05f @ 0x10f2b05f (45 bytes, 20 insns) */
void f_10f2b05f(void) {
  FTRACE(0x10f2b05fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b05f push esi */
  push32((uint32_t)(ESI));
  /* 10f2b060 mov esi, ecx */
  ESI = (ECX);
  /* 10f2b062 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10f2b067 call 0x10f2b17b */
  push32(0x10f2b06cu); f_10f2b17b();
  /* 10f2b06c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b06e pop ecx */
  ECX = (pop32());
  /* 10f2b06f jne 0x10f2b076 */
  if (!C.zf) goto L_10f2b076;
  /* 10f2b071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b074 pop esi */
  ESI = (pop32());
  /* 10f2b075 ret  */
  ESPCHK(0x10f2b05fu, _esp0);
  ESP += 4; return;
L_10f2b076:;
  /* 10f2b076 lea ecx, [eax + 0x200] */
  ECX = ((uint32_t)(EAX + 0x200));
  /* 10f2b07c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b07e push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b07f push eax */
  push32((uint32_t)(EAX));
  /* 10f2b080 mov ecx, esi */
  ECX = (ESI);
  /* 10f2b082 call 0x10f2b08c */
  push32(0x10f2b087u); f_10f2b08c();
  /* 10f2b087 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b089 pop eax */
  EAX = (pop32());
  /* 10f2b08a pop esi */
  ESI = (pop32());
  /* 10f2b08b ret  */
  ESPCHK(0x10f2b05fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b08c @ 0x10f2b08c (48 bytes, 18 insns) */
void f_10f2b08c(void) {
  FTRACE(0x10f2b08cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b08c push esi */
  push32((uint32_t)(ESI));
  /* 10f2b08d mov esi, ecx */
  ESI = (ECX);
  /* 10f2b08f cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b093 je 0x10f2b0a3 */
  if (C.zf) goto L_10f2b0a3;
  /* 10f2b095 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f2b098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b09a je 0x10f2b0a3 */
  if (C.zf) goto L_10f2b0a3;
  /* 10f2b09c push eax */
  push32((uint32_t)(EAX));
  /* 10f2b09d call 0x10f23ae0 */
  push32(0x10f2b0a2u); f_10f23ae0();
  /* 10f2b0a2 pop ecx */
  ECX = (pop32());
L_10f2b0a3:;
  /* 10f2b0a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2b0a7 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10f2b0aa mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f2b0ae mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f2b0b1 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f2b0b5 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 10f2b0b8 pop esi */
  ESI = (pop32());
  /* 10f2b0b9 ret 0xc */
  ESPCHK(0x10f2b08cu, _esp0);
  ESP += 16; return;
}

/* FUN_1000b0d4 @ 0x10f2b0d4 (92 bytes, 40 insns) */
void f_10f2b0d4(void) {
  FTRACE(0x10f2b0d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b0d4 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b0d5 mov esi, ecx */
  ESI = (ECX);
  /* 10f2b0d7 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10f2b0da cmp eax, dword ptr [esi + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b0dd jae 0x10f2b0ea */
  if (!C.cf) goto L_10f2b0ea;
  /* 10f2b0df push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f2b0e3 call 0x10f2adba */
  push32(0x10f2b0e8u); f_10f2adba();
  /* 10f2b0e8 jmp 0x10f2b12c */
  goto L_10f2b12c;
L_10f2b0ea:;
  /* 10f2b0ea mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2b0ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b0ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b0f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2b0f2 mov ecx, esi */
  ECX = (ESI);
  /* 10f2b0f4 call dword ptr [eax + 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0xc))), 0x10f2b0f7u);
  /* 10f2b0f7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b0fa jne 0x10f2b100 */
  if (!C.zf) goto L_10f2b100;
  /* 10f2b0fc or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b0fe jmp 0x10f2b12c */
  goto L_10f2b12c;
L_10f2b100:;
  /* 10f2b100 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b104 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b105 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f2b109 jne 0x10f2b129 */
  if (!C.zf) goto L_10f2b129;
  /* 10f2b10b mov eax, dword ptr [esi + 0x2c] */
  EAX = (r32((uint32_t)(ESI + 0x2c)));
  /* 10f2b10e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b110 je 0x10f2b129 */
  if (C.zf) goto L_10f2b129;
  /* 10f2b112 mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 10f2b115 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b117 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2b118 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b119 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b11a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f2b11b push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b11c call 0x10f274c0 */
  push32(0x10f2b121u); f_10f274c0();
  /* 10f2b121 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10f2b124 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b127 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_10f2b129:;
  /* 10f2b129 mov eax, ebx */
  EAX = (EBX);
  /* 10f2b12b pop ebx */
  EBX = (pop32());
L_10f2b12c:;
  /* 10f2b12c pop esi */
  ESI = (pop32());
  /* 10f2b12d ret 4 */
  ESPCHK(0x10f2b0d4u, _esp0);
  ESP += 8; return;
}

/* RtlUnwind @ 0x10f2b130 (6 bytes, 1 insns) */
void f_10f2b130(void) {
  FTRACE(0x10f2b130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b130 jmp dword ptr [0x10f2d054] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10f2d054)))); return;
}

/* FUN_1000b136 @ 0x10f2b136 (41 bytes, 17 insns) */
void f_10f2b136(void) {
  FTRACE(0x10f2b136u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b136 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b137 mov esi, ecx */
  ESI = (ECX);
  /* 10f2b139 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f2b13b mov dword ptr [esi], 0x10f2d924 */
  w32((uint32_t)(ESI), (0x10f2d924u));
  /* 10f2b141 call 0x10f26892 */
  push32(0x10f2b146u); f_10f26892();
  /* 10f2b146 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2b149 pop ecx */
  ECX = (pop32());
  /* 10f2b14a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2b14c je 0x10f2b155 */
  if (C.zf) goto L_10f2b155;
  /* 10f2b14e push esi */
  push32((uint32_t)(ESI));
  /* 10f2b14f call 0x10f23e12 */
  push32(0x10f2b154u); f_10f23e12();
  /* 10f2b154 pop ecx */
  ECX = (pop32());
L_10f2b155:;
  /* 10f2b155 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f2b157 call 0x10f268f3 */
  push32(0x10f2b15cu); f_10f268f3();
  /* 10f2b15c pop ecx */
  ECX = (pop32());
  /* 10f2b15d pop esi */
  ESI = (pop32());
  /* 10f2b15e ret  */
  ESPCHK(0x10f2b136u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b15f @ 0x10f2b15f (28 bytes, 11 insns) */
void f_10f2b15f(void) {
  FTRACE(0x10f2b15fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b15f push esi */
  push32((uint32_t)(ESI));
  /* 10f2b160 mov esi, ecx */
  ESI = (ECX);
  /* 10f2b162 call 0x10f2b136 */
  push32(0x10f2b167u); f_10f2b136();
  /* 10f2b167 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 10f2b16c je 0x10f2b175 */
  if (C.zf) goto L_10f2b175;
  /* 10f2b16e push esi */
  push32((uint32_t)(ESI));
  /* 10f2b16f call 0x10f23ae0 */
  push32(0x10f2b174u); f_10f23ae0();
  /* 10f2b174 pop ecx */
  ECX = (pop32());
L_10f2b175:;
  /* 10f2b175 mov eax, esi */
  EAX = (ESI);
  /* 10f2b177 pop esi */
  ESI = (pop32());
  /* 10f2b178 ret 4 */
  ESPCHK(0x10f2b15fu, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x10f2b17b (14 bytes, 6 insns) */
void f_10f2b17b(void) {
  FTRACE(0x10f2b17bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b17b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b17d push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f2b181 call 0x10f248e7 */
  push32(0x10f2b186u); f_10f248e7();
  /* 10f2b186 pop ecx */
  ECX = (pop32());
  /* 10f2b187 pop ecx */
  ECX = (pop32());
  /* 10f2b188 ret  */
  ESPCHK(0x10f2b17bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b189 @ 0x10f2b189 (45 bytes, 17 insns) */
void f_10f2b189(void) {
  FTRACE(0x10f2b189u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b189 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b18a mov ebp, esp */
  EBP = (ESP);
  /* 10f2b18c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b18d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b18e push esi */
  push32((uint32_t)(ESI));
  /* 10f2b18f push edi */
  push32((uint32_t)(EDI));
  /* 10f2b190 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b193 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b196 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2b199 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 10f2b1a0 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f2b1a2 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10f2b1a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b1ab mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b1ae mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 10f2b1b1 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2b1b4 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000b1bd @ 0x10f2b1bd (7 bytes, 4 insns) */
void f_10f2b1bd(void) {
  FTRACE(0x10f2b1bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b1bd pop eax */
  EAX = (pop32());
  /* 10f2b1be pop ecx */
  ECX = (pop32());
  /* 10f2b1bf xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 10f2b1c2 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000b1c4 @ 0x10f2b1c4 (7 bytes, 4 insns) */
void f_10f2b1c4(void) {
  FTRACE(0x10f2b1c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b1c4 pop eax */
  EAX = (pop32());
  /* 10f2b1c5 pop ecx */
  ECX = (pop32());
  /* 10f2b1c6 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 10f2b1c9 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000b1cb @ 0x10f2b1cb (79 bytes, 29 insns) */
void f_10f2b1cb(void) {
  FTRACE(0x10f2b1cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b1cb push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b1cc mov ebp, esp */
  EBP = (ESP);
  /* 10f2b1ce push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b1cf push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b1d1 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b1d2 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b1d3 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2b1d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f2b1dc mov dword ptr [ebp - 4], 0x10f2b1f3 */
  w32((uint32_t)(EBP + -0x4), (0x10f2b1f3u));
  /* 10f2b1e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b1e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b1e8 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10f2b1eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b1ee call 0x10f2b130 */
  push32(0x10f2b1f3u); f_10f2b130();
  /* 10f2b1f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b1f6 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2b1f9 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 10f2b1fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b1fe mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f2b201 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2b207 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2b20a mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 10f2b20c mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 10f2b213 pop edi */
  EDI = (pop32());
  /* 10f2b214 pop esi */
  ESI = (pop32());
  /* 10f2b215 pop ebx */
  EBX = (pop32());
  /* 10f2b216 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b217 ret 8 */
  ESPCHK(0x10f2b1cbu, _esp0);
  ESP += 12; return;
}

/* FUN_1000b21a @ 0x10f2b21a (54 bytes, 27 insns) */
void f_10f2b21a(void) {
  FTRACE(0x10f2b21au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b21a push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b21b mov ebp, esp */
  EBP = (ESP);
  /* 10f2b21d sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b220 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b221 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b222 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b223 cld  */
  C.df=0;
  /* 10f2b224 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2b227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b229 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b22a push eax */
  push32((uint32_t)(EAX));
  /* 10f2b22b push eax */
  push32((uint32_t)(EAX));
  /* 10f2b22c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10f2b22f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b232 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b235 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b238 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b23b call 0x10f2b6d6 */
  push32(0x10f2b240u); f_10f2b6d6();
  /* 10f2b240 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b243 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 10f2b246 pop edi */
  EDI = (pop32());
  /* 10f2b247 pop esi */
  ESI = (pop32());
  /* 10f2b248 pop ebx */
  EBX = (pop32());
  /* 10f2b249 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f2b24c mov esp, ebp */
  ESP = (EBP);
  /* 10f2b24e pop ebp */
  EBP = (pop32());
  /* 10f2b24f ret  */
  ESPCHK(0x10f2b21au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x10f2b250 (84 bytes, 26 insns) */
void f_10f2b250(void) {
  FTRACE(0x10f2b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b250 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b251 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b253 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b256 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b259 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 10f2b25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b260 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f2b263 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f2b266 mov dword ptr [ebp - 0x10], 0x10f2b2a4 */
  w32((uint32_t)(EBP + -0x10), (0x10f2b2a4u));
  /* 10f2b26d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2b26e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f2b271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2b274 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2b27a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f2b27d lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10f2b283 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10f2b289 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b28c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b28d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b290 call 0x10f2bef0 */
  push32(0x10f2b295u); f_10f2bef0();
  /* 10f2b295 mov ecx, eax */
  ECX = (EAX);
  /* 10f2b297 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f2b29a mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10f2b2a0 mov eax, ecx */
  EAX = (ECX);
  /* 10f2b2a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b2a3 ret  */
  ESPCHK(0x10f2b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2a4 @ 0x10f2b2a4 (37 bytes, 16 insns) */
void f_10f2b2a4(void) {
  FTRACE(0x10f2b2a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b2a4 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b2a5 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b2a7 cld  */
  C.df=0;
  /* 10f2b2a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b2ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b2ad push eax */
  push32((uint32_t)(EAX));
  /* 10f2b2ae push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10f2b2b1 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 10f2b2b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b2b6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b2b9 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10f2b2bc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b2bf call 0x10f2b6d6 */
  push32(0x10f2b2c4u); f_10f2b6d6();
  /* 10f2b2c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b2c7 pop ebp */
  EBP = (pop32());
  /* 10f2b2c8 ret  */
  ESPCHK(0x10f2b2a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c9 @ 0x10f2b2c9 (182 bytes, 57 insns) */
void f_10f2b2c9(void) {
  FTRACE(0x10f2b2c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b2c9 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b2ca mov ebp, esp */
  EBP = (ESP);
  /* 10f2b2cc sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b2cf push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b2d0 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b2d1 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b2d2 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 10f2b2d6 mov dword ptr [ebp - 0x24], 0x10f2b37f */
  w32((uint32_t)(EBP + -0x24), (0x10f2b37fu));
  /* 10f2b2dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f2b2e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f2b2e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b2e6 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f2b2e9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f2b2ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f2b2ef mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f2b2f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f2b2f5 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10f2b2f9 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 10f2b2fd and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f2b301 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2b305 mov dword ptr [ebp - 0x10], 0x10f2b351 */
  w32((uint32_t)(EBP + -0x10), (0x10f2b351u));
  /* 10f2b30c mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 10f2b30f mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 10f2b312 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2b318 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f2b31b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10f2b321 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10f2b327 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10f2b32e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b331 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10f2b334 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2b337 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f2b33a lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10f2b33d push eax */
  push32((uint32_t)(EAX));
  /* 10f2b33e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b341 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10f2b343 call 0x10f24a94 */
  push32(0x10f2b348u); f_10f24a94();
  /* 10f2b348 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x10f2b34bu);
  /* 10f2b34b pop ecx */
  ECX = (pop32());
  /* 10f2b34c pop ecx */
  ECX = (pop32());
  /* 10f2b34d and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 10f2b351 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b355 je 0x10f2b36e */
  if (C.zf) goto L_10f2b36e;
  /* 10f2b357 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 10f2b35e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f2b360 mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f2b363 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 10f2b365 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 10f2b36c jmp 0x10f2b377 */
  goto L_10f2b377;
L_10f2b36e:;
  /* 10f2b36e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f2b371 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_10f2b377:;
  /* 10f2b377 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f2b37a pop edi */
  EDI = (pop32());
  /* 10f2b37b pop esi */
  ESI = (pop32());
  /* 10f2b37c pop ebx */
  EBX = (pop32());
  /* 10f2b37d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b37e ret  */
  ESPCHK(0x10f2b2c9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b37f @ 0x10f2b37f (114 bytes, 47 insns) */
void f_10f2b37f(void) {
  FTRACE(0x10f2b37fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b37f push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b380 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b382 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b383 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b384 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b385 cld  */
  C.df=0;
  /* 10f2b386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b389 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2b38c and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b38f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b391 je 0x10f2b3a2 */
  if (C.zf) goto L_10f2b3a2;
  /* 10f2b393 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b396 mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 10f2b39d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b39f pop eax */
  EAX = (pop32());
  /* 10f2b3a0 jmp 0x10f2b3ef */
  goto L_10f2b3ef;
L_10f2b3a2:;
  /* 10f2b3a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b3a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b3a7 push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 10f2b3aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b3ad push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10f2b3b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b3b3 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 10f2b3b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b3b8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b3bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b3be push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10f2b3c1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b3c4 call 0x10f2b6d6 */
  push32(0x10f2b3c9u); f_10f2b6d6();
  /* 10f2b3c9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b3cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b3cf cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b3d3 jne 0x10f2b3e0 */
  if (!C.zf) goto L_10f2b3e0;
  /* 10f2b3d5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b3d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b3db call 0x10f2b1cb */
  push32(0x10f2b3e0u); f_10f2b1cb();
L_10f2b3e0:;
  /* 10f2b3e0 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b3e3 mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 10f2b3e6 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 10f2b3e9 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 10f2b3ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b3ee pop eax */
  EAX = (pop32());
L_10f2b3ef:;
  /* 10f2b3ef pop edi */
  EDI = (pop32());
  /* 10f2b3f0 pop esi */
  ESI = (pop32());
  /* 10f2b3f1 pop ebx */
  EBX = (pop32());
  /* 10f2b3f2 pop ebp */
  EBP = (pop32());
  /* 10f2b3f3 ret  */
  ESPCHK(0x10f2b37fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f4 @ 0x10f2b3f4 (123 bytes, 51 insns) */
void f_10f2b3f4(void) {
  FTRACE(0x10f2b3f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b3f4 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b3f5 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b3f8 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b3f9 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b3fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b3fe push edi */
  push32((uint32_t)(EDI));
  /* 10f2b3ff mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b402 mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 10f2b405 mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 10f2b408 mov eax, esi */
  EAX = (ESI);
  /* 10f2b40a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 10f2b40d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2b410 jl 0x10f2b44b */
  if ((C.sf!=C.of)) goto L_10f2b44b;
L_10f2b412:;
  /* 10f2b412 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b415 jne 0x10f2b41c */
  if (!C.zf) goto L_10f2b41c;
  /* 10f2b417 call 0x10f2bf9d */
  push32(0x10f2b41cu); f_10f2bf9d();
L_10f2b41c:;
  /* 10f2b41c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2b41f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f2b420 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10f2b423 cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b427 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 10f2b42a jge 0x10f2b431 */
  if ((C.sf==C.of)) goto L_10f2b431;
  /* 10f2b42c cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b42f jle 0x10f2b436 */
  if ((C.zf||C.sf!=C.of)) goto L_10f2b436;
L_10f2b431:;
  /* 10f2b431 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b434 jne 0x10f2b442 */
  if (!C.zf) goto L_10f2b442;
L_10f2b436:;
  /* 10f2b436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b439 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 10f2b43c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2b43f mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_10f2b442:;
  /* 10f2b442 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b446 jge 0x10f2b412 */
  if ((C.sf==C.of)) goto L_10f2b412;
  /* 10f2b448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f2b44b:;
  /* 10f2b44b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f2b44e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2b44f mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 10f2b451 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f2b454 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f2b456 cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b459 ja 0x10f2b45f */
  if ((!C.cf&&!C.zf)) goto L_10f2b45f;
  /* 10f2b45b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b45d jbe 0x10f2b464 */
  if ((C.cf||C.zf)) goto L_10f2b464;
L_10f2b45f:;
  /* 10f2b45f call 0x10f2bf9d */
  push32(0x10f2b464u); f_10f2bf9d();
L_10f2b464:;
  /* 10f2b464 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10f2b467 pop edi */
  EDI = (pop32());
  /* 10f2b468 pop esi */
  ESI = (pop32());
  /* 10f2b469 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 10f2b46c pop ebx */
  EBX = (pop32());
  /* 10f2b46d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b46e ret  */
  ESPCHK(0x10f2b3f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x10f2b470 (31 bytes, 10 insns) */
void f_10f2b470(void) {
  FTRACE(0x10f2b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b470 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2b472 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b473 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2b479 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b47a mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f2b47e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2b485 mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 10f2b489 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10f2b48d push eax */
  push32((uint32_t)(EAX));
  /* 10f2b48e ret  */
  ESPCHK(0x10f2b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b48f @ 0x10f2b48f (101 bytes, 34 insns) */
void f_10f2b48f(void) {
  FTRACE(0x10f2b48fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b48f push esi */
  push32((uint32_t)(ESI));
  /* 10f2b490 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2b494 cmp esi, dword ptr [0x10f49100] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b49a jae 0x10f2b4dc */
  if (!C.cf) goto L_10f2b4dc;
  /* 10f2b49c mov ecx, esi */
  ECX = (ESI);
  /* 10f2b49e mov eax, esi */
  EAX = (ESI);
  /* 10f2b4a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f2b4a3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b4a6 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f2b4ad lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f2b4b0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f2b4b5 je 0x10f2b4dc */
  if (C.zf) goto L_10f2b4dc;
  /* 10f2b4b7 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b4b8 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b4b9 call 0x10f29b30 */
  push32(0x10f2b4beu); f_10f29b30();
  /* 10f2b4be push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f2b4c2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f2b4c6 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b4c7 call 0x10f2b4f4 */
  push32(0x10f2b4ccu); f_10f2b4f4();
  /* 10f2b4cc push esi */
  push32((uint32_t)(ESI));
  /* 10f2b4cd mov edi, eax */
  EDI = (EAX);
  /* 10f2b4cf call 0x10f29b8f */
  push32(0x10f2b4d4u); f_10f29b8f();
  /* 10f2b4d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b4d7 mov eax, edi */
  EAX = (EDI);
  /* 10f2b4d9 pop edi */
  EDI = (pop32());
  /* 10f2b4da pop esi */
  ESI = (pop32());
  /* 10f2b4db ret  */
  ESPCHK(0x10f2b48fu, _esp0);
  ESP += 4; return;
L_10f2b4dc:;
  /* 10f2b4dc call 0x10f29a5d */
  push32(0x10f2b4e1u); f_10f29a5d();
  /* 10f2b4e1 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f2b4e7 call 0x10f29a66 */
  push32(0x10f2b4ecu); f_10f29a66();
  /* 10f2b4ec and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f2b4ef or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b4f2 pop esi */
  ESI = (pop32());
  /* 10f2b4f3 ret  */
  ESPCHK(0x10f2b48fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f4 @ 0x10f2b4f4 (473 bytes, 170 insns) */
void f_10f2b4f4(void) {
  FTRACE(0x10f2b4f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b4f4 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b4f5 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b4f7 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b4fa and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f2b4fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b502 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b503 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b506 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b507 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b508 mov edx, ebx */
  EDX = (EBX);
  /* 10f2b50a je 0x10f2b6c6 */
  if (C.zf) goto L_10f2b6c6;
  /* 10f2b510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b513 mov ecx, eax */
  ECX = (EAX);
  /* 10f2b515 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b518 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f2b51b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10f2b51e mov eax, dword ptr [ecx*4 + 0x10f49000] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f2b525 lea edi, [ecx*4 + 0x10f49000] */
  EDI = ((uint32_t)(ECX*4 + 0x10f49000));
  /* 10f2b52c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10f2b52f add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b531 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f2b534 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 10f2b537 jne 0x10f2b6c6 */
  if (!C.zf) goto L_10f2b6c6;
  /* 10f2b53d test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 10f2b540 je 0x10f2b55f */
  if (C.zf) goto L_10f2b55f;
  /* 10f2b542 mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 10f2b545 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b547 je 0x10f2b55f */
  if (C.zf) goto L_10f2b55f;
  /* 10f2b549 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 10f2b54c mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 10f2b54e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2b550 lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 10f2b553 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f2b55a mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_10f2b55f:;
  /* 10f2b55f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f2b562 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b564 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b565 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2b567 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b56a push edx */
  push32((uint32_t)(EDX));
  /* 10f2b56b push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10f2b56e call dword ptr [0x10f2d014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d014))), 0x10f2b574u);
  /* 10f2b574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b576 jne 0x10f2b5b1 */
  if (!C.zf) goto L_10f2b5b1;
  /* 10f2b578 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f2b57eu);
  /* 10f2b57e push 5 */
  push32((uint32_t)(0x5u));
  /* 10f2b580 pop esi */
  ESI = (pop32());
  /* 10f2b581 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b583 jne 0x10f2b599 */
  if (!C.zf) goto L_10f2b599;
  /* 10f2b585 call 0x10f29a5d */
  push32(0x10f2b58au); f_10f29a5d();
  /* 10f2b58a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f2b590 call 0x10f29a66 */
  push32(0x10f2b595u); f_10f29a66();
  /* 10f2b595 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10f2b597 jmp 0x10f2b5a9 */
  goto L_10f2b5a9;
L_10f2b599:;
  /* 10f2b599 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b59c je 0x10f2b6c6 */
  if (C.zf) goto L_10f2b6c6;
  /* 10f2b5a2 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b5a3 call 0x10f299ea */
  push32(0x10f2b5a8u); f_10f299ea();
  /* 10f2b5a8 pop ecx */
  ECX = (pop32());
L_10f2b5a9:;
  /* 10f2b5a9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2b5ac jmp 0x10f2b6c8 */
  goto L_10f2b6c8;
L_10f2b5b1:;
  /* 10f2b5b1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2b5b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2b5b6 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2b5b9 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 10f2b5bd mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 10f2b5c1 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 10f2b5c3 je 0x10f2b6c1 */
  if (C.zf) goto L_10f2b6c1;
  /* 10f2b5c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f2b5cb je 0x10f2b5d6 */
  if (C.zf) goto L_10f2b5d6;
  /* 10f2b5cd cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b5d0 jne 0x10f2b5d6 */
  if (!C.zf) goto L_10f2b5d6;
  /* 10f2b5d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10f2b5d4 jmp 0x10f2b5d8 */
  goto L_10f2b5d8;
L_10f2b5d6:;
  /* 10f2b5d6 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_10f2b5d8:;
  /* 10f2b5d8 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f2b5da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b5dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2b5e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10f2b5e3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b5e5 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b5e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f2b5ea jae 0x10f2b6bb */
  if (!C.cf) goto L_10f2b6bb;
L_10f2b5f0:;
  /* 10f2b5f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2b5f3 mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 10f2b5f5 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b5f7 je 0x10f2b6ab */
  if (C.zf) goto L_10f2b6ab;
  /* 10f2b5fd cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b5ff je 0x10f2b60c */
  if (C.zf) goto L_10f2b60c;
  /* 10f2b601 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 10f2b603 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f2b604 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 10f2b607 jmp 0x10f2b69d */
  goto L_10f2b69d;
L_10f2b60c:;
  /* 10f2b60c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f2b60d cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b610 jae 0x10f2b62a */
  if (!C.cf) goto L_10f2b62a;
  /* 10f2b612 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2b615 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2b616 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b619 jne 0x10f2b621 */
  if (!C.zf) goto L_10f2b621;
  /* 10f2b61b add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2b61f jmp 0x10f2b67f */
  goto L_10f2b67f;
L_10f2b621:;
  /* 10f2b621 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 10f2b624 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f2b625 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10f2b628 jmp 0x10f2b69d */
  goto L_10f2b69d;
L_10f2b62a:;
  /* 10f2b62a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f2b62d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b62f push eax */
  push32((uint32_t)(EAX));
  /* 10f2b630 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 10f2b633 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 10f2b636 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b638 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b639 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2b63b push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10f2b63e call dword ptr [0x10f2d014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d014))), 0x10f2b644u);
  /* 10f2b644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b646 jne 0x10f2b652 */
  if (!C.zf) goto L_10f2b652;
  /* 10f2b648 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f2b64eu);
  /* 10f2b64e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b650 jne 0x10f2b699 */
  if (!C.zf) goto L_10f2b699;
L_10f2b652:;
  /* 10f2b652 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b656 je 0x10f2b699 */
  if (C.zf) goto L_10f2b699;
  /* 10f2b658 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2b65a test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 10f2b65f je 0x10f2b674 */
  if (C.zf) goto L_10f2b674;
  /* 10f2b661 mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 10f2b664 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b666 je 0x10f2b67f */
  if (C.zf) goto L_10f2b67f;
  /* 10f2b668 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 10f2b66b mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 10f2b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f2b66e mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 10f2b672 jmp 0x10f2b69d */
  goto L_10f2b69d;
L_10f2b674:;
  /* 10f2b674 cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b677 jne 0x10f2b684 */
  if (!C.zf) goto L_10f2b684;
  /* 10f2b679 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b67d jne 0x10f2b684 */
  if (!C.zf) goto L_10f2b684;
L_10f2b67f:;
  /* 10f2b67f mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 10f2b682 jmp 0x10f2b69c */
  goto L_10f2b69c;
L_10f2b684:;
  /* 10f2b684 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b686 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2b688 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b68b call 0x10f27d77 */
  push32(0x10f2b690u); f_10f27d77();
  /* 10f2b690 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b693 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b697 je 0x10f2b69d */
  if (C.zf) goto L_10f2b69d;
L_10f2b699:;
  /* 10f2b699 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_10f2b69c:;
  /* 10f2b69c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10f2b69d:;
  /* 10f2b69d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2b6a0 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b6a3 jb 0x10f2b5f0 */
  if (C.cf) goto L_10f2b5f0;
  /* 10f2b6a9 jmp 0x10f2b6bb */
  goto L_10f2b6bb;
L_10f2b6ab:;
  /* 10f2b6ab mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2b6ad lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 10f2b6b1 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2b6b3 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 10f2b6b5 jne 0x10f2b6bb */
  if (!C.zf) goto L_10f2b6bb;
  /* 10f2b6b7 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10f2b6b9 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_10f2b6bb:;
  /* 10f2b6bb sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b6be mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_10f2b6c1:;
  /* 10f2b6c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2b6c4 jmp 0x10f2b6c8 */
  goto L_10f2b6c8;
L_10f2b6c6:;
  /* 10f2b6c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2b6c8:;
  /* 10f2b6c8 pop edi */
  EDI = (pop32());
  /* 10f2b6c9 pop esi */
  ESI = (pop32());
  /* 10f2b6ca pop ebx */
  EBX = (pop32());
  /* 10f2b6cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b6cc ret  */
  ESPCHK(0x10f2b4f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d6 @ 0x10f2b6d6 (155 bytes, 61 insns) */
void f_10f2b6d6(void) {
  FTRACE(0x10f2b6d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b6d6 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b6d7 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b6d9 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b6da mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 10f2b6dd push edi */
  push32((uint32_t)(EDI));
  /* 10f2b6de mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 10f2b6e3 cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b6e5 je 0x10f2b6ec */
  if (C.zf) goto L_10f2b6ec;
  /* 10f2b6e7 call 0x10f2bf9d */
  push32(0x10f2b6ecu); f_10f2bf9d();
L_10f2b6ec:;
  /* 10f2b6ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b6ef test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 10f2b6f3 je 0x10f2b714 */
  if (C.zf) goto L_10f2b714;
  /* 10f2b6f5 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b6f9 je 0x10f2b76a */
  if (C.zf) goto L_10f2b76a;
  /* 10f2b6fb cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b6ff jne 0x10f2b76a */
  if (!C.zf) goto L_10f2b76a;
  /* 10f2b701 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2b703 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b704 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b707 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b70a call 0x10f2ba2b */
  push32(0x10f2b70fu); f_10f2ba2b();
  /* 10f2b70f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b712 jmp 0x10f2b76a */
  goto L_10f2b76a;
L_10f2b714:;
  /* 10f2b714 cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b718 je 0x10f2b76a */
  if (C.zf) goto L_10f2b76a;
  /* 10f2b71a cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b720 jne 0x10f2b74e */
  if (!C.zf) goto L_10f2b74e;
  /* 10f2b722 cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b725 jbe 0x10f2b74e */
  if ((C.cf||C.zf)) goto L_10f2b74e;
  /* 10f2b727 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f2b72a mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f2b72d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2b72f je 0x10f2b74e */
  if (C.zf) goto L_10f2b74e;
  /* 10f2b731 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 10f2b735 push edx */
  push32((uint32_t)(EDX));
  /* 10f2b736 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b739 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10f2b73c push esi */
  push32((uint32_t)(ESI));
  /* 10f2b73d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b740 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b743 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b746 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b747 call ecx */
  call_ind((uint32_t)(ECX), 0x10f2b749u);
  /* 10f2b749 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b74c jmp 0x10f2b76d */
  goto L_10f2b76d;
L_10f2b74e:;
  /* 10f2b74e push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b751 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10f2b754 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 10f2b757 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b758 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b75b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b75e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b761 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b762 call 0x10f2b771 */
  push32(0x10f2b767u); f_10f2b771();
  /* 10f2b767 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2b76a:;
  /* 10f2b76a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b76c pop eax */
  EAX = (pop32());
L_10f2b76d:;
  /* 10f2b76d pop edi */
  EDI = (pop32());
  /* 10f2b76e pop esi */
  ESI = (pop32());
  /* 10f2b76f pop ebp */
  EBP = (pop32());
  /* 10f2b770 ret  */
  ESPCHK(0x10f2b6d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b771 @ 0x10f2b771 (435 bytes, 149 insns) */
void f_10f2b771(void) {
  FTRACE(0x10f2b771u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b771 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b772 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b774 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2b777 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2b77a and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 10f2b77e mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f2b781 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b784 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f2b787 jl 0x10f2b791 */
  if ((C.sf!=C.of)) goto L_10f2b791;
  /* 10f2b789 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f2b78c cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b78f jl 0x10f2b796 */
  if ((C.sf!=C.of)) goto L_10f2b796;
L_10f2b791:;
  /* 10f2b791 call 0x10f2bf9d */
  push32(0x10f2b796u); f_10f2bf9d();
L_10f2b796:;
  /* 10f2b796 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b797 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b798 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2b79b mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 10f2b7a0 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b7a1 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 10f2b7a6 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b7a8 jne 0x10f2b8f9 */
  if (!C.zf) goto L_10f2b8f9;
  /* 10f2b7ae cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b7b2 jne 0x10f2b816 */
  if (!C.zf) goto L_10f2b816;
  /* 10f2b7b4 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b7b7 jne 0x10f2b816 */
  if (!C.zf) goto L_10f2b816;
  /* 10f2b7b9 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b7bd jne 0x10f2b816 */
  if (!C.zf) goto L_10f2b816;
  /* 10f2b7bf call 0x10f24a94 */
  push32(0x10f2b7c4u); f_10f24a94();
  /* 10f2b7c4 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b7c8 je 0x10f2b8f4 */
  if (C.zf) goto L_10f2b8f4;
  /* 10f2b7ce call 0x10f24a94 */
  push32(0x10f2b7d3u); f_10f24a94();
  /* 10f2b7d3 mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 10f2b7d6 call 0x10f24a94 */
  push32(0x10f2b7dbu); f_10f24a94();
  /* 10f2b7db mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 10f2b7de push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b7e0 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b7e1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10f2b7e4 mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 10f2b7e8 call 0x10f2c057 */
  push32(0x10f2b7edu); f_10f2c057();
  /* 10f2b7ed pop ecx */
  ECX = (pop32());
  /* 10f2b7ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b7f0 pop ecx */
  ECX = (pop32());
  /* 10f2b7f1 jne 0x10f2b7f8 */
  if (!C.zf) goto L_10f2b7f8;
  /* 10f2b7f3 call 0x10f2bf9d */
  push32(0x10f2b7f8u); f_10f2bf9d();
L_10f2b7f8:;
  /* 10f2b7f8 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b7fa jne 0x10f2b8f9 */
  if (!C.zf) goto L_10f2b8f9;
  /* 10f2b800 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b804 jne 0x10f2b816 */
  if (!C.zf) goto L_10f2b816;
  /* 10f2b806 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b809 jne 0x10f2b816 */
  if (!C.zf) goto L_10f2b816;
  /* 10f2b80b cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b80f jne 0x10f2b816 */
  if (!C.zf) goto L_10f2b816;
  /* 10f2b811 call 0x10f2bf9d */
  push32(0x10f2b816u); f_10f2bf9d();
L_10f2b816:;
  /* 10f2b816 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b818 jne 0x10f2b8f9 */
  if (!C.zf) goto L_10f2b8f9;
  /* 10f2b81e cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b822 jne 0x10f2b8f9 */
  if (!C.zf) goto L_10f2b8f9;
  /* 10f2b828 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b82b jne 0x10f2b8f9 */
  if (!C.zf) goto L_10f2b8f9;
  /* 10f2b831 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2b834 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10f2b837 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b838 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10f2b83b push eax */
  push32((uint32_t)(EAX));
  /* 10f2b83c push edi */
  push32((uint32_t)(EDI));
  /* 10f2b83d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b840 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b843 call 0x10f2b3f4 */
  push32(0x10f2b848u); f_10f2b3f4();
  /* 10f2b848 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b84b mov ebx, eax */
  EBX = (EAX);
L_10f2b84d:;
  /* 10f2b84d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2b850 cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b853 jae 0x10f2b8e4 */
  if (!C.cf) goto L_10f2b8e4;
  /* 10f2b859 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b85b jg 0x10f2b8d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2b8d9;
  /* 10f2b85d cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b860 jg 0x10f2b8d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2b8d9;
  /* 10f2b862 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10f2b865 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f2b868 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 10f2b86b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b86d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f2b870 jle 0x10f2b8d6 */
  if ((C.zf||C.sf!=C.of)) goto L_10f2b8d6;
L_10f2b872:;
  /* 10f2b872 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 10f2b875 mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f2b878 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 10f2b87b mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10f2b87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b87f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f2b882 jle 0x10f2b8a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10f2b8a3;
L_10f2b884:;
  /* 10f2b884 push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 10f2b887 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10f2b889 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b88c call 0x10f2b9ce */
  push32(0x10f2b891u); f_10f2b9ce();
  /* 10f2b891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b896 jne 0x10f2b8b2 */
  if (!C.zf) goto L_10f2b8b2;
  /* 10f2b898 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10f2b89b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b89e cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b8a1 jg 0x10f2b884 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2b884;
L_10f2b8a3:;
  /* 10f2b8a3 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 10f2b8a6 add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2b8aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b8ae jg 0x10f2b872 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2b872;
  /* 10f2b8b0 jmp 0x10f2b8d6 */
  goto L_10f2b8d6;
L_10f2b8b2:;
  /* 10f2b8b2 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 10f2b8b5 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 10f2b8b8 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b8bb push ebx */
  push32((uint32_t)(EBX));
  /* 10f2b8bc push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10f2b8be push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b8c1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b8c4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b8c7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b8ca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b8cd push esi */
  push32((uint32_t)(ESI));
  /* 10f2b8ce call 0x10f2badf */
  push32(0x10f2b8d3u); f_10f2badf();
  /* 10f2b8d3 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2b8d6:;
  /* 10f2b8d6 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_10f2b8d9:;
  /* 10f2b8d9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2b8dc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b8df jmp 0x10f2b84d */
  goto L_10f2b84d;
L_10f2b8e4:;
  /* 10f2b8e4 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b8e8 je 0x10f2b8f4 */
  if (C.zf) goto L_10f2b8f4;
  /* 10f2b8ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b8ec push esi */
  push32((uint32_t)(ESI));
  /* 10f2b8ed call 0x10f2be63 */
  push32(0x10f2b8f2u); f_10f2be63();
  /* 10f2b8f2 pop ecx */
  ECX = (pop32());
  /* 10f2b8f3 pop ecx */
  ECX = (pop32());
L_10f2b8f4:;
  /* 10f2b8f4 pop edi */
  EDI = (pop32());
  /* 10f2b8f5 pop esi */
  ESI = (pop32());
  /* 10f2b8f6 pop ebx */
  EBX = (pop32());
  /* 10f2b8f7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b8f8 ret  */
  ESPCHK(0x10f2b771u, _esp0);
  ESP += 4; return;
L_10f2b8f9:;
  /* 10f2b8f9 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b8fd jne 0x10f2b91f */
  if (!C.zf) goto L_10f2b91f;
  /* 10f2b8ff push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 10f2b902 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b905 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 10f2b908 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b90b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b90e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b911 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b914 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b915 call 0x10f2b924 */
  push32(0x10f2b91au); f_10f2b924();
  /* 10f2b91a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b91d jmp 0x10f2b8f4 */
  goto L_10f2b8f4;
L_10f2b91f:;
  /* 10f2b91f jmp 0x10f2bf3c */
  f_10f2bf3c(); return;
}

/* FUN_1000b924 @ 0x10f2b924 (170 bytes, 68 insns) */
void f_10f2b924(void) {
  FTRACE(0x10f2b924u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b924 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2b925 mov ebp, esp */
  EBP = (ESP);
  /* 10f2b927 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b928 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b929 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b92a push edi */
  push32((uint32_t)(EDI));
  /* 10f2b92b call 0x10f24a94 */
  push32(0x10f2b930u); f_10f24a94();
  /* 10f2b930 cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b934 je 0x10f2b957 */
  if (C.zf) goto L_10f2b957;
  /* 10f2b936 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 10f2b939 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b93c push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b93f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b942 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b948 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b94b call 0x10f2b2c9 */
  push32(0x10f2b950u); f_10f2b2c9();
  /* 10f2b950 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b953 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b955 jne 0x10f2b9ca */
  if (!C.zf) goto L_10f2b9ca;
L_10f2b957:;
  /* 10f2b957 mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f2b95a lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f2b95d push eax */
  push32((uint32_t)(EAX));
  /* 10f2b95e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10f2b961 push eax */
  push32((uint32_t)(EAX));
  /* 10f2b962 push edi */
  push32((uint32_t)(EDI));
  /* 10f2b963 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b966 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b969 call 0x10f2b3f4 */
  push32(0x10f2b96eu); f_10f2b3f4();
  /* 10f2b96e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b971 mov esi, eax */
  ESI = (EAX);
L_10f2b973:;
  /* 10f2b973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2b976 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b979 jae 0x10f2b9ca */
  if (!C.cf) goto L_10f2b9ca;
  /* 10f2b97b cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b97d jl 0x10f2b9c2 */
  if ((C.sf!=C.of)) goto L_10f2b9c2;
  /* 10f2b97f cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b982 jg 0x10f2b9c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2b9c2;
  /* 10f2b984 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10f2b987 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f2b98a shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f2b98d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b98f mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 10f2b992 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2b994 je 0x10f2b99c */
  if (C.zf) goto L_10f2b99c;
  /* 10f2b996 cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b99a jne 0x10f2b9c2 */
  if (!C.zf) goto L_10f2b9c2;
L_10f2b99c:;
  /* 10f2b99c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2b99e add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b9a1 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 10f2b9a4 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2b9a7 push esi */
  push32((uint32_t)(ESI));
  /* 10f2b9a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2b9aa push eax */
  push32((uint32_t)(EAX));
  /* 10f2b9ab push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2b9ae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2b9b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2b9b4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2b9b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2b9ba call 0x10f2badf */
  push32(0x10f2b9bfu); f_10f2badf();
  /* 10f2b9bf add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2b9c2:;
  /* 10f2b9c2 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2b9c5 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b9c8 jmp 0x10f2b973 */
  goto L_10f2b973;
L_10f2b9ca:;
  /* 10f2b9ca pop edi */
  EDI = (pop32());
  /* 10f2b9cb pop esi */
  ESI = (pop32());
  /* 10f2b9cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2b9cd ret  */
  ESPCHK(0x10f2b924u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ce @ 0x10f2b9ce (93 bytes, 42 insns) */
void f_10f2b9ce(void) {
  FTRACE(0x10f2b9ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2b9ce push esi */
  push32((uint32_t)(ESI));
  /* 10f2b9cf push edi */
  push32((uint32_t)(EDI));
  /* 10f2b9d0 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10f2b9d4 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f2b9d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b9d9 je 0x10f2ba25 */
  if (C.zf) goto L_10f2ba25;
  /* 10f2b9db cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2b9df lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 10f2b9e2 je 0x10f2ba25 */
  if (C.zf) goto L_10f2ba25;
  /* 10f2b9e4 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f2b9e8 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2b9eb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2b9ed je 0x10f2b9ff */
  if (C.zf) goto L_10f2b9ff;
  /* 10f2b9ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2b9f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2b9f3 push edx */
  push32((uint32_t)(EDX));
  /* 10f2b9f4 call 0x10f29eb0 */
  push32(0x10f2b9f9u); f_10f29eb0();
  /* 10f2b9f9 pop ecx */
  ECX = (pop32());
  /* 10f2b9fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2b9fc pop ecx */
  ECX = (pop32());
  /* 10f2b9fd jne 0x10f2ba21 */
  if (!C.zf) goto L_10f2ba21;
L_10f2b9ff:;
  /* 10f2b9ff test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 10f2ba02 je 0x10f2ba09 */
  if (C.zf) goto L_10f2ba09;
  /* 10f2ba04 test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 10f2ba07 je 0x10f2ba21 */
  if (C.zf) goto L_10f2ba21;
L_10f2ba09:;
  /* 10f2ba09 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f2ba0d mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10f2ba0f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10f2ba11 je 0x10f2ba18 */
  if (C.zf) goto L_10f2ba18;
  /* 10f2ba13 test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 10f2ba16 je 0x10f2ba21 */
  if (C.zf) goto L_10f2ba21;
L_10f2ba18:;
  /* 10f2ba18 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 10f2ba1a je 0x10f2ba25 */
  if (C.zf) goto L_10f2ba25;
  /* 10f2ba1c test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 10f2ba1f jne 0x10f2ba25 */
  if (!C.zf) goto L_10f2ba25;
L_10f2ba21:;
  /* 10f2ba21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2ba23 jmp 0x10f2ba28 */
  goto L_10f2ba28;
L_10f2ba25:;
  /* 10f2ba25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2ba27 pop eax */
  EAX = (pop32());
L_10f2ba28:;
  /* 10f2ba28 pop edi */
  EDI = (pop32());
  /* 10f2ba29 pop esi */
  ESI = (pop32());
  /* 10f2ba2a ret  */
  ESPCHK(0x10f2b9ceu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba2b @ 0x10f2ba2b (132 bytes, 56 insns) */
void f_10f2ba2b(void) {
  FTRACE(0x10f2ba2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2ba2b push ebp */
  push32((uint32_t)(EBP));
  /* 10f2ba2c mov ebp, esp */
  EBP = (ESP);
  /* 10f2ba2e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2ba30 push 0x10f2d928 */
  push32((uint32_t)(0x10f2d928u));
  /* 10f2ba35 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f2ba3a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2ba40 push eax */
  push32((uint32_t)(EAX));
  /* 10f2ba41 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2ba48 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2ba4b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2ba4c push esi */
  push32((uint32_t)(ESI));
  /* 10f2ba4d push edi */
  push32((uint32_t)(EDI));
  /* 10f2ba4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2ba51 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2ba54 mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 10f2ba57 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 10f2ba5a mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_10f2ba5d:;
  /* 10f2ba5d cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ba60 je 0x10f2bab7 */
  if (C.zf) goto L_10f2bab7;
  /* 10f2ba62 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ba65 jle 0x10f2ba6c */
  if ((C.zf||C.sf!=C.of)) goto L_10f2ba6c;
  /* 10f2ba67 cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2ba6a jl 0x10f2ba71 */
  if ((C.sf!=C.of)) goto L_10f2ba71;
L_10f2ba6c:;
  /* 10f2ba6c call 0x10f2bf9d */
  push32(0x10f2ba71u); f_10f2bf9d();
L_10f2ba71:;
  /* 10f2ba71 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2ba75 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 10f2ba78 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 10f2ba7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2ba7e je 0x10f2ba8c */
  if (C.zf) goto L_10f2ba8c;
  /* 10f2ba80 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 10f2ba85 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2ba86 push eax */
  push32((uint32_t)(EAX));
  /* 10f2ba87 call 0x10f2bef0 */
  push32(0x10f2ba8cu); f_10f2bef0();
L_10f2ba8c:;
  /* 10f2ba8c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2ba90 jmp 0x10f2baac */
  goto L_10f2baac;
  /* 10f2ba92 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 10f2ba95 call 0x10f2bac9 */
  call_ind(0x10f2bac9u, 0x10f2ba9au);
  /* 10f2ba9a pop ecx */
  ECX = (pop32());
  /* 10f2ba9b ret  */
  ESPCHK(0x10f2ba2bu, _esp0);
  ESP += 4; return;
  /* 10f2ba9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f2ba9f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2baa3 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2baa6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2baa9 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_10f2baac:;
  /* 10f2baac mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 10f2baaf mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 10f2bab2 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 10f2bab5 jmp 0x10f2ba5d */
  goto L_10f2ba5d;
L_10f2bab7:;
  /* 10f2bab7 mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 10f2baba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2babd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2bac4 pop edi */
  EDI = (pop32());
  /* 10f2bac5 pop esi */
  ESI = (pop32());
  /* 10f2bac6 pop ebx */
  EBX = (pop32());
  /* 10f2bac7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2bac8 ret  */
  ESPCHK(0x10f2ba2bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000badf @ 0x10f2badf (123 bytes, 50 insns) */
void f_10f2badf(void) {
  FTRACE(0x10f2badfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2badf push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bae0 mov ebp, esp */
  EBP = (ESP);
  /* 10f2bae2 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bae6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bae7 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f2baea push esi */
  push32((uint32_t)(ESI));
  /* 10f2baeb push edi */
  push32((uint32_t)(EDI));
  /* 10f2baec mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2baef je 0x10f2bb01 */
  if (C.zf) goto L_10f2bb01;
  /* 10f2baf1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2baf4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2baf5 push edi */
  push32((uint32_t)(EDI));
  /* 10f2baf6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2baf9 call 0x10f2bc9f */
  push32(0x10f2bafeu); f_10f2bc9f();
  /* 10f2bafe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2bb01:;
  /* 10f2bb01 cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bb05 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2bb08 jne 0x10f2bb0d */
  if (!C.zf) goto L_10f2bb0d;
  /* 10f2bb0a push edi */
  push32((uint32_t)(EDI));
  /* 10f2bb0b jmp 0x10f2bb10 */
  goto L_10f2bb10;
L_10f2bb0d:;
  /* 10f2bb0d push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_10f2bb10:;
  /* 10f2bb10 call 0x10f2b1cb */
  push32(0x10f2bb15u); f_10f2b1cb();
  /* 10f2bb15 mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 10f2bb18 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f2bb1a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2bb1d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2bb20 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bb21 call 0x10f2ba2b */
  push32(0x10f2bb26u); f_10f2ba2b();
  /* 10f2bb26 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2bb29 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f2bb2e push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 10f2bb31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2bb32 mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 10f2bb35 push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 10f2bb38 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2bb3b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2bb3e push edi */
  push32((uint32_t)(EDI));
  /* 10f2bb3f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2bb42 call 0x10f2bb5a */
  push32(0x10f2bb47u); f_10f2bb5a();
  /* 10f2bb47 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bb4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bb4c je 0x10f2bb55 */
  if (C.zf) goto L_10f2bb55;
  /* 10f2bb4e push edi */
  push32((uint32_t)(EDI));
  /* 10f2bb4f push eax */
  push32((uint32_t)(EAX));
  /* 10f2bb50 call 0x10f2b189 */
  push32(0x10f2bb55u); f_10f2b189();
L_10f2bb55:;
  /* 10f2bb55 pop edi */
  EDI = (pop32());
  /* 10f2bb56 pop esi */
  ESI = (pop32());
  /* 10f2bb57 pop ebx */
  EBX = (pop32());
  /* 10f2bb58 pop ebp */
  EBP = (pop32());
  /* 10f2bb59 ret  */
  ESPCHK(0x10f2badfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb5a @ 0x10f2bb5a (165 bytes, 52 insns) */
void f_10f2bb5a(void) {
  FTRACE(0x10f2bb5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bb5a push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bb5b mov ebp, esp */
  EBP = (ESP);
  /* 10f2bb5d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2bb5f push 0x10f2d938 */
  push32((uint32_t)(0x10f2d938u));
  /* 10f2bb64 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f2bb69 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2bb6f push eax */
  push32((uint32_t)(EAX));
  /* 10f2bb70 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2bb77 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2bb7a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bb7b push esi */
  push32((uint32_t)(ESI));
  /* 10f2bb7c push edi */
  push32((uint32_t)(EDI));
  /* 10f2bb7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2bb80 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f2bb83 mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 10f2bb86 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10f2bb8a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2bb8d mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 10f2bb90 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f2bb93 call 0x10f24a94 */
  push32(0x10f2bb98u); f_10f24a94();
  /* 10f2bb98 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10f2bb9b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f2bb9e call 0x10f24a94 */
  push32(0x10f2bba3u); f_10f24a94();
  /* 10f2bba3 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 10f2bba6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f2bba9 call 0x10f24a94 */
  push32(0x10f2bbaeu); f_10f24a94();
  /* 10f2bbae mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2bbb1 mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 10f2bbb4 call 0x10f24a94 */
  push32(0x10f2bbb9u); f_10f24a94();
  /* 10f2bbb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2bbbc mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 10f2bbbf and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bbc3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f2bbca push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f2bbcd push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10f2bbd0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bbd1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f2bbd4 push esi */
  push32((uint32_t)(ESI));
  /* 10f2bbd5 call 0x10f2b250 */
  push32(0x10f2bbdau); f_10f2b250();
  /* 10f2bbda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bbdd mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f2bbe0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bbe4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bbe8 call 0x10f2bc27 */
  push32(0x10f2bbedu); f_10f2bc27();
  /* 10f2bbed mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f2bbf0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2bbf3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2bbfa pop edi */
  EDI = (pop32());
  /* 10f2bbfb pop esi */
  ESI = (pop32());
  /* 10f2bbfc pop ebx */
  EBX = (pop32());
  /* 10f2bbfd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2bbfe ret  */
  ESPCHK(0x10f2bb5au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc27 @ 0x10f2bc27 (78 bytes, 25 insns) */
void f_10f2bc27(void) {
  FTRACE(0x10f2bc27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bc27 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f2bc2a mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 10f2bc2d call 0x10f24a94 */
  push32(0x10f2bc32u); f_10f24a94();
  /* 10f2bc32 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f2bc35 mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 10f2bc38 call 0x10f24a94 */
  push32(0x10f2bc3du); f_10f24a94();
  /* 10f2bc3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f2bc40 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 10f2bc43 cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bc49 jne 0x10f2bc74 */
  if (!C.zf) goto L_10f2bc74;
  /* 10f2bc4b cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bc4f jne 0x10f2bc74 */
  if (!C.zf) goto L_10f2bc74;
  /* 10f2bc51 cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bc58 jne 0x10f2bc74 */
  if (!C.zf) goto L_10f2bc74;
  /* 10f2bc5a cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bc5e jne 0x10f2bc74 */
  if (!C.zf) goto L_10f2bc74;
  /* 10f2bc60 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bc64 je 0x10f2bc74 */
  if (C.zf) goto L_10f2bc74;
  /* 10f2bc66 call 0x10f269b2 */
  push32(0x10f2bc6bu); f_10f269b2();
  /* 10f2bc6b push eax */
  push32((uint32_t)(EAX));
  /* 10f2bc6c push edi */
  push32((uint32_t)(EDI));
  /* 10f2bc6d call 0x10f2be63 */
  push32(0x10f2bc72u); f_10f2be63();
  /* 10f2bc72 pop ecx */
  ECX = (pop32());
  /* 10f2bc73 pop ecx */
  ECX = (pop32());
L_10f2bc74:;
  /* 10f2bc74 ret  */
  ESPCHK(0x10f2bc27u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc9f @ 0x10f2bc9f (440 bytes, 164 insns) */
void f_10f2bc9f(void) {
  FTRACE(0x10f2bc9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bc9f push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bca0 mov ebp, esp */
  EBP = (ESP);
  /* 10f2bca2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2bca4 push 0x10f2d950 */
  push32((uint32_t)(0x10f2d950u));
  /* 10f2bca9 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f2bcae mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2bcb4 push eax */
  push32((uint32_t)(EAX));
  /* 10f2bcb5 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2bcbc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2bcbf push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bcc0 push esi */
  push32((uint32_t)(ESI));
  /* 10f2bcc1 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bcc2 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2bcc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2bcc8 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f2bccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bccd je 0x10f2be48 */
  if (C.zf) goto L_10f2be48;
  /* 10f2bcd3 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2bcd7 je 0x10f2be48 */
  if (C.zf) goto L_10f2be48;
  /* 10f2bcdd mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f2bce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bce2 je 0x10f2be48 */
  if (C.zf) goto L_10f2be48;
  /* 10f2bce8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2bceb lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 10f2bcef and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bcf3 test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 10f2bcf6 je 0x10f2bd3c */
  if (C.zf) goto L_10f2bd3c;
  /* 10f2bcf8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2bcfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bcfd push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 10f2bd00 call 0x10f2c057 */
  push32(0x10f2bd05u); f_10f2c057();
  /* 10f2bd05 pop ecx */
  ECX = (pop32());
  /* 10f2bd06 pop ecx */
  ECX = (pop32());
  /* 10f2bd07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bd09 je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bd0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bd11 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bd12 call 0x10f2c073 */
  push32(0x10f2bd17u); f_10f2c073();
  /* 10f2bd17 pop ecx */
  ECX = (pop32());
  /* 10f2bd18 pop ecx */
  ECX = (pop32());
  /* 10f2bd19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bd1b je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bd21 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 10f2bd24 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f2bd26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f2bd29 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bd2c push ecx */
  push32((uint32_t)(ECX));
L_10f2bd2d:;
  /* 10f2bd2d push eax */
  push32((uint32_t)(EAX));
  /* 10f2bd2e call 0x10f2beca */
  push32(0x10f2bd33u); f_10f2beca();
  /* 10f2bd33 pop ecx */
  ECX = (pop32());
  /* 10f2bd34 pop ecx */
  ECX = (pop32());
  /* 10f2bd35 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f2bd37 jmp 0x10f2be44 */
  goto L_10f2be44;
L_10f2bd3c:;
  /* 10f2bd3c mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10f2bd3f test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 10f2bd42 je 0x10f2bd96 */
  if (C.zf) goto L_10f2bd96;
  /* 10f2bd44 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2bd47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bd49 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 10f2bd4c call 0x10f2c057 */
  push32(0x10f2bd51u); f_10f2c057();
  /* 10f2bd51 pop ecx */
  ECX = (pop32());
  /* 10f2bd52 pop ecx */
  ECX = (pop32());
  /* 10f2bd53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bd55 je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bd5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bd5d push edi */
  push32((uint32_t)(EDI));
  /* 10f2bd5e call 0x10f2c073 */
  push32(0x10f2bd63u); f_10f2c073();
  /* 10f2bd63 pop ecx */
  ECX = (pop32());
  /* 10f2bd64 pop ecx */
  ECX = (pop32());
  /* 10f2bd65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bd67 je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bd6d push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 10f2bd70 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 10f2bd73 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bd74 call 0x10f274c0 */
  push32(0x10f2bd79u); f_10f274c0();
  /* 10f2bd79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bd7c cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bd80 jne 0x10f2be44 */
  if (!C.zf) goto L_10f2be44;
  /* 10f2bd86 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2bd88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bd8a je 0x10f2be44 */
  if (C.zf) goto L_10f2be44;
  /* 10f2bd90 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bd93 push esi */
  push32((uint32_t)(ESI));
  /* 10f2bd94 jmp 0x10f2bd2d */
  goto L_10f2bd2d;
L_10f2bd96:;
  /* 10f2bd96 cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bd9a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2bd9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bd9f push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 10f2bda2 jne 0x10f2bdde */
  if (!C.zf) goto L_10f2bdde;
  /* 10f2bda4 call 0x10f2c057 */
  push32(0x10f2bda9u); f_10f2c057();
  /* 10f2bda9 pop ecx */
  ECX = (pop32());
  /* 10f2bdaa pop ecx */
  ECX = (pop32());
  /* 10f2bdab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bdad je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bdb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bdb5 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bdb6 call 0x10f2c073 */
  push32(0x10f2bdbbu); f_10f2c073();
  /* 10f2bdbb pop ecx */
  ECX = (pop32());
  /* 10f2bdbc pop ecx */
  ECX = (pop32());
  /* 10f2bdbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bdbf je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bdc1 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 10f2bdc4 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bdc7 push esi */
  push32((uint32_t)(ESI));
  /* 10f2bdc8 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 10f2bdcb call 0x10f2beca */
  push32(0x10f2bdd0u); f_10f2beca();
  /* 10f2bdd0 pop ecx */
  ECX = (pop32());
  /* 10f2bdd1 pop ecx */
  ECX = (pop32());
  /* 10f2bdd2 push eax */
  push32((uint32_t)(EAX));
  /* 10f2bdd3 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bdd4 call 0x10f274c0 */
  push32(0x10f2bdd9u); f_10f274c0();
  /* 10f2bdd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bddc jmp 0x10f2be44 */
  goto L_10f2be44;
L_10f2bdde:;
  /* 10f2bdde call 0x10f2c057 */
  push32(0x10f2bde3u); f_10f2c057();
  /* 10f2bde3 pop ecx */
  ECX = (pop32());
  /* 10f2bde4 pop ecx */
  ECX = (pop32());
  /* 10f2bde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bde7 je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bde9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bdeb push edi */
  push32((uint32_t)(EDI));
  /* 10f2bdec call 0x10f2c073 */
  push32(0x10f2bdf1u); f_10f2c073();
  /* 10f2bdf1 pop ecx */
  ECX = (pop32());
  /* 10f2bdf2 pop ecx */
  ECX = (pop32());
  /* 10f2bdf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bdf5 je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2bdf7 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 10f2bdfa call 0x10f2c08f */
  push32(0x10f2bdffu); f_10f2c08f();
  /* 10f2bdff pop ecx */
  ECX = (pop32());
  /* 10f2be00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2be02 je 0x10f2be3f */
  if (C.zf) goto L_10f2be3f;
  /* 10f2be04 test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 10f2be07 je 0x10f2be25 */
  if (C.zf) goto L_10f2be25;
  /* 10f2be09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2be0b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 10f2be0e push eax */
  push32((uint32_t)(EAX));
  /* 10f2be0f push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 10f2be12 call 0x10f2beca */
  push32(0x10f2be17u); f_10f2beca();
  /* 10f2be17 pop ecx */
  ECX = (pop32());
  /* 10f2be18 pop ecx */
  ECX = (pop32());
  /* 10f2be19 push eax */
  push32((uint32_t)(EAX));
  /* 10f2be1a push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 10f2be1d push edi */
  push32((uint32_t)(EDI));
  /* 10f2be1e call 0x10f2b1c4 */
  push32(0x10f2be23u); f_10f2b1c4();
  /* 10f2be23 jmp 0x10f2be44 */
  goto L_10f2be44;
L_10f2be25:;
  /* 10f2be25 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 10f2be28 push eax */
  push32((uint32_t)(EAX));
  /* 10f2be29 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 10f2be2c call 0x10f2beca */
  push32(0x10f2be31u); f_10f2beca();
  /* 10f2be31 pop ecx */
  ECX = (pop32());
  /* 10f2be32 pop ecx */
  ECX = (pop32());
  /* 10f2be33 push eax */
  push32((uint32_t)(EAX));
  /* 10f2be34 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 10f2be37 push edi */
  push32((uint32_t)(EDI));
  /* 10f2be38 call 0x10f2b1bd */
  push32(0x10f2be3du); f_10f2b1bd();
  /* 10f2be3d jmp 0x10f2be44 */
  goto L_10f2be44;
L_10f2be3f:;
  /* 10f2be3f call 0x10f2bf9d */
  push32(0x10f2be44u); f_10f2bf9d();
L_10f2be44:;
  /* 10f2be44 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10f2be48:;
  /* 10f2be48 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2be4b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2be52 pop edi */
  EDI = (pop32());
  /* 10f2be53 pop esi */
  ESI = (pop32());
  /* 10f2be54 pop ebx */
  EBX = (pop32());
  /* 10f2be55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2be56 ret  */
  ESPCHK(0x10f2bc9fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000be63 @ 0x10f2be63 (86 bytes, 33 insns) */
void f_10f2be63(void) {
  FTRACE(0x10f2be63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2be63 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2be64 mov ebp, esp */
  EBP = (ESP);
  /* 10f2be66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2be68 push 0x10f2d960 */
  push32((uint32_t)(0x10f2d960u));
  /* 10f2be6d push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f2be72 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2be78 push eax */
  push32((uint32_t)(EAX));
  /* 10f2be79 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2be80 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2be81 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2be82 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2be83 push esi */
  push32((uint32_t)(ESI));
  /* 10f2be84 push edi */
  push32((uint32_t)(EDI));
  /* 10f2be85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2be88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2be8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2be8d je 0x10f2beaa */
  if (C.zf) goto L_10f2beaa;
  /* 10f2be8f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f2be92 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f2be95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f2be97 je 0x10f2beaa */
  if (C.zf) goto L_10f2beaa;
  /* 10f2be99 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2be9d push ecx */
  push32((uint32_t)(ECX));
  /* 10f2be9e push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 10f2bea1 call 0x10f2b1bd */
  push32(0x10f2bea6u); f_10f2b1bd();
  /* 10f2bea6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10f2beaa:;
  /* 10f2beaa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2bead mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f2beb4 pop edi */
  EDI = (pop32());
  /* 10f2beb5 pop esi */
  ESI = (pop32());
  /* 10f2beb6 pop ebx */
  EBX = (pop32());
  /* 10f2beb7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2beb8 ret  */
  ESPCHK(0x10f2be63u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beca @ 0x10f2beca (35 bytes, 15 insns) */
void f_10f2beca(void) {
  FTRACE(0x10f2becau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2beca mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2bece push esi */
  push32((uint32_t)(ESI));
  /* 10f2becf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2bed3 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2bed5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f2bed8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2beda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f2bedc jl 0x10f2beeb */
  if ((C.sf!=C.of)) goto L_10f2beeb;
  /* 10f2bede mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 10f2bee1 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f2bee4 mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 10f2bee7 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2bee9 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f2beeb:;
  /* 10f2beeb pop esi */
  ESI = (pop32());
  /* 10f2beec ret  */
  ESPCHK(0x10f2becau, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x10f2bef0 (76 bytes, 34 insns) */
void f_10f2bef0(void) {
  FTRACE(0x10f2bef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bef1 mov ebp, esp */
  EBP = (ESP);
  /* 10f2bef3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2bef6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2bef8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2befb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2befe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2bf01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2bf04 push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bf05 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f2bf08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2bf0b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2bf0e call 0x10f269d5 */
  push32(0x10f2bf13u); f_10f269d5();
  /* 10f2bf13 push esi */
  push32((uint32_t)(ESI));
  /* 10f2bf14 push edi */
  push32((uint32_t)(EDI));
  /* 10f2bf15 call eax */
  call_ind((uint32_t)(EAX), 0x10f2bf17u);
  /* 10f2bf17 pop edi */
  EDI = (pop32());
  /* 10f2bf18 pop esi */
  ESI = (pop32());
  /* 10f2bf19 mov ebx, ebp */
  EBX = (EBP);
  /* 10f2bf1b pop ebp */
  EBP = (pop32());
  /* 10f2bf1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2bf1f push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bf20 mov ebp, ebx */
  EBP = (EBX);
  /* 10f2bf22 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bf28 jne 0x10f2bf2f */
  if (!C.zf) goto L_10f2bf2f;
  /* 10f2bf2a mov ecx, 2 */
  ECX = (0x2u);
L_10f2bf2f:;
  /* 10f2bf2f push ecx */
  push32((uint32_t)(ECX));
  /* 10f2bf30 call 0x10f269d5 */
  push32(0x10f2bf35u); f_10f269d5();
  /* 10f2bf35 pop ebp */
  EBP = (pop32());
  /* 10f2bf36 pop ecx */
  ECX = (pop32());
  /* 10f2bf37 pop ebx */
  EBX = (pop32());
  /* 10f2bf38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2bf39 ret 0xc */
  ESPCHK(0x10f2bef0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000bf3c @ 0x10f2bf3c (86 bytes, 32 insns) */
void f_10f2bf3c(void) {
  FTRACE(0x10f2bf3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bf3c push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bf3d mov ebp, esp */
  EBP = (ESP);
  /* 10f2bf3f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2bf41 push 0x10f2d970 */
  push32((uint32_t)(0x10f2d970u));
  /* 10f2bf46 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f2bf4b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2bf51 push eax */
  push32((uint32_t)(EAX));
  /* 10f2bf52 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2bf59 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2bf5a push ecx */
  push32((uint32_t)(ECX));
  /* 10f2bf5b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bf5c push esi */
  push32((uint32_t)(ESI));
  /* 10f2bf5d push edi */
  push32((uint32_t)(EDI));
  /* 10f2bf5e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2bf61 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f2bf63 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10f2bf66 call 0x10f24a94 */
  push32(0x10f2bf6bu); f_10f24a94();
  /* 10f2bf6b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2bf6e je 0x10f2bf8f */
  if (C.zf) goto L_10f2bf8f;
  /* 10f2bf70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f2bf77 call 0x10f24a94 */
  push32(0x10f2bf7cu); f_10f24a94();
  /* 10f2bf7c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x10f2bf7fu);
  /* 10f2bf7f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10f2bf82 jmp 0x10f2bf8f */
  goto L_10f2bf8f;
  /* 10f2bf84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bf86 pop eax */
  EAX = (pop32());
  /* 10f2bf87 ret  */
  ESPCHK(0x10f2bf3cu, _esp0);
  ESP += 4; return;
  /* 10f2bf88 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f2bf8b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10f2bf8f:;
  /* 10f2bf8f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bf93 call 0x10f2bf98 */
  call_ind(0x10f2bf98u, 0x10f2bf98u);
  /* 10f2bf98 jmp 0x10f2c0a7 */
  f_10f2c0a7(); return;
}

/* FUN_1000bf9d @ 0x10f2bf9d (79 bytes, 29 insns) */
void f_10f2bf9d(void) {
  FTRACE(0x10f2bf9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bf9d push ebp */
  push32((uint32_t)(EBP));
  /* 10f2bf9e mov ebp, esp */
  EBP = (ESP);
  /* 10f2bfa0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f2bfa2 push 0x10f2d988 */
  push32((uint32_t)(0x10f2d988u));
  /* 10f2bfa7 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f2bfac mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f2bfb2 push eax */
  push32((uint32_t)(EAX));
  /* 10f2bfb3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f2bfba push ecx */
  push32((uint32_t)(ECX));
  /* 10f2bfbb push ecx */
  push32((uint32_t)(ECX));
  /* 10f2bfbc push ebx */
  push32((uint32_t)(EBX));
  /* 10f2bfbd push esi */
  push32((uint32_t)(ESI));
  /* 10f2bfbe push edi */
  push32((uint32_t)(EDI));
  /* 10f2bfbf mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2bfc2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bfc6 mov eax, dword ptr [0x10f325e0] */
  EAX = (r32((uint32_t)(0x10f325e0)));
  /* 10f2bfcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2bfcd je 0x10f2bfe5 */
  if (C.zf) goto L_10f2bfe5;
  /* 10f2bfcf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f2bfd6 call eax */
  call_ind((uint32_t)(EAX), 0x10f2bfd8u);
  /* 10f2bfd8 jmp 0x10f2bfe1 */
  goto L_10f2bfe1;
  /* 10f2bfda push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2bfdc pop eax */
  EAX = (pop32());
  /* 10f2bfdd ret  */
  ESPCHK(0x10f2bf9du, _esp0);
  ESP += 4; return;
  /* 10f2bfde mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_10f2bfe1:;
  /* 10f2bfe1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10f2bfe5:;
  /* 10f2bfe5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2bfe9 call 0x10f2bfee */
  call_ind(0x10f2bfeeu, 0x10f2bfeeu);
  /* 10f2bfee jmp 0x10f2bf3c */
  f_10f2bf3c(); return;
}

/* FUN_1000bff3 @ 0x10f2bff3 (70 bytes, 24 insns) */
void f_10f2bff3(void) {
  FTRACE(0x10f2bff3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2bff3 push esi */
  push32((uint32_t)(ESI));
  /* 10f2bff4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2bff8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f2bffa cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2c000 jne 0x10f2c016 */
  if (!C.zf) goto L_10f2c016;
  /* 10f2c002 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2c006 jne 0x10f2c016 */
  if (!C.zf) goto L_10f2c016;
  /* 10f2c008 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2c00f jne 0x10f2c016 */
  if (!C.zf) goto L_10f2c016;
  /* 10f2c011 jmp 0x10f2bf3c */
  f_10f2bf3c(); return;
L_10f2c016:;
  /* 10f2c016 mov eax, dword ptr [0x10f47d68] */
  EAX = (r32((uint32_t)(0x10f47d68)));
  /* 10f2c01b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c01d je 0x10f2c033 */
  if (C.zf) goto L_10f2c033;
  /* 10f2c01f push eax */
  push32((uint32_t)(EAX));
  /* 10f2c020 call 0x10f2c08f */
  push32(0x10f2c025u); f_10f2c08f();
  /* 10f2c025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c027 pop ecx */
  ECX = (pop32());
  /* 10f2c028 je 0x10f2c033 */
  if (C.zf) goto L_10f2c033;
  /* 10f2c02a push esi */
  push32((uint32_t)(ESI));
  /* 10f2c02b call dword ptr [0x10f47d68] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f47d68))), 0x10f2c031u);
  /* 10f2c031 jmp 0x10f2c035 */
  goto L_10f2c035;
L_10f2c033:;
  /* 10f2c033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2c035:;
  /* 10f2c035 pop esi */
  ESI = (pop32());
  /* 10f2c036 ret 4 */
  ESPCHK(0x10f2bff3u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c057 @ 0x10f2c057 (28 bytes, 12 insns) */
void f_10f2c057(void) {
  FTRACE(0x10f2c057u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c057 push esi */
  push32((uint32_t)(ESI));
  /* 10f2c058 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2c05a pop esi */
  ESI = (pop32());
  /* 10f2c05b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f2c05f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f2c063 call dword ptr [0x10f2d00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d00c))), 0x10f2c069u);
  /* 10f2c069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c06b je 0x10f2c06f */
  if (C.zf) goto L_10f2c06f;
  /* 10f2c06d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10f2c06f:;
  /* 10f2c06f mov eax, esi */
  EAX = (ESI);
  /* 10f2c071 pop esi */
  ESI = (pop32());
  /* 10f2c072 ret  */
  ESPCHK(0x10f2c057u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c073 @ 0x10f2c073 (28 bytes, 12 insns) */
void f_10f2c073(void) {
  FTRACE(0x10f2c073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c073 push esi */
  push32((uint32_t)(ESI));
  /* 10f2c074 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2c076 pop esi */
  ESI = (pop32());
  /* 10f2c077 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f2c07b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f2c07f call dword ptr [0x10f2d064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d064))), 0x10f2c085u);
  /* 10f2c085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c087 je 0x10f2c08b */
  if (C.zf) goto L_10f2c08b;
  /* 10f2c089 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10f2c08b:;
  /* 10f2c08b mov eax, esi */
  EAX = (ESI);
  /* 10f2c08d pop esi */
  ESI = (pop32());
  /* 10f2c08e ret  */
  ESPCHK(0x10f2c073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c08f @ 0x10f2c08f (24 bytes, 11 insns) */
void f_10f2c08f(void) {
  FTRACE(0x10f2c08fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c08f push esi */
  push32((uint32_t)(ESI));
  /* 10f2c090 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2c092 pop esi */
  ESI = (pop32());
  /* 10f2c093 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f2c097 call dword ptr [0x10f2d008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d008))), 0x10f2c09du);
  /* 10f2c09d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c09f je 0x10f2c0a3 */
  if (C.zf) goto L_10f2c0a3;
  /* 10f2c0a1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10f2c0a3:;
  /* 10f2c0a3 mov eax, esi */
  EAX = (ESI);
  /* 10f2c0a5 pop esi */
  ESI = (pop32());
  /* 10f2c0a6 ret  */
  ESPCHK(0x10f2c08fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a7 @ 0x10f2c0a7 (23 bytes, 10 insns) */
void f_10f2c0a7(void) {
  FTRACE(0x10f2c0a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c0a7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f2c0a9 call 0x10f25496 */
  push32(0x10f2c0aeu); f_10f25496();
  /* 10f2c0ae push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f2c0b0 call 0x10f28b8e */
  push32(0x10f2c0b5u); f_10f28b8e();
  /* 10f2c0b5 pop ecx */
  ECX = (pop32());
  /* 10f2c0b6 pop ecx */
  ECX = (pop32());
  /* 10f2c0b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f2c0b9 call 0x10f243c7 */
  push32(0x10f2c0beu); f_10f243c7();
  /* 10f2c0be int3  */
  x86_unimpl("int3 @ 0x10f2c0be");
  /* 10f2c0bf int3  */
  x86_unimpl("int3 @ 0x10f2c0bf");
}

/* Unwind@1000c0c0 @ 0x10f2c0c0 (26 bytes, 8 insns) */
void f_10f2c0c0(void) {
  FTRACE(0x10f2c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c0c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2c0c3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2c0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c0c8 je 0x10f2c0d9 */
  if (C.zf) goto L_10f2c0d9;
  /* 10f2c0ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f2c0d1 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2c0d4 jmp 0x10f2a7d2 */
  f_10f2a7d2(); return;
L_10f2c0d9:;
  /* 10f2c0d9 ret  */
  ESPCHK(0x10f2c0c0u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c0da @ 0x10f2c0da (10 bytes, 4 insns) */
void f_10f2c0da(void) {
  FTRACE(0x10f2c0dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c0da push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2c0dd call 0x10f23ae0 */
  push32(0x10f2c0e2u); f_10f23ae0();
  /* 10f2c0e2 pop ecx */
  ECX = (pop32());
  /* 10f2c0e3 ret  */
  ESPCHK(0x10f2c0dau, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c0f0 @ 0x10f2c0f0 (26 bytes, 8 insns) */
void f_10f2c0f0(void) {
  FTRACE(0x10f2c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c0f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2c0f3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2c0f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c0f8 je 0x10f2c109 */
  if (C.zf) goto L_10f2c109;
  /* 10f2c0fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f2c101 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2c104 jmp 0x10f2a7d2 */
  f_10f2a7d2(); return;
L_10f2c109:;
  /* 10f2c109 ret  */
  ESPCHK(0x10f2c0f0u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c10a @ 0x10f2c10a (11 bytes, 3 insns) */
void f_10f2c10a(void) {
  FTRACE(0x10f2c10au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c10a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f2c10d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2c110 jmp 0x10f2adab */
  f_10f2adab(); return;
}

/* Unwind@1000c120 @ 0x10f2c120 (11 bytes, 3 insns) */
void f_10f2c120(void) {
  FTRACE(0x10f2c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c120 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2c123 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2c126 jmp 0x10f2adab */
  f_10f2adab(); return;
}

/* Unwind@1000c138 @ 0x10f2c138 (8 bytes, 2 insns) */
void f_10f2c138(void) {
  FTRACE(0x10f2c138u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c138 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2c13b jmp 0x10f2aed9 */
  f_10f2aed9(); return;
}

/* Unwind@1000c14c @ 0x10f2c14c (26 bytes, 8 insns) */
void f_10f2c14c(void) {
  FTRACE(0x10f2c14cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c14c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2c14f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2c152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c154 je 0x10f2c165 */
  if (C.zf) goto L_10f2c165;
  /* 10f2c15a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f2c15d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2c160 jmp 0x10f2a7d2 */
  f_10f2a7d2(); return;
L_10f2c165:;
  /* 10f2c165 ret  */
  ESPCHK(0x10f2c14cu, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c170 @ 0x10f2c170 (26 bytes, 8 insns) */
void f_10f2c170(void) {
  FTRACE(0x10f2c170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2c170 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2c173 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2c176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2c178 je 0x10f2c189 */
  if (C.zf) goto L_10f2c189;
  /* 10f2c17e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f2c181 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2c184 jmp 0x10f2a7d2 */
  f_10f2a7d2(); return;
L_10f2c189:;
  /* 10f2c189 ret  */
  ESPCHK(0x10f2c170u, _esp0);
  ESP += 4; return;
}

