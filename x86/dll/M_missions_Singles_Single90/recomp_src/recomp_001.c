#include "recomp.h"

/* FUN_100063f2 @ 0x11f563f2 (46 bytes, 13 insns) */
void f_11f563f2(void) {
  FTRACE(0x11f563f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f563f2 cmp dword ptr [0x11f62db0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62db0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f563f9 jne 0x11f5641f */
  if (!C.zf) goto L_11f5641f;
  /* 11f563fb push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f563fd call 0x11f5637c */
  push32(0x11f56402u); f_11f5637c();
  /* 11f56402 cmp dword ptr [0x11f62db0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62db0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56409 pop ecx */
  ECX = (pop32());
  /* 11f5640a jne 0x11f56417 */
  if (!C.zf) goto L_11f56417;
  /* 11f5640c call 0x11f56420 */
  push32(0x11f56411u); f_11f56420();
  /* 11f56411 inc dword ptr [0x11f62db0] */
  { uint32_t _r=(r32((uint32_t)(0x11f62db0)))+1; w32((uint32_t)(0x11f62db0), (_r)); fl_inc(_r,32); }
L_11f56417:;
  /* 11f56417 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f56419 call 0x11f563dd */
  push32(0x11f5641eu); f_11f563dd();
  /* 11f5641e pop ecx */
  ECX = (pop32());
L_11f5641f:;
  /* 11f5641f ret  */
  ESPCHK(0x11f563f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006420 @ 0x11f56420 (647 bytes, 207 insns) */
void f_11f56420(void) {
  FTRACE(0x11f56420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56420 push ebp */
  push32((uint32_t)(EBP));
  /* 11f56421 mov ebp, esp */
  EBP = (ESP);
  /* 11f56423 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56424 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56425 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56426 push esi */
  push32((uint32_t)(ESI));
  /* 11f56427 push edi */
  push32((uint32_t)(EDI));
  /* 11f56428 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f5642a pop edi */
  EDI = (pop32());
  /* 11f5642b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5642d push edi */
  push32((uint32_t)(EDI));
  /* 11f5642e mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11f56431 call 0x11f5637c */
  push32(0x11f56436u); f_11f5637c();
  /* 11f56436 or dword ptr [0x11f5fc40], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f5fc40)))|(0xffffffffu); w32((uint32_t)(0x11f5fc40), (_r)); fl_logic(_r,32); }
  /* 11f5643d or dword ptr [0x11f5fc30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f5fc30)))|(0xffffffffu); w32((uint32_t)(0x11f5fc30), (_r)); fl_logic(_r,32); }
  /* 11f56444 mov dword ptr [0x11f62cf8], ebx */
  w32((uint32_t)(0x11f62cf8), (EBX));
  /* 11f5644a mov dword ptr [esp], 0x11f5c680 */
  w32((uint32_t)(ESP), (0x11f5c680u));
  /* 11f56451 call 0x11f59ea9 */
  push32(0x11f56456u); f_11f59ea9();
  /* 11f56456 mov esi, eax */
  ESI = (EAX);
  /* 11f56458 pop ecx */
  ECX = (pop32());
  /* 11f56459 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5645b jne 0x11f5655e */
  if (!C.zf) goto L_11f5655e;
  /* 11f56461 push edi */
  push32((uint32_t)(EDI));
  /* 11f56462 call 0x11f563dd */
  push32(0x11f56467u); f_11f563dd();
  /* 11f56467 mov dword ptr [esp], 0x11f62d00 */
  w32((uint32_t)(ESP), (0x11f62d00u));
  /* 11f5646e call dword ptr [0x11f5c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c06c))), 0x11f56474u);
  /* 11f56474 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56477 je 0x11f566a2 */
  if (C.zf) goto L_11f566a2;
  /* 11f5647d mov eax, dword ptr [0x11f62d00] */
  EAX = (r32((uint32_t)(0x11f62d00)));
  /* 11f56482 mov ecx, dword ptr [0x11f62d54] */
  ECX = (r32((uint32_t)(0x11f62d54)));
  /* 11f56488 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5648b cmp word ptr [0x11f62d46], bx */
  { uint32_t _a=(r16((uint32_t)(0x11f62d46))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f56492 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f56494 pop edx */
  EDX = (pop32());
  /* 11f56495 mov dword ptr [0x11f5fb98], eax */
  w32((uint32_t)(0x11f5fb98), (EAX));
  /* 11f5649a mov dword ptr [0x11f62cf8], edx */
  w32((uint32_t)(0x11f62cf8), (EDX));
  /* 11f564a0 je 0x11f564ae */
  if (C.zf) goto L_11f564ae;
  /* 11f564a2 mov esi, ecx */
  ESI = (ECX);
  /* 11f564a4 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f564a7 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f564a9 mov dword ptr [0x11f5fb98], eax */
  w32((uint32_t)(0x11f5fb98), (EAX));
L_11f564ae:;
  /* 11f564ae cmp word ptr [0x11f62d9a], bx */
  { uint32_t _a=(r16((uint32_t)(0x11f62d9a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f564b5 je 0x11f564d2 */
  if (C.zf) goto L_11f564d2;
  /* 11f564b7 mov eax, dword ptr [0x11f62da8] */
  EAX = (r32((uint32_t)(0x11f62da8)));
  /* 11f564bc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f564be je 0x11f564d2 */
  if (C.zf) goto L_11f564d2;
  /* 11f564c0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f564c2 mov dword ptr [0x11f5fb9c], edx */
  w32((uint32_t)(0x11f5fb9c), (EDX));
  /* 11f564c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f564cb mov dword ptr [0x11f5fba0], eax */
  w32((uint32_t)(0x11f5fba0), (EAX));
  /* 11f564d0 jmp 0x11f564de */
  goto L_11f564de;
L_11f564d2:;
  /* 11f564d2 mov dword ptr [0x11f5fb9c], ebx */
  w32((uint32_t)(0x11f5fb9c), (EBX));
  /* 11f564d8 mov dword ptr [0x11f5fba0], ebx */
  w32((uint32_t)(0x11f5fba0), (EBX));
L_11f564de:;
  /* 11f564de lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f564e1 mov esi, dword ptr [0x11f5c0ec] */
  ESI = (r32((uint32_t)(0x11f5c0ec)));
  /* 11f564e7 push eax */
  push32((uint32_t)(EAX));
  /* 11f564e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f564e9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f564eb mov edi, 0x220 */
  EDI = (0x220u);
  /* 11f564f0 push dword ptr [0x11f5fc24] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fc24))));
  /* 11f564f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f564f8 push 0x11f62d04 */
  push32((uint32_t)(0x11f62d04u));
  /* 11f564fd push edi */
  push32((uint32_t)(EDI));
  /* 11f564fe push dword ptr [0x11f62df0] */
  push32((uint32_t)(r32((uint32_t)(0x11f62df0))));
  /* 11f56504 call esi */
  call_ind((uint32_t)(ESI), 0x11f56506u);
  /* 11f56506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f56508 je 0x11f5651a */
  if (C.zf) goto L_11f5651a;
  /* 11f5650a cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5650d jne 0x11f5651a */
  if (!C.zf) goto L_11f5651a;
  /* 11f5650f mov eax, dword ptr [0x11f5fc24] */
  EAX = (r32((uint32_t)(0x11f5fc24)));
  /* 11f56514 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11f56518 jmp 0x11f56522 */
  goto L_11f56522;
L_11f5651a:;
  /* 11f5651a mov eax, dword ptr [0x11f5fc24] */
  EAX = (r32((uint32_t)(0x11f5fc24)));
  /* 11f5651f and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11f56522:;
  /* 11f56522 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f56525 push eax */
  push32((uint32_t)(EAX));
  /* 11f56526 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56527 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f56529 push dword ptr [0x11f5fc28] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fc28))));
  /* 11f5652f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f56531 push 0x11f62d58 */
  push32((uint32_t)(0x11f62d58u));
  /* 11f56536 push edi */
  push32((uint32_t)(EDI));
  /* 11f56537 push dword ptr [0x11f62df0] */
  push32((uint32_t)(r32((uint32_t)(0x11f62df0))));
  /* 11f5653d call esi */
  call_ind((uint32_t)(ESI), 0x11f5653fu);
  /* 11f5653f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f56541 je 0x11f56691 */
  if (C.zf) goto L_11f56691;
  /* 11f56547 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5654a jne 0x11f56691 */
  if (!C.zf) goto L_11f56691;
  /* 11f56550 mov eax, dword ptr [0x11f5fc28] */
  EAX = (r32((uint32_t)(0x11f5fc28)));
  /* 11f56555 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11f56559 jmp 0x11f566a2 */
  goto L_11f566a2;
L_11f5655e:;
  /* 11f5655e cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56561 je 0x11f5669b */
  if (C.zf) goto L_11f5669b;
  /* 11f56567 mov eax, dword ptr [0x11f62dac] */
  EAX = (r32((uint32_t)(0x11f62dac)));
  /* 11f5656c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5656e je 0x11f56581 */
  if (C.zf) goto L_11f56581;
  /* 11f56570 push eax */
  push32((uint32_t)(EAX));
  /* 11f56571 push esi */
  push32((uint32_t)(ESI));
  /* 11f56572 call 0x11f57d60 */
  push32(0x11f56577u); f_11f57d60();
  /* 11f56577 pop ecx */
  ECX = (pop32());
  /* 11f56578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5657a pop ecx */
  ECX = (pop32());
  /* 11f5657b je 0x11f5669b */
  if (C.zf) goto L_11f5669b;
L_11f56581:;
  /* 11f56581 push dword ptr [0x11f62dac] */
  push32((uint32_t)(r32((uint32_t)(0x11f62dac))));
  /* 11f56587 call 0x11f542bc */
  push32(0x11f5658cu); f_11f542bc();
  /* 11f5658c push esi */
  push32((uint32_t)(ESI));
  /* 11f5658d call 0x11f58630 */
  push32(0x11f56592u); f_11f58630();
  /* 11f56592 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f56593 push eax */
  push32((uint32_t)(EAX));
  /* 11f56594 call 0x11f54cc3 */
  push32(0x11f56599u); f_11f54cc3();
  /* 11f56599 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5659c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5659e mov dword ptr [0x11f62dac], eax */
  w32((uint32_t)(0x11f62dac), (EAX));
  /* 11f565a3 je 0x11f5669b */
  if (C.zf) goto L_11f5669b;
  /* 11f565a9 push esi */
  push32((uint32_t)(ESI));
  /* 11f565aa push eax */
  push32((uint32_t)(EAX));
  /* 11f565ab call 0x11f59020 */
  push32(0x11f565b0u); f_11f59020();
  /* 11f565b0 push edi */
  push32((uint32_t)(EDI));
  /* 11f565b1 call 0x11f563dd */
  push32(0x11f565b6u); f_11f563dd();
  /* 11f565b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f565b8 push esi */
  push32((uint32_t)(ESI));
  /* 11f565b9 push dword ptr [0x11f5fc24] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fc24))));
  /* 11f565bf call 0x11f59d20 */
  push32(0x11f565c4u); f_11f59d20();
  /* 11f565c4 mov eax, dword ptr [0x11f5fc24] */
  EAX = (r32((uint32_t)(0x11f5fc24)));
  /* 11f565c9 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f565cc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f565cf and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11f565d3 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f565d6 jne 0x11f565e0 */
  if (!C.zf) goto L_11f565e0;
  /* 11f565d8 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f565df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f565e0:;
  /* 11f565e0 push esi */
  push32((uint32_t)(ESI));
  /* 11f565e1 call 0x11f59e1e */
  push32(0x11f565e6u); f_11f59e1e();
  /* 11f565e6 pop ecx */
  ECX = (pop32());
  /* 11f565e7 mov bl, 0x30 */
  BL = (0x30u);
  /* 11f565e9 mov ecx, eax */
  ECX = (EAX);
  /* 11f565eb imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f565f1 mov dword ptr [0x11f5fb98], ecx */
  w32((uint32_t)(0x11f5fb98), (ECX));
L_11f565f7:;
  /* 11f565f7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f565f9 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f565fb je 0x11f56605 */
  if (C.zf) goto L_11f56605;
  /* 11f565fd cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f565ff jl 0x11f56608 */
  if ((C.sf!=C.of)) goto L_11f56608;
  /* 11f56601 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56603 jg 0x11f56608 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f56608;
L_11f56605:;
  /* 11f56605 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f56606 jmp 0x11f565f7 */
  goto L_11f565f7;
L_11f56608:;
  /* 11f56608 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5660b jne 0x11f5665b */
  if (!C.zf) goto L_11f5665b;
  /* 11f5660d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5660e push esi */
  push32((uint32_t)(ESI));
  /* 11f5660f call 0x11f59e1e */
  push32(0x11f56614u); f_11f59e1e();
  /* 11f56614 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56617 pop ecx */
  ECX = (pop32());
  /* 11f56618 mov ecx, dword ptr [0x11f5fb98] */
  ECX = (r32((uint32_t)(0x11f5fb98)));
  /* 11f5661e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56620 mov dword ptr [0x11f5fb98], ecx */
  w32((uint32_t)(0x11f5fb98), (ECX));
L_11f56626:;
  /* 11f56626 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f56628 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5662a jl 0x11f56633 */
  if ((C.sf!=C.of)) goto L_11f56633;
  /* 11f5662c cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5662e jg 0x11f56633 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f56633;
  /* 11f56630 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f56631 jmp 0x11f56626 */
  goto L_11f56626;
L_11f56633:;
  /* 11f56633 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56636 jne 0x11f5665b */
  if (!C.zf) goto L_11f5665b;
  /* 11f56638 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f56639 push esi */
  push32((uint32_t)(ESI));
  /* 11f5663a call 0x11f59e1e */
  push32(0x11f5663fu); f_11f59e1e();
  /* 11f5663f pop ecx */
  ECX = (pop32());
  /* 11f56640 mov ecx, dword ptr [0x11f5fb98] */
  ECX = (r32((uint32_t)(0x11f5fb98)));
  /* 11f56646 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56648 mov dword ptr [0x11f5fb98], ecx */
  w32((uint32_t)(0x11f5fb98), (ECX));
L_11f5664e:;
  /* 11f5664e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f56650 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56652 jl 0x11f5665b */
  if ((C.sf!=C.of)) goto L_11f5665b;
  /* 11f56654 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56656 jg 0x11f5665b */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5665b;
  /* 11f56658 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f56659 jmp 0x11f5664e */
  goto L_11f5664e;
L_11f5665b:;
  /* 11f5665b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5665f je 0x11f56669 */
  if (C.zf) goto L_11f56669;
  /* 11f56661 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f56663 mov dword ptr [0x11f5fb98], ecx */
  w32((uint32_t)(0x11f5fb98), (ECX));
L_11f56669:;
  /* 11f56669 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11f5666c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5666e mov dword ptr [0x11f5fb9c], eax */
  w32((uint32_t)(0x11f5fb9c), (EAX));
  /* 11f56673 je 0x11f56691 */
  if (C.zf) goto L_11f56691;
  /* 11f56675 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f56677 push esi */
  push32((uint32_t)(ESI));
  /* 11f56678 push dword ptr [0x11f5fc28] */
  push32((uint32_t)(r32((uint32_t)(0x11f5fc28))));
  /* 11f5667e call 0x11f59d20 */
  push32(0x11f56683u); f_11f59d20();
  /* 11f56683 mov eax, dword ptr [0x11f5fc28] */
  EAX = (r32((uint32_t)(0x11f5fc28)));
  /* 11f56688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5668b and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11f5668f jmp 0x11f566a2 */
  goto L_11f566a2;
L_11f56691:;
  /* 11f56691 mov eax, dword ptr [0x11f5fc28] */
  EAX = (r32((uint32_t)(0x11f5fc28)));
  /* 11f56696 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11f56699 jmp 0x11f566a2 */
  goto L_11f566a2;
L_11f5669b:;
  /* 11f5669b push edi */
  push32((uint32_t)(EDI));
  /* 11f5669c call 0x11f563dd */
  push32(0x11f566a1u); f_11f563dd();
  /* 11f566a1 pop ecx */
  ECX = (pop32());
L_11f566a2:;
  /* 11f566a2 pop edi */
  EDI = (pop32());
  /* 11f566a3 pop esi */
  ESI = (pop32());
  /* 11f566a4 pop ebx */
  EBX = (pop32());
  /* 11f566a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f566a6 ret  */
  ESPCHK(0x11f56420u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a7 @ 0x11f566a7 (33 bytes, 12 insns) */
void f_11f566a7(void) {
  FTRACE(0x11f566a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f566a7 push esi */
  push32((uint32_t)(ESI));
  /* 11f566a8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f566aa call 0x11f5637c */
  push32(0x11f566afu); f_11f5637c();
  /* 11f566af push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f566b3 call 0x11f566c8 */
  push32(0x11f566b8u); f_11f566c8();
  /* 11f566b8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f566ba mov esi, eax */
  ESI = (EAX);
  /* 11f566bc call 0x11f563dd */
  push32(0x11f566c1u); f_11f563dd();
  /* 11f566c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f566c4 mov eax, esi */
  EAX = (ESI);
  /* 11f566c6 pop esi */
  ESI = (pop32());
  /* 11f566c7 ret  */
  ESPCHK(0x11f566a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c8 @ 0x11f566c8 (428 bytes, 149 insns) */
void f_11f566c8(void) {
  FTRACE(0x11f566c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f566c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f566c9 push esi */
  push32((uint32_t)(ESI));
  /* 11f566ca push edi */
  push32((uint32_t)(EDI));
  /* 11f566cb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f566cd cmp dword ptr [0x11f5fb9c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f5fb9c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f566d3 jne 0x11f566dc */
  if (!C.zf) goto L_11f566dc;
L_11f566d5:;
  /* 11f566d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f566d7 jmp 0x11f56828 */
  goto L_11f56828;
L_11f566dc:;
  /* 11f566dc mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f566e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f566e2 pop ebx */
  EBX = (pop32());
  /* 11f566e3 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11f566e6 cmp eax, dword ptr [0x11f5fc30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f5fc30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f566ec jne 0x11f566fa */
  if (!C.zf) goto L_11f566fa;
  /* 11f566ee cmp eax, dword ptr [0x11f5fc40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f5fc40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f566f4 je 0x11f567fc */
  if (C.zf) goto L_11f567fc;
L_11f566fa:;
  /* 11f566fa cmp dword ptr [0x11f62cf8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62cf8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56700 je 0x11f567d2 */
  if (C.zf) goto L_11f567d2;
  /* 11f56706 movzx ecx, word ptr [0x11f62da6] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62da6))));
  /* 11f5670d push ecx */
  push32((uint32_t)(ECX));
  /* 11f5670e cmp word ptr [0x11f62d98], di */
  { uint32_t _a=(r16((uint32_t)(0x11f62d98))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f56715 movzx ecx, word ptr [0x11f62da4] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62da4))));
  /* 11f5671c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5671d movzx ecx, word ptr [0x11f62da2] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62da2))));
  /* 11f56724 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56725 movzx ecx, word ptr [0x11f62da0] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62da0))));
  /* 11f5672c push ecx */
  push32((uint32_t)(ECX));
  /* 11f5672d jne 0x11f5674c */
  if (!C.zf) goto L_11f5674c;
  /* 11f5672f movzx ecx, word ptr [0x11f62d9c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62d9c))));
  /* 11f56736 push edi */
  push32((uint32_t)(EDI));
  /* 11f56737 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56738 movzx ecx, word ptr [0x11f62d9e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62d9e))));
  /* 11f5673f push ecx */
  push32((uint32_t)(ECX));
  /* 11f56740 movzx ecx, word ptr [0x11f62d9a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62d9a))));
  /* 11f56747 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56748 push eax */
  push32((uint32_t)(EAX));
  /* 11f56749 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5674a jmp 0x11f56760 */
  goto L_11f56760;
L_11f5674c:;
  /* 11f5674c movzx ecx, word ptr [0x11f62d9e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62d9e))));
  /* 11f56753 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56754 push edi */
  push32((uint32_t)(EDI));
  /* 11f56755 movzx ecx, word ptr [0x11f62d9a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11f62d9a))));
  /* 11f5675c push edi */
  push32((uint32_t)(EDI));
  /* 11f5675d push ecx */
  push32((uint32_t)(ECX));
  /* 11f5675e push eax */
  push32((uint32_t)(EAX));
  /* 11f5675f push edi */
  push32((uint32_t)(EDI));
L_11f56760:;
  /* 11f56760 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56761 call 0x11f56874 */
  push32(0x11f56766u); f_11f56874();
  /* 11f56766 movzx eax, word ptr [0x11f62d52] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d52))));
  /* 11f5676d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56770 cmp word ptr [0x11f62d44], di */
  { uint32_t _a=(r16((uint32_t)(0x11f62d44))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f56777 push eax */
  push32((uint32_t)(EAX));
  /* 11f56778 movzx eax, word ptr [0x11f62d50] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d50))));
  /* 11f5677f push eax */
  push32((uint32_t)(EAX));
  /* 11f56780 movzx eax, word ptr [0x11f62d4e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d4e))));
  /* 11f56787 push eax */
  push32((uint32_t)(EAX));
  /* 11f56788 movzx eax, word ptr [0x11f62d4c] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d4c))));
  /* 11f5678f push eax */
  push32((uint32_t)(EAX));
  /* 11f56790 jne 0x11f567ba */
  if (!C.zf) goto L_11f567ba;
  /* 11f56792 movzx eax, word ptr [0x11f62d48] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d48))));
  /* 11f56799 push edi */
  push32((uint32_t)(EDI));
  /* 11f5679a push eax */
  push32((uint32_t)(EAX));
  /* 11f5679b movzx eax, word ptr [0x11f62d4a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d4a))));
  /* 11f567a2 push eax */
  push32((uint32_t)(EAX));
  /* 11f567a3 movzx eax, word ptr [0x11f62d46] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d46))));
  /* 11f567aa push eax */
  push32((uint32_t)(EAX));
  /* 11f567ab push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11f567ae push ebx */
  push32((uint32_t)(EBX));
L_11f567af:;
  /* 11f567af push edi */
  push32((uint32_t)(EDI));
  /* 11f567b0 call 0x11f56874 */
  push32(0x11f567b5u); f_11f56874();
  /* 11f567b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f567b8 jmp 0x11f567fc */
  goto L_11f567fc;
L_11f567ba:;
  /* 11f567ba movzx eax, word ptr [0x11f62d4a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d4a))));
  /* 11f567c1 push eax */
  push32((uint32_t)(EAX));
  /* 11f567c2 push edi */
  push32((uint32_t)(EDI));
  /* 11f567c3 movzx eax, word ptr [0x11f62d46] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11f62d46))));
  /* 11f567ca push edi */
  push32((uint32_t)(EDI));
  /* 11f567cb push eax */
  push32((uint32_t)(EAX));
  /* 11f567cc push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11f567cf push edi */
  push32((uint32_t)(EDI));
  /* 11f567d0 jmp 0x11f567af */
  goto L_11f567af;
L_11f567d2:;
  /* 11f567d2 push edi */
  push32((uint32_t)(EDI));
  /* 11f567d3 push edi */
  push32((uint32_t)(EDI));
  /* 11f567d4 push edi */
  push32((uint32_t)(EDI));
  /* 11f567d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f567d7 push edi */
  push32((uint32_t)(EDI));
  /* 11f567d8 push edi */
  push32((uint32_t)(EDI));
  /* 11f567d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f567da push 4 */
  push32((uint32_t)(0x4u));
  /* 11f567dc push eax */
  push32((uint32_t)(EAX));
  /* 11f567dd push ebx */
  push32((uint32_t)(EBX));
  /* 11f567de push ebx */
  push32((uint32_t)(EBX));
  /* 11f567df call 0x11f56874 */
  push32(0x11f567e4u); f_11f56874();
  /* 11f567e4 push edi */
  push32((uint32_t)(EDI));
  /* 11f567e5 push edi */
  push32((uint32_t)(EDI));
  /* 11f567e6 push edi */
  push32((uint32_t)(EDI));
  /* 11f567e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f567e9 push edi */
  push32((uint32_t)(EDI));
  /* 11f567ea push edi */
  push32((uint32_t)(EDI));
  /* 11f567eb push 5 */
  push32((uint32_t)(0x5u));
  /* 11f567ed push 0xa */
  push32((uint32_t)(0xau));
  /* 11f567ef push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11f567f2 push ebx */
  push32((uint32_t)(EBX));
  /* 11f567f3 push edi */
  push32((uint32_t)(EDI));
  /* 11f567f4 call 0x11f56874 */
  push32(0x11f567f9u); f_11f56874();
  /* 11f567f9 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f567fc:;
  /* 11f567fc mov edx, dword ptr [0x11f5fc34] */
  EDX = (r32((uint32_t)(0x11f5fc34)));
  /* 11f56802 mov eax, dword ptr [0x11f5fc44] */
  EAX = (r32((uint32_t)(0x11f5fc44)));
  /* 11f56807 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11f5680a cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5680c jge 0x11f5682c */
  if ((C.sf==C.of)) goto L_11f5682c;
  /* 11f5680e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56810 jl 0x11f566d5 */
  if ((C.sf!=C.of)) goto L_11f566d5;
  /* 11f56816 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56818 jg 0x11f566d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f566d5;
  /* 11f5681e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56820 jle 0x11f56840 */
  if ((C.zf||C.sf!=C.of)) goto L_11f56840;
  /* 11f56822 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56824 jge 0x11f56840 */
  if ((C.sf==C.of)) goto L_11f56840;
L_11f56826:;
  /* 11f56826 mov eax, ebx */
  EAX = (EBX);
L_11f56828:;
  /* 11f56828 pop edi */
  EDI = (pop32());
  /* 11f56829 pop esi */
  ESI = (pop32());
  /* 11f5682a pop ebx */
  EBX = (pop32());
  /* 11f5682b ret  */
  ESPCHK(0x11f566c8u, _esp0);
  ESP += 4; return;
L_11f5682c:;
  /* 11f5682c cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5682e jl 0x11f56826 */
  if ((C.sf!=C.of)) goto L_11f56826;
  /* 11f56830 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56832 jg 0x11f56826 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f56826;
  /* 11f56834 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56836 jle 0x11f56840 */
  if ((C.zf||C.sf!=C.of)) goto L_11f56840;
  /* 11f56838 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5683a jl 0x11f566d5 */
  if ((C.sf!=C.of)) goto L_11f566d5;
L_11f56840:;
  /* 11f56840 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11f56843 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56846 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56849 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5684c add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5684e imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56854 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56856 jne 0x11f56867 */
  if (!C.zf) goto L_11f56867;
  /* 11f56858 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5685a cmp eax, dword ptr [0x11f5fc38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f5fc38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56860 setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11f56863:;
  /* 11f56863 mov eax, ecx */
  EAX = (ECX);
  /* 11f56865 jmp 0x11f56828 */
  goto L_11f56828;
L_11f56867:;
  /* 11f56867 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f56869 cmp eax, dword ptr [0x11f5fc48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f5fc48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5686f setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11f56872 jmp 0x11f56863 */
  goto L_11f56863;
}

/* FUN_10006874 @ 0x11f56874 (320 bytes, 101 insns) */
void f_11f56874(void) {
  FTRACE(0x11f56874u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56874 push ebp */
  push32((uint32_t)(EBP));
  /* 11f56875 mov ebp, esp */
  EBP = (ESP);
  /* 11f56877 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5687b push ebx */
  push32((uint32_t)(EBX));
  /* 11f5687c mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5687f push esi */
  push32((uint32_t)(ESI));
  /* 11f56880 jne 0x11f5690f */
  if (!C.zf) goto L_11f5690f;
  /* 11f56886 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f56889 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11f5688c and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11f56890 mov esi, eax */
  ESI = (EAX);
  /* 11f56892 jne 0x11f5689f */
  if (!C.zf) goto L_11f5689f;
  /* 11f56894 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11f56897 mov eax, dword ptr [esi + 0x11f5fc48] */
  EAX = (r32((uint32_t)(ESI + 0x11f5fc48)));
  /* 11f5689d jmp 0x11f568a8 */
  goto L_11f568a8;
L_11f5689f:;
  /* 11f5689f shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11f568a2 mov eax, dword ptr [esi + 0x11f5fc7c] */
  EAX = (r32((uint32_t)(ESI + 0x11f5fc7c)));
L_11f568a8:;
  /* 11f568a8 mov edx, ebx */
  EDX = (EBX);
  /* 11f568aa lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11f568ad imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f568b3 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11f568b6 push edi */
  push32((uint32_t)(EDI));
  /* 11f568b7 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f568ba mov edi, ecx */
  EDI = (ECX);
  /* 11f568bc push 7 */
  push32((uint32_t)(0x7u));
  /* 11f568be add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f568c0 lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11f568c7 pop edi */
  EDI = (pop32());
  /* 11f568c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f568c9 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f568cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f568ce pop edi */
  EDI = (pop32());
  /* 11f568cf cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f568d2 jg 0x11f568e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f568e2;
  /* 11f568d4 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f568d7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f568d9 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f568dc lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11f568e0 jmp 0x11f568ec */
  goto L_11f568ec;
L_11f568e2:;
  /* 11f568e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f568e5 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f568e7 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f568ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11f568ec:;
  /* 11f568ec cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f568f0 jne 0x11f5692a */
  if (!C.zf) goto L_11f5692a;
  /* 11f568f2 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f568f6 jne 0x11f56900 */
  if (!C.zf) goto L_11f56900;
  /* 11f568f8 mov esi, dword ptr [esi + 0x11f5fc4c] */
  ESI = (r32((uint32_t)(ESI + 0x11f5fc4c)));
  /* 11f568fe jmp 0x11f56906 */
  goto L_11f56906;
L_11f56900:;
  /* 11f56900 mov esi, dword ptr [esi + 0x11f5fc80] */
  ESI = (r32((uint32_t)(ESI + 0x11f5fc80)));
L_11f56906:;
  /* 11f56906 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56908 jle 0x11f5692a */
  if ((C.zf||C.sf!=C.of)) goto L_11f5692a;
  /* 11f5690a sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5690d jmp 0x11f5692a */
  goto L_11f5692a;
L_11f5690f:;
  /* 11f5690f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f56912 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11f56915 jne 0x11f56920 */
  if (!C.zf) goto L_11f56920;
  /* 11f56917 mov ecx, dword ptr [eax*4 + 0x11f5fc48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f5fc48)));
  /* 11f5691e jmp 0x11f56927 */
  goto L_11f56927;
L_11f56920:;
  /* 11f56920 mov ecx, dword ptr [eax*4 + 0x11f5fc7c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f5fc7c)));
L_11f56927:;
  /* 11f56927 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11f5692a:;
  /* 11f5692a cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5692e jne 0x11f5695b */
  if (!C.zf) goto L_11f5695b;
  /* 11f56930 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f56933 mov dword ptr [0x11f5fc34], ecx */
  w32((uint32_t)(0x11f5fc34), (ECX));
  /* 11f56939 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5693c add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5693f mov dword ptr [0x11f5fc30], ebx */
  w32((uint32_t)(0x11f5fc30), (EBX));
  /* 11f56945 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56948 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5694b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56951 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56954 mov dword ptr [0x11f5fc38], eax */
  w32((uint32_t)(0x11f5fc38), (EAX));
  /* 11f56959 jmp 0x11f569b0 */
  goto L_11f569b0;
L_11f5695b:;
  /* 11f5695b mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f5695e mov dword ptr [0x11f5fc44], ecx */
  w32((uint32_t)(0x11f5fc44), (ECX));
  /* 11f56964 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56967 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5696a imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5696d add eax, dword ptr [0x11f5fba0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f5fba0))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56973 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56976 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5697c add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5697f mov dword ptr [0x11f5fc48], eax */
  w32((uint32_t)(0x11f5fc48), (EAX));
  /* 11f56984 jns 0x11f56993 */
  if (!C.sf) goto L_11f56993;
  /* 11f56986 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5698b dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f5698c mov dword ptr [0x11f5fc48], eax */
  w32((uint32_t)(0x11f5fc48), (EAX));
  /* 11f56991 jmp 0x11f569a4 */
  goto L_11f569a4;
L_11f56993:;
  /* 11f56993 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11f56998 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5699a jl 0x11f569aa */
  if ((C.sf!=C.of)) goto L_11f569aa;
  /* 11f5699c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5699e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f5699f mov dword ptr [0x11f5fc48], eax */
  w32((uint32_t)(0x11f5fc48), (EAX));
L_11f569a4:;
  /* 11f569a4 mov dword ptr [0x11f5fc44], ecx */
  w32((uint32_t)(0x11f5fc44), (ECX));
L_11f569aa:;
  /* 11f569aa mov dword ptr [0x11f5fc40], ebx */
  w32((uint32_t)(0x11f5fc40), (EBX));
L_11f569b0:;
  /* 11f569b0 pop esi */
  ESI = (pop32());
  /* 11f569b1 pop ebx */
  EBX = (pop32());
  /* 11f569b2 pop ebp */
  EBP = (pop32());
  /* 11f569b3 ret  */
  ESPCHK(0x11f56874u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b4 @ 0x11f569b4 (72 bytes, 17 insns) */
void f_11f569b4(void) {
  FTRACE(0x11f569b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f569b4 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11f569b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f569bb push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f569c1 call dword ptr [0x11f5c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a4))), 0x11f569c7u);
  /* 11f569c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f569c9 mov dword ptr [0x11f630dc], eax */
  w32((uint32_t)(0x11f630dc), (EAX));
  /* 11f569ce jne 0x11f569d1 */
  if (!C.zf) goto L_11f569d1;
  /* 11f569d0 ret  */
  ESPCHK(0x11f569b4u, _esp0);
  ESP += 4; return;
L_11f569d1:;
  /* 11f569d1 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f569d5 and dword ptr [0x11f630d4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f630d4)))&(0x0u); w32((uint32_t)(0x11f630d4), (_r)); fl_logic(_r,32); }
  /* 11f569dc and dword ptr [0x11f630d8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f630d8)))&(0x0u); w32((uint32_t)(0x11f630d8), (_r)); fl_logic(_r,32); }
  /* 11f569e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f569e5 mov dword ptr [0x11f630d0], eax */
  w32((uint32_t)(0x11f630d0), (EAX));
  /* 11f569ea mov dword ptr [0x11f630e0], ecx */
  w32((uint32_t)(0x11f630e0), (ECX));
  /* 11f569f0 mov dword ptr [0x11f630c8], 0x10 */
  w32((uint32_t)(0x11f630c8), (0x10u));
  /* 11f569fa pop eax */
  EAX = (pop32());
  /* 11f569fb ret  */
  ESPCHK(0x11f569b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100069fc @ 0x11f569fc (43 bytes, 14 insns) */
void f_11f569fc(void) {
  FTRACE(0x11f569fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f569fc mov eax, dword ptr [0x11f630d8] */
  EAX = (r32((uint32_t)(0x11f630d8)));
  /* 11f56a01 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f56a04 mov eax, dword ptr [0x11f630dc] */
  EAX = (r32((uint32_t)(0x11f630dc)));
  /* 11f56a09 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11f56a0c:;
  /* 11f56a0c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56a0e jae 0x11f56a24 */
  if (!C.cf) goto L_11f56a24;
  /* 11f56a10 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f56a14 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56a17 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56a1d jb 0x11f56a26 */
  if (C.cf) goto L_11f56a26;
  /* 11f56a1f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56a22 jmp 0x11f56a0c */
  goto L_11f56a0c;
L_11f56a24:;
  /* 11f56a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f56a26:;
  /* 11f56a26 ret  */
  ESPCHK(0x11f569fcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006a27 @ 0x11f56a27 (809 bytes, 265 insns) */
void f_11f56a27(void) {
  FTRACE(0x11f56a27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56a27 push ebp */
  push32((uint32_t)(EBP));
  /* 11f56a28 mov ebp, esp */
  EBP = (ESP);
  /* 11f56a2a sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56a30 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56a31 push esi */
  push32((uint32_t)(ESI));
  /* 11f56a32 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56a35 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f56a38 push edi */
  push32((uint32_t)(EDI));
  /* 11f56a39 mov edi, esi */
  EDI = (ESI);
  /* 11f56a3b add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56a3e sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56a41 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11f56a44 mov ecx, edi */
  ECX = (EDI);
  /* 11f56a46 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56a4c lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f56a53 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f56a56 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f56a58 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f56a59 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11f56a5c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f56a5f jne 0x11f56d4b */
  if (!C.zf) goto L_11f56d4b;
  /* 11f56a65 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11f56a68 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11f56a6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f56a6e mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11f56a71 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f56a74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f56a77 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11f56a7a mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11f56a7d jne 0x11f56afd */
  if (!C.zf) goto L_11f56afd;
  /* 11f56a7f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f56a82 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f56a83 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56a86 jbe 0x11f56a8b */
  if ((C.cf||C.zf)) goto L_11f56a8b;
  /* 11f56a88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f56a8a pop edx */
  EDX = (pop32());
L_11f56a8b:;
  /* 11f56a8b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f56a8e cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56a91 jne 0x11f56adf */
  if (!C.zf) goto L_11f56adf;
  /* 11f56a93 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56a96 jae 0x11f56ab6 */
  if (!C.cf) goto L_11f56ab6;
  /* 11f56a98 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56a9d mov ecx, edx */
  ECX = (EDX);
  /* 11f56a9f shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56aa1 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11f56aa5 not ebx */
  EBX = (~(EBX));
  /* 11f56aa7 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f56aab dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f56aad jne 0x11f56ad7 */
  if (!C.zf) goto L_11f56ad7;
  /* 11f56aaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56ab2 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f56ab4 jmp 0x11f56ad7 */
  goto L_11f56ad7;
L_11f56ab6:;
  /* 11f56ab6 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11f56ab9 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56abe shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56ac0 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11f56ac4 not ebx */
  EBX = (~(EBX));
  /* 11f56ac6 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f56acd dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f56acf jne 0x11f56ad7 */
  if (!C.zf) goto L_11f56ad7;
  /* 11f56ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56ad4 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f56ad7:;
  /* 11f56ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f56ada mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56add jmp 0x11f56ae2 */
  goto L_11f56ae2;
L_11f56adf:;
  /* 11f56adf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11f56ae2:;
  /* 11f56ae2 mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11f56ae5 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f56ae8 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56aeb mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11f56aee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56af1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f56af4 mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f56af7 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f56afa mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11f56afd:;
  /* 11f56afd mov edx, ecx */
  EDX = (ECX);
  /* 11f56aff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f56b02 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f56b03 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56b06 jbe 0x11f56b0b */
  if ((C.cf||C.zf)) goto L_11f56b0b;
  /* 11f56b08 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f56b0a pop edx */
  EDX = (pop32());
L_11f56b0b:;
  /* 11f56b0b mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f56b0e and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11f56b11 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f56b14 jne 0x11f56bae */
  if (!C.zf) goto L_11f56bae;
  /* 11f56b1a sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56b1d mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f56b20 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11f56b23 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f56b25 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11f56b28 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f56b29 pop esi */
  ESI = (pop32());
  /* 11f56b2a cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56b2c jbe 0x11f56b30 */
  if ((C.cf||C.zf)) goto L_11f56b30;
  /* 11f56b2e mov ebx, esi */
  EBX = (ESI);
L_11f56b30:;
  /* 11f56b30 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56b33 mov edx, ecx */
  EDX = (ECX);
  /* 11f56b35 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f56b38 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f56b3b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f56b3c cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56b3e jbe 0x11f56b42 */
  if ((C.cf||C.zf)) goto L_11f56b42;
  /* 11f56b40 mov edx, esi */
  EDX = (ESI);
L_11f56b42:;
  /* 11f56b42 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56b44 je 0x11f56ba9 */
  if (C.zf) goto L_11f56ba9;
  /* 11f56b46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56b49 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11f56b4c cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56b4f jne 0x11f56b91 */
  if (!C.zf) goto L_11f56b91;
  /* 11f56b51 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56b54 jae 0x11f56b72 */
  if (!C.cf) goto L_11f56b72;
  /* 11f56b56 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f56b5b mov ecx, ebx */
  ECX = (EBX);
  /* 11f56b5d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f56b5f not esi */
  ESI = (~(ESI));
  /* 11f56b61 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f56b65 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11f56b69 jne 0x11f56b91 */
  if (!C.zf) goto L_11f56b91;
  /* 11f56b6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56b6e and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f56b70 jmp 0x11f56b91 */
  goto L_11f56b91;
L_11f56b72:;
  /* 11f56b72 lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11f56b75 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f56b7a shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f56b7c not esi */
  ESI = (~(ESI));
  /* 11f56b7e and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f56b85 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11f56b89 jne 0x11f56b91 */
  if (!C.zf) goto L_11f56b91;
  /* 11f56b8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56b8e and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f56b91:;
  /* 11f56b91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56b94 mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11f56b97 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f56b9a mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11f56b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56ba0 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11f56ba3 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f56ba6 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11f56ba9:;
  /* 11f56ba9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f56bac jmp 0x11f56bb1 */
  goto L_11f56bb1;
L_11f56bae:;
  /* 11f56bae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f56bb1:;
  /* 11f56bb1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56bb5 jne 0x11f56bbf */
  if (!C.zf) goto L_11f56bbf;
  /* 11f56bb7 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56bb9 je 0x11f56c40 */
  if (C.zf) goto L_11f56c40;
L_11f56bbf:;
  /* 11f56bbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f56bc2 mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11f56bc6 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11f56bc9 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11f56bcc mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11f56bcf mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11f56bd2 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f56bd5 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11f56bd8 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f56bdb cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56bde jne 0x11f56c40 */
  if (!C.zf) goto L_11f56c40;
  /* 11f56be0 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11f56be4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56be7 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11f56bea inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f56bec mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11f56bf0 jae 0x11f56c17 */
  if (!C.cf) goto L_11f56c17;
  /* 11f56bf2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56bf6 jne 0x11f56c06 */
  if (!C.zf) goto L_11f56c06;
  /* 11f56bf8 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56bfd mov ecx, edx */
  ECX = (EDX);
  /* 11f56bff shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56c01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56c04 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11f56c06:;
  /* 11f56c06 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56c0b mov ecx, edx */
  ECX = (EDX);
  /* 11f56c0d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56c0f lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11f56c13 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f56c15 jmp 0x11f56c40 */
  goto L_11f56c40;
L_11f56c17:;
  /* 11f56c17 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56c1b jne 0x11f56c2d */
  if (!C.zf) goto L_11f56c2d;
  /* 11f56c1d lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11f56c20 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56c25 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56c27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56c2a or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f56c2d:;
  /* 11f56c2d lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11f56c30 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f56c35 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f56c37 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11f56c3e or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11f56c40:;
  /* 11f56c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f56c43 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f56c45 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11f56c49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f56c4c dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11f56c4e jne 0x11f56d4b */
  if (!C.zf) goto L_11f56d4b;
  /* 11f56c54 mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f56c5b je 0x11f56d3d */
  if (C.zf) goto L_11f56d3d;
  /* 11f56c61 mov ecx, dword ptr [0x11f630cc] */
  ECX = (r32((uint32_t)(0x11f630cc)));
  /* 11f56c67 mov esi, dword ptr [0x11f5c068] */
  ESI = (r32((uint32_t)(0x11f5c068)));
  /* 11f56c6d shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11f56c70 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56c73 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11f56c78 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f56c7d push ebx */
  push32((uint32_t)(EBX));
  /* 11f56c7e push ecx */
  push32((uint32_t)(ECX));
  /* 11f56c7f call esi */
  call_ind((uint32_t)(ESI), 0x11f56c81u);
  /* 11f56c81 mov ecx, dword ptr [0x11f630cc] */
  ECX = (r32((uint32_t)(0x11f630cc)));
  /* 11f56c87 mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56c8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f56c91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f56c93 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f56c96 mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56c9b mov ecx, dword ptr [0x11f630cc] */
  ECX = (r32((uint32_t)(0x11f630cc)));
  /* 11f56ca1 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f56ca4 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f56cac mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56cb1 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f56cb4 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11f56cb7 mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56cbc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f56cbf cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56cc3 jne 0x11f56cce */
  if (!C.zf) goto L_11f56cce;
  /* 11f56cc5 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f56cc9 mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
L_11f56cce:;
  /* 11f56cce cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56cd2 jne 0x11f56d3d */
  if (!C.zf) goto L_11f56d3d;
  /* 11f56cd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f56cd7 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11f56cda call esi */
  call_ind((uint32_t)(ESI), 0x11f56cdcu);
  /* 11f56cdc mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56ce1 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11f56ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f56ce6 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f56cec call dword ptr [0x11f5c0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a0))), 0x11f56cf2u);
  /* 11f56cf2 mov eax, dword ptr [0x11f630d8] */
  EAX = (r32((uint32_t)(0x11f630d8)));
  /* 11f56cf7 mov edx, dword ptr [0x11f630dc] */
  EDX = (r32((uint32_t)(0x11f630dc)));
  /* 11f56cfd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f56d00 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f56d03 mov ecx, eax */
  ECX = (EAX);
  /* 11f56d05 mov eax, dword ptr [0x11f630d4] */
  EAX = (r32((uint32_t)(0x11f630d4)));
  /* 11f56d0a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56d0c lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11f56d10 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56d11 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11f56d14 push ecx */
  push32((uint32_t)(ECX));
  /* 11f56d15 push eax */
  push32((uint32_t)(EAX));
  /* 11f56d16 call 0x11f57df0 */
  push32(0x11f56d1bu); f_11f57df0();
  /* 11f56d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56d1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56d21 dec dword ptr [0x11f630d8] */
  { uint32_t _r=(r32((uint32_t)(0x11f630d8)))-1; w32((uint32_t)(0x11f630d8), (_r)); fl_dec(_r,32); }
  /* 11f56d27 cmp eax, dword ptr [0x11f630d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f630d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56d2d jbe 0x11f56d33 */
  if ((C.cf||C.zf)) goto L_11f56d33;
  /* 11f56d2f sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11f56d33:;
  /* 11f56d33 mov eax, dword ptr [0x11f630dc] */
  EAX = (r32((uint32_t)(0x11f630dc)));
  /* 11f56d38 mov dword ptr [0x11f630d0], eax */
  w32((uint32_t)(0x11f630d0), (EAX));
L_11f56d3d:;
  /* 11f56d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56d40 mov dword ptr [0x11f630cc], edi */
  w32((uint32_t)(0x11f630cc), (EDI));
  /* 11f56d46 mov dword ptr [0x11f630d4], eax */
  w32((uint32_t)(0x11f630d4), (EAX));
L_11f56d4b:;
  /* 11f56d4b pop edi */
  EDI = (pop32());
  /* 11f56d4c pop esi */
  ESI = (pop32());
  /* 11f56d4d pop ebx */
  EBX = (pop32());
  /* 11f56d4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f56d4f ret  */
  ESPCHK(0x11f56a27u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x11f56d50 (777 bytes, 275 insns) */
void f_11f56d50(void) {
  FTRACE(0x11f56d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f56d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f56d51 mov ebp, esp */
  EBP = (ESP);
  /* 11f56d53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56d56 mov eax, dword ptr [0x11f630d8] */
  EAX = (r32((uint32_t)(0x11f630d8)));
  /* 11f56d5b mov edx, dword ptr [0x11f630dc] */
  EDX = (r32((uint32_t)(0x11f630dc)));
  /* 11f56d61 push ebx */
  push32((uint32_t)(EBX));
  /* 11f56d62 push esi */
  push32((uint32_t)(ESI));
  /* 11f56d63 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f56d66 push edi */
  push32((uint32_t)(EDI));
  /* 11f56d67 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11f56d6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56d6d mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f56d70 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11f56d73 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f56d76 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f56d79 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f56d7c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f56d7d cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56d80 jge 0x11f56d90 */
  if ((C.sf==C.of)) goto L_11f56d90;
  /* 11f56d82 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f56d85 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f56d87 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f56d8b mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f56d8e jmp 0x11f56da0 */
  goto L_11f56da0;
L_11f56d90:;
  /* 11f56d90 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56d93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f56d96 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f56d98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f56d9a mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f56d9d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f56da0:;
  /* 11f56da0 mov eax, dword ptr [0x11f630d0] */
  EAX = (r32((uint32_t)(0x11f630d0)));
  /* 11f56da5 mov ebx, eax */
  EBX = (EAX);
  /* 11f56da7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56da9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f56dac jae 0x11f56dc7 */
  if (!C.cf) goto L_11f56dc7;
L_11f56dae:;
  /* 11f56dae mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f56db1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f56db3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f56db6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f56db8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f56dba jne 0x11f56dc7 */
  if (!C.zf) goto L_11f56dc7;
  /* 11f56dbc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56dbf cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56dc2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f56dc5 jb 0x11f56dae */
  if (C.cf) goto L_11f56dae;
L_11f56dc7:;
  /* 11f56dc7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56dca jne 0x11f56e45 */
  if (!C.zf) goto L_11f56e45;
  /* 11f56dcc mov ebx, edx */
  EBX = (EDX);
L_11f56dce:;
  /* 11f56dce cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56dd0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f56dd3 jae 0x11f56dea */
  if (!C.cf) goto L_11f56dea;
  /* 11f56dd5 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f56dd8 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f56dda and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f56ddd and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f56ddf or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f56de1 jne 0x11f56de8 */
  if (!C.zf) goto L_11f56de8;
  /* 11f56de3 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56de6 jmp 0x11f56dce */
  goto L_11f56dce;
L_11f56de8:;
  /* 11f56de8 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f56dea:;
  /* 11f56dea jne 0x11f56e45 */
  if (!C.zf) goto L_11f56e45;
L_11f56dec:;
  /* 11f56dec cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56def jae 0x11f56e02 */
  if (!C.cf) goto L_11f56e02;
  /* 11f56df1 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56df5 jne 0x11f56dff */
  if (!C.zf) goto L_11f56dff;
  /* 11f56df7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56dfa mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f56dfd jmp 0x11f56dec */
  goto L_11f56dec;
L_11f56dff:;
  /* 11f56dff cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f56e02:;
  /* 11f56e02 jne 0x11f56e2a */
  if (!C.zf) goto L_11f56e2a;
  /* 11f56e04 mov ebx, edx */
  EBX = (EDX);
L_11f56e06:;
  /* 11f56e06 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56e08 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f56e0b jae 0x11f56e1a */
  if (!C.cf) goto L_11f56e1a;
  /* 11f56e0d cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56e11 jne 0x11f56e18 */
  if (!C.zf) goto L_11f56e18;
  /* 11f56e13 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56e16 jmp 0x11f56e06 */
  goto L_11f56e06;
L_11f56e18:;
  /* 11f56e18 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f56e1a:;
  /* 11f56e1a jne 0x11f56e2a */
  if (!C.zf) goto L_11f56e2a;
  /* 11f56e1c call 0x11f57059 */
  push32(0x11f56e21u); f_11f57059();
  /* 11f56e21 mov ebx, eax */
  EBX = (EAX);
  /* 11f56e23 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f56e25 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f56e28 je 0x11f56e3e */
  if (C.zf) goto L_11f56e3e;
L_11f56e2a:;
  /* 11f56e2a push ebx */
  push32((uint32_t)(EBX));
  /* 11f56e2b call 0x11f5710a */
  push32(0x11f56e30u); f_11f5710a();
  /* 11f56e30 pop ecx */
  ECX = (pop32());
  /* 11f56e31 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f56e34 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f56e36 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f56e39 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56e3c jne 0x11f56e45 */
  if (!C.zf) goto L_11f56e45;
L_11f56e3e:;
  /* 11f56e3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f56e40 jmp 0x11f57054 */
  goto L_11f57054;
L_11f56e45:;
  /* 11f56e45 mov dword ptr [0x11f630d0], ebx */
  w32((uint32_t)(0x11f630d0), (EBX));
  /* 11f56e4b mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f56e4e mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f56e50 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56e53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f56e56 je 0x11f56e6c */
  if (C.zf) goto L_11f56e6c;
  /* 11f56e58 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f56e5f mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f56e63 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f56e66 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f56e68 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f56e6a jne 0x11f56ea3 */
  if (!C.zf) goto L_11f56ea3;
L_11f56e6c:;
  /* 11f56e6c mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11f56e72 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11f56e75 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f56e78 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11f56e7b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f56e7f lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11f56e82 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f56e84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f56e87 jne 0x11f56ea0 */
  if (!C.zf) goto L_11f56ea0;
L_11f56e89:;
  /* 11f56e89 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11f56e8f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f56e92 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f56e95 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f56e98 mov edi, esi */
  EDI = (ESI);
  /* 11f56e9a and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11f56e9c or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11f56e9e je 0x11f56e89 */
  if (C.zf) goto L_11f56e89;
L_11f56ea0:;
  /* 11f56ea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11f56ea3:;
  /* 11f56ea3 mov ecx, edx */
  ECX = (EDX);
  /* 11f56ea5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f56ea7 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f56ead lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f56eb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f56eb7 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f56ebb and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11f56ebd jne 0x11f56ecc */
  if (!C.zf) goto L_11f56ecc;
  /* 11f56ebf mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f56ec6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f56ec8 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f56ecb pop edi */
  EDI = (pop32());
L_11f56ecc:;
  /* 11f56ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f56ece jl 0x11f56ed5 */
  if ((C.sf!=C.of)) goto L_11f56ed5;
  /* 11f56ed0 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f56ed2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f56ed3 jmp 0x11f56ecc */
  goto L_11f56ecc;
L_11f56ed5:;
  /* 11f56ed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f56ed8 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11f56edc mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f56ede sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f56ee1 mov esi, ecx */
  ESI = (ECX);
  /* 11f56ee3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f56ee6 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f56ee9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f56eea cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56eed jle 0x11f56ef2 */
  if ((C.zf||C.sf!=C.of)) goto L_11f56ef2;
  /* 11f56eef push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f56ef1 pop esi */
  ESI = (pop32());
L_11f56ef2:;
  /* 11f56ef2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56ef4 je 0x11f57007 */
  if (C.zf) goto L_11f57007;
  /* 11f56efa mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f56efd cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56f00 jne 0x11f56f63 */
  if (!C.zf) goto L_11f56f63;
  /* 11f56f02 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56f05 jge 0x11f56f32 */
  if ((C.sf==C.of)) goto L_11f56f32;
  /* 11f56f07 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56f0c mov ecx, edi */
  ECX = (EDI);
  /* 11f56f0e shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56f10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f56f13 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f56f17 not ebx */
  EBX = (~(EBX));
  /* 11f56f19 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f56f1c and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11f56f20 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11f56f24 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f56f26 jne 0x11f56f60 */
  if (!C.zf) goto L_11f56f60;
  /* 11f56f28 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56f2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f56f2e and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11f56f30 jmp 0x11f56f63 */
  goto L_11f56f63;
L_11f56f32:;
  /* 11f56f32 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f56f35 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f56f3a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f56f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f56f3f lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f56f43 lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f56f4a not ebx */
  EBX = (~(EBX));
  /* 11f56f4c and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f56f4e dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f56f50 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f56f53 jne 0x11f56f60 */
  if (!C.zf) goto L_11f56f60;
  /* 11f56f55 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f56f58 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f56f5b and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f56f5e jmp 0x11f56f63 */
  goto L_11f56f63;
L_11f56f60:;
  /* 11f56f60 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f56f63:;
  /* 11f56f63 mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f56f66 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11f56f69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56f6d mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f56f70 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f56f73 mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11f56f76 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f56f79 je 0x11f57013 */
  if (C.zf) goto L_11f57013;
  /* 11f56f7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f56f82 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11f56f86 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11f56f89 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11f56f8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f56f8f mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f56f92 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f56f95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f56f98 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f56f9b cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56f9e jne 0x11f57004 */
  if (!C.zf) goto L_11f57004;
  /* 11f56fa0 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11f56fa4 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f56fa7 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11f56faa jge 0x11f56fd5 */
  if ((C.sf==C.of)) goto L_11f56fd5;
  /* 11f56fac inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f56fae cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56fb2 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f56fb6 jne 0x11f56fc3 */
  if (!C.zf) goto L_11f56fc3;
  /* 11f56fb8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f56fbd mov ecx, esi */
  ECX = (ESI);
  /* 11f56fbf shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f56fc1 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11f56fc3:;
  /* 11f56fc3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f56fc8 mov ecx, esi */
  ECX = (ESI);
  /* 11f56fca shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f56fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f56fcf or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f56fd3 jmp 0x11f57004 */
  goto L_11f57004;
L_11f56fd5:;
  /* 11f56fd5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f56fd7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f56fdb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f56fdf jne 0x11f56fee */
  if (!C.zf) goto L_11f56fee;
  /* 11f56fe1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f56fe4 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f56fe9 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f56feb or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11f56fee:;
  /* 11f56fee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f56ff1 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f56ff8 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f56ffb mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f57000 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f57002 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f57004:;
  /* 11f57004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f57007:;
  /* 11f57007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f57009 je 0x11f57016 */
  if (C.zf) goto L_11f57016;
  /* 11f5700b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f5700d mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11f57011 jmp 0x11f57016 */
  goto L_11f57016;
L_11f57013:;
  /* 11f57013 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f57016:;
  /* 11f57016 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11f57019 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5701b lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11f5701e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f57020 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11f57024 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f57027 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f57029 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f5702b lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11f5702e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f57030 jne 0x11f5704c */
  if (!C.zf) goto L_11f5704c;
  /* 11f57032 cmp ebx, dword ptr [0x11f630d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f630d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57038 jne 0x11f5704c */
  if (!C.zf) goto L_11f5704c;
  /* 11f5703a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5703d cmp ecx, dword ptr [0x11f630cc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f630cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57043 jne 0x11f5704c */
  if (!C.zf) goto L_11f5704c;
  /* 11f57045 and dword ptr [0x11f630d4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f630d4)))&(0x0u); w32((uint32_t)(0x11f630d4), (_r)); fl_logic(_r,32); }
L_11f5704c:;
  /* 11f5704c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5704f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f57051 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11f57054:;
  /* 11f57054 pop edi */
  EDI = (pop32());
  /* 11f57055 pop esi */
  ESI = (pop32());
  /* 11f57056 pop ebx */
  EBX = (pop32());
  /* 11f57057 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57058 ret  */
  ESPCHK(0x11f56d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007059 @ 0x11f57059 (177 bytes, 53 insns) */
void f_11f57059(void) {
  FTRACE(0x11f57059u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57059 mov eax, dword ptr [0x11f630d8] */
  EAX = (r32((uint32_t)(0x11f630d8)));
  /* 11f5705e mov ecx, dword ptr [0x11f630c8] */
  ECX = (r32((uint32_t)(0x11f630c8)));
  /* 11f57064 push esi */
  push32((uint32_t)(ESI));
  /* 11f57065 push edi */
  push32((uint32_t)(EDI));
  /* 11f57066 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f57068 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5706a jne 0x11f5709c */
  if (!C.zf) goto L_11f5709c;
  /* 11f5706c lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11f57070 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f57073 push eax */
  push32((uint32_t)(EAX));
  /* 11f57074 push dword ptr [0x11f630dc] */
  push32((uint32_t)(r32((uint32_t)(0x11f630dc))));
  /* 11f5707a push edi */
  push32((uint32_t)(EDI));
  /* 11f5707b push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f57081 call dword ptr [0x11f5c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c05c))), 0x11f57087u);
  /* 11f57087 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57089 je 0x11f570ec */
  if (C.zf) goto L_11f570ec;
  /* 11f5708b add dword ptr [0x11f630c8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11f630c8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11f630c8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f57092 mov dword ptr [0x11f630dc], eax */
  w32((uint32_t)(0x11f630dc), (EAX));
  /* 11f57097 mov eax, dword ptr [0x11f630d8] */
  EAX = (r32((uint32_t)(0x11f630d8)));
L_11f5709c:;
  /* 11f5709c mov ecx, dword ptr [0x11f630dc] */
  ECX = (r32((uint32_t)(0x11f630dc)));
  /* 11f570a2 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f570a7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f570a9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f570ac push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f570b2 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f570b5 call dword ptr [0x11f5c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a4))), 0x11f570bbu);
  /* 11f570bb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f570bd mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11f570c0 je 0x11f570ec */
  if (C.zf) goto L_11f570ec;
  /* 11f570c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f570c4 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f570c9 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f570ce push edi */
  push32((uint32_t)(EDI));
  /* 11f570cf call dword ptr [0x11f5c060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c060))), 0x11f570d5u);
  /* 11f570d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f570d7 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11f570da jne 0x11f570f0 */
  if (!C.zf) goto L_11f570f0;
  /* 11f570dc push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f570df push edi */
  push32((uint32_t)(EDI));
  /* 11f570e0 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f570e6 call dword ptr [0x11f5c0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a0))), 0x11f570ecu);
L_11f570ec:;
  /* 11f570ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f570ee jmp 0x11f57107 */
  goto L_11f57107;
L_11f570f0:;
  /* 11f570f0 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f570f4 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f570f6 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11f570f9 inc dword ptr [0x11f630d8] */
  { uint32_t _r=(r32((uint32_t)(0x11f630d8)))+1; w32((uint32_t)(0x11f630d8), (_r)); fl_inc(_r,32); }
  /* 11f570ff mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f57102 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f57105 mov eax, esi */
  EAX = (ESI);
L_11f57107:;
  /* 11f57107 pop edi */
  EDI = (pop32());
  /* 11f57108 pop esi */
  ESI = (pop32());
  /* 11f57109 ret  */
  ESPCHK(0x11f57059u, _esp0);
  ESP += 4; return;
}

/* FUN_1000710a @ 0x11f5710a (251 bytes, 85 insns) */
void f_11f5710a(void) {
  FTRACE(0x11f5710au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5710a push ebp */
  push32((uint32_t)(EBP));
  /* 11f5710b mov ebp, esp */
  EBP = (ESP);
  /* 11f5710d push ecx */
  push32((uint32_t)(ECX));
  /* 11f5710e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57111 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57112 push esi */
  push32((uint32_t)(ESI));
  /* 11f57113 push edi */
  push32((uint32_t)(EDI));
  /* 11f57114 mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11f57117 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f5711a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f5711c:;
  /* 11f5711c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5711e jl 0x11f57125 */
  if ((C.sf!=C.of)) goto L_11f57125;
  /* 11f57120 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f57122 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f57123 jmp 0x11f5711c */
  goto L_11f5711c;
L_11f57125:;
  /* 11f57125 mov eax, ebx */
  EAX = (EBX);
  /* 11f57127 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f57129 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5712f pop edx */
  EDX = (pop32());
  /* 11f57130 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11f57137 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f5713a:;
  /* 11f5713a mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11f5713d mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11f57140 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57143 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f57144 jne 0x11f5713a */
  if (!C.zf) goto L_11f5713a;
  /* 11f57146 mov edi, ebx */
  EDI = (EBX);
  /* 11f57148 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5714a shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11f5714d add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57150 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f57155 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f5715a push edi */
  push32((uint32_t)(EDI));
  /* 11f5715b call dword ptr [0x11f5c060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c060))), 0x11f57161u);
  /* 11f57161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57163 jne 0x11f5716d */
  if (!C.zf) goto L_11f5716d;
  /* 11f57165 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f57168 jmp 0x11f57200 */
  goto L_11f57200;
L_11f5716d:;
  /* 11f5716d lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11f57173 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57175 ja 0x11f571b3 */
  if ((!C.cf&&!C.zf)) goto L_11f571b3;
  /* 11f57177 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11f5717a:;
  /* 11f5717a or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f5717e or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11f57185 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11f5718b mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11f57192 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f57194 lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11f5719a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f5719d mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11f571a7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f571ac lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11f571af cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f571b1 jbe 0x11f5717a */
  if ((C.cf||C.zf)) goto L_11f5717a;
L_11f571b3:;
  /* 11f571b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f571b6 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11f571b9 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f571be push 1 */
  push32((uint32_t)(0x1u));
  /* 11f571c0 pop edi */
  EDI = (pop32());
  /* 11f571c1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f571c4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f571c7 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11f571ca mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f571cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f571d0 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f571d5 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11f571dc mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11f571df mov cl, al */
  CL = (AL);
  /* 11f571e1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f571e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f571e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f571e8 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11f571eb jne 0x11f571f0 */
  if (!C.zf) goto L_11f571f0;
  /* 11f571ed or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11f571f0:;
  /* 11f571f0 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f571f5 mov ecx, ebx */
  ECX = (EBX);
  /* 11f571f7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f571f9 not edx */
  EDX = (~(EDX));
  /* 11f571fb and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f571fe mov eax, ebx */
  EAX = (EBX);
L_11f57200:;
  /* 11f57200 pop edi */
  EDI = (pop32());
  /* 11f57201 pop esi */
  ESI = (pop32());
  /* 11f57202 pop ebx */
  EBX = (pop32());
  /* 11f57203 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57204 ret  */
  ESPCHK(0x11f5710au, _esp0);
  ESP += 4; return;
}

/* FUN_10007205 @ 0x11f57205 (758 bytes, 259 insns) */
void f_11f57205(void) {
  FTRACE(0x11f57205u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57205 push ebp */
  push32((uint32_t)(EBP));
  /* 11f57206 mov ebp, esp */
  EBP = (ESP);
  /* 11f57208 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5720b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5720e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f57211 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57212 push esi */
  push32((uint32_t)(ESI));
  /* 11f57213 push edi */
  push32((uint32_t)(EDI));
  /* 11f57214 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f57217 mov edx, edi */
  EDX = (EDI);
  /* 11f57219 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11f5721c sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5721f mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f57222 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f57225 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f57228 mov ecx, edx */
  ECX = (EDX);
  /* 11f5722a imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f57230 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f57237 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f5723a mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11f5723d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f5723e cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57240 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11f57243 mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11f57247 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f5724b mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f5724e jle 0x11f573b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f573b3;
  /* 11f57254 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f57257 jne 0x11f573ac */
  if (!C.zf) goto L_11f573ac;
  /* 11f5725d add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5725f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57261 jg 0x11f573ac */
  if ((!C.zf&&C.sf==C.of)) goto L_11f573ac;
  /* 11f57267 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5726a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f5726d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f5726e cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57271 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f57274 jbe 0x11f5727c */
  if ((C.cf||C.zf)) goto L_11f5727c;
  /* 11f57276 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f57278 pop ecx */
  ECX = (pop32());
  /* 11f57279 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f5727c:;
  /* 11f5727c mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f5727f cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57282 jne 0x11f572cc */
  if (!C.zf) goto L_11f572cc;
  /* 11f57284 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57287 jae 0x11f572a8 */
  if (!C.cf) goto L_11f572a8;
  /* 11f57289 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f5728e shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f57290 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f57293 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f57297 not ebx */
  EBX = (~(EBX));
  /* 11f57299 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f5729d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f5729f jne 0x11f572cc */
  if (!C.zf) goto L_11f572cc;
  /* 11f572a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f572a4 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f572a6 jmp 0x11f572cc */
  goto L_11f572cc;
L_11f572a8:;
  /* 11f572a8 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f572ab mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f572b0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f572b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f572b5 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f572b9 not ebx */
  EBX = (~(EBX));
  /* 11f572bb and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f572c2 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f572c4 jne 0x11f572cc */
  if (!C.zf) goto L_11f572cc;
  /* 11f572c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f572c9 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f572cc:;
  /* 11f572cc mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f572cf mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f572d2 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11f572d5 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f572d8 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11f572db mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f572de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f572e1 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f572e3 add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f572e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f572ea jle 0x11f5739a */
  if ((C.zf||C.sf!=C.of)) goto L_11f5739a;
  /* 11f572f0 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11f572f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f572f6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f572f9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f572fa lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f572fe cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57301 jbe 0x11f57306 */
  if ((C.cf||C.zf)) goto L_11f57306;
  /* 11f57303 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f57305 pop edi */
  EDI = (pop32());
L_11f57306:;
  /* 11f57306 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f57309 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11f5730c mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11f5730f mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f57312 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11f57315 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f57318 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11f5731b mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11f5731e mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f57321 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f57324 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f57327 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5732a jne 0x11f57388 */
  if (!C.zf) goto L_11f57388;
  /* 11f5732c mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11f57330 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57333 mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11f57336 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f57338 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11f5733c jae 0x11f5735f */
  if (!C.cf) goto L_11f5735f;
  /* 11f5733e cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57342 jne 0x11f57352 */
  if (!C.zf) goto L_11f57352;
  /* 11f57344 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f57349 mov ecx, edi */
  ECX = (EDI);
  /* 11f5734b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f5734d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57350 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11f57352:;
  /* 11f57352 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11f57356 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f5735b mov ecx, edi */
  ECX = (EDI);
  /* 11f5735d jmp 0x11f57384 */
  goto L_11f57384;
L_11f5735f:;
  /* 11f5735f cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57363 jne 0x11f57375 */
  if (!C.zf) goto L_11f57375;
  /* 11f57365 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f57368 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f5736d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f5736f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57372 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f57375:;
  /* 11f57375 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11f5737c lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f5737f mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11f57384:;
  /* 11f57384 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f57386 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11f57388:;
  /* 11f57388 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5738b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5738e lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11f57392 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f57394 mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11f57398 jmp 0x11f5739d */
  goto L_11f5739d;
L_11f5739a:;
  /* 11f5739a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11f5739d:;
  /* 11f5739d lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11f573a0 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11f573a3 mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11f573a7 jmp 0x11f574f3 */
  goto L_11f574f3;
L_11f573ac:;
  /* 11f573ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f573ae jmp 0x11f574f6 */
  goto L_11f574f6;
L_11f573b3:;
  /* 11f573b3 jge 0x11f574f3 */
  if ((C.sf==C.of)) goto L_11f574f3;
  /* 11f573b9 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f573bc sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f573bf lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11f573c2 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11f573c5 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11f573c9 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f573cc mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11f573cf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f573d2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f573d3 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11f573d6 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f573d9 jbe 0x11f573de */
  if ((C.cf||C.zf)) goto L_11f573de;
  /* 11f573db push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f573dd pop esi */
  ESI = (pop32());
L_11f573de:;
  /* 11f573de test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f573e2 jne 0x11f5746d */
  if (!C.zf) goto L_11f5746d;
  /* 11f573e8 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11f573eb sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f573ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f573ef cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f573f2 jbe 0x11f573f7 */
  if ((C.cf||C.zf)) goto L_11f573f7;
  /* 11f573f4 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f573f6 pop esi */
  ESI = (pop32());
L_11f573f7:;
  /* 11f573f7 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f573fa cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f573fd jne 0x11f57446 */
  if (!C.zf) goto L_11f57446;
  /* 11f573ff cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57402 jae 0x11f57422 */
  if (!C.cf) goto L_11f57422;
  /* 11f57404 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f57409 mov ecx, esi */
  ECX = (ESI);
  /* 11f5740b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f5740d lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11f57411 not ebx */
  EBX = (~(EBX));
  /* 11f57413 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f57417 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11f57419 jne 0x11f57443 */
  if (!C.zf) goto L_11f57443;
  /* 11f5741b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5741e and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f57420 jmp 0x11f57443 */
  goto L_11f57443;
L_11f57422:;
  /* 11f57422 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f57425 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f5742a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f5742c lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11f57430 not ebx */
  EBX = (~(EBX));
  /* 11f57432 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f57439 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f5743b jne 0x11f57443 */
  if (!C.zf) goto L_11f57443;
  /* 11f5743d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57440 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f57443:;
  /* 11f57443 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11f57446:;
  /* 11f57446 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11f57449 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11f5744c mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11f5744f mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f57452 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11f57455 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11f57458 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5745b add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5745e mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11f57461 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f57464 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f57465 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57468 jbe 0x11f5746d */
  if ((C.cf||C.zf)) goto L_11f5746d;
  /* 11f5746a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f5746c pop esi */
  ESI = (pop32());
L_11f5746d:;
  /* 11f5746d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f57470 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11f57474 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11f57477 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11f5747a mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f5747d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11f57480 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f57483 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11f57486 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f57489 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5748c jne 0x11f574ea */
  if (!C.zf) goto L_11f574ea;
  /* 11f5748e mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11f57492 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57495 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11f57498 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f5749a mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f5749e jae 0x11f574c1 */
  if (!C.cf) goto L_11f574c1;
  /* 11f574a0 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f574a4 jne 0x11f574b4 */
  if (!C.zf) goto L_11f574b4;
  /* 11f574a6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f574ab mov ecx, esi */
  ECX = (ESI);
  /* 11f574ad shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f574af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f574b2 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11f574b4:;
  /* 11f574b4 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11f574b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f574bd mov ecx, esi */
  ECX = (ESI);
  /* 11f574bf jmp 0x11f574e6 */
  goto L_11f574e6;
L_11f574c1:;
  /* 11f574c1 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f574c5 jne 0x11f574d7 */
  if (!C.zf) goto L_11f574d7;
  /* 11f574c7 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f574ca mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f574cf shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f574d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f574d4 or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f574d7:;
  /* 11f574d7 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11f574de lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f574e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11f574e6:;
  /* 11f574e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f574e8 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11f574ea:;
  /* 11f574ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f574ed mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11f574ef mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11f574f3:;
  /* 11f574f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f574f5 pop eax */
  EAX = (pop32());
L_11f574f6:;
  /* 11f574f6 pop edi */
  EDI = (pop32());
  /* 11f574f7 pop esi */
  ESI = (pop32());
  /* 11f574f8 pop ebx */
  EBX = (pop32());
  /* 11f574f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f574fa ret  */
  ESPCHK(0x11f57205u, _esp0);
  ESP += 4; return;
}

/* FUN_100074fb @ 0x11f574fb (324 bytes, 102 insns) */
void f_11f574fb(void) {
  FTRACE(0x11f574fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f574fb cmp dword ptr [0x11f5fcc8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11f5fcc8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57502 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57503 push ebp */
  push32((uint32_t)(EBP));
  /* 11f57504 push esi */
  push32((uint32_t)(ESI));
  /* 11f57505 push edi */
  push32((uint32_t)(EDI));
  /* 11f57506 jne 0x11f5750f */
  if (!C.zf) goto L_11f5750f;
  /* 11f57508 mov esi, 0x11f5fcb8 */
  ESI = (0x11f5fcb8u);
  /* 11f5750d jmp 0x11f5752c */
  goto L_11f5752c;
L_11f5750f:;
  /* 11f5750f push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11f57514 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f57516 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f5751c call dword ptr [0x11f5c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a4))), 0x11f57522u);
  /* 11f57522 mov esi, eax */
  ESI = (EAX);
  /* 11f57524 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f57526 je 0x11f57638 */
  if (C.zf) goto L_11f57638;
L_11f5752c:;
  /* 11f5752c mov ebp, dword ptr [0x11f5c060] */
  EBP = (r32((uint32_t)(0x11f5c060)));
  /* 11f57532 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f57534 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f57539 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11f5753e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f57540 call ebp */
  call_ind((uint32_t)(EBP), 0x11f57542u);
  /* 11f57542 mov edi, eax */
  EDI = (EAX);
  /* 11f57544 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f57546 je 0x11f57621 */
  if (C.zf) goto L_11f57621;
  /* 11f5754c push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5754e mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11f57553 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f57558 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57559 push edi */
  push32((uint32_t)(EDI));
  /* 11f5755a call ebp */
  call_ind((uint32_t)(EBP), 0x11f5755cu);
  /* 11f5755c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5755e je 0x11f57613 */
  if (C.zf) goto L_11f57613;
  /* 11f57564 mov eax, 0x11f5fcb8 */
  EAX = (0x11f5fcb8u);
  /* 11f57569 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5756b jne 0x11f5758b */
  if (!C.zf) goto L_11f5758b;
  /* 11f5756d cmp dword ptr [0x11f5fcb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f5fcb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57574 jne 0x11f5757b */
  if (!C.zf) goto L_11f5757b;
  /* 11f57576 mov dword ptr [0x11f5fcb8], eax */
  w32((uint32_t)(0x11f5fcb8), (EAX));
L_11f5757b:;
  /* 11f5757b cmp dword ptr [0x11f5fcbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f5fcbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57582 jne 0x11f575a0 */
  if (!C.zf) goto L_11f575a0;
  /* 11f57584 mov dword ptr [0x11f5fcbc], eax */
  w32((uint32_t)(0x11f5fcbc), (EAX));
  /* 11f57589 jmp 0x11f575a0 */
  goto L_11f575a0;
L_11f5758b:;
  /* 11f5758b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f5758d mov eax, dword ptr [0x11f5fcbc] */
  EAX = (r32((uint32_t)(0x11f5fcbc)));
  /* 11f57592 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11f57595 mov dword ptr [0x11f5fcbc], esi */
  w32((uint32_t)(0x11f5fcbc), (ESI));
  /* 11f5759b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5759e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11f575a0:;
  /* 11f575a0 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11f575a6 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11f575ac mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11f575af lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11f575b2 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11f575b5 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11f575b8 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f575bb xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11f575bd mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11f575c2:;
  /* 11f575c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f575c4 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f575c7 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11f575ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f575cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f575cd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f575ce inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11f575cf mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f575d1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f575d4 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f575d7 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f575dd jl 0x11f575c2 */
  if ((C.sf!=C.of)) goto L_11f575c2;
  /* 11f575df push ebx */
  push32((uint32_t)(EBX));
  /* 11f575e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f575e2 push edi */
  push32((uint32_t)(EDI));
  /* 11f575e3 call 0x11f59110 */
  push32(0x11f575e8u); f_11f59110();
  /* 11f575e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f575eb:;
  /* 11f575eb mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f575ee add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f575f0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f575f2 jae 0x11f5760f */
  if (!C.cf) goto L_11f5760f;
  /* 11f575f4 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11f575fb lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11f575fe mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f57600 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11f57607 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5760d jmp 0x11f575eb */
  goto L_11f575eb;
L_11f5760f:;
  /* 11f5760f mov eax, esi */
  EAX = (ESI);
  /* 11f57611 jmp 0x11f5763a */
  goto L_11f5763a;
L_11f57613:;
  /* 11f57613 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f57618 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5761a push edi */
  push32((uint32_t)(EDI));
  /* 11f5761b call dword ptr [0x11f5c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c068))), 0x11f57621u);
L_11f57621:;
  /* 11f57621 cmp esi, 0x11f5fcb8 */
  { uint32_t _a=(ESI),_b=(0x11f5fcb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57627 je 0x11f57638 */
  if (C.zf) goto L_11f57638;
  /* 11f57629 push esi */
  push32((uint32_t)(ESI));
  /* 11f5762a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5762c push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f57632 call dword ptr [0x11f5c0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a0))), 0x11f57638u);
L_11f57638:;
  /* 11f57638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5763a:;
  /* 11f5763a pop edi */
  EDI = (pop32());
  /* 11f5763b pop esi */
  ESI = (pop32());
  /* 11f5763c pop ebp */
  EBP = (pop32());
  /* 11f5763d pop ebx */
  EBX = (pop32());
  /* 11f5763e ret  */
  ESPCHK(0x11f574fbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000763f @ 0x11f5763f (86 bytes, 27 insns) */
void f_11f5763f(void) {
  FTRACE(0x11f5763fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5763f push esi */
  push32((uint32_t)(ESI));
  /* 11f57640 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f57644 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f57649 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5764b push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f5764e call dword ptr [0x11f5c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c068))), 0x11f57654u);
  /* 11f57654 cmp dword ptr [0x11f61cd8], esi */
  { uint32_t _a=(r32((uint32_t)(0x11f61cd8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5765a jne 0x11f57664 */
  if (!C.zf) goto L_11f57664;
  /* 11f5765c mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5765f mov dword ptr [0x11f61cd8], eax */
  w32((uint32_t)(0x11f61cd8), (EAX));
L_11f57664:;
  /* 11f57664 cmp esi, 0x11f5fcb8 */
  { uint32_t _a=(ESI),_b=(0x11f5fcb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5766a je 0x11f5768c */
  if (C.zf) goto L_11f5768c;
  /* 11f5766c mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5766f mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f57671 push esi */
  push32((uint32_t)(ESI));
  /* 11f57672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f57674 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f57676 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f57678 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5767b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f5767e push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f57684 call dword ptr [0x11f5c0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a0))), 0x11f5768au);
  /* 11f5768a pop esi */
  ESI = (pop32());
  /* 11f5768b ret  */
  ESPCHK(0x11f5763fu, _esp0);
  ESP += 4; return;
L_11f5768c:;
  /* 11f5768c or dword ptr [0x11f5fcc8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f5fcc8)))|(0xffffffffu); w32((uint32_t)(0x11f5fcc8), (_r)); fl_logic(_r,32); }
  /* 11f57693 pop esi */
  ESI = (pop32());
  /* 11f57694 ret  */
  ESPCHK(0x11f5763fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007695 @ 0x11f57695 (194 bytes, 66 insns) */
void f_11f57695(void) {
  FTRACE(0x11f57695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57695 push ebp */
  push32((uint32_t)(EBP));
  /* 11f57696 mov ebp, esp */
  EBP = (ESP);
  /* 11f57698 push ecx */
  push32((uint32_t)(ECX));
  /* 11f57699 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5769a push esi */
  push32((uint32_t)(ESI));
  /* 11f5769b mov esi, dword ptr [0x11f5fcbc] */
  ESI = (r32((uint32_t)(0x11f5fcbc)));
  /* 11f576a1 push edi */
  push32((uint32_t)(EDI));
L_11f576a2:;
  /* 11f576a2 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f576a6 je 0x11f57740 */
  if (C.zf) goto L_11f57740;
  /* 11f576ac and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f576b0 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11f576b6 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11f576bb:;
  /* 11f576bb cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f576c1 jne 0x11f576fc */
  if (!C.zf) goto L_11f576fc;
  /* 11f576c3 mov eax, ebx */
  EAX = (EBX);
  /* 11f576c5 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f576ca add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f576cd push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f576d2 push eax */
  push32((uint32_t)(EAX));
  /* 11f576d3 call dword ptr [0x11f5c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c068))), 0x11f576d9u);
  /* 11f576d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f576db je 0x11f576fc */
  if (C.zf) goto L_11f576fc;
  /* 11f576dd or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11f576e0 dec dword ptr [0x11f62db4] */
  { uint32_t _r=(r32((uint32_t)(0x11f62db4)))-1; w32((uint32_t)(0x11f62db4), (_r)); fl_dec(_r,32); }
  /* 11f576e6 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11f576e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f576eb je 0x11f576f1 */
  if (C.zf) goto L_11f576f1;
  /* 11f576ed cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f576ef jbe 0x11f576f4 */
  if ((C.cf||C.zf)) goto L_11f576f4;
L_11f576f1:;
  /* 11f576f1 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11f576f4:;
  /* 11f576f4 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f576f7 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11f576fa je 0x11f57709 */
  if (C.zf) goto L_11f57709;
L_11f576fc:;
  /* 11f576fc sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57702 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57705 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f57707 jge 0x11f576bb */
  if ((C.sf==C.of)) goto L_11f576bb;
L_11f57709:;
  /* 11f57709 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5770d mov ecx, esi */
  ECX = (ESI);
  /* 11f5770f mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11f57712 je 0x11f57740 */
  if (C.zf) goto L_11f57740;
  /* 11f57714 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57718 jne 0x11f57740 */
  if (!C.zf) goto L_11f57740;
  /* 11f5771a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5771c lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11f5771f pop edx */
  EDX = (pop32());
L_11f57720:;
  /* 11f57720 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57723 jne 0x11f57731 */
  if (!C.zf) goto L_11f57731;
  /* 11f57725 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f57726 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57729 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5772f jl 0x11f57720 */
  if ((C.sf!=C.of)) goto L_11f57720;
L_11f57731:;
  /* 11f57731 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57737 jne 0x11f57740 */
  if (!C.zf) goto L_11f57740;
  /* 11f57739 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5773a call 0x11f5763f */
  push32(0x11f5773fu); f_11f5763f();
  /* 11f5773f pop ecx */
  ECX = (pop32());
L_11f57740:;
  /* 11f57740 cmp esi, dword ptr [0x11f5fcbc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f5fcbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57746 je 0x11f57752 */
  if (C.zf) goto L_11f57752;
  /* 11f57748 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5774c jg 0x11f576a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f576a2;
L_11f57752:;
  /* 11f57752 pop edi */
  EDI = (pop32());
  /* 11f57753 pop esi */
  ESI = (pop32());
  /* 11f57754 pop ebx */
  EBX = (pop32());
  /* 11f57755 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57756 ret  */
  ESPCHK(0x11f57695u, _esp0);
  ESP += 4; return;
}

/* FUN_10007757 @ 0x11f57757 (87 bytes, 34 insns) */
void f_11f57757(void) {
  FTRACE(0x11f57757u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57757 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5775b mov edx, 0x11f5fcb8 */
  EDX = (0x11f5fcb8u);
  /* 11f57760 push esi */
  push32((uint32_t)(ESI));
  /* 11f57761 mov ecx, edx */
  ECX = (EDX);
L_11f57763:;
  /* 11f57763 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57766 jbe 0x11f5776d */
  if ((C.cf||C.zf)) goto L_11f5776d;
  /* 11f57768 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5776b jb 0x11f57775 */
  if (C.cf) goto L_11f57775;
L_11f5776d:;
  /* 11f5776d mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11f5776f cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57771 je 0x11f577aa */
  if (C.zf) goto L_11f577aa;
  /* 11f57773 jmp 0x11f57763 */
  goto L_11f57763;
L_11f57775:;
  /* 11f57775 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11f57777 jne 0x11f577aa */
  if (!C.zf) goto L_11f577aa;
  /* 11f57779 mov esi, eax */
  ESI = (EAX);
  /* 11f5777b mov edx, 0x100 */
  EDX = (0x100u);
  /* 11f57780 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f57786 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57788 jb 0x11f577aa */
  if (C.cf) goto L_11f577aa;
  /* 11f5778a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f5778e mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11f57790 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f57794 mov ecx, eax */
  ECX = (EAX);
  /* 11f57796 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11f5779b sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5779d mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11f5779f sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f577a1 pop esi */
  ESI = (pop32());
  /* 11f577a2 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f577a5 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11f577a9 ret  */
  ESPCHK(0x11f57757u, _esp0);
  ESP += 4; return;
L_11f577aa:;
  /* 11f577aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f577ac pop esi */
  ESI = (pop32());
  /* 11f577ad ret  */
  ESPCHK(0x11f57757u, _esp0);
  ESP += 4; return;
}

/* FUN_100077ae @ 0x11f577ae (69 bytes, 19 insns) */
void f_11f577ae(void) {
  FTRACE(0x11f577aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f577ae mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f577b2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f577b6 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f577b9 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11f577bc lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11f577c0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f577c4 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11f577c7 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f577c9 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11f577cc cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f577d2 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11f577d9 jne 0x11f577f2 */
  if (!C.zf) goto L_11f577f2;
  /* 11f577db inc dword ptr [0x11f62db4] */
  { uint32_t _r=(r32((uint32_t)(0x11f62db4)))+1; w32((uint32_t)(0x11f62db4), (_r)); fl_inc(_r,32); }
  /* 11f577e1 cmp dword ptr [0x11f62db4], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11f62db4))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f577e8 jne 0x11f577f2 */
  if (!C.zf) goto L_11f577f2;
  /* 11f577ea push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f577ec call 0x11f57695 */
  push32(0x11f577f1u); f_11f57695();
  /* 11f577f1 pop ecx */
  ECX = (pop32());
L_11f577f2:;
  /* 11f577f2 ret  */
  ESPCHK(0x11f577aeu, _esp0);
  ESP += 4; return;
}

/* FUN_100077f3 @ 0x11f577f3 (520 bytes, 180 insns) */
void f_11f577f3(void) {
  FTRACE(0x11f577f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f577f3 push ebp */
  push32((uint32_t)(EBP));
  /* 11f577f4 mov ebp, esp */
  EBP = (ESP);
  /* 11f577f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f577f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f577f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f577f9 push esi */
  push32((uint32_t)(ESI));
  /* 11f577fa mov esi, dword ptr [0x11f61cd8] */
  ESI = (r32((uint32_t)(0x11f61cd8)));
  /* 11f57800 push edi */
  push32((uint32_t)(EDI));
L_11f57801:;
  /* 11f57801 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f57804 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57807 je 0x11f578ac */
  if (C.zf) goto L_11f578ac;
  /* 11f5780d mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11f57810 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11f57816 mov eax, edi */
  EAX = (EDI);
  /* 11f57818 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5781a sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5781d sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11f57820 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11f57823 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57825 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57827 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f5782a jae 0x11f57866 */
  if (!C.cf) goto L_11f57866;
L_11f5782c:;
  /* 11f5782c mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11f5782e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57831 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57833 jl 0x11f5784f */
  if ((C.sf!=C.of)) goto L_11f5784f;
  /* 11f57835 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57838 jbe 0x11f5784f */
  if ((C.cf||C.zf)) goto L_11f5784f;
  /* 11f5783a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5783b push ecx */
  push32((uint32_t)(ECX));
  /* 11f5783c push eax */
  push32((uint32_t)(EAX));
  /* 11f5783d call 0x11f579fb */
  push32(0x11f57842u); f_11f579fb();
  /* 11f57842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57847 jne 0x11f578be */
  if (!C.zf) goto L_11f578be;
  /* 11f57849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5784c mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11f5784f:;
  /* 11f5784f add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57852 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11f57858 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5785d cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5785f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f57862 jb 0x11f5782c */
  if (C.cf) goto L_11f5782c;
  /* 11f57864 jmp 0x11f57869 */
  goto L_11f57869;
L_11f57866:;
  /* 11f57866 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f57869:;
  /* 11f57869 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11f5786c mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f5786f lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11f57872 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f57875 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57877 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f5787a jae 0x11f578af */
  if (!C.cf) goto L_11f578af;
L_11f5787c:;
  /* 11f5787c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f5787e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57880 jl 0x11f5789b */
  if ((C.sf!=C.of)) goto L_11f5789b;
  /* 11f57882 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57885 jbe 0x11f5789b */
  if ((C.cf||C.zf)) goto L_11f5789b;
  /* 11f57887 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57888 push eax */
  push32((uint32_t)(EAX));
  /* 11f57889 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11f5788c call 0x11f579fb */
  push32(0x11f57891u); f_11f579fb();
  /* 11f57891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57896 jne 0x11f578be */
  if (!C.zf) goto L_11f578be;
  /* 11f57898 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11f5789b:;
  /* 11f5789b add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f578a2 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f578a5 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f578a8 jb 0x11f5787c */
  if (C.cf) goto L_11f5787c;
  /* 11f578aa jmp 0x11f578af */
  goto L_11f578af;
L_11f578ac:;
  /* 11f578ac mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f578af:;
  /* 11f578af mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11f578b1 cmp esi, dword ptr [0x11f61cd8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f61cd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f578b7 je 0x11f578ce */
  if (C.zf) goto L_11f578ce;
  /* 11f578b9 jmp 0x11f57801 */
  goto L_11f57801;
L_11f578be:;
  /* 11f578be mov dword ptr [0x11f61cd8], esi */
  w32((uint32_t)(0x11f61cd8), (ESI));
  /* 11f578c4 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f578c6 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11f578c9 jmp 0x11f579f6 */
  goto L_11f579f6;
L_11f578ce:;
  /* 11f578ce mov eax, 0x11f5fcb8 */
  EAX = (0x11f5fcb8u);
  /* 11f578d3 mov edi, eax */
  EDI = (EAX);
L_11f578d5:;
  /* 11f578d5 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f578d9 je 0x11f578e1 */
  if (C.zf) goto L_11f578e1;
  /* 11f578db cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f578df jne 0x11f578ed */
  if (!C.zf) goto L_11f578ed;
L_11f578e1:;
  /* 11f578e1 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11f578e3 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f578e5 je 0x11f579c2 */
  if (C.zf) goto L_11f579c2;
  /* 11f578eb jmp 0x11f578d5 */
  goto L_11f578d5;
L_11f578ed:;
  /* 11f578ed mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11f578f0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f578f4 mov esi, ebx */
  ESI = (EBX);
  /* 11f578f6 mov eax, ebx */
  EAX = (EBX);
  /* 11f578f8 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f578fa sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f578fd sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11f57900 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11f57903 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57906 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57909 jne 0x11f5791c */
  if (!C.zf) goto L_11f5791c;
L_11f5790b:;
  /* 11f5790b cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5790f jge 0x11f5791c */
  if ((C.sf==C.of)) goto L_11f5791c;
  /* 11f57911 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57914 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f57917 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5791a je 0x11f5790b */
  if (C.zf) goto L_11f5790b;
L_11f5791c:;
  /* 11f5791c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5791f push 4 */
  push32((uint32_t)(0x4u));
  /* 11f57921 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11f57924 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f57929 push eax */
  push32((uint32_t)(EAX));
  /* 11f5792a push esi */
  push32((uint32_t)(ESI));
  /* 11f5792b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f5792e call dword ptr [0x11f5c060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c060))), 0x11f57934u);
  /* 11f57934 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57936 jne 0x11f579f4 */
  if (!C.zf) goto L_11f579f4;
  /* 11f5793c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5793e push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11f57941 push esi */
  push32((uint32_t)(ESI));
  /* 11f57942 call 0x11f59110 */
  push32(0x11f57947u); f_11f59110();
  /* 11f57947 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5794a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5794d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f5794f mov ecx, ebx */
  ECX = (EBX);
  /* 11f57951 jle 0x11f57983 */
  if ((C.zf||C.sf!=C.of)) goto L_11f57983;
  /* 11f57953 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11f57956 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f57959:;
  /* 11f57959 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11f57960 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11f57963 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11f57966 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11f5796b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f5796d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f5796f mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11f57976 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5797b add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5797e dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11f57981 jne 0x11f57959 */
  if (!C.zf) goto L_11f57959;
L_11f57983:;
  /* 11f57983 mov dword ptr [0x11f61cd8], edi */
  w32((uint32_t)(0x11f61cd8), (EDI));
  /* 11f57989 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11f5798f:;
  /* 11f5798f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57991 jae 0x11f5799f */
  if (!C.cf) goto L_11f5799f;
  /* 11f57993 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57996 je 0x11f5799d */
  if (C.zf) goto L_11f5799d;
  /* 11f57998 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5799b jmp 0x11f5798f */
  goto L_11f5798f;
L_11f5799d:;
  /* 11f5799d cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f5799f:;
  /* 11f5799f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f579a1 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f579a3 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11f579a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f579a9 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11f579ac mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11f579af sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f579b1 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f579b4 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11f579b8 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11f579be mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11f579c0 jmp 0x11f579f6 */
  goto L_11f579f6;
L_11f579c2:;
  /* 11f579c2 call 0x11f574fb */
  push32(0x11f579c7u); f_11f574fb();
  /* 11f579c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f579c9 je 0x11f579f4 */
  if (C.zf) goto L_11f579f4;
  /* 11f579cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f579ce mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11f579d1 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11f579d5 mov dword ptr [0x11f61cd8], eax */
  w32((uint32_t)(0x11f61cd8), (EAX));
  /* 11f579da mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f579dc mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11f579e1 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f579e3 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f579e6 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11f579e9 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f579ec lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11f579f2 jmp 0x11f579f6 */
  goto L_11f579f6;
L_11f579f4:;
  /* 11f579f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f579f6:;
  /* 11f579f6 pop edi */
  EDI = (pop32());
  /* 11f579f7 pop esi */
  ESI = (pop32());
  /* 11f579f8 pop ebx */
  EBX = (pop32());
  /* 11f579f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f579fa ret  */
  ESPCHK(0x11f577f3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079fb @ 0x11f579fb (292 bytes, 125 insns) */
void f_11f579fb(void) {
  FTRACE(0x11f579fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f579fb push ebp */
  push32((uint32_t)(EBP));
  /* 11f579fc mov ebp, esp */
  EBP = (ESP);
  /* 11f579fe push ecx */
  push32((uint32_t)(ECX));
  /* 11f579ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57a02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f57a05 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57a06 push esi */
  push32((uint32_t)(ESI));
  /* 11f57a07 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11f57a0a push edi */
  push32((uint32_t)(EDI));
  /* 11f57a0b mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11f57a0d lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11f57a13 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a15 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f57a18 mov eax, edi */
  EAX = (EDI);
  /* 11f57a1a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f57a1d jb 0x11f57a40 */
  if (C.cf) goto L_11f57a40;
  /* 11f57a1f lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11f57a22 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f57a24 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a26 jae 0x11f57a2f */
  if (!C.cf) goto L_11f57a2f;
  /* 11f57a28 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f57a2a sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f57a2d jmp 0x11f57a38 */
  goto L_11f57a38;
L_11f57a2f:;
  /* 11f57a2f and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f57a33 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11f57a36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f57a38:;
  /* 11f57a38 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11f57a3b jmp 0x11f57b0e */
  goto L_11f57b0e;
L_11f57a40:;
  /* 11f57a40 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57a42 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57a45 je 0x11f57a49 */
  if (C.zf) goto L_11f57a49;
  /* 11f57a47 mov eax, esi */
  EAX = (ESI);
L_11f57a49:;
  /* 11f57a49 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11f57a4c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a4e jae 0x11f57a93 */
  if (!C.cf) goto L_11f57a93;
L_11f57a50:;
  /* 11f57a50 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11f57a52 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11f57a54 jne 0x11f57a86 */
  if (!C.zf) goto L_11f57a86;
  /* 11f57a56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f57a58 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11f57a5b pop esi */
  ESI = (pop32());
L_11f57a5c:;
  /* 11f57a5c cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57a5f jne 0x11f57a65 */
  if (!C.zf) goto L_11f57a65;
  /* 11f57a61 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f57a62 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f57a63 jmp 0x11f57a5c */
  goto L_11f57a5c;
L_11f57a65:;
  /* 11f57a65 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a67 jae 0x11f57ab7 */
  if (!C.cf) goto L_11f57ab7;
  /* 11f57a69 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a6c jne 0x11f57a73 */
  if (!C.zf) goto L_11f57a73;
  /* 11f57a6e mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11f57a71 jmp 0x11f57a7f */
  goto L_11f57a7f;
L_11f57a73:;
  /* 11f57a73 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f57a76 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a79 jb 0x11f57b18 */
  if (C.cf) goto L_11f57b18;
L_11f57a7f:;
  /* 11f57a7f mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11f57a82 mov eax, ebx */
  EAX = (EBX);
  /* 11f57a84 jmp 0x11f57a8b */
  goto L_11f57a8b;
L_11f57a86:;
  /* 11f57a86 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11f57a89 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f57a8b:;
  /* 11f57a8b lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11f57a8e cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a91 jb 0x11f57a50 */
  if (C.cf) goto L_11f57a50;
L_11f57a93:;
  /* 11f57a93 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11f57a96:;
  /* 11f57a96 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57a98 jae 0x11f57b18 */
  if (!C.cf) goto L_11f57b18;
  /* 11f57a9a lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11f57a9d cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57aa0 jae 0x11f57b18 */
  if (!C.cf) goto L_11f57b18;
  /* 11f57aa2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57aa4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f57aa6 jne 0x11f57ae8 */
  if (!C.zf) goto L_11f57ae8;
  /* 11f57aa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f57aaa lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11f57aad pop eax */
  EAX = (pop32());
L_11f57aae:;
  /* 11f57aae cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57ab1 jne 0x11f57ad8 */
  if (!C.zf) goto L_11f57ad8;
  /* 11f57ab3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f57ab4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f57ab5 jmp 0x11f57aae */
  goto L_11f57aae;
L_11f57ab7:;
  /* 11f57ab7 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11f57aba cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57abd jae 0x11f57ac8 */
  if (!C.cf) goto L_11f57ac8;
  /* 11f57abf sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57ac1 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11f57ac3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11f57ac6 jmp 0x11f57ad1 */
  goto L_11f57ad1;
L_11f57ac8:;
  /* 11f57ac8 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f57acc lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11f57acf mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11f57ad1:;
  /* 11f57ad1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f57ad3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57ad6 jmp 0x11f57b0e */
  goto L_11f57b0e;
L_11f57ad8:;
  /* 11f57ad8 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57ada jae 0x11f57aef */
  if (!C.cf) goto L_11f57aef;
  /* 11f57adc sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f57adf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57ae2 jb 0x11f57b18 */
  if (C.cf) goto L_11f57b18;
  /* 11f57ae4 mov esi, ebx */
  ESI = (EBX);
  /* 11f57ae6 jmp 0x11f57a96 */
  goto L_11f57a96;
L_11f57ae8:;
  /* 11f57ae8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11f57aeb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57aed jmp 0x11f57a96 */
  goto L_11f57a96;
L_11f57aef:;
  /* 11f57aef lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11f57af2 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57af5 jae 0x11f57b00 */
  if (!C.cf) goto L_11f57b00;
  /* 11f57af7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57af9 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11f57afb mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f57afe jmp 0x11f57b09 */
  goto L_11f57b09;
L_11f57b00:;
  /* 11f57b00 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f57b04 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11f57b07 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f57b09:;
  /* 11f57b09 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f57b0b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11f57b0e:;
  /* 11f57b0e imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f57b11 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f57b14 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57b16 jmp 0x11f57b1a */
  goto L_11f57b1a;
L_11f57b18:;
  /* 11f57b18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f57b1a:;
  /* 11f57b1a pop edi */
  EDI = (pop32());
  /* 11f57b1b pop esi */
  ESI = (pop32());
  /* 11f57b1c pop ebx */
  EBX = (pop32());
  /* 11f57b1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57b1e ret  */
  ESPCHK(0x11f579fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b1f @ 0x11f57b1f (169 bytes, 69 insns) */
void f_11f57b1f(void) {
  FTRACE(0x11f57b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57b1f push ebp */
  push32((uint32_t)(EBP));
  /* 11f57b20 mov ebp, esp */
  EBP = (ESP);
  /* 11f57b22 push ecx */
  push32((uint32_t)(ECX));
  /* 11f57b23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f57b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11f57b27 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f57b2a push esi */
  push32((uint32_t)(ESI));
  /* 11f57b2b movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11f57b2e push edi */
  push32((uint32_t)(EDI));
  /* 11f57b2f mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57b32 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f57b36 mov eax, ebx */
  EAX = (EBX);
  /* 11f57b38 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57b3b sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11f57b3e cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57b41 lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11f57b45 jbe 0x11f57b59 */
  if ((C.cf||C.zf)) goto L_11f57b59;
  /* 11f57b47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f57b4a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57b4c mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f57b4e add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f57b50 mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11f57b57 jmp 0x11f57bb9 */
  goto L_11f57bb9;
L_11f57b59:;
  /* 11f57b59 jae 0x11f57bc0 */
  if (!C.cf) goto L_11f57bc0;
  /* 11f57b5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f57b5e lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11f57b61 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11f57b67 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57b69 jb 0x11f57bc0 */
  if (C.cf) goto L_11f57bc0;
  /* 11f57b6b lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11f57b6e:;
  /* 11f57b6e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57b70 jae 0x11f57b7c */
  if (!C.cf) goto L_11f57b7c;
  /* 11f57b72 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57b75 jne 0x11f57b7a */
  if (!C.zf) goto L_11f57b7a;
  /* 11f57b77 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f57b78 jmp 0x11f57b6e */
  goto L_11f57b6e;
L_11f57b7a:;
  /* 11f57b7a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f57b7c:;
  /* 11f57b7c jne 0x11f57bc0 */
  if (!C.zf) goto L_11f57bc0;
  /* 11f57b7e mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11f57b81 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f57b83 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f57b85 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57b87 ja 0x11f57bb4 */
  if ((!C.cf&&!C.zf)) goto L_11f57bb4;
  /* 11f57b89 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57b8b jbe 0x11f57bb4 */
  if ((C.cf||C.zf)) goto L_11f57bb4;
  /* 11f57b8d lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11f57b93 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57b95 jae 0x11f57bab */
  if (!C.cf) goto L_11f57bab;
  /* 11f57b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f57b99 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11f57b9b cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57b9d jne 0x11f57ba6 */
  if (!C.zf) goto L_11f57ba6;
L_11f57b9f:;
  /* 11f57b9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f57ba0 cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57ba4 je 0x11f57b9f */
  if (C.zf) goto L_11f57b9f;
L_11f57ba6:;
  /* 11f57ba6 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11f57ba9 jmp 0x11f57bb4 */
  goto L_11f57bb4;
L_11f57bab:;
  /* 11f57bab and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f57baf lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11f57bb2 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11f57bb4:;
  /* 11f57bb4 sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57bb7 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11f57bb9:;
  /* 11f57bb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11f57bc0:;
  /* 11f57bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f57bc3 pop edi */
  EDI = (pop32());
  /* 11f57bc4 pop esi */
  ESI = (pop32());
  /* 11f57bc5 pop ebx */
  EBX = (pop32());
  /* 11f57bc6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57bc7 ret  */
  ESPCHK(0x11f57b1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c8d @ 0x11f57c8d (27 bytes, 11 insns) */
void f_11f57c8d(void) {
  FTRACE(0x11f57c8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57c8d push ebp */
  push32((uint32_t)(EBP));
  /* 11f57c8e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f57c92 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11f57c94 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f57c97 push eax */
  push32((uint32_t)(EAX));
  /* 11f57c98 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f57c9b push eax */
  push32((uint32_t)(EAX));
  /* 11f57c9c call 0x11f53d3e */
  push32(0x11f57ca1u); f_11f53d3e();
  /* 11f57ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57ca4 pop ebp */
  EBP = (pop32());
  /* 11f57ca5 ret 4 */
  ESPCHK(0x11f57c8du, _esp0);
  ESP += 8; return;
}

/* FUN_10007ca8 @ 0x11f57ca8 (70 bytes, 24 insns) */
void f_11f57ca8(void) {
  FTRACE(0x11f57ca8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57ca8 push esi */
  push32((uint32_t)(ESI));
  /* 11f57ca9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f57cad mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f57caf cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57cb5 jne 0x11f57ccb */
  if (!C.zf) goto L_11f57ccb;
  /* 11f57cb7 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57cbb jne 0x11f57ccb */
  if (!C.zf) goto L_11f57ccb;
  /* 11f57cbd cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57cc4 jne 0x11f57ccb */
  if (!C.zf) goto L_11f57ccb;
  /* 11f57cc6 jmp 0x11f54c0c */
  f_11f54c0c(); return;
L_11f57ccb:;
  /* 11f57ccb mov eax, dword ptr [0x11f62db8] */
  EAX = (r32((uint32_t)(0x11f62db8)));
  /* 11f57cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57cd2 je 0x11f57ce8 */
  if (C.zf) goto L_11f57ce8;
  /* 11f57cd4 push eax */
  push32((uint32_t)(EAX));
  /* 11f57cd5 call 0x11f57d44 */
  push32(0x11f57cdau); f_11f57d44();
  /* 11f57cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57cdc pop ecx */
  ECX = (pop32());
  /* 11f57cdd je 0x11f57ce8 */
  if (C.zf) goto L_11f57ce8;
  /* 11f57cdf push esi */
  push32((uint32_t)(ESI));
  /* 11f57ce0 call dword ptr [0x11f62db8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f62db8))), 0x11f57ce6u);
  /* 11f57ce6 jmp 0x11f57cea */
  goto L_11f57cea;
L_11f57ce8:;
  /* 11f57ce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f57cea:;
  /* 11f57cea pop esi */
  ESI = (pop32());
  /* 11f57ceb ret 4 */
  ESPCHK(0x11f57ca8u, _esp0);
  ESP += 8; return;
}

/* FUN_10007d0c @ 0x11f57d0c (28 bytes, 12 insns) */
void f_11f57d0c(void) {
  FTRACE(0x11f57d0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57d0c push esi */
  push32((uint32_t)(ESI));
  /* 11f57d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f57d0f pop esi */
  ESI = (pop32());
  /* 11f57d10 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f57d14 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f57d18 call dword ptr [0x11f5c050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c050))), 0x11f57d1eu);
  /* 11f57d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57d20 je 0x11f57d24 */
  if (C.zf) goto L_11f57d24;
  /* 11f57d22 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f57d24:;
  /* 11f57d24 mov eax, esi */
  EAX = (ESI);
  /* 11f57d26 pop esi */
  ESI = (pop32());
  /* 11f57d27 ret  */
  ESPCHK(0x11f57d0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d28 @ 0x11f57d28 (28 bytes, 12 insns) */
void f_11f57d28(void) {
  FTRACE(0x11f57d28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57d28 push esi */
  push32((uint32_t)(ESI));
  /* 11f57d29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f57d2b pop esi */
  ESI = (pop32());
  /* 11f57d2c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f57d30 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f57d34 call dword ptr [0x11f5c058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c058))), 0x11f57d3au);
  /* 11f57d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57d3c je 0x11f57d40 */
  if (C.zf) goto L_11f57d40;
  /* 11f57d3e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f57d40:;
  /* 11f57d40 mov eax, esi */
  EAX = (ESI);
  /* 11f57d42 pop esi */
  ESI = (pop32());
  /* 11f57d43 ret  */
  ESPCHK(0x11f57d28u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d44 @ 0x11f57d44 (24 bytes, 11 insns) */
void f_11f57d44(void) {
  FTRACE(0x11f57d44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57d44 push esi */
  push32((uint32_t)(ESI));
  /* 11f57d45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f57d47 pop esi */
  ESI = (pop32());
  /* 11f57d48 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f57d4c call dword ptr [0x11f5c04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c04c))), 0x11f57d52u);
  /* 11f57d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f57d54 je 0x11f57d58 */
  if (C.zf) goto L_11f57d58;
  /* 11f57d56 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f57d58:;
  /* 11f57d58 mov eax, esi */
  EAX = (ESI);
  /* 11f57d5a pop esi */
  ESI = (pop32());
  /* 11f57d5b ret  */
  ESPCHK(0x11f57d44u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11f57d60 (129 bytes, 56 insns) */
void f_11f57d60(void) {
  FTRACE(0x11f57d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57d60 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f57d64 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f57d68 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11f57d6e jne 0x11f57dac */
  if (!C.zf) goto L_11f57dac;
L_11f57d70:;
  /* 11f57d70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f57d72 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57d74 jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57d76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f57d78 je 0x11f57da0 */
  if (C.zf) goto L_11f57da0;
  /* 11f57d7a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57d7d jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57d7f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f57d81 je 0x11f57da0 */
  if (C.zf) goto L_11f57da0;
  /* 11f57d83 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f57d86 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57d89 jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57d8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f57d8d je 0x11f57da0 */
  if (C.zf) goto L_11f57da0;
  /* 11f57d8f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57d92 jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57d94 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57d97 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57d9a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f57d9c jne 0x11f57d70 */
  if (!C.zf) goto L_11f57d70;
  /* 11f57d9e mov edi, edi */
  EDI = (EDI);
L_11f57da0:;
  /* 11f57da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f57da2 ret  */
  ESPCHK(0x11f57d60u, _esp0);
  ESP += 4; return;
  /* 11f57da3 nop  */
  /* nop */
L_11f57da4:;
  /* 11f57da4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57da6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f57da8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f57da9 ret  */
  ESPCHK(0x11f57d60u, _esp0);
  ESP += 4; return;
  /* 11f57daa mov edi, edi */
  EDI = (EDI);
L_11f57dac:;
  /* 11f57dac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11f57db2 je 0x11f57dc8 */
  if (C.zf) goto L_11f57dc8;
  /* 11f57db4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f57db6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f57db7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57db9 jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57dbb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f57dbc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f57dbe je 0x11f57da0 */
  if (C.zf) goto L_11f57da0;
  /* 11f57dc0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11f57dc6 je 0x11f57d70 */
  if (C.zf) goto L_11f57d70;
L_11f57dc8:;
  /* 11f57dc8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f57dcb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57dce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57dd0 jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57dd2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f57dd4 je 0x11f57da0 */
  if (C.zf) goto L_11f57da0;
  /* 11f57dd6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f57dd9 jne 0x11f57da4 */
  if (!C.zf) goto L_11f57da4;
  /* 11f57ddb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f57ddd je 0x11f57da0 */
  if (C.zf) goto L_11f57da0;
  /* 11f57ddf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57de2 jmp 0x11f57d70 */
  goto L_11f57d70;
}

/* FUN_10007df0 @ 0x11f57df0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11f57df0(void) {
  FTRACE(0x11f57df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f57df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f57df1 mov ebp, esp */
  EBP = (ESP);
  /* 11f57df3 push edi */
  push32((uint32_t)(EDI));
  /* 11f57df4 push esi */
  push32((uint32_t)(ESI));
  /* 11f57df5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f57df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f57dfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57dfe mov eax, ecx */
  EAX = (ECX);
  /* 11f57e00 mov edx, ecx */
  EDX = (ECX);
  /* 11f57e02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57e04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57e06 jbe 0x11f57e10 */
  if ((C.cf||C.zf)) goto L_11f57e10;
  /* 11f57e08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57e0a jb 0x11f57f88 */
  if (C.cf) goto L_11f57f88;
L_11f57e10:;
  /* 11f57e10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f57e16 jne 0x11f57e2c */
  if (!C.zf) goto L_11f57e2c;
  /* 11f57e18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f57e1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f57e1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57e21 jb 0x11f57e4c */
  if (C.cf) goto L_11f57e4c;
  /* 11f57e23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f57e25 jmp dword ptr [edx*4 + 0x11f57f38] */
  switch (EDX) {
    case 0: goto L_11f57f48;
    case 1: goto L_11f57f50;
    case 2: goto L_11f57f5c;
    case 3: goto L_11f57f70;
    default: x86_unimpl("switch@0x11f57e25 out of table"); return;
  }
L_11f57e2c:;
  /* 11f57e2c mov eax, edi */
  EAX = (EDI);
  /* 11f57e2e mov edx, 3 */
  EDX = (0x3u);
  /* 11f57e33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57e36 jb 0x11f57e44 */
  if (C.cf) goto L_11f57e44;
  /* 11f57e38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f57e3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57e3d jmp dword ptr [eax*4 + 0x11f57e50] */
  switch (EAX) {
    case 1: goto L_11f57e60;
    case 2: goto L_11f57e8c;
    case 3: goto L_11f57eb0;
    default: x86_unimpl("switch@0x11f57e3d out of table"); return;
  }
L_11f57e44:;
  /* 11f57e44 jmp dword ptr [ecx*4 + 0x11f57f48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f57f48)))); return;
  /* 11f57e4b nop  */
  /* nop */
L_11f57e4c:;
  /* 11f57e4c jmp dword ptr [ecx*4 + 0x11f57ecc] */
  switch (ECX) {
    case 0: goto L_11f57f2f;
    case 1: goto L_11f57f1c;
    case 2: goto L_11f57f14;
    case 3: goto L_11f57f0c;
    case 4: goto L_11f57f04;
    case 5: goto L_11f57efc;
    case 6: goto L_11f57ef4;
    case 7: goto L_11f57eec;
    default: x86_unimpl("switch@0x11f57e4c out of table"); return;
  }
  /* 11f57e53 nop  */
  /* nop */
L_11f57e60:;
  /* 11f57e60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f57e62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57e64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f57e66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f57e69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f57e6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f57e6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f57e72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f57e75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57e78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57e7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57e7e jb 0x11f57e4c */
  if (C.cf) goto L_11f57e4c;
  /* 11f57e80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f57e82 jmp dword ptr [edx*4 + 0x11f57f38] */
  switch (EDX) {
    case 0: goto L_11f57f48;
    case 1: goto L_11f57f50;
    case 2: goto L_11f57f5c;
    case 3: goto L_11f57f70;
    default: x86_unimpl("switch@0x11f57e82 out of table"); return;
  }
  /* 11f57e89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f57e8c:;
  /* 11f57e8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f57e8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57e90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f57e92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f57e95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f57e98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f57e9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57e9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57ea1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57ea4 jb 0x11f57e4c */
  if (C.cf) goto L_11f57e4c;
  /* 11f57ea6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f57ea8 jmp dword ptr [edx*4 + 0x11f57f38] */
  switch (EDX) {
    case 0: goto L_11f57f48;
    case 1: goto L_11f57f50;
    case 2: goto L_11f57f5c;
    case 3: goto L_11f57f70;
    default: x86_unimpl("switch@0x11f57ea8 out of table"); return;
  }
  /* 11f57eaf nop  */
  /* nop */
L_11f57eb0:;
  /* 11f57eb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f57eb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57eb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f57eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f57eb7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f57eba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f57ebb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57ebe jb 0x11f57e4c */
  if (C.cf) goto L_11f57e4c;
  /* 11f57ec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f57ec2 jmp dword ptr [edx*4 + 0x11f57f38] */
  switch (EDX) {
    case 0: goto L_11f57f48;
    case 1: goto L_11f57f50;
    case 2: goto L_11f57f5c;
    case 3: goto L_11f57f70;
    default: x86_unimpl("switch@0x11f57ec2 out of table"); return;
  }
  /* 11f57ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f57eec:;
  /* 11f57eec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f57ef0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f57ef4:;
  /* 11f57ef4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f57ef8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f57efc:;
  /* 11f57efc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f57f00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f57f04:;
  /* 11f57f04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f57f08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f57f0c:;
  /* 11f57f0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f57f10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f57f14:;
  /* 11f57f14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f57f18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f57f1c:;
  /* 11f57f1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f57f20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f57f24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f57f2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f57f2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f57f2f:;
  /* 11f57f2f jmp dword ptr [edx*4 + 0x11f57f38] */
  switch (EDX) {
    case 0: goto L_11f57f48;
    case 1: goto L_11f57f50;
    case 2: goto L_11f57f5c;
    case 3: goto L_11f57f70;
    default: x86_unimpl("switch@0x11f57f2f out of table"); return;
  }
  /* 11f57f36 mov edi, edi */
  EDI = (EDI);
L_11f57f48:;
  /* 11f57f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57f4b pop esi */
  ESI = (pop32());
  /* 11f57f4c pop edi */
  EDI = (pop32());
  /* 11f57f4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57f4e ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f57f4f nop  */
  /* nop */
L_11f57f50:;
  /* 11f57f50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57f52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f57f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57f57 pop esi */
  ESI = (pop32());
  /* 11f57f58 pop edi */
  EDI = (pop32());
  /* 11f57f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57f5a ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f57f5b nop  */
  /* nop */
L_11f57f5c:;
  /* 11f57f5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57f5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f57f60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f57f63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f57f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57f69 pop esi */
  ESI = (pop32());
  /* 11f57f6a pop edi */
  EDI = (pop32());
  /* 11f57f6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57f6c ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f57f6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f57f70:;
  /* 11f57f70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f57f72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f57f74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f57f77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f57f7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f57f7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f57f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f57f83 pop esi */
  ESI = (pop32());
  /* 11f57f84 pop edi */
  EDI = (pop32());
  /* 11f57f85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f57f86 ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f57f87 nop  */
  /* nop */
L_11f57f88:;
  /* 11f57f88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f57f8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f57f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f57f96 jne 0x11f57fbc */
  if (!C.zf) goto L_11f57fbc;
  /* 11f57f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f57f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f57f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57fa1 jb 0x11f57fb0 */
  if (C.cf) goto L_11f57fb0;
  /* 11f57fa3 std  */
  C.df=1;
  /* 11f57fa4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f57fa6 cld  */
  C.df=0;
  /* 11f57fa7 jmp dword ptr [edx*4 + 0x11f580d0] */
  switch (EDX) {
    case 0: goto L_11f580e0;
    case 1: goto L_11f580e8;
    case 2: goto L_11f580f8;
    case 3: goto L_11f5810c;
    default: x86_unimpl("switch@0x11f57fa7 out of table"); return;
  }
  /* 11f57fae mov edi, edi */
  EDI = (EDI);
L_11f57fb0:;
  /* 11f57fb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f57fb2 jmp dword ptr [ecx*4 + 0x11f58080] */
  switch (ECX) {
    case 0: goto L_11f580c7;
    default: x86_unimpl("switch@0x11f57fb2 out of table"); return;
  }
  /* 11f57fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f57fbc:;
  /* 11f57fbc mov eax, edi */
  EAX = (EDI);
  /* 11f57fbe mov edx, 3 */
  EDX = (0x3u);
  /* 11f57fc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57fc6 jb 0x11f57fd4 */
  if (C.cf) goto L_11f57fd4;
  /* 11f57fc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f57fcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f57fcd jmp dword ptr [eax*4 + 0x11f57fd8] */
  switch (EAX) {
    case 1: goto L_11f57fe8;
    case 2: goto L_11f58008;
    case 3: goto L_11f58030;
    default: x86_unimpl("switch@0x11f57fcd out of table"); return;
  }
L_11f57fd4:;
  /* 11f57fd4 jmp dword ptr [ecx*4 + 0x11f580d0] */
  switch (ECX) {
    case 0: goto L_11f580e0;
    case 1: goto L_11f580e8;
    case 2: goto L_11f580f8;
    case 3: goto L_11f5810c;
    default: x86_unimpl("switch@0x11f57fd4 out of table"); return;
  }
  /* 11f57fdb nop  */
  /* nop */
L_11f57fe8:;
  /* 11f57fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f57feb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f57fed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f57ff0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f57ff1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f57ff4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f57ff5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f57ff8 jb 0x11f57fb0 */
  if (C.cf) goto L_11f57fb0;
  /* 11f57ffa std  */
  C.df=1;
  /* 11f57ffb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f57ffd cld  */
  C.df=0;
  /* 11f57ffe jmp dword ptr [edx*4 + 0x11f580d0] */
  switch (EDX) {
    case 0: goto L_11f580e0;
    case 1: goto L_11f580e8;
    case 2: goto L_11f580f8;
    case 3: goto L_11f5810c;
    default: x86_unimpl("switch@0x11f57ffe out of table"); return;
  }
  /* 11f58005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f58008:;
  /* 11f58008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5800b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5800d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f58010 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f58013 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f58016 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f58019 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5801c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5801f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58022 jb 0x11f57fb0 */
  if (C.cf) goto L_11f57fb0;
  /* 11f58024 std  */
  C.df=1;
  /* 11f58025 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f58027 cld  */
  C.df=0;
  /* 11f58028 jmp dword ptr [edx*4 + 0x11f580d0] */
  switch (EDX) {
    case 0: goto L_11f580e0;
    case 1: goto L_11f580e8;
    case 2: goto L_11f580f8;
    case 3: goto L_11f5810c;
    default: x86_unimpl("switch@0x11f58028 out of table"); return;
  }
  /* 11f5802f nop  */
  /* nop */
L_11f58030:;
  /* 11f58030 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f58033 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f58035 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f58038 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f5803b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f5803e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f58041 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f58044 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f58047 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5804a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5804d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58050 jb 0x11f57fb0 */
  if (C.cf) goto L_11f57fb0;
  /* 11f58056 std  */
  C.df=1;
  /* 11f58057 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f58059 cld  */
  C.df=0;
  /* 11f5805a jmp dword ptr [edx*4 + 0x11f580d0] */
  switch (EDX) {
    case 0: goto L_11f580e0;
    case 1: goto L_11f580e8;
    case 2: goto L_11f580f8;
    case 3: goto L_11f5810c;
    default: x86_unimpl("switch@0x11f5805a out of table"); return;
  }
  /* 11f58061 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f58064 test byte ptr [eax - 0x7f73ee0b], al */
  { uint32_t _r=(r8((uint32_t)(EAX + -0x7f73ee0b)))&(AL); fl_logic(_r,8); }
  /* 11f5806a cmc  */
  x86_unimpl("cmc @ 0x11f5806a");
  /* 11f5806b adc dword ptr [eax + eax*4 - 0x7f63ee0b], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + EAX*4 + -0x7f63ee0b))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EAX*4 + -0x7f63ee0b), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f58072 cmc  */
  x86_unimpl("cmc @ 0x11f58072");
  /* 11f58073 adc dword ptr [eax + eax*4 - 0x7f53ee0b], esp */
  { uint32_t _a=(r32((uint32_t)(EAX + EAX*4 + -0x7f53ee0b))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EAX*4 + -0x7f53ee0b), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5807a cmc  */
  x86_unimpl("cmc @ 0x11f5807a");
  /* 11f5807c mov ah, 0x80 */
  AH = (0x80u);
  /* 11f5807e cmc  */
  x86_unimpl("cmc @ 0x11f5807e");
  /* 11f58084 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f58088 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f5808c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f58090 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f58094 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f58098 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f5809c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f580a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f580a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f580a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f580ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f580b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f580b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f580b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f580bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f580c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f580c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f580c7:;
  /* 11f580c7 jmp dword ptr [edx*4 + 0x11f580d0] */
  switch (EDX) {
    case 0: goto L_11f580e0;
    case 1: goto L_11f580e8;
    case 2: goto L_11f580f8;
    case 3: goto L_11f5810c;
    default: x86_unimpl("switch@0x11f580c7 out of table"); return;
  }
  /* 11f580ce mov edi, edi */
  EDI = (EDI);
L_11f580e0:;
  /* 11f580e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f580e3 pop esi */
  ESI = (pop32());
  /* 11f580e4 pop edi */
  EDI = (pop32());
  /* 11f580e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f580e6 ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f580e7 nop  */
  /* nop */
L_11f580e8:;
  /* 11f580e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f580eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f580ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f580f1 pop esi */
  ESI = (pop32());
  /* 11f580f2 pop edi */
  EDI = (pop32());
  /* 11f580f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f580f4 ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f580f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f580f8:;
  /* 11f580f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f580fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f580fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f58101 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f58104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58107 pop esi */
  ESI = (pop32());
  /* 11f58108 pop edi */
  EDI = (pop32());
  /* 11f58109 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5810a ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
  /* 11f5810b nop  */
  /* nop */
L_11f5810c:;
  /* 11f5810c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5810f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f58112 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f58115 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f58118 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f5811b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f5811e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58121 pop esi */
  ESI = (pop32());
  /* 11f58122 pop edi */
  EDI = (pop32());
  /* 11f58123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58124 ret  */
  ESPCHK(0x11f57df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008125 @ 0x11f58125 (23 bytes, 8 insns) */
void f_11f58125(void) {
  FTRACE(0x11f58125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58125 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f58127 call 0x11f56057 */
  push32(0x11f5812cu); f_11f56057();
  /* 11f5812c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f5812e call 0x11f59f26 */
  push32(0x11f58133u); f_11f59f26();
  /* 11f58133 pop ecx */
  ECX = (pop32());
  /* 11f58134 pop ecx */
  ECX = (pop32());
  /* 11f58135 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f58137 call 0x11f5566b */
  push32(0x11f5813cu); f_11f5566b();
}

/* FUN_1000813c @ 0x11f5813c (27 bytes, 13 insns) */
void f_11f5813c(void) {
  FTRACE(0x11f5813cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5813c mov eax, dword ptr [0x11f62dc0] */
  EAX = (r32((uint32_t)(0x11f62dc0)));
  /* 11f58141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58143 je 0x11f58154 */
  if (C.zf) goto L_11f58154;
  /* 11f58145 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f58149 call eax */
  call_ind((uint32_t)(EAX), 0x11f5814bu);
  /* 11f5814b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5814d pop ecx */
  ECX = (pop32());
  /* 11f5814e je 0x11f58154 */
  if (C.zf) goto L_11f58154;
  /* 11f58150 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58152 pop eax */
  EAX = (pop32());
  /* 11f58153 ret  */
  ESPCHK(0x11f5813cu, _esp0);
  ESP += 4; return;
L_11f58154:;
  /* 11f58154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58156 ret  */
  ESPCHK(0x11f5813cu, _esp0);
  ESP += 4; return;
}

/* FUN_100081d8 @ 0x11f581d8 (115 bytes, 37 insns) */
void f_11f581d8(void) {
  FTRACE(0x11f581d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f581d8 push esi */
  push32((uint32_t)(ESI));
  /* 11f581d9 call 0x11f58254 */
  push32(0x11f581deu); f_11f58254();
  /* 11f581de mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f581e2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f581e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f581e6 mov eax, 0x11f61ce0 */
  EAX = (0x11f61ce0u);
L_11f581eb:;
  /* 11f581eb cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f581ed je 0x11f58211 */
  if (C.zf) goto L_11f58211;
  /* 11f581ef add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f581f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f581f3 cmp eax, 0x11f61e48 */
  { uint32_t _a=(EAX),_b=(0x11f61e48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f581f8 jl 0x11f581eb */
  if ((C.sf!=C.of)) goto L_11f581eb;
  /* 11f581fa cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f581fd jb 0x11f58221 */
  if (C.cf) goto L_11f58221;
  /* 11f581ff cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58202 ja 0x11f58221 */
  if ((!C.cf&&!C.zf)) goto L_11f58221;
  /* 11f58204 call 0x11f5824b */
  push32(0x11f58209u); f_11f5824b();
  /* 11f58209 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11f5820f pop esi */
  ESI = (pop32());
  /* 11f58210 ret  */
  ESPCHK(0x11f581d8u, _esp0);
  ESP += 4; return;
L_11f58211:;
  /* 11f58211 call 0x11f5824b */
  push32(0x11f58216u); f_11f5824b();
  /* 11f58216 mov ecx, dword ptr [esi*8 + 0x11f61ce4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11f61ce4)));
  /* 11f5821d pop esi */
  ESI = (pop32());
  /* 11f5821e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f58220 ret  */
  ESPCHK(0x11f581d8u, _esp0);
  ESP += 4; return;
L_11f58221:;
  /* 11f58221 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58227 jb 0x11f5823e */
  if (C.cf) goto L_11f5823e;
  /* 11f58229 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5822f ja 0x11f5823e */
  if ((!C.cf&&!C.zf)) goto L_11f5823e;
  /* 11f58231 call 0x11f5824b */
  push32(0x11f58236u); f_11f5824b();
  /* 11f58236 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11f5823c pop esi */
  ESI = (pop32());
  /* 11f5823d ret  */
  ESPCHK(0x11f581d8u, _esp0);
  ESP += 4; return;
L_11f5823e:;
  /* 11f5823e call 0x11f5824b */
  push32(0x11f58243u); f_11f5824b();
  /* 11f58243 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11f58249 pop esi */
  ESI = (pop32());
  /* 11f5824a ret  */
  ESPCHK(0x11f581d8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000824b @ 0x11f5824b (9 bytes, 3 insns) */
void f_11f5824b(void) {
  FTRACE(0x11f5824bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5824b call 0x11f540f3 */
  push32(0x11f58250u); f_11f540f3();
  /* 11f58250 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58253 ret  */
  ESPCHK(0x11f5824bu, _esp0);
  ESP += 4; return;
}

/* FUN_10008254 @ 0x11f58254 (9 bytes, 3 insns) */
void f_11f58254(void) {
  FTRACE(0x11f58254u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58254 call 0x11f540f3 */
  push32(0x11f58259u); f_11f540f3();
  /* 11f58259 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5825c ret  */
  ESPCHK(0x11f58254u, _esp0);
  ESP += 4; return;
}

/* FUN_1000825d @ 0x11f5825d (127 bytes, 48 insns) */
void f_11f5825d(void) {
  FTRACE(0x11f5825du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5825d mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58261 push esi */
  push32((uint32_t)(ESI));
  /* 11f58262 cmp ecx, dword ptr [0x11f63200] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f63200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58268 push edi */
  push32((uint32_t)(EDI));
  /* 11f58269 jae 0x11f582c3 */
  if (!C.cf) goto L_11f582c3;
  /* 11f5826b mov eax, ecx */
  EAX = (ECX);
  /* 11f5826d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f58270 lea edi, [eax*4 + 0x11f63100] */
  EDI = ((uint32_t)(EAX*4 + 0x11f63100));
  /* 11f58277 mov eax, ecx */
  EAX = (ECX);
  /* 11f58279 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5827c lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11f5827f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f58281 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11f58284 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58286 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f5828a je 0x11f582c3 */
  if (C.zf) goto L_11f582c3;
  /* 11f5828c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5828f je 0x11f582c3 */
  if (C.zf) goto L_11f582c3;
  /* 11f58291 cmp dword ptr [0x11f62b38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62b38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58298 jne 0x11f582b9 */
  if (!C.zf) goto L_11f582b9;
  /* 11f5829a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5829c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5829e je 0x11f582b0 */
  if (C.zf) goto L_11f582b0;
  /* 11f582a0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f582a1 je 0x11f582ab */
  if (C.zf) goto L_11f582ab;
  /* 11f582a3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f582a4 jne 0x11f582b9 */
  if (!C.zf) goto L_11f582b9;
  /* 11f582a6 push eax */
  push32((uint32_t)(EAX));
  /* 11f582a7 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f582a9 jmp 0x11f582b3 */
  goto L_11f582b3;
L_11f582ab:;
  /* 11f582ab push eax */
  push32((uint32_t)(EAX));
  /* 11f582ac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11f582ae jmp 0x11f582b3 */
  goto L_11f582b3;
L_11f582b0:;
  /* 11f582b0 push eax */
  push32((uint32_t)(EAX));
  /* 11f582b1 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11f582b3:;
  /* 11f582b3 call dword ptr [0x11f5c048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c048))), 0x11f582b9u);
L_11f582b9:;
  /* 11f582b9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f582bb or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11f582bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f582c1 jmp 0x11f582d9 */
  goto L_11f582d9;
L_11f582c3:;
  /* 11f582c3 call 0x11f5824b */
  push32(0x11f582c8u); f_11f5824b();
  /* 11f582c8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f582ce call 0x11f58254 */
  push32(0x11f582d3u); f_11f58254();
  /* 11f582d3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f582d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f582d9:;
  /* 11f582d9 pop edi */
  EDI = (pop32());
  /* 11f582da pop esi */
  ESI = (pop32());
  /* 11f582db ret  */
  ESPCHK(0x11f5825du, _esp0);
  ESP += 4; return;
}

/* FUN_100082dc @ 0x11f582dc (66 bytes, 19 insns) */
void f_11f582dc(void) {
  FTRACE(0x11f582dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f582dc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f582e0 cmp eax, dword ptr [0x11f63200] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f63200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f582e6 jae 0x11f58307 */
  if (!C.cf) goto L_11f58307;
  /* 11f582e8 mov ecx, eax */
  ECX = (EAX);
  /* 11f582ea and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f582ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f582f0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f582f3 mov ecx, dword ptr [ecx*4 + 0x11f63100] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f582fa test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f582ff lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11f58302 je 0x11f58307 */
  if (C.zf) goto L_11f58307;
  /* 11f58304 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11f58306 ret  */
  ESPCHK(0x11f582dcu, _esp0);
  ESP += 4; return;
L_11f58307:;
  /* 11f58307 call 0x11f5824b */
  push32(0x11f5830cu); f_11f5824b();
  /* 11f5830c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f58312 call 0x11f58254 */
  push32(0x11f58317u); f_11f58254();
  /* 11f58317 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f5831a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5831d ret  */
  ESPCHK(0x11f582dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000831e @ 0x11f5831e (95 bytes, 34 insns) */
void f_11f5831e(void) {
  FTRACE(0x11f5831eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5831e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58322 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58323 mov ecx, eax */
  ECX = (EAX);
  /* 11f58325 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f58328 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f5832b push esi */
  push32((uint32_t)(ESI));
  /* 11f5832c push edi */
  push32((uint32_t)(EDI));
  /* 11f5832d mov esi, dword ptr [ecx*4 + 0x11f63100] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f58334 lea ebx, [ecx*4 + 0x11f63100] */
  EBX = ((uint32_t)(ECX*4 + 0x11f63100));
  /* 11f5833b lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11f5833e shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11f58341 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58343 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58347 jne 0x11f5836c */
  if (!C.zf) goto L_11f5836c;
  /* 11f58349 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f5834b call 0x11f5637c */
  push32(0x11f58350u); f_11f5637c();
  /* 11f58350 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58354 pop ecx */
  ECX = (pop32());
  /* 11f58355 jne 0x11f58364 */
  if (!C.zf) goto L_11f58364;
  /* 11f58357 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11f5835a push eax */
  push32((uint32_t)(EAX));
  /* 11f5835b call dword ptr [0x11f5c000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c000))), 0x11f58361u);
  /* 11f58361 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11f58364:;
  /* 11f58364 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f58366 call 0x11f563dd */
  push32(0x11f5836bu); f_11f563dd();
  /* 11f5836b pop ecx */
  ECX = (pop32());
L_11f5836c:;
  /* 11f5836c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f5836e lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11f58372 push eax */
  push32((uint32_t)(EAX));
  /* 11f58373 call dword ptr [0x11f5c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a8))), 0x11f58379u);
  /* 11f58379 pop edi */
  EDI = (pop32());
  /* 11f5837a pop esi */
  ESI = (pop32());
  /* 11f5837b pop ebx */
  EBX = (pop32());
  /* 11f5837c ret  */
  ESPCHK(0x11f5831eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000837d @ 0x11f5837d (34 bytes, 10 insns) */
void f_11f5837d(void) {
  FTRACE(0x11f5837du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5837d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58381 mov ecx, eax */
  ECX = (EAX);
  /* 11f58383 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f58386 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f58389 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f5838c mov ecx, dword ptr [ecx*4 + 0x11f63100] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f58393 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11f58397 push eax */
  push32((uint32_t)(EAX));
  /* 11f58398 call dword ptr [0x11f5c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0ac))), 0x11f5839eu);
  /* 11f5839e ret  */
  ESPCHK(0x11f5837du, _esp0);
  ESP += 4; return;
}

/* FUN_1000839f @ 0x11f5839f (147 bytes, 52 insns) */
void f_11f5839f(void) {
  FTRACE(0x11f5839fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5839f push ebx */
  push32((uint32_t)(EBX));
  /* 11f583a0 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f583a4 cmp ebx, dword ptr [0x11f63200] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f63200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f583aa push esi */
  push32((uint32_t)(ESI));
  /* 11f583ab push edi */
  push32((uint32_t)(EDI));
  /* 11f583ac jae 0x11f58420 */
  if (!C.cf) goto L_11f58420;
  /* 11f583ae mov eax, ebx */
  EAX = (EBX);
  /* 11f583b0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f583b3 lea edi, [eax*4 + 0x11f63100] */
  EDI = ((uint32_t)(EAX*4 + 0x11f63100));
  /* 11f583ba mov eax, ebx */
  EAX = (EBX);
  /* 11f583bc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f583bf lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11f583c2 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f583c4 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11f583c7 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f583cc je 0x11f58420 */
  if (C.zf) goto L_11f58420;
  /* 11f583ce push ebx */
  push32((uint32_t)(EBX));
  /* 11f583cf call 0x11f5831e */
  push32(0x11f583d4u); f_11f5831e();
  /* 11f583d4 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f583d6 pop ecx */
  ECX = (pop32());
  /* 11f583d7 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f583dc je 0x11f58407 */
  if (C.zf) goto L_11f58407;
  /* 11f583de push ebx */
  push32((uint32_t)(EBX));
  /* 11f583df call 0x11f582dc */
  push32(0x11f583e4u); f_11f582dc();
  /* 11f583e4 pop ecx */
  ECX = (pop32());
  /* 11f583e5 push eax */
  push32((uint32_t)(EAX));
  /* 11f583e6 call dword ptr [0x11f5c044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c044))), 0x11f583ecu);
  /* 11f583ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f583ee jne 0x11f583fa */
  if (!C.zf) goto L_11f583fa;
  /* 11f583f0 call dword ptr [0x11f5c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c09c))), 0x11f583f6u);
  /* 11f583f6 mov esi, eax */
  ESI = (EAX);
  /* 11f583f8 jmp 0x11f583fc */
  goto L_11f583fc;
L_11f583fa:;
  /* 11f583fa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f583fc:;
  /* 11f583fc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f583fe je 0x11f58415 */
  if (C.zf) goto L_11f58415;
  /* 11f58400 call 0x11f58254 */
  push32(0x11f58405u); f_11f58254();
  /* 11f58405 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11f58407:;
  /* 11f58407 call 0x11f5824b */
  push32(0x11f5840cu); f_11f5824b();
  /* 11f5840c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f58412 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11f58415:;
  /* 11f58415 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58416 call 0x11f5837d */
  push32(0x11f5841bu); f_11f5837d();
  /* 11f5841b pop ecx */
  ECX = (pop32());
  /* 11f5841c mov eax, esi */
  EAX = (ESI);
  /* 11f5841e jmp 0x11f5842e */
  goto L_11f5842e;
L_11f58420:;
  /* 11f58420 call 0x11f5824b */
  push32(0x11f58425u); f_11f5824b();
  /* 11f58425 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f5842b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f5842e:;
  /* 11f5842e pop edi */
  EDI = (pop32());
  /* 11f5842f pop esi */
  ESI = (pop32());
  /* 11f58430 pop ebx */
  EBX = (pop32());
  /* 11f58431 ret  */
  ESPCHK(0x11f5839fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008432 @ 0x11f58432 (101 bytes, 34 insns) */
void f_11f58432(void) {
  FTRACE(0x11f58432u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58432 push esi */
  push32((uint32_t)(ESI));
  /* 11f58433 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58437 cmp esi, dword ptr [0x11f63200] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f63200))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5843d jae 0x11f5847f */
  if (!C.cf) goto L_11f5847f;
  /* 11f5843f mov ecx, esi */
  ECX = (ESI);
  /* 11f58441 mov eax, esi */
  EAX = (ESI);
  /* 11f58443 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f58446 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f58449 mov ecx, dword ptr [ecx*4 + 0x11f63100] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f58450 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f58453 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11f58458 je 0x11f5847f */
  if (C.zf) goto L_11f5847f;
  /* 11f5845a push edi */
  push32((uint32_t)(EDI));
  /* 11f5845b push esi */
  push32((uint32_t)(ESI));
  /* 11f5845c call 0x11f5831e */
  push32(0x11f58461u); f_11f5831e();
  /* 11f58461 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f58465 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f58469 push esi */
  push32((uint32_t)(ESI));
  /* 11f5846a call 0x11f58497 */
  push32(0x11f5846fu); f_11f58497();
  /* 11f5846f push esi */
  push32((uint32_t)(ESI));
  /* 11f58470 mov edi, eax */
  EDI = (EAX);
  /* 11f58472 call 0x11f5837d */
  push32(0x11f58477u); f_11f5837d();
  /* 11f58477 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5847a mov eax, edi */
  EAX = (EDI);
  /* 11f5847c pop edi */
  EDI = (pop32());
  /* 11f5847d pop esi */
  ESI = (pop32());
  /* 11f5847e ret  */
  ESPCHK(0x11f58432u, _esp0);
  ESP += 4; return;
L_11f5847f:;
  /* 11f5847f call 0x11f5824b */
  push32(0x11f58484u); f_11f5824b();
  /* 11f58484 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f5848a call 0x11f58254 */
  push32(0x11f5848fu); f_11f58254();
  /* 11f5848f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f58492 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f58495 pop esi */
  ESI = (pop32());
  /* 11f58496 ret  */
  ESPCHK(0x11f58432u, _esp0);
  ESP += 4; return;
}

/* FUN_10008497 @ 0x11f58497 (395 bytes, 135 insns) */
void f_11f58497(void) {
  FTRACE(0x11f58497u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58497 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58498 mov ebp, esp */
  EBP = (ESP);
  /* 11f5849a sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f584a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f584a1 push esi */
  push32((uint32_t)(ESI));
  /* 11f584a2 push edi */
  push32((uint32_t)(EDI));
  /* 11f584a3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f584a5 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f584a8 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11f584ab mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11f584ae jne 0x11f584b7 */
  if (!C.zf) goto L_11f584b7;
L_11f584b0:;
  /* 11f584b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f584b2 jmp 0x11f5861d */
  goto L_11f5861d;
L_11f584b7:;
  /* 11f584b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f584ba sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f584bd lea ebx, [eax*4 + 0x11f63100] */
  EBX = ((uint32_t)(EAX*4 + 0x11f63100));
  /* 11f584c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f584c7 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f584ca lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11f584cd mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f584cf shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11f584d2 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11f584d7 je 0x11f584e7 */
  if (C.zf) goto L_11f584e7;
  /* 11f584d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f584db push edi */
  push32((uint32_t)(EDI));
  /* 11f584dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f584df call 0x11f5a0e5 */
  push32(0x11f584e4u); f_11f5a0e5();
  /* 11f584e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f584e7:;
  /* 11f584e7 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f584e9 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f584eb test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11f584ef je 0x11f585b6 */
  if (C.zf) goto L_11f585b6;
  /* 11f584f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f584f8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f584fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f584fe mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11f58501 jbe 0x11f585f1 */
  if ((C.cf||C.zf)) goto L_11f585f1;
L_11f58507:;
  /* 11f58507 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11f5850d:;
  /* 11f5850d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f58510 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58513 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58516 jae 0x11f58541 */
  if (!C.cf) goto L_11f58541;
  /* 11f58518 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5851b inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f5851e mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11f58520 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f58523 jne 0x11f5852c */
  if (!C.zf) goto L_11f5852c;
  /* 11f58525 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11f58528 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11f5852b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f5852c:;
  /* 11f5852c mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11f5852e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5852f mov ecx, eax */
  ECX = (EAX);
  /* 11f58531 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11f58537 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58539 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5853f jl 0x11f5850d */
  if ((C.sf!=C.of)) goto L_11f5850d;
L_11f58541:;
  /* 11f58541 mov edi, eax */
  EDI = (EAX);
  /* 11f58543 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11f58549 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5854b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f5854e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f58550 push eax */
  push32((uint32_t)(EAX));
  /* 11f58551 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11f58557 push edi */
  push32((uint32_t)(EDI));
  /* 11f58558 push eax */
  push32((uint32_t)(EAX));
  /* 11f58559 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f5855b push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11f5855e call dword ptr [0x11f5c064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c064))), 0x11f58564u);
  /* 11f58564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58566 je 0x11f585ab */
  if (C.zf) goto L_11f585ab;
  /* 11f58568 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5856b add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5856e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58570 jl 0x11f5857d */
  if ((C.sf!=C.of)) goto L_11f5857d;
  /* 11f58572 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f58575 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58578 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5857b jb 0x11f58507 */
  if (C.cf) goto L_11f58507;
L_11f5857d:;
  /* 11f5857d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11f5857f:;
  /* 11f5857f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f58582 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58584 jne 0x11f5861a */
  if (!C.zf) goto L_11f5861a;
  /* 11f5858a cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5858d je 0x11f585f1 */
  if (C.zf) goto L_11f585f1;
  /* 11f5858f push 5 */
  push32((uint32_t)(0x5u));
  /* 11f58591 pop esi */
  ESI = (pop32());
  /* 11f58592 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58595 jne 0x11f585e3 */
  if (!C.zf) goto L_11f585e3;
  /* 11f58597 call 0x11f5824b */
  push32(0x11f5859cu); f_11f5824b();
  /* 11f5859c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f585a2 call 0x11f58254 */
  push32(0x11f585a7u); f_11f58254();
  /* 11f585a7 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11f585a9 jmp 0x11f585ec */
  goto L_11f585ec;
L_11f585ab:;
  /* 11f585ab call dword ptr [0x11f5c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c09c))), 0x11f585b1u);
  /* 11f585b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f585b4 jmp 0x11f5857d */
  goto L_11f5857d;
L_11f585b6:;
  /* 11f585b6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11f585b9 push edi */
  push32((uint32_t)(EDI));
  /* 11f585ba push ecx */
  push32((uint32_t)(ECX));
  /* 11f585bb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f585be push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f585c1 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11f585c3 call dword ptr [0x11f5c064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c064))), 0x11f585c9u);
  /* 11f585c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f585cb je 0x11f585d8 */
  if (C.zf) goto L_11f585d8;
  /* 11f585cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f585d0 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11f585d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f585d6 jmp 0x11f5857f */
  goto L_11f5857f;
L_11f585d8:;
  /* 11f585d8 call dword ptr [0x11f5c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c09c))), 0x11f585deu);
  /* 11f585de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f585e1 jmp 0x11f5857f */
  goto L_11f5857f;
L_11f585e3:;
  /* 11f585e3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f585e6 call 0x11f581d8 */
  push32(0x11f585ebu); f_11f581d8();
  /* 11f585eb pop ecx */
  ECX = (pop32());
L_11f585ec:;
  /* 11f585ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f585ef jmp 0x11f5861d */
  goto L_11f5861d;
L_11f585f1:;
  /* 11f585f1 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f585f3 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11f585f8 je 0x11f58606 */
  if (C.zf) goto L_11f58606;
  /* 11f585fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f585fd cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f58600 je 0x11f584b0 */
  if (C.zf) goto L_11f584b0;
L_11f58606:;
  /* 11f58606 call 0x11f5824b */
  push32(0x11f5860bu); f_11f5824b();
  /* 11f5860b mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11f58611 call 0x11f58254 */
  push32(0x11f58616u); f_11f58254();
  /* 11f58616 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11f58618 jmp 0x11f585ec */
  goto L_11f585ec;
L_11f5861a:;
  /* 11f5861a sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f5861d:;
  /* 11f5861d pop edi */
  EDI = (pop32());
  /* 11f5861e pop esi */
  ESI = (pop32());
  /* 11f5861f pop ebx */
  EBX = (pop32());
  /* 11f58620 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58621 ret  */
  ESPCHK(0x11f58497u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11f58630 (123 bytes, 44 insns) */
void f_11f58630(void) {
  FTRACE(0x11f58630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58630 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58634 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f5863a je 0x11f58650 */
  if (C.zf) goto L_11f58650;
L_11f5863c:;
  /* 11f5863c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f5863e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f5863f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f58641 je 0x11f58683 */
  if (C.zf) goto L_11f58683;
  /* 11f58643 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f58649 jne 0x11f5863c */
  if (!C.zf) goto L_11f5863c;
  /* 11f5864b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f58650:;
  /* 11f58650 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f58652 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f58657 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58659 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5865c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5865e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58661 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f58666 je 0x11f58650 */
  if (C.zf) goto L_11f58650;
  /* 11f58668 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f5866b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5866d je 0x11f586a1 */
  if (C.zf) goto L_11f586a1;
  /* 11f5866f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f58671 je 0x11f58697 */
  if (C.zf) goto L_11f58697;
  /* 11f58673 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f58678 je 0x11f5868d */
  if (C.zf) goto L_11f5868d;
  /* 11f5867a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f5867f je 0x11f58683 */
  if (C.zf) goto L_11f58683;
  /* 11f58681 jmp 0x11f58650 */
  goto L_11f58650;
L_11f58683:;
  /* 11f58683 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11f58686 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5868a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5868c ret  */
  ESPCHK(0x11f58630u, _esp0);
  ESP += 4; return;
L_11f5868d:;
  /* 11f5868d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11f58690 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58694 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58696 ret  */
  ESPCHK(0x11f58630u, _esp0);
  ESP += 4; return;
L_11f58697:;
  /* 11f58697 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11f5869a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5869e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f586a0 ret  */
  ESPCHK(0x11f58630u, _esp0);
  ESP += 4; return;
L_11f586a1:;
  /* 11f586a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11f586a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f586a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f586aa ret  */
  ESPCHK(0x11f58630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008795 @ 0x11f58795 (53 bytes, 25 insns) */
void f_11f58795(void) {
  FTRACE(0x11f58795u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58795 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58796 mov ebp, esp */
  EBP = (ESP);
  /* 11f58798 push ecx */
  push32((uint32_t)(ECX));
  /* 11f58799 push esi */
  push32((uint32_t)(ESI));
  /* 11f5879a wait  */
  /* wait (no observable integer/reg state) */
  /* 11f5879b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11f5879e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11f587a1 call 0x11f587e0 */
  push32(0x11f587a6u); f_11f587e0();
  /* 11f587a6 mov esi, eax */
  ESI = (EAX);
  /* 11f587a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f587ab not eax */
  EAX = (~(EAX));
  /* 11f587ad and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11f587af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f587b2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11f587b5 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11f587b7 push esi */
  push32((uint32_t)(ESI));
  /* 11f587b8 call 0x11f58872 */
  push32(0x11f587bdu); f_11f58872();
  /* 11f587bd pop ecx */
  ECX = (pop32());
  /* 11f587be mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f587c1 pop ecx */
  ECX = (pop32());
  /* 11f587c2 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11f587c5 mov eax, esi */
  EAX = (ESI);
  /* 11f587c7 pop esi */
  ESI = (pop32());
  /* 11f587c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f587c9 ret  */
  ESPCHK(0x11f58795u, _esp0);
  ESP += 4; return;
}

/* FUN_100087ca @ 0x11f587ca (22 bytes, 8 insns) */
void f_11f587ca(void) {
  FTRACE(0x11f587cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f587ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f587ce and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f587d3 push eax */
  push32((uint32_t)(EAX));
  /* 11f587d4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f587d8 call 0x11f58795 */
  push32(0x11f587ddu); f_11f58795();
  /* 11f587dd pop ecx */
  ECX = (pop32());
  /* 11f587de pop ecx */
  ECX = (pop32());
  /* 11f587df ret  */
  ESPCHK(0x11f587cau, _esp0);
  ESP += 4; return;
}

/* FUN_100087e0 @ 0x11f587e0 (146 bytes, 58 insns) */
void f_11f587e0(void) {
  FTRACE(0x11f587e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f587e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f587e1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f587e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f587e7 push ebp */
  push32((uint32_t)(EBP));
  /* 11f587e8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f587eb push edi */
  push32((uint32_t)(EDI));
  /* 11f587ec je 0x11f587f1 */
  if (C.zf) goto L_11f587f1;
  /* 11f587ee push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f587f0 pop eax */
  EAX = (pop32());
L_11f587f1:;
  /* 11f587f1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11f587f4 je 0x11f587f8 */
  if (C.zf) goto L_11f587f8;
  /* 11f587f6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11f587f8:;
  /* 11f587f8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11f587fb je 0x11f587ff */
  if (C.zf) goto L_11f587ff;
  /* 11f587fd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11f587ff:;
  /* 11f587ff test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11f58802 je 0x11f58806 */
  if (C.zf) goto L_11f58806;
  /* 11f58804 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11f58806:;
  /* 11f58806 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11f58809 je 0x11f5880d */
  if (C.zf) goto L_11f5880d;
  /* 11f5880b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11f5880d:;
  /* 11f5880d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11f58810 je 0x11f58817 */
  if (C.zf) goto L_11f58817;
  /* 11f58812 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11f58817:;
  /* 11f58817 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11f5881a push esi */
  push32((uint32_t)(ESI));
  /* 11f5881b mov edx, ecx */
  EDX = (ECX);
  /* 11f5881d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11f58822 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11f58827 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f58829 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11f5882e je 0x11f5884f */
  if (C.zf) goto L_11f5884f;
  /* 11f58830 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58836 je 0x11f5884c */
  if (C.zf) goto L_11f5884c;
  /* 11f58838 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5883e je 0x11f58848 */
  if (C.zf) goto L_11f58848;
  /* 11f58840 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58842 jne 0x11f5884f */
  if (!C.zf) goto L_11f5884f;
  /* 11f58844 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11f58846 jmp 0x11f5884f */
  goto L_11f5884f;
L_11f58848:;
  /* 11f58848 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11f5884a jmp 0x11f5884f */
  goto L_11f5884f;
L_11f5884c:;
  /* 11f5884c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11f5884f:;
  /* 11f5884f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f58851 pop esi */
  ESI = (pop32());
  /* 11f58852 je 0x11f5885f */
  if (C.zf) goto L_11f5885f;
  /* 11f58854 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58856 jne 0x11f58864 */
  if (!C.zf) goto L_11f58864;
  /* 11f58858 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f5885d jmp 0x11f58864 */
  goto L_11f58864;
L_11f5885f:;
  /* 11f5885f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11f58864:;
  /* 11f58864 pop edi */
  EDI = (pop32());
  /* 11f58865 pop ebp */
  EBP = (pop32());
  /* 11f58866 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11f58869 pop ebx */
  EBX = (pop32());
  /* 11f5886a je 0x11f58871 */
  if (C.zf) goto L_11f58871;
  /* 11f5886c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11f58871:;
  /* 11f58871 ret  */
  ESPCHK(0x11f587e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008872 @ 0x11f58872 (137 bytes, 53 insns) */
void f_11f58872(void) {
  FTRACE(0x11f58872u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58872 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58873 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58879 push esi */
  push32((uint32_t)(ESI));
  /* 11f5887a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11f5887d je 0x11f58882 */
  if (C.zf) goto L_11f58882;
  /* 11f5887f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58881 pop eax */
  EAX = (pop32());
L_11f58882:;
  /* 11f58882 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11f58885 je 0x11f58889 */
  if (C.zf) goto L_11f58889;
  /* 11f58887 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11f58889:;
  /* 11f58889 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11f5888c je 0x11f58890 */
  if (C.zf) goto L_11f58890;
  /* 11f5888e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11f58890:;
  /* 11f58890 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11f58893 je 0x11f58897 */
  if (C.zf) goto L_11f58897;
  /* 11f58895 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_11f58897:;
  /* 11f58897 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f5889a je 0x11f5889e */
  if (C.zf) goto L_11f5889e;
  /* 11f5889c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11f5889e:;
  /* 11f5889e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11f588a4 je 0x11f588a8 */
  if (C.zf) goto L_11f588a8;
  /* 11f588a6 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11f588a8:;
  /* 11f588a8 mov ecx, ebx */
  ECX = (EBX);
  /* 11f588aa mov edx, 0x300 */
  EDX = (0x300u);
  /* 11f588af and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f588b1 mov esi, 0x200 */
  ESI = (0x200u);
  /* 11f588b6 je 0x11f588d5 */
  if (C.zf) goto L_11f588d5;
  /* 11f588b8 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f588be je 0x11f588d2 */
  if (C.zf) goto L_11f588d2;
  /* 11f588c0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f588c2 je 0x11f588cd */
  if (C.zf) goto L_11f588cd;
  /* 11f588c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f588c6 jne 0x11f588d5 */
  if (!C.zf) goto L_11f588d5;
  /* 11f588c8 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11f588cb jmp 0x11f588d5 */
  goto L_11f588d5;
L_11f588cd:;
  /* 11f588cd or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11f588d0 jmp 0x11f588d5 */
  goto L_11f588d5;
L_11f588d2:;
  /* 11f588d2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11f588d5:;
  /* 11f588d5 mov ecx, ebx */
  ECX = (EBX);
  /* 11f588d7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f588dd je 0x11f588eb */
  if (C.zf) goto L_11f588eb;
  /* 11f588df cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f588e5 jne 0x11f588ed */
  if (!C.zf) goto L_11f588ed;
  /* 11f588e7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f588e9 jmp 0x11f588ed */
  goto L_11f588ed;
L_11f588eb:;
  /* 11f588eb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11f588ed:;
  /* 11f588ed pop esi */
  ESI = (pop32());
  /* 11f588ee test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11f588f4 pop ebx */
  EBX = (pop32());
  /* 11f588f5 je 0x11f588fa */
  if (C.zf) goto L_11f588fa;
  /* 11f588f7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_11f588fa:;
  /* 11f588fa ret  */
  ESPCHK(0x11f58872u, _esp0);
  ESP += 4; return;
}

/* FUN_100088fb @ 0x11f588fb (117 bytes, 46 insns) */
void f_11f588fb(void) {
  FTRACE(0x11f588fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f588fb push ebp */
  push32((uint32_t)(EBP));
  /* 11f588fc mov ebp, esp */
  EBP = (ESP);
  /* 11f588fe push ecx */
  push32((uint32_t)(ECX));
  /* 11f588ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58902 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11f58905 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5890b ja 0x11f58919 */
  if ((!C.cf&&!C.zf)) goto L_11f58919;
  /* 11f5890d mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f58913 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11f58917 jmp 0x11f5896b */
  goto L_11f5896b;
L_11f58919:;
  /* 11f58919 mov ecx, eax */
  ECX = (EAX);
  /* 11f5891b push esi */
  push32((uint32_t)(ESI));
  /* 11f5891c mov esi, dword ptr [0x11f61e50] */
  ESI = (r32((uint32_t)(0x11f61e50)));
  /* 11f58922 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f58925 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11f58928 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11f5892d pop esi */
  ESI = (pop32());
  /* 11f5892e je 0x11f5893e */
  if (C.zf) goto L_11f5893e;
  /* 11f58930 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11f58934 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11f58937 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11f5893a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5893c jmp 0x11f58947 */
  goto L_11f58947;
L_11f5893e:;
  /* 11f5893e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11f58942 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11f58945 push 1 */
  push32((uint32_t)(0x1u));
L_11f58947:;
  /* 11f58947 pop eax */
  EAX = (pop32());
  /* 11f58948 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11f5894b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5894d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5894f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f58951 push ecx */
  push32((uint32_t)(ECX));
  /* 11f58952 push eax */
  push32((uint32_t)(EAX));
  /* 11f58953 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f58956 push eax */
  push32((uint32_t)(EAX));
  /* 11f58957 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58959 call 0x11f5a158 */
  push32(0x11f5895eu); f_11f5a158();
  /* 11f5895e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58963 jne 0x11f58967 */
  if (!C.zf) goto L_11f58967;
  /* 11f58965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58966 ret  */
  ESPCHK(0x11f588fbu, _esp0);
  ESP += 4; return;
L_11f58967:;
  /* 11f58967 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11f5896b:;
  /* 11f5896b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11f5896e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5896f ret  */
  ESPCHK(0x11f588fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10008970 @ 0x11f58970 (111 bytes, 44 insns) */
void f_11f58970(void) {
  FTRACE(0x11f58970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58970 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58971 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f58973 cmp dword ptr [0x11f62de0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62de0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58979 jne 0x11f5898e */
  if (!C.zf) goto L_11f5898e;
  /* 11f5897b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5897f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58982 jl 0x11f589dd */
  if ((C.sf!=C.of)) goto L_11f589dd;
  /* 11f58984 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58987 jg 0x11f589dd */
  if ((!C.zf&&C.sf==C.of)) goto L_11f589dd;
  /* 11f58989 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5898c pop ebx */
  EBX = (pop32());
  /* 11f5898d ret  */
  ESPCHK(0x11f58970u, _esp0);
  ESP += 4; return;
L_11f5898e:;
  /* 11f5898e push esi */
  push32((uint32_t)(ESI));
  /* 11f5898f mov esi, 0x11f62ea8 */
  ESI = (0x11f62ea8u);
  /* 11f58994 push edi */
  push32((uint32_t)(EDI));
  /* 11f58995 push esi */
  push32((uint32_t)(ESI));
  /* 11f58996 call dword ptr [0x11f5c03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c03c))), 0x11f5899cu);
  /* 11f5899c cmp dword ptr [0x11f62ea4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62ea4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f589a2 mov edi, dword ptr [0x11f5c040] */
  EDI = (r32((uint32_t)(0x11f5c040)));
  /* 11f589a8 je 0x11f589b8 */
  if (C.zf) goto L_11f589b8;
  /* 11f589aa push esi */
  push32((uint32_t)(ESI));
  /* 11f589ab call edi */
  call_ind((uint32_t)(EDI), 0x11f589adu);
  /* 11f589ad push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f589af call 0x11f5637c */
  push32(0x11f589b4u); f_11f5637c();
  /* 11f589b4 pop ecx */
  ECX = (pop32());
  /* 11f589b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f589b7 pop ebx */
  EBX = (pop32());
L_11f589b8:;
  /* 11f589b8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f589bc call 0x11f589df */
  push32(0x11f589c1u); f_11f589df();
  /* 11f589c1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f589c3 pop ecx */
  ECX = (pop32());
  /* 11f589c4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f589c8 je 0x11f589d4 */
  if (C.zf) goto L_11f589d4;
  /* 11f589ca push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f589cc call 0x11f563dd */
  push32(0x11f589d1u); f_11f563dd();
  /* 11f589d1 pop ecx */
  ECX = (pop32());
  /* 11f589d2 jmp 0x11f589d7 */
  goto L_11f589d7;
L_11f589d4:;
  /* 11f589d4 push esi */
  push32((uint32_t)(ESI));
  /* 11f589d5 call edi */
  call_ind((uint32_t)(EDI), 0x11f589d7u);
L_11f589d7:;
  /* 11f589d7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f589db pop edi */
  EDI = (pop32());
  /* 11f589dc pop esi */
  ESI = (pop32());
L_11f589dd:;
  /* 11f589dd pop ebx */
  EBX = (pop32());
  /* 11f589de ret  */
  ESPCHK(0x11f58970u, _esp0);
  ESP += 4; return;
}

/* FUN_100089df @ 0x11f589df (203 bytes, 78 insns) */
void f_11f589df(void) {
  FTRACE(0x11f589dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f589df push ebp */
  push32((uint32_t)(EBP));
  /* 11f589e0 mov ebp, esp */
  EBP = (ESP);
  /* 11f589e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f589e3 cmp dword ptr [0x11f62de0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62de0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f589ea push ebx */
  push32((uint32_t)(EBX));
  /* 11f589eb push esi */
  push32((uint32_t)(ESI));
  /* 11f589ec push edi */
  push32((uint32_t)(EDI));
  /* 11f589ed jne 0x11f58a0c */
  if (!C.zf) goto L_11f58a0c;
  /* 11f589ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f589f2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f589f5 jl 0x11f58aa5 */
  if ((C.sf!=C.of)) goto L_11f58aa5;
  /* 11f589fb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f589fe jg 0x11f58aa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f58aa5;
  /* 11f58a04 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58a07 jmp 0x11f58aa5 */
  goto L_11f58aa5;
L_11f58a0c:;
  /* 11f58a0c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58a0f mov edi, 0x100 */
  EDI = (0x100u);
  /* 11f58a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58a16 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58a18 pop esi */
  ESI = (pop32());
  /* 11f58a19 jge 0x11f58a40 */
  if ((C.sf==C.of)) goto L_11f58a40;
  /* 11f58a1b cmp dword ptr [0x11f62060], esi */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58a21 jle 0x11f58a2e */
  if ((C.zf||C.sf!=C.of)) goto L_11f58a2e;
  /* 11f58a23 push esi */
  push32((uint32_t)(ESI));
  /* 11f58a24 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58a25 call 0x11f588fb */
  push32(0x11f58a2au); f_11f588fb();
  /* 11f58a2a pop ecx */
  ECX = (pop32());
  /* 11f58a2b pop ecx */
  ECX = (pop32());
  /* 11f58a2c jmp 0x11f58a38 */
  goto L_11f58a38;
L_11f58a2e:;
  /* 11f58a2e mov eax, dword ptr [0x11f61e50] */
  EAX = (r32((uint32_t)(0x11f61e50)));
  /* 11f58a33 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11f58a36 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11f58a38:;
  /* 11f58a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58a3a jne 0x11f58a40 */
  if (!C.zf) goto L_11f58a40;
L_11f58a3c:;
  /* 11f58a3c mov eax, ebx */
  EAX = (EBX);
  /* 11f58a3e jmp 0x11f58aa5 */
  goto L_11f58aa5;
L_11f58a40:;
  /* 11f58a40 mov edx, dword ptr [0x11f61e50] */
  EDX = (r32((uint32_t)(0x11f61e50)));
  /* 11f58a46 mov eax, ebx */
  EAX = (EBX);
  /* 11f58a48 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f58a4b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11f58a4e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11f58a53 je 0x11f58a64 */
  if (C.zf) goto L_11f58a64;
  /* 11f58a55 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11f58a59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f58a5b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11f58a5e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11f58a61 pop eax */
  EAX = (pop32());
  /* 11f58a62 jmp 0x11f58a6d */
  goto L_11f58a6d;
L_11f58a64:;
  /* 11f58a64 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11f58a68 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11f58a6b mov eax, esi */
  EAX = (ESI);
L_11f58a6d:;
  /* 11f58a6d push esi */
  push32((uint32_t)(ESI));
  /* 11f58a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f58a70 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11f58a73 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f58a75 push ecx */
  push32((uint32_t)(ECX));
  /* 11f58a76 push eax */
  push32((uint32_t)(EAX));
  /* 11f58a77 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f58a7a push eax */
  push32((uint32_t)(EAX));
  /* 11f58a7b push edi */
  push32((uint32_t)(EDI));
  /* 11f58a7c push dword ptr [0x11f62de0] */
  push32((uint32_t)(r32((uint32_t)(0x11f62de0))));
  /* 11f58a82 call 0x11f5a2a1 */
  push32(0x11f58a87u); f_11f5a2a1();
  /* 11f58a87 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58a8c je 0x11f58a3c */
  if (C.zf) goto L_11f58a3c;
  /* 11f58a8e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58a90 jne 0x11f58a98 */
  if (!C.zf) goto L_11f58a98;
  /* 11f58a92 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f58a96 jmp 0x11f58aa5 */
  goto L_11f58aa5;
L_11f58a98:;
  /* 11f58a98 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11f58a9c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f58aa0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f58aa3 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11f58aa5:;
  /* 11f58aa5 pop edi */
  EDI = (pop32());
  /* 11f58aa6 pop esi */
  ESI = (pop32());
  /* 11f58aa7 pop ebx */
  EBX = (pop32());
  /* 11f58aa8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58aa9 ret  */
  ESPCHK(0x11f589dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10008aaa @ 0x11f58aaa (73 bytes, 36 insns) */
void f_11f58aaa(void) {
  FTRACE(0x11f58aaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58aaa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58aae push esi */
  push32((uint32_t)(ESI));
  /* 11f58aaf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f58ab1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58ab2 pop ecx */
  ECX = (pop32());
  /* 11f58ab3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58ab5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11f58ab7 mov esi, eax */
  ESI = (EAX);
  /* 11f58ab9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f58abd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58abe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58ac0 pop ecx */
  ECX = (pop32());
  /* 11f58ac1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58ac5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58ac7 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f58aca shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f58acc not edx */
  EDX = (~(EDX));
  /* 11f58ace test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11f58ad1 jne 0x11f58aef */
  if (!C.zf) goto L_11f58aef;
  /* 11f58ad3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f58ad4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58ad7 jge 0x11f58aea */
  if ((C.sf==C.of)) goto L_11f58aea;
  /* 11f58ad9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11f58adc:;
  /* 11f58adc cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58adf jne 0x11f58aef */
  if (!C.zf) goto L_11f58aef;
  /* 11f58ae1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f58ae2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58ae5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58ae8 jl 0x11f58adc */
  if ((C.sf!=C.of)) goto L_11f58adc;
L_11f58aea:;
  /* 11f58aea push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58aec pop eax */
  EAX = (pop32());
  /* 11f58aed pop esi */
  ESI = (pop32());
  /* 11f58aee ret  */
  ESPCHK(0x11f58aaau, _esp0);
  ESP += 4; return;
L_11f58aef:;
  /* 11f58aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58af1 pop esi */
  ESI = (pop32());
  /* 11f58af2 ret  */
  ESPCHK(0x11f58aaau, _esp0);
  ESP += 4; return;
}

/* FUN_10008af3 @ 0x11f58af3 (86 bytes, 43 insns) */
void f_11f58af3(void) {
  FTRACE(0x11f58af3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58af3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58af7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58af8 push esi */
  push32((uint32_t)(ESI));
  /* 11f58af9 push edi */
  push32((uint32_t)(EDI));
  /* 11f58afa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f58afc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f58b00 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58b01 pop ecx */
  ECX = (pop32());
  /* 11f58b02 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58b04 mov esi, eax */
  ESI = (EAX);
  /* 11f58b06 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f58b0a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58b0b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58b0d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11f58b10 push edi */
  push32((uint32_t)(EDI));
  /* 11f58b11 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11f58b13 pop ecx */
  ECX = (pop32());
  /* 11f58b14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58b16 pop eax */
  EAX = (pop32());
  /* 11f58b17 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58b19 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f58b1b push eax */
  push32((uint32_t)(EAX));
  /* 11f58b1c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11f58b1e call 0x11f5a4f0 */
  push32(0x11f58b23u); f_11f5a4f0();
  /* 11f58b23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58b26 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f58b27 js 0x11f58b45 */
  if (C.sf) goto L_11f58b45;
  /* 11f58b29 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_11f58b2c:;
  /* 11f58b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58b2e je 0x11f58b45 */
  if (C.zf) goto L_11f58b45;
  /* 11f58b30 push edi */
  push32((uint32_t)(EDI));
  /* 11f58b31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58b33 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11f58b35 call 0x11f5a4f0 */
  push32(0x11f58b3au); f_11f5a4f0();
  /* 11f58b3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58b3d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f58b3e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58b41 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f58b43 jge 0x11f58b2c */
  if ((C.sf==C.of)) goto L_11f58b2c;
L_11f58b45:;
  /* 11f58b45 pop edi */
  EDI = (pop32());
  /* 11f58b46 pop esi */
  ESI = (pop32());
  /* 11f58b47 pop ebx */
  EBX = (pop32());
  /* 11f58b48 ret  */
  ESPCHK(0x11f58af3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b49 @ 0x11f58b49 (140 bytes, 71 insns) */
void f_11f58b49(void) {
  FTRACE(0x11f58b49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58b49 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58b4a mov ebp, esp */
  EBP = (ESP);
  /* 11f58b4c push ecx */
  push32((uint32_t)(ECX));
  /* 11f58b4d push ecx */
  push32((uint32_t)(ECX));
  /* 11f58b4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58b51 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58b52 push esi */
  push32((uint32_t)(ESI));
  /* 11f58b53 push edi */
  push32((uint32_t)(EDI));
  /* 11f58b54 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11f58b57 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f58b59 pop ecx */
  ECX = (pop32());
  /* 11f58b5a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f58b5e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 11f58b61 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f58b63 mov eax, ebx */
  EAX = (EBX);
  /* 11f58b65 pop esi */
  ESI = (pop32());
  /* 11f58b66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58b67 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58b69 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11f58b6b mov ecx, eax */
  ECX = (EAX);
  /* 11f58b6d mov eax, ebx */
  EAX = (EBX);
  /* 11f58b6f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58b70 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58b75 pop esi */
  ESI = (pop32());
  /* 11f58b76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58b78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f58b7b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11f58b7e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f58b81 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58b83 pop edx */
  EDX = (pop32());
  /* 11f58b84 mov ecx, esi */
  ECX = (ESI);
  /* 11f58b86 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f58b88 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 11f58b8a je 0x11f58bad */
  if (C.zf) goto L_11f58bad;
  /* 11f58b8c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f58b8d push ebx */
  push32((uint32_t)(EBX));
  /* 11f58b8e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f58b91 call 0x11f58aaa */
  push32(0x11f58b96u); f_11f58aaa();
  /* 11f58b96 pop ecx */
  ECX = (pop32());
  /* 11f58b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58b99 pop ecx */
  ECX = (pop32());
  /* 11f58b9a jne 0x11f58baa */
  if (!C.zf) goto L_11f58baa;
  /* 11f58b9c push edi */
  push32((uint32_t)(EDI));
  /* 11f58b9d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f58ba0 call 0x11f58af3 */
  push32(0x11f58ba5u); f_11f58af3();
  /* 11f58ba5 pop ecx */
  ECX = (pop32());
  /* 11f58ba6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f58ba9 pop ecx */
  ECX = (pop32());
L_11f58baa:;
  /* 11f58baa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f58bad:;
  /* 11f58bad or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f58bb0 mov ecx, esi */
  ECX = (ESI);
  /* 11f58bb2 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f58bb4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f58bb6 pop ecx */
  ECX = (pop32());
  /* 11f58bb7 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f58bb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f58bbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f58bbd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58bbf jge 0x11f58bcd */
  if ((C.sf==C.of)) goto L_11f58bcd;
  /* 11f58bc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58bc4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58bc6 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11f58bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58bcb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11f58bcd:;
  /* 11f58bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f58bd0 pop edi */
  EDI = (pop32());
  /* 11f58bd1 pop esi */
  ESI = (pop32());
  /* 11f58bd2 pop ebx */
  EBX = (pop32());
  /* 11f58bd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58bd4 ret  */
  ESPCHK(0x11f58b49u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd5 @ 0x11f58bd5 (27 bytes, 13 insns) */
void f_11f58bd5(void) {
  FTRACE(0x11f58bd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58bd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58bd9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58bdd push esi */
  push32((uint32_t)(ESI));
  /* 11f58bde push 3 */
  push32((uint32_t)(0x3u));
  /* 11f58be0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58be2 pop edx */
  EDX = (pop32());
L_11f58be3:;
  /* 11f58be3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11f58be5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 11f58be8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58beb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f58bec jne 0x11f58be3 */
  if (!C.zf) goto L_11f58be3;
  /* 11f58bee pop esi */
  ESI = (pop32());
  /* 11f58bef ret  */
  ESPCHK(0x11f58bd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x11f58bf0 (12 bytes, 8 insns) */
void f_11f58bf0(void) {
  FTRACE(0x11f58bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58bf0 push edi */
  push32((uint32_t)(EDI));
  /* 11f58bf1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f58bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58bf7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f58bf8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f58bf9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f58bfa pop edi */
  EDI = (pop32());
  /* 11f58bfb ret  */
  ESPCHK(0x11f58bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bfc @ 0x11f58bfc (27 bytes, 13 insns) */
void f_11f58bfc(void) {
  FTRACE(0x11f58bfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58bfc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f58c00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11f58c02:;
  /* 11f58c02 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58c05 jne 0x11f58c14 */
  if (!C.zf) goto L_11f58c14;
  /* 11f58c07 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f58c08 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58c0b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58c0e jl 0x11f58c02 */
  if ((C.sf!=C.of)) goto L_11f58c02;
  /* 11f58c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58c12 pop eax */
  EAX = (pop32());
  /* 11f58c13 ret  */
  ESPCHK(0x11f58bfcu, _esp0);
  ESP += 4; return;
L_11f58c14:;
  /* 11f58c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58c16 ret  */
  ESPCHK(0x11f58bfcu, _esp0);
  ESP += 4; return;
}

/* FUN_10008c17 @ 0x11f58c17 (141 bytes, 64 insns) */
void f_11f58c17(void) {
  FTRACE(0x11f58c17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58c17 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58c18 mov ebp, esp */
  EBP = (ESP);
  /* 11f58c1a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58c1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58c20 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58c21 push esi */
  push32((uint32_t)(ESI));
  /* 11f58c22 push edi */
  push32((uint32_t)(EDI));
  /* 11f58c23 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f58c25 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58c28 pop ebx */
  EBX = (pop32());
  /* 11f58c29 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f58c2c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58c2d mov ecx, ebx */
  ECX = (EBX);
  /* 11f58c2f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11f58c36 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58c38 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f58c3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58c3e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f58c3f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f58c41 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11f58c45 mov ecx, edx */
  ECX = (EDX);
  /* 11f58c47 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f58c49 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58c4b not esi */
  ESI = (~(ESI));
L_11f58c4d:;
  /* 11f58c4d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f58c4f mov ecx, eax */
  ECX = (EAX);
  /* 11f58c51 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11f58c53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f58c56 mov ecx, edx */
  ECX = (EDX);
  /* 11f58c58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f58c5a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11f58c5d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f58c5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f58c62 mov ecx, ebx */
  ECX = (EBX);
  /* 11f58c64 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58c67 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f58c69 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11f58c6c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f58c6f jne 0x11f58c4d */
  if (!C.zf) goto L_11f58c4d;
  /* 11f58c71 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f58c74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f58c76 pop ebx */
  EBX = (pop32());
  /* 11f58c77 mov esi, edi */
  ESI = (EDI);
  /* 11f58c79 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f58c7b pop ecx */
  ECX = (pop32());
  /* 11f58c7c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_11f58c7f:;
  /* 11f58c7f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58c81 jl 0x11f58c92 */
  if ((C.sf!=C.of)) goto L_11f58c92;
  /* 11f58c83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58c86 mov eax, ecx */
  EAX = (ECX);
  /* 11f58c88 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58c8a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11f58c8d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11f58c90 jmp 0x11f58c99 */
  goto L_11f58c99;
L_11f58c92:;
  /* 11f58c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58c95 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_11f58c99:;
  /* 11f58c99 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f58c9a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58c9d jns 0x11f58c7f */
  if (!C.sf) goto L_11f58c7f;
  /* 11f58c9f pop edi */
  EDI = (pop32());
  /* 11f58ca0 pop esi */
  ESI = (pop32());
  /* 11f58ca1 pop ebx */
  EBX = (pop32());
  /* 11f58ca2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58ca3 ret  */
  ESPCHK(0x11f58c17u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ca4 @ 0x11f58ca4 (364 bytes, 138 insns) */
void f_11f58ca4(void) {
  FTRACE(0x11f58ca4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58ca4 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58ca5 mov ebp, esp */
  EBP = (ESP);
  /* 11f58ca7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58caa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58cad push ebx */
  push32((uint32_t)(EBX));
  /* 11f58cae push esi */
  push32((uint32_t)(ESI));
  /* 11f58caf push edi */
  push32((uint32_t)(EDI));
  /* 11f58cb0 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11f58cb4 mov ebx, ecx */
  EBX = (ECX);
  /* 11f58cb6 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f58cbc mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f58cbf mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11f58cc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f58cc5 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11f58cc8 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11f58ccb mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f58cce and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11f58cd4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58cda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f58cdd shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f58ce0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58ce6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f58ce9 jne 0x11f58d11 */
  if (!C.zf) goto L_11f58d11;
  /* 11f58ceb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58cee xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f58cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11f58cf1 call 0x11f58bfc */
  push32(0x11f58cf6u); f_11f58bfc();
  /* 11f58cf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58cf8 pop ecx */
  ECX = (pop32());
  /* 11f58cf9 jne 0x11f58dd0 */
  if (!C.zf) goto L_11f58dd0;
  /* 11f58cff lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d02 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d03 call 0x11f58bf0 */
  push32(0x11f58d08u); f_11f58bf0();
  /* 11f58d08 pop ecx */
  ECX = (pop32());
L_11f58d09:;
  /* 11f58d09 push 2 */
  push32((uint32_t)(0x2u));
L_11f58d0b:;
  /* 11f58d0b pop eax */
  EAX = (pop32());
  /* 11f58d0c jmp 0x11f58dd2 */
  goto L_11f58dd2;
L_11f58d11:;
  /* 11f58d11 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d14 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d15 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f58d18 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d19 call 0x11f58bd5 */
  push32(0x11f58d1eu); f_11f58bd5();
  /* 11f58d1e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11f58d21 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d24 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d25 call 0x11f58b49 */
  push32(0x11f58d2au); f_11f58b49();
  /* 11f58d2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f58d2f je 0x11f58d32 */
  if (C.zf) goto L_11f58d32;
  /* 11f58d31 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11f58d32:;
  /* 11f58d32 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f58d35 mov ecx, eax */
  ECX = (EAX);
  /* 11f58d37 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58d3a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58d3c jge 0x11f58d4a */
  if ((C.sf==C.of)) goto L_11f58d4a;
  /* 11f58d3e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d41 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d42 call 0x11f58bf0 */
  push32(0x11f58d47u); f_11f58bf0();
  /* 11f58d47 pop ecx */
  ECX = (pop32());
  /* 11f58d48 jmp 0x11f58d86 */
  goto L_11f58d86;
L_11f58d4a:;
  /* 11f58d4a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58d4c jg 0x11f58d8d */
  if ((!C.zf&&C.sf==C.of)) goto L_11f58d8d;
  /* 11f58d4e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58d50 mov esi, eax */
  ESI = (EAX);
  /* 11f58d52 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f58d55 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d56 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d59 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d5a call 0x11f58bd5 */
  push32(0x11f58d5fu); f_11f58bd5();
  /* 11f58d5f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d62 push esi */
  push32((uint32_t)(ESI));
  /* 11f58d63 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d64 call 0x11f58c17 */
  push32(0x11f58d69u); f_11f58c17();
  /* 11f58d69 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11f58d6c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d6f push eax */
  push32((uint32_t)(EAX));
  /* 11f58d70 call 0x11f58b49 */
  push32(0x11f58d75u); f_11f58b49();
  /* 11f58d75 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 11f58d78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f58d79 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d7a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d7d push eax */
  push32((uint32_t)(EAX));
  /* 11f58d7e call 0x11f58c17 */
  push32(0x11f58d83u); f_11f58c17();
  /* 11f58d83 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f58d86:;
  /* 11f58d86 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f58d88 jmp 0x11f58d09 */
  goto L_11f58d09;
L_11f58d8d:;
  /* 11f58d8d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58d8f jl 0x11f58db9 */
  if ((C.sf!=C.of)) goto L_11f58db9;
  /* 11f58d91 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58d94 push eax */
  push32((uint32_t)(EAX));
  /* 11f58d95 call 0x11f58bf0 */
  push32(0x11f58d9au); f_11f58bf0();
  /* 11f58d9a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11f58d9d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11f58da1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58da4 push eax */
  push32((uint32_t)(EAX));
  /* 11f58da5 call 0x11f58c17 */
  push32(0x11f58daau); f_11f58c17();
  /* 11f58daa mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11f58dad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58db0 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58db2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f58db4 jmp 0x11f58d0b */
  goto L_11f58d0b;
L_11f58db9:;
  /* 11f58db9 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11f58dbc mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11f58dbf and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11f58dc3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58dc6 push eax */
  push32((uint32_t)(EAX));
  /* 11f58dc7 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58dc9 call 0x11f58c17 */
  push32(0x11f58dceu); f_11f58c17();
  /* 11f58dce pop ecx */
  ECX = (pop32());
  /* 11f58dcf pop ecx */
  ECX = (pop32());
L_11f58dd0:;
  /* 11f58dd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f58dd2:;
  /* 11f58dd2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11f58dd4 pop ecx */
  ECX = (pop32());
  /* 11f58dd5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58dd8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11f58ddb shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f58ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58de0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f58de2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58de4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f58dea or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11f58dec or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11f58def cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58df2 jne 0x11f58e01 */
  if (!C.zf) goto L_11f58e01;
  /* 11f58df4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f58dfa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11f58dfd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f58dff jmp 0x11f58e0b */
  goto L_11f58e0b;
L_11f58e01:;
  /* 11f58e01 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58e04 jne 0x11f58e0b */
  if (!C.zf) goto L_11f58e0b;
  /* 11f58e06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58e09 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11f58e0b:;
  /* 11f58e0b pop edi */
  EDI = (pop32());
  /* 11f58e0c pop esi */
  ESI = (pop32());
  /* 11f58e0d pop ebx */
  EBX = (pop32());
  /* 11f58e0e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58e0f ret  */
  ESPCHK(0x11f58ca4u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x11f58e10 (22 bytes, 6 insns) */
void f_11f58e10(void) {
  FTRACE(0x11f58e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58e10 push 0x11f62070 */
  push32((uint32_t)(0x11f62070u));
  /* 11f58e15 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f58e19 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f58e1d call 0x11f58ca4 */
  push32(0x11f58e22u); f_11f58ca4();
  /* 11f58e22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58e25 ret  */
  ESPCHK(0x11f58e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e26 @ 0x11f58e26 (22 bytes, 6 insns) */
void f_11f58e26(void) {
  FTRACE(0x11f58e26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58e26 push 0x11f62088 */
  push32((uint32_t)(0x11f62088u));
  /* 11f58e2b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f58e2f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f58e33 call 0x11f58ca4 */
  push32(0x11f58e38u); f_11f58ca4();
  /* 11f58e38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58e3b ret  */
  ESPCHK(0x11f58e26u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e3c @ 0x11f58e3c (45 bytes, 21 insns) */
void f_11f58e3c(void) {
  FTRACE(0x11f58e3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58e3c push ebp */
  push32((uint32_t)(EBP));
  /* 11f58e3d mov ebp, esp */
  EBP = (ESP);
  /* 11f58e3f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58e42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58e44 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e45 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e46 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e47 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f58e4b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11f58e4e push eax */
  push32((uint32_t)(EAX));
  /* 11f58e4f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58e52 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e53 call 0x11f5a691 */
  push32(0x11f58e58u); f_11f5a691();
  /* 11f58e58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f58e5b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58e5e push eax */
  push32((uint32_t)(EAX));
  /* 11f58e5f call 0x11f58e10 */
  push32(0x11f58e64u); f_11f58e10();
  /* 11f58e64 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58e67 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58e68 ret  */
  ESPCHK(0x11f58e3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008e69 @ 0x11f58e69 (45 bytes, 21 insns) */
void f_11f58e69(void) {
  FTRACE(0x11f58e69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58e69 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58e6a mov ebp, esp */
  EBP = (ESP);
  /* 11f58e6c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58e6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f58e71 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e72 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e73 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e74 push eax */
  push32((uint32_t)(EAX));
  /* 11f58e75 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f58e78 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11f58e7b push eax */
  push32((uint32_t)(EAX));
  /* 11f58e7c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58e7f push eax */
  push32((uint32_t)(EAX));
  /* 11f58e80 call 0x11f5a691 */
  push32(0x11f58e85u); f_11f5a691();
  /* 11f58e85 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f58e88 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58e8b push eax */
  push32((uint32_t)(EAX));
  /* 11f58e8c call 0x11f58e26 */
  push32(0x11f58e91u); f_11f58e26();
  /* 11f58e91 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58e94 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58e95 ret  */
  ESPCHK(0x11f58e69u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e96 @ 0x11f58e96 (119 bytes, 57 insns) */
void f_11f58e96(void) {
  FTRACE(0x11f58e96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58e96 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58e97 mov ebp, esp */
  EBP = (ESP);
  /* 11f58e99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f58e9c push ebx */
  push32((uint32_t)(EBX));
  /* 11f58e9d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58ea0 push esi */
  push32((uint32_t)(ESI));
  /* 11f58ea1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58ea4 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f58ea7 push edi */
  push32((uint32_t)(EDI));
  /* 11f58ea8 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11f58eab mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11f58eae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f58eb0 mov eax, edi */
  EAX = (EDI);
  /* 11f58eb2 jle 0x11f58ed3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f58ed3;
  /* 11f58eb4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f58eb7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f58eb9:;
  /* 11f58eb9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f58ebb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f58ebd je 0x11f58ec5 */
  if (C.zf) goto L_11f58ec5;
  /* 11f58ebf movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11f58ec2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f58ec3 jmp 0x11f58ec8 */
  goto L_11f58ec8;
L_11f58ec5:;
  /* 11f58ec5 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f58ec7 pop edx */
  EDX = (pop32());
L_11f58ec8:;
  /* 11f58ec8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f58eca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f58ecb dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11f58ece jne 0x11f58eb9 */
  if (!C.zf) goto L_11f58eb9;
  /* 11f58ed0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11f58ed3:;
  /* 11f58ed3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11f58ed6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f58ed8 jl 0x11f58eec */
  if ((C.sf!=C.of)) goto L_11f58eec;
  /* 11f58eda cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f58edd jl 0x11f58eec */
  if ((C.sf!=C.of)) goto L_11f58eec;
L_11f58edf:;
  /* 11f58edf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f58ee0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f58ee3 jne 0x11f58eea */
  if (!C.zf) goto L_11f58eea;
  /* 11f58ee5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11f58ee8 jmp 0x11f58edf */
  goto L_11f58edf;
L_11f58eea:;
  /* 11f58eea inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11f58eec:;
  /* 11f58eec cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f58eef jne 0x11f58ef6 */
  if (!C.zf) goto L_11f58ef6;
  /* 11f58ef1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11f58ef4 jmp 0x11f58f08 */
  goto L_11f58f08;
L_11f58ef6:;
  /* 11f58ef6 push edi */
  push32((uint32_t)(EDI));
  /* 11f58ef7 call 0x11f58630 */
  push32(0x11f58efcu); f_11f58630();
  /* 11f58efc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f58efd push eax */
  push32((uint32_t)(EAX));
  /* 11f58efe push edi */
  push32((uint32_t)(EDI));
  /* 11f58eff push esi */
  push32((uint32_t)(ESI));
  /* 11f58f00 call 0x11f57df0 */
  push32(0x11f58f05u); f_11f57df0();
  /* 11f58f05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f58f08:;
  /* 11f58f08 pop edi */
  EDI = (pop32());
  /* 11f58f09 pop esi */
  ESI = (pop32());
  /* 11f58f0a pop ebx */
  EBX = (pop32());
  /* 11f58f0b pop ebp */
  EBP = (pop32());
  /* 11f58f0c ret  */
  ESPCHK(0x11f58e96u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f0d @ 0x11f58f0d (92 bytes, 41 insns) */
void f_11f58f0d(void) {
  FTRACE(0x11f58f0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58f0d push ebp */
  push32((uint32_t)(EBP));
  /* 11f58f0e mov ebp, esp */
  EBP = (ESP);
  /* 11f58f10 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58f13 push esi */
  push32((uint32_t)(ESI));
  /* 11f58f14 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f58f17 push edi */
  push32((uint32_t)(EDI));
  /* 11f58f18 push eax */
  push32((uint32_t)(EAX));
  /* 11f58f19 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f58f1c push eax */
  push32((uint32_t)(EAX));
  /* 11f58f1d call 0x11f58f69 */
  push32(0x11f58f22u); f_11f58f69();
  /* 11f58f22 pop ecx */
  ECX = (pop32());
  /* 11f58f23 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11f58f26 pop ecx */
  ECX = (pop32());
  /* 11f58f27 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 11f58f2a push eax */
  push32((uint32_t)(EAX));
  /* 11f58f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f58f2d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f58f2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f58f32 mov edi, esp */
  EDI = (ESP);
  /* 11f58f34 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f58f35 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f58f36 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 11f58f38 call 0x11f5ab62 */
  push32(0x11f58f3du); f_11f5ab62();
  /* 11f58f3d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f58f40 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f58f43 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f58f46 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11f58f4a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f58f4c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11f58f50 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11f58f53 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11f58f56 push eax */
  push32((uint32_t)(EAX));
  /* 11f58f57 push edi */
  push32((uint32_t)(EDI));
  /* 11f58f58 call 0x11f59020 */
  push32(0x11f58f5du); f_11f59020();
  /* 11f58f5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58f60 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11f58f63 mov eax, esi */
  EAX = (ESI);
  /* 11f58f65 pop edi */
  EDI = (pop32());
  /* 11f58f66 pop esi */
  ESI = (pop32());
  /* 11f58f67 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f58f68 ret  */
  ESPCHK(0x11f58f0du, _esp0);
  ESP += 4; return;
}

/* FUN_10008f69 @ 0x11f58f69 (182 bytes, 70 insns) */
void f_11f58f69(void) {
  FTRACE(0x11f58f69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f58f69 push ebp */
  push32((uint32_t)(EBP));
  /* 11f58f6a mov ebp, esp */
  EBP = (ESP);
  /* 11f58f6c push ecx */
  push32((uint32_t)(ECX));
  /* 11f58f6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f58f70 push ebx */
  push32((uint32_t)(EBX));
  /* 11f58f71 push esi */
  push32((uint32_t)(ESI));
  /* 11f58f72 push edi */
  push32((uint32_t)(EDI));
  /* 11f58f73 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11f58f77 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 11f58f7c mov ecx, eax */
  ECX = (EAX);
  /* 11f58f7e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f58f83 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f58f86 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f58f88 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f58f8b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f58f8e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11f58f90 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11f58f93 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f58f98 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f58f9d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f58f9f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11f58fa2 je 0x11f58fb7 */
  if (C.zf) goto L_11f58fb7;
  /* 11f58fa4 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58fa6 je 0x11f58fb0 */
  if (C.zf) goto L_11f58fb0;
  /* 11f58fa8 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11f58fae jmp 0x11f58fd8 */
  goto L_11f58fd8;
L_11f58fb0:;
  /* 11f58fb0 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 11f58fb5 jmp 0x11f58fd8 */
  goto L_11f58fd8;
L_11f58fb7:;
  /* 11f58fb7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f58fb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58fbb jne 0x11f58fcf */
  if (!C.zf) goto L_11f58fcf;
  /* 11f58fbd cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f58fbf jne 0x11f58fcf */
  if (!C.zf) goto L_11f58fcf;
  /* 11f58fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58fc4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11f58fc7 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11f58fc9 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11f58fcd jmp 0x11f5901a */
  goto L_11f5901a;
L_11f58fcf:;
  /* 11f58fcf lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11f58fd5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11f58fd8:;
  /* 11f58fd8 mov ecx, edx */
  ECX = (EDX);
  /* 11f58fda shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11f58fdd shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11f58fe0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f58fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f58fe5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11f58fe8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11f58feb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f58fee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f58ff0:;
  /* 11f58ff0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11f58ff2 jne 0x11f59011 */
  if (!C.zf) goto L_11f59011;
  /* 11f58ff4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f58ff6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f58ff8 mov ebx, edx */
  EBX = (EDX);
  /* 11f58ffa shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11f58ffd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11f58fff lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11f59002 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f59004 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11f59007 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5900d mov ecx, ebx */
  ECX = (EBX);
  /* 11f5900f jmp 0x11f58ff0 */
  goto L_11f58ff0;
L_11f59011:;
  /* 11f59011 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f59014 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f59016 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11f5901a:;
  /* 11f5901a pop edi */
  EDI = (pop32());
  /* 11f5901b pop esi */
  ESI = (pop32());
  /* 11f5901c pop ebx */
  EBX = (pop32());
  /* 11f5901d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5901e ret  */
  ESPCHK(0x11f58f69u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x11f59020 (7 bytes, 3 insns) */
void f_11f59020(void) {
  FTRACE(0x11f59020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59020 push edi */
  push32((uint32_t)(EDI));
  /* 11f59021 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f59025 jmp 0x11f59091 */
  jmp_ind(0x11f59091u); return;
}

/* FUN_10009030 @ 0x11f59030 (224 bytes, 84 insns) */
void f_11f59030(void) {
  FTRACE(0x11f59030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59030 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f59034 push edi */
  push32((uint32_t)(EDI));
  /* 11f59035 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f5903b je 0x11f5904c */
  if (C.zf) goto L_11f5904c;
L_11f5903d:;
  /* 11f5903d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f5903f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f59040 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59042 je 0x11f5907f */
  if (C.zf) goto L_11f5907f;
  /* 11f59044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f5904a jne 0x11f5903d */
  if (!C.zf) goto L_11f5903d;
L_11f5904c:;
  /* 11f5904c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f5904e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f59053 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59055 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f59058 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5905a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5905d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f59062 je 0x11f5904c */
  if (C.zf) goto L_11f5904c;
  /* 11f59064 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f59067 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59069 je 0x11f5908e */
  if (C.zf) goto L_11f5908e;
  /* 11f5906b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f5906d je 0x11f59089 */
  if (C.zf) goto L_11f59089;
  /* 11f5906f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f59074 je 0x11f59084 */
  if (C.zf) goto L_11f59084;
  /* 11f59076 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f5907b je 0x11f5907f */
  if (C.zf) goto L_11f5907f;
  /* 11f5907d jmp 0x11f5904c */
  goto L_11f5904c;
L_11f5907f:;
  /* 11f5907f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11f59082 jmp 0x11f59091 */
  goto L_11f59091;
L_11f59084:;
  /* 11f59084 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11f59087 jmp 0x11f59091 */
  goto L_11f59091;
L_11f59089:;
  /* 11f59089 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11f5908c jmp 0x11f59091 */
  goto L_11f59091;
L_11f5908e:;
  /* 11f5908e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11f59091:;
  /* 11f59091 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f59095 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f5909b je 0x11f590b6 */
  if (C.zf) goto L_11f590b6;
L_11f5909d:;
  /* 11f5909d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f5909f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f590a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f590a2 je 0x11f59108 */
  if (C.zf) goto L_11f59108;
  /* 11f590a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f590a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f590a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f590ad jne 0x11f5909d */
  if (!C.zf) goto L_11f5909d;
  /* 11f590af jmp 0x11f590b6 */
  goto L_11f590b6;
L_11f590b1:;
  /* 11f590b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f590b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f590b6:;
  /* 11f590b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f590bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f590bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f590bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f590c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f590c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f590c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f590c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f590ce je 0x11f590b1 */
  if (C.zf) goto L_11f590b1;
  /* 11f590d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f590d2 je 0x11f59108 */
  if (C.zf) goto L_11f59108;
  /* 11f590d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f590d6 je 0x11f590ff */
  if (C.zf) goto L_11f590ff;
  /* 11f590d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f590de je 0x11f590f2 */
  if (C.zf) goto L_11f590f2;
  /* 11f590e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f590e6 je 0x11f590ea */
  if (C.zf) goto L_11f590ea;
  /* 11f590e8 jmp 0x11f590b1 */
  goto L_11f590b1;
L_11f590ea:;
  /* 11f590ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f590ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f590f0 pop edi */
  EDI = (pop32());
  /* 11f590f1 ret  */
  ESPCHK(0x11f59030u, _esp0);
  ESP += 4; return;
L_11f590f2:;
  /* 11f590f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f590f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f590f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11f590fd pop edi */
  EDI = (pop32());
  /* 11f590fe ret  */
  ESPCHK(0x11f59030u, _esp0);
  ESP += 4; return;
L_11f590ff:;
  /* 11f590ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f59102 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f59106 pop edi */
  EDI = (pop32());
  /* 11f59107 ret  */
  ESPCHK(0x11f59030u, _esp0);
  ESP += 4; return;
L_11f59108:;
  /* 11f59108 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f5910a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5910e pop edi */
  EDI = (pop32());
  /* 11f5910f ret  */
  ESPCHK(0x11f59030u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11f59110 (88 bytes, 40 insns) */
void f_11f59110(void) {
  FTRACE(0x11f59110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59110 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f59114 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f59118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f5911a je 0x11f59163 */
  if (C.zf) goto L_11f59163;
  /* 11f5911c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5911e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f59122 push edi */
  push32((uint32_t)(EDI));
  /* 11f59123 mov edi, ecx */
  EDI = (ECX);
  /* 11f59125 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59128 jb 0x11f59157 */
  if (C.cf) goto L_11f59157;
  /* 11f5912a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5912c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f5912f je 0x11f59139 */
  if (C.zf) goto L_11f59139;
  /* 11f59131 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f59133:;
  /* 11f59133 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59135 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59136 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59137 jne 0x11f59133 */
  if (!C.zf) goto L_11f59133;
L_11f59139:;
  /* 11f59139 mov ecx, eax */
  ECX = (EAX);
  /* 11f5913b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f5913e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59140 mov ecx, eax */
  ECX = (EAX);
  /* 11f59142 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f59145 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59147 mov ecx, edx */
  ECX = (EDX);
  /* 11f59149 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f5914c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5914f je 0x11f59157 */
  if (C.zf) goto L_11f59157;
  /* 11f59151 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f59153 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f59155 je 0x11f5915d */
  if (C.zf) goto L_11f5915d;
L_11f59157:;
  /* 11f59157 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59159 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5915a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f5915b jne 0x11f59157 */
  if (!C.zf) goto L_11f59157;
L_11f5915d:;
  /* 11f5915d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f59161 pop edi */
  EDI = (pop32());
  /* 11f59162 ret  */
  ESPCHK(0x11f59110u, _esp0);
  ESP += 4; return;
L_11f59163:;
  /* 11f59163 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f59167 ret  */
  ESPCHK(0x11f59110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009171 @ 0x11f59171 (429 bytes, 143 insns) */
void f_11f59171(void) {
  FTRACE(0x11f59171u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59171 push ebp */
  push32((uint32_t)(EBP));
  /* 11f59172 mov ebp, esp */
  EBP = (ESP);
  /* 11f59174 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59177 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59178 push esi */
  push32((uint32_t)(ESI));
  /* 11f59179 push edi */
  push32((uint32_t)(EDI));
  /* 11f5917a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f5917c call 0x11f5637c */
  push32(0x11f59181u); f_11f5637c();
  /* 11f59181 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f59184 call 0x11f5931e */
  push32(0x11f59189u); f_11f5931e();
  /* 11f59189 mov ebx, eax */
  EBX = (EAX);
  /* 11f5918b pop ecx */
  ECX = (pop32());
  /* 11f5918c cmp ebx, dword ptr [0x11f62eac] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f62eac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59192 pop ecx */
  ECX = (pop32());
  /* 11f59193 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f59196 jne 0x11f5919f */
  if (!C.zf) goto L_11f5919f;
L_11f59198:;
  /* 11f59198 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f5919a jmp 0x11f5930f */
  goto L_11f5930f;
L_11f5919f:;
  /* 11f5919f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f591a1 je 0x11f592fd */
  if (C.zf) goto L_11f592fd;
  /* 11f591a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f591a9 mov eax, 0x11f620a8 */
  EAX = (0x11f620a8u);
L_11f591ae:;
  /* 11f591ae cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f591b0 je 0x11f59226 */
  if (C.zf) goto L_11f59226;
  /* 11f591b2 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f591b5 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f591b6 cmp eax, 0x11f62198 */
  { uint32_t _a=(EAX),_b=(0x11f62198u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f591bb jl 0x11f591ae */
  if ((C.sf!=C.of)) goto L_11f591ae;
  /* 11f591bd lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f591c0 push eax */
  push32((uint32_t)(EAX));
  /* 11f591c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f591c2 call dword ptr [0x11f5c038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c038))), 0x11f591c8u);
  /* 11f591c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f591ca pop esi */
  ESI = (pop32());
  /* 11f591cb cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f591cd jne 0x11f592f4 */
  if (!C.zf) goto L_11f592f4;
  /* 11f591d3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f591d5 and dword ptr [0x11f630c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f630c4)))&(0x0u); w32((uint32_t)(0x11f630c4), (_r)); fl_logic(_r,32); }
  /* 11f591dc pop ecx */
  ECX = (pop32());
  /* 11f591dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f591df mov edi, 0x11f62fc0 */
  EDI = (0x11f62fc0u);
  /* 11f591e4 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f591e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f591e9 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f591ea mov dword ptr [0x11f62eac], ebx */
  w32((uint32_t)(0x11f62eac), (EBX));
  /* 11f591f0 jbe 0x11f592e1 */
  if ((C.cf||C.zf)) goto L_11f592e1;
  /* 11f591f6 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f591fa je 0x11f592bc */
  if (C.zf) goto L_11f592bc;
  /* 11f59200 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11f59203:;
  /* 11f59203 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f59205 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f59207 je 0x11f592bc */
  if (C.zf) goto L_11f592bc;
  /* 11f5920d movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11f59211 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11f59214:;
  /* 11f59214 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59216 ja 0x11f592b0 */
  if ((!C.cf&&!C.zf)) goto L_11f592b0;
  /* 11f5921c or byte ptr [eax + 0x11f62fc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(0x4u); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f59223 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f59224 jmp 0x11f59214 */
  goto L_11f59214;
L_11f59226:;
  /* 11f59226 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5922a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f5922c pop ecx */
  ECX = (pop32());
  /* 11f5922d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5922f mov edi, 0x11f62fc0 */
  EDI = (0x11f62fc0u);
  /* 11f59234 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11f59237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f59239 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f5923c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f5923d lea ebx, [esi + 0x11f620b8] */
  EBX = ((uint32_t)(ESI + 0x11f620b8));
L_11f59243:;
  /* 11f59243 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59246 mov ecx, ebx */
  ECX = (EBX);
  /* 11f59248 je 0x11f59276 */
  if (C.zf) goto L_11f59276;
L_11f5924a:;
  /* 11f5924a mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f5924d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f5924f je 0x11f59276 */
  if (C.zf) goto L_11f59276;
  /* 11f59251 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11f59254 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11f59257 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59259 ja 0x11f5926f */
  if ((!C.cf&&!C.zf)) goto L_11f5926f;
  /* 11f5925b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5925e mov dl, byte ptr [edx + 0x11f620a0] */
  DL = (r8((uint32_t)(EDX + 0x11f620a0)));
L_11f59264:;
  /* 11f59264 or byte ptr [eax + 0x11f62fc1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(DL); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f5926a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5926b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5926d jbe 0x11f59264 */
  if ((C.cf||C.zf)) goto L_11f59264;
L_11f5926f:;
  /* 11f5926f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f59270 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f59271 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59274 jne 0x11f5924a */
  if (!C.zf) goto L_11f5924a;
L_11f59276:;
  /* 11f59276 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f59279 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5927c cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59280 jb 0x11f59243 */
  if (C.cf) goto L_11f59243;
  /* 11f59282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59285 mov dword ptr [0x11f62ebc], 1 */
  w32((uint32_t)(0x11f62ebc), (0x1u));
  /* 11f5928f push eax */
  push32((uint32_t)(EAX));
  /* 11f59290 mov dword ptr [0x11f62eac], eax */
  w32((uint32_t)(0x11f62eac), (EAX));
  /* 11f59295 call 0x11f59368 */
  push32(0x11f5929au); f_11f59368();
  /* 11f5929a lea esi, [esi + 0x11f620ac] */
  ESI = ((uint32_t)(ESI + 0x11f620ac));
  /* 11f592a0 mov edi, 0x11f62eb0 */
  EDI = (0x11f62eb0u);
  /* 11f592a5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f592a6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f592a7 pop ecx */
  ECX = (pop32());
  /* 11f592a8 mov dword ptr [0x11f630c4], eax */
  w32((uint32_t)(0x11f630c4), (EAX));
  /* 11f592ad movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f592ae jmp 0x11f59302 */
  goto L_11f59302;
L_11f592b0:;
  /* 11f592b0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f592b1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f592b2 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f592b6 jne 0x11f59203 */
  if (!C.zf) goto L_11f59203;
L_11f592bc:;
  /* 11f592bc mov eax, esi */
  EAX = (ESI);
L_11f592be:;
  /* 11f592be or byte ptr [eax + 0x11f62fc1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(0x8u); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f592c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f592c6 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f592cb jb 0x11f592be */
  if (C.cf) goto L_11f592be;
  /* 11f592cd push ebx */
  push32((uint32_t)(EBX));
  /* 11f592ce call 0x11f59368 */
  push32(0x11f592d3u); f_11f59368();
  /* 11f592d3 pop ecx */
  ECX = (pop32());
  /* 11f592d4 mov dword ptr [0x11f630c4], eax */
  w32((uint32_t)(0x11f630c4), (EAX));
  /* 11f592d9 mov dword ptr [0x11f62ebc], esi */
  w32((uint32_t)(0x11f62ebc), (ESI));
  /* 11f592df jmp 0x11f592e8 */
  goto L_11f592e8;
L_11f592e1:;
  /* 11f592e1 and dword ptr [0x11f62ebc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f62ebc)))&(0x0u); w32((uint32_t)(0x11f62ebc), (_r)); fl_logic(_r,32); }
L_11f592e8:;
  /* 11f592e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f592ea mov edi, 0x11f62eb0 */
  EDI = (0x11f62eb0u);
  /* 11f592ef stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f592f0 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f592f1 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f592f2 jmp 0x11f59302 */
  goto L_11f59302;
L_11f592f4:;
  /* 11f592f4 cmp dword ptr [0x11f62dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f592fb je 0x11f5930c */
  if (C.zf) goto L_11f5930c;
L_11f592fd:;
  /* 11f592fd call 0x11f5939b */
  push32(0x11f59302u); f_11f5939b();
L_11f59302:;
  /* 11f59302 call 0x11f593c4 */
  push32(0x11f59307u); f_11f593c4();
  /* 11f59307 jmp 0x11f59198 */
  goto L_11f59198;
L_11f5930c:;
  /* 11f5930c or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11f5930f:;
  /* 11f5930f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f59311 call 0x11f563dd */
  push32(0x11f59316u); f_11f563dd();
  /* 11f59316 pop ecx */
  ECX = (pop32());
  /* 11f59317 mov eax, esi */
  EAX = (ESI);
  /* 11f59319 pop edi */
  EDI = (pop32());
  /* 11f5931a pop esi */
  ESI = (pop32());
  /* 11f5931b pop ebx */
  EBX = (pop32());
  /* 11f5931c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5931d ret  */
  ESPCHK(0x11f59171u, _esp0);
  ESP += 4; return;
}

/* FUN_1000931e @ 0x11f5931e (74 bytes, 15 insns) */
void f_11f5931e(void) {
  FTRACE(0x11f5931eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5931e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f59322 and dword ptr [0x11f62dc8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f62dc8)))&(0x0u); w32((uint32_t)(0x11f62dc8), (_r)); fl_logic(_r,32); }
  /* 11f59329 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5932c jne 0x11f5933e */
  if (!C.zf) goto L_11f5933e;
  /* 11f5932e mov dword ptr [0x11f62dc8], 1 */
  w32((uint32_t)(0x11f62dc8), (0x1u));
  /* 11f59338 jmp dword ptr [0x11f5c030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f5c030)))); return;
L_11f5933e:;
  /* 11f5933e cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59341 jne 0x11f59353 */
  if (!C.zf) goto L_11f59353;
  /* 11f59343 mov dword ptr [0x11f62dc8], 1 */
  w32((uint32_t)(0x11f62dc8), (0x1u));
  /* 11f5934d jmp dword ptr [0x11f5c034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f5c034)))); return;
L_11f59353:;
  /* 11f59353 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59356 jne 0x11f59367 */
  if (!C.zf) goto L_11f59367;
  /* 11f59358 mov eax, dword ptr [0x11f62df0] */
  EAX = (r32((uint32_t)(0x11f62df0)));
  /* 11f5935d mov dword ptr [0x11f62dc8], 1 */
  w32((uint32_t)(0x11f62dc8), (0x1u));
L_11f59367:;
  /* 11f59367 ret  */
  ESPCHK(0x11f5931eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009368 @ 0x11f59368 (51 bytes, 19 insns) */
void f_11f59368(void) {
  FTRACE(0x11f59368u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59368 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5936c sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59371 je 0x11f59395 */
  if (C.zf) goto L_11f59395;
  /* 11f59373 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59376 je 0x11f5938f */
  if (C.zf) goto L_11f5938f;
  /* 11f59378 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5937b je 0x11f59389 */
  if (C.zf) goto L_11f59389;
  /* 11f5937d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5937e je 0x11f59383 */
  if (C.zf) goto L_11f59383;
  /* 11f59380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59382 ret  */
  ESPCHK(0x11f59368u, _esp0);
  ESP += 4; return;
L_11f59383:;
  /* 11f59383 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11f59388 ret  */
  ESPCHK(0x11f59368u, _esp0);
  ESP += 4; return;
L_11f59389:;
  /* 11f59389 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11f5938e ret  */
  ESPCHK(0x11f59368u, _esp0);
  ESP += 4; return;
L_11f5938f:;
  /* 11f5938f mov eax, 0x804 */
  EAX = (0x804u);
  /* 11f59394 ret  */
  ESPCHK(0x11f59368u, _esp0);
  ESP += 4; return;
L_11f59395:;
  /* 11f59395 mov eax, 0x411 */
  EAX = (0x411u);
  /* 11f5939a ret  */
  ESPCHK(0x11f59368u, _esp0);
  ESP += 4; return;
}

/* FUN_1000939b @ 0x11f5939b (41 bytes, 17 insns) */
void f_11f5939b(void) {
  FTRACE(0x11f5939bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5939b push edi */
  push32((uint32_t)(EDI));
  /* 11f5939c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f5939e pop ecx */
  ECX = (pop32());
  /* 11f5939f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f593a1 mov edi, 0x11f62fc0 */
  EDI = (0x11f62fc0u);
  /* 11f593a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f593a8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f593a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f593ab mov edi, 0x11f62eb0 */
  EDI = (0x11f62eb0u);
  /* 11f593b0 mov dword ptr [0x11f62eac], eax */
  w32((uint32_t)(0x11f62eac), (EAX));
  /* 11f593b5 mov dword ptr [0x11f62ebc], eax */
  w32((uint32_t)(0x11f62ebc), (EAX));
  /* 11f593ba mov dword ptr [0x11f630c4], eax */
  w32((uint32_t)(0x11f630c4), (EAX));
  /* 11f593bf stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f593c0 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f593c1 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f593c2 pop edi */
  EDI = (pop32());
  /* 11f593c3 ret  */
  ESPCHK(0x11f5939bu, _esp0);
  ESP += 4; return;
}

/* FUN_100093c4 @ 0x11f593c4 (389 bytes, 124 insns) */
void f_11f593c4(void) {
  FTRACE(0x11f593c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f593c4 push ebp */
  push32((uint32_t)(EBP));
  /* 11f593c5 mov ebp, esp */
  EBP = (ESP);
  /* 11f593c7 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f593cd lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f593d0 push esi */
  push32((uint32_t)(ESI));
  /* 11f593d1 push eax */
  push32((uint32_t)(EAX));
  /* 11f593d2 push dword ptr [0x11f62eac] */
  push32((uint32_t)(r32((uint32_t)(0x11f62eac))));
  /* 11f593d8 call dword ptr [0x11f5c038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c038))), 0x11f593deu);
  /* 11f593de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f593e1 jne 0x11f594fd */
  if (!C.zf) goto L_11f594fd;
  /* 11f593e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f593e9 mov esi, 0x100 */
  ESI = (0x100u);
L_11f593ee:;
  /* 11f593ee mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11f593f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f593f6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f593f8 jb 0x11f593ee */
  if (C.cf) goto L_11f593ee;
  /* 11f593fa mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11f593fd mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11f59404 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59406 je 0x11f5943f */
  if (C.zf) goto L_11f5943f;
  /* 11f59408 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59409 push edi */
  push32((uint32_t)(EDI));
  /* 11f5940a lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11f5940d:;
  /* 11f5940d movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11f59410 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11f59413 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59415 ja 0x11f59434 */
  if ((!C.cf&&!C.zf)) goto L_11f59434;
  /* 11f59417 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59419 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11f59420 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f59421 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11f59426 mov ebx, ecx */
  EBX = (ECX);
  /* 11f59428 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5942b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f5942d mov ecx, ebx */
  ECX = (EBX);
  /* 11f5942f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f59432 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11f59434:;
  /* 11f59434 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f59435 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f59436 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11f59439 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5943b jne 0x11f5940d */
  if (!C.zf) goto L_11f5940d;
  /* 11f5943d pop edi */
  EDI = (pop32());
  /* 11f5943e pop ebx */
  EBX = (pop32());
L_11f5943f:;
  /* 11f5943f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f59441 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11f59447 push dword ptr [0x11f630c4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630c4))));
  /* 11f5944d push dword ptr [0x11f62eac] */
  push32((uint32_t)(r32((uint32_t)(0x11f62eac))));
  /* 11f59453 push eax */
  push32((uint32_t)(EAX));
  /* 11f59454 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f5945a push esi */
  push32((uint32_t)(ESI));
  /* 11f5945b push eax */
  push32((uint32_t)(EAX));
  /* 11f5945c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5945e call 0x11f5a158 */
  push32(0x11f59463u); f_11f5a158();
  /* 11f59463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f59465 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11f5946b push dword ptr [0x11f62eac] */
  push32((uint32_t)(r32((uint32_t)(0x11f62eac))));
  /* 11f59471 push esi */
  push32((uint32_t)(ESI));
  /* 11f59472 push eax */
  push32((uint32_t)(EAX));
  /* 11f59473 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f59479 push esi */
  push32((uint32_t)(ESI));
  /* 11f5947a push eax */
  push32((uint32_t)(EAX));
  /* 11f5947b push esi */
  push32((uint32_t)(ESI));
  /* 11f5947c push dword ptr [0x11f630c4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630c4))));
  /* 11f59482 call 0x11f5a2a1 */
  push32(0x11f59487u); f_11f5a2a1();
  /* 11f59487 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f59489 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11f5948f push dword ptr [0x11f62eac] */
  push32((uint32_t)(r32((uint32_t)(0x11f62eac))));
  /* 11f59495 push esi */
  push32((uint32_t)(ESI));
  /* 11f59496 push eax */
  push32((uint32_t)(EAX));
  /* 11f59497 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f5949d push esi */
  push32((uint32_t)(ESI));
  /* 11f5949e push eax */
  push32((uint32_t)(EAX));
  /* 11f5949f push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f594a4 push dword ptr [0x11f630c4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630c4))));
  /* 11f594aa call 0x11f5a2a1 */
  push32(0x11f594afu); f_11f5a2a1();
  /* 11f594af add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f594b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f594b4 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11f594ba:;
  /* 11f594ba mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11f594bd test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11f594c0 je 0x11f594d8 */
  if (C.zf) goto L_11f594d8;
  /* 11f594c2 or byte ptr [eax + 0x11f62fc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(0x10u); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f594c9 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11f594d0:;
  /* 11f594d0 mov byte ptr [eax + 0x11f62ec0], dl */
  w8((uint32_t)(EAX + 0x11f62ec0), (DL));
  /* 11f594d6 jmp 0x11f594f4 */
  goto L_11f594f4;
L_11f594d8:;
  /* 11f594d8 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11f594db je 0x11f594ed */
  if (C.zf) goto L_11f594ed;
  /* 11f594dd or byte ptr [eax + 0x11f62fc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(0x20u); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f594e4 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11f594eb jmp 0x11f594d0 */
  goto L_11f594d0;
L_11f594ed:;
  /* 11f594ed and byte ptr [eax + 0x11f62ec0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62ec0)))&(0x0u); w8((uint32_t)(EAX + 0x11f62ec0), (_r)); fl_logic(_r,8); }
L_11f594f4:;
  /* 11f594f4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f594f5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f594f6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f594f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f594f9 jb 0x11f594ba */
  if (C.cf) goto L_11f594ba;
  /* 11f594fb jmp 0x11f59546 */
  goto L_11f59546;
L_11f594fd:;
  /* 11f594fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f594ff mov esi, 0x100 */
  ESI = (0x100u);
L_11f59504:;
  /* 11f59504 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59507 jb 0x11f59522 */
  if (C.cf) goto L_11f59522;
  /* 11f59509 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5950c ja 0x11f59522 */
  if ((!C.cf&&!C.zf)) goto L_11f59522;
  /* 11f5950e or byte ptr [eax + 0x11f62fc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(0x10u); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f59515 mov cl, al */
  CL = (AL);
  /* 11f59517 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11f5951a:;
  /* 11f5951a mov byte ptr [eax + 0x11f62ec0], cl */
  w8((uint32_t)(EAX + 0x11f62ec0), (CL));
  /* 11f59520 jmp 0x11f59541 */
  goto L_11f59541;
L_11f59522:;
  /* 11f59522 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59525 jb 0x11f5953a */
  if (C.cf) goto L_11f5953a;
  /* 11f59527 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5952a ja 0x11f5953a */
  if ((!C.cf&&!C.zf)) goto L_11f5953a;
  /* 11f5952c or byte ptr [eax + 0x11f62fc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))|(0x20u); w8((uint32_t)(EAX + 0x11f62fc1), (_r)); fl_logic(_r,8); }
  /* 11f59533 mov cl, al */
  CL = (AL);
  /* 11f59535 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f59538 jmp 0x11f5951a */
  goto L_11f5951a;
L_11f5953a:;
  /* 11f5953a and byte ptr [eax + 0x11f62ec0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62ec0)))&(0x0u); w8((uint32_t)(EAX + 0x11f62ec0), (_r)); fl_logic(_r,8); }
L_11f59541:;
  /* 11f59541 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f59542 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59544 jb 0x11f59504 */
  if (C.cf) goto L_11f59504;
L_11f59546:;
  /* 11f59546 pop esi */
  ESI = (pop32());
  /* 11f59547 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f59548 ret  */
  ESPCHK(0x11f593c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10009549 @ 0x11f59549 (28 bytes, 7 insns) */
void f_11f59549(void) {
  FTRACE(0x11f59549u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59549 cmp dword ptr [0x11f63208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f63208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59550 jne 0x11f59564 */
  if (!C.zf) goto L_11f59564;
  /* 11f59552 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11f59554 call 0x11f59171 */
  push32(0x11f59559u); f_11f59171();
  /* 11f59559 pop ecx */
  ECX = (pop32());
  /* 11f5955a mov dword ptr [0x11f63208], 1 */
  w32((uint32_t)(0x11f63208), (0x1u));
L_11f59564:;
  /* 11f59564 ret  */
  ESPCHK(0x11f59549u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x11f59570 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11f59570(void) {
  FTRACE(0x11f59570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59570 push ebp */
  push32((uint32_t)(EBP));
  /* 11f59571 mov ebp, esp */
  EBP = (ESP);
  /* 11f59573 push edi */
  push32((uint32_t)(EDI));
  /* 11f59574 push esi */
  push32((uint32_t)(ESI));
  /* 11f59575 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f59578 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5957b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5957e mov eax, ecx */
  EAX = (ECX);
  /* 11f59580 mov edx, ecx */
  EDX = (ECX);
  /* 11f59582 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59584 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59586 jbe 0x11f59590 */
  if ((C.cf||C.zf)) goto L_11f59590;
  /* 11f59588 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5958a jb 0x11f59708 */
  if (C.cf) goto L_11f59708;
L_11f59590:;
  /* 11f59590 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f59596 jne 0x11f595ac */
  if (!C.zf) goto L_11f595ac;
  /* 11f59598 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5959b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f5959e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f595a1 jb 0x11f595cc */
  if (C.cf) goto L_11f595cc;
  /* 11f595a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f595a5 jmp dword ptr [edx*4 + 0x11f596b8] */
  switch (EDX) {
    case 0: goto L_11f596c8;
    case 1: goto L_11f596d0;
    case 2: goto L_11f596dc;
    case 3: goto L_11f596f0;
    default: x86_unimpl("switch@0x11f595a5 out of table"); return;
  }
L_11f595ac:;
  /* 11f595ac mov eax, edi */
  EAX = (EDI);
  /* 11f595ae mov edx, 3 */
  EDX = (0x3u);
  /* 11f595b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f595b6 jb 0x11f595c4 */
  if (C.cf) goto L_11f595c4;
  /* 11f595b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f595bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f595bd jmp dword ptr [eax*4 + 0x11f595d0] */
  switch (EAX) {
    case 1: goto L_11f595e0;
    case 2: goto L_11f5960c;
    case 3: goto L_11f59630;
    default: x86_unimpl("switch@0x11f595bd out of table"); return;
  }
L_11f595c4:;
  /* 11f595c4 jmp dword ptr [ecx*4 + 0x11f596c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f596c8)))); return;
  /* 11f595cb nop  */
  /* nop */
L_11f595cc:;
  /* 11f595cc jmp dword ptr [ecx*4 + 0x11f5964c] */
  switch (ECX) {
    case 0: goto L_11f596af;
    case 1: goto L_11f5969c;
    case 2: goto L_11f59694;
    case 3: goto L_11f5968c;
    case 4: goto L_11f59684;
    case 5: goto L_11f5967c;
    case 6: goto L_11f59674;
    case 7: goto L_11f5966c;
    default: x86_unimpl("switch@0x11f595cc out of table"); return;
  }
  /* 11f595d3 nop  */
  /* nop */
L_11f595e0:;
  /* 11f595e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f595e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f595e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f595e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f595e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f595ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f595ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f595f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f595f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f595f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f595fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f595fe jb 0x11f595cc */
  if (C.cf) goto L_11f595cc;
  /* 11f59600 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f59602 jmp dword ptr [edx*4 + 0x11f596b8] */
  switch (EDX) {
    case 0: goto L_11f596c8;
    case 1: goto L_11f596d0;
    case 2: goto L_11f596dc;
    case 3: goto L_11f596f0;
    default: x86_unimpl("switch@0x11f59602 out of table"); return;
  }
  /* 11f59609 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f5960c:;
  /* 11f5960c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5960e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59610 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59612 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f59615 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f59618 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f5961b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5961e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59621 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59624 jb 0x11f595cc */
  if (C.cf) goto L_11f595cc;
  /* 11f59626 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f59628 jmp dword ptr [edx*4 + 0x11f596b8] */
  switch (EDX) {
    case 0: goto L_11f596c8;
    case 1: goto L_11f596d0;
    case 2: goto L_11f596dc;
    case 3: goto L_11f596f0;
    default: x86_unimpl("switch@0x11f59628 out of table"); return;
  }
  /* 11f5962f nop  */
  /* nop */
L_11f59630:;
  /* 11f59630 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f59632 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59634 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59636 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f59637 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5963a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5963b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5963e jb 0x11f595cc */
  if (C.cf) goto L_11f595cc;
  /* 11f59640 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f59642 jmp dword ptr [edx*4 + 0x11f596b8] */
  switch (EDX) {
    case 0: goto L_11f596c8;
    case 1: goto L_11f596d0;
    case 2: goto L_11f596dc;
    case 3: goto L_11f596f0;
    default: x86_unimpl("switch@0x11f59642 out of table"); return;
  }
  /* 11f59649 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f5966c:;
  /* 11f5966c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f59670 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f59674:;
  /* 11f59674 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f59678 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f5967c:;
  /* 11f5967c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f59680 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f59684:;
  /* 11f59684 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f59688 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f5968c:;
  /* 11f5968c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f59690 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f59694:;
  /* 11f59694 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f59698 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f5969c:;
  /* 11f5969c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f596a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f596a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f596ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f596ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f596af:;
  /* 11f596af jmp dword ptr [edx*4 + 0x11f596b8] */
  switch (EDX) {
    case 0: goto L_11f596c8;
    case 1: goto L_11f596d0;
    case 2: goto L_11f596dc;
    case 3: goto L_11f596f0;
    default: x86_unimpl("switch@0x11f596af out of table"); return;
  }
  /* 11f596b6 mov edi, edi */
  EDI = (EDI);
L_11f596c8:;
  /* 11f596c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f596cb pop esi */
  ESI = (pop32());
  /* 11f596cc pop edi */
  EDI = (pop32());
  /* 11f596cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f596ce ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f596cf nop  */
  /* nop */
L_11f596d0:;
  /* 11f596d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f596d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f596d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f596d7 pop esi */
  ESI = (pop32());
  /* 11f596d8 pop edi */
  EDI = (pop32());
  /* 11f596d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f596da ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f596db nop  */
  /* nop */
L_11f596dc:;
  /* 11f596dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f596de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f596e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f596e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f596e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f596e9 pop esi */
  ESI = (pop32());
  /* 11f596ea pop edi */
  EDI = (pop32());
  /* 11f596eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f596ec ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f596ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f596f0:;
  /* 11f596f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f596f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f596f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f596f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f596fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f596fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f59700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59703 pop esi */
  ESI = (pop32());
  /* 11f59704 pop edi */
  EDI = (pop32());
  /* 11f59705 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f59706 ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f59707 nop  */
  /* nop */
L_11f59708:;
  /* 11f59708 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f5970c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f59710 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f59716 jne 0x11f5973c */
  if (!C.zf) goto L_11f5973c;
  /* 11f59718 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f5971b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f5971e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59721 jb 0x11f59730 */
  if (C.cf) goto L_11f59730;
  /* 11f59723 std  */
  C.df=1;
  /* 11f59724 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f59726 cld  */
  C.df=0;
  /* 11f59727 jmp dword ptr [edx*4 + 0x11f59850] */
  switch (EDX) {
    case 0: goto L_11f59860;
    case 1: goto L_11f59868;
    case 2: goto L_11f59878;
    case 3: goto L_11f5988c;
    default: x86_unimpl("switch@0x11f59727 out of table"); return;
  }
  /* 11f5972e mov edi, edi */
  EDI = (EDI);
L_11f59730:;
  /* 11f59730 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f59732 jmp dword ptr [ecx*4 + 0x11f59800] */
  switch (ECX) {
    case 0: goto L_11f59847;
    default: x86_unimpl("switch@0x11f59732 out of table"); return;
  }
  /* 11f59739 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f5973c:;
  /* 11f5973c mov eax, edi */
  EAX = (EDI);
  /* 11f5973e mov edx, 3 */
  EDX = (0x3u);
  /* 11f59743 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59746 jb 0x11f59754 */
  if (C.cf) goto L_11f59754;
  /* 11f59748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f5974b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5974d jmp dword ptr [eax*4 + 0x11f59758] */
  switch (EAX) {
    case 1: goto L_11f59768;
    case 2: goto L_11f59788;
    case 3: goto L_11f597b0;
    default: x86_unimpl("switch@0x11f5974d out of table"); return;
  }
L_11f59754:;
  /* 11f59754 jmp dword ptr [ecx*4 + 0x11f59850] */
  switch (ECX) {
    case 0: goto L_11f59860;
    case 1: goto L_11f59868;
    case 2: goto L_11f59878;
    case 3: goto L_11f5988c;
    default: x86_unimpl("switch@0x11f59754 out of table"); return;
  }
  /* 11f5975b nop  */
  /* nop */
L_11f59768:;
  /* 11f59768 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5976b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5976d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f59770 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f59771 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f59774 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f59775 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59778 jb 0x11f59730 */
  if (C.cf) goto L_11f59730;
  /* 11f5977a std  */
  C.df=1;
  /* 11f5977b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f5977d cld  */
  C.df=0;
  /* 11f5977e jmp dword ptr [edx*4 + 0x11f59850] */
  switch (EDX) {
    case 0: goto L_11f59860;
    case 1: goto L_11f59868;
    case 2: goto L_11f59878;
    case 3: goto L_11f5988c;
    default: x86_unimpl("switch@0x11f5977e out of table"); return;
  }
  /* 11f59785 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f59788:;
  /* 11f59788 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5978b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5978d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f59790 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f59793 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f59796 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f59799 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5979c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5979f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f597a2 jb 0x11f59730 */
  if (C.cf) goto L_11f59730;
  /* 11f597a4 std  */
  C.df=1;
  /* 11f597a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f597a7 cld  */
  C.df=0;
  /* 11f597a8 jmp dword ptr [edx*4 + 0x11f59850] */
  switch (EDX) {
    case 0: goto L_11f59860;
    case 1: goto L_11f59868;
    case 2: goto L_11f59878;
    case 3: goto L_11f5988c;
    default: x86_unimpl("switch@0x11f597a8 out of table"); return;
  }
  /* 11f597af nop  */
  /* nop */
L_11f597b0:;
  /* 11f597b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f597b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f597b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f597b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f597bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f597be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f597c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f597c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f597c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f597ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f597cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f597d0 jb 0x11f59730 */
  if (C.cf) goto L_11f59730;
  /* 11f597d6 std  */
  C.df=1;
  /* 11f597d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f597d9 cld  */
  C.df=0;
  /* 11f597da jmp dword ptr [edx*4 + 0x11f59850] */
  switch (EDX) {
    case 0: goto L_11f59860;
    case 1: goto L_11f59868;
    case 2: goto L_11f59878;
    case 3: goto L_11f5988c;
    default: x86_unimpl("switch@0x11f597da out of table"); return;
  }
  /* 11f597e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f597e4 add al, 0x98 */
  { uint32_t _a=(AL),_b=(0x98u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f597e6 cmc  */
  x86_unimpl("cmc @ 0x11f597e6");
  /* 11f597e7 adc dword ptr [eax + ebx*4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*4))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f597ea cmc  */
  x86_unimpl("cmc @ 0x11f597ea");
  /* 11f597eb adc dword ptr [eax + ebx*4], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*4))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f597ee cmc  */
  x86_unimpl("cmc @ 0x11f597ee");
  /* 11f597ef adc dword ptr [eax + ebx*4], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*4))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f597f2 cmc  */
  x86_unimpl("cmc @ 0x11f597f2");
  /* 11f597f3 adc dword ptr [eax + ebx*4], esp */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*4))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f597f6 cmc  */
  x86_unimpl("cmc @ 0x11f597f6");
  /* 11f597f7 adc dword ptr [eax + ebx*4], ebp */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*4))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f597fa cmc  */
  x86_unimpl("cmc @ 0x11f597fa");
  /* 11f597fb adc dword ptr [eax + ebx*4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*4))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f597fe cmc  */
  x86_unimpl("cmc @ 0x11f597fe");
  /* 11f59804 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f59808 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f5980c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f59810 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f59814 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f59818 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f5981c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f59820 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f59824 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f59828 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f5982c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f59830 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f59834 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f59838 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f5983c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f59843 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59845 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f59847:;
  /* 11f59847 jmp dword ptr [edx*4 + 0x11f59850] */
  switch (EDX) {
    case 0: goto L_11f59860;
    case 1: goto L_11f59868;
    case 2: goto L_11f59878;
    case 3: goto L_11f5988c;
    default: x86_unimpl("switch@0x11f59847 out of table"); return;
  }
  /* 11f5984e mov edi, edi */
  EDI = (EDI);
L_11f59860:;
  /* 11f59860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59863 pop esi */
  ESI = (pop32());
  /* 11f59864 pop edi */
  EDI = (pop32());
  /* 11f59865 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f59866 ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f59867 nop  */
  /* nop */
L_11f59868:;
  /* 11f59868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5986b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f5986e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59871 pop esi */
  ESI = (pop32());
  /* 11f59872 pop edi */
  EDI = (pop32());
  /* 11f59873 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f59874 ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f59875 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f59878:;
  /* 11f59878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5987b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f5987e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f59881 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f59884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59887 pop esi */
  ESI = (pop32());
  /* 11f59888 pop edi */
  EDI = (pop32());
  /* 11f59889 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5988a ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
  /* 11f5988b nop  */
  /* nop */
L_11f5988c:;
  /* 11f5988c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f5988f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f59892 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f59895 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f59898 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f5989b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f5989e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f598a1 pop esi */
  ESI = (pop32());
  /* 11f598a2 pop edi */
  EDI = (pop32());
  /* 11f598a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f598a4 ret  */
  ESPCHK(0x11f59570u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a5 @ 0x11f598a5 (23 bytes, 7 insns) */
void f_11f598a5(void) {
  FTRACE(0x11f598a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f598a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f598a7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f598ab push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f598af push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f598b3 call 0x11f598bc */
  push32(0x11f598b8u); f_11f598bc();
  /* 11f598b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f598bb ret  */
  ESPCHK(0x11f598a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100098bc @ 0x11f598bc (517 bytes, 195 insns) */
void f_11f598bc(void) {
  FTRACE(0x11f598bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f598bc push ebp */
  push32((uint32_t)(EBP));
  /* 11f598bd mov ebp, esp */
  EBP = (ESP);
  /* 11f598bf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f598c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11f598c3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f598c7 push esi */
  push32((uint32_t)(ESI));
  /* 11f598c8 push edi */
  push32((uint32_t)(EDI));
  /* 11f598c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f598cc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f598ce lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11f598d1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11f598d4:;
  /* 11f598d4 cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f598db jle 0x11f598ec */
  if ((C.zf||C.sf!=C.of)) goto L_11f598ec;
  /* 11f598dd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f598e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f598e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f598e3 call 0x11f588fb */
  push32(0x11f598e8u); f_11f588fb();
  /* 11f598e8 pop ecx */
  ECX = (pop32());
  /* 11f598e9 pop ecx */
  ECX = (pop32());
  /* 11f598ea jmp 0x11f598fb */
  goto L_11f598fb;
L_11f598ec:;
  /* 11f598ec mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f598f2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f598f5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f598f8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11f598fb:;
  /* 11f598fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f598fd je 0x11f59904 */
  if (C.zf) goto L_11f59904;
  /* 11f598ff mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11f59901 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f59902 jmp 0x11f598d4 */
  goto L_11f598d4;
L_11f59904:;
  /* 11f59904 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59907 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11f5990a jne 0x11f59912 */
  if (!C.zf) goto L_11f59912;
  /* 11f5990c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11f59910 jmp 0x11f59917 */
  goto L_11f59917;
L_11f59912:;
  /* 11f59912 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59915 jne 0x11f5991d */
  if (!C.zf) goto L_11f5991d;
L_11f59917:;
  /* 11f59917 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11f59919 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5991a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11f5991d:;
  /* 11f5991d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f59920 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59922 jl 0x11f59ab1 */
  if ((C.sf!=C.of)) goto L_11f59ab1;
  /* 11f59928 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5992b je 0x11f59ab1 */
  if (C.zf) goto L_11f59ab1;
  /* 11f59931 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59934 jg 0x11f59ab1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f59ab1;
  /* 11f5993a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f5993c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5993e pop ecx */
  ECX = (pop32());
  /* 11f5993f jne 0x11f59965 */
  if (!C.zf) goto L_11f59965;
  /* 11f59941 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59944 je 0x11f5994f */
  if (C.zf) goto L_11f5994f;
  /* 11f59946 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11f5994d jmp 0x11f59981 */
  goto L_11f59981;
L_11f5994f:;
  /* 11f5994f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59951 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59953 je 0x11f59962 */
  if (C.zf) goto L_11f59962;
  /* 11f59955 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59957 je 0x11f59962 */
  if (C.zf) goto L_11f59962;
  /* 11f59959 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11f59960 jmp 0x11f59981 */
  goto L_11f59981;
L_11f59962:;
  /* 11f59962 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11f59965:;
  /* 11f59965 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59968 jne 0x11f59981 */
  if (!C.zf) goto L_11f59981;
  /* 11f5996a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5996d jne 0x11f59981 */
  if (!C.zf) goto L_11f59981;
  /* 11f5996f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59971 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59973 je 0x11f59979 */
  if (C.zf) goto L_11f59979;
  /* 11f59975 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59977 jne 0x11f59981 */
  if (!C.zf) goto L_11f59981;
L_11f59979:;
  /* 11f59979 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f5997c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5997d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5997e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11f59981:;
  /* 11f59981 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f59984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f59986 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f59989 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11f5998e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f59991:;
  /* 11f59991 cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59998 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11f5999b jle 0x11f599a9 */
  if ((C.zf||C.sf!=C.of)) goto L_11f599a9;
  /* 11f5999d push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5999f push esi */
  push32((uint32_t)(ESI));
  /* 11f599a0 call 0x11f588fb */
  push32(0x11f599a5u); f_11f588fb();
  /* 11f599a5 pop ecx */
  ECX = (pop32());
  /* 11f599a6 pop ecx */
  ECX = (pop32());
  /* 11f599a7 jmp 0x11f599b4 */
  goto L_11f599b4;
L_11f599a9:;
  /* 11f599a9 mov eax, dword ptr [0x11f61e50] */
  EAX = (r32((uint32_t)(0x11f61e50)));
  /* 11f599ae mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11f599b1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11f599b4:;
  /* 11f599b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f599b6 je 0x11f599c0 */
  if (C.zf) goto L_11f599c0;
  /* 11f599b8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11f599bb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f599be jmp 0x11f599f2 */
  goto L_11f599f2;
L_11f599c0:;
  /* 11f599c0 cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f599c7 jle 0x11f599d4 */
  if ((C.zf||C.sf!=C.of)) goto L_11f599d4;
  /* 11f599c9 push edi */
  push32((uint32_t)(EDI));
  /* 11f599ca push esi */
  push32((uint32_t)(ESI));
  /* 11f599cb call 0x11f588fb */
  push32(0x11f599d0u); f_11f588fb();
  /* 11f599d0 pop ecx */
  ECX = (pop32());
  /* 11f599d1 pop ecx */
  ECX = (pop32());
  /* 11f599d2 jmp 0x11f599df */
  goto L_11f599df;
L_11f599d4:;
  /* 11f599d4 mov eax, dword ptr [0x11f61e50] */
  EAX = (r32((uint32_t)(0x11f61e50)));
  /* 11f599d9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11f599dd and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11f599df:;
  /* 11f599df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f599e1 je 0x11f59a2d */
  if (C.zf) goto L_11f59a2d;
  /* 11f599e3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11f599e6 push eax */
  push32((uint32_t)(EAX));
  /* 11f599e7 call 0x11f5adf5 */
  push32(0x11f599ecu); f_11f5adf5();
  /* 11f599ec pop ecx */
  ECX = (pop32());
  /* 11f599ed mov ecx, eax */
  ECX = (EAX);
  /* 11f599ef sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11f599f2:;
  /* 11f599f2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f599f5 jae 0x11f59a2d */
  if (!C.cf) goto L_11f59a2d;
  /* 11f599f7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11f599fa or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11f599fe cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59a01 jb 0x11f59a17 */
  if (C.cf) goto L_11f59a17;
  /* 11f59a03 jne 0x11f59a11 */
  if (!C.zf) goto L_11f59a11;
  /* 11f59a05 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f59a08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f59a0a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f59a0d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59a0f jbe 0x11f59a17 */
  if ((C.cf||C.zf)) goto L_11f59a17;
L_11f59a11:;
  /* 11f59a11 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11f59a15 jmp 0x11f59a20 */
  goto L_11f59a20;
L_11f59a17:;
  /* 11f59a17 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f59a1b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59a1d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11f59a20:;
  /* 11f59a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f59a23 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f59a26 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11f59a28 jmp 0x11f59991 */
  goto L_11f59991;
L_11f59a2d:;
  /* 11f59a2d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f59a30 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11f59a33 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f59a36 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11f59a38 jne 0x11f59a4a */
  if (!C.zf) goto L_11f59a4a;
  /* 11f59a3a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f59a3c je 0x11f59a44 */
  if (C.zf) goto L_11f59a44;
  /* 11f59a3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59a41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f59a44:;
  /* 11f59a44 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f59a48 jmp 0x11f59a95 */
  goto L_11f59a95;
L_11f59a4a:;
  /* 11f59a4a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11f59a4c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11f59a51 jne 0x11f59a6e */
  if (!C.zf) goto L_11f59a6e;
  /* 11f59a53 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11f59a55 jne 0x11f59a95 */
  if (!C.zf) goto L_11f59a95;
  /* 11f59a57 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11f59a5a je 0x11f59a65 */
  if (C.zf) goto L_11f59a65;
  /* 11f59a5c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59a63 ja 0x11f59a6e */
  if ((!C.cf&&!C.zf)) goto L_11f59a6e;
L_11f59a65:;
  /* 11f59a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59a67 jne 0x11f59a95 */
  if (!C.zf) goto L_11f59a95;
  /* 11f59a69 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59a6c jbe 0x11f59a95 */
  if ((C.cf||C.zf)) goto L_11f59a95;
L_11f59a6e:;
  /* 11f59a6e call 0x11f5824b */
  push32(0x11f59a73u); f_11f5824b();
  /* 11f59a73 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11f59a77 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11f59a7d je 0x11f59a85 */
  if (C.zf) goto L_11f59a85;
  /* 11f59a7f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f59a83 jmp 0x11f59a95 */
  goto L_11f59a95;
L_11f59a85:;
  /* 11f59a85 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f59a88 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11f59a8a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11f59a8c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59a8e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f59a90 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59a92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f59a95:;
  /* 11f59a95 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f59a97 je 0x11f59a9e */
  if (C.zf) goto L_11f59a9e;
  /* 11f59a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f59a9c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11f59a9e:;
  /* 11f59a9e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11f59aa2 je 0x11f59aac */
  if (C.zf) goto L_11f59aac;
  /* 11f59aa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f59aa7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f59aa9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f59aac:;
  /* 11f59aac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f59aaf jmp 0x11f59abc */
  goto L_11f59abc;
L_11f59ab1:;
  /* 11f59ab1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f59ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59ab6 je 0x11f59aba */
  if (C.zf) goto L_11f59aba;
  /* 11f59ab8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11f59aba:;
  /* 11f59aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f59abc:;
  /* 11f59abc pop edi */
  EDI = (pop32());
  /* 11f59abd pop esi */
  ESI = (pop32());
  /* 11f59abe pop ebx */
  EBX = (pop32());
  /* 11f59abf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f59ac0 ret  */
  ESPCHK(0x11f598bcu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11f59ae0 (193 bytes, 90 insns) */
void f_11f59ae0(void) {
  FTRACE(0x11f59ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59ae2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f59ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59ae7 mov ebx, eax */
  EBX = (EAX);
  /* 11f59ae9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f59aec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f59af0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11f59af6 je 0x11f59b0b */
  if (C.zf) goto L_11f59b0b;
L_11f59af8:;
  /* 11f59af8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11f59afa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f59afb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59afd je 0x11f59ad0 */
  if (C.zf) { jmp_ind(0x11f59ad0u); return; }
  /* 11f59aff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11f59b01 je 0x11f59b54 */
  if (C.zf) goto L_11f59b54;
  /* 11f59b03 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11f59b09 jne 0x11f59af8 */
  if (!C.zf) goto L_11f59af8;
L_11f59b0b:;
  /* 11f59b0b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11f59b0d push edi */
  push32((uint32_t)(EDI));
  /* 11f59b0e mov eax, ebx */
  EAX = (EBX);
  /* 11f59b10 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11f59b13 push esi */
  push32((uint32_t)(ESI));
  /* 11f59b14 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11f59b16:;
  /* 11f59b16 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f59b18 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11f59b1d mov eax, ecx */
  EAX = (ECX);
  /* 11f59b1f mov esi, edi */
  ESI = (EDI);
  /* 11f59b21 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11f59b23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59b25 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59b27 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f59b2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f59b2d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f59b2f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f59b31 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59b34 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11f59b3a jne 0x11f59b58 */
  if (!C.zf) goto L_11f59b58;
  /* 11f59b3c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11f59b41 je 0x11f59b16 */
  if (C.zf) goto L_11f59b16;
  /* 11f59b43 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11f59b48 jne 0x11f59b52 */
  if (!C.zf) goto L_11f59b52;
  /* 11f59b4a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11f59b50 jne 0x11f59b16 */
  if (!C.zf) goto L_11f59b16;
L_11f59b52:;
  /* 11f59b52 pop esi */
  ESI = (pop32());
  /* 11f59b53 pop edi */
  EDI = (pop32());
L_11f59b54:;
  /* 11f59b54 pop ebx */
  EBX = (pop32());
  /* 11f59b55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59b57 ret  */
  ESPCHK(0x11f59ae0u, _esp0);
  ESP += 4; return;
L_11f59b58:;
  /* 11f59b58 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f59b5b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59b5d je 0x11f59b95 */
  if (C.zf) goto L_11f59b95;
  /* 11f59b5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59b61 je 0x11f59b52 */
  if (C.zf) goto L_11f59b52;
  /* 11f59b63 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59b65 je 0x11f59b8e */
  if (C.zf) goto L_11f59b8e;
  /* 11f59b67 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f59b69 je 0x11f59b52 */
  if (C.zf) goto L_11f59b52;
  /* 11f59b6b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f59b6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59b70 je 0x11f59b87 */
  if (C.zf) goto L_11f59b87;
  /* 11f59b72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59b74 je 0x11f59b52 */
  if (C.zf) goto L_11f59b52;
  /* 11f59b76 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59b78 je 0x11f59b80 */
  if (C.zf) goto L_11f59b80;
  /* 11f59b7a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f59b7c je 0x11f59b52 */
  if (C.zf) goto L_11f59b52;
  /* 11f59b7e jmp 0x11f59b16 */
  goto L_11f59b16;
L_11f59b80:;
  /* 11f59b80 pop esi */
  ESI = (pop32());
  /* 11f59b81 pop edi */
  EDI = (pop32());
  /* 11f59b82 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11f59b85 pop ebx */
  EBX = (pop32());
  /* 11f59b86 ret  */
  ESPCHK(0x11f59ae0u, _esp0);
  ESP += 4; return;
L_11f59b87:;
  /* 11f59b87 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11f59b8a pop esi */
  ESI = (pop32());
  /* 11f59b8b pop edi */
  EDI = (pop32());
  /* 11f59b8c pop ebx */
  EBX = (pop32());
  /* 11f59b8d ret  */
  ESPCHK(0x11f59ae0u, _esp0);
  ESP += 4; return;
L_11f59b8e:;
  /* 11f59b8e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11f59b91 pop esi */
  ESI = (pop32());
  /* 11f59b92 pop edi */
  EDI = (pop32());
  /* 11f59b93 pop ebx */
  EBX = (pop32());
  /* 11f59b94 ret  */
  ESPCHK(0x11f59ae0u, _esp0);
  ESP += 4; return;
L_11f59b95:;
  /* 11f59b95 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11f59b98 pop esi */
  ESI = (pop32());
  /* 11f59b99 pop edi */
  EDI = (pop32());
  /* 11f59b9a pop ebx */
  EBX = (pop32());
  /* 11f59b9b ret  */
  ESPCHK(0x11f59ae0u, _esp0);
  ESP += 4; return;
  /* 11f59b9c int3  */
  x86_unimpl("int3 @ 0x11f59b9c");
  /* 11f59b9d int3  */
  x86_unimpl("int3 @ 0x11f59b9d");
  /* 11f59b9e int3  */
  x86_unimpl("int3 @ 0x11f59b9e");
  /* 11f59b9f int3  */
  x86_unimpl("int3 @ 0x11f59b9f");
}

/* _strstr @ 0x11f59ba0 (128 bytes, 66 insns) */
void f_11f59ba0(void) {
  FTRACE(0x11f59ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59ba0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f59ba4 push edi */
  push32((uint32_t)(EDI));
  /* 11f59ba5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59ba6 push esi */
  push32((uint32_t)(ESI));
  /* 11f59ba7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f59ba9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f59bad test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f59baf je 0x11f59c1a */
  if (C.zf) goto L_11f59c1a;
  /* 11f59bb1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11f59bb4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f59bb6 je 0x11f59c07 */
  if (C.zf) goto L_11f59c07;
L_11f59bb8:;
  /* 11f59bb8 mov esi, edi */
  ESI = (EDI);
  /* 11f59bba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f59bbe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11f59bc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f59bc1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59bc3 je 0x11f59bda */
  if (C.zf) goto L_11f59bda;
  /* 11f59bc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59bc7 je 0x11f59bd4 */
  if (C.zf) goto L_11f59bd4;
L_11f59bc9:;
  /* 11f59bc9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59bcb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f59bcc:;
  /* 11f59bcc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59bce je 0x11f59bda */
  if (C.zf) goto L_11f59bda;
  /* 11f59bd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59bd2 jne 0x11f59bc9 */
  if (!C.zf) goto L_11f59bc9;
L_11f59bd4:;
  /* 11f59bd4 pop esi */
  ESI = (pop32());
  /* 11f59bd5 pop ebx */
  EBX = (pop32());
  /* 11f59bd6 pop edi */
  EDI = (pop32());
  /* 11f59bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59bd9 ret  */
  ESPCHK(0x11f59ba0u, _esp0);
  ESP += 4; return;
L_11f59bda:;
  /* 11f59bda mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59bdc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f59bdd cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59bdf jne 0x11f59bcc */
  if (!C.zf) goto L_11f59bcc;
  /* 11f59be1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11f59be4:;
  /* 11f59be4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11f59be7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f59be9 je 0x11f59c13 */
  if (C.zf) goto L_11f59c13;
  /* 11f59beb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59bed add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59bf0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59bf2 jne 0x11f59bb8 */
  if (!C.zf) goto L_11f59bb8;
  /* 11f59bf4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11f59bf7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59bf9 je 0x11f59c13 */
  if (C.zf) goto L_11f59c13;
  /* 11f59bfb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11f59bfe add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59c01 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59c03 je 0x11f59be4 */
  if (C.zf) goto L_11f59be4;
  /* 11f59c05 jmp 0x11f59bb8 */
  goto L_11f59bb8;
L_11f59c07:;
  /* 11f59c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59c09 pop esi */
  ESI = (pop32());
  /* 11f59c0a pop ebx */
  EBX = (pop32());
  /* 11f59c0b pop edi */
  EDI = (pop32());
  /* 11f59c0c mov al, dl */
  AL = (DL);
  /* 11f59c0e jmp 0x11f59ae6 */
  jmp_ind(0x11f59ae6u); return;
L_11f59c13:;
  /* 11f59c13 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11f59c16 pop esi */
  ESI = (pop32());
  /* 11f59c17 pop ebx */
  EBX = (pop32());
  /* 11f59c18 pop edi */
  EDI = (pop32());
  /* 11f59c19 ret  */
  ESPCHK(0x11f59ba0u, _esp0);
  ESP += 4; return;
L_11f59c1a:;
  /* 11f59c1a mov eax, edi */
  EAX = (EDI);
  /* 11f59c1c pop esi */
  ESI = (pop32());
  /* 11f59c1d pop ebx */
  EBX = (pop32());
  /* 11f59c1e pop edi */
  EDI = (pop32());
  /* 11f59c1f ret  */
  ESPCHK(0x11f59ba0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11f59c20 (56 bytes, 31 insns) */
void f_11f59c20(void) {
  FTRACE(0x11f59c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f59c21 mov ebp, esp */
  EBP = (ESP);
  /* 11f59c23 push edi */
  push32((uint32_t)(EDI));
  /* 11f59c24 push esi */
  push32((uint32_t)(ESI));
  /* 11f59c25 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59c26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f59c29 jecxz 0x11f59c51 */
  x86_unimpl("jecxz @ 0x11f59c29");
  /* 11f59c2b mov ebx, ecx */
  EBX = (ECX);
  /* 11f59c2d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59c30 mov esi, edi */
  ESI = (EDI);
  /* 11f59c32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59c34 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11f59c36 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f59c38 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59c3a mov edi, esi */
  EDI = (ESI);
  /* 11f59c3c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f59c3f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11f59c41 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11f59c44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f59c46 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59c49 ja 0x11f59c4f */
  if ((!C.cf&&!C.zf)) goto L_11f59c4f;
  /* 11f59c4b je 0x11f59c51 */
  if (C.zf) goto L_11f59c51;
  /* 11f59c4d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59c4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11f59c4f:;
  /* 11f59c4f not ecx */
  ECX = (~(ECX));
L_11f59c51:;
  /* 11f59c51 mov eax, ecx */
  EAX = (ECX);
  /* 11f59c53 pop ebx */
  EBX = (pop32());
  /* 11f59c54 pop esi */
  ESI = (pop32());
  /* 11f59c55 pop edi */
  EDI = (pop32());
  /* 11f59c56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f59c57 ret  */
  ESPCHK(0x11f59c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x11f59c60 (47 bytes, 17 insns) */
void f_11f59c60(void) {
  FTRACE(0x11f59c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59c60 push ecx */
  push32((uint32_t)(ECX));
  /* 11f59c61 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59c66 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11f59c6a jb 0x11f59c80 */
  if (C.cf) goto L_11f59c80;
L_11f59c6c:;
  /* 11f59c6c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59c72 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59c77 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f59c79 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59c7e jae 0x11f59c6c */
  if (!C.cf) goto L_11f59c6c;
L_11f59c80:;
  /* 11f59c80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59c82 mov eax, esp */
  EAX = (ESP);
  /* 11f59c84 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f59c86 mov esp, ecx */
  ESP = (ECX);
  /* 11f59c88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f59c8a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f59c8d push eax */
  push32((uint32_t)(EAX));
  /* 11f59c8e ret  */
  ESPCHK(0x11f59c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c8f @ 0x11f59c8f (137 bytes, 50 insns) */
void f_11f59c8f(void) {
  FTRACE(0x11f59c8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59c8f push ebx */
  push32((uint32_t)(EBX));
  /* 11f59c90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f59c92 cmp dword ptr [0x11f62dcc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62dcc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59c98 push esi */
  push32((uint32_t)(ESI));
  /* 11f59c99 push edi */
  push32((uint32_t)(EDI));
  /* 11f59c9a jne 0x11f59cde */
  if (!C.zf) goto L_11f59cde;
  /* 11f59c9c push 0x11f5c6b4 */
  push32((uint32_t)(0x11f5c6b4u));
  /* 11f59ca1 call dword ptr [0x11f5c02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c02c))), 0x11f59ca7u);
  /* 11f59ca7 mov edi, eax */
  EDI = (EAX);
  /* 11f59ca9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59cab je 0x11f59d14 */
  if (C.zf) goto L_11f59d14;
  /* 11f59cad mov esi, dword ptr [0x11f5c0b8] */
  ESI = (r32((uint32_t)(0x11f5c0b8)));
  /* 11f59cb3 push 0x11f5c6a8 */
  push32((uint32_t)(0x11f5c6a8u));
  /* 11f59cb8 push edi */
  push32((uint32_t)(EDI));
  /* 11f59cb9 call esi */
  call_ind((uint32_t)(ESI), 0x11f59cbbu);
  /* 11f59cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59cbd mov dword ptr [0x11f62dcc], eax */
  w32((uint32_t)(0x11f62dcc), (EAX));
  /* 11f59cc2 je 0x11f59d14 */
  if (C.zf) goto L_11f59d14;
  /* 11f59cc4 push 0x11f5c698 */
  push32((uint32_t)(0x11f5c698u));
  /* 11f59cc9 push edi */
  push32((uint32_t)(EDI));
  /* 11f59cca call esi */
  call_ind((uint32_t)(ESI), 0x11f59cccu);
  /* 11f59ccc push 0x11f5c684 */
  push32((uint32_t)(0x11f5c684u));
  /* 11f59cd1 push edi */
  push32((uint32_t)(EDI));
  /* 11f59cd2 mov dword ptr [0x11f62dd0], eax */
  w32((uint32_t)(0x11f62dd0), (EAX));
  /* 11f59cd7 call esi */
  call_ind((uint32_t)(ESI), 0x11f59cd9u);
  /* 11f59cd9 mov dword ptr [0x11f62dd4], eax */
  w32((uint32_t)(0x11f62dd4), (EAX));
L_11f59cde:;
  /* 11f59cde mov eax, dword ptr [0x11f62dd0] */
  EAX = (r32((uint32_t)(0x11f62dd0)));
  /* 11f59ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59ce5 je 0x11f59cfd */
  if (C.zf) goto L_11f59cfd;
  /* 11f59ce7 call eax */
  call_ind((uint32_t)(EAX), 0x11f59ce9u);
  /* 11f59ce9 mov ebx, eax */
  EBX = (EAX);
  /* 11f59ceb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f59ced je 0x11f59cfd */
  if (C.zf) goto L_11f59cfd;
  /* 11f59cef mov eax, dword ptr [0x11f62dd4] */
  EAX = (r32((uint32_t)(0x11f62dd4)));
  /* 11f59cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59cf6 je 0x11f59cfd */
  if (C.zf) goto L_11f59cfd;
  /* 11f59cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59cf9 call eax */
  call_ind((uint32_t)(EAX), 0x11f59cfbu);
  /* 11f59cfb mov ebx, eax */
  EBX = (EAX);
L_11f59cfd:;
  /* 11f59cfd push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f59d01 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f59d05 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f59d09 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59d0a call dword ptr [0x11f62dcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f62dcc))), 0x11f59d10u);
L_11f59d10:;
  /* 11f59d10 pop edi */
  EDI = (pop32());
  /* 11f59d11 pop esi */
  ESI = (pop32());
  /* 11f59d12 pop ebx */
  EBX = (pop32());
  /* 11f59d13 ret  */
  ESPCHK(0x11f59c8fu, _esp0);
  ESP += 4; return;
L_11f59d14:;
  /* 11f59d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59d16 jmp 0x11f59d10 */
  goto L_11f59d10;
}

/* _strncpy @ 0x11f59d20 (254 bytes, 109 insns) */
void f_11f59d20(void) {
  FTRACE(0x11f59d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59d20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f59d24 push edi */
  push32((uint32_t)(EDI));
  /* 11f59d25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f59d27 je 0x11f59da3 */
  if (C.zf) goto L_11f59da3;
  /* 11f59d29 push esi */
  push32((uint32_t)(ESI));
  /* 11f59d2a push ebx */
  push32((uint32_t)(EBX));
  /* 11f59d2b mov ebx, ecx */
  EBX = (ECX);
  /* 11f59d2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f59d31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f59d37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f59d3b jne 0x11f59d44 */
  if (!C.zf) goto L_11f59d44;
  /* 11f59d3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f59d40 jne 0x11f59db1 */
  if (!C.zf) goto L_11f59db1;
  /* 11f59d42 jmp 0x11f59d65 */
  goto L_11f59d65;
L_11f59d44:;
  /* 11f59d44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59d46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f59d47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59d49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59d4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59d4b je 0x11f59d72 */
  if (C.zf) goto L_11f59d72;
  /* 11f59d4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59d4f je 0x11f59d7a */
  if (C.zf) goto L_11f59d7a;
  /* 11f59d51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f59d57 jne 0x11f59d44 */
  if (!C.zf) goto L_11f59d44;
  /* 11f59d59 mov ebx, ecx */
  EBX = (ECX);
  /* 11f59d5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f59d5e jne 0x11f59db1 */
  if (!C.zf) goto L_11f59db1;
L_11f59d60:;
  /* 11f59d60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f59d63 je 0x11f59d72 */
  if (C.zf) goto L_11f59d72;
L_11f59d65:;
  /* 11f59d65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f59d67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f59d68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59d6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59d6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f59d6d je 0x11f59d9e */
  if (C.zf) goto L_11f59d9e;
  /* 11f59d6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f59d70 jne 0x11f59d65 */
  if (!C.zf) goto L_11f59d65;
L_11f59d72:;
  /* 11f59d72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f59d76 pop ebx */
  EBX = (pop32());
  /* 11f59d77 pop esi */
  ESI = (pop32());
  /* 11f59d78 pop edi */
  EDI = (pop32());
  /* 11f59d79 ret  */
  ESPCHK(0x11f59d20u, _esp0);
  ESP += 4; return;
L_11f59d7a:;
  /* 11f59d7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f59d80 je 0x11f59d94 */
  if (C.zf) goto L_11f59d94;
L_11f59d82:;
  /* 11f59d82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59d84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59d85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59d86 je 0x11f59e16 */
  if (C.zf) goto L_11f59e16;
  /* 11f59d8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f59d92 jne 0x11f59d82 */
  if (!C.zf) goto L_11f59d82;
L_11f59d94:;
  /* 11f59d94 mov ebx, ecx */
  EBX = (ECX);
  /* 11f59d96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f59d99 jne 0x11f59e07 */
  if (!C.zf) goto L_11f59e07;
L_11f59d9b:;
  /* 11f59d9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f59d9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f59d9e:;
  /* 11f59d9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f59d9f jne 0x11f59d9b */
  if (!C.zf) goto L_11f59d9b;
  /* 11f59da1 pop ebx */
  EBX = (pop32());
  /* 11f59da2 pop esi */
  ESI = (pop32());
L_11f59da3:;
  /* 11f59da3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f59da7 pop edi */
  EDI = (pop32());
  /* 11f59da8 ret  */
  ESPCHK(0x11f59d20u, _esp0);
  ESP += 4; return;
L_11f59da9:;
  /* 11f59da9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f59dab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59dae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59daf je 0x11f59d60 */
  if (C.zf) goto L_11f59d60;
L_11f59db1:;
  /* 11f59db1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f59db6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f59db8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59dba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f59dbd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59dbf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f59dc1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59dc4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f59dc9 je 0x11f59da9 */
  if (C.zf) goto L_11f59da9;
  /* 11f59dcb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f59dcd je 0x11f59dfb */
  if (C.zf) goto L_11f59dfb;
  /* 11f59dcf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f59dd1 je 0x11f59df1 */
  if (C.zf) goto L_11f59df1;
  /* 11f59dd3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f59dd9 je 0x11f59de7 */
  if (C.zf) goto L_11f59de7;
  /* 11f59ddb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f59de1 jne 0x11f59da9 */
  if (!C.zf) goto L_11f59da9;
  /* 11f59de3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f59de5 jmp 0x11f59dff */
  goto L_11f59dff;
L_11f59de7:;
  /* 11f59de7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f59ded mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f59def jmp 0x11f59dff */
  goto L_11f59dff;
L_11f59df1:;
  /* 11f59df1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f59df7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f59df9 jmp 0x11f59dff */
  goto L_11f59dff;
L_11f59dfb:;
  /* 11f59dfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f59dfd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11f59dff:;
  /* 11f59dff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59e02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f59e04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59e05 je 0x11f59e11 */
  if (C.zf) goto L_11f59e11;
L_11f59e07:;
  /* 11f59e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f59e09:;
  /* 11f59e09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f59e0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59e0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f59e0f jne 0x11f59e09 */
  if (!C.zf) goto L_11f59e09;
L_11f59e11:;
  /* 11f59e11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f59e14 jne 0x11f59d9b */
  if (!C.zf) goto L_11f59d9b;
L_11f59e16:;
  /* 11f59e16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f59e1a pop ebx */
  EBX = (pop32());
  /* 11f59e1b pop esi */
  ESI = (pop32());
  /* 11f59e1c pop edi */
  EDI = (pop32());
  /* 11f59e1d ret  */
  ESPCHK(0x11f59d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e1e @ 0x11f59e1e (139 bytes, 59 insns) */
void f_11f59e1e(void) {
  FTRACE(0x11f59e1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59e1e push ebx */
  push32((uint32_t)(EBX));
  /* 11f59e1f push ebp */
  push32((uint32_t)(EBP));
  /* 11f59e20 push esi */
  push32((uint32_t)(ESI));
  /* 11f59e21 push edi */
  push32((uint32_t)(EDI));
  /* 11f59e22 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11f59e26:;
  /* 11f59e26 cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59e2d jle 0x11f59e3e */
  if ((C.zf||C.sf!=C.of)) goto L_11f59e3e;
  /* 11f59e2f movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f59e32 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f59e34 push eax */
  push32((uint32_t)(EAX));
  /* 11f59e35 call 0x11f588fb */
  push32(0x11f59e3au); f_11f588fb();
  /* 11f59e3a pop ecx */
  ECX = (pop32());
  /* 11f59e3b pop ecx */
  ECX = (pop32());
  /* 11f59e3c jmp 0x11f59e4d */
  goto L_11f59e4d;
L_11f59e3e:;
  /* 11f59e3e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f59e41 mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f59e47 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f59e4a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11f59e4d:;
  /* 11f59e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59e4f je 0x11f59e54 */
  if (C.zf) goto L_11f59e54;
  /* 11f59e51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59e52 jmp 0x11f59e26 */
  goto L_11f59e26;
L_11f59e54:;
  /* 11f59e54 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f59e57 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59e58 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59e5b mov ebp, esi */
  EBP = (ESI);
  /* 11f59e5d je 0x11f59e64 */
  if (C.zf) goto L_11f59e64;
  /* 11f59e5f cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59e62 jne 0x11f59e68 */
  if (!C.zf) goto L_11f59e68;
L_11f59e64:;
  /* 11f59e64 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f59e67 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f59e68:;
  /* 11f59e68 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f59e6a:;
  /* 11f59e6a cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59e71 jle 0x11f59e7f */
  if ((C.zf||C.sf!=C.of)) goto L_11f59e7f;
  /* 11f59e73 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f59e75 push esi */
  push32((uint32_t)(ESI));
  /* 11f59e76 call 0x11f588fb */
  push32(0x11f59e7bu); f_11f588fb();
  /* 11f59e7b pop ecx */
  ECX = (pop32());
  /* 11f59e7c pop ecx */
  ECX = (pop32());
  /* 11f59e7d jmp 0x11f59e8a */
  goto L_11f59e8a;
L_11f59e7f:;
  /* 11f59e7f mov eax, dword ptr [0x11f61e50] */
  EAX = (r32((uint32_t)(0x11f61e50)));
  /* 11f59e84 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11f59e87 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11f59e8a:;
  /* 11f59e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59e8c je 0x11f59e9b */
  if (C.zf) goto L_11f59e9b;
  /* 11f59e8e lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11f59e91 lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11f59e95 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f59e98 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f59e99 jmp 0x11f59e6a */
  goto L_11f59e6a;
L_11f59e9b:;
  /* 11f59e9b cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59e9e mov eax, ebx */
  EAX = (EBX);
  /* 11f59ea0 jne 0x11f59ea4 */
  if (!C.zf) goto L_11f59ea4;
  /* 11f59ea2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f59ea4:;
  /* 11f59ea4 pop edi */
  EDI = (pop32());
  /* 11f59ea5 pop esi */
  ESI = (pop32());
  /* 11f59ea6 pop ebp */
  EBP = (pop32());
  /* 11f59ea7 pop ebx */
  EBX = (pop32());
  /* 11f59ea8 ret  */
  ESPCHK(0x11f59e1eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009ea9 @ 0x11f59ea9 (125 bytes, 51 insns) */
void f_11f59ea9(void) {
  FTRACE(0x11f59ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59ea9 cmp dword ptr [0x11f63204], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f63204))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59eb1 push esi */
  push32((uint32_t)(ESI));
  /* 11f59eb2 mov esi, dword ptr [0x11f62b68] */
  ESI = (r32((uint32_t)(0x11f62b68)));
  /* 11f59eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11f59eb9 je 0x11f59f20 */
  if (C.zf) goto L_11f59f20;
  /* 11f59ebb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f59ebd jne 0x11f59eda */
  if (!C.zf) goto L_11f59eda;
  /* 11f59ebf cmp dword ptr [0x11f62b70], esi */
  { uint32_t _a=(r32((uint32_t)(0x11f62b70))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59ec5 je 0x11f59f20 */
  if (C.zf) goto L_11f59f20;
  /* 11f59ec7 call 0x11f5afa3 */
  push32(0x11f59eccu); f_11f5afa3();
  /* 11f59ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59ece jne 0x11f59f20 */
  if (!C.zf) goto L_11f59f20;
  /* 11f59ed0 mov esi, dword ptr [0x11f62b68] */
  ESI = (r32((uint32_t)(0x11f62b68)));
  /* 11f59ed6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f59ed8 je 0x11f59f20 */
  if (C.zf) goto L_11f59f20;
L_11f59eda:;
  /* 11f59eda mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f59ede test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f59ee0 je 0x11f59f20 */
  if (C.zf) goto L_11f59f20;
  /* 11f59ee2 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59ee3 call 0x11f58630 */
  push32(0x11f59ee8u); f_11f58630();
  /* 11f59ee8 pop ecx */
  ECX = (pop32());
  /* 11f59ee9 mov edi, eax */
  EDI = (EAX);
L_11f59eeb:;
  /* 11f59eeb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f59eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59eef je 0x11f59f20 */
  if (C.zf) goto L_11f59f20;
  /* 11f59ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11f59ef2 call 0x11f58630 */
  push32(0x11f59ef7u); f_11f58630();
  /* 11f59ef7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59ef9 pop ecx */
  ECX = (pop32());
  /* 11f59efa jbe 0x11f59f13 */
  if ((C.cf||C.zf)) goto L_11f59f13;
  /* 11f59efc mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f59efe cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f59f02 jne 0x11f59f13 */
  if (!C.zf) goto L_11f59f13;
  /* 11f59f04 push edi */
  push32((uint32_t)(EDI));
  /* 11f59f05 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59f06 push eax */
  push32((uint32_t)(EAX));
  /* 11f59f07 call 0x11f5af64 */
  push32(0x11f59f0cu); f_11f5af64();
  /* 11f59f0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f59f11 je 0x11f59f18 */
  if (C.zf) goto L_11f59f18;
L_11f59f13:;
  /* 11f59f13 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59f16 jmp 0x11f59eeb */
  goto L_11f59eeb;
L_11f59f18:;
  /* 11f59f18 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f59f1a lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11f59f1e jmp 0x11f59f22 */
  goto L_11f59f22;
L_11f59f20:;
  /* 11f59f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f59f22:;
  /* 11f59f22 pop edi */
  EDI = (pop32());
  /* 11f59f23 pop esi */
  ESI = (pop32());
  /* 11f59f24 pop ebx */
  EBX = (pop32());
  /* 11f59f25 ret  */
  ESPCHK(0x11f59ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f26 @ 0x11f59f26 (386 bytes, 138 insns) */
void f_11f59f26(void) {
  FTRACE(0x11f59f26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f59f26 push ebp */
  push32((uint32_t)(EBP));
  /* 11f59f27 mov ebp, esp */
  EBP = (ESP);
  /* 11f59f29 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59f2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59f2f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f59f33 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f59f34 push ebx */
  push32((uint32_t)(EBX));
  /* 11f59f35 push esi */
  push32((uint32_t)(ESI));
  /* 11f59f36 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f59f37 push edi */
  push32((uint32_t)(EDI));
  /* 11f59f38 je 0x11f59fa1 */
  if (C.zf) goto L_11f59fa1;
  /* 11f59f3a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f59f3b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f59f3c je 0x11f59f84 */
  if (C.zf) goto L_11f59f84;
  /* 11f59f3e sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59f41 je 0x11f59f84 */
  if (C.zf) goto L_11f59f84;
  /* 11f59f43 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59f46 je 0x11f59f84 */
  if (C.zf) goto L_11f59f84;
  /* 11f59f48 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59f4b je 0x11f59f77 */
  if (C.zf) goto L_11f59f77;
  /* 11f59f4d sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f59f50 je 0x11f59f6a */
  if (C.zf) goto L_11f59f6a;
  /* 11f59f52 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f59f53 je 0x11f59f5d */
  if (C.zf) goto L_11f59f5d;
  /* 11f59f55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f59f58 jmp 0x11f5a0a3 */
  goto L_11f5a0a3;
L_11f59f5d:;
  /* 11f59f5d mov ebx, dword ptr [0x11f62e00] */
  EBX = (r32((uint32_t)(0x11f62e00)));
  /* 11f59f63 mov edi, 0x11f62e00 */
  EDI = (0x11f62e00u);
  /* 11f59f68 jmp 0x11f59fac */
  goto L_11f59fac;
L_11f59f6a:;
  /* 11f59f6a mov ebx, dword ptr [0x11f62dfc] */
  EBX = (r32((uint32_t)(0x11f62dfc)));
  /* 11f59f70 mov edi, 0x11f62dfc */
  EDI = (0x11f62dfcu);
  /* 11f59f75 jmp 0x11f59fac */
  goto L_11f59fac;
L_11f59f77:;
  /* 11f59f77 mov ebx, dword ptr [0x11f62e04] */
  EBX = (r32((uint32_t)(0x11f62e04)));
  /* 11f59f7d mov edi, 0x11f62e04 */
  EDI = (0x11f62e04u);
  /* 11f59f82 jmp 0x11f59fac */
  goto L_11f59fac;
L_11f59f84:;
  /* 11f59f84 call 0x11f540f3 */
  push32(0x11f59f89u); f_11f540f3();
  /* 11f59f89 mov esi, eax */
  ESI = (EAX);
  /* 11f59f8b push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 11f59f8e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f59f91 call 0x11f5a0a8 */
  push32(0x11f59f96u); f_11f5a0a8();
  /* 11f59f96 mov edi, eax */
  EDI = (EAX);
  /* 11f59f98 pop ecx */
  ECX = (pop32());
  /* 11f59f99 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f59f9c pop ecx */
  ECX = (pop32());
  /* 11f59f9d mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 11f59f9f jmp 0x11f59fbe */
  goto L_11f59fbe;
L_11f59fa1:;
  /* 11f59fa1 mov ebx, dword ptr [0x11f62df8] */
  EBX = (r32((uint32_t)(0x11f62df8)));
  /* 11f59fa7 mov edi, 0x11f62df8 */
  EDI = (0x11f62df8u);
L_11f59fac:;
  /* 11f59fac push 1 */
  push32((uint32_t)(0x1u));
  /* 11f59fae mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f59fb5 call 0x11f5637c */
  push32(0x11f59fbau); f_11f5637c();
  /* 11f59fba mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59fbd pop ecx */
  ECX = (pop32());
L_11f59fbe:;
  /* 11f59fbe cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59fc1 jne 0x11f59fd9 */
  if (!C.zf) goto L_11f59fd9;
  /* 11f59fc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59fc7 je 0x11f5a0a1 */
  if (C.zf) goto L_11f5a0a1;
  /* 11f59fcd push ebx */
  push32((uint32_t)(EBX));
  /* 11f59fce call 0x11f563dd */
  push32(0x11f59fd3u); f_11f563dd();
  /* 11f59fd3 pop ecx */
  ECX = (pop32());
  /* 11f59fd4 jmp 0x11f5a0a1 */
  goto L_11f5a0a1;
L_11f59fd9:;
  /* 11f59fd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f59fdb cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59fdd jne 0x11f59ff3 */
  if (!C.zf) goto L_11f59ff3;
  /* 11f59fdf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59fe2 je 0x11f59fec */
  if (C.zf) goto L_11f59fec;
  /* 11f59fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f59fe6 call 0x11f563dd */
  push32(0x11f59febu); f_11f563dd();
  /* 11f59feb pop ecx */
  ECX = (pop32());
L_11f59fec:;
  /* 11f59fec push 3 */
  push32((uint32_t)(0x3u));
  /* 11f59fee call 0x11f5566b */
  push32(0x11f59ff3u); f_11f5566b();
L_11f59ff3:;
  /* 11f59ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f59ff6 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59ff9 je 0x11f5a005 */
  if (C.zf) goto L_11f5a005;
  /* 11f59ffb cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f59ffe je 0x11f5a005 */
  if (C.zf) goto L_11f5a005;
  /* 11f5a000 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a003 jne 0x11f5a020 */
  if (!C.zf) goto L_11f5a020;
L_11f5a005:;
  /* 11f5a005 mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 11f5a008 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a00b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f5a00e mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 11f5a011 jne 0x11f5a05c */
  if (!C.zf) goto L_11f5a05c;
  /* 11f5a013 mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 11f5a016 mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 11f5a01d mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f5a020:;
  /* 11f5a020 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a023 jne 0x11f5a05c */
  if (!C.zf) goto L_11f5a05c;
  /* 11f5a025 mov ecx, dword ptr [0x11f5fb88] */
  ECX = (r32((uint32_t)(0x11f5fb88)));
  /* 11f5a02b mov eax, dword ptr [0x11f5fb8c] */
  EAX = (r32((uint32_t)(0x11f5fb8c)));
  /* 11f5a030 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a032 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a034 jge 0x11f5a05e */
  if ((C.sf==C.of)) goto L_11f5a05e;
  /* 11f5a036 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11f5a039 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_11f5a03c:;
  /* 11f5a03c mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 11f5a03f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a042 and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5a047 mov edx, dword ptr [0x11f5fb88] */
  EDX = (r32((uint32_t)(0x11f5fb88)));
  /* 11f5a04d mov edi, dword ptr [0x11f5fb8c] */
  EDI = (r32((uint32_t)(0x11f5fb8c)));
  /* 11f5a053 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f5a054 add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a056 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a058 jl 0x11f5a03c */
  if ((C.sf!=C.of)) goto L_11f5a03c;
  /* 11f5a05a jmp 0x11f5a05e */
  goto L_11f5a05e;
L_11f5a05c:;
  /* 11f5a05c mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_11f5a05e:;
  /* 11f5a05e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a062 je 0x11f5a06c */
  if (C.zf) goto L_11f5a06c;
  /* 11f5a064 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a066 call 0x11f563dd */
  push32(0x11f5a06bu); f_11f563dd();
  /* 11f5a06b pop ecx */
  ECX = (pop32());
L_11f5a06c:;
  /* 11f5a06c cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a070 jne 0x11f5a07d */
  if (!C.zf) goto L_11f5a07d;
  /* 11f5a072 push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 11f5a075 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f5a077 call ebx */
  call_ind((uint32_t)(EBX), 0x11f5a079u);
  /* 11f5a079 pop ecx */
  ECX = (pop32());
  /* 11f5a07a pop ecx */
  ECX = (pop32());
  /* 11f5a07b jmp 0x11f5a08f */
  goto L_11f5a08f;
L_11f5a07d:;
  /* 11f5a07d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a080 call ebx */
  call_ind((uint32_t)(EBX), 0x11f5a082u);
  /* 11f5a082 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a086 pop ecx */
  ECX = (pop32());
  /* 11f5a087 je 0x11f5a08f */
  if (C.zf) goto L_11f5a08f;
  /* 11f5a089 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a08d jne 0x11f5a0a1 */
  if (!C.zf) goto L_11f5a0a1;
L_11f5a08f:;
  /* 11f5a08f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f5a092 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a096 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 11f5a099 jne 0x11f5a0a1 */
  if (!C.zf) goto L_11f5a0a1;
  /* 11f5a09b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5a09e mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_11f5a0a1:;
  /* 11f5a0a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5a0a3:;
  /* 11f5a0a3 pop edi */
  EDI = (pop32());
  /* 11f5a0a4 pop esi */
  ESI = (pop32());
  /* 11f5a0a5 pop ebx */
  EBX = (pop32());
  /* 11f5a0a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5a0a7 ret  */
  ESPCHK(0x11f59f26u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a8 @ 0x11f5a0a8 (61 bytes, 25 insns) */
void f_11f5a0a8(void) {
  FTRACE(0x11f5a0a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a0a8 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5a0ac mov ecx, dword ptr [0x11f5fb94] */
  ECX = (r32((uint32_t)(0x11f5fb94)));
  /* 11f5a0b2 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a0b3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5a0b7 cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a0ba push edi */
  push32((uint32_t)(EDI));
  /* 11f5a0bb mov eax, edx */
  EAX = (EDX);
  /* 11f5a0bd je 0x11f5a0d1 */
  if (C.zf) goto L_11f5a0d1;
  /* 11f5a0bf lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 11f5a0c2 lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_11f5a0c5:;
  /* 11f5a0c5 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a0c8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a0ca jae 0x11f5a0d1 */
  if (!C.cf) goto L_11f5a0d1;
  /* 11f5a0cc cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a0cf jne 0x11f5a0c5 */
  if (!C.zf) goto L_11f5a0c5;
L_11f5a0d1:;
  /* 11f5a0d1 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11f5a0d4 lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 11f5a0d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a0d9 jae 0x11f5a0e0 */
  if (!C.cf) goto L_11f5a0e0;
  /* 11f5a0db cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a0de je 0x11f5a0e2 */
  if (C.zf) goto L_11f5a0e2;
L_11f5a0e0:;
  /* 11f5a0e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5a0e2:;
  /* 11f5a0e2 pop edi */
  EDI = (pop32());
  /* 11f5a0e3 pop esi */
  ESI = (pop32());
  /* 11f5a0e4 ret  */
  ESPCHK(0x11f5a0a8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0e5 @ 0x11f5a0e5 (115 bytes, 41 insns) */
void f_11f5a0e5(void) {
  FTRACE(0x11f5a0e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a0e5 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a0e6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5a0ea push edi */
  push32((uint32_t)(EDI));
  /* 11f5a0eb push esi */
  push32((uint32_t)(ESI));
  /* 11f5a0ec call 0x11f582dc */
  push32(0x11f5a0f1u); f_11f582dc();
  /* 11f5a0f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a0f4 pop ecx */
  ECX = (pop32());
  /* 11f5a0f5 jne 0x11f5a104 */
  if (!C.zf) goto L_11f5a104;
  /* 11f5a0f7 call 0x11f5824b */
  push32(0x11f5a0fcu); f_11f5824b();
  /* 11f5a0fc mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f5a102 jmp 0x11f5a131 */
  goto L_11f5a131;
L_11f5a104:;
  /* 11f5a104 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11f5a108 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5a10a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f5a10e push eax */
  push32((uint32_t)(EAX));
  /* 11f5a10f call dword ptr [0x11f5c028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c028))), 0x11f5a115u);
  /* 11f5a115 mov edi, eax */
  EDI = (EAX);
  /* 11f5a117 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a11a jne 0x11f5a124 */
  if (!C.zf) goto L_11f5a124;
  /* 11f5a11c call dword ptr [0x11f5c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c09c))), 0x11f5a122u);
  /* 11f5a122 jmp 0x11f5a126 */
  goto L_11f5a126;
L_11f5a124:;
  /* 11f5a124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5a126:;
  /* 11f5a126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a128 je 0x11f5a136 */
  if (C.zf) goto L_11f5a136;
  /* 11f5a12a push eax */
  push32((uint32_t)(EAX));
  /* 11f5a12b call 0x11f581d8 */
  push32(0x11f5a130u); f_11f581d8();
  /* 11f5a130 pop ecx */
  ECX = (pop32());
L_11f5a131:;
  /* 11f5a131 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5a134 jmp 0x11f5a155 */
  goto L_11f5a155;
L_11f5a136:;
  /* 11f5a136 mov ecx, esi */
  ECX = (ESI);
  /* 11f5a138 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11f5a13b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f5a13e mov eax, esi */
  EAX = (ESI);
  /* 11f5a140 mov ecx, dword ptr [ecx*4 + 0x11f63100] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f63100)));
  /* 11f5a147 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f5a14a and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f5a14f lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11f5a153 mov eax, edi */
  EAX = (EDI);
L_11f5a155:;
  /* 11f5a155 pop edi */
  EDI = (pop32());
  /* 11f5a156 pop esi */
  ESI = (pop32());
  /* 11f5a157 ret  */
  ESPCHK(0x11f5a0e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a158 @ 0x11f5a158 (318 bytes, 123 insns) */
void f_11f5a158(void) {
  FTRACE(0x11f5a158u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a158 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5a159 mov ebp, esp */
  EBP = (ESP);
  /* 11f5a15b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5a15d push 0x11f5c6c8 */
  push32((uint32_t)(0x11f5c6c8u));
  /* 11f5a162 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f5a167 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f5a16d push eax */
  push32((uint32_t)(EAX));
  /* 11f5a16e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f5a175 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a178 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a179 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a17a push edi */
  push32((uint32_t)(EDI));
  /* 11f5a17b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5a17e mov eax, dword ptr [0x11f62e1c] */
  EAX = (r32((uint32_t)(0x11f62e1c)));
  /* 11f5a183 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5a185 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a187 jne 0x11f5a1c7 */
  if (!C.zf) goto L_11f5a1c7;
  /* 11f5a189 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f5a18c push eax */
  push32((uint32_t)(EAX));
  /* 11f5a18d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a18f pop esi */
  ESI = (pop32());
  /* 11f5a190 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a191 push 0x11f5c6c4 */
  push32((uint32_t)(0x11f5c6c4u));
  /* 11f5a196 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a197 call dword ptr [0x11f5c01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c01c))), 0x11f5a19du);
  /* 11f5a19d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a19f je 0x11f5a1a5 */
  if (C.zf) goto L_11f5a1a5;
  /* 11f5a1a1 mov eax, esi */
  EAX = (ESI);
  /* 11f5a1a3 jmp 0x11f5a1c2 */
  goto L_11f5a1c2;
L_11f5a1a5:;
  /* 11f5a1a5 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f5a1a8 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a1a9 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a1aa push 0x11f5c6c0 */
  push32((uint32_t)(0x11f5c6c0u));
  /* 11f5a1af push esi */
  push32((uint32_t)(ESI));
  /* 11f5a1b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a1b1 call dword ptr [0x11f5c020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c020))), 0x11f5a1b7u);
  /* 11f5a1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a1b9 je 0x11f5a28d */
  if (C.zf) goto L_11f5a28d;
  /* 11f5a1bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5a1c1 pop eax */
  EAX = (pop32());
L_11f5a1c2:;
  /* 11f5a1c2 mov dword ptr [0x11f62e1c], eax */
  w32((uint32_t)(0x11f62e1c), (EAX));
L_11f5a1c7:;
  /* 11f5a1c7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a1ca jne 0x11f5a1f0 */
  if (!C.zf) goto L_11f5a1f0;
  /* 11f5a1cc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f5a1cf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a1d1 jne 0x11f5a1d8 */
  if (!C.zf) goto L_11f5a1d8;
  /* 11f5a1d3 mov eax, dword ptr [0x11f62de0] */
  EAX = (r32((uint32_t)(0x11f62de0)));
L_11f5a1d8:;
  /* 11f5a1d8 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5a1db push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a1de push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a1e1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a1e4 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a1e5 call dword ptr [0x11f5c020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c020))), 0x11f5a1ebu);
  /* 11f5a1eb jmp 0x11f5a28f */
  goto L_11f5a28f;
L_11f5a1f0:;
  /* 11f5a1f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a1f3 jne 0x11f5a28d */
  if (!C.zf) goto L_11f5a28d;
  /* 11f5a1f9 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a1fc jne 0x11f5a206 */
  if (!C.zf) goto L_11f5a206;
  /* 11f5a1fe mov eax, dword ptr [0x11f62df0] */
  EAX = (r32((uint32_t)(0x11f62df0)));
  /* 11f5a203 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11f5a206:;
  /* 11f5a206 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a207 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a208 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a20b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a20e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f5a211 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5a213 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a215 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f5a218 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5a219 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a21a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5a21d call dword ptr [0x11f5c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c024))), 0x11f5a223u);
  /* 11f5a223 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f5a226 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a228 je 0x11f5a28d */
  if (C.zf) goto L_11f5a28d;
  /* 11f5a22a mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f5a22d lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11f5a230 mov eax, edi */
  EAX = (EDI);
  /* 11f5a232 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a235 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f5a237 call 0x11f59c60 */
  push32(0x11f5a23cu); f_11f59c60();
  /* 11f5a23c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5a23f mov esi, esp */
  ESI = (ESP);
  /* 11f5a241 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11f5a244 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a245 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a246 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a247 call 0x11f59110 */
  push32(0x11f5a24cu); f_11f59110();
  /* 11f5a24c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a24f jmp 0x11f5a25c */
  goto L_11f5a25c;
  /* 11f5a251 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a253 pop eax */
  EAX = (pop32());
  /* 11f5a254 ret  */
  ESPCHK(0x11f5a158u, _esp0);
  ESP += 4; return;
  /* 11f5a255 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f5a258 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5a25a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f5a25c:;
  /* 11f5a25c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5a260 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a262 je 0x11f5a28d */
  if (C.zf) goto L_11f5a28d;
  /* 11f5a264 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11f5a267 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a268 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a26b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a26e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a270 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5a273 call dword ptr [0x11f5c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c024))), 0x11f5a279u);
  /* 11f5a279 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a27b je 0x11f5a28d */
  if (C.zf) goto L_11f5a28d;
  /* 11f5a27d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5a280 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a281 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a282 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a285 call dword ptr [0x11f5c01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c01c))), 0x11f5a28bu);
  /* 11f5a28b jmp 0x11f5a28f */
  goto L_11f5a28f;
L_11f5a28d:;
  /* 11f5a28d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5a28f:;
  /* 11f5a28f lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11f5a292 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f5a295 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f5a29c pop edi */
  EDI = (pop32());
  /* 11f5a29d pop esi */
  ESI = (pop32());
  /* 11f5a29e pop ebx */
  EBX = (pop32());
  /* 11f5a29f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5a2a0 ret  */
  ESPCHK(0x11f5a158u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a1 @ 0x11f5a2a1 (511 bytes, 193 insns) */
void f_11f5a2a1(void) {
  FTRACE(0x11f5a2a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a2a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5a2a2 mov ebp, esp */
  EBP = (ESP);
  /* 11f5a2a4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5a2a6 push 0x11f5c6d8 */
  push32((uint32_t)(0x11f5c6d8u));
  /* 11f5a2ab push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f5a2b0 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f5a2b6 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a2b7 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f5a2be sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a2c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a2c2 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a2c3 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5a2c7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5a2c9 cmp dword ptr [0x11f62e20], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62e20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a2cf jne 0x11f5a317 */
  if (!C.zf) goto L_11f5a317;
  /* 11f5a2d1 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2d2 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a2d5 pop ebx */
  EBX = (pop32());
  /* 11f5a2d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a2d7 push 0x11f5c6c4 */
  push32((uint32_t)(0x11f5c6c4u));
  /* 11f5a2dc mov esi, 0x100 */
  ESI = (0x100u);
  /* 11f5a2e1 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a2e2 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2e3 call dword ptr [0x11f5c014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c014))), 0x11f5a2e9u);
  /* 11f5a2e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a2eb je 0x11f5a2f5 */
  if (C.zf) goto L_11f5a2f5;
  /* 11f5a2ed mov dword ptr [0x11f62e20], ebx */
  w32((uint32_t)(0x11f62e20), (EBX));
  /* 11f5a2f3 jmp 0x11f5a317 */
  goto L_11f5a317;
L_11f5a2f5:;
  /* 11f5a2f5 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2f6 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a2f8 push 0x11f5c6c0 */
  push32((uint32_t)(0x11f5c6c0u));
  /* 11f5a2fd push esi */
  push32((uint32_t)(ESI));
  /* 11f5a2fe push edi */
  push32((uint32_t)(EDI));
  /* 11f5a2ff call dword ptr [0x11f5c018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c018))), 0x11f5a305u);
  /* 11f5a305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a307 je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a30d mov dword ptr [0x11f62e20], 2 */
  w32((uint32_t)(0x11f62e20), (0x2u));
L_11f5a317:;
  /* 11f5a317 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a31a jle 0x11f5a32c */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a32c;
  /* 11f5a31c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5a31f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a322 call 0x11f5a4c5 */
  push32(0x11f5a327u); f_11f5a4c5();
  /* 11f5a327 pop ecx */
  ECX = (pop32());
  /* 11f5a328 pop ecx */
  ECX = (pop32());
  /* 11f5a329 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f5a32c:;
  /* 11f5a32c mov eax, dword ptr [0x11f62e20] */
  EAX = (r32((uint32_t)(0x11f62e20)));
  /* 11f5a331 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a334 jne 0x11f5a353 */
  if (!C.zf) goto L_11f5a353;
  /* 11f5a336 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5a339 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5a33c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5a33f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a342 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a345 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a348 call dword ptr [0x11f5c018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c018))), 0x11f5a34eu);
  /* 11f5a34e jmp 0x11f5a431 */
  goto L_11f5a431;
L_11f5a353:;
  /* 11f5a353 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a356 jne 0x11f5a42f */
  if (!C.zf) goto L_11f5a42f;
  /* 11f5a35c cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a35f jne 0x11f5a369 */
  if (!C.zf) goto L_11f5a369;
  /* 11f5a361 mov eax, dword ptr [0x11f62df0] */
  EAX = (r32((uint32_t)(0x11f62df0)));
  /* 11f5a366 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11f5a369:;
  /* 11f5a369 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a36a push edi */
  push32((uint32_t)(EDI));
  /* 11f5a36b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5a36e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a371 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f5a374 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5a376 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a378 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f5a37b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5a37c push eax */
  push32((uint32_t)(EAX));
  /* 11f5a37d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5a380 call dword ptr [0x11f5c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c024))), 0x11f5a386u);
  /* 11f5a386 mov ebx, eax */
  EBX = (EAX);
  /* 11f5a388 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11f5a38b cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a38d je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a393 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f5a396 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11f5a399 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a39c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f5a39e call 0x11f59c60 */
  push32(0x11f5a3a3u); f_11f59c60();
  /* 11f5a3a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5a3a6 mov eax, esp */
  EAX = (ESP);
  /* 11f5a3a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5a3ab or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5a3af jmp 0x11f5a3c4 */
  goto L_11f5a3c4;
  /* 11f5a3b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a3b3 pop eax */
  EAX = (pop32());
  /* 11f5a3b4 ret  */
  ESPCHK(0x11f5a2a1u, _esp0);
  ESP += 4; return;
  /* 11f5a3b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f5a3b8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5a3ba mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11f5a3bd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5a3c1 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11f5a3c4:;
  /* 11f5a3c4 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a3c7 je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a3c9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a3ca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5a3cd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5a3d0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5a3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a3d5 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5a3d8 call dword ptr [0x11f5c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c024))), 0x11f5a3deu);
  /* 11f5a3de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a3e0 je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a3e2 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a3e3 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a3e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a3e5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5a3e8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a3eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a3ee call dword ptr [0x11f5c014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c014))), 0x11f5a3f4u);
  /* 11f5a3f4 mov esi, eax */
  ESI = (EAX);
  /* 11f5a3f6 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11f5a3f9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a3fb je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a3fd test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11f5a401 je 0x11f5a443 */
  if (C.zf) goto L_11f5a443;
  /* 11f5a403 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a406 je 0x11f5a4be */
  if (C.zf) goto L_11f5a4be;
  /* 11f5a40c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a40f jg 0x11f5a42f */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5a42f;
  /* 11f5a411 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5a414 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5a417 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a418 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5a41b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a41e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a421 call dword ptr [0x11f5c014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c014))), 0x11f5a427u);
  /* 11f5a427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a429 jne 0x11f5a4be */
  if (!C.zf) goto L_11f5a4be;
L_11f5a42f:;
  /* 11f5a42f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5a431:;
  /* 11f5a431 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11f5a434 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f5a437 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f5a43e pop edi */
  EDI = (pop32());
  /* 11f5a43f pop esi */
  ESI = (pop32());
  /* 11f5a440 pop ebx */
  EBX = (pop32());
  /* 11f5a441 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5a442 ret  */
  ESPCHK(0x11f5a2a1u, _esp0);
  ESP += 4; return;
L_11f5a443:;
  /* 11f5a443 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f5a44a lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11f5a44d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a450 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f5a452 call 0x11f59c60 */
  push32(0x11f5a457u); f_11f59c60();
  /* 11f5a457 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5a45a mov ebx, esp */
  EBX = (ESP);
  /* 11f5a45c mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11f5a45f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5a463 jmp 0x11f5a477 */
  goto L_11f5a477;
  /* 11f5a465 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a467 pop eax */
  EAX = (pop32());
  /* 11f5a468 ret  */
  ESPCHK(0x11f5a2a1u, _esp0);
  ESP += 4; return;
  /* 11f5a469 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f5a46c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5a46e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5a470 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5a474 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11f5a477:;
  /* 11f5a477 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a479 je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a47b push esi */
  push32((uint32_t)(ESI));
  /* 11f5a47c push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a47d push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f5a480 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5a483 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5a486 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5a489 call dword ptr [0x11f5c014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c014))), 0x11f5a48fu);
  /* 11f5a48f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a491 je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
  /* 11f5a493 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a496 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a497 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a498 jne 0x11f5a49e */
  if (!C.zf) goto L_11f5a49e;
  /* 11f5a49a push edi */
  push32((uint32_t)(EDI));
  /* 11f5a49b push edi */
  push32((uint32_t)(EDI));
  /* 11f5a49c jmp 0x11f5a4a4 */
  goto L_11f5a4a4;
L_11f5a49e:;
  /* 11f5a49e push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5a4a1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11f5a4a4:;
  /* 11f5a4a4 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a4a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a4a6 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f5a4ab push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5a4ae call dword ptr [0x11f5c0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0ec))), 0x11f5a4b4u);
  /* 11f5a4b4 mov esi, eax */
  ESI = (EAX);
  /* 11f5a4b6 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a4b8 je 0x11f5a42f */
  if (C.zf) goto L_11f5a42f;
L_11f5a4be:;
  /* 11f5a4be mov eax, esi */
  EAX = (ESI);
  /* 11f5a4c0 jmp 0x11f5a431 */
  goto L_11f5a431;
}

/* FUN_1000a4c5 @ 0x11f5a4c5 (43 bytes, 20 insns) */
void f_11f5a4c5(void) {
  FTRACE(0x11f5a4c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a4c5 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5a4c9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5a4cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f5a4cf push esi */
  push32((uint32_t)(ESI));
  /* 11f5a4d0 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11f5a4d3 je 0x11f5a4e2 */
  if (C.zf) goto L_11f5a4e2;
L_11f5a4d5:;
  /* 11f5a4d5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a4d8 je 0x11f5a4e2 */
  if (C.zf) goto L_11f5a4e2;
  /* 11f5a4da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5a4db mov esi, ecx */
  ESI = (ECX);
  /* 11f5a4dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f5a4de test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5a4e0 jne 0x11f5a4d5 */
  if (!C.zf) goto L_11f5a4d5;
L_11f5a4e2:;
  /* 11f5a4e2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a4e5 pop esi */
  ESI = (pop32());
  /* 11f5a4e6 jne 0x11f5a4ed */
  if (!C.zf) goto L_11f5a4ed;
  /* 11f5a4e8 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a4ec ret  */
  ESPCHK(0x11f5a4c5u, _esp0);
  ESP += 4; return;
L_11f5a4ed:;
  /* 11f5a4ed mov eax, edx */
  EAX = (EDX);
  /* 11f5a4ef ret  */
  ESPCHK(0x11f5a4c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4f0 @ 0x11f5a4f0 (33 bytes, 15 insns) */
void f_11f5a4f0(void) {
  FTRACE(0x11f5a4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a4f0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5a4f4 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a4f5 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f5a4f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5a4fb lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11f5a4fe cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a500 jb 0x11f5a506 */
  if (C.cf) goto L_11f5a506;
  /* 11f5a502 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a504 jae 0x11f5a509 */
  if (!C.cf) goto L_11f5a509;
L_11f5a506:;
  /* 11f5a506 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a508 pop eax */
  EAX = (pop32());
L_11f5a509:;
  /* 11f5a509 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f5a50d pop esi */
  ESI = (pop32());
  /* 11f5a50e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f5a510 ret  */
  ESPCHK(0x11f5a4f0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11f5a511 (94 bytes, 38 insns) */
void f_11f5a511(void) {
  FTRACE(0x11f5a511u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a511 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a512 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5a516 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a517 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f5a51b push esi */
  push32((uint32_t)(ESI));
  /* 11f5a51c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11f5a51e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f5a520 call 0x11f5a4f0 */
  push32(0x11f5a525u); f_11f5a4f0();
  /* 11f5a525 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a52a je 0x11f5a543 */
  if (C.zf) goto L_11f5a543;
  /* 11f5a52c lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11f5a52f push eax */
  push32((uint32_t)(EAX));
  /* 11f5a530 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a532 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11f5a534 call 0x11f5a4f0 */
  push32(0x11f5a539u); f_11f5a4f0();
  /* 11f5a539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a53c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a53e je 0x11f5a543 */
  if (C.zf) goto L_11f5a543;
  /* 11f5a540 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11f5a543:;
  /* 11f5a543 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11f5a546 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a547 push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11f5a54a push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11f5a54c call 0x11f5a4f0 */
  push32(0x11f5a551u); f_11f5a4f0();
  /* 11f5a551 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a556 je 0x11f5a55b */
  if (C.zf) goto L_11f5a55b;
  /* 11f5a558 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11f5a55b:;
  /* 11f5a55b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11f5a55e push eax */
  push32((uint32_t)(EAX));
  /* 11f5a55f push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11f5a562 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11f5a564 call 0x11f5a4f0 */
  push32(0x11f5a569u); f_11f5a4f0();
  /* 11f5a569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a56c pop edi */
  EDI = (pop32());
  /* 11f5a56d pop esi */
  ESI = (pop32());
  /* 11f5a56e ret  */
  ESPCHK(0x11f5a511u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a56f @ 0x11f5a56f (46 bytes, 21 insns) */
void f_11f5a56f(void) {
  FTRACE(0x11f5a56fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a56f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5a573 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a574 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a575 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11f5a577 mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11f5a57a mov ecx, esi */
  ECX = (ESI);
  /* 11f5a57c add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a57e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11f5a580 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11f5a583 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11f5a586 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11f5a588 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f5a58b mov edx, edi */
  EDX = (EDI);
  /* 11f5a58d mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11f5a590 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11f5a593 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f5a595 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5a597 pop edi */
  EDI = (pop32());
  /* 11f5a598 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f5a59b pop esi */
  ESI = (pop32());
  /* 11f5a59c ret  */
  ESPCHK(0x11f5a56fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a59d @ 0x11f5a59d (45 bytes, 21 insns) */
void f_11f5a59d(void) {
  FTRACE(0x11f5a59du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a59d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f5a5a1 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a5a2 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a5a3 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f5a5a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f5a5a9 mov esi, edx */
  ESI = (EDX);
  /* 11f5a5ab mov edi, ecx */
  EDI = (ECX);
  /* 11f5a5ad shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11f5a5b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f5a5b2 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11f5a5b4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f5a5b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f5a5b9 shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11f5a5bc shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f5a5be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f5a5c0 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f5a5c2 pop edi */
  EDI = (pop32());
  /* 11f5a5c3 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f5a5c6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f5a5c8 pop esi */
  ESI = (pop32());
  /* 11f5a5c9 ret  */
  ESPCHK(0x11f5a59du, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5ca @ 0x11f5a5ca (199 bytes, 76 insns) */
void f_11f5a5ca(void) {
  FTRACE(0x11f5a5cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a5ca push ebp */
  push32((uint32_t)(EBP));
  /* 11f5a5cb mov ebp, esp */
  EBP = (ESP);
  /* 11f5a5cd sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a5d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5a5d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a5d4 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5a5d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5a5d9 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a5db push esi */
  push32((uint32_t)(ESI));
  /* 11f5a5dc mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11f5a5e3 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11f5a5e5 mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11f5a5e8 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11f5a5eb jbe 0x11f5a63e */
  if ((C.cf||C.zf)) goto L_11f5a63e;
  /* 11f5a5ed push edi */
  push32((uint32_t)(EDI));
  /* 11f5a5ee mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11f5a5f1:;
  /* 11f5a5f1 mov esi, ebx */
  ESI = (EBX);
  /* 11f5a5f3 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11f5a5f6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5a5f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5a5f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a5f9 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5a5fa call 0x11f5a56f */
  push32(0x11f5a5ffu); f_11f5a56f();
  /* 11f5a5ff push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a600 call 0x11f5a56f */
  push32(0x11f5a605u); f_11f5a56f();
  /* 11f5a605 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5a608 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a609 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a60a call 0x11f5a511 */
  push32(0x11f5a60fu); f_11f5a511();
  /* 11f5a60f push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a610 call 0x11f5a56f */
  push32(0x11f5a615u); f_11f5a56f();
  /* 11f5a615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5a618 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11f5a61c and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f5a620 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f5a623 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f5a626 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5a629 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a62a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a62b call 0x11f5a511 */
  push32(0x11f5a630u); f_11f5a511();
  /* 11f5a630 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5a633 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11f5a636 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11f5a639 jne 0x11f5a5f1 */
  if (!C.zf) goto L_11f5a5f1;
  /* 11f5a63b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5a63d pop edi */
  EDI = (pop32());
L_11f5a63e:;
  /* 11f5a63e cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a641 jne 0x11f5a66b */
  if (!C.zf) goto L_11f5a66b;
  /* 11f5a643 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f5a646 mov eax, ecx */
  EAX = (ECX);
  /* 11f5a648 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f5a64b mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11f5a64e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f5a650 mov esi, eax */
  ESI = (EAX);
  /* 11f5a652 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11f5a655 shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11f5a658 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11f5a65a shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f5a65d add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5a664 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11f5a667 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11f5a669 jmp 0x11f5a63e */
  goto L_11f5a63e;
L_11f5a66b:;
  /* 11f5a66b mov esi, 0x8000 */
  ESI = (0x8000u);
L_11f5a670:;
  /* 11f5a670 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11f5a673 jne 0x11f5a685 */
  if (!C.zf) goto L_11f5a685;
  /* 11f5a675 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a676 call 0x11f5a56f */
  push32(0x11f5a67bu); f_11f5a56f();
  /* 11f5a67b add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5a682 pop ecx */
  ECX = (pop32());
  /* 11f5a683 jmp 0x11f5a670 */
  goto L_11f5a670;
L_11f5a685:;
  /* 11f5a685 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f5a689 pop esi */
  ESI = (pop32());
  /* 11f5a68a mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11f5a68e pop ebx */
  EBX = (pop32());
  /* 11f5a68f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5a690 ret  */
  ESPCHK(0x11f5a5cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000a691 @ 0x11f5a691 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_11f5a691(void) {
  FTRACE(0x11f5a691u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5a691 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5a692 mov ebp, esp */
  EBP = (ESP);
  /* 11f5a694 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a697 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5a698 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a699 push edi */
  push32((uint32_t)(EDI));
  /* 11f5a69a mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5a69d lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11f5a6a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a6a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f5a6a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5a6a7 pop edx */
  EDX = (pop32());
  /* 11f5a6a8 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f5a6ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f5a6ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f5a6b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f5a6b4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5a6b7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f5a6ba mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f5a6bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f5a6c0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f5a6c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f5a6c6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f5a6c9 mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11f5a6cc:;
  /* 11f5a6cc mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11f5a6ce cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a6d1 je 0x11f5a6e2 */
  if (C.zf) goto L_11f5a6e2;
  /* 11f5a6d3 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a6d6 je 0x11f5a6e2 */
  if (C.zf) goto L_11f5a6e2;
  /* 11f5a6d8 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a6db je 0x11f5a6e2 */
  if (C.zf) goto L_11f5a6e2;
  /* 11f5a6dd cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a6e0 jne 0x11f5a6e5 */
  if (!C.zf) goto L_11f5a6e5;
L_11f5a6e2:;
  /* 11f5a6e2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a6e3 jmp 0x11f5a6cc */
  goto L_11f5a6cc;
L_11f5a6e5:;
  /* 11f5a6e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5a6e7 pop esi */
  ESI = (pop32());
L_11f5a6e8:;
  /* 11f5a6e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5a6ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a6eb cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a6ee ja 0x11f5a96b */
  if ((!C.cf&&!C.zf)) goto L_11f5a96b;
  /* 11f5a6f4 jmp dword ptr [eax*4 + 0x11f5ab32] */
  switch (EAX) {
    case 0: goto L_11f5a6fb;
    case 1: goto L_11f5a74a;
    case 2: goto L_11f5a7a1;
    case 3: goto L_11f5a7cb;
    case 4: goto L_11f5a826;
    case 5: goto L_11f5a89d;
    case 6: goto L_11f5a8d3;
    case 7: goto L_11f5a91d;
    case 8: goto L_11f5a8fc;
    case 9: goto L_11f5a981;
    case 10: goto L_11f5a96b;
    case 11: goto L_11f5a937;
    default: x86_unimpl("switch@0x11f5a6f4 out of table"); return;
  }
L_11f5a6fb:;
  /* 11f5a6fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a6fe jl 0x11f5a70c */
  if ((C.sf!=C.of)) goto L_11f5a70c;
  /* 11f5a700 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a703 jg 0x11f5a70c */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5a70c;
L_11f5a705:;
  /* 11f5a705 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f5a707 jmp 0x11f5a929 */
  goto L_11f5a929;
L_11f5a70c:;
  /* 11f5a70c cmp bl, byte ptr [0x11f62064] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11f62064))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a712 jne 0x11f5a71b */
  if (!C.zf) goto L_11f5a71b;
L_11f5a714:;
  /* 11f5a714 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f5a716 jmp 0x11f5a961 */
  goto L_11f5a961;
L_11f5a71b:;
  /* 11f5a71b movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11f5a71e sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a721 je 0x11f5a741 */
  if (C.zf) goto L_11f5a741;
  /* 11f5a723 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5a724 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5a725 je 0x11f5a735 */
  if (C.zf) goto L_11f5a735;
  /* 11f5a727 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a72a jne 0x11f5aa04 */
  if (!C.zf) goto L_11f5aa04;
  /* 11f5a730 jmp 0x11f5a7c4 */
  goto L_11f5a7c4;
L_11f5a735:;
  /* 11f5a735 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5a737 mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 11f5a73e pop eax */
  EAX = (pop32());
  /* 11f5a73f jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a741:;
  /* 11f5a741 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11f5a745 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5a747 pop eax */
  EAX = (pop32());
  /* 11f5a748 jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a74a:;
  /* 11f5a74a cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a74d mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f5a750 jl 0x11f5a757 */
  if ((C.sf!=C.of)) goto L_11f5a757;
  /* 11f5a752 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a755 jle 0x11f5a705 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a705;
L_11f5a757:;
  /* 11f5a757 cmp bl, byte ptr [0x11f62064] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11f62064))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a75d je 0x11f5a81f */
  if (C.zf) goto L_11f5a81f;
  /* 11f5a763 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a766 je 0x11f5a799 */
  if (C.zf) goto L_11f5a799;
  /* 11f5a768 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a76b je 0x11f5a799 */
  if (C.zf) goto L_11f5a799;
  /* 11f5a76d cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a770 je 0x11f5a7c4 */
  if (C.zf) goto L_11f5a7c4;
L_11f5a772:;
  /* 11f5a772 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a775 jle 0x11f5aa04 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5aa04;
  /* 11f5a77b cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a77e jle 0x11f5a792 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a792;
  /* 11f5a780 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a783 jle 0x11f5aa04 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5aa04;
  /* 11f5a789 cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a78c jg 0x11f5aa04 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5aa04;
L_11f5a792:;
  /* 11f5a792 push 6 */
  push32((uint32_t)(0x6u));
  /* 11f5a794 jmp 0x11f5a961 */
  goto L_11f5a961;
L_11f5a799:;
  /* 11f5a799 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f5a79a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f5a79c jmp 0x11f5a961 */
  goto L_11f5a961;
L_11f5a7a1:;
  /* 11f5a7a1 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a7a4 jl 0x11f5a7af */
  if ((C.sf!=C.of)) goto L_11f5a7af;
  /* 11f5a7a6 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a7a9 jle 0x11f5a705 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a705;
L_11f5a7af:;
  /* 11f5a7af cmp bl, byte ptr [0x11f62064] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11f62064))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a7b5 je 0x11f5a714 */
  if (C.zf) goto L_11f5a714;
  /* 11f5a7bb cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a7be jne 0x11f5a979 */
  if (!C.zf) goto L_11f5a979;
L_11f5a7c4:;
  /* 11f5a7c4 mov eax, edx */
  EAX = (EDX);
  /* 11f5a7c6 jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a7cb:;
  /* 11f5a7cb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f5a7ce:;
  /* 11f5a7ce cmp dword ptr [0x11f62060], edx */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a7d4 jle 0x11f5a7e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a7e7;
  /* 11f5a7d6 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a7d9 push esi */
  push32((uint32_t)(ESI));
  /* 11f5a7da push eax */
  push32((uint32_t)(EAX));
  /* 11f5a7db call 0x11f588fb */
  push32(0x11f5a7e0u); f_11f588fb();
  /* 11f5a7e0 pop ecx */
  ECX = (pop32());
  /* 11f5a7e1 pop ecx */
  ECX = (pop32());
  /* 11f5a7e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a7e4 pop edx */
  EDX = (pop32());
  /* 11f5a7e5 jmp 0x11f5a7f5 */
  goto L_11f5a7f5;
L_11f5a7e7:;
  /* 11f5a7e7 mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5a7ed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a7f0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f5a7f3 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11f5a7f5:;
  /* 11f5a7f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a7f7 je 0x11f5a817 */
  if (C.zf) goto L_11f5a817;
  /* 11f5a7f9 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a7fd jae 0x11f5a80f */
  if (!C.cf) goto L_11f5a80f;
  /* 11f5a7ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5a802 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f5a805 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5a808 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11f5a80b mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 11f5a80d jmp 0x11f5a812 */
  goto L_11f5a812;
L_11f5a80f:;
  /* 11f5a80f inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11f5a812:;
  /* 11f5a812 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5a814 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a815 jmp 0x11f5a7ce */
  goto L_11f5a7ce;
L_11f5a817:;
  /* 11f5a817 cmp bl, byte ptr [0x11f62064] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11f62064))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a81d jne 0x11f5a886 */
  if (!C.zf) goto L_11f5a886;
L_11f5a81f:;
  /* 11f5a81f mov eax, esi */
  EAX = (ESI);
  /* 11f5a821 jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a826:;
  /* 11f5a826 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a82a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f5a82d mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f5a830 jne 0x11f5a83f */
  if (!C.zf) goto L_11f5a83f;
L_11f5a832:;
  /* 11f5a832 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a835 jne 0x11f5a83f */
  if (!C.zf) goto L_11f5a83f;
  /* 11f5a837 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11f5a83a mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5a83c inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a83d jmp 0x11f5a832 */
  goto L_11f5a832;
L_11f5a83f:;
  /* 11f5a83f cmp dword ptr [0x11f62060], edx */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a845 jle 0x11f5a858 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a858;
  /* 11f5a847 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a84a push esi */
  push32((uint32_t)(ESI));
  /* 11f5a84b push eax */
  push32((uint32_t)(EAX));
  /* 11f5a84c call 0x11f588fb */
  push32(0x11f5a851u); f_11f588fb();
  /* 11f5a851 pop ecx */
  ECX = (pop32());
  /* 11f5a852 pop ecx */
  ECX = (pop32());
  /* 11f5a853 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a855 pop edx */
  EDX = (pop32());
  /* 11f5a856 jmp 0x11f5a866 */
  goto L_11f5a866;
L_11f5a858:;
  /* 11f5a858 mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5a85e movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a861 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f5a864 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11f5a866:;
  /* 11f5a866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a868 je 0x11f5a886 */
  if (C.zf) goto L_11f5a886;
  /* 11f5a86a cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a86e jae 0x11f5a881 */
  if (!C.cf) goto L_11f5a881;
  /* 11f5a870 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5a873 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f5a876 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5a879 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11f5a87c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11f5a87f mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11f5a881:;
  /* 11f5a881 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5a883 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a884 jmp 0x11f5a83f */
  goto L_11f5a83f;
L_11f5a886:;
  /* 11f5a886 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a889 je 0x11f5a799 */
  if (C.zf) goto L_11f5a799;
  /* 11f5a88f cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a892 je 0x11f5a799 */
  if (C.zf) goto L_11f5a799;
  /* 11f5a898 jmp 0x11f5a772 */
  goto L_11f5a772;
L_11f5a89d:;
  /* 11f5a89d cmp dword ptr [0x11f62060], edx */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a8a3 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f5a8a6 jle 0x11f5a8b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a8b9;
  /* 11f5a8a8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a8ab push esi */
  push32((uint32_t)(ESI));
  /* 11f5a8ac push eax */
  push32((uint32_t)(EAX));
  /* 11f5a8ad call 0x11f588fb */
  push32(0x11f5a8b2u); f_11f588fb();
  /* 11f5a8b2 pop ecx */
  ECX = (pop32());
  /* 11f5a8b3 pop ecx */
  ECX = (pop32());
  /* 11f5a8b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5a8b6 pop edx */
  EDX = (pop32());
  /* 11f5a8b7 jmp 0x11f5a8c7 */
  goto L_11f5a8c7;
L_11f5a8b9:;
  /* 11f5a8b9 mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5a8bf movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a8c2 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f5a8c5 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11f5a8c7:;
  /* 11f5a8c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a8c9 je 0x11f5a979 */
  if (C.zf) goto L_11f5a979;
  /* 11f5a8cf mov eax, esi */
  EAX = (ESI);
  /* 11f5a8d1 jmp 0x11f5a92a */
  goto L_11f5a92a;
L_11f5a8d3:;
  /* 11f5a8d3 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11f5a8d6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a8d9 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11f5a8dc jl 0x11f5a8e3 */
  if ((C.sf!=C.of)) goto L_11f5a8e3;
  /* 11f5a8de cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a8e1 jle 0x11f5a927 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a927;
L_11f5a8e3:;
  /* 11f5a8e3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11f5a8e6 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a8e9 je 0x11f5a95f */
  if (C.zf) goto L_11f5a95f;
  /* 11f5a8eb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5a8ec dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5a8ed je 0x11f5a953 */
  if (C.zf) goto L_11f5a953;
  /* 11f5a8ef sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a8f2 jne 0x11f5aa07 */
  if (!C.zf) goto L_11f5aa07;
L_11f5a8f8:;
  /* 11f5a8f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f5a8fa jmp 0x11f5a961 */
  goto L_11f5a961;
L_11f5a8fc:;
  /* 11f5a8fc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11f5a8ff:;
  /* 11f5a8ff cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a902 jne 0x11f5a909 */
  if (!C.zf) goto L_11f5a909;
  /* 11f5a904 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5a906 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a907 jmp 0x11f5a8ff */
  goto L_11f5a8ff;
L_11f5a909:;
  /* 11f5a909 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a90c jl 0x11f5aa04 */
  if ((C.sf!=C.of)) goto L_11f5aa04;
  /* 11f5a912 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a915 jg 0x11f5aa04 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5aa04;
  /* 11f5a91b jmp 0x11f5a927 */
  goto L_11f5a927;
L_11f5a91d:;
  /* 11f5a91d cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a920 jl 0x11f5a930 */
  if ((C.sf!=C.of)) goto L_11f5a930;
  /* 11f5a922 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a925 jg 0x11f5a930 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5a930;
L_11f5a927:;
  /* 11f5a927 push 9 */
  push32((uint32_t)(0x9u));
L_11f5a929:;
  /* 11f5a929 pop eax */
  EAX = (pop32());
L_11f5a92a:;
  /* 11f5a92a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f5a92b jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a930:;
  /* 11f5a930 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5a933 jne 0x11f5a979 */
  if (!C.zf) goto L_11f5a979;
  /* 11f5a935 jmp 0x11f5a8f8 */
  goto L_11f5a8f8;
L_11f5a937:;
  /* 11f5a937 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a93b je 0x11f5a967 */
  if (C.zf) goto L_11f5a967;
  /* 11f5a93d movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11f5a940 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11f5a943 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5a946 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11f5a949 je 0x11f5a95f */
  if (C.zf) goto L_11f5a95f;
  /* 11f5a94b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5a94c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5a94d jne 0x11f5aa07 */
  if (!C.zf) goto L_11f5aa07;
L_11f5a953:;
  /* 11f5a953 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11f5a957 push 7 */
  push32((uint32_t)(0x7u));
  /* 11f5a959 pop eax */
  EAX = (pop32());
  /* 11f5a95a jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a95f:;
  /* 11f5a95f push 7 */
  push32((uint32_t)(0x7u));
L_11f5a961:;
  /* 11f5a961 pop eax */
  EAX = (pop32());
  /* 11f5a962 jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a967:;
  /* 11f5a967 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f5a969 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f5a96a pop eax */
  EAX = (pop32());
L_11f5a96b:;
  /* 11f5a96b cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a96e je 0x11f5aa09 */
  if (C.zf) goto L_11f5aa09;
  /* 11f5a974 jmp 0x11f5a6e8 */
  goto L_11f5a6e8;
L_11f5a979:;
  /* 11f5a979 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5a97c jmp 0x11f5aa09 */
  goto L_11f5aa09;
L_11f5a981:;
  /* 11f5a981 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11f5a988 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f5a98a:;
  /* 11f5a98a cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a991 jle 0x11f5a9a2 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a9a2;
  /* 11f5a993 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a996 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5a998 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a999 call 0x11f588fb */
  push32(0x11f5a99eu); f_11f588fb();
  /* 11f5a99e pop ecx */
  ECX = (pop32());
  /* 11f5a99f pop ecx */
  ECX = (pop32());
  /* 11f5a9a0 jmp 0x11f5a9b1 */
  goto L_11f5a9b1;
L_11f5a9a2:;
  /* 11f5a9a2 mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5a9a8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a9ab mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f5a9ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11f5a9b1:;
  /* 11f5a9b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a9b3 je 0x11f5a9d1 */
  if (C.zf) goto L_11f5a9d1;
  /* 11f5a9b5 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11f5a9b8 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11f5a9bb lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 11f5a9bf cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a9c5 jg 0x11f5a9cc */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5a9cc;
  /* 11f5a9c7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5a9c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5a9ca jmp 0x11f5a98a */
  goto L_11f5a98a;
L_11f5a9cc:;
  /* 11f5a9cc mov esi, 0x1451 */
  ESI = (0x1451u);
L_11f5a9d1:;
  /* 11f5a9d1 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_11f5a9d4:;
  /* 11f5a9d4 cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5a9db jle 0x11f5a9ec */
  if ((C.zf||C.sf!=C.of)) goto L_11f5a9ec;
  /* 11f5a9dd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a9e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5a9e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f5a9e3 call 0x11f588fb */
  push32(0x11f5a9e8u); f_11f588fb();
  /* 11f5a9e8 pop ecx */
  ECX = (pop32());
  /* 11f5a9e9 pop ecx */
  ECX = (pop32());
  /* 11f5a9ea jmp 0x11f5a9fb */
  goto L_11f5a9fb;
L_11f5a9ec:;
  /* 11f5a9ec mov ecx, dword ptr [0x11f61e50] */
  ECX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5a9f2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5a9f5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11f5a9f8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11f5a9fb:;
  /* 11f5a9fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5a9fd je 0x11f5aa04 */
  if (C.zf) goto L_11f5aa04;
  /* 11f5a9ff mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5aa01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5aa02 jmp 0x11f5a9d4 */
  goto L_11f5a9d4;
L_11f5aa04:;
  /* 11f5aa04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f5aa05 jmp 0x11f5aa09 */
  goto L_11f5aa09;
L_11f5aa07:;
  /* 11f5aa07 mov edi, ecx */
  EDI = (ECX);
L_11f5aa09:;
  /* 11f5aa09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5aa0c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa10 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11f5aa12 je 0x11f5aaf1 */
  if (C.zf) goto L_11f5aaf1;
  /* 11f5aa18 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f5aa1a pop eax */
  EAX = (pop32());
  /* 11f5aa1b cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa1e jbe 0x11f5aa35 */
  if ((C.cf||C.zf)) goto L_11f5aa35;
  /* 11f5aa20 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5aa24 jl 0x11f5aa29 */
  if ((C.sf!=C.of)) goto L_11f5aa29;
  /* 11f5aa26 inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11f5aa29:;
  /* 11f5aa29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f5aa2c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5aa2f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5aa30 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11f5aa33 jmp 0x11f5aa38 */
  goto L_11f5aa38;
L_11f5aa35:;
  /* 11f5aa35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11f5aa38:;
  /* 11f5aa38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa3c jbe 0x11f5aae7 */
  if ((C.cf||C.zf)) goto L_11f5aae7;
L_11f5aa42:;
  /* 11f5aa42 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5aa43 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5aa46 jne 0x11f5aa50 */
  if (!C.zf) goto L_11f5aa50;
  /* 11f5aa48 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11f5aa4b inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11f5aa4e jmp 0x11f5aa42 */
  goto L_11f5aa42;
L_11f5aa50:;
  /* 11f5aa50 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11f5aa53 push eax */
  push32((uint32_t)(EAX));
  /* 11f5aa54 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11f5aa57 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11f5aa5a push eax */
  push32((uint32_t)(EAX));
  /* 11f5aa5b call 0x11f5a5ca */
  push32(0x11f5aa60u); f_11f5a5ca();
  /* 11f5aa60 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f5aa63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5aa65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5aa68 cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa6b jge 0x11f5aa6f */
  if ((C.sf==C.of)) goto L_11f5aa6f;
  /* 11f5aa6d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f5aa6f:;
  /* 11f5aa6f add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5aa72 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa75 jne 0x11f5aa7a */
  if (!C.zf) goto L_11f5aa7a;
  /* 11f5aa77 add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f5aa7a:;
  /* 11f5aa7a cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa7d jne 0x11f5aa82 */
  if (!C.zf) goto L_11f5aa82;
  /* 11f5aa7f sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f5aa82:;
  /* 11f5aa82 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aa87 jle 0x11f5aab9 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5aab9;
  /* 11f5aa89 mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11f5aa90:;
  /* 11f5aa90 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5aa93 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5aa96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5aa99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11f5aa9c:;
  /* 11f5aa9c cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aaa0 je 0x11f5ab02 */
  if (C.zf) goto L_11f5ab02;
  /* 11f5aaa2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5aaa4 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11f5aaa9 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f5aaae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5aab0 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11f5aab7 jmp 0x11f5ab17 */
  goto L_11f5ab17;
L_11f5aab9:;
  /* 11f5aab9 cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aabe jge 0x11f5aac9 */
  if ((C.sf==C.of)) goto L_11f5aac9;
  /* 11f5aac0 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11f5aac7 jmp 0x11f5aa90 */
  goto L_11f5aa90;
L_11f5aac9:;
  /* 11f5aac9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f5aacc push eax */
  push32((uint32_t)(EAX));
  /* 11f5aacd lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11f5aad0 push eax */
  push32((uint32_t)(EAX));
  /* 11f5aad1 call 0x11f5b2ba */
  push32(0x11f5aad6u); f_11f5b2ba();
  /* 11f5aad6 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f5aad9 mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11f5aadc mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11f5aadf mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11f5aae2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5aae5 jmp 0x11f5aa9c */
  goto L_11f5aa9c;
L_11f5aae7:;
  /* 11f5aae7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5aae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5aaeb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f5aaed xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5aaef jmp 0x11f5aa9c */
  goto L_11f5aa9c;
L_11f5aaf1:;
  /* 11f5aaf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5aaf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5aaf5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f5aaf7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5aaf9 mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11f5ab00 jmp 0x11f5ab17 */
  goto L_11f5ab17;
L_11f5ab02:;
  /* 11f5ab02 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ab06 je 0x11f5ab17 */
  if (C.zf) goto L_11f5ab17;
  /* 11f5ab08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f5ab0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5ab0c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f5ab0e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5ab10 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11f5ab17:;
  /* 11f5ab17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5ab1a or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11f5ab1d pop edi */
  EDI = (pop32());
  /* 11f5ab1e mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11f5ab21 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11f5ab24 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11f5ab28 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f5ab2b pop esi */
  ESI = (pop32());
  /* 11f5ab2c mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11f5ab2f pop ebx */
  EBX = (pop32());
  /* 11f5ab30 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5ab31 ret  */
  ESPCHK(0x11f5a691u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab62 @ 0x11f5ab62 (659 bytes, 232 insns) */
void f_11f5ab62(void) {
  FTRACE(0x11f5ab62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5ab62 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5ab63 mov ebp, esp */
  EBP = (ESP);
  /* 11f5ab65 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5ab68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5ab6b push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ab6c mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f5ab6f push esi */
  push32((uint32_t)(ESI));
  /* 11f5ab70 mov ecx, eax */
  ECX = (EAX);
  /* 11f5ab72 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11f5ab77 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f5ab7d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f5ab7f test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11f5ab82 push edi */
  push32((uint32_t)(EDI));
  /* 11f5ab83 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11f5ab87 mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11f5ab8b mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11f5ab8f mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11f5ab93 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11f5ab97 mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11f5ab9b mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11f5ab9f mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11f5aba3 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11f5aba7 mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11f5abab mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11f5abaf mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11f5abb3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f5abba mov edx, eax */
  EDX = (EAX);
  /* 11f5abbc je 0x11f5abc4 */
  if (C.zf) goto L_11f5abc4;
  /* 11f5abbe mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11f5abc2 jmp 0x11f5abc8 */
  goto L_11f5abc8;
L_11f5abc4:;
  /* 11f5abc4 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11f5abc8:;
  /* 11f5abc8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5abcb test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11f5abce jne 0x11f5abee */
  if (!C.zf) goto L_11f5abee;
  /* 11f5abd0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f5abd2 jne 0x11f5abee */
  if (!C.zf) goto L_11f5abee;
  /* 11f5abd4 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5abd7 jne 0x11f5abee */
  if (!C.zf) goto L_11f5abee;
L_11f5abd9:;
  /* 11f5abd9 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11f5abdd mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11f5abe1 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11f5abe5 mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11f5abe9 jmp 0x11f5adec */
  goto L_11f5adec;
L_11f5abee:;
  /* 11f5abee cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5abf1 jne 0x11f5ac6d */
  if (!C.zf) goto L_11f5ac6d;
  /* 11f5abf3 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f5abf8 mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11f5abfd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5abff jne 0x11f5ac07 */
  if (!C.zf) goto L_11f5ac07;
  /* 11f5ac01 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ac05 je 0x11f5ac16 */
  if (C.zf) goto L_11f5ac16;
L_11f5ac07:;
  /* 11f5ac07 test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11f5ac0d jne 0x11f5ac16 */
  if (!C.zf) goto L_11f5ac16;
  /* 11f5ac0f push 0x11f5c708 */
  push32((uint32_t)(0x11f5c708u));
  /* 11f5ac14 jmp 0x11f5ac5c */
  goto L_11f5ac5c;
L_11f5ac16:;
  /* 11f5ac16 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11f5ac19 je 0x11f5ac30 */
  if (C.zf) goto L_11f5ac30;
  /* 11f5ac1b cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ac21 jne 0x11f5ac30 */
  if (!C.zf) goto L_11f5ac30;
  /* 11f5ac23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ac27 jne 0x11f5ac57 */
  if (!C.zf) goto L_11f5ac57;
  /* 11f5ac29 push 0x11f5c700 */
  push32((uint32_t)(0x11f5c700u));
  /* 11f5ac2e jmp 0x11f5ac3f */
  goto L_11f5ac3f;
L_11f5ac30:;
  /* 11f5ac30 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ac32 jne 0x11f5ac57 */
  if (!C.zf) goto L_11f5ac57;
  /* 11f5ac34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ac38 jne 0x11f5ac57 */
  if (!C.zf) goto L_11f5ac57;
  /* 11f5ac3a push 0x11f5c6f8 */
  push32((uint32_t)(0x11f5c6f8u));
L_11f5ac3f:;
  /* 11f5ac3f lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11f5ac42 push eax */
  push32((uint32_t)(EAX));
  /* 11f5ac43 call 0x11f59020 */
  push32(0x11f5ac48u); f_11f59020();
  /* 11f5ac48 pop ecx */
  ECX = (pop32());
  /* 11f5ac49 mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11f5ac4d pop ecx */
  ECX = (pop32());
L_11f5ac4e:;
  /* 11f5ac4e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5ac52 jmp 0x11f5adc5 */
  goto L_11f5adc5;
L_11f5ac57:;
  /* 11f5ac57 push 0x11f5c6f0 */
  push32((uint32_t)(0x11f5c6f0u));
L_11f5ac5c:;
  /* 11f5ac5c lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11f5ac5f push eax */
  push32((uint32_t)(EAX));
  /* 11f5ac60 call 0x11f59020 */
  push32(0x11f5ac65u); f_11f59020();
  /* 11f5ac65 pop ecx */
  ECX = (pop32());
  /* 11f5ac66 mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11f5ac6a pop ecx */
  ECX = (pop32());
  /* 11f5ac6b jmp 0x11f5ac4e */
  goto L_11f5ac4e;
L_11f5ac6d:;
  /* 11f5ac6d movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11f5ac70 mov ecx, edi */
  ECX = (EDI);
  /* 11f5ac72 mov esi, eax */
  ESI = (EAX);
  /* 11f5ac74 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11f5ac77 imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5ac7d shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11f5ac80 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11f5ac85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5ac87 lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11f5ac8a mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11f5ac8e imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5ac91 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11f5ac94 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11f5ac9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5ac9e sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11f5aca1 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11f5aca4 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11f5aca7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5aca9 push eax */
  push32((uint32_t)(EAX));
  /* 11f5acaa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5acad push eax */
  push32((uint32_t)(EAX));
  /* 11f5acae call 0x11f5b2ba */
  push32(0x11f5acb3u); f_11f5b2ba();
  /* 11f5acb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5acb6 cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5acbc jb 0x11f5acce */
  if (C.cf) goto L_11f5acce;
  /* 11f5acbe lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f5acc1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5acc2 push eax */
  push32((uint32_t)(EAX));
  /* 11f5acc3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5acc6 push eax */
  push32((uint32_t)(EAX));
  /* 11f5acc7 call 0x11f5b09a */
  push32(0x11f5acccu); f_11f5b09a();
  /* 11f5accc pop ecx */
  ECX = (pop32());
  /* 11f5accd pop ecx */
  ECX = (pop32());
L_11f5acce:;
  /* 11f5acce test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11f5acd2 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11f5acd5 je 0x11f5ace8 */
  if (C.zf) goto L_11f5ace8;
  /* 11f5acd7 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f5acda movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11f5acdd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5acdf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f5ace1 jg 0x11f5aceb */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5aceb;
  /* 11f5ace3 jmp 0x11f5abd9 */
  goto L_11f5abd9;
L_11f5ace8:;
  /* 11f5ace8 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11f5aceb:;
  /* 11f5aceb cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5acee jle 0x11f5acf3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5acf3;
  /* 11f5acf0 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11f5acf2 pop edi */
  EDI = (pop32());
L_11f5acf3:;
  /* 11f5acf3 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11f5acf7 sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5acfd and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11f5ad02 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11f5ad09:;
  /* 11f5ad09 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5ad0c push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad0d call 0x11f5a56f */
  push32(0x11f5ad12u); f_11f5a56f();
  /* 11f5ad12 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11f5ad15 pop ecx */
  ECX = (pop32());
  /* 11f5ad16 jne 0x11f5ad09 */
  if (!C.zf) goto L_11f5ad09;
  /* 11f5ad18 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5ad1a jge 0x11f5ad33 */
  if ((C.sf==C.of)) goto L_11f5ad33;
  /* 11f5ad1c neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5ad1e and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f5ad24 jle 0x11f5ad33 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5ad33;
L_11f5ad26:;
  /* 11f5ad26 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5ad29 push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad2a call 0x11f5a59d */
  push32(0x11f5ad2fu); f_11f5a59d();
  /* 11f5ad2f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f5ad30 pop ecx */
  ECX = (pop32());
  /* 11f5ad31 jne 0x11f5ad26 */
  if (!C.zf) goto L_11f5ad26;
L_11f5ad33:;
  /* 11f5ad33 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11f5ad36 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11f5ad39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f5ad3b mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11f5ad3e jle 0x11f5ad90 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5ad90;
  /* 11f5ad40 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11f5ad43:;
  /* 11f5ad43 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11f5ad46 lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11f5ad49 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5ad4a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5ad4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5ad4e push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad4f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5ad50 call 0x11f5a56f */
  push32(0x11f5ad55u); f_11f5a56f();
  /* 11f5ad55 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5ad58 push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad59 call 0x11f5a56f */
  push32(0x11f5ad5eu); f_11f5a56f();
  /* 11f5ad5e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f5ad61 push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad62 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5ad65 push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad66 call 0x11f5a511 */
  push32(0x11f5ad6bu); f_11f5a511();
  /* 11f5ad6b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11f5ad6e push eax */
  push32((uint32_t)(EAX));
  /* 11f5ad6f call 0x11f5a56f */
  push32(0x11f5ad74u); f_11f5a56f();
  /* 11f5ad74 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11f5ad77 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f5ad7a and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11f5ad7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5ad81 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f5ad83 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11f5ad86 dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11f5ad89 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f5ad8b jne 0x11f5ad43 */
  if (!C.zf) goto L_11f5ad43;
  /* 11f5ad8d mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11f5ad90:;
  /* 11f5ad90 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11f5ad93 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5ad94 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5ad95 cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5ad98 lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11f5ad9b jl 0x11f5adcd */
  if ((C.sf!=C.of)) goto L_11f5adcd;
L_11f5ad9d:;
  /* 11f5ad9d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ad9f jb 0x11f5adb0 */
  if (C.cf) goto L_11f5adb0;
  /* 11f5ada1 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5ada4 jne 0x11f5adac */
  if (!C.zf) goto L_11f5adac;
  /* 11f5ada6 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11f5ada9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5adaa jmp 0x11f5ad9d */
  goto L_11f5ad9d;
L_11f5adac:;
  /* 11f5adac cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5adae jae 0x11f5adb4 */
  if (!C.cf) goto L_11f5adb4;
L_11f5adb0:;
  /* 11f5adb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5adb1 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11f5adb4:;
  /* 11f5adb4 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11f5adb6:;
  /* 11f5adb6 sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5adb8 sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5adba mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11f5adbd movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11f5adc0 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11f5adc5:;
  /* 11f5adc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f5adc8:;
  /* 11f5adc8 pop edi */
  EDI = (pop32());
  /* 11f5adc9 pop esi */
  ESI = (pop32());
  /* 11f5adca pop ebx */
  EBX = (pop32());
  /* 11f5adcb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5adcc ret  */
  ESPCHK(0x11f5ab62u, _esp0);
  ESP += 4; return;
L_11f5adcd:;
  /* 11f5adcd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5adcf jb 0x11f5addd */
  if (C.cf) goto L_11f5addd;
  /* 11f5add1 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5add4 jne 0x11f5add9 */
  if (!C.zf) goto L_11f5add9;
  /* 11f5add6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5add7 jmp 0x11f5adcd */
  goto L_11f5adcd;
L_11f5add9:;
  /* 11f5add9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5addb jae 0x11f5adb6 */
  if (!C.cf) goto L_11f5adb6;
L_11f5addd:;
  /* 11f5addd and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11f5ade1 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11f5ade5 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11f5ade9 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11f5adec:;
  /* 11f5adec and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11f5adf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5adf2 pop eax */
  EAX = (pop32());
  /* 11f5adf3 jmp 0x11f5adc8 */
  goto L_11f5adc8;
}

/* FUN_1000adf5 @ 0x11f5adf5 (111 bytes, 44 insns) */
void f_11f5adf5(void) {
  FTRACE(0x11f5adf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5adf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5adf6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5adf8 cmp dword ptr [0x11f62de0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62de0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5adfe jne 0x11f5ae13 */
  if (!C.zf) goto L_11f5ae13;
  /* 11f5ae00 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5ae04 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae07 jl 0x11f5ae62 */
  if ((C.sf!=C.of)) goto L_11f5ae62;
  /* 11f5ae09 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae0c jg 0x11f5ae62 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5ae62;
  /* 11f5ae0e sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5ae11 pop ebx */
  EBX = (pop32());
  /* 11f5ae12 ret  */
  ESPCHK(0x11f5adf5u, _esp0);
  ESP += 4; return;
L_11f5ae13:;
  /* 11f5ae13 push esi */
  push32((uint32_t)(ESI));
  /* 11f5ae14 mov esi, 0x11f62ea8 */
  ESI = (0x11f62ea8u);
  /* 11f5ae19 push edi */
  push32((uint32_t)(EDI));
  /* 11f5ae1a push esi */
  push32((uint32_t)(ESI));
  /* 11f5ae1b call dword ptr [0x11f5c03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c03c))), 0x11f5ae21u);
  /* 11f5ae21 cmp dword ptr [0x11f62ea4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62ea4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae27 mov edi, dword ptr [0x11f5c040] */
  EDI = (r32((uint32_t)(0x11f5c040)));
  /* 11f5ae2d je 0x11f5ae3d */
  if (C.zf) goto L_11f5ae3d;
  /* 11f5ae2f push esi */
  push32((uint32_t)(ESI));
  /* 11f5ae30 call edi */
  call_ind((uint32_t)(EDI), 0x11f5ae32u);
  /* 11f5ae32 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f5ae34 call 0x11f5637c */
  push32(0x11f5ae39u); f_11f5637c();
  /* 11f5ae39 pop ecx */
  ECX = (pop32());
  /* 11f5ae3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5ae3c pop ebx */
  EBX = (pop32());
L_11f5ae3d:;
  /* 11f5ae3d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f5ae41 call 0x11f5ae64 */
  push32(0x11f5ae46u); f_11f5ae64();
  /* 11f5ae46 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f5ae48 pop ecx */
  ECX = (pop32());
  /* 11f5ae49 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f5ae4d je 0x11f5ae59 */
  if (C.zf) goto L_11f5ae59;
  /* 11f5ae4f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f5ae51 call 0x11f563dd */
  push32(0x11f5ae56u); f_11f563dd();
  /* 11f5ae56 pop ecx */
  ECX = (pop32());
  /* 11f5ae57 jmp 0x11f5ae5c */
  goto L_11f5ae5c;
L_11f5ae59:;
  /* 11f5ae59 push esi */
  push32((uint32_t)(ESI));
  /* 11f5ae5a call edi */
  call_ind((uint32_t)(EDI), 0x11f5ae5cu);
L_11f5ae5c:;
  /* 11f5ae5c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f5ae60 pop edi */
  EDI = (pop32());
  /* 11f5ae61 pop esi */
  ESI = (pop32());
L_11f5ae62:;
  /* 11f5ae62 pop ebx */
  EBX = (pop32());
  /* 11f5ae63 ret  */
  ESPCHK(0x11f5adf5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae64 @ 0x11f5ae64 (204 bytes, 71 insns) */
void f_11f5ae64(void) {
  FTRACE(0x11f5ae64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5ae64 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5ae65 mov ebp, esp */
  EBP = (ESP);
  /* 11f5ae67 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5ae68 cmp dword ptr [0x11f62de0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62de0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae6f push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ae70 jne 0x11f5ae8f */
  if (!C.zf) goto L_11f5ae8f;
  /* 11f5ae72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5ae75 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae78 jl 0x11f5af2d */
  if ((C.sf!=C.of)) goto L_11f5af2d;
  /* 11f5ae7e cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae81 jg 0x11f5af2d */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5af2d;
  /* 11f5ae87 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5ae8a jmp 0x11f5af2d */
  goto L_11f5af2d;
L_11f5ae8f:;
  /* 11f5ae8f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5ae92 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ae98 jge 0x11f5aec2 */
  if ((C.sf==C.of)) goto L_11f5aec2;
  /* 11f5ae9a cmp dword ptr [0x11f62060], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f62060))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5aea1 jle 0x11f5aeaf */
  if ((C.zf||C.sf!=C.of)) goto L_11f5aeaf;
  /* 11f5aea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5aea5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5aea6 call 0x11f588fb */
  push32(0x11f5aeabu); f_11f588fb();
  /* 11f5aeab pop ecx */
  ECX = (pop32());
  /* 11f5aeac pop ecx */
  ECX = (pop32());
  /* 11f5aead jmp 0x11f5aeba */
  goto L_11f5aeba;
L_11f5aeaf:;
  /* 11f5aeaf mov eax, dword ptr [0x11f61e50] */
  EAX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5aeb4 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11f5aeb7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11f5aeba:;
  /* 11f5aeba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5aebc jne 0x11f5aec2 */
  if (!C.zf) goto L_11f5aec2;
L_11f5aebe:;
  /* 11f5aebe mov eax, ebx */
  EAX = (EBX);
  /* 11f5aec0 jmp 0x11f5af2d */
  goto L_11f5af2d;
L_11f5aec2:;
  /* 11f5aec2 mov edx, dword ptr [0x11f61e50] */
  EDX = (r32((uint32_t)(0x11f61e50)));
  /* 11f5aec8 mov eax, ebx */
  EAX = (EBX);
  /* 11f5aeca sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f5aecd movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11f5aed0 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11f5aed5 je 0x11f5aee5 */
  if (C.zf) goto L_11f5aee5;
  /* 11f5aed7 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11f5aedb mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11f5aede mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11f5aee1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f5aee3 jmp 0x11f5aeee */
  goto L_11f5aeee;
L_11f5aee5:;
  /* 11f5aee5 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11f5aee9 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11f5aeec push 1 */
  push32((uint32_t)(0x1u));
L_11f5aeee:;
  /* 11f5aeee pop eax */
  EAX = (pop32());
  /* 11f5aeef lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11f5aef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5aef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5aef6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f5aef8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5aef9 push eax */
  push32((uint32_t)(EAX));
  /* 11f5aefa lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f5aefd push eax */
  push32((uint32_t)(EAX));
  /* 11f5aefe push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f5af03 push dword ptr [0x11f62de0] */
  push32((uint32_t)(r32((uint32_t)(0x11f62de0))));
  /* 11f5af09 call 0x11f5a2a1 */
  push32(0x11f5af0eu); f_11f5a2a1();
  /* 11f5af0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5af11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5af13 je 0x11f5aebe */
  if (C.zf) goto L_11f5aebe;
  /* 11f5af15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5af18 jne 0x11f5af20 */
  if (!C.zf) goto L_11f5af20;
  /* 11f5af1a movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f5af1e jmp 0x11f5af2d */
  goto L_11f5af2d;
L_11f5af20:;
  /* 11f5af20 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11f5af24 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11f5af28 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f5af2b or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11f5af2d:;
  /* 11f5af2d pop ebx */
  EBX = (pop32());
  /* 11f5af2e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5af2f ret  */
  ESPCHK(0x11f5ae64u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11f5af64 (63 bytes, 24 insns) */
void f_11f5af64(void) {
  FTRACE(0x11f5af64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5af64 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5af65 mov ebp, esp */
  EBP = (ESP);
  /* 11f5af67 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5af6b jne 0x11f5af71 */
  if (!C.zf) goto L_11f5af71;
  /* 11f5af6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5af6f pop ebp */
  EBP = (pop32());
  /* 11f5af70 ret  */
  ESPCHK(0x11f5af64u, _esp0);
  ESP += 4; return;
L_11f5af71:;
  /* 11f5af71 push dword ptr [0x11f62eac] */
  push32((uint32_t)(r32((uint32_t)(0x11f62eac))));
  /* 11f5af77 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5af7a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5af7d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5af80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5af83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5af85 push dword ptr [0x11f630c4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630c4))));
  /* 11f5af8b call 0x11f5b336 */
  push32(0x11f5af90u); f_11f5b336();
  /* 11f5af90 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5af93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5af95 jne 0x11f5af9e */
  if (!C.zf) goto L_11f5af9e;
  /* 11f5af97 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11f5af9c pop ebp */
  EBP = (pop32());
  /* 11f5af9d ret  */
  ESPCHK(0x11f5af64u, _esp0);
  ESP += 4; return;
L_11f5af9e:;
  /* 11f5af9e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5afa1 pop ebp */
  EBP = (pop32());
  /* 11f5afa2 ret  */
  ESPCHK(0x11f5af64u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa3 @ 0x11f5afa3 (110 bytes, 58 insns) */
void f_11f5afa3(void) {
  FTRACE(0x11f5afa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5afa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5afa4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5afa5 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5afa6 push esi */
  push32((uint32_t)(ESI));
  /* 11f5afa7 mov esi, dword ptr [0x11f62b70] */
  ESI = (r32((uint32_t)(0x11f62b70)));
  /* 11f5afad push edi */
  push32((uint32_t)(EDI));
  /* 11f5afae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5afb0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f5afb2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5afb4 je 0x11f5b004 */
  if (C.zf) goto L_11f5b004;
  /* 11f5afb6 mov ebx, dword ptr [0x11f5c0ec] */
  EBX = (r32((uint32_t)(0x11f5c0ec)));
L_11f5afbc:;
  /* 11f5afbc push edi */
  push32((uint32_t)(EDI));
  /* 11f5afbd push edi */
  push32((uint32_t)(EDI));
  /* 11f5afbe push edi */
  push32((uint32_t)(EDI));
  /* 11f5afbf push edi */
  push32((uint32_t)(EDI));
  /* 11f5afc0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5afc2 push eax */
  push32((uint32_t)(EAX));
  /* 11f5afc3 push edi */
  push32((uint32_t)(EDI));
  /* 11f5afc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5afc6 call ebx */
  call_ind((uint32_t)(EBX), 0x11f5afc8u);
  /* 11f5afc8 mov ebp, eax */
  EBP = (EAX);
  /* 11f5afca cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5afcc je 0x11f5b00c */
  if (C.zf) goto L_11f5b00c;
  /* 11f5afce push ebp */
  push32((uint32_t)(EBP));
  /* 11f5afcf call 0x11f54cc3 */
  push32(0x11f5afd4u); f_11f54cc3();
  /* 11f5afd4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5afd6 pop ecx */
  ECX = (pop32());
  /* 11f5afd7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f5afdb je 0x11f5b00c */
  if (C.zf) goto L_11f5b00c;
  /* 11f5afdd push edi */
  push32((uint32_t)(EDI));
  /* 11f5afde push edi */
  push32((uint32_t)(EDI));
  /* 11f5afdf push ebp */
  push32((uint32_t)(EBP));
  /* 11f5afe0 push eax */
  push32((uint32_t)(EAX));
  /* 11f5afe1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5afe3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f5afe5 push edi */
  push32((uint32_t)(EDI));
  /* 11f5afe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5afe8 call ebx */
  call_ind((uint32_t)(EBX), 0x11f5afeau);
  /* 11f5afea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5afec je 0x11f5b00c */
  if (C.zf) goto L_11f5b00c;
  /* 11f5afee push edi */
  push32((uint32_t)(EDI));
  /* 11f5afef push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11f5aff3 call 0x11f5b5b3 */
  push32(0x11f5aff8u); f_11f5b5b3();
  /* 11f5aff8 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5affb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5affe pop ecx */
  ECX = (pop32());
  /* 11f5afff cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b001 pop ecx */
  ECX = (pop32());
  /* 11f5b002 jne 0x11f5afbc */
  if (!C.zf) goto L_11f5afbc;
L_11f5b004:;
  /* 11f5b004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5b006:;
  /* 11f5b006 pop edi */
  EDI = (pop32());
  /* 11f5b007 pop esi */
  ESI = (pop32());
  /* 11f5b008 pop ebp */
  EBP = (pop32());
  /* 11f5b009 pop ebx */
  EBX = (pop32());
  /* 11f5b00a pop ecx */
  ECX = (pop32());
  /* 11f5b00b ret  */
  ESPCHK(0x11f5afa3u, _esp0);
  ESP += 4; return;
L_11f5b00c:;
  /* 11f5b00c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b00f jmp 0x11f5b006 */
  goto L_11f5b006;
}

/* FUN_1000b020 @ 0x11f5b020 (62 bytes, 35 insns) */
void f_11f5b020(void) {
  FTRACE(0x11f5b020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b020 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b021 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b023 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b026 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b027 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b028 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b029 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b02a push eax */
  push32((uint32_t)(EAX));
  /* 11f5b02b push eax */
  push32((uint32_t)(EAX));
  /* 11f5b02c push eax */
  push32((uint32_t)(EAX));
  /* 11f5b02d push eax */
  push32((uint32_t)(EAX));
  /* 11f5b02e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b031 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f5b034:;
  /* 11f5b034 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f5b036 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b038 je 0x11f5b041 */
  if (C.zf) goto L_11f5b041;
  /* 11f5b03a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f5b03b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11f5b03b");
  /* 11f5b03f jmp 0x11f5b034 */
  goto L_11f5b034;
L_11f5b041:;
  /* 11f5b041 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b044 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b047 nop  */
  /* nop */
L_11f5b048:;
  /* 11f5b048 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f5b049 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f5b04b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b04d je 0x11f5b056 */
  if (C.zf) goto L_11f5b056;
  /* 11f5b04f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b050 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11f5b050");
  /* 11f5b054 jae 0x11f5b048 */
  if (!C.cf) goto L_11f5b048;
L_11f5b056:;
  /* 11f5b056 mov eax, ecx */
  EAX = (ECX);
  /* 11f5b058 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b05b pop esi */
  ESI = (pop32());
  /* 11f5b05c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b05d ret  */
  ESPCHK(0x11f5b020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b060 @ 0x11f5b060 (58 bytes, 32 insns) */
void f_11f5b060(void) {
  FTRACE(0x11f5b060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b060 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b061 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b063 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b066 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b067 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b068 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b069 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b06a push eax */
  push32((uint32_t)(EAX));
  /* 11f5b06b push eax */
  push32((uint32_t)(EAX));
  /* 11f5b06c push eax */
  push32((uint32_t)(EAX));
  /* 11f5b06d push eax */
  push32((uint32_t)(EAX));
  /* 11f5b06e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b071 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f5b074:;
  /* 11f5b074 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f5b076 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b078 je 0x11f5b081 */
  if (C.zf) goto L_11f5b081;
  /* 11f5b07a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f5b07b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11f5b07b");
  /* 11f5b07f jmp 0x11f5b074 */
  goto L_11f5b074;
L_11f5b081:;
  /* 11f5b081 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11f5b084:;
  /* 11f5b084 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f5b086 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b088 je 0x11f5b094 */
  if (C.zf) goto L_11f5b094;
  /* 11f5b08a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b08b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11f5b08b");
  /* 11f5b08f jae 0x11f5b084 */
  if (!C.cf) goto L_11f5b084;
  /* 11f5b091 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11f5b094:;
  /* 11f5b094 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b097 pop esi */
  ESI = (pop32());
  /* 11f5b098 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b099 ret  */
  ESPCHK(0x11f5b060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b09a @ 0x11f5b09a (544 bytes, 177 insns) */
void f_11f5b09a(void) {
  FTRACE(0x11f5b09au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b09a push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b09b mov ebp, esp */
  EBP = (ESP);
  /* 11f5b09d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b0a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b0a1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b0a4 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b0a5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b0a8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11f5b0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b0ae push edi */
  push32((uint32_t)(EDI));
  /* 11f5b0af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f5b0b2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5b0b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f5b0b8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f5b0bb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11f5b0bf mov edi, ecx */
  EDI = (ECX);
  /* 11f5b0c1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11f5b0c6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11f5b0c8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b0ca and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b0cc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11f5b0d2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b0d6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11f5b0d9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f5b0dc jae 0x11f5b29a */
  if (!C.cf) goto L_11f5b29a;
  /* 11f5b0e2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b0e7 jae 0x11f5b29a */
  if (!C.cf) goto L_11f5b29a;
  /* 11f5b0ed cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b0f2 ja 0x11f5b29a */
  if ((!C.cf&&!C.zf)) goto L_11f5b29a;
  /* 11f5b0f8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b0fd ja 0x11f5b103 */
  if ((!C.cf&&!C.zf)) goto L_11f5b103;
  /* 11f5b0ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b101 jmp 0x11f5b13d */
  goto L_11f5b13d;
L_11f5b103:;
  /* 11f5b103 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11f5b106 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11f5b10b jne 0x11f5b125 */
  if (!C.zf) goto L_11f5b125;
  /* 11f5b10d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11f5b110 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11f5b113 jne 0x11f5b125 */
  if (!C.zf) goto L_11f5b125;
  /* 11f5b115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b117 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b11a jne 0x11f5b127 */
  if (!C.zf) goto L_11f5b127;
  /* 11f5b11c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b11e jne 0x11f5b127 */
  if (!C.zf) goto L_11f5b127;
  /* 11f5b120 jmp 0x11f5b294 */
  goto L_11f5b294;
L_11f5b125:;
  /* 11f5b125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5b127:;
  /* 11f5b127 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b12a jne 0x11f5b14a */
  if (!C.zf) goto L_11f5b14a;
  /* 11f5b12c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11f5b12f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11f5b132 jne 0x11f5b14a */
  if (!C.zf) goto L_11f5b14a;
  /* 11f5b134 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b137 jne 0x11f5b14a */
  if (!C.zf) goto L_11f5b14a;
  /* 11f5b139 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b13b jne 0x11f5b14a */
  if (!C.zf) goto L_11f5b14a;
L_11f5b13d:;
  /* 11f5b13d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11f5b140 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11f5b143 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f5b145 jmp 0x11f5b2b5 */
  goto L_11f5b2b5;
L_11f5b14a:;
  /* 11f5b14a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f5b14d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f5b150 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f5b153 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11f5b15a:;
  /* 11f5b15a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f5b15d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b15f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b163 jle 0x11f5b1ae */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b1ae;
  /* 11f5b165 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b167 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11f5b16a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f5b16d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b170 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f5b173 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f5b176:;
  /* 11f5b176 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f5b179 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f5b17c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11f5b17f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11f5b182 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f5b185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5b188 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b18b push ecx */
  push32((uint32_t)(ECX));
  /* 11f5b18c push eax */
  push32((uint32_t)(EAX));
  /* 11f5b18d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11f5b18f call 0x11f5a4f0 */
  push32(0x11f5b194u); f_11f5a4f0();
  /* 11f5b194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b199 je 0x11f5b1a1 */
  if (C.zf) goto L_11f5b1a1;
  /* 11f5b19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f5b19e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11f5b1a1:;
  /* 11f5b1a1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5b1a5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11f5b1a9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11f5b1ac jne 0x11f5b176 */
  if (!C.zf) goto L_11f5b176;
L_11f5b1ae:;
  /* 11f5b1ae add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5b1b2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11f5b1b5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11f5b1b8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b1bc jg 0x11f5b15a */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5b15a;
  /* 11f5b1be add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5b1c5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b1ca jle 0x11f5b1f1 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b1f1;
L_11f5b1cc:;
  /* 11f5b1cc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11f5b1d0 jne 0x11f5b1ea */
  if (!C.zf) goto L_11f5b1ea;
  /* 11f5b1d2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11f5b1d5 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b1d6 call 0x11f5a56f */
  push32(0x11f5b1dbu); f_11f5a56f();
  /* 11f5b1db add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5b1e2 pop ecx */
  ECX = (pop32());
  /* 11f5b1e3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b1e8 jg 0x11f5b1cc */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5b1cc;
L_11f5b1ea:;
  /* 11f5b1ea cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b1ef jg 0x11f5b22a */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5b22a;
L_11f5b1f1:;
  /* 11f5b1f1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5b1f8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b1fd jge 0x11f5b22a */
  if ((C.sf==C.of)) goto L_11f5b22a;
  /* 11f5b1ff movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11f5b203 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5b205 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f5b208 mov ebx, eax */
  EBX = (EAX);
L_11f5b20a:;
  /* 11f5b20a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11f5b20e je 0x11f5b213 */
  if (C.zf) goto L_11f5b213;
  /* 11f5b210 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11f5b213:;
  /* 11f5b213 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11f5b216 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b217 call 0x11f5a59d */
  push32(0x11f5b21cu); f_11f5a59d();
  /* 11f5b21c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f5b21d pop ecx */
  ECX = (pop32());
  /* 11f5b21e jne 0x11f5b20a */
  if (!C.zf) goto L_11f5b20a;
  /* 11f5b220 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b224 je 0x11f5b22a */
  if (C.zf) goto L_11f5b22a;
  /* 11f5b226 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11f5b22a:;
  /* 11f5b22a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b230 ja 0x11f5b241 */
  if ((!C.cf&&!C.zf)) goto L_11f5b241;
  /* 11f5b232 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f5b235 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b23a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b23f jne 0x11f5b276 */
  if (!C.zf) goto L_11f5b276;
L_11f5b241:;
  /* 11f5b241 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b245 jne 0x11f5b273 */
  if (!C.zf) goto L_11f5b273;
  /* 11f5b247 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11f5b24b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b24f jne 0x11f5b26e */
  if (!C.zf) goto L_11f5b26e;
  /* 11f5b251 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11f5b255 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b25b jne 0x11f5b268 */
  if (!C.zf) goto L_11f5b268;
  /* 11f5b25d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11f5b260 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11f5b266 jmp 0x11f5b276 */
  goto L_11f5b276;
L_11f5b268:;
  /* 11f5b268 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11f5b26c jmp 0x11f5b276 */
  goto L_11f5b276;
L_11f5b26e:;
  /* 11f5b26e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11f5b271 jmp 0x11f5b276 */
  goto L_11f5b276;
L_11f5b273:;
  /* 11f5b273 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11f5b276:;
  /* 11f5b276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b279 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b27d jae 0x11f5b29a */
  if (!C.cf) goto L_11f5b29a;
  /* 11f5b27f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11f5b283 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b285 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11f5b288 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f5b28b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11f5b28e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f5b291 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11f5b294:;
  /* 11f5b294 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11f5b298 jmp 0x11f5b2b5 */
  goto L_11f5b2b5;
L_11f5b29a:;
  /* 11f5b29a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11f5b29d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b29f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f5b2a3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11f5b2a9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b2af and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f5b2b2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11f5b2b5:;
  /* 11f5b2b5 pop edi */
  EDI = (pop32());
  /* 11f5b2b6 pop esi */
  ESI = (pop32());
  /* 11f5b2b7 pop ebx */
  EBX = (pop32());
  /* 11f5b2b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b2b9 ret  */
  ESPCHK(0x11f5b09au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2ba @ 0x11f5b2ba (124 bytes, 52 insns) */
void f_11f5b2ba(void) {
  FTRACE(0x11f5b2bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b2ba push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b2bb mov ebp, esp */
  EBP = (ESP);
  /* 11f5b2bd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b2c1 mov ebx, 0x11f623b0 */
  EBX = (0x11f623b0u);
  /* 11f5b2c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b2c8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b2cb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b2ce je 0x11f5b333 */
  if (C.zf) goto L_11f5b333;
  /* 11f5b2d0 jge 0x11f5b2e2 */
  if ((C.sf==C.of)) goto L_11f5b2e2;
  /* 11f5b2d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b2d5 mov ebx, 0x11f62510 */
  EBX = (0x11f62510u);
  /* 11f5b2da neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5b2dc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f5b2df sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11f5b2e2:;
  /* 11f5b2e2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b2e5 jne 0x11f5b2ed */
  if (!C.zf) goto L_11f5b2ed;
  /* 11f5b2e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b2ea mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11f5b2ed:;
  /* 11f5b2ed cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b2f0 je 0x11f5b333 */
  if (C.zf) goto L_11f5b333;
  /* 11f5b2f2 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b2f3 push edi */
  push32((uint32_t)(EDI));
L_11f5b2f4:;
  /* 11f5b2f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b2f7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b2fa sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11f5b2fe and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b301 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b303 je 0x11f5b32c */
  if (C.zf) goto L_11f5b32c;
  /* 11f5b305 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11f5b308 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f5b30e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11f5b311 jb 0x11f5b31f */
  if (C.cf) goto L_11f5b31f;
  /* 11f5b313 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11f5b316 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5b317 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5b318 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f5b319 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11f5b31c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11f5b31f:;
  /* 11f5b31f push esi */
  push32((uint32_t)(ESI));
  /* 11f5b320 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b323 call 0x11f5b09a */
  push32(0x11f5b328u); f_11f5b09a();
  /* 11f5b328 pop ecx */
  ECX = (pop32());
  /* 11f5b329 pop ecx */
  ECX = (pop32());
  /* 11f5b32a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11f5b32c:;
  /* 11f5b32c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b32f jne 0x11f5b2f4 */
  if (!C.zf) goto L_11f5b2f4;
  /* 11f5b331 pop edi */
  EDI = (pop32());
  /* 11f5b332 pop esi */
  ESI = (pop32());
L_11f5b333:;
  /* 11f5b333 pop ebx */
  EBX = (pop32());
  /* 11f5b334 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b335 ret  */
  ESPCHK(0x11f5b2bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b336 @ 0x11f5b336 (597 bytes, 239 insns) */
void f_11f5b336(void) {
  FTRACE(0x11f5b336u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b336 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b337 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b339 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5b33b push 0x11f5c710 */
  push32((uint32_t)(0x11f5c710u));
  /* 11f5b340 push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f5b345 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f5b34b push eax */
  push32((uint32_t)(EAX));
  /* 11f5b34c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f5b353 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b356 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b357 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b358 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b359 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5b35c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b35e cmp dword ptr [0x11f62e88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f62e88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b364 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5b366 pop edi */
  EDI = (pop32());
  /* 11f5b367 jne 0x11f5b3a9 */
  if (!C.zf) goto L_11f5b3a9;
  /* 11f5b369 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b36a mov eax, 0x11f5c6c4 */
  EAX = (0x11f5c6c4u);
  /* 11f5b36f push eax */
  push32((uint32_t)(EAX));
  /* 11f5b370 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b371 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b372 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b373 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b374 call dword ptr [0x11f5c00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c00c))), 0x11f5b37au);
  /* 11f5b37a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b37c je 0x11f5b386 */
  if (C.zf) goto L_11f5b386;
  /* 11f5b37e mov dword ptr [0x11f62e88], edi */
  w32((uint32_t)(0x11f62e88), (EDI));
  /* 11f5b384 jmp 0x11f5b3a9 */
  goto L_11f5b3a9;
L_11f5b386:;
  /* 11f5b386 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b387 mov eax, 0x11f5c6c0 */
  EAX = (0x11f5c6c0u);
  /* 11f5b38c push eax */
  push32((uint32_t)(EAX));
  /* 11f5b38d push edi */
  push32((uint32_t)(EDI));
  /* 11f5b38e push eax */
  push32((uint32_t)(EAX));
  /* 11f5b38f push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b390 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b391 call dword ptr [0x11f5c010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c010))), 0x11f5b397u);
  /* 11f5b397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b399 je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b39f mov dword ptr [0x11f62e88], 2 */
  w32((uint32_t)(0x11f62e88), (0x2u));
L_11f5b3a9:;
  /* 11f5b3a9 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f5b3ac cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b3ae jle 0x11f5b3c0 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b3c0;
  /* 11f5b3b0 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b3b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5b3b4 call 0x11f5a4c5 */
  push32(0x11f5b3b9u); f_11f5a4c5();
  /* 11f5b3b9 pop ecx */
  ECX = (pop32());
  /* 11f5b3ba pop ecx */
  ECX = (pop32());
  /* 11f5b3bb mov esi, eax */
  ESI = (EAX);
  /* 11f5b3bd mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11f5b3c0:;
  /* 11f5b3c0 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b3c3 jle 0x11f5b3d5 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b3d5;
  /* 11f5b3c5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5b3c8 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5b3cb call 0x11f5a4c5 */
  push32(0x11f5b3d0u); f_11f5a4c5();
  /* 11f5b3d0 pop ecx */
  ECX = (pop32());
  /* 11f5b3d1 pop ecx */
  ECX = (pop32());
  /* 11f5b3d2 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11f5b3d5:;
  /* 11f5b3d5 mov eax, dword ptr [0x11f62e88] */
  EAX = (r32((uint32_t)(0x11f62e88)));
  /* 11f5b3da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b3dd jne 0x11f5b3fa */
  if (!C.zf) goto L_11f5b3fa;
  /* 11f5b3df push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5b3e2 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5b3e5 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b3e6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5b3e9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5b3ec push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b3ef call dword ptr [0x11f5c010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c010))), 0x11f5b3f5u);
  /* 11f5b3f5 jmp 0x11f5b5a1 */
  goto L_11f5b5a1;
L_11f5b3fa:;
  /* 11f5b3fa cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b3fc jne 0x11f5b59f */
  if (!C.zf) goto L_11f5b59f;
  /* 11f5b402 cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b405 jne 0x11f5b40f */
  if (!C.zf) goto L_11f5b40f;
  /* 11f5b407 mov eax, dword ptr [0x11f62df0] */
  EAX = (r32((uint32_t)(0x11f62df0)));
  /* 11f5b40c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11f5b40f:;
  /* 11f5b40f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b411 je 0x11f5b41c */
  if (C.zf) goto L_11f5b41c;
  /* 11f5b413 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b416 jne 0x11f5b4b4 */
  if (!C.zf) goto L_11f5b4b4;
L_11f5b41c:;
  /* 11f5b41c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b41f jne 0x11f5b429 */
  if (!C.zf) goto L_11f5b429;
L_11f5b421:;
  /* 11f5b421 push 2 */
  push32((uint32_t)(0x2u));
L_11f5b423:;
  /* 11f5b423 pop eax */
  EAX = (pop32());
  /* 11f5b424 jmp 0x11f5b5a1 */
  goto L_11f5b5a1;
L_11f5b429:;
  /* 11f5b429 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b42c jle 0x11f5b435 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b435;
L_11f5b42e:;
  /* 11f5b42e mov eax, edi */
  EAX = (EDI);
  /* 11f5b430 jmp 0x11f5b5a1 */
  goto L_11f5b5a1;
L_11f5b435:;
  /* 11f5b435 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b437 jg 0x11f5b47a */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5b47a;
  /* 11f5b439 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11f5b43c push eax */
  push32((uint32_t)(EAX));
  /* 11f5b43d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5b440 call dword ptr [0x11f5c038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c038))), 0x11f5b446u);
  /* 11f5b446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b448 je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b44e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b450 jle 0x11f5b47e */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b47e;
  /* 11f5b452 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b456 jb 0x11f5b47a */
  if (C.cf) goto L_11f5b47a;
  /* 11f5b458 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11f5b45b cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b45e je 0x11f5b47a */
  if (C.zf) goto L_11f5b47a;
L_11f5b460:;
  /* 11f5b460 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f5b463 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b465 je 0x11f5b47a */
  if (C.zf) goto L_11f5b47a;
  /* 11f5b467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5b46a mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11f5b46c cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b46e jb 0x11f5b474 */
  if (C.cf) goto L_11f5b474;
  /* 11f5b470 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b472 jbe 0x11f5b421 */
  if ((C.cf||C.zf)) goto L_11f5b421;
L_11f5b474:;
  /* 11f5b474 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b475 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b476 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b478 jne 0x11f5b460 */
  if (!C.zf) goto L_11f5b460;
L_11f5b47a:;
  /* 11f5b47a push 3 */
  push32((uint32_t)(0x3u));
  /* 11f5b47c jmp 0x11f5b423 */
  goto L_11f5b423;
L_11f5b47e:;
  /* 11f5b47e cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b481 jle 0x11f5b4b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11f5b4b4;
  /* 11f5b483 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b487 jb 0x11f5b42e */
  if (C.cf) goto L_11f5b42e;
  /* 11f5b489 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11f5b48c cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b48f je 0x11f5b42e */
  if (C.zf) goto L_11f5b42e;
L_11f5b491:;
  /* 11f5b491 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f5b494 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b496 je 0x11f5b42e */
  if (C.zf) goto L_11f5b42e;
  /* 11f5b498 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f5b49b mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11f5b49d cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b49f jb 0x11f5b4a9 */
  if (C.cf) goto L_11f5b4a9;
  /* 11f5b4a1 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b4a3 jbe 0x11f5b421 */
  if ((C.cf||C.zf)) goto L_11f5b421;
L_11f5b4a9:;
  /* 11f5b4a9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b4aa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b4ab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b4ad jne 0x11f5b491 */
  if (!C.zf) goto L_11f5b491;
  /* 11f5b4af jmp 0x11f5b42e */
  goto L_11f5b42e;
L_11f5b4b4:;
  /* 11f5b4b4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b4b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b4b6 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b4b7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5b4ba push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5b4bc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5b4bf call dword ptr [0x11f5c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c024))), 0x11f5b4c5u);
  /* 11f5b4c5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f5b4c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b4ca je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b4d0 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f5b4d3 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b4d5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b4d8 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f5b4da call 0x11f59c60 */
  push32(0x11f5b4dfu); f_11f59c60();
  /* 11f5b4df mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5b4e2 mov eax, esp */
  EAX = (ESP);
  /* 11f5b4e4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5b4e7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5b4eb jmp 0x11f5b503 */
  goto L_11f5b503;
  /* 11f5b4ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5b4ef pop eax */
  EAX = (pop32());
  /* 11f5b4f0 ret  */
  ESPCHK(0x11f5b336u, _esp0);
  ESP += 4; return;
  /* 11f5b4f1 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f5b4f4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b4f6 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11f5b4f9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5b4fd mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11f5b500 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5b502 pop edi */
  EDI = (pop32());
L_11f5b503:;
  /* 11f5b503 cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b506 je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b50c push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f5b50f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5b512 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b513 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f5b516 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b517 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5b51a mov esi, dword ptr [0x11f5c024] */
  ESI = (r32((uint32_t)(0x11f5c024)));
  /* 11f5b520 call esi */
  call_ind((uint32_t)(ESI), 0x11f5b522u);
  /* 11f5b522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b524 je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b526 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b527 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b528 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5b52b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5b52e push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5b530 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5b533 call esi */
  call_ind((uint32_t)(ESI), 0x11f5b535u);
  /* 11f5b535 mov esi, eax */
  ESI = (EAX);
  /* 11f5b537 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11f5b53a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b53c je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b53e mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f5b541 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11f5b544 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b547 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f5b549 call 0x11f59c60 */
  push32(0x11f5b54eu); f_11f59c60();
  /* 11f5b54e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f5b551 mov edi, esp */
  EDI = (ESP);
  /* 11f5b553 mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11f5b556 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5b55a jmp 0x11f5b56e */
  goto L_11f5b56e;
  /* 11f5b55c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5b55e pop eax */
  EAX = (pop32());
  /* 11f5b55f ret  */
  ESPCHK(0x11f5b336u, _esp0);
  ESP += 4; return;
  /* 11f5b560 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f5b563 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b565 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5b567 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5b56b mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11f5b56e:;
  /* 11f5b56e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b570 je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b572 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b573 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b574 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f5b577 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f5b57a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5b57c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f5b57f call dword ptr [0x11f5c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c024))), 0x11f5b585u);
  /* 11f5b585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b587 je 0x11f5b59f */
  if (C.zf) goto L_11f5b59f;
  /* 11f5b589 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b58a push edi */
  push32((uint32_t)(EDI));
  /* 11f5b58b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f5b58e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5b591 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5b594 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b597 call dword ptr [0x11f5c00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c00c))), 0x11f5b59du);
  /* 11f5b59d jmp 0x11f5b5a1 */
  goto L_11f5b5a1;
L_11f5b59f:;
  /* 11f5b59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f5b5a1:;
  /* 11f5b5a1 lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11f5b5a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f5b5a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f5b5ae pop edi */
  EDI = (pop32());
  /* 11f5b5af pop esi */
  ESI = (pop32());
  /* 11f5b5b0 pop ebx */
  EBX = (pop32());
  /* 11f5b5b1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b5b2 ret  */
  ESPCHK(0x11f5b336u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b3 @ 0x11f5b5b3 (391 bytes, 155 insns) */
void f_11f5b5b3(void) {
  FTRACE(0x11f5b5b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b5b3 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b5b4 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5b5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5b5b8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b5b9 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b5ba push edi */
  push32((uint32_t)(EDI));
  /* 11f5b5bb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5b5bd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b5c0 je 0x11f5b617 */
  if (C.zf) goto L_11f5b617;
  /* 11f5b5c2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11f5b5c4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b5c7 call 0x11f5bd00 */
  push32(0x11f5b5ccu); f_11f5bd00();
  /* 11f5b5cc mov esi, eax */
  ESI = (EAX);
  /* 11f5b5ce pop ecx */
  ECX = (pop32());
  /* 11f5b5cf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b5d1 pop ecx */
  ECX = (pop32());
  /* 11f5b5d2 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11f5b5d5 je 0x11f5b617 */
  if (C.zf) goto L_11f5b617;
  /* 11f5b5d7 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b5da je 0x11f5b617 */
  if (C.zf) goto L_11f5b617;
  /* 11f5b5dc mov eax, dword ptr [0x11f62b68] */
  EAX = (r32((uint32_t)(0x11f62b68)));
  /* 11f5b5e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b5e3 cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b5e6 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11f5b5e9 cmp eax, dword ptr [0x11f62b6c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f62b6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b5ef jne 0x11f5b5fd */
  if (!C.zf) goto L_11f5b5fd;
  /* 11f5b5f1 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b5f2 call 0x11f5b792 */
  push32(0x11f5b5f7u); f_11f5b792();
  /* 11f5b5f7 pop ecx */
  ECX = (pop32());
  /* 11f5b5f8 mov dword ptr [0x11f62b68], eax */
  w32((uint32_t)(0x11f62b68), (EAX));
L_11f5b5fd:;
  /* 11f5b5fd cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b5ff jne 0x11f5b655 */
  if (!C.zf) goto L_11f5b655;
  /* 11f5b601 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b604 je 0x11f5b61f */
  if (C.zf) goto L_11f5b61f;
  /* 11f5b606 cmp dword ptr [0x11f62b70], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62b70))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b60c je 0x11f5b61f */
  if (C.zf) goto L_11f5b61f;
  /* 11f5b60e call 0x11f5afa3 */
  push32(0x11f5b613u); f_11f5afa3();
  /* 11f5b613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b615 je 0x11f5b655 */
  if (C.zf) goto L_11f5b655;
L_11f5b617:;
  /* 11f5b617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f5b61a:;
  /* 11f5b61a pop edi */
  EDI = (pop32());
  /* 11f5b61b pop esi */
  ESI = (pop32());
  /* 11f5b61c pop ebx */
  EBX = (pop32());
  /* 11f5b61d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b61e ret  */
  ESPCHK(0x11f5b5b3u, _esp0);
  ESP += 4; return;
L_11f5b61f:;
  /* 11f5b61f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b621 jne 0x11f5b733 */
  if (!C.zf) goto L_11f5b733;
  /* 11f5b627 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5b629 call 0x11f54cc3 */
  push32(0x11f5b62eu); f_11f54cc3();
  /* 11f5b62e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b630 pop ecx */
  ECX = (pop32());
  /* 11f5b631 mov dword ptr [0x11f62b68], eax */
  w32((uint32_t)(0x11f62b68), (EAX));
  /* 11f5b636 je 0x11f5b617 */
  if (C.zf) goto L_11f5b617;
  /* 11f5b638 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11f5b63a cmp dword ptr [0x11f62b70], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62b70))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b640 jne 0x11f5b655 */
  if (!C.zf) goto L_11f5b655;
  /* 11f5b642 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f5b644 call 0x11f54cc3 */
  push32(0x11f5b649u); f_11f54cc3();
  /* 11f5b649 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b64b pop ecx */
  ECX = (pop32());
  /* 11f5b64c mov dword ptr [0x11f62b70], eax */
  w32((uint32_t)(0x11f62b70), (EAX));
  /* 11f5b651 je 0x11f5b617 */
  if (C.zf) goto L_11f5b617;
  /* 11f5b653 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11f5b655:;
  /* 11f5b655 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b658 mov edi, dword ptr [0x11f62b68] */
  EDI = (r32((uint32_t)(0x11f62b68)));
  /* 11f5b65e mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f5b661 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b662 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b665 call 0x11f5b73a */
  push32(0x11f5b66au); f_11f5b73a();
  /* 11f5b66a mov esi, eax */
  ESI = (EAX);
  /* 11f5b66c pop ecx */
  ECX = (pop32());
  /* 11f5b66d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5b66f pop ecx */
  ECX = (pop32());
  /* 11f5b670 jl 0x11f5b6b5 */
  if ((C.sf!=C.of)) goto L_11f5b6b5;
  /* 11f5b672 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b675 je 0x11f5b6b5 */
  if (C.zf) goto L_11f5b6b5;
  /* 11f5b677 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f5b679 je 0x11f5b6ad */
  if (C.zf) goto L_11f5b6ad;
  /* 11f5b67b push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11f5b67e lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11f5b681 call 0x11f542bc */
  push32(0x11f5b686u); f_11f542bc();
  /* 11f5b686 pop ecx */
  ECX = (pop32());
L_11f5b687:;
  /* 11f5b687 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b68a je 0x11f5b697 */
  if (C.zf) goto L_11f5b697;
  /* 11f5b68c mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11f5b68f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b690 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f5b692 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b695 jmp 0x11f5b687 */
  goto L_11f5b687;
L_11f5b697:;
  /* 11f5b697 mov eax, esi */
  EAX = (ESI);
  /* 11f5b699 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f5b69c push eax */
  push32((uint32_t)(EAX));
  /* 11f5b69d push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11f5b6a0 call 0x11f5b9d1 */
  push32(0x11f5b6a5u); f_11f5b9d1();
  /* 11f5b6a5 pop ecx */
  ECX = (pop32());
  /* 11f5b6a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b6a8 pop ecx */
  ECX = (pop32());
  /* 11f5b6a9 je 0x11f5b6e7 */
  if (C.zf) goto L_11f5b6e7;
  /* 11f5b6ab jmp 0x11f5b6e2 */
  goto L_11f5b6e2;
L_11f5b6ad:;
  /* 11f5b6ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b6b0 mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11f5b6b3 jmp 0x11f5b6e7 */
  goto L_11f5b6e7;
L_11f5b6b5:;
  /* 11f5b6b5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f5b6b7 jne 0x11f5b733 */
  if (!C.zf) goto L_11f5b733;
  /* 11f5b6b9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5b6bb jge 0x11f5b6bf */
  if ((C.sf==C.of)) goto L_11f5b6bf;
  /* 11f5b6bd neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11f5b6bf:;
  /* 11f5b6bf lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11f5b6c6 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b6c7 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b6c8 call 0x11f5b9d1 */
  push32(0x11f5b6cdu); f_11f5b9d1();
  /* 11f5b6cd pop ecx */
  ECX = (pop32());
  /* 11f5b6ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b6d0 pop ecx */
  ECX = (pop32());
  /* 11f5b6d1 je 0x11f5b617 */
  if (C.zf) goto L_11f5b617;
  /* 11f5b6d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b6da mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11f5b6dd and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11f5b6e2:;
  /* 11f5b6e2 mov dword ptr [0x11f62b68], eax */
  w32((uint32_t)(0x11f62b68), (EAX));
L_11f5b6e7:;
  /* 11f5b6e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b6eb je 0x11f5b733 */
  if (C.zf) goto L_11f5b733;
  /* 11f5b6ed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b6f0 call 0x11f58630 */
  push32(0x11f5b6f5u); f_11f58630();
  /* 11f5b6f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b6f6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b6f7 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b6f8 call 0x11f54cc3 */
  push32(0x11f5b6fdu); f_11f54cc3();
  /* 11f5b6fd mov esi, eax */
  ESI = (EAX);
  /* 11f5b6ff pop ecx */
  ECX = (pop32());
  /* 11f5b700 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5b702 pop ecx */
  ECX = (pop32());
  /* 11f5b703 je 0x11f5b733 */
  if (C.zf) goto L_11f5b733;
  /* 11f5b705 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5b708 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b709 call 0x11f59020 */
  push32(0x11f5b70eu); f_11f59020();
  /* 11f5b70e mov eax, esi */
  EAX = (ESI);
  /* 11f5b710 pop ecx */
  ECX = (pop32());
  /* 11f5b711 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b714 pop ecx */
  ECX = (pop32());
  /* 11f5b715 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b718 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11f5b71b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5b71c neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5b71e sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b720 not ebx */
  EBX = (~(EBX));
  /* 11f5b722 and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b724 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b725 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b726 call dword ptr [0x11f5c008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c008))), 0x11f5b72cu);
  /* 11f5b72c push esi */
  push32((uint32_t)(ESI));
  /* 11f5b72d call 0x11f542bc */
  push32(0x11f5b732u); f_11f542bc();
  /* 11f5b732 pop ecx */
  ECX = (pop32());
L_11f5b733:;
  /* 11f5b733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b735 jmp 0x11f5b61a */
  goto L_11f5b61a;
}

/* FUN_1000b73a @ 0x11f5b73a (88 bytes, 35 insns) */
void f_11f5b73a(void) {
  FTRACE(0x11f5b73au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b73a push esi */
  push32((uint32_t)(ESI));
  /* 11f5b73b mov esi, dword ptr [0x11f62b68] */
  ESI = (r32((uint32_t)(0x11f62b68)));
  /* 11f5b741 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b742 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f5b744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b746 je 0x11f5b775 */
  if (C.zf) goto L_11f5b775;
  /* 11f5b748 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11f5b74c:;
  /* 11f5b74c push edi */
  push32((uint32_t)(EDI));
  /* 11f5b74d push eax */
  push32((uint32_t)(EAX));
  /* 11f5b74e push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11f5b752 call 0x11f5af64 */
  push32(0x11f5b757u); f_11f5af64();
  /* 11f5b757 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b75c jne 0x11f5b76b */
  if (!C.zf) goto L_11f5b76b;
  /* 11f5b75e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f5b760 mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11f5b763 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b765 je 0x11f5b785 */
  if (C.zf) goto L_11f5b785;
  /* 11f5b767 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5b769 je 0x11f5b785 */
  if (C.zf) goto L_11f5b785;
L_11f5b76b:;
  /* 11f5b76b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11f5b76e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b773 jne 0x11f5b74c */
  if (!C.zf) goto L_11f5b74c;
L_11f5b775:;
  /* 11f5b775 mov eax, esi */
  EAX = (ESI);
  /* 11f5b777 sub eax, dword ptr [0x11f62b68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f62b68))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b77d sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f5b780 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11f5b782:;
  /* 11f5b782 pop edi */
  EDI = (pop32());
  /* 11f5b783 pop esi */
  ESI = (pop32());
  /* 11f5b784 ret  */
  ESPCHK(0x11f5b73au, _esp0);
  ESP += 4; return;
L_11f5b785:;
  /* 11f5b785 mov eax, esi */
  EAX = (ESI);
  /* 11f5b787 sub eax, dword ptr [0x11f62b68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f62b68))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b78d sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f5b790 jmp 0x11f5b782 */
  goto L_11f5b782;
}

/* FUN_1000b792 @ 0x11f5b792 (103 bytes, 49 insns) */
void f_11f5b792(void) {
  FTRACE(0x11f5b792u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b792 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b793 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5b797 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f5b79b jne 0x11f5b7a1 */
  if (!C.zf) goto L_11f5b7a1;
  /* 11f5b79d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b79f pop edi */
  EDI = (pop32());
  /* 11f5b7a0 ret  */
  ESPCHK(0x11f5b792u, _esp0);
  ESP += 4; return;
L_11f5b7a1:;
  /* 11f5b7a1 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b7a4 lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11f5b7a7 je 0x11f5b7b3 */
  if (C.zf) goto L_11f5b7b3;
L_11f5b7a9:;
  /* 11f5b7a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f5b7ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f5b7ac add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b7af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f5b7b1 jne 0x11f5b7a9 */
  if (!C.zf) goto L_11f5b7a9;
L_11f5b7b3:;
  /* 11f5b7b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b7b4 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b7b5 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11f5b7bc push esi */
  push32((uint32_t)(ESI));
  /* 11f5b7bd push eax */
  push32((uint32_t)(EAX));
  /* 11f5b7be call 0x11f54cc3 */
  push32(0x11f5b7c3u); f_11f54cc3();
  /* 11f5b7c3 mov esi, eax */
  ESI = (EAX);
  /* 11f5b7c5 pop ecx */
  ECX = (pop32());
  /* 11f5b7c6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5b7c8 mov ebp, esi */
  EBP = (ESI);
  /* 11f5b7ca jne 0x11f5b7d4 */
  if (!C.zf) goto L_11f5b7d4;
  /* 11f5b7cc push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5b7ce call 0x11f5403b */
  push32(0x11f5b7d3u); f_11f5403b();
  /* 11f5b7d3 pop ecx */
  ECX = (pop32());
L_11f5b7d4:;
  /* 11f5b7d4 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11f5b7d6 mov ebx, edi */
  EBX = (EDI);
L_11f5b7d8:;
  /* 11f5b7d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5b7da je 0x11f5b7ef */
  if (C.zf) goto L_11f5b7ef;
  /* 11f5b7dc push eax */
  push32((uint32_t)(EAX));
  /* 11f5b7dd add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b7e0 call 0x11f5bd97 */
  push32(0x11f5b7e5u); f_11f5bd97();
  /* 11f5b7e5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f5b7e7 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11f5b7e9 pop ecx */
  ECX = (pop32());
  /* 11f5b7ea add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b7ed jmp 0x11f5b7d8 */
  goto L_11f5b7d8;
L_11f5b7ef:;
  /* 11f5b7ef and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f5b7f2 mov eax, ebp */
  EAX = (EBP);
  /* 11f5b7f4 pop esi */
  ESI = (pop32());
  /* 11f5b7f5 pop ebp */
  EBP = (pop32());
  /* 11f5b7f6 pop ebx */
  EBX = (pop32());
  /* 11f5b7f7 pop edi */
  EDI = (pop32());
  /* 11f5b7f8 ret  */
  ESPCHK(0x11f5b792u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x11f5b800 (208 bytes, 85 insns) */
void f_11f5b800(void) {
  FTRACE(0x11f5b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b800 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b801 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b803 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b804 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b805 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b806 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b809 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b80c lea eax, [0x11f62dd8] */
  EAX = ((uint32_t)(0x11f62dd8));
  /* 11f5b812 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b816 jne 0x11f5b853 */
  if (!C.zf) goto L_11f5b853;
  /* 11f5b818 mov al, 0xff */
  AL = (0xffu);
  /* 11f5b81a mov edi, edi */
  EDI = (EDI);
L_11f5b81c:;
  /* 11f5b81c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b81e je 0x11f5b84e */
  if (C.zf) goto L_11f5b84e;
  /* 11f5b820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f5b822 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b823 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11f5b825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5b826 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b828 je 0x11f5b81c */
  if (C.zf) goto L_11f5b81c;
  /* 11f5b82a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5b82c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b82e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5b830 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f5b833 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f5b835 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f5b837 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11f5b839 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5b83b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b83d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5b83f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f5b842 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f5b844 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f5b846 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b848 je 0x11f5b81c */
  if (C.zf) goto L_11f5b81c;
  /* 11f5b84a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f5b84c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11f5b84e:;
  /* 11f5b84e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11f5b851 jmp 0x11f5b8cb */
  goto L_11f5b8cb;
L_11f5b853:;
  /* 11f5b853 lock inc dword ptr [0x11f62ea8] */
  x86_unimpl("lock inc @ 0x11f5b853");
  /* 11f5b85a cmp dword ptr [0x11f62ea4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62ea4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b861 jg 0x11f5b867 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5b867;
  /* 11f5b863 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5b865 jmp 0x11f5b87c */
  goto L_11f5b87c;
L_11f5b867:;
  /* 11f5b867 lock dec dword ptr [0x11f62ea8] */
  x86_unimpl("lock dec @ 0x11f5b867");
  /* 11f5b86e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f5b870 call 0x11f5637c */
  push32(0x11f5b875u); f_11f5637c();
  /* 11f5b875 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11f5b87c:;
  /* 11f5b87c mov eax, 0xff */
  EAX = (0xffu);
  /* 11f5b881 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b883 nop  */
  /* nop */
L_11f5b884:;
  /* 11f5b884 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b886 je 0x11f5b8af */
  if (C.zf) goto L_11f5b8af;
  /* 11f5b888 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f5b88a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b88b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5b88d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5b88e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b890 je 0x11f5b884 */
  if (C.zf) goto L_11f5b884;
  /* 11f5b892 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b893 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b894 call 0x11f589df */
  push32(0x11f5b899u); f_11f589df();
  /* 11f5b899 mov ebx, eax */
  EBX = (EAX);
  /* 11f5b89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b89e call 0x11f589df */
  push32(0x11f5b8a3u); f_11f589df();
  /* 11f5b8a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b8a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b8a8 je 0x11f5b884 */
  if (C.zf) goto L_11f5b884;
  /* 11f5b8aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b8ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f5b8af:;
  /* 11f5b8af mov ebx, eax */
  EBX = (EAX);
  /* 11f5b8b1 pop eax */
  EAX = (pop32());
  /* 11f5b8b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b8b4 jne 0x11f5b8bf */
  if (!C.zf) goto L_11f5b8bf;
  /* 11f5b8b6 lock dec dword ptr [0x11f62ea8] */
  x86_unimpl("lock dec @ 0x11f5b8b6");
  /* 11f5b8bd jmp 0x11f5b8c9 */
  goto L_11f5b8c9;
L_11f5b8bf:;
  /* 11f5b8bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f5b8c1 call 0x11f563dd */
  push32(0x11f5b8c6u); f_11f563dd();
  /* 11f5b8c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5b8c9:;
  /* 11f5b8c9 mov eax, ebx */
  EAX = (EBX);
L_11f5b8cb:;
  /* 11f5b8cb pop ebx */
  EBX = (pop32());
  /* 11f5b8cc pop esi */
  ESI = (pop32());
  /* 11f5b8cd pop edi */
  EDI = (pop32());
  /* 11f5b8ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b8cf ret  */
  ESPCHK(0x11f5b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d0 @ 0x11f5b8d0 (257 bytes, 103 insns) */
void f_11f5b8d0(void) {
  FTRACE(0x11f5b8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b8d3 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b8d4 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b8d5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b8d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f5b8d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b8db je 0x11f5b9ca */
  if (C.zf) goto L_11f5b9ca;
  /* 11f5b8e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b8e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5b8e7 lea eax, [0x11f62dd8] */
  EAX = ((uint32_t)(0x11f62dd8));
  /* 11f5b8ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b8f1 jne 0x11f5b941 */
  if (!C.zf) goto L_11f5b941;
  /* 11f5b8f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11f5b8f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11f5b8f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11f5b8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f5b8fc:;
  /* 11f5b8fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11f5b8fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f5b900 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11f5b902 je 0x11f5b925 */
  if (C.zf) goto L_11f5b925;
  /* 11f5b904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f5b906 je 0x11f5b925 */
  if (C.zf) goto L_11f5b925;
  /* 11f5b908 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5b90a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b90c jb 0x11f5b914 */
  if (C.cf) goto L_11f5b914;
  /* 11f5b90e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b910 ja 0x11f5b914 */
  if ((!C.cf&&!C.zf)) goto L_11f5b914;
  /* 11f5b912 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11f5b914:;
  /* 11f5b914 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b916 jb 0x11f5b91e */
  if (C.cf) goto L_11f5b91e;
  /* 11f5b918 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b91a ja 0x11f5b91e */
  if ((!C.cf&&!C.zf)) goto L_11f5b91e;
  /* 11f5b91c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11f5b91e:;
  /* 11f5b91e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b920 jne 0x11f5b92f */
  if (!C.zf) goto L_11f5b92f;
  /* 11f5b922 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f5b923 jne 0x11f5b8fc */
  if (!C.zf) goto L_11f5b8fc;
L_11f5b925:;
  /* 11f5b925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b927 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f5b929 je 0x11f5b9ca */
  if (C.zf) goto L_11f5b9ca;
L_11f5b92f:;
  /* 11f5b92f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11f5b934 jb 0x11f5b9ca */
  if (C.cf) goto L_11f5b9ca;
  /* 11f5b93a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5b93c jmp 0x11f5b9ca */
  goto L_11f5b9ca;
L_11f5b941:;
  /* 11f5b941 lock inc dword ptr [0x11f62ea8] */
  x86_unimpl("lock inc @ 0x11f5b941");
  /* 11f5b948 cmp dword ptr [0x11f62ea4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62ea4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b94f jg 0x11f5b955 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f5b955;
  /* 11f5b951 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5b953 jmp 0x11f5b96e */
  goto L_11f5b96e;
L_11f5b955:;
  /* 11f5b955 lock dec dword ptr [0x11f62ea8] */
  x86_unimpl("lock dec @ 0x11f5b955");
  /* 11f5b95c mov ebx, ecx */
  EBX = (ECX);
  /* 11f5b95e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f5b960 call 0x11f5637c */
  push32(0x11f5b965u); f_11f5637c();
  /* 11f5b965 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11f5b96c mov ecx, ebx */
  ECX = (EBX);
L_11f5b96e:;
  /* 11f5b96e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b970 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b972 mov edi, edi */
  EDI = (EDI);
L_11f5b974:;
  /* 11f5b974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f5b976 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b978 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11f5b97a je 0x11f5b99f */
  if (C.zf) goto L_11f5b99f;
  /* 11f5b97c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f5b97e je 0x11f5b99f */
  if (C.zf) goto L_11f5b99f;
  /* 11f5b980 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5b981 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f5b982 push ecx */
  push32((uint32_t)(ECX));
  /* 11f5b983 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b984 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b985 call 0x11f589df */
  push32(0x11f5b98au); f_11f589df();
  /* 11f5b98a mov ebx, eax */
  EBX = (EAX);
  /* 11f5b98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b98f call 0x11f589df */
  push32(0x11f5b994u); f_11f589df();
  /* 11f5b994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b997 pop ecx */
  ECX = (pop32());
  /* 11f5b998 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b99a jne 0x11f5b9a5 */
  if (!C.zf) goto L_11f5b9a5;
  /* 11f5b99c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f5b99d jne 0x11f5b974 */
  if (!C.zf) goto L_11f5b974;
L_11f5b99f:;
  /* 11f5b99f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5b9a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b9a3 je 0x11f5b9ae */
  if (C.zf) goto L_11f5b9ae;
L_11f5b9a5:;
  /* 11f5b9a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11f5b9aa jb 0x11f5b9ae */
  if (C.cf) goto L_11f5b9ae;
  /* 11f5b9ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11f5b9ae:;
  /* 11f5b9ae pop eax */
  EAX = (pop32());
  /* 11f5b9af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5b9b1 jne 0x11f5b9bc */
  if (!C.zf) goto L_11f5b9bc;
  /* 11f5b9b3 lock dec dword ptr [0x11f62ea8] */
  x86_unimpl("lock dec @ 0x11f5b9b3");
  /* 11f5b9ba jmp 0x11f5b9ca */
  goto L_11f5b9ca;
L_11f5b9bc:;
  /* 11f5b9bc mov ebx, ecx */
  EBX = (ECX);
  /* 11f5b9be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f5b9c0 call 0x11f563dd */
  push32(0x11f5b9c5u); f_11f563dd();
  /* 11f5b9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5b9c8 mov ecx, ebx */
  ECX = (EBX);
L_11f5b9ca:;
  /* 11f5b9ca mov eax, ecx */
  EAX = (ECX);
  /* 11f5b9cc pop ebx */
  EBX = (pop32());
  /* 11f5b9cd pop esi */
  ESI = (pop32());
  /* 11f5b9ce pop edi */
  EDI = (pop32());
  /* 11f5b9cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f5b9d0 ret  */
  ESPCHK(0x11f5b8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d1 @ 0x11f5b9d1 (781 bytes, 277 insns) */
void f_11f5b9d1(void) {
  FTRACE(0x11f5b9d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5b9d1 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5b9d2 mov ebp, esp */
  EBP = (ESP);
  /* 11f5b9d4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f5b9d6 push 0x11f5c850 */
  push32((uint32_t)(0x11f5c850u));
  /* 11f5b9db push 0x11f57bd0 */
  push32((uint32_t)(0x11f57bd0u));
  /* 11f5b9e0 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f5b9e6 push eax */
  push32((uint32_t)(EAX));
  /* 11f5b9e7 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f5b9ee sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5b9f1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5b9f2 push esi */
  push32((uint32_t)(ESI));
  /* 11f5b9f3 push edi */
  push32((uint32_t)(EDI));
  /* 11f5b9f4 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5b9f7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5b9f9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5b9fb jne 0x11f5ba0b */
  if (!C.zf) goto L_11f5ba0b;
  /* 11f5b9fd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5ba00 call 0x11f54cc3 */
  push32(0x11f5ba05u); f_11f54cc3();
  /* 11f5ba05 pop ecx */
  ECX = (pop32());
  /* 11f5ba06 jmp 0x11f5bcf1 */
  jmp_ind(0x11f5bcf1u); return;
L_11f5ba0b:;
  /* 11f5ba0b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5ba0e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba10 jne 0x11f5ba1e */
  if (!C.zf) goto L_11f5ba1e;
  /* 11f5ba12 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ba13 call 0x11f542bc */
  push32(0x11f5ba18u); f_11f542bc();
  /* 11f5ba18 pop ecx */
  ECX = (pop32());
  /* 11f5ba19 jmp 0x11f5bcef */
  jmp_ind(0x11f5bcefu); return;
L_11f5ba1e:;
  /* 11f5ba1e mov eax, dword ptr [0x11f630e8] */
  EAX = (r32((uint32_t)(0x11f630e8)));
  /* 11f5ba23 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba26 jne 0x11f5bb65 */
  if (!C.zf) goto L_11f5bb65;
L_11f5ba2c:;
  /* 11f5ba2c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11f5ba2f cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba32 ja 0x11f5bb29 */
  if ((!C.cf&&!C.zf)) goto L_11f5bb29;
  /* 11f5ba38 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5ba3a call 0x11f5637c */
  push32(0x11f5ba3fu); f_11f5637c();
  /* 11f5ba3f pop ecx */
  ECX = (pop32());
  /* 11f5ba40 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f5ba43 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ba44 call 0x11f569fc */
  push32(0x11f5ba49u); f_11f569fc();
  /* 11f5ba49 pop ecx */
  ECX = (pop32());
  /* 11f5ba4a mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f5ba4d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba4f je 0x11f5baf9 */
  if (C.zf) goto L_11f5baf9;
  /* 11f5ba55 cmp esi, dword ptr [0x11f630e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f630e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba5b ja 0x11f5baa9 */
  if ((!C.cf&&!C.zf)) goto L_11f5baa9;
  /* 11f5ba5d push esi */
  push32((uint32_t)(ESI));
  /* 11f5ba5e push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ba5f push eax */
  push32((uint32_t)(EAX));
  /* 11f5ba60 call 0x11f57205 */
  push32(0x11f5ba65u); f_11f57205();
  /* 11f5ba65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5ba68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5ba6a je 0x11f5ba71 */
  if (C.zf) goto L_11f5ba71;
  /* 11f5ba6c mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11f5ba6f jmp 0x11f5baa9 */
  goto L_11f5baa9;
L_11f5ba71:;
  /* 11f5ba71 push esi */
  push32((uint32_t)(ESI));
  /* 11f5ba72 call 0x11f56d50 */
  push32(0x11f5ba77u); f_11f56d50();
  /* 11f5ba77 pop ecx */
  ECX = (pop32());
  /* 11f5ba78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5ba7b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba7d je 0x11f5baa9 */
  if (C.zf) goto L_11f5baa9;
  /* 11f5ba7f mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11f5ba82 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5ba83 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f5ba86 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5ba88 jb 0x11f5ba8c */
  if (C.cf) goto L_11f5ba8c;
  /* 11f5ba8a mov eax, esi */
  EAX = (ESI);
L_11f5ba8c:;
  /* 11f5ba8c push eax */
  push32((uint32_t)(EAX));
  /* 11f5ba8d push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ba8e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5ba91 call 0x11f59570 */
  push32(0x11f5ba96u); f_11f59570();
  /* 11f5ba96 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5ba97 call 0x11f569fc */
  push32(0x11f5ba9cu); f_11f569fc();
  /* 11f5ba9c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f5ba9f push ebx */
  push32((uint32_t)(EBX));
  /* 11f5baa0 push eax */
  push32((uint32_t)(EAX));
  /* 11f5baa1 call 0x11f56a27 */
  push32(0x11f5baa6u); f_11f56a27();
  /* 11f5baa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5baa9:;
  /* 11f5baa9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5baac jne 0x11f5baf9 */
  if (!C.zf) goto L_11f5baf9;
  /* 11f5baae cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bab0 jne 0x11f5bab8 */
  if (!C.zf) goto L_11f5bab8;
  /* 11f5bab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5bab4 pop esi */
  ESI = (pop32());
  /* 11f5bab5 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11f5bab8:;
  /* 11f5bab8 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5babb and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f5babe mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11f5bac1 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bac2 push edi */
  push32((uint32_t)(EDI));
  /* 11f5bac3 push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f5bac9 call dword ptr [0x11f5c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a4))), 0x11f5bacfu);
  /* 11f5bacf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5bad2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bad4 je 0x11f5baf9 */
  if (C.zf) goto L_11f5baf9;
  /* 11f5bad6 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11f5bad9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f5bada mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f5badd cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5badf jb 0x11f5bae3 */
  if (C.cf) goto L_11f5bae3;
  /* 11f5bae1 mov eax, esi */
  EAX = (ESI);
L_11f5bae3:;
  /* 11f5bae3 push eax */
  push32((uint32_t)(EAX));
  /* 11f5bae4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bae5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5bae8 call 0x11f59570 */
  push32(0x11f5baedu); f_11f59570();
  /* 11f5baed push ebx */
  push32((uint32_t)(EBX));
  /* 11f5baee push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11f5baf1 call 0x11f56a27 */
  push32(0x11f5baf6u); f_11f56a27();
  /* 11f5baf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5baf9:;
  /* 11f5baf9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5bafd call 0x11f5bb5c */
  push32(0x11f5bb02u); f_11f5bb5c();
  /* 11f5bb02 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb05 jne 0x11f5bb29 */
  if (!C.zf) goto L_11f5bb29;
  /* 11f5bb07 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb09 jne 0x11f5bb0e */
  if (!C.zf) goto L_11f5bb0e;
  /* 11f5bb0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5bb0d pop esi */
  ESI = (pop32());
L_11f5bb0e:;
  /* 11f5bb0e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5bb11 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f5bb14 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11f5bb17 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bb18 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bb19 push edi */
  push32((uint32_t)(EDI));
  /* 11f5bb1a push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f5bb20 call dword ptr [0x11f5c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c05c))), 0x11f5bb26u);
  /* 11f5bb26 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f5bb29:;
  /* 11f5bb29 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f5bb2c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb2e jne 0x11f5bcf1 */
  if (!C.zf) { jmp_ind(0x11f5bcf1u); return; }
  /* 11f5bb34 cmp dword ptr [0x11f62dbc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62dbc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb3a je 0x11f5bcf1 */
  if (C.zf) { jmp_ind(0x11f5bcf1u); return; }
  /* 11f5bb40 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bb41 call 0x11f5813c */
  push32(0x11f5bb46u); f_11f5813c();
  /* 11f5bb46 pop ecx */
  ECX = (pop32());
  /* 11f5bb47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5bb49 jne 0x11f5ba2c */
  if (!C.zf) goto L_11f5ba2c;
  /* 11f5bb4f jmp 0x11f5bcef */
  jmp_ind(0x11f5bcefu); return;
  /* 11f5bb54 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5bb57 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5bb5a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5bb5c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5bb5e call 0x11f563dd */
  push32(0x11f5bb63u); f_11f563dd();
  /* 11f5bb63 pop ecx */
  ECX = (pop32());
  /* 11f5bb64 ret  */
  ESPCHK(0x11f5b9d1u, _esp0);
  ESP += 4; return;
L_11f5bb65:;
  /* 11f5bb65 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb68 jne 0x11f5bcb5 */
  if (!C.zf) goto L_11f5bcb5;
  /* 11f5bb6e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb71 ja 0x11f5bb85 */
  if ((!C.cf&&!C.zf)) goto L_11f5bb85;
  /* 11f5bb73 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb75 jbe 0x11f5bb7f */
  if ((C.cf||C.zf)) goto L_11f5bb7f;
  /* 11f5bb77 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5bb7a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f5bb7d jmp 0x11f5bb82 */
  goto L_11f5bb82;
L_11f5bb7f:;
  /* 11f5bb7f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f5bb81 pop esi */
  ESI = (pop32());
L_11f5bb82:;
  /* 11f5bb82 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11f5bb85:;
  /* 11f5bb85 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11f5bb88 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bb8b ja 0x11f5bc84 */
  if ((!C.cf&&!C.zf)) goto L_11f5bc84;
  /* 11f5bb91 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5bb93 call 0x11f5637c */
  push32(0x11f5bb98u); f_11f5637c();
  /* 11f5bb98 pop ecx */
  ECX = (pop32());
  /* 11f5bb99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f5bba0 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11f5bba3 push eax */
  push32((uint32_t)(EAX));
  /* 11f5bba4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11f5bba7 push eax */
  push32((uint32_t)(EAX));
  /* 11f5bba8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bba9 call 0x11f57757 */
  push32(0x11f5bbaeu); f_11f57757();
  /* 11f5bbae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5bbb1 mov edi, eax */
  EDI = (EAX);
  /* 11f5bbb3 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11f5bbb6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f5bbb8 je 0x11f5bc68 */
  if (C.zf) goto L_11f5bc68;
  /* 11f5bbbe cmp esi, dword ptr [0x11f61cdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f61cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bbc4 jae 0x11f5bc22 */
  if (!C.cf) goto L_11f5bc22;
  /* 11f5bbc6 mov ebx, esi */
  EBX = (ESI);
  /* 11f5bbc8 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11f5bbcb push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bbcc push edi */
  push32((uint32_t)(EDI));
  /* 11f5bbcd push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11f5bbd0 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11f5bbd3 call 0x11f57b1f */
  push32(0x11f5bbd8u); f_11f57b1f();
  /* 11f5bbd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5bbdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5bbdd je 0x11f5bbe7 */
  if (C.zf) goto L_11f5bbe7;
  /* 11f5bbdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5bbe2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5bbe5 jmp 0x11f5bc1f */
  goto L_11f5bc1f;
L_11f5bbe7:;
  /* 11f5bbe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bbe8 call 0x11f577f3 */
  push32(0x11f5bbedu); f_11f577f3();
  /* 11f5bbed pop ecx */
  ECX = (pop32());
  /* 11f5bbee mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5bbf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5bbf3 je 0x11f5bc1f */
  if (C.zf) goto L_11f5bc1f;
  /* 11f5bbf5 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f5bbf8 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f5bbfb mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11f5bbfe cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bc00 jb 0x11f5bc04 */
  if (C.cf) goto L_11f5bc04;
  /* 11f5bc02 mov eax, esi */
  EAX = (ESI);
L_11f5bc04:;
  /* 11f5bc04 push eax */
  push32((uint32_t)(EAX));
  /* 11f5bc05 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5bc08 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5bc0b call 0x11f59570 */
  push32(0x11f5bc10u); f_11f59570();
  /* 11f5bc10 push edi */
  push32((uint32_t)(EDI));
  /* 11f5bc11 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11f5bc14 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11f5bc17 call 0x11f577ae */
  push32(0x11f5bc1cu); f_11f577ae();
  /* 11f5bc1c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f5bc1f:;
  /* 11f5bc1f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f5bc22:;
  /* 11f5bc22 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bc26 jne 0x11f5bc7b */
  if (!C.zf) goto L_11f5bc7b;
  /* 11f5bc28 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5bc2b push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f5bc31 call dword ptr [0x11f5c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c0a4))), 0x11f5bc37u);
  /* 11f5bc37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f5bc3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5bc3c je 0x11f5bc7b */
  if (C.zf) goto L_11f5bc7b;
  /* 11f5bc3e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11f5bc41 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f5bc44 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11f5bc47 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bc49 jb 0x11f5bc4d */
  if (C.cf) goto L_11f5bc4d;
  /* 11f5bc4b mov eax, esi */
  EAX = (ESI);
L_11f5bc4d:;
  /* 11f5bc4d push eax */
  push32((uint32_t)(EAX));
  /* 11f5bc4e push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bc4f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f5bc52 call 0x11f59570 */
  push32(0x11f5bc57u); f_11f59570();
  /* 11f5bc57 push edi */
  push32((uint32_t)(EDI));
  /* 11f5bc58 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11f5bc5b push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11f5bc5e call 0x11f577ae */
  push32(0x11f5bc63u); f_11f577ae();
  /* 11f5bc63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5bc66 jmp 0x11f5bc7b */
  goto L_11f5bc7b;
L_11f5bc68:;
  /* 11f5bc68 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bc69 push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bc6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f5bc6c push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f5bc72 call dword ptr [0x11f5c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c05c))), 0x11f5bc78u);
  /* 11f5bc78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f5bc7b:;
  /* 11f5bc7b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f5bc7f call 0x11f5bcaa */
  push32(0x11f5bc84u); f_11f5bcaa();
L_11f5bc84:;
  /* 11f5bc84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f5bc87 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bc89 jne 0x11f5bcf1 */
  if (!C.zf) { jmp_ind(0x11f5bcf1u); return; }
  /* 11f5bc8b cmp dword ptr [0x11f62dbc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f62dbc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bc91 je 0x11f5bcf1 */
  if (C.zf) { jmp_ind(0x11f5bcf1u); return; }
  /* 11f5bc93 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bc94 call 0x11f5813c */
  push32(0x11f5bc99u); f_11f5813c();
  /* 11f5bc99 pop ecx */
  ECX = (pop32());
  /* 11f5bc9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5bc9c jne 0x11f5bb85 */
  if (!C.zf) goto L_11f5bb85;
  /* 11f5bca2 jmp 0x11f5bcef */
  jmp_ind(0x11f5bcefu); return;
  /* 11f5bca4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5bca7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5bcaa push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5bcac call 0x11f563dd */
  push32(0x11f5bcb1u); f_11f563dd();
  /* 11f5bcb1 pop ecx */
  ECX = (pop32());
  /* 11f5bcb2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5bcb4 ret  */
  ESPCHK(0x11f5b9d1u, _esp0);
  ESP += 4; return;
L_11f5bcb5:;
  /* 11f5bcb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5bcb7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bcba ja 0x11f5bcd8 */
  if ((!C.cf&&!C.zf)) goto L_11f5bcd8;
  /* 11f5bcbc cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bcbe jne 0x11f5bcc3 */
  if (!C.zf) goto L_11f5bcc3;
  /* 11f5bcc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f5bcc2 pop esi */
  ESI = (pop32());
L_11f5bcc3:;
  /* 11f5bcc3 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f5bcc6 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f5bcc9 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bcca push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bccb push edi */
  push32((uint32_t)(EDI));
  /* 11f5bccc push dword ptr [0x11f630e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f630e4))));
  /* 11f5bcd2 call dword ptr [0x11f5c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f5c05c))), 0x11f5bcd8u);
L_11f5bcd8:;
  /* 11f5bcd8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bcda jne 0x11f5bcf1 */
  if (!C.zf) { jmp_ind(0x11f5bcf1u); return; }
}

/* FUN_1000bb5c @ 0x11f5bb5c (9 bytes, 4 insns) */
void f_11f5bb5c(void) {
  FTRACE(0x11f5bb5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5bb5c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5bb5e call 0x11f563dd */
  push32(0x11f5bb63u); f_11f563dd();
  /* 11f5bb63 pop ecx */
  ECX = (pop32());
  /* 11f5bb64 ret  */
  ESPCHK(0x11f5bb5cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcaa @ 0x11f5bcaa (11 bytes, 5 insns) */
void f_11f5bcaa(void) {
  FTRACE(0x11f5bcaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5bcaa push 9 */
  push32((uint32_t)(0x9u));
  /* 11f5bcac call 0x11f563dd */
  push32(0x11f5bcb1u); f_11f563dd();
  /* 11f5bcb1 pop ecx */
  ECX = (pop32());
  /* 11f5bcb2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f5bcb4 ret  */
  ESPCHK(0x11f5bcaau, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd00 @ 0x11f5bd00 (151 bytes, 62 insns) */
void f_11f5bd00(void) {
  FTRACE(0x11f5bd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5bd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f5bd01 mov ebp, esp */
  EBP = (ESP);
  /* 11f5bd03 cmp dword ptr [0x11f62ebc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f62ebc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bd0a push ebx */
  push32((uint32_t)(EBX));
  /* 11f5bd0b push esi */
  push32((uint32_t)(ESI));
  /* 11f5bd0c jne 0x11f5bd1d */
  if (!C.zf) goto L_11f5bd1d;
  /* 11f5bd0e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f5bd11 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f5bd14 call 0x11f59ae0 */
  push32(0x11f5bd19u); f_11f59ae0();
  /* 11f5bd19 pop ecx */
  ECX = (pop32());
  /* 11f5bd1a pop ecx */
  ECX = (pop32());
  /* 11f5bd1b jmp 0x11f5bd93 */
  goto L_11f5bd93;
L_11f5bd1d:;
  /* 11f5bd1d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f5bd1f call 0x11f5637c */
  push32(0x11f5bd24u); f_11f5637c();
  /* 11f5bd24 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f5bd27 pop ecx */
  ECX = (pop32());
L_11f5bd28:;
  /* 11f5bd28 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11f5bd2c test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11f5bd2f je 0x11f5bd7b */
  if (C.zf) goto L_11f5bd7b;
  /* 11f5bd31 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11f5bd34 test byte ptr [eax + 0x11f62fc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f62fc1)))&(0x4u); fl_logic(_r,8); }
  /* 11f5bd3b je 0x11f5bd57 */
  if (C.zf) goto L_11f5bd57;
  /* 11f5bd3d mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f5bd40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5bd41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f5bd43 je 0x11f5bd62 */
  if (C.zf) goto L_11f5bd62;
  /* 11f5bd45 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11f5bd48 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11f5bd4b shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11f5bd4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f5bd50 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bd53 je 0x11f5bd6e */
  if (C.zf) goto L_11f5bd6e;
  /* 11f5bd55 jmp 0x11f5bd5f */
  goto L_11f5bd5f;
L_11f5bd57:;
  /* 11f5bd57 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11f5bd5a cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f5bd5d je 0x11f5bd7b */
  if (C.zf) goto L_11f5bd7b;
L_11f5bd5f:;
  /* 11f5bd5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f5bd60 jmp 0x11f5bd28 */
  goto L_11f5bd28;
L_11f5bd62:;
  /* 11f5bd62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f5bd64 call 0x11f563dd */
  push32(0x11f5bd69u); f_11f563dd();
  /* 11f5bd69 pop ecx */
  ECX = (pop32());
  /* 11f5bd6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5bd6c jmp 0x11f5bd93 */
  goto L_11f5bd93;
L_11f5bd6e:;
  /* 11f5bd6e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f5bd70 call 0x11f563dd */
  push32(0x11f5bd75u); f_11f563dd();
  /* 11f5bd75 pop ecx */
  ECX = (pop32());
  /* 11f5bd76 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11f5bd79 jmp 0x11f5bd93 */
  goto L_11f5bd93;
L_11f5bd7b:;
  /* 11f5bd7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f5bd7d call 0x11f563dd */
  push32(0x11f5bd82u); f_11f563dd();
  /* 11f5bd82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f5bd85 pop ecx */
  ECX = (pop32());
  /* 11f5bd86 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11f5bd89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5bd8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f5bd8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f5bd8f not eax */
  EAX = (~(EAX));
  /* 11f5bd91 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11f5bd93:;
  /* 11f5bd93 pop esi */
  ESI = (pop32());
  /* 11f5bd94 pop ebx */
  EBX = (pop32());
  /* 11f5bd95 pop ebp */
  EBP = (pop32());
  /* 11f5bd96 ret  */
  ESPCHK(0x11f5bd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd97 @ 0x11f5bd97 (43 bytes, 23 insns) */
void f_11f5bd97(void) {
  FTRACE(0x11f5bd97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5bd97 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bd98 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f5bd9c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f5bd9e je 0x11f5bdbe */
  if (C.zf) goto L_11f5bdbe;
  /* 11f5bda0 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bda1 call 0x11f58630 */
  push32(0x11f5bda6u); f_11f58630();
  /* 11f5bda6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f5bda7 push eax */
  push32((uint32_t)(EAX));
  /* 11f5bda8 call 0x11f54cc3 */
  push32(0x11f5bdadu); f_11f54cc3();
  /* 11f5bdad pop ecx */
  ECX = (pop32());
  /* 11f5bdae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f5bdb0 pop ecx */
  ECX = (pop32());
  /* 11f5bdb1 je 0x11f5bdbe */
  if (C.zf) goto L_11f5bdbe;
  /* 11f5bdb3 push esi */
  push32((uint32_t)(ESI));
  /* 11f5bdb4 push eax */
  push32((uint32_t)(EAX));
  /* 11f5bdb5 call 0x11f59020 */
  push32(0x11f5bdbau); f_11f59020();
  /* 11f5bdba pop ecx */
  ECX = (pop32());
  /* 11f5bdbb pop ecx */
  ECX = (pop32());
  /* 11f5bdbc pop esi */
  ESI = (pop32());
  /* 11f5bdbd ret  */
  ESPCHK(0x11f5bd97u, _esp0);
  ESP += 4; return;
L_11f5bdbe:;
  /* 11f5bdbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f5bdc0 pop esi */
  ESI = (pop32());
  /* 11f5bdc1 ret  */
  ESPCHK(0x11f5bd97u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11f5bdc2 (6 bytes, 1 insns) */
void f_11f5bdc2(void) {
  FTRACE(0x11f5bdc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5bdc2 jmp dword ptr [0x11f5c078] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f5c078)))); return;
}

/* Unwind@1000bdd0 @ 0x11f5bdd0 (8 bytes, 2 insns) */
void f_11f5bdd0(void) {
  FTRACE(0x11f5bdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f5bdd0 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11f5bdd3 jmp 0x11f525e0 */
  f_11f525e0(); return;
}

