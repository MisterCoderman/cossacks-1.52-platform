#include "recomp.h"

/* FUN_10015360 @ 0x11255360 (43 bytes, 16 insns) */
void f_11255360(void) {
  FTRACE(0x11255360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255360 push ebp */
  push32((uint32_t)(EBP));
  /* 11255361 mov ebp, esp */
  EBP = (ESP);
  /* 11255363 push ecx */
  push32((uint32_t)(ECX));
  /* 11255364 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1125536b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125536e push eax */
  push32((uint32_t)(EAX));
  /* 1125536f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255372 push ecx */
  push32((uint32_t)(ECX));
  /* 11255373 call dword ptr [0x11283414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283414))), 0x11255379u);
  /* 11255379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125537b je 0x11255384 */
  if (C.zf) goto L_11255384;
  /* 1125537d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11255384:;
  /* 11255384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255387 mov esp, ebp */
  ESP = (EBP);
  /* 11255389 pop ebp */
  EBP = (pop32());
  /* 1125538a ret  */
  ESPCHK(0x11255360u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x11255390 (39 bytes, 14 insns) */
void f_11255390(void) {
  FTRACE(0x11255390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255390 push ebp */
  push32((uint32_t)(EBP));
  /* 11255391 mov ebp, esp */
  EBP = (ESP);
  /* 11255393 push ecx */
  push32((uint32_t)(ECX));
  /* 11255394 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1125539b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125539e push eax */
  push32((uint32_t)(EAX));
  /* 1125539f call dword ptr [0x1128339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128339c))), 0x112553a5u);
  /* 112553a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112553a7 je 0x112553b0 */
  if (C.zf) goto L_112553b0;
  /* 112553a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112553b0:;
  /* 112553b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112553b3 mov esp, ebp */
  ESP = (EBP);
  /* 112553b5 pop ebp */
  EBP = (pop32());
  /* 112553b6 ret  */
  ESPCHK(0x11255390u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x112553c0 (129 bytes, 56 insns) */
void f_112553c0(void) {
  FTRACE(0x112553c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112553c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 112553c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112553c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 112553ce jne 0x1125540c */
  if (!C.zf) goto L_1125540c;
L_112553d0:;
  /* 112553d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112553d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112553d4 jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 112553d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112553d8 je 0x11255400 */
  if (C.zf) goto L_11255400;
  /* 112553da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112553dd jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 112553df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112553e1 je 0x11255400 */
  if (C.zf) goto L_11255400;
  /* 112553e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112553e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112553e9 jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 112553eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112553ed je 0x11255400 */
  if (C.zf) goto L_11255400;
  /* 112553ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112553f2 jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 112553f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112553f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112553fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112553fc jne 0x112553d0 */
  if (!C.zf) goto L_112553d0;
  /* 112553fe mov edi, edi */
  EDI = (EDI);
L_11255400:;
  /* 11255400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255402 ret  */
  ESPCHK(0x112553c0u, _esp0);
  ESP += 4; return;
  /* 11255403 nop  */
  /* nop */
L_11255404:;
  /* 11255404 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255406 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11255408 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11255409 ret  */
  ESPCHK(0x112553c0u, _esp0);
  ESP += 4; return;
  /* 1125540a mov edi, edi */
  EDI = (EDI);
L_1125540c:;
  /* 1125540c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11255412 je 0x11255428 */
  if (C.zf) goto L_11255428;
  /* 11255414 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11255416 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11255417 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11255419 jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 1125541b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1125541c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1125541e je 0x11255400 */
  if (C.zf) goto L_11255400;
  /* 11255420 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11255426 je 0x112553d0 */
  if (C.zf) goto L_112553d0;
L_11255428:;
  /* 11255428 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1125542b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125542e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11255430 jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 11255432 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11255434 je 0x11255400 */
  if (C.zf) goto L_11255400;
  /* 11255436 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11255439 jne 0x11255404 */
  if (!C.zf) goto L_11255404;
  /* 1125543b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1125543d je 0x11255400 */
  if (C.zf) goto L_11255400;
  /* 1125543f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255442 jmp 0x112553d0 */
  goto L_112553d0;
}

/* FUN_10015509 @ 0x11255509 (27 bytes, 11 insns) */
void f_11255509(void) {
  FTRACE(0x11255509u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255509 push ebp */
  push32((uint32_t)(EBP));
  /* 1125550a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1125550e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11255510 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11255513 push eax */
  push32((uint32_t)(EAX));
  /* 11255514 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11255517 push eax */
  push32((uint32_t)(EAX));
  /* 11255518 call 0x1124ac92 */
  push32(0x1125551du); f_1124ac92();
  /* 1125551d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255520 pop ebp */
  EBP = (pop32());
  /* 11255521 ret 4 */
  ESPCHK(0x11255509u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x11255530 (446 bytes, 130 insns) */
void f_11255530(void) {
  FTRACE(0x11255530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255530 push ebp */
  push32((uint32_t)(EBP));
  /* 11255531 mov ebp, esp */
  EBP = (ESP);
  /* 11255533 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255536 call 0x1124f520 */
  push32(0x1125553bu); f_1124f520();
  /* 1125553b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125553e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255541 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11255544 push ecx */
  push32((uint32_t)(ECX));
  /* 11255545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255548 push edx */
  push32((uint32_t)(EDX));
  /* 11255549 call 0x112556f0 */
  push32(0x1125554eu); f_112556f0();
  /* 1125554e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255551 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11255554 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255558 je 0x11255563 */
  if (C.zf) goto L_11255563;
  /* 1125555a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125555d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255561 jne 0x11255572 */
  if (!C.zf) goto L_11255572;
L_11255563:;
  /* 11255563 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11255566 push ecx */
  push32((uint32_t)(ECX));
  /* 11255567 call dword ptr [0x11283398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283398))), 0x1125556du);
  /* 1125556d jmp 0x112556ea */
  goto L_112556ea;
L_11255572:;
  /* 11255572 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11255575 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255579 jne 0x1125558f */
  if (!C.zf) goto L_1125558f;
  /* 1125557b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125557e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11255585 mov eax, 1 */
  EAX = (0x1u);
  /* 1125558a jmp 0x112556ea */
  goto L_112556ea;
L_1125558f:;
  /* 1125558f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11255592 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255596 jne 0x112555a0 */
  if (!C.zf) goto L_112555a0;
  /* 11255598 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125559b jmp 0x112556ea */
  goto L_112556ea;
L_112555a0:;
  /* 112555a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112555a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112555a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112555a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112555ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 112555af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112555b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112555b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112555b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 112555bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112555be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112555c2 jne 0x112556c7 */
  if (!C.zf) goto L_112556c7;
  /* 112555c8 mov eax, dword ptr [0x1127f2b8] */
  EAX = (r32((uint32_t)(0x1127f2b8)));
  /* 112555cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112555d0 jmp 0x112555db */
  goto L_112555db;
L_112555d2:;
  /* 112555d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112555d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112555d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112555db:;
  /* 112555db mov edx, dword ptr [0x1127f2b8] */
  EDX = (r32((uint32_t)(0x1127f2b8)));
  /* 112555e1 add edx, dword ptr [0x1127f2bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1127f2bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112555e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112555ea jge 0x11255602 */
  if ((C.sf==C.of)) goto L_11255602;
  /* 112555ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112555ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112555f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112555f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112555f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11255600 jmp 0x112555d2 */
  goto L_112555d2;
L_11255602:;
  /* 11255602 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255605 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11255608 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125560b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125560e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255614 jne 0x11255625 */
  if (!C.zf) goto L_11255625;
  /* 11255616 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255619 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11255620 jmp 0x112556ad */
  goto L_112556ad;
L_11255625:;
  /* 11255625 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11255628 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125562e jne 0x1125563c */
  if (!C.zf) goto L_1125563c;
  /* 11255630 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255633 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1125563a jmp 0x112556ad */
  goto L_112556ad;
L_1125563c:;
  /* 1125563c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125563f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255645 jne 0x11255653 */
  if (!C.zf) goto L_11255653;
  /* 11255647 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125564a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11255651 jmp 0x112556ad */
  goto L_112556ad;
L_11255653:;
  /* 11255653 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11255656 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125565c jne 0x1125566a */
  if (!C.zf) goto L_1125566a;
  /* 1125565e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255661 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11255668 jmp 0x112556ad */
  goto L_112556ad;
L_1125566a:;
  /* 1125566a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125566d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255673 jne 0x11255681 */
  if (!C.zf) goto L_11255681;
  /* 11255675 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255678 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1125567f jmp 0x112556ad */
  goto L_112556ad;
L_11255681:;
  /* 11255681 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11255684 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125568a jne 0x11255698 */
  if (!C.zf) goto L_11255698;
  /* 1125568c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125568f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11255696 jmp 0x112556ad */
  goto L_112556ad;
L_11255698:;
  /* 11255698 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125569b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112556a1 jne 0x112556ad */
  if (!C.zf) goto L_112556ad;
  /* 112556a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112556a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_112556ad:;
  /* 112556ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112556b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 112556b3 push edx */
  push32((uint32_t)(EDX));
  /* 112556b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 112556b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112556b9u);
  /* 112556b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112556bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112556bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112556c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 112556c5 jmp 0x112556de */
  goto L_112556de;
L_112556c7:;
  /* 112556c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112556ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 112556d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112556d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112556d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112556d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112556dbu);
  /* 112556db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112556de:;
  /* 112556de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112556e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112556e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 112556e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112556ea:;
  /* 112556ea mov esp, ebp */
  ESP = (EBP);
  /* 112556ec pop ebp */
  EBP = (pop32());
  /* 112556ed ret  */
  ESPCHK(0x11255530u, _esp0);
  ESP += 4; return;
}

/* FUN_100156f0 @ 0x112556f0 (89 bytes, 35 insns) */
void f_112556f0(void) {
  FTRACE(0x112556f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112556f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112556f1 mov ebp, esp */
  EBP = (ESP);
  /* 112556f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112556f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112556f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112556fa:;
  /* 112556fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112556fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112556ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255702 je 0x11255722 */
  if (C.zf) goto L_11255722;
  /* 11255704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255707 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125570a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125570d mov ecx, dword ptr [0x1127f2c4] */
  ECX = (r32((uint32_t)(0x1127f2c4)));
  /* 11255713 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255716 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11255719 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125571b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125571e jae 0x11255722 */
  if (!C.cf) goto L_11255722;
  /* 11255720 jmp 0x112556fa */
  goto L_112556fa;
L_11255722:;
  /* 11255722 mov eax, dword ptr [0x1127f2c4] */
  EAX = (r32((uint32_t)(0x1127f2c4)));
  /* 11255727 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125572a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125572d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125572f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255732 jae 0x1125573e */
  if (!C.cf) goto L_1125573e;
  /* 11255734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255737 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11255739 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125573c je 0x11255742 */
  if (C.zf) goto L_11255742;
L_1125573e:;
  /* 1125573e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255740 jmp 0x11255745 */
  goto L_11255745;
L_11255742:;
  /* 11255742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11255745:;
  /* 11255745 mov esp, ebp */
  ESP = (EBP);
  /* 11255747 pop ebp */
  EBP = (pop32());
  /* 11255748 ret  */
  ESPCHK(0x112556f0u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x11255750 (30 bytes, 12 insns) */
void f_11255750(void) {
  FTRACE(0x11255750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255750 push ebp */
  push32((uint32_t)(EBP));
  /* 11255751 mov ebp, esp */
  EBP = (ESP);
  /* 11255753 push 0xa */
  push32((uint32_t)(0xau));
  /* 11255755 call 0x112508b0 */
  push32(0x1125575au); f_112508b0();
  /* 1125575a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125575d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1125575f call 0x11251420 */
  push32(0x11255764u); f_11251420();
  /* 11255764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255767 push 3 */
  push32((uint32_t)(0x3u));
  /* 11255769 call 0x1124f890 */
  push32(0x1125576eu); f_1124f890();
  /* 1125576e pop ebp */
  EBP = (pop32());
  /* 1125576f ret  */
  ESPCHK(0x11255750u, _esp0);
  ESP += 4; return;
}

/* FUN_10015770 @ 0x11255770 (61 bytes, 18 insns) */
void f_11255770(void) {
  FTRACE(0x11255770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255770 push ebp */
  push32((uint32_t)(EBP));
  /* 11255771 mov ebp, esp */
  EBP = (ESP);
  /* 11255773 cmp dword ptr [0x112816c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125577a jne 0x112557ab */
  if (!C.zf) goto L_112557ab;
  /* 1125577c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1125577e call 0x1124c720 */
  push32(0x11255783u); f_1124c720();
  /* 11255783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255786 cmp dword ptr [0x112816c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125578d jne 0x112557a1 */
  if (!C.zf) goto L_112557a1;
  /* 1125578f call 0x112557d0 */
  push32(0x11255794u); f_112557d0();
  /* 11255794 mov eax, dword ptr [0x112816c0] */
  EAX = (r32((uint32_t)(0x112816c0)));
  /* 11255799 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125579c mov dword ptr [0x112816c0], eax */
  w32((uint32_t)(0x112816c0), (EAX));
L_112557a1:;
  /* 112557a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112557a3 call 0x1124c7c0 */
  push32(0x112557a8u); f_1124c7c0();
  /* 112557a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112557ab:;
  /* 112557ab pop ebp */
  EBP = (pop32());
  /* 112557ac ret  */
  ESPCHK(0x11255770u, _esp0);
  ESP += 4; return;
}

/* FUN_100157b0 @ 0x112557b0 (30 bytes, 11 insns) */
void f_112557b0(void) {
  FTRACE(0x112557b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112557b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112557b1 mov ebp, esp */
  EBP = (ESP);
  /* 112557b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112557b5 call 0x1124c720 */
  push32(0x112557bau); f_1124c720();
  /* 112557ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112557bd call 0x112557d0 */
  push32(0x112557c2u); f_112557d0();
  /* 112557c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112557c4 call 0x1124c7c0 */
  push32(0x112557c9u); f_1124c7c0();
  /* 112557c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112557cc pop ebp */
  EBP = (pop32());
  /* 112557cd ret  */
  ESPCHK(0x112557b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157d0 @ 0x112557d0 (939 bytes, 266 insns) */
void f_112557d0(void) {
  FTRACE(0x112557d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112557d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112557d1 mov ebp, esp */
  EBP = (ESP);
  /* 112557d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112557d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112557dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 112557df call 0x1124c720 */
  push32(0x112557e4u); f_1124c720();
  /* 112557e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112557e7 mov dword ptr [0x11281608], 0 */
  w32((uint32_t)(0x11281608), (0x0u));
  /* 112557f1 mov dword ptr [0x1127f370], 0xffffffff */
  w32((uint32_t)(0x1127f370), (0xffffffffu));
  /* 112557fb mov eax, dword ptr [0x1127f370] */
  EAX = (r32((uint32_t)(0x1127f370)));
  /* 11255800 mov dword ptr [0x1127f360], eax */
  w32((uint32_t)(0x1127f360), (EAX));
  /* 11255805 push 0x1127c120 */
  push32((uint32_t)(0x1127c120u));
  /* 1125580a call 0x1125b1c0 */
  push32(0x1125580fu); f_1125b1c0();
  /* 1125580f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255812 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11255815 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255819 jne 0x11255953 */
  if (!C.zf) goto L_11255953;
  /* 1125581f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11255821 call 0x1124c7c0 */
  push32(0x11255826u); f_1124c7c0();
  /* 11255826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255829 push 0x11281610 */
  push32((uint32_t)(0x11281610u));
  /* 1125582e call dword ptr [0x11283434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283434))), 0x11255834u);
  /* 11255834 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255837 je 0x1125594e */
  if (C.zf) goto L_1125594e;
  /* 1125583d mov dword ptr [0x11281608], 1 */
  w32((uint32_t)(0x11281608), (0x1u));
  /* 11255847 mov ecx, dword ptr [0x11281610] */
  ECX = (r32((uint32_t)(0x11281610)));
  /* 1125584d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255850 mov dword ptr [0x1127f2c8], ecx */
  w32((uint32_t)(0x1127f2c8), (ECX));
  /* 11255856 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255858 mov dx, word ptr [0x11281656] */
  DX = (r16((uint32_t)(0x11281656)));
  /* 1125585f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11255861 je 0x11255879 */
  if (C.zf) goto L_11255879;
  /* 11255863 mov eax, dword ptr [0x11281664] */
  EAX = (r32((uint32_t)(0x11281664)));
  /* 11255868 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125586b mov ecx, dword ptr [0x1127f2c8] */
  ECX = (r32((uint32_t)(0x1127f2c8)));
  /* 11255871 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255873 mov dword ptr [0x1127f2c8], ecx */
  w32((uint32_t)(0x1127f2c8), (ECX));
L_11255879:;
  /* 11255879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125587b mov dx, word ptr [0x112816aa] */
  DX = (r16((uint32_t)(0x112816aa)));
  /* 11255882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11255884 je 0x112558ae */
  if (C.zf) goto L_112558ae;
  /* 11255886 cmp dword ptr [0x112816b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125588d je 0x112558ae */
  if (C.zf) goto L_112558ae;
  /* 1125588f mov dword ptr [0x1127f2cc], 1 */
  w32((uint32_t)(0x1127f2cc), (0x1u));
  /* 11255899 mov eax, dword ptr [0x112816b8] */
  EAX = (r32((uint32_t)(0x112816b8)));
  /* 1125589e sub eax, dword ptr [0x11281664] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11281664))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112558a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112558a7 mov dword ptr [0x1127f2d0], eax */
  w32((uint32_t)(0x1127f2d0), (EAX));
  /* 112558ac jmp 0x112558c2 */
  goto L_112558c2;
L_112558ae:;
  /* 112558ae mov dword ptr [0x1127f2cc], 0 */
  w32((uint32_t)(0x1127f2cc), (0x0u));
  /* 112558b8 mov dword ptr [0x1127f2d0], 0 */
  w32((uint32_t)(0x1127f2d0), (0x0u));
L_112558c2:;
  /* 112558c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 112558c5 push ecx */
  push32((uint32_t)(ECX));
  /* 112558c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112558c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112558ca mov edx, dword ptr [0x1127f354] */
  EDX = (r32((uint32_t)(0x1127f354)));
  /* 112558d0 push edx */
  push32((uint32_t)(EDX));
  /* 112558d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112558d3 push 0x11281614 */
  push32((uint32_t)(0x11281614u));
  /* 112558d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112558dd mov eax, dword ptr [0x112816f0] */
  EAX = (r32((uint32_t)(0x112816f0)));
  /* 112558e2 push eax */
  push32((uint32_t)(EAX));
  /* 112558e3 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x112558e9u);
  /* 112558e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112558eb je 0x112558ff */
  if (C.zf) goto L_112558ff;
  /* 112558ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112558f1 jne 0x112558ff */
  if (!C.zf) goto L_112558ff;
  /* 112558f3 mov ecx, dword ptr [0x1127f354] */
  ECX = (r32((uint32_t)(0x1127f354)));
  /* 112558f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 112558fd jmp 0x11255908 */
  goto L_11255908;
L_112558ff:;
  /* 112558ff mov edx, dword ptr [0x1127f354] */
  EDX = (r32((uint32_t)(0x1127f354)));
  /* 11255905 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11255908:;
  /* 11255908 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1125590b push eax */
  push32((uint32_t)(EAX));
  /* 1125590c push 0 */
  push32((uint32_t)(0x0u));
  /* 1125590e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11255910 mov ecx, dword ptr [0x1127f358] */
  ECX = (r32((uint32_t)(0x1127f358)));
  /* 11255916 push ecx */
  push32((uint32_t)(ECX));
  /* 11255917 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11255919 push 0x11281668 */
  push32((uint32_t)(0x11281668u));
  /* 1125591e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11255923 mov edx, dword ptr [0x112816f0] */
  EDX = (r32((uint32_t)(0x112816f0)));
  /* 11255929 push edx */
  push32((uint32_t)(EDX));
  /* 1125592a call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x11255930u);
  /* 11255930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11255932 je 0x11255945 */
  if (C.zf) goto L_11255945;
  /* 11255934 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255938 jne 0x11255945 */
  if (!C.zf) goto L_11255945;
  /* 1125593a mov eax, dword ptr [0x1127f358] */
  EAX = (r32((uint32_t)(0x1127f358)));
  /* 1125593f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11255943 jmp 0x1125594e */
  goto L_1125594e;
L_11255945:;
  /* 11255945 mov ecx, dword ptr [0x1127f358] */
  ECX = (r32((uint32_t)(0x1127f358)));
  /* 1125594b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1125594e:;
  /* 1125594e jmp 0x11255b77 */
  goto L_11255b77;
L_11255953:;
  /* 11255953 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255956 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11255959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125595b je 0x1125597d */
  if (C.zf) goto L_1125597d;
  /* 1125595d cmp dword ptr [0x112816bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255964 je 0x1125598c */
  if (C.zf) goto L_1125598c;
  /* 11255966 mov ecx, dword ptr [0x112816bc] */
  ECX = (r32((uint32_t)(0x112816bc)));
  /* 1125596c push ecx */
  push32((uint32_t)(ECX));
  /* 1125596d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255970 push edx */
  push32((uint32_t)(EDX));
  /* 11255971 call 0x112553c0 */
  push32(0x11255976u); f_112553c0();
  /* 11255976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125597b jne 0x1125598c */
  if (!C.zf) goto L_1125598c;
L_1125597d:;
  /* 1125597d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1125597f call 0x1124c7c0 */
  push32(0x11255984u); f_1124c7c0();
  /* 11255984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255987 jmp 0x11255b77 */
  goto L_11255b77;
L_1125598c:;
  /* 1125598c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125598e mov eax, dword ptr [0x112816bc] */
  EAX = (r32((uint32_t)(0x112816bc)));
  /* 11255993 push eax */
  push32((uint32_t)(EAX));
  /* 11255994 call 0x1124d2b0 */
  push32(0x11255999u); f_1124d2b0();
  /* 11255999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125599c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 112559a1 push 0x1127c118 */
  push32((uint32_t)(0x1127c118u));
  /* 112559a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112559a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112559ab push ecx */
  push32((uint32_t)(ECX));
  /* 112559ac call 0x11250db0 */
  push32(0x112559b1u); f_11250db0();
  /* 112559b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112559b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112559b7 push eax */
  push32((uint32_t)(EAX));
  /* 112559b8 call 0x1124c820 */
  push32(0x112559bdu); f_1124c820();
  /* 112559bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112559c0 mov dword ptr [0x112816bc], eax */
  w32((uint32_t)(0x112816bc), (EAX));
  /* 112559c5 cmp dword ptr [0x112816bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112559cc jne 0x112559dd */
  if (!C.zf) goto L_112559dd;
  /* 112559ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 112559d0 call 0x1124c7c0 */
  push32(0x112559d5u); f_1124c7c0();
  /* 112559d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112559d8 jmp 0x11255b77 */
  goto L_11255b77;
L_112559dd:;
  /* 112559dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112559e0 push edx */
  push32((uint32_t)(EDX));
  /* 112559e1 mov eax, dword ptr [0x112816bc] */
  EAX = (r32((uint32_t)(0x112816bc)));
  /* 112559e6 push eax */
  push32((uint32_t)(EAX));
  /* 112559e7 call 0x11250f30 */
  push32(0x112559ecu); f_11250f30();
  /* 112559ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112559ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 112559f1 call 0x1124c7c0 */
  push32(0x112559f6u); f_1124c7c0();
  /* 112559f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112559f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112559fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112559fe push ecx */
  push32((uint32_t)(ECX));
  /* 112559ff mov edx, dword ptr [0x1127f354] */
  EDX = (r32((uint32_t)(0x1127f354)));
  /* 11255a05 push edx */
  push32((uint32_t)(EDX));
  /* 11255a06 call 0x112517a0 */
  push32(0x11255a0bu); f_112517a0();
  /* 11255a0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a0e mov eax, dword ptr [0x1127f354] */
  EAX = (r32((uint32_t)(0x1127f354)));
  /* 11255a13 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11255a17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a1a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11255a20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11255a26 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255a29 jne 0x11255a3d */
  if (!C.zf) goto L_11255a3d;
  /* 11255a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11255a34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11255a3d:;
  /* 11255a3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a40 push eax */
  push32((uint32_t)(EAX));
  /* 11255a41 call 0x1125af40 */
  push32(0x11255a46u); f_1125af40();
  /* 11255a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a49 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255a4f mov dword ptr [0x1127f2c8], eax */
  w32((uint32_t)(0x1127f2c8), (EAX));
L_11255a54:;
  /* 11255a54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11255a5a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255a5d je 0x11255a75 */
  if (C.zf) goto L_11255a75;
  /* 11255a5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a62 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11255a65 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255a68 jl 0x11255a80 */
  if ((C.sf!=C.of)) goto L_11255a80;
  /* 11255a6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11255a70 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255a73 jg 0x11255a80 */
  if ((!C.zf&&C.sf==C.of)) goto L_11255a80;
L_11255a75:;
  /* 11255a75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11255a7e jmp 0x11255a54 */
  goto L_11255a54;
L_11255a80:;
  /* 11255a80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11255a86 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255a89 jne 0x11255b25 */
  if (!C.zf) goto L_11255b25;
  /* 11255a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255a95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11255a98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255a9b push edx */
  push32((uint32_t)(EDX));
  /* 11255a9c call 0x1125af40 */
  push32(0x11255aa1u); f_1125af40();
  /* 11255aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255aa4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255aa7 mov ecx, dword ptr [0x1127f2c8] */
  ECX = (r32((uint32_t)(0x1127f2c8)));
  /* 11255aad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255aaf mov dword ptr [0x1127f2c8], ecx */
  w32((uint32_t)(0x1127f2c8), (ECX));
L_11255ab5:;
  /* 11255ab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255ab8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11255abb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255abe jl 0x11255ad6 */
  if ((C.sf!=C.of)) goto L_11255ad6;
  /* 11255ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255ac3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11255ac6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255ac9 jg 0x11255ad6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11255ad6;
  /* 11255acb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255ace add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255ad1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11255ad4 jmp 0x11255ab5 */
  goto L_11255ab5;
L_11255ad6:;
  /* 11255ad6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255ad9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11255adc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255adf jne 0x11255b25 */
  if (!C.zf) goto L_11255b25;
  /* 11255ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255ae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255ae7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11255aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255aed push ecx */
  push32((uint32_t)(ECX));
  /* 11255aee call 0x1125af40 */
  push32(0x11255af3u); f_1125af40();
  /* 11255af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255af6 mov edx, dword ptr [0x1127f2c8] */
  EDX = (r32((uint32_t)(0x1127f2c8)));
  /* 11255afc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255afe mov dword ptr [0x1127f2c8], edx */
  w32((uint32_t)(0x1127f2c8), (EDX));
L_11255b04:;
  /* 11255b04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255b07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11255b0a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255b0d jl 0x11255b25 */
  if ((C.sf!=C.of)) goto L_11255b25;
  /* 11255b0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255b12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11255b15 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255b18 jg 0x11255b25 */
  if ((!C.zf&&C.sf==C.of)) goto L_11255b25;
  /* 11255b1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255b1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255b20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11255b23 jmp 0x11255b04 */
  goto L_11255b04;
L_11255b25:;
  /* 11255b25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255b29 je 0x11255b39 */
  if (C.zf) goto L_11255b39;
  /* 11255b2b mov edx, dword ptr [0x1127f2c8] */
  EDX = (r32((uint32_t)(0x1127f2c8)));
  /* 11255b31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11255b33 mov dword ptr [0x1127f2c8], edx */
  w32((uint32_t)(0x1127f2c8), (EDX));
L_11255b39:;
  /* 11255b39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255b3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11255b3f mov dword ptr [0x1127f2cc], ecx */
  w32((uint32_t)(0x1127f2cc), (ECX));
  /* 11255b45 cmp dword ptr [0x1127f2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255b4c je 0x11255b6e */
  if (C.zf) goto L_11255b6e;
  /* 11255b4e push 3 */
  push32((uint32_t)(0x3u));
  /* 11255b50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255b53 push edx */
  push32((uint32_t)(EDX));
  /* 11255b54 mov eax, dword ptr [0x1127f358] */
  EAX = (r32((uint32_t)(0x1127f358)));
  /* 11255b59 push eax */
  push32((uint32_t)(EAX));
  /* 11255b5a call 0x112517a0 */
  push32(0x11255b5fu); f_112517a0();
  /* 11255b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255b62 mov ecx, dword ptr [0x1127f358] */
  ECX = (r32((uint32_t)(0x1127f358)));
  /* 11255b68 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11255b6c jmp 0x11255b77 */
  goto L_11255b77;
L_11255b6e:;
  /* 11255b6e mov edx, dword ptr [0x1127f358] */
  EDX = (r32((uint32_t)(0x1127f358)));
  /* 11255b74 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11255b77:;
  /* 11255b77 mov esp, ebp */
  ESP = (EBP);
  /* 11255b79 pop ebp */
  EBP = (pop32());
  /* 11255b7a ret  */
  ESPCHK(0x112557d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b80 @ 0x11255b80 (46 bytes, 18 insns) */
void f_11255b80(void) {
  FTRACE(0x11255b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11255b81 mov ebp, esp */
  EBP = (ESP);
  /* 11255b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11255b84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11255b86 call 0x1124c720 */
  push32(0x11255b8bu); f_1124c720();
  /* 11255b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255b8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255b91 push eax */
  push32((uint32_t)(EAX));
  /* 11255b92 call 0x11255bb0 */
  push32(0x11255b97u); f_11255bb0();
  /* 11255b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255b9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11255b9d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11255b9f call 0x1124c7c0 */
  push32(0x11255ba4u); f_1124c7c0();
  /* 11255ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255baa mov esp, ebp */
  ESP = (EBP);
  /* 11255bac pop ebp */
  EBP = (pop32());
  /* 11255bad ret  */
  ESPCHK(0x11255b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bb0 @ 0x11255bb0 (762 bytes, 246 insns) */
void f_11255bb0(void) {
  FTRACE(0x11255bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11255bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11255bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11255bb4 cmp dword ptr [0x1127f2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255bbb jne 0x11255bc4 */
  if (!C.zf) goto L_11255bc4;
  /* 11255bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255bbf jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255bc4:;
  /* 11255bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255bc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11255bca cmp ecx, dword ptr [0x1127f360] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f360))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255bd0 jne 0x11255be4 */
  if (!C.zf) goto L_11255be4;
  /* 11255bd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255bd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11255bd8 cmp eax, dword ptr [0x1127f370] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f370))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255bde je 0x11255dab */
  if (C.zf) goto L_11255dab;
L_11255be4:;
  /* 11255be4 cmp dword ptr [0x11281608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255beb je 0x11255d65 */
  if (C.zf) goto L_11255d65;
  /* 11255bf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255bf3 mov cx, word ptr [0x112816a8] */
  CX = (r16((uint32_t)(0x112816a8)));
  /* 11255bfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11255bfc jne 0x11255c59 */
  if (!C.zf) goto L_11255c59;
  /* 11255bfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255c00 mov dx, word ptr [0x112816b6] */
  DX = (r16((uint32_t)(0x112816b6)));
  /* 11255c07 push edx */
  push32((uint32_t)(EDX));
  /* 11255c08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255c0a mov ax, word ptr [0x112816b4] */
  AX = (r16((uint32_t)(0x112816b4)));
  /* 11255c10 push eax */
  push32((uint32_t)(EAX));
  /* 11255c11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255c13 mov cx, word ptr [0x112816b2] */
  CX = (r16((uint32_t)(0x112816b2)));
  /* 11255c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11255c1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255c1d mov dx, word ptr [0x112816b0] */
  DX = (r16((uint32_t)(0x112816b0)));
  /* 11255c24 push edx */
  push32((uint32_t)(EDX));
  /* 11255c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255c27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255c29 mov ax, word ptr [0x112816ac] */
  AX = (r16((uint32_t)(0x112816ac)));
  /* 11255c2f push eax */
  push32((uint32_t)(EAX));
  /* 11255c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255c32 mov cx, word ptr [0x112816ae] */
  CX = (r16((uint32_t)(0x112816ae)));
  /* 11255c39 push ecx */
  push32((uint32_t)(ECX));
  /* 11255c3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255c3c mov dx, word ptr [0x112816aa] */
  DX = (r16((uint32_t)(0x112816aa)));
  /* 11255c43 push edx */
  push32((uint32_t)(EDX));
  /* 11255c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255c47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11255c4a push ecx */
  push32((uint32_t)(ECX));
  /* 11255c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11255c4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11255c4f call 0x11255eb0 */
  push32(0x11255c54u); f_11255eb0();
  /* 11255c54 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255c57 jmp 0x11255caa */
  goto L_11255caa;
L_11255c59:;
  /* 11255c59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255c5b mov dx, word ptr [0x112816b6] */
  DX = (r16((uint32_t)(0x112816b6)));
  /* 11255c62 push edx */
  push32((uint32_t)(EDX));
  /* 11255c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255c65 mov ax, word ptr [0x112816b4] */
  AX = (r16((uint32_t)(0x112816b4)));
  /* 11255c6b push eax */
  push32((uint32_t)(EAX));
  /* 11255c6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255c6e mov cx, word ptr [0x112816b2] */
  CX = (r16((uint32_t)(0x112816b2)));
  /* 11255c75 push ecx */
  push32((uint32_t)(ECX));
  /* 11255c76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255c78 mov dx, word ptr [0x112816b0] */
  DX = (r16((uint32_t)(0x112816b0)));
  /* 11255c7f push edx */
  push32((uint32_t)(EDX));
  /* 11255c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255c82 mov ax, word ptr [0x112816ae] */
  AX = (r16((uint32_t)(0x112816ae)));
  /* 11255c88 push eax */
  push32((uint32_t)(EAX));
  /* 11255c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11255c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255c8f mov cx, word ptr [0x112816aa] */
  CX = (r16((uint32_t)(0x112816aa)));
  /* 11255c96 push ecx */
  push32((uint32_t)(ECX));
  /* 11255c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255c9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11255c9d push eax */
  push32((uint32_t)(EAX));
  /* 11255c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11255ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11255ca2 call 0x11255eb0 */
  push32(0x11255ca7u); f_11255eb0();
  /* 11255ca7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11255caa:;
  /* 11255caa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255cac mov cx, word ptr [0x11281654] */
  CX = (r16((uint32_t)(0x11281654)));
  /* 11255cb3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11255cb5 jne 0x11255d12 */
  if (!C.zf) goto L_11255d12;
  /* 11255cb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255cb9 mov dx, word ptr [0x11281662] */
  DX = (r16((uint32_t)(0x11281662)));
  /* 11255cc0 push edx */
  push32((uint32_t)(EDX));
  /* 11255cc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255cc3 mov ax, word ptr [0x11281660] */
  AX = (r16((uint32_t)(0x11281660)));
  /* 11255cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11255cca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255ccc mov cx, word ptr [0x1128165e] */
  CX = (r16((uint32_t)(0x1128165e)));
  /* 11255cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11255cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255cd6 mov dx, word ptr [0x1128165c] */
  DX = (r16((uint32_t)(0x1128165c)));
  /* 11255cdd push edx */
  push32((uint32_t)(EDX));
  /* 11255cde push 0 */
  push32((uint32_t)(0x0u));
  /* 11255ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255ce2 mov ax, word ptr [0x11281658] */
  AX = (r16((uint32_t)(0x11281658)));
  /* 11255ce8 push eax */
  push32((uint32_t)(EAX));
  /* 11255ce9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255ceb mov cx, word ptr [0x1128165a] */
  CX = (r16((uint32_t)(0x1128165a)));
  /* 11255cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11255cf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255cf5 mov dx, word ptr [0x11281656] */
  DX = (r16((uint32_t)(0x11281656)));
  /* 11255cfc push edx */
  push32((uint32_t)(EDX));
  /* 11255cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255d00 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11255d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11255d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11255d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d08 call 0x11255eb0 */
  push32(0x11255d0du); f_11255eb0();
  /* 11255d0d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255d10 jmp 0x11255d63 */
  goto L_11255d63;
L_11255d12:;
  /* 11255d12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255d14 mov dx, word ptr [0x11281662] */
  DX = (r16((uint32_t)(0x11281662)));
  /* 11255d1b push edx */
  push32((uint32_t)(EDX));
  /* 11255d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255d1e mov ax, word ptr [0x11281660] */
  AX = (r16((uint32_t)(0x11281660)));
  /* 11255d24 push eax */
  push32((uint32_t)(EAX));
  /* 11255d25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255d27 mov cx, word ptr [0x1128165e] */
  CX = (r16((uint32_t)(0x1128165e)));
  /* 11255d2e push ecx */
  push32((uint32_t)(ECX));
  /* 11255d2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11255d31 mov dx, word ptr [0x1128165c] */
  DX = (r16((uint32_t)(0x1128165c)));
  /* 11255d38 push edx */
  push32((uint32_t)(EDX));
  /* 11255d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255d3b mov ax, word ptr [0x1128165a] */
  AX = (r16((uint32_t)(0x1128165a)));
  /* 11255d41 push eax */
  push32((uint32_t)(EAX));
  /* 11255d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11255d48 mov cx, word ptr [0x11281656] */
  CX = (r16((uint32_t)(0x11281656)));
  /* 11255d4f push ecx */
  push32((uint32_t)(ECX));
  /* 11255d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255d53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11255d56 push eax */
  push32((uint32_t)(EAX));
  /* 11255d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d5b call 0x11255eb0 */
  push32(0x11255d60u); f_11255eb0();
  /* 11255d60 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11255d63:;
  /* 11255d63 jmp 0x11255dab */
  goto L_11255dab;
L_11255d65:;
  /* 11255d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11255d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11255d73 push 4 */
  push32((uint32_t)(0x4u));
  /* 11255d75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255d78 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11255d7b push edx */
  push32((uint32_t)(EDX));
  /* 11255d7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11255d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11255d80 call 0x11255eb0 */
  push32(0x11255d85u); f_11255eb0();
  /* 11255d85 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11255d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11255d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255d94 push 5 */
  push32((uint32_t)(0x5u));
  /* 11255d96 push 0xa */
  push32((uint32_t)(0xau));
  /* 11255d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255d9b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11255d9e push ecx */
  push32((uint32_t)(ECX));
  /* 11255d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11255da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11255da3 call 0x11255eb0 */
  push32(0x11255da8u); f_11255eb0();
  /* 11255da8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11255dab:;
  /* 11255dab mov edx, dword ptr [0x1127f364] */
  EDX = (r32((uint32_t)(0x1127f364)));
  /* 11255db1 cmp edx, dword ptr [0x1127f374] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1127f374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255db7 jge 0x11255e04 */
  if ((C.sf==C.of)) goto L_11255e04;
  /* 11255db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255dbc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11255dbf cmp ecx, dword ptr [0x1127f364] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255dc5 jl 0x11255dd5 */
  if ((C.sf!=C.of)) goto L_11255dd5;
  /* 11255dc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255dca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11255dcd cmp eax, dword ptr [0x1127f374] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255dd3 jle 0x11255ddc */
  if ((C.zf||C.sf!=C.of)) goto L_11255ddc;
L_11255dd5:;
  /* 11255dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255dd7 jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255ddc:;
  /* 11255ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255ddf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11255de2 cmp edx, dword ptr [0x1127f364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1127f364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255de8 jle 0x11255e02 */
  if ((C.zf||C.sf!=C.of)) goto L_11255e02;
  /* 11255dea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255ded mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11255df0 cmp ecx, dword ptr [0x1127f374] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255df6 jge 0x11255e02 */
  if ((C.sf==C.of)) goto L_11255e02;
  /* 11255df8 mov eax, 1 */
  EAX = (0x1u);
  /* 11255dfd jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255e02:;
  /* 11255e02 jmp 0x11255e47 */
  goto L_11255e47;
L_11255e04:;
  /* 11255e04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e07 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11255e0a cmp eax, dword ptr [0x1127f374] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e10 jl 0x11255e20 */
  if ((C.sf!=C.of)) goto L_11255e20;
  /* 11255e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e15 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11255e18 cmp edx, dword ptr [0x1127f364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1127f364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e1e jle 0x11255e27 */
  if ((C.zf||C.sf!=C.of)) goto L_11255e27;
L_11255e20:;
  /* 11255e20 mov eax, 1 */
  EAX = (0x1u);
  /* 11255e25 jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255e27:;
  /* 11255e27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e2a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11255e2d cmp ecx, dword ptr [0x1127f374] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e33 jle 0x11255e47 */
  if ((C.zf||C.sf!=C.of)) goto L_11255e47;
  /* 11255e35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e38 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11255e3b cmp eax, dword ptr [0x1127f364] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e41 jge 0x11255e47 */
  if ((C.sf==C.of)) goto L_11255e47;
  /* 11255e43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255e45 jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255e47:;
  /* 11255e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11255e4d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11255e55 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e5a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11255e5d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255e63 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255e65 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255e6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11255e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11255e71 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11255e74 cmp edx, dword ptr [0x1127f364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1127f364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e7a jne 0x11255e92 */
  if (!C.zf) goto L_11255e92;
  /* 11255e7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255e7f cmp eax, dword ptr [0x1127f368] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127f368))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e85 jl 0x11255e8e */
  if ((C.sf!=C.of)) goto L_11255e8e;
  /* 11255e87 mov eax, 1 */
  EAX = (0x1u);
  /* 11255e8c jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255e8e:;
  /* 11255e8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11255e90 jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255e92:;
  /* 11255e92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255e95 cmp ecx, dword ptr [0x1127f378] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127f378))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255e9b jge 0x11255ea4 */
  if ((C.sf==C.of)) goto L_11255ea4;
  /* 11255e9d mov eax, 1 */
  EAX = (0x1u);
  /* 11255ea2 jmp 0x11255ea6 */
  goto L_11255ea6;
L_11255ea4:;
  /* 11255ea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11255ea6:;
  /* 11255ea6 mov esp, ebp */
  ESP = (EBP);
  /* 11255ea8 pop ebp */
  EBP = (pop32());
  /* 11255ea9 ret  */
  ESPCHK(0x11255bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015eb0 @ 0x11255eb0 (504 bytes, 145 insns) */
void f_11255eb0(void) {
  FTRACE(0x11255eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11255eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11255eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11255eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255eb6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255eba jne 0x11255f8c */
  if (!C.zf) goto L_11255f8c;
  /* 11255ec0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11255ec3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11255ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11255ec8 jne 0x11255ed9 */
  if (!C.zf) goto L_11255ed9;
  /* 11255eca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11255ecd mov edx, dword ptr [ecx*4 + 0x1127f378] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127f378)));
  /* 11255ed4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11255ed7 jmp 0x11255ee6 */
  goto L_11255ee6;
L_11255ed9:;
  /* 11255ed9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11255edc mov ecx, dword ptr [eax*4 + 0x1127f3ac] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127f3ac)));
  /* 11255ee3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11255ee6:;
  /* 11255ee6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11255ee9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255eec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11255eef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11255ef2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255ef5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255efb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255efe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255f00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11255f03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255f06 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11255f09 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11255f0d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11255f0e mov ecx, 7 */
  ECX = (0x7u);
  /* 11255f13 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11255f15 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11255f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11255f1b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255f1e jge 0x11255f39 */
  if ((C.sf==C.of)) goto L_11255f39;
  /* 11255f20 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11255f23 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255f26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11255f29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255f2c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255f2f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255f32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255f34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11255f37 jmp 0x11255f4d */
  goto L_11255f4d;
L_11255f39:;
  /* 11255f39 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11255f3c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255f3f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11255f42 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255f45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255f48 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255f4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11255f4d:;
  /* 11255f4d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255f51 jne 0x11255f8a */
  if (!C.zf) goto L_11255f8a;
  /* 11255f53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11255f56 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11255f59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11255f5b jne 0x11255f6c */
  if (!C.zf) goto L_11255f6c;
  /* 11255f5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11255f60 mov eax, dword ptr [edx*4 + 0x1127f37c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1127f37c)));
  /* 11255f67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11255f6a jmp 0x11255f79 */
  goto L_11255f79;
L_11255f6c:;
  /* 11255f6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11255f6f mov edx, dword ptr [ecx*4 + 0x1127f3b0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127f3b0)));
  /* 11255f76 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11255f79:;
  /* 11255f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255f7c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255f7f jle 0x11255f8a */
  if ((C.zf||C.sf!=C.of)) goto L_11255f8a;
  /* 11255f81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255f84 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11255f87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11255f8a:;
  /* 11255f8a jmp 0x11255fc1 */
  goto L_11255fc1;
L_11255f8c:;
  /* 11255f8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11255f8f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11255f92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11255f94 jne 0x11255fa5 */
  if (!C.zf) goto L_11255fa5;
  /* 11255f96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11255f99 mov ecx, dword ptr [eax*4 + 0x1127f378] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127f378)));
  /* 11255fa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11255fa3 jmp 0x11255fb2 */
  goto L_11255fb2;
L_11255fa5:;
  /* 11255fa5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11255fa8 mov eax, dword ptr [edx*4 + 0x1127f3ac] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1127f3ac)));
  /* 11255faf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11255fb2:;
  /* 11255fb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11255fb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11255fb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255fbb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255fbe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11255fc1:;
  /* 11255fc1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11255fc5 jne 0x11256001 */
  if (!C.zf) goto L_11256001;
  /* 11255fc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11255fca mov dword ptr [0x1127f364], eax */
  w32((uint32_t)(0x1127f364), (EAX));
  /* 11255fcf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11255fd2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255fd5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11255fd8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255fda imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255fdd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11255fe0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255fe2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11255fe8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11255feb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11255fed mov dword ptr [0x1127f368], ecx */
  w32((uint32_t)(0x1127f368), (ECX));
  /* 11255ff3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11255ff6 mov dword ptr [0x1127f360], edx */
  w32((uint32_t)(0x1127f360), (EDX));
  /* 11255ffc jmp 0x112560a4 */
  goto L_112560a4;
L_11256001:;
  /* 11256001 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256004 mov dword ptr [0x1127f374], eax */
  w32((uint32_t)(0x1127f374), (EAX));
  /* 11256009 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1125600c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125600f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11256012 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256014 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256017 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1125601a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125601c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256022 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11256025 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256027 mov dword ptr [0x1127f378], ecx */
  w32((uint32_t)(0x1127f378), (ECX));
  /* 1125602d mov edx, dword ptr [0x1127f2d0] */
  EDX = (r32((uint32_t)(0x1127f2d0)));
  /* 11256033 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256039 mov eax, dword ptr [0x1127f378] */
  EAX = (r32((uint32_t)(0x1127f378)));
  /* 1125603e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256040 mov dword ptr [0x1127f378], eax */
  w32((uint32_t)(0x1127f378), (EAX));
  /* 11256045 cmp dword ptr [0x1127f378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125604c jge 0x11256071 */
  if ((C.sf==C.of)) goto L_11256071;
  /* 1125604e mov ecx, dword ptr [0x1127f378] */
  ECX = (r32((uint32_t)(0x1127f378)));
  /* 11256054 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125605a mov dword ptr [0x1127f378], ecx */
  w32((uint32_t)(0x1127f378), (ECX));
  /* 11256060 mov edx, dword ptr [0x1127f374] */
  EDX = (r32((uint32_t)(0x1127f374)));
  /* 11256066 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256069 mov dword ptr [0x1127f374], edx */
  w32((uint32_t)(0x1127f374), (EDX));
  /* 1125606f jmp 0x1125609b */
  goto L_1125609b;
L_11256071:;
  /* 11256071 cmp dword ptr [0x1127f378], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1127f378))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125607b jl 0x1125609b */
  if ((C.sf!=C.of)) goto L_1125609b;
  /* 1125607d mov eax, dword ptr [0x1127f378] */
  EAX = (r32((uint32_t)(0x1127f378)));
  /* 11256082 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256087 mov dword ptr [0x1127f378], eax */
  w32((uint32_t)(0x1127f378), (EAX));
  /* 1125608c mov ecx, dword ptr [0x1127f374] */
  ECX = (r32((uint32_t)(0x1127f374)));
  /* 11256092 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256095 mov dword ptr [0x1127f374], ecx */
  w32((uint32_t)(0x1127f374), (ECX));
L_1125609b:;
  /* 1125609b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125609e mov dword ptr [0x1127f370], edx */
  w32((uint32_t)(0x1127f370), (EDX));
L_112560a4:;
  /* 112560a4 mov esp, ebp */
  ESP = (EBP);
  /* 112560a6 pop ebp */
  EBP = (pop32());
  /* 112560a7 ret  */
  ESPCHK(0x11255eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100160b0 @ 0x112560b0 (836 bytes, 238 insns) */
void f_112560b0(void) {
  FTRACE(0x112560b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112560b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112560b1 mov ebp, esp */
  EBP = (ESP);
  /* 112560b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112560b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112560b8 call 0x1124c720 */
  push32(0x112560bdu); f_1124c720();
  /* 112560bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112560c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112560c3 push eax */
  push32((uint32_t)(EAX));
  /* 112560c4 call 0x11256400 */
  push32(0x112560c9u); f_11256400();
  /* 112560c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112560cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112560cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112560d2 cmp ecx, dword ptr [0x11282af8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282af8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112560d8 jne 0x112560eb */
  if (!C.zf) goto L_112560eb;
  /* 112560da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112560dc call 0x1124c7c0 */
  push32(0x112560e1u); f_1124c7c0();
  /* 112560e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112560e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112560e6 jmp 0x112563f0 */
  goto L_112563f0;
L_112560eb:;
  /* 112560eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112560ef jne 0x1125610c */
  if (!C.zf) goto L_1125610c;
  /* 112560f1 call 0x112564e0 */
  push32(0x112560f6u); f_112564e0();
  /* 112560f6 call 0x11256560 */
  push32(0x112560fbu); f_11256560();
  /* 112560fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112560fd call 0x1124c7c0 */
  push32(0x11256102u); f_1124c7c0();
  /* 11256102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11256107 jmp 0x112563f0 */
  goto L_112563f0;
L_1125610c:;
  /* 1125610c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11256113 jmp 0x1125611e */
  goto L_1125611e;
L_11256115:;
  /* 11256115 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256118 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125611b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125611e:;
  /* 1125611e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256122 jae 0x1125626f */
  if (!C.cf) goto L_1125626f;
  /* 11256128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125612b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125612e mov ecx, dword ptr [eax + 0x1127f3f0] */
  ECX = (r32((uint32_t)(EAX + 0x1127f3f0)));
  /* 11256134 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256137 jne 0x1125626a */
  if (!C.zf) goto L_1125626a;
  /* 1125613d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11256144 jmp 0x1125614f */
  goto L_1125614f;
L_11256146:;
  /* 11256146 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256149 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125614c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1125614f:;
  /* 1125614f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256156 jae 0x11256164 */
  if (!C.cf) goto L_11256164;
  /* 11256158 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125615b mov byte ptr [eax + 0x11282c80], 0 */
  w8((uint32_t)(EAX + 0x11282c80), (0x0u));
  /* 11256162 jmp 0x11256146 */
  goto L_11256146;
L_11256164:;
  /* 11256164 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125616b jmp 0x11256176 */
  goto L_11256176;
L_1125616d:;
  /* 1125616d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11256170 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256173 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11256176:;
  /* 11256176 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125617a jae 0x112561f7 */
  if (!C.cf) goto L_112561f7;
  /* 1125617c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125617f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256182 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11256185 lea ecx, [edx + eax*8 + 0x1127f400] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1127f400));
  /* 1125618c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125618f jmp 0x1125619a */
  goto L_1125619a;
L_11256191:;
  /* 11256191 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256194 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256197 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1125619a:;
  /* 1125619a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125619d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125619f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112561a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112561a3 je 0x112561f2 */
  if (C.zf) goto L_112561f2;
  /* 112561a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112561a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112561aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112561ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112561af je 0x112561f2 */
  if (C.zf) goto L_112561f2;
  /* 112561b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112561b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112561b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112561b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112561bb jmp 0x112561c6 */
  goto L_112561c6;
L_112561bd:;
  /* 112561bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112561c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112561c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112561c6:;
  /* 112561c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112561c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112561cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112561ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112561d1 ja 0x112561f0 */
  if ((!C.cf&&!C.zf)) goto L_112561f0;
  /* 112561d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112561d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112561d9 mov dl, byte ptr [eax + 0x11282c81] */
  DL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 112561df or dl, byte ptr [ecx + 0x1127f3e8] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1127f3e8))); DL = (_r); fl_logic(_r,8); }
  /* 112561e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112561e8 mov byte ptr [eax + 0x11282c81], dl */
  w8((uint32_t)(EAX + 0x11282c81), (DL));
  /* 112561ee jmp 0x112561bd */
  goto L_112561bd;
L_112561f0:;
  /* 112561f0 jmp 0x11256191 */
  goto L_11256191;
L_112561f2:;
  /* 112561f2 jmp 0x1125616d */
  goto L_1125616d;
L_112561f7:;
  /* 112561f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112561fa mov dword ptr [0x11282af8], ecx */
  w32((uint32_t)(0x11282af8), (ECX));
  /* 11256200 mov dword ptr [0x11282b7c], 1 */
  w32((uint32_t)(0x11282b7c), (0x1u));
  /* 1125620a mov edx, dword ptr [0x11282af8] */
  EDX = (r32((uint32_t)(0x11282af8)));
  /* 11256210 push edx */
  push32((uint32_t)(EDX));
  /* 11256211 call 0x11256460 */
  push32(0x11256216u); f_11256460();
  /* 11256216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256219 mov dword ptr [0x11282d84], eax */
  w32((uint32_t)(0x11282d84), (EAX));
  /* 1125621e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11256225 jmp 0x11256230 */
  goto L_11256230;
L_11256227:;
  /* 11256227 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125622a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125622d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11256230:;
  /* 11256230 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256234 jae 0x11256254 */
  if (!C.cf) goto L_11256254;
  /* 11256236 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256239 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125623c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125623f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11256242 mov cx, word ptr [ecx + eax*2 + 0x1127f3f4] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1127f3f4)));
  /* 1125624a mov word ptr [edx*2 + 0x11282b70], cx */
  w16((uint32_t)(EDX*2 + 0x11282b70), (CX));
  /* 11256252 jmp 0x11256227 */
  goto L_11256227;
L_11256254:;
  /* 11256254 call 0x11256560 */
  push32(0x11256259u); f_11256560();
  /* 11256259 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1125625b call 0x1124c7c0 */
  push32(0x11256260u); f_1124c7c0();
  /* 11256260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11256265 jmp 0x112563f0 */
  goto L_112563f0;
L_1125626a:;
  /* 1125626a jmp 0x11256115 */
  goto L_11256115;
L_1125626f:;
  /* 1125626f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11256272 push edx */
  push32((uint32_t)(EDX));
  /* 11256273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256276 push eax */
  push32((uint32_t)(EAX));
  /* 11256277 call dword ptr [0x112833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a0))), 0x1125627du);
  /* 1125627d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256280 jne 0x112563c2 */
  if (!C.zf) goto L_112563c2;
  /* 11256286 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1125628d jmp 0x11256298 */
  goto L_11256298;
L_1125628f:;
  /* 1125628f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256292 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256295 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11256298:;
  /* 11256298 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125629f jae 0x112562ad */
  if (!C.cf) goto L_112562ad;
  /* 112562a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112562a4 mov byte ptr [edx + 0x11282c80], 0 */
  w8((uint32_t)(EDX + 0x11282c80), (0x0u));
  /* 112562ab jmp 0x1125628f */
  goto L_1125628f;
L_112562ad:;
  /* 112562ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112562b0 mov dword ptr [0x11282af8], eax */
  w32((uint32_t)(0x11282af8), (EAX));
  /* 112562b5 mov dword ptr [0x11282d84], 0 */
  w32((uint32_t)(0x11282d84), (0x0u));
  /* 112562bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112562c3 jbe 0x1125637e */
  if ((C.cf||C.zf)) goto L_1125637e;
  /* 112562c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 112562cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 112562cf jmp 0x112562da */
  goto L_112562da;
L_112562d1:;
  /* 112562d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112562d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112562d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_112562da:;
  /* 112562da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112562dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112562df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112562e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112562e3 je 0x1125632c */
  if (C.zf) goto L_1125632c;
  /* 112562e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112562e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112562ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112562ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112562ef je 0x1125632c */
  if (C.zf) goto L_1125632c;
  /* 112562f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112562f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112562f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112562f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112562fb jmp 0x11256306 */
  goto L_11256306;
L_112562fd:;
  /* 112562fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256300 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256303 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11256306:;
  /* 11256306 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11256309 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125630b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1125630e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256311 ja 0x1125632a */
  if ((!C.cf&&!C.zf)) goto L_1125632a;
  /* 11256313 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256316 mov cl, byte ptr [eax + 0x11282c81] */
  CL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 1125631c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1125631f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256322 mov byte ptr [edx + 0x11282c81], cl */
  w8((uint32_t)(EDX + 0x11282c81), (CL));
  /* 11256328 jmp 0x112562fd */
  goto L_112562fd;
L_1125632a:;
  /* 1125632a jmp 0x112562d1 */
  goto L_112562d1;
L_1125632c:;
  /* 1125632c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11256333 jmp 0x1125633e */
  goto L_1125633e;
L_11256335:;
  /* 11256335 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256338 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125633b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1125633e:;
  /* 1125633e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256345 jae 0x1125635e */
  if (!C.cf) goto L_1125635e;
  /* 11256347 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125634a mov dl, byte ptr [ecx + 0x11282c81] */
  DL = (r8((uint32_t)(ECX + 0x11282c81)));
  /* 11256350 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11256353 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11256356 mov byte ptr [eax + 0x11282c81], dl */
  w8((uint32_t)(EAX + 0x11282c81), (DL));
  /* 1125635c jmp 0x11256335 */
  goto L_11256335;
L_1125635e:;
  /* 1125635e mov ecx, dword ptr [0x11282af8] */
  ECX = (r32((uint32_t)(0x11282af8)));
  /* 11256364 push ecx */
  push32((uint32_t)(ECX));
  /* 11256365 call 0x11256460 */
  push32(0x1125636au); f_11256460();
  /* 1125636a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125636d mov dword ptr [0x11282d84], eax */
  w32((uint32_t)(0x11282d84), (EAX));
  /* 11256372 mov dword ptr [0x11282b7c], 1 */
  w32((uint32_t)(0x11282b7c), (0x1u));
  /* 1125637c jmp 0x11256388 */
  goto L_11256388;
L_1125637e:;
  /* 1125637e mov dword ptr [0x11282b7c], 0 */
  w32((uint32_t)(0x11282b7c), (0x0u));
L_11256388:;
  /* 11256388 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125638f jmp 0x1125639a */
  goto L_1125639a;
L_11256391:;
  /* 11256391 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11256394 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256397 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1125639a:;
  /* 1125639a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125639e jae 0x112563af */
  if (!C.cf) goto L_112563af;
  /* 112563a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112563a3 mov word ptr [eax*2 + 0x11282b70], 0 */
  w16((uint32_t)(EAX*2 + 0x11282b70), (0x0u));
  /* 112563ad jmp 0x11256391 */
  goto L_11256391;
L_112563af:;
  /* 112563af call 0x11256560 */
  push32(0x112563b4u); f_11256560();
  /* 112563b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112563b6 call 0x1124c7c0 */
  push32(0x112563bbu); f_1124c7c0();
  /* 112563bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112563be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112563c0 jmp 0x112563f0 */
  goto L_112563f0;
L_112563c2:;
  /* 112563c2 cmp dword ptr [0x112816c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112563c9 je 0x112563e3 */
  if (C.zf) goto L_112563e3;
  /* 112563cb call 0x112564e0 */
  push32(0x112563d0u); f_112564e0();
  /* 112563d0 call 0x11256560 */
  push32(0x112563d5u); f_11256560();
  /* 112563d5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112563d7 call 0x1124c7c0 */
  push32(0x112563dcu); f_1124c7c0();
  /* 112563dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112563df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112563e1 jmp 0x112563f0 */
  goto L_112563f0;
L_112563e3:;
  /* 112563e3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112563e5 call 0x1124c7c0 */
  push32(0x112563eau); f_1124c7c0();
  /* 112563ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112563ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112563f0:;
  /* 112563f0 mov esp, ebp */
  ESP = (EBP);
  /* 112563f2 pop ebp */
  EBP = (pop32());
  /* 112563f3 ret  */
  ESPCHK(0x112560b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11256400 (89 bytes, 21 insns) */
void f_11256400(void) {
  FTRACE(0x11256400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256400 push ebp */
  push32((uint32_t)(EBP));
  /* 11256401 mov ebp, esp */
  EBP = (ESP);
  /* 11256403 mov dword ptr [0x112816c4], 0 */
  w32((uint32_t)(0x112816c4), (0x0u));
  /* 1125640d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256411 jne 0x11256425 */
  if (!C.zf) goto L_11256425;
  /* 11256413 mov dword ptr [0x112816c4], 1 */
  w32((uint32_t)(0x112816c4), (0x1u));
  /* 1125641d call dword ptr [0x1128338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128338c))), 0x11256423u);
  /* 11256423 jmp 0x11256457 */
  goto L_11256457;
L_11256425:;
  /* 11256425 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256429 jne 0x1125643d */
  if (!C.zf) goto L_1125643d;
  /* 1125642b mov dword ptr [0x112816c4], 1 */
  w32((uint32_t)(0x112816c4), (0x1u));
  /* 11256435 call dword ptr [0x11283390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283390))), 0x1125643bu);
  /* 1125643b jmp 0x11256457 */
  goto L_11256457;
L_1125643d:;
  /* 1125643d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256441 jne 0x11256454 */
  if (!C.zf) goto L_11256454;
  /* 11256443 mov dword ptr [0x112816c4], 1 */
  w32((uint32_t)(0x112816c4), (0x1u));
  /* 1125644d mov eax, dword ptr [0x112816f0] */
  EAX = (r32((uint32_t)(0x112816f0)));
  /* 11256452 jmp 0x11256457 */
  goto L_11256457;
L_11256454:;
  /* 11256454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11256457:;
  /* 11256457 pop ebp */
  EBP = (pop32());
  /* 11256458 ret  */
  ESPCHK(0x11256400u, _esp0);
  ESP += 4; return;
}

/* FUN_10016460 @ 0x11256460 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11256460(void) {
  FTRACE(0x11256460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256460 push ebp */
  push32((uint32_t)(EBP));
  /* 11256461 mov ebp, esp */
  EBP = (ESP);
  /* 11256463 push ecx */
  push32((uint32_t)(ECX));
  /* 11256464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256467 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125646a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125646d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256473 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11256476 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125647a ja 0x112564aa */
  if ((!C.cf&&!C.zf)) goto L_112564aa;
  /* 1125647c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125647f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11256481 mov dl, byte ptr [eax + 0x112564c4] */
  DL = (r8((uint32_t)(EAX + 0x112564c4)));
  /* 11256487 jmp dword ptr [edx*4 + 0x112564b0] */
  switch (EDX) {
    case 0: goto L_1125648e;
    case 1: goto L_11256495;
    case 2: goto L_1125649c;
    case 3: goto L_112564a3;
    case 4: goto L_112564aa;
    default: x86_unimpl("switch@0x11256487 out of table"); return;
  }
L_1125648e:;
  /* 1125648e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11256493 jmp 0x112564ac */
  goto L_112564ac;
L_11256495:;
  /* 11256495 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1125649a jmp 0x112564ac */
  goto L_112564ac;
L_1125649c:;
  /* 1125649c mov eax, 0x412 */
  EAX = (0x412u);
  /* 112564a1 jmp 0x112564ac */
  goto L_112564ac;
L_112564a3:;
  /* 112564a3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 112564a8 jmp 0x112564ac */
  goto L_112564ac;
L_112564aa:;
  /* 112564aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112564ac:;
  /* 112564ac mov esp, ebp */
  ESP = (EBP);
  /* 112564ae pop ebp */
  EBP = (pop32());
  /* 112564af ret  */
  ESPCHK(0x11256460u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x112564e0 (116 bytes, 29 insns) */
void f_112564e0(void) {
  FTRACE(0x112564e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112564e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112564e1 mov ebp, esp */
  EBP = (ESP);
  /* 112564e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112564e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112564eb jmp 0x112564f6 */
  goto L_112564f6;
L_112564ed:;
  /* 112564ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112564f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112564f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112564f6:;
  /* 112564f6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112564fd jge 0x1125650b */
  if ((C.sf==C.of)) goto L_1125650b;
  /* 112564ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256502 mov byte ptr [ecx + 0x11282c80], 0 */
  w8((uint32_t)(ECX + 0x11282c80), (0x0u));
  /* 11256509 jmp 0x112564ed */
  goto L_112564ed;
L_1125650b:;
  /* 1125650b mov dword ptr [0x11282af8], 0 */
  w32((uint32_t)(0x11282af8), (0x0u));
  /* 11256515 mov dword ptr [0x11282b7c], 0 */
  w32((uint32_t)(0x11282b7c), (0x0u));
  /* 1125651f mov dword ptr [0x11282d84], 0 */
  w32((uint32_t)(0x11282d84), (0x0u));
  /* 11256529 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11256530 jmp 0x1125653b */
  goto L_1125653b;
L_11256532:;
  /* 11256532 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256535 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256538 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125653b:;
  /* 1125653b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125653f jge 0x11256550 */
  if ((C.sf==C.of)) goto L_11256550;
  /* 11256541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256544 mov word ptr [eax*2 + 0x11282b70], 0 */
  w16((uint32_t)(EAX*2 + 0x11282b70), (0x0u));
  /* 1125654e jmp 0x11256532 */
  goto L_11256532;
L_11256550:;
  /* 11256550 mov esp, ebp */
  ESP = (EBP);
  /* 11256552 pop ebp */
  EBP = (pop32());
  /* 11256553 ret  */
  ESPCHK(0x112564e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016560 @ 0x11256560 (770 bytes, 175 insns) */
void f_11256560(void) {
  FTRACE(0x11256560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256560 push ebp */
  push32((uint32_t)(EBP));
  /* 11256561 mov ebp, esp */
  EBP = (ESP);
  /* 11256563 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256569 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1125656f push eax */
  push32((uint32_t)(EAX));
  /* 11256570 mov ecx, dword ptr [0x11282af8] */
  ECX = (r32((uint32_t)(0x11282af8)));
  /* 11256576 push ecx */
  push32((uint32_t)(ECX));
  /* 11256577 call dword ptr [0x112833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a0))), 0x1125657du);
  /* 1125657d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256580 jne 0x11256799 */
  if (!C.zf) goto L_11256799;
  /* 11256586 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11256590 jmp 0x112565a1 */
  goto L_112565a1;
L_11256592:;
  /* 11256592 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256598 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125659b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_112565a1:;
  /* 112565a1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112565ab jae 0x112565c2 */
  if (!C.cf) goto L_112565c2;
  /* 112565ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112565b3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 112565b9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 112565c0 jmp 0x11256592 */
  goto L_11256592;
L_112565c2:;
  /* 112565c2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 112565c9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 112565cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112565d2 jmp 0x112565dd */
  goto L_112565dd;
L_112565d4:;
  /* 112565d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112565d7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112565da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112565dd:;
  /* 112565dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112565e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112565e2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112565e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112565e6 je 0x11256628 */
  if (C.zf) goto L_11256628;
  /* 112565e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112565eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112565ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112565ef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 112565f5 jmp 0x11256606 */
  goto L_11256606;
L_112565f7:;
  /* 112565f7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112565fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256600 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11256606:;
  /* 11256606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256609 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125660b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1125660e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256614 ja 0x11256626 */
  if ((!C.cf&&!C.zf)) goto L_11256626;
  /* 11256616 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1125661c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11256624 jmp 0x112565f7 */
  goto L_112565f7;
L_11256626:;
  /* 11256626 jmp 0x112565d4 */
  goto L_112565d4;
L_11256628:;
  /* 11256628 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125662a mov eax, dword ptr [0x11282d84] */
  EAX = (r32((uint32_t)(0x11282d84)));
  /* 1125662f push eax */
  push32((uint32_t)(EAX));
  /* 11256630 mov ecx, dword ptr [0x11282af8] */
  ECX = (r32((uint32_t)(0x11282af8)));
  /* 11256636 push ecx */
  push32((uint32_t)(ECX));
  /* 11256637 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1125663d push edx */
  push32((uint32_t)(EDX));
  /* 1125663e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11256643 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11256649 push eax */
  push32((uint32_t)(EAX));
  /* 1125664a push 1 */
  push32((uint32_t)(0x1u));
  /* 1125664c call 0x11258c30 */
  push32(0x11256651u); f_11258c30();
  /* 11256651 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256654 push 0 */
  push32((uint32_t)(0x0u));
  /* 11256656 mov ecx, dword ptr [0x11282af8] */
  ECX = (r32((uint32_t)(0x11282af8)));
  /* 1125665c push ecx */
  push32((uint32_t)(ECX));
  /* 1125665d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11256662 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11256668 push edx */
  push32((uint32_t)(EDX));
  /* 11256669 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1125666e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11256674 push eax */
  push32((uint32_t)(EAX));
  /* 11256675 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1125667a mov ecx, dword ptr [0x11282d84] */
  ECX = (r32((uint32_t)(0x11282d84)));
  /* 11256680 push ecx */
  push32((uint32_t)(ECX));
  /* 11256681 call 0x11259840 */
  push32(0x11256686u); f_11259840();
  /* 11256686 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125668b mov edx, dword ptr [0x11282af8] */
  EDX = (r32((uint32_t)(0x11282af8)));
  /* 11256691 push edx */
  push32((uint32_t)(EDX));
  /* 11256692 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11256697 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1125669d push eax */
  push32((uint32_t)(EAX));
  /* 1125669e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112566a3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 112566a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112566aa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 112566af mov edx, dword ptr [0x11282d84] */
  EDX = (r32((uint32_t)(0x11282d84)));
  /* 112566b5 push edx */
  push32((uint32_t)(EDX));
  /* 112566b6 call 0x11259840 */
  push32(0x112566bbu); f_11259840();
  /* 112566bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112566be mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 112566c8 jmp 0x112566d9 */
  goto L_112566d9;
L_112566ca:;
  /* 112566ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112566d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112566d3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_112566d9:;
  /* 112566d9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112566e3 jae 0x11256794 */
  if (!C.cf) goto L_11256794;
  /* 112566e9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112566ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112566f1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 112566f9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112566fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112566fe je 0x11256736 */
  if (C.zf) goto L_11256736;
  /* 11256700 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256706 mov cl, byte ptr [eax + 0x11282c81] */
  CL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 1125670c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1125670f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256715 mov byte ptr [edx + 0x11282c81], cl */
  w8((uint32_t)(EDX + 0x11282c81), (CL));
  /* 1125671b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256721 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256727 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1125672e mov byte ptr [eax + 0x11282b80], dl */
  w8((uint32_t)(EAX + 0x11282b80), (DL));
  /* 11256734 jmp 0x1125678f */
  goto L_1125678f;
L_11256736:;
  /* 11256736 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1125673c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125673e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11256746 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11256749 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125674b je 0x11256782 */
  if (C.zf) goto L_11256782;
  /* 1125674d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256753 mov al, byte ptr [edx + 0x11282c81] */
  AL = (r8((uint32_t)(EDX + 0x11282c81)));
  /* 11256759 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1125675b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256761 mov byte ptr [ecx + 0x11282c81], al */
  w8((uint32_t)(ECX + 0x11282c81), (AL));
  /* 11256767 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1125676d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256773 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1125677a mov byte ptr [edx + 0x11282b80], cl */
  w8((uint32_t)(EDX + 0x11282b80), (CL));
  /* 11256780 jmp 0x1125678f */
  goto L_1125678f;
L_11256782:;
  /* 11256782 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256788 mov byte ptr [edx + 0x11282b80], 0 */
  w8((uint32_t)(EDX + 0x11282b80), (0x0u));
L_1125678f:;
  /* 1125678f jmp 0x112566ca */
  goto L_112566ca;
L_11256794:;
  /* 11256794 jmp 0x1125685e */
  goto L_1125685e;
L_11256799:;
  /* 11256799 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 112567a3 jmp 0x112567b4 */
  goto L_112567b4;
L_112567a5:;
  /* 112567a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112567ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112567ae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_112567b4:;
  /* 112567b4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112567be jae 0x1125685e */
  if (!C.cf) goto L_1125685e;
  /* 112567c4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112567cb jb 0x11256808 */
  if (C.cf) goto L_11256808;
  /* 112567cd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112567d4 ja 0x11256808 */
  if ((!C.cf&&!C.zf)) goto L_11256808;
  /* 112567d6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112567dc mov dl, byte ptr [ecx + 0x11282c81] */
  DL = (r8((uint32_t)(ECX + 0x11282c81)));
  /* 112567e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 112567e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112567eb mov byte ptr [eax + 0x11282c81], dl */
  w8((uint32_t)(EAX + 0x11282c81), (DL));
  /* 112567f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 112567f7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112567fa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256800 mov byte ptr [edx + 0x11282b80], cl */
  w8((uint32_t)(EDX + 0x11282b80), (CL));
  /* 11256806 jmp 0x11256859 */
  goto L_11256859;
L_11256808:;
  /* 11256808 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125680f jb 0x1125684c */
  if (C.cf) goto L_1125684c;
  /* 11256811 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256818 ja 0x1125684c */
  if ((!C.cf&&!C.zf)) goto L_1125684c;
  /* 1125681a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256820 mov cl, byte ptr [eax + 0x11282c81] */
  CL = (r8((uint32_t)(EAX + 0x11282c81)));
  /* 11256826 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11256829 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1125682f mov byte ptr [edx + 0x11282c81], cl */
  w8((uint32_t)(EDX + 0x11282c81), (CL));
  /* 11256835 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1125683b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125683e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256844 mov byte ptr [ecx + 0x11282b80], al */
  w8((uint32_t)(ECX + 0x11282b80), (AL));
  /* 1125684a jmp 0x11256859 */
  goto L_11256859;
L_1125684c:;
  /* 1125684c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11256852 mov byte ptr [edx + 0x11282b80], 0 */
  w8((uint32_t)(EDX + 0x11282b80), (0x0u));
L_11256859:;
  /* 11256859 jmp 0x112567a5 */
  goto L_112567a5;
L_1125685e:;
  /* 1125685e mov esp, ebp */
  ESP = (EBP);
  /* 11256860 pop ebp */
  EBP = (pop32());
  /* 11256861 ret  */
  ESPCHK(0x11256560u, _esp0);
  ESP += 4; return;
}

/* FUN_10016870 @ 0x11256870 (23 bytes, 9 insns) */
void f_11256870(void) {
  FTRACE(0x11256870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256870 push ebp */
  push32((uint32_t)(EBP));
  /* 11256871 mov ebp, esp */
  EBP = (ESP);
  /* 11256873 cmp dword ptr [0x11282b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125687a je 0x11256883 */
  if (C.zf) goto L_11256883;
  /* 1125687c mov eax, dword ptr [0x11282af8] */
  EAX = (r32((uint32_t)(0x11282af8)));
  /* 11256881 jmp 0x11256885 */
  goto L_11256885;
L_11256883:;
  /* 11256883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11256885:;
  /* 11256885 pop ebp */
  EBP = (pop32());
  /* 11256886 ret  */
  ESPCHK(0x11256870u, _esp0);
  ESP += 4; return;
}

/* FUN_10016890 @ 0x11256890 (34 bytes, 10 insns) */
void f_11256890(void) {
  FTRACE(0x11256890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256890 push ebp */
  push32((uint32_t)(EBP));
  /* 11256891 mov ebp, esp */
  EBP = (ESP);
  /* 11256893 cmp dword ptr [0x11282f10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125689a jne 0x112568b0 */
  if (!C.zf) goto L_112568b0;
  /* 1125689c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1125689e call 0x112560b0 */
  push32(0x112568a3u); f_112560b0();
  /* 112568a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112568a6 mov dword ptr [0x11282f10], 1 */
  w32((uint32_t)(0x11282f10), (0x1u));
L_112568b0:;
  /* 112568b0 pop ebp */
  EBP = (pop32());
  /* 112568b1 ret  */
  ESPCHK(0x11256890u, _esp0);
  ESP += 4; return;
}

/* FUN_100168c0 @ 0x112568c0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_112568c0(void) {
  FTRACE(0x112568c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112568c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112568c1 mov ebp, esp */
  EBP = (ESP);
  /* 112568c3 push edi */
  push32((uint32_t)(EDI));
  /* 112568c4 push esi */
  push32((uint32_t)(ESI));
  /* 112568c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112568c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112568cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112568ce mov eax, ecx */
  EAX = (ECX);
  /* 112568d0 mov edx, ecx */
  EDX = (ECX);
  /* 112568d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112568d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112568d6 jbe 0x112568e0 */
  if ((C.cf||C.zf)) goto L_112568e0;
  /* 112568d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112568da jb 0x11256a58 */
  if (C.cf) goto L_11256a58;
L_112568e0:;
  /* 112568e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112568e6 jne 0x112568fc */
  if (!C.zf) goto L_112568fc;
  /* 112568e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112568eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112568ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112568f1 jb 0x1125691c */
  if (C.cf) goto L_1125691c;
  /* 112568f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112568f5 jmp dword ptr [edx*4 + 0x11256a08] */
  switch (EDX) {
    case 0: goto L_11256a18;
    case 1: goto L_11256a20;
    case 2: goto L_11256a2c;
    case 3: goto L_11256a40;
    default: x86_unimpl("switch@0x112568f5 out of table"); return;
  }
L_112568fc:;
  /* 112568fc mov eax, edi */
  EAX = (EDI);
  /* 112568fe mov edx, 3 */
  EDX = (0x3u);
  /* 11256903 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256906 jb 0x11256914 */
  if (C.cf) goto L_11256914;
  /* 11256908 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1125690b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125690d jmp dword ptr [eax*4 + 0x11256920] */
  switch (EAX) {
    case 1: goto L_11256930;
    case 2: goto L_1125695c;
    case 3: goto L_11256980;
    default: x86_unimpl("switch@0x1125690d out of table"); return;
  }
L_11256914:;
  /* 11256914 jmp dword ptr [ecx*4 + 0x11256a18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11256a18)))); return;
  /* 1125691b nop  */
  /* nop */
L_1125691c:;
  /* 1125691c jmp dword ptr [ecx*4 + 0x1125699c] */
  switch (ECX) {
    case 0: goto L_112569ff;
    case 1: goto L_112569ec;
    case 2: goto L_112569e4;
    case 3: goto L_112569dc;
    case 4: goto L_112569d4;
    case 5: goto L_112569cc;
    case 6: goto L_112569c4;
    case 7: goto L_112569bc;
    default: x86_unimpl("switch@0x1125691c out of table"); return;
  }
  /* 11256923 nop  */
  /* nop */
L_11256930:;
  /* 11256930 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11256932 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11256934 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11256936 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11256939 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1125693c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1125693f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11256942 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11256945 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11256948 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1125694b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125694e jb 0x1125691c */
  if (C.cf) goto L_1125691c;
  /* 11256950 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256952 jmp dword ptr [edx*4 + 0x11256a08] */
  switch (EDX) {
    case 0: goto L_11256a18;
    case 1: goto L_11256a20;
    case 2: goto L_11256a2c;
    case 3: goto L_11256a40;
    default: x86_unimpl("switch@0x11256952 out of table"); return;
  }
  /* 11256959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1125695c:;
  /* 1125695c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1125695e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11256960 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11256962 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11256965 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11256968 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1125696b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1125696e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11256971 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256974 jb 0x1125691c */
  if (C.cf) goto L_1125691c;
  /* 11256976 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256978 jmp dword ptr [edx*4 + 0x11256a08] */
  switch (EDX) {
    case 0: goto L_11256a18;
    case 1: goto L_11256a20;
    case 2: goto L_11256a2c;
    case 3: goto L_11256a40;
    default: x86_unimpl("switch@0x11256978 out of table"); return;
  }
  /* 1125697f nop  */
  /* nop */
L_11256980:;
  /* 11256980 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11256982 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11256984 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11256986 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11256987 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1125698a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1125698b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125698e jb 0x1125691c */
  if (C.cf) goto L_1125691c;
  /* 11256990 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256992 jmp dword ptr [edx*4 + 0x11256a08] */
  switch (EDX) {
    case 0: goto L_11256a18;
    case 1: goto L_11256a20;
    case 2: goto L_11256a2c;
    case 3: goto L_11256a40;
    default: x86_unimpl("switch@0x11256992 out of table"); return;
  }
  /* 11256999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112569bc:;
  /* 112569bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 112569c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_112569c4:;
  /* 112569c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 112569c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_112569cc:;
  /* 112569cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 112569d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_112569d4:;
  /* 112569d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 112569d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_112569dc:;
  /* 112569dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 112569e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_112569e4:;
  /* 112569e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 112569e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_112569ec:;
  /* 112569ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 112569f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 112569f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112569fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112569fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112569ff:;
  /* 112569ff jmp dword ptr [edx*4 + 0x11256a08] */
  switch (EDX) {
    case 0: goto L_11256a18;
    case 1: goto L_11256a20;
    case 2: goto L_11256a2c;
    case 3: goto L_11256a40;
    default: x86_unimpl("switch@0x112569ff out of table"); return;
  }
  /* 11256a06 mov edi, edi */
  EDI = (EDI);
L_11256a18:;
  /* 11256a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256a1b pop esi */
  ESI = (pop32());
  /* 11256a1c pop edi */
  EDI = (pop32());
  /* 11256a1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256a1e ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256a1f nop  */
  /* nop */
L_11256a20:;
  /* 11256a20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11256a22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11256a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256a27 pop esi */
  ESI = (pop32());
  /* 11256a28 pop edi */
  EDI = (pop32());
  /* 11256a29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256a2a ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256a2b nop  */
  /* nop */
L_11256a2c:;
  /* 11256a2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11256a2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11256a30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11256a33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11256a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256a39 pop esi */
  ESI = (pop32());
  /* 11256a3a pop edi */
  EDI = (pop32());
  /* 11256a3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256a3c ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256a3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11256a40:;
  /* 11256a40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11256a42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11256a44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11256a47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11256a4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11256a4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11256a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256a53 pop esi */
  ESI = (pop32());
  /* 11256a54 pop edi */
  EDI = (pop32());
  /* 11256a55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256a56 ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256a57 nop  */
  /* nop */
L_11256a58:;
  /* 11256a58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11256a5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11256a60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11256a66 jne 0x11256a8c */
  if (!C.zf) goto L_11256a8c;
  /* 11256a68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11256a6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11256a6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256a71 jb 0x11256a80 */
  if (C.cf) goto L_11256a80;
  /* 11256a73 std  */
  C.df=1;
  /* 11256a74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256a76 cld  */
  C.df=0;
  /* 11256a77 jmp dword ptr [edx*4 + 0x11256ba0] */
  switch (EDX) {
    case 0: goto L_11256bb0;
    case 1: goto L_11256bb8;
    case 2: goto L_11256bc8;
    case 3: goto L_11256bdc;
    default: x86_unimpl("switch@0x11256a77 out of table"); return;
  }
  /* 11256a7e mov edi, edi */
  EDI = (EDI);
L_11256a80:;
  /* 11256a80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11256a82 jmp dword ptr [ecx*4 + 0x11256b50] */
  switch (ECX) {
    case 0: goto L_11256b97;
    default: x86_unimpl("switch@0x11256a82 out of table"); return;
  }
  /* 11256a89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11256a8c:;
  /* 11256a8c mov eax, edi */
  EAX = (EDI);
  /* 11256a8e mov edx, 3 */
  EDX = (0x3u);
  /* 11256a93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256a96 jb 0x11256aa4 */
  if (C.cf) goto L_11256aa4;
  /* 11256a98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11256a9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256a9d jmp dword ptr [eax*4 + 0x11256aa8] */
  switch (EAX) {
    case 1: goto L_11256ab8;
    case 2: goto L_11256ad8;
    case 3: goto L_11256b00;
    default: x86_unimpl("switch@0x11256a9d out of table"); return;
  }
L_11256aa4:;
  /* 11256aa4 jmp dword ptr [ecx*4 + 0x11256ba0] */
  switch (ECX) {
    case 0: goto L_11256bb0;
    case 1: goto L_11256bb8;
    case 2: goto L_11256bc8;
    case 3: goto L_11256bdc;
    default: x86_unimpl("switch@0x11256aa4 out of table"); return;
  }
  /* 11256aab nop  */
  /* nop */
L_11256ab8:;
  /* 11256ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11256abb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11256abd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11256ac0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11256ac1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11256ac4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11256ac5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256ac8 jb 0x11256a80 */
  if (C.cf) goto L_11256a80;
  /* 11256aca std  */
  C.df=1;
  /* 11256acb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256acd cld  */
  C.df=0;
  /* 11256ace jmp dword ptr [edx*4 + 0x11256ba0] */
  switch (EDX) {
    case 0: goto L_11256bb0;
    case 1: goto L_11256bb8;
    case 2: goto L_11256bc8;
    case 3: goto L_11256bdc;
    default: x86_unimpl("switch@0x11256ace out of table"); return;
  }
  /* 11256ad5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11256ad8:;
  /* 11256ad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11256adb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11256add mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11256ae0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11256ae3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11256ae6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11256ae9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256aec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256aef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256af2 jb 0x11256a80 */
  if (C.cf) goto L_11256a80;
  /* 11256af4 std  */
  C.df=1;
  /* 11256af5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256af7 cld  */
  C.df=0;
  /* 11256af8 jmp dword ptr [edx*4 + 0x11256ba0] */
  switch (EDX) {
    case 0: goto L_11256bb0;
    case 1: goto L_11256bb8;
    case 2: goto L_11256bc8;
    case 3: goto L_11256bdc;
    default: x86_unimpl("switch@0x11256af8 out of table"); return;
  }
  /* 11256aff nop  */
  /* nop */
L_11256b00:;
  /* 11256b00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11256b03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11256b05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11256b08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11256b0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11256b0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11256b11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11256b14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11256b17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256b1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256b1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256b20 jb 0x11256a80 */
  if (C.cf) goto L_11256a80;
  /* 11256b26 std  */
  C.df=1;
  /* 11256b27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11256b29 cld  */
  C.df=0;
  /* 11256b2a jmp dword ptr [edx*4 + 0x11256ba0] */
  switch (EDX) {
    case 0: goto L_11256bb0;
    case 1: goto L_11256bb8;
    case 2: goto L_11256bc8;
    case 3: goto L_11256bdc;
    default: x86_unimpl("switch@0x11256b2a out of table"); return;
  }
  /* 11256b31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11256b34 push esp */
  push32((uint32_t)(ESP));
  /* 11256b35 imul esp, dword ptr [0x256b5c11], 0x11 */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x256b5c11)))*(int64_t)(int32_t)(0x11u); ESP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256b3c imul esp, dword ptr fs:[0x256b6c11], 0x11 */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x256b6c11)))*(int64_t)(int32_t)(0x11u); ESP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256b44 je 0x11256bb1 */
  if (C.zf) goto L_11256bb1;
  /* 11256b46 and eax, 0x256b7c11 */
  { uint32_t _r=(EAX)&(0x256b7c11u); EAX = (_r); fl_logic(_r,32); }
  /* 11256b4c test byte ptr [ebx + 0x25], ch */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x25)))&(C.c.b.h); fl_logic(_r,8); }
  /* 11256b54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11256b58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11256b5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11256b60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11256b64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11256b68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11256b6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11256b70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11256b74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11256b78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11256b7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11256b80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11256b84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11256b88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11256b8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11256b93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11256b95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11256b97:;
  /* 11256b97 jmp dword ptr [edx*4 + 0x11256ba0] */
  switch (EDX) {
    case 0: goto L_11256bb0;
    case 1: goto L_11256bb8;
    case 2: goto L_11256bc8;
    case 3: goto L_11256bdc;
    default: x86_unimpl("switch@0x11256b97 out of table"); return;
  }
  /* 11256b9e mov edi, edi */
  EDI = (EDI);
L_11256bb0:;
  /* 11256bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256bb3 pop esi */
  ESI = (pop32());
  /* 11256bb4 pop edi */
  EDI = (pop32());
  /* 11256bb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256bb6 ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256bb7 nop  */
  /* nop */
L_11256bb8:;
  /* 11256bb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11256bbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11256bbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256bc1 pop esi */
  ESI = (pop32());
  /* 11256bc2 pop edi */
  EDI = (pop32());
  /* 11256bc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256bc4 ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256bc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11256bc8:;
  /* 11256bc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11256bcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11256bce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11256bd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11256bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256bd7 pop esi */
  ESI = (pop32());
  /* 11256bd8 pop edi */
  EDI = (pop32());
  /* 11256bd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256bda ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
  /* 11256bdb nop  */
  /* nop */
L_11256bdc:;
  /* 11256bdc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11256bdf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11256be2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11256be5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11256be8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11256beb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11256bee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256bf1 pop esi */
  ESI = (pop32());
  /* 11256bf2 pop edi */
  EDI = (pop32());
  /* 11256bf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11256bf4 ret  */
  ESPCHK(0x112568c0u, _esp0);
  ESP += 4; return;
L_11256bb1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11256bb1 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x11256c00 (104 bytes, 43 insns) */
void f_11256c00(void) {
  FTRACE(0x11256c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256c00 push ebx */
  push32((uint32_t)(EBX));
  /* 11256c01 push esi */
  push32((uint32_t)(ESI));
  /* 11256c02 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11256c06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11256c08 jne 0x11256c22 */
  if (!C.zf) goto L_11256c22;
  /* 11256c0a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11256c0e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11256c12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11256c14 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11256c16 mov ebx, eax */
  EBX = (EAX);
  /* 11256c18 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11256c1c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11256c1e mov edx, ebx */
  EDX = (EBX);
  /* 11256c20 jmp 0x11256c63 */
  goto L_11256c63;
L_11256c22:;
  /* 11256c22 mov ecx, eax */
  ECX = (EAX);
  /* 11256c24 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11256c28 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11256c2c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11256c30:;
  /* 11256c30 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11256c32 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11256c34 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11256c36 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11256c38 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11256c3a jne 0x11256c30 */
  if (!C.zf) goto L_11256c30;
  /* 11256c3c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11256c3e mov esi, eax */
  ESI = (EAX);
  /* 11256c40 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11256c44 mov ecx, eax */
  ECX = (EAX);
  /* 11256c46 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11256c4a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11256c4c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256c4e jb 0x11256c5e */
  if (C.cf) goto L_11256c5e;
  /* 11256c50 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256c54 ja 0x11256c5e */
  if ((!C.cf&&!C.zf)) goto L_11256c5e;
  /* 11256c56 jb 0x11256c5f */
  if (C.cf) goto L_11256c5f;
  /* 11256c58 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256c5c jbe 0x11256c5f */
  if ((C.cf||C.zf)) goto L_11256c5f;
L_11256c5e:;
  /* 11256c5e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11256c5f:;
  /* 11256c5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11256c61 mov eax, esi */
  EAX = (ESI);
L_11256c63:;
  /* 11256c63 pop esi */
  ESI = (pop32());
  /* 11256c64 pop ebx */
  EBX = (pop32());
  /* 11256c65 ret 0x10 */
  ESPCHK(0x11256c00u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11256c70 (117 bytes, 44 insns) */
void f_11256c70(void) {
  FTRACE(0x11256c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256c70 push ebx */
  push32((uint32_t)(EBX));
  /* 11256c71 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11256c75 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11256c77 jne 0x11256c91 */
  if (!C.zf) goto L_11256c91;
  /* 11256c79 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11256c7d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11256c81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11256c83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11256c85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11256c89 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11256c8b mov eax, edx */
  EAX = (EDX);
  /* 11256c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11256c8f jmp 0x11256ce1 */
  goto L_11256ce1;
L_11256c91:;
  /* 11256c91 mov ecx, eax */
  ECX = (EAX);
  /* 11256c93 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11256c97 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11256c9b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11256c9f:;
  /* 11256c9f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11256ca1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11256ca3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11256ca5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11256ca7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11256ca9 jne 0x11256c9f */
  if (!C.zf) goto L_11256c9f;
  /* 11256cab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11256cad mov ecx, eax */
  ECX = (EAX);
  /* 11256caf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11256cb3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11256cb4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11256cb8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256cba jb 0x11256cca */
  if (C.cf) goto L_11256cca;
  /* 11256cbc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256cc0 ja 0x11256cca */
  if ((!C.cf&&!C.zf)) goto L_11256cca;
  /* 11256cc2 jb 0x11256cd2 */
  if (C.cf) goto L_11256cd2;
  /* 11256cc4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256cc8 jbe 0x11256cd2 */
  if ((C.cf||C.zf)) goto L_11256cd2;
L_11256cca:;
  /* 11256cca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256cce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11256cd2:;
  /* 11256cd2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256cd6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256cda neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11256cdc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11256cde sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11256ce1:;
  /* 11256ce1 pop ebx */
  EBX = (pop32());
  /* 11256ce2 ret 0x10 */
  ESPCHK(0x11256c70u, _esp0);
  ESP += 20; return;
}

/* FUN_10016cf0 @ 0x11256cf0 (628 bytes, 214 insns) */
void f_11256cf0(void) {
  FTRACE(0x11256cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11256cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11256cf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11256cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11256cf8 push edi */
  push32((uint32_t)(EDI));
L_11256cf9:;
  /* 11256cf9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256cfd jne 0x11256d1d */
  if (!C.zf) goto L_11256d1d;
  /* 11256cff push 0x1127c170 */
  push32((uint32_t)(0x1127c170u));
  /* 11256d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11256d06 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11256d08 push 0x1127c164 */
  push32((uint32_t)(0x1127c164u));
  /* 11256d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11256d0f call 0x1124b3e0 */
  push32(0x11256d14u); f_1124b3e0();
  /* 11256d14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256d17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256d1a jne 0x11256d1d */
  if (!C.zf) goto L_11256d1d;
  /* 11256d1c int3  */
  x86_unimpl("int3 @ 0x11256d1c");
L_11256d1d:;
  /* 11256d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11256d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11256d21 jne 0x11256cf9 */
  if (!C.zf) goto L_11256cf9;
  /* 11256d23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11256d26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11256d29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11256d2f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11256d32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d35 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11256d38 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11256d3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11256d40 je 0x11256d4f */
  if (C.zf) goto L_11256d4f;
  /* 11256d42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d45 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11256d48 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11256d4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11256d4d je 0x11256d65 */
  if (C.zf) goto L_11256d65;
L_11256d4f:;
  /* 11256d4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d52 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11256d55 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11256d57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d5a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11256d5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11256d60 jmp 0x11256f5d */
  goto L_11256f5d;
L_11256d65:;
  /* 11256d65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d68 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11256d6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11256d6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11256d70 je 0x11256dbc */
  if (C.zf) goto L_11256dbc;
  /* 11256d72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d75 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11256d7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d7f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11256d82 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11256d85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11256d87 je 0x11256da5 */
  if (C.zf) goto L_11256da5;
  /* 11256d89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d8f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11256d92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11256d94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256d97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11256d9a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11256d9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256da0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11256da3 jmp 0x11256dbc */
  goto L_11256dbc;
L_11256da5:;
  /* 11256da5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256da8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11256dab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11256dae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256db1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11256db4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11256db7 jmp 0x11256f5d */
  goto L_11256f5d;
L_11256dbc:;
  /* 11256dbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256dbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11256dc2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11256dc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256dc8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11256dcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256dce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11256dd1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11256dd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256dd7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11256dda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256ddd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11256de4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11256deb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256dee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11256df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256df4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11256df7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11256dfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11256dff jne 0x11256e2f */
  if (!C.zf) goto L_11256e2f;
  /* 11256e01 cmp dword ptr [ebp - 8], 0x1127f8b8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1127f8b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256e08 je 0x11256e13 */
  if (C.zf) goto L_11256e13;
  /* 11256e0a cmp dword ptr [ebp - 8], 0x1127f8d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1127f8d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256e11 jne 0x11256e23 */
  if (!C.zf) goto L_11256e23;
L_11256e13:;
  /* 11256e13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11256e16 push edx */
  push32((uint32_t)(EDX));
  /* 11256e17 call 0x1125b7c0 */
  push32(0x11256e1cu); f_1125b7c0();
  /* 11256e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11256e21 jne 0x11256e2f */
  if (!C.zf) goto L_11256e2f;
L_11256e23:;
  /* 11256e23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e26 push eax */
  push32((uint32_t)(EAX));
  /* 11256e27 call 0x1125b6f0 */
  push32(0x11256e2cu); f_1125b6f0();
  /* 11256e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11256e2f:;
  /* 11256e2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e32 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11256e35 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11256e3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11256e3d je 0x11256f1b */
  if (C.zf) goto L_11256f1b;
L_11256e43:;
  /* 11256e43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e49 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11256e4b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256e4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11256e50 jge 0x11256e73 */
  if ((C.sf==C.of)) goto L_11256e73;
  /* 11256e52 push 0x1127c124 */
  push32((uint32_t)(0x1127c124u));
  /* 11256e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11256e59 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11256e5e push 0x1127c164 */
  push32((uint32_t)(0x1127c164u));
  /* 11256e63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11256e65 call 0x1124b3e0 */
  push32(0x11256e6au); f_1124b3e0();
  /* 11256e6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256e6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256e70 jne 0x11256e73 */
  if (!C.zf) goto L_11256e73;
  /* 11256e72 int3  */
  x86_unimpl("int3 @ 0x11256e72");
L_11256e73:;
  /* 11256e73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11256e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11256e77 jne 0x11256e43 */
  if (!C.zf) goto L_11256e43;
  /* 11256e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e7f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11256e81 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256e84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11256e87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e8a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11256e8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256e90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11256e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256e98 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11256e9b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256ea1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11256ea4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256ea8 jle 0x11256ec6 */
  if ((C.zf||C.sf!=C.of)) goto L_11256ec6;
  /* 11256eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256ead push ecx */
  push32((uint32_t)(ECX));
  /* 11256eae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256eb1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11256eb4 push eax */
  push32((uint32_t)(EAX));
  /* 11256eb5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11256eb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11256eb9 call 0x1125b3e0 */
  push32(0x11256ebeu); f_1125b3e0();
  /* 11256ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256ec1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11256ec4 jmp 0x11256f0e */
  goto L_11256f0e;
L_11256ec6:;
  /* 11256ec6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256eca je 0x11256ee9 */
  if (C.zf) goto L_11256ee9;
  /* 11256ecc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11256ecf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11256ed2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11256ed5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11256ed8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11256edb mov ecx, dword ptr [edx*4 + 0x11282dc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 11256ee2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256ee4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11256ee7 jmp 0x11256ef0 */
  goto L_11256ef0;
L_11256ee9:;
  /* 11256ee9 mov dword ptr [ebp - 0x14], 0x1127ef28 */
  w32((uint32_t)(EBP + -0x14), (0x1127ef28u));
L_11256ef0:;
  /* 11256ef0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11256ef3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11256ef7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11256efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11256efc je 0x11256f0e */
  if (C.zf) goto L_11256f0e;
  /* 11256efe push 2 */
  push32((uint32_t)(0x2u));
  /* 11256f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11256f02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11256f05 push ecx */
  push32((uint32_t)(ECX));
  /* 11256f06 call 0x1125b290 */
  push32(0x11256f0bu); f_1125b290();
  /* 11256f0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11256f0e:;
  /* 11256f0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256f11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11256f14 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11256f17 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11256f19 jmp 0x11256f39 */
  goto L_11256f39;
L_11256f1b:;
  /* 11256f1b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11256f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11256f25 push edx */
  push32((uint32_t)(EDX));
  /* 11256f26 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11256f29 push eax */
  push32((uint32_t)(EAX));
  /* 11256f2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11256f2d push ecx */
  push32((uint32_t)(ECX));
  /* 11256f2e call 0x1125b3e0 */
  push32(0x11256f33u); f_1125b3e0();
  /* 11256f33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11256f36 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11256f39:;
  /* 11256f39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11256f3c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256f3f je 0x11256f55 */
  if (C.zf) goto L_11256f55;
  /* 11256f41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256f44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11256f47 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11256f4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11256f4d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11256f50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11256f53 jmp 0x11256f5d */
  goto L_11256f5d;
L_11256f55:;
  /* 11256f55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11256f58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11256f5d:;
  /* 11256f5d pop edi */
  EDI = (pop32());
  /* 11256f5e pop esi */
  ESI = (pop32());
  /* 11256f5f pop ebx */
  EBX = (pop32());
  /* 11256f60 mov esp, ebp */
  ESP = (EBP);
  /* 11256f62 pop ebp */
  EBP = (pop32());
  /* 11256f63 ret  */
  ESPCHK(0x11256cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f70 @ 0x11256f70 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11256f70(void) {
  FTRACE(0x11256f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11256f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11256f71 mov ebp, esp */
  EBP = (ESP);
  /* 11256f73 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11256f79 push ebx */
  push32((uint32_t)(EBX));
  /* 11256f7a push esi */
  push32((uint32_t)(ESI));
  /* 11256f7b push edi */
  push32((uint32_t)(EDI));
  /* 11256f7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11256f83 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11256f8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11256f94:;
  /* 11256f94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11256f97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11256f99 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11256f9c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11256fa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11256fa3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11256fa6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11256fa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11256fab je 0x11257b87 */
  if (C.zf) goto L_11257b87;
  /* 11256fb1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256fb8 jl 0x11257b87 */
  if ((C.sf!=C.of)) goto L_11257b87;
  /* 11256fbe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11256fc2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256fc5 jl 0x11256fe6 */
  if ((C.sf!=C.of)) goto L_11256fe6;
  /* 11256fc7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11256fcb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11256fce jg 0x11256fe6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11256fe6;
  /* 11256fd0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11256fd4 movsx ecx, byte ptr [eax + 0x1127c15c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1127c15c))));
  /* 11256fdb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11256fde mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11256fe4 jmp 0x11256ff0 */
  goto L_11256ff0;
L_11256fe6:;
  /* 11256fe6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11256ff0:;
  /* 11256ff0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11256ff6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11256ff9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11256ffc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11256fff movsx edx, byte ptr [ecx + eax*8 + 0x1127c17c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1127c17c))));
  /* 11257007 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1125700a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1125700d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11257010 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11257016 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125701d ja 0x11257b82 */
  if ((!C.cf&&!C.zf)) goto L_11257b82;
  /* 11257023 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11257029 jmp dword ptr [ecx*4 + 0x11257b94] */
  switch (ECX) {
    case 0: goto L_11257030;
    case 1: goto L_112570ca;
    case 2: goto L_1125710c;
    case 3: goto L_1125717b;
    case 4: goto L_112571d3;
    case 5: goto L_112571e2;
    case 6: goto L_1125722e;
    case 7: goto L_112572c1;
    case 8: goto L_11257158;
    case 9: goto L_11257163;
    case 10: goto L_1125714e;
    case 11: goto L_11257143;
    case 12: goto L_1125716e;
    case 13: goto L_11257176;
    default: x86_unimpl("switch@0x11257029 out of table"); return;
  }
L_11257030:;
  /* 11257030 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11257037 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125703a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11257040 mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 11257045 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11257047 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1125704b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11257051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11257053 je 0x112570ad */
  if (C.zf) goto L_112570ad;
  /* 11257055 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1125705b push edx */
  push32((uint32_t)(EDX));
  /* 1125705c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125705f push eax */
  push32((uint32_t)(EAX));
  /* 11257060 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11257064 push ecx */
  push32((uint32_t)(ECX));
  /* 11257065 call 0x11257ca0 */
  push32(0x1125706au); f_11257ca0();
  /* 1125706a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125706d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257070 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11257072 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11257075 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257078 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125707b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1125707e:;
  /* 1125707e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11257082 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257084 jne 0x112570a7 */
  if (!C.zf) goto L_112570a7;
  /* 11257086 push 0x1127c1fc */
  push32((uint32_t)(0x1127c1fcu));
  /* 1125708b push 0 */
  push32((uint32_t)(0x0u));
  /* 1125708d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11257092 push 0x1127c1f0 */
  push32((uint32_t)(0x1127c1f0u));
  /* 11257097 push 2 */
  push32((uint32_t)(0x2u));
  /* 11257099 call 0x1124b3e0 */
  push32(0x1125709eu); f_1124b3e0();
  /* 1125709e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112570a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112570a4 jne 0x112570a7 */
  if (!C.zf) goto L_112570a7;
  /* 112570a6 int3  */
  x86_unimpl("int3 @ 0x112570a6");
L_112570a7:;
  /* 112570a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112570a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112570ab jne 0x1125707e */
  if (!C.zf) goto L_1125707e;
L_112570ad:;
  /* 112570ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 112570b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112570b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112570b7 push edx */
  push32((uint32_t)(EDX));
  /* 112570b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112570bc push eax */
  push32((uint32_t)(EAX));
  /* 112570bd call 0x11257ca0 */
  push32(0x112570c2u); f_11257ca0();
  /* 112570c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112570c5 jmp 0x11257b82 */
  goto L_11257b82;
L_112570ca:;
  /* 112570ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112570d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112570d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 112570da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 112570e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 112570e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 112570ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112570ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112570f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11257100 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11257107 jmp 0x11257b82 */
  goto L_11257b82;
L_1125710c:;
  /* 1125710c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11257110 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11257116 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1125711c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125711f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11257125 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125712c ja 0x11257176 */
  if ((!C.cf&&!C.zf)) goto L_11257176;
  /* 1125712e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11257134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11257136 mov al, byte ptr [ecx + 0x11257bcc] */
  AL = (r8((uint32_t)(ECX + 0x11257bcc)));
  /* 1125713c jmp dword ptr [eax*4 + 0x11257bb4] */
  switch (EAX) {
    case 0: goto L_11257158;
    case 1: goto L_11257163;
    case 2: goto L_1125714e;
    case 3: goto L_11257143;
    case 4: goto L_1125716e;
    case 5: goto L_11257176;
    default: x86_unimpl("switch@0x1125713c out of table"); return;
  }
L_11257143:;
  /* 11257143 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257146 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11257149 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125714c jmp 0x11257176 */
  goto L_11257176;
L_1125714e:;
  /* 1125714e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257151 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11257153 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11257156 jmp 0x11257176 */
  goto L_11257176;
L_11257158:;
  /* 11257158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125715b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1125715e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11257161 jmp 0x11257176 */
  goto L_11257176;
L_11257163:;
  /* 11257163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257166 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11257169 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125716c jmp 0x11257176 */
  goto L_11257176;
L_1125716e:;
  /* 1125716e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257171 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11257173 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11257176:;
  /* 11257176 jmp 0x11257b82 */
  goto L_11257b82;
L_1125717b:;
  /* 1125717b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1125717f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257182 jne 0x112571b7 */
  if (!C.zf) goto L_112571b7;
  /* 11257184 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11257187 push edx */
  push32((uint32_t)(EDX));
  /* 11257188 call 0x11257db0 */
  push32(0x1125718du); f_11257db0();
  /* 1125718d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257190 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11257196 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125719d jge 0x112571b5 */
  if ((C.sf==C.of)) goto L_112571b5;
  /* 1125719f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112571a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 112571a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112571a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 112571ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112571af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_112571b5:;
  /* 112571b5 jmp 0x112571ce */
  goto L_112571ce;
L_112571b7:;
  /* 112571b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 112571bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112571c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112571c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 112571c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_112571ce:;
  /* 112571ce jmp 0x11257b82 */
  goto L_11257b82;
L_112571d3:;
  /* 112571d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 112571dd jmp 0x11257b82 */
  goto L_11257b82;
L_112571e2:;
  /* 112571e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112571e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112571e9 jne 0x11257212 */
  if (!C.zf) goto L_11257212;
  /* 112571eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 112571ee push eax */
  push32((uint32_t)(EAX));
  /* 112571ef call 0x11257db0 */
  push32(0x112571f4u); f_11257db0();
  /* 112571f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112571f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 112571fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257204 jge 0x11257210 */
  if ((C.sf==C.of)) goto L_11257210;
  /* 11257206 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11257210:;
  /* 11257210 jmp 0x11257229 */
  goto L_11257229;
L_11257212:;
  /* 11257212 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11257218 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125721b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1125721f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11257223 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11257229:;
  /* 11257229 jmp 0x11257b82 */
  goto L_11257b82;
L_1125722e:;
  /* 1125722e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11257232 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11257238 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1125723e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257241 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11257247 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125724e ja 0x112572bc */
  if ((!C.cf&&!C.zf)) goto L_112572bc;
  /* 11257250 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11257256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11257258 mov al, byte ptr [ecx + 0x11257bf1] */
  AL = (r8((uint32_t)(ECX + 0x11257bf1)));
  /* 1125725e jmp dword ptr [eax*4 + 0x11257bdd] */
  switch (EAX) {
    case 0: goto L_11257270;
    case 1: goto L_112572a9;
    case 2: goto L_11257265;
    case 3: goto L_112572b3;
    case 4: goto L_112572bc;
    default: x86_unimpl("switch@0x1125725e out of table"); return;
  }
L_11257265:;
  /* 11257265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257268 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1125726b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125726e jmp 0x112572bc */
  goto L_112572bc;
L_11257270:;
  /* 11257270 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257273 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11257276 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257279 jne 0x1125729b */
  if (!C.zf) goto L_1125729b;
  /* 1125727b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125727e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11257282 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257285 jne 0x1125729b */
  if (!C.zf) goto L_1125729b;
  /* 11257287 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125728a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125728d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11257290 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257293 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11257296 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11257299 jmp 0x112572a7 */
  goto L_112572a7;
L_1125729b:;
  /* 1125729b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 112572a2 jmp 0x11257030 */
  goto L_11257030;
L_112572a7:;
  /* 112572a7 jmp 0x112572bc */
  goto L_112572bc;
L_112572a9:;
  /* 112572a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112572ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 112572ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112572b1 jmp 0x112572bc */
  goto L_112572bc;
L_112572b3:;
  /* 112572b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112572b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112572b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112572bc:;
  /* 112572bc jmp 0x11257b82 */
  goto L_11257b82;
L_112572c1:;
  /* 112572c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112572c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 112572cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 112572d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112572d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 112572da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112572e1 ja 0x112579a7 */
  if ((!C.cf&&!C.zf)) goto L_112579a7;
  /* 112572e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 112572ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112572ef mov cl, byte ptr [edx + 0x11257c5c] */
  CL = (r8((uint32_t)(EDX + 0x11257c5c)));
  /* 112572f5 jmp dword ptr [ecx*4 + 0x11257c20] */
  switch (ECX) {
    case 0: goto L_112572fc;
    case 1: goto L_11257590;
    case 2: goto L_11257420;
    case 3: goto L_112576c9;
    case 4: goto L_1125738b;
    case 5: goto L_11257311;
    case 6: goto L_1125769b;
    case 7: goto L_112575a0;
    case 8: goto L_11257545;
    case 9: goto L_11257715;
    case 10: goto L_112576bf;
    case 11: goto L_11257436;
    case 12: goto L_112576b3;
    case 13: goto L_112576d5;
    case 14: goto L_112579a7;
    default: x86_unimpl("switch@0x112572f5 out of table"); return;
  }
L_112572fc:;
  /* 112572fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112572ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11257304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11257306 jne 0x11257311 */
  if (!C.zf) goto L_11257311;
  /* 11257308 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125730b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1125730e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11257311:;
  /* 11257311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257314 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1125731a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125731c je 0x11257357 */
  if (C.zf) goto L_11257357;
  /* 1125731e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11257321 push eax */
  push32((uint32_t)(EAX));
  /* 11257322 call 0x11257df0 */
  push32(0x11257327u); f_11257df0();
  /* 11257327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125732a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1125732e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11257332 push ecx */
  push32((uint32_t)(ECX));
  /* 11257333 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11257339 push edx */
  push32((uint32_t)(EDX));
  /* 1125733a call 0x1125ba30 */
  push32(0x1125733fu); f_1125ba30();
  /* 1125733f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257342 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11257345 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257349 jge 0x11257355 */
  if ((C.sf==C.of)) goto L_11257355;
  /* 1125734b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11257355:;
  /* 11257355 jmp 0x1125737d */
  goto L_1125737d;
L_11257357:;
  /* 11257357 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1125735a push eax */
  push32((uint32_t)(EAX));
  /* 1125735b call 0x11257db0 */
  push32(0x11257360u); f_11257db0();
  /* 11257360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257363 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1125736a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11257370 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11257376 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1125737d:;
  /* 1125737d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11257383 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11257386 jmp 0x112579a7 */
  goto L_112579a7;
L_1125738b:;
  /* 1125738b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1125738e push eax */
  push32((uint32_t)(EAX));
  /* 1125738f call 0x11257db0 */
  push32(0x11257394u); f_11257db0();
  /* 11257394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257397 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1125739d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112573a4 je 0x112573b2 */
  if (C.zf) goto L_112573b2;
  /* 112573a6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112573ac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112573b0 jne 0x112573cc */
  if (!C.zf) goto L_112573cc;
L_112573b2:;
  /* 112573b2 mov edx, dword ptr [0x1127f4e0] */
  EDX = (r32((uint32_t)(0x1127f4e0)));
  /* 112573b8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112573bb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112573be push eax */
  push32((uint32_t)(EAX));
  /* 112573bf call 0x11250db0 */
  push32(0x112573c4u); f_11250db0();
  /* 112573c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112573c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112573ca jmp 0x1125741b */
  goto L_1125741b;
L_112573cc:;
  /* 112573cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112573cf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 112573d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112573d7 je 0x112573fc */
  if (C.zf) goto L_112573fc;
  /* 112573d9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112573df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112573e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112573e5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 112573eb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 112573ee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112573f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112573f3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 112573fa jmp 0x1125741b */
  goto L_1125741b;
L_112573fc:;
  /* 112573fc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11257403 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11257409 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125740c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1125740f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11257415 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11257418 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1125741b:;
  /* 1125741b jmp 0x112579a7 */
  goto L_112579a7;
L_11257420:;
  /* 11257420 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257423 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11257429 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125742b jne 0x11257436 */
  if (!C.zf) goto L_11257436;
  /* 1125742d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257430 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11257433 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11257436:;
  /* 11257436 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125743d jne 0x1125744b */
  if (!C.zf) goto L_1125744b;
  /* 1125743f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11257449 jmp 0x11257457 */
  goto L_11257457;
L_1125744b:;
  /* 1125744b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11257451 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11257457:;
  /* 11257457 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1125745d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11257463 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11257466 push edx */
  push32((uint32_t)(EDX));
  /* 11257467 call 0x11257db0 */
  push32(0x1125746cu); f_11257db0();
  /* 1125746c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125746f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11257472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257475 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1125747a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125747c je 0x112574e6 */
  if (C.zf) goto L_112574e6;
  /* 1125747e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257482 jne 0x1125748d */
  if (!C.zf) goto L_1125748d;
  /* 11257484 mov ecx, dword ptr [0x1127f4e4] */
  ECX = (r32((uint32_t)(0x1127f4e4)));
  /* 1125748a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1125748d:;
  /* 1125748d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11257494 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257497 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1125749d:;
  /* 1125749d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 112574a3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 112574a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112574ac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 112574b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112574b4 je 0x112574d6 */
  if (C.zf) goto L_112574d6;
  /* 112574b6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 112574bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112574be mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 112574c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112574c3 je 0x112574d6 */
  if (C.zf) goto L_112574d6;
  /* 112574c5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 112574cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112574ce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 112574d4 jmp 0x1125749d */
  goto L_1125749d;
L_112574d6:;
  /* 112574d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 112574dc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112574df sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112574e1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 112574e4 jmp 0x11257540 */
  goto L_11257540;
L_112574e6:;
  /* 112574e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112574ea jne 0x112574f4 */
  if (!C.zf) goto L_112574f4;
  /* 112574ec mov eax, dword ptr [0x1127f4e0] */
  EAX = (r32((uint32_t)(0x1127f4e0)));
  /* 112574f1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_112574f4:;
  /* 112574f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112574f7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_112574fd:;
  /* 112574fd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11257503 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11257509 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125750c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11257512 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257514 je 0x11257534 */
  if (C.zf) goto L_11257534;
  /* 11257516 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1125751c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125751f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257521 je 0x11257534 */
  if (C.zf) goto L_11257534;
  /* 11257523 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11257529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125752c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11257532 jmp 0x112574fd */
  goto L_112574fd;
L_11257534:;
  /* 11257534 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1125753a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125753d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11257540:;
  /* 11257540 jmp 0x112579a7 */
  goto L_112579a7;
L_11257545:;
  /* 11257545 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11257548 push edx */
  push32((uint32_t)(EDX));
  /* 11257549 call 0x11257db0 */
  push32(0x1125754eu); f_11257db0();
  /* 1125754e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257551 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11257557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125755a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1125755d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125755f je 0x11257573 */
  if (C.zf) goto L_11257573;
  /* 11257561 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11257567 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1125756e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11257571 jmp 0x11257581 */
  goto L_11257581;
L_11257573:;
  /* 11257573 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11257579 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1125757f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11257581:;
  /* 11257581 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1125758b jmp 0x112579a7 */
  goto L_112579a7;
L_11257590:;
  /* 11257590 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11257597 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1125759a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1125759d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_112575a0:;
  /* 112575a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112575a3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 112575a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112575a8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 112575ae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112575b1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112575b8 jge 0x112575c6 */
  if ((C.sf==C.of)) goto L_112575c6;
  /* 112575ba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 112575c4 jmp 0x112575e2 */
  goto L_112575e2;
L_112575c6:;
  /* 112575c6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112575cd jne 0x112575e2 */
  if (!C.zf) goto L_112575e2;
  /* 112575cf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 112575d3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112575d6 jne 0x112575e2 */
  if (!C.zf) goto L_112575e2;
  /* 112575d8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_112575e2:;
  /* 112575e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112575e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112575e8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 112575eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112575ee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112575f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112575f3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 112575f6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 112575fc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11257602 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11257605 push ecx */
  push32((uint32_t)(ECX));
  /* 11257606 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1125760c push edx */
  push32((uint32_t)(EDX));
  /* 1125760d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11257611 push eax */
  push32((uint32_t)(EAX));
  /* 11257612 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257615 push ecx */
  push32((uint32_t)(ECX));
  /* 11257616 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1125761c push edx */
  push32((uint32_t)(EDX));
  /* 1125761d call dword ptr [0x1127ee20] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127ee20))), 0x11257623u);
  /* 11257623 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257629 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1125762e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11257630 je 0x11257648 */
  if (C.zf) goto L_11257648;
  /* 11257632 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257639 jne 0x11257648 */
  if (!C.zf) goto L_11257648;
  /* 1125763b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125763e push ecx */
  push32((uint32_t)(ECX));
  /* 1125763f call dword ptr [0x1127ee2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127ee2c))), 0x11257645u);
  /* 11257645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11257648:;
  /* 11257648 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1125764c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125764f jne 0x1125766a */
  if (!C.zf) goto L_1125766a;
  /* 11257651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257654 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11257659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125765b jne 0x1125766a */
  if (!C.zf) goto L_1125766a;
  /* 1125765d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257660 push ecx */
  push32((uint32_t)(ECX));
  /* 11257661 call dword ptr [0x1127ee24] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127ee24))), 0x11257667u);
  /* 11257667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125766a:;
  /* 1125766a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125766d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11257670 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257673 jne 0x11257687 */
  if (!C.zf) goto L_11257687;
  /* 11257675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257678 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1125767b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125767e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257681 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257684 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11257687:;
  /* 11257687 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125768a push eax */
  push32((uint32_t)(EAX));
  /* 1125768b call 0x11250db0 */
  push32(0x11257690u); f_11250db0();
  /* 11257690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257693 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11257696 jmp 0x112579a7 */
  goto L_112579a7;
L_1125769b:;
  /* 1125769b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125769e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 112576a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112576a4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 112576ae jmp 0x11257735 */
  goto L_11257735;
L_112576b3:;
  /* 112576b3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 112576bd jmp 0x11257735 */
  goto L_11257735;
L_112576bf:;
  /* 112576bf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_112576c9:;
  /* 112576c9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 112576d3 jmp 0x112576df */
  goto L_112576df;
L_112576d5:;
  /* 112576d5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_112576df:;
  /* 112576df mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 112576e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112576ec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 112576f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112576f4 je 0x11257713 */
  if (C.zf) goto L_11257713;
  /* 112576f6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 112576fd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11257703 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257706 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1125770c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11257713:;
  /* 11257713 jmp 0x11257735 */
  goto L_11257735;
L_11257715:;
  /* 11257715 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1125771f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257722 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11257728 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125772a je 0x11257735 */
  if (C.zf) goto L_11257735;
  /* 1125772c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125772f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11257732 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11257735:;
  /* 11257735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257738 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1125773d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125773f je 0x1125775e */
  if (C.zf) goto L_1125775e;
  /* 11257741 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11257744 push ecx */
  push32((uint32_t)(ECX));
  /* 11257745 call 0x11257dd0 */
  push32(0x1125774au); f_11257dd0();
  /* 1125774a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125774d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11257753 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11257759 jmp 0x112577ef */
  goto L_112577ef;
L_1125775e:;
  /* 1125775e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257761 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11257764 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257766 je 0x112577b0 */
  if (C.zf) goto L_112577b0;
  /* 11257768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125776b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1125776e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11257770 je 0x11257790 */
  if (C.zf) goto L_11257790;
  /* 11257772 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11257775 push ecx */
  push32((uint32_t)(ECX));
  /* 11257776 call 0x11257db0 */
  push32(0x1125777bu); f_11257db0();
  /* 1125777b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125777e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11257781 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11257782 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11257788 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1125778e jmp 0x112577ae */
  goto L_112577ae;
L_11257790:;
  /* 11257790 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11257793 push edx */
  push32((uint32_t)(EDX));
  /* 11257794 call 0x11257db0 */
  push32(0x11257799u); f_11257db0();
  /* 11257799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125779c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112577a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112577a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112577a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_112577ae:;
  /* 112577ae jmp 0x112577ef */
  goto L_112577ef;
L_112577b0:;
  /* 112577b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112577b3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 112577b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112577b8 je 0x112577d5 */
  if (C.zf) goto L_112577d5;
  /* 112577ba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 112577bd push ecx */
  push32((uint32_t)(ECX));
  /* 112577be call 0x11257db0 */
  push32(0x112577c3u); f_11257db0();
  /* 112577c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112577c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112577c7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112577cd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 112577d3 jmp 0x112577ef */
  goto L_112577ef;
L_112577d5:;
  /* 112577d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112577d8 push edx */
  push32((uint32_t)(EDX));
  /* 112577d9 call 0x11257db0 */
  push32(0x112577deu); f_11257db0();
  /* 112577de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112577e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112577e3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 112577e9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_112577ef:;
  /* 112577ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112577f2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 112577f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112577f7 je 0x11257837 */
  if (C.zf) goto L_11257837;
  /* 112577f9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257800 jg 0x11257837 */
  if ((!C.zf&&C.sf==C.of)) goto L_11257837;
  /* 11257802 jl 0x1125780d */
  if ((C.sf!=C.of)) goto L_1125780d;
  /* 11257804 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125780b jae 0x11257837 */
  if (!C.cf) goto L_11257837;
L_1125780d:;
  /* 1125780d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11257813 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11257815 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1125781b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125781e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11257820 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11257826 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1125782c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125782f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11257832 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11257835 jmp 0x1125784f */
  goto L_1125784f;
L_11257837:;
  /* 11257837 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1125783d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11257843 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11257849 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1125784f:;
  /* 1125784f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257852 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11257858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125785a jne 0x11257877 */
  if (!C.zf) goto L_11257877;
  /* 1125785c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11257862 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11257868 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1125786b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11257871 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11257877:;
  /* 11257877 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125787e jge 0x1125788c */
  if ((C.sf==C.of)) goto L_1125788c;
  /* 11257880 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1125788a jmp 0x11257895 */
  goto L_11257895;
L_1125788c:;
  /* 1125788c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125788f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11257892 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11257895:;
  /* 11257895 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1125789b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 112578a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112578a3 jne 0x112578ac */
  if (!C.zf) goto L_112578ac;
  /* 112578a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112578ac:;
  /* 112578ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 112578af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_112578b2:;
  /* 112578b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 112578b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 112578be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112578c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 112578c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112578c9 jg 0x112578df */
  if ((!C.zf&&C.sf==C.of)) goto L_112578df;
  /* 112578cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112578d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 112578d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112578d9 je 0x11257960 */
  if (C.zf) goto L_11257960;
L_112578df:;
  /* 112578df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 112578e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112578e6 push edx */
  push32((uint32_t)(EDX));
  /* 112578e7 push eax */
  push32((uint32_t)(EAX));
  /* 112578e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 112578ee push edx */
  push32((uint32_t)(EDX));
  /* 112578ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 112578f5 push eax */
  push32((uint32_t)(EAX));
  /* 112578f6 call 0x11256c70 */
  push32(0x112578fbu); f_11256c70();
  /* 112578fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112578fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11257904 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1125790a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125790b push edx */
  push32((uint32_t)(EDX));
  /* 1125790c push eax */
  push32((uint32_t)(EAX));
  /* 1125790d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11257913 push ecx */
  push32((uint32_t)(ECX));
  /* 11257914 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1125791a push edx */
  push32((uint32_t)(EDX));
  /* 1125791b call 0x11256c00 */
  push32(0x11257920u); f_11256c00();
  /* 11257920 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11257926 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1125792c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257933 jle 0x11257947 */
  if ((C.zf||C.sf!=C.of)) goto L_11257947;
  /* 11257935 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1125793b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257941 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11257947:;
  /* 11257947 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125794a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11257950 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11257952 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257955 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257958 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1125795b jmp 0x112578b2 */
  goto L_112578b2;
L_11257960:;
  /* 11257960 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11257963 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257966 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11257969 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125796c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125796f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11257972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257975 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1125797a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125797c je 0x112579a7 */
  if (C.zf) goto L_112579a7;
  /* 1125797e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257981 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11257984 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257987 jne 0x1125798f */
  if (!C.zf) goto L_1125798f;
  /* 11257989 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125798d jne 0x112579a7 */
  if (!C.zf) goto L_112579a7;
L_1125798f:;
  /* 1125798f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257992 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257995 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11257998 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125799b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1125799e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112579a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112579a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_112579a7:;
  /* 112579a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112579ae jne 0x11257b82 */
  if (!C.zf) goto L_11257b82;
  /* 112579b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112579b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 112579ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112579bc je 0x11257a0d */
  if (C.zf) goto L_11257a0d;
  /* 112579be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112579c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 112579c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112579c9 je 0x112579db */
  if (C.zf) goto L_112579db;
  /* 112579cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 112579d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112579d9 jmp 0x11257a0d */
  goto L_11257a0d;
L_112579db:;
  /* 112579db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112579de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112579e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112579e3 je 0x112579f5 */
  if (C.zf) goto L_112579f5;
  /* 112579e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 112579ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112579f3 jmp 0x11257a0d */
  goto L_11257a0d;
L_112579f5:;
  /* 112579f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112579f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 112579fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112579fd je 0x11257a0d */
  if (C.zf) goto L_11257a0d;
  /* 112579ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11257a06 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11257a0d:;
  /* 11257a0d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11257a13 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257a16 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257a19 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11257a1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257a22 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11257a25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257a27 jne 0x11257a45 */
  if (!C.zf) goto L_11257a45;
  /* 11257a29 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11257a2f push eax */
  push32((uint32_t)(EAX));
  /* 11257a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11257a34 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11257a3a push edx */
  push32((uint32_t)(EDX));
  /* 11257a3b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11257a3d call 0x11257d20 */
  push32(0x11257a42u); f_11257d20();
  /* 11257a42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11257a45:;
  /* 11257a45 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11257a4b push eax */
  push32((uint32_t)(EAX));
  /* 11257a4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11257a50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11257a53 push edx */
  push32((uint32_t)(EDX));
  /* 11257a54 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11257a5a push eax */
  push32((uint32_t)(EAX));
  /* 11257a5b call 0x11257d60 */
  push32(0x11257a60u); f_11257d60();
  /* 11257a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257a66 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11257a69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11257a6b je 0x11257a93 */
  if (C.zf) goto L_11257a93;
  /* 11257a6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257a70 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11257a73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257a75 jne 0x11257a93 */
  if (!C.zf) goto L_11257a93;
  /* 11257a77 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11257a7d push eax */
  push32((uint32_t)(EAX));
  /* 11257a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257a81 push ecx */
  push32((uint32_t)(ECX));
  /* 11257a82 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11257a88 push edx */
  push32((uint32_t)(EDX));
  /* 11257a89 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11257a8b call 0x11257d20 */
  push32(0x11257a90u); f_11257d20();
  /* 11257a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11257a93:;
  /* 11257a93 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257a97 je 0x11257b41 */
  if (C.zf) goto L_11257b41;
  /* 11257a9d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257aa1 jle 0x11257b41 */
  if ((C.zf||C.sf!=C.of)) goto L_11257b41;
  /* 11257aa7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257aaa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11257ab0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11257ab3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11257ab9:;
  /* 11257ab9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11257abf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11257ac5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257ac8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11257ace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257ad0 je 0x11257b3f */
  if (C.zf) goto L_11257b3f;
  /* 11257ad2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11257ad8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11257adb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11257ae2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11257ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11257aea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11257af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11257af1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11257af7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257afa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11257b00 call 0x1125ba30 */
  push32(0x11257b05u); f_1125ba30();
  /* 11257b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257b08 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11257b0e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257b15 jg 0x11257b19 */
  if ((!C.zf&&C.sf==C.of)) goto L_11257b19;
  /* 11257b17 jmp 0x11257b3f */
  goto L_11257b3f;
L_11257b19:;
  /* 11257b19 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11257b1f push eax */
  push32((uint32_t)(EAX));
  /* 11257b20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11257b24 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11257b2a push edx */
  push32((uint32_t)(EDX));
  /* 11257b2b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11257b31 push eax */
  push32((uint32_t)(EAX));
  /* 11257b32 call 0x11257d60 */
  push32(0x11257b37u); f_11257d60();
  /* 11257b37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257b3a jmp 0x11257ab9 */
  goto L_11257ab9;
L_11257b3f:;
  /* 11257b3f jmp 0x11257b5c */
  goto L_11257b5c;
L_11257b41:;
  /* 11257b41 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11257b47 push ecx */
  push32((uint32_t)(ECX));
  /* 11257b48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257b4b push edx */
  push32((uint32_t)(EDX));
  /* 11257b4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11257b4f push eax */
  push32((uint32_t)(EAX));
  /* 11257b50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11257b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11257b54 call 0x11257d60 */
  push32(0x11257b59u); f_11257d60();
  /* 11257b59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11257b5c:;
  /* 11257b5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257b5f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11257b62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11257b64 je 0x11257b82 */
  if (C.zf) goto L_11257b82;
  /* 11257b66 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11257b6c push eax */
  push32((uint32_t)(EAX));
  /* 11257b6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257b70 push ecx */
  push32((uint32_t)(ECX));
  /* 11257b71 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11257b77 push edx */
  push32((uint32_t)(EDX));
  /* 11257b78 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11257b7a call 0x11257d20 */
  push32(0x11257b7fu); f_11257d20();
  /* 11257b7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11257b82:;
  /* 11257b82 jmp 0x11256f94 */
  goto L_11256f94;
L_11257b87:;
  /* 11257b87 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11257b8d pop edi */
  EDI = (pop32());
  /* 11257b8e pop esi */
  ESI = (pop32());
  /* 11257b8f pop ebx */
  EBX = (pop32());
  /* 11257b90 mov esp, ebp */
  ESP = (EBP);
  /* 11257b92 pop ebp */
  EBP = (pop32());
  /* 11257b93 ret  */
  ESPCHK(0x11256f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ca0 @ 0x11257ca0 (119 bytes, 44 insns) */
void f_11257ca0(void) {
  FTRACE(0x11257ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11257ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11257ca4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257ca7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11257caa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257cad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257cb0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11257cb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257cb6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257cba jl 0x11257ce2 */
  if ((C.sf!=C.of)) goto L_11257ce2;
  /* 11257cbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257cbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11257cc1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11257cc4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11257cc6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11257cca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11257cd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11257cd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257cd6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11257cd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257cdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257cde mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11257ce0 jmp 0x11257cf5 */
  goto L_11257cf5;
L_11257ce2:;
  /* 11257ce2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257ce5 push edx */
  push32((uint32_t)(EDX));
  /* 11257ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11257cea call 0x11256cf0 */
  push32(0x11257cefu); f_11256cf0();
  /* 11257cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11257cf5:;
  /* 11257cf5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257cf9 jne 0x11257d06 */
  if (!C.zf) goto L_11257d06;
  /* 11257cfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257cfe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11257d04 jmp 0x11257d13 */
  goto L_11257d13;
L_11257d06:;
  /* 11257d06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257d09 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11257d0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257d0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257d11 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11257d13:;
  /* 11257d13 mov esp, ebp */
  ESP = (EBP);
  /* 11257d15 pop ebp */
  EBP = (pop32());
  /* 11257d16 ret  */
  ESPCHK(0x11257ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d20 @ 0x11257d20 (53 bytes, 23 insns) */
void f_11257d20(void) {
  FTRACE(0x11257d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11257d21 mov ebp, esp */
  EBP = (ESP);
L_11257d23:;
  /* 11257d23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257d26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257d29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257d2c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11257d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11257d31 jle 0x11257d53 */
  if ((C.zf||C.sf!=C.of)) goto L_11257d53;
  /* 11257d33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257d36 push edx */
  push32((uint32_t)(EDX));
  /* 11257d37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257d3a push eax */
  push32((uint32_t)(EAX));
  /* 11257d3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257d3e push ecx */
  push32((uint32_t)(ECX));
  /* 11257d3f call 0x11257ca0 */
  push32(0x11257d44u); f_11257ca0();
  /* 11257d44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257d47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257d4a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257d4d jne 0x11257d51 */
  if (!C.zf) goto L_11257d51;
  /* 11257d4f jmp 0x11257d53 */
  goto L_11257d53;
L_11257d51:;
  /* 11257d51 jmp 0x11257d23 */
  goto L_11257d23;
L_11257d53:;
  /* 11257d53 pop ebp */
  EBP = (pop32());
  /* 11257d54 ret  */
  ESPCHK(0x11257d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d60 @ 0x11257d60 (74 bytes, 31 insns) */
void f_11257d60(void) {
  FTRACE(0x11257d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11257d61 mov ebp, esp */
  EBP = (ESP);
  /* 11257d63 push ecx */
  push32((uint32_t)(ECX));
L_11257d64:;
  /* 11257d64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257d67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257d6a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257d6d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11257d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11257d72 jle 0x11257da6 */
  if ((C.zf||C.sf!=C.of)) goto L_11257da6;
  /* 11257d74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257d77 push edx */
  push32((uint32_t)(EDX));
  /* 11257d78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257d7b push eax */
  push32((uint32_t)(EAX));
  /* 11257d7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257d7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11257d82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11257d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257d88 push eax */
  push32((uint32_t)(EAX));
  /* 11257d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257d8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257d8f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11257d92 call 0x11257ca0 */
  push32(0x11257d97u); f_11257ca0();
  /* 11257d97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257d9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257d9d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257da0 jne 0x11257da4 */
  if (!C.zf) goto L_11257da4;
  /* 11257da2 jmp 0x11257da6 */
  goto L_11257da6;
L_11257da4:;
  /* 11257da4 jmp 0x11257d64 */
  goto L_11257d64;
L_11257da6:;
  /* 11257da6 mov esp, ebp */
  ESP = (EBP);
  /* 11257da8 pop ebp */
  EBP = (pop32());
  /* 11257da9 ret  */
  ESPCHK(0x11257d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017db0 @ 0x11257db0 (26 bytes, 12 insns) */
void f_11257db0(void) {
  FTRACE(0x11257db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257db1 mov ebp, esp */
  EBP = (ESP);
  /* 11257db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257db6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11257db8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257dbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11257dc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257dc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11257dc5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11257dc8 pop ebp */
  EBP = (pop32());
  /* 11257dc9 ret  */
  ESPCHK(0x11257db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017dd0 @ 0x11257dd0 (31 bytes, 14 insns) */
void f_11257dd0(void) {
  FTRACE(0x11257dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11257dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257dd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11257dd8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257ddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257dde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11257de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257de3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11257de5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257de8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11257dea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11257ded pop ebp */
  EBP = (pop32());
  /* 11257dee ret  */
  ESPCHK(0x11257dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017df0 @ 0x11257df0 (27 bytes, 12 insns) */
void f_11257df0(void) {
  FTRACE(0x11257df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257df1 mov ebp, esp */
  EBP = (ESP);
  /* 11257df3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257df6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11257df8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257dfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11257e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257e03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11257e05 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11257e09 pop ebp */
  EBP = (pop32());
  /* 11257e0a ret  */
  ESPCHK(0x11257df0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11257e10 (145 bytes, 42 insns) */
void f_11257e10(void) {
  FTRACE(0x11257e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11257e11 mov ebp, esp */
  EBP = (ESP);
  /* 11257e13 push ecx */
  push32((uint32_t)(ECX));
  /* 11257e14 call 0x11257ec0 */
  push32(0x11257e19u); f_11257ec0();
  /* 11257e19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257e1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11257e1e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11257e25 jmp 0x11257e30 */
  goto L_11257e30;
L_11257e27:;
  /* 11257e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257e2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257e2d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11257e30:;
  /* 11257e30 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257e34 jae 0x11257e5a */
  if (!C.cf) goto L_11257e5a;
  /* 11257e36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257e39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257e3c cmp ecx, dword ptr [eax*8 + 0x1127f4e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1127f4e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257e43 jne 0x11257e58 */
  if (!C.zf) goto L_11257e58;
  /* 11257e45 call 0x11257eb0 */
  push32(0x11257e4au); f_11257eb0();
  /* 11257e4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257e4d mov ecx, dword ptr [edx*8 + 0x1127f4ec] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1127f4ec)));
  /* 11257e54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11257e56 jmp 0x11257e9d */
  goto L_11257e9d;
L_11257e58:;
  /* 11257e58 jmp 0x11257e27 */
  goto L_11257e27;
L_11257e5a:;
  /* 11257e5a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257e5e jb 0x11257e73 */
  if (C.cf) goto L_11257e73;
  /* 11257e60 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257e64 ja 0x11257e73 */
  if ((!C.cf&&!C.zf)) goto L_11257e73;
  /* 11257e66 call 0x11257eb0 */
  push32(0x11257e6bu); f_11257eb0();
  /* 11257e6b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11257e71 jmp 0x11257e9d */
  goto L_11257e9d;
L_11257e73:;
  /* 11257e73 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257e7a jb 0x11257e92 */
  if (C.cf) goto L_11257e92;
  /* 11257e7c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257e83 ja 0x11257e92 */
  if ((!C.cf&&!C.zf)) goto L_11257e92;
  /* 11257e85 call 0x11257eb0 */
  push32(0x11257e8au); f_11257eb0();
  /* 11257e8a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11257e90 jmp 0x11257e9d */
  goto L_11257e9d;
L_11257e92:;
  /* 11257e92 call 0x11257eb0 */
  push32(0x11257e97u); f_11257eb0();
  /* 11257e97 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11257e9d:;
  /* 11257e9d mov esp, ebp */
  ESP = (EBP);
  /* 11257e9f pop ebp */
  EBP = (pop32());
  /* 11257ea0 ret  */
  ESPCHK(0x11257e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017eb0 @ 0x11257eb0 (13 bytes, 6 insns) */
void f_11257eb0(void) {
  FTRACE(0x11257eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11257eb3 call 0x1124f520 */
  push32(0x11257eb8u); f_1124f520();
  /* 11257eb8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257ebb pop ebp */
  EBP = (pop32());
  /* 11257ebc ret  */
  ESPCHK(0x11257eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ec0 @ 0x11257ec0 (13 bytes, 6 insns) */
void f_11257ec0(void) {
  FTRACE(0x11257ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11257ec3 call 0x1124f520 */
  push32(0x11257ec8u); f_1124f520();
  /* 11257ec8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11257ecb pop ebp */
  EBP = (pop32());
  /* 11257ecc ret  */
  ESPCHK(0x11257ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ed0 @ 0x11257ed0 (85 bytes, 32 insns) */
void f_11257ed0(void) {
  FTRACE(0x11257ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11257ed3 cmp dword ptr [0x1127f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257eda jne 0x11257f04 */
  if (!C.zf) goto L_11257f04;
  /* 11257edc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257edf push eax */
  push32((uint32_t)(EAX));
  /* 11257ee0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11257ee4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257ee7 push edx */
  push32((uint32_t)(EDX));
  /* 11257ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11257eea push 0 */
  push32((uint32_t)(0x0u));
  /* 11257eec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257eef push eax */
  push32((uint32_t)(EAX));
  /* 11257ef0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11257ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11257ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11257efa call 0x11258980 */
  push32(0x11257effu); f_11258980();
  /* 11257eff add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257f02 jmp 0x11257f23 */
  goto L_11257f23;
L_11257f04:;
  /* 11257f04 call 0x11257eb0 */
  push32(0x11257f09u); f_11257eb0();
  /* 11257f09 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11257f0f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11257f14 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257f17 push eax */
  push32((uint32_t)(EAX));
  /* 11257f18 call 0x11258b70 */
  push32(0x11257f1du); f_11258b70();
  /* 11257f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257f20 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11257f23:;
  /* 11257f23 pop ebp */
  EBP = (pop32());
  /* 11257f24 ret  */
  ESPCHK(0x11257ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f30 @ 0x11257f30 (103 bytes, 39 insns) */
void f_11257f30(void) {
  FTRACE(0x11257f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11257f31 mov ebp, esp */
  EBP = (ESP);
  /* 11257f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257f36 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11257f39 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11257f3c fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11257f3f cmp dword ptr [0x1127f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257f46 jne 0x11257f74 */
  if (!C.zf) goto L_11257f74;
  /* 11257f48 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11257f4b push eax */
  push32((uint32_t)(EAX));
  /* 11257f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11257f4f push ecx */
  push32((uint32_t)(ECX));
  /* 11257f50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11257f53 push edx */
  push32((uint32_t)(EDX));
  /* 11257f54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11257f57 push eax */
  push32((uint32_t)(EAX));
  /* 11257f58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11257f5b push ecx */
  push32((uint32_t)(ECX));
  /* 11257f5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11257f5f push edx */
  push32((uint32_t)(EDX));
  /* 11257f60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257f63 push eax */
  push32((uint32_t)(EAX));
  /* 11257f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257f67 push ecx */
  push32((uint32_t)(ECX));
  /* 11257f68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11257f6a call 0x11258980 */
  push32(0x11257f6fu); f_11258980();
  /* 11257f6f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257f72 jmp 0x11257f93 */
  goto L_11257f93;
L_11257f74:;
  /* 11257f74 call 0x11257eb0 */
  push32(0x11257f79u); f_11257eb0();
  /* 11257f79 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11257f7f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11257f84 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11257f87 push edx */
  push32((uint32_t)(EDX));
  /* 11257f88 call 0x11258b70 */
  push32(0x11257f8du); f_11258b70();
  /* 11257f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257f90 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11257f93:;
  /* 11257f93 mov esp, ebp */
  ESP = (EBP);
  /* 11257f95 pop ebp */
  EBP = (pop32());
  /* 11257f96 ret  */
  ESPCHK(0x11257f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fa0 @ 0x11257fa0 (178 bytes, 71 insns) */
void f_11257fa0(void) {
  FTRACE(0x11257fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11257fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11257fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11257fa3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11257fa6 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11257fa9 push eax */
  push32((uint32_t)(EAX));
  /* 11257faa lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11257fad push ecx */
  push32((uint32_t)(ECX));
  /* 11257fae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257fb1 push edx */
  push32((uint32_t)(EDX));
  /* 11257fb2 call 0x11258600 */
  push32(0x11257fb7u); f_11258600();
  /* 11257fb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257fba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11257fbc jne 0x11257fe6 */
  if (!C.zf) goto L_11257fe6;
  /* 11257fbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11257fc1 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11257fc3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11257fc6 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11257fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11257fca lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11257fcd push edx */
  push32((uint32_t)(EDX));
  /* 11257fce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11257fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11257fd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11257fd6 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11257fd9 push edx */
  push32((uint32_t)(EDX));
  /* 11257fda lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11257fdd push eax */
  push32((uint32_t)(EAX));
  /* 11257fde call 0x11258130 */
  push32(0x11257fe3u); f_11258130();
  /* 11257fe3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11257fe6:;
  /* 11257fe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11257fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11257fea call 0x11258aa0 */
  push32(0x11257fefu); f_11258aa0();
  /* 11257fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11257ff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11257ff5 cmp dword ptr [0x1127f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11257ffc jne 0x1125802e */
  if (!C.zf) goto L_1125802e;
  /* 11257ffe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258002 je 0x1125802e */
  if (C.zf) goto L_1125802e;
  /* 11258004 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11258007 push edx */
  push32((uint32_t)(EDX));
  /* 11258008 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125800b push eax */
  push32((uint32_t)(EAX));
  /* 1125800c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125800f push ecx */
  push32((uint32_t)(ECX));
  /* 11258010 push 0 */
  push32((uint32_t)(0x0u));
  /* 11258012 push 0 */
  push32((uint32_t)(0x0u));
  /* 11258014 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11258017 push edx */
  push32((uint32_t)(EDX));
  /* 11258018 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125801b push eax */
  push32((uint32_t)(EAX));
  /* 1125801c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125801f push ecx */
  push32((uint32_t)(ECX));
  /* 11258020 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258023 push edx */
  push32((uint32_t)(EDX));
  /* 11258024 call 0x11258980 */
  push32(0x11258029u); f_11258980();
  /* 11258029 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125802c jmp 0x1125804e */
  goto L_1125804e;
L_1125802e:;
  /* 1125802e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258031 push eax */
  push32((uint32_t)(EAX));
  /* 11258032 call 0x11258a20 */
  push32(0x11258037u); f_11258a20();
  /* 11258037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125803a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 1125803f mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11258042 push ecx */
  push32((uint32_t)(ECX));
  /* 11258043 call 0x11258b70 */
  push32(0x11258048u); f_11258b70();
  /* 11258048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125804b fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_1125804e:;
  /* 1125804e mov esp, ebp */
  ESP = (EBP);
  /* 11258050 pop ebp */
  EBP = (pop32());
  /* 11258051 ret  */
  ESPCHK(0x11257fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018060 @ 0x11258060 (206 bytes, 81 insns) */
void f_11258060(void) {
  FTRACE(0x11258060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258060 push ebp */
  push32((uint32_t)(EBP));
  /* 11258061 mov ebp, esp */
  EBP = (ESP);
  /* 11258063 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258066 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11258069 push eax */
  push32((uint32_t)(EAX));
  /* 1125806a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 1125806d push ecx */
  push32((uint32_t)(ECX));
  /* 1125806e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258071 push edx */
  push32((uint32_t)(EDX));
  /* 11258072 call 0x11258600 */
  push32(0x11258077u); f_11258600();
  /* 11258077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125807a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125807c jne 0x112580be */
  if (!C.zf) goto L_112580be;
  /* 1125807e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11258081 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11258083 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11258086 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11258089 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125808c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1125808f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11258092 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11258095 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11258098 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125809b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1125809e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 112580a1 push ecx */
  push32((uint32_t)(ECX));
  /* 112580a2 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 112580a5 push edx */
  push32((uint32_t)(EDX));
  /* 112580a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112580a9 push eax */
  push32((uint32_t)(EAX));
  /* 112580aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112580ad push ecx */
  push32((uint32_t)(ECX));
  /* 112580ae lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 112580b1 push edx */
  push32((uint32_t)(EDX));
  /* 112580b2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 112580b5 push eax */
  push32((uint32_t)(EAX));
  /* 112580b6 call 0x11258130 */
  push32(0x112580bbu); f_11258130();
  /* 112580bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112580be:;
  /* 112580be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112580c1 push ecx */
  push32((uint32_t)(ECX));
  /* 112580c2 call 0x11258aa0 */
  push32(0x112580c7u); f_11258aa0();
  /* 112580c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112580ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112580cd cmp dword ptr [0x1127f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112580d4 jne 0x1125810a */
  if (!C.zf) goto L_1125810a;
  /* 112580d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112580da je 0x1125810a */
  if (C.zf) goto L_1125810a;
  /* 112580dc mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112580df push edx */
  push32((uint32_t)(EDX));
  /* 112580e0 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 112580e3 push eax */
  push32((uint32_t)(EAX));
  /* 112580e4 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 112580e7 push ecx */
  push32((uint32_t)(ECX));
  /* 112580e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112580eb push edx */
  push32((uint32_t)(EDX));
  /* 112580ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112580ef push eax */
  push32((uint32_t)(EAX));
  /* 112580f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112580f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112580f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112580f7 push edx */
  push32((uint32_t)(EDX));
  /* 112580f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112580fb push eax */
  push32((uint32_t)(EAX));
  /* 112580fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112580ff push ecx */
  push32((uint32_t)(ECX));
  /* 11258100 call 0x11258980 */
  push32(0x11258105u); f_11258980();
  /* 11258105 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258108 jmp 0x1125812a */
  goto L_1125812a;
L_1125810a:;
  /* 1125810a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125810d push edx */
  push32((uint32_t)(EDX));
  /* 1125810e call 0x11258a20 */
  push32(0x11258113u); f_11258a20();
  /* 11258113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258116 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 1125811b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 1125811e push eax */
  push32((uint32_t)(EAX));
  /* 1125811f call 0x11258b70 */
  push32(0x11258124u); f_11258b70();
  /* 11258124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258127 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_1125812a:;
  /* 1125812a mov esp, ebp */
  ESP = (EBP);
  /* 1125812c pop ebp */
  EBP = (pop32());
  /* 1125812d ret  */
  ESPCHK(0x11258060u, _esp0);
  ESP += 4; return;
}

/* FUN_10018130 @ 0x11258130 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11258130(void) {
  FTRACE(0x11258130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258130 push ebp */
  push32((uint32_t)(EBP));
  /* 11258131 mov ebp, esp */
  EBP = (ESP);
  /* 11258133 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258139 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11258140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258143 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 1125814a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125814d mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11258154 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258157 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1125815a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125815c je 0x11258174 */
  if (C.zf) goto L_11258174;
  /* 1125815e mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11258165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258168 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125816b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125816e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258171 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11258174:;
  /* 11258174 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258177 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1125817a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125817c je 0x11258193 */
  if (C.zf) goto L_11258193;
  /* 1125817e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11258185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258188 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1125818b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1125818d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258190 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11258193:;
  /* 11258193 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258196 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11258199 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125819b je 0x112581b3 */
  if (C.zf) goto L_112581b3;
  /* 1125819d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 112581a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112581a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112581aa or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112581ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112581b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_112581b3:;
  /* 112581b3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112581b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112581b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112581bb je 0x112581d3 */
  if (C.zf) goto L_112581d3;
  /* 112581bd mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 112581c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112581c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112581ca or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 112581cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112581d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_112581d3:;
  /* 112581d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112581d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 112581d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112581db je 0x112581f2 */
  if (C.zf) goto L_112581f2;
  /* 112581dd mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 112581e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112581e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112581ea or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 112581ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112581ef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_112581f2:;
  /* 112581f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112581f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112581f7 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112581fa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112581fc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112581fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112581ff and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11258202 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11258205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258208 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1125820b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1125820e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11258210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258213 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11258216 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258219 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125821b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125821e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11258220 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258222 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11258223 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11258226 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11258229 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125822c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125822f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11258232 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11258234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258237 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1125823a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125823d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125823f and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11258242 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11258244 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258246 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11258247 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125824a shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1125824d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258250 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11258253 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11258255 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11258257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125825a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1125825d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258260 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11258262 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11258265 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11258267 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258269 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1125826a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1125826d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1125826f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258272 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11258275 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11258278 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1125827a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125827d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11258280 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258283 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258285 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11258288 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125828a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125828c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1125828d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11258290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258293 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11258296 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11258299 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1125829b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125829e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112582a1 call 0x11258b30 */
  push32(0x112582a6u); f_11258b30();
  /* 112582a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112582a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112582ac and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112582af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112582b1 je 0x112582c2 */
  if (C.zf) goto L_112582c2;
  /* 112582b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112582b6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112582b9 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 112582bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112582bf mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_112582c2:;
  /* 112582c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112582c5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112582c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112582ca je 0x112582da */
  if (C.zf) goto L_112582da;
  /* 112582cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112582cf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112582d2 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 112582d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112582d7 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_112582da:;
  /* 112582da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112582dd and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 112582e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112582e2 je 0x112582f3 */
  if (C.zf) goto L_112582f3;
  /* 112582e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112582e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112582ea or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112582ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112582f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_112582f3:;
  /* 112582f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112582f6 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 112582f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112582fb je 0x1125830c */
  if (C.zf) goto L_1125830c;
  /* 112582fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258300 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11258303 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11258306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258309 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_1125830c:;
  /* 1125830c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125830f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11258312 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258314 je 0x11258324 */
  if (C.zf) goto L_11258324;
  /* 11258316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258319 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1125831c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1125831e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258321 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11258324:;
  /* 11258324 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258327 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11258329 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 1125832e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11258331 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258338 ja 0x11258354 */
  if ((!C.cf&&!C.zf)) goto L_11258354;
  /* 1125833a cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258341 je 0x1125836e */
  if (C.zf) goto L_1125836e;
  /* 11258343 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258347 je 0x11258392 */
  if (C.zf) goto L_11258392;
  /* 11258349 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258350 je 0x11258380 */
  if (C.zf) goto L_11258380;
  /* 11258352 jmp 0x1125839f */
  goto L_1125839f;
L_11258354:;
  /* 11258354 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125835b je 0x1125835f */
  if (C.zf) goto L_1125835f;
  /* 1125835d jmp 0x1125839f */
  goto L_1125839f;
L_1125835f:;
  /* 1125835f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258362 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258364 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11258367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125836a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125836c jmp 0x1125839f */
  goto L_1125839f;
L_1125836e:;
  /* 1125836e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258371 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258373 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11258376 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11258379 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125837c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125837e jmp 0x1125839f */
  goto L_1125839f;
L_11258380:;
  /* 11258380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258383 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258385 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11258388 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125838b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125838e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11258390 jmp 0x1125839f */
  goto L_1125839f;
L_11258392:;
  /* 11258392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258395 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258397 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 1125839a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125839d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1125839f:;
  /* 1125839f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112583a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112583a4 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 112583aa mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112583ad cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112583b1 je 0x112583e8 */
  if (C.zf) goto L_112583e8;
  /* 112583b3 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112583ba je 0x112583d6 */
  if (C.zf) goto L_112583d6;
  /* 112583bc cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112583c3 je 0x112583c7 */
  if (C.zf) goto L_112583c7;
  /* 112583c5 jmp 0x112583f8 */
  goto L_112583f8;
L_112583c7:;
  /* 112583c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112583ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112583cc and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 112583cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112583d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112583d4 jmp 0x112583f8 */
  goto L_112583f8;
L_112583d6:;
  /* 112583d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112583d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112583db and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 112583de or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112583e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112583e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112583e6 jmp 0x112583f8 */
  goto L_112583f8;
L_112583e8:;
  /* 112583e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112583eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112583ed and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 112583f0 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 112583f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112583f6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112583f8:;
  /* 112583f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112583fb and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11258400 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11258403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258406 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258408 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125840e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11258410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258413 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11258415 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258418 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 1125841b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125841e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258421 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11258424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258427 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 1125842a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125842d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11258430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258433 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11258436 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258439 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125843c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125843e mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11258441 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11258444 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11258447 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125844a mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1125844d or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11258450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258453 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11258456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258459 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1125845c and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125845f or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11258462 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258465 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11258468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125846b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125846e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11258470 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11258473 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11258476 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11258479 call 0x11258b50 */
  push32(0x1125847eu); f_11258b50();
  /* 1125847e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11258481 push edx */
  push32((uint32_t)(EDX));
  /* 11258482 push 1 */
  push32((uint32_t)(0x1u));
  /* 11258484 push 0 */
  push32((uint32_t)(0x0u));
  /* 11258486 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258489 push eax */
  push32((uint32_t)(EAX));
  /* 1125848a call dword ptr [0x11283394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283394))), 0x11258490u);
  /* 11258490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258493 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11258496 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11258499 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125849c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125849e je 0x112584ad */
  if (C.zf) goto L_112584ad;
  /* 112584a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112584a5 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 112584a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584ab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112584ad:;
  /* 112584ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112584b0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112584b3 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 112584b6 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112584b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112584bb je 0x112584c9 */
  if (C.zf) goto L_112584c9;
  /* 112584bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112584c2 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 112584c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584c7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112584c9:;
  /* 112584c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112584cc mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112584cf shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112584d2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112584d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112584d7 je 0x112584e6 */
  if (C.zf) goto L_112584e6;
  /* 112584d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112584de and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 112584e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112584e6:;
  /* 112584e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112584e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112584ec shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 112584ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112584f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112584f3 je 0x11258502 */
  if (C.zf) goto L_11258502;
  /* 112584f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112584f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112584fa and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 112584fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258500 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11258502:;
  /* 11258502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258505 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11258508 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125850b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125850d je 0x1125851b */
  if (C.zf) goto L_1125851b;
  /* 1125850f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258512 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11258514 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11258516 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258519 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1125851b:;
  /* 1125851b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125851e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11258520 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11258523 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11258526 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125852a ja 0x11258579 */
  if ((!C.cf&&!C.zf)) goto L_11258579;
  /* 1125852c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125852f jmp dword ptr [ecx*4 + 0x112585e1] */
  switch (ECX) {
    case 0: goto L_1125856c;
    case 1: goto L_1125855a;
    case 2: goto L_11258548;
    case 3: goto L_11258536;
    default: x86_unimpl("switch@0x1125852f out of table"); return;
  }
L_11258536:;
  /* 11258536 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258539 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125853b and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 1125853e or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11258541 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258544 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11258546 jmp 0x11258579 */
  goto L_11258579;
L_11258548:;
  /* 11258548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125854b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125854d and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11258550 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11258553 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258556 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11258558 jmp 0x11258579 */
  goto L_11258579;
L_1125855a:;
  /* 1125855a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125855d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125855f and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11258562 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11258565 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258568 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125856a jmp 0x11258579 */
  goto L_11258579;
L_1125856c:;
  /* 1125856c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125856f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11258571 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11258574 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258577 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11258579:;
  /* 11258579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125857c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125857e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11258581 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11258584 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11258587 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125858b je 0x1125859b */
  if (C.zf) goto L_1125859b;
  /* 1125858d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258591 je 0x112585ad */
  if (C.zf) goto L_112585ad;
  /* 11258593 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258597 je 0x112585bf */
  if (C.zf) goto L_112585bf;
  /* 11258599 jmp 0x112585cc */
  goto L_112585cc;
L_1125859b:;
  /* 1125859b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125859e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112585a0 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112585a3 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112585a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112585a9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112585ab jmp 0x112585cc */
  goto L_112585cc;
L_112585ad:;
  /* 112585ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112585b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112585b2 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112585b5 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112585b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112585bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112585bd jmp 0x112585cc */
  goto L_112585cc;
L_112585bf:;
  /* 112585bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112585c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112585c4 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112585c7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112585ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112585cc:;
  /* 112585cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112585cf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112585d2 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 112585d5 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112585d7 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 112585da mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 112585dd mov esp, ebp */
  ESP = (EBP);
  /* 112585df pop ebp */
  EBP = (pop32());
  /* 112585e0 ret  */
  ESPCHK(0x11258130u, _esp0);
  ESP += 4; return;
}

/* FUN_10018600 @ 0x11258600 (882 bytes, 268 insns) */
void f_11258600(void) {
  FTRACE(0x11258600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258600 push ebp */
  push32((uint32_t)(EBP));
  /* 11258601 mov ebp, esp */
  EBP = (ESP);
  /* 11258603 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258609 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125860c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125860f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258612 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11258615 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258617 je 0x1125863a */
  if (C.zf) goto L_1125863a;
  /* 11258619 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125861c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125861f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11258621 je 0x1125863a */
  if (C.zf) goto L_1125863a;
  /* 11258623 push 1 */
  push32((uint32_t)(0x1u));
  /* 11258625 call 0x11258bb0 */
  push32(0x1125862au); f_11258bb0();
  /* 1125862a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125862d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258630 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11258632 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11258635 jmp 0x1125893e */
  goto L_1125893e;
L_1125863a:;
  /* 1125863a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125863d and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11258640 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258642 je 0x11258665 */
  if (C.zf) goto L_11258665;
  /* 11258644 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258647 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125864a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125864c je 0x11258665 */
  if (C.zf) goto L_11258665;
  /* 1125864e push 4 */
  push32((uint32_t)(0x4u));
  /* 11258650 call 0x11258bb0 */
  push32(0x11258655u); f_11258bb0();
  /* 11258655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125865b and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 1125865d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11258660 jmp 0x1125893e */
  goto L_1125893e;
L_11258665:;
  /* 11258665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258668 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125866b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125866d je 0x112587e1 */
  if (C.zf) goto L_112587e1;
  /* 11258673 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258676 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11258679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125867b je 0x112587e1 */
  if (C.zf) goto L_112587e1;
  /* 11258681 push 8 */
  push32((uint32_t)(0x8u));
  /* 11258683 call 0x11258bb0 */
  push32(0x11258688u); f_11258bb0();
  /* 11258688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125868b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125868e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11258693 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11258696 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125869d ja 0x112586c0 */
  if ((!C.cf&&!C.zf)) goto L_112586c0;
  /* 1125869f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112586a6 je 0x11258715 */
  if (C.zf) goto L_11258715;
  /* 112586a8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112586ac je 0x112586d2 */
  if (C.zf) goto L_112586d2;
  /* 112586ae cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112586b5 je 0x11258755 */
  if (C.zf) goto L_11258755;
  /* 112586bb jmp 0x112587d3 */
  goto L_112587d3;
L_112586c0:;
  /* 112586c0 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112586c7 je 0x11258795 */
  if (C.zf) goto L_11258795;
  /* 112586cd jmp 0x112587d3 */
  goto L_112587d3;
L_112586d2:;
  /* 112586d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112586d5 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 112586d7 fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 112586dd fnstsw ax */
  AX = fpu_status();
  /* 112586df test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 112586e2 jne 0x112586f7 */
  if (!C.zf) goto L_112586f7;
  /* 112586e4 mov edx, dword ptr [0x1127fb18] */
  EDX = (r32((uint32_t)(0x1127fb18)));
  /* 112586ea mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 112586ed mov eax, dword ptr [0x1127fb1c] */
  EAX = (r32((uint32_t)(0x1127fb1c)));
  /* 112586f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112586f5 jmp 0x11258702 */
  goto L_11258702;
L_112586f7:;
  /* 112586f7 fld qword ptr [0x1127fb18] */
  fpu_push(rf64((uint32_t)(0x1127fb18)));
  /* 112586fd fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 112586ff fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11258702:;
  /* 11258702 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258705 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11258708 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1125870a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125870d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11258710 jmp 0x112587d3 */
  goto L_112587d3;
L_11258715:;
  /* 11258715 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258718 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 1125871a fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 11258720 fnstsw ax */
  AX = fpu_status();
  /* 11258722 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11258725 jne 0x1125873a */
  if (!C.zf) goto L_1125873a;
  /* 11258727 mov edx, dword ptr [0x1127fb18] */
  EDX = (r32((uint32_t)(0x1127fb18)));
  /* 1125872d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11258730 mov eax, dword ptr [0x1127fb1c] */
  EAX = (r32((uint32_t)(0x1127fb1c)));
  /* 11258735 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11258738 jmp 0x11258745 */
  goto L_11258745;
L_1125873a:;
  /* 1125873a fld qword ptr [0x1127fb28] */
  fpu_push(rf64((uint32_t)(0x1127fb28)));
  /* 11258740 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11258742 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11258745:;
  /* 11258745 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258748 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125874b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1125874d mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11258750 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11258753 jmp 0x112587d3 */
  goto L_112587d3;
L_11258755:;
  /* 11258755 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258758 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 1125875a fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 11258760 fnstsw ax */
  AX = fpu_status();
  /* 11258762 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11258765 jne 0x1125877a */
  if (!C.zf) goto L_1125877a;
  /* 11258767 mov edx, dword ptr [0x1127fb28] */
  EDX = (r32((uint32_t)(0x1127fb28)));
  /* 1125876d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11258770 mov eax, dword ptr [0x1127fb2c] */
  EAX = (r32((uint32_t)(0x1127fb2c)));
  /* 11258775 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11258778 jmp 0x11258785 */
  goto L_11258785;
L_1125877a:;
  /* 1125877a fld qword ptr [0x1127fb18] */
  fpu_push(rf64((uint32_t)(0x1127fb18)));
  /* 11258780 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11258782 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11258785:;
  /* 11258785 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258788 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1125878b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1125878d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11258790 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11258793 jmp 0x112587d3 */
  goto L_112587d3;
L_11258795:;
  /* 11258795 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258798 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 1125879a fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 112587a0 fnstsw ax */
  AX = fpu_status();
  /* 112587a2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 112587a5 jne 0x112587ba */
  if (!C.zf) goto L_112587ba;
  /* 112587a7 mov edx, dword ptr [0x1127fb28] */
  EDX = (r32((uint32_t)(0x1127fb28)));
  /* 112587ad mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 112587b0 mov eax, dword ptr [0x1127fb2c] */
  EAX = (r32((uint32_t)(0x1127fb2c)));
  /* 112587b5 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 112587b8 jmp 0x112587c5 */
  goto L_112587c5;
L_112587ba:;
  /* 112587ba fld qword ptr [0x1127fb28] */
  fpu_push(rf64((uint32_t)(0x1127fb28)));
  /* 112587c0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 112587c2 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_112587c5:;
  /* 112587c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112587c8 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 112587cb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112587cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 112587d0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_112587d3:;
  /* 112587d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112587d6 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 112587d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112587dc jmp 0x1125893e */
  goto L_1125893e;
L_112587e1:;
  /* 112587e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112587e4 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 112587e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112587e9 je 0x1125893e */
  if (C.zf) goto L_1125893e;
  /* 112587ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112587f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 112587f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112587f7 je 0x1125893e */
  if (C.zf) goto L_1125893e;
  /* 112587fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11258804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258807 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1125880a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125880c je 0x11258815 */
  if (C.zf) goto L_11258815;
  /* 1125880e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11258815:;
  /* 11258815 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258818 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 1125881a fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 11258820 fnstsw ax */
  AX = fpu_status();
  /* 11258822 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11258825 jne 0x1125891e */
  if (!C.zf) goto L_1125891e;
  /* 1125882b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1125882e push eax */
  push32((uint32_t)(EAX));
  /* 1125882f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258832 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11258835 push edx */
  push32((uint32_t)(EDX));
  /* 11258836 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11258838 push eax */
  push32((uint32_t)(EAX));
  /* 11258839 call 0x1125bcc0 */
  push32(0x1125883eu); f_1125bcc0();
  /* 1125883e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258841 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11258844 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11258847 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125884d mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11258850 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258857 jge 0x11258871 */
  if ((C.sf==C.of)) goto L_11258871;
  /* 11258859 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 1125885c fmul qword ptr [0x1127b5c8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1127b5c8)));
  /* 11258862 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11258865 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1125886c jmp 0x1125890e */
  goto L_1125890e;
L_11258871:;
  /* 11258871 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11258874 fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 1125887a fnstsw ax */
  AX = fpu_status();
  /* 1125887c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 1125887f je 0x1125888a */
  if (C.zf) goto L_1125888a;
  /* 11258881 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11258888 jmp 0x11258891 */
  goto L_11258891;
L_1125888a:;
  /* 1125888a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11258891:;
  /* 11258891 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11258894 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11258897 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 1125889b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 1125889f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 112588a3 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 112588a7 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 112588aa mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 112588ae jmp 0x112588b9 */
  goto L_112588b9;
L_112588b0:;
  /* 112588b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112588b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112588b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112588b9:;
  /* 112588b9 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112588c0 jge 0x11258900 */
  if ((C.sf==C.of)) goto L_11258900;
  /* 112588c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112588c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112588c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112588ca je 0x112588d9 */
  if (C.zf) goto L_112588d9;
  /* 112588cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112588d0 jne 0x112588d9 */
  if (!C.zf) goto L_112588d9;
  /* 112588d2 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_112588d9:;
  /* 112588d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112588dc shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112588de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112588e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112588e4 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112588e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112588e9 je 0x112588f6 */
  if (C.zf) goto L_112588f6;
  /* 112588eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112588ee or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 112588f3 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112588f6:;
  /* 112588f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112588f9 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112588fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112588fe jmp 0x112588b0 */
  goto L_112588b0;
L_11258900:;
  /* 11258900 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258904 je 0x1125890e */
  if (C.zf) goto L_1125890e;
  /* 11258906 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11258909 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 1125890b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_1125890e:;
  /* 1125890e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258911 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11258914 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11258916 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11258919 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1125891c jmp 0x11258925 */
  goto L_11258925;
L_1125891e:;
  /* 1125891e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11258925:;
  /* 11258925 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258929 je 0x11258935 */
  if (C.zf) goto L_11258935;
  /* 1125892b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1125892d call 0x11258bb0 */
  push32(0x11258932u); f_11258bb0();
  /* 11258932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11258935:;
  /* 11258935 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258938 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 1125893b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125893e:;
  /* 1125893e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258941 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11258944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258946 je 0x11258965 */
  if (C.zf) goto L_11258965;
  /* 11258948 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125894b and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1125894e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258950 je 0x11258965 */
  if (C.zf) goto L_11258965;
  /* 11258952 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11258954 call 0x11258bb0 */
  push32(0x11258959u); f_11258bb0();
  /* 11258959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125895c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125895f and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11258962 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11258965:;
  /* 11258965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258967 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125896b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1125896e mov esp, ebp */
  ESP = (EBP);
  /* 11258970 pop ebp */
  EBP = (pop32());
  /* 11258971 ret  */
  ESPCHK(0x11258600u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11258980 (155 bytes, 54 insns) */
void f_11258980(void) {
  FTRACE(0x11258980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258980 push ebp */
  push32((uint32_t)(EBP));
  /* 11258981 mov ebp, esp */
  EBP = (ESP);
  /* 11258983 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258986 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258989 push eax */
  push32((uint32_t)(EAX));
  /* 1125898a call 0x11258a60 */
  push32(0x1125898fu); f_11258a60();
  /* 1125898f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258992 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11258995 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258999 je 0x112589f7 */
  if (C.zf) goto L_112589f7;
  /* 1125899b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125899e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112589a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112589a4 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112589a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112589aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112589ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112589b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112589b3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112589b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112589b9 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112589bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112589bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 112589c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112589c5 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 112589ca mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112589cd push edx */
  push32((uint32_t)(EDX));
  /* 112589ce call 0x11258b70 */
  push32(0x112589d3u); f_11258b70();
  /* 112589d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112589d6 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 112589d9 push eax */
  push32((uint32_t)(EAX));
  /* 112589da call 0x11258b20 */
  push32(0x112589dfu); f_11258b20();
  /* 112589df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112589e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112589e4 jne 0x112589f2 */
  if (!C.zf) goto L_112589f2;
  /* 112589e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112589e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112589ea call 0x11258a20 */
  push32(0x112589efu); f_11258a20();
  /* 112589ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112589f2:;
  /* 112589f2 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 112589f5 jmp 0x11258a17 */
  goto L_11258a17;
L_112589f7:;
  /* 112589f7 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 112589fc mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112589ff push edx */
  push32((uint32_t)(EDX));
  /* 11258a00 call 0x11258b70 */
  push32(0x11258a05u); f_11258b70();
  /* 11258a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258a08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258a0b push eax */
  push32((uint32_t)(EAX));
  /* 11258a0c call 0x11258a20 */
  push32(0x11258a11u); f_11258a20();
  /* 11258a11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258a14 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11258a17:;
  /* 11258a17 mov esp, ebp */
  ESP = (EBP);
  /* 11258a19 pop ebp */
  EBP = (pop32());
  /* 11258a1a ret  */
  ESPCHK(0x11258980u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11258a20 (58 bytes, 20 insns) */
void f_11258a20(void) {
  FTRACE(0x11258a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11258a21 mov ebp, esp */
  EBP = (ESP);
  /* 11258a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11258a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258a27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11258a2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258a2e je 0x11258a3e */
  if (C.zf) goto L_11258a3e;
  /* 11258a30 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258a34 jle 0x11258a56 */
  if ((C.zf||C.sf!=C.of)) goto L_11258a56;
  /* 11258a36 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258a3a jle 0x11258a4b */
  if ((C.zf||C.sf!=C.of)) goto L_11258a4b;
  /* 11258a3c jmp 0x11258a56 */
  goto L_11258a56;
L_11258a3e:;
  /* 11258a3e call 0x11257eb0 */
  push32(0x11258a43u); f_11257eb0();
  /* 11258a43 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11258a49 jmp 0x11258a56 */
  goto L_11258a56;
L_11258a4b:;
  /* 11258a4b call 0x11257eb0 */
  push32(0x11258a50u); f_11257eb0();
  /* 11258a50 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11258a56:;
  /* 11258a56 mov esp, ebp */
  ESP = (EBP);
  /* 11258a58 pop ebp */
  EBP = (pop32());
  /* 11258a59 ret  */
  ESPCHK(0x11258a20u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11258a60 (63 bytes, 22 insns) */
void f_11258a60(void) {
  FTRACE(0x11258a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11258a61 mov ebp, esp */
  EBP = (ESP);
  /* 11258a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11258a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11258a6b jmp 0x11258a76 */
  goto L_11258a76;
L_11258a6d:;
  /* 11258a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258a70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11258a73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11258a76:;
  /* 11258a76 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258a7a jge 0x11258a99 */
  if ((C.sf==C.of)) goto L_11258a99;
  /* 11258a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258a7f mov edx, dword ptr [ecx*8 + 0x1127f650] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1127f650)));
  /* 11258a86 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258a89 jne 0x11258a97 */
  if (!C.zf) goto L_11258a97;
  /* 11258a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258a8e mov eax, dword ptr [eax*8 + 0x1127f654] */
  EAX = (r32((uint32_t)(EAX*8 + 0x1127f654)));
  /* 11258a95 jmp 0x11258a9b */
  goto L_11258a9b;
L_11258a97:;
  /* 11258a97 jmp 0x11258a6d */
  goto L_11258a6d;
L_11258a99:;
  /* 11258a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11258a9b:;
  /* 11258a9b mov esp, ebp */
  ESP = (EBP);
  /* 11258a9d pop ebp */
  EBP = (pop32());
  /* 11258a9e ret  */
  ESPCHK(0x11258a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10018aa0 @ 0x11258aa0 (113 bytes, 38 insns) */
void f_11258aa0(void) {
  FTRACE(0x11258aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11258aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11258aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11258aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258aa7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11258aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258aac je 0x11258ab7 */
  if (C.zf) goto L_11258ab7;
  /* 11258aae mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11258ab5 jmp 0x11258b0a */
  goto L_11258b0a;
L_11258ab7:;
  /* 11258ab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258aba and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11258abd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258abf je 0x11258aca */
  if (C.zf) goto L_11258aca;
  /* 11258ac1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11258ac8 jmp 0x11258b0a */
  goto L_11258b0a;
L_11258aca:;
  /* 11258aca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258acd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11258ad0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11258ad2 je 0x11258add */
  if (C.zf) goto L_11258add;
  /* 11258ad4 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11258adb jmp 0x11258b0a */
  goto L_11258b0a;
L_11258add:;
  /* 11258add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258ae0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11258ae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258ae5 je 0x11258af0 */
  if (C.zf) goto L_11258af0;
  /* 11258ae7 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11258aee jmp 0x11258b0a */
  goto L_11258b0a;
L_11258af0:;
  /* 11258af0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258af3 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11258af6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258af8 je 0x11258b03 */
  if (C.zf) goto L_11258b03;
  /* 11258afa mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11258b01 jmp 0x11258b0a */
  goto L_11258b0a;
L_11258b03:;
  /* 11258b03 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11258b0a:;
  /* 11258b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11258b0d mov esp, ebp */
  ESP = (EBP);
  /* 11258b0f pop ebp */
  EBP = (pop32());
  /* 11258b10 ret  */
  ESPCHK(0x11258aa0u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11258b20 (7 bytes, 5 insns) */
void f_11258b20(void) {
  FTRACE(0x11258b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11258b21 mov ebp, esp */
  EBP = (ESP);
  /* 11258b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258b25 pop ebp */
  EBP = (pop32());
  /* 11258b26 ret  */
  ESPCHK(0x11258b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b30 @ 0x11258b30 (22 bytes, 15 insns) */
void f_11258b30(void) {
  FTRACE(0x11258b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11258b31 mov ebp, esp */
  EBP = (ESP);
  /* 11258b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11258b34 push ebx */
  push32((uint32_t)(EBX));
  /* 11258b35 push esi */
  push32((uint32_t)(ESI));
  /* 11258b36 push edi */
  push32((uint32_t)(EDI));
  /* 11258b37 wait  */
  /* wait (no observable integer/reg state) */
  /* 11258b38 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11258b3b movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11258b3f pop edi */
  EDI = (pop32());
  /* 11258b40 pop esi */
  ESI = (pop32());
  /* 11258b41 pop ebx */
  EBX = (pop32());
  /* 11258b42 mov esp, ebp */
  ESP = (EBP);
  /* 11258b44 pop ebp */
  EBP = (pop32());
  /* 11258b45 ret  */
  ESPCHK(0x11258b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b50 @ 0x11258b50 (23 bytes, 15 insns) */
void f_11258b50(void) {
  FTRACE(0x11258b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11258b51 mov ebp, esp */
  EBP = (ESP);
  /* 11258b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11258b54 push ebx */
  push32((uint32_t)(EBX));
  /* 11258b55 push esi */
  push32((uint32_t)(ESI));
  /* 11258b56 push edi */
  push32((uint32_t)(EDI));
  /* 11258b57 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11258b5a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11258b5c movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11258b60 pop edi */
  EDI = (pop32());
  /* 11258b61 pop esi */
  ESI = (pop32());
  /* 11258b62 pop ebx */
  EBX = (pop32());
  /* 11258b63 mov esp, ebp */
  ESP = (EBP);
  /* 11258b65 pop ebp */
  EBP = (pop32());
  /* 11258b66 ret  */
  ESPCHK(0x11258b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018b70 @ 0x11258b70 (50 bytes, 24 insns) */
void f_11258b70(void) {
  FTRACE(0x11258b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11258b71 mov ebp, esp */
  EBP = (ESP);
  /* 11258b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11258b77 push esi */
  push32((uint32_t)(ESI));
  /* 11258b78 push edi */
  push32((uint32_t)(EDI));
  /* 11258b79 wait  */
  /* wait (no observable integer/reg state) */
  /* 11258b7a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11258b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258b80 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11258b83 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11258b87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258b8a not edx */
  EDX = (~(EDX));
  /* 11258b8c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11258b8e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11258b90 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11258b94 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11258b97 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11258b9b pop edi */
  EDI = (pop32());
  /* 11258b9c pop esi */
  ESI = (pop32());
  /* 11258b9d pop ebx */
  EBX = (pop32());
  /* 11258b9e mov esp, ebp */
  ESP = (EBP);
  /* 11258ba0 pop ebp */
  EBP = (pop32());
  /* 11258ba1 ret  */
  ESPCHK(0x11258b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018bb0 @ 0x11258bb0 (117 bytes, 53 insns) */
void f_11258bb0(void) {
  FTRACE(0x11258bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11258bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11258bb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11258bb7 push esi */
  push32((uint32_t)(ESI));
  /* 11258bb8 push edi */
  push32((uint32_t)(EDI));
  /* 11258bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258bbc and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11258bbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258bc1 je 0x11258bcd */
  if (C.zf) goto L_11258bcd;
  /* 11258bc3 fld xword ptr [0x1127f72c] */
  fpu_push(rf80((uint32_t)(0x1127f72c)));
  /* 11258bc9 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11258bcc wait  */
  /* wait (no observable integer/reg state) */
L_11258bcd:;
  /* 11258bcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258bd0 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11258bd3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258bd5 je 0x11258be7 */
  if (C.zf) goto L_11258be7;
  /* 11258bd7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11258bd8 fnstsw ax */
  AX = fpu_status();
  /* 11258bda fld xword ptr [0x1127f72c] */
  fpu_push(rf80((uint32_t)(0x1127f72c)));
  /* 11258be0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11258be3 wait  */
  /* wait (no observable integer/reg state) */
  /* 11258be4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11258be5 fnstsw ax */
  AX = fpu_status();
L_11258be7:;
  /* 11258be7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258bea and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11258bed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11258bef je 0x11258bfb */
  if (C.zf) goto L_11258bfb;
  /* 11258bf1 fld xword ptr [0x1127f738] */
  fpu_push(rf80((uint32_t)(0x1127f738)));
  /* 11258bf7 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11258bfa wait  */
  /* wait (no observable integer/reg state) */
L_11258bfb:;
  /* 11258bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258bfe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11258c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258c03 je 0x11258c0e */
  if (C.zf) goto L_11258c0e;
  /* 11258c05 fldz  */
  fpu_push(0.0);
  /* 11258c07 fld1  */
  fpu_push(1.0);
  /* 11258c09 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11258c0b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11258c0d wait  */
  /* wait (no observable integer/reg state) */
L_11258c0e:;
  /* 11258c0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258c11 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11258c14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11258c16 je 0x11258c1e */
  if (C.zf) goto L_11258c1e;
  /* 11258c18 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11258c1a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11258c1d wait  */
  /* wait (no observable integer/reg state) */
L_11258c1e:;
  /* 11258c1e pop edi */
  EDI = (pop32());
  /* 11258c1f pop esi */
  ESI = (pop32());
  /* 11258c20 pop ebx */
  EBX = (pop32());
  /* 11258c21 mov esp, ebp */
  ESP = (EBP);
  /* 11258c23 pop ebp */
  EBP = (pop32());
  /* 11258c24 ret  */
  ESPCHK(0x11258bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c30 @ 0x11258c30 (421 bytes, 148 insns) */
void f_11258c30(void) {
  FTRACE(0x11258c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11258c31 mov ebp, esp */
  EBP = (ESP);
  /* 11258c33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11258c35 push 0x1127c2c8 */
  push32((uint32_t)(0x1127c2c8u));
  /* 11258c3a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 11258c3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11258c45 push eax */
  push32((uint32_t)(EAX));
  /* 11258c46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11258c4d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258c50 push ebx */
  push32((uint32_t)(EBX));
  /* 11258c51 push esi */
  push32((uint32_t)(ESI));
  /* 11258c52 push edi */
  push32((uint32_t)(EDI));
  /* 11258c53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11258c56 cmp dword ptr [0x112816c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258c5d jne 0x11258cae */
  if (!C.zf) goto L_11258cae;
  /* 11258c5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11258c62 push eax */
  push32((uint32_t)(EAX));
  /* 11258c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11258c65 push 0x1127c2c4 */
  push32((uint32_t)(0x1127c2c4u));
  /* 11258c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11258c6c call dword ptr [0x11283388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283388))), 0x11258c72u);
  /* 11258c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258c74 je 0x11258c82 */
  if (C.zf) goto L_11258c82;
  /* 11258c76 mov dword ptr [0x112816c8], 1 */
  w32((uint32_t)(0x112816c8), (0x1u));
  /* 11258c80 jmp 0x11258cae */
  goto L_11258cae;
L_11258c82:;
  /* 11258c82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11258c85 push ecx */
  push32((uint32_t)(ECX));
  /* 11258c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11258c88 push 0x1127c2c0 */
  push32((uint32_t)(0x1127c2c0u));
  /* 11258c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11258c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11258c91 call dword ptr [0x11283380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283380))), 0x11258c97u);
  /* 11258c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258c99 je 0x11258ca7 */
  if (C.zf) goto L_11258ca7;
  /* 11258c9b mov dword ptr [0x112816c8], 2 */
  w32((uint32_t)(0x112816c8), (0x2u));
  /* 11258ca5 jmp 0x11258cae */
  goto L_11258cae;
L_11258ca7:;
  /* 11258ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258ca9 jmp 0x11258dd8 */
  goto L_11258dd8;
L_11258cae:;
  /* 11258cae cmp dword ptr [0x112816c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112816c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258cb5 jne 0x11258ce5 */
  if (!C.zf) goto L_11258ce5;
  /* 11258cb7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258cbb jne 0x11258cc6 */
  if (!C.zf) goto L_11258cc6;
  /* 11258cbd mov edx, dword ptr [0x112816e0] */
  EDX = (r32((uint32_t)(0x112816e0)));
  /* 11258cc3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11258cc6:;
  /* 11258cc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11258cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11258cca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258ccd push ecx */
  push32((uint32_t)(ECX));
  /* 11258cce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11258cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11258cd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11258cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11258cda call dword ptr [0x11283380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283380))), 0x11258ce0u);
  /* 11258ce0 jmp 0x11258dd8 */
  goto L_11258dd8;
L_11258ce5:;
  /* 11258ce5 cmp dword ptr [0x112816c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112816c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258cec jne 0x11258dd6 */
  if (!C.zf) goto L_11258dd6;
  /* 11258cf2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258cf6 jne 0x11258d01 */
  if (!C.zf) goto L_11258d01;
  /* 11258cf8 mov edx, dword ptr [0x112816f0] */
  EDX = (r32((uint32_t)(0x112816f0)));
  /* 11258cfe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11258d01:;
  /* 11258d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11258d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11258d05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258d08 push eax */
  push32((uint32_t)(EAX));
  /* 11258d09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258d0c push ecx */
  push32((uint32_t)(ECX));
  /* 11258d0d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11258d10 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11258d12 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258d14 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11258d17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11258d1a push edx */
  push32((uint32_t)(EDX));
  /* 11258d1b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11258d1e push eax */
  push32((uint32_t)(EAX));
  /* 11258d1f call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11258d25u);
  /* 11258d25 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11258d28 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258d2c jne 0x11258d35 */
  if (!C.zf) goto L_11258d35;
  /* 11258d2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258d30 jmp 0x11258dd8 */
  goto L_11258dd8;
L_11258d35:;
  /* 11258d35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11258d3c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11258d3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11258d41 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11258d44 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11258d46 call 0x11251120 */
  push32(0x11258d4bu); f_11251120();
  /* 11258d4b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11258d4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11258d51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11258d54 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11258d57 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11258d5a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11258d5c push edx */
  push32((uint32_t)(EDX));
  /* 11258d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11258d5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11258d62 push eax */
  push32((uint32_t)(EAX));
  /* 11258d63 call 0x11252c30 */
  push32(0x11258d68u); f_11252c30();
  /* 11258d68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258d6b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11258d72 jmp 0x11258d8b */
  goto L_11258d8b;
  /* 11258d74 mov eax, 1 */
  EAX = (0x1u);
  /* 11258d79 ret  */
  ESPCHK(0x11258c30u, _esp0);
  ESP += 4; return;
  /* 11258d7a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11258d7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11258d84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11258d8b:;
  /* 11258d8b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258d8f jne 0x11258d95 */
  if (!C.zf) goto L_11258d95;
  /* 11258d91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258d93 jmp 0x11258dd8 */
  goto L_11258dd8;
L_11258d95:;
  /* 11258d95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11258d98 push ecx */
  push32((uint32_t)(ECX));
  /* 11258d99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11258d9c push edx */
  push32((uint32_t)(EDX));
  /* 11258d9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11258da0 push eax */
  push32((uint32_t)(EAX));
  /* 11258da1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11258da5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11258da7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11258daa push edx */
  push32((uint32_t)(EDX));
  /* 11258dab call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x11258db1u);
  /* 11258db1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11258db4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258db8 jne 0x11258dbe */
  if (!C.zf) goto L_11258dbe;
  /* 11258dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258dbc jmp 0x11258dd8 */
  goto L_11258dd8;
L_11258dbe:;
  /* 11258dbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11258dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11258dc2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11258dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11258dc6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11258dc9 push edx */
  push32((uint32_t)(EDX));
  /* 11258dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258dcd push eax */
  push32((uint32_t)(EAX));
  /* 11258dce call dword ptr [0x11283388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283388))), 0x11258dd4u);
  /* 11258dd4 jmp 0x11258dd8 */
  goto L_11258dd8;
L_11258dd6:;
  /* 11258dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11258dd8:;
  /* 11258dd8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11258ddb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11258dde mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11258de5 pop edi */
  EDI = (pop32());
  /* 11258de6 pop esi */
  ESI = (pop32());
  /* 11258de7 pop ebx */
  EBX = (pop32());
  /* 11258de8 mov esp, ebp */
  ESP = (EBP);
  /* 11258dea pop ebp */
  EBP = (pop32());
  /* 11258deb ret  */
  ESPCHK(0x11258c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10018df0 @ 0x11258df0 (1007 bytes, 269 insns) */
void f_11258df0(void) {
  FTRACE(0x11258df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11258df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11258df1 mov ebp, esp */
  EBP = (ESP);
  /* 11258df3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258df9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258dfd jl 0x11258e05 */
  if ((C.sf!=C.of)) goto L_11258e05;
  /* 11258dff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258e03 jle 0x11258e0c */
  if ((C.zf||C.sf!=C.of)) goto L_11258e0c;
L_11258e05:;
  /* 11258e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258e07 jmp 0x112591db */
  goto L_112591db;
L_11258e0c:;
  /* 11258e0c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11258e0e call 0x1124c720 */
  push32(0x11258e13u); f_1124c720();
  /* 11258e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258e16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11258e1d mov eax, dword ptr [0x11282ae4] */
  EAX = (r32((uint32_t)(0x11282ae4)));
  /* 11258e22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11258e25 mov dword ptr [0x11282ae4], eax */
  w32((uint32_t)(0x11282ae4), (EAX));
L_11258e2a:;
  /* 11258e2a cmp dword ptr [0x11282af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258e31 je 0x11258e3d */
  if (C.zf) goto L_11258e3d;
  /* 11258e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11258e35 call dword ptr [0x11283378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283378))), 0x11258e3bu);
  /* 11258e3b jmp 0x11258e2a */
  goto L_11258e2a;
L_11258e3d:;
  /* 11258e3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258e41 je 0x11258e81 */
  if (C.zf) goto L_11258e81;
  /* 11258e43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258e47 je 0x11258e61 */
  if (C.zf) goto L_11258e61;
  /* 11258e49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258e4c push ecx */
  push32((uint32_t)(ECX));
  /* 11258e4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258e50 push edx */
  push32((uint32_t)(EDX));
  /* 11258e51 call 0x112591e0 */
  push32(0x11258e56u); f_112591e0();
  /* 11258e56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258e59 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11258e5f jmp 0x11258e73 */
  goto L_11258e73;
L_11258e61:;
  /* 11258e61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11258e64 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11258e67 mov ecx, dword ptr [eax + 0x1127f854] */
  ECX = (r32((uint32_t)(EAX + 0x1127f854)));
  /* 11258e6d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11258e73:;
  /* 11258e73 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11258e79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11258e7c jmp 0x112591bb */
  goto L_112591bb;
L_11258e81:;
  /* 11258e81 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11258e88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11258e8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258e93 je 0x112591b3 */
  if (C.zf) goto L_112591b3;
  /* 11258e99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258e9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11258e9f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258ea2 jne 0x112590c4 */
  if (!C.zf) goto L_112590c4;
  /* 11258ea8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258eab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11258eaf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258eb2 jne 0x112590c4 */
  if (!C.zf) goto L_112590c4;
  /* 11258eb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258ebb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11258ebf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258ec2 jne 0x112590c4 */
  if (!C.zf) goto L_112590c4;
  /* 11258ec8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11258ecb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11258ed1:;
  /* 11258ed1 push 0x1127c318 */
  push32((uint32_t)(0x1127c318u));
  /* 11258ed6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11258edc push ecx */
  push32((uint32_t)(ECX));
  /* 11258edd call 0x1125d340 */
  push32(0x11258ee2u); f_1125d340();
  /* 11258ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258ee5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11258eeb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258ef2 je 0x11258f1d */
  if (C.zf) goto L_11258f1d;
  /* 11258ef4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11258efa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258f00 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11258f06 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258f0d je 0x11258f1d */
  if (C.zf) goto L_11258f1d;
  /* 11258f0f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11258f15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11258f18 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258f1b jne 0x11258f43 */
  if (!C.zf) goto L_11258f43;
L_11258f1d:;
  /* 11258f1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258f21 je 0x11258f3c */
  if (C.zf) goto L_11258f3c;
  /* 11258f23 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11258f25 call 0x1124c7c0 */
  push32(0x11258f2au); f_1124c7c0();
  /* 11258f2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258f2d mov edx, dword ptr [0x11282ae4] */
  EDX = (r32((uint32_t)(0x11282ae4)));
  /* 11258f33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258f36 mov dword ptr [0x11282ae4], edx */
  w32((uint32_t)(0x11282ae4), (EDX));
L_11258f3c:;
  /* 11258f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11258f3e jmp 0x112591db */
  goto L_112591db;
L_11258f43:;
  /* 11258f43 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11258f4a jmp 0x11258f55 */
  goto L_11258f55;
L_11258f4c:;
  /* 11258f4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11258f4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11258f52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11258f55:;
  /* 11258f55 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258f59 jg 0x11258fa3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11258fa3;
  /* 11258f5b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11258f61 push ecx */
  push32((uint32_t)(ECX));
  /* 11258f62 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11258f68 push edx */
  push32((uint32_t)(EDX));
  /* 11258f69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11258f6c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11258f6f mov ecx, dword ptr [eax + 0x1127f850] */
  ECX = (r32((uint32_t)(EAX + 0x1127f850)));
  /* 11258f75 push ecx */
  push32((uint32_t)(ECX));
  /* 11258f76 call 0x1125d300 */
  push32(0x11258f7bu); f_1125d300();
  /* 11258f7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11258f80 jne 0x11258fa1 */
  if (!C.zf) goto L_11258fa1;
  /* 11258f82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11258f85 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11258f88 mov eax, dword ptr [edx + 0x1127f850] */
  EAX = (r32((uint32_t)(EDX + 0x1127f850)));
  /* 11258f8e push eax */
  push32((uint32_t)(EAX));
  /* 11258f8f call 0x11250db0 */
  push32(0x11258f94u); f_11250db0();
  /* 11258f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258f97 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258f9d jne 0x11258fa1 */
  if (!C.zf) goto L_11258fa1;
  /* 11258f9f jmp 0x11258fa3 */
  goto L_11258fa3;
L_11258fa1:;
  /* 11258fa1 jmp 0x11258f4c */
  goto L_11258f4c;
L_11258fa3:;
  /* 11258fa3 push 0x1127c314 */
  push32((uint32_t)(0x1127c314u));
  /* 11258fa8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11258fae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11258fb1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11258fb7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11258fbd push edx */
  push32((uint32_t)(EDX));
  /* 11258fbe call 0x1125d2c0 */
  push32(0x11258fc3u); f_1125d2c0();
  /* 11258fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258fc6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11258fcc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258fd3 jne 0x11259009 */
  if (!C.zf) goto L_11259009;
  /* 11258fd5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11258fdb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11258fde cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258fe1 je 0x11259009 */
  if (C.zf) goto L_11259009;
  /* 11258fe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11258fe7 je 0x11259002 */
  if (C.zf) goto L_11259002;
  /* 11258fe9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11258feb call 0x1124c7c0 */
  push32(0x11258ff0u); f_1124c7c0();
  /* 11258ff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11258ff3 mov edx, dword ptr [0x11282ae4] */
  EDX = (r32((uint32_t)(0x11282ae4)));
  /* 11258ff9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11258ffc mov dword ptr [0x11282ae4], edx */
  w32((uint32_t)(0x11282ae4), (EDX));
L_11259002:;
  /* 11259002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259004 jmp 0x112591db */
  goto L_112591db;
L_11259009:;
  /* 11259009 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125900d jg 0x1125905a */
  if ((!C.zf&&C.sf==C.of)) goto L_1125905a;
  /* 1125900f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11259015 push eax */
  push32((uint32_t)(EAX));
  /* 11259016 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1125901c push ecx */
  push32((uint32_t)(ECX));
  /* 1125901d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11259023 push edx */
  push32((uint32_t)(EDX));
  /* 11259024 call 0x112517a0 */
  push32(0x11259029u); f_112517a0();
  /* 11259029 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125902c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11259032 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1125903a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11259040 push ecx */
  push32((uint32_t)(ECX));
  /* 11259041 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11259044 push edx */
  push32((uint32_t)(EDX));
  /* 11259045 call 0x112591e0 */
  push32(0x1125904au); f_112591e0();
  /* 1125904a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125904d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125904f je 0x1125905a */
  if (C.zf) goto L_1125905a;
  /* 11259051 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11259054 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259057 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1125905a:;
  /* 1125905a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11259060 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259066 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1125906c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11259072 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11259075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259077 je 0x11259088 */
  if (C.zf) goto L_11259088;
  /* 11259079 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1125907f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259082 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11259088:;
  /* 11259088 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1125908e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11259091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259093 jne 0x11258ed1 */
  if (!C.zf) goto L_11258ed1;
  /* 11259099 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125909d je 0x112590ac */
  if (C.zf) goto L_112590ac;
  /* 1125909f call 0x11259380 */
  push32(0x112590a4u); f_11259380();
  /* 112590a4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 112590aa jmp 0x112590b6 */
  goto L_112590b6;
L_112590ac:;
  /* 112590ac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_112590b6:;
  /* 112590b6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 112590bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112590bf jmp 0x112591b1 */
  goto L_112591b1;
L_112590c4:;
  /* 112590c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112590c7 push edx */
  push32((uint32_t)(EDX));
  /* 112590c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112590ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112590cc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 112590d2 push eax */
  push32((uint32_t)(EAX));
  /* 112590d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112590d6 push ecx */
  push32((uint32_t)(ECX));
  /* 112590d7 call 0x11259480 */
  push32(0x112590dcu); f_11259480();
  /* 112590dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112590df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112590e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112590e6 je 0x112591b1 */
  if (C.zf) goto L_112591b1;
  /* 112590ec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112590f3 jmp 0x112590fe */
  goto L_112590fe;
L_112590f5:;
  /* 112590f5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112590f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112590fb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112590fe:;
  /* 112590fe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259102 jg 0x11259160 */
  if ((!C.zf&&C.sf==C.of)) goto L_11259160;
  /* 11259104 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259108 je 0x1125915e */
  if (C.zf) goto L_1125915e;
  /* 1125910a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125910d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11259110 mov ecx, dword ptr [eax + 0x1127f854] */
  ECX = (r32((uint32_t)(EAX + 0x1127f854)));
  /* 11259116 push ecx */
  push32((uint32_t)(ECX));
  /* 11259117 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1125911d push edx */
  push32((uint32_t)(EDX));
  /* 1125911e call 0x112553c0 */
  push32(0x11259123u); f_112553c0();
  /* 11259123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259128 je 0x11259155 */
  if (C.zf) goto L_11259155;
  /* 1125912a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11259130 push eax */
  push32((uint32_t)(EAX));
  /* 11259131 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11259134 push ecx */
  push32((uint32_t)(ECX));
  /* 11259135 call 0x112591e0 */
  push32(0x1125913au); f_112591e0();
  /* 1125913a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125913d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125913f je 0x1125914c */
  if (C.zf) goto L_1125914c;
  /* 11259141 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11259144 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259147 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1125914a jmp 0x11259153 */
  goto L_11259153;
L_1125914c:;
  /* 1125914c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11259153:;
  /* 11259153 jmp 0x1125915e */
  goto L_1125915e;
L_11259155:;
  /* 11259155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11259158 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125915b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1125915e:;
  /* 1125915e jmp 0x112590f5 */
  goto L_112590f5;
L_11259160:;
  /* 11259160 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259164 je 0x1125918b */
  if (C.zf) goto L_1125918b;
  /* 11259166 call 0x11259380 */
  push32(0x1125916bu); f_11259380();
  /* 1125916b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125916e push 2 */
  push32((uint32_t)(0x2u));
  /* 11259170 mov ecx, dword ptr [0x1127f854] */
  ECX = (r32((uint32_t)(0x1127f854)));
  /* 11259176 push ecx */
  push32((uint32_t)(ECX));
  /* 11259177 call 0x1124d2b0 */
  push32(0x1125917cu); f_1124d2b0();
  /* 1125917c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125917f mov dword ptr [0x1127f854], 0 */
  w32((uint32_t)(0x1127f854), (0x0u));
  /* 11259189 jmp 0x112591b1 */
  goto L_112591b1;
L_1125918b:;
  /* 1125918b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125918f je 0x1125919e */
  if (C.zf) goto L_1125919e;
  /* 11259191 call 0x11259380 */
  push32(0x11259196u); f_11259380();
  /* 11259196 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1125919c jmp 0x112591a8 */
  goto L_112591a8;
L_1125919e:;
  /* 1125919e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_112591a8:;
  /* 112591a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 112591ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112591b1:;
  /* 112591b1 jmp 0x112591bb */
  goto L_112591bb;
L_112591b3:;
  /* 112591b3 call 0x11259380 */
  push32(0x112591b8u); f_11259380();
  /* 112591b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112591bb:;
  /* 112591bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112591bf je 0x112591d8 */
  if (C.zf) goto L_112591d8;
  /* 112591c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112591c3 call 0x1124c7c0 */
  push32(0x112591c8u); f_1124c7c0();
  /* 112591c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112591cb mov eax, dword ptr [0x11282ae4] */
  EAX = (r32((uint32_t)(0x11282ae4)));
  /* 112591d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112591d3 mov dword ptr [0x11282ae4], eax */
  w32((uint32_t)(0x11282ae4), (EAX));
L_112591d8:;
  /* 112591d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112591db:;
  /* 112591db mov esp, ebp */
  ESP = (EBP);
  /* 112591dd pop ebp */
  EBP = (pop32());
  /* 112591de ret  */
  ESPCHK(0x11258df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100191e0 @ 0x112591e0 (403 bytes, 117 insns) */
void f_112591e0(void) {
  FTRACE(0x112591e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112591e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112591e1 mov ebp, esp */
  EBP = (ESP);
  /* 112591e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112591e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112591ec push eax */
  push32((uint32_t)(EAX));
  /* 112591ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 112591f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112591f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 112591fa push edx */
  push32((uint32_t)(EDX));
  /* 112591fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11259201 push eax */
  push32((uint32_t)(EAX));
  /* 11259202 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259205 push ecx */
  push32((uint32_t)(ECX));
  /* 11259206 call 0x11259480 */
  push32(0x1125920bu); f_11259480();
  /* 1125920b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125920e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259210 jne 0x11259219 */
  if (!C.zf) goto L_11259219;
  /* 11259212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259214 jmp 0x1125936f */
  goto L_1125936f;
L_11259219:;
  /* 11259219 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1125921e push 0x1127c31c */
  push32((uint32_t)(0x1127c31cu));
  /* 11259223 push 2 */
  push32((uint32_t)(0x2u));
  /* 11259225 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1125922b push edx */
  push32((uint32_t)(EDX));
  /* 1125922c call 0x11250db0 */
  push32(0x11259231u); f_11250db0();
  /* 11259231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259237 push eax */
  push32((uint32_t)(EAX));
  /* 11259238 call 0x1124c820 */
  push32(0x1125923du); f_1124c820();
  /* 1125923d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259240 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11259243 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259247 jne 0x11259250 */
  if (!C.zf) goto L_11259250;
  /* 11259249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125924b jmp 0x1125936f */
  goto L_1125936f;
L_11259250:;
  /* 11259250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259253 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11259256 mov ecx, dword ptr [eax + 0x1127f854] */
  ECX = (r32((uint32_t)(EAX + 0x1127f854)));
  /* 1125925c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125925f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259262 mov eax, dword ptr [edx*4 + 0x112816d8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112816d8)));
  /* 11259269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125926c push 6 */
  push32((uint32_t)(0x6u));
  /* 1125926e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259271 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11259274 add ecx, 0x1128171c */
  { uint32_t _a=(ECX),_b=(0x1128171cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125927a push ecx */
  push32((uint32_t)(ECX));
  /* 1125927b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1125927e push edx */
  push32((uint32_t)(EDX));
  /* 1125927f call 0x112568c0 */
  push32(0x11259284u); f_112568c0();
  /* 11259284 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259287 mov eax, dword ptr [0x112816f0] */
  EAX = (r32((uint32_t)(0x112816f0)));
  /* 1125928c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1125928f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11259295 push ecx */
  push32((uint32_t)(ECX));
  /* 11259296 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259299 push edx */
  push32((uint32_t)(EDX));
  /* 1125929a call 0x11250f30 */
  push32(0x1125929fu); f_11250f30();
  /* 1125929f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112592a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112592a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112592a8 mov dword ptr [ecx + 0x1127f854], eax */
  w32((uint32_t)(ECX + 0x1127f854), (EAX));
  /* 112592ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 112592b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112592ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112592bd mov dword ptr [eax*4 + 0x112816d8], edx */
  w32((uint32_t)(EAX*4 + 0x112816d8), (EDX));
  /* 112592c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 112592c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 112592cc push ecx */
  push32((uint32_t)(ECX));
  /* 112592cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112592d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112592d3 add edx, 0x1128171c */
  { uint32_t _a=(EDX),_b=(0x1128171cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112592d9 push edx */
  push32((uint32_t)(EDX));
  /* 112592da call 0x112568c0 */
  push32(0x112592dfu); f_112568c0();
  /* 112592df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112592e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112592e6 jne 0x112592f3 */
  if (!C.zf) goto L_112592f3;
  /* 112592e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112592ee mov dword ptr [0x112816f0], eax */
  w32((uint32_t)(0x112816f0), (EAX));
L_112592f3:;
  /* 112592f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112592f7 jne 0x11259305 */
  if (!C.zf) goto L_11259305;
  /* 112592f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112592ff mov dword ptr [0x112816f4], ecx */
  w32((uint32_t)(0x112816f4), (ECX));
L_11259305:;
  /* 11259305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259308 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125930b call dword ptr [edx + 0x1127f858] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1127f858))), 0x11259311u);
  /* 11259311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259313 je 0x1125934c */
  if (C.zf) goto L_1125934c;
  /* 11259315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259318 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125931b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125931e mov dword ptr [eax + 0x1127f854], ecx */
  w32((uint32_t)(EAX + 0x1127f854), (ECX));
  /* 11259324 push 2 */
  push32((uint32_t)(0x2u));
  /* 11259326 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259329 push edx */
  push32((uint32_t)(EDX));
  /* 1125932a call 0x1124d2b0 */
  push32(0x1125932fu); f_1124d2b0();
  /* 1125932f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259335 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259338 mov dword ptr [eax*4 + 0x112816d8], ecx */
  w32((uint32_t)(EAX*4 + 0x112816d8), (ECX));
  /* 1125933f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11259342 mov dword ptr [0x112816f0], edx */
  w32((uint32_t)(0x112816f0), (EDX));
  /* 11259348 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125934a jmp 0x1125936f */
  goto L_1125936f;
L_1125934c:;
  /* 1125934c cmp dword ptr [ebp - 0xc], 0x1127f744 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1127f744u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259353 je 0x11259363 */
  if (C.zf) goto L_11259363;
  /* 11259355 push 2 */
  push32((uint32_t)(0x2u));
  /* 11259357 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125935a push eax */
  push32((uint32_t)(EAX));
  /* 1125935b call 0x1124d2b0 */
  push32(0x11259360u); f_1124d2b0();
  /* 11259360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11259363:;
  /* 11259363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259366 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11259369 mov eax, dword ptr [ecx + 0x1127f854] */
  EAX = (r32((uint32_t)(ECX + 0x1127f854)));
L_1125936f:;
  /* 1125936f mov esp, ebp */
  ESP = (EBP);
  /* 11259371 pop ebp */
  EBP = (pop32());
  /* 11259372 ret  */
  ESPCHK(0x112591e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019380 @ 0x11259380 (256 bytes, 72 insns) */
void f_11259380(void) {
  FTRACE(0x11259380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259380 push ebp */
  push32((uint32_t)(EBP));
  /* 11259381 mov ebp, esp */
  EBP = (ESP);
  /* 11259383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259386 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1125938d cmp dword ptr [0x1127f854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1127f854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259394 jne 0x112593b4 */
  if (!C.zf) goto L_112593b4;
  /* 11259396 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1125939b push 0x1127c31c */
  push32((uint32_t)(0x1127c31cu));
  /* 112593a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112593a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 112593a7 call 0x1124c820 */
  push32(0x112593acu); f_1124c820();
  /* 112593ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112593af mov dword ptr [0x1127f854], eax */
  w32((uint32_t)(0x1127f854), (EAX));
L_112593b4:;
  /* 112593b4 mov eax, dword ptr [0x1127f854] */
  EAX = (r32((uint32_t)(0x1127f854)));
  /* 112593b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112593bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112593c3 jmp 0x112593ce */
  goto L_112593ce;
L_112593c5:;
  /* 112593c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112593c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112593cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112593ce:;
  /* 112593ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112593d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112593d4 mov eax, dword ptr [edx + 0x1127f854] */
  EAX = (r32((uint32_t)(EDX + 0x1127f854)));
  /* 112593da push eax */
  push32((uint32_t)(EAX));
  /* 112593db push 0x1127c328 */
  push32((uint32_t)(0x1127c328u));
  /* 112593e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112593e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112593e6 mov edx, dword ptr [ecx + 0x1127f850] */
  EDX = (r32((uint32_t)(ECX + 0x1127f850)));
  /* 112593ec push edx */
  push32((uint32_t)(EDX));
  /* 112593ed push 3 */
  push32((uint32_t)(0x3u));
  /* 112593ef mov eax, dword ptr [0x1127f854] */
  EAX = (r32((uint32_t)(0x1127f854)));
  /* 112593f4 push eax */
  push32((uint32_t)(EAX));
  /* 112593f5 call 0x11259620 */
  push32(0x112593fau); f_11259620();
  /* 112593fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112593fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259401 jge 0x11259449 */
  if ((C.sf==C.of)) goto L_11259449;
  /* 11259403 push 0x1127c314 */
  push32((uint32_t)(0x1127c314u));
  /* 11259408 mov ecx, dword ptr [0x1127f854] */
  ECX = (r32((uint32_t)(0x1127f854)));
  /* 1125940e push ecx */
  push32((uint32_t)(ECX));
  /* 1125940f call 0x11250f40 */
  push32(0x11259414u); f_11250f40();
  /* 11259414 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259417 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125941a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125941d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11259420 mov eax, dword ptr [edx + 0x1127f854] */
  EAX = (r32((uint32_t)(EDX + 0x1127f854)));
  /* 11259426 push eax */
  push32((uint32_t)(EAX));
  /* 11259427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125942a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125942d mov edx, dword ptr [ecx + 0x1127f854] */
  EDX = (r32((uint32_t)(ECX + 0x1127f854)));
  /* 11259433 push edx */
  push32((uint32_t)(EDX));
  /* 11259434 call 0x112553c0 */
  push32(0x11259439u); f_112553c0();
  /* 11259439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125943c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125943e je 0x11259447 */
  if (C.zf) goto L_11259447;
  /* 11259440 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11259447:;
  /* 11259447 jmp 0x11259477 */
  goto L_11259477;
L_11259449:;
  /* 11259449 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125944d jne 0x11259456 */
  if (!C.zf) goto L_11259456;
  /* 1125944f mov eax, dword ptr [0x1127f854] */
  EAX = (r32((uint32_t)(0x1127f854)));
  /* 11259454 jmp 0x1125947c */
  goto L_1125947c;
L_11259456:;
  /* 11259456 push 2 */
  push32((uint32_t)(0x2u));
  /* 11259458 mov eax, dword ptr [0x1127f854] */
  EAX = (r32((uint32_t)(0x1127f854)));
  /* 1125945d push eax */
  push32((uint32_t)(EAX));
  /* 1125945e call 0x1124d2b0 */
  push32(0x11259463u); f_1124d2b0();
  /* 11259463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259466 mov dword ptr [0x1127f854], 0 */
  w32((uint32_t)(0x1127f854), (0x0u));
  /* 11259470 mov eax, dword ptr [0x1127f86c] */
  EAX = (r32((uint32_t)(0x1127f86c)));
  /* 11259475 jmp 0x1125947c */
  goto L_1125947c;
L_11259477:;
  /* 11259477 jmp 0x112593c5 */
  goto L_112593c5;
L_1125947c:;
  /* 1125947c mov esp, ebp */
  ESP = (EBP);
  /* 1125947e pop ebp */
  EBP = (pop32());
  /* 1125947f ret  */
  ESPCHK(0x11259380u, _esp0);
  ESP += 4; return;
}

/* FUN_10019480 @ 0x11259480 (388 bytes, 115 insns) */
void f_11259480(void) {
  FTRACE(0x11259480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259480 push ebp */
  push32((uint32_t)(EBP));
  /* 11259481 mov ebp, esp */
  EBP = (ESP);
  /* 11259483 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259489 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125948d jne 0x11259496 */
  if (!C.zf) goto L_11259496;
  /* 1125948f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259491 jmp 0x11259600 */
  goto L_11259600;
L_11259496:;
  /* 11259496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259499 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125949c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125949f jne 0x112594f0 */
  if (!C.zf) goto L_112594f0;
  /* 112594a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112594a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112594a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112594aa jne 0x112594f0 */
  if (!C.zf) goto L_112594f0;
  /* 112594ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112594af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 112594b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112594b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 112594b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112594bd je 0x112594d9 */
  if (C.zf) goto L_112594d9;
  /* 112594bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112594c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 112594c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112594ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 112594d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112594d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_112594d9:;
  /* 112594d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112594dd je 0x112594e8 */
  if (C.zf) goto L_112594e8;
  /* 112594df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112594e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_112594e8:;
  /* 112594e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112594eb jmp 0x11259600 */
  goto L_11259600;
L_112594f0:;
  /* 112594f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112594f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112594f4 push 0x1127f7cc */
  push32((uint32_t)(0x1127f7ccu));
  /* 112594f9 call 0x112553c0 */
  push32(0x112594feu); f_112553c0();
  /* 112594fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259503 je 0x112595b8 */
  if (C.zf) goto L_112595b8;
  /* 11259509 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125950c push edx */
  push32((uint32_t)(EDX));
  /* 1125950d push 0x1127f748 */
  push32((uint32_t)(0x1127f748u));
  /* 11259512 call 0x112553c0 */
  push32(0x11259517u); f_112553c0();
  /* 11259517 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125951a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125951c je 0x112595b8 */
  if (C.zf) goto L_112595b8;
  /* 11259522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259525 push eax */
  push32((uint32_t)(EAX));
  /* 11259526 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1125952c push ecx */
  push32((uint32_t)(ECX));
  /* 1125952d call 0x11259670 */
  push32(0x11259532u); f_11259670();
  /* 11259532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259537 je 0x11259540 */
  if (C.zf) goto L_11259540;
  /* 11259539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125953b jmp 0x11259600 */
  goto L_11259600;
L_11259540:;
  /* 11259540 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11259546 push edx */
  push32((uint32_t)(EDX));
  /* 11259547 push 0x112816cc */
  push32((uint32_t)(0x112816ccu));
  /* 1125954c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11259552 push eax */
  push32((uint32_t)(EAX));
  /* 11259553 call 0x1125d380 */
  push32(0x11259558u); f_1125d380();
  /* 11259558 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125955b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125955d jne 0x11259566 */
  if (!C.zf) goto L_11259566;
  /* 1125955f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259561 jmp 0x11259600 */
  goto L_11259600;
L_11259566:;
  /* 11259566 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11259568 mov cx, word ptr [0x112816d0] */
  CX = (r16((uint32_t)(0x112816d0)));
  /* 1125956f mov dword ptr [0x112816d4], ecx */
  w32((uint32_t)(0x112816d4), (ECX));
  /* 11259575 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1125957b push edx */
  push32((uint32_t)(EDX));
  /* 1125957c push 0x1127f7cc */
  push32((uint32_t)(0x1127f7ccu));
  /* 11259581 call 0x112597d0 */
  push32(0x11259586u); f_112597d0();
  /* 11259586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125958c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125958f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11259591 je 0x112595a6 */
  if (C.zf) goto L_112595a6;
  /* 11259593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259596 push edx */
  push32((uint32_t)(EDX));
  /* 11259597 push 0x1127f748 */
  push32((uint32_t)(0x1127f748u));
  /* 1125959c call 0x11250f30 */
  push32(0x112595a1u); f_11250f30();
  /* 112595a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112595a4 jmp 0x112595b8 */
  goto L_112595b8;
L_112595a6:;
  /* 112595a6 push 0x1127f7cc */
  push32((uint32_t)(0x1127f7ccu));
  /* 112595ab push 0x1127f748 */
  push32((uint32_t)(0x1127f748u));
  /* 112595b0 call 0x11250f30 */
  push32(0x112595b5u); f_11250f30();
  /* 112595b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112595b8:;
  /* 112595b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112595bc je 0x112595d1 */
  if (C.zf) goto L_112595d1;
  /* 112595be push 6 */
  push32((uint32_t)(0x6u));
  /* 112595c0 push 0x112816cc */
  push32((uint32_t)(0x112816ccu));
  /* 112595c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112595c8 push eax */
  push32((uint32_t)(EAX));
  /* 112595c9 call 0x112568c0 */
  push32(0x112595ceu); f_112568c0();
  /* 112595ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112595d1:;
  /* 112595d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112595d5 je 0x112595ea */
  if (C.zf) goto L_112595ea;
  /* 112595d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 112595d9 push 0x112816d4 */
  push32((uint32_t)(0x112816d4u));
  /* 112595de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112595e1 push ecx */
  push32((uint32_t)(ECX));
  /* 112595e2 call 0x112568c0 */
  push32(0x112595e7u); f_112568c0();
  /* 112595e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112595ea:;
  /* 112595ea push 0x1127f7cc */
  push32((uint32_t)(0x1127f7ccu));
  /* 112595ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112595f2 push edx */
  push32((uint32_t)(EDX));
  /* 112595f3 call 0x11250f30 */
  push32(0x112595f8u); f_11250f30();
  /* 112595f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112595fb mov eax, 0x1127f7cc */
  EAX = (0x1127f7ccu);
L_11259600:;
  /* 11259600 mov esp, ebp */
  ESP = (EBP);
  /* 11259602 pop ebp */
  EBP = (pop32());
  /* 11259603 ret  */
  ESPCHK(0x11259480u, _esp0);
  ESP += 4; return;
}

/* FUN_10019610 @ 0x11259610 (7 bytes, 5 insns) */
void f_11259610(void) {
  FTRACE(0x11259610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259610 push ebp */
  push32((uint32_t)(EBP));
  /* 11259611 mov ebp, esp */
  EBP = (ESP);
  /* 11259613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259615 pop ebp */
  EBP = (pop32());
  /* 11259616 ret  */
  ESPCHK(0x11259610u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11259620 (79 bytes, 28 insns) */
void f_11259620(void) {
  FTRACE(0x11259620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259620 push ebp */
  push32((uint32_t)(EBP));
  /* 11259621 mov ebp, esp */
  EBP = (ESP);
  /* 11259623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259626 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11259629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125962c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11259633 jmp 0x1125963e */
  goto L_1125963e;
L_11259635:;
  /* 11259635 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259638 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125963b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1125963e:;
  /* 1125963e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259641 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259644 jge 0x11259664 */
  if ((C.sf==C.of)) goto L_11259664;
  /* 11259646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259649 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125964c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125964f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259652 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11259655 push edx */
  push32((uint32_t)(EDX));
  /* 11259656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259659 push eax */
  push32((uint32_t)(EAX));
  /* 1125965a call 0x11250f40 */
  push32(0x1125965fu); f_11250f40();
  /* 1125965f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259662 jmp 0x11259635 */
  goto L_11259635;
L_11259664:;
  /* 11259664 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125966b mov esp, ebp */
  ESP = (EBP);
  /* 1125966d pop ebp */
  EBP = (pop32());
  /* 1125966e ret  */
  ESPCHK(0x11259620u, _esp0);
  ESP += 4; return;
}

/* FUN_10019670 @ 0x11259670 (349 bytes, 122 insns) */
void f_11259670(void) {
  FTRACE(0x11259670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259670 push ebp */
  push32((uint32_t)(EBP));
  /* 11259671 mov ebp, esp */
  EBP = (ESP);
  /* 11259673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259676 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1125967b push 0 */
  push32((uint32_t)(0x0u));
  /* 1125967d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259680 push eax */
  push32((uint32_t)(EAX));
  /* 11259681 call 0x11252c30 */
  push32(0x11259686u); f_11252c30();
  /* 11259686 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259689 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125968c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125968f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11259691 jne 0x1125969a */
  if (!C.zf) goto L_1125969a;
  /* 11259693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259695 jmp 0x112597c9 */
  goto L_112597c9;
L_1125969a:;
  /* 1125969a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125969d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112596a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112596a3 jne 0x112596d0 */
  if (!C.zf) goto L_112596d0;
  /* 112596a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112596a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112596ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112596ae je 0x112596d0 */
  if (C.zf) goto L_112596d0;
  /* 112596b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112596b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112596b6 push ecx */
  push32((uint32_t)(ECX));
  /* 112596b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112596ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112596c0 push edx */
  push32((uint32_t)(EDX));
  /* 112596c1 call 0x11250f30 */
  push32(0x112596c6u); f_11250f30();
  /* 112596c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112596c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112596cb jmp 0x112597c9 */
  goto L_112597c9;
L_112596d0:;
  /* 112596d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112596d7 jmp 0x112596e2 */
  goto L_112596e2;
L_112596d9:;
  /* 112596d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112596dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112596df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112596e2:;
  /* 112596e2 push 0x1127c32c */
  push32((uint32_t)(0x1127c32cu));
  /* 112596e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112596ea push ecx */
  push32((uint32_t)(ECX));
  /* 112596eb call 0x1125d2c0 */
  push32(0x112596f0u); f_1125d2c0();
  /* 112596f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112596f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112596f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112596fa jne 0x11259704 */
  if (!C.zf) goto L_11259704;
  /* 112596fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112596ff jmp 0x112597c9 */
  goto L_112597c9;
L_11259704:;
  /* 11259704 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259707 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125970a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125970c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1125970f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259713 jne 0x1125973a */
  if (!C.zf) goto L_1125973a;
  /* 11259715 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259719 jge 0x1125973a */
  if ((C.sf==C.of)) goto L_1125973a;
  /* 1125971b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125971f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259722 je 0x1125973a */
  if (C.zf) goto L_1125973a;
  /* 11259724 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11259727 push edx */
  push32((uint32_t)(EDX));
  /* 11259728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125972b push eax */
  push32((uint32_t)(EAX));
  /* 1125972c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125972f push ecx */
  push32((uint32_t)(ECX));
  /* 11259730 call 0x112517a0 */
  push32(0x11259735u); f_112517a0();
  /* 11259735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259738 jmp 0x112597a0 */
  goto L_112597a0;
L_1125973a:;
  /* 1125973a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125973e jne 0x11259768 */
  if (!C.zf) goto L_11259768;
  /* 11259740 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259744 jge 0x11259768 */
  if ((C.sf==C.of)) goto L_11259768;
  /* 11259746 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125974a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125974d je 0x11259768 */
  if (C.zf) goto L_11259768;
  /* 1125974f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11259752 push eax */
  push32((uint32_t)(EAX));
  /* 11259753 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259756 push ecx */
  push32((uint32_t)(ECX));
  /* 11259757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125975a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125975d push edx */
  push32((uint32_t)(EDX));
  /* 1125975e call 0x112517a0 */
  push32(0x11259763u); f_112517a0();
  /* 11259763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259766 jmp 0x112597a0 */
  goto L_112597a0;
L_11259768:;
  /* 11259768 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125976c jne 0x1125979b */
  if (!C.zf) goto L_1125979b;
  /* 1125976e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11259772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259774 je 0x1125977f */
  if (C.zf) goto L_1125977f;
  /* 11259776 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1125977a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125977d jne 0x1125979b */
  if (!C.zf) goto L_1125979b;
L_1125977f:;
  /* 1125977f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11259782 push edx */
  push32((uint32_t)(EDX));
  /* 11259783 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259786 push eax */
  push32((uint32_t)(EAX));
  /* 11259787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125978a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259790 push ecx */
  push32((uint32_t)(ECX));
  /* 11259791 call 0x112517a0 */
  push32(0x11259796u); f_112517a0();
  /* 11259796 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259799 jmp 0x112597a0 */
  goto L_112597a0;
L_1125979b:;
  /* 1125979b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125979e jmp 0x112597c9 */
  goto L_112597c9;
L_112597a0:;
  /* 112597a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112597a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112597a7 jne 0x112597ab */
  if (!C.zf) goto L_112597ab;
  /* 112597a9 jmp 0x112597c7 */
  goto L_112597c7;
L_112597ab:;
  /* 112597ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112597af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112597b1 jne 0x112597b5 */
  if (!C.zf) goto L_112597b5;
  /* 112597b3 jmp 0x112597c7 */
  goto L_112597c7;
L_112597b5:;
  /* 112597b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112597b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112597bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 112597bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112597c2 jmp 0x112596d9 */
  goto L_112596d9;
L_112597c7:;
  /* 112597c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112597c9:;
  /* 112597c9 mov esp, ebp */
  ESP = (EBP);
  /* 112597cb pop ebp */
  EBP = (pop32());
  /* 112597cc ret  */
  ESPCHK(0x11259670u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x112597d0 (101 bytes, 36 insns) */
void f_112597d0(void) {
  FTRACE(0x112597d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112597d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112597d1 mov ebp, esp */
  EBP = (ESP);
  /* 112597d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112597d6 push eax */
  push32((uint32_t)(EAX));
  /* 112597d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112597da push ecx */
  push32((uint32_t)(ECX));
  /* 112597db call 0x11250f30 */
  push32(0x112597e0u); f_11250f30();
  /* 112597e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112597e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112597e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 112597ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112597ec je 0x11259808 */
  if (C.zf) goto L_11259808;
  /* 112597ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112597f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112597f4 push ecx */
  push32((uint32_t)(ECX));
  /* 112597f5 push 0x1127c334 */
  push32((uint32_t)(0x1127c334u));
  /* 112597fa push 2 */
  push32((uint32_t)(0x2u));
  /* 112597fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112597ff push edx */
  push32((uint32_t)(EDX));
  /* 11259800 call 0x11259620 */
  push32(0x11259805u); f_11259620();
  /* 11259805 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11259808:;
  /* 11259808 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125980b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11259812 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11259814 je 0x11259833 */
  if (C.zf) goto L_11259833;
  /* 11259816 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259819 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125981f push edx */
  push32((uint32_t)(EDX));
  /* 11259820 push 0x1127c330 */
  push32((uint32_t)(0x1127c330u));
  /* 11259825 push 2 */
  push32((uint32_t)(0x2u));
  /* 11259827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125982a push eax */
  push32((uint32_t)(EAX));
  /* 1125982b call 0x11259620 */
  push32(0x11259830u); f_11259620();
  /* 11259830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11259833:;
  /* 11259833 pop ebp */
  EBP = (pop32());
  /* 11259834 ret  */
  ESPCHK(0x112597d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019840 @ 0x11259840 (727 bytes, 263 insns) */
void f_11259840(void) {
  FTRACE(0x11259840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259840 push ebp */
  push32((uint32_t)(EBP));
  /* 11259841 mov ebp, esp */
  EBP = (ESP);
  /* 11259843 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11259845 push 0x1127c338 */
  push32((uint32_t)(0x1127c338u));
  /* 1125984a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1125984f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11259855 push eax */
  push32((uint32_t)(EAX));
  /* 11259856 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1125985d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259860 push ebx */
  push32((uint32_t)(EBX));
  /* 11259861 push esi */
  push32((uint32_t)(ESI));
  /* 11259862 push edi */
  push32((uint32_t)(EDI));
  /* 11259863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11259866 cmp dword ptr [0x112816f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125986d jne 0x112598c6 */
  if (!C.zf) goto L_112598c6;
  /* 1125986f push 0 */
  push32((uint32_t)(0x0u));
  /* 11259871 push 0 */
  push32((uint32_t)(0x0u));
  /* 11259873 push 1 */
  push32((uint32_t)(0x1u));
  /* 11259875 push 0x1127c2c4 */
  push32((uint32_t)(0x1127c2c4u));
  /* 1125987a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1125987f push 0 */
  push32((uint32_t)(0x0u));
  /* 11259881 call dword ptr [0x1128337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128337c))), 0x11259887u);
  /* 11259887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259889 je 0x11259897 */
  if (C.zf) goto L_11259897;
  /* 1125988b mov dword ptr [0x112816f8], 1 */
  w32((uint32_t)(0x112816f8), (0x1u));
  /* 11259895 jmp 0x112598c6 */
  goto L_112598c6;
L_11259897:;
  /* 11259897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11259899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125989b push 1 */
  push32((uint32_t)(0x1u));
  /* 1125989d push 0x1127c2c0 */
  push32((uint32_t)(0x1127c2c0u));
  /* 112598a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112598a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112598a9 call dword ptr [0x11283374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283374))), 0x112598afu);
  /* 112598af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112598b1 je 0x112598bf */
  if (C.zf) goto L_112598bf;
  /* 112598b3 mov dword ptr [0x112816f8], 2 */
  w32((uint32_t)(0x112816f8), (0x2u));
  /* 112598bd jmp 0x112598c6 */
  goto L_112598c6;
L_112598bf:;
  /* 112598bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112598c1 jmp 0x11259b31 */
  goto L_11259b31;
L_112598c6:;
  /* 112598c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112598ca jle 0x112598df */
  if ((C.zf||C.sf!=C.of)) goto L_112598df;
  /* 112598cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112598cf push eax */
  push32((uint32_t)(EAX));
  /* 112598d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112598d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112598d4 call 0x11259b50 */
  push32(0x112598d9u); f_11259b50();
  /* 112598d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112598dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_112598df:;
  /* 112598df cmp dword ptr [0x112816f8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112816f8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112598e6 jne 0x1125990b */
  if (!C.zf) goto L_1125990b;
  /* 112598e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112598eb push edx */
  push32((uint32_t)(EDX));
  /* 112598ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112598ef push eax */
  push32((uint32_t)(EAX));
  /* 112598f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112598f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112598f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112598f7 push edx */
  push32((uint32_t)(EDX));
  /* 112598f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112598fb push eax */
  push32((uint32_t)(EAX));
  /* 112598fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112598ff push ecx */
  push32((uint32_t)(ECX));
  /* 11259900 call dword ptr [0x11283374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283374))), 0x11259906u);
  /* 11259906 jmp 0x11259b31 */
  goto L_11259b31;
L_1125990b:;
  /* 1125990b cmp dword ptr [0x112816f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112816f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259912 jne 0x11259b2f */
  if (!C.zf) goto L_11259b2f;
  /* 11259918 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125991c jne 0x11259927 */
  if (!C.zf) goto L_11259927;
  /* 1125991e mov edx, dword ptr [0x112816f0] */
  EDX = (r32((uint32_t)(0x112816f0)));
  /* 11259924 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11259927:;
  /* 11259927 push 0 */
  push32((uint32_t)(0x0u));
  /* 11259929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125992b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125992e push eax */
  push32((uint32_t)(EAX));
  /* 1125992f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259932 push ecx */
  push32((uint32_t)(ECX));
  /* 11259933 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11259936 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259938 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125993a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1125993d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259940 push edx */
  push32((uint32_t)(EDX));
  /* 11259941 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11259944 push eax */
  push32((uint32_t)(EAX));
  /* 11259945 call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x1125994bu);
  /* 1125994b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1125994e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259952 jne 0x1125995b */
  if (!C.zf) goto L_1125995b;
  /* 11259954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259956 jmp 0x11259b31 */
  goto L_11259b31;
L_1125995b:;
  /* 1125995b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11259962 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11259965 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11259967 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125996a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1125996c call 0x11251120 */
  push32(0x11259971u); f_11251120();
  /* 11259971 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11259974 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11259977 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125997a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1125997d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11259984 jmp 0x1125999d */
  goto L_1125999d;
  /* 11259986 mov eax, 1 */
  EAX = (0x1u);
  /* 1125998b ret  */
  ESPCHK(0x11259840u, _esp0);
  ESP += 4; return;
  /* 1125998c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1125998f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11259996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1125999d:;
  /* 1125999d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112599a1 jne 0x112599aa */
  if (!C.zf) goto L_112599aa;
  /* 112599a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112599a5 jmp 0x11259b31 */
  goto L_11259b31;
L_112599aa:;
  /* 112599aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112599ad push edx */
  push32((uint32_t)(EDX));
  /* 112599ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112599b1 push eax */
  push32((uint32_t)(EAX));
  /* 112599b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112599b5 push ecx */
  push32((uint32_t)(ECX));
  /* 112599b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112599b9 push edx */
  push32((uint32_t)(EDX));
  /* 112599ba push 1 */
  push32((uint32_t)(0x1u));
  /* 112599bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112599bf push eax */
  push32((uint32_t)(EAX));
  /* 112599c0 call dword ptr [0x11283384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283384))), 0x112599c6u);
  /* 112599c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112599c8 jne 0x112599d1 */
  if (!C.zf) goto L_112599d1;
  /* 112599ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112599cc jmp 0x11259b31 */
  goto L_11259b31;
L_112599d1:;
  /* 112599d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112599d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112599d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112599d8 push ecx */
  push32((uint32_t)(ECX));
  /* 112599d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112599dc push edx */
  push32((uint32_t)(EDX));
  /* 112599dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112599e0 push eax */
  push32((uint32_t)(EAX));
  /* 112599e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112599e4 push ecx */
  push32((uint32_t)(ECX));
  /* 112599e5 call dword ptr [0x1128337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128337c))), 0x112599ebu);
  /* 112599eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112599ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112599f2 jne 0x112599fb */
  if (!C.zf) goto L_112599fb;
  /* 112599f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112599f6 jmp 0x11259b31 */
  goto L_11259b31;
L_112599fb:;
  /* 112599fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112599fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11259a04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11259a06 je 0x11259a4b */
  if (C.zf) goto L_11259a4b;
  /* 11259a08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259a0c je 0x11259a46 */
  if (C.zf) goto L_11259a46;
  /* 11259a0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11259a11 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259a14 jle 0x11259a1d */
  if ((C.zf||C.sf!=C.of)) goto L_11259a1d;
  /* 11259a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259a18 jmp 0x11259b31 */
  goto L_11259b31;
L_11259a1d:;
  /* 11259a1d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11259a20 push ecx */
  push32((uint32_t)(ECX));
  /* 11259a21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11259a24 push edx */
  push32((uint32_t)(EDX));
  /* 11259a25 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11259a28 push eax */
  push32((uint32_t)(EAX));
  /* 11259a29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11259a2c push ecx */
  push32((uint32_t)(ECX));
  /* 11259a2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259a30 push edx */
  push32((uint32_t)(EDX));
  /* 11259a31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259a34 push eax */
  push32((uint32_t)(EAX));
  /* 11259a35 call dword ptr [0x1128337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128337c))), 0x11259a3bu);
  /* 11259a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259a3d jne 0x11259a46 */
  if (!C.zf) goto L_11259a46;
  /* 11259a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259a41 jmp 0x11259b31 */
  goto L_11259b31;
L_11259a46:;
  /* 11259a46 jmp 0x11259b2a */
  goto L_11259b2a;
L_11259a4b:;
  /* 11259a4b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11259a4e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11259a51 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11259a58 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11259a5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11259a5d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259a60 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11259a62 call 0x11251120 */
  push32(0x11259a67u); f_11251120();
  /* 11259a67 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11259a6a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11259a6d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11259a70 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11259a73 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11259a7a jmp 0x11259a93 */
  goto L_11259a93;
  /* 11259a7c mov eax, 1 */
  EAX = (0x1u);
  /* 11259a81 ret  */
  ESPCHK(0x11259840u, _esp0);
  ESP += 4; return;
  /* 11259a82 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11259a85 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11259a8c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11259a93:;
  /* 11259a93 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259a97 jne 0x11259aa0 */
  if (!C.zf) goto L_11259aa0;
  /* 11259a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259a9b jmp 0x11259b31 */
  goto L_11259b31;
L_11259aa0:;
  /* 11259aa0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11259aa3 push eax */
  push32((uint32_t)(EAX));
  /* 11259aa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11259aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11259aa8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11259aab push edx */
  push32((uint32_t)(EDX));
  /* 11259aac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11259aaf push eax */
  push32((uint32_t)(EAX));
  /* 11259ab0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11259ab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259ab7 push edx */
  push32((uint32_t)(EDX));
  /* 11259ab8 call dword ptr [0x1128337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128337c))), 0x11259abeu);
  /* 11259abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259ac0 jne 0x11259ac6 */
  if (!C.zf) goto L_11259ac6;
  /* 11259ac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259ac4 jmp 0x11259b31 */
  goto L_11259b31;
L_11259ac6:;
  /* 11259ac6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259aca jne 0x11259afa */
  if (!C.zf) goto L_11259afa;
  /* 11259acc push 0 */
  push32((uint32_t)(0x0u));
  /* 11259ace push 0 */
  push32((uint32_t)(0x0u));
  /* 11259ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11259ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11259ad4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11259ad7 push eax */
  push32((uint32_t)(EAX));
  /* 11259ad8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11259adb push ecx */
  push32((uint32_t)(ECX));
  /* 11259adc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11259ae1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11259ae4 push edx */
  push32((uint32_t)(EDX));
  /* 11259ae5 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x11259aebu);
  /* 11259aeb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11259aee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259af2 jne 0x11259af8 */
  if (!C.zf) goto L_11259af8;
  /* 11259af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259af6 jmp 0x11259b31 */
  goto L_11259b31;
L_11259af8:;
  /* 11259af8 jmp 0x11259b2a */
  goto L_11259b2a;
L_11259afa:;
  /* 11259afa push 0 */
  push32((uint32_t)(0x0u));
  /* 11259afc push 0 */
  push32((uint32_t)(0x0u));
  /* 11259afe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11259b01 push eax */
  push32((uint32_t)(EAX));
  /* 11259b02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11259b05 push ecx */
  push32((uint32_t)(ECX));
  /* 11259b06 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11259b09 push edx */
  push32((uint32_t)(EDX));
  /* 11259b0a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11259b0d push eax */
  push32((uint32_t)(EAX));
  /* 11259b0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11259b13 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11259b16 push ecx */
  push32((uint32_t)(ECX));
  /* 11259b17 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x11259b1du);
  /* 11259b1d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11259b20 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259b24 jne 0x11259b2a */
  if (!C.zf) goto L_11259b2a;
  /* 11259b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11259b28 jmp 0x11259b31 */
  goto L_11259b31;
L_11259b2a:;
  /* 11259b2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11259b2d jmp 0x11259b31 */
  goto L_11259b31;
L_11259b2f:;
  /* 11259b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11259b31:;
  /* 11259b31 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11259b34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11259b37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11259b3e pop edi */
  EDI = (pop32());
  /* 11259b3f pop esi */
  ESI = (pop32());
  /* 11259b40 pop ebx */
  EBX = (pop32());
  /* 11259b41 mov esp, ebp */
  ESP = (EBP);
  /* 11259b43 pop ebp */
  EBP = (pop32());
  /* 11259b44 ret  */
  ESPCHK(0x11259840u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b50 @ 0x11259b50 (80 bytes, 32 insns) */
void f_11259b50(void) {
  FTRACE(0x11259b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11259b51 mov ebp, esp */
  EBP = (ESP);
  /* 11259b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259b59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11259b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259b5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11259b62:;
  /* 11259b62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259b65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259b68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259b6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11259b6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11259b70 je 0x11259b87 */
  if (C.zf) goto L_11259b87;
  /* 11259b72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259b75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11259b78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11259b7a je 0x11259b87 */
  if (C.zf) goto L_11259b87;
  /* 11259b7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259b7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259b82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11259b85 jmp 0x11259b62 */
  goto L_11259b62;
L_11259b87:;
  /* 11259b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259b8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11259b8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11259b8f jne 0x11259b99 */
  if (!C.zf) goto L_11259b99;
  /* 11259b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259b94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259b97 jmp 0x11259b9c */
  goto L_11259b9c;
L_11259b99:;
  /* 11259b99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11259b9c:;
  /* 11259b9c mov esp, ebp */
  ESP = (EBP);
  /* 11259b9e pop ebp */
  EBP = (pop32());
  /* 11259b9f ret  */
  ESPCHK(0x11259b50u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11259ba0 (62 bytes, 23 insns) */
void f_11259ba0(void) {
  FTRACE(0x11259ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11259ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11259ba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259ba6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11259bad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259bb0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259bb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11259bb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259bb9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259bbc jb 0x11259bc6 */
  if (C.cf) goto L_11259bc6;
  /* 11259bbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259bc1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259bc4 jae 0x11259bcf */
  if (!C.cf) goto L_11259bcf;
L_11259bc6:;
  /* 11259bc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259bc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259bcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11259bcf:;
  /* 11259bcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259bd5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11259bd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11259bda mov esp, ebp */
  ESP = (EBP);
  /* 11259bdc pop ebp */
  EBP = (pop32());
  /* 11259bdd ret  */
  ESPCHK(0x11259ba0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11259be0 (173 bytes, 66 insns) */
void f_11259be0(void) {
  FTRACE(0x11259be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11259be1 mov ebp, esp */
  EBP = (ESP);
  /* 11259be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259be9 push eax */
  push32((uint32_t)(EAX));
  /* 11259bea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259bed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11259bef push edx */
  push32((uint32_t)(EDX));
  /* 11259bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259bf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11259bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11259bf6 call 0x11259ba0 */
  push32(0x11259bfbu); f_11259ba0();
  /* 11259bfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259bfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11259c01 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259c05 je 0x11259c37 */
  if (C.zf) goto L_11259c37;
  /* 11259c07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c0a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c0d push edx */
  push32((uint32_t)(EDX));
  /* 11259c0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11259c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c13 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11259c16 push ecx */
  push32((uint32_t)(ECX));
  /* 11259c17 call 0x11259ba0 */
  push32(0x11259c1cu); f_11259ba0();
  /* 11259c1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c1f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11259c22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259c26 je 0x11259c37 */
  if (C.zf) goto L_11259c37;
  /* 11259c28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c2b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11259c2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c34 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11259c37:;
  /* 11259c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c3a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c3d push edx */
  push32((uint32_t)(EDX));
  /* 11259c3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259c41 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11259c44 push ecx */
  push32((uint32_t)(ECX));
  /* 11259c45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11259c4b push eax */
  push32((uint32_t)(EAX));
  /* 11259c4c call 0x11259ba0 */
  push32(0x11259c51u); f_11259ba0();
  /* 11259c51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11259c57 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259c5b je 0x11259c6c */
  if (C.zf) goto L_11259c6c;
  /* 11259c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c60 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11259c63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c69 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11259c6c:;
  /* 11259c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c72 push ecx */
  push32((uint32_t)(ECX));
  /* 11259c73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259c76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11259c79 push eax */
  push32((uint32_t)(EAX));
  /* 11259c7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11259c80 push edx */
  push32((uint32_t)(EDX));
  /* 11259c81 call 0x11259ba0 */
  push32(0x11259c86u); f_11259ba0();
  /* 11259c86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259c89 mov esp, ebp */
  ESP = (EBP);
  /* 11259c8b pop ebp */
  EBP = (pop32());
  /* 11259c8c ret  */
  ESPCHK(0x11259be0u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11259c90 (96 bytes, 37 insns) */
void f_11259c90(void) {
  FTRACE(0x11259c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11259c91 mov ebp, esp */
  EBP = (ESP);
  /* 11259c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259c99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11259c9b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11259ca1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259ca3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259ca5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259ca7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11259caa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259cad mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11259cb0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11259cb5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259cb7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259cb9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259cbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11259cbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259cc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11259cc3 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11259cc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259cc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11259cca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259ccd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11259cd0 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11259cd2 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11259cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259cd8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11259cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259cde mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11259ce1 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11259ce3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11259ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259ce9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11259cec mov esp, ebp */
  ESP = (EBP);
  /* 11259cee pop ebp */
  EBP = (pop32());
  /* 11259cef ret  */
  ESPCHK(0x11259c90u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11259cf0 (99 bytes, 37 insns) */
void f_11259cf0(void) {
  FTRACE(0x11259cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11259cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11259cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259cf9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11259cfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11259cff neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259d01 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259d03 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11259d09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11259d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11259d12 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11259d15 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11259d17 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259d19 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11259d1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11259d21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d24 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11259d27 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11259d29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11259d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11259d35 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11259d37 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11259d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d3d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11259d40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11259d45 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11259d47 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11259d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11259d4f mov esp, ebp */
  ESP = (EBP);
  /* 11259d51 pop ebp */
  EBP = (pop32());
  /* 11259d52 ret  */
  ESPCHK(0x11259cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d60 @ 0x11259d60 (315 bytes, 101 insns) */
void f_11259d60(void) {
  FTRACE(0x11259d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11259d61 mov ebp, esp */
  EBP = (ESP);
  /* 11259d63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259d66 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11259d6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259d6f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11259d75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259d78 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11259d7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259d82 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11259d89 jmp 0x11259d9d */
  goto L_11259d9d;
L_11259d8b:;
  /* 11259d8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11259d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259d91 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11259d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259d97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259d9a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11259d9d:;
  /* 11259d9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259da1 jbe 0x11259e17 */
  if ((C.cf||C.zf)) goto L_11259e17;
  /* 11259da3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259da6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11259da8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11259dab mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11259dae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11259db1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11259db4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11259db7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259dba push eax */
  push32((uint32_t)(EAX));
  /* 11259dbb call 0x11259c90 */
  push32(0x11259dc0u); f_11259c90();
  /* 11259dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259dc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11259dc7 call 0x11259c90 */
  push32(0x11259dccu); f_11259c90();
  /* 11259dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259dcf lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11259dd2 push edx */
  push32((uint32_t)(EDX));
  /* 11259dd3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259dd6 push eax */
  push32((uint32_t)(EAX));
  /* 11259dd7 call 0x11259be0 */
  push32(0x11259ddcu); f_11259be0();
  /* 11259ddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259ddf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259de2 push ecx */
  push32((uint32_t)(ECX));
  /* 11259de3 call 0x11259c90 */
  push32(0x11259de8u); f_11259c90();
  /* 11259de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11259dee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11259df1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11259df4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11259dfb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11259e02 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11259e05 push ecx */
  push32((uint32_t)(ECX));
  /* 11259e06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e09 push edx */
  push32((uint32_t)(EDX));
  /* 11259e0a call 0x11259be0 */
  push32(0x11259e0fu); f_11259be0();
  /* 11259e0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259e12 jmp 0x11259d8b */
  goto L_11259d8b;
L_11259e17:;
  /* 11259e17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e1a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259e1e jne 0x11259e63 */
  if (!C.zf) goto L_11259e63;
  /* 11259e20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11259e26 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11259e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11259e2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11259e35 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11259e38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e3b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11259e3d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11259e40 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11259e42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e45 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11259e48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11259e4d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11259e50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11259e55 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11259e59 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11259e5d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11259e61 jmp 0x11259e17 */
  goto L_11259e17;
L_11259e63:;
  /* 11259e63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e66 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11259e69 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11259e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11259e70 jne 0x11259e8c */
  if (!C.zf) goto L_11259e8c;
  /* 11259e72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11259e76 call 0x11259c90 */
  push32(0x11259e7bu); f_11259c90();
  /* 11259e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11259e7e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11259e82 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11259e86 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11259e8a jmp 0x11259e63 */
  goto L_11259e63;
L_11259e8c:;
  /* 11259e8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259e8f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11259e93 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11259e97 mov esp, ebp */
  ESP = (EBP);
  /* 11259e99 pop ebp */
  EBP = (pop32());
  /* 11259e9a ret  */
  ESPCHK(0x11259d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ea0 @ 0x11259ea0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11259ea0(void) {
  FTRACE(0x11259ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11259ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11259ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11259ea3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259ea9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11259eac mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11259eaf mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11259eb5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11259ebc mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11259ec3 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11259eca mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11259ed1 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11259ed8 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11259edf mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11259ee6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11259eed mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11259ef4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11259efb mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11259f02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11259f05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11259f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f0b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11259f0e jmp 0x11259f19 */
  goto L_11259f19;
L_11259f10:;
  /* 11259f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259f16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11259f19:;
  /* 11259f19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11259f1f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f22 je 0x11259f45 */
  if (C.zf) goto L_11259f45;
  /* 11259f24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11259f2a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f2d je 0x11259f45 */
  if (C.zf) goto L_11259f45;
  /* 11259f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11259f35 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f38 je 0x11259f45 */
  if (C.zf) goto L_11259f45;
  /* 11259f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f3d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11259f40 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f43 jne 0x11259f47 */
  if (!C.zf) goto L_11259f47;
L_11259f45:;
  /* 11259f45 jmp 0x11259f10 */
  goto L_11259f10;
L_11259f47:;
  /* 11259f47 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f4b je 0x1125a6a8 */
  if (C.zf) goto L_1125a6a8;
  /* 11259f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11259f56 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11259f59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11259f5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11259f62 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11259f65 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11259f68 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f6c ja 0x1125a6a3 */
  if ((!C.cf&&!C.zf)) goto L_1125a6a3;
  /* 11259f72 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11259f75 jmp dword ptr [ecx*4 + 0x1125a8ba] */
  switch (ECX) {
    case 0: goto L_11259f7c;
    case 1: goto L_1125a01a;
    case 2: goto L_1125a0d0;
    case 3: goto L_1125a13b;
    case 4: goto L_1125a253;
    case 5: goto L_1125a385;
    case 6: goto L_1125a3fb;
    case 7: goto L_1125a4e0;
    case 8: goto L_1125a482;
    case 9: goto L_1125a533;
    case 10: goto L_1125a6a3;
    case 11: goto L_1125a63f;
    case 12: goto L_1125a0a9;
    case 13: goto L_1125a097;
    case 14: goto L_1125a0a0;
    case 15: goto L_1125a0bb;
    default: x86_unimpl("switch@0x11259f75 out of table"); return;
  }
L_11259f7c:;
  /* 11259f7c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11259f80 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f83 jl 0x11259fa0 */
  if ((C.sf!=C.of)) goto L_11259fa0;
  /* 11259f85 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11259f89 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259f8c jg 0x11259fa0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11259fa0;
  /* 11259f8e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11259f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11259f98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11259f9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11259f9e jmp 0x1125a015 */
  goto L_1125a015;
L_11259fa0:;
  /* 11259fa0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11259fa4 movsx eax, byte ptr [0x1127efe4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1127efe4))));
  /* 11259fab cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11259fad jne 0x11259fb8 */
  if (!C.zf) goto L_11259fb8;
  /* 11259faf mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11259fb6 jmp 0x1125a015 */
  goto L_1125a015;
L_11259fb8:;
  /* 11259fb8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11259fbb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11259fc1 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11259fc8 je 0x11259fe7 */
  if (C.zf) goto L_11259fe7;
  /* 11259fca cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11259fd1 je 0x11259ff6 */
  if (C.zf) goto L_11259ff6;
  /* 11259fd3 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11259fda je 0x11259fde */
  if (C.zf) goto L_11259fde;
  /* 11259fdc jmp 0x1125a005 */
  goto L_1125a005;
L_11259fde:;
  /* 11259fde mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11259fe5 jmp 0x1125a015 */
  goto L_1125a015;
L_11259fe7:;
  /* 11259fe7 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11259fee mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11259ff4 jmp 0x1125a015 */
  goto L_1125a015;
L_11259ff6:;
  /* 11259ff6 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11259ffd mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 1125a003 jmp 0x1125a015 */
  goto L_1125a015;
L_1125a005:;
  /* 1125a005 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a00c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a00f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a012 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125a015:;
  /* 1125a015 jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a01a:;
  /* 1125a01a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 1125a021 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a025 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a028 jl 0x1125a048 */
  if ((C.sf!=C.of)) goto L_1125a048;
  /* 1125a02a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a02e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a031 jg 0x1125a048 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125a048;
  /* 1125a033 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 1125a03a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a03d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a040 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125a043 jmp 0x1125a0cb */
  goto L_1125a0cb;
L_1125a048:;
  /* 1125a048 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a04c movsx ecx, byte ptr [0x1127efe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1127efe4))));
  /* 1125a053 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a055 jne 0x1125a060 */
  if (!C.zf) goto L_1125a060;
  /* 1125a057 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 1125a05e jmp 0x1125a0cb */
  goto L_1125a0cb;
L_1125a060:;
  /* 1125a060 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a064 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 1125a06a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 1125a070 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a073 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 1125a079 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a080 ja 0x1125a0bb */
  if ((!C.cf&&!C.zf)) goto L_1125a0bb;
  /* 1125a082 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 1125a088 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125a08a mov cl, byte ptr [edx + 0x1125a8fa] */
  CL = (r8((uint32_t)(EDX + 0x1125a8fa)));
  /* 1125a090 jmp dword ptr [ecx*4 + 0x1125a8ea] */
  switch (ECX) {
    case 0: goto L_1125a0a9;
    case 1: goto L_1125a097;
    case 2: goto L_1125a0a0;
    case 3: goto L_1125a0bb;
    default: x86_unimpl("switch@0x1125a090 out of table"); return;
  }
L_1125a097:;
  /* 1125a097 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 1125a09e jmp 0x1125a0cb */
  goto L_1125a0cb;
L_1125a0a0:;
  /* 1125a0a0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 1125a0a7 jmp 0x1125a0cb */
  goto L_1125a0cb;
L_1125a0a9:;
  /* 1125a0a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a0ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a0af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125a0b2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 1125a0b9 jmp 0x1125a0cb */
  goto L_1125a0cb;
L_1125a0bb:;
  /* 1125a0bb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a0c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a0c5 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a0c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125a0cb:;
  /* 1125a0cb jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a0d0:;
  /* 1125a0d0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a0d4 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a0d7 jl 0x1125a0f4 */
  if ((C.sf!=C.of)) goto L_1125a0f4;
  /* 1125a0d9 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a0dd cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a0e0 jg 0x1125a0f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125a0f4;
  /* 1125a0e2 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 1125a0e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a0ec sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a0ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125a0f2 jmp 0x1125a136 */
  goto L_1125a136;
L_1125a0f4:;
  /* 1125a0f4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a0f8 movsx eax, byte ptr [0x1127efe4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1127efe4))));
  /* 1125a0ff cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a101 jne 0x1125a10c */
  if (!C.zf) goto L_1125a10c;
  /* 1125a103 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 1125a10a jmp 0x1125a136 */
  goto L_1125a136;
L_1125a10c:;
  /* 1125a10c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 1125a10f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 1125a115 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a11c je 0x1125a120 */
  if (C.zf) goto L_1125a120;
  /* 1125a11e jmp 0x1125a129 */
  goto L_1125a129;
L_1125a120:;
  /* 1125a120 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 1125a127 jmp 0x1125a136 */
  goto L_1125a136;
L_1125a129:;
  /* 1125a129 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a130 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 1125a133 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125a136:;
  /* 1125a136 jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a13b:;
  /* 1125a13b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 1125a142 jmp 0x1125a155 */
  goto L_1125a155;
L_1125a144:;
  /* 1125a144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a147 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125a149 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 1125a14c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a14f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a152 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125a155:;
  /* 1125a155 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a15c jle 0x1125a179 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a179;
  /* 1125a15e push 4 */
  push32((uint32_t)(0x4u));
  /* 1125a160 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a163 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125a168 push eax */
  push32((uint32_t)(EAX));
  /* 1125a169 call 0x11251ec0 */
  push32(0x1125a16eu); f_11251ec0();
  /* 1125a16e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a171 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1125a177 jmp 0x1125a197 */
  goto L_1125a197;
L_1125a179:;
  /* 1125a179 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a17c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125a182 mov edx, dword ptr [0x1127efec] */
  EDX = (r32((uint32_t)(0x1127efec)));
  /* 1125a188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125a18a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1125a18e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1125a191 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_1125a197:;
  /* 1125a197 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a19e je 0x1125a1d4 */
  if (C.zf) goto L_1125a1d4;
  /* 1125a1a0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a1a4 jae 0x1125a1c6 */
  if (!C.cf) goto L_1125a1c6;
  /* 1125a1a6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125a1a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a1ac mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 1125a1af movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a1b3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a1b6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a1b9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1125a1bb mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a1be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a1c1 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 1125a1c4 jmp 0x1125a1cf */
  goto L_1125a1cf;
L_1125a1c6:;
  /* 1125a1c6 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1125a1c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a1cc mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_1125a1cf:;
  /* 1125a1cf jmp 0x1125a144 */
  goto L_1125a144;
L_1125a1d4:;
  /* 1125a1d4 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a1d8 movsx ecx, byte ptr [0x1127efe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1127efe4))));
  /* 1125a1df cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a1e1 jne 0x1125a1ec */
  if (!C.zf) goto L_1125a1ec;
  /* 1125a1e3 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 1125a1ea jmp 0x1125a24e */
  goto L_1125a24e;
L_1125a1ec:;
  /* 1125a1ec movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a1f0 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 1125a1f6 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1125a1fc sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a1ff mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1125a205 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a20c ja 0x1125a23e */
  if ((!C.cf&&!C.zf)) goto L_1125a23e;
  /* 1125a20e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1125a214 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125a216 mov cl, byte ptr [edx + 0x1125a941] */
  CL = (r8((uint32_t)(EDX + 0x1125a941)));
  /* 1125a21c jmp dword ptr [ecx*4 + 0x1125a935] */
  switch (ECX) {
    case 0: goto L_1125a22c;
    case 1: goto L_1125a223;
    case 2: goto L_1125a23e;
    default: x86_unimpl("switch@0x1125a21c out of table"); return;
  }
L_1125a223:;
  /* 1125a223 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 1125a22a jmp 0x1125a24e */
  goto L_1125a24e;
L_1125a22c:;
  /* 1125a22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a22f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a232 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125a235 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 1125a23c jmp 0x1125a24e */
  goto L_1125a24e;
L_1125a23e:;
  /* 1125a23e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a248 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a24b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125a24e:;
  /* 1125a24e jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a253:;
  /* 1125a253 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 1125a25a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1125a261 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a265 jne 0x1125a28e */
  if (!C.zf) goto L_1125a28e;
  /* 1125a267 jmp 0x1125a27a */
  goto L_1125a27a;
L_1125a269:;
  /* 1125a269 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a26c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125a26e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 1125a271 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a274 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a277 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125a27a:;
  /* 1125a27a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a27e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a281 jne 0x1125a28e */
  if (!C.zf) goto L_1125a28e;
  /* 1125a283 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1125a286 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a289 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 1125a28c jmp 0x1125a269 */
  goto L_1125a269;
L_1125a28e:;
  /* 1125a28e jmp 0x1125a2a1 */
  goto L_1125a2a1;
L_1125a290:;
  /* 1125a290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a293 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125a295 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 1125a298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a29b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a29e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a2a1:;
  /* 1125a2a1 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a2a8 jle 0x1125a2c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a2c6;
  /* 1125a2aa push 4 */
  push32((uint32_t)(0x4u));
  /* 1125a2ac mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a2af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125a2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1125a2b6 call 0x11251ec0 */
  push32(0x1125a2bbu); f_11251ec0();
  /* 1125a2bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a2be mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 1125a2c4 jmp 0x1125a2e3 */
  goto L_1125a2e3;
L_1125a2c6:;
  /* 1125a2c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a2c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125a2cf mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 1125a2d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125a2d6 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1125a2da and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125a2dd mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_1125a2e3:;
  /* 1125a2e3 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a2ea je 0x1125a31e */
  if (C.zf) goto L_1125a31e;
  /* 1125a2ec cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a2f0 jae 0x1125a319 */
  if (!C.cf) goto L_1125a319;
  /* 1125a2f2 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125a2f5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a2f8 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 1125a2fb movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a2ff sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a302 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a305 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1125a307 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a30a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a30d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 1125a310 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1125a313 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a316 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_1125a319:;
  /* 1125a319 jmp 0x1125a290 */
  goto L_1125a290;
L_1125a31e:;
  /* 1125a31e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a322 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1125a328 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1125a32e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a331 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 1125a337 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a33e ja 0x1125a370 */
  if ((!C.cf&&!C.zf)) goto L_1125a370;
  /* 1125a340 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1125a346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125a348 mov al, byte ptr [ecx + 0x1125a988] */
  AL = (r8((uint32_t)(ECX + 0x1125a988)));
  /* 1125a34e jmp dword ptr [eax*4 + 0x1125a97c] */
  switch (EAX) {
    case 0: goto L_1125a35e;
    case 1: goto L_1125a355;
    case 2: goto L_1125a370;
    default: x86_unimpl("switch@0x1125a34e out of table"); return;
  }
L_1125a355:;
  /* 1125a355 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 1125a35c jmp 0x1125a380 */
  goto L_1125a380;
L_1125a35e:;
  /* 1125a35e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a361 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a364 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125a367 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 1125a36e jmp 0x1125a380 */
  goto L_1125a380;
L_1125a370:;
  /* 1125a370 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a37a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a37d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a380:;
  /* 1125a380 jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a385:;
  /* 1125a385 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1125a38c cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a393 jle 0x1125a3b1 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a3b1;
  /* 1125a395 push 4 */
  push32((uint32_t)(0x4u));
  /* 1125a397 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a39a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125a3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1125a3a1 call 0x11251ec0 */
  push32(0x1125a3a6u); f_11251ec0();
  /* 1125a3a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a3a9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1125a3af jmp 0x1125a3ce */
  goto L_1125a3ce;
L_1125a3b1:;
  /* 1125a3b1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a3b4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125a3ba mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 1125a3bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125a3c1 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1125a3c5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125a3c8 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_1125a3ce:;
  /* 1125a3ce cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a3d5 je 0x1125a3e9 */
  if (C.zf) goto L_1125a3e9;
  /* 1125a3d7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 1125a3de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a3e1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a3e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125a3e7 jmp 0x1125a3f6 */
  goto L_1125a3f6;
L_1125a3e9:;
  /* 1125a3e9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a3f0 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 1125a3f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a3f6:;
  /* 1125a3f6 jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a3fb:;
  /* 1125a3fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a3fe sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a401 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 1125a404 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a408 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a40b jl 0x1125a428 */
  if ((C.sf!=C.of)) goto L_1125a428;
  /* 1125a40d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a411 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a414 jg 0x1125a428 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125a428;
  /* 1125a416 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 1125a41d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a420 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a423 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125a426 jmp 0x1125a47d */
  goto L_1125a47d;
L_1125a428:;
  /* 1125a428 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 1125a42b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 1125a431 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a438 je 0x1125a467 */
  if (C.zf) goto L_1125a467;
  /* 1125a43a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a441 je 0x1125a457 */
  if (C.zf) goto L_1125a457;
  /* 1125a443 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a44a je 0x1125a44e */
  if (C.zf) goto L_1125a44e;
  /* 1125a44c jmp 0x1125a470 */
  goto L_1125a470;
L_1125a44e:;
  /* 1125a44e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 1125a455 jmp 0x1125a47d */
  goto L_1125a47d;
L_1125a457:;
  /* 1125a457 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1125a45e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 1125a465 jmp 0x1125a47d */
  goto L_1125a47d;
L_1125a467:;
  /* 1125a467 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1125a46e jmp 0x1125a47d */
  goto L_1125a47d;
L_1125a470:;
  /* 1125a470 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a477 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 1125a47a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a47d:;
  /* 1125a47d jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a482:;
  /* 1125a482 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 1125a489 jmp 0x1125a49c */
  goto L_1125a49c;
L_1125a48b:;
  /* 1125a48b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a48e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125a490 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 1125a493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a496 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a49c:;
  /* 1125a49c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a4a0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a4a3 jne 0x1125a4a7 */
  if (!C.zf) goto L_1125a4a7;
  /* 1125a4a5 jmp 0x1125a48b */
  goto L_1125a48b;
L_1125a4a7:;
  /* 1125a4a7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a4ab cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a4ae jl 0x1125a4cb */
  if ((C.sf!=C.of)) goto L_1125a4cb;
  /* 1125a4b0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a4b4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a4b7 jg 0x1125a4cb */
  if ((!C.zf&&C.sf==C.of)) goto L_1125a4cb;
  /* 1125a4b9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 1125a4c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a4c3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a4c6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125a4c9 jmp 0x1125a4db */
  goto L_1125a4db;
L_1125a4cb:;
  /* 1125a4cb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a4d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a4d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a4d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125a4db:;
  /* 1125a4db jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a4e0:;
  /* 1125a4e0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a4e4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a4e7 jl 0x1125a504 */
  if ((C.sf!=C.of)) goto L_1125a504;
  /* 1125a4e9 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a4ed cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a4f0 jg 0x1125a504 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125a504;
  /* 1125a4f2 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 1125a4f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a4fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a4ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125a502 jmp 0x1125a52e */
  goto L_1125a52e;
L_1125a504:;
  /* 1125a504 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 1125a507 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 1125a50d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a514 je 0x1125a518 */
  if (C.zf) goto L_1125a518;
  /* 1125a516 jmp 0x1125a521 */
  goto L_1125a521;
L_1125a518:;
  /* 1125a518 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 1125a51f jmp 0x1125a52e */
  goto L_1125a52e;
L_1125a521:;
  /* 1125a521 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a528 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1125a52b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125a52e:;
  /* 1125a52e jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a533:;
  /* 1125a533 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 1125a53a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 1125a541 jmp 0x1125a554 */
  goto L_1125a554;
L_1125a543:;
  /* 1125a543 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a546 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125a548 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 1125a54b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a54e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a551 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125a554:;
  /* 1125a554 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a55b jle 0x1125a579 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a579;
  /* 1125a55d push 4 */
  push32((uint32_t)(0x4u));
  /* 1125a55f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a562 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125a568 push edx */
  push32((uint32_t)(EDX));
  /* 1125a569 call 0x11251ec0 */
  push32(0x1125a56eu); f_11251ec0();
  /* 1125a56e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a571 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1125a577 jmp 0x1125a596 */
  goto L_1125a596;
L_1125a579:;
  /* 1125a579 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a57c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125a581 mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1125a587 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125a589 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1125a58d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125a590 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_1125a596:;
  /* 1125a596 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a59d je 0x1125a5c7 */
  if (C.zf) goto L_1125a5c7;
  /* 1125a59f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125a5a2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125a5a5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1125a5a9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 1125a5ad mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 1125a5b0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a5b7 jle 0x1125a5c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a5c2;
  /* 1125a5b9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 1125a5c0 jmp 0x1125a5c7 */
  goto L_1125a5c7;
L_1125a5c2:;
  /* 1125a5c2 jmp 0x1125a543 */
  goto L_1125a543;
L_1125a5c7:;
  /* 1125a5c7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125a5ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125a5cd jmp 0x1125a5e0 */
  goto L_1125a5e0;
L_1125a5cf:;
  /* 1125a5cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a5d2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125a5d4 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 1125a5d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a5da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a5dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a5e0:;
  /* 1125a5e0 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a5e7 jle 0x1125a605 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a605;
  /* 1125a5e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 1125a5eb mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a5ee and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125a5f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1125a5f5 call 0x11251ec0 */
  push32(0x1125a5fau); f_11251ec0();
  /* 1125a5fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a5fd mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1125a603 jmp 0x1125a622 */
  goto L_1125a622;
L_1125a605:;
  /* 1125a605 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125a608 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125a60e mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 1125a613 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125a615 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1125a619 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125a61c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_1125a622:;
  /* 1125a622 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a629 je 0x1125a62d */
  if (C.zf) goto L_1125a62d;
  /* 1125a62b jmp 0x1125a5cf */
  goto L_1125a5cf;
L_1125a62d:;
  /* 1125a62d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a637 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a63a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125a63d jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a63f:;
  /* 1125a63f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a643 je 0x1125a693 */
  if (C.zf) goto L_1125a693;
  /* 1125a645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a648 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a64b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 1125a64e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 1125a651 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 1125a657 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a65e je 0x1125a67b */
  if (C.zf) goto L_1125a67b;
  /* 1125a660 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125a667 je 0x1125a66b */
  if (C.zf) goto L_1125a66b;
  /* 1125a669 jmp 0x1125a684 */
  goto L_1125a684;
L_1125a66b:;
  /* 1125a66b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1125a672 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 1125a679 jmp 0x1125a691 */
  goto L_1125a691;
L_1125a67b:;
  /* 1125a67b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1125a682 jmp 0x1125a691 */
  goto L_1125a691;
L_1125a684:;
  /* 1125a684 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a68b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 1125a68e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125a691:;
  /* 1125a691 jmp 0x1125a6a3 */
  goto L_1125a6a3;
L_1125a693:;
  /* 1125a693 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1125a69a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a69d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a6a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125a6a3:;
  /* 1125a6a3 jmp 0x11259f47 */
  goto L_11259f47;
L_1125a6a8:;
  /* 1125a6a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125a6ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125a6ae mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1125a6b0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a6b4 je 0x1125a7f7 */
  if (C.zf) goto L_1125a7f7;
  /* 1125a6ba cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a6be jne 0x1125a7f7 */
  if (!C.zf) goto L_1125a7f7;
  /* 1125a6c4 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a6c8 jne 0x1125a7f7 */
  if (!C.zf) goto L_1125a7f7;
  /* 1125a6ce cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a6d2 jbe 0x1125a6ff */
  if ((C.cf||C.zf)) goto L_1125a6ff;
  /* 1125a6d4 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 1125a6d8 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a6db jl 0x1125a6e6 */
  if ((C.sf!=C.of)) goto L_1125a6e6;
  /* 1125a6dd mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 1125a6e0 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1125a6e3 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_1125a6e6:;
  /* 1125a6e6 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 1125a6ed mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a6f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a6f3 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 1125a6f6 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1125a6f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a6fc mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_1125a6ff:;
  /* 1125a6ff cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a703 jbe 0x1125a7da */
  if ((C.cf||C.zf)) goto L_1125a7da;
  /* 1125a709 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a70c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a70f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 1125a712 jmp 0x1125a71d */
  goto L_1125a71d;
L_1125a714:;
  /* 1125a714 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a717 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a71a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_1125a71d:;
  /* 1125a71d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125a720 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125a723 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125a725 jne 0x1125a73b */
  if (!C.zf) goto L_1125a73b;
  /* 1125a727 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125a72a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a72d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 1125a730 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1125a733 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a736 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 1125a739 jmp 0x1125a714 */
  goto L_1125a714;
L_1125a73b:;
  /* 1125a73b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 1125a73e push ecx */
  push32((uint32_t)(ECX));
  /* 1125a73f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125a742 push edx */
  push32((uint32_t)(EDX));
  /* 1125a743 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1125a746 push eax */
  push32((uint32_t)(EAX));
  /* 1125a747 call 0x11259d60 */
  push32(0x1125a74cu); f_11259d60();
  /* 1125a74c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a74f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a753 jge 0x1125a75d */
  if ((C.sf==C.of)) goto L_1125a75d;
  /* 1125a755 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125a758 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125a75a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1125a75d:;
  /* 1125a75d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125a760 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a763 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125a766 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a76a jne 0x1125a775 */
  if (!C.zf) goto L_1125a775;
  /* 1125a76c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125a76f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a772 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1125a775:;
  /* 1125a775 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a779 jne 0x1125a784 */
  if (!C.zf) goto L_1125a784;
  /* 1125a77b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125a77e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a781 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1125a784:;
  /* 1125a784 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a78b jle 0x1125a796 */
  if ((C.zf||C.sf!=C.of)) goto L_1125a796;
  /* 1125a78d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 1125a794 jmp 0x1125a7d8 */
  goto L_1125a7d8;
L_1125a796:;
  /* 1125a796 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a79d jge 0x1125a7a8 */
  if ((C.sf==C.of)) goto L_1125a7a8;
  /* 1125a79f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 1125a7a6 jmp 0x1125a7d8 */
  goto L_1125a7d8;
L_1125a7a8:;
  /* 1125a7a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125a7ab push edx */
  push32((uint32_t)(EDX));
  /* 1125a7ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125a7af push eax */
  push32((uint32_t)(EAX));
  /* 1125a7b0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 1125a7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125a7b4 call 0x1125e560 */
  push32(0x1125a7b9u); f_1125e560();
  /* 1125a7b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a7bc mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 1125a7c0 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 1125a7c4 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 1125a7c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125a7ca mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 1125a7cd mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1125a7d0 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 1125a7d4 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_1125a7d8:;
  /* 1125a7d8 jmp 0x1125a7f7 */
  goto L_1125a7f7;
L_1125a7da:;
  /* 1125a7da mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 1125a7e0 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 1125a7e6 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1125a7e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125a7ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125a7f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125a7f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1125a7f7:;
  /* 1125a7f7 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a7fb jne 0x1125a826 */
  if (!C.zf) goto L_1125a826;
  /* 1125a7fd mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 1125a803 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 1125a809 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1125a80c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125a812 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1125a815 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125a818 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125a81b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 1125a81e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125a821 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 1125a824 jmp 0x1125a87d */
  goto L_1125a87d;
L_1125a826:;
  /* 1125a826 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a82a je 0x1125a851 */
  if (C.zf) goto L_1125a851;
  /* 1125a82c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 1125a832 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 1125a839 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125a840 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 1125a846 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 1125a849 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1125a84c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 1125a84f jmp 0x1125a87d */
  goto L_1125a87d;
L_1125a851:;
  /* 1125a851 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125a855 je 0x1125a87d */
  if (C.zf) goto L_1125a87d;
  /* 1125a857 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 1125a85d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 1125a863 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1125a866 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125a86b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125a86e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125a871 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125a874 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 1125a877 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1125a87a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_1125a87d:;
  /* 1125a87d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125a880 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 1125a884 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 1125a887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125a88a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125a88d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 1125a890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125a893 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125a896 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 1125a899 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1125a89c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125a8a1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125a8a4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125a8aa or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1125a8ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125a8af mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 1125a8b3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 1125a8b6 mov esp, ebp */
  ESP = (EBP);
  /* 1125a8b8 pop ebp */
  EBP = (pop32());
  /* 1125a8b9 ret  */
  ESPCHK(0x11259ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a9d0 @ 0x1125a9d0 (79 bytes, 33 insns) */
void f_1125a9d0(void) {
  FTRACE(0x1125a9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125a9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125a9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1125a9d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125a9d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125a9d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125a9da push 0 */
  push32((uint32_t)(0x0u));
  /* 1125a9dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125a9df push eax */
  push32((uint32_t)(EAX));
  /* 1125a9e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125a9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125a9e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125a9e7 push edx */
  push32((uint32_t)(EDX));
  /* 1125a9e8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1125a9eb push eax */
  push32((uint32_t)(EAX));
  /* 1125a9ec call 0x11259ea0 */
  push32(0x1125a9f1u); f_11259ea0();
  /* 1125a9f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125a9f4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125a9f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125a9fa push ecx */
  push32((uint32_t)(ECX));
  /* 1125a9fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1125a9fe push edx */
  push32((uint32_t)(EDX));
  /* 1125a9ff call 0x112527c0 */
  push32(0x1125aa04u); f_112527c0();
  /* 1125aa04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125aa07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125aa0a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125aa0e jne 0x1125aa18 */
  if (!C.zf) goto L_1125aa18;
  /* 1125aa10 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125aa13 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1125aa15 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1125aa18:;
  /* 1125aa18 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125aa1b mov esp, ebp */
  ESP = (EBP);
  /* 1125aa1d pop ebp */
  EBP = (pop32());
  /* 1125aa1e ret  */
  ESPCHK(0x1125a9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa20 @ 0x1125aa20 (1302 bytes, 386 insns) */
void f_1125aa20(void) {
  FTRACE(0x1125aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1125aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1125aa23 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125aa26 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 1125aa2c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 1125aa32 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 1125aa38 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 1125aa3f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 1125aa43 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 1125aa47 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 1125aa4b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 1125aa4f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 1125aa53 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 1125aa57 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 1125aa5b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 1125aa5f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 1125aa63 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 1125aa67 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 1125aa6b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 1125aa6f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 1125aa76 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 1125aa7a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 1125aa7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125aa81 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1125aa84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125aa87 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 1125aa8a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125aa8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125aa92 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1125aa97 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 1125aa9b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 1125aa9f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 1125aaa4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 1125aaa8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125aaab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125aab1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125aab3 je 0x1125aabe */
  if (C.zf) goto L_1125aabe;
  /* 1125aab5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aab8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 1125aabc jmp 0x1125aac5 */
  goto L_1125aac5;
L_1125aabe:;
  /* 1125aabe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aac1 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_1125aac5:;
  /* 1125aac5 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125aac8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125aace test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125aad0 jne 0x1125ab0c */
  if (!C.zf) goto L_1125ab0c;
  /* 1125aad2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125aad6 jne 0x1125ab0c */
  if (!C.zf) goto L_1125ab0c;
  /* 1125aad8 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125aadc jne 0x1125ab0c */
  if (!C.zf) goto L_1125ab0c;
  /* 1125aade mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aae1 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1125aae6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aae9 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 1125aaed mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aaf0 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 1125aaf4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aaf7 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 1125aafb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aafe mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 1125ab02 mov eax, 1 */
  EAX = (0x1u);
  /* 1125ab07 jmp 0x1125af32 */
  goto L_1125af32;
L_1125ab0c:;
  /* 1125ab0c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125ab0f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125ab15 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ab1b jne 0x1125ac06 */
  if (!C.zf) goto L_1125ac06;
  /* 1125ab21 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ab24 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 1125ab29 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ab30 jne 0x1125ab38 */
  if (!C.zf) goto L_1125ab38;
  /* 1125ab32 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ab36 je 0x1125ab6c */
  if (C.zf) goto L_1125ab6c;
L_1125ab38:;
  /* 1125ab38 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125ab3b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1125ab41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ab43 jne 0x1125ab6c */
  if (!C.zf) goto L_1125ab6c;
  /* 1125ab45 push 0x1127c368 */
  push32((uint32_t)(0x1127c368u));
  /* 1125ab4a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ab4d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ab50 push edx */
  push32((uint32_t)(EDX));
  /* 1125ab51 call 0x11250f30 */
  push32(0x1125ab56u); f_11250f30();
  /* 1125ab56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ab59 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ab5c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 1125ab60 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1125ab67 jmp 0x1125ac01 */
  goto L_1125ac01;
L_1125ab6c:;
  /* 1125ab6c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 1125ab6f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ab75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ab77 je 0x1125abac */
  if (C.zf) goto L_1125abac;
  /* 1125ab79 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ab80 jne 0x1125abac */
  if (!C.zf) goto L_1125abac;
  /* 1125ab82 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ab86 jne 0x1125abac */
  if (!C.zf) goto L_1125abac;
  /* 1125ab88 push 0x1127c360 */
  push32((uint32_t)(0x1127c360u));
  /* 1125ab8d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ab90 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ab93 push edx */
  push32((uint32_t)(EDX));
  /* 1125ab94 call 0x11250f30 */
  push32(0x1125ab99u); f_11250f30();
  /* 1125ab99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ab9c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ab9f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 1125aba3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1125abaa jmp 0x1125ac01 */
  goto L_1125ac01;
L_1125abac:;
  /* 1125abac cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125abb3 jne 0x1125abdf */
  if (!C.zf) goto L_1125abdf;
  /* 1125abb5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125abb9 jne 0x1125abdf */
  if (!C.zf) goto L_1125abdf;
  /* 1125abbb push 0x1127c358 */
  push32((uint32_t)(0x1127c358u));
  /* 1125abc0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125abc3 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125abc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1125abc7 call 0x11250f30 */
  push32(0x1125abccu); f_11250f30();
  /* 1125abcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125abcf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125abd2 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 1125abd6 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1125abdd jmp 0x1125ac01 */
  goto L_1125ac01;
L_1125abdf:;
  /* 1125abdf push 0x1127c350 */
  push32((uint32_t)(0x1127c350u));
  /* 1125abe4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125abe7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125abea push eax */
  push32((uint32_t)(EAX));
  /* 1125abeb call 0x11250f30 */
  push32(0x1125abf0u); f_11250f30();
  /* 1125abf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125abf3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125abf6 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 1125abfa mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_1125ac01:;
  /* 1125ac01 jmp 0x1125af2f */
  goto L_1125af2f;
L_1125ac06:;
  /* 1125ac06 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125ac09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125ac0f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1125ac12 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 1125ac16 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125ac19 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ac1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ac23 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 1125ac27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125ac2a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1125ac2d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 1125ac31 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 1125ac34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125ac3a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 1125ac3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ac42 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ac45 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1125ac48 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ac4e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1125ac51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ac56 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ac59 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ac5b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1125ac5e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125ac64 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1125ac67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ac6c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125ac6f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ac71 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ac74 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125ac77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ac7a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1125ac7d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 1125ac81 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 1125ac85 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 1125ac89 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125ac8c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 1125ac8f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 1125ac92 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 1125ac95 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 1125ac9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1125ac9d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 1125aca1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125aca3 push edx */
  push32((uint32_t)(EDX));
  /* 1125aca4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1125aca7 push eax */
  push32((uint32_t)(EAX));
  /* 1125aca8 call 0x1125e560 */
  push32(0x1125acadu); f_1125e560();
  /* 1125acad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125acb0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 1125acb3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125acb9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125acbf jl 0x1125acdd */
  if ((C.sf!=C.of)) goto L_1125acdd;
  /* 1125acc1 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 1125acc5 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125acc9 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 1125accd lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 1125acd0 push eax */
  push32((uint32_t)(EAX));
  /* 1125acd1 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 1125acd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1125acd5 call 0x1125e120 */
  push32(0x1125acdau); f_1125e120();
  /* 1125acda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125acdd:;
  /* 1125acdd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ace0 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 1125ace4 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1125ace7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1125acea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125aced test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125acef je 0x1125ad31 */
  if (C.zf) goto L_1125ad31;
  /* 1125acf1 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 1125acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125acf8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125acfa mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 1125acfd cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ad01 jg 0x1125ad31 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125ad31;
  /* 1125ad03 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ad06 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1125ad0b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ad0e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 1125ad12 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ad15 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 1125ad19 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ad1c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 1125ad20 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ad23 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 1125ad27 mov eax, 1 */
  EAX = (0x1u);
  /* 1125ad2c jmp 0x1125af32 */
  goto L_1125af32;
L_1125ad31:;
  /* 1125ad31 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ad35 jle 0x1125ad3e */
  if ((C.zf||C.sf!=C.of)) goto L_1125ad3e;
  /* 1125ad37 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_1125ad3e:;
  /* 1125ad3e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 1125ad41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ad46 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ad4b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1125ad4e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 1125ad54 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 1125ad5b jmp 0x1125ad66 */
  goto L_1125ad66;
L_1125ad5d:;
  /* 1125ad5d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 1125ad60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ad63 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_1125ad66:;
  /* 1125ad66 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ad6a jge 0x1125ad7a */
  if ((C.sf==C.of)) goto L_1125ad7a;
  /* 1125ad6c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 1125ad6f push edx */
  push32((uint32_t)(EDX));
  /* 1125ad70 call 0x11259c90 */
  push32(0x1125ad75u); f_11259c90();
  /* 1125ad75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ad78 jmp 0x1125ad5d */
  goto L_1125ad5d;
L_1125ad7a:;
  /* 1125ad7a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ad7e jge 0x1125adac */
  if ((C.sf==C.of)) goto L_1125adac;
  /* 1125ad80 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125ad83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125ad85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ad8a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 1125ad8d jmp 0x1125ad98 */
  goto L_1125ad98;
L_1125ad8f:;
  /* 1125ad8f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 1125ad92 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ad95 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_1125ad98:;
  /* 1125ad98 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ad9c jle 0x1125adac */
  if ((C.zf||C.sf!=C.of)) goto L_1125adac;
  /* 1125ad9e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 1125ada1 push edx */
  push32((uint32_t)(EDX));
  /* 1125ada2 call 0x11259cf0 */
  push32(0x1125ada7u); f_11259cf0();
  /* 1125ada7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125adaa jmp 0x1125ad8f */
  goto L_1125ad8f;
L_1125adac:;
  /* 1125adac mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125adaf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125adb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125adb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1125adb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125adbb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1125adbe jmp 0x1125adc9 */
  goto L_1125adc9;
L_1125adc0:;
  /* 1125adc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125adc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125adc6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125adc9:;
  /* 1125adc9 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125adcd jle 0x1125ae35 */
  if ((C.zf||C.sf!=C.of)) goto L_1125ae35;
  /* 1125adcf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1125add2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1125add5 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1125add8 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1125addb mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125adde mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1125ade1 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1125ade4 push eax */
  push32((uint32_t)(EAX));
  /* 1125ade5 call 0x11259c90 */
  push32(0x1125adeau); f_11259c90();
  /* 1125adea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125aded lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 1125adf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1125adf1 call 0x11259c90 */
  push32(0x1125adf6u); f_11259c90();
  /* 1125adf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125adf9 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 1125adfc push edx */
  push32((uint32_t)(EDX));
  /* 1125adfd lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 1125ae00 push eax */
  push32((uint32_t)(EAX));
  /* 1125ae01 call 0x11259be0 */
  push32(0x1125ae06u); f_11259be0();
  /* 1125ae06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae09 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 1125ae0c push ecx */
  push32((uint32_t)(ECX));
  /* 1125ae0d call 0x11259c90 */
  push32(0x1125ae12u); f_11259c90();
  /* 1125ae12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae15 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 1125ae18 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125ae1e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1125ae26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ae2f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 1125ae33 jmp 0x1125adc0 */
  goto L_1125adc0;
L_1125ae35:;
  /* 1125ae35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae38 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ae3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125ae3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae41 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125ae43 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1125ae46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ae4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125ae4f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1125ae53 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ae56 jl 0x1125aeb3 */
  if ((C.sf!=C.of)) goto L_1125aeb3;
  /* 1125ae58 jmp 0x1125ae63 */
  goto L_1125ae63;
L_1125ae5a:;
  /* 1125ae5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ae60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125ae63:;
  /* 1125ae63 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ae66 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae69 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ae6c jb 0x1125ae81 */
  if (C.cf) goto L_1125ae81;
  /* 1125ae6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125ae74 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ae77 jne 0x1125ae81 */
  if (!C.zf) goto L_1125ae81;
  /* 1125ae79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae7c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1125ae7f jmp 0x1125ae5a */
  goto L_1125ae5a;
L_1125ae81:;
  /* 1125ae81 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ae84 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae87 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ae8a jae 0x1125aea5 */
  if (!C.cf) goto L_1125aea5;
  /* 1125ae8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ae8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ae92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ae95 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125ae98 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1125ae9b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 1125ae9f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aea2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_1125aea5:;
  /* 1125aea5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125aea8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125aeaa add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1125aeac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125aeaf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1125aeb1 jmp 0x1125af0c */
  goto L_1125af0c;
L_1125aeb3:;
  /* 1125aeb3 jmp 0x1125aebe */
  goto L_1125aebe;
L_1125aeb5:;
  /* 1125aeb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125aeb8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125aebb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125aebe:;
  /* 1125aebe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aec1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125aec4 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125aec7 jb 0x1125aed6 */
  if (C.cf) goto L_1125aed6;
  /* 1125aec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125aecc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125aecf cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125aed2 jne 0x1125aed6 */
  if (!C.zf) goto L_1125aed6;
  /* 1125aed4 jmp 0x1125aeb5 */
  goto L_1125aeb5;
L_1125aed6:;
  /* 1125aed6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aed9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125aedc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125aedf jae 0x1125af0c */
  if (!C.cf) goto L_1125af0c;
  /* 1125aee1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aee4 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1125aee9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aeec mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 1125aef0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aef3 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 1125aef7 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125aefa mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 1125aefe mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125af01 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 1125af05 mov eax, 1 */
  EAX = (0x1u);
  /* 1125af0a jmp 0x1125af32 */
  goto L_1125af32;
L_1125af0c:;
  /* 1125af0c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125af0f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125af12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125af15 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125af17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125af1a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125af1d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 1125af20 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125af23 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 1125af27 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1125af2a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_1125af2f:;
  /* 1125af2f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_1125af32:;
  /* 1125af32 mov esp, ebp */
  ESP = (EBP);
  /* 1125af34 pop ebp */
  EBP = (pop32());
  /* 1125af35 ret  */
  ESPCHK(0x1125aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af40 @ 0x1125af40 (255 bytes, 88 insns) */
void f_1125af40(void) {
  FTRACE(0x1125af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1125af41 mov ebp, esp */
  EBP = (ESP);
  /* 1125af43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_1125af46:;
  /* 1125af46 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125af4d jle 0x1125af66 */
  if ((C.zf||C.sf!=C.of)) goto L_1125af66;
  /* 1125af4f push 8 */
  push32((uint32_t)(0x8u));
  /* 1125af51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125af54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125af56 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125af58 push ecx */
  push32((uint32_t)(ECX));
  /* 1125af59 call 0x11251ec0 */
  push32(0x1125af5eu); f_11251ec0();
  /* 1125af5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125af61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1125af64 jmp 0x1125af7f */
  goto L_1125af7f;
L_1125af66:;
  /* 1125af66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125af69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125af6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125af6d mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1125af73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125af75 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1125af79 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1125af7c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125af7f:;
  /* 1125af7f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125af83 je 0x1125af90 */
  if (C.zf) goto L_1125af90;
  /* 1125af85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125af88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125af8b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125af8e jmp 0x1125af46 */
  goto L_1125af46;
L_1125af90:;
  /* 1125af90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125af93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125af95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125af97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125af9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125af9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125afa0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125afa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125afa6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125afa9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125afad je 0x1125afb5 */
  if (C.zf) goto L_1125afb5;
  /* 1125afaf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125afb3 jne 0x1125afc8 */
  if (!C.zf) goto L_1125afc8;
L_1125afb5:;
  /* 1125afb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125afb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125afba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125afbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125afbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125afc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125afc5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1125afc8:;
  /* 1125afc8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1125afcf:;
  /* 1125afcf cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125afd6 jle 0x1125afeb */
  if ((C.zf||C.sf!=C.of)) goto L_1125afeb;
  /* 1125afd8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1125afda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125afdd push edx */
  push32((uint32_t)(EDX));
  /* 1125afde call 0x11251ec0 */
  push32(0x1125afe3u); f_11251ec0();
  /* 1125afe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125afe6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125afe9 jmp 0x1125b000 */
  goto L_1125b000;
L_1125afeb:;
  /* 1125afeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125afee mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1125aff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125aff6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1125affa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125affd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1125b000:;
  /* 1125b000 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b004 je 0x1125b02b */
  if (C.zf) goto L_1125b02b;
  /* 1125b006 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b009 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b00c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b00f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 1125b013 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125b016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b019 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125b01b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125b01d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125b020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b023 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b026 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1125b029 jmp 0x1125afcf */
  goto L_1125afcf;
L_1125b02b:;
  /* 1125b02b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b02f jne 0x1125b038 */
  if (!C.zf) goto L_1125b038;
  /* 1125b031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b034 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125b036 jmp 0x1125b03b */
  goto L_1125b03b;
L_1125b038:;
  /* 1125b038 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1125b03b:;
  /* 1125b03b mov esp, ebp */
  ESP = (EBP);
  /* 1125b03d pop ebp */
  EBP = (pop32());
  /* 1125b03e ret  */
  ESPCHK(0x1125af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b040 @ 0x1125b040 (17 bytes, 8 insns) */
void f_1125b040(void) {
  FTRACE(0x1125b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b040 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b041 mov ebp, esp */
  EBP = (ESP);
  /* 1125b043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b046 push eax */
  push32((uint32_t)(EAX));
  /* 1125b047 call 0x1125af40 */
  push32(0x1125b04cu); f_1125af40();
  /* 1125b04c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b04f pop ebp */
  EBP = (pop32());
  /* 1125b050 ret  */
  ESPCHK(0x1125b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b060 @ 0x1125b060 (297 bytes, 106 insns) */
void f_1125b060(void) {
  FTRACE(0x1125b060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b060 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b061 mov ebp, esp */
  EBP = (ESP);
  /* 1125b063 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b066 push esi */
  push32((uint32_t)(ESI));
L_1125b067:;
  /* 1125b067 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b06e jle 0x1125b087 */
  if ((C.zf||C.sf!=C.of)) goto L_1125b087;
  /* 1125b070 push 8 */
  push32((uint32_t)(0x8u));
  /* 1125b072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b075 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125b077 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125b079 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b07a call 0x11251ec0 */
  push32(0x1125b07fu); f_11251ec0();
  /* 1125b07f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b082 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1125b085 jmp 0x1125b0a0 */
  goto L_1125b0a0;
L_1125b087:;
  /* 1125b087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b08a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b08c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125b08e mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1125b094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125b096 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1125b09a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1125b09d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1125b0a0:;
  /* 1125b0a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b0a4 je 0x1125b0b1 */
  if (C.zf) goto L_1125b0b1;
  /* 1125b0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b0a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b0ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125b0af jmp 0x1125b067 */
  goto L_1125b067;
L_1125b0b1:;
  /* 1125b0b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b0b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125b0b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125b0b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125b0bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b0be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b0c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125b0c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b0c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1125b0ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b0ce je 0x1125b0d6 */
  if (C.zf) goto L_1125b0d6;
  /* 1125b0d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b0d4 jne 0x1125b0e9 */
  if (!C.zf) goto L_1125b0e9;
L_1125b0d6:;
  /* 1125b0d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b0db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125b0dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b0e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b0e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b0e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1125b0e9:;
  /* 1125b0e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125b0f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1125b0f7:;
  /* 1125b0f7 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b0fe jle 0x1125b113 */
  if ((C.zf||C.sf!=C.of)) goto L_1125b113;
  /* 1125b100 push 4 */
  push32((uint32_t)(0x4u));
  /* 1125b102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b105 push edx */
  push32((uint32_t)(EDX));
  /* 1125b106 call 0x11251ec0 */
  push32(0x1125b10bu); f_11251ec0();
  /* 1125b10b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b10e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1125b111 jmp 0x1125b128 */
  goto L_1125b128;
L_1125b113:;
  /* 1125b113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b116 mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1125b11c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125b11e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1125b122 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125b125 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_1125b128:;
  /* 1125b128 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b12c je 0x1125b169 */
  if (C.zf) goto L_1125b169;
  /* 1125b12e push 0 */
  push32((uint32_t)(0x0u));
  /* 1125b130 push 0xa */
  push32((uint32_t)(0xau));
  /* 1125b132 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b135 push eax */
  push32((uint32_t)(EAX));
  /* 1125b136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125b139 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b13a call 0x1125e630 */
  push32(0x1125b13fu); f_1125e630();
  /* 1125b13f mov ecx, eax */
  ECX = (EAX);
  /* 1125b141 mov esi, edx */
  ESI = (EDX);
  /* 1125b143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b146 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b149 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125b14a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b14c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b14e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125b151 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 1125b154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b159 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125b15b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b15e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b164 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1125b167 jmp 0x1125b0f7 */
  goto L_1125b0f7;
L_1125b169:;
  /* 1125b169 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b16d jne 0x1125b17e */
  if (!C.zf) goto L_1125b17e;
  /* 1125b16f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125b172 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125b174 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b177 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b17a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125b17c jmp 0x1125b184 */
  goto L_1125b184;
L_1125b17e:;
  /* 1125b17e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125b181 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_1125b184:;
  /* 1125b184 pop esi */
  ESI = (pop32());
  /* 1125b185 mov esp, ebp */
  ESP = (EBP);
  /* 1125b187 pop ebp */
  EBP = (pop32());
  /* 1125b188 ret  */
  ESPCHK(0x1125b060u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b190 @ 0x1125b190 (46 bytes, 18 insns) */
void f_1125b190(void) {
  FTRACE(0x1125b190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b190 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b191 mov ebp, esp */
  EBP = (ESP);
  /* 1125b193 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b194 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1125b196 call 0x1124c720 */
  push32(0x1125b19bu); f_1124c720();
  /* 1125b19b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b19e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b1a1 push eax */
  push32((uint32_t)(EAX));
  /* 1125b1a2 call 0x1125b1c0 */
  push32(0x1125b1a7u); f_1125b1c0();
  /* 1125b1a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b1aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b1ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 1125b1af call 0x1124c7c0 */
  push32(0x1125b1b4u); f_1124c7c0();
  /* 1125b1b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b1b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b1ba mov esp, ebp */
  ESP = (EBP);
  /* 1125b1bc pop ebp */
  EBP = (pop32());
  /* 1125b1bd ret  */
  ESPCHK(0x1125b190u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x1125b1c0 (198 bytes, 69 insns) */
void f_1125b1c0(void) {
  FTRACE(0x1125b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1125b1c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b1c6 mov eax, dword ptr [0x112814a4] */
  EAX = (r32((uint32_t)(0x112814a4)));
  /* 1125b1cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125b1ce cmp dword ptr [0x11282f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b1d5 jne 0x1125b1de */
  if (!C.zf) goto L_1125b1de;
  /* 1125b1d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b1d9 jmp 0x1125b282 */
  goto L_1125b282;
L_1125b1de:;
  /* 1125b1de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b1e2 jne 0x1125b206 */
  if (!C.zf) goto L_1125b206;
  /* 1125b1e4 cmp dword ptr [0x112814ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b1eb je 0x1125b206 */
  if (C.zf) goto L_1125b206;
  /* 1125b1ed call 0x1125e6c0 */
  push32(0x1125b1f2u); f_1125e6c0();
  /* 1125b1f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b1f4 je 0x1125b1fd */
  if (C.zf) goto L_1125b1fd;
  /* 1125b1f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b1f8 jmp 0x1125b282 */
  goto L_1125b282;
L_1125b1fd:;
  /* 1125b1fd mov ecx, dword ptr [0x112814a4] */
  ECX = (r32((uint32_t)(0x112814a4)));
  /* 1125b203 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1125b206:;
  /* 1125b206 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b20a je 0x1125b280 */
  if (C.zf) goto L_1125b280;
  /* 1125b20c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b210 je 0x1125b280 */
  if (C.zf) goto L_1125b280;
  /* 1125b212 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b215 push edx */
  push32((uint32_t)(EDX));
  /* 1125b216 call 0x11250db0 */
  push32(0x1125b21bu); f_11250db0();
  /* 1125b21b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b21e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125b221:;
  /* 1125b221 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b224 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b227 je 0x1125b280 */
  if (C.zf) goto L_1125b280;
  /* 1125b229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b22c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125b22e push edx */
  push32((uint32_t)(EDX));
  /* 1125b22f call 0x11250db0 */
  push32(0x1125b234u); f_11250db0();
  /* 1125b234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b237 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b23a jbe 0x1125b275 */
  if ((C.cf||C.zf)) goto L_1125b275;
  /* 1125b23c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b23f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125b241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b244 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 1125b248 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b24b jne 0x1125b275 */
  if (!C.zf) goto L_1125b275;
  /* 1125b24d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b250 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b254 push edx */
  push32((uint32_t)(EDX));
  /* 1125b255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b258 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125b25a push ecx */
  push32((uint32_t)(ECX));
  /* 1125b25b call 0x1125e670 */
  push32(0x1125b260u); f_1125e670();
  /* 1125b260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b265 jne 0x1125b275 */
  if (!C.zf) goto L_1125b275;
  /* 1125b267 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b26a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125b26c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b26f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 1125b273 jmp 0x1125b282 */
  goto L_1125b282;
L_1125b275:;
  /* 1125b275 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b278 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b27b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125b27e jmp 0x1125b221 */
  goto L_1125b221;
L_1125b280:;
  /* 1125b280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125b282:;
  /* 1125b282 mov esp, ebp */
  ESP = (EBP);
  /* 1125b284 pop ebp */
  EBP = (pop32());
  /* 1125b285 ret  */
  ESPCHK(0x1125b1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b290 @ 0x1125b290 (130 bytes, 43 insns) */
void f_1125b290(void) {
  FTRACE(0x1125b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b291 mov ebp, esp */
  EBP = (ESP);
  /* 1125b293 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b297 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b29d jae 0x1125b2c1 */
  if (!C.cf) goto L_1125b2c1;
  /* 1125b29f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b2a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b2a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b2ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b2ae mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b2b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1125b2ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125b2bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125b2bf jne 0x1125b2dc */
  if (!C.zf) goto L_1125b2dc;
L_1125b2c1:;
  /* 1125b2c1 call 0x11257eb0 */
  push32(0x1125b2c6u); f_11257eb0();
  /* 1125b2c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125b2cc call 0x11257ec0 */
  push32(0x1125b2d1u); f_11257ec0();
  /* 1125b2d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125b2d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b2da jmp 0x1125b30e */
  goto L_1125b30e;
L_1125b2dc:;
  /* 1125b2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b2df push edx */
  push32((uint32_t)(EDX));
  /* 1125b2e0 call 0x1125ec80 */
  push32(0x1125b2e5u); f_1125ec80();
  /* 1125b2e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b2e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125b2eb push eax */
  push32((uint32_t)(EAX));
  /* 1125b2ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b2ef push ecx */
  push32((uint32_t)(ECX));
  /* 1125b2f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1125b2f4 call 0x1125b320 */
  push32(0x1125b2f9u); f_1125b320();
  /* 1125b2f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b2fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b302 push eax */
  push32((uint32_t)(EAX));
  /* 1125b303 call 0x1125ed10 */
  push32(0x1125b308u); f_1125ed10();
  /* 1125b308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1125b30e:;
  /* 1125b30e mov esp, ebp */
  ESP = (EBP);
  /* 1125b310 pop ebp */
  EBP = (pop32());
  /* 1125b311 ret  */
  ESPCHK(0x1125b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b320 @ 0x1125b320 (178 bytes, 56 insns) */
void f_1125b320(void) {
  FTRACE(0x1125b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b321 mov ebp, esp */
  EBP = (ESP);
  /* 1125b323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b329 push eax */
  push32((uint32_t)(EAX));
  /* 1125b32a call 0x1125eb00 */
  push32(0x1125b32fu); f_1125eb00();
  /* 1125b32f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b332 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125b335 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b339 jne 0x1125b34e */
  if (!C.zf) goto L_1125b34e;
  /* 1125b33b call 0x11257eb0 */
  push32(0x1125b340u); f_11257eb0();
  /* 1125b340 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125b346 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b349 jmp 0x1125b3ce */
  goto L_1125b3ce;
L_1125b34e:;
  /* 1125b34e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125b351 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b352 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125b354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b357 push edx */
  push32((uint32_t)(EDX));
  /* 1125b358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125b35b push eax */
  push32((uint32_t)(EAX));
  /* 1125b35c call dword ptr [0x1128336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128336c))), 0x1125b362u);
  /* 1125b362 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125b365 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b369 jne 0x1125b376 */
  if (!C.zf) goto L_1125b376;
  /* 1125b36b call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x1125b371u);
  /* 1125b371 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b374 jmp 0x1125b37d */
  goto L_1125b37d;
L_1125b376:;
  /* 1125b376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1125b37d:;
  /* 1125b37d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b381 je 0x1125b394 */
  if (C.zf) goto L_1125b394;
  /* 1125b383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b386 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b387 call 0x11257e10 */
  push32(0x1125b38cu); f_11257e10();
  /* 1125b38c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b38f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b392 jmp 0x1125b3ce */
  goto L_1125b3ce;
L_1125b394:;
  /* 1125b394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b397 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1125b39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b39d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b3a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b3a3 mov ecx, dword ptr [edx*4 + 0x11282dc0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11282dc0)));
  /* 1125b3aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1125b3ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1125b3b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b3b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b3b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b3ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125b3bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b3c0 mov eax, dword ptr [eax*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125b3c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1125b3cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1125b3ce:;
  /* 1125b3ce mov esp, ebp */
  ESP = (EBP);
  /* 1125b3d0 pop ebp */
  EBP = (pop32());
  /* 1125b3d1 ret  */
  ESPCHK(0x1125b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b3e0 @ 0x1125b3e0 (130 bytes, 43 insns) */
void f_1125b3e0(void) {
  FTRACE(0x1125b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1125b3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b3e7 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b3ed jae 0x1125b411 */
  if (!C.cf) goto L_1125b411;
  /* 1125b3ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b3f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b3f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b3f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b3fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b3fe mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b405 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1125b40a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125b40d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125b40f jne 0x1125b42c */
  if (!C.zf) goto L_1125b42c;
L_1125b411:;
  /* 1125b411 call 0x11257eb0 */
  push32(0x1125b416u); f_11257eb0();
  /* 1125b416 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125b41c call 0x11257ec0 */
  push32(0x1125b421u); f_11257ec0();
  /* 1125b421 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125b427 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b42a jmp 0x1125b45e */
  goto L_1125b45e;
L_1125b42c:;
  /* 1125b42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b42f push edx */
  push32((uint32_t)(EDX));
  /* 1125b430 call 0x1125ec80 */
  push32(0x1125b435u); f_1125ec80();
  /* 1125b435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b438 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125b43b push eax */
  push32((uint32_t)(EAX));
  /* 1125b43c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b43f push ecx */
  push32((uint32_t)(ECX));
  /* 1125b440 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b443 push edx */
  push32((uint32_t)(EDX));
  /* 1125b444 call 0x1125b470 */
  push32(0x1125b449u); f_1125b470();
  /* 1125b449 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b44c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b44f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b452 push eax */
  push32((uint32_t)(EAX));
  /* 1125b453 call 0x1125ed10 */
  push32(0x1125b458u); f_1125ed10();
  /* 1125b458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b45b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1125b45e:;
  /* 1125b45e mov esp, ebp */
  ESP = (EBP);
  /* 1125b460 pop ebp */
  EBP = (pop32());
  /* 1125b461 ret  */
  ESPCHK(0x1125b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b470 @ 0x1125b470 (627 bytes, 182 insns) */
void f_1125b470(void) {
  FTRACE(0x1125b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b470 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b471 mov ebp, esp */
  EBP = (ESP);
  /* 1125b473 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b479 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1125b480 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125b483 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1125b489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b48d jne 0x1125b496 */
  if (!C.zf) goto L_1125b496;
  /* 1125b48f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b491 jmp 0x1125b6df */
  goto L_1125b6df;
L_1125b496:;
  /* 1125b496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b499 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b49f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b4a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b4a5 mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b4ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1125b4b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1125b4b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125b4b6 je 0x1125b4c8 */
  if (C.zf) goto L_1125b4c8;
  /* 1125b4b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125b4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1125b4bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b4bf push edx */
  push32((uint32_t)(EDX));
  /* 1125b4c0 call 0x1125b320 */
  push32(0x1125b4c5u); f_1125b320();
  /* 1125b4c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125b4c8:;
  /* 1125b4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b4cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b4ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b4d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125b4d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b4d7 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125b4de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1125b4e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1125b4e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b4ea je 0x1125b5fc */
  if (C.zf) goto L_1125b5fc;
  /* 1125b4f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b4f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125b4f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1125b4fd:;
  /* 1125b4fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b500 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b503 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b506 jae 0x1125b5fa */
  if (!C.cf) goto L_1125b5fa;
  /* 1125b50c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1125b512 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1125b515:;
  /* 1125b515 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b518 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1125b51e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b520 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b526 jge 0x1125b587 */
  if ((C.sf==C.of)) goto L_1125b587;
  /* 1125b528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b52b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b52e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b531 jae 0x1125b587 */
  if (!C.cf) goto L_1125b587;
  /* 1125b533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125b538 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1125b53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b541 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125b547 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1125b54e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b551 jne 0x1125b571 */
  if (!C.zf) goto L_1125b571;
  /* 1125b553 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1125b559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b55c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1125b562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b565 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1125b568 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b56b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b56e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1125b571:;
  /* 1125b571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b574 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1125b57a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1125b57c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b57f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b582 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125b585 jmp 0x1125b515 */
  goto L_1125b515;
L_1125b587:;
  /* 1125b587 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125b589 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1125b58f push edx */
  push32((uint32_t)(EDX));
  /* 1125b590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b593 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1125b599 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b59b push eax */
  push32((uint32_t)(EAX));
  /* 1125b59c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1125b5a2 push edx */
  push32((uint32_t)(EDX));
  /* 1125b5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125b5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b5b2 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125b5b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1125b5bc push eax */
  push32((uint32_t)(EAX));
  /* 1125b5bd call dword ptr [0x11283338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283338))), 0x1125b5c3u);
  /* 1125b5c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b5c5 je 0x1125b5ea */
  if (C.zf) goto L_1125b5ea;
  /* 1125b5c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125b5ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b5d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1125b5d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125b5d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1125b5dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b5de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b5e4 jge 0x1125b5e8 */
  if ((C.sf==C.of)) goto L_1125b5e8;
  /* 1125b5e6 jmp 0x1125b5fa */
  goto L_1125b5fa;
L_1125b5e8:;
  /* 1125b5e8 jmp 0x1125b5f5 */
  goto L_1125b5f5;
L_1125b5ea:;
  /* 1125b5ea call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x1125b5f0u);
  /* 1125b5f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125b5f3 jmp 0x1125b5fa */
  goto L_1125b5fa;
L_1125b5f5:;
  /* 1125b5f5 jmp 0x1125b4fd */
  goto L_1125b4fd;
L_1125b5fa:;
  /* 1125b5fa jmp 0x1125b64c */
  goto L_1125b64c;
L_1125b5fc:;
  /* 1125b5fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1125b5fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1125b604 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b605 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125b608 push edx */
  push32((uint32_t)(EDX));
  /* 1125b609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b60c push eax */
  push32((uint32_t)(EAX));
  /* 1125b60d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b610 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b616 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b619 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b61c mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b623 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1125b626 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b627 call dword ptr [0x11283338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283338))), 0x1125b62du);
  /* 1125b62d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b62f je 0x1125b643 */
  if (C.zf) goto L_1125b643;
  /* 1125b631 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125b638 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1125b63e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1125b641 jmp 0x1125b64c */
  goto L_1125b64c;
L_1125b643:;
  /* 1125b643 call dword ptr [0x112833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833f0))), 0x1125b649u);
  /* 1125b649 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1125b64c:;
  /* 1125b64c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b650 jne 0x1125b6d6 */
  if (!C.zf) goto L_1125b6d6;
  /* 1125b656 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b65a je 0x1125b68a */
  if (C.zf) goto L_1125b68a;
  /* 1125b65c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b660 jne 0x1125b679 */
  if (!C.zf) goto L_1125b679;
  /* 1125b662 call 0x11257eb0 */
  push32(0x1125b667u); f_11257eb0();
  /* 1125b667 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1125b66d call 0x11257ec0 */
  push32(0x1125b672u); f_11257ec0();
  /* 1125b672 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125b675 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1125b677 jmp 0x1125b685 */
  goto L_1125b685;
L_1125b679:;
  /* 1125b679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125b67c push edx */
  push32((uint32_t)(EDX));
  /* 1125b67d call 0x11257e10 */
  push32(0x1125b682u); f_11257e10();
  /* 1125b682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125b685:;
  /* 1125b685 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b688 jmp 0x1125b6df */
  goto L_1125b6df;
L_1125b68a:;
  /* 1125b68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b68d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b693 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1125b696 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b699 mov edx, dword ptr [eax*4 + 0x11282dc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11282dc0)));
  /* 1125b6a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1125b6a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1125b6a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b6aa je 0x1125b6bb */
  if (C.zf) goto L_1125b6bb;
  /* 1125b6ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b6af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125b6b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b6b5 jne 0x1125b6bb */
  if (!C.zf) goto L_1125b6bb;
  /* 1125b6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b6b9 jmp 0x1125b6df */
  goto L_1125b6df;
L_1125b6bb:;
  /* 1125b6bb call 0x11257eb0 */
  push32(0x1125b6c0u); f_11257eb0();
  /* 1125b6c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1125b6c6 call 0x11257ec0 */
  push32(0x1125b6cbu); f_11257ec0();
  /* 1125b6cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1125b6d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125b6d4 jmp 0x1125b6df */
  goto L_1125b6df;
L_1125b6d6:;
  /* 1125b6d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1125b6d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1125b6df:;
  /* 1125b6df mov esp, ebp */
  ESP = (EBP);
  /* 1125b6e1 pop ebp */
  EBP = (pop32());
  /* 1125b6e2 ret  */
  ESPCHK(0x1125b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b6f0 @ 0x1125b6f0 (199 bytes, 68 insns) */
void f_1125b6f0(void) {
  FTRACE(0x1125b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1125b6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b6f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1125b6f5 push esi */
  push32((uint32_t)(ESI));
  /* 1125b6f6 push edi */
  push32((uint32_t)(EDI));
L_1125b6f7:;
  /* 1125b6f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b6fb jne 0x1125b71b */
  if (!C.zf) goto L_1125b71b;
  /* 1125b6fd push 0x1127c170 */
  push32((uint32_t)(0x1127c170u));
  /* 1125b702 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125b704 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1125b706 push 0x1127c370 */
  push32((uint32_t)(0x1127c370u));
  /* 1125b70b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125b70d call 0x1124b3e0 */
  push32(0x1125b712u); f_1124b3e0();
  /* 1125b712 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b715 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b718 jne 0x1125b71b */
  if (!C.zf) goto L_1125b71b;
  /* 1125b71a int3  */
  x86_unimpl("int3 @ 0x1125b71a");
L_1125b71b:;
  /* 1125b71b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b71d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b71f jne 0x1125b6f7 */
  if (!C.zf) goto L_1125b6f7;
  /* 1125b721 mov ecx, dword ptr [0x112816fc] */
  ECX = (r32((uint32_t)(0x112816fc)));
  /* 1125b727 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b72a mov dword ptr [0x112816fc], ecx */
  w32((uint32_t)(0x112816fc), (ECX));
  /* 1125b730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b733 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125b736 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1125b738 push 0x1127c370 */
  push32((uint32_t)(0x1127c370u));
  /* 1125b73d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125b73f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1125b744 call 0x1124c820 */
  push32(0x1125b749u); f_1124c820();
  /* 1125b749 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b74c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b74f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1125b752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b755 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b759 je 0x1125b776 */
  if (C.zf) goto L_1125b776;
  /* 1125b75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b75e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1125b761 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1125b764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b767 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1125b76a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b76d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1125b774 jmp 0x1125b79b */
  goto L_1125b79b;
L_1125b776:;
  /* 1125b776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b779 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125b77c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125b77f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b782 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1125b785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b788 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b78b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b78e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1125b791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b794 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1125b79b:;
  /* 1125b79b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b7a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1125b7a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125b7a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b7a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1125b7b0 pop edi */
  EDI = (pop32());
  /* 1125b7b1 pop esi */
  ESI = (pop32());
  /* 1125b7b2 pop ebx */
  EBX = (pop32());
  /* 1125b7b3 mov esp, ebp */
  ESP = (EBP);
  /* 1125b7b5 pop ebp */
  EBP = (pop32());
  /* 1125b7b6 ret  */
  ESPCHK(0x1125b6f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1125b7c0 (50 bytes, 17 insns) */
void f_1125b7c0(void) {
  FTRACE(0x1125b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1125b7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b7c6 cmp eax, dword ptr [0x11282efc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11282efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b7cc jb 0x1125b7d2 */
  if (C.cf) goto L_1125b7d2;
  /* 1125b7ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125b7d0 jmp 0x1125b7f0 */
  goto L_1125b7f0;
L_1125b7d2:;
  /* 1125b7d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b7d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b7db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b7de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b7e1 mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b7e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1125b7ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1125b7f0:;
  /* 1125b7f0 pop ebp */
  EBP = (pop32());
  /* 1125b7f1 ret  */
  ESPCHK(0x1125b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b800 @ 0x1125b800 (300 bytes, 80 insns) */
void f_1125b800(void) {
  FTRACE(0x1125b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b800 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b801 mov ebp, esp */
  EBP = (ESP);
  /* 1125b803 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b804 cmp dword ptr [0x11282ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b80b jne 0x1125b819 */
  if (!C.zf) goto L_1125b819;
  /* 1125b80d mov dword ptr [0x11282ae0], 0x200 */
  w32((uint32_t)(0x11282ae0), (0x200u));
  /* 1125b817 jmp 0x1125b82c */
  goto L_1125b82c;
L_1125b819:;
  /* 1125b819 cmp dword ptr [0x11282ae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b820 jge 0x1125b82c */
  if ((C.sf==C.of)) goto L_1125b82c;
  /* 1125b822 mov dword ptr [0x11282ae0], 0x14 */
  w32((uint32_t)(0x11282ae0), (0x14u));
L_1125b82c:;
  /* 1125b82c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1125b831 push 0x1127c37c */
  push32((uint32_t)(0x1127c37cu));
  /* 1125b836 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125b838 push 4 */
  push32((uint32_t)(0x4u));
  /* 1125b83a mov eax, dword ptr [0x11282ae0] */
  EAX = (r32((uint32_t)(0x11282ae0)));
  /* 1125b83f push eax */
  push32((uint32_t)(EAX));
  /* 1125b840 call 0x1124cc30 */
  push32(0x1125b845u); f_1124cc30();
  /* 1125b845 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b848 mov dword ptr [0x11281794], eax */
  w32((uint32_t)(0x11281794), (EAX));
  /* 1125b84d cmp dword ptr [0x11281794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b854 jne 0x1125b895 */
  if (!C.zf) goto L_1125b895;
  /* 1125b856 mov dword ptr [0x11282ae0], 0x14 */
  w32((uint32_t)(0x11282ae0), (0x14u));
  /* 1125b860 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1125b865 push 0x1127c37c */
  push32((uint32_t)(0x1127c37cu));
  /* 1125b86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1125b86c push 4 */
  push32((uint32_t)(0x4u));
  /* 1125b86e mov ecx, dword ptr [0x11282ae0] */
  ECX = (r32((uint32_t)(0x11282ae0)));
  /* 1125b874 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b875 call 0x1124cc30 */
  push32(0x1125b87au); f_1124cc30();
  /* 1125b87a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b87d mov dword ptr [0x11281794], eax */
  w32((uint32_t)(0x11281794), (EAX));
  /* 1125b882 cmp dword ptr [0x11281794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b889 jne 0x1125b895 */
  if (!C.zf) goto L_1125b895;
  /* 1125b88b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1125b88d call 0x1124b290 */
  push32(0x1125b892u); f_1124b290();
  /* 1125b892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125b895:;
  /* 1125b895 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125b89c jmp 0x1125b8a7 */
  goto L_1125b8a7;
L_1125b89e:;
  /* 1125b89e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b8a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1125b8a7:;
  /* 1125b8a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b8ab jge 0x1125b8c6 */
  if ((C.sf==C.of)) goto L_1125b8c6;
  /* 1125b8ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b8b3 add eax, 0x1127f898 */
  { uint32_t _a=(EAX),_b=(0x1127f898u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b8b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8bb mov edx, dword ptr [0x11281794] */
  EDX = (r32((uint32_t)(0x11281794)));
  /* 1125b8c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1125b8c4 jmp 0x1125b89e */
  goto L_1125b89e;
L_1125b8c6:;
  /* 1125b8c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125b8cd jmp 0x1125b8d8 */
  goto L_1125b8d8;
L_1125b8cf:;
  /* 1125b8cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125b8d8:;
  /* 1125b8d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b8dc jge 0x1125b928 */
  if ((C.sf==C.of)) goto L_1125b928;
  /* 1125b8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b8e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b8ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b8ed mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b8f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b8f8 je 0x1125b916 */
  if (C.zf) goto L_1125b916;
  /* 1125b8fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b8fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b900 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b903 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125b906 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1125b909 mov eax, dword ptr [ecx*4 + 0x11282dc0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11282dc0)));
  /* 1125b910 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b914 jne 0x1125b926 */
  if (!C.zf) goto L_1125b926;
L_1125b916:;
  /* 1125b916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125b919 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1125b91c mov dword ptr [ecx + 0x1127f8a8], 0xffffffff */
  w32((uint32_t)(ECX + 0x1127f8a8), (0xffffffffu));
L_1125b926:;
  /* 1125b926 jmp 0x1125b8cf */
  goto L_1125b8cf;
L_1125b928:;
  /* 1125b928 mov esp, ebp */
  ESP = (EBP);
  /* 1125b92a pop ebp */
  EBP = (pop32());
  /* 1125b92b ret  */
  ESPCHK(0x1125b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b930 @ 0x1125b930 (26 bytes, 9 insns) */
void f_1125b930(void) {
  FTRACE(0x1125b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b931 mov ebp, esp */
  EBP = (ESP);
  /* 1125b933 call 0x1125ef80 */
  push32(0x1125b938u); f_1125ef80();
  /* 1125b938 movsx eax, byte ptr [0x112814bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x112814bc))));
  /* 1125b93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125b941 je 0x1125b948 */
  if (C.zf) goto L_1125b948;
  /* 1125b943 call 0x1125ed40 */
  push32(0x1125b948u); f_1125ed40();
L_1125b948:;
  /* 1125b948 pop ebp */
  EBP = (pop32());
  /* 1125b949 ret  */
  ESPCHK(0x1125b930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b950 @ 0x1125b950 (61 bytes, 20 insns) */
void f_1125b950(void) {
  FTRACE(0x1125b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b950 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b951 mov ebp, esp */
  EBP = (ESP);
  /* 1125b953 cmp dword ptr [ebp + 8], 0x1127f898 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1127f898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b95a jb 0x1125b97e */
  if (C.cf) goto L_1125b97e;
  /* 1125b95c cmp dword ptr [ebp + 8], 0x1127faf8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1127faf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b963 ja 0x1125b97e */
  if ((!C.cf&&!C.zf)) goto L_1125b97e;
  /* 1125b965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b968 sub eax, 0x1127f898 */
  { uint32_t _a=(EAX),_b=(0x1127f898u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b970 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b973 push eax */
  push32((uint32_t)(EAX));
  /* 1125b974 call 0x1124c720 */
  push32(0x1125b979u); f_1124c720();
  /* 1125b979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b97c jmp 0x1125b98b */
  goto L_1125b98b;
L_1125b97e:;
  /* 1125b97e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b981 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b984 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b985 call dword ptr [0x11283450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283450))), 0x1125b98bu);
L_1125b98b:;
  /* 1125b98b pop ebp */
  EBP = (pop32());
  /* 1125b98c ret  */
  ESPCHK(0x1125b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b990 @ 0x1125b990 (41 bytes, 16 insns) */
void f_1125b990(void) {
  FTRACE(0x1125b990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b990 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b991 mov ebp, esp */
  EBP = (ESP);
  /* 1125b993 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b997 jge 0x1125b9aa */
  if ((C.sf==C.of)) goto L_1125b9aa;
  /* 1125b999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b99c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b99f push eax */
  push32((uint32_t)(EAX));
  /* 1125b9a0 call 0x1124c720 */
  push32(0x1125b9a5u); f_1124c720();
  /* 1125b9a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b9a8 jmp 0x1125b9b7 */
  goto L_1125b9b7;
L_1125b9aa:;
  /* 1125b9aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125b9ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b9b1 call dword ptr [0x11283450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283450))), 0x1125b9b7u);
L_1125b9b7:;
  /* 1125b9b7 pop ebp */
  EBP = (pop32());
  /* 1125b9b8 ret  */
  ESPCHK(0x1125b990u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b9c0 @ 0x1125b9c0 (61 bytes, 20 insns) */
void f_1125b9c0(void) {
  FTRACE(0x1125b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1125b9c3 cmp dword ptr [ebp + 8], 0x1127f898 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1127f898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b9ca jb 0x1125b9ee */
  if (C.cf) goto L_1125b9ee;
  /* 1125b9cc cmp dword ptr [ebp + 8], 0x1127faf8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1127faf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125b9d3 ja 0x1125b9ee */
  if ((!C.cf&&!C.zf)) goto L_1125b9ee;
  /* 1125b9d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b9d8 sub eax, 0x1127f898 */
  { uint32_t _a=(EAX),_b=(0x1127f898u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125b9dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1125b9e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1125b9e4 call 0x1124c7c0 */
  push32(0x1125b9e9u); f_1124c7c0();
  /* 1125b9e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b9ec jmp 0x1125b9fb */
  goto L_1125b9fb;
L_1125b9ee:;
  /* 1125b9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125b9f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125b9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1125b9f5 call dword ptr [0x11283420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283420))), 0x1125b9fbu);
L_1125b9fb:;
  /* 1125b9fb pop ebp */
  EBP = (pop32());
  /* 1125b9fc ret  */
  ESPCHK(0x1125b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba00 @ 0x1125ba00 (41 bytes, 16 insns) */
void f_1125ba00(void) {
  FTRACE(0x1125ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ba01 mov ebp, esp */
  EBP = (ESP);
  /* 1125ba03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ba07 jge 0x1125ba1a */
  if ((C.sf==C.of)) goto L_1125ba1a;
  /* 1125ba09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ba0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ba0f push eax */
  push32((uint32_t)(EAX));
  /* 1125ba10 call 0x1124c7c0 */
  push32(0x1125ba15u); f_1124c7c0();
  /* 1125ba15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ba18 jmp 0x1125ba27 */
  goto L_1125ba27;
L_1125ba1a:;
  /* 1125ba1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125ba1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ba20 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ba21 call dword ptr [0x11283420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283420))), 0x1125ba27u);
L_1125ba27:;
  /* 1125ba27 pop ebp */
  EBP = (pop32());
  /* 1125ba28 ret  */
  ESPCHK(0x1125ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba30 @ 0x1125ba30 (119 bytes, 34 insns) */
void f_1125ba30(void) {
  FTRACE(0x1125ba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ba30 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ba31 mov ebp, esp */
  EBP = (ESP);
  /* 1125ba33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ba36 push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 1125ba3b call dword ptr [0x11283460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283460))), 0x1125ba41u);
  /* 1125ba41 cmp dword ptr [0x11282ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ba48 je 0x1125ba68 */
  if (C.zf) goto L_1125ba68;
  /* 1125ba4a push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 1125ba4f call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1125ba55u);
  /* 1125ba55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1125ba57 call 0x1124c720 */
  push32(0x1125ba5cu); f_1124c720();
  /* 1125ba5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ba5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1125ba66 jmp 0x1125ba6f */
  goto L_1125ba6f;
L_1125ba68:;
  /* 1125ba68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1125ba6f:;
  /* 1125ba6f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1125ba73 push eax */
  push32((uint32_t)(EAX));
  /* 1125ba74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ba77 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ba78 call 0x1125bab0 */
  push32(0x1125ba7du); f_1125bab0();
  /* 1125ba7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ba80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125ba83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ba87 je 0x1125ba95 */
  if (C.zf) goto L_1125ba95;
  /* 1125ba89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1125ba8b call 0x1124c7c0 */
  push32(0x1125ba90u); f_1124c7c0();
  /* 1125ba90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ba93 jmp 0x1125baa0 */
  goto L_1125baa0;
L_1125ba95:;
  /* 1125ba95 push 0x11282af4 */
  push32((uint32_t)(0x11282af4u));
  /* 1125ba9a call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1125baa0u);
L_1125baa0:;
  /* 1125baa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125baa3 mov esp, ebp */
  ESP = (EBP);
  /* 1125baa5 pop ebp */
  EBP = (pop32());
  /* 1125baa6 ret  */
  ESPCHK(0x1125ba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bab0 @ 0x1125bab0 (160 bytes, 50 insns) */
void f_1125bab0(void) {
  FTRACE(0x1125bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1125bab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bab6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125baba jne 0x1125bac3 */
  if (!C.zf) goto L_1125bac3;
  /* 1125babc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125babe jmp 0x1125bb4c */
  goto L_1125bb4c;
L_1125bac3:;
  /* 1125bac3 cmp dword ptr [0x112816e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125baca jne 0x1125bafa */
  if (!C.zf) goto L_1125bafa;
  /* 1125bacc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bacf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bad4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bad9 jle 0x1125baeb */
  if ((C.zf||C.sf!=C.of)) goto L_1125baeb;
  /* 1125badb call 0x11257eb0 */
  push32(0x1125bae0u); f_11257eb0();
  /* 1125bae0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1125bae6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bae9 jmp 0x1125bb4c */
  goto L_1125bb4c;
L_1125baeb:;
  /* 1125baeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125baee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1125baf1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1125baf3 mov eax, 1 */
  EAX = (0x1u);
  /* 1125baf8 jmp 0x1125bb4c */
  goto L_1125bb4c;
L_1125bafa:;
  /* 1125bafa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125bb01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1125bb04 push eax */
  push32((uint32_t)(EAX));
  /* 1125bb05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125bb07 mov ecx, dword ptr [0x1127efe0] */
  ECX = (r32((uint32_t)(0x1127efe0)));
  /* 1125bb0d push ecx */
  push32((uint32_t)(ECX));
  /* 1125bb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bb11 push edx */
  push32((uint32_t)(EDX));
  /* 1125bb12 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bb14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1125bb17 push eax */
  push32((uint32_t)(EAX));
  /* 1125bb18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1125bb1d mov ecx, dword ptr [0x112816f0] */
  ECX = (r32((uint32_t)(0x112816f0)));
  /* 1125bb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1125bb24 call dword ptr [0x112833cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833cc))), 0x1125bb2au);
  /* 1125bb2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125bb2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bb31 je 0x1125bb39 */
  if (C.zf) goto L_1125bb39;
  /* 1125bb33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bb37 je 0x1125bb49 */
  if (C.zf) goto L_1125bb49;
L_1125bb39:;
  /* 1125bb39 call 0x11257eb0 */
  push32(0x1125bb3eu); f_11257eb0();
  /* 1125bb3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1125bb44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bb47 jmp 0x1125bb4c */
  goto L_1125bb4c;
L_1125bb49:;
  /* 1125bb49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1125bb4c:;
  /* 1125bb4c mov esp, ebp */
  ESP = (EBP);
  /* 1125bb4e pop ebp */
  EBP = (pop32());
  /* 1125bb4f ret  */
  ESPCHK(0x1125bab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb50 @ 0x1125bb50 (62 bytes, 21 insns) */
void f_1125bb50(void) {
  FTRACE(0x1125bb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bb51 mov ebp, esp */
  EBP = (ESP);
  /* 1125bb53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bb56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bb59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1125bb5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bb5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125bb62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125bb65 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bb6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125bb6e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bb71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bb76 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bb7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bb7e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1125bb81 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1125bb83 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 1125bb87 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 1125bb8a mov esp, ebp */
  ESP = (EBP);
  /* 1125bb8c pop ebp */
  EBP = (pop32());
  /* 1125bb8d ret  */
  ESPCHK(0x1125bb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb90 @ 0x1125bb90 (45 bytes, 15 insns) */
void f_1125bb90(void) {
  FTRACE(0x1125bb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bb91 mov ebp, esp */
  EBP = (ESP);
  /* 1125bb93 push ecx */
  push32((uint32_t)(ECX));
  /* 1125bb94 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bb97 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bb9c and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 1125bba1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1125bba4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1125bba8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1125bbac sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1125bbb1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1125bbb5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 1125bbb9 mov esp, ebp */
  ESP = (EBP);
  /* 1125bbbb pop ebp */
  EBP = (pop32());
  /* 1125bbbc ret  */
  ESPCHK(0x1125bb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bbc0 @ 0x1125bbc0 (51 bytes, 18 insns) */
void f_1125bbc0(void) {
  FTRACE(0x1125bbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1125bbc3 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bbc6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bbcb and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 1125bbd0 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1125bbd3 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1125bbd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125bbd9 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 1125bbe0 push eax */
  push32((uint32_t)(EAX));
  /* 1125bbe1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 1125bbe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bbe8 push edx */
  push32((uint32_t)(EDX));
  /* 1125bbe9 call 0x1125bb50 */
  push32(0x1125bbeeu); f_1125bb50();
  /* 1125bbee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bbf1 pop ebp */
  EBP = (pop32());
  /* 1125bbf2 ret  */
  ESPCHK(0x1125bbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bc00 @ 0x1125bc00 (52 bytes, 18 insns) */
void f_1125bc00(void) {
  FTRACE(0x1125bc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bc01 mov ebp, esp */
  EBP = (ESP);
  /* 1125bc03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bc06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bc09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125bc0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bc0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125bc12 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bc15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125bc1b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 1125bc21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125bc24 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1125bc27 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1125bc29 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 1125bc2d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 1125bc30 mov esp, ebp */
  ESP = (EBP);
  /* 1125bc32 pop ebp */
  EBP = (pop32());
  /* 1125bc33 ret  */
  ESPCHK(0x1125bc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bc40 @ 0x1125bc40 (124 bytes, 37 insns) */
void f_1125bc40(void) {
  FTRACE(0x1125bc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bc41 mov ebp, esp */
  EBP = (ESP);
  /* 1125bc43 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bc4a jne 0x1125bc59 */
  if (!C.zf) goto L_1125bc59;
  /* 1125bc4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bc50 jne 0x1125bc59 */
  if (!C.zf) goto L_1125bc59;
  /* 1125bc52 mov eax, 1 */
  EAX = (0x1u);
  /* 1125bc57 jmp 0x1125bcba */
  goto L_1125bcba;
L_1125bc59:;
  /* 1125bc59 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bc60 jne 0x1125bc6f */
  if (!C.zf) goto L_1125bc6f;
  /* 1125bc62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bc66 jne 0x1125bc6f */
  if (!C.zf) goto L_1125bc6f;
  /* 1125bc68 mov eax, 2 */
  EAX = (0x2u);
  /* 1125bc6d jmp 0x1125bcba */
  goto L_1125bcba;
L_1125bc6f:;
  /* 1125bc6f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bc72 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bc77 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 1125bc7c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bc81 jne 0x1125bc8a */
  if (!C.zf) goto L_1125bc8a;
  /* 1125bc83 mov eax, 3 */
  EAX = (0x3u);
  /* 1125bc88 jmp 0x1125bcba */
  goto L_1125bcba;
L_1125bc8a:;
  /* 1125bc8a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bc8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125bc93 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1125bc99 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bc9f jne 0x1125bcb8 */
  if (!C.zf) goto L_1125bcb8;
  /* 1125bca1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bca4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 1125bca7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125bca9 jne 0x1125bcb1 */
  if (!C.zf) goto L_1125bcb1;
  /* 1125bcab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bcaf je 0x1125bcb8 */
  if (C.zf) goto L_1125bcb8;
L_1125bcb1:;
  /* 1125bcb1 mov eax, 4 */
  EAX = (0x4u);
  /* 1125bcb6 jmp 0x1125bcba */
  goto L_1125bcba;
L_1125bcb8:;
  /* 1125bcb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125bcba:;
  /* 1125bcba pop ebp */
  EBP = (pop32());
  /* 1125bcbb ret  */
  ESPCHK(0x1125bc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bcc0 @ 0x1125bcc0 (313 bytes, 95 insns) */
void f_1125bcc0(void) {
  FTRACE(0x1125bcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1125bcc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bcc6 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 1125bcc9 fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 1125bccf fnstsw ax */
  AX = fpu_status();
  /* 1125bcd1 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 1125bcd4 je 0x1125bcf0 */
  if (C.zf) goto L_1125bcf0;
  /* 1125bcd6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125bcdd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125bce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1125bceb jmp 0x1125bdea */
  goto L_1125bdea;
L_1125bcf0:;
  /* 1125bcf0 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bcf3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bcf8 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 1125bcfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125bcff jne 0x1125bdb9 */
  if (!C.zf) goto L_1125bdb9;
  /* 1125bd05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bd08 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1125bd0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125bd0d jne 0x1125bd19 */
  if (!C.zf) goto L_1125bd19;
  /* 1125bd0f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bd13 je 0x1125bdb9 */
  if (C.zf) goto L_1125bdb9;
L_1125bd19:;
  /* 1125bd19 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 1125bd20 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 1125bd23 fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 1125bd29 fnstsw ax */
  AX = fpu_status();
  /* 1125bd2b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 1125bd2e je 0x1125bd39 */
  if (C.zf) goto L_1125bd39;
  /* 1125bd30 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1125bd37 jmp 0x1125bd40 */
  goto L_1125bd40;
L_1125bd39:;
  /* 1125bd39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1125bd40:;
  /* 1125bd40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125bd43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1125bd46:;
  /* 1125bd46 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bd49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bd4e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1125bd51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125bd53 jne 0x1125bd85 */
  if (!C.zf) goto L_1125bd85;
  /* 1125bd55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bd58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1125bd5a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1125bd5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bd60 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 1125bd66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125bd68 je 0x1125bd72 */
  if (C.zf) goto L_1125bd72;
  /* 1125bd6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bd6d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1125bd6f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1125bd72:;
  /* 1125bd72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bd75 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1125bd77 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1125bd7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bd7d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bd80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1125bd83 jmp 0x1125bd46 */
  goto L_1125bd46;
L_1125bd85:;
  /* 1125bd85 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 1125bd89 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 1125bd8d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 1125bd91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bd95 je 0x1125bda2 */
  if (C.zf) goto L_1125bda2;
  /* 1125bd97 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 1125bd9b or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1125bd9e mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_1125bda2:;
  /* 1125bda2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125bda4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bda7 push edx */
  push32((uint32_t)(EDX));
  /* 1125bda8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bdab push eax */
  push32((uint32_t)(EAX));
  /* 1125bdac call 0x1125bb50 */
  push32(0x1125bdb1u); f_1125bb50();
  /* 1125bdb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bdb4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 1125bdb7 jmp 0x1125bdea */
  goto L_1125bdea;
L_1125bdb9:;
  /* 1125bdb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125bdbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125bdbe push ecx */
  push32((uint32_t)(ECX));
  /* 1125bdbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bdc2 push edx */
  push32((uint32_t)(EDX));
  /* 1125bdc3 call 0x1125bb50 */
  push32(0x1125bdc8u); f_1125bb50();
  /* 1125bdc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bdcb fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 1125bdce mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 1125bdd1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bdd6 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 1125bddb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1125bdde movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1125bde1 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bde7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1125bdea:;
  /* 1125bdea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125bded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bdf0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1125bdf2 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 1125bdf5 mov esp, ebp */
  ESP = (EBP);
  /* 1125bdf7 pop ebp */
  EBP = (pop32());
  /* 1125bdf8 ret  */
  ESPCHK(0x1125bcc0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1125be00 (219 bytes, 64 insns) */
void f_1125be00(void) {
  FTRACE(0x1125be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125be00 push ebp */
  push32((uint32_t)(EBP));
  /* 1125be01 mov ebp, esp */
  EBP = (ESP);
  /* 1125be03 push ecx */
  push32((uint32_t)(ECX));
  /* 1125be04 cmp dword ptr [0x112816ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125be0b je 0x1125bea1 */
  if (C.zf) goto L_1125bea1;
  /* 1125be11 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1125be13 push 0x1127c384 */
  push32((uint32_t)(0x1127c384u));
  /* 1125be18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125be1a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1125be1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1125be21 call 0x1124cc30 */
  push32(0x1125be26u); f_1124cc30();
  /* 1125be26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125be29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125be2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125be30 jne 0x1125be3c */
  if (!C.zf) goto L_1125be3c;
  /* 1125be32 mov eax, 1 */
  EAX = (0x1u);
  /* 1125be37 jmp 0x1125bed7 */
  goto L_1125bed7;
L_1125be3c:;
  /* 1125be3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125be3f push eax */
  push32((uint32_t)(EAX));
  /* 1125be40 call 0x1125bee0 */
  push32(0x1125be45u); f_1125bee0();
  /* 1125be45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125be48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125be4a je 0x1125be6d */
  if (C.zf) goto L_1125be6d;
  /* 1125be4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125be4f push ecx */
  push32((uint32_t)(ECX));
  /* 1125be50 call 0x1125c470 */
  push32(0x1125be55u); f_1125c470();
  /* 1125be55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125be58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125be5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125be5d push edx */
  push32((uint32_t)(EDX));
  /* 1125be5e call 0x1124d2b0 */
  push32(0x1125be63u); f_1124d2b0();
  /* 1125be63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125be66 mov eax, 1 */
  EAX = (0x1u);
  /* 1125be6b jmp 0x1125bed7 */
  goto L_1125bed7;
L_1125be6d:;
  /* 1125be6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125be70 mov dword ptr [0x112802c0], eax */
  w32((uint32_t)(0x112802c0), (EAX));
  /* 1125be75 mov ecx, dword ptr [0x11281700] */
  ECX = (r32((uint32_t)(0x11281700)));
  /* 1125be7b push ecx */
  push32((uint32_t)(ECX));
  /* 1125be7c call 0x1125c470 */
  push32(0x1125be81u); f_1125c470();
  /* 1125be81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125be84 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125be86 mov edx, dword ptr [0x11281700] */
  EDX = (r32((uint32_t)(0x11281700)));
  /* 1125be8c push edx */
  push32((uint32_t)(EDX));
  /* 1125be8d call 0x1124d2b0 */
  push32(0x1125be92u); f_1124d2b0();
  /* 1125be92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125be95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125be98 mov dword ptr [0x11281700], eax */
  w32((uint32_t)(0x11281700), (EAX));
  /* 1125be9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125be9f jmp 0x1125bed7 */
  goto L_1125bed7;
L_1125bea1:;
  /* 1125bea1 mov dword ptr [0x112802c0], 0x112802c8 */
  w32((uint32_t)(0x112802c0), (0x112802c8u));
  /* 1125beab mov ecx, dword ptr [0x11281700] */
  ECX = (r32((uint32_t)(0x11281700)));
  /* 1125beb1 push ecx */
  push32((uint32_t)(ECX));
  /* 1125beb2 call 0x1125c470 */
  push32(0x1125beb7u); f_1125c470();
  /* 1125beb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125beba push 2 */
  push32((uint32_t)(0x2u));
  /* 1125bebc mov edx, dword ptr [0x11281700] */
  EDX = (r32((uint32_t)(0x11281700)));
  /* 1125bec2 push edx */
  push32((uint32_t)(EDX));
  /* 1125bec3 call 0x1124d2b0 */
  push32(0x1125bec8u); f_1124d2b0();
  /* 1125bec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125becb mov dword ptr [0x11281700], 0 */
  w32((uint32_t)(0x11281700), (0x0u));
  /* 1125bed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125bed7:;
  /* 1125bed7 mov esp, ebp */
  ESP = (EBP);
  /* 1125bed9 pop ebp */
  EBP = (pop32());
  /* 1125beda ret  */
  ESPCHK(0x1125be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bee0 @ 0x1125bee0 (1423 bytes, 533 insns) */
void f_1125bee0(void) {
  FTRACE(0x1125bee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125bee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125bee1 mov ebp, esp */
  EBP = (ESP);
  /* 1125bee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125bee6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1125beed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125beef mov ax, word ptr [0x1128173a] */
  AX = (r16((uint32_t)(0x1128173a)));
  /* 1125bef5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125bef8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125befa mov cx, word ptr [0x1128173c] */
  CX = (r16((uint32_t)(0x1128173c)));
  /* 1125bf01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125bf04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125bf08 jne 0x1125bf12 */
  if (!C.zf) goto L_1125bf12;
  /* 1125bf0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125bf0d jmp 0x1125c46b */
  goto L_1125c46b;
L_1125bf12:;
  /* 1125bf12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bf15 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf18 push edx */
  push32((uint32_t)(EDX));
  /* 1125bf19 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1125bf1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bf1e push eax */
  push32((uint32_t)(EAX));
  /* 1125bf1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bf21 call 0x11260540 */
  push32(0x1125bf26u); f_11260540();
  /* 1125bf26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bf2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bf2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bf31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bf34 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf37 push edx */
  push32((uint32_t)(EDX));
  /* 1125bf38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1125bf3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bf3d push eax */
  push32((uint32_t)(EAX));
  /* 1125bf3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bf40 call 0x11260540 */
  push32(0x1125bf45u); f_11260540();
  /* 1125bf45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bf4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bf4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bf50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bf53 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf56 push edx */
  push32((uint32_t)(EDX));
  /* 1125bf57 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1125bf59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bf5c push eax */
  push32((uint32_t)(EAX));
  /* 1125bf5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bf5f call 0x11260540 */
  push32(0x1125bf64u); f_11260540();
  /* 1125bf64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bf6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bf6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bf6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bf72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf75 push edx */
  push32((uint32_t)(EDX));
  /* 1125bf76 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1125bf78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bf7b push eax */
  push32((uint32_t)(EAX));
  /* 1125bf7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bf7e call 0x11260540 */
  push32(0x1125bf83u); f_11260540();
  /* 1125bf83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bf89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bf8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bf8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bf91 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bf94 push edx */
  push32((uint32_t)(EDX));
  /* 1125bf95 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1125bf97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bf9a push eax */
  push32((uint32_t)(EAX));
  /* 1125bf9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bf9d call 0x11260540 */
  push32(0x1125bfa2u); f_11260540();
  /* 1125bfa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bfa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bfa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bfaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bfad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bfb0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bfb3 push edx */
  push32((uint32_t)(EDX));
  /* 1125bfb4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1125bfb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bfb9 push eax */
  push32((uint32_t)(EAX));
  /* 1125bfba push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bfbc call 0x11260540 */
  push32(0x1125bfc1u); f_11260540();
  /* 1125bfc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bfc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bfc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bfc9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bfcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bfcf push edx */
  push32((uint32_t)(EDX));
  /* 1125bfd0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1125bfd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bfd5 push eax */
  push32((uint32_t)(EAX));
  /* 1125bfd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bfd8 call 0x11260540 */
  push32(0x1125bfddu); f_11260540();
  /* 1125bfdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bfe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125bfe3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125bfe5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125bfe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125bfeb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bfee push edx */
  push32((uint32_t)(EDX));
  /* 1125bfef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1125bff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125bff4 push eax */
  push32((uint32_t)(EAX));
  /* 1125bff5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125bff7 call 0x11260540 */
  push32(0x1125bffcu); f_11260540();
  /* 1125bffc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125bfff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c002 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c004 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c00a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c00d push edx */
  push32((uint32_t)(EDX));
  /* 1125c00e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1125c010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c013 push eax */
  push32((uint32_t)(EAX));
  /* 1125c014 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c016 call 0x11260540 */
  push32(0x1125c01bu); f_11260540();
  /* 1125c01b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c01e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c021 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c023 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c026 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c029 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c02c push edx */
  push32((uint32_t)(EDX));
  /* 1125c02d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1125c02f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c032 push eax */
  push32((uint32_t)(EAX));
  /* 1125c033 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c035 call 0x11260540 */
  push32(0x1125c03au); f_11260540();
  /* 1125c03a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c03d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c040 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c042 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c048 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c04b push edx */
  push32((uint32_t)(EDX));
  /* 1125c04c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1125c04e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c051 push eax */
  push32((uint32_t)(EAX));
  /* 1125c052 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c054 call 0x11260540 */
  push32(0x1125c059u); f_11260540();
  /* 1125c059 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c05c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c05f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c061 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c067 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c06a push edx */
  push32((uint32_t)(EDX));
  /* 1125c06b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1125c06d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c070 push eax */
  push32((uint32_t)(EAX));
  /* 1125c071 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c073 call 0x11260540 */
  push32(0x1125c078u); f_11260540();
  /* 1125c078 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c07b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c07e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c080 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c086 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c089 push edx */
  push32((uint32_t)(EDX));
  /* 1125c08a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1125c08c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c08f push eax */
  push32((uint32_t)(EAX));
  /* 1125c090 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c092 call 0x11260540 */
  push32(0x1125c097u); f_11260540();
  /* 1125c097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c09a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c09d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c09f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c0a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c0a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1125c0a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1125c0ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c0ae push eax */
  push32((uint32_t)(EAX));
  /* 1125c0af push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c0b1 call 0x11260540 */
  push32(0x1125c0b6u); f_11260540();
  /* 1125c0b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c0b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c0bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c0be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c0c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c0c4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c0c7 push edx */
  push32((uint32_t)(EDX));
  /* 1125c0c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1125c0ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c0cd push eax */
  push32((uint32_t)(EAX));
  /* 1125c0ce push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c0d0 call 0x11260540 */
  push32(0x1125c0d5u); f_11260540();
  /* 1125c0d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c0d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c0db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c0dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c0e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c0e3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c0e6 push edx */
  push32((uint32_t)(EDX));
  /* 1125c0e7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1125c0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c0ec push eax */
  push32((uint32_t)(EAX));
  /* 1125c0ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c0ef call 0x11260540 */
  push32(0x1125c0f4u); f_11260540();
  /* 1125c0f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c0f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c0fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c0fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c0ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c102 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c105 push edx */
  push32((uint32_t)(EDX));
  /* 1125c106 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1125c108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c10b push eax */
  push32((uint32_t)(EAX));
  /* 1125c10c push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c10e call 0x11260540 */
  push32(0x1125c113u); f_11260540();
  /* 1125c113 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c116 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c119 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c11b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c11e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c121 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c124 push edx */
  push32((uint32_t)(EDX));
  /* 1125c125 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1125c127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c12a push eax */
  push32((uint32_t)(EAX));
  /* 1125c12b push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c12d call 0x11260540 */
  push32(0x1125c132u); f_11260540();
  /* 1125c132 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c135 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c138 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c13a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c13d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c140 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c143 push edx */
  push32((uint32_t)(EDX));
  /* 1125c144 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1125c146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c149 push eax */
  push32((uint32_t)(EAX));
  /* 1125c14a push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c14c call 0x11260540 */
  push32(0x1125c151u); f_11260540();
  /* 1125c151 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c154 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c157 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c159 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c15c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c15f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c162 push edx */
  push32((uint32_t)(EDX));
  /* 1125c163 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1125c165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c168 push eax */
  push32((uint32_t)(EAX));
  /* 1125c169 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c16b call 0x11260540 */
  push32(0x1125c170u); f_11260540();
  /* 1125c170 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c173 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c176 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c178 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c17b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c17e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c181 push edx */
  push32((uint32_t)(EDX));
  /* 1125c182 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1125c184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c187 push eax */
  push32((uint32_t)(EAX));
  /* 1125c188 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c18a call 0x11260540 */
  push32(0x1125c18fu); f_11260540();
  /* 1125c18f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c192 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c195 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c197 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c19a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c19d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1a0 push edx */
  push32((uint32_t)(EDX));
  /* 1125c1a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1125c1a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c1a6 push eax */
  push32((uint32_t)(EAX));
  /* 1125c1a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c1a9 call 0x11260540 */
  push32(0x1125c1aeu); f_11260540();
  /* 1125c1ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c1b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c1b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c1b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c1bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1bf push edx */
  push32((uint32_t)(EDX));
  /* 1125c1c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1125c1c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c1c5 push eax */
  push32((uint32_t)(EAX));
  /* 1125c1c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c1c8 call 0x11260540 */
  push32(0x1125c1cdu); f_11260540();
  /* 1125c1cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c1d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c1d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c1d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c1db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1de push edx */
  push32((uint32_t)(EDX));
  /* 1125c1df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1125c1e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c1e4 push eax */
  push32((uint32_t)(EAX));
  /* 1125c1e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c1e7 call 0x11260540 */
  push32(0x1125c1ecu); f_11260540();
  /* 1125c1ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c1f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c1f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c1f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c1fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c1fd push edx */
  push32((uint32_t)(EDX));
  /* 1125c1fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1125c200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c203 push eax */
  push32((uint32_t)(EAX));
  /* 1125c204 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c206 call 0x11260540 */
  push32(0x1125c20bu); f_11260540();
  /* 1125c20b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c20e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c211 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c213 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c219 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c21c push edx */
  push32((uint32_t)(EDX));
  /* 1125c21d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1125c21f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c222 push eax */
  push32((uint32_t)(EAX));
  /* 1125c223 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c225 call 0x11260540 */
  push32(0x1125c22au); f_11260540();
  /* 1125c22a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c22d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c230 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c232 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c238 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c23b push edx */
  push32((uint32_t)(EDX));
  /* 1125c23c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1125c23e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c241 push eax */
  push32((uint32_t)(EAX));
  /* 1125c242 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c244 call 0x11260540 */
  push32(0x1125c249u); f_11260540();
  /* 1125c249 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c24c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c24f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c251 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c257 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c25a push edx */
  push32((uint32_t)(EDX));
  /* 1125c25b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1125c25d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c260 push eax */
  push32((uint32_t)(EAX));
  /* 1125c261 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c263 call 0x11260540 */
  push32(0x1125c268u); f_11260540();
  /* 1125c268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c26b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c26e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c270 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c276 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c279 push edx */
  push32((uint32_t)(EDX));
  /* 1125c27a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1125c27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c27f push eax */
  push32((uint32_t)(EAX));
  /* 1125c280 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c282 call 0x11260540 */
  push32(0x1125c287u); f_11260540();
  /* 1125c287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c28a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c28d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c28f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c292 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c295 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c298 push edx */
  push32((uint32_t)(EDX));
  /* 1125c299 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1125c29b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c29e push eax */
  push32((uint32_t)(EAX));
  /* 1125c29f push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c2a1 call 0x11260540 */
  push32(0x1125c2a6u); f_11260540();
  /* 1125c2a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c2a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c2ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c2ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c2b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c2b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c2b7 push edx */
  push32((uint32_t)(EDX));
  /* 1125c2b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1125c2ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c2bd push eax */
  push32((uint32_t)(EAX));
  /* 1125c2be push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c2c0 call 0x11260540 */
  push32(0x1125c2c5u); f_11260540();
  /* 1125c2c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c2c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c2cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c2cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c2d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c2d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c2d6 push edx */
  push32((uint32_t)(EDX));
  /* 1125c2d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1125c2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c2dc push eax */
  push32((uint32_t)(EAX));
  /* 1125c2dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c2df call 0x11260540 */
  push32(0x1125c2e4u); f_11260540();
  /* 1125c2e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c2e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c2ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c2ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c2ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c2f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c2f8 push edx */
  push32((uint32_t)(EDX));
  /* 1125c2f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1125c2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c2fe push eax */
  push32((uint32_t)(EAX));
  /* 1125c2ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c301 call 0x11260540 */
  push32(0x1125c306u); f_11260540();
  /* 1125c306 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c309 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c30c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c30e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c314 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c31a push edx */
  push32((uint32_t)(EDX));
  /* 1125c31b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1125c31d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c320 push eax */
  push32((uint32_t)(EAX));
  /* 1125c321 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c323 call 0x11260540 */
  push32(0x1125c328u); f_11260540();
  /* 1125c328 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c32b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c32e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c330 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c336 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c33c push edx */
  push32((uint32_t)(EDX));
  /* 1125c33d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1125c33f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c342 push eax */
  push32((uint32_t)(EAX));
  /* 1125c343 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c345 call 0x11260540 */
  push32(0x1125c34au); f_11260540();
  /* 1125c34a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c34d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c350 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c352 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c358 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c35e push edx */
  push32((uint32_t)(EDX));
  /* 1125c35f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1125c361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c364 push eax */
  push32((uint32_t)(EAX));
  /* 1125c365 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c367 call 0x11260540 */
  push32(0x1125c36cu); f_11260540();
  /* 1125c36c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c36f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c372 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c374 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c377 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c37a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c380 push edx */
  push32((uint32_t)(EDX));
  /* 1125c381 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1125c383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c386 push eax */
  push32((uint32_t)(EAX));
  /* 1125c387 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c389 call 0x11260540 */
  push32(0x1125c38eu); f_11260540();
  /* 1125c38e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c394 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c396 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c39c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1125c3a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1125c3a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c3a8 push eax */
  push32((uint32_t)(EAX));
  /* 1125c3a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c3ab call 0x11260540 */
  push32(0x1125c3b0u); f_11260540();
  /* 1125c3b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c3b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c3b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c3b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c3bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c3be add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c3c4 push edx */
  push32((uint32_t)(EDX));
  /* 1125c3c5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1125c3c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c3ca push eax */
  push32((uint32_t)(EAX));
  /* 1125c3cb push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c3cd call 0x11260540 */
  push32(0x1125c3d2u); f_11260540();
  /* 1125c3d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c3d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c3d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c3da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c3e0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c3e6 push edx */
  push32((uint32_t)(EDX));
  /* 1125c3e7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1125c3e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c3ec push eax */
  push32((uint32_t)(EAX));
  /* 1125c3ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c3ef call 0x11260540 */
  push32(0x1125c3f4u); f_11260540();
  /* 1125c3f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c3f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c3fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c3fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c3ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c402 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c408 push edx */
  push32((uint32_t)(EDX));
  /* 1125c409 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1125c40b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125c40e push eax */
  push32((uint32_t)(EAX));
  /* 1125c40f push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c411 call 0x11260540 */
  push32(0x1125c416u); f_11260540();
  /* 1125c416 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c419 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c41c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c41e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c424 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c42a push edx */
  push32((uint32_t)(EDX));
  /* 1125c42b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1125c42d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125c430 push eax */
  push32((uint32_t)(EAX));
  /* 1125c431 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c433 call 0x11260540 */
  push32(0x1125c438u); f_11260540();
  /* 1125c438 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c43b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c43e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c440 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c446 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c44c push edx */
  push32((uint32_t)(EDX));
  /* 1125c44d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1125c452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125c455 push eax */
  push32((uint32_t)(EAX));
  /* 1125c456 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c458 call 0x11260540 */
  push32(0x1125c45du); f_11260540();
  /* 1125c45d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125c463 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c465 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1125c468 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1125c46b:;
  /* 1125c46b mov esp, ebp */
  ESP = (EBP);
  /* 1125c46d pop ebp */
  EBP = (pop32());
  /* 1125c46e ret  */
  ESPCHK(0x1125bee0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1125c470 (779 bytes, 265 insns) */
void f_1125c470(void) {
  FTRACE(0x1125c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125c470 push ebp */
  push32((uint32_t)(EBP));
  /* 1125c471 mov ebp, esp */
  EBP = (ESP);
  /* 1125c473 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c477 jne 0x1125c47e */
  if (!C.zf) goto L_1125c47e;
  /* 1125c479 jmp 0x1125c779 */
  goto L_1125c779;
L_1125c47e:;
  /* 1125c47e push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c483 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125c486 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c487 call 0x1124d2b0 */
  push32(0x1125c48cu); f_1124d2b0();
  /* 1125c48c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c48f push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c494 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1125c497 push eax */
  push32((uint32_t)(EAX));
  /* 1125c498 call 0x1124d2b0 */
  push32(0x1125c49du); f_1124d2b0();
  /* 1125c49d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c4a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c4a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c4a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125c4a8 push edx */
  push32((uint32_t)(EDX));
  /* 1125c4a9 call 0x1124d2b0 */
  push32(0x1125c4aeu); f_1124d2b0();
  /* 1125c4ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c4b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c4b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125c4b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c4ba call 0x1124d2b0 */
  push32(0x1125c4bfu); f_1124d2b0();
  /* 1125c4bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c4c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c4c7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1125c4ca push eax */
  push32((uint32_t)(EAX));
  /* 1125c4cb call 0x1124d2b0 */
  push32(0x1125c4d0u); f_1124d2b0();
  /* 1125c4d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c4d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c4d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c4d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1125c4db push edx */
  push32((uint32_t)(EDX));
  /* 1125c4dc call 0x1124d2b0 */
  push32(0x1125c4e1u); f_1124d2b0();
  /* 1125c4e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c4e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c4e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125c4eb push ecx */
  push32((uint32_t)(ECX));
  /* 1125c4ec call 0x1124d2b0 */
  push32(0x1125c4f1u); f_1124d2b0();
  /* 1125c4f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c4f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c4f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c4f9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1125c4fc push eax */
  push32((uint32_t)(EAX));
  /* 1125c4fd call 0x1124d2b0 */
  push32(0x1125c502u); f_1124d2b0();
  /* 1125c502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c505 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c507 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c50a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1125c50d push edx */
  push32((uint32_t)(EDX));
  /* 1125c50e call 0x1124d2b0 */
  push32(0x1125c513u); f_1124d2b0();
  /* 1125c513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c516 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c51b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1125c51e push ecx */
  push32((uint32_t)(ECX));
  /* 1125c51f call 0x1124d2b0 */
  push32(0x1125c524u); f_1124d2b0();
  /* 1125c524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c527 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c529 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c52c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1125c52f push eax */
  push32((uint32_t)(EAX));
  /* 1125c530 call 0x1124d2b0 */
  push32(0x1125c535u); f_1124d2b0();
  /* 1125c535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c538 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c53a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c53d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1125c540 push edx */
  push32((uint32_t)(EDX));
  /* 1125c541 call 0x1124d2b0 */
  push32(0x1125c546u); f_1124d2b0();
  /* 1125c546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c549 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c54b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c54e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1125c551 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c552 call 0x1124d2b0 */
  push32(0x1125c557u); f_1124d2b0();
  /* 1125c557 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c55a push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c55c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c55f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1125c562 push eax */
  push32((uint32_t)(EAX));
  /* 1125c563 call 0x1124d2b0 */
  push32(0x1125c568u); f_1124d2b0();
  /* 1125c568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c56b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c56d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c570 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1125c573 push edx */
  push32((uint32_t)(EDX));
  /* 1125c574 call 0x1124d2b0 */
  push32(0x1125c579u); f_1124d2b0();
  /* 1125c579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c57c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c57e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c581 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1125c584 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c585 call 0x1124d2b0 */
  push32(0x1125c58au); f_1124d2b0();
  /* 1125c58a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c58d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c58f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c592 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1125c595 push eax */
  push32((uint32_t)(EAX));
  /* 1125c596 call 0x1124d2b0 */
  push32(0x1125c59bu); f_1124d2b0();
  /* 1125c59b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c59e push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c5a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c5a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1125c5a6 push edx */
  push32((uint32_t)(EDX));
  /* 1125c5a7 call 0x1124d2b0 */
  push32(0x1125c5acu); f_1124d2b0();
  /* 1125c5ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c5af push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c5b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c5b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1125c5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c5b8 call 0x1124d2b0 */
  push32(0x1125c5bdu); f_1124d2b0();
  /* 1125c5bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c5c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c5c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c5c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1125c5c8 push eax */
  push32((uint32_t)(EAX));
  /* 1125c5c9 call 0x1124d2b0 */
  push32(0x1125c5ceu); f_1124d2b0();
  /* 1125c5ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c5d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c5d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c5d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1125c5d9 push edx */
  push32((uint32_t)(EDX));
  /* 1125c5da call 0x1124d2b0 */
  push32(0x1125c5dfu); f_1124d2b0();
  /* 1125c5df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c5e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c5e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1125c5ea push ecx */
  push32((uint32_t)(ECX));
  /* 1125c5eb call 0x1124d2b0 */
  push32(0x1125c5f0u); f_1124d2b0();
  /* 1125c5f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c5f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c5f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c5f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1125c5fb push eax */
  push32((uint32_t)(EAX));
  /* 1125c5fc call 0x1124d2b0 */
  push32(0x1125c601u); f_1124d2b0();
  /* 1125c601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c604 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c609 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1125c60c push edx */
  push32((uint32_t)(EDX));
  /* 1125c60d call 0x1124d2b0 */
  push32(0x1125c612u); f_1124d2b0();
  /* 1125c612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c615 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c617 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c61a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1125c61d push ecx */
  push32((uint32_t)(ECX));
  /* 1125c61e call 0x1124d2b0 */
  push32(0x1125c623u); f_1124d2b0();
  /* 1125c623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c626 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c628 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c62b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1125c62e push eax */
  push32((uint32_t)(EAX));
  /* 1125c62f call 0x1124d2b0 */
  push32(0x1125c634u); f_1124d2b0();
  /* 1125c634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c637 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c63c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1125c63f push edx */
  push32((uint32_t)(EDX));
  /* 1125c640 call 0x1124d2b0 */
  push32(0x1125c645u); f_1124d2b0();
  /* 1125c645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c648 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c64d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1125c650 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c651 call 0x1124d2b0 */
  push32(0x1125c656u); f_1124d2b0();
  /* 1125c656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c659 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c65e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1125c661 push eax */
  push32((uint32_t)(EAX));
  /* 1125c662 call 0x1124d2b0 */
  push32(0x1125c667u); f_1124d2b0();
  /* 1125c667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c66a push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c66f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1125c672 push edx */
  push32((uint32_t)(EDX));
  /* 1125c673 call 0x1124d2b0 */
  push32(0x1125c678u); f_1124d2b0();
  /* 1125c678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c67b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c67d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c680 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1125c683 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c684 call 0x1124d2b0 */
  push32(0x1125c689u); f_1124d2b0();
  /* 1125c689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c68c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c68e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c691 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1125c694 push eax */
  push32((uint32_t)(EAX));
  /* 1125c695 call 0x1124d2b0 */
  push32(0x1125c69au); f_1124d2b0();
  /* 1125c69a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c69d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c69f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c6a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1125c6a8 push edx */
  push32((uint32_t)(EDX));
  /* 1125c6a9 call 0x1124d2b0 */
  push32(0x1125c6aeu); f_1124d2b0();
  /* 1125c6ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c6b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c6b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1125c6bc push ecx */
  push32((uint32_t)(ECX));
  /* 1125c6bd call 0x1124d2b0 */
  push32(0x1125c6c2u); f_1124d2b0();
  /* 1125c6c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c6c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c6ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1125c6d0 push eax */
  push32((uint32_t)(EAX));
  /* 1125c6d1 call 0x1124d2b0 */
  push32(0x1125c6d6u); f_1124d2b0();
  /* 1125c6d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c6d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c6db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c6de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1125c6e4 push edx */
  push32((uint32_t)(EDX));
  /* 1125c6e5 call 0x1124d2b0 */
  push32(0x1125c6eau); f_1124d2b0();
  /* 1125c6ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c6ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c6ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c6f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1125c6f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c6f9 call 0x1124d2b0 */
  push32(0x1125c6feu); f_1124d2b0();
  /* 1125c6fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c701 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c703 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c706 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1125c70c push eax */
  push32((uint32_t)(EAX));
  /* 1125c70d call 0x1124d2b0 */
  push32(0x1125c712u); f_1124d2b0();
  /* 1125c712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c715 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c71a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1125c720 push edx */
  push32((uint32_t)(EDX));
  /* 1125c721 call 0x1124d2b0 */
  push32(0x1125c726u); f_1124d2b0();
  /* 1125c726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c729 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c72b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c72e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1125c734 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c735 call 0x1124d2b0 */
  push32(0x1125c73au); f_1124d2b0();
  /* 1125c73a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c73d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c73f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c742 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1125c748 push eax */
  push32((uint32_t)(EAX));
  /* 1125c749 call 0x1124d2b0 */
  push32(0x1125c74eu); f_1124d2b0();
  /* 1125c74e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c751 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c753 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c756 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1125c75c push edx */
  push32((uint32_t)(EDX));
  /* 1125c75d call 0x1124d2b0 */
  push32(0x1125c762u); f_1124d2b0();
  /* 1125c762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c765 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c767 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125c76a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1125c770 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c771 call 0x1124d2b0 */
  push32(0x1125c776u); f_1124d2b0();
  /* 1125c776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125c779:;
  /* 1125c779 pop ebp */
  EBP = (pop32());
  /* 1125c77a ret  */
  ESPCHK(0x1125c470u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c780 @ 0x1125c780 (678 bytes, 180 insns) */
void f_1125c780(void) {
  FTRACE(0x1125c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125c780 push ebp */
  push32((uint32_t)(EBP));
  /* 1125c781 mov ebp, esp */
  EBP = (ESP);
  /* 1125c783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125c786 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125c78d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125c78f mov ax, word ptr [0x11281736] */
  AX = (r16((uint32_t)(0x11281736)));
  /* 1125c795 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125c798 cmp dword ptr [0x112816e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c79f je 0x1125c8fa */
  if (C.zf) goto L_1125c8fa;
  /* 1125c7a5 push 0x11281704 */
  push32((uint32_t)(0x11281704u));
  /* 1125c7aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 1125c7ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c7af push ecx */
  push32((uint32_t)(ECX));
  /* 1125c7b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c7b2 call 0x11260540 */
  push32(0x1125c7b7u); f_11260540();
  /* 1125c7b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c7ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125c7bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1125c7bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1125c7c2 push 0x11281708 */
  push32((uint32_t)(0x11281708u));
  /* 1125c7c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1125c7c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c7cc push eax */
  push32((uint32_t)(EAX));
  /* 1125c7cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c7cf call 0x11260540 */
  push32(0x1125c7d4u); f_11260540();
  /* 1125c7d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c7d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125c7da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c7dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125c7df push 0x1128170c */
  push32((uint32_t)(0x1128170cu));
  /* 1125c7e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1125c7e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125c7e9 push edx */
  push32((uint32_t)(EDX));
  /* 1125c7ea push 1 */
  push32((uint32_t)(0x1u));
  /* 1125c7ec call 0x11260540 */
  push32(0x1125c7f1u); f_11260540();
  /* 1125c7f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c7f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125c7f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125c7f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125c7fc mov edx, dword ptr [0x1128170c] */
  EDX = (r32((uint32_t)(0x1128170c)));
  /* 1125c802 push edx */
  push32((uint32_t)(EDX));
  /* 1125c803 call 0x1125ca30 */
  push32(0x1125c808u); f_1125ca30();
  /* 1125c808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c80b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c80f je 0x1125c869 */
  if (C.zf) goto L_1125c869;
  /* 1125c811 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c813 mov eax, dword ptr [0x11281704] */
  EAX = (r32((uint32_t)(0x11281704)));
  /* 1125c818 push eax */
  push32((uint32_t)(EAX));
  /* 1125c819 call 0x1124d2b0 */
  push32(0x1125c81eu); f_1124d2b0();
  /* 1125c81e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c821 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c823 mov ecx, dword ptr [0x11281708] */
  ECX = (r32((uint32_t)(0x11281708)));
  /* 1125c829 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c82a call 0x1124d2b0 */
  push32(0x1125c82fu); f_1124d2b0();
  /* 1125c82f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c832 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c834 mov edx, dword ptr [0x1128170c] */
  EDX = (r32((uint32_t)(0x1128170c)));
  /* 1125c83a push edx */
  push32((uint32_t)(EDX));
  /* 1125c83b call 0x1124d2b0 */
  push32(0x1125c840u); f_1124d2b0();
  /* 1125c840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c843 mov dword ptr [0x11281704], 0 */
  w32((uint32_t)(0x11281704), (0x0u));
  /* 1125c84d mov dword ptr [0x11281708], 0 */
  w32((uint32_t)(0x11281708), (0x0u));
  /* 1125c857 mov dword ptr [0x1128170c], 0 */
  w32((uint32_t)(0x1128170c), (0x0u));
  /* 1125c861 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125c864 jmp 0x1125ca22 */
  goto L_1125ca22;
L_1125c869:;
  /* 1125c869 mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125c86e cmp dword ptr [eax], 0x11280378 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11280378u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c874 je 0x1125c8b0 */
  if (C.zf) goto L_1125c8b0;
  /* 1125c876 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c878 mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125c87e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125c880 push edx */
  push32((uint32_t)(EDX));
  /* 1125c881 call 0x1124d2b0 */
  push32(0x1125c886u); f_1124d2b0();
  /* 1125c886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c889 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c88b mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125c890 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125c893 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c894 call 0x1124d2b0 */
  push32(0x1125c899u); f_1124d2b0();
  /* 1125c899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c89c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c89e mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125c8a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1125c8a7 push eax */
  push32((uint32_t)(EAX));
  /* 1125c8a8 call 0x1124d2b0 */
  push32(0x1125c8adu); f_1124d2b0();
  /* 1125c8ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125c8b0:;
  /* 1125c8b0 mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125c8b6 mov edx, dword ptr [0x11281704] */
  EDX = (r32((uint32_t)(0x11281704)));
  /* 1125c8bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1125c8be mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125c8c3 mov ecx, dword ptr [0x11281708] */
  ECX = (r32((uint32_t)(0x11281708)));
  /* 1125c8c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1125c8cc mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125c8d2 mov eax, dword ptr [0x1128170c] */
  EAX = (r32((uint32_t)(0x1128170c)));
  /* 1125c8d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1125c8da mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125c8e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125c8e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125c8e4 mov byte ptr [0x1127efe4], al */
  w8((uint32_t)(0x1127efe4), (AL));
  /* 1125c8e9 mov dword ptr [0x1127efe8], 1 */
  w32((uint32_t)(0x1127efe8), (0x1u));
  /* 1125c8f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125c8f5 jmp 0x1125ca22 */
  goto L_1125ca22;
L_1125c8fa:;
  /* 1125c8fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c8fc mov ecx, dword ptr [0x11281704] */
  ECX = (r32((uint32_t)(0x11281704)));
  /* 1125c902 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c903 call 0x1124d2b0 */
  push32(0x1125c908u); f_1124d2b0();
  /* 1125c908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c90b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c90d mov edx, dword ptr [0x11281708] */
  EDX = (r32((uint32_t)(0x11281708)));
  /* 1125c913 push edx */
  push32((uint32_t)(EDX));
  /* 1125c914 call 0x1124d2b0 */
  push32(0x1125c919u); f_1124d2b0();
  /* 1125c919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c91c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c91e mov eax, dword ptr [0x1128170c] */
  EAX = (r32((uint32_t)(0x1128170c)));
  /* 1125c923 push eax */
  push32((uint32_t)(EAX));
  /* 1125c924 call 0x1124d2b0 */
  push32(0x1125c929u); f_1124d2b0();
  /* 1125c929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c92c mov dword ptr [0x11281704], 0 */
  w32((uint32_t)(0x11281704), (0x0u));
  /* 1125c936 mov dword ptr [0x11281708], 0 */
  w32((uint32_t)(0x11281708), (0x0u));
  /* 1125c940 mov dword ptr [0x1128170c], 0 */
  w32((uint32_t)(0x1128170c), (0x0u));
  /* 1125c94a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1125c94f push 0x1127c390 */
  push32((uint32_t)(0x1127c390u));
  /* 1125c954 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c956 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c958 call 0x1124c820 */
  push32(0x1125c95du); f_1124c820();
  /* 1125c95d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c960 mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125c966 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1125c968 mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125c96e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c971 jne 0x1125c97b */
  if (!C.zf) goto L_1125c97b;
  /* 1125c973 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125c976 jmp 0x1125ca22 */
  goto L_1125ca22;
L_1125c97b:;
  /* 1125c97b push 0x1127c330 */
  push32((uint32_t)(0x1127c330u));
  /* 1125c980 mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125c985 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1125c987 push ecx */
  push32((uint32_t)(ECX));
  /* 1125c988 call 0x11250f30 */
  push32(0x1125c98du); f_11250f30();
  /* 1125c98d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c990 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1125c995 push 0x1127c390 */
  push32((uint32_t)(0x1127c390u));
  /* 1125c99a push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c99c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c99e call 0x1124c820 */
  push32(0x1125c9a3u); f_1124c820();
  /* 1125c9a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c9a6 mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125c9ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1125c9af mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125c9b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c9b8 jne 0x1125c9bf */
  if (!C.zf) goto L_1125c9bf;
  /* 1125c9ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125c9bd jmp 0x1125ca22 */
  goto L_1125ca22;
L_1125c9bf:;
  /* 1125c9bf mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125c9c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125c9c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1125c9cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1125c9d0 push 0x1127c390 */
  push32((uint32_t)(0x1127c390u));
  /* 1125c9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c9d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125c9d9 call 0x1124c820 */
  push32(0x1125c9deu); f_1124c820();
  /* 1125c9de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125c9e1 mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125c9e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1125c9ea mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125c9f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125c9f4 jne 0x1125c9fb */
  if (!C.zf) goto L_1125c9fb;
  /* 1125c9f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125c9f9 jmp 0x1125ca22 */
  goto L_1125ca22;
L_1125c9fb:;
  /* 1125c9fb mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125ca00 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1125ca03 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1125ca06 mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125ca0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1125ca0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125ca10 mov byte ptr [0x1127efe4], cl */
  w8((uint32_t)(0x1127efe4), (CL));
  /* 1125ca16 mov dword ptr [0x1127efe8], 1 */
  w32((uint32_t)(0x1127efe8), (0x1u));
  /* 1125ca20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125ca22:;
  /* 1125ca22 mov esp, ebp */
  ESP = (EBP);
  /* 1125ca24 pop ebp */
  EBP = (pop32());
  /* 1125ca25 ret  */
  ESPCHK(0x1125c780u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1125ca30 (125 bytes, 49 insns) */
void f_1125ca30(void) {
  FTRACE(0x1125ca30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ca30 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ca31 mov ebp, esp */
  EBP = (ESP);
  /* 1125ca33 push ecx */
  push32((uint32_t)(ECX));
L_1125ca34:;
  /* 1125ca34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125ca3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125ca3c je 0x1125caa9 */
  if (C.zf) goto L_1125caa9;
  /* 1125ca3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1125ca44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ca47 jl 0x1125ca6d */
  if ((C.sf!=C.of)) goto L_1125ca6d;
  /* 1125ca49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125ca4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ca52 jg 0x1125ca6d */
  if ((!C.zf&&C.sf==C.of)) goto L_1125ca6d;
  /* 1125ca54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125ca5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ca5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1125ca62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ca68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125ca6b jmp 0x1125caa7 */
  goto L_1125caa7;
L_1125ca6d:;
  /* 1125ca6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125ca73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ca76 jne 0x1125ca9e */
  if (!C.zf) goto L_1125ca9e;
  /* 1125ca78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ca7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125ca7e:;
  /* 1125ca7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ca81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ca84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1125ca87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1125ca89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ca8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ca8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ca92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ca95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1125ca98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125ca9a jne 0x1125ca7e */
  if (!C.zf) goto L_1125ca7e;
  /* 1125ca9c jmp 0x1125caa7 */
  goto L_1125caa7;
L_1125ca9e:;
  /* 1125ca9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125caa1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125caa4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1125caa7:;
  /* 1125caa7 jmp 0x1125ca34 */
  goto L_1125ca34;
L_1125caa9:;
  /* 1125caa9 mov esp, ebp */
  ESP = (EBP);
  /* 1125caab pop ebp */
  EBP = (pop32());
  /* 1125caac ret  */
  ESPCHK(0x1125ca30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cab0 @ 0x1125cab0 (304 bytes, 85 insns) */
void f_1125cab0(void) {
  FTRACE(0x1125cab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125cab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125cab1 mov ebp, esp */
  EBP = (ESP);
  /* 1125cab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125cab4 cmp dword ptr [0x112816e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cabb je 0x1125cb7c */
  if (C.zf) goto L_1125cb7c;
  /* 1125cac1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1125cac3 push 0x1127c39c */
  push32((uint32_t)(0x1127c39cu));
  /* 1125cac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125caca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1125cacc push 1 */
  push32((uint32_t)(0x1u));
  /* 1125cace call 0x1124cc30 */
  push32(0x1125cad3u); f_1124cc30();
  /* 1125cad3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cad6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125cad9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cadd jne 0x1125cae9 */
  if (!C.zf) goto L_1125cae9;
  /* 1125cadf mov eax, 1 */
  EAX = (0x1u);
  /* 1125cae4 jmp 0x1125cbdc */
  goto L_1125cbdc;
L_1125cae9:;
  /* 1125cae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125caec push eax */
  push32((uint32_t)(EAX));
  /* 1125caed call 0x1125cbe0 */
  push32(0x1125caf2u); f_1125cbe0();
  /* 1125caf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125caf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125caf7 je 0x1125cb1d */
  if (C.zf) goto L_1125cb1d;
  /* 1125caf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cafc push ecx */
  push32((uint32_t)(ECX));
  /* 1125cafd call 0x1125ce70 */
  push32(0x1125cb02u); f_1125ce70();
  /* 1125cb02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cb05 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cb07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cb0a push edx */
  push32((uint32_t)(EDX));
  /* 1125cb0b call 0x1124d2b0 */
  push32(0x1125cb10u); f_1124d2b0();
  /* 1125cb10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cb13 mov eax, 1 */
  EAX = (0x1u);
  /* 1125cb18 jmp 0x1125cbdc */
  goto L_1125cbdc;
L_1125cb1d:;
  /* 1125cb1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cb20 mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125cb26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125cb28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125cb2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cb2d mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125cb33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1125cb36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1125cb39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cb3c mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125cb42 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1125cb45 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1125cb48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cb4b mov dword ptr [0x112803b0], eax */
  w32((uint32_t)(0x112803b0), (EAX));
  /* 1125cb50 mov ecx, dword ptr [0x11281710] */
  ECX = (r32((uint32_t)(0x11281710)));
  /* 1125cb56 push ecx */
  push32((uint32_t)(ECX));
  /* 1125cb57 call 0x1125ce70 */
  push32(0x1125cb5cu); f_1125ce70();
  /* 1125cb5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cb5f push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cb61 mov edx, dword ptr [0x11281710] */
  EDX = (r32((uint32_t)(0x11281710)));
  /* 1125cb67 push edx */
  push32((uint32_t)(EDX));
  /* 1125cb68 call 0x1124d2b0 */
  push32(0x1125cb6du); f_1124d2b0();
  /* 1125cb6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cb70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cb73 mov dword ptr [0x11281710], eax */
  w32((uint32_t)(0x11281710), (EAX));
  /* 1125cb78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125cb7a jmp 0x1125cbdc */
  goto L_1125cbdc;
L_1125cb7c:;
  /* 1125cb7c mov ecx, dword ptr [0x112803b0] */
  ECX = (r32((uint32_t)(0x112803b0)));
  /* 1125cb82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125cb84 mov dword ptr [0x11280380], edx */
  w32((uint32_t)(0x11280380), (EDX));
  /* 1125cb8a mov eax, dword ptr [0x112803b0] */
  EAX = (r32((uint32_t)(0x112803b0)));
  /* 1125cb8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1125cb92 mov dword ptr [0x11280384], ecx */
  w32((uint32_t)(0x11280384), (ECX));
  /* 1125cb98 mov edx, dword ptr [0x112803b0] */
  EDX = (r32((uint32_t)(0x112803b0)));
  /* 1125cb9e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1125cba1 mov dword ptr [0x11280388], eax */
  w32((uint32_t)(0x11280388), (EAX));
  /* 1125cba6 mov dword ptr [0x112803b0], 0x11280380 */
  w32((uint32_t)(0x112803b0), (0x11280380u));
  /* 1125cbb0 mov ecx, dword ptr [0x11281710] */
  ECX = (r32((uint32_t)(0x11281710)));
  /* 1125cbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1125cbb7 call 0x1125ce70 */
  push32(0x1125cbbcu); f_1125ce70();
  /* 1125cbbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cbbf push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cbc1 mov edx, dword ptr [0x11281710] */
  EDX = (r32((uint32_t)(0x11281710)));
  /* 1125cbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1125cbc8 call 0x1124d2b0 */
  push32(0x1125cbcdu); f_1124d2b0();
  /* 1125cbcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cbd0 mov dword ptr [0x11281710], 0 */
  w32((uint32_t)(0x11281710), (0x0u));
  /* 1125cbda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125cbdc:;
  /* 1125cbdc mov esp, ebp */
  ESP = (EBP);
  /* 1125cbde pop ebp */
  EBP = (pop32());
  /* 1125cbdf ret  */
  ESPCHK(0x1125cab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cbe0 @ 0x1125cbe0 (525 bytes, 200 insns) */
void f_1125cbe0(void) {
  FTRACE(0x1125cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1125cbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125cbe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125cbed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125cbef mov ax, word ptr [0x11281730] */
  AX = (r16((uint32_t)(0x11281730)));
  /* 1125cbf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125cbf8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cbfc jne 0x1125cc06 */
  if (!C.zf) goto L_1125cc06;
  /* 1125cbfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125cc01 jmp 0x1125cde9 */
  goto L_1125cde9;
L_1125cc06:;
  /* 1125cc06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cc09 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc0c push ecx */
  push32((uint32_t)(ECX));
  /* 1125cc0d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1125cc0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cc12 push edx */
  push32((uint32_t)(EDX));
  /* 1125cc13 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125cc15 call 0x11260540 */
  push32(0x1125cc1au); f_11260540();
  /* 1125cc1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cc20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cc22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cc25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cc28 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc2b push edx */
  push32((uint32_t)(EDX));
  /* 1125cc2c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1125cc2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cc31 push eax */
  push32((uint32_t)(EAX));
  /* 1125cc32 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125cc34 call 0x11260540 */
  push32(0x1125cc39u); f_11260540();
  /* 1125cc39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cc3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cc41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cc47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc4a push edx */
  push32((uint32_t)(EDX));
  /* 1125cc4b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1125cc4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cc50 push eax */
  push32((uint32_t)(EAX));
  /* 1125cc51 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125cc53 call 0x11260540 */
  push32(0x1125cc58u); f_11260540();
  /* 1125cc58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cc5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cc60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cc63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cc66 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc69 push edx */
  push32((uint32_t)(EDX));
  /* 1125cc6a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1125cc6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cc6f push eax */
  push32((uint32_t)(EAX));
  /* 1125cc70 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125cc72 call 0x11260540 */
  push32(0x1125cc77u); f_11260540();
  /* 1125cc77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cc7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cc7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cc82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cc85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc88 push edx */
  push32((uint32_t)(EDX));
  /* 1125cc89 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1125cc8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cc8e push eax */
  push32((uint32_t)(EAX));
  /* 1125cc8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1125cc91 call 0x11260540 */
  push32(0x1125cc96u); f_11260540();
  /* 1125cc96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cc99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cc9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cc9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cca4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1125cca7 push eax */
  push32((uint32_t)(EAX));
  /* 1125cca8 call 0x1125cdf0 */
  push32(0x1125ccadu); f_1125cdf0();
  /* 1125ccad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ccb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ccb3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ccb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ccb7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1125ccb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ccbc push edx */
  push32((uint32_t)(EDX));
  /* 1125ccbd push 1 */
  push32((uint32_t)(0x1u));
  /* 1125ccbf call 0x11260540 */
  push32(0x1125ccc4u); f_11260540();
  /* 1125ccc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ccc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125ccca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cccc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ccd2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ccd5 push edx */
  push32((uint32_t)(EDX));
  /* 1125ccd6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1125ccd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ccdb push eax */
  push32((uint32_t)(EAX));
  /* 1125ccdc push 1 */
  push32((uint32_t)(0x1u));
  /* 1125ccde call 0x11260540 */
  push32(0x1125cce3u); f_11260540();
  /* 1125cce3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cce6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cce9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cceb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125ccee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ccf1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ccf4 push edx */
  push32((uint32_t)(EDX));
  /* 1125ccf5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1125ccf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ccfa push eax */
  push32((uint32_t)(EAX));
  /* 1125ccfb push 0 */
  push32((uint32_t)(0x0u));
  /* 1125ccfd call 0x11260540 */
  push32(0x1125cd02u); f_11260540();
  /* 1125cd02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cd08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cd0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cd0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cd10 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd13 push edx */
  push32((uint32_t)(EDX));
  /* 1125cd14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1125cd16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cd19 push eax */
  push32((uint32_t)(EAX));
  /* 1125cd1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cd1c call 0x11260540 */
  push32(0x1125cd21u); f_11260540();
  /* 1125cd21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cd27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cd29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cd2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cd2f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd32 push edx */
  push32((uint32_t)(EDX));
  /* 1125cd33 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1125cd35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cd38 push eax */
  push32((uint32_t)(EAX));
  /* 1125cd39 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cd3b call 0x11260540 */
  push32(0x1125cd40u); f_11260540();
  /* 1125cd40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cd46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cd48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cd4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cd4e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd51 push edx */
  push32((uint32_t)(EDX));
  /* 1125cd52 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1125cd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cd57 push eax */
  push32((uint32_t)(EAX));
  /* 1125cd58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cd5a call 0x11260540 */
  push32(0x1125cd5fu); f_11260540();
  /* 1125cd5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cd65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cd67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cd6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cd6d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd70 push edx */
  push32((uint32_t)(EDX));
  /* 1125cd71 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1125cd73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cd76 push eax */
  push32((uint32_t)(EAX));
  /* 1125cd77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cd79 call 0x11260540 */
  push32(0x1125cd7eu); f_11260540();
  /* 1125cd7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cd84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cd86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cd89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cd8c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cd8f push edx */
  push32((uint32_t)(EDX));
  /* 1125cd90 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1125cd92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cd95 push eax */
  push32((uint32_t)(EAX));
  /* 1125cd96 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cd98 call 0x11260540 */
  push32(0x1125cd9du); f_11260540();
  /* 1125cd9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cda0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cda3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cda5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cda8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cdab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cdae push edx */
  push32((uint32_t)(EDX));
  /* 1125cdaf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1125cdb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cdb4 push eax */
  push32((uint32_t)(EAX));
  /* 1125cdb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cdb7 call 0x11260540 */
  push32(0x1125cdbcu); f_11260540();
  /* 1125cdbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cdbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cdc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cdc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cdc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cdca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cdcd push edx */
  push32((uint32_t)(EDX));
  /* 1125cdce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1125cdd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125cdd3 push eax */
  push32((uint32_t)(EAX));
  /* 1125cdd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cdd6 call 0x11260540 */
  push32(0x1125cddbu); f_11260540();
  /* 1125cddb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cdde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125cde1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1125cde3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1125cde6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1125cde9:;
  /* 1125cde9 mov esp, ebp */
  ESP = (EBP);
  /* 1125cdeb pop ebp */
  EBP = (pop32());
  /* 1125cdec ret  */
  ESPCHK(0x1125cbe0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1125cdf0 (125 bytes, 49 insns) */
void f_1125cdf0(void) {
  FTRACE(0x1125cdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125cdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125cdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1125cdf3 push ecx */
  push32((uint32_t)(ECX));
L_1125cdf4:;
  /* 1125cdf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cdf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125cdfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125cdfc je 0x1125ce69 */
  if (C.zf) goto L_1125ce69;
  /* 1125cdfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1125ce04 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ce07 jl 0x1125ce2d */
  if ((C.sf!=C.of)) goto L_1125ce2d;
  /* 1125ce09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125ce0f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ce12 jg 0x1125ce2d */
  if ((!C.zf&&C.sf==C.of)) goto L_1125ce2d;
  /* 1125ce14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125ce1a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ce1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce20 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1125ce22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ce28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1125ce2b jmp 0x1125ce67 */
  goto L_1125ce67;
L_1125ce2d:;
  /* 1125ce2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125ce33 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ce36 jne 0x1125ce5e */
  if (!C.zf) goto L_1125ce5e;
  /* 1125ce38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125ce3e:;
  /* 1125ce3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ce41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ce44 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1125ce47 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1125ce49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ce4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ce4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1125ce52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ce55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1125ce58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125ce5a jne 0x1125ce3e */
  if (!C.zf) goto L_1125ce3e;
  /* 1125ce5c jmp 0x1125ce67 */
  goto L_1125ce67;
L_1125ce5e:;
  /* 1125ce5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ce64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1125ce67:;
  /* 1125ce67 jmp 0x1125cdf4 */
  goto L_1125cdf4;
L_1125ce69:;
  /* 1125ce69 mov esp, ebp */
  ESP = (EBP);
  /* 1125ce6b pop ebp */
  EBP = (pop32());
  /* 1125ce6c ret  */
  ESPCHK(0x1125cdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ce70 @ 0x1125ce70 (147 bytes, 52 insns) */
void f_1125ce70(void) {
  FTRACE(0x1125ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ce71 mov ebp, esp */
  EBP = (ESP);
  /* 1125ce73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ce77 jne 0x1125ce7e */
  if (!C.zf) goto L_1125ce7e;
  /* 1125ce79 jmp 0x1125cf01 */
  goto L_1125cf01;
L_1125ce7e:;
  /* 1125ce7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce81 cmp dword ptr [eax + 0xc], 0x1128176c */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1128176cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ce88 je 0x1125cf01 */
  if (C.zf) goto L_1125cf01;
  /* 1125ce8a push 2 */
  push32((uint32_t)(0x2u));
  /* 1125ce8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ce8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1125ce92 push edx */
  push32((uint32_t)(EDX));
  /* 1125ce93 call 0x1124d2b0 */
  push32(0x1125ce98u); f_1124d2b0();
  /* 1125ce98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ce9b push 2 */
  push32((uint32_t)(0x2u));
  /* 1125ce9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cea0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1125cea3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125cea4 call 0x1124d2b0 */
  push32(0x1125cea9u); f_1124d2b0();
  /* 1125cea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125ceac push 2 */
  push32((uint32_t)(0x2u));
  /* 1125ceae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ceb1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1125ceb4 push eax */
  push32((uint32_t)(EAX));
  /* 1125ceb5 call 0x1124d2b0 */
  push32(0x1125cebau); f_1124d2b0();
  /* 1125ceba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cebd push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cec2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1125cec5 push edx */
  push32((uint32_t)(EDX));
  /* 1125cec6 call 0x1124d2b0 */
  push32(0x1125cecbu); f_1124d2b0();
  /* 1125cecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cece push 2 */
  push32((uint32_t)(0x2u));
  /* 1125ced0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ced3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1125ced6 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ced7 call 0x1124d2b0 */
  push32(0x1125cedcu); f_1124d2b0();
  /* 1125cedc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cedf push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cee4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1125cee7 push eax */
  push32((uint32_t)(EAX));
  /* 1125cee8 call 0x1124d2b0 */
  push32(0x1125ceedu); f_1124d2b0();
  /* 1125ceed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cef0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125cef5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1125cef8 push edx */
  push32((uint32_t)(EDX));
  /* 1125cef9 call 0x1124d2b0 */
  push32(0x1125cefeu); f_1124d2b0();
  /* 1125cefe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125cf01:;
  /* 1125cf01 pop ebp */
  EBP = (pop32());
  /* 1125cf02 ret  */
  ESPCHK(0x1125ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf10 @ 0x1125cf10 (928 bytes, 284 insns) */
void f_1125cf10(void) {
  FTRACE(0x1125cf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125cf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1125cf11 mov ebp, esp */
  EBP = (ESP);
  /* 1125cf13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125cf16 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1125cf1d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1125cf24 cmp dword ptr [0x112816e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cf2b je 0x1125d261 */
  if (C.zf) goto L_1125d261;
  /* 1125cf31 cmp dword ptr [0x112816f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112816f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cf38 jne 0x1125cf60 */
  if (!C.zf) goto L_1125cf60;
  /* 1125cf3a push 0x112816f0 */
  push32((uint32_t)(0x112816f0u));
  /* 1125cf3f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1125cf44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125cf46 mov ax, word ptr [0x11281728] */
  AX = (r16((uint32_t)(0x11281728)));
  /* 1125cf4c push eax */
  push32((uint32_t)(EAX));
  /* 1125cf4d push 0 */
  push32((uint32_t)(0x0u));
  /* 1125cf4f call 0x11260540 */
  push32(0x1125cf54u); f_11260540();
  /* 1125cf54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cf57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125cf59 je 0x1125cf60 */
  if (C.zf) goto L_1125cf60;
  /* 1125cf5b jmp 0x1125d222 */
  goto L_1125d222;
L_1125cf60:;
  /* 1125cf60 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1125cf62 push 0x1127c3a8 */
  push32((uint32_t)(0x1127c3a8u));
  /* 1125cf67 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cf69 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1125cf6e call 0x1124c820 */
  push32(0x1125cf73u); f_1124c820();
  /* 1125cf73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cf76 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1125cf79 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1125cf7b push 0x1127c3a8 */
  push32((uint32_t)(0x1127c3a8u));
  /* 1125cf80 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cf82 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1125cf87 call 0x1124c820 */
  push32(0x1125cf8cu); f_1124c820();
  /* 1125cf8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cf8f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1125cf92 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1125cf94 push 0x1127c3a8 */
  push32((uint32_t)(0x1127c3a8u));
  /* 1125cf99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cf9b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1125cfa0 call 0x1124c820 */
  push32(0x1125cfa5u); f_1124c820();
  /* 1125cfa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cfa8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1125cfab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1125cfad push 0x1127c3a8 */
  push32((uint32_t)(0x1127c3a8u));
  /* 1125cfb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125cfb4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1125cfb9 call 0x1124c820 */
  push32(0x1125cfbeu); f_1124c820();
  /* 1125cfbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cfc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1125cfc4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cfc8 je 0x1125cfdc */
  if (C.zf) goto L_1125cfdc;
  /* 1125cfca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cfce je 0x1125cfdc */
  if (C.zf) goto L_1125cfdc;
  /* 1125cfd0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cfd4 je 0x1125cfdc */
  if (C.zf) goto L_1125cfdc;
  /* 1125cfd6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125cfda jne 0x1125cfe1 */
  if (!C.zf) goto L_1125cfe1;
L_1125cfdc:;
  /* 1125cfdc jmp 0x1125d222 */
  goto L_1125d222;
L_1125cfe1:;
  /* 1125cfe1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125cfe4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1125cfe7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1125cfee jmp 0x1125cff9 */
  goto L_1125cff9;
L_1125cff0:;
  /* 1125cff0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125cff3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125cff6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1125cff9:;
  /* 1125cff9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d000 jge 0x1125d015 */
  if ((C.sf==C.of)) goto L_1125d015;
  /* 1125d002 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d005 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1125d008 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1125d00a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d00d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d010 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1125d013 jmp 0x1125cff0 */
  goto L_1125cff0;
L_1125d015:;
  /* 1125d015 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1125d018 push eax */
  push32((uint32_t)(EAX));
  /* 1125d019 mov ecx, dword ptr [0x112816f0] */
  ECX = (r32((uint32_t)(0x112816f0)));
  /* 1125d01f push ecx */
  push32((uint32_t)(ECX));
  /* 1125d020 call dword ptr [0x112833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112833a0))), 0x1125d026u);
  /* 1125d026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d028 jne 0x1125d02f */
  if (!C.zf) goto L_1125d02f;
  /* 1125d02a jmp 0x1125d222 */
  goto L_1125d222;
L_1125d02f:;
  /* 1125d02f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d033 jbe 0x1125d03a */
  if ((C.cf||C.zf)) goto L_1125d03a;
  /* 1125d035 jmp 0x1125d222 */
  goto L_1125d222;
L_1125d03a:;
  /* 1125d03a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1125d03d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125d043 mov dword ptr [0x1127efe0], edx */
  w32((uint32_t)(0x1127efe0), (EDX));
  /* 1125d049 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d050 jle 0x1125d0a9 */
  if ((C.zf||C.sf!=C.of)) goto L_1125d0a9;
  /* 1125d052 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1125d055 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1125d058 jmp 0x1125d063 */
  goto L_1125d063;
L_1125d05a:;
  /* 1125d05a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d05d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d060 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1125d063:;
  /* 1125d063 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d066 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d068 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125d06a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d06c je 0x1125d0a9 */
  if (C.zf) goto L_1125d0a9;
  /* 1125d06e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d071 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125d073 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1125d076 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125d078 je 0x1125d0a9 */
  if (C.zf) goto L_1125d0a9;
  /* 1125d07a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d07d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125d07f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1125d081 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1125d084 jmp 0x1125d08f */
  goto L_1125d08f;
L_1125d086:;
  /* 1125d086 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125d089 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d08c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1125d08f:;
  /* 1125d08f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d092 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125d094 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1125d097 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d09a jg 0x1125d0a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125d0a7;
  /* 1125d09c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125d09f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d0a2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1125d0a5 jmp 0x1125d086 */
  goto L_1125d086;
L_1125d0a7:;
  /* 1125d0a7 jmp 0x1125d05a */
  goto L_1125d05a;
L_1125d0a9:;
  /* 1125d0a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125d0ab push 0 */
  push32((uint32_t)(0x0u));
  /* 1125d0ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1125d0af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125d0b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d0b5 push eax */
  push32((uint32_t)(EAX));
  /* 1125d0b6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1125d0bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125d0be push ecx */
  push32((uint32_t)(ECX));
  /* 1125d0bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1125d0c1 call 0x11258c30 */
  push32(0x1125d0c6u); f_11258c30();
  /* 1125d0c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d0c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d0cb jne 0x1125d0d2 */
  if (!C.zf) goto L_1125d0d2;
  /* 1125d0cd jmp 0x1125d222 */
  goto L_1125d222;
L_1125d0d2:;
  /* 1125d0d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125d0d5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1125d0da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125d0dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1125d0e0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1125d0e7 jmp 0x1125d0f2 */
  goto L_1125d0f2;
L_1125d0e9:;
  /* 1125d0e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125d0ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d0ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1125d0f2:;
  /* 1125d0f2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d0f9 jge 0x1125d110 */
  if ((C.sf==C.of)) goto L_1125d110;
  /* 1125d0fb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125d0fe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1125d102 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1125d105 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1125d108 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d10b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1125d10e jmp 0x1125d0e9 */
  goto L_1125d0e9;
L_1125d110:;
  /* 1125d110 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125d112 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125d114 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125d117 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d11a push edx */
  push32((uint32_t)(EDX));
  /* 1125d11b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1125d120 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125d123 push eax */
  push32((uint32_t)(EAX));
  /* 1125d124 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125d126 call 0x112607e0 */
  push32(0x1125d12bu); f_112607e0();
  /* 1125d12b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d12e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d130 jne 0x1125d137 */
  if (!C.zf) goto L_1125d137;
  /* 1125d132 jmp 0x1125d222 */
  goto L_1125d222;
L_1125d137:;
  /* 1125d137 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125d13a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1125d13f cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d146 jle 0x1125d1a3 */
  if ((C.zf||C.sf!=C.of)) goto L_1125d1a3;
  /* 1125d148 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1125d14b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1125d14e jmp 0x1125d159 */
  goto L_1125d159;
L_1125d150:;
  /* 1125d150 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d153 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d156 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1125d159:;
  /* 1125d159 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d15c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1125d15e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1125d160 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125d162 je 0x1125d1a3 */
  if (C.zf) goto L_1125d1a3;
  /* 1125d164 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d167 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125d169 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1125d16c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125d16e je 0x1125d1a3 */
  if (C.zf) goto L_1125d1a3;
  /* 1125d170 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d175 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125d177 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1125d17a jmp 0x1125d185 */
  goto L_1125d185;
L_1125d17c:;
  /* 1125d17c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125d17f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d182 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1125d185:;
  /* 1125d185 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1125d188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d18a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1125d18d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d190 jg 0x1125d1a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1125d1a1;
  /* 1125d192 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1125d195 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125d198 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1125d19f jmp 0x1125d17c */
  goto L_1125d17c;
L_1125d1a1:;
  /* 1125d1a1 jmp 0x1125d150 */
  goto L_1125d150;
L_1125d1a3:;
  /* 1125d1a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125d1a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d1a9 mov dword ptr [0x1127efec], eax */
  w32((uint32_t)(0x1127efec), (EAX));
  /* 1125d1ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125d1b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d1b4 mov dword ptr [0x1127eff0], ecx */
  w32((uint32_t)(0x1127eff0), (ECX));
  /* 1125d1ba cmp dword ptr [0x11281714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d1c1 je 0x1125d1d4 */
  if (C.zf) goto L_1125d1d4;
  /* 1125d1c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d1c5 mov edx, dword ptr [0x11281714] */
  EDX = (r32((uint32_t)(0x11281714)));
  /* 1125d1cb push edx */
  push32((uint32_t)(EDX));
  /* 1125d1cc call 0x1124d2b0 */
  push32(0x1125d1d1u); f_1124d2b0();
  /* 1125d1d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125d1d4:;
  /* 1125d1d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125d1d7 mov dword ptr [0x11281714], eax */
  w32((uint32_t)(0x11281714), (EAX));
  /* 1125d1dc cmp dword ptr [0x11281718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d1e3 je 0x1125d1f6 */
  if (C.zf) goto L_1125d1f6;
  /* 1125d1e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d1e7 mov ecx, dword ptr [0x11281718] */
  ECX = (r32((uint32_t)(0x11281718)));
  /* 1125d1ed push ecx */
  push32((uint32_t)(ECX));
  /* 1125d1ee call 0x1124d2b0 */
  push32(0x1125d1f3u); f_1124d2b0();
  /* 1125d1f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125d1f6:;
  /* 1125d1f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125d1f9 mov dword ptr [0x11281718], edx */
  w32((uint32_t)(0x11281718), (EDX));
  /* 1125d1ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d201 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125d204 push eax */
  push32((uint32_t)(EAX));
  /* 1125d205 call 0x1124d2b0 */
  push32(0x1125d20au); f_1124d2b0();
  /* 1125d20a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d20d push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d20f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125d212 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d213 call 0x1124d2b0 */
  push32(0x1125d218u); f_1124d2b0();
  /* 1125d218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d21b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d21d jmp 0x1125d2ac */
  goto L_1125d2ac;
L_1125d222:;
  /* 1125d222 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d224 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1125d227 push edx */
  push32((uint32_t)(EDX));
  /* 1125d228 call 0x1124d2b0 */
  push32(0x1125d22du); f_1124d2b0();
  /* 1125d22d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d230 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d232 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1125d235 push eax */
  push32((uint32_t)(EAX));
  /* 1125d236 call 0x1124d2b0 */
  push32(0x1125d23bu); f_1124d2b0();
  /* 1125d23b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d23e push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d240 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1125d243 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d244 call 0x1124d2b0 */
  push32(0x1125d249u); f_1124d2b0();
  /* 1125d249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d24c push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d24e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1125d251 push edx */
  push32((uint32_t)(EDX));
  /* 1125d252 call 0x1124d2b0 */
  push32(0x1125d257u); f_1124d2b0();
  /* 1125d257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d25a mov eax, 1 */
  EAX = (0x1u);
  /* 1125d25f jmp 0x1125d2ac */
  goto L_1125d2ac;
L_1125d261:;
  /* 1125d261 mov dword ptr [0x1127efec], 0x1127eff6 */
  w32((uint32_t)(0x1127efec), (0x1127eff6u));
  /* 1125d26b mov dword ptr [0x1127eff0], 0x1127eff6 */
  w32((uint32_t)(0x1127eff0), (0x1127eff6u));
  /* 1125d275 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d277 mov eax, dword ptr [0x11281714] */
  EAX = (r32((uint32_t)(0x11281714)));
  /* 1125d27c push eax */
  push32((uint32_t)(EAX));
  /* 1125d27d call 0x1124d2b0 */
  push32(0x1125d282u); f_1124d2b0();
  /* 1125d282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d285 push 2 */
  push32((uint32_t)(0x2u));
  /* 1125d287 mov ecx, dword ptr [0x11281718] */
  ECX = (r32((uint32_t)(0x11281718)));
  /* 1125d28d push ecx */
  push32((uint32_t)(ECX));
  /* 1125d28e call 0x1124d2b0 */
  push32(0x1125d293u); f_1124d2b0();
  /* 1125d293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d296 mov dword ptr [0x11281714], 0 */
  w32((uint32_t)(0x11281714), (0x0u));
  /* 1125d2a0 mov dword ptr [0x11281718], 0 */
  w32((uint32_t)(0x11281718), (0x0u));
  /* 1125d2aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1125d2ac:;
  /* 1125d2ac mov esp, ebp */
  ESP = (EBP);
  /* 1125d2ae pop ebp */
  EBP = (pop32());
  /* 1125d2af ret  */
  ESPCHK(0x1125cf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d2b0 @ 0x1125d2b0 (7 bytes, 5 insns) */
void f_1125d2b0(void) {
  FTRACE(0x1125d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1125d2b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d2b5 pop ebp */
  EBP = (pop32());
  /* 1125d2b6 ret  */
  ESPCHK(0x1125d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d2c0 @ 0x1125d2c0 (62 bytes, 35 insns) */
void f_1125d2c0(void) {
  FTRACE(0x1125d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1125d2c3 push esi */
  push32((uint32_t)(ESI));
  /* 1125d2c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d2c6 push eax */
  push32((uint32_t)(EAX));
  /* 1125d2c7 push eax */
  push32((uint32_t)(EAX));
  /* 1125d2c8 push eax */
  push32((uint32_t)(EAX));
  /* 1125d2c9 push eax */
  push32((uint32_t)(EAX));
  /* 1125d2ca push eax */
  push32((uint32_t)(EAX));
  /* 1125d2cb push eax */
  push32((uint32_t)(EAX));
  /* 1125d2cc push eax */
  push32((uint32_t)(EAX));
  /* 1125d2cd push eax */
  push32((uint32_t)(EAX));
  /* 1125d2ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125d2d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1125d2d4:;
  /* 1125d2d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125d2d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1125d2d8 je 0x1125d2e1 */
  if (C.zf) goto L_1125d2e1;
  /* 1125d2da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1125d2db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1125d2db");
  /* 1125d2df jmp 0x1125d2d4 */
  goto L_1125d2d4;
L_1125d2e1:;
  /* 1125d2e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d2e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1125d2e7 nop  */
  /* nop */
L_1125d2e8:;
  /* 1125d2e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1125d2e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1125d2eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1125d2ed je 0x1125d2f6 */
  if (C.zf) goto L_1125d2f6;
  /* 1125d2ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1125d2f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1125d2f0");
  /* 1125d2f4 jae 0x1125d2e8 */
  if (!C.cf) goto L_1125d2e8;
L_1125d2f6:;
  /* 1125d2f6 mov eax, ecx */
  EAX = (ECX);
  /* 1125d2f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d2fb pop esi */
  ESI = (pop32());
  /* 1125d2fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1125d2fd ret  */
  ESPCHK(0x1125d2c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1125d300 (56 bytes, 31 insns) */
void f_1125d300(void) {
  FTRACE(0x1125d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d300 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d301 mov ebp, esp */
  EBP = (ESP);
  /* 1125d303 push edi */
  push32((uint32_t)(EDI));
  /* 1125d304 push esi */
  push32((uint32_t)(ESI));
  /* 1125d305 push ebx */
  push32((uint32_t)(EBX));
  /* 1125d306 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125d309 jecxz 0x1125d331 */
  x86_unimpl("jecxz @ 0x1125d309");
  /* 1125d30b mov ebx, ecx */
  EBX = (ECX);
  /* 1125d30d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d310 mov esi, edi */
  ESI = (EDI);
  /* 1125d312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d314 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1125d316 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125d318 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d31a mov edi, esi */
  EDI = (ESI);
  /* 1125d31c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1125d31f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1125d321 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1125d324 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125d326 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1125d329 ja 0x1125d32f */
  if ((!C.cf&&!C.zf)) goto L_1125d32f;
  /* 1125d32b je 0x1125d331 */
  if (C.zf) goto L_1125d331;
  /* 1125d32d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1125d32e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1125d32f:;
  /* 1125d32f not ecx */
  ECX = (~(ECX));
L_1125d331:;
  /* 1125d331 mov eax, ecx */
  EAX = (ECX);
  /* 1125d333 pop ebx */
  EBX = (pop32());
  /* 1125d334 pop esi */
  ESI = (pop32());
  /* 1125d335 pop edi */
  EDI = (pop32());
  /* 1125d336 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1125d337 ret  */
  ESPCHK(0x1125d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d340 @ 0x1125d340 (58 bytes, 32 insns) */
void f_1125d340(void) {
  FTRACE(0x1125d340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d340 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d341 mov ebp, esp */
  EBP = (ESP);
  /* 1125d343 push esi */
  push32((uint32_t)(ESI));
  /* 1125d344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d346 push eax */
  push32((uint32_t)(EAX));
  /* 1125d347 push eax */
  push32((uint32_t)(EAX));
  /* 1125d348 push eax */
  push32((uint32_t)(EAX));
  /* 1125d349 push eax */
  push32((uint32_t)(EAX));
  /* 1125d34a push eax */
  push32((uint32_t)(EAX));
  /* 1125d34b push eax */
  push32((uint32_t)(EAX));
  /* 1125d34c push eax */
  push32((uint32_t)(EAX));
  /* 1125d34d push eax */
  push32((uint32_t)(EAX));
  /* 1125d34e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125d351 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1125d354:;
  /* 1125d354 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1125d356 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1125d358 je 0x1125d361 */
  if (C.zf) goto L_1125d361;
  /* 1125d35a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1125d35b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1125d35b");
  /* 1125d35f jmp 0x1125d354 */
  goto L_1125d354;
L_1125d361:;
  /* 1125d361 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1125d364:;
  /* 1125d364 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1125d366 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1125d368 je 0x1125d374 */
  if (C.zf) goto L_1125d374;
  /* 1125d36a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1125d36b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1125d36b");
  /* 1125d36f jae 0x1125d364 */
  if (!C.cf) goto L_1125d364;
  /* 1125d371 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1125d374:;
  /* 1125d374 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d377 pop esi */
  ESI = (pop32());
  /* 1125d378 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1125d379 ret  */
  ESPCHK(0x1125d340u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d380 @ 0x1125d380 (512 bytes, 147 insns) */
void f_1125d380(void) {
  FTRACE(0x1125d380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d380 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d381 mov ebp, esp */
  EBP = (ESP);
  /* 1125d383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d386 cmp dword ptr [0x11281760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d38d jne 0x1125d3b2 */
  if (!C.zf) goto L_1125d3b2;
  /* 1125d38f call 0x1125de50 */
  push32(0x1125d394u); f_1125de50();
  /* 1125d394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d396 je 0x1125d3a2 */
  if (C.zf) goto L_1125d3a2;
  /* 1125d398 mov eax, dword ptr [0x11283360] */
  EAX = (r32((uint32_t)(0x11283360)));
  /* 1125d39d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125d3a0 jmp 0x1125d3a9 */
  goto L_1125d3a9;
L_1125d3a2:;
  /* 1125d3a2 mov dword ptr [ebp - 8], 0x1125dea0 */
  w32((uint32_t)(EBP + -0x8), (0x1125dea0u));
L_1125d3a9:;
  /* 1125d3a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125d3ac mov dword ptr [0x11281760], ecx */
  w32((uint32_t)(0x11281760), (ECX));
L_1125d3b2:;
  /* 1125d3b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d3b6 jne 0x1125d3c2 */
  if (!C.zf) goto L_1125d3c2;
  /* 1125d3b8 call 0x1125dca0 */
  push32(0x1125d3bdu); f_1125dca0();
  /* 1125d3bd jmp 0x1125d48e */
  goto L_1125d48e;
L_1125d3c2:;
  /* 1125d3c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d3c5 mov dword ptr [0x11281750], edx */
  w32((uint32_t)(0x11281750), (EDX));
  /* 1125d3cb cmp dword ptr [0x11281750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d3d2 je 0x1125d3f4 */
  if (C.zf) goto L_1125d3f4;
  /* 1125d3d4 mov eax, dword ptr [0x11281750] */
  EAX = (r32((uint32_t)(0x11281750)));
  /* 1125d3d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125d3dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125d3de je 0x1125d3f4 */
  if (C.zf) goto L_1125d3f4;
  /* 1125d3e0 push 0x11281750 */
  push32((uint32_t)(0x11281750u));
  /* 1125d3e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1125d3e7 push 0x112800b0 */
  push32((uint32_t)(0x112800b0u));
  /* 1125d3ec call 0x1125d580 */
  push32(0x1125d3f1u); f_1125d580();
  /* 1125d3f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125d3f4:;
  /* 1125d3f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d3f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d3fa mov dword ptr [0x11281754], edx */
  w32((uint32_t)(0x11281754), (EDX));
  /* 1125d400 cmp dword ptr [0x11281754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d407 je 0x1125d429 */
  if (C.zf) goto L_1125d429;
  /* 1125d409 mov eax, dword ptr [0x11281754] */
  EAX = (r32((uint32_t)(0x11281754)));
  /* 1125d40e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125d411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125d413 je 0x1125d429 */
  if (C.zf) goto L_1125d429;
  /* 1125d415 push 0x11281754 */
  push32((uint32_t)(0x11281754u));
  /* 1125d41a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1125d41c push 0x1127fff8 */
  push32((uint32_t)(0x1127fff8u));
  /* 1125d421 call 0x1125d580 */
  push32(0x1125d426u); f_1125d580();
  /* 1125d426 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125d429:;
  /* 1125d429 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
  /* 1125d433 cmp dword ptr [0x11281750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d43a je 0x1125d46d */
  if (C.zf) goto L_1125d46d;
  /* 1125d43c mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125d442 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1125d445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d447 je 0x1125d46d */
  if (C.zf) goto L_1125d46d;
  /* 1125d449 cmp dword ptr [0x11281754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d450 je 0x1125d466 */
  if (C.zf) goto L_1125d466;
  /* 1125d452 mov ecx, dword ptr [0x11281754] */
  ECX = (r32((uint32_t)(0x11281754)));
  /* 1125d458 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1125d45b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125d45d je 0x1125d466 */
  if (C.zf) goto L_1125d466;
  /* 1125d45f call 0x1125d610 */
  push32(0x1125d464u); f_1125d610();
  /* 1125d464 jmp 0x1125d46b */
  goto L_1125d46b;
L_1125d466:;
  /* 1125d466 call 0x1125da00 */
  push32(0x1125d46bu); f_1125da00();
L_1125d46b:;
  /* 1125d46b jmp 0x1125d48e */
  goto L_1125d48e;
L_1125d46d:;
  /* 1125d46d cmp dword ptr [0x11281754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d474 je 0x1125d489 */
  if (C.zf) goto L_1125d489;
  /* 1125d476 mov eax, dword ptr [0x11281754] */
  EAX = (r32((uint32_t)(0x11281754)));
  /* 1125d47b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125d47e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125d480 je 0x1125d489 */
  if (C.zf) goto L_1125d489;
  /* 1125d482 call 0x1125dba0 */
  push32(0x1125d487u); f_1125dba0();
  /* 1125d487 jmp 0x1125d48e */
  goto L_1125d48e;
L_1125d489:;
  /* 1125d489 call 0x1125dca0 */
  push32(0x1125d48eu); f_1125dca0();
L_1125d48e:;
  /* 1125d48e cmp dword ptr [0x11281758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d495 jne 0x1125d49e */
  if (!C.zf) goto L_1125d49e;
  /* 1125d497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d499 jmp 0x1125d57c */
  goto L_1125d57c;
L_1125d49e:;
  /* 1125d49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d4a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d4a7 push edx */
  push32((uint32_t)(EDX));
  /* 1125d4a8 call 0x1125dcd0 */
  push32(0x1125d4adu); f_1125dcd0();
  /* 1125d4ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d4b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125d4b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d4b7 je 0x1125d4cc */
  if (C.zf) goto L_1125d4cc;
  /* 1125d4b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d4bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125d4c1 push eax */
  push32((uint32_t)(EAX));
  /* 1125d4c2 call dword ptr [0x11283370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283370))), 0x1125d4c8u);
  /* 1125d4c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d4ca jne 0x1125d4d3 */
  if (!C.zf) goto L_1125d4d3;
L_1125d4cc:;
  /* 1125d4cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d4ce jmp 0x1125d57c */
  goto L_1125d57c;
L_1125d4d3:;
  /* 1125d4d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125d4d5 mov ecx, dword ptr [0x11281740] */
  ECX = (r32((uint32_t)(0x11281740)));
  /* 1125d4db push ecx */
  push32((uint32_t)(ECX));
  /* 1125d4dc call dword ptr [0x11283368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283368))), 0x1125d4e2u);
  /* 1125d4e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d4e4 jne 0x1125d4ed */
  if (!C.zf) goto L_1125d4ed;
  /* 1125d4e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d4e8 jmp 0x1125d57c */
  goto L_1125d57c;
L_1125d4ed:;
  /* 1125d4ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d4f1 je 0x1125d518 */
  if (C.zf) goto L_1125d518;
  /* 1125d4f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125d4f6 mov ax, word ptr [0x11281740] */
  AX = (r16((uint32_t)(0x11281740)));
  /* 1125d4fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1125d4ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125d502 mov dx, word ptr [0x1128175c] */
  DX = (r16((uint32_t)(0x1128175c)));
  /* 1125d509 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1125d50d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1125d510 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1125d514 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1125d518:;
  /* 1125d518 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d51c je 0x1125d577 */
  if (C.zf) goto L_1125d577;
  /* 1125d51e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1125d520 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125d523 push edx */
  push32((uint32_t)(EDX));
  /* 1125d524 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1125d529 mov eax, dword ptr [0x11281740] */
  EAX = (r32((uint32_t)(0x11281740)));
  /* 1125d52e push eax */
  push32((uint32_t)(EAX));
  /* 1125d52f call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125d535u);
  /* 1125d535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d537 jne 0x1125d53d */
  if (!C.zf) goto L_1125d53d;
  /* 1125d539 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d53b jmp 0x1125d57c */
  goto L_1125d57c;
L_1125d53d:;
  /* 1125d53d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1125d53f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125d542 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d545 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d546 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1125d54b mov edx, dword ptr [0x1128175c] */
  EDX = (r32((uint32_t)(0x1128175c)));
  /* 1125d551 push edx */
  push32((uint32_t)(EDX));
  /* 1125d552 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125d558u);
  /* 1125d558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d55a jne 0x1125d560 */
  if (!C.zf) goto L_1125d560;
  /* 1125d55c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125d55e jmp 0x1125d57c */
  goto L_1125d57c;
L_1125d560:;
  /* 1125d560 push 0xa */
  push32((uint32_t)(0xau));
  /* 1125d562 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125d565 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d56a push eax */
  push32((uint32_t)(EAX));
  /* 1125d56b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d56e push ecx */
  push32((uint32_t)(ECX));
  /* 1125d56f call 0x11250ac0 */
  push32(0x1125d574u); f_11250ac0();
  /* 1125d574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125d577:;
  /* 1125d577 mov eax, 1 */
  EAX = (0x1u);
L_1125d57c:;
  /* 1125d57c mov esp, ebp */
  ESP = (EBP);
  /* 1125d57e pop ebp */
  EBP = (pop32());
  /* 1125d57f ret  */
  ESPCHK(0x1125d380u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d580 @ 0x1125d580 (130 bytes, 47 insns) */
void f_1125d580(void) {
  FTRACE(0x1125d580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d580 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d581 mov ebp, esp */
  EBP = (ESP);
  /* 1125d583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d586 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1125d58d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1125d594:;
  /* 1125d594 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125d597 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d59a jg 0x1125d5fe */
  if ((!C.zf&&C.sf==C.of)) goto L_1125d5fe;
  /* 1125d59c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d5a0 je 0x1125d5fe */
  if (C.zf) goto L_1125d5fe;
  /* 1125d5a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1125d5a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d5a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1125d5a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d5ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1125d5ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125d5b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d5b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d5b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1125d5b9 push eax */
  push32((uint32_t)(EAX));
  /* 1125d5ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125d5bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1125d5bf push edx */
  push32((uint32_t)(EDX));
  /* 1125d5c0 call 0x11260a50 */
  push32(0x1125d5c5u); f_11260a50();
  /* 1125d5c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d5c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1125d5cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d5cf jne 0x1125d5e2 */
  if (!C.zf) goto L_1125d5e2;
  /* 1125d5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d5d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d5d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1125d5db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1125d5de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1125d5e0 jmp 0x1125d5fc */
  goto L_1125d5fc;
L_1125d5e2:;
  /* 1125d5e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d5e6 jge 0x1125d5f3 */
  if ((C.sf==C.of)) goto L_1125d5f3;
  /* 1125d5e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d5eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d5ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1125d5f1 jmp 0x1125d5fc */
  goto L_1125d5fc;
L_1125d5f3:;
  /* 1125d5f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d5f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d5f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1125d5fc:;
  /* 1125d5fc jmp 0x1125d594 */
  goto L_1125d594;
L_1125d5fe:;
  /* 1125d5fe mov esp, ebp */
  ESP = (EBP);
  /* 1125d600 pop ebp */
  EBP = (pop32());
  /* 1125d601 ret  */
  ESPCHK(0x1125d580u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d610 @ 0x1125d610 (186 bytes, 50 insns) */
void f_1125d610(void) {
  FTRACE(0x1125d610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d610 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d611 mov ebp, esp */
  EBP = (ESP);
  /* 1125d613 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d614 mov eax, dword ptr [0x11281750] */
  EAX = (r32((uint32_t)(0x11281750)));
  /* 1125d619 push eax */
  push32((uint32_t)(EAX));
  /* 1125d61a call 0x11250db0 */
  push32(0x1125d61fu); f_11250db0();
  /* 1125d61f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125d624 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d627 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1125d62a mov dword ptr [0x1128174c], ecx */
  w32((uint32_t)(0x1128174c), (ECX));
  /* 1125d630 mov edx, dword ptr [0x11281754] */
  EDX = (r32((uint32_t)(0x11281754)));
  /* 1125d636 push edx */
  push32((uint32_t)(EDX));
  /* 1125d637 call 0x11250db0 */
  push32(0x1125d63cu); f_11250db0();
  /* 1125d63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d63f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125d641 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d644 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1125d647 mov dword ptr [0x11281744], ecx */
  w32((uint32_t)(0x11281744), (ECX));
  /* 1125d64d mov dword ptr [0x11281740], 0 */
  w32((uint32_t)(0x11281740), (0x0u));
  /* 1125d657 cmp dword ptr [0x1128174c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128174c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d65e je 0x1125d669 */
  if (C.zf) goto L_1125d669;
  /* 1125d660 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1125d667 jmp 0x1125d67b */
  goto L_1125d67b;
L_1125d669:;
  /* 1125d669 mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125d66f push edx */
  push32((uint32_t)(EDX));
  /* 1125d670 call 0x1125e0b0 */
  push32(0x1125d675u); f_1125e0b0();
  /* 1125d675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d678 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125d67b:;
  /* 1125d67b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125d67e mov dword ptr [0x11281748], eax */
  w32((uint32_t)(0x11281748), (EAX));
  /* 1125d683 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125d685 push 0x1125d6d0 */
  push32((uint32_t)(0x1125d6d0u));
  /* 1125d68a call dword ptr [0x1128335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128335c))), 0x1125d690u);
  /* 1125d690 mov ecx, dword ptr [0x11281758] */
  ECX = (r32((uint32_t)(0x11281758)));
  /* 1125d696 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1125d69c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125d69e je 0x1125d6bc */
  if (C.zf) goto L_1125d6bc;
  /* 1125d6a0 mov edx, dword ptr [0x11281758] */
  EDX = (r32((uint32_t)(0x11281758)));
  /* 1125d6a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1125d6ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125d6ae je 0x1125d6bc */
  if (C.zf) goto L_1125d6bc;
  /* 1125d6b0 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d6b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1125d6b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d6ba jne 0x1125d6c6 */
  if (!C.zf) goto L_1125d6c6;
L_1125d6bc:;
  /* 1125d6bc mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
L_1125d6c6:;
  /* 1125d6c6 mov esp, ebp */
  ESP = (EBP);
  /* 1125d6c8 pop ebp */
  EBP = (pop32());
  /* 1125d6c9 ret  */
  ESPCHK(0x1125d610u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d6d0 @ 0x1125d6d0 (804 bytes, 220 insns) */
void f_1125d6d0(void) {
  FTRACE(0x1125d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1125d6d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125d6d9 push eax */
  push32((uint32_t)(EAX));
  /* 1125d6da call 0x1125e030 */
  push32(0x1125d6dfu); f_1125e030();
  /* 1125d6df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d6e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1125d6e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1125d6e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125d6ea push ecx */
  push32((uint32_t)(ECX));
  /* 1125d6eb mov edx, dword ptr [0x11281744] */
  EDX = (r32((uint32_t)(0x11281744)));
  /* 1125d6f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125d6f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d6f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1125d6fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d701 push edx */
  push32((uint32_t)(EDX));
  /* 1125d702 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d705 push eax */
  push32((uint32_t)(EAX));
  /* 1125d706 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125d70cu);
  /* 1125d70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d70e jne 0x1125d724 */
  if (!C.zf) goto L_1125d724;
  /* 1125d710 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
  /* 1125d71a mov eax, 1 */
  EAX = (0x1u);
  /* 1125d71f jmp 0x1125d9ee */
  goto L_1125d9ee;
L_1125d724:;
  /* 1125d724 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125d727 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d728 mov edx, dword ptr [0x11281754] */
  EDX = (r32((uint32_t)(0x11281754)));
  /* 1125d72e push edx */
  push32((uint32_t)(EDX));
  /* 1125d72f call 0x11260a50 */
  push32(0x1125d734u); f_11260a50();
  /* 1125d734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d739 jne 0x1125d85f */
  if (!C.zf) goto L_1125d85f;
  /* 1125d73f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1125d741 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1125d744 push eax */
  push32((uint32_t)(EAX));
  /* 1125d745 mov ecx, dword ptr [0x1128174c] */
  ECX = (r32((uint32_t)(0x1128174c)));
  /* 1125d74b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125d74d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d74f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1125d755 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d75b push ecx */
  push32((uint32_t)(ECX));
  /* 1125d75c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d75f push edx */
  push32((uint32_t)(EDX));
  /* 1125d760 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125d766u);
  /* 1125d766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d768 jne 0x1125d77e */
  if (!C.zf) goto L_1125d77e;
  /* 1125d76a mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
  /* 1125d774 mov eax, 1 */
  EAX = (0x1u);
  /* 1125d779 jmp 0x1125d9ee */
  goto L_1125d9ee;
L_1125d77e:;
  /* 1125d77e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1125d781 push eax */
  push32((uint32_t)(EAX));
  /* 1125d782 mov ecx, dword ptr [0x11281750] */
  ECX = (r32((uint32_t)(0x11281750)));
  /* 1125d788 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d789 call 0x11260a50 */
  push32(0x1125d78eu); f_11260a50();
  /* 1125d78e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d793 jne 0x1125d7c0 */
  if (!C.zf) goto L_1125d7c0;
  /* 1125d795 mov edx, dword ptr [0x11281758] */
  EDX = (r32((uint32_t)(0x11281758)));
  /* 1125d79b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1125d7a1 mov dword ptr [0x11281758], edx */
  w32((uint32_t)(0x11281758), (EDX));
  /* 1125d7a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d7aa mov dword ptr [0x1128175c], eax */
  w32((uint32_t)(0x1128175c), (EAX));
  /* 1125d7af mov ecx, dword ptr [0x1128175c] */
  ECX = (r32((uint32_t)(0x1128175c)));
  /* 1125d7b5 mov dword ptr [0x11281740], ecx */
  w32((uint32_t)(0x11281740), (ECX));
  /* 1125d7bb jmp 0x1125d85f */
  goto L_1125d85f;
L_1125d7c0:;
  /* 1125d7c0 mov edx, dword ptr [0x11281758] */
  EDX = (r32((uint32_t)(0x11281758)));
  /* 1125d7c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1125d7c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125d7cb jne 0x1125d85f */
  if (!C.zf) goto L_1125d85f;
  /* 1125d7d1 cmp dword ptr [0x11281748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d7d8 je 0x1125d82d */
  if (C.zf) goto L_1125d82d;
  /* 1125d7da mov eax, dword ptr [0x11281748] */
  EAX = (r32((uint32_t)(0x11281748)));
  /* 1125d7df push eax */
  push32((uint32_t)(EAX));
  /* 1125d7e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125d7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d7e4 mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125d7ea push edx */
  push32((uint32_t)(EDX));
  /* 1125d7eb call 0x11260b20 */
  push32(0x1125d7f0u); f_11260b20();
  /* 1125d7f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d7f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d7f5 jne 0x1125d82d */
  if (!C.zf) goto L_1125d82d;
  /* 1125d7f7 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d7fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1125d7fe mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
  /* 1125d803 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d806 mov dword ptr [0x1128175c], ecx */
  w32((uint32_t)(0x1128175c), (ECX));
  /* 1125d80c mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125d812 push edx */
  push32((uint32_t)(EDX));
  /* 1125d813 call 0x11250db0 */
  push32(0x1125d818u); f_11250db0();
  /* 1125d818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d81b cmp eax, dword ptr [0x11281748] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11281748))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d821 jne 0x1125d82b */
  if (!C.zf) goto L_1125d82b;
  /* 1125d823 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d826 mov dword ptr [0x11281740], eax */
  w32((uint32_t)(0x11281740), (EAX));
L_1125d82b:;
  /* 1125d82b jmp 0x1125d85f */
  goto L_1125d85f;
L_1125d82d:;
  /* 1125d82d mov ecx, dword ptr [0x11281758] */
  ECX = (r32((uint32_t)(0x11281758)));
  /* 1125d833 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1125d836 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125d838 jne 0x1125d85f */
  if (!C.zf) goto L_1125d85f;
  /* 1125d83a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d83d push edx */
  push32((uint32_t)(EDX));
  /* 1125d83e call 0x1125dd70 */
  push32(0x1125d843u); f_1125dd70();
  /* 1125d843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d848 je 0x1125d85f */
  if (C.zf) goto L_1125d85f;
  /* 1125d84a mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d84f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1125d851 mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
  /* 1125d856 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d859 mov dword ptr [0x1128175c], ecx */
  w32((uint32_t)(0x1128175c), (ECX));
L_1125d85f:;
  /* 1125d85f mov edx, dword ptr [0x11281758] */
  EDX = (r32((uint32_t)(0x11281758)));
  /* 1125d865 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1125d86b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d871 je 0x1125d9e1 */
  if (C.zf) goto L_1125d9e1;
  /* 1125d877 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1125d879 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1125d87c push eax */
  push32((uint32_t)(EAX));
  /* 1125d87d mov ecx, dword ptr [0x1128174c] */
  ECX = (r32((uint32_t)(0x1128174c)));
  /* 1125d883 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125d885 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d887 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1125d88d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d893 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d894 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d897 push edx */
  push32((uint32_t)(EDX));
  /* 1125d898 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125d89eu);
  /* 1125d89e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d8a0 jne 0x1125d8b6 */
  if (!C.zf) goto L_1125d8b6;
  /* 1125d8a2 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
  /* 1125d8ac mov eax, 1 */
  EAX = (0x1u);
  /* 1125d8b1 jmp 0x1125d9ee */
  goto L_1125d9ee;
L_1125d8b6:;
  /* 1125d8b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1125d8b9 push eax */
  push32((uint32_t)(EAX));
  /* 1125d8ba mov ecx, dword ptr [0x11281750] */
  ECX = (r32((uint32_t)(0x11281750)));
  /* 1125d8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d8c1 call 0x11260a50 */
  push32(0x1125d8c6u); f_11260a50();
  /* 1125d8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d8c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d8cb jne 0x1125d980 */
  if (!C.zf) goto L_1125d980;
  /* 1125d8d1 mov edx, dword ptr [0x11281758] */
  EDX = (r32((uint32_t)(0x11281758)));
  /* 1125d8d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1125d8da mov dword ptr [0x11281758], edx */
  w32((uint32_t)(0x11281758), (EDX));
  /* 1125d8e0 cmp dword ptr [0x1128174c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128174c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d8e7 je 0x1125d90a */
  if (C.zf) goto L_1125d90a;
  /* 1125d8e9 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d8ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1125d8f1 mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
  /* 1125d8f6 cmp dword ptr [0x11281740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d8fd jne 0x1125d908 */
  if (!C.zf) goto L_1125d908;
  /* 1125d8ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d902 mov dword ptr [0x11281740], ecx */
  w32((uint32_t)(0x11281740), (ECX));
L_1125d908:;
  /* 1125d908 jmp 0x1125d97e */
  goto L_1125d97e;
L_1125d90a:;
  /* 1125d90a cmp dword ptr [0x11281748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d911 je 0x1125d95f */
  if (C.zf) goto L_1125d95f;
  /* 1125d913 mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125d919 push edx */
  push32((uint32_t)(EDX));
  /* 1125d91a call 0x11250db0 */
  push32(0x1125d91fu); f_11250db0();
  /* 1125d91f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d922 cmp eax, dword ptr [0x11281748] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11281748))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d928 jne 0x1125d95f */
  if (!C.zf) goto L_1125d95f;
  /* 1125d92a push 1 */
  push32((uint32_t)(0x1u));
  /* 1125d92c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d92f push eax */
  push32((uint32_t)(EAX));
  /* 1125d930 call 0x1125ddc0 */
  push32(0x1125d935u); f_1125ddc0();
  /* 1125d935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d93a je 0x1125d95d */
  if (C.zf) goto L_1125d95d;
  /* 1125d93c mov ecx, dword ptr [0x11281758] */
  ECX = (r32((uint32_t)(0x11281758)));
  /* 1125d942 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1125d945 mov dword ptr [0x11281758], ecx */
  w32((uint32_t)(0x11281758), (ECX));
  /* 1125d94b cmp dword ptr [0x11281740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d952 jne 0x1125d95d */
  if (!C.zf) goto L_1125d95d;
  /* 1125d954 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d957 mov dword ptr [0x11281740], edx */
  w32((uint32_t)(0x11281740), (EDX));
L_1125d95d:;
  /* 1125d95d jmp 0x1125d97e */
  goto L_1125d97e;
L_1125d95f:;
  /* 1125d95f mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d964 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1125d967 mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
  /* 1125d96c cmp dword ptr [0x11281740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d973 jne 0x1125d97e */
  if (!C.zf) goto L_1125d97e;
  /* 1125d975 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d978 mov dword ptr [0x11281740], ecx */
  w32((uint32_t)(0x11281740), (ECX));
L_1125d97e:;
  /* 1125d97e jmp 0x1125d9e1 */
  goto L_1125d9e1;
L_1125d980:;
  /* 1125d980 cmp dword ptr [0x1128174c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128174c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d987 jne 0x1125d9e1 */
  if (!C.zf) goto L_1125d9e1;
  /* 1125d989 cmp dword ptr [0x11281748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d990 je 0x1125d9e1 */
  if (C.zf) goto L_1125d9e1;
  /* 1125d992 mov edx, dword ptr [0x11281748] */
  EDX = (r32((uint32_t)(0x11281748)));
  /* 1125d998 push edx */
  push32((uint32_t)(EDX));
  /* 1125d999 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1125d99c push eax */
  push32((uint32_t)(EAX));
  /* 1125d99d mov ecx, dword ptr [0x11281750] */
  ECX = (r32((uint32_t)(0x11281750)));
  /* 1125d9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1125d9a4 call 0x11260b20 */
  push32(0x1125d9a9u); f_11260b20();
  /* 1125d9a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d9ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d9ae jne 0x1125d9e1 */
  if (!C.zf) goto L_1125d9e1;
  /* 1125d9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125d9b2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d9b5 push edx */
  push32((uint32_t)(EDX));
  /* 1125d9b6 call 0x1125ddc0 */
  push32(0x1125d9bbu); f_1125ddc0();
  /* 1125d9bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125d9be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125d9c0 je 0x1125d9e1 */
  if (C.zf) goto L_1125d9e1;
  /* 1125d9c2 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d9c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1125d9ca mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
  /* 1125d9cf cmp dword ptr [0x11281740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125d9d6 jne 0x1125d9e1 */
  if (!C.zf) goto L_1125d9e1;
  /* 1125d9d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125d9db mov dword ptr [0x11281740], ecx */
  w32((uint32_t)(0x11281740), (ECX));
L_1125d9e1:;
  /* 1125d9e1 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125d9e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1125d9e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125d9eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125d9ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1125d9ee:;
  /* 1125d9ee mov esp, ebp */
  ESP = (EBP);
  /* 1125d9f0 pop ebp */
  EBP = (pop32());
  /* 1125d9f1 ret 4 */
  ESPCHK(0x1125d6d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001da00 @ 0x1125da00 (116 bytes, 33 insns) */
void f_1125da00(void) {
  FTRACE(0x1125da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125da00 push ebp */
  push32((uint32_t)(EBP));
  /* 1125da01 mov ebp, esp */
  EBP = (ESP);
  /* 1125da03 push ecx */
  push32((uint32_t)(ECX));
  /* 1125da04 mov eax, dword ptr [0x11281750] */
  EAX = (r32((uint32_t)(0x11281750)));
  /* 1125da09 push eax */
  push32((uint32_t)(EAX));
  /* 1125da0a call 0x11250db0 */
  push32(0x1125da0fu); f_11250db0();
  /* 1125da0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125da12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125da14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125da17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1125da1a mov dword ptr [0x1128174c], ecx */
  w32((uint32_t)(0x1128174c), (ECX));
  /* 1125da20 cmp dword ptr [0x1128174c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128174c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125da27 je 0x1125da32 */
  if (C.zf) goto L_1125da32;
  /* 1125da29 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1125da30 jmp 0x1125da44 */
  goto L_1125da44;
L_1125da32:;
  /* 1125da32 mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125da38 push edx */
  push32((uint32_t)(EDX));
  /* 1125da39 call 0x1125e0b0 */
  push32(0x1125da3eu); f_1125e0b0();
  /* 1125da3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125da41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1125da44:;
  /* 1125da44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125da47 mov dword ptr [0x11281748], eax */
  w32((uint32_t)(0x11281748), (EAX));
  /* 1125da4c push 1 */
  push32((uint32_t)(0x1u));
  /* 1125da4e push 0x1125da80 */
  push32((uint32_t)(0x1125da80u));
  /* 1125da53 call dword ptr [0x1128335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128335c))), 0x1125da59u);
  /* 1125da59 mov ecx, dword ptr [0x11281758] */
  ECX = (r32((uint32_t)(0x11281758)));
  /* 1125da5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125da62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125da64 jne 0x1125da70 */
  if (!C.zf) goto L_1125da70;
  /* 1125da66 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
L_1125da70:;
  /* 1125da70 mov esp, ebp */
  ESP = (EBP);
  /* 1125da72 pop ebp */
  EBP = (pop32());
  /* 1125da73 ret  */
  ESPCHK(0x1125da00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da80 @ 0x1125da80 (287 bytes, 86 insns) */
void f_1125da80(void) {
  FTRACE(0x1125da80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125da80 push ebp */
  push32((uint32_t)(EBP));
  /* 1125da81 mov ebp, esp */
  EBP = (ESP);
  /* 1125da83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125da86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125da89 push eax */
  push32((uint32_t)(EAX));
  /* 1125da8a call 0x1125e030 */
  push32(0x1125da8fu); f_1125e030();
  /* 1125da8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125da92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1125da95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1125da97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125da9a push ecx */
  push32((uint32_t)(ECX));
  /* 1125da9b mov edx, dword ptr [0x1128174c] */
  EDX = (r32((uint32_t)(0x1128174c)));
  /* 1125daa1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125daa3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125daa5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1125daab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dab1 push edx */
  push32((uint32_t)(EDX));
  /* 1125dab2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125dab5 push eax */
  push32((uint32_t)(EAX));
  /* 1125dab6 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125dabcu);
  /* 1125dabc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dabe jne 0x1125dad4 */
  if (!C.zf) goto L_1125dad4;
  /* 1125dac0 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
  /* 1125daca mov eax, 1 */
  EAX = (0x1u);
  /* 1125dacf jmp 0x1125db99 */
  goto L_1125db99;
L_1125dad4:;
  /* 1125dad4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125dad7 push ecx */
  push32((uint32_t)(ECX));
  /* 1125dad8 mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125dade push edx */
  push32((uint32_t)(EDX));
  /* 1125dadf call 0x11260a50 */
  push32(0x1125dae4u); f_11260a50();
  /* 1125dae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dae9 jne 0x1125db29 */
  if (!C.zf) goto L_1125db29;
  /* 1125daeb cmp dword ptr [0x1128174c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128174c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125daf2 jne 0x1125db06 */
  if (!C.zf) goto L_1125db06;
  /* 1125daf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1125daf6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125daf9 push eax */
  push32((uint32_t)(EAX));
  /* 1125dafa call 0x1125ddc0 */
  push32(0x1125daffu); f_1125ddc0();
  /* 1125daff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125db02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125db04 je 0x1125db27 */
  if (C.zf) goto L_1125db27;
L_1125db06:;
  /* 1125db06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125db09 mov dword ptr [0x1128175c], ecx */
  w32((uint32_t)(0x1128175c), (ECX));
  /* 1125db0f mov edx, dword ptr [0x1128175c] */
  EDX = (r32((uint32_t)(0x1128175c)));
  /* 1125db15 mov dword ptr [0x11281740], edx */
  w32((uint32_t)(0x11281740), (EDX));
  /* 1125db1b mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125db20 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1125db22 mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
L_1125db27:;
  /* 1125db27 jmp 0x1125db8c */
  goto L_1125db8c;
L_1125db29:;
  /* 1125db29 cmp dword ptr [0x1128174c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128174c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125db30 jne 0x1125db8c */
  if (!C.zf) goto L_1125db8c;
  /* 1125db32 cmp dword ptr [0x11281748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125db39 je 0x1125db8c */
  if (C.zf) goto L_1125db8c;
  /* 1125db3b mov ecx, dword ptr [0x11281748] */
  ECX = (r32((uint32_t)(0x11281748)));
  /* 1125db41 push ecx */
  push32((uint32_t)(ECX));
  /* 1125db42 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1125db45 push edx */
  push32((uint32_t)(EDX));
  /* 1125db46 mov eax, dword ptr [0x11281750] */
  EAX = (r32((uint32_t)(0x11281750)));
  /* 1125db4b push eax */
  push32((uint32_t)(EAX));
  /* 1125db4c call 0x11260b20 */
  push32(0x1125db51u); f_11260b20();
  /* 1125db51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125db54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125db56 jne 0x1125db8c */
  if (!C.zf) goto L_1125db8c;
  /* 1125db58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1125db5a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125db5d push ecx */
  push32((uint32_t)(ECX));
  /* 1125db5e call 0x1125ddc0 */
  push32(0x1125db63u); f_1125ddc0();
  /* 1125db63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125db66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125db68 je 0x1125db8c */
  if (C.zf) goto L_1125db8c;
  /* 1125db6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125db6d mov dword ptr [0x1128175c], edx */
  w32((uint32_t)(0x1128175c), (EDX));
  /* 1125db73 mov eax, dword ptr [0x1128175c] */
  EAX = (r32((uint32_t)(0x1128175c)));
  /* 1125db78 mov dword ptr [0x11281740], eax */
  w32((uint32_t)(0x11281740), (EAX));
  /* 1125db7d mov ecx, dword ptr [0x11281758] */
  ECX = (r32((uint32_t)(0x11281758)));
  /* 1125db83 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1125db86 mov dword ptr [0x11281758], ecx */
  w32((uint32_t)(0x11281758), (ECX));
L_1125db8c:;
  /* 1125db8c mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125db91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1125db94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125db96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125db98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1125db99:;
  /* 1125db99 mov esp, ebp */
  ESP = (EBP);
  /* 1125db9b pop ebp */
  EBP = (pop32());
  /* 1125db9c ret 4 */
  ESPCHK(0x1125da80u, _esp0);
  ESP += 8; return;
}

/* FUN_1001dba0 @ 0x1125dba0 (69 bytes, 20 insns) */
void f_1125dba0(void) {
  FTRACE(0x1125dba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125dba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125dba1 mov ebp, esp */
  EBP = (ESP);
  /* 1125dba3 mov eax, dword ptr [0x11281754] */
  EAX = (r32((uint32_t)(0x11281754)));
  /* 1125dba8 push eax */
  push32((uint32_t)(EAX));
  /* 1125dba9 call 0x11250db0 */
  push32(0x1125dbaeu); f_11250db0();
  /* 1125dbae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dbb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125dbb3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dbb6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1125dbb9 mov dword ptr [0x11281744], ecx */
  w32((uint32_t)(0x11281744), (ECX));
  /* 1125dbbf push 1 */
  push32((uint32_t)(0x1u));
  /* 1125dbc1 push 0x1125dbf0 */
  push32((uint32_t)(0x1125dbf0u));
  /* 1125dbc6 call dword ptr [0x1128335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128335c))), 0x1125dbccu);
  /* 1125dbcc mov edx, dword ptr [0x11281758] */
  EDX = (r32((uint32_t)(0x11281758)));
  /* 1125dbd2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1125dbd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1125dbd7 jne 0x1125dbe3 */
  if (!C.zf) goto L_1125dbe3;
  /* 1125dbd9 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
L_1125dbe3:;
  /* 1125dbe3 pop ebp */
  EBP = (pop32());
  /* 1125dbe4 ret  */
  ESPCHK(0x1125dba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dbf0 @ 0x1125dbf0 (172 bytes, 54 insns) */
void f_1125dbf0(void) {
  FTRACE(0x1125dbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125dbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125dbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1125dbf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dbf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dbf9 push eax */
  push32((uint32_t)(EAX));
  /* 1125dbfa call 0x1125e030 */
  push32(0x1125dbffu); f_1125e030();
  /* 1125dbff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dc02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1125dc05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1125dc07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125dc0a push ecx */
  push32((uint32_t)(ECX));
  /* 1125dc0b mov edx, dword ptr [0x11281744] */
  EDX = (r32((uint32_t)(0x11281744)));
  /* 1125dc11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125dc13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dc15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1125dc1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dc21 push edx */
  push32((uint32_t)(EDX));
  /* 1125dc22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125dc25 push eax */
  push32((uint32_t)(EAX));
  /* 1125dc26 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125dc2cu);
  /* 1125dc2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dc2e jne 0x1125dc41 */
  if (!C.zf) goto L_1125dc41;
  /* 1125dc30 mov dword ptr [0x11281758], 0 */
  w32((uint32_t)(0x11281758), (0x0u));
  /* 1125dc3a mov eax, 1 */
  EAX = (0x1u);
  /* 1125dc3f jmp 0x1125dc96 */
  goto L_1125dc96;
L_1125dc41:;
  /* 1125dc41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1125dc44 push ecx */
  push32((uint32_t)(ECX));
  /* 1125dc45 mov edx, dword ptr [0x11281754] */
  EDX = (r32((uint32_t)(0x11281754)));
  /* 1125dc4b push edx */
  push32((uint32_t)(EDX));
  /* 1125dc4c call 0x11260a50 */
  push32(0x1125dc51u); f_11260a50();
  /* 1125dc51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dc54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dc56 jne 0x1125dc89 */
  if (!C.zf) goto L_1125dc89;
  /* 1125dc58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125dc5b push eax */
  push32((uint32_t)(EAX));
  /* 1125dc5c call 0x1125dd70 */
  push32(0x1125dc61u); f_1125dd70();
  /* 1125dc61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dc64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dc66 je 0x1125dc89 */
  if (C.zf) goto L_1125dc89;
  /* 1125dc68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1125dc6b mov dword ptr [0x1128175c], ecx */
  w32((uint32_t)(0x1128175c), (ECX));
  /* 1125dc71 mov edx, dword ptr [0x1128175c] */
  EDX = (r32((uint32_t)(0x1128175c)));
  /* 1125dc77 mov dword ptr [0x11281740], edx */
  w32((uint32_t)(0x11281740), (EDX));
  /* 1125dc7d mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125dc82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1125dc84 mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
L_1125dc89:;
  /* 1125dc89 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125dc8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1125dc91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1125dc93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dc95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1125dc96:;
  /* 1125dc96 mov esp, ebp */
  ESP = (EBP);
  /* 1125dc98 pop ebp */
  EBP = (pop32());
  /* 1125dc99 ret 4 */
  ESPCHK(0x1125dbf0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001dca0 @ 0x1125dca0 (43 bytes, 11 insns) */
void f_1125dca0(void) {
  FTRACE(0x1125dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125dca1 mov ebp, esp */
  EBP = (ESP);
  /* 1125dca3 mov eax, dword ptr [0x11281758] */
  EAX = (r32((uint32_t)(0x11281758)));
  /* 1125dca8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1125dcad mov dword ptr [0x11281758], eax */
  w32((uint32_t)(0x11281758), (EAX));
  /* 1125dcb2 call dword ptr [0x11283364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283364))), 0x1125dcb8u);
  /* 1125dcb8 mov dword ptr [0x1128175c], eax */
  w32((uint32_t)(0x1128175c), (EAX));
  /* 1125dcbd mov ecx, dword ptr [0x1128175c] */
  ECX = (r32((uint32_t)(0x1128175c)));
  /* 1125dcc3 mov dword ptr [0x11281740], ecx */
  w32((uint32_t)(0x11281740), (ECX));
  /* 1125dcc9 pop ebp */
  EBP = (pop32());
  /* 1125dcca ret  */
  ESPCHK(0x1125dca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dcd0 @ 0x1125dcd0 (155 bytes, 57 insns) */
void f_1125dcd0(void) {
  FTRACE(0x1125dcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125dcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125dcd1 mov ebp, esp */
  EBP = (ESP);
  /* 1125dcd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dcd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dcda je 0x1125dcfb */
  if (C.zf) goto L_1125dcfb;
  /* 1125dcdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dcdf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1125dce2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1125dce4 je 0x1125dcfb */
  if (C.zf) goto L_1125dcfb;
  /* 1125dce6 push 0x1127ca38 */
  push32((uint32_t)(0x1127ca38u));
  /* 1125dceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dcee push edx */
  push32((uint32_t)(EDX));
  /* 1125dcef call 0x112553c0 */
  push32(0x1125dcf4u); f_112553c0();
  /* 1125dcf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dcf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dcf9 jne 0x1125dd23 */
  if (!C.zf) goto L_1125dd23;
L_1125dcfb:;
  /* 1125dcfb push 8 */
  push32((uint32_t)(0x8u));
  /* 1125dcfd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1125dd00 push eax */
  push32((uint32_t)(EAX));
  /* 1125dd01 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1125dd06 mov ecx, dword ptr [0x1128175c] */
  ECX = (r32((uint32_t)(0x1128175c)));
  /* 1125dd0c push ecx */
  push32((uint32_t)(ECX));
  /* 1125dd0d call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125dd13u);
  /* 1125dd13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dd15 jne 0x1125dd1b */
  if (!C.zf) goto L_1125dd1b;
  /* 1125dd17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125dd19 jmp 0x1125dd67 */
  goto L_1125dd67;
L_1125dd1b:;
  /* 1125dd1b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1125dd1e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1125dd21 jmp 0x1125dd5b */
  goto L_1125dd5b;
L_1125dd23:;
  /* 1125dd23 push 0x1127ca34 */
  push32((uint32_t)(0x1127ca34u));
  /* 1125dd28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dd2b push eax */
  push32((uint32_t)(EAX));
  /* 1125dd2c call 0x112553c0 */
  push32(0x1125dd31u); f_112553c0();
  /* 1125dd31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dd34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dd36 jne 0x1125dd5b */
  if (!C.zf) goto L_1125dd5b;
  /* 1125dd38 push 8 */
  push32((uint32_t)(0x8u));
  /* 1125dd3a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1125dd3d push ecx */
  push32((uint32_t)(ECX));
  /* 1125dd3e push 0xb */
  push32((uint32_t)(0xbu));
  /* 1125dd40 mov edx, dword ptr [0x1128175c] */
  EDX = (r32((uint32_t)(0x1128175c)));
  /* 1125dd46 push edx */
  push32((uint32_t)(EDX));
  /* 1125dd47 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125dd4du);
  /* 1125dd4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125dd4f jne 0x1125dd55 */
  if (!C.zf) goto L_1125dd55;
  /* 1125dd51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125dd53 jmp 0x1125dd67 */
  goto L_1125dd67;
L_1125dd55:;
  /* 1125dd55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1125dd58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1125dd5b:;
  /* 1125dd5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125dd5e push ecx */
  push32((uint32_t)(ECX));
  /* 1125dd5f call 0x1125af40 */
  push32(0x1125dd64u); f_1125af40();
  /* 1125dd64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1125dd67:;
  /* 1125dd67 mov esp, ebp */
  ESP = (EBP);
  /* 1125dd69 pop ebp */
  EBP = (pop32());
  /* 1125dd6a ret  */
  ESPCHK(0x1125dcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dd70 @ 0x1125dd70 (79 bytes, 26 insns) */
void f_1125dd70(void) {
  FTRACE(0x1125dd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125dd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1125dd71 mov ebp, esp */
  EBP = (ESP);
  /* 1125dd73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125dd76 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1125dd7a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1125dd7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1125dd85 jmp 0x1125dd90 */
  goto L_1125dd90;
L_1125dd87:;
  /* 1125dd87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125dd8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1125dd8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1125dd90:;
  /* 1125dd90 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125dd94 jae 0x1125ddb6 */
  if (!C.cf) goto L_1125ddb6;
  /* 1125dd96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125dd99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1125dd9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1125dda2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1125dda4 mov cx, word ptr [eax*2 + 0x1127ffe4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1127ffe4)));
  /* 1125ddac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125ddae jne 0x1125ddb4 */
  if (!C.zf) goto L_1125ddb4;
  /* 1125ddb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125ddb2 jmp 0x1125ddbb */
  goto L_1125ddbb;
L_1125ddb4:;
  /* 1125ddb4 jmp 0x1125dd87 */
  goto L_1125dd87;
L_1125ddb6:;
  /* 1125ddb6 mov eax, 1 */
  EAX = (0x1u);
L_1125ddbb:;
  /* 1125ddbb mov esp, ebp */
  ESP = (EBP);
  /* 1125ddbd pop ebp */
  EBP = (pop32());
  /* 1125ddbe ret  */
  ESPCHK(0x1125dd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ddc0 @ 0x1125ddc0 (135 bytes, 48 insns) */
void f_1125ddc0(void) {
  FTRACE(0x1125ddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125ddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1125ddc1 mov ebp, esp */
  EBP = (ESP);
  /* 1125ddc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125ddc6 push esi */
  push32((uint32_t)(ESI));
  /* 1125ddc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1125ddca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ddcf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ddd4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125ddd9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1125dddc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1125dde1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1125dde4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1125dde6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1125dde9 push ecx */
  push32((uint32_t)(ECX));
  /* 1125ddea push 1 */
  push32((uint32_t)(0x1u));
  /* 1125ddec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1125ddef push edx */
  push32((uint32_t)(EDX));
  /* 1125ddf0 call dword ptr [0x11281760] */
  call_ind((uint32_t)(r32((uint32_t)(0x11281760))), 0x1125ddf6u);
  /* 1125ddf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125ddf8 jne 0x1125ddfe */
  if (!C.zf) goto L_1125ddfe;
  /* 1125ddfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125ddfc jmp 0x1125de42 */
  goto L_1125de42;
L_1125ddfe:;
  /* 1125ddfe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1125de01 push eax */
  push32((uint32_t)(EAX));
  /* 1125de02 call 0x1125e030 */
  push32(0x1125de07u); f_1125e030();
  /* 1125de07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125de0a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125de0d je 0x1125de3d */
  if (C.zf) goto L_1125de3d;
  /* 1125de0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125de13 je 0x1125de3d */
  if (C.zf) goto L_1125de3d;
  /* 1125de15 mov ecx, dword ptr [0x11281750] */
  ECX = (r32((uint32_t)(0x11281750)));
  /* 1125de1b push ecx */
  push32((uint32_t)(ECX));
  /* 1125de1c call 0x1125e0b0 */
  push32(0x1125de21u); f_1125e0b0();
  /* 1125de21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125de24 mov esi, eax */
  ESI = (EAX);
  /* 1125de26 mov edx, dword ptr [0x11281750] */
  EDX = (r32((uint32_t)(0x11281750)));
  /* 1125de2c push edx */
  push32((uint32_t)(EDX));
  /* 1125de2d call 0x11250db0 */
  push32(0x1125de32u); f_11250db0();
  /* 1125de32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1125de35 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125de37 jne 0x1125de3d */
  if (!C.zf) goto L_1125de3d;
  /* 1125de39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1125de3b jmp 0x1125de42 */
  goto L_1125de42;
L_1125de3d:;
  /* 1125de3d mov eax, 1 */
  EAX = (0x1u);
L_1125de42:;
  /* 1125de42 pop esi */
  ESI = (pop32());
  /* 1125de43 mov esp, ebp */
  ESP = (EBP);
  /* 1125de45 pop ebp */
  EBP = (pop32());
  /* 1125de46 ret  */
  ESPCHK(0x1125ddc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001de50 @ 0x1125de50 (77 bytes, 18 insns) */
void f_1125de50(void) {
  FTRACE(0x1125de50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1125de50 push ebp */
  push32((uint32_t)(EBP));
  /* 1125de51 mov ebp, esp */
  EBP = (ESP);
  /* 1125de53 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1125de59 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1125de63 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1125de69 push eax */
  push32((uint32_t)(EAX));
  /* 1125de6a call dword ptr [0x11283354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283354))), 0x1125de70u);
  /* 1125de70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1125de72 je 0x1125de89 */
  if (C.zf) goto L_1125de89;
  /* 1125de74 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1125de7b jne 0x1125de89 */
  if (!C.zf) goto L_1125de89;
  /* 1125de7d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1125de87 jmp 0x1125de93 */
  goto L_1125de93;
L_1125de89:;
  /* 1125de89 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1125de93:;
  /* 1125de93 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1125de99 mov esp, ebp */
  ESP = (EBP);
  /* 1125de9b pop ebp */
  EBP = (pop32());
  /* 1125de9c ret  */
  ESPCHK(0x1125de50u, _esp0);
  ESP += 4; return;
}

