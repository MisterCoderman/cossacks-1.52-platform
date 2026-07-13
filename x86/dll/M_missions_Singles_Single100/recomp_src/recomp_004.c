#include "recomp.h"

/* _strcmp @ 0x10ee42c0 (129 bytes, 56 insns) */
void f_10ee42c0(void) {
  FTRACE(0x10ee42c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee42c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10ee42c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ee42c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10ee42ce jne 0x10ee430c */
  if (!C.zf) goto L_10ee430c;
L_10ee42d0:;
  /* 10ee42d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee42d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee42d4 jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee42d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ee42d8 je 0x10ee4300 */
  if (C.zf) goto L_10ee4300;
  /* 10ee42da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee42dd jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee42df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ee42e1 je 0x10ee4300 */
  if (C.zf) goto L_10ee4300;
  /* 10ee42e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ee42e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee42e9 jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee42eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ee42ed je 0x10ee4300 */
  if (C.zf) goto L_10ee4300;
  /* 10ee42ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee42f2 jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee42f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee42f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee42fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ee42fc jne 0x10ee42d0 */
  if (!C.zf) goto L_10ee42d0;
  /* 10ee42fe mov edi, edi */
  EDI = (EDI);
L_10ee4300:;
  /* 10ee4300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4302 ret  */
  ESPCHK(0x10ee42c0u, _esp0);
  ESP += 4; return;
  /* 10ee4303 nop  */
  /* nop */
L_10ee4304:;
  /* 10ee4304 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4306 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee4308 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ee4309 ret  */
  ESPCHK(0x10ee42c0u, _esp0);
  ESP += 4; return;
  /* 10ee430a mov edi, edi */
  EDI = (EDI);
L_10ee430c:;
  /* 10ee430c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10ee4312 je 0x10ee4328 */
  if (C.zf) goto L_10ee4328;
  /* 10ee4314 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee4316 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ee4317 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee4319 jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee431b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ee431c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ee431e je 0x10ee4300 */
  if (C.zf) goto L_10ee4300;
  /* 10ee4320 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10ee4326 je 0x10ee42d0 */
  if (C.zf) goto L_10ee42d0;
L_10ee4328:;
  /* 10ee4328 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ee432b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee432e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee4330 jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee4332 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10ee4334 je 0x10ee4300 */
  if (C.zf) goto L_10ee4300;
  /* 10ee4336 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee4339 jne 0x10ee4304 */
  if (!C.zf) goto L_10ee4304;
  /* 10ee433b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10ee433d je 0x10ee4300 */
  if (C.zf) goto L_10ee4300;
  /* 10ee433f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4342 jmp 0x10ee42d0 */
  goto L_10ee42d0;
}

/* FUN_10014409 @ 0x10ee4409 (27 bytes, 11 insns) */
void f_10ee4409(void) {
  FTRACE(0x10ee4409u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4409 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee440a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ee440e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10ee4410 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ee4413 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4414 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ee4417 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4418 call 0x10ed9b92 */
  push32(0x10ee441du); f_10ed9b92();
  /* 10ee441d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4420 pop ebp */
  EBP = (pop32());
  /* 10ee4421 ret 4 */
  ESPCHK(0x10ee4409u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x10ee4430 (446 bytes, 130 insns) */
void f_10ee4430(void) {
  FTRACE(0x10ee4430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4430 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4431 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4433 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4436 call 0x10ede420 */
  push32(0x10ee443bu); f_10ede420();
  /* 10ee443b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee443e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4441 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10ee4444 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4448 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4449 call 0x10ee45f0 */
  push32(0x10ee444eu); f_10ee45f0();
  /* 10ee444e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4451 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee4454 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4458 je 0x10ee4463 */
  if (C.zf) goto L_10ee4463;
  /* 10ee445a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee445d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4461 jne 0x10ee4472 */
  if (!C.zf) goto L_10ee4472;
L_10ee4463:;
  /* 10ee4463 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee4466 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4467 call dword ptr [0x10f1237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1237c))), 0x10ee446du);
  /* 10ee446d jmp 0x10ee45ea */
  goto L_10ee45ea;
L_10ee4472:;
  /* 10ee4472 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee4475 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4479 jne 0x10ee448f */
  if (!C.zf) goto L_10ee448f;
  /* 10ee447b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee447e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10ee4485 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee448a jmp 0x10ee45ea */
  goto L_10ee45ea;
L_10ee448f:;
  /* 10ee448f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee4492 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4496 jne 0x10ee44a0 */
  if (!C.zf) goto L_10ee44a0;
  /* 10ee4498 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee449b jmp 0x10ee45ea */
  goto L_10ee45ea;
L_10ee44a0:;
  /* 10ee44a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee44a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee44a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee44a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee44ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10ee44af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ee44b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee44b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee44b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10ee44bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee44be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee44c2 jne 0x10ee45c7 */
  if (!C.zf) goto L_10ee45c7;
  /* 10ee44c8 mov eax, dword ptr [0x10f0d2b8] */
  EAX = (r32((uint32_t)(0x10f0d2b8)));
  /* 10ee44cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee44d0 jmp 0x10ee44db */
  goto L_10ee44db;
L_10ee44d2:;
  /* 10ee44d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee44d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee44d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ee44db:;
  /* 10ee44db mov edx, dword ptr [0x10f0d2b8] */
  EDX = (r32((uint32_t)(0x10f0d2b8)));
  /* 10ee44e1 add edx, dword ptr [0x10f0d2bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0d2bc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee44e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee44ea jge 0x10ee4502 */
  if ((C.sf==C.of)) goto L_10ee4502;
  /* 10ee44ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee44ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee44f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee44f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10ee44f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10ee4500 jmp 0x10ee44d2 */
  goto L_10ee44d2;
L_10ee4502:;
  /* 10ee4502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4505 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10ee4508 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee450b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee450e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4514 jne 0x10ee4525 */
  if (!C.zf) goto L_10ee4525;
  /* 10ee4516 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4519 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10ee4520 jmp 0x10ee45ad */
  goto L_10ee45ad;
L_10ee4525:;
  /* 10ee4525 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee4528 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee452e jne 0x10ee453c */
  if (!C.zf) goto L_10ee453c;
  /* 10ee4530 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4533 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10ee453a jmp 0x10ee45ad */
  goto L_10ee45ad;
L_10ee453c:;
  /* 10ee453c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee453f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4545 jne 0x10ee4553 */
  if (!C.zf) goto L_10ee4553;
  /* 10ee4547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee454a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10ee4551 jmp 0x10ee45ad */
  goto L_10ee45ad;
L_10ee4553:;
  /* 10ee4553 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee4556 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee455c jne 0x10ee456a */
  if (!C.zf) goto L_10ee456a;
  /* 10ee455e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4561 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10ee4568 jmp 0x10ee45ad */
  goto L_10ee45ad;
L_10ee456a:;
  /* 10ee456a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee456d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4573 jne 0x10ee4581 */
  if (!C.zf) goto L_10ee4581;
  /* 10ee4575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4578 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10ee457f jmp 0x10ee45ad */
  goto L_10ee45ad;
L_10ee4581:;
  /* 10ee4581 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee4584 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee458a jne 0x10ee4598 */
  if (!C.zf) goto L_10ee4598;
  /* 10ee458c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee458f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10ee4596 jmp 0x10ee45ad */
  goto L_10ee45ad;
L_10ee4598:;
  /* 10ee4598 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee459b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee45a1 jne 0x10ee45ad */
  if (!C.zf) goto L_10ee45ad;
  /* 10ee45a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee45a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10ee45ad:;
  /* 10ee45ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee45b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10ee45b3 push edx */
  push32((uint32_t)(EDX));
  /* 10ee45b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ee45b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10ee45b9u);
  /* 10ee45b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee45bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee45bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee45c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10ee45c5 jmp 0x10ee45de */
  goto L_10ee45de;
L_10ee45c7:;
  /* 10ee45c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee45ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ee45d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee45d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee45d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee45d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10ee45dbu);
  /* 10ee45db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee45de:;
  /* 10ee45de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee45e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee45e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10ee45e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ee45ea:;
  /* 10ee45ea mov esp, ebp */
  ESP = (EBP);
  /* 10ee45ec pop ebp */
  EBP = (pop32());
  /* 10ee45ed ret  */
  ESPCHK(0x10ee4430u, _esp0);
  ESP += 4; return;
}

/* FUN_100145f0 @ 0x10ee45f0 (89 bytes, 35 insns) */
void f_10ee45f0(void) {
  FTRACE(0x10ee45f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee45f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee45f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee45f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee45f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee45f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee45fa:;
  /* 10ee45fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee45fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee45ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4602 je 0x10ee4622 */
  if (C.zf) goto L_10ee4622;
  /* 10ee4604 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4607 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee460a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee460d mov ecx, dword ptr [0x10f0d2c4] */
  ECX = (r32((uint32_t)(0x10f0d2c4)));
  /* 10ee4613 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4616 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee4619 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee461b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee461e jae 0x10ee4622 */
  if (!C.cf) goto L_10ee4622;
  /* 10ee4620 jmp 0x10ee45fa */
  goto L_10ee45fa;
L_10ee4622:;
  /* 10ee4622 mov eax, dword ptr [0x10f0d2c4] */
  EAX = (r32((uint32_t)(0x10f0d2c4)));
  /* 10ee4627 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee462a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee462d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee462f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4632 jae 0x10ee463e */
  if (!C.cf) goto L_10ee463e;
  /* 10ee4634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4637 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee4639 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee463c je 0x10ee4642 */
  if (C.zf) goto L_10ee4642;
L_10ee463e:;
  /* 10ee463e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4640 jmp 0x10ee4645 */
  goto L_10ee4645;
L_10ee4642:;
  /* 10ee4642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10ee4645:;
  /* 10ee4645 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4647 pop ebp */
  EBP = (pop32());
  /* 10ee4648 ret  */
  ESPCHK(0x10ee45f0u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x10ee4650 (30 bytes, 12 insns) */
void f_10ee4650(void) {
  FTRACE(0x10ee4650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4650 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4651 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4653 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ee4655 call 0x10edf7b0 */
  push32(0x10ee465au); f_10edf7b0();
  /* 10ee465a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee465d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10ee465f call 0x10ee0320 */
  push32(0x10ee4664u); f_10ee0320();
  /* 10ee4664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4667 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ee4669 call 0x10ede790 */
  push32(0x10ee466eu); f_10ede790();
  /* 10ee466e pop ebp */
  EBP = (pop32());
  /* 10ee466f ret  */
  ESPCHK(0x10ee4650u, _esp0);
  ESP += 4; return;
}

/* FUN_10014670 @ 0x10ee4670 (61 bytes, 18 insns) */
void f_10ee4670(void) {
  FTRACE(0x10ee4670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4670 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4671 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4673 cmp dword ptr [0x10f0f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee467a jne 0x10ee46ab */
  if (!C.zf) goto L_10ee46ab;
  /* 10ee467c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ee467e call 0x10edb620 */
  push32(0x10ee4683u); f_10edb620();
  /* 10ee4683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4686 cmp dword ptr [0x10f0f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee468d jne 0x10ee46a1 */
  if (!C.zf) goto L_10ee46a1;
  /* 10ee468f call 0x10ee46d0 */
  push32(0x10ee4694u); f_10ee46d0();
  /* 10ee4694 mov eax, dword ptr [0x10f0f798] */
  EAX = (r32((uint32_t)(0x10f0f798)));
  /* 10ee4699 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee469c mov dword ptr [0x10f0f798], eax */
  w32((uint32_t)(0x10f0f798), (EAX));
L_10ee46a1:;
  /* 10ee46a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ee46a3 call 0x10edb6c0 */
  push32(0x10ee46a8u); f_10edb6c0();
  /* 10ee46a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee46ab:;
  /* 10ee46ab pop ebp */
  EBP = (pop32());
  /* 10ee46ac ret  */
  ESPCHK(0x10ee4670u, _esp0);
  ESP += 4; return;
}

/* FUN_100146b0 @ 0x10ee46b0 (30 bytes, 11 insns) */
void f_10ee46b0(void) {
  FTRACE(0x10ee46b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee46b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee46b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee46b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ee46b5 call 0x10edb620 */
  push32(0x10ee46bau); f_10edb620();
  /* 10ee46ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee46bd call 0x10ee46d0 */
  push32(0x10ee46c2u); f_10ee46d0();
  /* 10ee46c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ee46c4 call 0x10edb6c0 */
  push32(0x10ee46c9u); f_10edb6c0();
  /* 10ee46c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee46cc pop ebp */
  EBP = (pop32());
  /* 10ee46cd ret  */
  ESPCHK(0x10ee46b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146d0 @ 0x10ee46d0 (939 bytes, 266 insns) */
void f_10ee46d0(void) {
  FTRACE(0x10ee46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee46d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee46d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee46d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee46dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ee46df call 0x10edb620 */
  push32(0x10ee46e4u); f_10edb620();
  /* 10ee46e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee46e7 mov dword ptr [0x10f0f6e0], 0 */
  w32((uint32_t)(0x10f0f6e0), (0x0u));
  /* 10ee46f1 mov dword ptr [0x10f0d370], 0xffffffff */
  w32((uint32_t)(0x10f0d370), (0xffffffffu));
  /* 10ee46fb mov eax, dword ptr [0x10f0d370] */
  EAX = (r32((uint32_t)(0x10f0d370)));
  /* 10ee4700 mov dword ptr [0x10f0d360], eax */
  w32((uint32_t)(0x10f0d360), (EAX));
  /* 10ee4705 push 0x10f0a0b0 */
  push32((uint32_t)(0x10f0a0b0u));
  /* 10ee470a call 0x10eea0c0 */
  push32(0x10ee470fu); f_10eea0c0();
  /* 10ee470f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4712 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee4715 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4719 jne 0x10ee4853 */
  if (!C.zf) goto L_10ee4853;
  /* 10ee471f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ee4721 call 0x10edb6c0 */
  push32(0x10ee4726u); f_10edb6c0();
  /* 10ee4726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4729 push 0x10f0f6e8 */
  push32((uint32_t)(0x10f0f6e8u));
  /* 10ee472e call dword ptr [0x10f123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123f8))), 0x10ee4734u);
  /* 10ee4734 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4737 je 0x10ee484e */
  if (C.zf) goto L_10ee484e;
  /* 10ee473d mov dword ptr [0x10f0f6e0], 1 */
  w32((uint32_t)(0x10f0f6e0), (0x1u));
  /* 10ee4747 mov ecx, dword ptr [0x10f0f6e8] */
  ECX = (r32((uint32_t)(0x10f0f6e8)));
  /* 10ee474d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4750 mov dword ptr [0x10f0d2c8], ecx */
  w32((uint32_t)(0x10f0d2c8), (ECX));
  /* 10ee4756 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4758 mov dx, word ptr [0x10f0f72e] */
  DX = (r16((uint32_t)(0x10f0f72e)));
  /* 10ee475f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee4761 je 0x10ee4779 */
  if (C.zf) goto L_10ee4779;
  /* 10ee4763 mov eax, dword ptr [0x10f0f73c] */
  EAX = (r32((uint32_t)(0x10f0f73c)));
  /* 10ee4768 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee476b mov ecx, dword ptr [0x10f0d2c8] */
  ECX = (r32((uint32_t)(0x10f0d2c8)));
  /* 10ee4771 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4773 mov dword ptr [0x10f0d2c8], ecx */
  w32((uint32_t)(0x10f0d2c8), (ECX));
L_10ee4779:;
  /* 10ee4779 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee477b mov dx, word ptr [0x10f0f782] */
  DX = (r16((uint32_t)(0x10f0f782)));
  /* 10ee4782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee4784 je 0x10ee47ae */
  if (C.zf) goto L_10ee47ae;
  /* 10ee4786 cmp dword ptr [0x10f0f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee478d je 0x10ee47ae */
  if (C.zf) goto L_10ee47ae;
  /* 10ee478f mov dword ptr [0x10f0d2cc], 1 */
  w32((uint32_t)(0x10f0d2cc), (0x1u));
  /* 10ee4799 mov eax, dword ptr [0x10f0f790] */
  EAX = (r32((uint32_t)(0x10f0f790)));
  /* 10ee479e sub eax, dword ptr [0x10f0f73c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0f73c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee47a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee47a7 mov dword ptr [0x10f0d2d0], eax */
  w32((uint32_t)(0x10f0d2d0), (EAX));
  /* 10ee47ac jmp 0x10ee47c2 */
  goto L_10ee47c2;
L_10ee47ae:;
  /* 10ee47ae mov dword ptr [0x10f0d2cc], 0 */
  w32((uint32_t)(0x10f0d2cc), (0x0u));
  /* 10ee47b8 mov dword ptr [0x10f0d2d0], 0 */
  w32((uint32_t)(0x10f0d2d0), (0x0u));
L_10ee47c2:;
  /* 10ee47c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10ee47c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee47c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee47c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ee47ca mov edx, dword ptr [0x10f0d354] */
  EDX = (r32((uint32_t)(0x10f0d354)));
  /* 10ee47d0 push edx */
  push32((uint32_t)(EDX));
  /* 10ee47d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ee47d3 push 0x10f0f6ec */
  push32((uint32_t)(0x10f0f6ecu));
  /* 10ee47d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ee47dd mov eax, dword ptr [0x10f0f7c8] */
  EAX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ee47e2 push eax */
  push32((uint32_t)(EAX));
  /* 10ee47e3 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10ee47e9u);
  /* 10ee47e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee47eb je 0x10ee47ff */
  if (C.zf) goto L_10ee47ff;
  /* 10ee47ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee47f1 jne 0x10ee47ff */
  if (!C.zf) goto L_10ee47ff;
  /* 10ee47f3 mov ecx, dword ptr [0x10f0d354] */
  ECX = (r32((uint32_t)(0x10f0d354)));
  /* 10ee47f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10ee47fd jmp 0x10ee4808 */
  goto L_10ee4808;
L_10ee47ff:;
  /* 10ee47ff mov edx, dword ptr [0x10f0d354] */
  EDX = (r32((uint32_t)(0x10f0d354)));
  /* 10ee4805 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ee4808:;
  /* 10ee4808 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10ee480b push eax */
  push32((uint32_t)(EAX));
  /* 10ee480c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee480e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10ee4810 mov ecx, dword ptr [0x10f0d358] */
  ECX = (r32((uint32_t)(0x10f0d358)));
  /* 10ee4816 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4817 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ee4819 push 0x10f0f740 */
  push32((uint32_t)(0x10f0f740u));
  /* 10ee481e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ee4823 mov edx, dword ptr [0x10f0f7c8] */
  EDX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ee4829 push edx */
  push32((uint32_t)(EDX));
  /* 10ee482a call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10ee4830u);
  /* 10ee4830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee4832 je 0x10ee4845 */
  if (C.zf) goto L_10ee4845;
  /* 10ee4834 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4838 jne 0x10ee4845 */
  if (!C.zf) goto L_10ee4845;
  /* 10ee483a mov eax, dword ptr [0x10f0d358] */
  EAX = (r32((uint32_t)(0x10f0d358)));
  /* 10ee483f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10ee4843 jmp 0x10ee484e */
  goto L_10ee484e;
L_10ee4845:;
  /* 10ee4845 mov ecx, dword ptr [0x10f0d358] */
  ECX = (r32((uint32_t)(0x10f0d358)));
  /* 10ee484b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10ee484e:;
  /* 10ee484e jmp 0x10ee4a77 */
  goto L_10ee4a77;
L_10ee4853:;
  /* 10ee4853 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4856 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee4859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee485b je 0x10ee487d */
  if (C.zf) goto L_10ee487d;
  /* 10ee485d cmp dword ptr [0x10f0f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4864 je 0x10ee488c */
  if (C.zf) goto L_10ee488c;
  /* 10ee4866 mov ecx, dword ptr [0x10f0f794] */
  ECX = (r32((uint32_t)(0x10f0f794)));
  /* 10ee486c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee486d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4870 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4871 call 0x10ee42c0 */
  push32(0x10ee4876u); f_10ee42c0();
  /* 10ee4876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee487b jne 0x10ee488c */
  if (!C.zf) goto L_10ee488c;
L_10ee487d:;
  /* 10ee487d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ee487f call 0x10edb6c0 */
  push32(0x10ee4884u); f_10edb6c0();
  /* 10ee4884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4887 jmp 0x10ee4a77 */
  goto L_10ee4a77;
L_10ee488c:;
  /* 10ee488c push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee488e mov eax, dword ptr [0x10f0f794] */
  EAX = (r32((uint32_t)(0x10f0f794)));
  /* 10ee4893 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4894 call 0x10edc1b0 */
  push32(0x10ee4899u); f_10edc1b0();
  /* 10ee4899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee489c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10ee48a1 push 0x10f0a0a8 */
  push32((uint32_t)(0x10f0a0a8u));
  /* 10ee48a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee48a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee48ab push ecx */
  push32((uint32_t)(ECX));
  /* 10ee48ac call 0x10edfcb0 */
  push32(0x10ee48b1u); f_10edfcb0();
  /* 10ee48b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee48b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee48b7 push eax */
  push32((uint32_t)(EAX));
  /* 10ee48b8 call 0x10edb720 */
  push32(0x10ee48bdu); f_10edb720();
  /* 10ee48bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee48c0 mov dword ptr [0x10f0f794], eax */
  w32((uint32_t)(0x10f0f794), (EAX));
  /* 10ee48c5 cmp dword ptr [0x10f0f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee48cc jne 0x10ee48dd */
  if (!C.zf) goto L_10ee48dd;
  /* 10ee48ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ee48d0 call 0x10edb6c0 */
  push32(0x10ee48d5u); f_10edb6c0();
  /* 10ee48d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee48d8 jmp 0x10ee4a77 */
  goto L_10ee4a77;
L_10ee48dd:;
  /* 10ee48dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee48e0 push edx */
  push32((uint32_t)(EDX));
  /* 10ee48e1 mov eax, dword ptr [0x10f0f794] */
  EAX = (r32((uint32_t)(0x10f0f794)));
  /* 10ee48e6 push eax */
  push32((uint32_t)(EAX));
  /* 10ee48e7 call 0x10edfe30 */
  push32(0x10ee48ecu); f_10edfe30();
  /* 10ee48ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee48ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 10ee48f1 call 0x10edb6c0 */
  push32(0x10ee48f6u); f_10edb6c0();
  /* 10ee48f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee48f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ee48fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee48fe push ecx */
  push32((uint32_t)(ECX));
  /* 10ee48ff mov edx, dword ptr [0x10f0d354] */
  EDX = (r32((uint32_t)(0x10f0d354)));
  /* 10ee4905 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4906 call 0x10ee06a0 */
  push32(0x10ee490bu); f_10ee06a0();
  /* 10ee490b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee490e mov eax, dword ptr [0x10f0d354] */
  EAX = (r32((uint32_t)(0x10f0d354)));
  /* 10ee4913 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10ee4917 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee491a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee491d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee4920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4923 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee4926 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4929 jne 0x10ee493d */
  if (!C.zf) goto L_10ee493d;
  /* 10ee492b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee492e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4931 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee4934 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4937 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee493a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ee493d:;
  /* 10ee493d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4940 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4941 call 0x10ee9e40 */
  push32(0x10ee4946u); f_10ee9e40();
  /* 10ee4946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4949 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee494f mov dword ptr [0x10f0d2c8], eax */
  w32((uint32_t)(0x10f0d2c8), (EAX));
L_10ee4954:;
  /* 10ee4954 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4957 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee495a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee495d je 0x10ee4975 */
  if (C.zf) goto L_10ee4975;
  /* 10ee495f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4962 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee4965 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4968 jl 0x10ee4980 */
  if ((C.sf!=C.of)) goto L_10ee4980;
  /* 10ee496a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee496d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee4970 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4973 jg 0x10ee4980 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee4980;
L_10ee4975:;
  /* 10ee4975 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4978 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee497b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee497e jmp 0x10ee4954 */
  goto L_10ee4954;
L_10ee4980:;
  /* 10ee4980 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4983 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee4986 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4989 jne 0x10ee4a25 */
  if (!C.zf) goto L_10ee4a25;
  /* 10ee498f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4995 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee4998 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee499b push edx */
  push32((uint32_t)(EDX));
  /* 10ee499c call 0x10ee9e40 */
  push32(0x10ee49a1u); f_10ee9e40();
  /* 10ee49a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee49a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee49a7 mov ecx, dword ptr [0x10f0d2c8] */
  ECX = (r32((uint32_t)(0x10f0d2c8)));
  /* 10ee49ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee49af mov dword ptr [0x10f0d2c8], ecx */
  w32((uint32_t)(0x10f0d2c8), (ECX));
L_10ee49b5:;
  /* 10ee49b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee49b8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee49bb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee49be jl 0x10ee49d6 */
  if ((C.sf!=C.of)) goto L_10ee49d6;
  /* 10ee49c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee49c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee49c6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee49c9 jg 0x10ee49d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee49d6;
  /* 10ee49cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee49ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee49d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee49d4 jmp 0x10ee49b5 */
  goto L_10ee49b5;
L_10ee49d6:;
  /* 10ee49d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee49d9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee49dc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee49df jne 0x10ee4a25 */
  if (!C.zf) goto L_10ee4a25;
  /* 10ee49e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee49e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee49e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee49ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee49ed push ecx */
  push32((uint32_t)(ECX));
  /* 10ee49ee call 0x10ee9e40 */
  push32(0x10ee49f3u); f_10ee9e40();
  /* 10ee49f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee49f6 mov edx, dword ptr [0x10f0d2c8] */
  EDX = (r32((uint32_t)(0x10f0d2c8)));
  /* 10ee49fc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee49fe mov dword ptr [0x10f0d2c8], edx */
  w32((uint32_t)(0x10f0d2c8), (EDX));
L_10ee4a04:;
  /* 10ee4a04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee4a0a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4a0d jl 0x10ee4a25 */
  if ((C.sf!=C.of)) goto L_10ee4a25;
  /* 10ee4a0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4a12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee4a15 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4a18 jg 0x10ee4a25 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee4a25;
  /* 10ee4a1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4a1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4a20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee4a23 jmp 0x10ee4a04 */
  goto L_10ee4a04;
L_10ee4a25:;
  /* 10ee4a25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4a29 je 0x10ee4a39 */
  if (C.zf) goto L_10ee4a39;
  /* 10ee4a2b mov edx, dword ptr [0x10f0d2c8] */
  EDX = (r32((uint32_t)(0x10f0d2c8)));
  /* 10ee4a31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee4a33 mov dword ptr [0x10f0d2c8], edx */
  w32((uint32_t)(0x10f0d2c8), (EDX));
L_10ee4a39:;
  /* 10ee4a39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4a3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee4a3f mov dword ptr [0x10f0d2cc], ecx */
  w32((uint32_t)(0x10f0d2cc), (ECX));
  /* 10ee4a45 cmp dword ptr [0x10f0d2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4a4c je 0x10ee4a6e */
  if (C.zf) goto L_10ee4a6e;
  /* 10ee4a4e push 3 */
  push32((uint32_t)(0x3u));
  /* 10ee4a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4a53 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4a54 mov eax, dword ptr [0x10f0d358] */
  EAX = (r32((uint32_t)(0x10f0d358)));
  /* 10ee4a59 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4a5a call 0x10ee06a0 */
  push32(0x10ee4a5fu); f_10ee06a0();
  /* 10ee4a5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4a62 mov ecx, dword ptr [0x10f0d358] */
  ECX = (r32((uint32_t)(0x10f0d358)));
  /* 10ee4a68 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10ee4a6c jmp 0x10ee4a77 */
  goto L_10ee4a77;
L_10ee4a6e:;
  /* 10ee4a6e mov edx, dword ptr [0x10f0d358] */
  EDX = (r32((uint32_t)(0x10f0d358)));
  /* 10ee4a74 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10ee4a77:;
  /* 10ee4a77 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4a79 pop ebp */
  EBP = (pop32());
  /* 10ee4a7a ret  */
  ESPCHK(0x10ee46d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a80 @ 0x10ee4a80 (46 bytes, 18 insns) */
void f_10ee4a80(void) {
  FTRACE(0x10ee4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4a81 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4a84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ee4a86 call 0x10edb620 */
  push32(0x10ee4a8bu); f_10edb620();
  /* 10ee4a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4a8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4a91 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4a92 call 0x10ee4ab0 */
  push32(0x10ee4a97u); f_10ee4ab0();
  /* 10ee4a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4a9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee4a9d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10ee4a9f call 0x10edb6c0 */
  push32(0x10ee4aa4u); f_10edb6c0();
  /* 10ee4aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4aaa mov esp, ebp */
  ESP = (EBP);
  /* 10ee4aac pop ebp */
  EBP = (pop32());
  /* 10ee4aad ret  */
  ESPCHK(0x10ee4a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ab0 @ 0x10ee4ab0 (762 bytes, 246 insns) */
void f_10ee4ab0(void) {
  FTRACE(0x10ee4ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4ab4 cmp dword ptr [0x10f0d2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4abb jne 0x10ee4ac4 */
  if (!C.zf) goto L_10ee4ac4;
  /* 10ee4abd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4abf jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4ac4:;
  /* 10ee4ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4ac7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ee4aca cmp ecx, dword ptr [0x10f0d360] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d360))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4ad0 jne 0x10ee4ae4 */
  if (!C.zf) goto L_10ee4ae4;
  /* 10ee4ad2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4ad5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ee4ad8 cmp eax, dword ptr [0x10f0d370] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d370))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4ade je 0x10ee4cab */
  if (C.zf) goto L_10ee4cab;
L_10ee4ae4:;
  /* 10ee4ae4 cmp dword ptr [0x10f0f6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4aeb je 0x10ee4c65 */
  if (C.zf) goto L_10ee4c65;
  /* 10ee4af1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4af3 mov cx, word ptr [0x10f0f780] */
  CX = (r16((uint32_t)(0x10f0f780)));
  /* 10ee4afa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee4afc jne 0x10ee4b59 */
  if (!C.zf) goto L_10ee4b59;
  /* 10ee4afe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4b00 mov dx, word ptr [0x10f0f78e] */
  DX = (r16((uint32_t)(0x10f0f78e)));
  /* 10ee4b07 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4b08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4b0a mov ax, word ptr [0x10f0f78c] */
  AX = (r16((uint32_t)(0x10f0f78c)));
  /* 10ee4b10 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4b11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4b13 mov cx, word ptr [0x10f0f78a] */
  CX = (r16((uint32_t)(0x10f0f78a)));
  /* 10ee4b1a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4b1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4b1d mov dx, word ptr [0x10f0f788] */
  DX = (r16((uint32_t)(0x10f0f788)));
  /* 10ee4b24 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4b29 mov ax, word ptr [0x10f0f784] */
  AX = (r16((uint32_t)(0x10f0f784)));
  /* 10ee4b2f push eax */
  push32((uint32_t)(EAX));
  /* 10ee4b30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4b32 mov cx, word ptr [0x10f0f786] */
  CX = (r16((uint32_t)(0x10f0f786)));
  /* 10ee4b39 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4b3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4b3c mov dx, word ptr [0x10f0f782] */
  DX = (r16((uint32_t)(0x10f0f782)));
  /* 10ee4b43 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4b47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ee4b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4b4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4b4f call 0x10ee4db0 */
  push32(0x10ee4b54u); f_10ee4db0();
  /* 10ee4b54 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4b57 jmp 0x10ee4baa */
  goto L_10ee4baa;
L_10ee4b59:;
  /* 10ee4b59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4b5b mov dx, word ptr [0x10f0f78e] */
  DX = (r16((uint32_t)(0x10f0f78e)));
  /* 10ee4b62 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4b65 mov ax, word ptr [0x10f0f78c] */
  AX = (r16((uint32_t)(0x10f0f78c)));
  /* 10ee4b6b push eax */
  push32((uint32_t)(EAX));
  /* 10ee4b6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4b6e mov cx, word ptr [0x10f0f78a] */
  CX = (r16((uint32_t)(0x10f0f78a)));
  /* 10ee4b75 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4b76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4b78 mov dx, word ptr [0x10f0f788] */
  DX = (r16((uint32_t)(0x10f0f788)));
  /* 10ee4b7f push edx */
  push32((uint32_t)(EDX));
  /* 10ee4b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4b82 mov ax, word ptr [0x10f0f786] */
  AX = (r16((uint32_t)(0x10f0f786)));
  /* 10ee4b88 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4b8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4b8f mov cx, word ptr [0x10f0f782] */
  CX = (r16((uint32_t)(0x10f0f782)));
  /* 10ee4b96 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4b9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ee4b9d push eax */
  push32((uint32_t)(EAX));
  /* 10ee4b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4ba2 call 0x10ee4db0 */
  push32(0x10ee4ba7u); f_10ee4db0();
  /* 10ee4ba7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee4baa:;
  /* 10ee4baa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4bac mov cx, word ptr [0x10f0f72c] */
  CX = (r16((uint32_t)(0x10f0f72c)));
  /* 10ee4bb3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee4bb5 jne 0x10ee4c12 */
  if (!C.zf) goto L_10ee4c12;
  /* 10ee4bb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4bb9 mov dx, word ptr [0x10f0f73a] */
  DX = (r16((uint32_t)(0x10f0f73a)));
  /* 10ee4bc0 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4bc3 mov ax, word ptr [0x10f0f738] */
  AX = (r16((uint32_t)(0x10f0f738)));
  /* 10ee4bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4bcc mov cx, word ptr [0x10f0f736] */
  CX = (r16((uint32_t)(0x10f0f736)));
  /* 10ee4bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4bd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4bd6 mov dx, word ptr [0x10f0f734] */
  DX = (r16((uint32_t)(0x10f0f734)));
  /* 10ee4bdd push edx */
  push32((uint32_t)(EDX));
  /* 10ee4bde push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4be2 mov ax, word ptr [0x10f0f730] */
  AX = (r16((uint32_t)(0x10f0f730)));
  /* 10ee4be8 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4be9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4beb mov cx, word ptr [0x10f0f732] */
  CX = (r16((uint32_t)(0x10f0f732)));
  /* 10ee4bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4bf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4bf5 mov dx, word ptr [0x10f0f72e] */
  DX = (r16((uint32_t)(0x10f0f72e)));
  /* 10ee4bfc push edx */
  push32((uint32_t)(EDX));
  /* 10ee4bfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4c00 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ee4c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c08 call 0x10ee4db0 */
  push32(0x10ee4c0du); f_10ee4db0();
  /* 10ee4c0d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4c10 jmp 0x10ee4c63 */
  goto L_10ee4c63;
L_10ee4c12:;
  /* 10ee4c12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4c14 mov dx, word ptr [0x10f0f73a] */
  DX = (r16((uint32_t)(0x10f0f73a)));
  /* 10ee4c1b push edx */
  push32((uint32_t)(EDX));
  /* 10ee4c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4c1e mov ax, word ptr [0x10f0f738] */
  AX = (r16((uint32_t)(0x10f0f738)));
  /* 10ee4c24 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4c25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4c27 mov cx, word ptr [0x10f0f736] */
  CX = (r16((uint32_t)(0x10f0f736)));
  /* 10ee4c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4c2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4c31 mov dx, word ptr [0x10f0f734] */
  DX = (r16((uint32_t)(0x10f0f734)));
  /* 10ee4c38 push edx */
  push32((uint32_t)(EDX));
  /* 10ee4c39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4c3b mov ax, word ptr [0x10f0f732] */
  AX = (r16((uint32_t)(0x10f0f732)));
  /* 10ee4c41 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4c48 mov cx, word ptr [0x10f0f72e] */
  CX = (r16((uint32_t)(0x10f0f72e)));
  /* 10ee4c4f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4c50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4c53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ee4c56 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c5b call 0x10ee4db0 */
  push32(0x10ee4c60u); f_10ee4db0();
  /* 10ee4c60 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee4c63:;
  /* 10ee4c63 jmp 0x10ee4cab */
  goto L_10ee4cab;
L_10ee4c65:;
  /* 10ee4c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee4c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4c73 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee4c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4c78 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ee4c7b push edx */
  push32((uint32_t)(EDX));
  /* 10ee4c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4c80 call 0x10ee4db0 */
  push32(0x10ee4c85u); f_10ee4db0();
  /* 10ee4c85 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee4c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4c94 push 5 */
  push32((uint32_t)(0x5u));
  /* 10ee4c96 push 0xa */
  push32((uint32_t)(0xau));
  /* 10ee4c98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4c9b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ee4c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee4c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee4ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee4ca3 call 0x10ee4db0 */
  push32(0x10ee4ca8u); f_10ee4db0();
  /* 10ee4ca8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee4cab:;
  /* 10ee4cab mov edx, dword ptr [0x10f0d364] */
  EDX = (r32((uint32_t)(0x10f0d364)));
  /* 10ee4cb1 cmp edx, dword ptr [0x10f0d374] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4cb7 jge 0x10ee4d04 */
  if ((C.sf==C.of)) goto L_10ee4d04;
  /* 10ee4cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4cbc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ee4cbf cmp ecx, dword ptr [0x10f0d364] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4cc5 jl 0x10ee4cd5 */
  if ((C.sf!=C.of)) goto L_10ee4cd5;
  /* 10ee4cc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4cca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ee4ccd cmp eax, dword ptr [0x10f0d374] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4cd3 jle 0x10ee4cdc */
  if ((C.zf||C.sf!=C.of)) goto L_10ee4cdc;
L_10ee4cd5:;
  /* 10ee4cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4cd7 jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4cdc:;
  /* 10ee4cdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4cdf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ee4ce2 cmp edx, dword ptr [0x10f0d364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4ce8 jle 0x10ee4d02 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee4d02;
  /* 10ee4cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4ced mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ee4cf0 cmp ecx, dword ptr [0x10f0d374] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4cf6 jge 0x10ee4d02 */
  if ((C.sf==C.of)) goto L_10ee4d02;
  /* 10ee4cf8 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee4cfd jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4d02:;
  /* 10ee4d02 jmp 0x10ee4d47 */
  goto L_10ee4d47;
L_10ee4d04:;
  /* 10ee4d04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d07 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ee4d0a cmp eax, dword ptr [0x10f0d374] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d10 jl 0x10ee4d20 */
  if ((C.sf!=C.of)) goto L_10ee4d20;
  /* 10ee4d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d15 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ee4d18 cmp edx, dword ptr [0x10f0d364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d1e jle 0x10ee4d27 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee4d27;
L_10ee4d20:;
  /* 10ee4d20 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee4d25 jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4d27:;
  /* 10ee4d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d2a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ee4d2d cmp ecx, dword ptr [0x10f0d374] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d374))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d33 jle 0x10ee4d47 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee4d47;
  /* 10ee4d35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d38 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ee4d3b cmp eax, dword ptr [0x10f0d364] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d41 jge 0x10ee4d47 */
  if ((C.sf==C.of)) goto L_10ee4d47;
  /* 10ee4d43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4d45 jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4d47:;
  /* 10ee4d47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee4d4d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee4d55 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4d57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d5a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee4d5d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4d63 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4d65 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4d6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee4d6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4d71 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ee4d74 cmp edx, dword ptr [0x10f0d364] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0d364))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d7a jne 0x10ee4d92 */
  if (!C.zf) goto L_10ee4d92;
  /* 10ee4d7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4d7f cmp eax, dword ptr [0x10f0d368] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0d368))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d85 jl 0x10ee4d8e */
  if ((C.sf!=C.of)) goto L_10ee4d8e;
  /* 10ee4d87 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee4d8c jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4d8e:;
  /* 10ee4d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4d90 jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4d92:;
  /* 10ee4d92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4d95 cmp ecx, dword ptr [0x10f0d378] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0d378))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4d9b jge 0x10ee4da4 */
  if ((C.sf==C.of)) goto L_10ee4da4;
  /* 10ee4d9d mov eax, 1 */
  EAX = (0x1u);
  /* 10ee4da2 jmp 0x10ee4da6 */
  goto L_10ee4da6;
L_10ee4da4:;
  /* 10ee4da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee4da6:;
  /* 10ee4da6 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4da8 pop ebp */
  EBP = (pop32());
  /* 10ee4da9 ret  */
  ESPCHK(0x10ee4ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014db0 @ 0x10ee4db0 (504 bytes, 145 insns) */
void f_10ee4db0(void) {
  FTRACE(0x10ee4db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4db1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4db3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4db6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4dba jne 0x10ee4e8c */
  if (!C.zf) goto L_10ee4e8c;
  /* 10ee4dc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4dc3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4dc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee4dc8 jne 0x10ee4dd9 */
  if (!C.zf) goto L_10ee4dd9;
  /* 10ee4dca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee4dcd mov edx, dword ptr [ecx*4 + 0x10f0d378] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0d378)));
  /* 10ee4dd4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee4dd7 jmp 0x10ee4de6 */
  goto L_10ee4de6;
L_10ee4dd9:;
  /* 10ee4dd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee4ddc mov ecx, dword ptr [eax*4 + 0x10f0d3ac] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0d3ac)));
  /* 10ee4de3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ee4de6:;
  /* 10ee4de6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee4de9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4dec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee4def mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4df2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4df5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4dfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4dfe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4e00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4e03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4e06 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10ee4e09 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10ee4e0d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee4e0e mov ecx, 7 */
  ECX = (0x7u);
  /* 10ee4e13 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee4e15 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee4e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee4e1b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4e1e jge 0x10ee4e39 */
  if ((C.sf==C.of)) goto L_10ee4e39;
  /* 10ee4e20 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee4e23 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4e26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee4e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4e2c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4e2f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4e32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4e34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee4e37 jmp 0x10ee4e4d */
  goto L_10ee4e4d;
L_10ee4e39:;
  /* 10ee4e39 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee4e3c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4e3f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee4e42 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4e45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4e48 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4e4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ee4e4d:;
  /* 10ee4e4d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4e51 jne 0x10ee4e8a */
  if (!C.zf) goto L_10ee4e8a;
  /* 10ee4e53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4e56 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee4e59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee4e5b jne 0x10ee4e6c */
  if (!C.zf) goto L_10ee4e6c;
  /* 10ee4e5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee4e60 mov eax, dword ptr [edx*4 + 0x10f0d37c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f0d37c)));
  /* 10ee4e67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee4e6a jmp 0x10ee4e79 */
  goto L_10ee4e79;
L_10ee4e6c:;
  /* 10ee4e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee4e6f mov edx, dword ptr [ecx*4 + 0x10f0d3b0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0d3b0)));
  /* 10ee4e76 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ee4e79:;
  /* 10ee4e79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4e7c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4e7f jle 0x10ee4e8a */
  if ((C.zf||C.sf!=C.of)) goto L_10ee4e8a;
  /* 10ee4e81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4e84 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4e87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ee4e8a:;
  /* 10ee4e8a jmp 0x10ee4ec1 */
  goto L_10ee4ec1;
L_10ee4e8c:;
  /* 10ee4e8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4e8f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee4e92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee4e94 jne 0x10ee4ea5 */
  if (!C.zf) goto L_10ee4ea5;
  /* 10ee4e96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee4e99 mov ecx, dword ptr [eax*4 + 0x10f0d378] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0d378)));
  /* 10ee4ea0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee4ea3 jmp 0x10ee4eb2 */
  goto L_10ee4eb2;
L_10ee4ea5:;
  /* 10ee4ea5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee4ea8 mov eax, dword ptr [edx*4 + 0x10f0d3ac] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f0d3ac)));
  /* 10ee4eaf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ee4eb2:;
  /* 10ee4eb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee4eb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee4eb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4ebb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4ebe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ee4ec1:;
  /* 10ee4ec1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4ec5 jne 0x10ee4f01 */
  if (!C.zf) goto L_10ee4f01;
  /* 10ee4ec7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4eca mov dword ptr [0x10f0d364], eax */
  w32((uint32_t)(0x10f0d364), (EAX));
  /* 10ee4ecf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ee4ed2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4ed5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee4ed8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4eda imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4edd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ee4ee0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4ee2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4ee8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ee4eeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4eed mov dword ptr [0x10f0d368], ecx */
  w32((uint32_t)(0x10f0d368), (ECX));
  /* 10ee4ef3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4ef6 mov dword ptr [0x10f0d360], edx */
  w32((uint32_t)(0x10f0d360), (EDX));
  /* 10ee4efc jmp 0x10ee4fa4 */
  goto L_10ee4fa4;
L_10ee4f01:;
  /* 10ee4f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee4f04 mov dword ptr [0x10f0d374], eax */
  w32((uint32_t)(0x10f0d374), (EAX));
  /* 10ee4f09 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ee4f0c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4f0f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee4f12 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4f14 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4f17 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10ee4f1a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4f1c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4f22 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10ee4f25 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4f27 mov dword ptr [0x10f0d378], ecx */
  w32((uint32_t)(0x10f0d378), (ECX));
  /* 10ee4f2d mov edx, dword ptr [0x10f0d2d0] */
  EDX = (r32((uint32_t)(0x10f0d2d0)));
  /* 10ee4f33 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee4f39 mov eax, dword ptr [0x10f0d378] */
  EAX = (r32((uint32_t)(0x10f0d378)));
  /* 10ee4f3e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4f40 mov dword ptr [0x10f0d378], eax */
  w32((uint32_t)(0x10f0d378), (EAX));
  /* 10ee4f45 cmp dword ptr [0x10f0d378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4f4c jge 0x10ee4f71 */
  if ((C.sf==C.of)) goto L_10ee4f71;
  /* 10ee4f4e mov ecx, dword ptr [0x10f0d378] */
  ECX = (r32((uint32_t)(0x10f0d378)));
  /* 10ee4f54 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4f5a mov dword ptr [0x10f0d378], ecx */
  w32((uint32_t)(0x10f0d378), (ECX));
  /* 10ee4f60 mov edx, dword ptr [0x10f0d374] */
  EDX = (r32((uint32_t)(0x10f0d374)));
  /* 10ee4f66 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4f69 mov dword ptr [0x10f0d374], edx */
  w32((uint32_t)(0x10f0d374), (EDX));
  /* 10ee4f6f jmp 0x10ee4f9b */
  goto L_10ee4f9b;
L_10ee4f71:;
  /* 10ee4f71 cmp dword ptr [0x10f0d378], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d378))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4f7b jl 0x10ee4f9b */
  if ((C.sf!=C.of)) goto L_10ee4f9b;
  /* 10ee4f7d mov eax, dword ptr [0x10f0d378] */
  EAX = (r32((uint32_t)(0x10f0d378)));
  /* 10ee4f82 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4f87 mov dword ptr [0x10f0d378], eax */
  w32((uint32_t)(0x10f0d378), (EAX));
  /* 10ee4f8c mov ecx, dword ptr [0x10f0d374] */
  ECX = (r32((uint32_t)(0x10f0d374)));
  /* 10ee4f92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4f95 mov dword ptr [0x10f0d374], ecx */
  w32((uint32_t)(0x10f0d374), (ECX));
L_10ee4f9b:;
  /* 10ee4f9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee4f9e mov dword ptr [0x10f0d370], edx */
  w32((uint32_t)(0x10f0d370), (EDX));
L_10ee4fa4:;
  /* 10ee4fa4 mov esp, ebp */
  ESP = (EBP);
  /* 10ee4fa6 pop ebp */
  EBP = (pop32());
  /* 10ee4fa7 ret  */
  ESPCHK(0x10ee4db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fb0 @ 0x10ee4fb0 (836 bytes, 238 insns) */
void f_10ee4fb0(void) {
  FTRACE(0x10ee4fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee4fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee4fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee4fb3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee4fb6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee4fb8 call 0x10edb620 */
  push32(0x10ee4fbdu); f_10edb620();
  /* 10ee4fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4fc3 push eax */
  push32((uint32_t)(EAX));
  /* 10ee4fc4 call 0x10ee5300 */
  push32(0x10ee4fc9u); f_10ee5300();
  /* 10ee4fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4fcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ee4fcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee4fd2 cmp ecx, dword ptr [0x10f10bd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10bd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4fd8 jne 0x10ee4feb */
  if (!C.zf) goto L_10ee4feb;
  /* 10ee4fda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee4fdc call 0x10edb6c0 */
  push32(0x10ee4fe1u); f_10edb6c0();
  /* 10ee4fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee4fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee4fe6 jmp 0x10ee52f0 */
  goto L_10ee52f0;
L_10ee4feb:;
  /* 10ee4feb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee4fef jne 0x10ee500c */
  if (!C.zf) goto L_10ee500c;
  /* 10ee4ff1 call 0x10ee53e0 */
  push32(0x10ee4ff6u); f_10ee53e0();
  /* 10ee4ff6 call 0x10ee5460 */
  push32(0x10ee4ffbu); f_10ee5460();
  /* 10ee4ffb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee4ffd call 0x10edb6c0 */
  push32(0x10ee5002u); f_10edb6c0();
  /* 10ee5002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5007 jmp 0x10ee52f0 */
  goto L_10ee52f0;
L_10ee500c:;
  /* 10ee500c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee5013 jmp 0x10ee501e */
  goto L_10ee501e;
L_10ee5015:;
  /* 10ee5015 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5018 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee501b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee501e:;
  /* 10ee501e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5022 jae 0x10ee516f */
  if (!C.cf) goto L_10ee516f;
  /* 10ee5028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee502b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee502e mov ecx, dword ptr [eax + 0x10f0d3f0] */
  ECX = (r32((uint32_t)(EAX + 0x10f0d3f0)));
  /* 10ee5034 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5037 jne 0x10ee516a */
  if (!C.zf) goto L_10ee516a;
  /* 10ee503d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ee5044 jmp 0x10ee504f */
  goto L_10ee504f;
L_10ee5046:;
  /* 10ee5046 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5049 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee504c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10ee504f:;
  /* 10ee504f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5056 jae 0x10ee5064 */
  if (!C.cf) goto L_10ee5064;
  /* 10ee5058 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee505b mov byte ptr [eax + 0x10f10d60], 0 */
  w8((uint32_t)(EAX + 0x10f10d60), (0x0u));
  /* 10ee5062 jmp 0x10ee5046 */
  goto L_10ee5046;
L_10ee5064:;
  /* 10ee5064 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee506b jmp 0x10ee5076 */
  goto L_10ee5076;
L_10ee506d:;
  /* 10ee506d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee5070 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5073 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10ee5076:;
  /* 10ee5076 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee507a jae 0x10ee50f7 */
  if (!C.cf) goto L_10ee50f7;
  /* 10ee507c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee507f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee5082 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee5085 lea ecx, [edx + eax*8 + 0x10f0d400] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10f0d400));
  /* 10ee508c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee508f jmp 0x10ee509a */
  goto L_10ee509a;
L_10ee5091:;
  /* 10ee5091 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5094 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5097 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ee509a:;
  /* 10ee509a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee509d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee509f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee50a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee50a3 je 0x10ee50f2 */
  if (C.zf) goto L_10ee50f2;
  /* 10ee50a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee50a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee50aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ee50ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee50af je 0x10ee50f2 */
  if (C.zf) goto L_10ee50f2;
  /* 10ee50b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee50b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee50b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee50b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ee50bb jmp 0x10ee50c6 */
  goto L_10ee50c6;
L_10ee50bd:;
  /* 10ee50bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee50c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee50c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ee50c6:;
  /* 10ee50c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee50c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee50cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ee50ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee50d1 ja 0x10ee50f0 */
  if ((!C.cf&&!C.zf)) goto L_10ee50f0;
  /* 10ee50d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee50d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee50d9 mov dl, byte ptr [eax + 0x10f10d61] */
  DL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10ee50df or dl, byte ptr [ecx + 0x10f0d3e8] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10f0d3e8))); DL = (_r); fl_logic(_r,8); }
  /* 10ee50e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee50e8 mov byte ptr [eax + 0x10f10d61], dl */
  w8((uint32_t)(EAX + 0x10f10d61), (DL));
  /* 10ee50ee jmp 0x10ee50bd */
  goto L_10ee50bd;
L_10ee50f0:;
  /* 10ee50f0 jmp 0x10ee5091 */
  goto L_10ee5091;
L_10ee50f2:;
  /* 10ee50f2 jmp 0x10ee506d */
  goto L_10ee506d;
L_10ee50f7:;
  /* 10ee50f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee50fa mov dword ptr [0x10f10bd8], ecx */
  w32((uint32_t)(0x10f10bd8), (ECX));
  /* 10ee5100 mov dword ptr [0x10f10c5c], 1 */
  w32((uint32_t)(0x10f10c5c), (0x1u));
  /* 10ee510a mov edx, dword ptr [0x10f10bd8] */
  EDX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee5110 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5111 call 0x10ee5360 */
  push32(0x10ee5116u); f_10ee5360();
  /* 10ee5116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5119 mov dword ptr [0x10f10e64], eax */
  w32((uint32_t)(0x10f10e64), (EAX));
  /* 10ee511e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee5125 jmp 0x10ee5130 */
  goto L_10ee5130;
L_10ee5127:;
  /* 10ee5127 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee512a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee512d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ee5130:;
  /* 10ee5130 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5134 jae 0x10ee5154 */
  if (!C.cf) goto L_10ee5154;
  /* 10ee5136 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5139 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee513c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee513f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee5142 mov cx, word ptr [ecx + eax*2 + 0x10f0d3f4] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10f0d3f4)));
  /* 10ee514a mov word ptr [edx*2 + 0x10f10c50], cx */
  w16((uint32_t)(EDX*2 + 0x10f10c50), (CX));
  /* 10ee5152 jmp 0x10ee5127 */
  goto L_10ee5127;
L_10ee5154:;
  /* 10ee5154 call 0x10ee5460 */
  push32(0x10ee5159u); f_10ee5460();
  /* 10ee5159 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee515b call 0x10edb6c0 */
  push32(0x10ee5160u); f_10edb6c0();
  /* 10ee5160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5165 jmp 0x10ee52f0 */
  goto L_10ee52f0;
L_10ee516a:;
  /* 10ee516a jmp 0x10ee5015 */
  goto L_10ee5015;
L_10ee516f:;
  /* 10ee516f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10ee5172 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5176 push eax */
  push32((uint32_t)(EAX));
  /* 10ee5177 call dword ptr [0x10f12378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12378))), 0x10ee517du);
  /* 10ee517d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5180 jne 0x10ee52c2 */
  if (!C.zf) goto L_10ee52c2;
  /* 10ee5186 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ee518d jmp 0x10ee5198 */
  goto L_10ee5198;
L_10ee518f:;
  /* 10ee518f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5192 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5195 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10ee5198:;
  /* 10ee5198 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee519f jae 0x10ee51ad */
  if (!C.cf) goto L_10ee51ad;
  /* 10ee51a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee51a4 mov byte ptr [edx + 0x10f10d60], 0 */
  w8((uint32_t)(EDX + 0x10f10d60), (0x0u));
  /* 10ee51ab jmp 0x10ee518f */
  goto L_10ee518f;
L_10ee51ad:;
  /* 10ee51ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee51b0 mov dword ptr [0x10f10bd8], eax */
  w32((uint32_t)(0x10f10bd8), (EAX));
  /* 10ee51b5 mov dword ptr [0x10f10e64], 0 */
  w32((uint32_t)(0x10f10e64), (0x0u));
  /* 10ee51bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee51c3 jbe 0x10ee527e */
  if ((C.cf||C.zf)) goto L_10ee527e;
  /* 10ee51c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10ee51cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10ee51cf jmp 0x10ee51da */
  goto L_10ee51da;
L_10ee51d1:;
  /* 10ee51d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee51d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee51d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10ee51da:;
  /* 10ee51da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee51dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee51df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee51e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee51e3 je 0x10ee522c */
  if (C.zf) goto L_10ee522c;
  /* 10ee51e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee51e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee51ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ee51ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee51ef je 0x10ee522c */
  if (C.zf) goto L_10ee522c;
  /* 10ee51f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee51f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee51f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee51f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ee51fb jmp 0x10ee5206 */
  goto L_10ee5206;
L_10ee51fd:;
  /* 10ee51fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5203 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ee5206:;
  /* 10ee5206 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee5209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee520b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10ee520e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5211 ja 0x10ee522a */
  if ((!C.cf&&!C.zf)) goto L_10ee522a;
  /* 10ee5213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5216 mov cl, byte ptr [eax + 0x10f10d61] */
  CL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10ee521c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10ee521f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5222 mov byte ptr [edx + 0x10f10d61], cl */
  w8((uint32_t)(EDX + 0x10f10d61), (CL));
  /* 10ee5228 jmp 0x10ee51fd */
  goto L_10ee51fd;
L_10ee522a:;
  /* 10ee522a jmp 0x10ee51d1 */
  goto L_10ee51d1;
L_10ee522c:;
  /* 10ee522c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10ee5233 jmp 0x10ee523e */
  goto L_10ee523e;
L_10ee5235:;
  /* 10ee5235 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5238 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee523b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ee523e:;
  /* 10ee523e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5245 jae 0x10ee525e */
  if (!C.cf) goto L_10ee525e;
  /* 10ee5247 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee524a mov dl, byte ptr [ecx + 0x10f10d61] */
  DL = (r8((uint32_t)(ECX + 0x10f10d61)));
  /* 10ee5250 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10ee5253 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee5256 mov byte ptr [eax + 0x10f10d61], dl */
  w8((uint32_t)(EAX + 0x10f10d61), (DL));
  /* 10ee525c jmp 0x10ee5235 */
  goto L_10ee5235;
L_10ee525e:;
  /* 10ee525e mov ecx, dword ptr [0x10f10bd8] */
  ECX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee5264 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5265 call 0x10ee5360 */
  push32(0x10ee526au); f_10ee5360();
  /* 10ee526a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee526d mov dword ptr [0x10f10e64], eax */
  w32((uint32_t)(0x10f10e64), (EAX));
  /* 10ee5272 mov dword ptr [0x10f10c5c], 1 */
  w32((uint32_t)(0x10f10c5c), (0x1u));
  /* 10ee527c jmp 0x10ee5288 */
  goto L_10ee5288;
L_10ee527e:;
  /* 10ee527e mov dword ptr [0x10f10c5c], 0 */
  w32((uint32_t)(0x10f10c5c), (0x0u));
L_10ee5288:;
  /* 10ee5288 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee528f jmp 0x10ee529a */
  goto L_10ee529a;
L_10ee5291:;
  /* 10ee5291 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee5294 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5297 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10ee529a:;
  /* 10ee529a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee529e jae 0x10ee52af */
  if (!C.cf) goto L_10ee52af;
  /* 10ee52a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee52a3 mov word ptr [eax*2 + 0x10f10c50], 0 */
  w16((uint32_t)(EAX*2 + 0x10f10c50), (0x0u));
  /* 10ee52ad jmp 0x10ee5291 */
  goto L_10ee5291;
L_10ee52af:;
  /* 10ee52af call 0x10ee5460 */
  push32(0x10ee52b4u); f_10ee5460();
  /* 10ee52b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee52b6 call 0x10edb6c0 */
  push32(0x10ee52bbu); f_10edb6c0();
  /* 10ee52bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee52be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee52c0 jmp 0x10ee52f0 */
  goto L_10ee52f0;
L_10ee52c2:;
  /* 10ee52c2 cmp dword ptr [0x10f0f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee52c9 je 0x10ee52e3 */
  if (C.zf) goto L_10ee52e3;
  /* 10ee52cb call 0x10ee53e0 */
  push32(0x10ee52d0u); f_10ee53e0();
  /* 10ee52d0 call 0x10ee5460 */
  push32(0x10ee52d5u); f_10ee5460();
  /* 10ee52d5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee52d7 call 0x10edb6c0 */
  push32(0x10ee52dcu); f_10edb6c0();
  /* 10ee52dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee52df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee52e1 jmp 0x10ee52f0 */
  goto L_10ee52f0;
L_10ee52e3:;
  /* 10ee52e3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10ee52e5 call 0x10edb6c0 */
  push32(0x10ee52eau); f_10edb6c0();
  /* 10ee52ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee52ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10ee52f0:;
  /* 10ee52f0 mov esp, ebp */
  ESP = (EBP);
  /* 10ee52f2 pop ebp */
  EBP = (pop32());
  /* 10ee52f3 ret  */
  ESPCHK(0x10ee4fb0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10ee5300 (89 bytes, 21 insns) */
void f_10ee5300(void) {
  FTRACE(0x10ee5300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5300 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5301 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5303 mov dword ptr [0x10f0f79c], 0 */
  w32((uint32_t)(0x10f0f79c), (0x0u));
  /* 10ee530d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5311 jne 0x10ee5325 */
  if (!C.zf) goto L_10ee5325;
  /* 10ee5313 mov dword ptr [0x10f0f79c], 1 */
  w32((uint32_t)(0x10f0f79c), (0x1u));
  /* 10ee531d call dword ptr [0x10f12370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12370))), 0x10ee5323u);
  /* 10ee5323 jmp 0x10ee5357 */
  goto L_10ee5357;
L_10ee5325:;
  /* 10ee5325 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5329 jne 0x10ee533d */
  if (!C.zf) goto L_10ee533d;
  /* 10ee532b mov dword ptr [0x10f0f79c], 1 */
  w32((uint32_t)(0x10f0f79c), (0x1u));
  /* 10ee5335 call dword ptr [0x10f12374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12374))), 0x10ee533bu);
  /* 10ee533b jmp 0x10ee5357 */
  goto L_10ee5357;
L_10ee533d:;
  /* 10ee533d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5341 jne 0x10ee5354 */
  if (!C.zf) goto L_10ee5354;
  /* 10ee5343 mov dword ptr [0x10f0f79c], 1 */
  w32((uint32_t)(0x10f0f79c), (0x1u));
  /* 10ee534d mov eax, dword ptr [0x10f0f7c8] */
  EAX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ee5352 jmp 0x10ee5357 */
  goto L_10ee5357;
L_10ee5354:;
  /* 10ee5354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ee5357:;
  /* 10ee5357 pop ebp */
  EBP = (pop32());
  /* 10ee5358 ret  */
  ESPCHK(0x10ee5300u, _esp0);
  ESP += 4; return;
}

/* FUN_10015360 @ 0x10ee5360 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10ee5360(void) {
  FTRACE(0x10ee5360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5360 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5361 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5363 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5367 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee536a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee536d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5373 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee5376 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee537a ja 0x10ee53aa */
  if ((!C.cf&&!C.zf)) goto L_10ee53aa;
  /* 10ee537c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee537f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5381 mov dl, byte ptr [eax + 0x10ee53c4] */
  DL = (r8((uint32_t)(EAX + 0x10ee53c4)));
  /* 10ee5387 jmp dword ptr [edx*4 + 0x10ee53b0] */
  switch (EDX) {
    case 0: goto L_10ee538e;
    case 1: goto L_10ee5395;
    case 2: goto L_10ee539c;
    case 3: goto L_10ee53a3;
    case 4: goto L_10ee53aa;
    default: x86_unimpl("switch@0x10ee5387 out of table"); return;
  }
L_10ee538e:;
  /* 10ee538e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10ee5393 jmp 0x10ee53ac */
  goto L_10ee53ac;
L_10ee5395:;
  /* 10ee5395 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10ee539a jmp 0x10ee53ac */
  goto L_10ee53ac;
L_10ee539c:;
  /* 10ee539c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10ee53a1 jmp 0x10ee53ac */
  goto L_10ee53ac;
L_10ee53a3:;
  /* 10ee53a3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10ee53a8 jmp 0x10ee53ac */
  goto L_10ee53ac;
L_10ee53aa:;
  /* 10ee53aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee53ac:;
  /* 10ee53ac mov esp, ebp */
  ESP = (EBP);
  /* 10ee53ae pop ebp */
  EBP = (pop32());
  /* 10ee53af ret  */
  ESPCHK(0x10ee5360u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10ee53e0 (116 bytes, 29 insns) */
void f_10ee53e0(void) {
  FTRACE(0x10ee53e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee53e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee53e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee53e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee53e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee53eb jmp 0x10ee53f6 */
  goto L_10ee53f6;
L_10ee53ed:;
  /* 10ee53ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee53f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee53f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee53f6:;
  /* 10ee53f6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee53fd jge 0x10ee540b */
  if ((C.sf==C.of)) goto L_10ee540b;
  /* 10ee53ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5402 mov byte ptr [ecx + 0x10f10d60], 0 */
  w8((uint32_t)(ECX + 0x10f10d60), (0x0u));
  /* 10ee5409 jmp 0x10ee53ed */
  goto L_10ee53ed;
L_10ee540b:;
  /* 10ee540b mov dword ptr [0x10f10bd8], 0 */
  w32((uint32_t)(0x10f10bd8), (0x0u));
  /* 10ee5415 mov dword ptr [0x10f10c5c], 0 */
  w32((uint32_t)(0x10f10c5c), (0x0u));
  /* 10ee541f mov dword ptr [0x10f10e64], 0 */
  w32((uint32_t)(0x10f10e64), (0x0u));
  /* 10ee5429 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee5430 jmp 0x10ee543b */
  goto L_10ee543b;
L_10ee5432:;
  /* 10ee5432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5435 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5438 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee543b:;
  /* 10ee543b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee543f jge 0x10ee5450 */
  if ((C.sf==C.of)) goto L_10ee5450;
  /* 10ee5441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5444 mov word ptr [eax*2 + 0x10f10c50], 0 */
  w16((uint32_t)(EAX*2 + 0x10f10c50), (0x0u));
  /* 10ee544e jmp 0x10ee5432 */
  goto L_10ee5432;
L_10ee5450:;
  /* 10ee5450 mov esp, ebp */
  ESP = (EBP);
  /* 10ee5452 pop ebp */
  EBP = (pop32());
  /* 10ee5453 ret  */
  ESPCHK(0x10ee53e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015460 @ 0x10ee5460 (770 bytes, 175 insns) */
void f_10ee5460(void) {
  FTRACE(0x10ee5460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5460 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5461 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5463 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5469 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10ee546f push eax */
  push32((uint32_t)(EAX));
  /* 10ee5470 mov ecx, dword ptr [0x10f10bd8] */
  ECX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee5476 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5477 call dword ptr [0x10f12378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12378))), 0x10ee547du);
  /* 10ee547d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5480 jne 0x10ee5699 */
  if (!C.zf) goto L_10ee5699;
  /* 10ee5486 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10ee5490 jmp 0x10ee54a1 */
  goto L_10ee54a1;
L_10ee5492:;
  /* 10ee5492 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5498 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee549b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10ee54a1:;
  /* 10ee54a1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee54ab jae 0x10ee54c2 */
  if (!C.cf) goto L_10ee54c2;
  /* 10ee54ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee54b3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10ee54b9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10ee54c0 jmp 0x10ee5492 */
  goto L_10ee5492;
L_10ee54c2:;
  /* 10ee54c2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10ee54c9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10ee54cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee54d2 jmp 0x10ee54dd */
  goto L_10ee54dd;
L_10ee54d4:;
  /* 10ee54d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee54d7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee54da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee54dd:;
  /* 10ee54dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee54e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee54e2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee54e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee54e6 je 0x10ee5528 */
  if (C.zf) goto L_10ee5528;
  /* 10ee54e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee54eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee54ed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee54ef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10ee54f5 jmp 0x10ee5506 */
  goto L_10ee5506;
L_10ee54f7:;
  /* 10ee54f7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee54fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5500 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10ee5506:;
  /* 10ee5506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5509 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee550b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10ee550e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5514 ja 0x10ee5526 */
  if ((!C.cf&&!C.zf)) goto L_10ee5526;
  /* 10ee5516 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee551c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10ee5524 jmp 0x10ee54f7 */
  goto L_10ee54f7;
L_10ee5526:;
  /* 10ee5526 jmp 0x10ee54d4 */
  goto L_10ee54d4;
L_10ee5528:;
  /* 10ee5528 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee552a mov eax, dword ptr [0x10f10e64] */
  EAX = (r32((uint32_t)(0x10f10e64)));
  /* 10ee552f push eax */
  push32((uint32_t)(EAX));
  /* 10ee5530 mov ecx, dword ptr [0x10f10bd8] */
  ECX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee5536 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5537 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10ee553d push edx */
  push32((uint32_t)(EDX));
  /* 10ee553e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee5543 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10ee5549 push eax */
  push32((uint32_t)(EAX));
  /* 10ee554a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee554c call 0x10ee7b30 */
  push32(0x10ee5551u); f_10ee7b30();
  /* 10ee5551 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5554 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee5556 mov ecx, dword ptr [0x10f10bd8] */
  ECX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee555c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee555d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee5562 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10ee5568 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5569 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee556e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10ee5574 push eax */
  push32((uint32_t)(EAX));
  /* 10ee5575 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee557a mov ecx, dword ptr [0x10f10e64] */
  ECX = (r32((uint32_t)(0x10f10e64)));
  /* 10ee5580 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5581 call 0x10ee8740 */
  push32(0x10ee5586u); f_10ee8740();
  /* 10ee5586 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5589 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee558b mov edx, dword ptr [0x10f10bd8] */
  EDX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee5591 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5592 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee5597 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10ee559d push eax */
  push32((uint32_t)(EAX));
  /* 10ee559e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee55a3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10ee55a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee55aa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10ee55af mov edx, dword ptr [0x10f10e64] */
  EDX = (r32((uint32_t)(0x10f10e64)));
  /* 10ee55b5 push edx */
  push32((uint32_t)(EDX));
  /* 10ee55b6 call 0x10ee8740 */
  push32(0x10ee55bbu); f_10ee8740();
  /* 10ee55bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee55be mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10ee55c8 jmp 0x10ee55d9 */
  goto L_10ee55d9;
L_10ee55ca:;
  /* 10ee55ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee55d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee55d3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10ee55d9:;
  /* 10ee55d9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee55e3 jae 0x10ee5694 */
  if (!C.cf) goto L_10ee5694;
  /* 10ee55e9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee55ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee55f1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10ee55f9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee55fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee55fe je 0x10ee5636 */
  if (C.zf) goto L_10ee5636;
  /* 10ee5600 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5606 mov cl, byte ptr [eax + 0x10f10d61] */
  CL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10ee560c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10ee560f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5615 mov byte ptr [edx + 0x10f10d61], cl */
  w8((uint32_t)(EDX + 0x10f10d61), (CL));
  /* 10ee561b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5621 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5627 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10ee562e mov byte ptr [eax + 0x10f10c60], dl */
  w8((uint32_t)(EAX + 0x10f10c60), (DL));
  /* 10ee5634 jmp 0x10ee568f */
  goto L_10ee568f;
L_10ee5636:;
  /* 10ee5636 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee563c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee563e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10ee5646 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5649 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee564b je 0x10ee5682 */
  if (C.zf) goto L_10ee5682;
  /* 10ee564d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5653 mov al, byte ptr [edx + 0x10f10d61] */
  AL = (r8((uint32_t)(EDX + 0x10f10d61)));
  /* 10ee5659 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10ee565b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5661 mov byte ptr [ecx + 0x10f10d61], al */
  w8((uint32_t)(ECX + 0x10f10d61), (AL));
  /* 10ee5667 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee566d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5673 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10ee567a mov byte ptr [edx + 0x10f10c60], cl */
  w8((uint32_t)(EDX + 0x10f10c60), (CL));
  /* 10ee5680 jmp 0x10ee568f */
  goto L_10ee568f;
L_10ee5682:;
  /* 10ee5682 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5688 mov byte ptr [edx + 0x10f10c60], 0 */
  w8((uint32_t)(EDX + 0x10f10c60), (0x0u));
L_10ee568f:;
  /* 10ee568f jmp 0x10ee55ca */
  goto L_10ee55ca;
L_10ee5694:;
  /* 10ee5694 jmp 0x10ee575e */
  goto L_10ee575e;
L_10ee5699:;
  /* 10ee5699 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10ee56a3 jmp 0x10ee56b4 */
  goto L_10ee56b4;
L_10ee56a5:;
  /* 10ee56a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee56ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee56ae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10ee56b4:;
  /* 10ee56b4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee56be jae 0x10ee575e */
  if (!C.cf) goto L_10ee575e;
  /* 10ee56c4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee56cb jb 0x10ee5708 */
  if (C.cf) goto L_10ee5708;
  /* 10ee56cd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee56d4 ja 0x10ee5708 */
  if ((!C.cf&&!C.zf)) goto L_10ee5708;
  /* 10ee56d6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee56dc mov dl, byte ptr [ecx + 0x10f10d61] */
  DL = (r8((uint32_t)(ECX + 0x10f10d61)));
  /* 10ee56e2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10ee56e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee56eb mov byte ptr [eax + 0x10f10d61], dl */
  w8((uint32_t)(EAX + 0x10f10d61), (DL));
  /* 10ee56f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee56f7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee56fa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5700 mov byte ptr [edx + 0x10f10c60], cl */
  w8((uint32_t)(EDX + 0x10f10c60), (CL));
  /* 10ee5706 jmp 0x10ee5759 */
  goto L_10ee5759;
L_10ee5708:;
  /* 10ee5708 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee570f jb 0x10ee574c */
  if (C.cf) goto L_10ee574c;
  /* 10ee5711 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5718 ja 0x10ee574c */
  if ((!C.cf&&!C.zf)) goto L_10ee574c;
  /* 10ee571a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5720 mov cl, byte ptr [eax + 0x10f10d61] */
  CL = (r8((uint32_t)(EAX + 0x10f10d61)));
  /* 10ee5726 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10ee5729 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee572f mov byte ptr [edx + 0x10f10d61], cl */
  w8((uint32_t)(EDX + 0x10f10d61), (CL));
  /* 10ee5735 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee573b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee573e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5744 mov byte ptr [ecx + 0x10f10c60], al */
  w8((uint32_t)(ECX + 0x10f10c60), (AL));
  /* 10ee574a jmp 0x10ee5759 */
  goto L_10ee5759;
L_10ee574c:;
  /* 10ee574c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10ee5752 mov byte ptr [edx + 0x10f10c60], 0 */
  w8((uint32_t)(EDX + 0x10f10c60), (0x0u));
L_10ee5759:;
  /* 10ee5759 jmp 0x10ee56a5 */
  goto L_10ee56a5;
L_10ee575e:;
  /* 10ee575e mov esp, ebp */
  ESP = (EBP);
  /* 10ee5760 pop ebp */
  EBP = (pop32());
  /* 10ee5761 ret  */
  ESPCHK(0x10ee5460u, _esp0);
  ESP += 4; return;
}

/* FUN_10015770 @ 0x10ee5770 (23 bytes, 9 insns) */
void f_10ee5770(void) {
  FTRACE(0x10ee5770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5770 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5771 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5773 cmp dword ptr [0x10f10c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee577a je 0x10ee5783 */
  if (C.zf) goto L_10ee5783;
  /* 10ee577c mov eax, dword ptr [0x10f10bd8] */
  EAX = (r32((uint32_t)(0x10f10bd8)));
  /* 10ee5781 jmp 0x10ee5785 */
  goto L_10ee5785;
L_10ee5783:;
  /* 10ee5783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee5785:;
  /* 10ee5785 pop ebp */
  EBP = (pop32());
  /* 10ee5786 ret  */
  ESPCHK(0x10ee5770u, _esp0);
  ESP += 4; return;
}

/* FUN_10015790 @ 0x10ee5790 (34 bytes, 10 insns) */
void f_10ee5790(void) {
  FTRACE(0x10ee5790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5790 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5791 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5793 cmp dword ptr [0x10f10ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee579a jne 0x10ee57b0 */
  if (!C.zf) goto L_10ee57b0;
  /* 10ee579c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10ee579e call 0x10ee4fb0 */
  push32(0x10ee57a3u); f_10ee4fb0();
  /* 10ee57a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee57a6 mov dword ptr [0x10f10ff0], 1 */
  w32((uint32_t)(0x10f10ff0), (0x1u));
L_10ee57b0:;
  /* 10ee57b0 pop ebp */
  EBP = (pop32());
  /* 10ee57b1 ret  */
  ESPCHK(0x10ee5790u, _esp0);
  ESP += 4; return;
}

/* FUN_100157c0 @ 0x10ee57c0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_10ee57c0(void) {
  FTRACE(0x10ee57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee57c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee57c3 push edi */
  push32((uint32_t)(EDI));
  /* 10ee57c4 push esi */
  push32((uint32_t)(ESI));
  /* 10ee57c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee57c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee57cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee57ce mov eax, ecx */
  EAX = (ECX);
  /* 10ee57d0 mov edx, ecx */
  EDX = (ECX);
  /* 10ee57d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee57d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee57d6 jbe 0x10ee57e0 */
  if ((C.cf||C.zf)) goto L_10ee57e0;
  /* 10ee57d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee57da jb 0x10ee5958 */
  if (C.cf) goto L_10ee5958;
L_10ee57e0:;
  /* 10ee57e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ee57e6 jne 0x10ee57fc */
  if (!C.zf) goto L_10ee57fc;
  /* 10ee57e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee57eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee57ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee57f1 jb 0x10ee581c */
  if (C.cf) goto L_10ee581c;
  /* 10ee57f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee57f5 jmp dword ptr [edx*4 + 0x10ee5908] */
  switch (EDX) {
    case 0: goto L_10ee5918;
    case 1: goto L_10ee5920;
    case 2: goto L_10ee592c;
    case 3: goto L_10ee5940;
    default: x86_unimpl("switch@0x10ee57f5 out of table"); return;
  }
L_10ee57fc:;
  /* 10ee57fc mov eax, edi */
  EAX = (EDI);
  /* 10ee57fe mov edx, 3 */
  EDX = (0x3u);
  /* 10ee5803 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5806 jb 0x10ee5814 */
  if (C.cf) goto L_10ee5814;
  /* 10ee5808 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee580b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee580d jmp dword ptr [eax*4 + 0x10ee5820] */
  switch (EAX) {
    case 1: goto L_10ee5830;
    case 2: goto L_10ee585c;
    case 3: goto L_10ee5880;
    default: x86_unimpl("switch@0x10ee580d out of table"); return;
  }
L_10ee5814:;
  /* 10ee5814 jmp dword ptr [ecx*4 + 0x10ee5918] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10ee5918)))); return;
  /* 10ee581b nop  */
  /* nop */
L_10ee581c:;
  /* 10ee581c jmp dword ptr [ecx*4 + 0x10ee589c] */
  switch (ECX) {
    case 0: goto L_10ee58ff;
    case 1: goto L_10ee58ec;
    case 2: goto L_10ee58e4;
    case 3: goto L_10ee58dc;
    case 4: goto L_10ee58d4;
    case 5: goto L_10ee58cc;
    case 6: goto L_10ee58c4;
    case 7: goto L_10ee58bc;
    default: x86_unimpl("switch@0x10ee581c out of table"); return;
  }
  /* 10ee5823 nop  */
  /* nop */
L_10ee5830:;
  /* 10ee5830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee5834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee5836 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee5839 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee583c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee583f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee5842 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee5845 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5848 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee584b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee584e jb 0x10ee581c */
  if (C.cf) goto L_10ee581c;
  /* 10ee5850 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee5852 jmp dword ptr [edx*4 + 0x10ee5908] */
  switch (EDX) {
    case 0: goto L_10ee5918;
    case 1: goto L_10ee5920;
    case 2: goto L_10ee592c;
    case 3: goto L_10ee5940;
    default: x86_unimpl("switch@0x10ee5852 out of table"); return;
  }
  /* 10ee5859 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee585c:;
  /* 10ee585c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee585e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee5860 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee5862 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee5865 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee5868 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee586b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee586e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5871 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5874 jb 0x10ee581c */
  if (C.cf) goto L_10ee581c;
  /* 10ee5876 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee5878 jmp dword ptr [edx*4 + 0x10ee5908] */
  switch (EDX) {
    case 0: goto L_10ee5918;
    case 1: goto L_10ee5920;
    case 2: goto L_10ee592c;
    case 3: goto L_10ee5940;
    default: x86_unimpl("switch@0x10ee5878 out of table"); return;
  }
  /* 10ee587f nop  */
  /* nop */
L_10ee5880:;
  /* 10ee5880 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5882 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee5884 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee5886 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ee5887 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee588a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10ee588b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee588e jb 0x10ee581c */
  if (C.cf) goto L_10ee581c;
  /* 10ee5890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee5892 jmp dword ptr [edx*4 + 0x10ee5908] */
  switch (EDX) {
    case 0: goto L_10ee5918;
    case 1: goto L_10ee5920;
    case 2: goto L_10ee592c;
    case 3: goto L_10ee5940;
    default: x86_unimpl("switch@0x10ee5892 out of table"); return;
  }
  /* 10ee5899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee58bc:;
  /* 10ee58bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10ee58c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10ee58c4:;
  /* 10ee58c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10ee58c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10ee58cc:;
  /* 10ee58cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10ee58d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10ee58d4:;
  /* 10ee58d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10ee58d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10ee58dc:;
  /* 10ee58dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10ee58e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10ee58e4:;
  /* 10ee58e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10ee58e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10ee58ec:;
  /* 10ee58ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10ee58f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10ee58f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ee58fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee58fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ee58ff:;
  /* 10ee58ff jmp dword ptr [edx*4 + 0x10ee5908] */
  switch (EDX) {
    case 0: goto L_10ee5918;
    case 1: goto L_10ee5920;
    case 2: goto L_10ee592c;
    case 3: goto L_10ee5940;
    default: x86_unimpl("switch@0x10ee58ff out of table"); return;
  }
  /* 10ee5906 mov edi, edi */
  EDI = (EDI);
L_10ee5918:;
  /* 10ee5918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee591b pop esi */
  ESI = (pop32());
  /* 10ee591c pop edi */
  EDI = (pop32());
  /* 10ee591d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee591e ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee591f nop  */
  /* nop */
L_10ee5920:;
  /* 10ee5920 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee5922 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee5924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5927 pop esi */
  ESI = (pop32());
  /* 10ee5928 pop edi */
  EDI = (pop32());
  /* 10ee5929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee592a ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee592b nop  */
  /* nop */
L_10ee592c:;
  /* 10ee592c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee592e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee5930 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee5933 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee5936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5939 pop esi */
  ESI = (pop32());
  /* 10ee593a pop edi */
  EDI = (pop32());
  /* 10ee593b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee593c ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee593d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee5940:;
  /* 10ee5940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10ee5942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10ee5944 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee5947 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee594a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee594d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee5950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5953 pop esi */
  ESI = (pop32());
  /* 10ee5954 pop edi */
  EDI = (pop32());
  /* 10ee5955 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee5956 ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee5957 nop  */
  /* nop */
L_10ee5958:;
  /* 10ee5958 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10ee595c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10ee5960 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10ee5966 jne 0x10ee598c */
  if (!C.zf) goto L_10ee598c;
  /* 10ee5968 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee596b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee596e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5971 jb 0x10ee5980 */
  if (C.cf) goto L_10ee5980;
  /* 10ee5973 std  */
  C.df=1;
  /* 10ee5974 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee5976 cld  */
  C.df=0;
  /* 10ee5977 jmp dword ptr [edx*4 + 0x10ee5aa0] */
  switch (EDX) {
    case 0: goto L_10ee5ab0;
    case 1: goto L_10ee5ab8;
    case 2: goto L_10ee5ac8;
    case 3: goto L_10ee5adc;
    default: x86_unimpl("switch@0x10ee5977 out of table"); return;
  }
  /* 10ee597e mov edi, edi */
  EDI = (EDI);
L_10ee5980:;
  /* 10ee5980 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee5982 jmp dword ptr [ecx*4 + 0x10ee5a50] */
  switch (ECX) {
    case 0: goto L_10ee5a97;
    default: x86_unimpl("switch@0x10ee5982 out of table"); return;
  }
  /* 10ee5989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee598c:;
  /* 10ee598c mov eax, edi */
  EAX = (EDI);
  /* 10ee598e mov edx, 3 */
  EDX = (0x3u);
  /* 10ee5993 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5996 jb 0x10ee59a4 */
  if (C.cf) goto L_10ee59a4;
  /* 10ee5998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee599b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee599d jmp dword ptr [eax*4 + 0x10ee59a8] */
  switch (EAX) {
    case 1: goto L_10ee59b8;
    case 2: goto L_10ee59d8;
    case 3: goto L_10ee5a00;
    default: x86_unimpl("switch@0x10ee599d out of table"); return;
  }
L_10ee59a4:;
  /* 10ee59a4 jmp dword ptr [ecx*4 + 0x10ee5aa0] */
  switch (ECX) {
    case 0: goto L_10ee5ab0;
    case 1: goto L_10ee5ab8;
    case 2: goto L_10ee5ac8;
    case 3: goto L_10ee5adc;
    default: x86_unimpl("switch@0x10ee59a4 out of table"); return;
  }
  /* 10ee59ab nop  */
  /* nop */
L_10ee59b8:;
  /* 10ee59b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee59bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee59bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee59c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ee59c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee59c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10ee59c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee59c8 jb 0x10ee5980 */
  if (C.cf) goto L_10ee5980;
  /* 10ee59ca std  */
  C.df=1;
  /* 10ee59cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee59cd cld  */
  C.df=0;
  /* 10ee59ce jmp dword ptr [edx*4 + 0x10ee5aa0] */
  switch (EDX) {
    case 0: goto L_10ee5ab0;
    case 1: goto L_10ee5ab8;
    case 2: goto L_10ee5ac8;
    case 3: goto L_10ee5adc;
    default: x86_unimpl("switch@0x10ee59ce out of table"); return;
  }
  /* 10ee59d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee59d8:;
  /* 10ee59d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee59db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee59dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee59e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee59e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee59e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee59e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee59ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee59ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee59f2 jb 0x10ee5980 */
  if (C.cf) goto L_10ee5980;
  /* 10ee59f4 std  */
  C.df=1;
  /* 10ee59f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee59f7 cld  */
  C.df=0;
  /* 10ee59f8 jmp dword ptr [edx*4 + 0x10ee5aa0] */
  switch (EDX) {
    case 0: goto L_10ee5ab0;
    case 1: goto L_10ee5ab8;
    case 2: goto L_10ee5ac8;
    case 3: goto L_10ee5adc;
    default: x86_unimpl("switch@0x10ee59f8 out of table"); return;
  }
  /* 10ee59ff nop  */
  /* nop */
L_10ee5a00:;
  /* 10ee5a00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee5a03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5a05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee5a08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee5a0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee5a0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee5a11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee5a14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee5a17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5a1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5a1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5a20 jb 0x10ee5980 */
  if (C.cf) goto L_10ee5980;
  /* 10ee5a26 std  */
  C.df=1;
  /* 10ee5a27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10ee5a29 cld  */
  C.df=0;
  /* 10ee5a2a jmp dword ptr [edx*4 + 0x10ee5aa0] */
  switch (EDX) {
    case 0: goto L_10ee5ab0;
    case 1: goto L_10ee5ab8;
    case 2: goto L_10ee5ac8;
    case 3: goto L_10ee5adc;
    default: x86_unimpl("switch@0x10ee5a2a out of table"); return;
  }
  /* 10ee5a31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10ee5a34 push esp */
  push32((uint32_t)(ESP));
  /* 10ee5a35 pop edx */
  EDX = (pop32());
  /* 10ee5a36 out dx, al */
  x86_unimpl("out @ 0x10ee5a36");
  /* 10ee5a37 adc byte ptr [edx + ebx*2 - 0x12], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + -0x12))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee5a3b adc byte ptr [edx + ebx*2 - 0x12], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + -0x12))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee5a3f adc byte ptr [edx + ebx*2 - 0x12], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + -0x12))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee5a43 adc byte ptr [edx + ebx*2 - 0x12], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + -0x12))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee5a47 adc byte ptr [edx + ebx*2 - 0x12], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + -0x12))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + -0x12), (_r)); fl_add(_a,_b,_r,8); }
  /* 10ee5a4c test byte ptr [edx - 0x12], bl */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x12)))&(BL); fl_logic(_r,8); }
  /* 10ee5a54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10ee5a58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10ee5a5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10ee5a60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10ee5a64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10ee5a68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10ee5a6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10ee5a70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10ee5a74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10ee5a78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10ee5a7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10ee5a80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10ee5a84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10ee5a88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10ee5a8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10ee5a93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5a95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10ee5a97:;
  /* 10ee5a97 jmp dword ptr [edx*4 + 0x10ee5aa0] */
  switch (EDX) {
    case 0: goto L_10ee5ab0;
    case 1: goto L_10ee5ab8;
    case 2: goto L_10ee5ac8;
    case 3: goto L_10ee5adc;
    default: x86_unimpl("switch@0x10ee5a97 out of table"); return;
  }
  /* 10ee5a9e mov edi, edi */
  EDI = (EDI);
L_10ee5ab0:;
  /* 10ee5ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5ab3 pop esi */
  ESI = (pop32());
  /* 10ee5ab4 pop edi */
  EDI = (pop32());
  /* 10ee5ab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee5ab6 ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee5ab7 nop  */
  /* nop */
L_10ee5ab8:;
  /* 10ee5ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee5abb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee5abe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5ac1 pop esi */
  ESI = (pop32());
  /* 10ee5ac2 pop edi */
  EDI = (pop32());
  /* 10ee5ac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee5ac4 ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee5ac5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10ee5ac8:;
  /* 10ee5ac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee5acb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee5ace mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee5ad1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee5ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5ad7 pop esi */
  ESI = (pop32());
  /* 10ee5ad8 pop edi */
  EDI = (pop32());
  /* 10ee5ad9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee5ada ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
  /* 10ee5adb nop  */
  /* nop */
L_10ee5adc:;
  /* 10ee5adc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10ee5adf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10ee5ae2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10ee5ae5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10ee5ae8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10ee5aeb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10ee5aee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5af1 pop esi */
  ESI = (pop32());
  /* 10ee5af2 pop edi */
  EDI = (pop32());
  /* 10ee5af3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ee5af4 ret  */
  ESPCHK(0x10ee57c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10ee5b00 (104 bytes, 43 insns) */
void f_10ee5b00(void) {
  FTRACE(0x10ee5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5b00 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee5b01 push esi */
  push32((uint32_t)(ESI));
  /* 10ee5b02 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10ee5b06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5b08 jne 0x10ee5b22 */
  if (!C.zf) goto L_10ee5b22;
  /* 10ee5b0a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10ee5b0e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee5b12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5b14 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee5b16 mov ebx, eax */
  EBX = (EAX);
  /* 10ee5b18 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ee5b1c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee5b1e mov edx, ebx */
  EDX = (EBX);
  /* 10ee5b20 jmp 0x10ee5b63 */
  goto L_10ee5b63;
L_10ee5b22:;
  /* 10ee5b22 mov ecx, eax */
  ECX = (EAX);
  /* 10ee5b24 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10ee5b28 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee5b2c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10ee5b30:;
  /* 10ee5b30 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ee5b32 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10ee5b34 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee5b36 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10ee5b38 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5b3a jne 0x10ee5b30 */
  if (!C.zf) goto L_10ee5b30;
  /* 10ee5b3c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee5b3e mov esi, eax */
  ESI = (EAX);
  /* 10ee5b40 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ee5b44 mov ecx, eax */
  ECX = (EAX);
  /* 10ee5b46 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10ee5b4a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ee5b4c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5b4e jb 0x10ee5b5e */
  if (C.cf) goto L_10ee5b5e;
  /* 10ee5b50 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5b54 ja 0x10ee5b5e */
  if ((!C.cf&&!C.zf)) goto L_10ee5b5e;
  /* 10ee5b56 jb 0x10ee5b5f */
  if (C.cf) goto L_10ee5b5f;
  /* 10ee5b58 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5b5c jbe 0x10ee5b5f */
  if ((C.cf||C.zf)) goto L_10ee5b5f;
L_10ee5b5e:;
  /* 10ee5b5e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10ee5b5f:;
  /* 10ee5b5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5b61 mov eax, esi */
  EAX = (ESI);
L_10ee5b63:;
  /* 10ee5b63 pop esi */
  ESI = (pop32());
  /* 10ee5b64 pop ebx */
  EBX = (pop32());
  /* 10ee5b65 ret 0x10 */
  ESPCHK(0x10ee5b00u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10ee5b70 (117 bytes, 44 insns) */
void f_10ee5b70(void) {
  FTRACE(0x10ee5b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5b70 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee5b71 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10ee5b75 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5b77 jne 0x10ee5b91 */
  if (!C.zf) goto L_10ee5b91;
  /* 10ee5b79 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee5b7d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ee5b81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5b83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee5b85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10ee5b89 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee5b8b mov eax, edx */
  EAX = (EDX);
  /* 10ee5b8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5b8f jmp 0x10ee5be1 */
  goto L_10ee5be1;
L_10ee5b91:;
  /* 10ee5b91 mov ecx, eax */
  ECX = (EAX);
  /* 10ee5b93 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ee5b97 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10ee5b9b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10ee5b9f:;
  /* 10ee5b9f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ee5ba1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10ee5ba3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee5ba5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10ee5ba7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5ba9 jne 0x10ee5b9f */
  if (!C.zf) goto L_10ee5b9f;
  /* 10ee5bab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ee5bad mov ecx, eax */
  ECX = (EAX);
  /* 10ee5baf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ee5bb3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10ee5bb4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10ee5bb8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5bba jb 0x10ee5bca */
  if (C.cf) goto L_10ee5bca;
  /* 10ee5bbc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5bc0 ja 0x10ee5bca */
  if ((!C.cf&&!C.zf)) goto L_10ee5bca;
  /* 10ee5bc2 jb 0x10ee5bd2 */
  if (C.cf) goto L_10ee5bd2;
  /* 10ee5bc4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5bc8 jbe 0x10ee5bd2 */
  if ((C.cf||C.zf)) goto L_10ee5bd2;
L_10ee5bca:;
  /* 10ee5bca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5bce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10ee5bd2:;
  /* 10ee5bd2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5bd6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5bda neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee5bdc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee5bde sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10ee5be1:;
  /* 10ee5be1 pop ebx */
  EBX = (pop32());
  /* 10ee5be2 ret 0x10 */
  ESPCHK(0x10ee5b70u, _esp0);
  ESP += 20; return;
}

/* FUN_10015bf0 @ 0x10ee5bf0 (628 bytes, 214 insns) */
void f_10ee5bf0(void) {
  FTRACE(0x10ee5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5bf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee5bf7 push esi */
  push32((uint32_t)(ESI));
  /* 10ee5bf8 push edi */
  push32((uint32_t)(EDI));
L_10ee5bf9:;
  /* 10ee5bf9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5bfd jne 0x10ee5c1d */
  if (!C.zf) goto L_10ee5c1d;
  /* 10ee5bff push 0x10f0a100 */
  push32((uint32_t)(0x10f0a100u));
  /* 10ee5c04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee5c06 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10ee5c08 push 0x10f0a0f4 */
  push32((uint32_t)(0x10f0a0f4u));
  /* 10ee5c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee5c0f call 0x10eda2e0 */
  push32(0x10ee5c14u); f_10eda2e0();
  /* 10ee5c14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5c17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5c1a jne 0x10ee5c1d */
  if (!C.zf) goto L_10ee5c1d;
  /* 10ee5c1c int3  */
  x86_unimpl("int3 @ 0x10ee5c1c");
L_10ee5c1d:;
  /* 10ee5c1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5c21 jne 0x10ee5bf9 */
  if (!C.zf) goto L_10ee5bf9;
  /* 10ee5c23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee5c26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee5c29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ee5c2f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee5c32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c35 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee5c38 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5c3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee5c40 je 0x10ee5c4f */
  if (C.zf) goto L_10ee5c4f;
  /* 10ee5c42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c45 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee5c48 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5c4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee5c4d je 0x10ee5c65 */
  if (C.zf) goto L_10ee5c65;
L_10ee5c4f:;
  /* 10ee5c4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c52 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ee5c55 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10ee5c57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c5a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10ee5c5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5c60 jmp 0x10ee5e5d */
  goto L_10ee5e5d;
L_10ee5c65:;
  /* 10ee5c65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c68 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ee5c6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5c6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5c70 je 0x10ee5cbc */
  if (C.zf) goto L_10ee5cbc;
  /* 10ee5c72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c75 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ee5c7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c7f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ee5c82 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5c87 je 0x10ee5ca5 */
  if (C.zf) goto L_10ee5ca5;
  /* 10ee5c89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c8f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee5c92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee5c94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5c97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee5c9a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5c9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5ca0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ee5ca3 jmp 0x10ee5cbc */
  goto L_10ee5cbc;
L_10ee5ca5:;
  /* 10ee5ca5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5ca8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee5cab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5cae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cb1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ee5cb4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5cb7 jmp 0x10ee5e5d */
  goto L_10ee5e5d;
L_10ee5cbc:;
  /* 10ee5cbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cbf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee5cc2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5cc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cc8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ee5ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee5cd1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5cd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cd7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10ee5cda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cdd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ee5ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee5ceb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5cee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee5cf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5cf4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee5cf7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5cfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee5cff jne 0x10ee5d2f */
  if (!C.zf) goto L_10ee5d2f;
  /* 10ee5d01 cmp dword ptr [ebp - 8], 0x10f0d8b8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10f0d8b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5d08 je 0x10ee5d13 */
  if (C.zf) goto L_10ee5d13;
  /* 10ee5d0a cmp dword ptr [ebp - 8], 0x10f0d8d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10f0d8d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5d11 jne 0x10ee5d23 */
  if (!C.zf) goto L_10ee5d23;
L_10ee5d13:;
  /* 10ee5d13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee5d16 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5d17 call 0x10eea6c0 */
  push32(0x10ee5d1cu); f_10eea6c0();
  /* 10ee5d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5d21 jne 0x10ee5d2f */
  if (!C.zf) goto L_10ee5d2f;
L_10ee5d23:;
  /* 10ee5d23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d26 push eax */
  push32((uint32_t)(EAX));
  /* 10ee5d27 call 0x10eea5f0 */
  push32(0x10ee5d2cu); f_10eea5f0();
  /* 10ee5d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee5d2f:;
  /* 10ee5d2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d32 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee5d35 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5d3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee5d3d je 0x10ee5e1b */
  if (C.zf) goto L_10ee5e1b;
L_10ee5d43:;
  /* 10ee5d43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d49 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10ee5d4b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5d4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee5d50 jge 0x10ee5d73 */
  if ((C.sf==C.of)) goto L_10ee5d73;
  /* 10ee5d52 push 0x10f0a0b4 */
  push32((uint32_t)(0x10f0a0b4u));
  /* 10ee5d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee5d59 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10ee5d5e push 0x10f0a0f4 */
  push32((uint32_t)(0x10f0a0f4u));
  /* 10ee5d63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee5d65 call 0x10eda2e0 */
  push32(0x10ee5d6au); f_10eda2e0();
  /* 10ee5d6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5d6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5d70 jne 0x10ee5d73 */
  if (!C.zf) goto L_10ee5d73;
  /* 10ee5d72 int3  */
  x86_unimpl("int3 @ 0x10ee5d72");
L_10ee5d73:;
  /* 10ee5d73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5d77 jne 0x10ee5d43 */
  if (!C.zf) goto L_10ee5d43;
  /* 10ee5d79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d7f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ee5d81 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5d84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee5d87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d8a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee5d8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5d90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee5d95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5d98 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ee5d9b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5d9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5da1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee5da4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5da8 jle 0x10ee5dc6 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee5dc6;
  /* 10ee5daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5dad push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5dae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5db1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee5db4 push eax */
  push32((uint32_t)(EAX));
  /* 10ee5db5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee5db8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5db9 call 0x10eea2e0 */
  push32(0x10ee5dbeu); f_10eea2e0();
  /* 10ee5dbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5dc1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee5dc4 jmp 0x10ee5e0e */
  goto L_10ee5e0e;
L_10ee5dc6:;
  /* 10ee5dc6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5dca je 0x10ee5de9 */
  if (C.zf) goto L_10ee5de9;
  /* 10ee5dcc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee5dcf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10ee5dd2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee5dd5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5dd8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee5ddb mov ecx, dword ptr [edx*4 + 0x10f10ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10ee5de2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5de4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee5de7 jmp 0x10ee5df0 */
  goto L_10ee5df0;
L_10ee5de9:;
  /* 10ee5de9 mov dword ptr [ebp - 0x14], 0x10f0cf28 */
  w32((uint32_t)(EBP + -0x14), (0x10f0cf28u));
L_10ee5df0:;
  /* 10ee5df0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee5df3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10ee5df7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5dfc je 0x10ee5e0e */
  if (C.zf) goto L_10ee5e0e;
  /* 10ee5dfe push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee5e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee5e02 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee5e05 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5e06 call 0x10eea190 */
  push32(0x10ee5e0bu); f_10eea190();
  /* 10ee5e0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee5e0e:;
  /* 10ee5e0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5e11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee5e14 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ee5e17 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10ee5e19 jmp 0x10ee5e39 */
  goto L_10ee5e39;
L_10ee5e1b:;
  /* 10ee5e1b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee5e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee5e25 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5e26 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10ee5e29 push eax */
  push32((uint32_t)(EAX));
  /* 10ee5e2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee5e2d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5e2e call 0x10eea2e0 */
  push32(0x10ee5e33u); f_10eea2e0();
  /* 10ee5e33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5e36 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ee5e39:;
  /* 10ee5e39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee5e3c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5e3f je 0x10ee5e55 */
  if (C.zf) goto L_10ee5e55;
  /* 10ee5e41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5e44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee5e47 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5e4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5e4d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10ee5e50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5e53 jmp 0x10ee5e5d */
  goto L_10ee5e5d;
L_10ee5e55:;
  /* 10ee5e55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5e58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10ee5e5d:;
  /* 10ee5e5d pop edi */
  EDI = (pop32());
  /* 10ee5e5e pop esi */
  ESI = (pop32());
  /* 10ee5e5f pop ebx */
  EBX = (pop32());
  /* 10ee5e60 mov esp, ebp */
  ESP = (EBP);
  /* 10ee5e62 pop ebp */
  EBP = (pop32());
  /* 10ee5e63 ret  */
  ESPCHK(0x10ee5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e70 @ 0x10ee5e70 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10ee5e70(void) {
  FTRACE(0x10ee5e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee5e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee5e71 mov ebp, esp */
  EBP = (ESP);
  /* 10ee5e73 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee5e79 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee5e7a push esi */
  push32((uint32_t)(ESI));
  /* 10ee5e7b push edi */
  push32((uint32_t)(EDI));
  /* 10ee5e7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ee5e83 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10ee5e8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10ee5e94:;
  /* 10ee5e94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee5e97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee5e99 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10ee5e9c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5ea0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee5ea3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5ea6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ee5ea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee5eab je 0x10ee6a87 */
  if (C.zf) goto L_10ee6a87;
  /* 10ee5eb1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5eb8 jl 0x10ee6a87 */
  if ((C.sf!=C.of)) goto L_10ee6a87;
  /* 10ee5ebe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5ec2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5ec5 jl 0x10ee5ee6 */
  if ((C.sf!=C.of)) goto L_10ee5ee6;
  /* 10ee5ec7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5ecb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5ece jg 0x10ee5ee6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee5ee6;
  /* 10ee5ed0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5ed4 movsx ecx, byte ptr [eax + 0x10f0a0ec] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10f0a0ec))));
  /* 10ee5edb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5ede mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10ee5ee4 jmp 0x10ee5ef0 */
  goto L_10ee5ef0;
L_10ee5ee6:;
  /* 10ee5ee6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10ee5ef0:;
  /* 10ee5ef0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10ee5ef6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee5ef9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee5efc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee5eff movsx edx, byte ptr [ecx + eax*8 + 0x10f0a10c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10f0a10c))));
  /* 10ee5f07 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee5f0a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ee5f0d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee5f10 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10ee5f16 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5f1d ja 0x10ee6a82 */
  if ((!C.cf&&!C.zf)) goto L_10ee6a82;
  /* 10ee5f23 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10ee5f29 jmp dword ptr [ecx*4 + 0x10ee6a94] */
  switch (ECX) {
    case 0: goto L_10ee5f30;
    case 1: goto L_10ee5fca;
    case 2: goto L_10ee600c;
    case 3: goto L_10ee607b;
    case 4: goto L_10ee60d3;
    case 5: goto L_10ee60e2;
    case 6: goto L_10ee612e;
    case 7: goto L_10ee61c1;
    case 8: goto L_10ee6058;
    case 9: goto L_10ee6063;
    case 10: goto L_10ee604e;
    case 11: goto L_10ee6043;
    case 12: goto L_10ee606e;
    case 13: goto L_10ee6076;
    default: x86_unimpl("switch@0x10ee5f29 out of table"); return;
  }
L_10ee5f30:;
  /* 10ee5f30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ee5f37 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee5f3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee5f40 mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee5f45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5f47 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ee5f4b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee5f51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee5f53 je 0x10ee5fad */
  if (C.zf) goto L_10ee5fad;
  /* 10ee5f55 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10ee5f5b push edx */
  push32((uint32_t)(EDX));
  /* 10ee5f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5f5f push eax */
  push32((uint32_t)(EAX));
  /* 10ee5f60 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5f64 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5f65 call 0x10ee6ba0 */
  push32(0x10ee5f6au); f_10ee6ba0();
  /* 10ee5f6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5f6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee5f70 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee5f72 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10ee5f75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee5f78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5f7b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10ee5f7e:;
  /* 10ee5f7e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5f82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee5f84 jne 0x10ee5fa7 */
  if (!C.zf) goto L_10ee5fa7;
  /* 10ee5f86 push 0x10f0a18c */
  push32((uint32_t)(0x10f0a18cu));
  /* 10ee5f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee5f8d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10ee5f92 push 0x10f0a180 */
  push32((uint32_t)(0x10f0a180u));
  /* 10ee5f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee5f99 call 0x10eda2e0 */
  push32(0x10ee5f9eu); f_10eda2e0();
  /* 10ee5f9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5fa1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee5fa4 jne 0x10ee5fa7 */
  if (!C.zf) goto L_10ee5fa7;
  /* 10ee5fa6 int3  */
  x86_unimpl("int3 @ 0x10ee5fa6");
L_10ee5fa7:;
  /* 10ee5fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee5fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee5fab jne 0x10ee5f7e */
  if (!C.zf) goto L_10ee5f7e;
L_10ee5fad:;
  /* 10ee5fad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10ee5fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee5fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee5fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee5fb8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee5fbc push eax */
  push32((uint32_t)(EAX));
  /* 10ee5fbd call 0x10ee6ba0 */
  push32(0x10ee5fc2u); f_10ee6ba0();
  /* 10ee5fc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee5fc5 jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee5fca:;
  /* 10ee5fca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee5fd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee5fd4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10ee5fda mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10ee5fe0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10ee5fe6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ee5fec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee5fef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee5ff6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10ee6000 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ee6007 jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee600c:;
  /* 10ee600c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee6010 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10ee6016 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10ee601c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee601f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10ee6025 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee602c ja 0x10ee6076 */
  if ((!C.cf&&!C.zf)) goto L_10ee6076;
  /* 10ee602e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10ee6034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee6036 mov al, byte ptr [ecx + 0x10ee6acc] */
  AL = (r8((uint32_t)(ECX + 0x10ee6acc)));
  /* 10ee603c jmp dword ptr [eax*4 + 0x10ee6ab4] */
  switch (EAX) {
    case 0: goto L_10ee6058;
    case 1: goto L_10ee6063;
    case 2: goto L_10ee604e;
    case 3: goto L_10ee6043;
    case 4: goto L_10ee606e;
    case 5: goto L_10ee6076;
    default: x86_unimpl("switch@0x10ee603c out of table"); return;
  }
L_10ee6043:;
  /* 10ee6043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6046 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6049 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee604c jmp 0x10ee6076 */
  goto L_10ee6076;
L_10ee604e:;
  /* 10ee604e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6051 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ee6053 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee6056 jmp 0x10ee6076 */
  goto L_10ee6076;
L_10ee6058:;
  /* 10ee6058 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee605b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee605e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee6061 jmp 0x10ee6076 */
  goto L_10ee6076;
L_10ee6063:;
  /* 10ee6063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6066 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10ee6069 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee606c jmp 0x10ee6076 */
  goto L_10ee6076;
L_10ee606e:;
  /* 10ee606e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6071 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10ee6073 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee6076:;
  /* 10ee6076 jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee607b:;
  /* 10ee607b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee607f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6082 jne 0x10ee60b7 */
  if (!C.zf) goto L_10ee60b7;
  /* 10ee6084 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee6087 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6088 call 0x10ee6cb0 */
  push32(0x10ee608du); f_10ee6cb0();
  /* 10ee608d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6090 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10ee6096 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee609d jge 0x10ee60b5 */
  if ((C.sf==C.of)) goto L_10ee60b5;
  /* 10ee609f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee60a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10ee60a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee60a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ee60ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee60af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10ee60b5:;
  /* 10ee60b5 jmp 0x10ee60ce */
  goto L_10ee60ce;
L_10ee60b7:;
  /* 10ee60b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ee60bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee60c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee60c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10ee60c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10ee60ce:;
  /* 10ee60ce jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee60d3:;
  /* 10ee60d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10ee60dd jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee60e2:;
  /* 10ee60e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee60e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee60e9 jne 0x10ee6112 */
  if (!C.zf) goto L_10ee6112;
  /* 10ee60eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ee60ee push eax */
  push32((uint32_t)(EAX));
  /* 10ee60ef call 0x10ee6cb0 */
  push32(0x10ee60f4u); f_10ee6cb0();
  /* 10ee60f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee60f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10ee60fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6104 jge 0x10ee6110 */
  if ((C.sf==C.of)) goto L_10ee6110;
  /* 10ee6106 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10ee6110:;
  /* 10ee6110 jmp 0x10ee6129 */
  goto L_10ee6129;
L_10ee6112:;
  /* 10ee6112 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ee6118 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee611b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee611f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10ee6123 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10ee6129:;
  /* 10ee6129 jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee612e:;
  /* 10ee612e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee6132 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10ee6138 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10ee613e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6141 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10ee6147 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee614e ja 0x10ee61bc */
  if ((!C.cf&&!C.zf)) goto L_10ee61bc;
  /* 10ee6150 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10ee6156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee6158 mov al, byte ptr [ecx + 0x10ee6af1] */
  AL = (r8((uint32_t)(ECX + 0x10ee6af1)));
  /* 10ee615e jmp dword ptr [eax*4 + 0x10ee6add] */
  switch (EAX) {
    case 0: goto L_10ee6170;
    case 1: goto L_10ee61a9;
    case 2: goto L_10ee6165;
    case 3: goto L_10ee61b3;
    case 4: goto L_10ee61bc;
    default: x86_unimpl("switch@0x10ee615e out of table"); return;
  }
L_10ee6165:;
  /* 10ee6165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6168 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee616b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee616e jmp 0x10ee61bc */
  goto L_10ee61bc;
L_10ee6170:;
  /* 10ee6170 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6173 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee6176 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6179 jne 0x10ee619b */
  if (!C.zf) goto L_10ee619b;
  /* 10ee617b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee617e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ee6182 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6185 jne 0x10ee619b */
  if (!C.zf) goto L_10ee619b;
  /* 10ee6187 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee618a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee618d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ee6190 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6193 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee6196 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee6199 jmp 0x10ee61a7 */
  goto L_10ee61a7;
L_10ee619b:;
  /* 10ee619b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10ee61a2 jmp 0x10ee5f30 */
  goto L_10ee5f30;
L_10ee61a7:;
  /* 10ee61a7 jmp 0x10ee61bc */
  goto L_10ee61bc;
L_10ee61a9:;
  /* 10ee61a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee61ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10ee61ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee61b1 jmp 0x10ee61bc */
  goto L_10ee61bc;
L_10ee61b3:;
  /* 10ee61b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee61b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee61b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee61bc:;
  /* 10ee61bc jmp 0x10ee6a82 */
  goto L_10ee6a82;
L_10ee61c1:;
  /* 10ee61c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee61c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10ee61cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10ee61d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee61d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10ee61da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee61e1 ja 0x10ee68a7 */
  if ((!C.cf&&!C.zf)) goto L_10ee68a7;
  /* 10ee61e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10ee61ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee61ef mov cl, byte ptr [edx + 0x10ee6b5c] */
  CL = (r8((uint32_t)(EDX + 0x10ee6b5c)));
  /* 10ee61f5 jmp dword ptr [ecx*4 + 0x10ee6b20] */
  switch (ECX) {
    case 0: goto L_10ee61fc;
    case 1: goto L_10ee6490;
    case 2: goto L_10ee6320;
    case 3: goto L_10ee65c9;
    case 4: goto L_10ee628b;
    case 5: goto L_10ee6211;
    case 6: goto L_10ee659b;
    case 7: goto L_10ee64a0;
    case 8: goto L_10ee6445;
    case 9: goto L_10ee6615;
    case 10: goto L_10ee65bf;
    case 11: goto L_10ee6336;
    case 12: goto L_10ee65b3;
    case 13: goto L_10ee65d5;
    case 14: goto L_10ee68a7;
    default: x86_unimpl("switch@0x10ee61f5 out of table"); return;
  }
L_10ee61fc:;
  /* 10ee61fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee61ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee6204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6206 jne 0x10ee6211 */
  if (!C.zf) goto L_10ee6211;
  /* 10ee6208 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee620b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee620e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee6211:;
  /* 10ee6211 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6214 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee621a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee621c je 0x10ee6257 */
  if (C.zf) goto L_10ee6257;
  /* 10ee621e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ee6221 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6222 call 0x10ee6cf0 */
  push32(0x10ee6227u); f_10ee6cf0();
  /* 10ee6227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee622a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10ee622e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10ee6232 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6233 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10ee6239 push edx */
  push32((uint32_t)(EDX));
  /* 10ee623a call 0x10eea930 */
  push32(0x10ee623fu); f_10eea930();
  /* 10ee623f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6242 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee6245 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6249 jge 0x10ee6255 */
  if ((C.sf==C.of)) goto L_10ee6255;
  /* 10ee624b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10ee6255:;
  /* 10ee6255 jmp 0x10ee627d */
  goto L_10ee627d;
L_10ee6257:;
  /* 10ee6257 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ee625a push eax */
  push32((uint32_t)(EAX));
  /* 10ee625b call 0x10ee6cb0 */
  push32(0x10ee6260u); f_10ee6cb0();
  /* 10ee6260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6263 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10ee626a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10ee6270 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10ee6276 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10ee627d:;
  /* 10ee627d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10ee6283 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ee6286 jmp 0x10ee68a7 */
  goto L_10ee68a7;
L_10ee628b:;
  /* 10ee628b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ee628e push eax */
  push32((uint32_t)(EAX));
  /* 10ee628f call 0x10ee6cb0 */
  push32(0x10ee6294u); f_10ee6cb0();
  /* 10ee6294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6297 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10ee629d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee62a4 je 0x10ee62b2 */
  if (C.zf) goto L_10ee62b2;
  /* 10ee62a6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ee62ac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee62b0 jne 0x10ee62cc */
  if (!C.zf) goto L_10ee62cc;
L_10ee62b2:;
  /* 10ee62b2 mov edx, dword ptr [0x10f0d4e0] */
  EDX = (r32((uint32_t)(0x10f0d4e0)));
  /* 10ee62b8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ee62bb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee62be push eax */
  push32((uint32_t)(EAX));
  /* 10ee62bf call 0x10edfcb0 */
  push32(0x10ee62c4u); f_10edfcb0();
  /* 10ee62c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee62c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee62ca jmp 0x10ee631b */
  goto L_10ee631b;
L_10ee62cc:;
  /* 10ee62cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee62cf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee62d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee62d7 je 0x10ee62fc */
  if (C.zf) goto L_10ee62fc;
  /* 10ee62d9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ee62df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee62e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee62e5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ee62eb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10ee62ee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee62f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ee62f3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10ee62fa jmp 0x10ee631b */
  goto L_10ee631b;
L_10ee62fc:;
  /* 10ee62fc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ee6303 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ee6309 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee630c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ee630f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10ee6315 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10ee6318 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10ee631b:;
  /* 10ee631b jmp 0x10ee68a7 */
  goto L_10ee68a7;
L_10ee6320:;
  /* 10ee6320 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6323 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee6329 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee632b jne 0x10ee6336 */
  if (!C.zf) goto L_10ee6336;
  /* 10ee632d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6330 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee6333 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee6336:;
  /* 10ee6336 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee633d jne 0x10ee634b */
  if (!C.zf) goto L_10ee634b;
  /* 10ee633f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10ee6349 jmp 0x10ee6357 */
  goto L_10ee6357;
L_10ee634b:;
  /* 10ee634b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ee6351 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10ee6357:;
  /* 10ee6357 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10ee635d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10ee6363 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee6366 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6367 call 0x10ee6cb0 */
  push32(0x10ee636cu); f_10ee6cb0();
  /* 10ee636c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee636f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee6372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6375 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee637a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee637c je 0x10ee63e6 */
  if (C.zf) goto L_10ee63e6;
  /* 10ee637e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6382 jne 0x10ee638d */
  if (!C.zf) goto L_10ee638d;
  /* 10ee6384 mov ecx, dword ptr [0x10f0d4e4] */
  ECX = (r32((uint32_t)(0x10f0d4e4)));
  /* 10ee638a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10ee638d:;
  /* 10ee638d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10ee6394 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6397 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10ee639d:;
  /* 10ee639d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ee63a3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ee63a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee63ac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10ee63b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee63b4 je 0x10ee63d6 */
  if (C.zf) goto L_10ee63d6;
  /* 10ee63b6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10ee63bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee63be mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ee63c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee63c3 je 0x10ee63d6 */
  if (C.zf) goto L_10ee63d6;
  /* 10ee63c5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10ee63cb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee63ce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10ee63d4 jmp 0x10ee639d */
  goto L_10ee639d;
L_10ee63d6:;
  /* 10ee63d6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10ee63dc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee63df sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee63e1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10ee63e4 jmp 0x10ee6440 */
  goto L_10ee6440;
L_10ee63e6:;
  /* 10ee63e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee63ea jne 0x10ee63f4 */
  if (!C.zf) goto L_10ee63f4;
  /* 10ee63ec mov eax, dword ptr [0x10f0d4e0] */
  EAX = (r32((uint32_t)(0x10f0d4e0)));
  /* 10ee63f1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10ee63f4:;
  /* 10ee63f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee63f7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10ee63fd:;
  /* 10ee63fd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ee6403 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10ee6409 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee640c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10ee6412 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee6414 je 0x10ee6434 */
  if (C.zf) goto L_10ee6434;
  /* 10ee6416 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10ee641c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee641f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee6421 je 0x10ee6434 */
  if (C.zf) goto L_10ee6434;
  /* 10ee6423 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10ee6429 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee642c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10ee6432 jmp 0x10ee63fd */
  goto L_10ee63fd;
L_10ee6434:;
  /* 10ee6434 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10ee643a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee643d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10ee6440:;
  /* 10ee6440 jmp 0x10ee68a7 */
  goto L_10ee68a7;
L_10ee6445:;
  /* 10ee6445 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee6448 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6449 call 0x10ee6cb0 */
  push32(0x10ee644eu); f_10ee6cb0();
  /* 10ee644e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6451 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10ee6457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee645a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee645d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee645f je 0x10ee6473 */
  if (C.zf) goto L_10ee6473;
  /* 10ee6461 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10ee6467 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10ee646e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10ee6471 jmp 0x10ee6481 */
  goto L_10ee6481;
L_10ee6473:;
  /* 10ee6473 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10ee6479 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10ee647f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10ee6481:;
  /* 10ee6481 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10ee648b jmp 0x10ee68a7 */
  goto L_10ee68a7;
L_10ee6490:;
  /* 10ee6490 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ee6497 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10ee649a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee649d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10ee64a0:;
  /* 10ee64a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee64a3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10ee64a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee64a8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10ee64ae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ee64b1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee64b8 jge 0x10ee64c6 */
  if ((C.sf==C.of)) goto L_10ee64c6;
  /* 10ee64ba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10ee64c4 jmp 0x10ee64e2 */
  goto L_10ee64e2;
L_10ee64c6:;
  /* 10ee64c6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee64cd jne 0x10ee64e2 */
  if (!C.zf) goto L_10ee64e2;
  /* 10ee64cf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee64d3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee64d6 jne 0x10ee64e2 */
  if (!C.zf) goto L_10ee64e2;
  /* 10ee64d8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10ee64e2:;
  /* 10ee64e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee64e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee64e8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10ee64eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee64ee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee64f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee64f3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee64f6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10ee64fc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10ee6502 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee6505 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6506 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ee650c push edx */
  push32((uint32_t)(EDX));
  /* 10ee650d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee6511 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6512 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6515 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6516 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10ee651c push edx */
  push32((uint32_t)(EDX));
  /* 10ee651d call dword ptr [0x10f0ce20] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0ce20))), 0x10ee6523u);
  /* 10ee6523 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6526 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6529 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee652e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6530 je 0x10ee6548 */
  if (C.zf) goto L_10ee6548;
  /* 10ee6532 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6539 jne 0x10ee6548 */
  if (!C.zf) goto L_10ee6548;
  /* 10ee653b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee653e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee653f call dword ptr [0x10f0ce2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0ce2c))), 0x10ee6545u);
  /* 10ee6545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6548:;
  /* 10ee6548 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee654c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee654f jne 0x10ee656a */
  if (!C.zf) goto L_10ee656a;
  /* 10ee6551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6554 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee6559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee655b jne 0x10ee656a */
  if (!C.zf) goto L_10ee656a;
  /* 10ee655d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6560 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6561 call dword ptr [0x10f0ce24] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0ce24))), 0x10ee6567u);
  /* 10ee6567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee656a:;
  /* 10ee656a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee656d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee6570 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6573 jne 0x10ee6587 */
  if (!C.zf) goto L_10ee6587;
  /* 10ee6575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6578 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10ee657b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee657e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6581 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6584 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10ee6587:;
  /* 10ee6587 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee658a push eax */
  push32((uint32_t)(EAX));
  /* 10ee658b call 0x10edfcb0 */
  push32(0x10ee6590u); f_10edfcb0();
  /* 10ee6590 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6593 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee6596 jmp 0x10ee68a7 */
  goto L_10ee68a7;
L_10ee659b:;
  /* 10ee659b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee659e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee65a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee65a4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10ee65ae jmp 0x10ee6635 */
  goto L_10ee6635;
L_10ee65b3:;
  /* 10ee65b3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10ee65bd jmp 0x10ee6635 */
  goto L_10ee6635;
L_10ee65bf:;
  /* 10ee65bf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10ee65c9:;
  /* 10ee65c9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10ee65d3 jmp 0x10ee65df */
  goto L_10ee65df;
L_10ee65d5:;
  /* 10ee65d5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10ee65df:;
  /* 10ee65df mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10ee65e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee65ec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee65f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee65f4 je 0x10ee6613 */
  if (C.zf) goto L_10ee6613;
  /* 10ee65f6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10ee65fd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10ee6603 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6606 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10ee660c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10ee6613:;
  /* 10ee6613 jmp 0x10ee6635 */
  goto L_10ee6635;
L_10ee6615:;
  /* 10ee6615 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10ee661f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6622 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee6628 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee662a je 0x10ee6635 */
  if (C.zf) goto L_10ee6635;
  /* 10ee662c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee662f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee6632 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee6635:;
  /* 10ee6635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6638 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee663d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee663f je 0x10ee665e */
  if (C.zf) goto L_10ee665e;
  /* 10ee6641 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ee6644 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6645 call 0x10ee6cd0 */
  push32(0x10ee664au); f_10ee6cd0();
  /* 10ee664a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee664d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ee6653 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10ee6659 jmp 0x10ee66ef */
  goto L_10ee66ef;
L_10ee665e:;
  /* 10ee665e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6661 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6664 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee6666 je 0x10ee66b0 */
  if (C.zf) goto L_10ee66b0;
  /* 10ee6668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee666b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee666e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6670 je 0x10ee6690 */
  if (C.zf) goto L_10ee6690;
  /* 10ee6672 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ee6675 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6676 call 0x10ee6cb0 */
  push32(0x10ee667bu); f_10ee6cb0();
  /* 10ee667b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee667e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10ee6681 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee6682 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ee6688 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10ee668e jmp 0x10ee66ae */
  goto L_10ee66ae;
L_10ee6690:;
  /* 10ee6690 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee6693 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6694 call 0x10ee6cb0 */
  push32(0x10ee6699u); f_10ee6cb0();
  /* 10ee6699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee669c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee66a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee66a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ee66a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10ee66ae:;
  /* 10ee66ae jmp 0x10ee66ef */
  goto L_10ee66ef;
L_10ee66b0:;
  /* 10ee66b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee66b3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee66b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee66b8 je 0x10ee66d5 */
  if (C.zf) goto L_10ee66d5;
  /* 10ee66ba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10ee66bd push ecx */
  push32((uint32_t)(ECX));
  /* 10ee66be call 0x10ee6cb0 */
  push32(0x10ee66c3u); f_10ee6cb0();
  /* 10ee66c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee66c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee66c7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ee66cd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10ee66d3 jmp 0x10ee66ef */
  goto L_10ee66ef;
L_10ee66d5:;
  /* 10ee66d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee66d8 push edx */
  push32((uint32_t)(EDX));
  /* 10ee66d9 call 0x10ee6cb0 */
  push32(0x10ee66deu); f_10ee6cb0();
  /* 10ee66de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee66e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee66e3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10ee66e9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10ee66ef:;
  /* 10ee66ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee66f2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee66f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee66f7 je 0x10ee6737 */
  if (C.zf) goto L_10ee6737;
  /* 10ee66f9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6700 jg 0x10ee6737 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee6737;
  /* 10ee6702 jl 0x10ee670d */
  if ((C.sf!=C.of)) goto L_10ee670d;
  /* 10ee6704 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee670b jae 0x10ee6737 */
  if (!C.cf) goto L_10ee6737;
L_10ee670d:;
  /* 10ee670d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10ee6713 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee6715 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10ee671b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee671e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee6720 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ee6726 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10ee672c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee672f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee6732 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee6735 jmp 0x10ee674f */
  goto L_10ee674f;
L_10ee6737:;
  /* 10ee6737 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10ee673d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ee6743 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10ee6749 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10ee674f:;
  /* 10ee674f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6752 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6758 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee675a jne 0x10ee6777 */
  if (!C.zf) goto L_10ee6777;
  /* 10ee675c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ee6762 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10ee6768 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee676b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ee6771 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10ee6777:;
  /* 10ee6777 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee677e jge 0x10ee678c */
  if ((C.sf==C.of)) goto L_10ee678c;
  /* 10ee6780 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10ee678a jmp 0x10ee6795 */
  goto L_10ee6795;
L_10ee678c:;
  /* 10ee678c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee678f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6792 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee6795:;
  /* 10ee6795 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ee679b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee67a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee67a3 jne 0x10ee67ac */
  if (!C.zf) goto L_10ee67ac;
  /* 10ee67a5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10ee67ac:;
  /* 10ee67ac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10ee67af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10ee67b2:;
  /* 10ee67b2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ee67b8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10ee67be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee67c1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10ee67c7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee67c9 jg 0x10ee67df */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee67df;
  /* 10ee67cb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ee67d1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10ee67d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee67d9 je 0x10ee6860 */
  if (C.zf) goto L_10ee6860;
L_10ee67df:;
  /* 10ee67df mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10ee67e5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee67e6 push edx */
  push32((uint32_t)(EDX));
  /* 10ee67e7 push eax */
  push32((uint32_t)(EAX));
  /* 10ee67e8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10ee67ee push edx */
  push32((uint32_t)(EDX));
  /* 10ee67ef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ee67f5 push eax */
  push32((uint32_t)(EAX));
  /* 10ee67f6 call 0x10ee5b70 */
  push32(0x10ee67fbu); f_10ee5b70();
  /* 10ee67fb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee67fe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10ee6804 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10ee680a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ee680b push edx */
  push32((uint32_t)(EDX));
  /* 10ee680c push eax */
  push32((uint32_t)(EAX));
  /* 10ee680d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10ee6813 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6814 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10ee681a push edx */
  push32((uint32_t)(EDX));
  /* 10ee681b call 0x10ee5b00 */
  push32(0x10ee6820u); f_10ee5b00();
  /* 10ee6820 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10ee6826 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10ee682c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6833 jle 0x10ee6847 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee6847;
  /* 10ee6835 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10ee683b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6841 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10ee6847:;
  /* 10ee6847 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee684a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10ee6850 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10ee6852 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6855 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6858 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee685b jmp 0x10ee67b2 */
  goto L_10ee67b2;
L_10ee6860:;
  /* 10ee6860 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10ee6863 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6866 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee6869 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee686c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee686f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ee6872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6875 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee687a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee687c je 0x10ee68a7 */
  if (C.zf) goto L_10ee68a7;
  /* 10ee687e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6881 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee6884 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6887 jne 0x10ee688f */
  if (!C.zf) goto L_10ee688f;
  /* 10ee6889 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee688d jne 0x10ee68a7 */
  if (!C.zf) goto L_10ee68a7;
L_10ee688f:;
  /* 10ee688f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6892 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6895 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee6898 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee689b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10ee689e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee68a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee68a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10ee68a7:;
  /* 10ee68a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee68ae jne 0x10ee6a82 */
  if (!C.zf) goto L_10ee6a82;
  /* 10ee68b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee68b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee68ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee68bc je 0x10ee690d */
  if (C.zf) goto L_10ee690d;
  /* 10ee68be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee68c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee68c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee68c9 je 0x10ee68db */
  if (C.zf) goto L_10ee68db;
  /* 10ee68cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10ee68d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ee68d9 jmp 0x10ee690d */
  goto L_10ee690d;
L_10ee68db:;
  /* 10ee68db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee68de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee68e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee68e3 je 0x10ee68f5 */
  if (C.zf) goto L_10ee68f5;
  /* 10ee68e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10ee68ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ee68f3 jmp 0x10ee690d */
  goto L_10ee690d;
L_10ee68f5:;
  /* 10ee68f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee68f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee68fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee68fd je 0x10ee690d */
  if (C.zf) goto L_10ee690d;
  /* 10ee68ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10ee6906 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10ee690d:;
  /* 10ee690d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10ee6913 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6916 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6919 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10ee691f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6922 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6925 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee6927 jne 0x10ee6945 */
  if (!C.zf) goto L_10ee6945;
  /* 10ee6929 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ee692f push eax */
  push32((uint32_t)(EAX));
  /* 10ee6930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6933 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6934 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10ee693a push edx */
  push32((uint32_t)(EDX));
  /* 10ee693b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ee693d call 0x10ee6c20 */
  push32(0x10ee6942u); f_10ee6c20();
  /* 10ee6942 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6945:;
  /* 10ee6945 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ee694b push eax */
  push32((uint32_t)(EAX));
  /* 10ee694c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee694f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6950 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee6953 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6954 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10ee695a push eax */
  push32((uint32_t)(EAX));
  /* 10ee695b call 0x10ee6c60 */
  push32(0x10ee6960u); f_10ee6c60();
  /* 10ee6960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6966 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee6969 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee696b je 0x10ee6993 */
  if (C.zf) goto L_10ee6993;
  /* 10ee696d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6970 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6973 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee6975 jne 0x10ee6993 */
  if (!C.zf) goto L_10ee6993;
  /* 10ee6977 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ee697d push eax */
  push32((uint32_t)(EAX));
  /* 10ee697e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6981 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6982 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10ee6988 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6989 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10ee698b call 0x10ee6c20 */
  push32(0x10ee6990u); f_10ee6c20();
  /* 10ee6990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6993:;
  /* 10ee6993 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6997 je 0x10ee6a41 */
  if (C.zf) goto L_10ee6a41;
  /* 10ee699d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee69a1 jle 0x10ee6a41 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee6a41;
  /* 10ee69a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee69aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10ee69b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee69b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10ee69b9:;
  /* 10ee69b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10ee69bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10ee69c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee69c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10ee69ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee69d0 je 0x10ee6a3f */
  if (C.zf) goto L_10ee6a3f;
  /* 10ee69d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10ee69d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10ee69db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10ee69e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10ee69e9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee69ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10ee69f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee69f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10ee69f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee69fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10ee6a00 call 0x10eea930 */
  push32(0x10ee6a05u); f_10eea930();
  /* 10ee6a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6a08 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10ee6a0e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6a15 jg 0x10ee6a19 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee6a19;
  /* 10ee6a17 jmp 0x10ee6a3f */
  goto L_10ee6a3f;
L_10ee6a19:;
  /* 10ee6a19 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ee6a1f push eax */
  push32((uint32_t)(EAX));
  /* 10ee6a20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6a24 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10ee6a2a push edx */
  push32((uint32_t)(EDX));
  /* 10ee6a2b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10ee6a31 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6a32 call 0x10ee6c60 */
  push32(0x10ee6a37u); f_10ee6c60();
  /* 10ee6a37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6a3a jmp 0x10ee69b9 */
  goto L_10ee69b9;
L_10ee6a3f:;
  /* 10ee6a3f jmp 0x10ee6a5c */
  goto L_10ee6a5c;
L_10ee6a41:;
  /* 10ee6a41 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10ee6a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6a4b push edx */
  push32((uint32_t)(EDX));
  /* 10ee6a4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee6a4f push eax */
  push32((uint32_t)(EAX));
  /* 10ee6a50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee6a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6a54 call 0x10ee6c60 */
  push32(0x10ee6a59u); f_10ee6c60();
  /* 10ee6a59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6a5c:;
  /* 10ee6a5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6a5f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee6a62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee6a64 je 0x10ee6a82 */
  if (C.zf) goto L_10ee6a82;
  /* 10ee6a66 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10ee6a6c push eax */
  push32((uint32_t)(EAX));
  /* 10ee6a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6a70 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6a71 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10ee6a77 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6a78 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ee6a7a call 0x10ee6c20 */
  push32(0x10ee6a7fu); f_10ee6c20();
  /* 10ee6a7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6a82:;
  /* 10ee6a82 jmp 0x10ee5e94 */
  goto L_10ee5e94;
L_10ee6a87:;
  /* 10ee6a87 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10ee6a8d pop edi */
  EDI = (pop32());
  /* 10ee6a8e pop esi */
  ESI = (pop32());
  /* 10ee6a8f pop ebx */
  EBX = (pop32());
  /* 10ee6a90 mov esp, ebp */
  ESP = (EBP);
  /* 10ee6a92 pop ebp */
  EBP = (pop32());
  /* 10ee6a93 ret  */
  ESPCHK(0x10ee5e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ba0 @ 0x10ee6ba0 (119 bytes, 44 insns) */
void f_10ee6ba0(void) {
  FTRACE(0x10ee6ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6ba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6ba7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee6baa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6bad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6bb0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee6bb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6bb6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6bba jl 0x10ee6be2 */
  if ((C.sf!=C.of)) goto L_10ee6be2;
  /* 10ee6bbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6bbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee6bc1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ee6bc4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10ee6bc6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10ee6bca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee6bd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee6bd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6bd6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee6bd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6bdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6bde mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee6be0 jmp 0x10ee6bf5 */
  goto L_10ee6bf5;
L_10ee6be2:;
  /* 10ee6be2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6be5 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6be9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6bea call 0x10ee5bf0 */
  push32(0x10ee6befu); f_10ee5bf0();
  /* 10ee6bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee6bf5:;
  /* 10ee6bf5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6bf9 jne 0x10ee6c06 */
  if (!C.zf) goto L_10ee6c06;
  /* 10ee6bfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6bfe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10ee6c04 jmp 0x10ee6c13 */
  goto L_10ee6c13;
L_10ee6c06:;
  /* 10ee6c06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6c09 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee6c0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6c0e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6c11 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ee6c13:;
  /* 10ee6c13 mov esp, ebp */
  ESP = (EBP);
  /* 10ee6c15 pop ebp */
  EBP = (pop32());
  /* 10ee6c16 ret  */
  ESPCHK(0x10ee6ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c20 @ 0x10ee6c20 (53 bytes, 23 insns) */
void f_10ee6c20(void) {
  FTRACE(0x10ee6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6c21 mov ebp, esp */
  EBP = (ESP);
L_10ee6c23:;
  /* 10ee6c23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6c26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6c29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6c2c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ee6c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6c31 jle 0x10ee6c53 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee6c53;
  /* 10ee6c33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6c36 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6c37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6c3a push eax */
  push32((uint32_t)(EAX));
  /* 10ee6c3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6c3e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6c3f call 0x10ee6ba0 */
  push32(0x10ee6c44u); f_10ee6ba0();
  /* 10ee6c44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6c47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6c4a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6c4d jne 0x10ee6c51 */
  if (!C.zf) goto L_10ee6c51;
  /* 10ee6c4f jmp 0x10ee6c53 */
  goto L_10ee6c53;
L_10ee6c51:;
  /* 10ee6c51 jmp 0x10ee6c23 */
  goto L_10ee6c23;
L_10ee6c53:;
  /* 10ee6c53 pop ebp */
  EBP = (pop32());
  /* 10ee6c54 ret  */
  ESPCHK(0x10ee6c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c60 @ 0x10ee6c60 (74 bytes, 31 insns) */
void f_10ee6c60(void) {
  FTRACE(0x10ee6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6c61 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6c63 push ecx */
  push32((uint32_t)(ECX));
L_10ee6c64:;
  /* 10ee6c64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6c67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6c6a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6c6d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10ee6c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6c72 jle 0x10ee6ca6 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee6ca6;
  /* 10ee6c74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6c77 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6c78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6c7b push eax */
  push32((uint32_t)(EAX));
  /* 10ee6c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6c7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee6c82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee6c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6c88 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6c8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6c8f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10ee6c92 call 0x10ee6ba0 */
  push32(0x10ee6c97u); f_10ee6ba0();
  /* 10ee6c97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6c9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6c9d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6ca0 jne 0x10ee6ca4 */
  if (!C.zf) goto L_10ee6ca4;
  /* 10ee6ca2 jmp 0x10ee6ca6 */
  goto L_10ee6ca6;
L_10ee6ca4:;
  /* 10ee6ca4 jmp 0x10ee6c64 */
  goto L_10ee6c64;
L_10ee6ca6:;
  /* 10ee6ca6 mov esp, ebp */
  ESP = (EBP);
  /* 10ee6ca8 pop ebp */
  EBP = (pop32());
  /* 10ee6ca9 ret  */
  ESPCHK(0x10ee6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cb0 @ 0x10ee6cb0 (26 bytes, 12 insns) */
void f_10ee6cb0(void) {
  FTRACE(0x10ee6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee6cb8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ee6cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee6cc5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ee6cc8 pop ebp */
  EBP = (pop32());
  /* 10ee6cc9 ret  */
  ESPCHK(0x10ee6cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cd0 @ 0x10ee6cd0 (31 bytes, 14 insns) */
void f_10ee6cd0(void) {
  FTRACE(0x10ee6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6cd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee6cd8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6cdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ee6ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6ce3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee6ce5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6ce8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ee6cea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee6ced pop ebp */
  EBP = (pop32());
  /* 10ee6cee ret  */
  ESPCHK(0x10ee6cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016cf0 @ 0x10ee6cf0 (27 bytes, 12 insns) */
void f_10ee6cf0(void) {
  FTRACE(0x10ee6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee6cf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6cfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ee6d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6d03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee6d05 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10ee6d09 pop ebp */
  EBP = (pop32());
  /* 10ee6d0a ret  */
  ESPCHK(0x10ee6cf0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10ee6d10 (145 bytes, 42 insns) */
void f_10ee6d10(void) {
  FTRACE(0x10ee6d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6d11 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6d14 call 0x10ee6dc0 */
  push32(0x10ee6d19u); f_10ee6dc0();
  /* 10ee6d19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6d1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ee6d1e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee6d25 jmp 0x10ee6d30 */
  goto L_10ee6d30;
L_10ee6d27:;
  /* 10ee6d27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6d2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6d2d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee6d30:;
  /* 10ee6d30 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6d34 jae 0x10ee6d5a */
  if (!C.cf) goto L_10ee6d5a;
  /* 10ee6d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6d39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6d3c cmp ecx, dword ptr [eax*8 + 0x10f0d4e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10f0d4e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6d43 jne 0x10ee6d58 */
  if (!C.zf) goto L_10ee6d58;
  /* 10ee6d45 call 0x10ee6db0 */
  push32(0x10ee6d4au); f_10ee6db0();
  /* 10ee6d4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6d4d mov ecx, dword ptr [edx*8 + 0x10f0d4ec] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10f0d4ec)));
  /* 10ee6d54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10ee6d56 jmp 0x10ee6d9d */
  goto L_10ee6d9d;
L_10ee6d58:;
  /* 10ee6d58 jmp 0x10ee6d27 */
  goto L_10ee6d27;
L_10ee6d5a:;
  /* 10ee6d5a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6d5e jb 0x10ee6d73 */
  if (C.cf) goto L_10ee6d73;
  /* 10ee6d60 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6d64 ja 0x10ee6d73 */
  if ((!C.cf&&!C.zf)) goto L_10ee6d73;
  /* 10ee6d66 call 0x10ee6db0 */
  push32(0x10ee6d6bu); f_10ee6db0();
  /* 10ee6d6b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10ee6d71 jmp 0x10ee6d9d */
  goto L_10ee6d9d;
L_10ee6d73:;
  /* 10ee6d73 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6d7a jb 0x10ee6d92 */
  if (C.cf) goto L_10ee6d92;
  /* 10ee6d7c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6d83 ja 0x10ee6d92 */
  if ((!C.cf&&!C.zf)) goto L_10ee6d92;
  /* 10ee6d85 call 0x10ee6db0 */
  push32(0x10ee6d8au); f_10ee6db0();
  /* 10ee6d8a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10ee6d90 jmp 0x10ee6d9d */
  goto L_10ee6d9d;
L_10ee6d92:;
  /* 10ee6d92 call 0x10ee6db0 */
  push32(0x10ee6d97u); f_10ee6db0();
  /* 10ee6d97 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10ee6d9d:;
  /* 10ee6d9d mov esp, ebp */
  ESP = (EBP);
  /* 10ee6d9f pop ebp */
  EBP = (pop32());
  /* 10ee6da0 ret  */
  ESPCHK(0x10ee6d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016db0 @ 0x10ee6db0 (13 bytes, 6 insns) */
void f_10ee6db0(void) {
  FTRACE(0x10ee6db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6db1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6db3 call 0x10ede420 */
  push32(0x10ee6db8u); f_10ede420();
  /* 10ee6db8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6dbb pop ebp */
  EBP = (pop32());
  /* 10ee6dbc ret  */
  ESPCHK(0x10ee6db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016dc0 @ 0x10ee6dc0 (13 bytes, 6 insns) */
void f_10ee6dc0(void) {
  FTRACE(0x10ee6dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6dc3 call 0x10ede420 */
  push32(0x10ee6dc8u); f_10ede420();
  /* 10ee6dc8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6dcb pop ebp */
  EBP = (pop32());
  /* 10ee6dcc ret  */
  ESPCHK(0x10ee6dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016dd0 @ 0x10ee6dd0 (85 bytes, 32 insns) */
void f_10ee6dd0(void) {
  FTRACE(0x10ee6dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6dd3 cmp dword ptr [0x10f0d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6dda jne 0x10ee6e04 */
  if (!C.zf) goto L_10ee6e04;
  /* 10ee6ddc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6ddf push eax */
  push32((uint32_t)(EAX));
  /* 10ee6de0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6de4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6de7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee6dea push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee6dec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6def push eax */
  push32((uint32_t)(EAX));
  /* 10ee6df0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6df4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6df7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee6dfa call 0x10ee7880 */
  push32(0x10ee6dffu); f_10ee7880();
  /* 10ee6dff add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6e02 jmp 0x10ee6e23 */
  goto L_10ee6e23;
L_10ee6e04:;
  /* 10ee6e04 call 0x10ee6db0 */
  push32(0x10ee6e09u); f_10ee6db0();
  /* 10ee6e09 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 10ee6e0f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee6e14 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6e17 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6e18 call 0x10ee7a70 */
  push32(0x10ee6e1du); f_10ee7a70();
  /* 10ee6e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6e20 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_10ee6e23:;
  /* 10ee6e23 pop ebp */
  EBP = (pop32());
  /* 10ee6e24 ret  */
  ESPCHK(0x10ee6dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e30 @ 0x10ee6e30 (103 bytes, 39 insns) */
void f_10ee6e30(void) {
  FTRACE(0x10ee6e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6e31 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6e36 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 10ee6e39 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 10ee6e3c fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10ee6e3f cmp dword ptr [0x10f0d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6e46 jne 0x10ee6e74 */
  if (!C.zf) goto L_10ee6e74;
  /* 10ee6e48 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee6e4b push eax */
  push32((uint32_t)(EAX));
  /* 10ee6e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6e4f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6e50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee6e53 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6e54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee6e57 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6e58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6e5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6e5f push edx */
  push32((uint32_t)(EDX));
  /* 10ee6e60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6e63 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6e64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6e67 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6e68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee6e6a call 0x10ee7880 */
  push32(0x10ee6e6fu); f_10ee7880();
  /* 10ee6e6f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6e72 jmp 0x10ee6e93 */
  goto L_10ee6e93;
L_10ee6e74:;
  /* 10ee6e74 call 0x10ee6db0 */
  push32(0x10ee6e79u); f_10ee6db0();
  /* 10ee6e79 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 10ee6e7f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee6e84 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee6e87 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6e88 call 0x10ee7a70 */
  push32(0x10ee6e8du); f_10ee7a70();
  /* 10ee6e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6e90 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_10ee6e93:;
  /* 10ee6e93 mov esp, ebp */
  ESP = (EBP);
  /* 10ee6e95 pop ebp */
  EBP = (pop32());
  /* 10ee6e96 ret  */
  ESPCHK(0x10ee6e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ea0 @ 0x10ee6ea0 (178 bytes, 71 insns) */
void f_10ee6ea0(void) {
  FTRACE(0x10ee6ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6ea3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6ea6 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee6ea9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6eaa lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 10ee6ead push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6eb1 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6eb2 call 0x10ee7500 */
  push32(0x10ee6eb7u); f_10ee7500();
  /* 10ee6eb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6ebc jne 0x10ee6ee6 */
  if (!C.zf) goto L_10ee6ee6;
  /* 10ee6ebe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee6ec1 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10ee6ec3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee6ec6 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 10ee6ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6eca lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee6ecd push edx */
  push32((uint32_t)(EDX));
  /* 10ee6ece mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6ed1 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6ed6 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 10ee6ed9 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6eda lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 10ee6edd push eax */
  push32((uint32_t)(EAX));
  /* 10ee6ede call 0x10ee7030 */
  push32(0x10ee6ee3u); f_10ee7030();
  /* 10ee6ee3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6ee6:;
  /* 10ee6ee6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6eea call 0x10ee79a0 */
  push32(0x10ee6eefu); f_10ee79a0();
  /* 10ee6eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6ef2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee6ef5 cmp dword ptr [0x10f0d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6efc jne 0x10ee6f2e */
  if (!C.zf) goto L_10ee6f2e;
  /* 10ee6efe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6f02 je 0x10ee6f2e */
  if (C.zf) goto L_10ee6f2e;
  /* 10ee6f04 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee6f07 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6f08 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee6f0b push eax */
  push32((uint32_t)(EAX));
  /* 10ee6f0c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee6f0f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee6f12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee6f14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6f17 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6f18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6f1b push eax */
  push32((uint32_t)(EAX));
  /* 10ee6f1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6f1f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6f20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6f23 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6f24 call 0x10ee7880 */
  push32(0x10ee6f29u); f_10ee7880();
  /* 10ee6f29 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6f2c jmp 0x10ee6f4e */
  goto L_10ee6f4e;
L_10ee6f2e:;
  /* 10ee6f2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6f31 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6f32 call 0x10ee7920 */
  push32(0x10ee6f37u); f_10ee7920();
  /* 10ee6f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6f3a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee6f3f mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee6f42 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6f43 call 0x10ee7a70 */
  push32(0x10ee6f48u); f_10ee7a70();
  /* 10ee6f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6f4b fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_10ee6f4e:;
  /* 10ee6f4e mov esp, ebp */
  ESP = (EBP);
  /* 10ee6f50 pop ebp */
  EBP = (pop32());
  /* 10ee6f51 ret  */
  ESPCHK(0x10ee6ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f60 @ 0x10ee6f60 (206 bytes, 81 insns) */
void f_10ee6f60(void) {
  FTRACE(0x10ee6f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee6f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee6f61 mov ebp, esp */
  EBP = (ESP);
  /* 10ee6f63 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee6f66 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee6f69 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6f6a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 10ee6f6d push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6f6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6f71 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6f72 call 0x10ee7500 */
  push32(0x10ee6f77u); f_10ee7500();
  /* 10ee6f77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee6f7c jne 0x10ee6fbe */
  if (!C.zf) goto L_10ee6fbe;
  /* 10ee6f7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee6f81 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ee6f83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee6f86 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee6f89 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee6f8c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee6f8f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee6f92 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee6f95 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10ee6f98 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee6f9b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10ee6f9e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 10ee6fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6fa2 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10ee6fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6fa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6faa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6fad push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6fae lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 10ee6fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6fb2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 10ee6fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6fb6 call 0x10ee7030 */
  push32(0x10ee6fbbu); f_10ee7030();
  /* 10ee6fbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee6fbe:;
  /* 10ee6fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee6fc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6fc2 call 0x10ee79a0 */
  push32(0x10ee6fc7u); f_10ee79a0();
  /* 10ee6fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee6fca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee6fcd cmp dword ptr [0x10f0d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6fd4 jne 0x10ee700a */
  if (!C.zf) goto L_10ee700a;
  /* 10ee6fd6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee6fda je 0x10ee700a */
  if (C.zf) goto L_10ee700a;
  /* 10ee6fdc mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee6fdf push edx */
  push32((uint32_t)(EDX));
  /* 10ee6fe0 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ee6fe3 push eax */
  push32((uint32_t)(EAX));
  /* 10ee6fe4 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee6fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6fe8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee6feb push edx */
  push32((uint32_t)(EDX));
  /* 10ee6fec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee6fef push eax */
  push32((uint32_t)(EAX));
  /* 10ee6ff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee6ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee6ff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee6ff7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee6ff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee6ffb push eax */
  push32((uint32_t)(EAX));
  /* 10ee6ffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee6fff push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7000 call 0x10ee7880 */
  push32(0x10ee7005u); f_10ee7880();
  /* 10ee7005 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7008 jmp 0x10ee702a */
  goto L_10ee702a;
L_10ee700a:;
  /* 10ee700a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee700d push edx */
  push32((uint32_t)(EDX));
  /* 10ee700e call 0x10ee7920 */
  push32(0x10ee7013u); f_10ee7920();
  /* 10ee7013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7016 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee701b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee701e push eax */
  push32((uint32_t)(EAX));
  /* 10ee701f call 0x10ee7a70 */
  push32(0x10ee7024u); f_10ee7a70();
  /* 10ee7024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7027 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_10ee702a:;
  /* 10ee702a mov esp, ebp */
  ESP = (EBP);
  /* 10ee702c pop ebp */
  EBP = (pop32());
  /* 10ee702d ret  */
  ESPCHK(0x10ee6f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10017030 @ 0x10ee7030 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_10ee7030(void) {
  FTRACE(0x10ee7030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7030 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7031 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7033 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7039 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10ee7040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7043 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 10ee704a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee704d mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 10ee7054 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7057 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee705a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee705c je 0x10ee7074 */
  if (C.zf) goto L_10ee7074;
  /* 10ee705e mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 10ee7065 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7068 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee706b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee706e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7071 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee7074:;
  /* 10ee7074 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7077 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee707a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee707c je 0x10ee7093 */
  if (C.zf) goto L_10ee7093;
  /* 10ee707e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 10ee7085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7088 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee708b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10ee708d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7090 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ee7093:;
  /* 10ee7093 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7096 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee709b je 0x10ee70b3 */
  if (C.zf) goto L_10ee70b3;
  /* 10ee709d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 10ee70a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee70a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee70aa or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee70ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee70b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10ee70b3:;
  /* 10ee70b3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee70b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee70b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee70bb je 0x10ee70d3 */
  if (C.zf) goto L_10ee70d3;
  /* 10ee70bd mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 10ee70c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee70c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee70ca or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee70cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee70d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10ee70d3:;
  /* 10ee70d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee70d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee70d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee70db je 0x10ee70f2 */
  if (C.zf) goto L_10ee70f2;
  /* 10ee70dd mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 10ee70e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee70e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee70ea or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 10ee70ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee70ef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ee70f2:;
  /* 10ee70f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee70f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee70f7 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee70fa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee70fc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee70fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ee70ff and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7102 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10ee7105 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7108 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee710b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee710e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7113 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee7116 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7119 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee711b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee711e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee7120 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7122 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ee7123 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7126 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10ee7129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee712c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee712f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7132 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7137 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee713a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee713d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee713f and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7142 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee7144 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7146 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10ee7147 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee714a shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ee714d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7150 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee7153 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 10ee7155 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee715a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ee715d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7160 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee7162 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7165 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee7167 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7169 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ee716a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee716d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee716f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7172 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee7175 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7178 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee717a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee717d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee7180 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7183 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7185 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7188 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee718a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee718c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10ee718d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7193 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee7196 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7199 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee719b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee719e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10ee71a1 call 0x10ee7a30 */
  push32(0x10ee71a6u); f_10ee7a30();
  /* 10ee71a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee71a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee71ac and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee71af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee71b1 je 0x10ee71c2 */
  if (C.zf) goto L_10ee71c2;
  /* 10ee71b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee71b6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee71b9 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee71bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee71bf mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_10ee71c2:;
  /* 10ee71c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee71c5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee71c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee71ca je 0x10ee71da */
  if (C.zf) goto L_10ee71da;
  /* 10ee71cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee71cf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ee71d2 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10ee71d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee71d7 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_10ee71da:;
  /* 10ee71da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee71dd and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee71e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee71e2 je 0x10ee71f3 */
  if (C.zf) goto L_10ee71f3;
  /* 10ee71e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee71e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ee71ea or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee71ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee71f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10ee71f3:;
  /* 10ee71f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee71f6 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee71f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee71fb je 0x10ee720c */
  if (C.zf) goto L_10ee720c;
  /* 10ee71fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7200 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ee7203 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7209 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_10ee720c:;
  /* 10ee720c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee720f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7212 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee7214 je 0x10ee7224 */
  if (C.zf) goto L_10ee7224;
  /* 10ee7216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7219 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ee721c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10ee721e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7221 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_10ee7224:;
  /* 10ee7224 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7227 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee7229 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee722e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee7231 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7238 ja 0x10ee7254 */
  if ((!C.cf&&!C.zf)) goto L_10ee7254;
  /* 10ee723a cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7241 je 0x10ee726e */
  if (C.zf) goto L_10ee726e;
  /* 10ee7243 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7247 je 0x10ee7292 */
  if (C.zf) goto L_10ee7292;
  /* 10ee7249 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7250 je 0x10ee7280 */
  if (C.zf) goto L_10ee7280;
  /* 10ee7252 jmp 0x10ee729f */
  goto L_10ee729f;
L_10ee7254:;
  /* 10ee7254 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee725b je 0x10ee725f */
  if (C.zf) goto L_10ee725f;
  /* 10ee725d jmp 0x10ee729f */
  goto L_10ee729f;
L_10ee725f:;
  /* 10ee725f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7262 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7264 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee726a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee726c jmp 0x10ee729f */
  goto L_10ee729f;
L_10ee726e:;
  /* 10ee726e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7271 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7273 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7276 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee727c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee727e jmp 0x10ee729f */
  goto L_10ee729f;
L_10ee7280:;
  /* 10ee7280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7283 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7285 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7288 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee728b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee728e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee7290 jmp 0x10ee729f */
  goto L_10ee729f;
L_10ee7292:;
  /* 10ee7292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7295 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7297 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee729a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee729d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee729f:;
  /* 10ee729f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee72a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee72a4 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee72aa mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ee72ad cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee72b1 je 0x10ee72e8 */
  if (C.zf) goto L_10ee72e8;
  /* 10ee72b3 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee72ba je 0x10ee72d6 */
  if (C.zf) goto L_10ee72d6;
  /* 10ee72bc cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee72c3 je 0x10ee72c7 */
  if (C.zf) goto L_10ee72c7;
  /* 10ee72c5 jmp 0x10ee72f8 */
  goto L_10ee72f8;
L_10ee72c7:;
  /* 10ee72c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee72ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee72cc and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee72cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee72d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ee72d4 jmp 0x10ee72f8 */
  goto L_10ee72f8;
L_10ee72d6:;
  /* 10ee72d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee72d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee72db and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee72de or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee72e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee72e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ee72e6 jmp 0x10ee72f8 */
  goto L_10ee72f8;
L_10ee72e8:;
  /* 10ee72e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee72eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee72ed and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee72f0 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee72f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee72f6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee72f8:;
  /* 10ee72f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee72fb and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7300 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10ee7303 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7306 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7308 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee730e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7313 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee7315 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7318 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 10ee731b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee731e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7321 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 10ee7324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7327 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 10ee732a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee732d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7333 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 10ee7336 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7339 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee733c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee733e mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10ee7341 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee7344 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 10ee7347 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee734a mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10ee734d or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7350 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7353 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 10ee7356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7359 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10ee735c and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee735f or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7365 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 10ee7368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee736b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee736e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee7370 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 10ee7373 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee7376 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 10ee7379 call 0x10ee7a50 */
  push32(0x10ee737eu); f_10ee7a50();
  /* 10ee737e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 10ee7381 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7382 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7384 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee7389 push eax */
  push32((uint32_t)(EAX));
  /* 10ee738a call dword ptr [0x10f1236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1236c))), 0x10ee7390u);
  /* 10ee7390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7393 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee7396 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10ee7399 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee739c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee739e je 0x10ee73ad */
  if (C.zf) goto L_10ee73ad;
  /* 10ee73a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee73a5 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee73a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73ab mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee73ad:;
  /* 10ee73ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee73b0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee73b3 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10ee73b6 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee73b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee73bb je 0x10ee73c9 */
  if (C.zf) goto L_10ee73c9;
  /* 10ee73bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee73c2 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 10ee73c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73c7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ee73c9:;
  /* 10ee73c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee73cc mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee73cf shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ee73d2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee73d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee73d7 je 0x10ee73e6 */
  if (C.zf) goto L_10ee73e6;
  /* 10ee73d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee73de and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee73e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee73e6:;
  /* 10ee73e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee73e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee73ec shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee73ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee73f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee73f3 je 0x10ee7402 */
  if (C.zf) goto L_10ee7402;
  /* 10ee73f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee73f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee73fa and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee73fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7400 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10ee7402:;
  /* 10ee7402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7405 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee7408 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee740b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee740d je 0x10ee741b */
  if (C.zf) goto L_10ee741b;
  /* 10ee740f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7412 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee7414 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 10ee7416 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7419 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ee741b:;
  /* 10ee741b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee741e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee7420 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7423 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee7426 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee742a ja 0x10ee7479 */
  if ((!C.cf&&!C.zf)) goto L_10ee7479;
  /* 10ee742c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee742f jmp dword ptr [ecx*4 + 0x10ee74e1] */
  switch (ECX) {
    case 0: goto L_10ee746c;
    case 1: goto L_10ee745a;
    case 2: goto L_10ee7448;
    case 3: goto L_10ee7436;
    default: x86_unimpl("switch@0x10ee742f out of table"); return;
  }
L_10ee7436:;
  /* 10ee7436 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7439 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee743b and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 10ee743e or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10ee7441 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7444 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee7446 jmp 0x10ee7479 */
  goto L_10ee7479;
L_10ee7448:;
  /* 10ee7448 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee744b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee744d and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 10ee7450 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 10ee7453 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7456 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee7458 jmp 0x10ee7479 */
  goto L_10ee7479;
L_10ee745a:;
  /* 10ee745a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee745d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee745f and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 10ee7462 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10ee7465 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7468 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10ee746a jmp 0x10ee7479 */
  goto L_10ee7479;
L_10ee746c:;
  /* 10ee746c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee746f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee7471 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 10ee7474 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7477 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ee7479:;
  /* 10ee7479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee747c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee747e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10ee7481 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7484 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee7487 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee748b je 0x10ee749b */
  if (C.zf) goto L_10ee749b;
  /* 10ee748d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7491 je 0x10ee74ad */
  if (C.zf) goto L_10ee74ad;
  /* 10ee7493 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7497 je 0x10ee74bf */
  if (C.zf) goto L_10ee74bf;
  /* 10ee7499 jmp 0x10ee74cc */
  goto L_10ee74cc;
L_10ee749b:;
  /* 10ee749b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee749e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee74a0 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee74a3 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee74a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee74a9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee74ab jmp 0x10ee74cc */
  goto L_10ee74cc;
L_10ee74ad:;
  /* 10ee74ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee74b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee74b2 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee74b5 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee74b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee74bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee74bd jmp 0x10ee74cc */
  goto L_10ee74cc;
L_10ee74bf:;
  /* 10ee74bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee74c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee74c4 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10ee74c7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee74ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10ee74cc:;
  /* 10ee74cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee74cf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee74d2 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 10ee74d5 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ee74d7 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 10ee74da mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee74dd mov esp, ebp */
  ESP = (EBP);
  /* 10ee74df pop ebp */
  EBP = (pop32());
  /* 10ee74e0 ret  */
  ESPCHK(0x10ee7030u, _esp0);
  ESP += 4; return;
}

/* FUN_10017500 @ 0x10ee7500 (882 bytes, 268 insns) */
void f_10ee7500(void) {
  FTRACE(0x10ee7500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7500 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7501 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7503 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7509 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee750c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee750f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7512 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee7517 je 0x10ee753a */
  if (C.zf) goto L_10ee753a;
  /* 10ee7519 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee751c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee751f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee7521 je 0x10ee753a */
  if (C.zf) goto L_10ee753a;
  /* 10ee7523 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7525 call 0x10ee7ab0 */
  push32(0x10ee752au); f_10ee7ab0();
  /* 10ee752a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee752d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee7530 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 10ee7532 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee7535 jmp 0x10ee783e */
  goto L_10ee783e;
L_10ee753a:;
  /* 10ee753a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee753d and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7540 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee7542 je 0x10ee7565 */
  if (C.zf) goto L_10ee7565;
  /* 10ee7544 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7547 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee754a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee754c je 0x10ee7565 */
  if (C.zf) goto L_10ee7565;
  /* 10ee754e push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee7550 call 0x10ee7ab0 */
  push32(0x10ee7555u); f_10ee7ab0();
  /* 10ee7555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee755b and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 10ee755d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee7560 jmp 0x10ee783e */
  goto L_10ee783e;
L_10ee7565:;
  /* 10ee7565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7568 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee756b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee756d je 0x10ee76e1 */
  if (C.zf) goto L_10ee76e1;
  /* 10ee7573 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7576 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee757b je 0x10ee76e1 */
  if (C.zf) goto L_10ee76e1;
  /* 10ee7581 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ee7583 call 0x10ee7ab0 */
  push32(0x10ee7588u); f_10ee7ab0();
  /* 10ee7588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee758b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee758e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7593 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee7596 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee759d ja 0x10ee75c0 */
  if ((!C.cf&&!C.zf)) goto L_10ee75c0;
  /* 10ee759f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee75a6 je 0x10ee7615 */
  if (C.zf) goto L_10ee7615;
  /* 10ee75a8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee75ac je 0x10ee75d2 */
  if (C.zf) goto L_10ee75d2;
  /* 10ee75ae cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee75b5 je 0x10ee7655 */
  if (C.zf) goto L_10ee7655;
  /* 10ee75bb jmp 0x10ee76d3 */
  goto L_10ee76d3;
L_10ee75c0:;
  /* 10ee75c0 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee75c7 je 0x10ee7695 */
  if (C.zf) goto L_10ee7695;
  /* 10ee75cd jmp 0x10ee76d3 */
  goto L_10ee76d3;
L_10ee75d2:;
  /* 10ee75d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee75d5 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 10ee75d7 fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10ee75dd fnstsw ax */
  AX = fpu_status();
  /* 10ee75df test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 10ee75e2 jne 0x10ee75f7 */
  if (!C.zf) goto L_10ee75f7;
  /* 10ee75e4 mov edx, dword ptr [0x10f0db18] */
  EDX = (r32((uint32_t)(0x10f0db18)));
  /* 10ee75ea mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10ee75ed mov eax, dword ptr [0x10f0db1c] */
  EAX = (r32((uint32_t)(0x10f0db1c)));
  /* 10ee75f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10ee75f5 jmp 0x10ee7602 */
  goto L_10ee7602;
L_10ee75f7:;
  /* 10ee75f7 fld qword ptr [0x10f0db18] */
  fpu_push(rf64((uint32_t)(0x10f0db18)));
  /* 10ee75fd fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 10ee75ff fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_10ee7602:;
  /* 10ee7602 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7605 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee7608 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee760a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee760d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee7610 jmp 0x10ee76d3 */
  goto L_10ee76d3;
L_10ee7615:;
  /* 10ee7615 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7618 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 10ee761a fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10ee7620 fnstsw ax */
  AX = fpu_status();
  /* 10ee7622 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 10ee7625 jne 0x10ee763a */
  if (!C.zf) goto L_10ee763a;
  /* 10ee7627 mov edx, dword ptr [0x10f0db18] */
  EDX = (r32((uint32_t)(0x10f0db18)));
  /* 10ee762d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10ee7630 mov eax, dword ptr [0x10f0db1c] */
  EAX = (r32((uint32_t)(0x10f0db1c)));
  /* 10ee7635 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ee7638 jmp 0x10ee7645 */
  goto L_10ee7645;
L_10ee763a:;
  /* 10ee763a fld qword ptr [0x10f0db28] */
  fpu_push(rf64((uint32_t)(0x10f0db28)));
  /* 10ee7640 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 10ee7642 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_10ee7645:;
  /* 10ee7645 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7648 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee764b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee764d mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee7650 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee7653 jmp 0x10ee76d3 */
  goto L_10ee76d3;
L_10ee7655:;
  /* 10ee7655 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7658 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 10ee765a fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10ee7660 fnstsw ax */
  AX = fpu_status();
  /* 10ee7662 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 10ee7665 jne 0x10ee767a */
  if (!C.zf) goto L_10ee767a;
  /* 10ee7667 mov edx, dword ptr [0x10f0db28] */
  EDX = (r32((uint32_t)(0x10f0db28)));
  /* 10ee766d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10ee7670 mov eax, dword ptr [0x10f0db2c] */
  EAX = (r32((uint32_t)(0x10f0db2c)));
  /* 10ee7675 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 10ee7678 jmp 0x10ee7685 */
  goto L_10ee7685;
L_10ee767a:;
  /* 10ee767a fld qword ptr [0x10f0db18] */
  fpu_push(rf64((uint32_t)(0x10f0db18)));
  /* 10ee7680 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 10ee7682 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_10ee7685:;
  /* 10ee7685 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7688 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee768b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee768d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee7690 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ee7693 jmp 0x10ee76d3 */
  goto L_10ee76d3;
L_10ee7695:;
  /* 10ee7695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7698 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 10ee769a fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10ee76a0 fnstsw ax */
  AX = fpu_status();
  /* 10ee76a2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 10ee76a5 jne 0x10ee76ba */
  if (!C.zf) goto L_10ee76ba;
  /* 10ee76a7 mov edx, dword ptr [0x10f0db28] */
  EDX = (r32((uint32_t)(0x10f0db28)));
  /* 10ee76ad mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10ee76b0 mov eax, dword ptr [0x10f0db2c] */
  EAX = (r32((uint32_t)(0x10f0db2c)));
  /* 10ee76b5 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 10ee76b8 jmp 0x10ee76c5 */
  goto L_10ee76c5;
L_10ee76ba:;
  /* 10ee76ba fld qword ptr [0x10f0db28] */
  fpu_push(rf64((uint32_t)(0x10f0db28)));
  /* 10ee76c0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 10ee76c2 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_10ee76c5:;
  /* 10ee76c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee76c8 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ee76cb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee76cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee76d0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10ee76d3:;
  /* 10ee76d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee76d6 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee76d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee76dc jmp 0x10ee783e */
  goto L_10ee783e;
L_10ee76e1:;
  /* 10ee76e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee76e4 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee76e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee76e9 je 0x10ee783e */
  if (C.zf) goto L_10ee783e;
  /* 10ee76ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee76f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee76f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee76f7 je 0x10ee783e */
  if (C.zf) goto L_10ee783e;
  /* 10ee76fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee7704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7707 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee770a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee770c je 0x10ee7715 */
  if (C.zf) goto L_10ee7715;
  /* 10ee770e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10ee7715:;
  /* 10ee7715 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7718 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 10ee771a fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10ee7720 fnstsw ax */
  AX = fpu_status();
  /* 10ee7722 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 10ee7725 jne 0x10ee781e */
  if (!C.zf) goto L_10ee781e;
  /* 10ee772b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10ee772e push eax */
  push32((uint32_t)(EAX));
  /* 10ee772f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7732 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee7735 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7736 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10ee7738 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7739 call 0x10eeabc0 */
  push32(0x10ee773eu); f_10eeabc0();
  /* 10ee773e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7741 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10ee7744 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee7747 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee774d mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ee7750 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7757 jge 0x10ee7771 */
  if ((C.sf==C.of)) goto L_10ee7771;
  /* 10ee7759 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10ee775c fmul qword ptr [0x10f09558] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x10f09558)));
  /* 10ee7762 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10ee7765 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ee776c jmp 0x10ee780e */
  goto L_10ee780e;
L_10ee7771:;
  /* 10ee7771 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10ee7774 fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10ee777a fnstsw ax */
  AX = fpu_status();
  /* 10ee777c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 10ee777f je 0x10ee778a */
  if (C.zf) goto L_10ee778a;
  /* 10ee7781 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 10ee7788 jmp 0x10ee7791 */
  goto L_10ee7791;
L_10ee778a:;
  /* 10ee778a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_10ee7791:;
  /* 10ee7791 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ee7794 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ee7797 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 10ee779b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 10ee779f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 10ee77a3 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 10ee77a7 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10ee77aa mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 10ee77ae jmp 0x10ee77b9 */
  goto L_10ee77b9;
L_10ee77b0:;
  /* 10ee77b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee77b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee77b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ee77b9:;
  /* 10ee77b9 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee77c0 jge 0x10ee7800 */
  if ((C.sf==C.of)) goto L_10ee7800;
  /* 10ee77c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee77c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee77c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee77ca je 0x10ee77d9 */
  if (C.zf) goto L_10ee77d9;
  /* 10ee77cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee77d0 jne 0x10ee77d9 */
  if (!C.zf) goto L_10ee77d9;
  /* 10ee77d2 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10ee77d9:;
  /* 10ee77d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee77dc shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ee77de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee77e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee77e4 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee77e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee77e9 je 0x10ee77f6 */
  if (C.zf) goto L_10ee77f6;
  /* 10ee77eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee77ee or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee77f3 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ee77f6:;
  /* 10ee77f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee77f9 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ee77fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee77fe jmp 0x10ee77b0 */
  goto L_10ee77b0;
L_10ee7800:;
  /* 10ee7800 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7804 je 0x10ee780e */
  if (C.zf) goto L_10ee780e;
  /* 10ee7806 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10ee7809 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 10ee780b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_10ee780e:;
  /* 10ee780e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7811 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7814 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ee7816 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee7819 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ee781c jmp 0x10ee7825 */
  goto L_10ee7825;
L_10ee781e:;
  /* 10ee781e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10ee7825:;
  /* 10ee7825 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7829 je 0x10ee7835 */
  if (C.zf) goto L_10ee7835;
  /* 10ee782b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10ee782d call 0x10ee7ab0 */
  push32(0x10ee7832u); f_10ee7ab0();
  /* 10ee7832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee7835:;
  /* 10ee7835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee7838 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee783b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee783e:;
  /* 10ee783e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7841 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7846 je 0x10ee7865 */
  if (C.zf) goto L_10ee7865;
  /* 10ee7848 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee784b and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee784e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee7850 je 0x10ee7865 */
  if (C.zf) goto L_10ee7865;
  /* 10ee7852 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10ee7854 call 0x10ee7ab0 */
  push32(0x10ee7859u); f_10ee7ab0();
  /* 10ee7859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee785c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee785f and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7862 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee7865:;
  /* 10ee7865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7867 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee786b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10ee786e mov esp, ebp */
  ESP = (EBP);
  /* 10ee7870 pop ebp */
  EBP = (pop32());
  /* 10ee7871 ret  */
  ESPCHK(0x10ee7500u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x10ee7880 (155 bytes, 54 insns) */
void f_10ee7880(void) {
  FTRACE(0x10ee7880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7880 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7881 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7883 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7886 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7889 push eax */
  push32((uint32_t)(EAX));
  /* 10ee788a call 0x10ee7960 */
  push32(0x10ee788fu); f_10ee7960();
  /* 10ee788f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7892 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ee7895 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7899 je 0x10ee78f7 */
  if (C.zf) goto L_10ee78f7;
  /* 10ee789b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee789e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10ee78a1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee78a4 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ee78a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee78aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee78ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee78b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee78b3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee78b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee78b9 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee78bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee78bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ee78c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee78c5 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee78ca mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee78cd push edx */
  push32((uint32_t)(EDX));
  /* 10ee78ce call 0x10ee7a70 */
  push32(0x10ee78d3u); f_10ee7a70();
  /* 10ee78d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee78d6 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10ee78d9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee78da call 0x10ee7a20 */
  push32(0x10ee78dfu); f_10ee7a20();
  /* 10ee78df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee78e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee78e4 jne 0x10ee78f2 */
  if (!C.zf) goto L_10ee78f2;
  /* 10ee78e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee78e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee78ea call 0x10ee7920 */
  push32(0x10ee78efu); f_10ee7920();
  /* 10ee78ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee78f2:;
  /* 10ee78f2 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 10ee78f5 jmp 0x10ee7917 */
  goto L_10ee7917;
L_10ee78f7:;
  /* 10ee78f7 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 10ee78fc mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10ee78ff push edx */
  push32((uint32_t)(EDX));
  /* 10ee7900 call 0x10ee7a70 */
  push32(0x10ee7905u); f_10ee7a70();
  /* 10ee7905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee790b push eax */
  push32((uint32_t)(EAX));
  /* 10ee790c call 0x10ee7920 */
  push32(0x10ee7911u); f_10ee7920();
  /* 10ee7911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7914 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_10ee7917:;
  /* 10ee7917 mov esp, ebp */
  ESP = (EBP);
  /* 10ee7919 pop ebp */
  EBP = (pop32());
  /* 10ee791a ret  */
  ESPCHK(0x10ee7880u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x10ee7920 (58 bytes, 20 insns) */
void f_10ee7920(void) {
  FTRACE(0x10ee7920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7920 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7921 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7923 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7927 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee792a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee792e je 0x10ee793e */
  if (C.zf) goto L_10ee793e;
  /* 10ee7930 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7934 jle 0x10ee7956 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee7956;
  /* 10ee7936 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee793a jle 0x10ee794b */
  if ((C.zf||C.sf!=C.of)) goto L_10ee794b;
  /* 10ee793c jmp 0x10ee7956 */
  goto L_10ee7956;
L_10ee793e:;
  /* 10ee793e call 0x10ee6db0 */
  push32(0x10ee7943u); f_10ee6db0();
  /* 10ee7943 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 10ee7949 jmp 0x10ee7956 */
  goto L_10ee7956;
L_10ee794b:;
  /* 10ee794b call 0x10ee6db0 */
  push32(0x10ee7950u); f_10ee6db0();
  /* 10ee7950 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_10ee7956:;
  /* 10ee7956 mov esp, ebp */
  ESP = (EBP);
  /* 10ee7958 pop ebp */
  EBP = (pop32());
  /* 10ee7959 ret  */
  ESPCHK(0x10ee7920u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x10ee7960 (63 bytes, 22 insns) */
void f_10ee7960(void) {
  FTRACE(0x10ee7960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7961 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7963 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee796b jmp 0x10ee7976 */
  goto L_10ee7976;
L_10ee796d:;
  /* 10ee796d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee7970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7973 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee7976:;
  /* 10ee7976 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee797a jge 0x10ee7999 */
  if ((C.sf==C.of)) goto L_10ee7999;
  /* 10ee797c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee797f mov edx, dword ptr [ecx*8 + 0x10f0d650] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10f0d650)));
  /* 10ee7986 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7989 jne 0x10ee7997 */
  if (!C.zf) goto L_10ee7997;
  /* 10ee798b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee798e mov eax, dword ptr [eax*8 + 0x10f0d654] */
  EAX = (r32((uint32_t)(EAX*8 + 0x10f0d654)));
  /* 10ee7995 jmp 0x10ee799b */
  goto L_10ee799b;
L_10ee7997:;
  /* 10ee7997 jmp 0x10ee796d */
  goto L_10ee796d;
L_10ee7999:;
  /* 10ee7999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee799b:;
  /* 10ee799b mov esp, ebp */
  ESP = (EBP);
  /* 10ee799d pop ebp */
  EBP = (pop32());
  /* 10ee799e ret  */
  ESPCHK(0x10ee7960u, _esp0);
  ESP += 4; return;
}

/* FUN_100179a0 @ 0x10ee79a0 (113 bytes, 38 insns) */
void f_10ee79a0(void) {
  FTRACE(0x10ee79a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee79a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee79a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee79a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee79a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee79a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee79aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee79ac je 0x10ee79b7 */
  if (C.zf) goto L_10ee79b7;
  /* 10ee79ae mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 10ee79b5 jmp 0x10ee7a0a */
  goto L_10ee7a0a;
L_10ee79b7:;
  /* 10ee79b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee79ba and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee79bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee79bf je 0x10ee79ca */
  if (C.zf) goto L_10ee79ca;
  /* 10ee79c1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee79c8 jmp 0x10ee7a0a */
  goto L_10ee7a0a;
L_10ee79ca:;
  /* 10ee79ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee79cd and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee79d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee79d2 je 0x10ee79dd */
  if (C.zf) goto L_10ee79dd;
  /* 10ee79d4 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10ee79db jmp 0x10ee7a0a */
  goto L_10ee7a0a;
L_10ee79dd:;
  /* 10ee79dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee79e0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee79e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee79e5 je 0x10ee79f0 */
  if (C.zf) goto L_10ee79f0;
  /* 10ee79e7 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10ee79ee jmp 0x10ee7a0a */
  goto L_10ee7a0a;
L_10ee79f0:;
  /* 10ee79f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee79f3 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee79f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee79f8 je 0x10ee7a03 */
  if (C.zf) goto L_10ee7a03;
  /* 10ee79fa mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 10ee7a01 jmp 0x10ee7a0a */
  goto L_10ee7a0a;
L_10ee7a03:;
  /* 10ee7a03 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10ee7a0a:;
  /* 10ee7a0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee7a0d mov esp, ebp */
  ESP = (EBP);
  /* 10ee7a0f pop ebp */
  EBP = (pop32());
  /* 10ee7a10 ret  */
  ESPCHK(0x10ee79a0u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x10ee7a20 (7 bytes, 5 insns) */
void f_10ee7a20(void) {
  FTRACE(0x10ee7a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7a21 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7a25 pop ebp */
  EBP = (pop32());
  /* 10ee7a26 ret  */
  ESPCHK(0x10ee7a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a30 @ 0x10ee7a30 (22 bytes, 15 insns) */
void f_10ee7a30(void) {
  FTRACE(0x10ee7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7a31 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7a34 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee7a35 push esi */
  push32((uint32_t)(ESI));
  /* 10ee7a36 push edi */
  push32((uint32_t)(EDI));
  /* 10ee7a37 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee7a38 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 10ee7a3b movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 10ee7a3f pop edi */
  EDI = (pop32());
  /* 10ee7a40 pop esi */
  ESI = (pop32());
  /* 10ee7a41 pop ebx */
  EBX = (pop32());
  /* 10ee7a42 mov esp, ebp */
  ESP = (EBP);
  /* 10ee7a44 pop ebp */
  EBP = (pop32());
  /* 10ee7a45 ret  */
  ESPCHK(0x10ee7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a50 @ 0x10ee7a50 (23 bytes, 15 insns) */
void f_10ee7a50(void) {
  FTRACE(0x10ee7a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7a51 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7a54 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee7a55 push esi */
  push32((uint32_t)(ESI));
  /* 10ee7a56 push edi */
  push32((uint32_t)(EDI));
  /* 10ee7a57 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 10ee7a5a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10ee7a5c movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 10ee7a60 pop edi */
  EDI = (pop32());
  /* 10ee7a61 pop esi */
  ESI = (pop32());
  /* 10ee7a62 pop ebx */
  EBX = (pop32());
  /* 10ee7a63 mov esp, ebp */
  ESP = (EBP);
  /* 10ee7a65 pop ebp */
  EBP = (pop32());
  /* 10ee7a66 ret  */
  ESPCHK(0x10ee7a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a70 @ 0x10ee7a70 (50 bytes, 24 insns) */
void f_10ee7a70(void) {
  FTRACE(0x10ee7a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7a71 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7a76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee7a77 push esi */
  push32((uint32_t)(ESI));
  /* 10ee7a78 push edi */
  push32((uint32_t)(EDI));
  /* 10ee7a79 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee7a7a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 10ee7a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7a80 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7a83 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 10ee7a87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7a8a not edx */
  EDX = (~(EDX));
  /* 10ee7a8c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7a8e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7a90 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ee7a94 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10ee7a97 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 10ee7a9b pop edi */
  EDI = (pop32());
  /* 10ee7a9c pop esi */
  ESI = (pop32());
  /* 10ee7a9d pop ebx */
  EBX = (pop32());
  /* 10ee7a9e mov esp, ebp */
  ESP = (EBP);
  /* 10ee7aa0 pop ebp */
  EBP = (pop32());
  /* 10ee7aa1 ret  */
  ESPCHK(0x10ee7a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ab0 @ 0x10ee7ab0 (117 bytes, 53 insns) */
void f_10ee7ab0(void) {
  FTRACE(0x10ee7ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee7ab7 push esi */
  push32((uint32_t)(ESI));
  /* 10ee7ab8 push edi */
  push32((uint32_t)(EDI));
  /* 10ee7ab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7abc and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7ac1 je 0x10ee7acd */
  if (C.zf) goto L_10ee7acd;
  /* 10ee7ac3 fld xword ptr [0x10f0d72c] */
  fpu_push(rf80((uint32_t)(0x10f0d72c)));
  /* 10ee7ac9 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 10ee7acc wait  */
  /* wait (no observable integer/reg state) */
L_10ee7acd:;
  /* 10ee7acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7ad0 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7ad3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee7ad5 je 0x10ee7ae7 */
  if (C.zf) goto L_10ee7ae7;
  /* 10ee7ad7 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee7ad8 fnstsw ax */
  AX = fpu_status();
  /* 10ee7ada fld xword ptr [0x10f0d72c] */
  fpu_push(rf80((uint32_t)(0x10f0d72c)));
  /* 10ee7ae0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10ee7ae3 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee7ae4 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ee7ae5 fnstsw ax */
  AX = fpu_status();
L_10ee7ae7:;
  /* 10ee7ae7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7aea and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7aed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee7aef je 0x10ee7afb */
  if (C.zf) goto L_10ee7afb;
  /* 10ee7af1 fld xword ptr [0x10f0d738] */
  fpu_push(rf80((uint32_t)(0x10f0d738)));
  /* 10ee7af7 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10ee7afa wait  */
  /* wait (no observable integer/reg state) */
L_10ee7afb:;
  /* 10ee7afb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7afe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7b03 je 0x10ee7b0e */
  if (C.zf) goto L_10ee7b0e;
  /* 10ee7b05 fldz  */
  fpu_push(0.0);
  /* 10ee7b07 fld1  */
  fpu_push(1.0);
  /* 10ee7b09 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 10ee7b0b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 10ee7b0d wait  */
  /* wait (no observable integer/reg state) */
L_10ee7b0e:;
  /* 10ee7b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7b11 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee7b14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee7b16 je 0x10ee7b1e */
  if (C.zf) goto L_10ee7b1e;
  /* 10ee7b18 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 10ee7b1a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10ee7b1d wait  */
  /* wait (no observable integer/reg state) */
L_10ee7b1e:;
  /* 10ee7b1e pop edi */
  EDI = (pop32());
  /* 10ee7b1f pop esi */
  ESI = (pop32());
  /* 10ee7b20 pop ebx */
  EBX = (pop32());
  /* 10ee7b21 mov esp, ebp */
  ESP = (EBP);
  /* 10ee7b23 pop ebp */
  EBP = (pop32());
  /* 10ee7b24 ret  */
  ESPCHK(0x10ee7ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b30 @ 0x10ee7b30 (421 bytes, 148 insns) */
void f_10ee7b30(void) {
  FTRACE(0x10ee7b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7b31 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7b33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ee7b35 push 0x10f0a258 */
  push32((uint32_t)(0x10f0a258u));
  /* 10ee7b3a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ee7b3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ee7b45 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7b46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ee7b4d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7b50 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee7b51 push esi */
  push32((uint32_t)(ESI));
  /* 10ee7b52 push edi */
  push32((uint32_t)(EDI));
  /* 10ee7b53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ee7b56 cmp dword ptr [0x10f0f7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7b5d jne 0x10ee7bae */
  if (!C.zf) goto L_10ee7bae;
  /* 10ee7b5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10ee7b62 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7b65 push 0x10f0a254 */
  push32((uint32_t)(0x10f0a254u));
  /* 10ee7b6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7b6c call dword ptr [0x10f12360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12360))), 0x10ee7b72u);
  /* 10ee7b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7b74 je 0x10ee7b82 */
  if (C.zf) goto L_10ee7b82;
  /* 10ee7b76 mov dword ptr [0x10f0f7a0], 1 */
  w32((uint32_t)(0x10f0f7a0), (0x1u));
  /* 10ee7b80 jmp 0x10ee7bae */
  goto L_10ee7bae;
L_10ee7b82:;
  /* 10ee7b82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10ee7b85 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7b86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7b88 push 0x10f0a250 */
  push32((uint32_t)(0x10f0a250u));
  /* 10ee7b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7b91 call dword ptr [0x10f12364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12364))), 0x10ee7b97u);
  /* 10ee7b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7b99 je 0x10ee7ba7 */
  if (C.zf) goto L_10ee7ba7;
  /* 10ee7b9b mov dword ptr [0x10f0f7a0], 2 */
  w32((uint32_t)(0x10f0f7a0), (0x2u));
  /* 10ee7ba5 jmp 0x10ee7bae */
  goto L_10ee7bae;
L_10ee7ba7:;
  /* 10ee7ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7ba9 jmp 0x10ee7cd8 */
  goto L_10ee7cd8;
L_10ee7bae:;
  /* 10ee7bae cmp dword ptr [0x10f0f7a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7bb5 jne 0x10ee7be5 */
  if (!C.zf) goto L_10ee7be5;
  /* 10ee7bb7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7bbb jne 0x10ee7bc6 */
  if (!C.zf) goto L_10ee7bc6;
  /* 10ee7bbd mov edx, dword ptr [0x10f0f7b8] */
  EDX = (r32((uint32_t)(0x10f0f7b8)));
  /* 10ee7bc3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10ee7bc6:;
  /* 10ee7bc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee7bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7bca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7bcd push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7bce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7bd1 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7bd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7bd5 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7bd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee7bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7bda call dword ptr [0x10f12364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12364))), 0x10ee7be0u);
  /* 10ee7be0 jmp 0x10ee7cd8 */
  goto L_10ee7cd8;
L_10ee7be5:;
  /* 10ee7be5 cmp dword ptr [0x10f0f7a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7bec jne 0x10ee7cd6 */
  if (!C.zf) goto L_10ee7cd6;
  /* 10ee7bf2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7bf6 jne 0x10ee7c01 */
  if (!C.zf) goto L_10ee7c01;
  /* 10ee7bf8 mov edx, dword ptr [0x10f0f7c8] */
  EDX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ee7bfe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10ee7c01:;
  /* 10ee7c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7c05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7c08 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7c09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7c0c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7c0d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee7c10 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee7c12 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7c14 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee7c17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7c1a push edx */
  push32((uint32_t)(EDX));
  /* 10ee7c1b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee7c1e push eax */
  push32((uint32_t)(EAX));
  /* 10ee7c1f call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10ee7c25u);
  /* 10ee7c25 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ee7c28 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7c2c jne 0x10ee7c35 */
  if (!C.zf) goto L_10ee7c35;
  /* 10ee7c2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7c30 jmp 0x10ee7cd8 */
  goto L_10ee7cd8;
L_10ee7c35:;
  /* 10ee7c35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee7c3c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee7c3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee7c41 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7c44 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ee7c46 call 0x10ee0020 */
  push32(0x10ee7c4bu); f_10ee0020();
  /* 10ee7c4b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10ee7c4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ee7c51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee7c54 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee7c57 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee7c5a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee7c5c push edx */
  push32((uint32_t)(EDX));
  /* 10ee7c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7c5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee7c62 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7c63 call 0x10ee1b30 */
  push32(0x10ee7c68u); f_10ee1b30();
  /* 10ee7c68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7c6b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ee7c72 jmp 0x10ee7c8b */
  goto L_10ee7c8b;
  /* 10ee7c74 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee7c79 ret  */
  ESPCHK(0x10ee7b30u, _esp0);
  ESP += 4; return;
  /* 10ee7c7a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee7c7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ee7c84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ee7c8b:;
  /* 10ee7c8b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7c8f jne 0x10ee7c95 */
  if (!C.zf) goto L_10ee7c95;
  /* 10ee7c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7c93 jmp 0x10ee7cd8 */
  goto L_10ee7cd8;
L_10ee7c95:;
  /* 10ee7c95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee7c98 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7c99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee7c9c push edx */
  push32((uint32_t)(EDX));
  /* 10ee7c9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee7ca0 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7ca1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7ca5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7ca7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee7caa push edx */
  push32((uint32_t)(EDX));
  /* 10ee7cab call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10ee7cb1u);
  /* 10ee7cb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee7cb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7cb8 jne 0x10ee7cbe */
  if (!C.zf) goto L_10ee7cbe;
  /* 10ee7cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7cbc jmp 0x10ee7cd8 */
  goto L_10ee7cd8;
L_10ee7cbe:;
  /* 10ee7cbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee7cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7cc2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee7cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7cc6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee7cc9 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7ccd push eax */
  push32((uint32_t)(EAX));
  /* 10ee7cce call dword ptr [0x10f12360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12360))), 0x10ee7cd4u);
  /* 10ee7cd4 jmp 0x10ee7cd8 */
  goto L_10ee7cd8;
L_10ee7cd6:;
  /* 10ee7cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee7cd8:;
  /* 10ee7cd8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10ee7cdb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7cde mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ee7ce5 pop edi */
  EDI = (pop32());
  /* 10ee7ce6 pop esi */
  ESI = (pop32());
  /* 10ee7ce7 pop ebx */
  EBX = (pop32());
  /* 10ee7ce8 mov esp, ebp */
  ESP = (EBP);
  /* 10ee7cea pop ebp */
  EBP = (pop32());
  /* 10ee7ceb ret  */
  ESPCHK(0x10ee7b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017cf0 @ 0x10ee7cf0 (1007 bytes, 269 insns) */
void f_10ee7cf0(void) {
  FTRACE(0x10ee7cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee7cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee7cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee7cf3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7cfd jl 0x10ee7d05 */
  if ((C.sf!=C.of)) goto L_10ee7d05;
  /* 10ee7cff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7d03 jle 0x10ee7d0c */
  if ((C.zf||C.sf!=C.of)) goto L_10ee7d0c;
L_10ee7d05:;
  /* 10ee7d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7d07 jmp 0x10ee80db */
  goto L_10ee80db;
L_10ee7d0c:;
  /* 10ee7d0c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ee7d0e call 0x10edb620 */
  push32(0x10ee7d13u); f_10edb620();
  /* 10ee7d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7d16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee7d1d mov eax, dword ptr [0x10f10bc4] */
  EAX = (r32((uint32_t)(0x10f10bc4)));
  /* 10ee7d22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7d25 mov dword ptr [0x10f10bc4], eax */
  w32((uint32_t)(0x10f10bc4), (EAX));
L_10ee7d2a:;
  /* 10ee7d2a cmp dword ptr [0x10f10bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7d31 je 0x10ee7d3d */
  if (C.zf) goto L_10ee7d3d;
  /* 10ee7d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee7d35 call dword ptr [0x10f1235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1235c))), 0x10ee7d3bu);
  /* 10ee7d3b jmp 0x10ee7d2a */
  goto L_10ee7d2a;
L_10ee7d3d:;
  /* 10ee7d3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7d41 je 0x10ee7d81 */
  if (C.zf) goto L_10ee7d81;
  /* 10ee7d43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7d47 je 0x10ee7d61 */
  if (C.zf) goto L_10ee7d61;
  /* 10ee7d49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7d4c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7d50 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7d51 call 0x10ee80e0 */
  push32(0x10ee7d56u); f_10ee80e0();
  /* 10ee7d56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7d59 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10ee7d5f jmp 0x10ee7d73 */
  goto L_10ee7d73;
L_10ee7d61:;
  /* 10ee7d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7d64 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee7d67 mov ecx, dword ptr [eax + 0x10f0d854] */
  ECX = (r32((uint32_t)(EAX + 0x10f0d854)));
  /* 10ee7d6d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10ee7d73:;
  /* 10ee7d73 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10ee7d79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee7d7c jmp 0x10ee80bb */
  goto L_10ee80bb;
L_10ee7d81:;
  /* 10ee7d81 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10ee7d88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee7d8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7d93 je 0x10ee80b3 */
  if (C.zf) goto L_10ee80b3;
  /* 10ee7d99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7d9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee7d9f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7da2 jne 0x10ee7fc4 */
  if (!C.zf) goto L_10ee7fc4;
  /* 10ee7da8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7dab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ee7daf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7db2 jne 0x10ee7fc4 */
  if (!C.zf) goto L_10ee7fc4;
  /* 10ee7db8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7dbb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10ee7dbf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7dc2 jne 0x10ee7fc4 */
  if (!C.zf) goto L_10ee7fc4;
  /* 10ee7dc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7dcb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10ee7dd1:;
  /* 10ee7dd1 push 0x10f0a2a8 */
  push32((uint32_t)(0x10f0a2a8u));
  /* 10ee7dd6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee7ddc push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7ddd call 0x10eec240 */
  push32(0x10ee7de2u); f_10eec240();
  /* 10ee7de2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7de5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10ee7deb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7df2 je 0x10ee7e1d */
  if (C.zf) goto L_10ee7e1d;
  /* 10ee7df4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7dfa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7e00 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10ee7e06 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7e0d je 0x10ee7e1d */
  if (C.zf) goto L_10ee7e1d;
  /* 10ee7e0f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7e15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee7e18 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7e1b jne 0x10ee7e43 */
  if (!C.zf) goto L_10ee7e43;
L_10ee7e1d:;
  /* 10ee7e1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7e21 je 0x10ee7e3c */
  if (C.zf) goto L_10ee7e3c;
  /* 10ee7e23 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ee7e25 call 0x10edb6c0 */
  push32(0x10ee7e2au); f_10edb6c0();
  /* 10ee7e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7e2d mov edx, dword ptr [0x10f10bc4] */
  EDX = (r32((uint32_t)(0x10f10bc4)));
  /* 10ee7e33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7e36 mov dword ptr [0x10f10bc4], edx */
  w32((uint32_t)(0x10f10bc4), (EDX));
L_10ee7e3c:;
  /* 10ee7e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7e3e jmp 0x10ee80db */
  goto L_10ee80db;
L_10ee7e43:;
  /* 10ee7e43 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10ee7e4a jmp 0x10ee7e55 */
  goto L_10ee7e55;
L_10ee7e4c:;
  /* 10ee7e4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7e4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7e52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10ee7e55:;
  /* 10ee7e55 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7e59 jg 0x10ee7ea3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee7ea3;
  /* 10ee7e5b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ee7e61 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7e62 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee7e68 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7e69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7e6c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee7e6f mov ecx, dword ptr [eax + 0x10f0d850] */
  ECX = (r32((uint32_t)(EAX + 0x10f0d850)));
  /* 10ee7e75 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7e76 call 0x10eec200 */
  push32(0x10ee7e7bu); f_10eec200();
  /* 10ee7e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7e80 jne 0x10ee7ea1 */
  if (!C.zf) goto L_10ee7ea1;
  /* 10ee7e82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7e85 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee7e88 mov eax, dword ptr [edx + 0x10f0d850] */
  EAX = (r32((uint32_t)(EDX + 0x10f0d850)));
  /* 10ee7e8e push eax */
  push32((uint32_t)(EAX));
  /* 10ee7e8f call 0x10edfcb0 */
  push32(0x10ee7e94u); f_10edfcb0();
  /* 10ee7e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7e97 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7e9d jne 0x10ee7ea1 */
  if (!C.zf) goto L_10ee7ea1;
  /* 10ee7e9f jmp 0x10ee7ea3 */
  goto L_10ee7ea3;
L_10ee7ea1:;
  /* 10ee7ea1 jmp 0x10ee7e4c */
  goto L_10ee7e4c;
L_10ee7ea3:;
  /* 10ee7ea3 push 0x10f0a2a4 */
  push32((uint32_t)(0x10f0a2a4u));
  /* 10ee7ea8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7eb1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10ee7eb7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7ebd push edx */
  push32((uint32_t)(EDX));
  /* 10ee7ebe call 0x10eec1c0 */
  push32(0x10ee7ec3u); f_10eec1c0();
  /* 10ee7ec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7ec6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10ee7ecc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7ed3 jne 0x10ee7f09 */
  if (!C.zf) goto L_10ee7f09;
  /* 10ee7ed5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7edb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee7ede cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7ee1 je 0x10ee7f09 */
  if (C.zf) goto L_10ee7f09;
  /* 10ee7ee3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7ee7 je 0x10ee7f02 */
  if (C.zf) goto L_10ee7f02;
  /* 10ee7ee9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ee7eeb call 0x10edb6c0 */
  push32(0x10ee7ef0u); f_10edb6c0();
  /* 10ee7ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7ef3 mov edx, dword ptr [0x10f10bc4] */
  EDX = (r32((uint32_t)(0x10f10bc4)));
  /* 10ee7ef9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee7efc mov dword ptr [0x10f10bc4], edx */
  w32((uint32_t)(0x10f10bc4), (EDX));
L_10ee7f02:;
  /* 10ee7f02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee7f04 jmp 0x10ee80db */
  goto L_10ee80db;
L_10ee7f09:;
  /* 10ee7f09 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7f0d jg 0x10ee7f5a */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee7f5a;
  /* 10ee7f0f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ee7f15 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7f16 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7f1c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7f1d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10ee7f23 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7f24 call 0x10ee06a0 */
  push32(0x10ee7f29u); f_10ee06a0();
  /* 10ee7f29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7f2c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10ee7f32 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10ee7f3a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10ee7f40 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7f41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7f44 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7f45 call 0x10ee80e0 */
  push32(0x10ee7f4au); f_10ee80e0();
  /* 10ee7f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7f4f je 0x10ee7f5a */
  if (C.zf) goto L_10ee7f5a;
  /* 10ee7f51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee7f54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7f57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ee7f5a:;
  /* 10ee7f5a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee7f60 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7f66 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ee7f6c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee7f72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee7f75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7f77 je 0x10ee7f88 */
  if (C.zf) goto L_10ee7f88;
  /* 10ee7f79 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee7f7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7f82 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10ee7f88:;
  /* 10ee7f88 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee7f8e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee7f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee7f93 jne 0x10ee7dd1 */
  if (!C.zf) goto L_10ee7dd1;
  /* 10ee7f99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7f9d je 0x10ee7fac */
  if (C.zf) goto L_10ee7fac;
  /* 10ee7f9f call 0x10ee8280 */
  push32(0x10ee7fa4u); f_10ee8280();
  /* 10ee7fa4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10ee7faa jmp 0x10ee7fb6 */
  goto L_10ee7fb6;
L_10ee7fac:;
  /* 10ee7fac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10ee7fb6:;
  /* 10ee7fb6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10ee7fbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee7fbf jmp 0x10ee80b1 */
  goto L_10ee80b1;
L_10ee7fc4:;
  /* 10ee7fc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee7fc7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee7fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7fca push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee7fcc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10ee7fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10ee7fd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee7fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee7fd7 call 0x10ee8380 */
  push32(0x10ee7fdcu); f_10ee8380();
  /* 10ee7fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7fdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee7fe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee7fe6 je 0x10ee80b1 */
  if (C.zf) goto L_10ee80b1;
  /* 10ee7fec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ee7ff3 jmp 0x10ee7ffe */
  goto L_10ee7ffe;
L_10ee7ff5:;
  /* 10ee7ff5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee7ff8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee7ffb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ee7ffe:;
  /* 10ee7ffe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8002 jg 0x10ee8060 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee8060;
  /* 10ee8004 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8008 je 0x10ee805e */
  if (C.zf) goto L_10ee805e;
  /* 10ee800a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee800d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee8010 mov ecx, dword ptr [eax + 0x10f0d854] */
  ECX = (r32((uint32_t)(EAX + 0x10f0d854)));
  /* 10ee8016 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8017 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10ee801d push edx */
  push32((uint32_t)(EDX));
  /* 10ee801e call 0x10ee42c0 */
  push32(0x10ee8023u); f_10ee42c0();
  /* 10ee8023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8028 je 0x10ee8055 */
  if (C.zf) goto L_10ee8055;
  /* 10ee802a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10ee8030 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8031 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee8034 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8035 call 0x10ee80e0 */
  push32(0x10ee803au); f_10ee80e0();
  /* 10ee803a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee803d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee803f je 0x10ee804c */
  if (C.zf) goto L_10ee804c;
  /* 10ee8041 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee8044 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8047 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10ee804a jmp 0x10ee8053 */
  goto L_10ee8053;
L_10ee804c:;
  /* 10ee804c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10ee8053:;
  /* 10ee8053 jmp 0x10ee805e */
  goto L_10ee805e;
L_10ee8055:;
  /* 10ee8055 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee8058 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee805b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ee805e:;
  /* 10ee805e jmp 0x10ee7ff5 */
  goto L_10ee7ff5;
L_10ee8060:;
  /* 10ee8060 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8064 je 0x10ee808b */
  if (C.zf) goto L_10ee808b;
  /* 10ee8066 call 0x10ee8280 */
  push32(0x10ee806bu); f_10ee8280();
  /* 10ee806b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee806e push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee8070 mov ecx, dword ptr [0x10f0d854] */
  ECX = (r32((uint32_t)(0x10f0d854)));
  /* 10ee8076 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8077 call 0x10edc1b0 */
  push32(0x10ee807cu); f_10edc1b0();
  /* 10ee807c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee807f mov dword ptr [0x10f0d854], 0 */
  w32((uint32_t)(0x10f0d854), (0x0u));
  /* 10ee8089 jmp 0x10ee80b1 */
  goto L_10ee80b1;
L_10ee808b:;
  /* 10ee808b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee808f je 0x10ee809e */
  if (C.zf) goto L_10ee809e;
  /* 10ee8091 call 0x10ee8280 */
  push32(0x10ee8096u); f_10ee8280();
  /* 10ee8096 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10ee809c jmp 0x10ee80a8 */
  goto L_10ee80a8;
L_10ee809e:;
  /* 10ee809e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10ee80a8:;
  /* 10ee80a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10ee80ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ee80b1:;
  /* 10ee80b1 jmp 0x10ee80bb */
  goto L_10ee80bb;
L_10ee80b3:;
  /* 10ee80b3 call 0x10ee8280 */
  push32(0x10ee80b8u); f_10ee8280();
  /* 10ee80b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ee80bb:;
  /* 10ee80bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee80bf je 0x10ee80d8 */
  if (C.zf) goto L_10ee80d8;
  /* 10ee80c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10ee80c3 call 0x10edb6c0 */
  push32(0x10ee80c8u); f_10edb6c0();
  /* 10ee80c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee80cb mov eax, dword ptr [0x10f10bc4] */
  EAX = (r32((uint32_t)(0x10f10bc4)));
  /* 10ee80d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee80d3 mov dword ptr [0x10f10bc4], eax */
  w32((uint32_t)(0x10f10bc4), (EAX));
L_10ee80d8:;
  /* 10ee80d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ee80db:;
  /* 10ee80db mov esp, ebp */
  ESP = (EBP);
  /* 10ee80dd pop ebp */
  EBP = (pop32());
  /* 10ee80de ret  */
  ESPCHK(0x10ee7cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_100180e0 @ 0x10ee80e0 (403 bytes, 117 insns) */
void f_10ee80e0(void) {
  FTRACE(0x10ee80e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee80e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee80e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee80e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee80e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee80ec push eax */
  push32((uint32_t)(EAX));
  /* 10ee80ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10ee80f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee80f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10ee80fa push edx */
  push32((uint32_t)(EDX));
  /* 10ee80fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10ee8101 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8102 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8105 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8106 call 0x10ee8380 */
  push32(0x10ee810bu); f_10ee8380();
  /* 10ee810b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee810e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8110 jne 0x10ee8119 */
  if (!C.zf) goto L_10ee8119;
  /* 10ee8112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8114 jmp 0x10ee826f */
  goto L_10ee826f;
L_10ee8119:;
  /* 10ee8119 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10ee811e push 0x10f0a2ac */
  push32((uint32_t)(0x10f0a2acu));
  /* 10ee8123 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee8125 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10ee812b push edx */
  push32((uint32_t)(EDX));
  /* 10ee812c call 0x10edfcb0 */
  push32(0x10ee8131u); f_10edfcb0();
  /* 10ee8131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8137 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8138 call 0x10edb720 */
  push32(0x10ee813du); f_10edb720();
  /* 10ee813d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8140 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee8143 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8147 jne 0x10ee8150 */
  if (!C.zf) goto L_10ee8150;
  /* 10ee8149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee814b jmp 0x10ee826f */
  goto L_10ee826f;
L_10ee8150:;
  /* 10ee8150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8153 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee8156 mov ecx, dword ptr [eax + 0x10f0d854] */
  ECX = (r32((uint32_t)(EAX + 0x10f0d854)));
  /* 10ee815c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee815f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8162 mov eax, dword ptr [edx*4 + 0x10f0f7b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f0f7b0)));
  /* 10ee8169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee816c push 6 */
  push32((uint32_t)(0x6u));
  /* 10ee816e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8171 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee8174 add ecx, 0x10f0f7f4 */
  { uint32_t _a=(ECX),_b=(0x10f0f7f4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee817a push ecx */
  push32((uint32_t)(ECX));
  /* 10ee817b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10ee817e push edx */
  push32((uint32_t)(EDX));
  /* 10ee817f call 0x10ee57c0 */
  push32(0x10ee8184u); f_10ee57c0();
  /* 10ee8184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8187 mov eax, dword ptr [0x10f0f7c8] */
  EAX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ee818c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ee818f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10ee8195 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8196 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8199 push edx */
  push32((uint32_t)(EDX));
  /* 10ee819a call 0x10edfe30 */
  push32(0x10ee819fu); f_10edfe30();
  /* 10ee819f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee81a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee81a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee81a8 mov dword ptr [ecx + 0x10f0d854], eax */
  w32((uint32_t)(ECX + 0x10f0d854), (EAX));
  /* 10ee81ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10ee81b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee81ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee81bd mov dword ptr [eax*4 + 0x10f0f7b0], edx */
  w32((uint32_t)(EAX*4 + 0x10f0f7b0), (EDX));
  /* 10ee81c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10ee81c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10ee81cc push ecx */
  push32((uint32_t)(ECX));
  /* 10ee81cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee81d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee81d3 add edx, 0x10f0f7f4 */
  { uint32_t _a=(EDX),_b=(0x10f0f7f4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee81d9 push edx */
  push32((uint32_t)(EDX));
  /* 10ee81da call 0x10ee57c0 */
  push32(0x10ee81dfu); f_10ee57c0();
  /* 10ee81df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee81e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee81e6 jne 0x10ee81f3 */
  if (!C.zf) goto L_10ee81f3;
  /* 10ee81e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee81ee mov dword ptr [0x10f0f7c8], eax */
  w32((uint32_t)(0x10f0f7c8), (EAX));
L_10ee81f3:;
  /* 10ee81f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee81f7 jne 0x10ee8205 */
  if (!C.zf) goto L_10ee8205;
  /* 10ee81f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10ee81ff mov dword ptr [0x10f0f7cc], ecx */
  w32((uint32_t)(0x10f0f7cc), (ECX));
L_10ee8205:;
  /* 10ee8205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8208 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee820b call dword ptr [edx + 0x10f0d858] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10f0d858))), 0x10ee8211u);
  /* 10ee8211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8213 je 0x10ee824c */
  if (C.zf) goto L_10ee824c;
  /* 10ee8215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8218 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee821b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee821e mov dword ptr [eax + 0x10f0d854], ecx */
  w32((uint32_t)(EAX + 0x10f0d854), (ECX));
  /* 10ee8224 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee8226 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8229 push edx */
  push32((uint32_t)(EDX));
  /* 10ee822a call 0x10edc1b0 */
  push32(0x10ee822fu); f_10edc1b0();
  /* 10ee822f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8235 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8238 mov dword ptr [eax*4 + 0x10f0f7b0], ecx */
  w32((uint32_t)(EAX*4 + 0x10f0f7b0), (ECX));
  /* 10ee823f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee8242 mov dword ptr [0x10f0f7c8], edx */
  w32((uint32_t)(0x10f0f7c8), (EDX));
  /* 10ee8248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee824a jmp 0x10ee826f */
  goto L_10ee826f;
L_10ee824c:;
  /* 10ee824c cmp dword ptr [ebp - 0xc], 0x10f0d744 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10f0d744u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8253 je 0x10ee8263 */
  if (C.zf) goto L_10ee8263;
  /* 10ee8255 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee8257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee825a push eax */
  push32((uint32_t)(EAX));
  /* 10ee825b call 0x10edc1b0 */
  push32(0x10ee8260u); f_10edc1b0();
  /* 10ee8260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee8263:;
  /* 10ee8263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8266 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee8269 mov eax, dword ptr [ecx + 0x10f0d854] */
  EAX = (r32((uint32_t)(ECX + 0x10f0d854)));
L_10ee826f:;
  /* 10ee826f mov esp, ebp */
  ESP = (EBP);
  /* 10ee8271 pop ebp */
  EBP = (pop32());
  /* 10ee8272 ret  */
  ESPCHK(0x10ee80e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018280 @ 0x10ee8280 (256 bytes, 72 insns) */
void f_10ee8280(void) {
  FTRACE(0x10ee8280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8280 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8281 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8286 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10ee828d cmp dword ptr [0x10f0d854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0d854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8294 jne 0x10ee82b4 */
  if (!C.zf) goto L_10ee82b4;
  /* 10ee8296 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10ee829b push 0x10f0a2ac */
  push32((uint32_t)(0x10f0a2acu));
  /* 10ee82a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee82a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10ee82a7 call 0x10edb720 */
  push32(0x10ee82acu); f_10edb720();
  /* 10ee82ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee82af mov dword ptr [0x10f0d854], eax */
  w32((uint32_t)(0x10f0d854), (EAX));
L_10ee82b4:;
  /* 10ee82b4 mov eax, dword ptr [0x10f0d854] */
  EAX = (r32((uint32_t)(0x10f0d854)));
  /* 10ee82b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10ee82bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee82c3 jmp 0x10ee82ce */
  goto L_10ee82ce;
L_10ee82c5:;
  /* 10ee82c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee82c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee82cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee82ce:;
  /* 10ee82ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee82d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee82d4 mov eax, dword ptr [edx + 0x10f0d854] */
  EAX = (r32((uint32_t)(EDX + 0x10f0d854)));
  /* 10ee82da push eax */
  push32((uint32_t)(EAX));
  /* 10ee82db push 0x10f0a2b8 */
  push32((uint32_t)(0x10f0a2b8u));
  /* 10ee82e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee82e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee82e6 mov edx, dword ptr [ecx + 0x10f0d850] */
  EDX = (r32((uint32_t)(ECX + 0x10f0d850)));
  /* 10ee82ec push edx */
  push32((uint32_t)(EDX));
  /* 10ee82ed push 3 */
  push32((uint32_t)(0x3u));
  /* 10ee82ef mov eax, dword ptr [0x10f0d854] */
  EAX = (r32((uint32_t)(0x10f0d854)));
  /* 10ee82f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ee82f5 call 0x10ee8520 */
  push32(0x10ee82fau); f_10ee8520();
  /* 10ee82fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee82fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8301 jge 0x10ee8349 */
  if ((C.sf==C.of)) goto L_10ee8349;
  /* 10ee8303 push 0x10f0a2a4 */
  push32((uint32_t)(0x10f0a2a4u));
  /* 10ee8308 mov ecx, dword ptr [0x10f0d854] */
  ECX = (r32((uint32_t)(0x10f0d854)));
  /* 10ee830e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee830f call 0x10edfe40 */
  push32(0x10ee8314u); f_10edfe40();
  /* 10ee8314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee831a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee831d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee8320 mov eax, dword ptr [edx + 0x10f0d854] */
  EAX = (r32((uint32_t)(EDX + 0x10f0d854)));
  /* 10ee8326 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee832a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee832d mov edx, dword ptr [ecx + 0x10f0d854] */
  EDX = (r32((uint32_t)(ECX + 0x10f0d854)));
  /* 10ee8333 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8334 call 0x10ee42c0 */
  push32(0x10ee8339u); f_10ee42c0();
  /* 10ee8339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee833c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee833e je 0x10ee8347 */
  if (C.zf) goto L_10ee8347;
  /* 10ee8340 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ee8347:;
  /* 10ee8347 jmp 0x10ee8377 */
  goto L_10ee8377;
L_10ee8349:;
  /* 10ee8349 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee834d jne 0x10ee8356 */
  if (!C.zf) goto L_10ee8356;
  /* 10ee834f mov eax, dword ptr [0x10f0d854] */
  EAX = (r32((uint32_t)(0x10f0d854)));
  /* 10ee8354 jmp 0x10ee837c */
  goto L_10ee837c;
L_10ee8356:;
  /* 10ee8356 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee8358 mov eax, dword ptr [0x10f0d854] */
  EAX = (r32((uint32_t)(0x10f0d854)));
  /* 10ee835d push eax */
  push32((uint32_t)(EAX));
  /* 10ee835e call 0x10edc1b0 */
  push32(0x10ee8363u); f_10edc1b0();
  /* 10ee8363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8366 mov dword ptr [0x10f0d854], 0 */
  w32((uint32_t)(0x10f0d854), (0x0u));
  /* 10ee8370 mov eax, dword ptr [0x10f0d86c] */
  EAX = (r32((uint32_t)(0x10f0d86c)));
  /* 10ee8375 jmp 0x10ee837c */
  goto L_10ee837c;
L_10ee8377:;
  /* 10ee8377 jmp 0x10ee82c5 */
  goto L_10ee82c5;
L_10ee837c:;
  /* 10ee837c mov esp, ebp */
  ESP = (EBP);
  /* 10ee837e pop ebp */
  EBP = (pop32());
  /* 10ee837f ret  */
  ESPCHK(0x10ee8280u, _esp0);
  ESP += 4; return;
}

/* FUN_10018380 @ 0x10ee8380 (388 bytes, 115 insns) */
void f_10ee8380(void) {
  FTRACE(0x10ee8380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8380 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8381 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8383 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8389 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee838d jne 0x10ee8396 */
  if (!C.zf) goto L_10ee8396;
  /* 10ee838f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8391 jmp 0x10ee8500 */
  goto L_10ee8500;
L_10ee8396:;
  /* 10ee8396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8399 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee839c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee839f jne 0x10ee83f0 */
  if (!C.zf) goto L_10ee83f0;
  /* 10ee83a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee83a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ee83a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee83aa jne 0x10ee83f0 */
  if (!C.zf) goto L_10ee83f0;
  /* 10ee83ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee83af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10ee83b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee83b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10ee83b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee83bd je 0x10ee83d9 */
  if (C.zf) goto L_10ee83d9;
  /* 10ee83bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee83c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10ee83c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee83ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10ee83d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee83d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10ee83d9:;
  /* 10ee83d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee83dd je 0x10ee83e8 */
  if (C.zf) goto L_10ee83e8;
  /* 10ee83df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee83e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10ee83e8:;
  /* 10ee83e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee83eb jmp 0x10ee8500 */
  goto L_10ee8500;
L_10ee83f0:;
  /* 10ee83f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee83f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee83f4 push 0x10f0d7cc */
  push32((uint32_t)(0x10f0d7ccu));
  /* 10ee83f9 call 0x10ee42c0 */
  push32(0x10ee83feu); f_10ee42c0();
  /* 10ee83fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8403 je 0x10ee84b8 */
  if (C.zf) goto L_10ee84b8;
  /* 10ee8409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee840c push edx */
  push32((uint32_t)(EDX));
  /* 10ee840d push 0x10f0d748 */
  push32((uint32_t)(0x10f0d748u));
  /* 10ee8412 call 0x10ee42c0 */
  push32(0x10ee8417u); f_10ee42c0();
  /* 10ee8417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee841a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee841c je 0x10ee84b8 */
  if (C.zf) goto L_10ee84b8;
  /* 10ee8422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8425 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8426 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10ee842c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee842d call 0x10ee8570 */
  push32(0x10ee8432u); f_10ee8570();
  /* 10ee8432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8437 je 0x10ee8440 */
  if (C.zf) goto L_10ee8440;
  /* 10ee8439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee843b jmp 0x10ee8500 */
  goto L_10ee8500;
L_10ee8440:;
  /* 10ee8440 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10ee8446 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8447 push 0x10f0f7a4 */
  push32((uint32_t)(0x10f0f7a4u));
  /* 10ee844c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10ee8452 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8453 call 0x10eec280 */
  push32(0x10ee8458u); f_10eec280();
  /* 10ee8458 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee845b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee845d jne 0x10ee8466 */
  if (!C.zf) goto L_10ee8466;
  /* 10ee845f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8461 jmp 0x10ee8500 */
  goto L_10ee8500;
L_10ee8466:;
  /* 10ee8466 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee8468 mov cx, word ptr [0x10f0f7a8] */
  CX = (r16((uint32_t)(0x10f0f7a8)));
  /* 10ee846f mov dword ptr [0x10f0f7ac], ecx */
  w32((uint32_t)(0x10f0f7ac), (ECX));
  /* 10ee8475 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10ee847b push edx */
  push32((uint32_t)(EDX));
  /* 10ee847c push 0x10f0d7cc */
  push32((uint32_t)(0x10f0d7ccu));
  /* 10ee8481 call 0x10ee86d0 */
  push32(0x10ee8486u); f_10ee86d0();
  /* 10ee8486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee848c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee848f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee8491 je 0x10ee84a6 */
  if (C.zf) goto L_10ee84a6;
  /* 10ee8493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8496 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8497 push 0x10f0d748 */
  push32((uint32_t)(0x10f0d748u));
  /* 10ee849c call 0x10edfe30 */
  push32(0x10ee84a1u); f_10edfe30();
  /* 10ee84a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee84a4 jmp 0x10ee84b8 */
  goto L_10ee84b8;
L_10ee84a6:;
  /* 10ee84a6 push 0x10f0d7cc */
  push32((uint32_t)(0x10f0d7ccu));
  /* 10ee84ab push 0x10f0d748 */
  push32((uint32_t)(0x10f0d748u));
  /* 10ee84b0 call 0x10edfe30 */
  push32(0x10ee84b5u); f_10edfe30();
  /* 10ee84b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee84b8:;
  /* 10ee84b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee84bc je 0x10ee84d1 */
  if (C.zf) goto L_10ee84d1;
  /* 10ee84be push 6 */
  push32((uint32_t)(0x6u));
  /* 10ee84c0 push 0x10f0f7a4 */
  push32((uint32_t)(0x10f0f7a4u));
  /* 10ee84c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee84c8 push eax */
  push32((uint32_t)(EAX));
  /* 10ee84c9 call 0x10ee57c0 */
  push32(0x10ee84ceu); f_10ee57c0();
  /* 10ee84ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee84d1:;
  /* 10ee84d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee84d5 je 0x10ee84ea */
  if (C.zf) goto L_10ee84ea;
  /* 10ee84d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee84d9 push 0x10f0f7ac */
  push32((uint32_t)(0x10f0f7acu));
  /* 10ee84de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee84e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee84e2 call 0x10ee57c0 */
  push32(0x10ee84e7u); f_10ee57c0();
  /* 10ee84e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee84ea:;
  /* 10ee84ea push 0x10f0d7cc */
  push32((uint32_t)(0x10f0d7ccu));
  /* 10ee84ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee84f2 push edx */
  push32((uint32_t)(EDX));
  /* 10ee84f3 call 0x10edfe30 */
  push32(0x10ee84f8u); f_10edfe30();
  /* 10ee84f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee84fb mov eax, 0x10f0d7cc */
  EAX = (0x10f0d7ccu);
L_10ee8500:;
  /* 10ee8500 mov esp, ebp */
  ESP = (EBP);
  /* 10ee8502 pop ebp */
  EBP = (pop32());
  /* 10ee8503 ret  */
  ESPCHK(0x10ee8380u, _esp0);
  ESP += 4; return;
}

/* FUN_10018510 @ 0x10ee8510 (7 bytes, 5 insns) */
void f_10ee8510(void) {
  FTRACE(0x10ee8510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8510 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8511 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8515 pop ebp */
  EBP = (pop32());
  /* 10ee8516 ret  */
  ESPCHK(0x10ee8510u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10ee8520 (79 bytes, 28 insns) */
void f_10ee8520(void) {
  FTRACE(0x10ee8520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8520 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8521 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8526 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10ee8529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee852c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee8533 jmp 0x10ee853e */
  goto L_10ee853e;
L_10ee8535:;
  /* 10ee8535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee853b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ee853e:;
  /* 10ee853e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8541 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8544 jge 0x10ee8564 */
  if ((C.sf==C.of)) goto L_10ee8564;
  /* 10ee8546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8549 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee854c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee854f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8552 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10ee8555 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8559 push eax */
  push32((uint32_t)(EAX));
  /* 10ee855a call 0x10edfe40 */
  push32(0x10ee855fu); f_10edfe40();
  /* 10ee855f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8562 jmp 0x10ee8535 */
  goto L_10ee8535;
L_10ee8564:;
  /* 10ee8564 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee856b mov esp, ebp */
  ESP = (EBP);
  /* 10ee856d pop ebp */
  EBP = (pop32());
  /* 10ee856e ret  */
  ESPCHK(0x10ee8520u, _esp0);
  ESP += 4; return;
}

/* FUN_10018570 @ 0x10ee8570 (349 bytes, 122 insns) */
void f_10ee8570(void) {
  FTRACE(0x10ee8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8570 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8571 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8576 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10ee857b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee857d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8580 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8581 call 0x10ee1b30 */
  push32(0x10ee8586u); f_10ee1b30();
  /* 10ee8586 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8589 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee858c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee858f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee8591 jne 0x10ee859a */
  if (!C.zf) goto L_10ee859a;
  /* 10ee8593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8595 jmp 0x10ee86c9 */
  goto L_10ee86c9;
L_10ee859a:;
  /* 10ee859a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee859d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee85a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee85a3 jne 0x10ee85d0 */
  if (!C.zf) goto L_10ee85d0;
  /* 10ee85a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee85a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10ee85ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee85ae je 0x10ee85d0 */
  if (C.zf) goto L_10ee85d0;
  /* 10ee85b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee85b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee85b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee85b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee85ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee85c0 push edx */
  push32((uint32_t)(EDX));
  /* 10ee85c1 call 0x10edfe30 */
  push32(0x10ee85c6u); f_10edfe30();
  /* 10ee85c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee85c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee85cb jmp 0x10ee86c9 */
  goto L_10ee86c9;
L_10ee85d0:;
  /* 10ee85d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee85d7 jmp 0x10ee85e2 */
  goto L_10ee85e2;
L_10ee85d9:;
  /* 10ee85d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee85dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee85df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee85e2:;
  /* 10ee85e2 push 0x10f0a2bc */
  push32((uint32_t)(0x10f0a2bcu));
  /* 10ee85e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee85ea push ecx */
  push32((uint32_t)(ECX));
  /* 10ee85eb call 0x10eec1c0 */
  push32(0x10ee85f0u); f_10eec1c0();
  /* 10ee85f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee85f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee85f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee85fa jne 0x10ee8604 */
  if (!C.zf) goto L_10ee8604;
  /* 10ee85fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee85ff jmp 0x10ee86c9 */
  goto L_10ee86c9;
L_10ee8604:;
  /* 10ee8604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8607 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee860a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee860c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10ee860f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8613 jne 0x10ee863a */
  if (!C.zf) goto L_10ee863a;
  /* 10ee8615 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8619 jge 0x10ee863a */
  if ((C.sf==C.of)) goto L_10ee863a;
  /* 10ee861b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ee861f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8622 je 0x10ee863a */
  if (C.zf) goto L_10ee863a;
  /* 10ee8624 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee8627 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee862b push eax */
  push32((uint32_t)(EAX));
  /* 10ee862c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee862f push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8630 call 0x10ee06a0 */
  push32(0x10ee8635u); f_10ee06a0();
  /* 10ee8635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8638 jmp 0x10ee86a0 */
  goto L_10ee86a0;
L_10ee863a:;
  /* 10ee863a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee863e jne 0x10ee8668 */
  if (!C.zf) goto L_10ee8668;
  /* 10ee8640 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8644 jge 0x10ee8668 */
  if ((C.sf==C.of)) goto L_10ee8668;
  /* 10ee8646 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ee864a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee864d je 0x10ee8668 */
  if (C.zf) goto L_10ee8668;
  /* 10ee864f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee8652 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8656 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee865a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee865d push edx */
  push32((uint32_t)(EDX));
  /* 10ee865e call 0x10ee06a0 */
  push32(0x10ee8663u); f_10ee06a0();
  /* 10ee8663 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8666 jmp 0x10ee86a0 */
  goto L_10ee86a0;
L_10ee8668:;
  /* 10ee8668 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee866c jne 0x10ee869b */
  if (!C.zf) goto L_10ee869b;
  /* 10ee866e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ee8672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8674 je 0x10ee867f */
  if (C.zf) goto L_10ee867f;
  /* 10ee8676 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ee867a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee867d jne 0x10ee869b */
  if (!C.zf) goto L_10ee869b;
L_10ee867f:;
  /* 10ee867f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee8682 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8686 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee868a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8690 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8691 call 0x10ee06a0 */
  push32(0x10ee8696u); f_10ee06a0();
  /* 10ee8696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8699 jmp 0x10ee86a0 */
  goto L_10ee86a0;
L_10ee869b:;
  /* 10ee869b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee869e jmp 0x10ee86c9 */
  goto L_10ee86c9;
L_10ee86a0:;
  /* 10ee86a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ee86a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee86a7 jne 0x10ee86ab */
  if (!C.zf) goto L_10ee86ab;
  /* 10ee86a9 jmp 0x10ee86c7 */
  goto L_10ee86c7;
L_10ee86ab:;
  /* 10ee86ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10ee86af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee86b1 jne 0x10ee86b5 */
  if (!C.zf) goto L_10ee86b5;
  /* 10ee86b3 jmp 0x10ee86c7 */
  goto L_10ee86c7;
L_10ee86b5:;
  /* 10ee86b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ee86b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee86bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10ee86bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ee86c2 jmp 0x10ee85d9 */
  goto L_10ee85d9;
L_10ee86c7:;
  /* 10ee86c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee86c9:;
  /* 10ee86c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ee86cb pop ebp */
  EBP = (pop32());
  /* 10ee86cc ret  */
  ESPCHK(0x10ee8570u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10ee86d0 (101 bytes, 36 insns) */
void f_10ee86d0(void) {
  FTRACE(0x10ee86d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee86d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee86d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee86d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee86d6 push eax */
  push32((uint32_t)(EAX));
  /* 10ee86d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee86da push ecx */
  push32((uint32_t)(ECX));
  /* 10ee86db call 0x10edfe30 */
  push32(0x10ee86e0u); f_10edfe30();
  /* 10ee86e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee86e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee86e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10ee86ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee86ec je 0x10ee8708 */
  if (C.zf) goto L_10ee8708;
  /* 10ee86ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee86f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee86f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee86f5 push 0x10f0a2c4 */
  push32((uint32_t)(0x10f0a2c4u));
  /* 10ee86fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee86fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee86ff push edx */
  push32((uint32_t)(EDX));
  /* 10ee8700 call 0x10ee8520 */
  push32(0x10ee8705u); f_10ee8520();
  /* 10ee8705 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee8708:;
  /* 10ee8708 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee870b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10ee8712 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee8714 je 0x10ee8733 */
  if (C.zf) goto L_10ee8733;
  /* 10ee8716 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8719 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee871f push edx */
  push32((uint32_t)(EDX));
  /* 10ee8720 push 0x10f0a2c0 */
  push32((uint32_t)(0x10f0a2c0u));
  /* 10ee8725 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ee8727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee872a push eax */
  push32((uint32_t)(EAX));
  /* 10ee872b call 0x10ee8520 */
  push32(0x10ee8730u); f_10ee8520();
  /* 10ee8730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee8733:;
  /* 10ee8733 pop ebp */
  EBP = (pop32());
  /* 10ee8734 ret  */
  ESPCHK(0x10ee86d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018740 @ 0x10ee8740 (727 bytes, 263 insns) */
void f_10ee8740(void) {
  FTRACE(0x10ee8740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8740 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8741 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8743 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ee8745 push 0x10f0a2c8 */
  push32((uint32_t)(0x10f0a2c8u));
  /* 10ee874a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ee874f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ee8755 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8756 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ee875d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8760 push ebx */
  push32((uint32_t)(EBX));
  /* 10ee8761 push esi */
  push32((uint32_t)(ESI));
  /* 10ee8762 push edi */
  push32((uint32_t)(EDI));
  /* 10ee8763 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ee8766 cmp dword ptr [0x10f0f7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee876d jne 0x10ee87c6 */
  if (!C.zf) goto L_10ee87c6;
  /* 10ee876f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee8771 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee8773 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee8775 push 0x10f0a254 */
  push32((uint32_t)(0x10f0a254u));
  /* 10ee877a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee877f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee8781 call dword ptr [0x10f12354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12354))), 0x10ee8787u);
  /* 10ee8787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8789 je 0x10ee8797 */
  if (C.zf) goto L_10ee8797;
  /* 10ee878b mov dword ptr [0x10f0f7d0], 1 */
  w32((uint32_t)(0x10f0f7d0), (0x1u));
  /* 10ee8795 jmp 0x10ee87c6 */
  goto L_10ee87c6;
L_10ee8797:;
  /* 10ee8797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee8799 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee879b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee879d push 0x10f0a250 */
  push32((uint32_t)(0x10f0a250u));
  /* 10ee87a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10ee87a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee87a9 call dword ptr [0x10f12358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12358))), 0x10ee87afu);
  /* 10ee87af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee87b1 je 0x10ee87bf */
  if (C.zf) goto L_10ee87bf;
  /* 10ee87b3 mov dword ptr [0x10f0f7d0], 2 */
  w32((uint32_t)(0x10f0f7d0), (0x2u));
  /* 10ee87bd jmp 0x10ee87c6 */
  goto L_10ee87c6;
L_10ee87bf:;
  /* 10ee87bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee87c1 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee87c6:;
  /* 10ee87c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee87ca jle 0x10ee87df */
  if ((C.zf||C.sf!=C.of)) goto L_10ee87df;
  /* 10ee87cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee87cf push eax */
  push32((uint32_t)(EAX));
  /* 10ee87d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee87d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee87d4 call 0x10ee8a50 */
  push32(0x10ee87d9u); f_10ee8a50();
  /* 10ee87d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee87dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10ee87df:;
  /* 10ee87df cmp dword ptr [0x10f0f7d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee87e6 jne 0x10ee880b */
  if (!C.zf) goto L_10ee880b;
  /* 10ee87e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee87eb push edx */
  push32((uint32_t)(EDX));
  /* 10ee87ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee87ef push eax */
  push32((uint32_t)(EAX));
  /* 10ee87f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee87f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee87f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee87f7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee87f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee87fb push eax */
  push32((uint32_t)(EAX));
  /* 10ee87fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee87ff push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8800 call dword ptr [0x10f12358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12358))), 0x10ee8806u);
  /* 10ee8806 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee880b:;
  /* 10ee880b cmp dword ptr [0x10f0f7d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8812 jne 0x10ee8a2f */
  if (!C.zf) goto L_10ee8a2f;
  /* 10ee8818 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee881c jne 0x10ee8827 */
  if (!C.zf) goto L_10ee8827;
  /* 10ee881e mov edx, dword ptr [0x10f0f7c8] */
  EDX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10ee8824 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10ee8827:;
  /* 10ee8827 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee8829 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee882b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee882e push eax */
  push32((uint32_t)(EAX));
  /* 10ee882f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8832 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8833 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10ee8836 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8838 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee883a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee883d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8840 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8841 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee8844 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8845 call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10ee884bu);
  /* 10ee884b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ee884e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8852 jne 0x10ee885b */
  if (!C.zf) goto L_10ee885b;
  /* 10ee8854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8856 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee885b:;
  /* 10ee885b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee8862 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee8865 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee8867 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee886a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ee886c call 0x10ee0020 */
  push32(0x10ee8871u); f_10ee0020();
  /* 10ee8871 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10ee8874 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ee8877 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee887a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee887d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ee8884 jmp 0x10ee889d */
  goto L_10ee889d;
  /* 10ee8886 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee888b ret  */
  ESPCHK(0x10ee8740u, _esp0);
  ESP += 4; return;
  /* 10ee888c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee888f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10ee8896 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ee889d:;
  /* 10ee889d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee88a1 jne 0x10ee88aa */
  if (!C.zf) goto L_10ee88aa;
  /* 10ee88a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee88a5 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee88aa:;
  /* 10ee88aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee88ad push edx */
  push32((uint32_t)(EDX));
  /* 10ee88ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee88b1 push eax */
  push32((uint32_t)(EAX));
  /* 10ee88b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee88b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee88b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee88b9 push edx */
  push32((uint32_t)(EDX));
  /* 10ee88ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee88bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee88bf push eax */
  push32((uint32_t)(EAX));
  /* 10ee88c0 call dword ptr [0x10f12368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12368))), 0x10ee88c6u);
  /* 10ee88c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee88c8 jne 0x10ee88d1 */
  if (!C.zf) goto L_10ee88d1;
  /* 10ee88ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee88cc jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee88d1:;
  /* 10ee88d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee88d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee88d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee88d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee88d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee88dc push edx */
  push32((uint32_t)(EDX));
  /* 10ee88dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee88e0 push eax */
  push32((uint32_t)(EAX));
  /* 10ee88e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee88e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee88e5 call dword ptr [0x10f12354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12354))), 0x10ee88ebu);
  /* 10ee88eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee88ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee88f2 jne 0x10ee88fb */
  if (!C.zf) goto L_10ee88fb;
  /* 10ee88f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee88f6 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee88fb:;
  /* 10ee88fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee88fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee8904 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee8906 je 0x10ee894b */
  if (C.zf) goto L_10ee894b;
  /* 10ee8908 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee890c je 0x10ee8946 */
  if (C.zf) goto L_10ee8946;
  /* 10ee890e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee8911 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8914 jle 0x10ee891d */
  if ((C.zf||C.sf!=C.of)) goto L_10ee891d;
  /* 10ee8916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8918 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee891d:;
  /* 10ee891d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee8920 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8921 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee8924 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8925 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee8928 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8929 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee892c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee892d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8930 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8934 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8935 call dword ptr [0x10f12354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12354))), 0x10ee893bu);
  /* 10ee893b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee893d jne 0x10ee8946 */
  if (!C.zf) goto L_10ee8946;
  /* 10ee893f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8941 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee8946:;
  /* 10ee8946 jmp 0x10ee8a2a */
  goto L_10ee8a2a;
L_10ee894b:;
  /* 10ee894b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee894e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10ee8951 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10ee8958 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee895b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10ee895d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8960 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10ee8962 call 0x10ee0020 */
  push32(0x10ee8967u); f_10ee0020();
  /* 10ee8967 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10ee896a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ee896d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee8970 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10ee8973 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ee897a jmp 0x10ee8993 */
  goto L_10ee8993;
  /* 10ee897c mov eax, 1 */
  EAX = (0x1u);
  /* 10ee8981 ret  */
  ESPCHK(0x10ee8740u, _esp0);
  ESP += 4; return;
  /* 10ee8982 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ee8985 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10ee898c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10ee8993:;
  /* 10ee8993 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8997 jne 0x10ee89a0 */
  if (!C.zf) goto L_10ee89a0;
  /* 10ee8999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee899b jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee89a0:;
  /* 10ee89a0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee89a3 push eax */
  push32((uint32_t)(EAX));
  /* 10ee89a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee89a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee89a8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee89ab push edx */
  push32((uint32_t)(EDX));
  /* 10ee89ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee89af push eax */
  push32((uint32_t)(EAX));
  /* 10ee89b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee89b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee89b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee89b7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee89b8 call dword ptr [0x10f12354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12354))), 0x10ee89beu);
  /* 10ee89be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee89c0 jne 0x10ee89c6 */
  if (!C.zf) goto L_10ee89c6;
  /* 10ee89c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee89c4 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee89c6:;
  /* 10ee89c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee89ca jne 0x10ee89fa */
  if (!C.zf) goto L_10ee89fa;
  /* 10ee89cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee89ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee89d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee89d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee89d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee89d7 push eax */
  push32((uint32_t)(EAX));
  /* 10ee89d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee89db push ecx */
  push32((uint32_t)(ECX));
  /* 10ee89dc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ee89e1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee89e4 push edx */
  push32((uint32_t)(EDX));
  /* 10ee89e5 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10ee89ebu);
  /* 10ee89eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee89ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee89f2 jne 0x10ee89f8 */
  if (!C.zf) goto L_10ee89f8;
  /* 10ee89f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee89f6 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee89f8:;
  /* 10ee89f8 jmp 0x10ee8a2a */
  goto L_10ee8a2a;
L_10ee89fa:;
  /* 10ee89fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee89fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee89fe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee8a01 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8a02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee8a05 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8a06 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee8a09 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8a0a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ee8a0d push eax */
  push32((uint32_t)(EAX));
  /* 10ee8a0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10ee8a13 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ee8a16 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8a17 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10ee8a1du);
  /* 10ee8a1d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ee8a20 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8a24 jne 0x10ee8a2a */
  if (!C.zf) goto L_10ee8a2a;
  /* 10ee8a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8a28 jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee8a2a:;
  /* 10ee8a2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ee8a2d jmp 0x10ee8a31 */
  goto L_10ee8a31;
L_10ee8a2f:;
  /* 10ee8a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10ee8a31:;
  /* 10ee8a31 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10ee8a34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee8a37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ee8a3e pop edi */
  EDI = (pop32());
  /* 10ee8a3f pop esi */
  ESI = (pop32());
  /* 10ee8a40 pop ebx */
  EBX = (pop32());
  /* 10ee8a41 mov esp, ebp */
  ESP = (EBP);
  /* 10ee8a43 pop ebp */
  EBP = (pop32());
  /* 10ee8a44 ret  */
  ESPCHK(0x10ee8740u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a50 @ 0x10ee8a50 (80 bytes, 32 insns) */
void f_10ee8a50(void) {
  FTRACE(0x10ee8a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8a51 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8a56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8a59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee8a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee8a62:;
  /* 10ee8a62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8a65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8a68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8a6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee8a6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee8a70 je 0x10ee8a87 */
  if (C.zf) goto L_10ee8a87;
  /* 10ee8a72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8a75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee8a78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee8a7a je 0x10ee8a87 */
  if (C.zf) goto L_10ee8a87;
  /* 10ee8a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8a7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8a82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee8a85 jmp 0x10ee8a62 */
  goto L_10ee8a62;
L_10ee8a87:;
  /* 10ee8a87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8a8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee8a8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee8a8f jne 0x10ee8a99 */
  if (!C.zf) goto L_10ee8a99;
  /* 10ee8a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8a94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8a97 jmp 0x10ee8a9c */
  goto L_10ee8a9c;
L_10ee8a99:;
  /* 10ee8a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10ee8a9c:;
  /* 10ee8a9c mov esp, ebp */
  ESP = (EBP);
  /* 10ee8a9e pop ebp */
  EBP = (pop32());
  /* 10ee8a9f ret  */
  ESPCHK(0x10ee8a50u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x10ee8aa0 (62 bytes, 23 insns) */
void f_10ee8aa0(void) {
  FTRACE(0x10ee8aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8aa6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee8aad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8ab0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8ab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee8ab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8ab9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8abc jb 0x10ee8ac6 */
  if (C.cf) goto L_10ee8ac6;
  /* 10ee8abe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8ac1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8ac4 jae 0x10ee8acf */
  if (!C.cf) goto L_10ee8acf;
L_10ee8ac6:;
  /* 10ee8ac6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8ac9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8acc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10ee8acf:;
  /* 10ee8acf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8ad2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8ad5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee8ad7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee8ada mov esp, ebp */
  ESP = (EBP);
  /* 10ee8adc pop ebp */
  EBP = (pop32());
  /* 10ee8add ret  */
  ESPCHK(0x10ee8aa0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x10ee8ae0 (173 bytes, 66 insns) */
void f_10ee8ae0(void) {
  FTRACE(0x10ee8ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8ae9 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8aea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8aed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee8aef push edx */
  push32((uint32_t)(EDX));
  /* 10ee8af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8af3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee8af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8af6 call 0x10ee8aa0 */
  push32(0x10ee8afbu); f_10ee8aa0();
  /* 10ee8afb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8afe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee8b01 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8b05 je 0x10ee8b37 */
  if (C.zf) goto L_10ee8b37;
  /* 10ee8b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b0a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b0d push edx */
  push32((uint32_t)(EDX));
  /* 10ee8b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee8b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b13 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee8b16 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8b17 call 0x10ee8aa0 */
  push32(0x10ee8b1cu); f_10ee8aa0();
  /* 10ee8b1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b1f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee8b22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8b26 je 0x10ee8b37 */
  if (C.zf) goto L_10ee8b37;
  /* 10ee8b28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b2b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee8b2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b34 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_10ee8b37:;
  /* 10ee8b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b3a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b3d push edx */
  push32((uint32_t)(EDX));
  /* 10ee8b3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8b41 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ee8b44 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee8b4b push eax */
  push32((uint32_t)(EAX));
  /* 10ee8b4c call 0x10ee8aa0 */
  push32(0x10ee8b51u); f_10ee8aa0();
  /* 10ee8b51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee8b57 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8b5b je 0x10ee8b6c */
  if (C.zf) goto L_10ee8b6c;
  /* 10ee8b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b60 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee8b63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b69 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10ee8b6c:;
  /* 10ee8b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b72 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8b73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8b76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee8b79 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8b7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee8b80 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8b81 call 0x10ee8aa0 */
  push32(0x10ee8b86u); f_10ee8aa0();
  /* 10ee8b86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8b89 mov esp, ebp */
  ESP = (EBP);
  /* 10ee8b8b pop ebp */
  EBP = (pop32());
  /* 10ee8b8c ret  */
  ESPCHK(0x10ee8ae0u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x10ee8b90 (96 bytes, 37 insns) */
void f_10ee8b90(void) {
  FTRACE(0x10ee8b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8b91 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8b99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee8b9b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee8ba1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8ba3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8ba5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8ba7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee8baa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bad mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee8bb0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8bb5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8bb7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8bb9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8bbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee8bbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee8bc3 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee8bc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee8bca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bcd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee8bd0 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee8bd2 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee8bd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bd8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee8bdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bde mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee8be1 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee8be3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee8be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8be9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee8bec mov esp, ebp */
  ESP = (EBP);
  /* 10ee8bee pop ebp */
  EBP = (pop32());
  /* 10ee8bef ret  */
  ESPCHK(0x10ee8b90u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x10ee8bf0 (99 bytes, 37 insns) */
void f_10ee8bf0(void) {
  FTRACE(0x10ee8bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8bf9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ee8bfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee8bff neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8c01 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8c03 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee8c09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee8c0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee8c12 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8c15 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee8c17 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8c19 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8c1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee8c21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c24 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ee8c27 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee8c29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee8c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee8c35 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee8c37 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee8c3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c3d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee8c40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee8c45 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10ee8c47 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10ee8c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee8c4f mov esp, ebp */
  ESP = (EBP);
  /* 10ee8c51 pop ebp */
  EBP = (pop32());
  /* 10ee8c52 ret  */
  ESPCHK(0x10ee8bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c60 @ 0x10ee8c60 (315 bytes, 101 insns) */
void f_10ee8c60(void) {
  FTRACE(0x10ee8c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8c61 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8c66 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 10ee8c6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8c6f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ee8c75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8c78 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10ee8c7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8c82 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10ee8c89 jmp 0x10ee8c9d */
  goto L_10ee8c9d;
L_10ee8c8b:;
  /* 10ee8c8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee8c8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8c91 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10ee8c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8c97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8c9a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ee8c9d:;
  /* 10ee8c9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8ca1 jbe 0x10ee8d17 */
  if ((C.cf||C.zf)) goto L_10ee8d17;
  /* 10ee8ca3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8ca6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ee8ca8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee8cab mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ee8cae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee8cb1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee8cb4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee8cb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8cba push eax */
  push32((uint32_t)(EAX));
  /* 10ee8cbb call 0x10ee8b90 */
  push32(0x10ee8cc0u); f_10ee8b90();
  /* 10ee8cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8cc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8cc7 call 0x10ee8b90 */
  push32(0x10ee8cccu); f_10ee8b90();
  /* 10ee8ccc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8ccf lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ee8cd2 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8cd3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8cd6 push eax */
  push32((uint32_t)(EAX));
  /* 10ee8cd7 call 0x10ee8ae0 */
  push32(0x10ee8cdcu); f_10ee8ae0();
  /* 10ee8cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8cdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8ce3 call 0x10ee8b90 */
  push32(0x10ee8ce8u); f_10ee8b90();
  /* 10ee8ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8ceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee8cee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee8cf1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ee8cf4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee8cfb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ee8d02 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ee8d05 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8d06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d09 push edx */
  push32((uint32_t)(EDX));
  /* 10ee8d0a call 0x10ee8ae0 */
  push32(0x10ee8d0fu); f_10ee8ae0();
  /* 10ee8d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8d12 jmp 0x10ee8c8b */
  goto L_10ee8c8b;
L_10ee8d17:;
  /* 10ee8d17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d1a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8d1e jne 0x10ee8d63 */
  if (!C.zf) goto L_10ee8d63;
  /* 10ee8d20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee8d26 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 10ee8d29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10ee8d2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10ee8d35 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 10ee8d38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d3b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ee8d3d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 10ee8d40 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee8d42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d45 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10ee8d48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ee8d4d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 10ee8d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10ee8d55 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 10ee8d59 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10ee8d5d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 10ee8d61 jmp 0x10ee8d17 */
  goto L_10ee8d17;
L_10ee8d63:;
  /* 10ee8d63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d66 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10ee8d69 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee8d6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ee8d70 jne 0x10ee8d8c */
  if (!C.zf) goto L_10ee8d8c;
  /* 10ee8d72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d75 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee8d76 call 0x10ee8b90 */
  push32(0x10ee8d7bu); f_10ee8b90();
  /* 10ee8d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8d7e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 10ee8d82 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10ee8d86 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 10ee8d8a jmp 0x10ee8d63 */
  goto L_10ee8d63;
L_10ee8d8c:;
  /* 10ee8d8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8d8f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 10ee8d93 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 10ee8d97 mov esp, ebp */
  ESP = (EBP);
  /* 10ee8d99 pop ebp */
  EBP = (pop32());
  /* 10ee8d9a ret  */
  ESPCHK(0x10ee8c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10018da0 @ 0x10ee8da0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_10ee8da0(void) {
  FTRACE(0x10ee8da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee8da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee8da1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee8da3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8da9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10ee8dac mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 10ee8daf mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ee8db5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 10ee8dbc mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 10ee8dc3 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 10ee8dca mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee8dd1 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10ee8dd8 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 10ee8ddf mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 10ee8de6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ee8ded mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 10ee8df4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 10ee8dfb mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10ee8e02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee8e05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee8e08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e0b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10ee8e0e jmp 0x10ee8e19 */
  goto L_10ee8e19;
L_10ee8e10:;
  /* 10ee8e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8e16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee8e19:;
  /* 10ee8e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee8e1f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e22 je 0x10ee8e45 */
  if (C.zf) goto L_10ee8e45;
  /* 10ee8e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee8e2a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e2d je 0x10ee8e45 */
  if (C.zf) goto L_10ee8e45;
  /* 10ee8e2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10ee8e35 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e38 je 0x10ee8e45 */
  if (C.zf) goto L_10ee8e45;
  /* 10ee8e3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e3d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee8e40 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e43 jne 0x10ee8e47 */
  if (!C.zf) goto L_10ee8e47;
L_10ee8e45:;
  /* 10ee8e45 jmp 0x10ee8e10 */
  goto L_10ee8e10;
L_10ee8e47:;
  /* 10ee8e47 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e4b je 0x10ee95a8 */
  if (C.zf) goto L_10ee95a8;
  /* 10ee8e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee8e56 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 10ee8e59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee8e5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee8e62 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10ee8e65 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 10ee8e68 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e6c ja 0x10ee95a3 */
  if ((!C.cf&&!C.zf)) goto L_10ee95a3;
  /* 10ee8e72 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 10ee8e75 jmp dword ptr [ecx*4 + 0x10ee97ba] */
  switch (ECX) {
    case 0: goto L_10ee8e7c;
    case 1: goto L_10ee8f1a;
    case 2: goto L_10ee8fd0;
    case 3: goto L_10ee903b;
    case 4: goto L_10ee9153;
    case 5: goto L_10ee9285;
    case 6: goto L_10ee92fb;
    case 7: goto L_10ee93e0;
    case 8: goto L_10ee9382;
    case 9: goto L_10ee9433;
    case 10: goto L_10ee95a3;
    case 11: goto L_10ee953f;
    case 12: goto L_10ee8fa9;
    case 13: goto L_10ee8f97;
    case 14: goto L_10ee8fa0;
    case 15: goto L_10ee8fbb;
    default: x86_unimpl("switch@0x10ee8e75 out of table"); return;
  }
L_10ee8e7c:;
  /* 10ee8e7c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8e80 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e83 jl 0x10ee8ea0 */
  if ((C.sf!=C.of)) goto L_10ee8ea0;
  /* 10ee8e85 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8e89 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8e8c jg 0x10ee8ea0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee8ea0;
  /* 10ee8e8e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 10ee8e95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8e98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8e9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee8e9e jmp 0x10ee8f15 */
  goto L_10ee8f15;
L_10ee8ea0:;
  /* 10ee8ea0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8ea4 movsx eax, byte ptr [0x10f0cfe4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0cfe4))));
  /* 10ee8eab cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8ead jne 0x10ee8eb8 */
  if (!C.zf) goto L_10ee8eb8;
  /* 10ee8eaf mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 10ee8eb6 jmp 0x10ee8f15 */
  goto L_10ee8f15;
L_10ee8eb8:;
  /* 10ee8eb8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 10ee8ebb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 10ee8ec1 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee8ec8 je 0x10ee8ee7 */
  if (C.zf) goto L_10ee8ee7;
  /* 10ee8eca cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee8ed1 je 0x10ee8ef6 */
  if (C.zf) goto L_10ee8ef6;
  /* 10ee8ed3 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee8eda je 0x10ee8ede */
  if (C.zf) goto L_10ee8ede;
  /* 10ee8edc jmp 0x10ee8f05 */
  goto L_10ee8f05;
L_10ee8ede:;
  /* 10ee8ede mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 10ee8ee5 jmp 0x10ee8f15 */
  goto L_10ee8f15;
L_10ee8ee7:;
  /* 10ee8ee7 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 10ee8eee mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10ee8ef4 jmp 0x10ee8f15 */
  goto L_10ee8f15;
L_10ee8ef6:;
  /* 10ee8ef6 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 10ee8efd mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 10ee8f03 jmp 0x10ee8f15 */
  goto L_10ee8f15;
L_10ee8f05:;
  /* 10ee8f05 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee8f0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8f0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8f12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee8f15:;
  /* 10ee8f15 jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee8f1a:;
  /* 10ee8f1a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 10ee8f21 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8f25 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8f28 jl 0x10ee8f48 */
  if ((C.sf!=C.of)) goto L_10ee8f48;
  /* 10ee8f2a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8f2e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8f31 jg 0x10ee8f48 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee8f48;
  /* 10ee8f33 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 10ee8f3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8f3d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8f40 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee8f43 jmp 0x10ee8fcb */
  goto L_10ee8fcb;
L_10ee8f48:;
  /* 10ee8f48 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8f4c movsx ecx, byte ptr [0x10f0cfe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0cfe4))));
  /* 10ee8f53 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8f55 jne 0x10ee8f60 */
  if (!C.zf) goto L_10ee8f60;
  /* 10ee8f57 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 10ee8f5e jmp 0x10ee8fcb */
  goto L_10ee8fcb;
L_10ee8f60:;
  /* 10ee8f60 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8f64 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 10ee8f6a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 10ee8f70 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8f73 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 10ee8f79 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8f80 ja 0x10ee8fbb */
  if ((!C.cf&&!C.zf)) goto L_10ee8fbb;
  /* 10ee8f82 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 10ee8f88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee8f8a mov cl, byte ptr [edx + 0x10ee97fa] */
  CL = (r8((uint32_t)(EDX + 0x10ee97fa)));
  /* 10ee8f90 jmp dword ptr [ecx*4 + 0x10ee97ea] */
  switch (ECX) {
    case 0: goto L_10ee8fa9;
    case 1: goto L_10ee8f97;
    case 2: goto L_10ee8fa0;
    case 3: goto L_10ee8fbb;
    default: x86_unimpl("switch@0x10ee8f90 out of table"); return;
  }
L_10ee8f97:;
  /* 10ee8f97 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 10ee8f9e jmp 0x10ee8fcb */
  goto L_10ee8fcb;
L_10ee8fa0:;
  /* 10ee8fa0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 10ee8fa7 jmp 0x10ee8fcb */
  goto L_10ee8fcb;
L_10ee8fa9:;
  /* 10ee8fa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8fac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8faf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee8fb2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 10ee8fb9 jmp 0x10ee8fcb */
  goto L_10ee8fcb;
L_10ee8fbb:;
  /* 10ee8fbb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee8fc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8fc5 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8fc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee8fcb:;
  /* 10ee8fcb jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee8fd0:;
  /* 10ee8fd0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8fd4 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8fd7 jl 0x10ee8ff4 */
  if ((C.sf!=C.of)) goto L_10ee8ff4;
  /* 10ee8fd9 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8fdd cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee8fe0 jg 0x10ee8ff4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee8ff4;
  /* 10ee8fe2 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 10ee8fe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee8fec sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee8fef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee8ff2 jmp 0x10ee9036 */
  goto L_10ee9036;
L_10ee8ff4:;
  /* 10ee8ff4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee8ff8 movsx eax, byte ptr [0x10f0cfe4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0cfe4))));
  /* 10ee8fff cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9001 jne 0x10ee900c */
  if (!C.zf) goto L_10ee900c;
  /* 10ee9003 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 10ee900a jmp 0x10ee9036 */
  goto L_10ee9036;
L_10ee900c:;
  /* 10ee900c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 10ee900f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 10ee9015 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee901c je 0x10ee9020 */
  if (C.zf) goto L_10ee9020;
  /* 10ee901e jmp 0x10ee9029 */
  goto L_10ee9029;
L_10ee9020:;
  /* 10ee9020 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 10ee9027 jmp 0x10ee9036 */
  goto L_10ee9036;
L_10ee9029:;
  /* 10ee9029 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee9030 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ee9033 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee9036:;
  /* 10ee9036 jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee903b:;
  /* 10ee903b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 10ee9042 jmp 0x10ee9055 */
  goto L_10ee9055;
L_10ee9044:;
  /* 10ee9044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9047 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee9049 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 10ee904c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee904f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9052 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee9055:;
  /* 10ee9055 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee905c jle 0x10ee9079 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9079;
  /* 10ee905e push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee9060 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee9063 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9068 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9069 call 0x10ee0dc0 */
  push32(0x10ee906eu); f_10ee0dc0();
  /* 10ee906e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9071 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10ee9077 jmp 0x10ee9097 */
  goto L_10ee9097;
L_10ee9079:;
  /* 10ee9079 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee907c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9082 mov edx, dword ptr [0x10f0cfec] */
  EDX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee9088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee908a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10ee908e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9091 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_10ee9097:;
  /* 10ee9097 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee909e je 0x10ee90d4 */
  if (C.zf) goto L_10ee90d4;
  /* 10ee90a0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee90a4 jae 0x10ee90c6 */
  if (!C.cf) goto L_10ee90c6;
  /* 10ee90a6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee90a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee90ac mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 10ee90af movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee90b3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee90b6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee90b9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ee90bb mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee90be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee90c1 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10ee90c4 jmp 0x10ee90cf */
  goto L_10ee90cf;
L_10ee90c6:;
  /* 10ee90c6 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee90c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee90cc mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10ee90cf:;
  /* 10ee90cf jmp 0x10ee9044 */
  goto L_10ee9044;
L_10ee90d4:;
  /* 10ee90d4 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee90d8 movsx ecx, byte ptr [0x10f0cfe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0cfe4))));
  /* 10ee90df cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee90e1 jne 0x10ee90ec */
  if (!C.zf) goto L_10ee90ec;
  /* 10ee90e3 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 10ee90ea jmp 0x10ee914e */
  goto L_10ee914e;
L_10ee90ec:;
  /* 10ee90ec movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee90f0 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 10ee90f6 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ee90fc sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee90ff mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10ee9105 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee910c ja 0x10ee913e */
  if ((!C.cf&&!C.zf)) goto L_10ee913e;
  /* 10ee910e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10ee9114 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9116 mov cl, byte ptr [edx + 0x10ee9841] */
  CL = (r8((uint32_t)(EDX + 0x10ee9841)));
  /* 10ee911c jmp dword ptr [ecx*4 + 0x10ee9835] */
  switch (ECX) {
    case 0: goto L_10ee912c;
    case 1: goto L_10ee9123;
    case 2: goto L_10ee913e;
    default: x86_unimpl("switch@0x10ee911c out of table"); return;
  }
L_10ee9123:;
  /* 10ee9123 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 10ee912a jmp 0x10ee914e */
  goto L_10ee914e;
L_10ee912c:;
  /* 10ee912c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee912f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9132 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee9135 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 10ee913c jmp 0x10ee914e */
  goto L_10ee914e;
L_10ee913e:;
  /* 10ee913e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee9145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9148 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee914b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee914e:;
  /* 10ee914e jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee9153:;
  /* 10ee9153 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 10ee915a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10ee9161 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9165 jne 0x10ee918e */
  if (!C.zf) goto L_10ee918e;
  /* 10ee9167 jmp 0x10ee917a */
  goto L_10ee917a;
L_10ee9169:;
  /* 10ee9169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee916c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee916e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 10ee9171 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9174 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9177 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee917a:;
  /* 10ee917a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee917e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9181 jne 0x10ee918e */
  if (!C.zf) goto L_10ee918e;
  /* 10ee9183 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee9186 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9189 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 10ee918c jmp 0x10ee9169 */
  goto L_10ee9169;
L_10ee918e:;
  /* 10ee918e jmp 0x10ee91a1 */
  goto L_10ee91a1;
L_10ee9190:;
  /* 10ee9190 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9193 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee9195 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 10ee9198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee919b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee919e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee91a1:;
  /* 10ee91a1 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee91a8 jle 0x10ee91c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee91c6;
  /* 10ee91aa push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee91ac mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee91af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee91b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee91b6 call 0x10ee0dc0 */
  push32(0x10ee91bbu); f_10ee0dc0();
  /* 10ee91bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee91be mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 10ee91c4 jmp 0x10ee91e3 */
  goto L_10ee91e3;
L_10ee91c6:;
  /* 10ee91c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee91c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee91cf mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee91d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee91d6 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ee91da and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee91dd mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_10ee91e3:;
  /* 10ee91e3 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee91ea je 0x10ee921e */
  if (C.zf) goto L_10ee921e;
  /* 10ee91ec cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee91f0 jae 0x10ee9219 */
  if (!C.cf) goto L_10ee9219;
  /* 10ee91f2 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee91f5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee91f8 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 10ee91fb movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee91ff sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9202 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee9205 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ee9207 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee920a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee920d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 10ee9210 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee9213 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9216 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_10ee9219:;
  /* 10ee9219 jmp 0x10ee9190 */
  goto L_10ee9190;
L_10ee921e:;
  /* 10ee921e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee9222 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10ee9228 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee922e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9231 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 10ee9237 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee923e ja 0x10ee9270 */
  if ((!C.cf&&!C.zf)) goto L_10ee9270;
  /* 10ee9240 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10ee9246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9248 mov al, byte ptr [ecx + 0x10ee9888] */
  AL = (r8((uint32_t)(ECX + 0x10ee9888)));
  /* 10ee924e jmp dword ptr [eax*4 + 0x10ee987c] */
  switch (EAX) {
    case 0: goto L_10ee925e;
    case 1: goto L_10ee9255;
    case 2: goto L_10ee9270;
    default: x86_unimpl("switch@0x10ee924e out of table"); return;
  }
L_10ee9255:;
  /* 10ee9255 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 10ee925c jmp 0x10ee9280 */
  goto L_10ee9280;
L_10ee925e:;
  /* 10ee925e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9261 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9264 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee9267 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 10ee926e jmp 0x10ee9280 */
  goto L_10ee9280;
L_10ee9270:;
  /* 10ee9270 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee9277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee927a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee927d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee9280:;
  /* 10ee9280 jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee9285:;
  /* 10ee9285 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10ee928c cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9293 jle 0x10ee92b1 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee92b1;
  /* 10ee9295 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee9297 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee929a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee92a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee92a1 call 0x10ee0dc0 */
  push32(0x10ee92a6u); f_10ee0dc0();
  /* 10ee92a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee92a9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10ee92af jmp 0x10ee92ce */
  goto L_10ee92ce;
L_10ee92b1:;
  /* 10ee92b1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee92b4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee92ba mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee92bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee92c1 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ee92c5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee92c8 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_10ee92ce:;
  /* 10ee92ce cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee92d5 je 0x10ee92e9 */
  if (C.zf) goto L_10ee92e9;
  /* 10ee92d7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 10ee92de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee92e1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee92e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee92e7 jmp 0x10ee92f6 */
  goto L_10ee92f6;
L_10ee92e9:;
  /* 10ee92e9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee92f0 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ee92f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee92f6:;
  /* 10ee92f6 jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee92fb:;
  /* 10ee92fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee92fe sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9301 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10ee9304 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee9308 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee930b jl 0x10ee9328 */
  if ((C.sf!=C.of)) goto L_10ee9328;
  /* 10ee930d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee9311 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9314 jg 0x10ee9328 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee9328;
  /* 10ee9316 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 10ee931d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9320 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9323 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee9326 jmp 0x10ee937d */
  goto L_10ee937d;
L_10ee9328:;
  /* 10ee9328 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 10ee932b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 10ee9331 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee9338 je 0x10ee9367 */
  if (C.zf) goto L_10ee9367;
  /* 10ee933a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee9341 je 0x10ee9357 */
  if (C.zf) goto L_10ee9357;
  /* 10ee9343 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee934a je 0x10ee934e */
  if (C.zf) goto L_10ee934e;
  /* 10ee934c jmp 0x10ee9370 */
  goto L_10ee9370;
L_10ee934e:;
  /* 10ee934e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 10ee9355 jmp 0x10ee937d */
  goto L_10ee937d;
L_10ee9357:;
  /* 10ee9357 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 10ee935e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 10ee9365 jmp 0x10ee937d */
  goto L_10ee937d;
L_10ee9367:;
  /* 10ee9367 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 10ee936e jmp 0x10ee937d */
  goto L_10ee937d;
L_10ee9370:;
  /* 10ee9370 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee9377 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ee937a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee937d:;
  /* 10ee937d jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee9382:;
  /* 10ee9382 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 10ee9389 jmp 0x10ee939c */
  goto L_10ee939c;
L_10ee938b:;
  /* 10ee938b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee938e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee9390 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 10ee9393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9396 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9399 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee939c:;
  /* 10ee939c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee93a0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee93a3 jne 0x10ee93a7 */
  if (!C.zf) goto L_10ee93a7;
  /* 10ee93a5 jmp 0x10ee938b */
  goto L_10ee938b;
L_10ee93a7:;
  /* 10ee93a7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee93ab cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee93ae jl 0x10ee93cb */
  if ((C.sf!=C.of)) goto L_10ee93cb;
  /* 10ee93b0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee93b4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee93b7 jg 0x10ee93cb */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee93cb;
  /* 10ee93b9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 10ee93c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee93c3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee93c6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee93c9 jmp 0x10ee93db */
  goto L_10ee93db;
L_10ee93cb:;
  /* 10ee93cb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee93d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee93d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee93d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee93db:;
  /* 10ee93db jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee93e0:;
  /* 10ee93e0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee93e4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee93e7 jl 0x10ee9404 */
  if ((C.sf!=C.of)) goto L_10ee9404;
  /* 10ee93e9 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee93ed cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee93f0 jg 0x10ee9404 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee9404;
  /* 10ee93f2 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 10ee93f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee93fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee93ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee9402 jmp 0x10ee942e */
  goto L_10ee942e;
L_10ee9404:;
  /* 10ee9404 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 10ee9407 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 10ee940d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee9414 je 0x10ee9418 */
  if (C.zf) goto L_10ee9418;
  /* 10ee9416 jmp 0x10ee9421 */
  goto L_10ee9421;
L_10ee9418:;
  /* 10ee9418 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 10ee941f jmp 0x10ee942e */
  goto L_10ee942e;
L_10ee9421:;
  /* 10ee9421 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee9428 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ee942b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee942e:;
  /* 10ee942e jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee9433:;
  /* 10ee9433 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 10ee943a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 10ee9441 jmp 0x10ee9454 */
  goto L_10ee9454;
L_10ee9443:;
  /* 10ee9443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9446 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee9448 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 10ee944b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee944e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9451 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee9454:;
  /* 10ee9454 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee945b jle 0x10ee9479 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9479;
  /* 10ee945d push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee945f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee9462 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9468 push edx */
  push32((uint32_t)(EDX));
  /* 10ee9469 call 0x10ee0dc0 */
  push32(0x10ee946eu); f_10ee0dc0();
  /* 10ee946e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9471 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10ee9477 jmp 0x10ee9496 */
  goto L_10ee9496;
L_10ee9479:;
  /* 10ee9479 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee947c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9481 mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee9487 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9489 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ee948d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9490 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_10ee9496:;
  /* 10ee9496 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee949d je 0x10ee94c7 */
  if (C.zf) goto L_10ee94c7;
  /* 10ee949f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ee94a2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee94a5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 10ee94a9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10ee94ad mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 10ee94b0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee94b7 jle 0x10ee94c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee94c2;
  /* 10ee94b9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 10ee94c0 jmp 0x10ee94c7 */
  goto L_10ee94c7;
L_10ee94c2:;
  /* 10ee94c2 jmp 0x10ee9443 */
  goto L_10ee9443;
L_10ee94c7:;
  /* 10ee94c7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10ee94ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee94cd jmp 0x10ee94e0 */
  goto L_10ee94e0;
L_10ee94cf:;
  /* 10ee94cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee94d2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee94d4 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 10ee94d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee94da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee94dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee94e0:;
  /* 10ee94e0 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee94e7 jle 0x10ee9505 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9505;
  /* 10ee94e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee94eb mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee94ee and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee94f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee94f5 call 0x10ee0dc0 */
  push32(0x10ee94fau); f_10ee0dc0();
  /* 10ee94fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee94fd mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10ee9503 jmp 0x10ee9522 */
  goto L_10ee9522;
L_10ee9505:;
  /* 10ee9505 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee9508 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee950e mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee9513 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9515 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10ee9519 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee951c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_10ee9522:;
  /* 10ee9522 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9529 je 0x10ee952d */
  if (C.zf) goto L_10ee952d;
  /* 10ee952b jmp 0x10ee94cf */
  goto L_10ee94cf;
L_10ee952d:;
  /* 10ee952d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee9534 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9537 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee953a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee953d jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee953f:;
  /* 10ee953f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9543 je 0x10ee9593 */
  if (C.zf) goto L_10ee9593;
  /* 10ee9545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9548 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee954b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 10ee954e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 10ee9551 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 10ee9557 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee955e je 0x10ee957b */
  if (C.zf) goto L_10ee957b;
  /* 10ee9560 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ee9567 je 0x10ee956b */
  if (C.zf) goto L_10ee956b;
  /* 10ee9569 jmp 0x10ee9584 */
  goto L_10ee9584;
L_10ee956b:;
  /* 10ee956b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 10ee9572 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 10ee9579 jmp 0x10ee9591 */
  goto L_10ee9591;
L_10ee957b:;
  /* 10ee957b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 10ee9582 jmp 0x10ee9591 */
  goto L_10ee9591;
L_10ee9584:;
  /* 10ee9584 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee958b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ee958e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee9591:;
  /* 10ee9591 jmp 0x10ee95a3 */
  goto L_10ee95a3;
L_10ee9593:;
  /* 10ee9593 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 10ee959a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee959d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee95a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ee95a3:;
  /* 10ee95a3 jmp 0x10ee8e47 */
  goto L_10ee8e47;
L_10ee95a8:;
  /* 10ee95a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee95ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee95ae mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ee95b0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee95b4 je 0x10ee96f7 */
  if (C.zf) goto L_10ee96f7;
  /* 10ee95ba cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee95be jne 0x10ee96f7 */
  if (!C.zf) goto L_10ee96f7;
  /* 10ee95c4 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee95c8 jne 0x10ee96f7 */
  if (!C.zf) goto L_10ee96f7;
  /* 10ee95ce cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee95d2 jbe 0x10ee95ff */
  if ((C.cf||C.zf)) goto L_10ee95ff;
  /* 10ee95d4 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 10ee95d8 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee95db jl 0x10ee95e6 */
  if ((C.sf!=C.of)) goto L_10ee95e6;
  /* 10ee95dd mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 10ee95e0 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee95e3 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_10ee95e6:;
  /* 10ee95e6 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 10ee95ed mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee95f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee95f3 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 10ee95f6 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee95f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee95fc mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_10ee95ff:;
  /* 10ee95ff cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9603 jbe 0x10ee96da */
  if ((C.cf||C.zf)) goto L_10ee96da;
  /* 10ee9609 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee960c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee960f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10ee9612 jmp 0x10ee961d */
  goto L_10ee961d;
L_10ee9614:;
  /* 10ee9614 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee9617 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee961a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_10ee961d:;
  /* 10ee961d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee9620 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee9623 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee9625 jne 0x10ee963b */
  if (!C.zf) goto L_10ee963b;
  /* 10ee9627 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee962a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee962d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 10ee9630 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee9633 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9636 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 10ee9639 jmp 0x10ee9614 */
  goto L_10ee9614;
L_10ee963b:;
  /* 10ee963b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 10ee963e push ecx */
  push32((uint32_t)(ECX));
  /* 10ee963f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee9642 push edx */
  push32((uint32_t)(EDX));
  /* 10ee9643 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10ee9646 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9647 call 0x10ee8c60 */
  push32(0x10ee964cu); f_10ee8c60();
  /* 10ee964c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee964f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9653 jge 0x10ee965d */
  if ((C.sf==C.of)) goto L_10ee965d;
  /* 10ee9655 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee9658 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee965a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ee965d:;
  /* 10ee965d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee9660 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9663 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ee9666 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee966a jne 0x10ee9675 */
  if (!C.zf) goto L_10ee9675;
  /* 10ee966c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee966f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9672 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ee9675:;
  /* 10ee9675 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9679 jne 0x10ee9684 */
  if (!C.zf) goto L_10ee9684;
  /* 10ee967b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee967e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9681 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10ee9684:;
  /* 10ee9684 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee968b jle 0x10ee9696 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9696;
  /* 10ee968d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 10ee9694 jmp 0x10ee96d8 */
  goto L_10ee96d8;
L_10ee9696:;
  /* 10ee9696 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee969d jge 0x10ee96a8 */
  if ((C.sf==C.of)) goto L_10ee96a8;
  /* 10ee969f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 10ee96a6 jmp 0x10ee96d8 */
  goto L_10ee96d8;
L_10ee96a8:;
  /* 10ee96a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee96ab push edx */
  push32((uint32_t)(EDX));
  /* 10ee96ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee96af push eax */
  push32((uint32_t)(EAX));
  /* 10ee96b0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 10ee96b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee96b4 call 0x10eed460 */
  push32(0x10ee96b9u); f_10eed460();
  /* 10ee96b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee96bc mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 10ee96c0 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 10ee96c4 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 10ee96c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee96ca mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 10ee96cd mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee96d0 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 10ee96d4 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_10ee96d8:;
  /* 10ee96d8 jmp 0x10ee96f7 */
  goto L_10ee96f7;
L_10ee96da:;
  /* 10ee96da mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 10ee96e0 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 10ee96e6 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ee96e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee96ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee96f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee96f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ee96f7:;
  /* 10ee96f7 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee96fb jne 0x10ee9726 */
  if (!C.zf) goto L_10ee9726;
  /* 10ee96fd mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 10ee9703 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 10ee9709 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ee970c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9712 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ee9715 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee9718 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ee971b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ee971e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9721 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 10ee9724 jmp 0x10ee977d */
  goto L_10ee977d;
L_10ee9726:;
  /* 10ee9726 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee972a je 0x10ee9751 */
  if (C.zf) goto L_10ee9751;
  /* 10ee972c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 10ee9732 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 10ee9739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ee9740 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 10ee9746 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ee9749 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee974c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 10ee974f jmp 0x10ee977d */
  goto L_10ee977d;
L_10ee9751:;
  /* 10ee9751 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9755 je 0x10ee977d */
  if (C.zf) goto L_10ee977d;
  /* 10ee9757 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 10ee975d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 10ee9763 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ee9766 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee976b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee976e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee9771 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ee9774 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ee9777 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee977a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_10ee977d:;
  /* 10ee977d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9780 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 10ee9784 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 10ee9787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee978a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee978d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 10ee9790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9793 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee9796 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 10ee9799 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10ee979c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee97a1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ee97a4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee97aa or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee97ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee97af mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 10ee97b3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ee97b6 mov esp, ebp */
  ESP = (EBP);
  /* 10ee97b8 pop ebp */
  EBP = (pop32());
  /* 10ee97b9 ret  */
  ESPCHK(0x10ee8da0u, _esp0);
  ESP += 4; return;
}

/* FUN_100198d0 @ 0x10ee98d0 (79 bytes, 33 insns) */
void f_10ee98d0(void) {
  FTRACE(0x10ee98d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee98d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee98d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ee98d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee98d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee98d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee98da push 0 */
  push32((uint32_t)(0x0u));
  /* 10ee98dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee98df push eax */
  push32((uint32_t)(EAX));
  /* 10ee98e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ee98e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee98e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee98e7 push edx */
  push32((uint32_t)(EDX));
  /* 10ee98e8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10ee98eb push eax */
  push32((uint32_t)(EAX));
  /* 10ee98ec call 0x10ee8da0 */
  push32(0x10ee98f1u); f_10ee8da0();
  /* 10ee98f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee98f4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee98f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee98fa push ecx */
  push32((uint32_t)(ECX));
  /* 10ee98fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ee98fe push edx */
  push32((uint32_t)(EDX));
  /* 10ee98ff call 0x10ee16c0 */
  push32(0x10ee9904u); f_10ee16c0();
  /* 10ee9904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9907 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee990a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee990e jne 0x10ee9918 */
  if (!C.zf) goto L_10ee9918;
  /* 10ee9910 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee9913 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10ee9915 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10ee9918:;
  /* 10ee9918 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ee991b mov esp, ebp */
  ESP = (EBP);
  /* 10ee991d pop ebp */
  EBP = (pop32());
  /* 10ee991e ret  */
  ESPCHK(0x10ee98d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019920 @ 0x10ee9920 (1302 bytes, 386 insns) */
void f_10ee9920(void) {
  FTRACE(0x10ee9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee9920 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee9921 mov ebp, esp */
  EBP = (ESP);
  /* 10ee9923 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9926 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 10ee992c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 10ee9932 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 10ee9938 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 10ee993f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 10ee9943 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 10ee9947 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 10ee994b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 10ee994f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 10ee9953 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 10ee9957 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 10ee995b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 10ee995f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 10ee9963 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 10ee9967 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 10ee996b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 10ee996f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 10ee9976 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 10ee997a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 10ee997e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ee9981 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10ee9984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9987 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 10ee998a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee998d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9992 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9997 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 10ee999b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 10ee999f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 10ee99a4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 10ee99a8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee99ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee99b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee99b3 je 0x10ee99be */
  if (C.zf) goto L_10ee99be;
  /* 10ee99b5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99b8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 10ee99bc jmp 0x10ee99c5 */
  goto L_10ee99c5;
L_10ee99be:;
  /* 10ee99be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99c1 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_10ee99c5:;
  /* 10ee99c5 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee99c8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee99ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ee99d0 jne 0x10ee9a0c */
  if (!C.zf) goto L_10ee9a0c;
  /* 10ee99d2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee99d6 jne 0x10ee9a0c */
  if (!C.zf) goto L_10ee9a0c;
  /* 10ee99d8 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee99dc jne 0x10ee9a0c */
  if (!C.zf) goto L_10ee9a0c;
  /* 10ee99de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99e1 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10ee99e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99e9 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 10ee99ed mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99f0 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 10ee99f4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99f7 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 10ee99fb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee99fe mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 10ee9a02 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee9a07 jmp 0x10ee9e32 */
  goto L_10ee9e32;
L_10ee9a0c:;
  /* 10ee9a0c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee9a0f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9a15 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9a1b jne 0x10ee9b06 */
  if (!C.zf) goto L_10ee9b06;
  /* 10ee9a21 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9a24 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 10ee9a29 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9a30 jne 0x10ee9a38 */
  if (!C.zf) goto L_10ee9a38;
  /* 10ee9a32 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9a36 je 0x10ee9a6c */
  if (C.zf) goto L_10ee9a6c;
L_10ee9a38:;
  /* 10ee9a38 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee9a3b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9a41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee9a43 jne 0x10ee9a6c */
  if (!C.zf) goto L_10ee9a6c;
  /* 10ee9a45 push 0x10f0a2f8 */
  push32((uint32_t)(0x10f0a2f8u));
  /* 10ee9a4a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9a4d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9a50 push edx */
  push32((uint32_t)(EDX));
  /* 10ee9a51 call 0x10edfe30 */
  push32(0x10ee9a56u); f_10edfe30();
  /* 10ee9a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9a59 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9a5c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 10ee9a60 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10ee9a67 jmp 0x10ee9b01 */
  goto L_10ee9b01;
L_10ee9a6c:;
  /* 10ee9a6c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 10ee9a6f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9a75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee9a77 je 0x10ee9aac */
  if (C.zf) goto L_10ee9aac;
  /* 10ee9a79 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9a80 jne 0x10ee9aac */
  if (!C.zf) goto L_10ee9aac;
  /* 10ee9a82 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9a86 jne 0x10ee9aac */
  if (!C.zf) goto L_10ee9aac;
  /* 10ee9a88 push 0x10f0a2f0 */
  push32((uint32_t)(0x10f0a2f0u));
  /* 10ee9a8d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9a90 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9a93 push edx */
  push32((uint32_t)(EDX));
  /* 10ee9a94 call 0x10edfe30 */
  push32(0x10ee9a99u); f_10edfe30();
  /* 10ee9a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9a9c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9a9f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 10ee9aa3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10ee9aaa jmp 0x10ee9b01 */
  goto L_10ee9b01;
L_10ee9aac:;
  /* 10ee9aac cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ab3 jne 0x10ee9adf */
  if (!C.zf) goto L_10ee9adf;
  /* 10ee9ab5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ab9 jne 0x10ee9adf */
  if (!C.zf) goto L_10ee9adf;
  /* 10ee9abb push 0x10f0a2e8 */
  push32((uint32_t)(0x10f0a2e8u));
  /* 10ee9ac0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9ac3 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee9ac7 call 0x10edfe30 */
  push32(0x10ee9accu); f_10edfe30();
  /* 10ee9acc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9acf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9ad2 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 10ee9ad6 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10ee9add jmp 0x10ee9b01 */
  goto L_10ee9b01;
L_10ee9adf:;
  /* 10ee9adf push 0x10f0a2e0 */
  push32((uint32_t)(0x10f0a2e0u));
  /* 10ee9ae4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9ae7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9aea push eax */
  push32((uint32_t)(EAX));
  /* 10ee9aeb call 0x10edfe30 */
  push32(0x10ee9af0u); f_10edfe30();
  /* 10ee9af0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9af3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9af6 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 10ee9afa mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_10ee9b01:;
  /* 10ee9b01 jmp 0x10ee9e2f */
  goto L_10ee9e2f;
L_10ee9b06:;
  /* 10ee9b06 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee9b09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9b0f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ee9b12 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 10ee9b16 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee9b19 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9b1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9b23 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 10ee9b27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee9b2a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 10ee9b2d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 10ee9b31 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 10ee9b34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9b3a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 10ee9b3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9b42 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee9b45 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10ee9b48 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9b4e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10ee9b51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9b56 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee9b59 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9b5b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10ee9b5e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9b64 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ee9b67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9b6c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee9b6f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9b71 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9b74 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee9b77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee9b7a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 10ee9b7d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 10ee9b81 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 10ee9b85 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 10ee9b89 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ee9b8c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 10ee9b8f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ee9b92 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 10ee9b95 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 10ee9b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10ee9b9d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 10ee9ba1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee9ba3 push edx */
  push32((uint32_t)(EDX));
  /* 10ee9ba4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10ee9ba7 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9ba8 call 0x10eed460 */
  push32(0x10ee9badu); f_10eed460();
  /* 10ee9bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9bb0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 10ee9bb3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9bb9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9bbf jl 0x10ee9bdd */
  if ((C.sf!=C.of)) goto L_10ee9bdd;
  /* 10ee9bc1 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 10ee9bc5 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 10ee9bc9 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 10ee9bcd lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 10ee9bd0 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9bd1 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 10ee9bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee9bd5 call 0x10eed020 */
  push32(0x10ee9bdau); f_10eed020();
  /* 10ee9bda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ee9bdd:;
  /* 10ee9bdd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9be0 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 10ee9be4 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10ee9be7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ee9bea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9bed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ee9bef je 0x10ee9c31 */
  if (C.zf) goto L_10ee9c31;
  /* 10ee9bf1 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 10ee9bf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee9bf8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9bfa mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 10ee9bfd cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9c01 jg 0x10ee9c31 */
  if ((!C.zf&&C.sf==C.of)) goto L_10ee9c31;
  /* 10ee9c03 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9c06 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10ee9c0b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9c0e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 10ee9c12 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9c15 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 10ee9c19 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9c1c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 10ee9c20 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9c23 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 10ee9c27 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee9c2c jmp 0x10ee9e32 */
  goto L_10ee9e32;
L_10ee9c31:;
  /* 10ee9c31 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9c35 jle 0x10ee9c3e */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9c3e;
  /* 10ee9c37 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_10ee9c3e:;
  /* 10ee9c3e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 10ee9c41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9c46 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9c4b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10ee9c4e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 10ee9c54 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 10ee9c5b jmp 0x10ee9c66 */
  goto L_10ee9c66;
L_10ee9c5d:;
  /* 10ee9c5d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ee9c60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9c63 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_10ee9c66:;
  /* 10ee9c66 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9c6a jge 0x10ee9c7a */
  if ((C.sf==C.of)) goto L_10ee9c7a;
  /* 10ee9c6c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 10ee9c6f push edx */
  push32((uint32_t)(EDX));
  /* 10ee9c70 call 0x10ee8b90 */
  push32(0x10ee9c75u); f_10ee8b90();
  /* 10ee9c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9c78 jmp 0x10ee9c5d */
  goto L_10ee9c5d;
L_10ee9c7a:;
  /* 10ee9c7a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9c7e jge 0x10ee9cac */
  if ((C.sf==C.of)) goto L_10ee9cac;
  /* 10ee9c80 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ee9c83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee9c85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9c8a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 10ee9c8d jmp 0x10ee9c98 */
  goto L_10ee9c98;
L_10ee9c8f:;
  /* 10ee9c8f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 10ee9c92 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9c95 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_10ee9c98:;
  /* 10ee9c98 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9c9c jle 0x10ee9cac */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9cac;
  /* 10ee9c9e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 10ee9ca1 push edx */
  push32((uint32_t)(EDX));
  /* 10ee9ca2 call 0x10ee8bf0 */
  push32(0x10ee9ca7u); f_10ee8bf0();
  /* 10ee9ca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9caa jmp 0x10ee9c8f */
  goto L_10ee9c8f;
L_10ee9cac:;
  /* 10ee9cac mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9caf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9cb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee9cb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ee9cb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9cbb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee9cbe jmp 0x10ee9cc9 */
  goto L_10ee9cc9;
L_10ee9cc0:;
  /* 10ee9cc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ee9cc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9cc6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ee9cc9:;
  /* 10ee9cc9 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ccd jle 0x10ee9d35 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9d35;
  /* 10ee9ccf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ee9cd2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10ee9cd5 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ee9cd8 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10ee9cdb mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10ee9cde mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10ee9ce1 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10ee9ce4 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9ce5 call 0x10ee8b90 */
  push32(0x10ee9ceau); f_10ee8b90();
  /* 10ee9cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9ced lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 10ee9cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee9cf1 call 0x10ee8b90 */
  push32(0x10ee9cf6u); f_10ee8b90();
  /* 10ee9cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9cf9 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 10ee9cfc push edx */
  push32((uint32_t)(EDX));
  /* 10ee9cfd lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10ee9d00 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9d01 call 0x10ee8ae0 */
  push32(0x10ee9d06u); f_10ee8ae0();
  /* 10ee9d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d09 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 10ee9d0c push ecx */
  push32((uint32_t)(ECX));
  /* 10ee9d0d call 0x10ee8b90 */
  push32(0x10ee9d12u); f_10ee8b90();
  /* 10ee9d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d15 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 10ee9d18 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9d1e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10ee9d26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee9d2f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 10ee9d33 jmp 0x10ee9cc0 */
  goto L_10ee9cc0;
L_10ee9d35:;
  /* 10ee9d35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d38 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9d3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee9d3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d41 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee9d43 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10ee9d46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9d4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee9d4f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10ee9d53 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9d56 jl 0x10ee9db3 */
  if ((C.sf!=C.of)) goto L_10ee9db3;
  /* 10ee9d58 jmp 0x10ee9d63 */
  goto L_10ee9d63;
L_10ee9d5a:;
  /* 10ee9d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9d60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10ee9d63:;
  /* 10ee9d63 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9d66 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d69 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9d6c jb 0x10ee9d81 */
  if (C.cf) goto L_10ee9d81;
  /* 10ee9d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10ee9d74 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9d77 jne 0x10ee9d81 */
  if (!C.zf) goto L_10ee9d81;
  /* 10ee9d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d7c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 10ee9d7f jmp 0x10ee9d5a */
  goto L_10ee9d5a;
L_10ee9d81:;
  /* 10ee9d81 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9d84 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d87 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9d8a jae 0x10ee9da5 */
  if (!C.cf) goto L_10ee9da5;
  /* 10ee9d8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9d8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9d92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee9d95 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9d98 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ee9d9b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 10ee9d9f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9da2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_10ee9da5:;
  /* 10ee9da5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9da8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee9daa add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ee9dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9daf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10ee9db1 jmp 0x10ee9e0c */
  goto L_10ee9e0c;
L_10ee9db3:;
  /* 10ee9db3 jmp 0x10ee9dbe */
  goto L_10ee9dbe;
L_10ee9db5:;
  /* 10ee9db5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9db8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9dbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ee9dbe:;
  /* 10ee9dbe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9dc1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9dc4 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9dc7 jb 0x10ee9dd6 */
  if (C.cf) goto L_10ee9dd6;
  /* 10ee9dc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9dcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10ee9dcf cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9dd2 jne 0x10ee9dd6 */
  if (!C.zf) goto L_10ee9dd6;
  /* 10ee9dd4 jmp 0x10ee9db5 */
  goto L_10ee9db5;
L_10ee9dd6:;
  /* 10ee9dd6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9dd9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9ddc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ddf jae 0x10ee9e0c */
  if (!C.cf) goto L_10ee9e0c;
  /* 10ee9de1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9de4 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10ee9de9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9dec mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 10ee9df0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9df3 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 10ee9df7 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9dfa mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 10ee9dfe mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9e01 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 10ee9e05 mov eax, 1 */
  EAX = (0x1u);
  /* 10ee9e0a jmp 0x10ee9e32 */
  goto L_10ee9e32;
L_10ee9e0c:;
  /* 10ee9e0c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9e0f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9e15 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9e17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9e1a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9e1d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 10ee9e20 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9e23 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 10ee9e27 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ee9e2a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_10ee9e2f:;
  /* 10ee9e2f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_10ee9e32:;
  /* 10ee9e32 mov esp, ebp */
  ESP = (EBP);
  /* 10ee9e34 pop ebp */
  EBP = (pop32());
  /* 10ee9e35 ret  */
  ESPCHK(0x10ee9920u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e40 @ 0x10ee9e40 (255 bytes, 88 insns) */
void f_10ee9e40(void) {
  FTRACE(0x10ee9e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee9e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee9e41 mov ebp, esp */
  EBP = (ESP);
  /* 10ee9e43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10ee9e46:;
  /* 10ee9e46 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9e4d jle 0x10ee9e66 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9e66;
  /* 10ee9e4f push 8 */
  push32((uint32_t)(0x8u));
  /* 10ee9e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9e54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9e56 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee9e58 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee9e59 call 0x10ee0dc0 */
  push32(0x10ee9e5eu); f_10ee0dc0();
  /* 10ee9e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ee9e64 jmp 0x10ee9e7f */
  goto L_10ee9e7f;
L_10ee9e66:;
  /* 10ee9e66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9e69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9e6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee9e6d mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee9e73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9e75 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ee9e79 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9e7c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10ee9e7f:;
  /* 10ee9e7f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9e83 je 0x10ee9e90 */
  if (C.zf) goto L_10ee9e90;
  /* 10ee9e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9e88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9e8b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ee9e8e jmp 0x10ee9e46 */
  goto L_10ee9e46;
L_10ee9e90:;
  /* 10ee9e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9e93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9e95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee9e97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee9e9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9e9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9ea0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ee9ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9ea6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ee9ea9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ead je 0x10ee9eb5 */
  if (C.zf) goto L_10ee9eb5;
  /* 10ee9eaf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9eb3 jne 0x10ee9ec8 */
  if (!C.zf) goto L_10ee9ec8;
L_10ee9eb5:;
  /* 10ee9eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9eba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee9ebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee9ebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9ec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9ec5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ee9ec8:;
  /* 10ee9ec8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ee9ecf:;
  /* 10ee9ecf cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ed6 jle 0x10ee9eeb */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9eeb;
  /* 10ee9ed8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10ee9eda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9edd push edx */
  push32((uint32_t)(EDX));
  /* 10ee9ede call 0x10ee0dc0 */
  push32(0x10ee9ee3u); f_10ee0dc0();
  /* 10ee9ee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9ee6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee9ee9 jmp 0x10ee9f00 */
  goto L_10ee9f00;
L_10ee9eeb:;
  /* 10ee9eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9eee mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee9ef4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9ef6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ee9efa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9efd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ee9f00:;
  /* 10ee9f00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9f04 je 0x10ee9f2b */
  if (C.zf) goto L_10ee9f2b;
  /* 10ee9f06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee9f09 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ee9f0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9f0f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10ee9f13 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ee9f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9f19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9f1b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee9f1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ee9f20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9f23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9f26 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10ee9f29 jmp 0x10ee9ecf */
  goto L_10ee9ecf;
L_10ee9f2b:;
  /* 10ee9f2b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9f2f jne 0x10ee9f38 */
  if (!C.zf) goto L_10ee9f38;
  /* 10ee9f31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ee9f34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ee9f36 jmp 0x10ee9f3b */
  goto L_10ee9f3b;
L_10ee9f38:;
  /* 10ee9f38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10ee9f3b:;
  /* 10ee9f3b mov esp, ebp */
  ESP = (EBP);
  /* 10ee9f3d pop ebp */
  EBP = (pop32());
  /* 10ee9f3e ret  */
  ESPCHK(0x10ee9e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f40 @ 0x10ee9f40 (17 bytes, 8 insns) */
void f_10ee9f40(void) {
  FTRACE(0x10ee9f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee9f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee9f41 mov ebp, esp */
  EBP = (ESP);
  /* 10ee9f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9f46 push eax */
  push32((uint32_t)(EAX));
  /* 10ee9f47 call 0x10ee9e40 */
  push32(0x10ee9f4cu); f_10ee9e40();
  /* 10ee9f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9f4f pop ebp */
  EBP = (pop32());
  /* 10ee9f50 ret  */
  ESPCHK(0x10ee9f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f60 @ 0x10ee9f60 (297 bytes, 106 insns) */
void f_10ee9f60(void) {
  FTRACE(0x10ee9f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ee9f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10ee9f61 mov ebp, esp */
  EBP = (ESP);
  /* 10ee9f63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ee9f66 push esi */
  push32((uint32_t)(ESI));
L_10ee9f67:;
  /* 10ee9f67 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9f6e jle 0x10ee9f87 */
  if ((C.zf||C.sf!=C.of)) goto L_10ee9f87;
  /* 10ee9f70 push 8 */
  push32((uint32_t)(0x8u));
  /* 10ee9f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9f75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ee9f77 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10ee9f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ee9f7a call 0x10ee0dc0 */
  push32(0x10ee9f7fu); f_10ee0dc0();
  /* 10ee9f7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9f82 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ee9f85 jmp 0x10ee9fa0 */
  goto L_10ee9fa0;
L_10ee9f87:;
  /* 10ee9f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9f8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9f8c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee9f8e mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10ee9f94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9f96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10ee9f9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9f9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10ee9fa0:;
  /* 10ee9fa0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9fa4 je 0x10ee9fb1 */
  if (C.zf) goto L_10ee9fb1;
  /* 10ee9fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9fac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ee9faf jmp 0x10ee9f67 */
  goto L_10ee9f67;
L_10ee9fb1:;
  /* 10ee9fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9fb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ee9fb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ee9fb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ee9fbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9fbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9fc1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10ee9fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ee9fc7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10ee9fca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9fce je 0x10ee9fd6 */
  if (C.zf) goto L_10ee9fd6;
  /* 10ee9fd0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9fd4 jne 0x10ee9fe9 */
  if (!C.zf) goto L_10ee9fe9;
L_10ee9fd6:;
  /* 10ee9fd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ee9fdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ee9fdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ee9fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ee9fe3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ee9fe6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10ee9fe9:;
  /* 10ee9fe9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ee9ff0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10ee9ff7:;
  /* 10ee9ff7 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ee9ffe jle 0x10eea013 */
  if ((C.zf||C.sf!=C.of)) goto L_10eea013;
  /* 10eea000 push 4 */
  push32((uint32_t)(0x4u));
  /* 10eea002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea005 push edx */
  push32((uint32_t)(EDX));
  /* 10eea006 call 0x10ee0dc0 */
  push32(0x10eea00bu); f_10ee0dc0();
  /* 10eea00b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea00e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10eea011 jmp 0x10eea028 */
  goto L_10eea028;
L_10eea013:;
  /* 10eea013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea016 mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10eea01c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eea01e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10eea022 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10eea025 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10eea028:;
  /* 10eea028 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea02c je 0x10eea069 */
  if (C.zf) goto L_10eea069;
  /* 10eea02e push 0 */
  push32((uint32_t)(0x0u));
  /* 10eea030 push 0xa */
  push32((uint32_t)(0xau));
  /* 10eea032 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea035 push eax */
  push32((uint32_t)(EAX));
  /* 10eea036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eea039 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea03a call 0x10eed530 */
  push32(0x10eea03fu); f_10eed530();
  /* 10eea03f mov ecx, eax */
  ECX = (EAX);
  /* 10eea041 mov esi, edx */
  ESI = (EDX);
  /* 10eea043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea046 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea049 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eea04a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea04c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea04e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eea051 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10eea054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea059 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eea05b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eea05e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea064 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10eea067 jmp 0x10ee9ff7 */
  goto L_10ee9ff7;
L_10eea069:;
  /* 10eea069 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea06d jne 0x10eea07e */
  if (!C.zf) goto L_10eea07e;
  /* 10eea06f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eea072 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eea074 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea077 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea07a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eea07c jmp 0x10eea084 */
  goto L_10eea084;
L_10eea07e:;
  /* 10eea07e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eea081 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10eea084:;
  /* 10eea084 pop esi */
  ESI = (pop32());
  /* 10eea085 mov esp, ebp */
  ESP = (EBP);
  /* 10eea087 pop ebp */
  EBP = (pop32());
  /* 10eea088 ret  */
  ESPCHK(0x10ee9f60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a090 @ 0x10eea090 (46 bytes, 18 insns) */
void f_10eea090(void) {
  FTRACE(0x10eea090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea090 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea091 mov ebp, esp */
  EBP = (ESP);
  /* 10eea093 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea094 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10eea096 call 0x10edb620 */
  push32(0x10eea09bu); f_10edb620();
  /* 10eea09b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea09e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea0a1 push eax */
  push32((uint32_t)(EAX));
  /* 10eea0a2 call 0x10eea0c0 */
  push32(0x10eea0a7u); f_10eea0c0();
  /* 10eea0a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea0aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eea0ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 10eea0af call 0x10edb6c0 */
  push32(0x10eea0b4u); f_10edb6c0();
  /* 10eea0b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea0b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea0ba mov esp, ebp */
  ESP = (EBP);
  /* 10eea0bc pop ebp */
  EBP = (pop32());
  /* 10eea0bd ret  */
  ESPCHK(0x10eea090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10eea0c0 (198 bytes, 69 insns) */
void f_10eea0c0(void) {
  FTRACE(0x10eea0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eea0c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea0c6 mov eax, dword ptr [0x10f0f57c] */
  EAX = (r32((uint32_t)(0x10f0f57c)));
  /* 10eea0cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eea0ce cmp dword ptr [0x10f10fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea0d5 jne 0x10eea0de */
  if (!C.zf) goto L_10eea0de;
  /* 10eea0d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea0d9 jmp 0x10eea182 */
  goto L_10eea182;
L_10eea0de:;
  /* 10eea0de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea0e2 jne 0x10eea106 */
  if (!C.zf) goto L_10eea106;
  /* 10eea0e4 cmp dword ptr [0x10f0f584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea0eb je 0x10eea106 */
  if (C.zf) goto L_10eea106;
  /* 10eea0ed call 0x10eed5c0 */
  push32(0x10eea0f2u); f_10eed5c0();
  /* 10eea0f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea0f4 je 0x10eea0fd */
  if (C.zf) goto L_10eea0fd;
  /* 10eea0f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea0f8 jmp 0x10eea182 */
  goto L_10eea182;
L_10eea0fd:;
  /* 10eea0fd mov ecx, dword ptr [0x10f0f57c] */
  ECX = (r32((uint32_t)(0x10f0f57c)));
  /* 10eea103 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10eea106:;
  /* 10eea106 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea10a je 0x10eea180 */
  if (C.zf) goto L_10eea180;
  /* 10eea10c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea110 je 0x10eea180 */
  if (C.zf) goto L_10eea180;
  /* 10eea112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea115 push edx */
  push32((uint32_t)(EDX));
  /* 10eea116 call 0x10edfcb0 */
  push32(0x10eea11bu); f_10edfcb0();
  /* 10eea11b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea11e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eea121:;
  /* 10eea121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea124 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea127 je 0x10eea180 */
  if (C.zf) goto L_10eea180;
  /* 10eea129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea12c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eea12e push edx */
  push32((uint32_t)(EDX));
  /* 10eea12f call 0x10edfcb0 */
  push32(0x10eea134u); f_10edfcb0();
  /* 10eea134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea137 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea13a jbe 0x10eea175 */
  if ((C.cf||C.zf)) goto L_10eea175;
  /* 10eea13c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea13f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eea141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea144 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10eea148 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea14b jne 0x10eea175 */
  if (!C.zf) goto L_10eea175;
  /* 10eea14d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea150 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea154 push edx */
  push32((uint32_t)(EDX));
  /* 10eea155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea158 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eea15a push ecx */
  push32((uint32_t)(ECX));
  /* 10eea15b call 0x10eed570 */
  push32(0x10eea160u); f_10eed570();
  /* 10eea160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea165 jne 0x10eea175 */
  if (!C.zf) goto L_10eea175;
  /* 10eea167 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea16a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eea16c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea16f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10eea173 jmp 0x10eea182 */
  goto L_10eea182;
L_10eea175:;
  /* 10eea175 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea178 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea17b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eea17e jmp 0x10eea121 */
  goto L_10eea121;
L_10eea180:;
  /* 10eea180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eea182:;
  /* 10eea182 mov esp, ebp */
  ESP = (EBP);
  /* 10eea184 pop ebp */
  EBP = (pop32());
  /* 10eea185 ret  */
  ESPCHK(0x10eea0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a190 @ 0x10eea190 (130 bytes, 43 insns) */
void f_10eea190(void) {
  FTRACE(0x10eea190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea190 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea191 mov ebp, esp */
  EBP = (ESP);
  /* 10eea193 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea197 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea19d jae 0x10eea1c1 */
  if (!C.cf) goto L_10eea1c1;
  /* 10eea19f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea1a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea1a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea1a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea1ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea1ae mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea1b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10eea1ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eea1bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eea1bf jne 0x10eea1dc */
  if (!C.zf) goto L_10eea1dc;
L_10eea1c1:;
  /* 10eea1c1 call 0x10ee6db0 */
  push32(0x10eea1c6u); f_10ee6db0();
  /* 10eea1c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eea1cc call 0x10ee6dc0 */
  push32(0x10eea1d1u); f_10ee6dc0();
  /* 10eea1d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eea1d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea1da jmp 0x10eea20e */
  goto L_10eea20e;
L_10eea1dc:;
  /* 10eea1dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea1df push edx */
  push32((uint32_t)(EDX));
  /* 10eea1e0 call 0x10eedb80 */
  push32(0x10eea1e5u); f_10eedb80();
  /* 10eea1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea1e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eea1eb push eax */
  push32((uint32_t)(EAX));
  /* 10eea1ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea1ef push ecx */
  push32((uint32_t)(ECX));
  /* 10eea1f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea1f3 push edx */
  push32((uint32_t)(EDX));
  /* 10eea1f4 call 0x10eea220 */
  push32(0x10eea1f9u); f_10eea220();
  /* 10eea1f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea1fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eea1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea202 push eax */
  push32((uint32_t)(EAX));
  /* 10eea203 call 0x10eedc10 */
  push32(0x10eea208u); f_10eedc10();
  /* 10eea208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eea20e:;
  /* 10eea20e mov esp, ebp */
  ESP = (EBP);
  /* 10eea210 pop ebp */
  EBP = (pop32());
  /* 10eea211 ret  */
  ESPCHK(0x10eea190u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a220 @ 0x10eea220 (178 bytes, 56 insns) */
void f_10eea220(void) {
  FTRACE(0x10eea220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea220 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea221 mov ebp, esp */
  EBP = (ESP);
  /* 10eea223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea229 push eax */
  push32((uint32_t)(EAX));
  /* 10eea22a call 0x10eeda00 */
  push32(0x10eea22fu); f_10eeda00();
  /* 10eea22f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea232 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eea235 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea239 jne 0x10eea24e */
  if (!C.zf) goto L_10eea24e;
  /* 10eea23b call 0x10ee6db0 */
  push32(0x10eea240u); f_10ee6db0();
  /* 10eea240 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eea246 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea249 jmp 0x10eea2ce */
  goto L_10eea2ce;
L_10eea24e:;
  /* 10eea24e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eea251 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eea254 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea257 push edx */
  push32((uint32_t)(EDX));
  /* 10eea258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eea25b push eax */
  push32((uint32_t)(EAX));
  /* 10eea25c call dword ptr [0x10f12350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12350))), 0x10eea262u);
  /* 10eea262 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eea265 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea269 jne 0x10eea276 */
  if (!C.zf) goto L_10eea276;
  /* 10eea26b call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10eea271u);
  /* 10eea271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eea274 jmp 0x10eea27d */
  goto L_10eea27d;
L_10eea276:;
  /* 10eea276 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10eea27d:;
  /* 10eea27d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea281 je 0x10eea294 */
  if (C.zf) goto L_10eea294;
  /* 10eea283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea286 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea287 call 0x10ee6d10 */
  push32(0x10eea28cu); f_10ee6d10();
  /* 10eea28c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea28f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea292 jmp 0x10eea2ce */
  goto L_10eea2ce;
L_10eea294:;
  /* 10eea294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea297 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10eea29a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea29d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea2a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea2a3 mov ecx, dword ptr [edx*4 + 0x10f10ea0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10f10ea0)));
  /* 10eea2aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10eea2ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10eea2b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea2b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea2b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea2ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eea2bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea2c0 mov eax, dword ptr [eax*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eea2c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10eea2cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10eea2ce:;
  /* 10eea2ce mov esp, ebp */
  ESP = (EBP);
  /* 10eea2d0 pop ebp */
  EBP = (pop32());
  /* 10eea2d1 ret  */
  ESPCHK(0x10eea220u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2e0 @ 0x10eea2e0 (130 bytes, 43 insns) */
void f_10eea2e0(void) {
  FTRACE(0x10eea2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea2e1 mov ebp, esp */
  EBP = (ESP);
  /* 10eea2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea2e7 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea2ed jae 0x10eea311 */
  if (!C.cf) goto L_10eea311;
  /* 10eea2ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea2f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea2f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea2f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea2fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea2fe mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea305 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10eea30a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eea30d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eea30f jne 0x10eea32c */
  if (!C.zf) goto L_10eea32c;
L_10eea311:;
  /* 10eea311 call 0x10ee6db0 */
  push32(0x10eea316u); f_10ee6db0();
  /* 10eea316 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eea31c call 0x10ee6dc0 */
  push32(0x10eea321u); f_10ee6dc0();
  /* 10eea321 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eea327 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea32a jmp 0x10eea35e */
  goto L_10eea35e;
L_10eea32c:;
  /* 10eea32c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea32f push edx */
  push32((uint32_t)(EDX));
  /* 10eea330 call 0x10eedb80 */
  push32(0x10eea335u); f_10eedb80();
  /* 10eea335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eea33b push eax */
  push32((uint32_t)(EAX));
  /* 10eea33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea33f push ecx */
  push32((uint32_t)(ECX));
  /* 10eea340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea343 push edx */
  push32((uint32_t)(EDX));
  /* 10eea344 call 0x10eea370 */
  push32(0x10eea349u); f_10eea370();
  /* 10eea349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea34c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eea34f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea352 push eax */
  push32((uint32_t)(EAX));
  /* 10eea353 call 0x10eedc10 */
  push32(0x10eea358u); f_10eedc10();
  /* 10eea358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea35b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eea35e:;
  /* 10eea35e mov esp, ebp */
  ESP = (EBP);
  /* 10eea360 pop ebp */
  EBP = (pop32());
  /* 10eea361 ret  */
  ESPCHK(0x10eea2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a370 @ 0x10eea370 (627 bytes, 182 insns) */
void f_10eea370(void) {
  FTRACE(0x10eea370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea370 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea371 mov ebp, esp */
  EBP = (ESP);
  /* 10eea373 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea379 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eea380 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eea383 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10eea389 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea38d jne 0x10eea396 */
  if (!C.zf) goto L_10eea396;
  /* 10eea38f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea391 jmp 0x10eea5df */
  goto L_10eea5df;
L_10eea396:;
  /* 10eea396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea399 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea39c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea39f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea3a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea3a5 mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea3ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10eea3b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10eea3b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eea3b6 je 0x10eea3c8 */
  if (C.zf) goto L_10eea3c8;
  /* 10eea3b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eea3ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10eea3bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea3bf push edx */
  push32((uint32_t)(EDX));
  /* 10eea3c0 call 0x10eea220 */
  push32(0x10eea3c5u); f_10eea220();
  /* 10eea3c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eea3c8:;
  /* 10eea3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea3cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea3ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea3d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eea3d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea3d7 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eea3de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10eea3e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10eea3e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea3ea je 0x10eea4fc */
  if (C.zf) goto L_10eea4fc;
  /* 10eea3f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea3f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eea3f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10eea3fd:;
  /* 10eea3fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea400 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea403 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea406 jae 0x10eea4fa */
  if (!C.cf) goto L_10eea4fa;
  /* 10eea40c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10eea412 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10eea415:;
  /* 10eea415 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea418 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10eea41e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea420 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea426 jge 0x10eea487 */
  if ((C.sf==C.of)) goto L_10eea487;
  /* 10eea428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea42b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea42e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea431 jae 0x10eea487 */
  if (!C.cf) goto L_10eea487;
  /* 10eea433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea436 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eea438 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10eea43e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea441 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea444 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eea447 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10eea44e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea451 jne 0x10eea471 */
  if (!C.zf) goto L_10eea471;
  /* 10eea453 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10eea459 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea45c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10eea462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea465 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10eea468 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea46b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea46e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10eea471:;
  /* 10eea471 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea474 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10eea47a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10eea47c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea47f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea482 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eea485 jmp 0x10eea415 */
  goto L_10eea415;
L_10eea487:;
  /* 10eea487 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eea489 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10eea48f push edx */
  push32((uint32_t)(EDX));
  /* 10eea490 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea493 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10eea499 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea49b push eax */
  push32((uint32_t)(EAX));
  /* 10eea49c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10eea4a2 push edx */
  push32((uint32_t)(EDX));
  /* 10eea4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea4a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea4a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea4ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eea4af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea4b2 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eea4b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10eea4bc push eax */
  push32((uint32_t)(EAX));
  /* 10eea4bd call dword ptr [0x10f12414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12414))), 0x10eea4c3u);
  /* 10eea4c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea4c5 je 0x10eea4ea */
  if (C.zf) goto L_10eea4ea;
  /* 10eea4c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eea4ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea4d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10eea4d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea4d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10eea4dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea4de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea4e4 jge 0x10eea4e8 */
  if ((C.sf==C.of)) goto L_10eea4e8;
  /* 10eea4e6 jmp 0x10eea4fa */
  goto L_10eea4fa;
L_10eea4e8:;
  /* 10eea4e8 jmp 0x10eea4f5 */
  goto L_10eea4f5;
L_10eea4ea:;
  /* 10eea4ea call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10eea4f0u);
  /* 10eea4f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eea4f3 jmp 0x10eea4fa */
  goto L_10eea4fa;
L_10eea4f5:;
  /* 10eea4f5 jmp 0x10eea3fd */
  goto L_10eea3fd;
L_10eea4fa:;
  /* 10eea4fa jmp 0x10eea54c */
  goto L_10eea54c;
L_10eea4fc:;
  /* 10eea4fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10eea4fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10eea504 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea505 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eea508 push edx */
  push32((uint32_t)(EDX));
  /* 10eea509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea50c push eax */
  push32((uint32_t)(EAX));
  /* 10eea50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea510 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea516 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea519 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea51c mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea523 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10eea526 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea527 call dword ptr [0x10f12414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12414))), 0x10eea52du);
  /* 10eea52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea52f je 0x10eea543 */
  if (C.zf) goto L_10eea543;
  /* 10eea531 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eea538 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10eea53e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10eea541 jmp 0x10eea54c */
  goto L_10eea54c;
L_10eea543:;
  /* 10eea543 call dword ptr [0x10f123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123d4))), 0x10eea549u);
  /* 10eea549 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10eea54c:;
  /* 10eea54c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea550 jne 0x10eea5d6 */
  if (!C.zf) goto L_10eea5d6;
  /* 10eea556 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea55a je 0x10eea58a */
  if (C.zf) goto L_10eea58a;
  /* 10eea55c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea560 jne 0x10eea579 */
  if (!C.zf) goto L_10eea579;
  /* 10eea562 call 0x10ee6db0 */
  push32(0x10eea567u); f_10ee6db0();
  /* 10eea567 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10eea56d call 0x10ee6dc0 */
  push32(0x10eea572u); f_10ee6dc0();
  /* 10eea572 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eea575 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10eea577 jmp 0x10eea585 */
  goto L_10eea585;
L_10eea579:;
  /* 10eea579 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eea57c push edx */
  push32((uint32_t)(EDX));
  /* 10eea57d call 0x10ee6d10 */
  push32(0x10eea582u); f_10ee6d10();
  /* 10eea582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eea585:;
  /* 10eea585 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea588 jmp 0x10eea5df */
  goto L_10eea5df;
L_10eea58a:;
  /* 10eea58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea58d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea593 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10eea596 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea599 mov edx, dword ptr [eax*4 + 0x10f10ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f10ea0)));
  /* 10eea5a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10eea5a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10eea5a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea5aa je 0x10eea5bb */
  if (C.zf) goto L_10eea5bb;
  /* 10eea5ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea5af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eea5b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea5b5 jne 0x10eea5bb */
  if (!C.zf) goto L_10eea5bb;
  /* 10eea5b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea5b9 jmp 0x10eea5df */
  goto L_10eea5df;
L_10eea5bb:;
  /* 10eea5bb call 0x10ee6db0 */
  push32(0x10eea5c0u); f_10ee6db0();
  /* 10eea5c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10eea5c6 call 0x10ee6dc0 */
  push32(0x10eea5cbu); f_10ee6dc0();
  /* 10eea5cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10eea5d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea5d4 jmp 0x10eea5df */
  goto L_10eea5df;
L_10eea5d6:;
  /* 10eea5d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eea5d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10eea5df:;
  /* 10eea5df mov esp, ebp */
  ESP = (EBP);
  /* 10eea5e1 pop ebp */
  EBP = (pop32());
  /* 10eea5e2 ret  */
  ESPCHK(0x10eea370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5f0 @ 0x10eea5f0 (199 bytes, 68 insns) */
void f_10eea5f0(void) {
  FTRACE(0x10eea5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10eea5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea5f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10eea5f5 push esi */
  push32((uint32_t)(ESI));
  /* 10eea5f6 push edi */
  push32((uint32_t)(EDI));
L_10eea5f7:;
  /* 10eea5f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea5fb jne 0x10eea61b */
  if (!C.zf) goto L_10eea61b;
  /* 10eea5fd push 0x10f0a100 */
  push32((uint32_t)(0x10f0a100u));
  /* 10eea602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eea604 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10eea606 push 0x10f0a300 */
  push32((uint32_t)(0x10f0a300u));
  /* 10eea60b push 2 */
  push32((uint32_t)(0x2u));
  /* 10eea60d call 0x10eda2e0 */
  push32(0x10eea612u); f_10eda2e0();
  /* 10eea612 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea615 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea618 jne 0x10eea61b */
  if (!C.zf) goto L_10eea61b;
  /* 10eea61a int3  */
  x86_unimpl("int3 @ 0x10eea61a");
L_10eea61b:;
  /* 10eea61b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea61d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea61f jne 0x10eea5f7 */
  if (!C.zf) goto L_10eea5f7;
  /* 10eea621 mov ecx, dword ptr [0x10f0f7d4] */
  ECX = (r32((uint32_t)(0x10f0f7d4)));
  /* 10eea627 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea62a mov dword ptr [0x10f0f7d4], ecx */
  w32((uint32_t)(0x10f0f7d4), (ECX));
  /* 10eea630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea633 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eea636 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10eea638 push 0x10f0a300 */
  push32((uint32_t)(0x10f0a300u));
  /* 10eea63d push 2 */
  push32((uint32_t)(0x2u));
  /* 10eea63f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10eea644 call 0x10edb720 */
  push32(0x10eea649u); f_10edb720();
  /* 10eea649 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea64c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea64f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10eea652 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea655 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea659 je 0x10eea676 */
  if (C.zf) goto L_10eea676;
  /* 10eea65b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea65e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10eea661 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10eea664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea667 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10eea66a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea66d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10eea674 jmp 0x10eea69b */
  goto L_10eea69b;
L_10eea676:;
  /* 10eea676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea679 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eea67c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10eea67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea682 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10eea685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea688 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea68b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea68e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10eea691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea694 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10eea69b:;
  /* 10eea69b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea69e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea6a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eea6a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eea6a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea6a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10eea6b0 pop edi */
  EDI = (pop32());
  /* 10eea6b1 pop esi */
  ESI = (pop32());
  /* 10eea6b2 pop ebx */
  EBX = (pop32());
  /* 10eea6b3 mov esp, ebp */
  ESP = (EBP);
  /* 10eea6b5 pop ebp */
  EBP = (pop32());
  /* 10eea6b6 ret  */
  ESPCHK(0x10eea5f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10eea6c0 (50 bytes, 17 insns) */
void f_10eea6c0(void) {
  FTRACE(0x10eea6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eea6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea6c6 cmp eax, dword ptr [0x10f10fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f10fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea6cc jb 0x10eea6d2 */
  if (C.cf) goto L_10eea6d2;
  /* 10eea6ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea6d0 jmp 0x10eea6f0 */
  goto L_10eea6f0;
L_10eea6d2:;
  /* 10eea6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea6d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea6d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea6db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea6de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea6e1 mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea6e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10eea6ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10eea6f0:;
  /* 10eea6f0 pop ebp */
  EBP = (pop32());
  /* 10eea6f1 ret  */
  ESPCHK(0x10eea6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a700 @ 0x10eea700 (300 bytes, 80 insns) */
void f_10eea700(void) {
  FTRACE(0x10eea700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea700 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea701 mov ebp, esp */
  EBP = (ESP);
  /* 10eea703 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea704 cmp dword ptr [0x10f10bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea70b jne 0x10eea719 */
  if (!C.zf) goto L_10eea719;
  /* 10eea70d mov dword ptr [0x10f10bc0], 0x200 */
  w32((uint32_t)(0x10f10bc0), (0x200u));
  /* 10eea717 jmp 0x10eea72c */
  goto L_10eea72c;
L_10eea719:;
  /* 10eea719 cmp dword ptr [0x10f10bc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea720 jge 0x10eea72c */
  if ((C.sf==C.of)) goto L_10eea72c;
  /* 10eea722 mov dword ptr [0x10f10bc0], 0x14 */
  w32((uint32_t)(0x10f10bc0), (0x14u));
L_10eea72c:;
  /* 10eea72c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10eea731 push 0x10f0a30c */
  push32((uint32_t)(0x10f0a30cu));
  /* 10eea736 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eea738 push 4 */
  push32((uint32_t)(0x4u));
  /* 10eea73a mov eax, dword ptr [0x10f10bc0] */
  EAX = (r32((uint32_t)(0x10f10bc0)));
  /* 10eea73f push eax */
  push32((uint32_t)(EAX));
  /* 10eea740 call 0x10edbb30 */
  push32(0x10eea745u); f_10edbb30();
  /* 10eea745 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea748 mov dword ptr [0x10f0f86c], eax */
  w32((uint32_t)(0x10f0f86c), (EAX));
  /* 10eea74d cmp dword ptr [0x10f0f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea754 jne 0x10eea795 */
  if (!C.zf) goto L_10eea795;
  /* 10eea756 mov dword ptr [0x10f10bc0], 0x14 */
  w32((uint32_t)(0x10f10bc0), (0x14u));
  /* 10eea760 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10eea765 push 0x10f0a30c */
  push32((uint32_t)(0x10f0a30cu));
  /* 10eea76a push 2 */
  push32((uint32_t)(0x2u));
  /* 10eea76c push 4 */
  push32((uint32_t)(0x4u));
  /* 10eea76e mov ecx, dword ptr [0x10f10bc0] */
  ECX = (r32((uint32_t)(0x10f10bc0)));
  /* 10eea774 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea775 call 0x10edbb30 */
  push32(0x10eea77au); f_10edbb30();
  /* 10eea77a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea77d mov dword ptr [0x10f0f86c], eax */
  w32((uint32_t)(0x10f0f86c), (EAX));
  /* 10eea782 cmp dword ptr [0x10f0f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea789 jne 0x10eea795 */
  if (!C.zf) goto L_10eea795;
  /* 10eea78b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10eea78d call 0x10eda190 */
  push32(0x10eea792u); f_10eda190();
  /* 10eea792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eea795:;
  /* 10eea795 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eea79c jmp 0x10eea7a7 */
  goto L_10eea7a7;
L_10eea79e:;
  /* 10eea79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea7a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10eea7a7:;
  /* 10eea7a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea7ab jge 0x10eea7c6 */
  if ((C.sf==C.of)) goto L_10eea7c6;
  /* 10eea7ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea7b3 add eax, 0x10f0d898 */
  { uint32_t _a=(EAX),_b=(0x10f0d898u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea7b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7bb mov edx, dword ptr [0x10f0f86c] */
  EDX = (r32((uint32_t)(0x10f0f86c)));
  /* 10eea7c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10eea7c4 jmp 0x10eea79e */
  goto L_10eea79e;
L_10eea7c6:;
  /* 10eea7c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eea7cd jmp 0x10eea7d8 */
  goto L_10eea7d8;
L_10eea7cf:;
  /* 10eea7cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea7d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eea7d8:;
  /* 10eea7d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea7dc jge 0x10eea828 */
  if ((C.sf==C.of)) goto L_10eea828;
  /* 10eea7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea7e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea7ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea7ed mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea7f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea7f8 je 0x10eea816 */
  if (C.zf) goto L_10eea816;
  /* 10eea7fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea7fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea803 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eea806 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eea809 mov eax, dword ptr [ecx*4 + 0x10f10ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10f10ea0)));
  /* 10eea810 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea814 jne 0x10eea826 */
  if (!C.zf) goto L_10eea826;
L_10eea816:;
  /* 10eea816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eea819 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10eea81c mov dword ptr [ecx + 0x10f0d8a8], 0xffffffff */
  w32((uint32_t)(ECX + 0x10f0d8a8), (0xffffffffu));
L_10eea826:;
  /* 10eea826 jmp 0x10eea7cf */
  goto L_10eea7cf;
L_10eea828:;
  /* 10eea828 mov esp, ebp */
  ESP = (EBP);
  /* 10eea82a pop ebp */
  EBP = (pop32());
  /* 10eea82b ret  */
  ESPCHK(0x10eea700u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a830 @ 0x10eea830 (26 bytes, 9 insns) */
void f_10eea830(void) {
  FTRACE(0x10eea830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea830 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea831 mov ebp, esp */
  EBP = (ESP);
  /* 10eea833 call 0x10eede80 */
  push32(0x10eea838u); f_10eede80();
  /* 10eea838 movsx eax, byte ptr [0x10f0f594] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0f594))));
  /* 10eea83f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eea841 je 0x10eea848 */
  if (C.zf) goto L_10eea848;
  /* 10eea843 call 0x10eedc40 */
  push32(0x10eea848u); f_10eedc40();
L_10eea848:;
  /* 10eea848 pop ebp */
  EBP = (pop32());
  /* 10eea849 ret  */
  ESPCHK(0x10eea830u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a850 @ 0x10eea850 (61 bytes, 20 insns) */
void f_10eea850(void) {
  FTRACE(0x10eea850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea850 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea851 mov ebp, esp */
  EBP = (ESP);
  /* 10eea853 cmp dword ptr [ebp + 8], 0x10f0d898 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f0d898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea85a jb 0x10eea87e */
  if (C.cf) goto L_10eea87e;
  /* 10eea85c cmp dword ptr [ebp + 8], 0x10f0daf8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f0daf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea863 ja 0x10eea87e */
  if ((!C.cf&&!C.zf)) goto L_10eea87e;
  /* 10eea865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea868 sub eax, 0x10f0d898 */
  { uint32_t _a=(EAX),_b=(0x10f0d898u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea86d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea870 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea873 push eax */
  push32((uint32_t)(EAX));
  /* 10eea874 call 0x10edb620 */
  push32(0x10eea879u); f_10edb620();
  /* 10eea879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea87c jmp 0x10eea88b */
  goto L_10eea88b;
L_10eea87e:;
  /* 10eea87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea881 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea884 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea885 call dword ptr [0x10f12438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12438))), 0x10eea88bu);
L_10eea88b:;
  /* 10eea88b pop ebp */
  EBP = (pop32());
  /* 10eea88c ret  */
  ESPCHK(0x10eea850u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a890 @ 0x10eea890 (41 bytes, 16 insns) */
void f_10eea890(void) {
  FTRACE(0x10eea890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea890 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea891 mov ebp, esp */
  EBP = (ESP);
  /* 10eea893 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea897 jge 0x10eea8aa */
  if ((C.sf==C.of)) goto L_10eea8aa;
  /* 10eea899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea89c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea89f push eax */
  push32((uint32_t)(EAX));
  /* 10eea8a0 call 0x10edb620 */
  push32(0x10eea8a5u); f_10edb620();
  /* 10eea8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea8a8 jmp 0x10eea8b7 */
  goto L_10eea8b7;
L_10eea8aa:;
  /* 10eea8aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea8ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea8b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea8b1 call dword ptr [0x10f12438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12438))), 0x10eea8b7u);
L_10eea8b7:;
  /* 10eea8b7 pop ebp */
  EBP = (pop32());
  /* 10eea8b8 ret  */
  ESPCHK(0x10eea890u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a8c0 @ 0x10eea8c0 (61 bytes, 20 insns) */
void f_10eea8c0(void) {
  FTRACE(0x10eea8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eea8c3 cmp dword ptr [ebp + 8], 0x10f0d898 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f0d898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea8ca jb 0x10eea8ee */
  if (C.cf) goto L_10eea8ee;
  /* 10eea8cc cmp dword ptr [ebp + 8], 0x10f0daf8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10f0daf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea8d3 ja 0x10eea8ee */
  if ((!C.cf&&!C.zf)) goto L_10eea8ee;
  /* 10eea8d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea8d8 sub eax, 0x10f0d898 */
  { uint32_t _a=(EAX),_b=(0x10f0d898u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea8dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10eea8e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea8e3 push eax */
  push32((uint32_t)(EAX));
  /* 10eea8e4 call 0x10edb6c0 */
  push32(0x10eea8e9u); f_10edb6c0();
  /* 10eea8e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea8ec jmp 0x10eea8fb */
  goto L_10eea8fb;
L_10eea8ee:;
  /* 10eea8ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea8f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea8f5 call dword ptr [0x10f1243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1243c))), 0x10eea8fbu);
L_10eea8fb:;
  /* 10eea8fb pop ebp */
  EBP = (pop32());
  /* 10eea8fc ret  */
  ESPCHK(0x10eea8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a900 @ 0x10eea900 (41 bytes, 16 insns) */
void f_10eea900(void) {
  FTRACE(0x10eea900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea900 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea901 mov ebp, esp */
  EBP = (ESP);
  /* 10eea903 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea907 jge 0x10eea91a */
  if ((C.sf==C.of)) goto L_10eea91a;
  /* 10eea909 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea90c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea90f push eax */
  push32((uint32_t)(EAX));
  /* 10eea910 call 0x10edb6c0 */
  push32(0x10eea915u); f_10edb6c0();
  /* 10eea915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea918 jmp 0x10eea927 */
  goto L_10eea927;
L_10eea91a:;
  /* 10eea91a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea91d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea920 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea921 call dword ptr [0x10f1243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1243c))), 0x10eea927u);
L_10eea927:;
  /* 10eea927 pop ebp */
  EBP = (pop32());
  /* 10eea928 ret  */
  ESPCHK(0x10eea900u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a930 @ 0x10eea930 (119 bytes, 34 insns) */
void f_10eea930(void) {
  FTRACE(0x10eea930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea930 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea931 mov ebp, esp */
  EBP = (ESP);
  /* 10eea933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea936 push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10eea93b call dword ptr [0x10f12428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12428))), 0x10eea941u);
  /* 10eea941 cmp dword ptr [0x10f10bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea948 je 0x10eea968 */
  if (C.zf) goto L_10eea968;
  /* 10eea94a push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10eea94f call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eea955u);
  /* 10eea955 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eea957 call 0x10edb620 */
  push32(0x10eea95cu); f_10edb620();
  /* 10eea95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea95f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10eea966 jmp 0x10eea96f */
  goto L_10eea96f;
L_10eea968:;
  /* 10eea968 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10eea96f:;
  /* 10eea96f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10eea973 push eax */
  push32((uint32_t)(EAX));
  /* 10eea974 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea977 push ecx */
  push32((uint32_t)(ECX));
  /* 10eea978 call 0x10eea9b0 */
  push32(0x10eea97du); f_10eea9b0();
  /* 10eea97d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea980 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eea983 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea987 je 0x10eea995 */
  if (C.zf) goto L_10eea995;
  /* 10eea989 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10eea98b call 0x10edb6c0 */
  push32(0x10eea990u); f_10edb6c0();
  /* 10eea990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eea993 jmp 0x10eea9a0 */
  goto L_10eea9a0;
L_10eea995:;
  /* 10eea995 push 0x10f10bd4 */
  push32((uint32_t)(0x10f10bd4u));
  /* 10eea99a call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eea9a0u);
L_10eea9a0:;
  /* 10eea9a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eea9a3 mov esp, ebp */
  ESP = (EBP);
  /* 10eea9a5 pop ebp */
  EBP = (pop32());
  /* 10eea9a6 ret  */
  ESPCHK(0x10eea930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a9b0 @ 0x10eea9b0 (160 bytes, 50 insns) */
void f_10eea9b0(void) {
  FTRACE(0x10eea9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eea9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eea9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10eea9b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eea9b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea9ba jne 0x10eea9c3 */
  if (!C.zf) goto L_10eea9c3;
  /* 10eea9bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eea9be jmp 0x10eeaa4c */
  goto L_10eeaa4c;
L_10eea9c3:;
  /* 10eea9c3 cmp dword ptr [0x10f0f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea9ca jne 0x10eea9fa */
  if (!C.zf) goto L_10eea9fa;
  /* 10eea9cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eea9cf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea9d4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eea9d9 jle 0x10eea9eb */
  if ((C.zf||C.sf!=C.of)) goto L_10eea9eb;
  /* 10eea9db call 0x10ee6db0 */
  push32(0x10eea9e0u); f_10ee6db0();
  /* 10eea9e0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10eea9e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eea9e9 jmp 0x10eeaa4c */
  goto L_10eeaa4c;
L_10eea9eb:;
  /* 10eea9eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eea9ee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10eea9f1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10eea9f3 mov eax, 1 */
  EAX = (0x1u);
  /* 10eea9f8 jmp 0x10eeaa4c */
  goto L_10eeaa4c;
L_10eea9fa:;
  /* 10eea9fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eeaa01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10eeaa04 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaa05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eeaa07 mov ecx, dword ptr [0x10f0cfe0] */
  ECX = (r32((uint32_t)(0x10f0cfe0)));
  /* 10eeaa0d push ecx */
  push32((uint32_t)(ECX));
  /* 10eeaa0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaa11 push edx */
  push32((uint32_t)(EDX));
  /* 10eeaa12 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaa14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10eeaa17 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaa18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10eeaa1d mov ecx, dword ptr [0x10f0f7c8] */
  ECX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10eeaa23 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeaa24 call dword ptr [0x10f123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123b0))), 0x10eeaa2au);
  /* 10eeaa2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeaa2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeaa31 je 0x10eeaa39 */
  if (C.zf) goto L_10eeaa39;
  /* 10eeaa33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeaa37 je 0x10eeaa49 */
  if (C.zf) goto L_10eeaa49;
L_10eeaa39:;
  /* 10eeaa39 call 0x10ee6db0 */
  push32(0x10eeaa3eu); f_10ee6db0();
  /* 10eeaa3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10eeaa44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaa47 jmp 0x10eeaa4c */
  goto L_10eeaa4c;
L_10eeaa49:;
  /* 10eeaa49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eeaa4c:;
  /* 10eeaa4c mov esp, ebp */
  ESP = (EBP);
  /* 10eeaa4e pop ebp */
  EBP = (pop32());
  /* 10eeaa4f ret  */
  ESPCHK(0x10eea9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa50 @ 0x10eeaa50 (62 bytes, 21 insns) */
void f_10eeaa50(void) {
  FTRACE(0x10eeaa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeaa50 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeaa51 mov ebp, esp */
  EBP = (ESP);
  /* 10eeaa53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeaa56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaa59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eeaa5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeaa5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eeaa62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeaa65 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaa6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eeaa6e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeaa71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaa76 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaa7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaa7e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10eeaa81 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaa83 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 10eeaa87 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 10eeaa8a mov esp, ebp */
  ESP = (EBP);
  /* 10eeaa8c pop ebp */
  EBP = (pop32());
  /* 10eeaa8d ret  */
  ESPCHK(0x10eeaa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa90 @ 0x10eeaa90 (45 bytes, 15 insns) */
void f_10eeaa90(void) {
  FTRACE(0x10eeaa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeaa90 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeaa91 mov ebp, esp */
  EBP = (ESP);
  /* 10eeaa93 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeaa94 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeaa97 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaa9c and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaaa1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10eeaaa4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10eeaaa8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10eeaaac sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 10eeaab1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10eeaab5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 10eeaab9 mov esp, ebp */
  ESP = (EBP);
  /* 10eeaabb pop ebp */
  EBP = (pop32());
  /* 10eeaabc ret  */
  ESPCHK(0x10eeaa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aac0 @ 0x10eeaac0 (51 bytes, 18 insns) */
void f_10eeaac0(void) {
  FTRACE(0x10eeaac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeaac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeaac1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeaac3 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeaac6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaacb and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeaad0 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10eeaad3 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10eeaad6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeaad9 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 10eeaae0 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeaae4 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeaae5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaae8 push edx */
  push32((uint32_t)(EDX));
  /* 10eeaae9 call 0x10eeaa50 */
  push32(0x10eeaaeeu); f_10eeaa50();
  /* 10eeaaee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaaf1 pop ebp */
  EBP = (pop32());
  /* 10eeaaf2 ret  */
  ESPCHK(0x10eeaac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab00 @ 0x10eeab00 (52 bytes, 18 insns) */
void f_10eeab00(void) {
  FTRACE(0x10eeab00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeab00 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeab01 mov ebp, esp */
  EBP = (ESP);
  /* 10eeab03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeab06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeab09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eeab0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeab0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeab12 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeab15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eeab1b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 10eeab21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeab24 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10eeab27 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10eeab29 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 10eeab2d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 10eeab30 mov esp, ebp */
  ESP = (EBP);
  /* 10eeab32 pop ebp */
  EBP = (pop32());
  /* 10eeab33 ret  */
  ESPCHK(0x10eeab00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab40 @ 0x10eeab40 (124 bytes, 37 insns) */
void f_10eeab40(void) {
  FTRACE(0x10eeab40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeab40 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeab41 mov ebp, esp */
  EBP = (ESP);
  /* 10eeab43 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeab4a jne 0x10eeab59 */
  if (!C.zf) goto L_10eeab59;
  /* 10eeab4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeab50 jne 0x10eeab59 */
  if (!C.zf) goto L_10eeab59;
  /* 10eeab52 mov eax, 1 */
  EAX = (0x1u);
  /* 10eeab57 jmp 0x10eeabba */
  goto L_10eeabba;
L_10eeab59:;
  /* 10eeab59 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeab60 jne 0x10eeab6f */
  if (!C.zf) goto L_10eeab6f;
  /* 10eeab62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeab66 jne 0x10eeab6f */
  if (!C.zf) goto L_10eeab6f;
  /* 10eeab68 mov eax, 2 */
  EAX = (0x2u);
  /* 10eeab6d jmp 0x10eeabba */
  goto L_10eeabba;
L_10eeab6f:;
  /* 10eeab6f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeab72 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeab77 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeab7c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeab81 jne 0x10eeab8a */
  if (!C.zf) goto L_10eeab8a;
  /* 10eeab83 mov eax, 3 */
  EAX = (0x3u);
  /* 10eeab88 jmp 0x10eeabba */
  goto L_10eeabba;
L_10eeab8a:;
  /* 10eeab8a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeab8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eeab93 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10eeab99 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeab9f jne 0x10eeabb8 */
  if (!C.zf) goto L_10eeabb8;
  /* 10eeaba1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeaba4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 10eeaba7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeaba9 jne 0x10eeabb1 */
  if (!C.zf) goto L_10eeabb1;
  /* 10eeabab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeabaf je 0x10eeabb8 */
  if (C.zf) goto L_10eeabb8;
L_10eeabb1:;
  /* 10eeabb1 mov eax, 4 */
  EAX = (0x4u);
  /* 10eeabb6 jmp 0x10eeabba */
  goto L_10eeabba;
L_10eeabb8:;
  /* 10eeabb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eeabba:;
  /* 10eeabba pop ebp */
  EBP = (pop32());
  /* 10eeabbb ret  */
  ESPCHK(0x10eeab40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001abc0 @ 0x10eeabc0 (313 bytes, 95 insns) */
void f_10eeabc0(void) {
  FTRACE(0x10eeabc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeabc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeabc1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeabc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeabc6 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 10eeabc9 fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10eeabcf fnstsw ax */
  AX = fpu_status();
  /* 10eeabd1 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 10eeabd4 je 0x10eeabf0 */
  if (C.zf) goto L_10eeabf0;
  /* 10eeabd6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eeabdd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eeabe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eeabeb jmp 0x10eeacea */
  goto L_10eeacea;
L_10eeabf0:;
  /* 10eeabf0 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeabf3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeabf8 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeabfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeabff jne 0x10eeacb9 */
  if (!C.zf) goto L_10eeacb9;
  /* 10eeac05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeac08 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 10eeac0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eeac0d jne 0x10eeac19 */
  if (!C.zf) goto L_10eeac19;
  /* 10eeac0f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeac13 je 0x10eeacb9 */
  if (C.zf) goto L_10eeacb9;
L_10eeac19:;
  /* 10eeac19 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 10eeac20 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 10eeac23 fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10eeac29 fnstsw ax */
  AX = fpu_status();
  /* 10eeac2b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 10eeac2e je 0x10eeac39 */
  if (C.zf) goto L_10eeac39;
  /* 10eeac30 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10eeac37 jmp 0x10eeac40 */
  goto L_10eeac40;
L_10eeac39:;
  /* 10eeac39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10eeac40:;
  /* 10eeac40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eeac43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10eeac46:;
  /* 10eeac46 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeac49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeac4e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeac51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeac53 jne 0x10eeac85 */
  if (!C.zf) goto L_10eeac85;
  /* 10eeac55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeac58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10eeac5a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10eeac5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeac60 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 10eeac66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eeac68 je 0x10eeac72 */
  if (C.zf) goto L_10eeac72;
  /* 10eeac6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeac6d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10eeac6f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10eeac72:;
  /* 10eeac72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeac75 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10eeac77 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10eeac7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeac7d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeac80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eeac83 jmp 0x10eeac46 */
  goto L_10eeac46;
L_10eeac85:;
  /* 10eeac85 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 10eeac89 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 10eeac8d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 10eeac91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeac95 je 0x10eeaca2 */
  if (C.zf) goto L_10eeaca2;
  /* 10eeac97 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 10eeac9b or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10eeac9e mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_10eeaca2:;
  /* 10eeaca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eeaca4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeaca7 push edx */
  push32((uint32_t)(EDX));
  /* 10eeaca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeacab push eax */
  push32((uint32_t)(EAX));
  /* 10eeacac call 0x10eeaa50 */
  push32(0x10eeacb1u); f_10eeaa50();
  /* 10eeacb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeacb4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 10eeacb7 jmp 0x10eeacea */
  goto L_10eeacea;
L_10eeacb9:;
  /* 10eeacb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eeacbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eeacbe push ecx */
  push32((uint32_t)(ECX));
  /* 10eeacbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeacc2 push edx */
  push32((uint32_t)(EDX));
  /* 10eeacc3 call 0x10eeaa50 */
  push32(0x10eeacc8u); f_10eeaa50();
  /* 10eeacc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaccb fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 10eeacce mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 10eeacd1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeacd6 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeacdb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10eeacde movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10eeace1 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeace7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10eeacea:;
  /* 10eeacea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeaced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeacf0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10eeacf2 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 10eeacf5 mov esp, ebp */
  ESP = (EBP);
  /* 10eeacf7 pop ebp */
  EBP = (pop32());
  /* 10eeacf8 ret  */
  ESPCHK(0x10eeabc0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10eead00 (219 bytes, 64 insns) */
void f_10eead00(void) {
  FTRACE(0x10eead00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eead00 push ebp */
  push32((uint32_t)(EBP));
  /* 10eead01 mov ebp, esp */
  EBP = (ESP);
  /* 10eead03 push ecx */
  push32((uint32_t)(ECX));
  /* 10eead04 cmp dword ptr [0x10f0f7c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eead0b je 0x10eeada1 */
  if (C.zf) goto L_10eeada1;
  /* 10eead11 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10eead13 push 0x10f0a314 */
  push32((uint32_t)(0x10f0a314u));
  /* 10eead18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eead1a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10eead1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10eead21 call 0x10edbb30 */
  push32(0x10eead26u); f_10edbb30();
  /* 10eead26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eead29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eead2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eead30 jne 0x10eead3c */
  if (!C.zf) goto L_10eead3c;
  /* 10eead32 mov eax, 1 */
  EAX = (0x1u);
  /* 10eead37 jmp 0x10eeadd7 */
  goto L_10eeadd7;
L_10eead3c:;
  /* 10eead3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eead3f push eax */
  push32((uint32_t)(EAX));
  /* 10eead40 call 0x10eeade0 */
  push32(0x10eead45u); f_10eeade0();
  /* 10eead45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eead48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eead4a je 0x10eead6d */
  if (C.zf) goto L_10eead6d;
  /* 10eead4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eead4f push ecx */
  push32((uint32_t)(ECX));
  /* 10eead50 call 0x10eeb370 */
  push32(0x10eead55u); f_10eeb370();
  /* 10eead55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eead58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eead5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eead5d push edx */
  push32((uint32_t)(EDX));
  /* 10eead5e call 0x10edc1b0 */
  push32(0x10eead63u); f_10edc1b0();
  /* 10eead63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eead66 mov eax, 1 */
  EAX = (0x1u);
  /* 10eead6b jmp 0x10eeadd7 */
  goto L_10eeadd7;
L_10eead6d:;
  /* 10eead6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eead70 mov dword ptr [0x10f0e2c0], eax */
  w32((uint32_t)(0x10f0e2c0), (EAX));
  /* 10eead75 mov ecx, dword ptr [0x10f0f7d8] */
  ECX = (r32((uint32_t)(0x10f0f7d8)));
  /* 10eead7b push ecx */
  push32((uint32_t)(ECX));
  /* 10eead7c call 0x10eeb370 */
  push32(0x10eead81u); f_10eeb370();
  /* 10eead81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eead84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eead86 mov edx, dword ptr [0x10f0f7d8] */
  EDX = (r32((uint32_t)(0x10f0f7d8)));
  /* 10eead8c push edx */
  push32((uint32_t)(EDX));
  /* 10eead8d call 0x10edc1b0 */
  push32(0x10eead92u); f_10edc1b0();
  /* 10eead92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eead95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eead98 mov dword ptr [0x10f0f7d8], eax */
  w32((uint32_t)(0x10f0f7d8), (EAX));
  /* 10eead9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eead9f jmp 0x10eeadd7 */
  goto L_10eeadd7;
L_10eeada1:;
  /* 10eeada1 mov dword ptr [0x10f0e2c0], 0x10f0e2c8 */
  w32((uint32_t)(0x10f0e2c0), (0x10f0e2c8u));
  /* 10eeadab mov ecx, dword ptr [0x10f0f7d8] */
  ECX = (r32((uint32_t)(0x10f0f7d8)));
  /* 10eeadb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeadb2 call 0x10eeb370 */
  push32(0x10eeadb7u); f_10eeb370();
  /* 10eeadb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeadba push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeadbc mov edx, dword ptr [0x10f0f7d8] */
  EDX = (r32((uint32_t)(0x10f0f7d8)));
  /* 10eeadc2 push edx */
  push32((uint32_t)(EDX));
  /* 10eeadc3 call 0x10edc1b0 */
  push32(0x10eeadc8u); f_10edc1b0();
  /* 10eeadc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeadcb mov dword ptr [0x10f0f7d8], 0 */
  w32((uint32_t)(0x10f0f7d8), (0x0u));
  /* 10eeadd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eeadd7:;
  /* 10eeadd7 mov esp, ebp */
  ESP = (EBP);
  /* 10eeadd9 pop ebp */
  EBP = (pop32());
  /* 10eeadda ret  */
  ESPCHK(0x10eead00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ade0 @ 0x10eeade0 (1423 bytes, 533 insns) */
void f_10eeade0(void) {
  FTRACE(0x10eeade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeade0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeade1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeade3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeade6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10eeaded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeadef mov ax, word ptr [0x10f0f812] */
  AX = (r16((uint32_t)(0x10f0f812)));
  /* 10eeadf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeadf8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeadfa mov cx, word ptr [0x10f0f814] */
  CX = (r16((uint32_t)(0x10f0f814)));
  /* 10eeae01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eeae04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeae08 jne 0x10eeae12 */
  if (!C.zf) goto L_10eeae12;
  /* 10eeae0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeae0d jmp 0x10eeb36b */
  goto L_10eeb36b;
L_10eeae12:;
  /* 10eeae12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeae15 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae18 push edx */
  push32((uint32_t)(EDX));
  /* 10eeae19 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10eeae1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeae1e push eax */
  push32((uint32_t)(EAX));
  /* 10eeae1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeae21 call 0x10eef440 */
  push32(0x10eeae26u); f_10eef440();
  /* 10eeae26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeae2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeae2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeae31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeae34 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae37 push edx */
  push32((uint32_t)(EDX));
  /* 10eeae38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10eeae3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeae3d push eax */
  push32((uint32_t)(EAX));
  /* 10eeae3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeae40 call 0x10eef440 */
  push32(0x10eeae45u); f_10eef440();
  /* 10eeae45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeae4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeae4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeae50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeae53 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae56 push edx */
  push32((uint32_t)(EDX));
  /* 10eeae57 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10eeae59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeae5c push eax */
  push32((uint32_t)(EAX));
  /* 10eeae5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeae5f call 0x10eef440 */
  push32(0x10eeae64u); f_10eef440();
  /* 10eeae64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeae6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeae6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeae6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeae72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae75 push edx */
  push32((uint32_t)(EDX));
  /* 10eeae76 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10eeae78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeae7b push eax */
  push32((uint32_t)(EAX));
  /* 10eeae7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeae7e call 0x10eef440 */
  push32(0x10eeae83u); f_10eef440();
  /* 10eeae83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeae89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeae8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeae8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeae91 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeae94 push edx */
  push32((uint32_t)(EDX));
  /* 10eeae95 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10eeae97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeae9a push eax */
  push32((uint32_t)(EAX));
  /* 10eeae9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeae9d call 0x10eef440 */
  push32(0x10eeaea2u); f_10eef440();
  /* 10eeaea2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaea5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaea8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaeaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaeb0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaeb3 push edx */
  push32((uint32_t)(EDX));
  /* 10eeaeb4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10eeaeb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaeb9 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaeba push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaebc call 0x10eef440 */
  push32(0x10eeaec1u); f_10eef440();
  /* 10eeaec1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaec4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaec7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaec9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaecc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaecf push edx */
  push32((uint32_t)(EDX));
  /* 10eeaed0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10eeaed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaed5 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaed8 call 0x10eef440 */
  push32(0x10eeaeddu); f_10eef440();
  /* 10eeaedd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaee3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaee5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaeeb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaeee push edx */
  push32((uint32_t)(EDX));
  /* 10eeaeef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10eeaef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaef4 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaef7 call 0x10eef440 */
  push32(0x10eeaefcu); f_10eef440();
  /* 10eeaefc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaeff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaf02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaf04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaf07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaf0a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf0d push edx */
  push32((uint32_t)(EDX));
  /* 10eeaf0e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10eeaf10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaf13 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaf14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaf16 call 0x10eef440 */
  push32(0x10eeaf1bu); f_10eef440();
  /* 10eeaf1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaf21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaf23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaf26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaf29 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf2c push edx */
  push32((uint32_t)(EDX));
  /* 10eeaf2d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10eeaf2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaf32 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaf33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaf35 call 0x10eef440 */
  push32(0x10eeaf3au); f_10eef440();
  /* 10eeaf3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaf40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaf42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaf45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaf48 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf4b push edx */
  push32((uint32_t)(EDX));
  /* 10eeaf4c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10eeaf4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaf51 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaf52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaf54 call 0x10eef440 */
  push32(0x10eeaf59u); f_10eef440();
  /* 10eeaf59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaf5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaf61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaf64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaf67 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf6a push edx */
  push32((uint32_t)(EDX));
  /* 10eeaf6b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10eeaf6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaf70 push eax */
  push32((uint32_t)(EAX));
  /* 10eeaf71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaf73 call 0x10eef440 */
  push32(0x10eeaf78u); f_10eef440();
  /* 10eeaf78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaf7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaf80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeaf83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeaf86 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf89 push edx */
  push32((uint32_t)(EDX));
  /* 10eeaf8a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10eeaf8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeaf8f push eax */
  push32((uint32_t)(EAX));
  /* 10eeaf90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeaf92 call 0x10eef440 */
  push32(0x10eeaf97u); f_10eef440();
  /* 10eeaf97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaf9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaf9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaf9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeafa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeafa5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeafa8 push edx */
  push32((uint32_t)(EDX));
  /* 10eeafa9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10eeafab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeafae push eax */
  push32((uint32_t)(EAX));
  /* 10eeafaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeafb1 call 0x10eef440 */
  push32(0x10eeafb6u); f_10eef440();
  /* 10eeafb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeafb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeafbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeafbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeafc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeafc4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeafc7 push edx */
  push32((uint32_t)(EDX));
  /* 10eeafc8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10eeafca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeafcd push eax */
  push32((uint32_t)(EAX));
  /* 10eeafce push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeafd0 call 0x10eef440 */
  push32(0x10eeafd5u); f_10eef440();
  /* 10eeafd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeafd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeafdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeafdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeafe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeafe3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeafe6 push edx */
  push32((uint32_t)(EDX));
  /* 10eeafe7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10eeafe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeafec push eax */
  push32((uint32_t)(EAX));
  /* 10eeafed push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeafef call 0x10eef440 */
  push32(0x10eeaff4u); f_10eef440();
  /* 10eeaff4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeaff7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeaffa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeaffc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeafff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb002 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb005 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb006 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10eeb008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb00b push eax */
  push32((uint32_t)(EAX));
  /* 10eeb00c push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb00e call 0x10eef440 */
  push32(0x10eeb013u); f_10eef440();
  /* 10eeb013 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb019 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb01b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb01e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb021 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb024 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb025 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10eeb027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb02a push eax */
  push32((uint32_t)(EAX));
  /* 10eeb02b push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb02d call 0x10eef440 */
  push32(0x10eeb032u); f_10eef440();
  /* 10eeb032 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb035 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb038 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb03a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb03d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb040 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb043 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb044 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10eeb046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb049 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb04a push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb04c call 0x10eef440 */
  push32(0x10eeb051u); f_10eef440();
  /* 10eeb051 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb054 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb057 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb059 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb05f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb062 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb063 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10eeb065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb068 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb069 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb06b call 0x10eef440 */
  push32(0x10eeb070u); f_10eef440();
  /* 10eeb070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb073 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb076 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb078 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb07b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb07e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb081 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb082 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10eeb084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb087 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb088 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb08a call 0x10eef440 */
  push32(0x10eeb08fu); f_10eef440();
  /* 10eeb08f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb092 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb095 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb097 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb09a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb09d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0a0 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb0a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10eeb0a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb0a6 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb0a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb0a9 call 0x10eef440 */
  push32(0x10eeb0aeu); f_10eef440();
  /* 10eeb0ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb0b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb0b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb0b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb0bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0bf push edx */
  push32((uint32_t)(EDX));
  /* 10eeb0c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10eeb0c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb0c5 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb0c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb0c8 call 0x10eef440 */
  push32(0x10eeb0cdu); f_10eef440();
  /* 10eeb0cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb0d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb0d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb0d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb0db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0de push edx */
  push32((uint32_t)(EDX));
  /* 10eeb0df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10eeb0e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb0e4 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb0e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb0e7 call 0x10eef440 */
  push32(0x10eeb0ecu); f_10eef440();
  /* 10eeb0ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb0f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb0f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb0f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb0fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb0fd push edx */
  push32((uint32_t)(EDX));
  /* 10eeb0fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10eeb100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb103 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb104 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb106 call 0x10eef440 */
  push32(0x10eeb10bu); f_10eef440();
  /* 10eeb10b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb10e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb111 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb113 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb116 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb119 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb11c push edx */
  push32((uint32_t)(EDX));
  /* 10eeb11d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10eeb11f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb122 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb123 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb125 call 0x10eef440 */
  push32(0x10eeb12au); f_10eef440();
  /* 10eeb12a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb12d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb130 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb132 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb138 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb13b push edx */
  push32((uint32_t)(EDX));
  /* 10eeb13c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10eeb13e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb141 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb142 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb144 call 0x10eef440 */
  push32(0x10eeb149u); f_10eef440();
  /* 10eeb149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb14c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb14f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb151 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb157 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb15a push edx */
  push32((uint32_t)(EDX));
  /* 10eeb15b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10eeb15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb160 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb161 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb163 call 0x10eef440 */
  push32(0x10eeb168u); f_10eef440();
  /* 10eeb168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb16b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb16e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb170 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb176 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb179 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb17a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10eeb17c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb17f push eax */
  push32((uint32_t)(EAX));
  /* 10eeb180 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb182 call 0x10eef440 */
  push32(0x10eeb187u); f_10eef440();
  /* 10eeb187 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb18a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb18d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb18f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb192 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb195 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb198 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb199 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10eeb19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb19e push eax */
  push32((uint32_t)(EAX));
  /* 10eeb19f push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb1a1 call 0x10eef440 */
  push32(0x10eeb1a6u); f_10eef440();
  /* 10eeb1a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb1a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb1ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb1ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb1b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb1b7 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb1b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10eeb1ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb1bd push eax */
  push32((uint32_t)(EAX));
  /* 10eeb1be push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb1c0 call 0x10eef440 */
  push32(0x10eeb1c5u); f_10eef440();
  /* 10eeb1c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb1c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb1cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb1cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb1d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb1d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb1d6 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb1d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10eeb1d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb1dc push eax */
  push32((uint32_t)(EAX));
  /* 10eeb1dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb1df call 0x10eef440 */
  push32(0x10eeb1e4u); f_10eef440();
  /* 10eeb1e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb1e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb1ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb1ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb1f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb1f8 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb1f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10eeb1fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb1fe push eax */
  push32((uint32_t)(EAX));
  /* 10eeb1ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb201 call 0x10eef440 */
  push32(0x10eeb206u); f_10eef440();
  /* 10eeb206 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb209 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb20c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb20e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb214 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb21a push edx */
  push32((uint32_t)(EDX));
  /* 10eeb21b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10eeb21d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb220 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb221 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb223 call 0x10eef440 */
  push32(0x10eeb228u); f_10eef440();
  /* 10eeb228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb22b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb22e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb230 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb236 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb23c push edx */
  push32((uint32_t)(EDX));
  /* 10eeb23d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10eeb23f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb242 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb245 call 0x10eef440 */
  push32(0x10eeb24au); f_10eef440();
  /* 10eeb24a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb24d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb250 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb252 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb258 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb25e push edx */
  push32((uint32_t)(EDX));
  /* 10eeb25f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10eeb261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb264 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb265 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb267 call 0x10eef440 */
  push32(0x10eeb26cu); f_10eef440();
  /* 10eeb26c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb26f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb272 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb274 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb27a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb280 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb281 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10eeb283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb286 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb287 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb289 call 0x10eef440 */
  push32(0x10eeb28eu); f_10eef440();
  /* 10eeb28e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb291 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb294 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb296 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb29c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb2a2 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb2a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10eeb2a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb2a8 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb2a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb2ab call 0x10eef440 */
  push32(0x10eeb2b0u); f_10eef440();
  /* 10eeb2b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb2b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb2b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb2b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb2bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb2be add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb2c4 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb2c5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10eeb2c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb2ca push eax */
  push32((uint32_t)(EAX));
  /* 10eeb2cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb2cd call 0x10eef440 */
  push32(0x10eeb2d2u); f_10eef440();
  /* 10eeb2d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb2d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb2d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb2da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb2dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb2e0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb2e6 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb2e7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10eeb2e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb2ec push eax */
  push32((uint32_t)(EAX));
  /* 10eeb2ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb2ef call 0x10eef440 */
  push32(0x10eeb2f4u); f_10eef440();
  /* 10eeb2f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb2f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb2fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb2fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb2ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb302 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb308 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb309 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10eeb30b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeb30e push eax */
  push32((uint32_t)(EAX));
  /* 10eeb30f push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb311 call 0x10eef440 */
  push32(0x10eeb316u); f_10eef440();
  /* 10eeb316 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb319 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb31c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb31e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb324 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb32a push edx */
  push32((uint32_t)(EDX));
  /* 10eeb32b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10eeb32d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeb330 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb331 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb333 call 0x10eef440 */
  push32(0x10eeb338u); f_10eef440();
  /* 10eeb338 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb33b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb33e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb340 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb346 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb34c push edx */
  push32((uint32_t)(EDX));
  /* 10eeb34d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10eeb352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeb355 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb356 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb358 call 0x10eef440 */
  push32(0x10eeb35du); f_10eef440();
  /* 10eeb35d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eeb363 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb365 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10eeb368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10eeb36b:;
  /* 10eeb36b mov esp, ebp */
  ESP = (EBP);
  /* 10eeb36d pop ebp */
  EBP = (pop32());
  /* 10eeb36e ret  */
  ESPCHK(0x10eeade0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10eeb370 (779 bytes, 265 insns) */
void f_10eeb370(void) {
  FTRACE(0x10eeb370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeb370 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeb371 mov ebp, esp */
  EBP = (ESP);
  /* 10eeb373 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb377 jne 0x10eeb37e */
  if (!C.zf) goto L_10eeb37e;
  /* 10eeb379 jmp 0x10eeb679 */
  goto L_10eeb679;
L_10eeb37e:;
  /* 10eeb37e push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb383 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10eeb386 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb387 call 0x10edc1b0 */
  push32(0x10eeb38cu); f_10edc1b0();
  /* 10eeb38c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb38f push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb394 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eeb397 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb398 call 0x10edc1b0 */
  push32(0x10eeb39du); f_10edc1b0();
  /* 10eeb39d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb3a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb3a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb3a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eeb3a8 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb3a9 call 0x10edc1b0 */
  push32(0x10eeb3aeu); f_10edc1b0();
  /* 10eeb3ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb3b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb3b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb3b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10eeb3b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb3ba call 0x10edc1b0 */
  push32(0x10eeb3bfu); f_10edc1b0();
  /* 10eeb3bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb3c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb3c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb3c7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10eeb3ca push eax */
  push32((uint32_t)(EAX));
  /* 10eeb3cb call 0x10edc1b0 */
  push32(0x10eeb3d0u); f_10edc1b0();
  /* 10eeb3d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb3d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb3d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb3d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10eeb3db push edx */
  push32((uint32_t)(EDX));
  /* 10eeb3dc call 0x10edc1b0 */
  push32(0x10eeb3e1u); f_10edc1b0();
  /* 10eeb3e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb3e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb3e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeb3eb push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb3ec call 0x10edc1b0 */
  push32(0x10eeb3f1u); f_10edc1b0();
  /* 10eeb3f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb3f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb3f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb3f9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10eeb3fc push eax */
  push32((uint32_t)(EAX));
  /* 10eeb3fd call 0x10edc1b0 */
  push32(0x10eeb402u); f_10edc1b0();
  /* 10eeb402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb405 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb40a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10eeb40d push edx */
  push32((uint32_t)(EDX));
  /* 10eeb40e call 0x10edc1b0 */
  push32(0x10eeb413u); f_10edc1b0();
  /* 10eeb413 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb416 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb41b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10eeb41e push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb41f call 0x10edc1b0 */
  push32(0x10eeb424u); f_10edc1b0();
  /* 10eeb424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb427 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb42c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10eeb42f push eax */
  push32((uint32_t)(EAX));
  /* 10eeb430 call 0x10edc1b0 */
  push32(0x10eeb435u); f_10edc1b0();
  /* 10eeb435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb438 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb43a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb43d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10eeb440 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb441 call 0x10edc1b0 */
  push32(0x10eeb446u); f_10edc1b0();
  /* 10eeb446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb449 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb44b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb44e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10eeb451 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb452 call 0x10edc1b0 */
  push32(0x10eeb457u); f_10edc1b0();
  /* 10eeb457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb45a push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb45c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb45f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10eeb462 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb463 call 0x10edc1b0 */
  push32(0x10eeb468u); f_10edc1b0();
  /* 10eeb468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb46b push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb470 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10eeb473 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb474 call 0x10edc1b0 */
  push32(0x10eeb479u); f_10edc1b0();
  /* 10eeb479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb47c push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb47e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb481 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10eeb484 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb485 call 0x10edc1b0 */
  push32(0x10eeb48au); f_10edc1b0();
  /* 10eeb48a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb48d push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb492 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10eeb495 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb496 call 0x10edc1b0 */
  push32(0x10eeb49bu); f_10edc1b0();
  /* 10eeb49b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb49e push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb4a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb4a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10eeb4a6 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb4a7 call 0x10edc1b0 */
  push32(0x10eeb4acu); f_10edc1b0();
  /* 10eeb4ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb4af push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb4b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb4b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10eeb4b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb4b8 call 0x10edc1b0 */
  push32(0x10eeb4bdu); f_10edc1b0();
  /* 10eeb4bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb4c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb4c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb4c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10eeb4c8 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb4c9 call 0x10edc1b0 */
  push32(0x10eeb4ceu); f_10edc1b0();
  /* 10eeb4ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb4d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb4d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb4d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10eeb4d9 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb4da call 0x10edc1b0 */
  push32(0x10eeb4dfu); f_10edc1b0();
  /* 10eeb4df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb4e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb4e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10eeb4ea push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb4eb call 0x10edc1b0 */
  push32(0x10eeb4f0u); f_10edc1b0();
  /* 10eeb4f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb4f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb4f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb4f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10eeb4fb push eax */
  push32((uint32_t)(EAX));
  /* 10eeb4fc call 0x10edc1b0 */
  push32(0x10eeb501u); f_10edc1b0();
  /* 10eeb501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb504 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb506 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb509 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10eeb50c push edx */
  push32((uint32_t)(EDX));
  /* 10eeb50d call 0x10edc1b0 */
  push32(0x10eeb512u); f_10edc1b0();
  /* 10eeb512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb515 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb517 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb51a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10eeb51d push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb51e call 0x10edc1b0 */
  push32(0x10eeb523u); f_10edc1b0();
  /* 10eeb523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb526 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb52b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10eeb52e push eax */
  push32((uint32_t)(EAX));
  /* 10eeb52f call 0x10edc1b0 */
  push32(0x10eeb534u); f_10edc1b0();
  /* 10eeb534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb537 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb53c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10eeb53f push edx */
  push32((uint32_t)(EDX));
  /* 10eeb540 call 0x10edc1b0 */
  push32(0x10eeb545u); f_10edc1b0();
  /* 10eeb545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb548 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb54a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb54d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10eeb550 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb551 call 0x10edc1b0 */
  push32(0x10eeb556u); f_10edc1b0();
  /* 10eeb556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb559 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb55b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb55e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10eeb561 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb562 call 0x10edc1b0 */
  push32(0x10eeb567u); f_10edc1b0();
  /* 10eeb567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb56a push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb56c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb56f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10eeb572 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb573 call 0x10edc1b0 */
  push32(0x10eeb578u); f_10edc1b0();
  /* 10eeb578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb57b push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb57d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb580 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10eeb583 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb584 call 0x10edc1b0 */
  push32(0x10eeb589u); f_10edc1b0();
  /* 10eeb589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb58c push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb58e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb591 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10eeb594 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb595 call 0x10edc1b0 */
  push32(0x10eeb59au); f_10edc1b0();
  /* 10eeb59a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb59d push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb59f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb5a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10eeb5a8 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb5a9 call 0x10edc1b0 */
  push32(0x10eeb5aeu); f_10edc1b0();
  /* 10eeb5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb5b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb5b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10eeb5bc push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb5bd call 0x10edc1b0 */
  push32(0x10eeb5c2u); f_10edc1b0();
  /* 10eeb5c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb5c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb5c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb5ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10eeb5d0 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb5d1 call 0x10edc1b0 */
  push32(0x10eeb5d6u); f_10edc1b0();
  /* 10eeb5d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb5d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb5db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb5de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10eeb5e4 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb5e5 call 0x10edc1b0 */
  push32(0x10eeb5eau); f_10edc1b0();
  /* 10eeb5ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb5ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb5ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb5f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10eeb5f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb5f9 call 0x10edc1b0 */
  push32(0x10eeb5feu); f_10edc1b0();
  /* 10eeb5fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb601 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb606 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10eeb60c push eax */
  push32((uint32_t)(EAX));
  /* 10eeb60d call 0x10edc1b0 */
  push32(0x10eeb612u); f_10edc1b0();
  /* 10eeb612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb615 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb61a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10eeb620 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb621 call 0x10edc1b0 */
  push32(0x10eeb626u); f_10edc1b0();
  /* 10eeb626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb629 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb62b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb62e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10eeb634 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb635 call 0x10edc1b0 */
  push32(0x10eeb63au); f_10edc1b0();
  /* 10eeb63a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb63d push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb63f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb642 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10eeb648 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb649 call 0x10edc1b0 */
  push32(0x10eeb64eu); f_10edc1b0();
  /* 10eeb64e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb651 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb656 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10eeb65c push edx */
  push32((uint32_t)(EDX));
  /* 10eeb65d call 0x10edc1b0 */
  push32(0x10eeb662u); f_10edc1b0();
  /* 10eeb662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb665 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb667 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb66a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10eeb670 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb671 call 0x10edc1b0 */
  push32(0x10eeb676u); f_10edc1b0();
  /* 10eeb676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eeb679:;
  /* 10eeb679 pop ebp */
  EBP = (pop32());
  /* 10eeb67a ret  */
  ESPCHK(0x10eeb370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b680 @ 0x10eeb680 (678 bytes, 180 insns) */
void f_10eeb680(void) {
  FTRACE(0x10eeb680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeb680 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeb681 mov ebp, esp */
  EBP = (ESP);
  /* 10eeb683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeb686 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eeb68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeb68f mov ax, word ptr [0x10f0f80e] */
  AX = (r16((uint32_t)(0x10f0f80e)));
  /* 10eeb695 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeb698 cmp dword ptr [0x10f0f7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb69f je 0x10eeb7fa */
  if (C.zf) goto L_10eeb7fa;
  /* 10eeb6a5 push 0x10f0f7dc */
  push32((uint32_t)(0x10f0f7dcu));
  /* 10eeb6aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 10eeb6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb6af push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb6b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb6b2 call 0x10eef440 */
  push32(0x10eeb6b7u); f_10eef440();
  /* 10eeb6b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb6ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeb6bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10eeb6bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eeb6c2 push 0x10f0f7e0 */
  push32((uint32_t)(0x10f0f7e0u));
  /* 10eeb6c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10eeb6c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb6cc push eax */
  push32((uint32_t)(EAX));
  /* 10eeb6cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb6cf call 0x10eef440 */
  push32(0x10eeb6d4u); f_10eef440();
  /* 10eeb6d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb6d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeb6da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb6dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eeb6df push 0x10f0f7e4 */
  push32((uint32_t)(0x10f0f7e4u));
  /* 10eeb6e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10eeb6e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb6e9 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb6ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb6ec call 0x10eef440 */
  push32(0x10eeb6f1u); f_10eef440();
  /* 10eeb6f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb6f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eeb6f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eeb6f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eeb6fc mov edx, dword ptr [0x10f0f7e4] */
  EDX = (r32((uint32_t)(0x10f0f7e4)));
  /* 10eeb702 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb703 call 0x10eeb930 */
  push32(0x10eeb708u); f_10eeb930();
  /* 10eeb708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb70b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb70f je 0x10eeb769 */
  if (C.zf) goto L_10eeb769;
  /* 10eeb711 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb713 mov eax, dword ptr [0x10f0f7dc] */
  EAX = (r32((uint32_t)(0x10f0f7dc)));
  /* 10eeb718 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb719 call 0x10edc1b0 */
  push32(0x10eeb71eu); f_10edc1b0();
  /* 10eeb71e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb721 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb723 mov ecx, dword ptr [0x10f0f7e0] */
  ECX = (r32((uint32_t)(0x10f0f7e0)));
  /* 10eeb729 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb72a call 0x10edc1b0 */
  push32(0x10eeb72fu); f_10edc1b0();
  /* 10eeb72f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb732 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb734 mov edx, dword ptr [0x10f0f7e4] */
  EDX = (r32((uint32_t)(0x10f0f7e4)));
  /* 10eeb73a push edx */
  push32((uint32_t)(EDX));
  /* 10eeb73b call 0x10edc1b0 */
  push32(0x10eeb740u); f_10edc1b0();
  /* 10eeb740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb743 mov dword ptr [0x10f0f7dc], 0 */
  w32((uint32_t)(0x10f0f7dc), (0x0u));
  /* 10eeb74d mov dword ptr [0x10f0f7e0], 0 */
  w32((uint32_t)(0x10f0f7e0), (0x0u));
  /* 10eeb757 mov dword ptr [0x10f0f7e4], 0 */
  w32((uint32_t)(0x10f0f7e4), (0x0u));
  /* 10eeb761 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeb764 jmp 0x10eeb922 */
  goto L_10eeb922;
L_10eeb769:;
  /* 10eeb769 mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb76e cmp dword ptr [eax], 0x10f0e378 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10f0e378u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb774 je 0x10eeb7b0 */
  if (C.zf) goto L_10eeb7b0;
  /* 10eeb776 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb778 mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb77e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeb780 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb781 call 0x10edc1b0 */
  push32(0x10eeb786u); f_10edc1b0();
  /* 10eeb786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb789 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb78b mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb790 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10eeb793 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb794 call 0x10edc1b0 */
  push32(0x10eeb799u); f_10edc1b0();
  /* 10eeb799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb79c push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb79e mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb7a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eeb7a7 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb7a8 call 0x10edc1b0 */
  push32(0x10eeb7adu); f_10edc1b0();
  /* 10eeb7ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eeb7b0:;
  /* 10eeb7b0 mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb7b6 mov edx, dword ptr [0x10f0f7dc] */
  EDX = (r32((uint32_t)(0x10f0f7dc)));
  /* 10eeb7bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10eeb7be mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb7c3 mov ecx, dword ptr [0x10f0f7e0] */
  ECX = (r32((uint32_t)(0x10f0f7e0)));
  /* 10eeb7c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10eeb7cc mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb7d2 mov eax, dword ptr [0x10f0f7e4] */
  EAX = (r32((uint32_t)(0x10f0f7e4)));
  /* 10eeb7d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10eeb7da mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb7e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeb7e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eeb7e4 mov byte ptr [0x10f0cfe4], al */
  w8((uint32_t)(0x10f0cfe4), (AL));
  /* 10eeb7e9 mov dword ptr [0x10f0cfe8], 1 */
  w32((uint32_t)(0x10f0cfe8), (0x1u));
  /* 10eeb7f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeb7f5 jmp 0x10eeb922 */
  goto L_10eeb922;
L_10eeb7fa:;
  /* 10eeb7fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb7fc mov ecx, dword ptr [0x10f0f7dc] */
  ECX = (r32((uint32_t)(0x10f0f7dc)));
  /* 10eeb802 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb803 call 0x10edc1b0 */
  push32(0x10eeb808u); f_10edc1b0();
  /* 10eeb808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb80b push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb80d mov edx, dword ptr [0x10f0f7e0] */
  EDX = (r32((uint32_t)(0x10f0f7e0)));
  /* 10eeb813 push edx */
  push32((uint32_t)(EDX));
  /* 10eeb814 call 0x10edc1b0 */
  push32(0x10eeb819u); f_10edc1b0();
  /* 10eeb819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb81c push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb81e mov eax, dword ptr [0x10f0f7e4] */
  EAX = (r32((uint32_t)(0x10f0f7e4)));
  /* 10eeb823 push eax */
  push32((uint32_t)(EAX));
  /* 10eeb824 call 0x10edc1b0 */
  push32(0x10eeb829u); f_10edc1b0();
  /* 10eeb829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb82c mov dword ptr [0x10f0f7dc], 0 */
  w32((uint32_t)(0x10f0f7dc), (0x0u));
  /* 10eeb836 mov dword ptr [0x10f0f7e0], 0 */
  w32((uint32_t)(0x10f0f7e0), (0x0u));
  /* 10eeb840 mov dword ptr [0x10f0f7e4], 0 */
  w32((uint32_t)(0x10f0f7e4), (0x0u));
  /* 10eeb84a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10eeb84f push 0x10f0a320 */
  push32((uint32_t)(0x10f0a320u));
  /* 10eeb854 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb856 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb858 call 0x10edb720 */
  push32(0x10eeb85du); f_10edb720();
  /* 10eeb85d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb860 mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb866 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10eeb868 mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb86e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb871 jne 0x10eeb87b */
  if (!C.zf) goto L_10eeb87b;
  /* 10eeb873 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeb876 jmp 0x10eeb922 */
  goto L_10eeb922;
L_10eeb87b:;
  /* 10eeb87b push 0x10f0a2c0 */
  push32((uint32_t)(0x10f0a2c0u));
  /* 10eeb880 mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb885 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eeb887 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb888 call 0x10edfe30 */
  push32(0x10eeb88du); f_10edfe30();
  /* 10eeb88d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb890 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10eeb895 push 0x10f0a320 */
  push32((uint32_t)(0x10f0a320u));
  /* 10eeb89a push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb89c push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb89e call 0x10edb720 */
  push32(0x10eeb8a3u); f_10edb720();
  /* 10eeb8a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb8a6 mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb8ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10eeb8af mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb8b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb8b8 jne 0x10eeb8bf */
  if (!C.zf) goto L_10eeb8bf;
  /* 10eeb8ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeb8bd jmp 0x10eeb922 */
  goto L_10eeb922;
L_10eeb8bf:;
  /* 10eeb8bf mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb8c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10eeb8c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10eeb8cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10eeb8d0 push 0x10f0a320 */
  push32((uint32_t)(0x10f0a320u));
  /* 10eeb8d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb8d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb8d9 call 0x10edb720 */
  push32(0x10eeb8deu); f_10edb720();
  /* 10eeb8de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb8e1 mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb8e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10eeb8ea mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb8f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb8f4 jne 0x10eeb8fb */
  if (!C.zf) goto L_10eeb8fb;
  /* 10eeb8f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeb8f9 jmp 0x10eeb922 */
  goto L_10eeb922;
L_10eeb8fb:;
  /* 10eeb8fb mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb900 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eeb903 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10eeb906 mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeb90c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eeb90e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eeb910 mov byte ptr [0x10f0cfe4], cl */
  w8((uint32_t)(0x10f0cfe4), (CL));
  /* 10eeb916 mov dword ptr [0x10f0cfe8], 1 */
  w32((uint32_t)(0x10f0cfe8), (0x1u));
  /* 10eeb920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eeb922:;
  /* 10eeb922 mov esp, ebp */
  ESP = (EBP);
  /* 10eeb924 pop ebp */
  EBP = (pop32());
  /* 10eeb925 ret  */
  ESPCHK(0x10eeb680u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10eeb930 (125 bytes, 49 insns) */
void f_10eeb930(void) {
  FTRACE(0x10eeb930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeb930 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeb931 mov ebp, esp */
  EBP = (ESP);
  /* 10eeb933 push ecx */
  push32((uint32_t)(ECX));
L_10eeb934:;
  /* 10eeb934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb937 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eeb93a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eeb93c je 0x10eeb9a9 */
  if (C.zf) goto L_10eeb9a9;
  /* 10eeb93e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb941 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10eeb944 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb947 jl 0x10eeb96d */
  if ((C.sf!=C.of)) goto L_10eeb96d;
  /* 10eeb949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb94c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eeb94f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb952 jg 0x10eeb96d */
  if ((!C.zf&&C.sf==C.of)) goto L_10eeb96d;
  /* 10eeb954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb957 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eeb95a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeb95d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb960 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10eeb962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb965 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb968 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eeb96b jmp 0x10eeb9a7 */
  goto L_10eeb9a7;
L_10eeb96d:;
  /* 10eeb96d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb970 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eeb973 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb976 jne 0x10eeb99e */
  if (!C.zf) goto L_10eeb99e;
  /* 10eeb978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb97b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eeb97e:;
  /* 10eeb97e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb984 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10eeb987 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eeb989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb98c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb98f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eeb992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb995 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10eeb998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeb99a jne 0x10eeb97e */
  if (!C.zf) goto L_10eeb97e;
  /* 10eeb99c jmp 0x10eeb9a7 */
  goto L_10eeb9a7;
L_10eeb99e:;
  /* 10eeb99e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeb9a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb9a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10eeb9a7:;
  /* 10eeb9a7 jmp 0x10eeb934 */
  goto L_10eeb934;
L_10eeb9a9:;
  /* 10eeb9a9 mov esp, ebp */
  ESP = (EBP);
  /* 10eeb9ab pop ebp */
  EBP = (pop32());
  /* 10eeb9ac ret  */
  ESPCHK(0x10eeb930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b9b0 @ 0x10eeb9b0 (304 bytes, 85 insns) */
void f_10eeb9b0(void) {
  FTRACE(0x10eeb9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeb9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeb9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeb9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb9b4 cmp dword ptr [0x10f0f7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb9bb je 0x10eeba7c */
  if (C.zf) goto L_10eeba7c;
  /* 10eeb9c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10eeb9c3 push 0x10f0a32c */
  push32((uint32_t)(0x10f0a32cu));
  /* 10eeb9c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeb9ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10eeb9cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeb9ce call 0x10edbb30 */
  push32(0x10eeb9d3u); f_10edbb30();
  /* 10eeb9d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb9d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eeb9d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeb9dd jne 0x10eeb9e9 */
  if (!C.zf) goto L_10eeb9e9;
  /* 10eeb9df mov eax, 1 */
  EAX = (0x1u);
  /* 10eeb9e4 jmp 0x10eebadc */
  goto L_10eebadc;
L_10eeb9e9:;
  /* 10eeb9e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb9ec push eax */
  push32((uint32_t)(EAX));
  /* 10eeb9ed call 0x10eebae0 */
  push32(0x10eeb9f2u); f_10eebae0();
  /* 10eeb9f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeb9f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeb9f7 je 0x10eeba1d */
  if (C.zf) goto L_10eeba1d;
  /* 10eeb9f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeb9fc push ecx */
  push32((uint32_t)(ECX));
  /* 10eeb9fd call 0x10eebd70 */
  push32(0x10eeba02u); f_10eebd70();
  /* 10eeba02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeba05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeba07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeba0a push edx */
  push32((uint32_t)(EDX));
  /* 10eeba0b call 0x10edc1b0 */
  push32(0x10eeba10u); f_10edc1b0();
  /* 10eeba10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeba13 mov eax, 1 */
  EAX = (0x1u);
  /* 10eeba18 jmp 0x10eebadc */
  goto L_10eebadc;
L_10eeba1d:;
  /* 10eeba1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeba20 mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeba26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeba28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eeba2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeba2d mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeba33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10eeba36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10eeba39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeba3c mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeba42 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10eeba45 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10eeba48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeba4b mov dword ptr [0x10f0e3b0], eax */
  w32((uint32_t)(0x10f0e3b0), (EAX));
  /* 10eeba50 mov ecx, dword ptr [0x10f0f7e8] */
  ECX = (r32((uint32_t)(0x10f0f7e8)));
  /* 10eeba56 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeba57 call 0x10eebd70 */
  push32(0x10eeba5cu); f_10eebd70();
  /* 10eeba5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeba5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10eeba61 mov edx, dword ptr [0x10f0f7e8] */
  EDX = (r32((uint32_t)(0x10f0f7e8)));
  /* 10eeba67 push edx */
  push32((uint32_t)(EDX));
  /* 10eeba68 call 0x10edc1b0 */
  push32(0x10eeba6du); f_10edc1b0();
  /* 10eeba6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeba70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeba73 mov dword ptr [0x10f0f7e8], eax */
  w32((uint32_t)(0x10f0f7e8), (EAX));
  /* 10eeba78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeba7a jmp 0x10eebadc */
  goto L_10eebadc;
L_10eeba7c:;
  /* 10eeba7c mov ecx, dword ptr [0x10f0e3b0] */
  ECX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeba82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eeba84 mov dword ptr [0x10f0e380], edx */
  w32((uint32_t)(0x10f0e380), (EDX));
  /* 10eeba8a mov eax, dword ptr [0x10f0e3b0] */
  EAX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeba8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10eeba92 mov dword ptr [0x10f0e384], ecx */
  w32((uint32_t)(0x10f0e384), (ECX));
  /* 10eeba98 mov edx, dword ptr [0x10f0e3b0] */
  EDX = (r32((uint32_t)(0x10f0e3b0)));
  /* 10eeba9e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eebaa1 mov dword ptr [0x10f0e388], eax */
  w32((uint32_t)(0x10f0e388), (EAX));
  /* 10eebaa6 mov dword ptr [0x10f0e3b0], 0x10f0e380 */
  w32((uint32_t)(0x10f0e3b0), (0x10f0e380u));
  /* 10eebab0 mov ecx, dword ptr [0x10f0f7e8] */
  ECX = (r32((uint32_t)(0x10f0f7e8)));
  /* 10eebab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10eebab7 call 0x10eebd70 */
  push32(0x10eebabcu); f_10eebd70();
  /* 10eebabc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebabf push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebac1 mov edx, dword ptr [0x10f0f7e8] */
  EDX = (r32((uint32_t)(0x10f0f7e8)));
  /* 10eebac7 push edx */
  push32((uint32_t)(EDX));
  /* 10eebac8 call 0x10edc1b0 */
  push32(0x10eebacdu); f_10edc1b0();
  /* 10eebacd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebad0 mov dword ptr [0x10f0f7e8], 0 */
  w32((uint32_t)(0x10f0f7e8), (0x0u));
  /* 10eebada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eebadc:;
  /* 10eebadc mov esp, ebp */
  ESP = (EBP);
  /* 10eebade pop ebp */
  EBP = (pop32());
  /* 10eebadf ret  */
  ESPCHK(0x10eeb9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bae0 @ 0x10eebae0 (525 bytes, 200 insns) */
void f_10eebae0(void) {
  FTRACE(0x10eebae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eebae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eebae1 mov ebp, esp */
  EBP = (ESP);
  /* 10eebae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eebae6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eebaed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eebaef mov ax, word ptr [0x10f0f808] */
  AX = (r16((uint32_t)(0x10f0f808)));
  /* 10eebaf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eebaf8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebafc jne 0x10eebb06 */
  if (!C.zf) goto L_10eebb06;
  /* 10eebafe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eebb01 jmp 0x10eebce9 */
  goto L_10eebce9;
L_10eebb06:;
  /* 10eebb06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebb09 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb0c push ecx */
  push32((uint32_t)(ECX));
  /* 10eebb0d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10eebb0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebb12 push edx */
  push32((uint32_t)(EDX));
  /* 10eebb13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebb15 call 0x10eef440 */
  push32(0x10eebb1au); f_10eef440();
  /* 10eebb1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebb20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebb22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebb25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebb28 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb2b push edx */
  push32((uint32_t)(EDX));
  /* 10eebb2c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10eebb2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebb31 push eax */
  push32((uint32_t)(EAX));
  /* 10eebb32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebb34 call 0x10eef440 */
  push32(0x10eebb39u); f_10eef440();
  /* 10eebb39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebb3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebb41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebb44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebb47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb4a push edx */
  push32((uint32_t)(EDX));
  /* 10eebb4b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10eebb4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebb50 push eax */
  push32((uint32_t)(EAX));
  /* 10eebb51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebb53 call 0x10eef440 */
  push32(0x10eebb58u); f_10eef440();
  /* 10eebb58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebb5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebb60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebb66 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb69 push edx */
  push32((uint32_t)(EDX));
  /* 10eebb6a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10eebb6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebb6f push eax */
  push32((uint32_t)(EAX));
  /* 10eebb70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebb72 call 0x10eef440 */
  push32(0x10eebb77u); f_10eef440();
  /* 10eebb77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebb7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebb7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebb82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebb85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb88 push edx */
  push32((uint32_t)(EDX));
  /* 10eebb89 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10eebb8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebb8e push eax */
  push32((uint32_t)(EAX));
  /* 10eebb8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebb91 call 0x10eef440 */
  push32(0x10eebb96u); f_10eef440();
  /* 10eebb96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebb99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebb9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebb9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebba4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10eebba7 push eax */
  push32((uint32_t)(EAX));
  /* 10eebba8 call 0x10eebcf0 */
  push32(0x10eebbadu); f_10eebcf0();
  /* 10eebbad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebbb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebbb3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10eebbb7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10eebbb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebbbc push edx */
  push32((uint32_t)(EDX));
  /* 10eebbbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebbbf call 0x10eef440 */
  push32(0x10eebbc4u); f_10eef440();
  /* 10eebbc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebbc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebbca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebbcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebbcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebbd2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebbd5 push edx */
  push32((uint32_t)(EDX));
  /* 10eebbd6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10eebbd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebbdb push eax */
  push32((uint32_t)(EAX));
  /* 10eebbdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebbde call 0x10eef440 */
  push32(0x10eebbe3u); f_10eef440();
  /* 10eebbe3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebbe6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebbe9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebbeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebbee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebbf1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebbf4 push edx */
  push32((uint32_t)(EDX));
  /* 10eebbf5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10eebbf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebbfa push eax */
  push32((uint32_t)(EAX));
  /* 10eebbfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebbfd call 0x10eef440 */
  push32(0x10eebc02u); f_10eef440();
  /* 10eebc02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebc08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebc0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebc0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebc10 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc13 push edx */
  push32((uint32_t)(EDX));
  /* 10eebc14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10eebc16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebc19 push eax */
  push32((uint32_t)(EAX));
  /* 10eebc1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebc1c call 0x10eef440 */
  push32(0x10eebc21u); f_10eef440();
  /* 10eebc21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebc27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebc29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebc2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebc2f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc32 push edx */
  push32((uint32_t)(EDX));
  /* 10eebc33 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10eebc35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebc38 push eax */
  push32((uint32_t)(EAX));
  /* 10eebc39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebc3b call 0x10eef440 */
  push32(0x10eebc40u); f_10eef440();
  /* 10eebc40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebc46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebc48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebc4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebc4e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc51 push edx */
  push32((uint32_t)(EDX));
  /* 10eebc52 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10eebc54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebc57 push eax */
  push32((uint32_t)(EAX));
  /* 10eebc58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebc5a call 0x10eef440 */
  push32(0x10eebc5fu); f_10eef440();
  /* 10eebc5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebc65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebc67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebc6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebc6d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc70 push edx */
  push32((uint32_t)(EDX));
  /* 10eebc71 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10eebc73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebc76 push eax */
  push32((uint32_t)(EAX));
  /* 10eebc77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebc79 call 0x10eef440 */
  push32(0x10eebc7eu); f_10eef440();
  /* 10eebc7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebc84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebc86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebc89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebc8c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebc8f push edx */
  push32((uint32_t)(EDX));
  /* 10eebc90 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10eebc92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebc95 push eax */
  push32((uint32_t)(EAX));
  /* 10eebc96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebc98 call 0x10eef440 */
  push32(0x10eebc9du); f_10eef440();
  /* 10eebc9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebca0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebca3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebca5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebcab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebcae push edx */
  push32((uint32_t)(EDX));
  /* 10eebcaf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10eebcb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebcb4 push eax */
  push32((uint32_t)(EAX));
  /* 10eebcb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebcb7 call 0x10eef440 */
  push32(0x10eebcbcu); f_10eef440();
  /* 10eebcbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebcbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebcc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebcc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebcc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebcca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebccd push edx */
  push32((uint32_t)(EDX));
  /* 10eebcce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10eebcd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebcd3 push eax */
  push32((uint32_t)(EAX));
  /* 10eebcd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebcd6 call 0x10eef440 */
  push32(0x10eebcdbu); f_10eef440();
  /* 10eebcdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebcde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eebce1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebce3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eebce6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10eebce9:;
  /* 10eebce9 mov esp, ebp */
  ESP = (EBP);
  /* 10eebceb pop ebp */
  EBP = (pop32());
  /* 10eebcec ret  */
  ESPCHK(0x10eebae0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10eebcf0 (125 bytes, 49 insns) */
void f_10eebcf0(void) {
  FTRACE(0x10eebcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eebcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eebcf1 mov ebp, esp */
  EBP = (ESP);
  /* 10eebcf3 push ecx */
  push32((uint32_t)(ECX));
L_10eebcf4:;
  /* 10eebcf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebcf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eebcfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eebcfc je 0x10eebd69 */
  if (C.zf) goto L_10eebd69;
  /* 10eebcfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10eebd04 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebd07 jl 0x10eebd2d */
  if ((C.sf!=C.of)) goto L_10eebd2d;
  /* 10eebd09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eebd0f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebd12 jg 0x10eebd2d */
  if ((!C.zf&&C.sf==C.of)) goto L_10eebd2d;
  /* 10eebd14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eebd1a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eebd1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd20 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10eebd22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebd28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eebd2b jmp 0x10eebd67 */
  goto L_10eebd67;
L_10eebd2d:;
  /* 10eebd2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eebd33 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebd36 jne 0x10eebd5e */
  if (!C.zf) goto L_10eebd5e;
  /* 10eebd38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eebd3e:;
  /* 10eebd3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebd41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebd44 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10eebd47 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10eebd49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebd4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebd4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eebd52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eebd55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10eebd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eebd5a jne 0x10eebd3e */
  if (!C.zf) goto L_10eebd3e;
  /* 10eebd5c jmp 0x10eebd67 */
  goto L_10eebd67;
L_10eebd5e:;
  /* 10eebd5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebd64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10eebd67:;
  /* 10eebd67 jmp 0x10eebcf4 */
  goto L_10eebcf4;
L_10eebd69:;
  /* 10eebd69 mov esp, ebp */
  ESP = (EBP);
  /* 10eebd6b pop ebp */
  EBP = (pop32());
  /* 10eebd6c ret  */
  ESPCHK(0x10eebcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd70 @ 0x10eebd70 (147 bytes, 52 insns) */
void f_10eebd70(void) {
  FTRACE(0x10eebd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eebd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10eebd71 mov ebp, esp */
  EBP = (ESP);
  /* 10eebd73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebd77 jne 0x10eebd7e */
  if (!C.zf) goto L_10eebd7e;
  /* 10eebd79 jmp 0x10eebe01 */
  goto L_10eebe01;
L_10eebd7e:;
  /* 10eebd7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd81 cmp dword ptr [eax + 0xc], 0x10f0f844 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10f0f844u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebd88 je 0x10eebe01 */
  if (C.zf) goto L_10eebe01;
  /* 10eebd8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebd8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebd8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eebd92 push edx */
  push32((uint32_t)(EDX));
  /* 10eebd93 call 0x10edc1b0 */
  push32(0x10eebd98u); f_10edc1b0();
  /* 10eebd98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebd9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebd9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebda0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10eebda3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eebda4 call 0x10edc1b0 */
  push32(0x10eebda9u); f_10edc1b0();
  /* 10eebda9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebdac push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebdae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebdb1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10eebdb4 push eax */
  push32((uint32_t)(EAX));
  /* 10eebdb5 call 0x10edc1b0 */
  push32(0x10eebdbau); f_10edc1b0();
  /* 10eebdba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebdbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebdbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebdc2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10eebdc5 push edx */
  push32((uint32_t)(EDX));
  /* 10eebdc6 call 0x10edc1b0 */
  push32(0x10eebdcbu); f_10edc1b0();
  /* 10eebdcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebdce push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebdd3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10eebdd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10eebdd7 call 0x10edc1b0 */
  push32(0x10eebddcu); f_10edc1b0();
  /* 10eebddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebddf push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebde1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebde4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10eebde7 push eax */
  push32((uint32_t)(EAX));
  /* 10eebde8 call 0x10edc1b0 */
  push32(0x10eebdedu); f_10edc1b0();
  /* 10eebded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebdf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebdf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eebdf5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10eebdf8 push edx */
  push32((uint32_t)(EDX));
  /* 10eebdf9 call 0x10edc1b0 */
  push32(0x10eebdfeu); f_10edc1b0();
  /* 10eebdfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eebe01:;
  /* 10eebe01 pop ebp */
  EBP = (pop32());
  /* 10eebe02 ret  */
  ESPCHK(0x10eebd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be10 @ 0x10eebe10 (928 bytes, 284 insns) */
void f_10eebe10(void) {
  FTRACE(0x10eebe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eebe10 push ebp */
  push32((uint32_t)(EBP));
  /* 10eebe11 mov ebp, esp */
  EBP = (ESP);
  /* 10eebe13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eebe16 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10eebe1d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10eebe24 cmp dword ptr [0x10f0f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebe2b je 0x10eec161 */
  if (C.zf) goto L_10eec161;
  /* 10eebe31 cmp dword ptr [0x10f0f7c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebe38 jne 0x10eebe60 */
  if (!C.zf) goto L_10eebe60;
  /* 10eebe3a push 0x10f0f7c8 */
  push32((uint32_t)(0x10f0f7c8u));
  /* 10eebe3f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10eebe44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eebe46 mov ax, word ptr [0x10f0f800] */
  AX = (r16((uint32_t)(0x10f0f800)));
  /* 10eebe4c push eax */
  push32((uint32_t)(EAX));
  /* 10eebe4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebe4f call 0x10eef440 */
  push32(0x10eebe54u); f_10eef440();
  /* 10eebe54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebe57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eebe59 je 0x10eebe60 */
  if (C.zf) goto L_10eebe60;
  /* 10eebe5b jmp 0x10eec122 */
  goto L_10eec122;
L_10eebe60:;
  /* 10eebe60 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10eebe62 push 0x10f0a338 */
  push32((uint32_t)(0x10f0a338u));
  /* 10eebe67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebe69 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10eebe6e call 0x10edb720 */
  push32(0x10eebe73u); f_10edb720();
  /* 10eebe73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebe76 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10eebe79 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10eebe7b push 0x10f0a338 */
  push32((uint32_t)(0x10f0a338u));
  /* 10eebe80 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebe82 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10eebe87 call 0x10edb720 */
  push32(0x10eebe8cu); f_10edb720();
  /* 10eebe8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebe8f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10eebe92 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10eebe94 push 0x10f0a338 */
  push32((uint32_t)(0x10f0a338u));
  /* 10eebe99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebe9b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10eebea0 call 0x10edb720 */
  push32(0x10eebea5u); f_10edb720();
  /* 10eebea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebea8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10eebeab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10eebead push 0x10f0a338 */
  push32((uint32_t)(0x10f0a338u));
  /* 10eebeb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eebeb4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10eebeb9 call 0x10edb720 */
  push32(0x10eebebeu); f_10edb720();
  /* 10eebebe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebec1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10eebec4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebec8 je 0x10eebedc */
  if (C.zf) goto L_10eebedc;
  /* 10eebeca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebece je 0x10eebedc */
  if (C.zf) goto L_10eebedc;
  /* 10eebed0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebed4 je 0x10eebedc */
  if (C.zf) goto L_10eebedc;
  /* 10eebed6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebeda jne 0x10eebee1 */
  if (!C.zf) goto L_10eebee1;
L_10eebedc:;
  /* 10eebedc jmp 0x10eec122 */
  goto L_10eec122;
L_10eebee1:;
  /* 10eebee1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eebee4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10eebee7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10eebeee jmp 0x10eebef9 */
  goto L_10eebef9;
L_10eebef0:;
  /* 10eebef0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eebef3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebef6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10eebef9:;
  /* 10eebef9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebf00 jge 0x10eebf15 */
  if ((C.sf==C.of)) goto L_10eebf15;
  /* 10eebf02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf05 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10eebf08 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10eebf0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebf10 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10eebf13 jmp 0x10eebef0 */
  goto L_10eebef0;
L_10eebf15:;
  /* 10eebf15 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10eebf18 push eax */
  push32((uint32_t)(EAX));
  /* 10eebf19 mov ecx, dword ptr [0x10f0f7c8] */
  ECX = (r32((uint32_t)(0x10f0f7c8)));
  /* 10eebf1f push ecx */
  push32((uint32_t)(ECX));
  /* 10eebf20 call dword ptr [0x10f12378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12378))), 0x10eebf26u);
  /* 10eebf26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eebf28 jne 0x10eebf2f */
  if (!C.zf) goto L_10eebf2f;
  /* 10eebf2a jmp 0x10eec122 */
  goto L_10eec122;
L_10eebf2f:;
  /* 10eebf2f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebf33 jbe 0x10eebf3a */
  if ((C.cf||C.zf)) goto L_10eebf3a;
  /* 10eebf35 jmp 0x10eec122 */
  goto L_10eec122;
L_10eebf3a:;
  /* 10eebf3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eebf3d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eebf43 mov dword ptr [0x10f0cfe0], edx */
  w32((uint32_t)(0x10f0cfe0), (EDX));
  /* 10eebf49 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebf50 jle 0x10eebfa9 */
  if ((C.zf||C.sf!=C.of)) goto L_10eebfa9;
  /* 10eebf52 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10eebf55 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10eebf58 jmp 0x10eebf63 */
  goto L_10eebf63;
L_10eebf5a:;
  /* 10eebf5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf5d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebf60 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10eebf63:;
  /* 10eebf63 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eebf68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eebf6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eebf6c je 0x10eebfa9 */
  if (C.zf) goto L_10eebfa9;
  /* 10eebf6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eebf73 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10eebf76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eebf78 je 0x10eebfa9 */
  if (C.zf) goto L_10eebfa9;
  /* 10eebf7a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebf7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eebf81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10eebf84 jmp 0x10eebf8f */
  goto L_10eebf8f;
L_10eebf86:;
  /* 10eebf86 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eebf89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebf8c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10eebf8f:;
  /* 10eebf8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eebf92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eebf94 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10eebf97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebf9a jg 0x10eebfa7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eebfa7;
  /* 10eebf9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eebf9f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebfa2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10eebfa5 jmp 0x10eebf86 */
  goto L_10eebf86;
L_10eebfa7:;
  /* 10eebfa7 jmp 0x10eebf5a */
  goto L_10eebf5a;
L_10eebfa9:;
  /* 10eebfa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebfab push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebfad push 0 */
  push32((uint32_t)(0x0u));
  /* 10eebfaf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eebfb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebfb5 push eax */
  push32((uint32_t)(EAX));
  /* 10eebfb6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10eebfbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eebfbe push ecx */
  push32((uint32_t)(ECX));
  /* 10eebfbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10eebfc1 call 0x10ee7b30 */
  push32(0x10eebfc6u); f_10ee7b30();
  /* 10eebfc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebfc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eebfcb jne 0x10eebfd2 */
  if (!C.zf) goto L_10eebfd2;
  /* 10eebfcd jmp 0x10eec122 */
  goto L_10eec122;
L_10eebfd2:;
  /* 10eebfd2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eebfd5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10eebfda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eebfdd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10eebfe0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10eebfe7 jmp 0x10eebff2 */
  goto L_10eebff2;
L_10eebfe9:;
  /* 10eebfe9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eebfec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eebfef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10eebff2:;
  /* 10eebff2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eebff9 jge 0x10eec010 */
  if ((C.sf==C.of)) goto L_10eec010;
  /* 10eebffb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eebffe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10eec002 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10eec005 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10eec008 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec00b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10eec00e jmp 0x10eebfe9 */
  goto L_10eebfe9;
L_10eec010:;
  /* 10eec010 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eec012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eec014 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eec017 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec01a push edx */
  push32((uint32_t)(EDX));
  /* 10eec01b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10eec020 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eec023 push eax */
  push32((uint32_t)(EAX));
  /* 10eec024 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eec026 call 0x10eef6e0 */
  push32(0x10eec02bu); f_10eef6e0();
  /* 10eec02b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec02e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec030 jne 0x10eec037 */
  if (!C.zf) goto L_10eec037;
  /* 10eec032 jmp 0x10eec122 */
  goto L_10eec122;
L_10eec037:;
  /* 10eec037 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eec03a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10eec03f cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec046 jle 0x10eec0a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10eec0a3;
  /* 10eec048 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10eec04b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10eec04e jmp 0x10eec059 */
  goto L_10eec059;
L_10eec050:;
  /* 10eec050 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eec053 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec056 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10eec059:;
  /* 10eec059 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eec05c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10eec05e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10eec060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eec062 je 0x10eec0a3 */
  if (C.zf) goto L_10eec0a3;
  /* 10eec064 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eec067 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eec069 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10eec06c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec06e je 0x10eec0a3 */
  if (C.zf) goto L_10eec0a3;
  /* 10eec070 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eec073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec075 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eec077 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10eec07a jmp 0x10eec085 */
  goto L_10eec085;
L_10eec07c:;
  /* 10eec07c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eec07f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec082 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10eec085:;
  /* 10eec085 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10eec088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec08a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10eec08d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec090 jg 0x10eec0a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eec0a1;
  /* 10eec092 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eec095 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eec098 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10eec09f jmp 0x10eec07c */
  goto L_10eec07c;
L_10eec0a1:;
  /* 10eec0a1 jmp 0x10eec050 */
  goto L_10eec050;
L_10eec0a3:;
  /* 10eec0a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eec0a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec0a9 mov dword ptr [0x10f0cfec], eax */
  w32((uint32_t)(0x10f0cfec), (EAX));
  /* 10eec0ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eec0b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec0b4 mov dword ptr [0x10f0cff0], ecx */
  w32((uint32_t)(0x10f0cff0), (ECX));
  /* 10eec0ba cmp dword ptr [0x10f0f7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec0c1 je 0x10eec0d4 */
  if (C.zf) goto L_10eec0d4;
  /* 10eec0c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec0c5 mov edx, dword ptr [0x10f0f7ec] */
  EDX = (r32((uint32_t)(0x10f0f7ec)));
  /* 10eec0cb push edx */
  push32((uint32_t)(EDX));
  /* 10eec0cc call 0x10edc1b0 */
  push32(0x10eec0d1u); f_10edc1b0();
  /* 10eec0d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eec0d4:;
  /* 10eec0d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eec0d7 mov dword ptr [0x10f0f7ec], eax */
  w32((uint32_t)(0x10f0f7ec), (EAX));
  /* 10eec0dc cmp dword ptr [0x10f0f7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec0e3 je 0x10eec0f6 */
  if (C.zf) goto L_10eec0f6;
  /* 10eec0e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec0e7 mov ecx, dword ptr [0x10f0f7f0] */
  ECX = (r32((uint32_t)(0x10f0f7f0)));
  /* 10eec0ed push ecx */
  push32((uint32_t)(ECX));
  /* 10eec0ee call 0x10edc1b0 */
  push32(0x10eec0f3u); f_10edc1b0();
  /* 10eec0f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eec0f6:;
  /* 10eec0f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eec0f9 mov dword ptr [0x10f0f7f0], edx */
  w32((uint32_t)(0x10f0f7f0), (EDX));
  /* 10eec0ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec101 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eec104 push eax */
  push32((uint32_t)(EAX));
  /* 10eec105 call 0x10edc1b0 */
  push32(0x10eec10au); f_10edc1b0();
  /* 10eec10a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec10d push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec10f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eec112 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec113 call 0x10edc1b0 */
  push32(0x10eec118u); f_10edc1b0();
  /* 10eec118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec11b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec11d jmp 0x10eec1ac */
  goto L_10eec1ac;
L_10eec122:;
  /* 10eec122 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eec127 push edx */
  push32((uint32_t)(EDX));
  /* 10eec128 call 0x10edc1b0 */
  push32(0x10eec12du); f_10edc1b0();
  /* 10eec12d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec130 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec132 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eec135 push eax */
  push32((uint32_t)(EAX));
  /* 10eec136 call 0x10edc1b0 */
  push32(0x10eec13bu); f_10edc1b0();
  /* 10eec13b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec13e push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec140 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eec143 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec144 call 0x10edc1b0 */
  push32(0x10eec149u); f_10edc1b0();
  /* 10eec149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec14c push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec14e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10eec151 push edx */
  push32((uint32_t)(EDX));
  /* 10eec152 call 0x10edc1b0 */
  push32(0x10eec157u); f_10edc1b0();
  /* 10eec157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec15a mov eax, 1 */
  EAX = (0x1u);
  /* 10eec15f jmp 0x10eec1ac */
  goto L_10eec1ac;
L_10eec161:;
  /* 10eec161 mov dword ptr [0x10f0cfec], 0x10f0cff6 */
  w32((uint32_t)(0x10f0cfec), (0x10f0cff6u));
  /* 10eec16b mov dword ptr [0x10f0cff0], 0x10f0cff6 */
  w32((uint32_t)(0x10f0cff0), (0x10f0cff6u));
  /* 10eec175 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec177 mov eax, dword ptr [0x10f0f7ec] */
  EAX = (r32((uint32_t)(0x10f0f7ec)));
  /* 10eec17c push eax */
  push32((uint32_t)(EAX));
  /* 10eec17d call 0x10edc1b0 */
  push32(0x10eec182u); f_10edc1b0();
  /* 10eec182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec185 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eec187 mov ecx, dword ptr [0x10f0f7f0] */
  ECX = (r32((uint32_t)(0x10f0f7f0)));
  /* 10eec18d push ecx */
  push32((uint32_t)(ECX));
  /* 10eec18e call 0x10edc1b0 */
  push32(0x10eec193u); f_10edc1b0();
  /* 10eec193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec196 mov dword ptr [0x10f0f7ec], 0 */
  w32((uint32_t)(0x10f0f7ec), (0x0u));
  /* 10eec1a0 mov dword ptr [0x10f0f7f0], 0 */
  w32((uint32_t)(0x10f0f7f0), (0x0u));
  /* 10eec1aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eec1ac:;
  /* 10eec1ac mov esp, ebp */
  ESP = (EBP);
  /* 10eec1ae pop ebp */
  EBP = (pop32());
  /* 10eec1af ret  */
  ESPCHK(0x10eebe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c1b0 @ 0x10eec1b0 (7 bytes, 5 insns) */
void f_10eec1b0(void) {
  FTRACE(0x10eec1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec1b1 mov ebp, esp */
  EBP = (ESP);
  /* 10eec1b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec1b5 pop ebp */
  EBP = (pop32());
  /* 10eec1b6 ret  */
  ESPCHK(0x10eec1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c1c0 @ 0x10eec1c0 (62 bytes, 35 insns) */
void f_10eec1c0(void) {
  FTRACE(0x10eec1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec1c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eec1c3 push esi */
  push32((uint32_t)(ESI));
  /* 10eec1c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec1c6 push eax */
  push32((uint32_t)(EAX));
  /* 10eec1c7 push eax */
  push32((uint32_t)(EAX));
  /* 10eec1c8 push eax */
  push32((uint32_t)(EAX));
  /* 10eec1c9 push eax */
  push32((uint32_t)(EAX));
  /* 10eec1ca push eax */
  push32((uint32_t)(EAX));
  /* 10eec1cb push eax */
  push32((uint32_t)(EAX));
  /* 10eec1cc push eax */
  push32((uint32_t)(EAX));
  /* 10eec1cd push eax */
  push32((uint32_t)(EAX));
  /* 10eec1ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eec1d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10eec1d4:;
  /* 10eec1d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eec1d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eec1d8 je 0x10eec1e1 */
  if (C.zf) goto L_10eec1e1;
  /* 10eec1da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10eec1db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10eec1db");
  /* 10eec1df jmp 0x10eec1d4 */
  goto L_10eec1d4;
L_10eec1e1:;
  /* 10eec1e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec1e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10eec1e7 nop  */
  /* nop */
L_10eec1e8:;
  /* 10eec1e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10eec1e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10eec1eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eec1ed je 0x10eec1f6 */
  if (C.zf) goto L_10eec1f6;
  /* 10eec1ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10eec1f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10eec1f0");
  /* 10eec1f4 jae 0x10eec1e8 */
  if (!C.cf) goto L_10eec1e8;
L_10eec1f6:;
  /* 10eec1f6 mov eax, ecx */
  EAX = (ECX);
  /* 10eec1f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec1fb pop esi */
  ESI = (pop32());
  /* 10eec1fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10eec1fd ret  */
  ESPCHK(0x10eec1c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10eec200 (56 bytes, 31 insns) */
void f_10eec200(void) {
  FTRACE(0x10eec200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec200 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec201 mov ebp, esp */
  EBP = (ESP);
  /* 10eec203 push edi */
  push32((uint32_t)(EDI));
  /* 10eec204 push esi */
  push32((uint32_t)(ESI));
  /* 10eec205 push ebx */
  push32((uint32_t)(EBX));
  /* 10eec206 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eec209 jecxz 0x10eec231 */
  x86_unimpl("jecxz @ 0x10eec209");
  /* 10eec20b mov ebx, ecx */
  EBX = (ECX);
  /* 10eec20d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec210 mov esi, edi */
  ESI = (EDI);
  /* 10eec212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec214 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10eec216 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eec218 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec21a mov edi, esi */
  EDI = (ESI);
  /* 10eec21c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10eec21f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10eec221 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10eec224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eec226 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10eec229 ja 0x10eec22f */
  if ((!C.cf&&!C.zf)) goto L_10eec22f;
  /* 10eec22b je 0x10eec231 */
  if (C.zf) goto L_10eec231;
  /* 10eec22d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10eec22e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10eec22f:;
  /* 10eec22f not ecx */
  ECX = (~(ECX));
L_10eec231:;
  /* 10eec231 mov eax, ecx */
  EAX = (ECX);
  /* 10eec233 pop ebx */
  EBX = (pop32());
  /* 10eec234 pop esi */
  ESI = (pop32());
  /* 10eec235 pop edi */
  EDI = (pop32());
  /* 10eec236 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10eec237 ret  */
  ESPCHK(0x10eec200u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c240 @ 0x10eec240 (58 bytes, 32 insns) */
void f_10eec240(void) {
  FTRACE(0x10eec240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec240 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec241 mov ebp, esp */
  EBP = (ESP);
  /* 10eec243 push esi */
  push32((uint32_t)(ESI));
  /* 10eec244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec246 push eax */
  push32((uint32_t)(EAX));
  /* 10eec247 push eax */
  push32((uint32_t)(EAX));
  /* 10eec248 push eax */
  push32((uint32_t)(EAX));
  /* 10eec249 push eax */
  push32((uint32_t)(EAX));
  /* 10eec24a push eax */
  push32((uint32_t)(EAX));
  /* 10eec24b push eax */
  push32((uint32_t)(EAX));
  /* 10eec24c push eax */
  push32((uint32_t)(EAX));
  /* 10eec24d push eax */
  push32((uint32_t)(EAX));
  /* 10eec24e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eec251 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10eec254:;
  /* 10eec254 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10eec256 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eec258 je 0x10eec261 */
  if (C.zf) goto L_10eec261;
  /* 10eec25a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10eec25b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10eec25b");
  /* 10eec25f jmp 0x10eec254 */
  goto L_10eec254;
L_10eec261:;
  /* 10eec261 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10eec264:;
  /* 10eec264 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10eec266 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10eec268 je 0x10eec274 */
  if (C.zf) goto L_10eec274;
  /* 10eec26a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10eec26b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10eec26b");
  /* 10eec26f jae 0x10eec264 */
  if (!C.cf) goto L_10eec264;
  /* 10eec271 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10eec274:;
  /* 10eec274 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec277 pop esi */
  ESI = (pop32());
  /* 10eec278 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10eec279 ret  */
  ESPCHK(0x10eec240u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c280 @ 0x10eec280 (512 bytes, 147 insns) */
void f_10eec280(void) {
  FTRACE(0x10eec280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec280 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec281 mov ebp, esp */
  EBP = (ESP);
  /* 10eec283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec286 cmp dword ptr [0x10f0f838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec28d jne 0x10eec2b2 */
  if (!C.zf) goto L_10eec2b2;
  /* 10eec28f call 0x10eecd50 */
  push32(0x10eec294u); f_10eecd50();
  /* 10eec294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec296 je 0x10eec2a2 */
  if (C.zf) goto L_10eec2a2;
  /* 10eec298 mov eax, dword ptr [0x10f12344] */
  EAX = (r32((uint32_t)(0x10f12344)));
  /* 10eec29d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eec2a0 jmp 0x10eec2a9 */
  goto L_10eec2a9;
L_10eec2a2:;
  /* 10eec2a2 mov dword ptr [ebp - 8], 0x10eecda0 */
  w32((uint32_t)(EBP + -0x8), (0x10eecda0u));
L_10eec2a9:;
  /* 10eec2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eec2ac mov dword ptr [0x10f0f838], ecx */
  w32((uint32_t)(0x10f0f838), (ECX));
L_10eec2b2:;
  /* 10eec2b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec2b6 jne 0x10eec2c2 */
  if (!C.zf) goto L_10eec2c2;
  /* 10eec2b8 call 0x10eecba0 */
  push32(0x10eec2bdu); f_10eecba0();
  /* 10eec2bd jmp 0x10eec38e */
  goto L_10eec38e;
L_10eec2c2:;
  /* 10eec2c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec2c5 mov dword ptr [0x10f0f828], edx */
  w32((uint32_t)(0x10f0f828), (EDX));
  /* 10eec2cb cmp dword ptr [0x10f0f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec2d2 je 0x10eec2f4 */
  if (C.zf) goto L_10eec2f4;
  /* 10eec2d4 mov eax, dword ptr [0x10f0f828] */
  EAX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec2d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eec2dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec2de je 0x10eec2f4 */
  if (C.zf) goto L_10eec2f4;
  /* 10eec2e0 push 0x10f0f828 */
  push32((uint32_t)(0x10f0f828u));
  /* 10eec2e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10eec2e7 push 0x10f0e0b0 */
  push32((uint32_t)(0x10f0e0b0u));
  /* 10eec2ec call 0x10eec480 */
  push32(0x10eec2f1u); f_10eec480();
  /* 10eec2f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eec2f4:;
  /* 10eec2f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec2f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec2fa mov dword ptr [0x10f0f82c], edx */
  w32((uint32_t)(0x10f0f82c), (EDX));
  /* 10eec300 cmp dword ptr [0x10f0f82c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f82c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec307 je 0x10eec329 */
  if (C.zf) goto L_10eec329;
  /* 10eec309 mov eax, dword ptr [0x10f0f82c] */
  EAX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eec30e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eec311 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec313 je 0x10eec329 */
  if (C.zf) goto L_10eec329;
  /* 10eec315 push 0x10f0f82c */
  push32((uint32_t)(0x10f0f82cu));
  /* 10eec31a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10eec31c push 0x10f0dff8 */
  push32((uint32_t)(0x10f0dff8u));
  /* 10eec321 call 0x10eec480 */
  push32(0x10eec326u); f_10eec480();
  /* 10eec326 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eec329:;
  /* 10eec329 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
  /* 10eec333 cmp dword ptr [0x10f0f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec33a je 0x10eec36d */
  if (C.zf) goto L_10eec36d;
  /* 10eec33c mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec342 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10eec345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec347 je 0x10eec36d */
  if (C.zf) goto L_10eec36d;
  /* 10eec349 cmp dword ptr [0x10f0f82c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f82c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec350 je 0x10eec366 */
  if (C.zf) goto L_10eec366;
  /* 10eec352 mov ecx, dword ptr [0x10f0f82c] */
  ECX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eec358 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eec35b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eec35d je 0x10eec366 */
  if (C.zf) goto L_10eec366;
  /* 10eec35f call 0x10eec510 */
  push32(0x10eec364u); f_10eec510();
  /* 10eec364 jmp 0x10eec36b */
  goto L_10eec36b;
L_10eec366:;
  /* 10eec366 call 0x10eec900 */
  push32(0x10eec36bu); f_10eec900();
L_10eec36b:;
  /* 10eec36b jmp 0x10eec38e */
  goto L_10eec38e;
L_10eec36d:;
  /* 10eec36d cmp dword ptr [0x10f0f82c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f82c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec374 je 0x10eec389 */
  if (C.zf) goto L_10eec389;
  /* 10eec376 mov eax, dword ptr [0x10f0f82c] */
  EAX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eec37b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eec37e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec380 je 0x10eec389 */
  if (C.zf) goto L_10eec389;
  /* 10eec382 call 0x10eecaa0 */
  push32(0x10eec387u); f_10eecaa0();
  /* 10eec387 jmp 0x10eec38e */
  goto L_10eec38e;
L_10eec389:;
  /* 10eec389 call 0x10eecba0 */
  push32(0x10eec38eu); f_10eecba0();
L_10eec38e:;
  /* 10eec38e cmp dword ptr [0x10f0f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec395 jne 0x10eec39e */
  if (!C.zf) goto L_10eec39e;
  /* 10eec397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec399 jmp 0x10eec47c */
  goto L_10eec47c;
L_10eec39e:;
  /* 10eec39e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec3a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec3a7 push edx */
  push32((uint32_t)(EDX));
  /* 10eec3a8 call 0x10eecbd0 */
  push32(0x10eec3adu); f_10eecbd0();
  /* 10eec3ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec3b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eec3b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec3b7 je 0x10eec3cc */
  if (C.zf) goto L_10eec3cc;
  /* 10eec3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec3bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eec3c1 push eax */
  push32((uint32_t)(EAX));
  /* 10eec3c2 call dword ptr [0x10f12348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12348))), 0x10eec3c8u);
  /* 10eec3c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec3ca jne 0x10eec3d3 */
  if (!C.zf) goto L_10eec3d3;
L_10eec3cc:;
  /* 10eec3cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec3ce jmp 0x10eec47c */
  goto L_10eec47c;
L_10eec3d3:;
  /* 10eec3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eec3d5 mov ecx, dword ptr [0x10f0f818] */
  ECX = (r32((uint32_t)(0x10f0f818)));
  /* 10eec3db push ecx */
  push32((uint32_t)(ECX));
  /* 10eec3dc call dword ptr [0x10f1234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1234c))), 0x10eec3e2u);
  /* 10eec3e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec3e4 jne 0x10eec3ed */
  if (!C.zf) goto L_10eec3ed;
  /* 10eec3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec3e8 jmp 0x10eec47c */
  goto L_10eec47c;
L_10eec3ed:;
  /* 10eec3ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec3f1 je 0x10eec418 */
  if (C.zf) goto L_10eec418;
  /* 10eec3f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eec3f6 mov ax, word ptr [0x10f0f818] */
  AX = (r16((uint32_t)(0x10f0f818)));
  /* 10eec3fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10eec3ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eec402 mov dx, word ptr [0x10f0f834] */
  DX = (r16((uint32_t)(0x10f0f834)));
  /* 10eec409 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10eec40d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eec410 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10eec414 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10eec418:;
  /* 10eec418 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec41c je 0x10eec477 */
  if (C.zf) goto L_10eec477;
  /* 10eec41e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10eec420 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eec423 push edx */
  push32((uint32_t)(EDX));
  /* 10eec424 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10eec429 mov eax, dword ptr [0x10f0f818] */
  EAX = (r32((uint32_t)(0x10f0f818)));
  /* 10eec42e push eax */
  push32((uint32_t)(EAX));
  /* 10eec42f call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eec435u);
  /* 10eec435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec437 jne 0x10eec43d */
  if (!C.zf) goto L_10eec43d;
  /* 10eec439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec43b jmp 0x10eec47c */
  goto L_10eec47c;
L_10eec43d:;
  /* 10eec43d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10eec43f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eec442 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec445 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec446 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10eec44b mov edx, dword ptr [0x10f0f834] */
  EDX = (r32((uint32_t)(0x10f0f834)));
  /* 10eec451 push edx */
  push32((uint32_t)(EDX));
  /* 10eec452 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eec458u);
  /* 10eec458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec45a jne 0x10eec460 */
  if (!C.zf) goto L_10eec460;
  /* 10eec45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eec45e jmp 0x10eec47c */
  goto L_10eec47c;
L_10eec460:;
  /* 10eec460 push 0xa */
  push32((uint32_t)(0xau));
  /* 10eec462 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eec465 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec46a push eax */
  push32((uint32_t)(EAX));
  /* 10eec46b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec46e push ecx */
  push32((uint32_t)(ECX));
  /* 10eec46f call 0x10edf9c0 */
  push32(0x10eec474u); f_10edf9c0();
  /* 10eec474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eec477:;
  /* 10eec477 mov eax, 1 */
  EAX = (0x1u);
L_10eec47c:;
  /* 10eec47c mov esp, ebp */
  ESP = (EBP);
  /* 10eec47e pop ebp */
  EBP = (pop32());
  /* 10eec47f ret  */
  ESPCHK(0x10eec280u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c480 @ 0x10eec480 (130 bytes, 47 insns) */
void f_10eec480(void) {
  FTRACE(0x10eec480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec480 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec481 mov ebp, esp */
  EBP = (ESP);
  /* 10eec483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec486 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10eec48d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10eec494:;
  /* 10eec494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eec497 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec49a jg 0x10eec4fe */
  if ((!C.zf&&C.sf==C.of)) goto L_10eec4fe;
  /* 10eec49c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec4a0 je 0x10eec4fe */
  if (C.zf) goto L_10eec4fe;
  /* 10eec4a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eec4a5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec4a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eec4a9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec4ab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10eec4ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eec4b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec4b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec4b6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10eec4b9 push eax */
  push32((uint32_t)(EAX));
  /* 10eec4ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eec4bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eec4bf push edx */
  push32((uint32_t)(EDX));
  /* 10eec4c0 call 0x10eef950 */
  push32(0x10eec4c5u); f_10eef950();
  /* 10eec4c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec4c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eec4cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec4cf jne 0x10eec4e2 */
  if (!C.zf) goto L_10eec4e2;
  /* 10eec4d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec4d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec4d7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10eec4db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eec4de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10eec4e0 jmp 0x10eec4fc */
  goto L_10eec4fc;
L_10eec4e2:;
  /* 10eec4e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec4e6 jge 0x10eec4f3 */
  if ((C.sf==C.of)) goto L_10eec4f3;
  /* 10eec4e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec4eb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec4ee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10eec4f1 jmp 0x10eec4fc */
  goto L_10eec4fc;
L_10eec4f3:;
  /* 10eec4f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec4f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec4f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10eec4fc:;
  /* 10eec4fc jmp 0x10eec494 */
  goto L_10eec494;
L_10eec4fe:;
  /* 10eec4fe mov esp, ebp */
  ESP = (EBP);
  /* 10eec500 pop ebp */
  EBP = (pop32());
  /* 10eec501 ret  */
  ESPCHK(0x10eec480u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c510 @ 0x10eec510 (186 bytes, 50 insns) */
void f_10eec510(void) {
  FTRACE(0x10eec510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec510 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec511 mov ebp, esp */
  EBP = (ESP);
  /* 10eec513 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec514 mov eax, dword ptr [0x10f0f828] */
  EAX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec519 push eax */
  push32((uint32_t)(EAX));
  /* 10eec51a call 0x10edfcb0 */
  push32(0x10eec51fu); f_10edfcb0();
  /* 10eec51f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eec524 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec527 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10eec52a mov dword ptr [0x10f0f824], ecx */
  w32((uint32_t)(0x10f0f824), (ECX));
  /* 10eec530 mov edx, dword ptr [0x10f0f82c] */
  EDX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eec536 push edx */
  push32((uint32_t)(EDX));
  /* 10eec537 call 0x10edfcb0 */
  push32(0x10eec53cu); f_10edfcb0();
  /* 10eec53c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec53f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eec541 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec544 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10eec547 mov dword ptr [0x10f0f81c], ecx */
  w32((uint32_t)(0x10f0f81c), (ECX));
  /* 10eec54d mov dword ptr [0x10f0f818], 0 */
  w32((uint32_t)(0x10f0f818), (0x0u));
  /* 10eec557 cmp dword ptr [0x10f0f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec55e je 0x10eec569 */
  if (C.zf) goto L_10eec569;
  /* 10eec560 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10eec567 jmp 0x10eec57b */
  goto L_10eec57b;
L_10eec569:;
  /* 10eec569 mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec56f push edx */
  push32((uint32_t)(EDX));
  /* 10eec570 call 0x10eecfb0 */
  push32(0x10eec575u); f_10eecfb0();
  /* 10eec575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eec57b:;
  /* 10eec57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec57e mov dword ptr [0x10f0f820], eax */
  w32((uint32_t)(0x10f0f820), (EAX));
  /* 10eec583 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eec585 push 0x10eec5d0 */
  push32((uint32_t)(0x10eec5d0u));
  /* 10eec58a call dword ptr [0x10f12340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12340))), 0x10eec590u);
  /* 10eec590 mov ecx, dword ptr [0x10f0f830] */
  ECX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec596 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10eec59c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec59e je 0x10eec5bc */
  if (C.zf) goto L_10eec5bc;
  /* 10eec5a0 mov edx, dword ptr [0x10f0f830] */
  EDX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec5a6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10eec5ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eec5ae je 0x10eec5bc */
  if (C.zf) goto L_10eec5bc;
  /* 10eec5b0 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec5b5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10eec5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec5ba jne 0x10eec5c6 */
  if (!C.zf) goto L_10eec5c6;
L_10eec5bc:;
  /* 10eec5bc mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
L_10eec5c6:;
  /* 10eec5c6 mov esp, ebp */
  ESP = (EBP);
  /* 10eec5c8 pop ebp */
  EBP = (pop32());
  /* 10eec5c9 ret  */
  ESPCHK(0x10eec510u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c5d0 @ 0x10eec5d0 (804 bytes, 220 insns) */
void f_10eec5d0(void) {
  FTRACE(0x10eec5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10eec5d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec5d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec5d9 push eax */
  push32((uint32_t)(EAX));
  /* 10eec5da call 0x10eecf30 */
  push32(0x10eec5dfu); f_10eecf30();
  /* 10eec5df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec5e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10eec5e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10eec5e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eec5ea push ecx */
  push32((uint32_t)(ECX));
  /* 10eec5eb mov edx, dword ptr [0x10f0f81c] */
  EDX = (r32((uint32_t)(0x10f0f81c)));
  /* 10eec5f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eec5f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec5f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10eec5fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec601 push edx */
  push32((uint32_t)(EDX));
  /* 10eec602 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec605 push eax */
  push32((uint32_t)(EAX));
  /* 10eec606 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eec60cu);
  /* 10eec60c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec60e jne 0x10eec624 */
  if (!C.zf) goto L_10eec624;
  /* 10eec610 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
  /* 10eec61a mov eax, 1 */
  EAX = (0x1u);
  /* 10eec61f jmp 0x10eec8ee */
  goto L_10eec8ee;
L_10eec624:;
  /* 10eec624 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eec627 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec628 mov edx, dword ptr [0x10f0f82c] */
  EDX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eec62e push edx */
  push32((uint32_t)(EDX));
  /* 10eec62f call 0x10eef950 */
  push32(0x10eec634u); f_10eef950();
  /* 10eec634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec639 jne 0x10eec75f */
  if (!C.zf) goto L_10eec75f;
  /* 10eec63f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10eec641 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10eec644 push eax */
  push32((uint32_t)(EAX));
  /* 10eec645 mov ecx, dword ptr [0x10f0f824] */
  ECX = (r32((uint32_t)(0x10f0f824)));
  /* 10eec64b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eec64d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec64f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10eec655 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec65b push ecx */
  push32((uint32_t)(ECX));
  /* 10eec65c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec65f push edx */
  push32((uint32_t)(EDX));
  /* 10eec660 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eec666u);
  /* 10eec666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec668 jne 0x10eec67e */
  if (!C.zf) goto L_10eec67e;
  /* 10eec66a mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
  /* 10eec674 mov eax, 1 */
  EAX = (0x1u);
  /* 10eec679 jmp 0x10eec8ee */
  goto L_10eec8ee;
L_10eec67e:;
  /* 10eec67e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10eec681 push eax */
  push32((uint32_t)(EAX));
  /* 10eec682 mov ecx, dword ptr [0x10f0f828] */
  ECX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec688 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec689 call 0x10eef950 */
  push32(0x10eec68eu); f_10eef950();
  /* 10eec68e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec693 jne 0x10eec6c0 */
  if (!C.zf) goto L_10eec6c0;
  /* 10eec695 mov edx, dword ptr [0x10f0f830] */
  EDX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec69b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10eec6a1 mov dword ptr [0x10f0f830], edx */
  w32((uint32_t)(0x10f0f830), (EDX));
  /* 10eec6a7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec6aa mov dword ptr [0x10f0f834], eax */
  w32((uint32_t)(0x10f0f834), (EAX));
  /* 10eec6af mov ecx, dword ptr [0x10f0f834] */
  ECX = (r32((uint32_t)(0x10f0f834)));
  /* 10eec6b5 mov dword ptr [0x10f0f818], ecx */
  w32((uint32_t)(0x10f0f818), (ECX));
  /* 10eec6bb jmp 0x10eec75f */
  goto L_10eec75f;
L_10eec6c0:;
  /* 10eec6c0 mov edx, dword ptr [0x10f0f830] */
  EDX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec6c6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10eec6c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eec6cb jne 0x10eec75f */
  if (!C.zf) goto L_10eec75f;
  /* 10eec6d1 cmp dword ptr [0x10f0f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec6d8 je 0x10eec72d */
  if (C.zf) goto L_10eec72d;
  /* 10eec6da mov eax, dword ptr [0x10f0f820] */
  EAX = (r32((uint32_t)(0x10f0f820)));
  /* 10eec6df push eax */
  push32((uint32_t)(EAX));
  /* 10eec6e0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eec6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec6e4 mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec6ea push edx */
  push32((uint32_t)(EDX));
  /* 10eec6eb call 0x10eefa20 */
  push32(0x10eec6f0u); f_10eefa20();
  /* 10eec6f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec6f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec6f5 jne 0x10eec72d */
  if (!C.zf) goto L_10eec72d;
  /* 10eec6f7 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec6fc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10eec6fe mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
  /* 10eec703 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec706 mov dword ptr [0x10f0f834], ecx */
  w32((uint32_t)(0x10f0f834), (ECX));
  /* 10eec70c mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec712 push edx */
  push32((uint32_t)(EDX));
  /* 10eec713 call 0x10edfcb0 */
  push32(0x10eec718u); f_10edfcb0();
  /* 10eec718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec71b cmp eax, dword ptr [0x10f0f820] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0f820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec721 jne 0x10eec72b */
  if (!C.zf) goto L_10eec72b;
  /* 10eec723 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec726 mov dword ptr [0x10f0f818], eax */
  w32((uint32_t)(0x10f0f818), (EAX));
L_10eec72b:;
  /* 10eec72b jmp 0x10eec75f */
  goto L_10eec75f;
L_10eec72d:;
  /* 10eec72d mov ecx, dword ptr [0x10f0f830] */
  ECX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec733 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eec736 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec738 jne 0x10eec75f */
  if (!C.zf) goto L_10eec75f;
  /* 10eec73a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec73d push edx */
  push32((uint32_t)(EDX));
  /* 10eec73e call 0x10eecc70 */
  push32(0x10eec743u); f_10eecc70();
  /* 10eec743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec748 je 0x10eec75f */
  if (C.zf) goto L_10eec75f;
  /* 10eec74a mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec74f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10eec751 mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
  /* 10eec756 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec759 mov dword ptr [0x10f0f834], ecx */
  w32((uint32_t)(0x10f0f834), (ECX));
L_10eec75f:;
  /* 10eec75f mov edx, dword ptr [0x10f0f830] */
  EDX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec765 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10eec76b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec771 je 0x10eec8e1 */
  if (C.zf) goto L_10eec8e1;
  /* 10eec777 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10eec779 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10eec77c push eax */
  push32((uint32_t)(EAX));
  /* 10eec77d mov ecx, dword ptr [0x10f0f824] */
  ECX = (r32((uint32_t)(0x10f0f824)));
  /* 10eec783 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eec785 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec787 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10eec78d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec793 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec794 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec797 push edx */
  push32((uint32_t)(EDX));
  /* 10eec798 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eec79eu);
  /* 10eec79e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec7a0 jne 0x10eec7b6 */
  if (!C.zf) goto L_10eec7b6;
  /* 10eec7a2 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
  /* 10eec7ac mov eax, 1 */
  EAX = (0x1u);
  /* 10eec7b1 jmp 0x10eec8ee */
  goto L_10eec8ee;
L_10eec7b6:;
  /* 10eec7b6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10eec7b9 push eax */
  push32((uint32_t)(EAX));
  /* 10eec7ba mov ecx, dword ptr [0x10f0f828] */
  ECX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec7c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec7c1 call 0x10eef950 */
  push32(0x10eec7c6u); f_10eef950();
  /* 10eec7c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec7c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec7cb jne 0x10eec880 */
  if (!C.zf) goto L_10eec880;
  /* 10eec7d1 mov edx, dword ptr [0x10f0f830] */
  EDX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec7d7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10eec7da mov dword ptr [0x10f0f830], edx */
  w32((uint32_t)(0x10f0f830), (EDX));
  /* 10eec7e0 cmp dword ptr [0x10f0f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec7e7 je 0x10eec80a */
  if (C.zf) goto L_10eec80a;
  /* 10eec7e9 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec7ee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10eec7f1 mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
  /* 10eec7f6 cmp dword ptr [0x10f0f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec7fd jne 0x10eec808 */
  if (!C.zf) goto L_10eec808;
  /* 10eec7ff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec802 mov dword ptr [0x10f0f818], ecx */
  w32((uint32_t)(0x10f0f818), (ECX));
L_10eec808:;
  /* 10eec808 jmp 0x10eec87e */
  goto L_10eec87e;
L_10eec80a:;
  /* 10eec80a cmp dword ptr [0x10f0f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec811 je 0x10eec85f */
  if (C.zf) goto L_10eec85f;
  /* 10eec813 mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec819 push edx */
  push32((uint32_t)(EDX));
  /* 10eec81a call 0x10edfcb0 */
  push32(0x10eec81fu); f_10edfcb0();
  /* 10eec81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec822 cmp eax, dword ptr [0x10f0f820] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0f820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec828 jne 0x10eec85f */
  if (!C.zf) goto L_10eec85f;
  /* 10eec82a push 1 */
  push32((uint32_t)(0x1u));
  /* 10eec82c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec82f push eax */
  push32((uint32_t)(EAX));
  /* 10eec830 call 0x10eeccc0 */
  push32(0x10eec835u); f_10eeccc0();
  /* 10eec835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec83a je 0x10eec85d */
  if (C.zf) goto L_10eec85d;
  /* 10eec83c mov ecx, dword ptr [0x10f0f830] */
  ECX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec842 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10eec845 mov dword ptr [0x10f0f830], ecx */
  w32((uint32_t)(0x10f0f830), (ECX));
  /* 10eec84b cmp dword ptr [0x10f0f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec852 jne 0x10eec85d */
  if (!C.zf) goto L_10eec85d;
  /* 10eec854 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec857 mov dword ptr [0x10f0f818], edx */
  w32((uint32_t)(0x10f0f818), (EDX));
L_10eec85d:;
  /* 10eec85d jmp 0x10eec87e */
  goto L_10eec87e;
L_10eec85f:;
  /* 10eec85f mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec864 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10eec867 mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
  /* 10eec86c cmp dword ptr [0x10f0f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec873 jne 0x10eec87e */
  if (!C.zf) goto L_10eec87e;
  /* 10eec875 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec878 mov dword ptr [0x10f0f818], ecx */
  w32((uint32_t)(0x10f0f818), (ECX));
L_10eec87e:;
  /* 10eec87e jmp 0x10eec8e1 */
  goto L_10eec8e1;
L_10eec880:;
  /* 10eec880 cmp dword ptr [0x10f0f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec887 jne 0x10eec8e1 */
  if (!C.zf) goto L_10eec8e1;
  /* 10eec889 cmp dword ptr [0x10f0f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec890 je 0x10eec8e1 */
  if (C.zf) goto L_10eec8e1;
  /* 10eec892 mov edx, dword ptr [0x10f0f820] */
  EDX = (r32((uint32_t)(0x10f0f820)));
  /* 10eec898 push edx */
  push32((uint32_t)(EDX));
  /* 10eec899 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10eec89c push eax */
  push32((uint32_t)(EAX));
  /* 10eec89d mov ecx, dword ptr [0x10f0f828] */
  ECX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec8a4 call 0x10eefa20 */
  push32(0x10eec8a9u); f_10eefa20();
  /* 10eec8a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec8ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec8ae jne 0x10eec8e1 */
  if (!C.zf) goto L_10eec8e1;
  /* 10eec8b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eec8b2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec8b5 push edx */
  push32((uint32_t)(EDX));
  /* 10eec8b6 call 0x10eeccc0 */
  push32(0x10eec8bbu); f_10eeccc0();
  /* 10eec8bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec8be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec8c0 je 0x10eec8e1 */
  if (C.zf) goto L_10eec8e1;
  /* 10eec8c2 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec8c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10eec8ca mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
  /* 10eec8cf cmp dword ptr [0x10f0f818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec8d6 jne 0x10eec8e1 */
  if (!C.zf) goto L_10eec8e1;
  /* 10eec8d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec8db mov dword ptr [0x10f0f818], ecx */
  w32((uint32_t)(0x10f0f818), (ECX));
L_10eec8e1:;
  /* 10eec8e1 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec8e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10eec8e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eec8eb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec8ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10eec8ee:;
  /* 10eec8ee mov esp, ebp */
  ESP = (EBP);
  /* 10eec8f0 pop ebp */
  EBP = (pop32());
  /* 10eec8f1 ret 4 */
  ESPCHK(0x10eec5d0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c900 @ 0x10eec900 (116 bytes, 33 insns) */
void f_10eec900(void) {
  FTRACE(0x10eec900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec900 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec901 mov ebp, esp */
  EBP = (ESP);
  /* 10eec903 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec904 mov eax, dword ptr [0x10f0f828] */
  EAX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec909 push eax */
  push32((uint32_t)(EAX));
  /* 10eec90a call 0x10edfcb0 */
  push32(0x10eec90fu); f_10edfcb0();
  /* 10eec90f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eec914 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec917 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10eec91a mov dword ptr [0x10f0f824], ecx */
  w32((uint32_t)(0x10f0f824), (ECX));
  /* 10eec920 cmp dword ptr [0x10f0f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec927 je 0x10eec932 */
  if (C.zf) goto L_10eec932;
  /* 10eec929 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10eec930 jmp 0x10eec944 */
  goto L_10eec944;
L_10eec932:;
  /* 10eec932 mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec938 push edx */
  push32((uint32_t)(EDX));
  /* 10eec939 call 0x10eecfb0 */
  push32(0x10eec93eu); f_10eecfb0();
  /* 10eec93e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec941 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eec944:;
  /* 10eec944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eec947 mov dword ptr [0x10f0f820], eax */
  w32((uint32_t)(0x10f0f820), (EAX));
  /* 10eec94c push 1 */
  push32((uint32_t)(0x1u));
  /* 10eec94e push 0x10eec980 */
  push32((uint32_t)(0x10eec980u));
  /* 10eec953 call dword ptr [0x10f12340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12340))), 0x10eec959u);
  /* 10eec959 mov ecx, dword ptr [0x10f0f830] */
  ECX = (r32((uint32_t)(0x10f0f830)));
  /* 10eec95f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10eec962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eec964 jne 0x10eec970 */
  if (!C.zf) goto L_10eec970;
  /* 10eec966 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
L_10eec970:;
  /* 10eec970 mov esp, ebp */
  ESP = (EBP);
  /* 10eec972 pop ebp */
  EBP = (pop32());
  /* 10eec973 ret  */
  ESPCHK(0x10eec900u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c980 @ 0x10eec980 (287 bytes, 86 insns) */
void f_10eec980(void) {
  FTRACE(0x10eec980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eec980 push ebp */
  push32((uint32_t)(EBP));
  /* 10eec981 mov ebp, esp */
  EBP = (ESP);
  /* 10eec983 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eec989 push eax */
  push32((uint32_t)(EAX));
  /* 10eec98a call 0x10eecf30 */
  push32(0x10eec98fu); f_10eecf30();
  /* 10eec98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec992 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10eec995 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10eec997 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eec99a push ecx */
  push32((uint32_t)(ECX));
  /* 10eec99b mov edx, dword ptr [0x10f0f824] */
  EDX = (r32((uint32_t)(0x10f0f824)));
  /* 10eec9a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eec9a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eec9a5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10eec9ab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec9b1 push edx */
  push32((uint32_t)(EDX));
  /* 10eec9b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec9b5 push eax */
  push32((uint32_t)(EAX));
  /* 10eec9b6 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eec9bcu);
  /* 10eec9bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec9be jne 0x10eec9d4 */
  if (!C.zf) goto L_10eec9d4;
  /* 10eec9c0 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
  /* 10eec9ca mov eax, 1 */
  EAX = (0x1u);
  /* 10eec9cf jmp 0x10eeca99 */
  goto L_10eeca99;
L_10eec9d4:;
  /* 10eec9d4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eec9d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10eec9d8 mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eec9de push edx */
  push32((uint32_t)(EDX));
  /* 10eec9df call 0x10eef950 */
  push32(0x10eec9e4u); f_10eef950();
  /* 10eec9e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eec9e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eec9e9 jne 0x10eeca29 */
  if (!C.zf) goto L_10eeca29;
  /* 10eec9eb cmp dword ptr [0x10f0f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eec9f2 jne 0x10eeca06 */
  if (!C.zf) goto L_10eeca06;
  /* 10eec9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10eec9f6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eec9f9 push eax */
  push32((uint32_t)(EAX));
  /* 10eec9fa call 0x10eeccc0 */
  push32(0x10eec9ffu); f_10eeccc0();
  /* 10eec9ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeca02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeca04 je 0x10eeca27 */
  if (C.zf) goto L_10eeca27;
L_10eeca06:;
  /* 10eeca06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eeca09 mov dword ptr [0x10f0f834], ecx */
  w32((uint32_t)(0x10f0f834), (ECX));
  /* 10eeca0f mov edx, dword ptr [0x10f0f834] */
  EDX = (r32((uint32_t)(0x10f0f834)));
  /* 10eeca15 mov dword ptr [0x10f0f818], edx */
  w32((uint32_t)(0x10f0f818), (EDX));
  /* 10eeca1b mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eeca20 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10eeca22 mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
L_10eeca27:;
  /* 10eeca27 jmp 0x10eeca8c */
  goto L_10eeca8c;
L_10eeca29:;
  /* 10eeca29 cmp dword ptr [0x10f0f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeca30 jne 0x10eeca8c */
  if (!C.zf) goto L_10eeca8c;
  /* 10eeca32 cmp dword ptr [0x10f0f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeca39 je 0x10eeca8c */
  if (C.zf) goto L_10eeca8c;
  /* 10eeca3b mov ecx, dword ptr [0x10f0f820] */
  ECX = (r32((uint32_t)(0x10f0f820)));
  /* 10eeca41 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeca42 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10eeca45 push edx */
  push32((uint32_t)(EDX));
  /* 10eeca46 mov eax, dword ptr [0x10f0f828] */
  EAX = (r32((uint32_t)(0x10f0f828)));
  /* 10eeca4b push eax */
  push32((uint32_t)(EAX));
  /* 10eeca4c call 0x10eefa20 */
  push32(0x10eeca51u); f_10eefa20();
  /* 10eeca51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeca54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeca56 jne 0x10eeca8c */
  if (!C.zf) goto L_10eeca8c;
  /* 10eeca58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eeca5a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eeca5d push ecx */
  push32((uint32_t)(ECX));
  /* 10eeca5e call 0x10eeccc0 */
  push32(0x10eeca63u); f_10eeccc0();
  /* 10eeca63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeca66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeca68 je 0x10eeca8c */
  if (C.zf) goto L_10eeca8c;
  /* 10eeca6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eeca6d mov dword ptr [0x10f0f834], edx */
  w32((uint32_t)(0x10f0f834), (EDX));
  /* 10eeca73 mov eax, dword ptr [0x10f0f834] */
  EAX = (r32((uint32_t)(0x10f0f834)));
  /* 10eeca78 mov dword ptr [0x10f0f818], eax */
  w32((uint32_t)(0x10f0f818), (EAX));
  /* 10eeca7d mov ecx, dword ptr [0x10f0f830] */
  ECX = (r32((uint32_t)(0x10f0f830)));
  /* 10eeca83 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10eeca86 mov dword ptr [0x10f0f830], ecx */
  w32((uint32_t)(0x10f0f830), (ECX));
L_10eeca8c:;
  /* 10eeca8c mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eeca91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10eeca94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eeca96 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeca98 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10eeca99:;
  /* 10eeca99 mov esp, ebp */
  ESP = (EBP);
  /* 10eeca9b pop ebp */
  EBP = (pop32());
  /* 10eeca9c ret 4 */
  ESPCHK(0x10eec980u, _esp0);
  ESP += 8; return;
}

/* FUN_1001caa0 @ 0x10eecaa0 (69 bytes, 20 insns) */
void f_10eecaa0(void) {
  FTRACE(0x10eecaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10eecaa3 mov eax, dword ptr [0x10f0f82c] */
  EAX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eecaa8 push eax */
  push32((uint32_t)(EAX));
  /* 10eecaa9 call 0x10edfcb0 */
  push32(0x10eecaaeu); f_10edfcb0();
  /* 10eecaae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecab1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eecab3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecab6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10eecab9 mov dword ptr [0x10f0f81c], ecx */
  w32((uint32_t)(0x10f0f81c), (ECX));
  /* 10eecabf push 1 */
  push32((uint32_t)(0x1u));
  /* 10eecac1 push 0x10eecaf0 */
  push32((uint32_t)(0x10eecaf0u));
  /* 10eecac6 call dword ptr [0x10f12340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12340))), 0x10eecaccu);
  /* 10eecacc mov edx, dword ptr [0x10f0f830] */
  EDX = (r32((uint32_t)(0x10f0f830)));
  /* 10eecad2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10eecad5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eecad7 jne 0x10eecae3 */
  if (!C.zf) goto L_10eecae3;
  /* 10eecad9 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
L_10eecae3:;
  /* 10eecae3 pop ebp */
  EBP = (pop32());
  /* 10eecae4 ret  */
  ESPCHK(0x10eecaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001caf0 @ 0x10eecaf0 (172 bytes, 54 insns) */
void f_10eecaf0(void) {
  FTRACE(0x10eecaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecaf1 mov ebp, esp */
  EBP = (ESP);
  /* 10eecaf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecaf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecaf9 push eax */
  push32((uint32_t)(EAX));
  /* 10eecafa call 0x10eecf30 */
  push32(0x10eecaffu); f_10eecf30();
  /* 10eecaff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecb02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10eecb05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10eecb07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eecb0a push ecx */
  push32((uint32_t)(ECX));
  /* 10eecb0b mov edx, dword ptr [0x10f0f81c] */
  EDX = (r32((uint32_t)(0x10f0f81c)));
  /* 10eecb11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eecb13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecb15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10eecb1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecb21 push edx */
  push32((uint32_t)(EDX));
  /* 10eecb22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eecb25 push eax */
  push32((uint32_t)(EAX));
  /* 10eecb26 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eecb2cu);
  /* 10eecb2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecb2e jne 0x10eecb41 */
  if (!C.zf) goto L_10eecb41;
  /* 10eecb30 mov dword ptr [0x10f0f830], 0 */
  w32((uint32_t)(0x10f0f830), (0x0u));
  /* 10eecb3a mov eax, 1 */
  EAX = (0x1u);
  /* 10eecb3f jmp 0x10eecb96 */
  goto L_10eecb96;
L_10eecb41:;
  /* 10eecb41 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10eecb44 push ecx */
  push32((uint32_t)(ECX));
  /* 10eecb45 mov edx, dword ptr [0x10f0f82c] */
  EDX = (r32((uint32_t)(0x10f0f82c)));
  /* 10eecb4b push edx */
  push32((uint32_t)(EDX));
  /* 10eecb4c call 0x10eef950 */
  push32(0x10eecb51u); f_10eef950();
  /* 10eecb51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecb54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecb56 jne 0x10eecb89 */
  if (!C.zf) goto L_10eecb89;
  /* 10eecb58 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eecb5b push eax */
  push32((uint32_t)(EAX));
  /* 10eecb5c call 0x10eecc70 */
  push32(0x10eecb61u); f_10eecc70();
  /* 10eecb61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecb64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecb66 je 0x10eecb89 */
  if (C.zf) goto L_10eecb89;
  /* 10eecb68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10eecb6b mov dword ptr [0x10f0f834], ecx */
  w32((uint32_t)(0x10f0f834), (ECX));
  /* 10eecb71 mov edx, dword ptr [0x10f0f834] */
  EDX = (r32((uint32_t)(0x10f0f834)));
  /* 10eecb77 mov dword ptr [0x10f0f818], edx */
  w32((uint32_t)(0x10f0f818), (EDX));
  /* 10eecb7d mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eecb82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10eecb84 mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
L_10eecb89:;
  /* 10eecb89 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eecb8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10eecb91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10eecb93 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecb95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10eecb96:;
  /* 10eecb96 mov esp, ebp */
  ESP = (EBP);
  /* 10eecb98 pop ebp */
  EBP = (pop32());
  /* 10eecb99 ret 4 */
  ESPCHK(0x10eecaf0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001cba0 @ 0x10eecba0 (43 bytes, 11 insns) */
void f_10eecba0(void) {
  FTRACE(0x10eecba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecba1 mov ebp, esp */
  EBP = (ESP);
  /* 10eecba3 mov eax, dword ptr [0x10f0f830] */
  EAX = (r32((uint32_t)(0x10f0f830)));
  /* 10eecba8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10eecbad mov dword ptr [0x10f0f830], eax */
  w32((uint32_t)(0x10f0f830), (EAX));
  /* 10eecbb2 call dword ptr [0x10f1233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1233c))), 0x10eecbb8u);
  /* 10eecbb8 mov dword ptr [0x10f0f834], eax */
  w32((uint32_t)(0x10f0f834), (EAX));
  /* 10eecbbd mov ecx, dword ptr [0x10f0f834] */
  ECX = (r32((uint32_t)(0x10f0f834)));
  /* 10eecbc3 mov dword ptr [0x10f0f818], ecx */
  w32((uint32_t)(0x10f0f818), (ECX));
  /* 10eecbc9 pop ebp */
  EBP = (pop32());
  /* 10eecbca ret  */
  ESPCHK(0x10eecba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cbd0 @ 0x10eecbd0 (155 bytes, 57 insns) */
void f_10eecbd0(void) {
  FTRACE(0x10eecbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecbd1 mov ebp, esp */
  EBP = (ESP);
  /* 10eecbd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecbd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecbda je 0x10eecbfb */
  if (C.zf) goto L_10eecbfb;
  /* 10eecbdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecbdf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eecbe2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eecbe4 je 0x10eecbfb */
  if (C.zf) goto L_10eecbfb;
  /* 10eecbe6 push 0x10f0a9c8 */
  push32((uint32_t)(0x10f0a9c8u));
  /* 10eecbeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecbee push edx */
  push32((uint32_t)(EDX));
  /* 10eecbef call 0x10ee42c0 */
  push32(0x10eecbf4u); f_10ee42c0();
  /* 10eecbf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecbf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecbf9 jne 0x10eecc23 */
  if (!C.zf) goto L_10eecc23;
L_10eecbfb:;
  /* 10eecbfb push 8 */
  push32((uint32_t)(0x8u));
  /* 10eecbfd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10eecc00 push eax */
  push32((uint32_t)(EAX));
  /* 10eecc01 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10eecc06 mov ecx, dword ptr [0x10f0f834] */
  ECX = (r32((uint32_t)(0x10f0f834)));
  /* 10eecc0c push ecx */
  push32((uint32_t)(ECX));
  /* 10eecc0d call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eecc13u);
  /* 10eecc13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecc15 jne 0x10eecc1b */
  if (!C.zf) goto L_10eecc1b;
  /* 10eecc17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eecc19 jmp 0x10eecc67 */
  goto L_10eecc67;
L_10eecc1b:;
  /* 10eecc1b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10eecc1e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10eecc21 jmp 0x10eecc5b */
  goto L_10eecc5b;
L_10eecc23:;
  /* 10eecc23 push 0x10f0a9c4 */
  push32((uint32_t)(0x10f0a9c4u));
  /* 10eecc28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecc2b push eax */
  push32((uint32_t)(EAX));
  /* 10eecc2c call 0x10ee42c0 */
  push32(0x10eecc31u); f_10ee42c0();
  /* 10eecc31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecc34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecc36 jne 0x10eecc5b */
  if (!C.zf) goto L_10eecc5b;
  /* 10eecc38 push 8 */
  push32((uint32_t)(0x8u));
  /* 10eecc3a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10eecc3d push ecx */
  push32((uint32_t)(ECX));
  /* 10eecc3e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10eecc40 mov edx, dword ptr [0x10f0f834] */
  EDX = (r32((uint32_t)(0x10f0f834)));
  /* 10eecc46 push edx */
  push32((uint32_t)(EDX));
  /* 10eecc47 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eecc4du);
  /* 10eecc4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecc4f jne 0x10eecc55 */
  if (!C.zf) goto L_10eecc55;
  /* 10eecc51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eecc53 jmp 0x10eecc67 */
  goto L_10eecc67;
L_10eecc55:;
  /* 10eecc55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10eecc58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10eecc5b:;
  /* 10eecc5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecc5e push ecx */
  push32((uint32_t)(ECX));
  /* 10eecc5f call 0x10ee9e40 */
  push32(0x10eecc64u); f_10ee9e40();
  /* 10eecc64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eecc67:;
  /* 10eecc67 mov esp, ebp */
  ESP = (EBP);
  /* 10eecc69 pop ebp */
  EBP = (pop32());
  /* 10eecc6a ret  */
  ESPCHK(0x10eecbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc70 @ 0x10eecc70 (79 bytes, 26 insns) */
void f_10eecc70(void) {
  FTRACE(0x10eecc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecc71 mov ebp, esp */
  EBP = (ESP);
  /* 10eecc73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecc76 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10eecc7a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10eecc7e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10eecc85 jmp 0x10eecc90 */
  goto L_10eecc90;
L_10eecc87:;
  /* 10eecc87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eecc8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecc8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10eecc90:;
  /* 10eecc90 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecc94 jae 0x10eeccb6 */
  if (!C.cf) goto L_10eeccb6;
  /* 10eecc96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eecc99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10eecc9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eecca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10eecca4 mov cx, word ptr [eax*2 + 0x10f0dfe4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10f0dfe4)));
  /* 10eeccac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeccae jne 0x10eeccb4 */
  if (!C.zf) goto L_10eeccb4;
  /* 10eeccb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeccb2 jmp 0x10eeccbb */
  goto L_10eeccbb;
L_10eeccb4:;
  /* 10eeccb4 jmp 0x10eecc87 */
  goto L_10eecc87;
L_10eeccb6:;
  /* 10eeccb6 mov eax, 1 */
  EAX = (0x1u);
L_10eeccbb:;
  /* 10eeccbb mov esp, ebp */
  ESP = (EBP);
  /* 10eeccbd pop ebp */
  EBP = (pop32());
  /* 10eeccbe ret  */
  ESPCHK(0x10eecc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ccc0 @ 0x10eeccc0 (135 bytes, 48 insns) */
void f_10eeccc0(void) {
  FTRACE(0x10eeccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eeccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eeccc1 mov ebp, esp */
  EBP = (ESP);
  /* 10eeccc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eeccc6 push esi */
  push32((uint32_t)(ESI));
  /* 10eeccc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eeccca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eecccf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeccd4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eeccd9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10eeccdc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eecce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eecce4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10eecce6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10eecce9 push ecx */
  push32((uint32_t)(ECX));
  /* 10eeccea push 1 */
  push32((uint32_t)(0x1u));
  /* 10eeccec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eeccef push edx */
  push32((uint32_t)(EDX));
  /* 10eeccf0 call dword ptr [0x10f0f838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f838))), 0x10eeccf6u);
  /* 10eeccf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eeccf8 jne 0x10eeccfe */
  if (!C.zf) goto L_10eeccfe;
  /* 10eeccfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eeccfc jmp 0x10eecd42 */
  goto L_10eecd42;
L_10eeccfe:;
  /* 10eeccfe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10eecd01 push eax */
  push32((uint32_t)(EAX));
  /* 10eecd02 call 0x10eecf30 */
  push32(0x10eecd07u); f_10eecf30();
  /* 10eecd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecd0a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecd0d je 0x10eecd3d */
  if (C.zf) goto L_10eecd3d;
  /* 10eecd0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecd13 je 0x10eecd3d */
  if (C.zf) goto L_10eecd3d;
  /* 10eecd15 mov ecx, dword ptr [0x10f0f828] */
  ECX = (r32((uint32_t)(0x10f0f828)));
  /* 10eecd1b push ecx */
  push32((uint32_t)(ECX));
  /* 10eecd1c call 0x10eecfb0 */
  push32(0x10eecd21u); f_10eecfb0();
  /* 10eecd21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecd24 mov esi, eax */
  ESI = (EAX);
  /* 10eecd26 mov edx, dword ptr [0x10f0f828] */
  EDX = (r32((uint32_t)(0x10f0f828)));
  /* 10eecd2c push edx */
  push32((uint32_t)(EDX));
  /* 10eecd2d call 0x10edfcb0 */
  push32(0x10eecd32u); f_10edfcb0();
  /* 10eecd32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecd35 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecd37 jne 0x10eecd3d */
  if (!C.zf) goto L_10eecd3d;
  /* 10eecd39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eecd3b jmp 0x10eecd42 */
  goto L_10eecd42;
L_10eecd3d:;
  /* 10eecd3d mov eax, 1 */
  EAX = (0x1u);
L_10eecd42:;
  /* 10eecd42 pop esi */
  ESI = (pop32());
  /* 10eecd43 mov esp, ebp */
  ESP = (EBP);
  /* 10eecd45 pop ebp */
  EBP = (pop32());
  /* 10eecd46 ret  */
  ESPCHK(0x10eeccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cd50 @ 0x10eecd50 (77 bytes, 18 insns) */
void f_10eecd50(void) {
  FTRACE(0x10eecd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecd50 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecd51 mov ebp, esp */
  EBP = (ESP);
  /* 10eecd53 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecd59 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10eecd63 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10eecd69 push eax */
  push32((uint32_t)(EAX));
  /* 10eecd6a call dword ptr [0x10f12338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12338))), 0x10eecd70u);
  /* 10eecd70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eecd72 je 0x10eecd89 */
  if (C.zf) goto L_10eecd89;
  /* 10eecd74 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecd7b jne 0x10eecd89 */
  if (!C.zf) goto L_10eecd89;
  /* 10eecd7d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10eecd87 jmp 0x10eecd93 */
  goto L_10eecd93;
L_10eecd89:;
  /* 10eecd89 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10eecd93:;
  /* 10eecd93 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10eecd99 mov esp, ebp */
  ESP = (EBP);
  /* 10eecd9b pop ebp */
  EBP = (pop32());
  /* 10eecd9c ret  */
  ESPCHK(0x10eecd50u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10eecda0 (388 bytes, 118 insns) */
void f_10eecda0(void) {
  FTRACE(0x10eecda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecda0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecda1 mov ebp, esp */
  EBP = (ESP);
  /* 10eecda3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecda6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10eecdad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10eecdb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10eecdbb:;
  /* 10eecdbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eecdbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecdc1 jg 0x10eecf08 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eecf08;
  /* 10eecdc7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eecdca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecdcd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10eecdce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecdd0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10eecdd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10eecdd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eecdd8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eecddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecdde cmp edx, dword ptr [ecx + 0x10f0db40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10f0db40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecde4 jne 0x10eecede */
  if (!C.zf) goto L_10eecede;
  /* 10eecdea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eecded mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10eecdf0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecdf4 ja 0x10eece17 */
  if ((!C.cf&&!C.zf)) goto L_10eece17;
  /* 10eecdf6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecdfa je 0x10eece89 */
  if (C.zf) goto L_10eece89;
  /* 10eece00 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eece04 je 0x10eece34 */
  if (C.zf) goto L_10eece34;
  /* 10eece06 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eece0a je 0x10eece56 */
  if (C.zf) goto L_10eece56;
  /* 10eece0c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eece10 je 0x10eece78 */
  if (C.zf) goto L_10eece78;
  /* 10eece12 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece17:;
  /* 10eece17 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eece1e je 0x10eece45 */
  if (C.zf) goto L_10eece45;
  /* 10eece20 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eece27 je 0x10eece67 */
  if (C.zf) goto L_10eece67;
  /* 10eece29 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eece30 je 0x10eece9a */
  if (C.zf) goto L_10eece9a;
  /* 10eece32 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece34:;
  /* 10eece34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece37 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eece3a add ecx, 0x10f0db44 */
  { uint32_t _a=(ECX),_b=(0x10f0db44u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eece40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eece43 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece45:;
  /* 10eece45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece48 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eece4b mov eax, dword ptr [edx + 0x10f0db4c] */
  EAX = (r32((uint32_t)(EDX + 0x10f0db4c)));
  /* 10eece51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eece54 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece56:;
  /* 10eece56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece59 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eece5c add ecx, 0x10f0db50 */
  { uint32_t _a=(ECX),_b=(0x10f0db50u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eece62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eece65 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece67:;
  /* 10eece67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece6a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eece6d mov eax, dword ptr [edx + 0x10f0db54] */
  EAX = (r32((uint32_t)(EDX + 0x10f0db54)));
  /* 10eece73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eece76 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece78:;
  /* 10eece78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece7b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eece7e add ecx, 0x10f0db58 */
  { uint32_t _a=(ECX),_b=(0x10f0db58u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eece84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10eece87 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece89:;
  /* 10eece89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece8c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eece8f add edx, 0x10f0db5c */
  { uint32_t _a=(EDX),_b=(0x10f0db5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eece95 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10eece98 jmp 0x10eecea8 */
  goto L_10eecea8;
L_10eece9a:;
  /* 10eece9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eece9d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eecea0 add eax, 0x10f0db64 */
  { uint32_t _a=(EAX),_b=(0x10f0db64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecea5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10eecea8:;
  /* 10eecea8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeceac je 0x10eeceb4 */
  if (C.zf) goto L_10eeceb4;
  /* 10eeceae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeceb2 jge 0x10eeceb6 */
  if ((C.sf==C.of)) goto L_10eeceb6;
L_10eeceb4:;
  /* 10eeceb4 jmp 0x10eecf08 */
  goto L_10eecf08;
L_10eeceb6:;
  /* 10eeceb6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eeceb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecebc push ecx */
  push32((uint32_t)(ECX));
  /* 10eecebd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eecec0 push edx */
  push32((uint32_t)(EDX));
  /* 10eecec1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eecec4 push eax */
  push32((uint32_t)(EAX));
  /* 10eecec5 call 0x10ee06a0 */
  push32(0x10eececau); f_10ee06a0();
  /* 10eececa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eececd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eeced0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eeced3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10eeced7 mov eax, 1 */
  EAX = (0x1u);
  /* 10eecedc jmp 0x10eecf1e */
  goto L_10eecf1e;
L_10eecede:;
  /* 10eecede mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eecee1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10eecee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecee7 cmp eax, dword ptr [edx + 0x10f0db40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10f0db40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eeceed jae 0x10eecefa */
  if (!C.cf) goto L_10eecefa;
  /* 10eeceef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eecef2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecef5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eecef8 jmp 0x10eecf03 */
  goto L_10eecf03;
L_10eecefa:;
  /* 10eecefa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10eecefd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecf00 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10eecf03:;
  /* 10eecf03 jmp 0x10eecdbb */
  goto L_10eecdbb;
L_10eecf08:;
  /* 10eecf08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eecf0b push eax */
  push32((uint32_t)(EAX));
  /* 10eecf0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eecf0f push ecx */
  push32((uint32_t)(ECX));
  /* 10eecf10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eecf13 push edx */
  push32((uint32_t)(EDX));
  /* 10eecf14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecf17 push eax */
  push32((uint32_t)(EAX));
  /* 10eecf18 call dword ptr [0x10f12344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12344))), 0x10eecf1eu);
L_10eecf1e:;
  /* 10eecf1e mov esp, ebp */
  ESP = (EBP);
  /* 10eecf20 pop ebp */
  EBP = (pop32());
  /* 10eecf21 ret 0x10 */
  ESPCHK(0x10eecda0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001cf30 @ 0x10eecf30 (118 bytes, 42 insns) */
void f_10eecf30(void) {
  FTRACE(0x10eecf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eecf30 push ebp */
  push32((uint32_t)(EBP));
  /* 10eecf31 mov ebp, esp */
  EBP = (ESP);
  /* 10eecf33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eecf36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10eecf3d:;
  /* 10eecf3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecf40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10eecf42 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10eecf45 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eecf49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eecf4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eecf4f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10eecf52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eecf54 je 0x10eecf9f */
  if (C.zf) goto L_10eecf9f;
  /* 10eecf56 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eecf5a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecf5d jl 0x10eecf72 */
  if ((C.sf!=C.of)) goto L_10eecf72;
  /* 10eecf5f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eecf63 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecf66 jg 0x10eecf72 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eecf72;
  /* 10eecf68 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10eecf6b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10eecf6d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10eecf70 jmp 0x10eecf8c */
  goto L_10eecf8c;
L_10eecf72:;
  /* 10eecf72 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eecf76 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecf79 jl 0x10eecf8c */
  if ((C.sf!=C.of)) goto L_10eecf8c;
  /* 10eecf7b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eecf7f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eecf82 jg 0x10eecf8c */
  if ((!C.zf&&C.sf==C.of)) goto L_10eecf8c;
  /* 10eecf84 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10eecf87 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10eecf89 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10eecf8c:;
  /* 10eecf8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eecf8f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10eecf92 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10eecf96 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10eecf9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eecf9d jmp 0x10eecf3d */
  goto L_10eecf3d;
L_10eecf9f:;
  /* 10eecf9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eecfa2 mov esp, ebp */
  ESP = (EBP);
  /* 10eecfa4 pop ebp */
  EBP = (pop32());
  /* 10eecfa5 ret  */
  ESPCHK(0x10eecf30u, _esp0);
  ESP += 4; return;
}

