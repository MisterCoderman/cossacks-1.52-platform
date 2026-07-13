#include "recomp.h"

/* FUN_1000e2b0 @ 0x105ae2b0 (183 bytes, 58 insns) */
void f_105ae2b0(void) {
  FTRACE(0x105ae2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ae2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ae2b1 mov ebp, esp */
  EBP = (ESP);
  /* 105ae2b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae2b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae2bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae2c1 ja 0x105ae2da */
  if ((!C.cf&&!C.zf)) goto L_105ae2da;
  /* 105ae2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae2c6 mov edx, dword ptr [0x105d0de8] */
  EDX = (r32((uint32_t)(0x105d0de8)));
  /* 105ae2cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae2ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 105ae2d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 105ae2d5 jmp 0x105ae363 */
  goto L_105ae363;
L_105ae2da:;
  /* 105ae2da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae2dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 105ae2e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ae2e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ae2ec mov edx, dword ptr [0x105d0de8] */
  EDX = (r32((uint32_t)(0x105d0de8)));
  /* 105ae2f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae2f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 105ae2f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 105ae2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ae2ff je 0x105ae323 */
  if (C.zf) goto L_105ae323;
  /* 105ae301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae304 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 105ae307 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105ae30d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 105ae310 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 105ae313 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 105ae316 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 105ae31a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 105ae321 jmp 0x105ae334 */
  goto L_105ae334;
L_105ae323:;
  /* 105ae323 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 105ae326 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 105ae329 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 105ae32d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_105ae334:;
  /* 105ae334 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ae336 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ae338 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ae33a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 105ae33d push ecx */
  push32((uint32_t)(ECX));
  /* 105ae33e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ae341 push edx */
  push32((uint32_t)(EDX));
  /* 105ae342 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 105ae345 push eax */
  push32((uint32_t)(EAX));
  /* 105ae346 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ae348 call 0x105b0680 */
  push32(0x105ae34du); f_105b0680();
  /* 105ae34d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ae352 jne 0x105ae358 */
  if (!C.zf) goto L_105ae358;
  /* 105ae354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae356 jmp 0x105ae363 */
  goto L_105ae363;
L_105ae358:;
  /* 105ae358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae35b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ae360 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_105ae363:;
  /* 105ae363 mov esp, ebp */
  ESP = (EBP);
  /* 105ae365 pop ebp */
  EBP = (pop32());
  /* 105ae366 ret  */
  ESPCHK(0x105ae2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x105ae370 (836 bytes, 238 insns) */
void f_105ae370(void) {
  FTRACE(0x105ae370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ae370 push ebp */
  push32((uint32_t)(EBP));
  /* 105ae371 mov ebp, esp */
  EBP = (ESP);
  /* 105ae373 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae376 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae378 call 0x105abda0 */
  push32(0x105ae37du); f_105abda0();
  /* 105ae37d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae383 push eax */
  push32((uint32_t)(EAX));
  /* 105ae384 call 0x105ae6c0 */
  push32(0x105ae389u); f_105ae6c0();
  /* 105ae389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae38c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105ae38f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae392 cmp ecx, dword ptr [0x105d2d30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d2d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae398 jne 0x105ae3ab */
  if (!C.zf) goto L_105ae3ab;
  /* 105ae39a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae39c call 0x105abe40 */
  push32(0x105ae3a1u); f_105abe40();
  /* 105ae3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae3a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae3a6 jmp 0x105ae6b0 */
  goto L_105ae6b0;
L_105ae3ab:;
  /* 105ae3ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae3af jne 0x105ae3cc */
  if (!C.zf) goto L_105ae3cc;
  /* 105ae3b1 call 0x105ae7a0 */
  push32(0x105ae3b6u); f_105ae7a0();
  /* 105ae3b6 call 0x105ae820 */
  push32(0x105ae3bbu); f_105ae820();
  /* 105ae3bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae3bd call 0x105abe40 */
  push32(0x105ae3c2u); f_105abe40();
  /* 105ae3c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae3c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae3c7 jmp 0x105ae6b0 */
  goto L_105ae6b0;
L_105ae3cc:;
  /* 105ae3cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ae3d3 jmp 0x105ae3de */
  goto L_105ae3de;
L_105ae3d5:;
  /* 105ae3d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae3d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae3db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ae3de:;
  /* 105ae3de cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae3e2 jae 0x105ae52f */
  if (!C.cf) goto L_105ae52f;
  /* 105ae3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae3eb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ae3ee mov ecx, dword ptr [eax + 0x105d1170] */
  ECX = (r32((uint32_t)(EAX + 0x105d1170)));
  /* 105ae3f4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae3f7 jne 0x105ae52a */
  if (!C.zf) goto L_105ae52a;
  /* 105ae3fd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105ae404 jmp 0x105ae40f */
  goto L_105ae40f;
L_105ae406:;
  /* 105ae406 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae409 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae40c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_105ae40f:;
  /* 105ae40f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae416 jae 0x105ae424 */
  if (!C.cf) goto L_105ae424;
  /* 105ae418 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae41b mov byte ptr [eax + 0x105d2ec0], 0 */
  w8((uint32_t)(EAX + 0x105d2ec0), (0x0u));
  /* 105ae422 jmp 0x105ae406 */
  goto L_105ae406;
L_105ae424:;
  /* 105ae424 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ae42b jmp 0x105ae436 */
  goto L_105ae436;
L_105ae42d:;
  /* 105ae42d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae430 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae433 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105ae436:;
  /* 105ae436 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae43a jae 0x105ae4b7 */
  if (!C.cf) goto L_105ae4b7;
  /* 105ae43c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae43f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ae442 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae445 lea ecx, [edx + eax*8 + 0x105d1180] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x105d1180));
  /* 105ae44c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ae44f jmp 0x105ae45a */
  goto L_105ae45a;
L_105ae451:;
  /* 105ae451 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ae454 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae457 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105ae45a:;
  /* 105ae45a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ae45d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ae45f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105ae461 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ae463 je 0x105ae4b2 */
  if (C.zf) goto L_105ae4b2;
  /* 105ae465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ae468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae46a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105ae46d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ae46f je 0x105ae4b2 */
  if (C.zf) goto L_105ae4b2;
  /* 105ae471 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ae474 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae476 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105ae478 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105ae47b jmp 0x105ae486 */
  goto L_105ae486;
L_105ae47d:;
  /* 105ae47d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae480 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae483 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105ae486:;
  /* 105ae486 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ae489 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae48b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105ae48e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae491 ja 0x105ae4b0 */
  if ((!C.cf&&!C.zf)) goto L_105ae4b0;
  /* 105ae493 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae499 mov dl, byte ptr [eax + 0x105d2ec1] */
  DL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105ae49f or dl, byte ptr [ecx + 0x105d1168] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x105d1168))); DL = (_r); fl_logic(_r,8); }
  /* 105ae4a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae4a8 mov byte ptr [eax + 0x105d2ec1], dl */
  w8((uint32_t)(EAX + 0x105d2ec1), (DL));
  /* 105ae4ae jmp 0x105ae47d */
  goto L_105ae47d;
L_105ae4b0:;
  /* 105ae4b0 jmp 0x105ae451 */
  goto L_105ae451;
L_105ae4b2:;
  /* 105ae4b2 jmp 0x105ae42d */
  goto L_105ae42d;
L_105ae4b7:;
  /* 105ae4b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae4ba mov dword ptr [0x105d2d30], ecx */
  w32((uint32_t)(0x105d2d30), (ECX));
  /* 105ae4c0 mov dword ptr [0x105d2dbc], 1 */
  w32((uint32_t)(0x105d2dbc), (0x1u));
  /* 105ae4ca mov edx, dword ptr [0x105d2d30] */
  EDX = (r32((uint32_t)(0x105d2d30)));
  /* 105ae4d0 push edx */
  push32((uint32_t)(EDX));
  /* 105ae4d1 call 0x105ae720 */
  push32(0x105ae4d6u); f_105ae720();
  /* 105ae4d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae4d9 mov dword ptr [0x105d2fc4], eax */
  w32((uint32_t)(0x105d2fc4), (EAX));
  /* 105ae4de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ae4e5 jmp 0x105ae4f0 */
  goto L_105ae4f0;
L_105ae4e7:;
  /* 105ae4e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae4ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae4ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105ae4f0:;
  /* 105ae4f0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae4f4 jae 0x105ae514 */
  if (!C.cf) goto L_105ae514;
  /* 105ae4f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae4f9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ae4fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae4ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae502 mov cx, word ptr [ecx + eax*2 + 0x105d1174] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x105d1174)));
  /* 105ae50a mov word ptr [edx*2 + 0x105d2db0], cx */
  w16((uint32_t)(EDX*2 + 0x105d2db0), (CX));
  /* 105ae512 jmp 0x105ae4e7 */
  goto L_105ae4e7;
L_105ae514:;
  /* 105ae514 call 0x105ae820 */
  push32(0x105ae519u); f_105ae820();
  /* 105ae519 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae51b call 0x105abe40 */
  push32(0x105ae520u); f_105abe40();
  /* 105ae520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae525 jmp 0x105ae6b0 */
  goto L_105ae6b0;
L_105ae52a:;
  /* 105ae52a jmp 0x105ae3d5 */
  goto L_105ae3d5;
L_105ae52f:;
  /* 105ae52f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 105ae532 push edx */
  push32((uint32_t)(EDX));
  /* 105ae533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae536 push eax */
  push32((uint32_t)(EAX));
  /* 105ae537 call dword ptr [0x105d52c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52c0))), 0x105ae53du);
  /* 105ae53d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae540 jne 0x105ae682 */
  if (!C.zf) goto L_105ae682;
  /* 105ae546 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105ae54d jmp 0x105ae558 */
  goto L_105ae558;
L_105ae54f:;
  /* 105ae54f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae555 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_105ae558:;
  /* 105ae558 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae55f jae 0x105ae56d */
  if (!C.cf) goto L_105ae56d;
  /* 105ae561 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae564 mov byte ptr [edx + 0x105d2ec0], 0 */
  w8((uint32_t)(EDX + 0x105d2ec0), (0x0u));
  /* 105ae56b jmp 0x105ae54f */
  goto L_105ae54f;
L_105ae56d:;
  /* 105ae56d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae570 mov dword ptr [0x105d2d30], eax */
  w32((uint32_t)(0x105d2d30), (EAX));
  /* 105ae575 mov dword ptr [0x105d2fc4], 0 */
  w32((uint32_t)(0x105d2fc4), (0x0u));
  /* 105ae57f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae583 jbe 0x105ae63e */
  if ((C.cf||C.zf)) goto L_105ae63e;
  /* 105ae589 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 105ae58c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 105ae58f jmp 0x105ae59a */
  goto L_105ae59a;
L_105ae591:;
  /* 105ae591 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ae594 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae597 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_105ae59a:;
  /* 105ae59a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ae59d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ae59f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105ae5a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ae5a3 je 0x105ae5ec */
  if (C.zf) goto L_105ae5ec;
  /* 105ae5a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ae5a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae5aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105ae5ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ae5af je 0x105ae5ec */
  if (C.zf) goto L_105ae5ec;
  /* 105ae5b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ae5b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae5b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105ae5b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105ae5bb jmp 0x105ae5c6 */
  goto L_105ae5c6;
L_105ae5bd:;
  /* 105ae5bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae5c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae5c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105ae5c6:;
  /* 105ae5c6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105ae5c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae5cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105ae5ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae5d1 ja 0x105ae5ea */
  if ((!C.cf&&!C.zf)) goto L_105ae5ea;
  /* 105ae5d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae5d6 mov cl, byte ptr [eax + 0x105d2ec1] */
  CL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105ae5dc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 105ae5df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae5e2 mov byte ptr [edx + 0x105d2ec1], cl */
  w8((uint32_t)(EDX + 0x105d2ec1), (CL));
  /* 105ae5e8 jmp 0x105ae5bd */
  goto L_105ae5bd;
L_105ae5ea:;
  /* 105ae5ea jmp 0x105ae591 */
  goto L_105ae591;
L_105ae5ec:;
  /* 105ae5ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 105ae5f3 jmp 0x105ae5fe */
  goto L_105ae5fe;
L_105ae5f5:;
  /* 105ae5f5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae5f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae5fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105ae5fe:;
  /* 105ae5fe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae605 jae 0x105ae61e */
  if (!C.cf) goto L_105ae61e;
  /* 105ae607 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae60a mov dl, byte ptr [ecx + 0x105d2ec1] */
  DL = (r8((uint32_t)(ECX + 0x105d2ec1)));
  /* 105ae610 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 105ae613 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105ae616 mov byte ptr [eax + 0x105d2ec1], dl */
  w8((uint32_t)(EAX + 0x105d2ec1), (DL));
  /* 105ae61c jmp 0x105ae5f5 */
  goto L_105ae5f5;
L_105ae61e:;
  /* 105ae61e mov ecx, dword ptr [0x105d2d30] */
  ECX = (r32((uint32_t)(0x105d2d30)));
  /* 105ae624 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae625 call 0x105ae720 */
  push32(0x105ae62au); f_105ae720();
  /* 105ae62a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae62d mov dword ptr [0x105d2fc4], eax */
  w32((uint32_t)(0x105d2fc4), (EAX));
  /* 105ae632 mov dword ptr [0x105d2dbc], 1 */
  w32((uint32_t)(0x105d2dbc), (0x1u));
  /* 105ae63c jmp 0x105ae648 */
  goto L_105ae648;
L_105ae63e:;
  /* 105ae63e mov dword ptr [0x105d2dbc], 0 */
  w32((uint32_t)(0x105d2dbc), (0x0u));
L_105ae648:;
  /* 105ae648 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ae64f jmp 0x105ae65a */
  goto L_105ae65a;
L_105ae651:;
  /* 105ae651 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae654 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae657 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105ae65a:;
  /* 105ae65a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae65e jae 0x105ae66f */
  if (!C.cf) goto L_105ae66f;
  /* 105ae660 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ae663 mov word ptr [eax*2 + 0x105d2db0], 0 */
  w16((uint32_t)(EAX*2 + 0x105d2db0), (0x0u));
  /* 105ae66d jmp 0x105ae651 */
  goto L_105ae651;
L_105ae66f:;
  /* 105ae66f call 0x105ae820 */
  push32(0x105ae674u); f_105ae820();
  /* 105ae674 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae676 call 0x105abe40 */
  push32(0x105ae67bu); f_105abe40();
  /* 105ae67b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae67e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae680 jmp 0x105ae6b0 */
  goto L_105ae6b0;
L_105ae682:;
  /* 105ae682 cmp dword ptr [0x105d2b90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2b90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae689 je 0x105ae6a3 */
  if (C.zf) goto L_105ae6a3;
  /* 105ae68b call 0x105ae7a0 */
  push32(0x105ae690u); f_105ae7a0();
  /* 105ae690 call 0x105ae820 */
  push32(0x105ae695u); f_105ae820();
  /* 105ae695 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae697 call 0x105abe40 */
  push32(0x105ae69cu); f_105abe40();
  /* 105ae69c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae69f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ae6a1 jmp 0x105ae6b0 */
  goto L_105ae6b0;
L_105ae6a3:;
  /* 105ae6a3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105ae6a5 call 0x105abe40 */
  push32(0x105ae6aau); f_105abe40();
  /* 105ae6aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae6ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105ae6b0:;
  /* 105ae6b0 mov esp, ebp */
  ESP = (EBP);
  /* 105ae6b2 pop ebp */
  EBP = (pop32());
  /* 105ae6b3 ret  */
  ESPCHK(0x105ae370u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x105ae6c0 (89 bytes, 21 insns) */
void f_105ae6c0(void) {
  FTRACE(0x105ae6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ae6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ae6c1 mov ebp, esp */
  EBP = (ESP);
  /* 105ae6c3 mov dword ptr [0x105d2b90], 0 */
  w32((uint32_t)(0x105d2b90), (0x0u));
  /* 105ae6cd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae6d1 jne 0x105ae6e5 */
  if (!C.zf) goto L_105ae6e5;
  /* 105ae6d3 mov dword ptr [0x105d2b90], 1 */
  w32((uint32_t)(0x105d2b90), (0x1u));
  /* 105ae6dd call dword ptr [0x105d52c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52c8))), 0x105ae6e3u);
  /* 105ae6e3 jmp 0x105ae717 */
  goto L_105ae717;
L_105ae6e5:;
  /* 105ae6e5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae6e9 jne 0x105ae6fd */
  if (!C.zf) goto L_105ae6fd;
  /* 105ae6eb mov dword ptr [0x105d2b90], 1 */
  w32((uint32_t)(0x105d2b90), (0x1u));
  /* 105ae6f5 call dword ptr [0x105d52c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52c4))), 0x105ae6fbu);
  /* 105ae6fb jmp 0x105ae717 */
  goto L_105ae717;
L_105ae6fd:;
  /* 105ae6fd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae701 jne 0x105ae714 */
  if (!C.zf) goto L_105ae714;
  /* 105ae703 mov dword ptr [0x105d2b90], 1 */
  w32((uint32_t)(0x105d2b90), (0x1u));
  /* 105ae70d mov eax, dword ptr [0x105d2bb8] */
  EAX = (r32((uint32_t)(0x105d2bb8)));
  /* 105ae712 jmp 0x105ae717 */
  goto L_105ae717;
L_105ae714:;
  /* 105ae714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_105ae717:;
  /* 105ae717 pop ebp */
  EBP = (pop32());
  /* 105ae718 ret  */
  ESPCHK(0x105ae6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e720 @ 0x105ae720 (80 bytes, 26 insns) [1 switch table(s)] */
void f_105ae720(void) {
  FTRACE(0x105ae720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ae720 push ebp */
  push32((uint32_t)(EBP));
  /* 105ae721 mov ebp, esp */
  EBP = (ESP);
  /* 105ae723 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ae727 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ae72a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae72d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae733 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105ae736 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae73a ja 0x105ae76a */
  if ((!C.cf&&!C.zf)) goto L_105ae76a;
  /* 105ae73c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae73f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae741 mov dl, byte ptr [eax + 0x105ae784] */
  DL = (r8((uint32_t)(EAX + 0x105ae784)));
  /* 105ae747 jmp dword ptr [edx*4 + 0x105ae770] */
  switch (EDX) {
    case 0: goto L_105ae74e;
    case 1: goto L_105ae755;
    case 2: goto L_105ae75c;
    case 3: goto L_105ae763;
    case 4: goto L_105ae76a;
    default: x86_unimpl("switch@0x105ae747 out of table"); return;
  }
L_105ae74e:;
  /* 105ae74e mov eax, 0x411 */
  EAX = (0x411u);
  /* 105ae753 jmp 0x105ae76c */
  goto L_105ae76c;
L_105ae755:;
  /* 105ae755 mov eax, 0x804 */
  EAX = (0x804u);
  /* 105ae75a jmp 0x105ae76c */
  goto L_105ae76c;
L_105ae75c:;
  /* 105ae75c mov eax, 0x412 */
  EAX = (0x412u);
  /* 105ae761 jmp 0x105ae76c */
  goto L_105ae76c;
L_105ae763:;
  /* 105ae763 mov eax, 0x404 */
  EAX = (0x404u);
  /* 105ae768 jmp 0x105ae76c */
  goto L_105ae76c;
L_105ae76a:;
  /* 105ae76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ae76c:;
  /* 105ae76c mov esp, ebp */
  ESP = (EBP);
  /* 105ae76e pop ebp */
  EBP = (pop32());
  /* 105ae76f ret  */
  ESPCHK(0x105ae720u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x105ae7a0 (116 bytes, 29 insns) */
void f_105ae7a0(void) {
  FTRACE(0x105ae7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ae7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ae7a1 mov ebp, esp */
  EBP = (ESP);
  /* 105ae7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae7a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ae7ab jmp 0x105ae7b6 */
  goto L_105ae7b6;
L_105ae7ad:;
  /* 105ae7ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae7b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae7b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ae7b6:;
  /* 105ae7b6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae7bd jge 0x105ae7cb */
  if ((C.sf==C.of)) goto L_105ae7cb;
  /* 105ae7bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae7c2 mov byte ptr [ecx + 0x105d2ec0], 0 */
  w8((uint32_t)(ECX + 0x105d2ec0), (0x0u));
  /* 105ae7c9 jmp 0x105ae7ad */
  goto L_105ae7ad;
L_105ae7cb:;
  /* 105ae7cb mov dword ptr [0x105d2d30], 0 */
  w32((uint32_t)(0x105d2d30), (0x0u));
  /* 105ae7d5 mov dword ptr [0x105d2dbc], 0 */
  w32((uint32_t)(0x105d2dbc), (0x0u));
  /* 105ae7df mov dword ptr [0x105d2fc4], 0 */
  w32((uint32_t)(0x105d2fc4), (0x0u));
  /* 105ae7e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ae7f0 jmp 0x105ae7fb */
  goto L_105ae7fb;
L_105ae7f2:;
  /* 105ae7f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae7f5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae7f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105ae7fb:;
  /* 105ae7fb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae7ff jge 0x105ae810 */
  if ((C.sf==C.of)) goto L_105ae810;
  /* 105ae801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae804 mov word ptr [eax*2 + 0x105d2db0], 0 */
  w16((uint32_t)(EAX*2 + 0x105d2db0), (0x0u));
  /* 105ae80e jmp 0x105ae7f2 */
  goto L_105ae7f2;
L_105ae810:;
  /* 105ae810 mov esp, ebp */
  ESP = (EBP);
  /* 105ae812 pop ebp */
  EBP = (pop32());
  /* 105ae813 ret  */
  ESPCHK(0x105ae7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x105ae820 (770 bytes, 175 insns) */
void f_105ae820(void) {
  FTRACE(0x105ae820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ae820 push ebp */
  push32((uint32_t)(EBP));
  /* 105ae821 mov ebp, esp */
  EBP = (ESP);
  /* 105ae823 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ae829 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 105ae82f push eax */
  push32((uint32_t)(EAX));
  /* 105ae830 mov ecx, dword ptr [0x105d2d30] */
  ECX = (r32((uint32_t)(0x105d2d30)));
  /* 105ae836 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae837 call dword ptr [0x105d52c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52c0))), 0x105ae83du);
  /* 105ae83d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae840 jne 0x105aea59 */
  if (!C.zf) goto L_105aea59;
  /* 105ae846 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 105ae850 jmp 0x105ae861 */
  goto L_105ae861;
L_105ae852:;
  /* 105ae852 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae858 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae85b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_105ae861:;
  /* 105ae861 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae86b jae 0x105ae882 */
  if (!C.cf) goto L_105ae882;
  /* 105ae86d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae873 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 105ae879 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 105ae880 jmp 0x105ae852 */
  goto L_105ae852;
L_105ae882:;
  /* 105ae882 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 105ae889 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 105ae88f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105ae892 jmp 0x105ae89d */
  goto L_105ae89d;
L_105ae894:;
  /* 105ae894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae897 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae89a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ae89d:;
  /* 105ae89d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae8a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae8a2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105ae8a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ae8a6 je 0x105ae8e8 */
  if (C.zf) goto L_105ae8e8;
  /* 105ae8a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae8ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ae8ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105ae8af mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 105ae8b5 jmp 0x105ae8c6 */
  goto L_105ae8c6;
L_105ae8b7:;
  /* 105ae8b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae8bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae8c0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_105ae8c6:;
  /* 105ae8c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ae8c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ae8cb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105ae8ce cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae8d4 ja 0x105ae8e6 */
  if ((!C.cf&&!C.zf)) goto L_105ae8e6;
  /* 105ae8d6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae8dc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 105ae8e4 jmp 0x105ae8b7 */
  goto L_105ae8b7;
L_105ae8e6:;
  /* 105ae8e6 jmp 0x105ae894 */
  goto L_105ae894;
L_105ae8e8:;
  /* 105ae8e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ae8ea mov eax, dword ptr [0x105d2fc4] */
  EAX = (r32((uint32_t)(0x105d2fc4)));
  /* 105ae8ef push eax */
  push32((uint32_t)(EAX));
  /* 105ae8f0 mov ecx, dword ptr [0x105d2d30] */
  ECX = (r32((uint32_t)(0x105d2d30)));
  /* 105ae8f6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae8f7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 105ae8fd push edx */
  push32((uint32_t)(EDX));
  /* 105ae8fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ae903 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 105ae909 push eax */
  push32((uint32_t)(EAX));
  /* 105ae90a push 1 */
  push32((uint32_t)(0x1u));
  /* 105ae90c call 0x105b0680 */
  push32(0x105ae911u); f_105b0680();
  /* 105ae911 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae914 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ae916 mov ecx, dword ptr [0x105d2d30] */
  ECX = (r32((uint32_t)(0x105d2d30)));
  /* 105ae91c push ecx */
  push32((uint32_t)(ECX));
  /* 105ae91d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ae922 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 105ae928 push edx */
  push32((uint32_t)(EDX));
  /* 105ae929 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ae92e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 105ae934 push eax */
  push32((uint32_t)(EAX));
  /* 105ae935 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ae93a mov ecx, dword ptr [0x105d2fc4] */
  ECX = (r32((uint32_t)(0x105d2fc4)));
  /* 105ae940 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae941 call 0x105b0840 */
  push32(0x105ae946u); f_105b0840();
  /* 105ae946 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae949 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ae94b mov edx, dword ptr [0x105d2d30] */
  EDX = (r32((uint32_t)(0x105d2d30)));
  /* 105ae951 push edx */
  push32((uint32_t)(EDX));
  /* 105ae952 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ae957 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 105ae95d push eax */
  push32((uint32_t)(EAX));
  /* 105ae95e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105ae963 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 105ae969 push ecx */
  push32((uint32_t)(ECX));
  /* 105ae96a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 105ae96f mov edx, dword ptr [0x105d2fc4] */
  EDX = (r32((uint32_t)(0x105d2fc4)));
  /* 105ae975 push edx */
  push32((uint32_t)(EDX));
  /* 105ae976 call 0x105b0840 */
  push32(0x105ae97bu); f_105b0840();
  /* 105ae97b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae97e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 105ae988 jmp 0x105ae999 */
  goto L_105ae999;
L_105ae98a:;
  /* 105ae98a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ae993 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_105ae999:;
  /* 105ae999 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ae9a3 jae 0x105aea54 */
  if (!C.cf) goto L_105aea54;
  /* 105ae9a9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae9af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105ae9b1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 105ae9b9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105ae9bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ae9be je 0x105ae9f6 */
  if (C.zf) goto L_105ae9f6;
  /* 105ae9c0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae9c6 mov cl, byte ptr [eax + 0x105d2ec1] */
  CL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105ae9cc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 105ae9cf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae9d5 mov byte ptr [edx + 0x105d2ec1], cl */
  w8((uint32_t)(EDX + 0x105d2ec1), (CL));
  /* 105ae9db mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae9e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae9e7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 105ae9ee mov byte ptr [eax + 0x105d2dc0], dl */
  w8((uint32_t)(EAX + 0x105d2dc0), (DL));
  /* 105ae9f4 jmp 0x105aea4f */
  goto L_105aea4f;
L_105ae9f6:;
  /* 105ae9f6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105ae9fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ae9fe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 105aea06 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 105aea09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105aea0b je 0x105aea42 */
  if (C.zf) goto L_105aea42;
  /* 105aea0d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea13 mov al, byte ptr [edx + 0x105d2ec1] */
  AL = (r8((uint32_t)(EDX + 0x105d2ec1)));
  /* 105aea19 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 105aea1b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea21 mov byte ptr [ecx + 0x105d2ec1], al */
  w8((uint32_t)(ECX + 0x105d2ec1), (AL));
  /* 105aea27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea33 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 105aea3a mov byte ptr [edx + 0x105d2dc0], cl */
  w8((uint32_t)(EDX + 0x105d2dc0), (CL));
  /* 105aea40 jmp 0x105aea4f */
  goto L_105aea4f;
L_105aea42:;
  /* 105aea42 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea48 mov byte ptr [edx + 0x105d2dc0], 0 */
  w8((uint32_t)(EDX + 0x105d2dc0), (0x0u));
L_105aea4f:;
  /* 105aea4f jmp 0x105ae98a */
  goto L_105ae98a;
L_105aea54:;
  /* 105aea54 jmp 0x105aeb1e */
  goto L_105aeb1e;
L_105aea59:;
  /* 105aea59 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 105aea63 jmp 0x105aea74 */
  goto L_105aea74;
L_105aea65:;
  /* 105aea65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aea6e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_105aea74:;
  /* 105aea74 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aea7e jae 0x105aeb1e */
  if (!C.cf) goto L_105aeb1e;
  /* 105aea84 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aea8b jb 0x105aeac8 */
  if (C.cf) goto L_105aeac8;
  /* 105aea8d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aea94 ja 0x105aeac8 */
  if ((!C.cf&&!C.zf)) goto L_105aeac8;
  /* 105aea96 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aea9c mov dl, byte ptr [ecx + 0x105d2ec1] */
  DL = (r8((uint32_t)(ECX + 0x105d2ec1)));
  /* 105aeaa2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 105aeaa5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeaab mov byte ptr [eax + 0x105d2ec1], dl */
  w8((uint32_t)(EAX + 0x105d2ec1), (DL));
  /* 105aeab1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeab7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aeaba mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeac0 mov byte ptr [edx + 0x105d2dc0], cl */
  w8((uint32_t)(EDX + 0x105d2dc0), (CL));
  /* 105aeac6 jmp 0x105aeb19 */
  goto L_105aeb19;
L_105aeac8:;
  /* 105aeac8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeacf jb 0x105aeb0c */
  if (C.cf) goto L_105aeb0c;
  /* 105aead1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aead8 ja 0x105aeb0c */
  if ((!C.cf&&!C.zf)) goto L_105aeb0c;
  /* 105aeada mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeae0 mov cl, byte ptr [eax + 0x105d2ec1] */
  CL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105aeae6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105aeae9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeaef mov byte ptr [edx + 0x105d2ec1], cl */
  w8((uint32_t)(EDX + 0x105d2ec1), (CL));
  /* 105aeaf5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeafb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aeafe mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeb04 mov byte ptr [ecx + 0x105d2dc0], al */
  w8((uint32_t)(ECX + 0x105d2dc0), (AL));
  /* 105aeb0a jmp 0x105aeb19 */
  goto L_105aeb19;
L_105aeb0c:;
  /* 105aeb0c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 105aeb12 mov byte ptr [edx + 0x105d2dc0], 0 */
  w8((uint32_t)(EDX + 0x105d2dc0), (0x0u));
L_105aeb19:;
  /* 105aeb19 jmp 0x105aea65 */
  goto L_105aea65;
L_105aeb1e:;
  /* 105aeb1e mov esp, ebp */
  ESP = (EBP);
  /* 105aeb20 pop ebp */
  EBP = (pop32());
  /* 105aeb21 ret  */
  ESPCHK(0x105ae820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x105aeb30 (23 bytes, 9 insns) */
void f_105aeb30(void) {
  FTRACE(0x105aeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 105aeb31 mov ebp, esp */
  EBP = (ESP);
  /* 105aeb33 cmp dword ptr [0x105d2dbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2dbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeb3a je 0x105aeb43 */
  if (C.zf) goto L_105aeb43;
  /* 105aeb3c mov eax, dword ptr [0x105d2d30] */
  EAX = (r32((uint32_t)(0x105d2d30)));
  /* 105aeb41 jmp 0x105aeb45 */
  goto L_105aeb45;
L_105aeb43:;
  /* 105aeb43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105aeb45:;
  /* 105aeb45 pop ebp */
  EBP = (pop32());
  /* 105aeb46 ret  */
  ESPCHK(0x105aeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x105aeb50 (34 bytes, 10 insns) */
void f_105aeb50(void) {
  FTRACE(0x105aeb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aeb50 push ebp */
  push32((uint32_t)(EBP));
  /* 105aeb51 mov ebp, esp */
  EBP = (ESP);
  /* 105aeb53 cmp dword ptr [0x105d44b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d44b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeb5a jne 0x105aeb70 */
  if (!C.zf) goto L_105aeb70;
  /* 105aeb5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 105aeb5e call 0x105ae370 */
  push32(0x105aeb63u); f_105ae370();
  /* 105aeb63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aeb66 mov dword ptr [0x105d44b0], 1 */
  w32((uint32_t)(0x105d44b0), (0x1u));
L_105aeb70:;
  /* 105aeb70 pop ebp */
  EBP = (pop32());
  /* 105aeb71 ret  */
  ESPCHK(0x105aeb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb80 @ 0x105aeb80 (664 bytes, 264 insns) [15 switch table(s)] */
void f_105aeb80(void) {
  FTRACE(0x105aeb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aeb80 push ebp */
  push32((uint32_t)(EBP));
  /* 105aeb81 mov ebp, esp */
  EBP = (ESP);
  /* 105aeb83 push edi */
  push32((uint32_t)(EDI));
  /* 105aeb84 push esi */
  push32((uint32_t)(ESI));
  /* 105aeb85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105aeb88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105aeb8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105aeb8e mov eax, ecx */
  EAX = (ECX);
  /* 105aeb90 mov edx, ecx */
  EDX = (ECX);
  /* 105aeb92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aeb94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeb96 jbe 0x105aeba0 */
  if ((C.cf||C.zf)) goto L_105aeba0;
  /* 105aeb98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeb9a jb 0x105aed18 */
  if (C.cf) goto L_105aed18;
L_105aeba0:;
  /* 105aeba0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105aeba6 jne 0x105aebbc */
  if (!C.zf) goto L_105aebbc;
  /* 105aeba8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aebab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105aebae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aebb1 jb 0x105aebdc */
  if (C.cf) goto L_105aebdc;
  /* 105aebb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aebb5 jmp dword ptr [edx*4 + 0x105aecc8] */
  switch (EDX) {
    case 0: goto L_105aecd8;
    case 1: goto L_105aece0;
    case 2: goto L_105aecec;
    case 3: goto L_105aed00;
    default: x86_unimpl("switch@0x105aebb5 out of table"); return;
  }
L_105aebbc:;
  /* 105aebbc mov eax, edi */
  EAX = (EDI);
  /* 105aebbe mov edx, 3 */
  EDX = (0x3u);
  /* 105aebc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aebc6 jb 0x105aebd4 */
  if (C.cf) goto L_105aebd4;
  /* 105aebc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105aebcb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aebcd jmp dword ptr [eax*4 + 0x105aebe0] */
  switch (EAX) {
    case 1: goto L_105aebf0;
    case 2: goto L_105aec1c;
    case 3: goto L_105aec40;
    default: x86_unimpl("switch@0x105aebcd out of table"); return;
  }
L_105aebd4:;
  /* 105aebd4 jmp dword ptr [ecx*4 + 0x105aecd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x105aecd8)))); return;
  /* 105aebdb nop  */
  /* nop */
L_105aebdc:;
  /* 105aebdc jmp dword ptr [ecx*4 + 0x105aec5c] */
  switch (ECX) {
    case 0: goto L_105aecbf;
    case 1: goto L_105aecac;
    case 2: goto L_105aeca4;
    case 3: goto L_105aec9c;
    case 4: goto L_105aec94;
    case 5: goto L_105aec8c;
    case 6: goto L_105aec84;
    case 7: goto L_105aec7c;
    default: x86_unimpl("switch@0x105aebdc out of table"); return;
  }
  /* 105aebe3 nop  */
  /* nop */
L_105aebf0:;
  /* 105aebf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105aebf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105aebf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105aebf6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105aebf9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105aebfc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105aebff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aec02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105aec05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105aec08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105aec0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aec0e jb 0x105aebdc */
  if (C.cf) goto L_105aebdc;
  /* 105aec10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aec12 jmp dword ptr [edx*4 + 0x105aecc8] */
  switch (EDX) {
    case 0: goto L_105aecd8;
    case 1: goto L_105aece0;
    case 2: goto L_105aecec;
    case 3: goto L_105aed00;
    default: x86_unimpl("switch@0x105aec12 out of table"); return;
  }
  /* 105aec19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105aec1c:;
  /* 105aec1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105aec1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105aec20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105aec22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105aec25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aec28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105aec2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105aec2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105aec31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aec34 jb 0x105aebdc */
  if (C.cf) goto L_105aebdc;
  /* 105aec36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aec38 jmp dword ptr [edx*4 + 0x105aecc8] */
  switch (EDX) {
    case 0: goto L_105aecd8;
    case 1: goto L_105aece0;
    case 2: goto L_105aecec;
    case 3: goto L_105aed00;
    default: x86_unimpl("switch@0x105aec38 out of table"); return;
  }
  /* 105aec3f nop  */
  /* nop */
L_105aec40:;
  /* 105aec40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105aec42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105aec44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105aec46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105aec47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aec4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105aec4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aec4e jb 0x105aebdc */
  if (C.cf) goto L_105aebdc;
  /* 105aec50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aec52 jmp dword ptr [edx*4 + 0x105aecc8] */
  switch (EDX) {
    case 0: goto L_105aecd8;
    case 1: goto L_105aece0;
    case 2: goto L_105aecec;
    case 3: goto L_105aed00;
    default: x86_unimpl("switch@0x105aec52 out of table"); return;
  }
  /* 105aec59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105aec7c:;
  /* 105aec7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 105aec80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_105aec84:;
  /* 105aec84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 105aec88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_105aec8c:;
  /* 105aec8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 105aec90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_105aec94:;
  /* 105aec94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 105aec98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_105aec9c:;
  /* 105aec9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 105aeca0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_105aeca4:;
  /* 105aeca4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 105aeca8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_105aecac:;
  /* 105aecac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 105aecb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 105aecb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105aecbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105aecbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105aecbf:;
  /* 105aecbf jmp dword ptr [edx*4 + 0x105aecc8] */
  switch (EDX) {
    case 0: goto L_105aecd8;
    case 1: goto L_105aece0;
    case 2: goto L_105aecec;
    case 3: goto L_105aed00;
    default: x86_unimpl("switch@0x105aecbf out of table"); return;
  }
  /* 105aecc6 mov edi, edi */
  EDI = (EDI);
L_105aecd8:;
  /* 105aecd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aecdb pop esi */
  ESI = (pop32());
  /* 105aecdc pop edi */
  EDI = (pop32());
  /* 105aecdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aecde ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aecdf nop  */
  /* nop */
L_105aece0:;
  /* 105aece0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105aece2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105aece4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aece7 pop esi */
  ESI = (pop32());
  /* 105aece8 pop edi */
  EDI = (pop32());
  /* 105aece9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aecea ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aeceb nop  */
  /* nop */
L_105aecec:;
  /* 105aecec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105aecee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105aecf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105aecf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105aecf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aecf9 pop esi */
  ESI = (pop32());
  /* 105aecfa pop edi */
  EDI = (pop32());
  /* 105aecfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aecfc ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aecfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105aed00:;
  /* 105aed00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105aed02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105aed04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105aed07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105aed0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105aed0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105aed10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aed13 pop esi */
  ESI = (pop32());
  /* 105aed14 pop edi */
  EDI = (pop32());
  /* 105aed15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aed16 ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aed17 nop  */
  /* nop */
L_105aed18:;
  /* 105aed18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 105aed1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 105aed20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105aed26 jne 0x105aed4c */
  if (!C.zf) goto L_105aed4c;
  /* 105aed28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aed2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105aed2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aed31 jb 0x105aed40 */
  if (C.cf) goto L_105aed40;
  /* 105aed33 std  */
  C.df=1;
  /* 105aed34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aed36 cld  */
  C.df=0;
  /* 105aed37 jmp dword ptr [edx*4 + 0x105aee60] */
  switch (EDX) {
    case 0: goto L_105aee70;
    case 1: goto L_105aee78;
    case 2: goto L_105aee88;
    case 3: goto L_105aee9c;
    default: x86_unimpl("switch@0x105aed37 out of table"); return;
  }
  /* 105aed3e mov edi, edi */
  EDI = (EDI);
L_105aed40:;
  /* 105aed40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105aed42 jmp dword ptr [ecx*4 + 0x105aee10] */
  switch (ECX) {
    case 0: goto L_105aee57;
    default: x86_unimpl("switch@0x105aed42 out of table"); return;
  }
  /* 105aed49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105aed4c:;
  /* 105aed4c mov eax, edi */
  EAX = (EDI);
  /* 105aed4e mov edx, 3 */
  EDX = (0x3u);
  /* 105aed53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aed56 jb 0x105aed64 */
  if (C.cf) goto L_105aed64;
  /* 105aed58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105aed5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aed5d jmp dword ptr [eax*4 + 0x105aed68] */
  switch (EAX) {
    case 1: goto L_105aed78;
    case 2: goto L_105aed98;
    case 3: goto L_105aedc0;
    default: x86_unimpl("switch@0x105aed5d out of table"); return;
  }
L_105aed64:;
  /* 105aed64 jmp dword ptr [ecx*4 + 0x105aee60] */
  switch (ECX) {
    case 0: goto L_105aee70;
    case 1: goto L_105aee78;
    case 2: goto L_105aee88;
    case 3: goto L_105aee9c;
    default: x86_unimpl("switch@0x105aed64 out of table"); return;
  }
  /* 105aed6b nop  */
  /* nop */
L_105aed78:;
  /* 105aed78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105aed7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105aed7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105aed80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 105aed81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aed84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 105aed85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aed88 jb 0x105aed40 */
  if (C.cf) goto L_105aed40;
  /* 105aed8a std  */
  C.df=1;
  /* 105aed8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aed8d cld  */
  C.df=0;
  /* 105aed8e jmp dword ptr [edx*4 + 0x105aee60] */
  switch (EDX) {
    case 0: goto L_105aee70;
    case 1: goto L_105aee78;
    case 2: goto L_105aee88;
    case 3: goto L_105aee9c;
    default: x86_unimpl("switch@0x105aed8e out of table"); return;
  }
  /* 105aed95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105aed98:;
  /* 105aed98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105aed9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105aed9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105aeda0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105aeda3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aeda6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105aeda9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aedac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aedaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aedb2 jb 0x105aed40 */
  if (C.cf) goto L_105aed40;
  /* 105aedb4 std  */
  C.df=1;
  /* 105aedb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aedb7 cld  */
  C.df=0;
  /* 105aedb8 jmp dword ptr [edx*4 + 0x105aee60] */
  switch (EDX) {
    case 0: goto L_105aee70;
    case 1: goto L_105aee78;
    case 2: goto L_105aee88;
    case 3: goto L_105aee9c;
    default: x86_unimpl("switch@0x105aedb8 out of table"); return;
  }
  /* 105aedbf nop  */
  /* nop */
L_105aedc0:;
  /* 105aedc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105aedc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105aedc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105aedc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105aedcb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105aedce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105aedd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105aedd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105aedd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aedda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aeddd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aede0 jb 0x105aed40 */
  if (C.cf) goto L_105aed40;
  /* 105aede6 std  */
  C.df=1;
  /* 105aede7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105aede9 cld  */
  C.df=0;
  /* 105aedea jmp dword ptr [edx*4 + 0x105aee60] */
  switch (EDX) {
    case 0: goto L_105aee70;
    case 1: goto L_105aee78;
    case 2: goto L_105aee88;
    case 3: goto L_105aee9c;
    default: x86_unimpl("switch@0x105aedea out of table"); return;
  }
  /* 105aedf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 105aedf4 adc al, 0xee */
  { uint32_t _a=(AL),_b=(0xeeu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105aedf6 pop edx */
  EDX = (pop32());
  /* 105aedf7 adc byte ptr [esi + ebp*8], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + EBP*8))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBP*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 105aedfa pop edx */
  EDX = (pop32());
  /* 105aedfb adc byte ptr [esi + ebp*8], ah */
  { uint32_t _a=(r8((uint32_t)(ESI + EBP*8))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBP*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 105aedfe pop edx */
  EDX = (pop32());
  /* 105aedff adc byte ptr [esi + ebp*8], ch */
  { uint32_t _a=(r8((uint32_t)(ESI + EBP*8))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBP*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 105aee02 pop edx */
  EDX = (pop32());
  /* 105aee03 adc byte ptr [esi + ebp*8], dh */
  { uint32_t _a=(r8((uint32_t)(ESI + EBP*8))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBP*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 105aee06 pop edx */
  EDX = (pop32());
  /* 105aee07 adc byte ptr [esi + ebp*8], bh */
  { uint32_t _a=(r8((uint32_t)(ESI + EBP*8))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBP*8), (_r)); fl_add(_a,_b,_r,8); }
  /* 105aee0a pop edx */
  EDX = (pop32());
  /* 105aee0b adc byte ptr [esi + ebp*8 + 0x5a], al */
  { uint32_t _a=(r8((uint32_t)(ESI + EBP*8 + 0x5a))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + EBP*8 + 0x5a), (_r)); fl_add(_a,_b,_r,8); }
  /* 105aee14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 105aee18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 105aee1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 105aee20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 105aee24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 105aee28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 105aee2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 105aee30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 105aee34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 105aee38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 105aee3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 105aee40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 105aee44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 105aee48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 105aee4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105aee53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105aee55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105aee57:;
  /* 105aee57 jmp dword ptr [edx*4 + 0x105aee60] */
  switch (EDX) {
    case 0: goto L_105aee70;
    case 1: goto L_105aee78;
    case 2: goto L_105aee88;
    case 3: goto L_105aee9c;
    default: x86_unimpl("switch@0x105aee57 out of table"); return;
  }
  /* 105aee5e mov edi, edi */
  EDI = (EDI);
L_105aee70:;
  /* 105aee70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aee73 pop esi */
  ESI = (pop32());
  /* 105aee74 pop edi */
  EDI = (pop32());
  /* 105aee75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aee76 ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aee77 nop  */
  /* nop */
L_105aee78:;
  /* 105aee78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105aee7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105aee7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aee81 pop esi */
  ESI = (pop32());
  /* 105aee82 pop edi */
  EDI = (pop32());
  /* 105aee83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aee84 ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aee85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105aee88:;
  /* 105aee88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105aee8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105aee8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105aee91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105aee94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aee97 pop esi */
  ESI = (pop32());
  /* 105aee98 pop edi */
  EDI = (pop32());
  /* 105aee99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aee9a ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
  /* 105aee9b nop  */
  /* nop */
L_105aee9c:;
  /* 105aee9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105aee9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105aeea2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105aeea5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105aeea8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105aeeab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105aeeae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aeeb1 pop esi */
  ESI = (pop32());
  /* 105aeeb2 pop edi */
  EDI = (pop32());
  /* 105aeeb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105aeeb4 ret  */
  ESPCHK(0x105aeb80u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x105aeec0 (145 bytes, 42 insns) */
void f_105aeec0(void) {
  FTRACE(0x105aeec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aeec0 push ebp */
  push32((uint32_t)(EBP));
  /* 105aeec1 mov ebp, esp */
  EBP = (ESP);
  /* 105aeec3 push ecx */
  push32((uint32_t)(ECX));
  /* 105aeec4 call 0x105aef70 */
  push32(0x105aeec9u); f_105aef70();
  /* 105aeec9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aeecc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105aeece mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105aeed5 jmp 0x105aeee0 */
  goto L_105aeee0;
L_105aeed7:;
  /* 105aeed7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aeeda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aeedd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105aeee0:;
  /* 105aeee0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeee4 jae 0x105aef0a */
  if (!C.cf) goto L_105aef0a;
  /* 105aeee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aeee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aeeec cmp ecx, dword ptr [eax*8 + 0x105d1260] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x105d1260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aeef3 jne 0x105aef08 */
  if (!C.zf) goto L_105aef08;
  /* 105aeef5 call 0x105aef60 */
  push32(0x105aeefau); f_105aef60();
  /* 105aeefa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aeefd mov ecx, dword ptr [edx*8 + 0x105d1264] */
  ECX = (r32((uint32_t)(EDX*8 + 0x105d1264)));
  /* 105aef04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105aef06 jmp 0x105aef4d */
  goto L_105aef4d;
L_105aef08:;
  /* 105aef08 jmp 0x105aeed7 */
  goto L_105aeed7;
L_105aef0a:;
  /* 105aef0a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aef0e jb 0x105aef23 */
  if (C.cf) goto L_105aef23;
  /* 105aef10 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aef14 ja 0x105aef23 */
  if ((!C.cf&&!C.zf)) goto L_105aef23;
  /* 105aef16 call 0x105aef60 */
  push32(0x105aef1bu); f_105aef60();
  /* 105aef1b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 105aef21 jmp 0x105aef4d */
  goto L_105aef4d;
L_105aef23:;
  /* 105aef23 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aef2a jb 0x105aef42 */
  if (C.cf) goto L_105aef42;
  /* 105aef2c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aef33 ja 0x105aef42 */
  if ((!C.cf&&!C.zf)) goto L_105aef42;
  /* 105aef35 call 0x105aef60 */
  push32(0x105aef3au); f_105aef60();
  /* 105aef3a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 105aef40 jmp 0x105aef4d */
  goto L_105aef4d;
L_105aef42:;
  /* 105aef42 call 0x105aef60 */
  push32(0x105aef47u); f_105aef60();
  /* 105aef47 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_105aef4d:;
  /* 105aef4d mov esp, ebp */
  ESP = (EBP);
  /* 105aef4f pop ebp */
  EBP = (pop32());
  /* 105aef50 ret  */
  ESPCHK(0x105aeec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef60 @ 0x105aef60 (13 bytes, 6 insns) */
void f_105aef60(void) {
  FTRACE(0x105aef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aef60 push ebp */
  push32((uint32_t)(EBP));
  /* 105aef61 mov ebp, esp */
  EBP = (ESP);
  /* 105aef63 call 0x105a7430 */
  push32(0x105aef68u); f_105a7430();
  /* 105aef68 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aef6b pop ebp */
  EBP = (pop32());
  /* 105aef6c ret  */
  ESPCHK(0x105aef60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x105aef70 (13 bytes, 6 insns) */
void f_105aef70(void) {
  FTRACE(0x105aef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aef70 push ebp */
  push32((uint32_t)(EBP));
  /* 105aef71 mov ebp, esp */
  EBP = (ESP);
  /* 105aef73 call 0x105a7430 */
  push32(0x105aef78u); f_105a7430();
  /* 105aef78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aef7b pop ebp */
  EBP = (pop32());
  /* 105aef7c ret  */
  ESPCHK(0x105aef70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x105aef80 (482 bytes, 138 insns) */
void f_105aef80(void) {
  FTRACE(0x105aef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aef80 push ebp */
  push32((uint32_t)(EBP));
  /* 105aef81 mov ebp, esp */
  EBP = (ESP);
  /* 105aef83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aef86 push esi */
  push32((uint32_t)(ESI));
  /* 105aef87 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 105aef8e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 105aef90 call 0x105abda0 */
  push32(0x105aef95u); f_105abda0();
  /* 105aef95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aef98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105aef9f jmp 0x105aefaa */
  goto L_105aefaa;
L_105aefa1:;
  /* 105aefa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aefa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aefa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105aefaa:;
  /* 105aefaa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aefae jge 0x105af150 */
  if ((C.sf==C.of)) goto L_105af150;
  /* 105aefb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aefb7 cmp dword ptr [ecx*4 + 0x105d4360], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x105d4360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aefbf je 0x105af0b6 */
  if (C.zf) goto L_105af0b6;
  /* 105aefc5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aefc8 mov eax, dword ptr [edx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105aefcf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105aefd2 jmp 0x105aefdd */
  goto L_105aefdd;
L_105aefd4:;
  /* 105aefd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aefd7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aefda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105aefdd:;
  /* 105aefdd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105aefe0 mov eax, dword ptr [edx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105aefe7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aefec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aefef jae 0x105af0a6 */
  if (!C.cf) goto L_105af0a6;
  /* 105aeff5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aeff8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105aeffc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105aefff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105af001 jne 0x105af0a1 */
  if (!C.zf) goto L_105af0a1;
  /* 105af007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af00a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af00e jne 0x105af049 */
  if (!C.zf) goto L_105af049;
  /* 105af010 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105af012 call 0x105abda0 */
  push32(0x105af017u); f_105abda0();
  /* 105af017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af01a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af01d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af021 jne 0x105af03f */
  if (!C.zf) goto L_105af03f;
  /* 105af023 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af026 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af029 push edx */
  push32((uint32_t)(EDX));
  /* 105af02a call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105af030u);
  /* 105af030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af033 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105af036 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af039 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af03c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_105af03f:;
  /* 105af03f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105af041 call 0x105abe40 */
  push32(0x105af046u); f_105abe40();
  /* 105af046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105af049:;
  /* 105af049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af04c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af04f push eax */
  push32((uint32_t)(EAX));
  /* 105af050 call dword ptr [0x105d52a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a0))), 0x105af056u);
  /* 105af056 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af059 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105af05d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105af060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105af062 je 0x105af076 */
  if (C.zf) goto L_105af076;
  /* 105af064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af067 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af06a push eax */
  push32((uint32_t)(EAX));
  /* 105af06b call dword ptr [0x105d52a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a4))), 0x105af071u);
  /* 105af071 jmp 0x105aefd4 */
  goto L_105aefd4;
L_105af076:;
  /* 105af076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af079 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 105af07f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af082 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105af085 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af08b sub eax, dword ptr [edx*4 + 0x105d4360] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x105d4360))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af092 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105af093 mov esi, 0x24 */
  ESI = (0x24u);
  /* 105af098 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105af09a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af09c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105af09f jmp 0x105af0a6 */
  goto L_105af0a6;
L_105af0a1:;
  /* 105af0a1 jmp 0x105aefd4 */
  goto L_105aefd4;
L_105af0a6:;
  /* 105af0a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af0aa je 0x105af0b1 */
  if (C.zf) goto L_105af0b1;
  /* 105af0ac jmp 0x105af150 */
  goto L_105af150;
L_105af0b1:;
  /* 105af0b1 jmp 0x105af14b */
  goto L_105af14b;
L_105af0b6:;
  /* 105af0b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 105af0b8 push 0x105ceb28 */
  push32((uint32_t)(0x105ceb28u));
  /* 105af0bd push 2 */
  push32((uint32_t)(0x2u));
  /* 105af0bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 105af0c4 call 0x105a79f0 */
  push32(0x105af0c9u); f_105a79f0();
  /* 105af0c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af0cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105af0cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af0d3 je 0x105af149 */
  if (C.zf) goto L_105af149;
  /* 105af0d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af0d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af0db mov dword ptr [eax*4 + 0x105d4360], ecx */
  w32((uint32_t)(EAX*4 + 0x105d4360), (ECX));
  /* 105af0e2 mov edx, dword ptr [0x105d449c] */
  EDX = (r32((uint32_t)(0x105d449c)));
  /* 105af0e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af0eb mov dword ptr [0x105d449c], edx */
  w32((uint32_t)(0x105d449c), (EDX));
  /* 105af0f1 jmp 0x105af0fc */
  goto L_105af0fc;
L_105af0f3:;
  /* 105af0f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af0f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af0f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105af0fc:;
  /* 105af0fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af0ff mov edx, dword ptr [ecx*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105af106 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af10c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af10f jae 0x105af134 */
  if (!C.cf) goto L_105af134;
  /* 105af111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af114 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 105af118 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af11b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 105af121 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af124 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 105af128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af12b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 105af132 jmp 0x105af0f3 */
  goto L_105af0f3;
L_105af134:;
  /* 105af134 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af137 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105af13a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105af13d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af140 push edx */
  push32((uint32_t)(EDX));
  /* 105af141 call 0x105af490 */
  push32(0x105af146u); f_105af490();
  /* 105af146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105af149:;
  /* 105af149 jmp 0x105af150 */
  goto L_105af150;
L_105af14b:;
  /* 105af14b jmp 0x105aefa1 */
  goto L_105aefa1;
L_105af150:;
  /* 105af150 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 105af152 call 0x105abe40 */
  push32(0x105af157u); f_105abe40();
  /* 105af157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af15a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af15d pop esi */
  ESI = (pop32());
  /* 105af15e mov esp, ebp */
  ESP = (EBP);
  /* 105af160 pop ebp */
  EBP = (pop32());
  /* 105af161 ret  */
  ESPCHK(0x105aef80u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x105af170 (183 bytes, 57 insns) */
void f_105af170(void) {
  FTRACE(0x105af170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af170 push ebp */
  push32((uint32_t)(EBP));
  /* 105af171 mov ebp, esp */
  EBP = (ESP);
  /* 105af173 push ecx */
  push32((uint32_t)(ECX));
  /* 105af174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af177 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af17d jae 0x105af20a */
  if (!C.cf) goto L_105af20a;
  /* 105af183 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af186 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105af189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af18c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105af18f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af192 mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105af199 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af19d jne 0x105af20a */
  if (!C.zf) goto L_105af20a;
  /* 105af19f cmp dword ptr [0x105d2994], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2994))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af1a6 jne 0x105af1ea */
  if (!C.zf) goto L_105af1ea;
  /* 105af1a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af1ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105af1ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af1b2 je 0x105af1c2 */
  if (C.zf) goto L_105af1c2;
  /* 105af1b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af1b8 je 0x105af1d0 */
  if (C.zf) goto L_105af1d0;
  /* 105af1ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af1be je 0x105af1de */
  if (C.zf) goto L_105af1de;
  /* 105af1c0 jmp 0x105af1ea */
  goto L_105af1ea;
L_105af1c2:;
  /* 105af1c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af1c5 push edx */
  push32((uint32_t)(EDX));
  /* 105af1c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 105af1c8 call dword ptr [0x105d52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52cc))), 0x105af1ceu);
  /* 105af1ce jmp 0x105af1ea */
  goto L_105af1ea;
L_105af1d0:;
  /* 105af1d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af1d3 push eax */
  push32((uint32_t)(EAX));
  /* 105af1d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 105af1d6 call dword ptr [0x105d52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52cc))), 0x105af1dcu);
  /* 105af1dc jmp 0x105af1ea */
  goto L_105af1ea;
L_105af1de:;
  /* 105af1de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 105af1e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105af1e4 call dword ptr [0x105d52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52cc))), 0x105af1eau);
L_105af1ea:;
  /* 105af1ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af1ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105af1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af1f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105af1f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af1f9 mov ecx, dword ptr [edx*4 + 0x105d4360] */
  ECX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105af200 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af203 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 105af206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105af208 jmp 0x105af223 */
  goto L_105af223;
L_105af20a:;
  /* 105af20a call 0x105aef60 */
  push32(0x105af20fu); f_105aef60();
  /* 105af20f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105af215 call 0x105aef70 */
  push32(0x105af21au); f_105aef70();
  /* 105af21a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105af220 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105af223:;
  /* 105af223 mov esp, ebp */
  ESP = (EBP);
  /* 105af225 pop ebp */
  EBP = (pop32());
  /* 105af226 ret  */
  ESPCHK(0x105af170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f230 @ 0x105af230 (216 bytes, 63 insns) */
void f_105af230(void) {
  FTRACE(0x105af230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af230 push ebp */
  push32((uint32_t)(EBP));
  /* 105af231 mov ebp, esp */
  EBP = (ESP);
  /* 105af233 push ecx */
  push32((uint32_t)(ECX));
  /* 105af234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af237 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af23d jae 0x105af2eb */
  if (!C.cf) goto L_105af2eb;
  /* 105af243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af246 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105af249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af24c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105af24f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af252 mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105af259 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105af25e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105af261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105af263 je 0x105af2eb */
  if (C.zf) goto L_105af2eb;
  /* 105af269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af26c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105af26f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af272 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105af275 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af278 mov ecx, dword ptr [edx*4 + 0x105d4360] */
  ECX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105af27f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af283 je 0x105af2eb */
  if (C.zf) goto L_105af2eb;
  /* 105af285 cmp dword ptr [0x105d2994], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2994))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af28c jne 0x105af2ca */
  if (!C.zf) goto L_105af2ca;
  /* 105af28e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af291 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105af294 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af298 je 0x105af2a8 */
  if (C.zf) goto L_105af2a8;
  /* 105af29a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af29e je 0x105af2b4 */
  if (C.zf) goto L_105af2b4;
  /* 105af2a0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af2a4 je 0x105af2c0 */
  if (C.zf) goto L_105af2c0;
  /* 105af2a6 jmp 0x105af2ca */
  goto L_105af2ca;
L_105af2a8:;
  /* 105af2a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105af2aa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 105af2ac call dword ptr [0x105d52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52cc))), 0x105af2b2u);
  /* 105af2b2 jmp 0x105af2ca */
  goto L_105af2ca;
L_105af2b4:;
  /* 105af2b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105af2b6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 105af2b8 call dword ptr [0x105d52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52cc))), 0x105af2beu);
  /* 105af2be jmp 0x105af2ca */
  goto L_105af2ca;
L_105af2c0:;
  /* 105af2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105af2c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 105af2c4 call dword ptr [0x105d52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52cc))), 0x105af2cau);
L_105af2ca:;
  /* 105af2ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af2cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105af2d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af2d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105af2d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af2d9 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105af2e0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 105af2e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105af2e9 jmp 0x105af304 */
  goto L_105af304;
L_105af2eb:;
  /* 105af2eb call 0x105aef60 */
  push32(0x105af2f0u); f_105aef60();
  /* 105af2f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105af2f6 call 0x105aef70 */
  push32(0x105af2fbu); f_105aef70();
  /* 105af2fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105af301 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105af304:;
  /* 105af304 mov esp, ebp */
  ESP = (EBP);
  /* 105af306 pop ebp */
  EBP = (pop32());
  /* 105af307 ret  */
  ESPCHK(0x105af230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x105af310 (102 bytes, 30 insns) */
void f_105af310(void) {
  FTRACE(0x105af310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af310 push ebp */
  push32((uint32_t)(EBP));
  /* 105af311 mov ebp, esp */
  EBP = (ESP);
  /* 105af313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af316 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af31c jae 0x105af35b */
  if (!C.cf) goto L_105af35b;
  /* 105af31e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af321 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105af324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af327 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105af32a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af32d mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105af334 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105af339 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105af33c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105af33e je 0x105af35b */
  if (C.zf) goto L_105af35b;
  /* 105af340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af343 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 105af346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af349 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 105af34c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af34f mov ecx, dword ptr [edx*4 + 0x105d4360] */
  ECX = (r32((uint32_t)(EDX*4 + 0x105d4360)));
  /* 105af356 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 105af359 jmp 0x105af374 */
  goto L_105af374;
L_105af35b:;
  /* 105af35b call 0x105aef60 */
  push32(0x105af360u); f_105aef60();
  /* 105af360 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105af366 call 0x105aef70 */
  push32(0x105af36bu); f_105aef70();
  /* 105af36b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105af371 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105af374:;
  /* 105af374 pop ebp */
  EBP = (pop32());
  /* 105af375 ret  */
  ESPCHK(0x105af310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f380 @ 0x105af380 (260 bytes, 83 insns) */
void f_105af380(void) {
  FTRACE(0x105af380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af380 push ebp */
  push32((uint32_t)(EBP));
  /* 105af381 mov ebp, esp */
  EBP = (ESP);
  /* 105af383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af386 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 105af38a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af38d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 105af390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105af392 je 0x105af39d */
  if (C.zf) goto L_105af39d;
  /* 105af394 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af397 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105af39a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_105af39d:;
  /* 105af39d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af3a0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 105af3a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105af3a8 je 0x105af3b2 */
  if (C.zf) goto L_105af3b2;
  /* 105af3aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af3ad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 105af3af mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_105af3b2:;
  /* 105af3b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af3b5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 105af3bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105af3bd je 0x105af3c8 */
  if (C.zf) goto L_105af3c8;
  /* 105af3bf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af3c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 105af3c5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_105af3c8:;
  /* 105af3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af3cb push eax */
  push32((uint32_t)(EAX));
  /* 105af3cc call dword ptr [0x105d525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d525c))), 0x105af3d2u);
  /* 105af3d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105af3d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af3d9 jne 0x105af3f2 */
  if (!C.zf) goto L_105af3f2;
  /* 105af3db call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105af3e1u);
  /* 105af3e1 push eax */
  push32((uint32_t)(EAX));
  /* 105af3e2 call 0x105aeec0 */
  push32(0x105af3e7u); f_105aeec0();
  /* 105af3e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af3ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105af3ed jmp 0x105af480 */
  goto L_105af480;
L_105af3f2:;
  /* 105af3f2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af3f6 jne 0x105af403 */
  if (!C.zf) goto L_105af403;
  /* 105af3f8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af3fb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 105af3fe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 105af401 jmp 0x105af412 */
  goto L_105af412;
L_105af403:;
  /* 105af403 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af407 jne 0x105af412 */
  if (!C.zf) goto L_105af412;
  /* 105af409 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af40c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 105af40f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_105af412:;
  /* 105af412 call 0x105aef80 */
  push32(0x105af417u); f_105aef80();
  /* 105af417 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105af41a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af41e jne 0x105af43b */
  if (!C.zf) goto L_105af43b;
  /* 105af420 call 0x105aef60 */
  push32(0x105af425u); f_105aef60();
  /* 105af425 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 105af42b call 0x105aef70 */
  push32(0x105af430u); f_105aef70();
  /* 105af430 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105af436 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105af439 jmp 0x105af480 */
  goto L_105af480;
L_105af43b:;
  /* 105af43b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af43e push eax */
  push32((uint32_t)(EAX));
  /* 105af43f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af442 push ecx */
  push32((uint32_t)(ECX));
  /* 105af443 call 0x105af170 */
  push32(0x105af448u); f_105af170();
  /* 105af448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af44b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af44e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 105af451 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 105af454 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af457 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105af45a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af45d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105af460 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af463 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105af46a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 105af46d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 105af471 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af474 push ecx */
  push32((uint32_t)(ECX));
  /* 105af475 call 0x105af520 */
  push32(0x105af47au); f_105af520();
  /* 105af47a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af47d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105af480:;
  /* 105af480 mov esp, ebp */
  ESP = (EBP);
  /* 105af482 pop ebp */
  EBP = (pop32());
  /* 105af483 ret  */
  ESPCHK(0x105af380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f490 @ 0x105af490 (134 bytes, 44 insns) */
void f_105af490(void) {
  FTRACE(0x105af490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af490 push ebp */
  push32((uint32_t)(EBP));
  /* 105af491 mov ebp, esp */
  EBP = (ESP);
  /* 105af493 push ecx */
  push32((uint32_t)(ECX));
  /* 105af494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af497 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105af49a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af49d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105af4a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af4a3 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105af4aa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af4ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105af4af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af4b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af4b6 jne 0x105af4f1 */
  if (!C.zf) goto L_105af4f1;
  /* 105af4b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105af4ba call 0x105abda0 */
  push32(0x105af4bfu); f_105abda0();
  /* 105af4bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af4c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af4c5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af4c9 jne 0x105af4e7 */
  if (!C.zf) goto L_105af4e7;
  /* 105af4cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af4ce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af4d1 push edx */
  push32((uint32_t)(EDX));
  /* 105af4d2 call dword ptr [0x105d52a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a8))), 0x105af4d8u);
  /* 105af4d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af4db mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105af4de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af4e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af4e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_105af4e7:;
  /* 105af4e7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 105af4e9 call 0x105abe40 */
  push32(0x105af4eeu); f_105abe40();
  /* 105af4ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105af4f1:;
  /* 105af4f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af4f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105af4f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af4fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105af4fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af500 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105af507 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 105af50b push eax */
  push32((uint32_t)(EAX));
  /* 105af50c call dword ptr [0x105d52a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a0))), 0x105af512u);
  /* 105af512 mov esp, ebp */
  ESP = (EBP);
  /* 105af514 pop ebp */
  EBP = (pop32());
  /* 105af515 ret  */
  ESPCHK(0x105af490u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x105af520 (38 bytes, 13 insns) */
void f_105af520(void) {
  FTRACE(0x105af520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af520 push ebp */
  push32((uint32_t)(EBP));
  /* 105af521 mov ebp, esp */
  EBP = (ESP);
  /* 105af523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af526 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105af529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af52c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105af52f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af532 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105af539 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 105af53d push eax */
  push32((uint32_t)(EAX));
  /* 105af53e call dword ptr [0x105d52a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52a4))), 0x105af544u);
  /* 105af544 pop ebp */
  EBP = (pop32());
  /* 105af545 ret  */
  ESPCHK(0x105af520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x105af550 (218 bytes, 63 insns) */
void f_105af550(void) {
  FTRACE(0x105af550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af550 push ebp */
  push32((uint32_t)(EBP));
  /* 105af551 mov ebp, esp */
  EBP = (ESP);
  /* 105af553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105af55d push 2 */
  push32((uint32_t)(0x2u));
  /* 105af55f call 0x105abda0 */
  push32(0x105af564u); f_105abda0();
  /* 105af564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af567 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 105af56e jmp 0x105af579 */
  goto L_105af579;
L_105af570:;
  /* 105af570 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af573 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af576 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105af579:;
  /* 105af579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af57c cmp ecx, dword ptr [0x105d4340] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d4340))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af582 jge 0x105af619 */
  if ((C.sf==C.of)) goto L_105af619;
  /* 105af588 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af58b mov eax, dword ptr [0x105d2fec] */
  EAX = (r32((uint32_t)(0x105d2fec)));
  /* 105af590 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af594 je 0x105af614 */
  if (C.zf) goto L_105af614;
  /* 105af596 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af599 mov edx, dword ptr [0x105d2fec] */
  EDX = (r32((uint32_t)(0x105d2fec)));
  /* 105af59f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105af5a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105af5a5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 105af5ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105af5ad je 0x105af5d1 */
  if (C.zf) goto L_105af5d1;
  /* 105af5af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af5b2 mov eax, dword ptr [0x105d2fec] */
  EAX = (r32((uint32_t)(0x105d2fec)));
  /* 105af5b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105af5ba push ecx */
  push32((uint32_t)(ECX));
  /* 105af5bb call 0x105b0ba0 */
  push32(0x105af5c0u); f_105b0ba0();
  /* 105af5c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af5c3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af5c6 je 0x105af5d1 */
  if (C.zf) goto L_105af5d1;
  /* 105af5c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af5cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af5ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105af5d1:;
  /* 105af5d1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af5d5 jl 0x105af614 */
  if ((C.sf!=C.of)) goto L_105af614;
  /* 105af5d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af5da mov ecx, dword ptr [0x105d2fec] */
  ECX = (r32((uint32_t)(0x105d2fec)));
  /* 105af5e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105af5e3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af5e6 push edx */
  push32((uint32_t)(EDX));
  /* 105af5e7 call dword ptr [0x105d5264] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5264))), 0x105af5edu);
  /* 105af5ed push 2 */
  push32((uint32_t)(0x2u));
  /* 105af5ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af5f2 mov ecx, dword ptr [0x105d2fec] */
  ECX = (r32((uint32_t)(0x105d2fec)));
  /* 105af5f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105af5fb push edx */
  push32((uint32_t)(EDX));
  /* 105af5fc call 0x105a8480 */
  push32(0x105af601u); f_105a8480();
  /* 105af601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af604 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af607 mov ecx, dword ptr [0x105d2fec] */
  ECX = (r32((uint32_t)(0x105d2fec)));
  /* 105af60d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_105af614:;
  /* 105af614 jmp 0x105af570 */
  goto L_105af570;
L_105af619:;
  /* 105af619 push 2 */
  push32((uint32_t)(0x2u));
  /* 105af61b call 0x105abe40 */
  push32(0x105af620u); f_105abe40();
  /* 105af620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af626 mov esp, ebp */
  ESP = (EBP);
  /* 105af628 pop ebp */
  EBP = (pop32());
  /* 105af629 ret  */
  ESPCHK(0x105af550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x105af630 (68 bytes, 26 insns) */
void f_105af630(void) {
  FTRACE(0x105af630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af630 push ebp */
  push32((uint32_t)(EBP));
  /* 105af631 mov ebp, esp */
  EBP = (ESP);
  /* 105af633 push ecx */
  push32((uint32_t)(ECX));
  /* 105af634 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af638 jne 0x105af646 */
  if (!C.zf) goto L_105af646;
  /* 105af63a push 0 */
  push32((uint32_t)(0x0u));
  /* 105af63c call 0x105af7a0 */
  push32(0x105af641u); f_105af7a0();
  /* 105af641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af644 jmp 0x105af670 */
  goto L_105af670;
L_105af646:;
  /* 105af646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af649 push eax */
  push32((uint32_t)(EAX));
  /* 105af64a call 0x105ab9d0 */
  push32(0x105af64fu); f_105ab9d0();
  /* 105af64f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af655 push ecx */
  push32((uint32_t)(ECX));
  /* 105af656 call 0x105af680 */
  push32(0x105af65bu); f_105af680();
  /* 105af65b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af65e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105af661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af664 push edx */
  push32((uint32_t)(EDX));
  /* 105af665 call 0x105aba40 */
  push32(0x105af66au); f_105aba40();
  /* 105af66a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af66d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105af670:;
  /* 105af670 mov esp, ebp */
  ESP = (EBP);
  /* 105af672 pop ebp */
  EBP = (pop32());
  /* 105af673 ret  */
  ESPCHK(0x105af630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f680 @ 0x105af680 (65 bytes, 26 insns) */
void f_105af680(void) {
  FTRACE(0x105af680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af680 push ebp */
  push32((uint32_t)(EBP));
  /* 105af681 mov ebp, esp */
  EBP = (ESP);
  /* 105af683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af686 push eax */
  push32((uint32_t)(EAX));
  /* 105af687 call 0x105af6d0 */
  push32(0x105af68cu); f_105af6d0();
  /* 105af68c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af68f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105af691 je 0x105af698 */
  if (C.zf) goto L_105af698;
  /* 105af693 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105af696 jmp 0x105af6bf */
  goto L_105af6bf;
L_105af698:;
  /* 105af698 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af69b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105af69e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 105af6a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105af6a6 je 0x105af6bd */
  if (C.zf) goto L_105af6bd;
  /* 105af6a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af6ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105af6ae push ecx */
  push32((uint32_t)(ECX));
  /* 105af6af call 0x105b0cf0 */
  push32(0x105af6b4u); f_105b0cf0();
  /* 105af6b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af6b7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105af6b9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af6bb jmp 0x105af6bf */
  goto L_105af6bf;
L_105af6bd:;
  /* 105af6bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105af6bf:;
  /* 105af6bf pop ebp */
  EBP = (pop32());
  /* 105af6c0 ret  */
  ESPCHK(0x105af680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x105af6d0 (183 bytes, 62 insns) */
void f_105af6d0(void) {
  FTRACE(0x105af6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105af6d1 mov ebp, esp */
  EBP = (ESP);
  /* 105af6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af6d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105af6dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af6e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105af6e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af6e6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105af6e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105af6ec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af6ef jne 0x105af76b */
  if (!C.zf) goto L_105af76b;
  /* 105af6f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af6f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105af6f7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 105af6fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105af6ff je 0x105af76b */
  if (C.zf) goto L_105af76b;
  /* 105af701 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af707 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 105af709 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af70c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105af70f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af713 jle 0x105af76b */
  if ((C.zf||C.sf!=C.of)) goto L_105af76b;
  /* 105af715 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af718 push edx */
  push32((uint32_t)(EDX));
  /* 105af719 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af71c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105af71f push ecx */
  push32((uint32_t)(ECX));
  /* 105af720 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af723 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105af726 push eax */
  push32((uint32_t)(EAX));
  /* 105af727 call 0x105ab460 */
  push32(0x105af72cu); f_105ab460();
  /* 105af72c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af72f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af732 jne 0x105af755 */
  if (!C.zf) goto L_105af755;
  /* 105af734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af737 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105af73a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 105af740 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105af742 je 0x105af753 */
  if (C.zf) goto L_105af753;
  /* 105af744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af747 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105af74a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 105af74d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af750 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_105af753:;
  /* 105af753 jmp 0x105af76b */
  goto L_105af76b;
L_105af755:;
  /* 105af755 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af758 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105af75b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 105af75e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af761 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 105af764 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105af76b:;
  /* 105af76b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af76e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af771 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105af774 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105af776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105af779 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 105af780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af783 mov esp, ebp */
  ESP = (EBP);
  /* 105af785 pop ebp */
  EBP = (pop32());
  /* 105af786 ret  */
  ESPCHK(0x105af6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f790 @ 0x105af790 (15 bytes, 7 insns) */
void f_105af790(void) {
  FTRACE(0x105af790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af790 push ebp */
  push32((uint32_t)(EBP));
  /* 105af791 mov ebp, esp */
  EBP = (ESP);
  /* 105af793 push 1 */
  push32((uint32_t)(0x1u));
  /* 105af795 call 0x105af7a0 */
  push32(0x105af79au); f_105af7a0();
  /* 105af79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af79d pop ebp */
  EBP = (pop32());
  /* 105af79e ret  */
  ESPCHK(0x105af790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7a0 @ 0x105af7a0 (319 bytes, 94 insns) */
void f_105af7a0(void) {
  FTRACE(0x105af7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105af7a1 mov ebp, esp */
  EBP = (ESP);
  /* 105af7a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af7a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105af7ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105af7b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105af7b6 call 0x105abda0 */
  push32(0x105af7bbu); f_105abda0();
  /* 105af7bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af7be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105af7c5 jmp 0x105af7d0 */
  goto L_105af7d0;
L_105af7c7:;
  /* 105af7c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af7ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af7cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105af7d0:;
  /* 105af7d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af7d3 cmp ecx, dword ptr [0x105d4340] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d4340))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af7d9 jge 0x105af8c3 */
  if ((C.sf==C.of)) goto L_105af8c3;
  /* 105af7df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af7e2 mov eax, dword ptr [0x105d2fec] */
  EAX = (r32((uint32_t)(0x105d2fec)));
  /* 105af7e7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af7eb je 0x105af8be */
  if (C.zf) goto L_105af8be;
  /* 105af7f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af7f4 mov edx, dword ptr [0x105d2fec] */
  EDX = (r32((uint32_t)(0x105d2fec)));
  /* 105af7fa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105af7fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105af800 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 105af806 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105af808 je 0x105af8be */
  if (C.zf) goto L_105af8be;
  /* 105af80e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af811 mov eax, dword ptr [0x105d2fec] */
  EAX = (r32((uint32_t)(0x105d2fec)));
  /* 105af816 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105af819 push ecx */
  push32((uint32_t)(ECX));
  /* 105af81a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af81d push edx */
  push32((uint32_t)(EDX));
  /* 105af81e call 0x105aba10 */
  push32(0x105af823u); f_105aba10();
  /* 105af823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af826 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af829 mov ecx, dword ptr [0x105d2fec] */
  ECX = (r32((uint32_t)(0x105d2fec)));
  /* 105af82f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105af832 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105af835 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 105af83a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105af83c je 0x105af8a5 */
  if (C.zf) goto L_105af8a5;
  /* 105af83e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af842 jne 0x105af869 */
  if (!C.zf) goto L_105af869;
  /* 105af844 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af847 mov edx, dword ptr [0x105d2fec] */
  EDX = (r32((uint32_t)(0x105d2fec)));
  /* 105af84d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105af850 push eax */
  push32((uint32_t)(EAX));
  /* 105af851 call 0x105af680 */
  push32(0x105af856u); f_105af680();
  /* 105af856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af859 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af85c je 0x105af867 */
  if (C.zf) goto L_105af867;
  /* 105af85e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af861 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af864 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105af867:;
  /* 105af867 jmp 0x105af8a5 */
  goto L_105af8a5;
L_105af869:;
  /* 105af869 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af86d jne 0x105af8a5 */
  if (!C.zf) goto L_105af8a5;
  /* 105af86f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af872 mov eax, dword ptr [0x105d2fec] */
  EAX = (r32((uint32_t)(0x105d2fec)));
  /* 105af877 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105af87a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105af87d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 105af880 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105af882 je 0x105af8a5 */
  if (C.zf) goto L_105af8a5;
  /* 105af884 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af887 mov ecx, dword ptr [0x105d2fec] */
  ECX = (r32((uint32_t)(0x105d2fec)));
  /* 105af88d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105af890 push edx */
  push32((uint32_t)(EDX));
  /* 105af891 call 0x105af680 */
  push32(0x105af896u); f_105af680();
  /* 105af896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af899 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af89c jne 0x105af8a5 */
  if (!C.zf) goto L_105af8a5;
  /* 105af89e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_105af8a5:;
  /* 105af8a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af8a8 mov ecx, dword ptr [0x105d2fec] */
  ECX = (r32((uint32_t)(0x105d2fec)));
  /* 105af8ae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105af8b1 push edx */
  push32((uint32_t)(EDX));
  /* 105af8b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105af8b5 push eax */
  push32((uint32_t)(EAX));
  /* 105af8b6 call 0x105aba80 */
  push32(0x105af8bbu); f_105aba80();
  /* 105af8bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105af8be:;
  /* 105af8be jmp 0x105af7c7 */
  goto L_105af7c7;
L_105af8c3:;
  /* 105af8c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105af8c5 call 0x105abe40 */
  push32(0x105af8cau); f_105abe40();
  /* 105af8ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af8cd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af8d1 jne 0x105af8d8 */
  if (!C.zf) goto L_105af8d8;
  /* 105af8d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105af8d6 jmp 0x105af8db */
  goto L_105af8db;
L_105af8d8:;
  /* 105af8d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105af8db:;
  /* 105af8db mov esp, ebp */
  ESP = (EBP);
  /* 105af8dd pop ebp */
  EBP = (pop32());
  /* 105af8de ret  */
  ESPCHK(0x105af7a0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x105af8e0 (15 bytes, 7 insns) */
void f_105af8e0(void) {
  FTRACE(0x105af8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105af8e1 mov ebp, esp */
  EBP = (ESP);
  /* 105af8e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105af8e5 call 0x105a5840 */
  push32(0x105af8eau); f_105a5840();
  /* 105af8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af8ed pop ebp */
  EBP = (pop32());
  /* 105af8ee ret  */
  ESPCHK(0x105af8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8f0 @ 0x105af8f0 (1007 bytes, 269 insns) */
void f_105af8f0(void) {
  FTRACE(0x105af8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105af8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105af8f1 mov ebp, esp */
  EBP = (ESP);
  /* 105af8f3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105af8f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af8fd jl 0x105af905 */
  if ((C.sf!=C.of)) goto L_105af905;
  /* 105af8ff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af903 jle 0x105af90c */
  if ((C.zf||C.sf!=C.of)) goto L_105af90c;
L_105af905:;
  /* 105af905 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105af907 jmp 0x105afcdb */
  goto L_105afcdb;
L_105af90c:;
  /* 105af90c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105af90e call 0x105abda0 */
  push32(0x105af913u); f_105abda0();
  /* 105af913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af916 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105af91d mov eax, dword ptr [0x105d2d1c] */
  EAX = (r32((uint32_t)(0x105d2d1c)));
  /* 105af922 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105af925 mov dword ptr [0x105d2d1c], eax */
  w32((uint32_t)(0x105d2d1c), (EAX));
L_105af92a:;
  /* 105af92a cmp dword ptr [0x105d2d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af931 je 0x105af93d */
  if (C.zf) goto L_105af93d;
  /* 105af933 push 1 */
  push32((uint32_t)(0x1u));
  /* 105af935 call dword ptr [0x105d52d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52d0))), 0x105af93bu);
  /* 105af93b jmp 0x105af92a */
  goto L_105af92a;
L_105af93d:;
  /* 105af93d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af941 je 0x105af981 */
  if (C.zf) goto L_105af981;
  /* 105af943 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af947 je 0x105af961 */
  if (C.zf) goto L_105af961;
  /* 105af949 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af94c push ecx */
  push32((uint32_t)(ECX));
  /* 105af94d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af950 push edx */
  push32((uint32_t)(EDX));
  /* 105af951 call 0x105afce0 */
  push32(0x105af956u); f_105afce0();
  /* 105af956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af959 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 105af95f jmp 0x105af973 */
  goto L_105af973;
L_105af961:;
  /* 105af961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105af964 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105af967 mov ecx, dword ptr [eax + 0x105d14dc] */
  ECX = (r32((uint32_t)(EAX + 0x105d14dc)));
  /* 105af96d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_105af973:;
  /* 105af973 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 105af979 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105af97c jmp 0x105afcbb */
  goto L_105afcbb;
L_105af981:;
  /* 105af981 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 105af988 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105af98f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af993 je 0x105afcb3 */
  if (C.zf) goto L_105afcb3;
  /* 105af999 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af99c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105af99f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af9a2 jne 0x105afbc4 */
  if (!C.zf) goto L_105afbc4;
  /* 105af9a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af9ab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105af9af cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af9b2 jne 0x105afbc4 */
  if (!C.zf) goto L_105afbc4;
  /* 105af9b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af9bb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 105af9bf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af9c2 jne 0x105afbc4 */
  if (!C.zf) goto L_105afbc4;
  /* 105af9c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105af9cb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_105af9d1:;
  /* 105af9d1 push 0x105ceb78 */
  push32((uint32_t)(0x105ceb78u));
  /* 105af9d6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105af9dc push ecx */
  push32((uint32_t)(ECX));
  /* 105af9dd call 0x105b23a0 */
  push32(0x105af9e2u); f_105b23a0();
  /* 105af9e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105af9e5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 105af9eb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105af9f2 je 0x105afa1d */
  if (C.zf) goto L_105afa1d;
  /* 105af9f4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105af9fa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105afa00 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 105afa06 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afa0d je 0x105afa1d */
  if (C.zf) goto L_105afa1d;
  /* 105afa0f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afa15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105afa18 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afa1b jne 0x105afa43 */
  if (!C.zf) goto L_105afa43;
L_105afa1d:;
  /* 105afa1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afa21 je 0x105afa3c */
  if (C.zf) goto L_105afa3c;
  /* 105afa23 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105afa25 call 0x105abe40 */
  push32(0x105afa2au); f_105abe40();
  /* 105afa2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afa2d mov edx, dword ptr [0x105d2d1c] */
  EDX = (r32((uint32_t)(0x105d2d1c)));
  /* 105afa33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105afa36 mov dword ptr [0x105d2d1c], edx */
  w32((uint32_t)(0x105d2d1c), (EDX));
L_105afa3c:;
  /* 105afa3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105afa3e jmp 0x105afcdb */
  goto L_105afcdb;
L_105afa43:;
  /* 105afa43 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 105afa4a jmp 0x105afa55 */
  goto L_105afa55;
L_105afa4c:;
  /* 105afa4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afa4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afa52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105afa55:;
  /* 105afa55 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afa59 jg 0x105afaa3 */
  if ((!C.zf&&C.sf==C.of)) goto L_105afaa3;
  /* 105afa5b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105afa61 push ecx */
  push32((uint32_t)(ECX));
  /* 105afa62 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105afa68 push edx */
  push32((uint32_t)(EDX));
  /* 105afa69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afa6c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afa6f mov ecx, dword ptr [eax + 0x105d14d8] */
  ECX = (r32((uint32_t)(EAX + 0x105d14d8)));
  /* 105afa75 push ecx */
  push32((uint32_t)(ECX));
  /* 105afa76 call 0x105b2360 */
  push32(0x105afa7bu); f_105b2360();
  /* 105afa7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afa7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afa80 jne 0x105afaa1 */
  if (!C.zf) goto L_105afaa1;
  /* 105afa82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afa85 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afa88 mov eax, dword ptr [edx + 0x105d14d8] */
  EAX = (r32((uint32_t)(EDX + 0x105d14d8)));
  /* 105afa8e push eax */
  push32((uint32_t)(EAX));
  /* 105afa8f call 0x105aa820 */
  push32(0x105afa94u); f_105aa820();
  /* 105afa94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afa97 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afa9d jne 0x105afaa1 */
  if (!C.zf) goto L_105afaa1;
  /* 105afa9f jmp 0x105afaa3 */
  goto L_105afaa3;
L_105afaa1:;
  /* 105afaa1 jmp 0x105afa4c */
  goto L_105afa4c;
L_105afaa3:;
  /* 105afaa3 push 0x105ceb74 */
  push32((uint32_t)(0x105ceb74u));
  /* 105afaa8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afaae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afab1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 105afab7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afabd push edx */
  push32((uint32_t)(EDX));
  /* 105afabe call 0x105b2320 */
  push32(0x105afac3u); f_105b2320();
  /* 105afac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afac6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 105afacc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afad3 jne 0x105afb09 */
  if (!C.zf) goto L_105afb09;
  /* 105afad5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afadb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105afade cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afae1 je 0x105afb09 */
  if (C.zf) goto L_105afb09;
  /* 105afae3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afae7 je 0x105afb02 */
  if (C.zf) goto L_105afb02;
  /* 105afae9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105afaeb call 0x105abe40 */
  push32(0x105afaf0u); f_105abe40();
  /* 105afaf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afaf3 mov edx, dword ptr [0x105d2d1c] */
  EDX = (r32((uint32_t)(0x105d2d1c)));
  /* 105afaf9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105afafc mov dword ptr [0x105d2d1c], edx */
  w32((uint32_t)(0x105d2d1c), (EDX));
L_105afb02:;
  /* 105afb02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105afb04 jmp 0x105afcdb */
  goto L_105afcdb;
L_105afb09:;
  /* 105afb09 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afb0d jg 0x105afb5a */
  if ((!C.zf&&C.sf==C.of)) goto L_105afb5a;
  /* 105afb0f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105afb15 push eax */
  push32((uint32_t)(EAX));
  /* 105afb16 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afb1c push ecx */
  push32((uint32_t)(ECX));
  /* 105afb1d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 105afb23 push edx */
  push32((uint32_t)(EDX));
  /* 105afb24 call 0x105ab210 */
  push32(0x105afb29u); f_105ab210();
  /* 105afb29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afb2c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105afb32 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 105afb3a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 105afb40 push ecx */
  push32((uint32_t)(ECX));
  /* 105afb41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afb44 push edx */
  push32((uint32_t)(EDX));
  /* 105afb45 call 0x105afce0 */
  push32(0x105afb4au); f_105afce0();
  /* 105afb4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afb4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afb4f je 0x105afb5a */
  if (C.zf) goto L_105afb5a;
  /* 105afb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105afb54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afb57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105afb5a:;
  /* 105afb5a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afb60 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afb66 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 105afb6c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105afb72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105afb75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afb77 je 0x105afb88 */
  if (C.zf) goto L_105afb88;
  /* 105afb79 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105afb7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afb82 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_105afb88:;
  /* 105afb88 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105afb8e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105afb91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afb93 jne 0x105af9d1 */
  if (!C.zf) goto L_105af9d1;
  /* 105afb99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afb9d je 0x105afbac */
  if (C.zf) goto L_105afbac;
  /* 105afb9f call 0x105afe80 */
  push32(0x105afba4u); f_105afe80();
  /* 105afba4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 105afbaa jmp 0x105afbb6 */
  goto L_105afbb6;
L_105afbac:;
  /* 105afbac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_105afbb6:;
  /* 105afbb6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 105afbbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105afbbf jmp 0x105afcb1 */
  goto L_105afcb1;
L_105afbc4:;
  /* 105afbc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afbc7 push edx */
  push32((uint32_t)(EDX));
  /* 105afbc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105afbca push 0 */
  push32((uint32_t)(0x0u));
  /* 105afbcc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 105afbd2 push eax */
  push32((uint32_t)(EAX));
  /* 105afbd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105afbd6 push ecx */
  push32((uint32_t)(ECX));
  /* 105afbd7 call 0x105aff80 */
  push32(0x105afbdcu); f_105aff80();
  /* 105afbdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afbdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105afbe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afbe6 je 0x105afcb1 */
  if (C.zf) goto L_105afcb1;
  /* 105afbec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105afbf3 jmp 0x105afbfe */
  goto L_105afbfe;
L_105afbf5:;
  /* 105afbf5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afbf8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afbfb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105afbfe:;
  /* 105afbfe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afc02 jg 0x105afc60 */
  if ((!C.zf&&C.sf==C.of)) goto L_105afc60;
  /* 105afc04 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afc08 je 0x105afc5e */
  if (C.zf) goto L_105afc5e;
  /* 105afc0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afc0d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afc10 mov ecx, dword ptr [eax + 0x105d14dc] */
  ECX = (r32((uint32_t)(EAX + 0x105d14dc)));
  /* 105afc16 push ecx */
  push32((uint32_t)(ECX));
  /* 105afc17 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 105afc1d push edx */
  push32((uint32_t)(EDX));
  /* 105afc1e call 0x105b2290 */
  push32(0x105afc23u); f_105b2290();
  /* 105afc23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afc26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afc28 je 0x105afc55 */
  if (C.zf) goto L_105afc55;
  /* 105afc2a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 105afc30 push eax */
  push32((uint32_t)(EAX));
  /* 105afc31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105afc34 push ecx */
  push32((uint32_t)(ECX));
  /* 105afc35 call 0x105afce0 */
  push32(0x105afc3au); f_105afce0();
  /* 105afc3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afc3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afc3f je 0x105afc4c */
  if (C.zf) goto L_105afc4c;
  /* 105afc41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105afc44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afc47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105afc4a jmp 0x105afc53 */
  goto L_105afc53;
L_105afc4c:;
  /* 105afc4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_105afc53:;
  /* 105afc53 jmp 0x105afc5e */
  goto L_105afc5e;
L_105afc55:;
  /* 105afc55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105afc58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afc5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_105afc5e:;
  /* 105afc5e jmp 0x105afbf5 */
  goto L_105afbf5;
L_105afc60:;
  /* 105afc60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afc64 je 0x105afc8b */
  if (C.zf) goto L_105afc8b;
  /* 105afc66 call 0x105afe80 */
  push32(0x105afc6bu); f_105afe80();
  /* 105afc6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105afc6e push 2 */
  push32((uint32_t)(0x2u));
  /* 105afc70 mov ecx, dword ptr [0x105d14dc] */
  ECX = (r32((uint32_t)(0x105d14dc)));
  /* 105afc76 push ecx */
  push32((uint32_t)(ECX));
  /* 105afc77 call 0x105a8480 */
  push32(0x105afc7cu); f_105a8480();
  /* 105afc7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afc7f mov dword ptr [0x105d14dc], 0 */
  w32((uint32_t)(0x105d14dc), (0x0u));
  /* 105afc89 jmp 0x105afcb1 */
  goto L_105afcb1;
L_105afc8b:;
  /* 105afc8b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afc8f je 0x105afc9e */
  if (C.zf) goto L_105afc9e;
  /* 105afc91 call 0x105afe80 */
  push32(0x105afc96u); f_105afe80();
  /* 105afc96 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 105afc9c jmp 0x105afca8 */
  goto L_105afca8;
L_105afc9e:;
  /* 105afc9e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_105afca8:;
  /* 105afca8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 105afcae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105afcb1:;
  /* 105afcb1 jmp 0x105afcbb */
  goto L_105afcbb;
L_105afcb3:;
  /* 105afcb3 call 0x105afe80 */
  push32(0x105afcb8u); f_105afe80();
  /* 105afcb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105afcbb:;
  /* 105afcbb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afcbf je 0x105afcd8 */
  if (C.zf) goto L_105afcd8;
  /* 105afcc1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105afcc3 call 0x105abe40 */
  push32(0x105afcc8u); f_105abe40();
  /* 105afcc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afccb mov eax, dword ptr [0x105d2d1c] */
  EAX = (r32((uint32_t)(0x105d2d1c)));
  /* 105afcd0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105afcd3 mov dword ptr [0x105d2d1c], eax */
  w32((uint32_t)(0x105d2d1c), (EAX));
L_105afcd8:;
  /* 105afcd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105afcdb:;
  /* 105afcdb mov esp, ebp */
  ESP = (EBP);
  /* 105afcdd pop ebp */
  EBP = (pop32());
  /* 105afcde ret  */
  ESPCHK(0x105af8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fce0 @ 0x105afce0 (403 bytes, 117 insns) */
void f_105afce0(void) {
  FTRACE(0x105afce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105afce0 push ebp */
  push32((uint32_t)(EBP));
  /* 105afce1 mov ebp, esp */
  EBP = (ESP);
  /* 105afce3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105afce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afcec push eax */
  push32((uint32_t)(EAX));
  /* 105afced lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 105afcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 105afcf4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 105afcfa push edx */
  push32((uint32_t)(EDX));
  /* 105afcfb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 105afd01 push eax */
  push32((uint32_t)(EAX));
  /* 105afd02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105afd05 push ecx */
  push32((uint32_t)(ECX));
  /* 105afd06 call 0x105aff80 */
  push32(0x105afd0bu); f_105aff80();
  /* 105afd0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afd0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afd10 jne 0x105afd19 */
  if (!C.zf) goto L_105afd19;
  /* 105afd12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105afd14 jmp 0x105afe6f */
  goto L_105afe6f;
L_105afd19:;
  /* 105afd19 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 105afd1e push 0x105ceb7c */
  push32((uint32_t)(0x105ceb7cu));
  /* 105afd23 push 2 */
  push32((uint32_t)(0x2u));
  /* 105afd25 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 105afd2b push edx */
  push32((uint32_t)(EDX));
  /* 105afd2c call 0x105aa820 */
  push32(0x105afd31u); f_105aa820();
  /* 105afd31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afd34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afd37 push eax */
  push32((uint32_t)(EAX));
  /* 105afd38 call 0x105a79f0 */
  push32(0x105afd3du); f_105a79f0();
  /* 105afd3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afd40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105afd43 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afd47 jne 0x105afd50 */
  if (!C.zf) goto L_105afd50;
  /* 105afd49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105afd4b jmp 0x105afe6f */
  goto L_105afe6f;
L_105afd50:;
  /* 105afd50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afd53 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afd56 mov ecx, dword ptr [eax + 0x105d14dc] */
  ECX = (r32((uint32_t)(EAX + 0x105d14dc)));
  /* 105afd5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105afd5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afd62 mov eax, dword ptr [edx*4 + 0x105d2ba0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d2ba0)));
  /* 105afd69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105afd6c push 6 */
  push32((uint32_t)(0x6u));
  /* 105afd6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afd71 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afd74 add ecx, 0x105d2be4 */
  { uint32_t _a=(ECX),_b=(0x105d2be4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afd7a push ecx */
  push32((uint32_t)(ECX));
  /* 105afd7b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 105afd7e push edx */
  push32((uint32_t)(EDX));
  /* 105afd7f call 0x105aeb80 */
  push32(0x105afd84u); f_105aeb80();
  /* 105afd84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afd87 mov eax, dword ptr [0x105d2bb8] */
  EAX = (r32((uint32_t)(0x105d2bb8)));
  /* 105afd8c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105afd8f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 105afd95 push ecx */
  push32((uint32_t)(ECX));
  /* 105afd96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105afd99 push edx */
  push32((uint32_t)(EDX));
  /* 105afd9a call 0x105aa9a0 */
  push32(0x105afd9fu); f_105aa9a0();
  /* 105afd9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afda2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afda5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afda8 mov dword ptr [ecx + 0x105d14dc], eax */
  w32((uint32_t)(ECX + 0x105d14dc), (EAX));
  /* 105afdae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 105afdb4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105afdba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afdbd mov dword ptr [eax*4 + 0x105d2ba0], edx */
  w32((uint32_t)(EAX*4 + 0x105d2ba0), (EDX));
  /* 105afdc4 push 6 */
  push32((uint32_t)(0x6u));
  /* 105afdc6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 105afdcc push ecx */
  push32((uint32_t)(ECX));
  /* 105afdcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afdd0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afdd3 add edx, 0x105d2be4 */
  { uint32_t _a=(EDX),_b=(0x105d2be4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afdd9 push edx */
  push32((uint32_t)(EDX));
  /* 105afdda call 0x105aeb80 */
  push32(0x105afddfu); f_105aeb80();
  /* 105afddf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afde2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afde6 jne 0x105afdf3 */
  if (!C.zf) goto L_105afdf3;
  /* 105afde8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afdee mov dword ptr [0x105d2bb8], eax */
  w32((uint32_t)(0x105d2bb8), (EAX));
L_105afdf3:;
  /* 105afdf3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afdf7 jne 0x105afe05 */
  if (!C.zf) goto L_105afe05;
  /* 105afdf9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105afdff mov dword ptr [0x105d2bbc], ecx */
  w32((uint32_t)(0x105d2bbc), (ECX));
L_105afe05:;
  /* 105afe05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afe08 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afe0b call dword ptr [edx + 0x105d14e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x105d14e0))), 0x105afe11u);
  /* 105afe11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105afe13 je 0x105afe4c */
  if (C.zf) goto L_105afe4c;
  /* 105afe15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afe18 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afe1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105afe1e mov dword ptr [eax + 0x105d14dc], ecx */
  w32((uint32_t)(EAX + 0x105d14dc), (ECX));
  /* 105afe24 push 2 */
  push32((uint32_t)(0x2u));
  /* 105afe26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105afe29 push edx */
  push32((uint32_t)(EDX));
  /* 105afe2a call 0x105a8480 */
  push32(0x105afe2fu); f_105a8480();
  /* 105afe2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afe32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afe35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105afe38 mov dword ptr [eax*4 + 0x105d2ba0], ecx */
  w32((uint32_t)(EAX*4 + 0x105d2ba0), (ECX));
  /* 105afe3f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105afe42 mov dword ptr [0x105d2bb8], edx */
  w32((uint32_t)(0x105d2bb8), (EDX));
  /* 105afe48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105afe4a jmp 0x105afe6f */
  goto L_105afe6f;
L_105afe4c:;
  /* 105afe4c cmp dword ptr [ebp - 0xc], 0x105d13c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x105d13c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afe53 je 0x105afe63 */
  if (C.zf) goto L_105afe63;
  /* 105afe55 push 2 */
  push32((uint32_t)(0x2u));
  /* 105afe57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105afe5a push eax */
  push32((uint32_t)(EAX));
  /* 105afe5b call 0x105a8480 */
  push32(0x105afe60u); f_105a8480();
  /* 105afe60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105afe63:;
  /* 105afe63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afe66 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afe69 mov eax, dword ptr [ecx + 0x105d14dc] */
  EAX = (r32((uint32_t)(ECX + 0x105d14dc)));
L_105afe6f:;
  /* 105afe6f mov esp, ebp */
  ESP = (EBP);
  /* 105afe71 pop ebp */
  EBP = (pop32());
  /* 105afe72 ret  */
  ESPCHK(0x105afce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe80 @ 0x105afe80 (256 bytes, 72 insns) */
void f_105afe80(void) {
  FTRACE(0x105afe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105afe80 push ebp */
  push32((uint32_t)(EBP));
  /* 105afe81 mov ebp, esp */
  EBP = (ESP);
  /* 105afe83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105afe86 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105afe8d cmp dword ptr [0x105d14dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d14dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105afe94 jne 0x105afeb4 */
  if (!C.zf) goto L_105afeb4;
  /* 105afe96 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 105afe9b push 0x105ceb7c */
  push32((uint32_t)(0x105ceb7cu));
  /* 105afea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 105afea2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 105afea7 call 0x105a79f0 */
  push32(0x105afeacu); f_105a79f0();
  /* 105afeac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afeaf mov dword ptr [0x105d14dc], eax */
  w32((uint32_t)(0x105d14dc), (EAX));
L_105afeb4:;
  /* 105afeb4 mov eax, dword ptr [0x105d14dc] */
  EAX = (r32((uint32_t)(0x105d14dc)));
  /* 105afeb9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105afebc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105afec3 jmp 0x105afece */
  goto L_105afece;
L_105afec5:;
  /* 105afec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105afec8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105afecb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105afece:;
  /* 105afece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105afed1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afed4 mov eax, dword ptr [edx + 0x105d14dc] */
  EAX = (r32((uint32_t)(EDX + 0x105d14dc)));
  /* 105afeda push eax */
  push32((uint32_t)(EAX));
  /* 105afedb push 0x105ceb88 */
  push32((uint32_t)(0x105ceb88u));
  /* 105afee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105afee3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105afee6 mov edx, dword ptr [ecx + 0x105d14d8] */
  EDX = (r32((uint32_t)(ECX + 0x105d14d8)));
  /* 105afeec push edx */
  push32((uint32_t)(EDX));
  /* 105afeed push 3 */
  push32((uint32_t)(0x3u));
  /* 105afeef mov eax, dword ptr [0x105d14dc] */
  EAX = (r32((uint32_t)(0x105d14dc)));
  /* 105afef4 push eax */
  push32((uint32_t)(EAX));
  /* 105afef5 call 0x105b0120 */
  push32(0x105afefau); f_105b0120();
  /* 105afefa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105afefd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aff01 jge 0x105aff49 */
  if ((C.sf==C.of)) goto L_105aff49;
  /* 105aff03 push 0x105ceb74 */
  push32((uint32_t)(0x105ceb74u));
  /* 105aff08 mov ecx, dword ptr [0x105d14dc] */
  ECX = (r32((uint32_t)(0x105d14dc)));
  /* 105aff0e push ecx */
  push32((uint32_t)(ECX));
  /* 105aff0f call 0x105aa9b0 */
  push32(0x105aff14u); f_105aa9b0();
  /* 105aff14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aff17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aff1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105aff1d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105aff20 mov eax, dword ptr [edx + 0x105d14dc] */
  EAX = (r32((uint32_t)(EDX + 0x105d14dc)));
  /* 105aff26 push eax */
  push32((uint32_t)(EAX));
  /* 105aff27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105aff2a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105aff2d mov edx, dword ptr [ecx + 0x105d14dc] */
  EDX = (r32((uint32_t)(ECX + 0x105d14dc)));
  /* 105aff33 push edx */
  push32((uint32_t)(EDX));
  /* 105aff34 call 0x105b2290 */
  push32(0x105aff39u); f_105b2290();
  /* 105aff39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aff3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105aff3e je 0x105aff47 */
  if (C.zf) goto L_105aff47;
  /* 105aff40 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105aff47:;
  /* 105aff47 jmp 0x105aff77 */
  goto L_105aff77;
L_105aff49:;
  /* 105aff49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aff4d jne 0x105aff56 */
  if (!C.zf) goto L_105aff56;
  /* 105aff4f mov eax, dword ptr [0x105d14dc] */
  EAX = (r32((uint32_t)(0x105d14dc)));
  /* 105aff54 jmp 0x105aff7c */
  goto L_105aff7c;
L_105aff56:;
  /* 105aff56 push 2 */
  push32((uint32_t)(0x2u));
  /* 105aff58 mov eax, dword ptr [0x105d14dc] */
  EAX = (r32((uint32_t)(0x105d14dc)));
  /* 105aff5d push eax */
  push32((uint32_t)(EAX));
  /* 105aff5e call 0x105a8480 */
  push32(0x105aff63u); f_105a8480();
  /* 105aff63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105aff66 mov dword ptr [0x105d14dc], 0 */
  w32((uint32_t)(0x105d14dc), (0x0u));
  /* 105aff70 mov eax, dword ptr [0x105d14f4] */
  EAX = (r32((uint32_t)(0x105d14f4)));
  /* 105aff75 jmp 0x105aff7c */
  goto L_105aff7c;
L_105aff77:;
  /* 105aff77 jmp 0x105afec5 */
  goto L_105afec5;
L_105aff7c:;
  /* 105aff7c mov esp, ebp */
  ESP = (EBP);
  /* 105aff7e pop ebp */
  EBP = (pop32());
  /* 105aff7f ret  */
  ESPCHK(0x105afe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff80 @ 0x105aff80 (388 bytes, 115 insns) */
void f_105aff80(void) {
  FTRACE(0x105aff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105aff80 push ebp */
  push32((uint32_t)(EBP));
  /* 105aff81 mov ebp, esp */
  EBP = (ESP);
  /* 105aff83 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105aff89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aff8d jne 0x105aff96 */
  if (!C.zf) goto L_105aff96;
  /* 105aff8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105aff91 jmp 0x105b0100 */
  goto L_105b0100;
L_105aff96:;
  /* 105aff96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105aff99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105aff9c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105aff9f jne 0x105afff0 */
  if (!C.zf) goto L_105afff0;
  /* 105affa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105affa4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105affa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105affaa jne 0x105afff0 */
  if (!C.zf) goto L_105afff0;
  /* 105affac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105affaf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 105affb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105affb5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 105affb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105affbd je 0x105affd9 */
  if (C.zf) goto L_105affd9;
  /* 105affbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105affc2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 105affc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105affca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 105affd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105affd3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_105affd9:;
  /* 105affd9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105affdd je 0x105affe8 */
  if (C.zf) goto L_105affe8;
  /* 105affdf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105affe2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105affe8:;
  /* 105affe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105affeb jmp 0x105b0100 */
  goto L_105b0100;
L_105afff0:;
  /* 105afff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105afff3 push ecx */
  push32((uint32_t)(ECX));
  /* 105afff4 push 0x105d1450 */
  push32((uint32_t)(0x105d1450u));
  /* 105afff9 call 0x105b2290 */
  push32(0x105afffeu); f_105b2290();
  /* 105afffe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0003 je 0x105b00b8 */
  if (C.zf) goto L_105b00b8;
  /* 105b0009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b000c push edx */
  push32((uint32_t)(EDX));
  /* 105b000d push 0x105d13cc */
  push32((uint32_t)(0x105d13ccu));
  /* 105b0012 call 0x105b2290 */
  push32(0x105b0017u); f_105b2290();
  /* 105b0017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b001a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b001c je 0x105b00b8 */
  if (C.zf) goto L_105b00b8;
  /* 105b0022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0025 push eax */
  push32((uint32_t)(EAX));
  /* 105b0026 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 105b002c push ecx */
  push32((uint32_t)(ECX));
  /* 105b002d call 0x105b0170 */
  push32(0x105b0032u); f_105b0170();
  /* 105b0032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0037 je 0x105b0040 */
  if (C.zf) goto L_105b0040;
  /* 105b0039 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b003b jmp 0x105b0100 */
  goto L_105b0100;
L_105b0040:;
  /* 105b0040 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 105b0046 push edx */
  push32((uint32_t)(EDX));
  /* 105b0047 push 0x105d2b94 */
  push32((uint32_t)(0x105d2b94u));
  /* 105b004c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 105b0052 push eax */
  push32((uint32_t)(EAX));
  /* 105b0053 call 0x105b23e0 */
  push32(0x105b0058u); f_105b23e0();
  /* 105b0058 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b005b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b005d jne 0x105b0066 */
  if (!C.zf) goto L_105b0066;
  /* 105b005f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0061 jmp 0x105b0100 */
  goto L_105b0100;
L_105b0066:;
  /* 105b0066 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0068 mov cx, word ptr [0x105d2b98] */
  CX = (r16((uint32_t)(0x105d2b98)));
  /* 105b006f mov dword ptr [0x105d2b9c], ecx */
  w32((uint32_t)(0x105d2b9c), (ECX));
  /* 105b0075 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 105b007b push edx */
  push32((uint32_t)(EDX));
  /* 105b007c push 0x105d1450 */
  push32((uint32_t)(0x105d1450u));
  /* 105b0081 call 0x105b02d0 */
  push32(0x105b0086u); f_105b02d0();
  /* 105b0086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0089 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b008c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b008f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b0091 je 0x105b00a6 */
  if (C.zf) goto L_105b00a6;
  /* 105b0093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0096 push edx */
  push32((uint32_t)(EDX));
  /* 105b0097 push 0x105d13cc */
  push32((uint32_t)(0x105d13ccu));
  /* 105b009c call 0x105aa9a0 */
  push32(0x105b00a1u); f_105aa9a0();
  /* 105b00a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b00a4 jmp 0x105b00b8 */
  goto L_105b00b8;
L_105b00a6:;
  /* 105b00a6 push 0x105d1450 */
  push32((uint32_t)(0x105d1450u));
  /* 105b00ab push 0x105d13cc */
  push32((uint32_t)(0x105d13ccu));
  /* 105b00b0 call 0x105aa9a0 */
  push32(0x105b00b5u); f_105aa9a0();
  /* 105b00b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b00b8:;
  /* 105b00b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b00bc je 0x105b00d1 */
  if (C.zf) goto L_105b00d1;
  /* 105b00be push 6 */
  push32((uint32_t)(0x6u));
  /* 105b00c0 push 0x105d2b94 */
  push32((uint32_t)(0x105d2b94u));
  /* 105b00c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b00c8 push eax */
  push32((uint32_t)(EAX));
  /* 105b00c9 call 0x105aeb80 */
  push32(0x105b00ceu); f_105aeb80();
  /* 105b00ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b00d1:;
  /* 105b00d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b00d5 je 0x105b00ea */
  if (C.zf) goto L_105b00ea;
  /* 105b00d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 105b00d9 push 0x105d2b9c */
  push32((uint32_t)(0x105d2b9cu));
  /* 105b00de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b00e1 push ecx */
  push32((uint32_t)(ECX));
  /* 105b00e2 call 0x105aeb80 */
  push32(0x105b00e7u); f_105aeb80();
  /* 105b00e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b00ea:;
  /* 105b00ea push 0x105d1450 */
  push32((uint32_t)(0x105d1450u));
  /* 105b00ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b00f2 push edx */
  push32((uint32_t)(EDX));
  /* 105b00f3 call 0x105aa9a0 */
  push32(0x105b00f8u); f_105aa9a0();
  /* 105b00f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b00fb mov eax, 0x105d1450 */
  EAX = (0x105d1450u);
L_105b0100:;
  /* 105b0100 mov esp, ebp */
  ESP = (EBP);
  /* 105b0102 pop ebp */
  EBP = (pop32());
  /* 105b0103 ret  */
  ESPCHK(0x105aff80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010110 @ 0x105b0110 (7 bytes, 5 insns) */
void f_105b0110(void) {
  FTRACE(0x105b0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0110 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0111 mov ebp, esp */
  EBP = (ESP);
  /* 105b0113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0115 pop ebp */
  EBP = (pop32());
  /* 105b0116 ret  */
  ESPCHK(0x105b0110u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x105b0120 (79 bytes, 28 insns) */
void f_105b0120(void) {
  FTRACE(0x105b0120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0120 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0121 mov ebp, esp */
  EBP = (ESP);
  /* 105b0123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0126 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 105b0129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b012c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b0133 jmp 0x105b013e */
  goto L_105b013e;
L_105b0135:;
  /* 105b0135 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0138 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b013b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105b013e:;
  /* 105b013e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0141 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0144 jge 0x105b0164 */
  if ((C.sf==C.of)) goto L_105b0164;
  /* 105b0146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0149 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b014c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b014f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0152 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105b0155 push edx */
  push32((uint32_t)(EDX));
  /* 105b0156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0159 push eax */
  push32((uint32_t)(EAX));
  /* 105b015a call 0x105aa9b0 */
  push32(0x105b015fu); f_105aa9b0();
  /* 105b015f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0162 jmp 0x105b0135 */
  goto L_105b0135;
L_105b0164:;
  /* 105b0164 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b016b mov esp, ebp */
  ESP = (EBP);
  /* 105b016d pop ebp */
  EBP = (pop32());
  /* 105b016e ret  */
  ESPCHK(0x105b0120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010170 @ 0x105b0170 (349 bytes, 122 insns) */
void f_105b0170(void) {
  FTRACE(0x105b0170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0170 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0171 mov ebp, esp */
  EBP = (ESP);
  /* 105b0173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0176 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 105b017b push 0 */
  push32((uint32_t)(0x0u));
  /* 105b017d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0180 push eax */
  push32((uint32_t)(EAX));
  /* 105b0181 call 0x105ac110 */
  push32(0x105b0186u); f_105ac110();
  /* 105b0186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b018c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b018f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b0191 jne 0x105b019a */
  if (!C.zf) goto L_105b019a;
  /* 105b0193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0195 jmp 0x105b02c9 */
  goto L_105b02c9;
L_105b019a:;
  /* 105b019a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b019d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b01a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b01a3 jne 0x105b01d0 */
  if (!C.zf) goto L_105b01d0;
  /* 105b01a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b01a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105b01ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b01ae je 0x105b01d0 */
  if (C.zf) goto L_105b01d0;
  /* 105b01b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b01b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b01b6 push ecx */
  push32((uint32_t)(ECX));
  /* 105b01b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b01ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b01c0 push edx */
  push32((uint32_t)(EDX));
  /* 105b01c1 call 0x105aa9a0 */
  push32(0x105b01c6u); f_105aa9a0();
  /* 105b01c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b01c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b01cb jmp 0x105b02c9 */
  goto L_105b02c9;
L_105b01d0:;
  /* 105b01d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b01d7 jmp 0x105b01e2 */
  goto L_105b01e2;
L_105b01d9:;
  /* 105b01d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b01dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b01df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b01e2:;
  /* 105b01e2 push 0x105ceb8c */
  push32((uint32_t)(0x105ceb8cu));
  /* 105b01e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b01ea push ecx */
  push32((uint32_t)(ECX));
  /* 105b01eb call 0x105b2320 */
  push32(0x105b01f0u); f_105b2320();
  /* 105b01f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b01f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b01f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b01fa jne 0x105b0204 */
  if (!C.zf) goto L_105b0204;
  /* 105b01fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b01ff jmp 0x105b02c9 */
  goto L_105b02c9;
L_105b0204:;
  /* 105b0204 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0207 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b020a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b020c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 105b020f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0213 jne 0x105b023a */
  if (!C.zf) goto L_105b023a;
  /* 105b0215 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0219 jge 0x105b023a */
  if ((C.sf==C.of)) goto L_105b023a;
  /* 105b021b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b021f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0222 je 0x105b023a */
  if (C.zf) goto L_105b023a;
  /* 105b0224 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0227 push edx */
  push32((uint32_t)(EDX));
  /* 105b0228 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b022b push eax */
  push32((uint32_t)(EAX));
  /* 105b022c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b022f push ecx */
  push32((uint32_t)(ECX));
  /* 105b0230 call 0x105ab210 */
  push32(0x105b0235u); f_105ab210();
  /* 105b0235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0238 jmp 0x105b02a0 */
  goto L_105b02a0;
L_105b023a:;
  /* 105b023a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b023e jne 0x105b0268 */
  if (!C.zf) goto L_105b0268;
  /* 105b0240 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0244 jge 0x105b0268 */
  if ((C.sf==C.of)) goto L_105b0268;
  /* 105b0246 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b024a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b024d je 0x105b0268 */
  if (C.zf) goto L_105b0268;
  /* 105b024f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0252 push eax */
  push32((uint32_t)(EAX));
  /* 105b0253 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0256 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0257 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b025a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b025d push edx */
  push32((uint32_t)(EDX));
  /* 105b025e call 0x105ab210 */
  push32(0x105b0263u); f_105ab210();
  /* 105b0263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0266 jmp 0x105b02a0 */
  goto L_105b02a0;
L_105b0268:;
  /* 105b0268 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b026c jne 0x105b029b */
  if (!C.zf) goto L_105b029b;
  /* 105b026e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b0272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0274 je 0x105b027f */
  if (C.zf) goto L_105b027f;
  /* 105b0276 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b027a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b027d jne 0x105b029b */
  if (!C.zf) goto L_105b029b;
L_105b027f:;
  /* 105b027f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0282 push edx */
  push32((uint32_t)(EDX));
  /* 105b0283 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0286 push eax */
  push32((uint32_t)(EAX));
  /* 105b0287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b028a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0290 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0291 call 0x105ab210 */
  push32(0x105b0296u); f_105ab210();
  /* 105b0296 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0299 jmp 0x105b02a0 */
  goto L_105b02a0;
L_105b029b:;
  /* 105b029b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b029e jmp 0x105b02c9 */
  goto L_105b02c9;
L_105b02a0:;
  /* 105b02a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b02a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b02a7 jne 0x105b02ab */
  if (!C.zf) goto L_105b02ab;
  /* 105b02a9 jmp 0x105b02c7 */
  goto L_105b02c7;
L_105b02ab:;
  /* 105b02ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b02af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b02b1 jne 0x105b02b5 */
  if (!C.zf) goto L_105b02b5;
  /* 105b02b3 jmp 0x105b02c7 */
  goto L_105b02c7;
L_105b02b5:;
  /* 105b02b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b02b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b02bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 105b02bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 105b02c2 jmp 0x105b01d9 */
  goto L_105b01d9;
L_105b02c7:;
  /* 105b02c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b02c9:;
  /* 105b02c9 mov esp, ebp */
  ESP = (EBP);
  /* 105b02cb pop ebp */
  EBP = (pop32());
  /* 105b02cc ret  */
  ESPCHK(0x105b0170u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x105b02d0 (101 bytes, 36 insns) */
void f_105b02d0(void) {
  FTRACE(0x105b02d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b02d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b02d1 mov ebp, esp */
  EBP = (ESP);
  /* 105b02d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b02d6 push eax */
  push32((uint32_t)(EAX));
  /* 105b02d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b02da push ecx */
  push32((uint32_t)(ECX));
  /* 105b02db call 0x105aa9a0 */
  push32(0x105b02e0u); f_105aa9a0();
  /* 105b02e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b02e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b02e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 105b02ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b02ec je 0x105b0308 */
  if (C.zf) goto L_105b0308;
  /* 105b02ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b02f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b02f4 push ecx */
  push32((uint32_t)(ECX));
  /* 105b02f5 push 0x105ceb94 */
  push32((uint32_t)(0x105ceb94u));
  /* 105b02fa push 2 */
  push32((uint32_t)(0x2u));
  /* 105b02fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b02ff push edx */
  push32((uint32_t)(EDX));
  /* 105b0300 call 0x105b0120 */
  push32(0x105b0305u); f_105b0120();
  /* 105b0305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b0308:;
  /* 105b0308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b030b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 105b0312 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b0314 je 0x105b0333 */
  if (C.zf) goto L_105b0333;
  /* 105b0316 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0319 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b031f push edx */
  push32((uint32_t)(EDX));
  /* 105b0320 push 0x105ceb90 */
  push32((uint32_t)(0x105ceb90u));
  /* 105b0325 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b032a push eax */
  push32((uint32_t)(EAX));
  /* 105b032b call 0x105b0120 */
  push32(0x105b0330u); f_105b0120();
  /* 105b0330 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b0333:;
  /* 105b0333 pop ebp */
  EBP = (pop32());
  /* 105b0334 ret  */
  ESPCHK(0x105b02d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x105b0340 (664 bytes, 262 insns) [15 switch table(s)] */
void f_105b0340(void) {
  FTRACE(0x105b0340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0340 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0341 mov ebp, esp */
  EBP = (ESP);
  /* 105b0343 push edi */
  push32((uint32_t)(EDI));
  /* 105b0344 push esi */
  push32((uint32_t)(ESI));
  /* 105b0345 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b034b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105b034e mov eax, ecx */
  EAX = (ECX);
  /* 105b0350 mov edx, ecx */
  EDX = (ECX);
  /* 105b0352 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0354 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0356 jbe 0x105b0360 */
  if ((C.cf||C.zf)) goto L_105b0360;
  /* 105b0358 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b035a jb 0x105b04d8 */
  if (C.cf) goto L_105b04d8;
L_105b0360:;
  /* 105b0360 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105b0366 jne 0x105b037c */
  if (!C.zf) goto L_105b037c;
  /* 105b0368 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b036b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105b036e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0371 jb 0x105b039c */
  if (C.cf) goto L_105b039c;
  /* 105b0373 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b0375 jmp dword ptr [edx*4 + 0x105b0488] */
  switch (EDX) {
    case 0: goto L_105b0498;
    case 1: goto L_105b04a0;
    case 2: goto L_105b04ac;
    case 3: goto L_105b04c0;
    default: x86_unimpl("switch@0x105b0375 out of table"); return;
  }
L_105b037c:;
  /* 105b037c mov eax, edi */
  EAX = (EDI);
  /* 105b037e mov edx, 3 */
  EDX = (0x3u);
  /* 105b0383 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0386 jb 0x105b0394 */
  if (C.cf) goto L_105b0394;
  /* 105b0388 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105b038b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b038d jmp dword ptr [eax*4 + 0x105b03a0] */
  switch (EAX) {
    case 1: goto L_105b03b0;
    case 2: goto L_105b03dc;
    case 3: goto L_105b0400;
    default: x86_unimpl("switch@0x105b038d out of table"); return;
  }
L_105b0394:;
  /* 105b0394 jmp dword ptr [ecx*4 + 0x105b0498] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x105b0498)))); return;
  /* 105b039b nop  */
  /* nop */
L_105b039c:;
  /* 105b039c jmp dword ptr [ecx*4 + 0x105b041c] */
  switch (ECX) {
    case 0: goto L_105b047f;
    case 1: goto L_105b046c;
    case 2: goto L_105b0464;
    case 3: goto L_105b045c;
    case 4: goto L_105b0454;
    case 5: goto L_105b044c;
    case 6: goto L_105b0444;
    case 7: goto L_105b043c;
    default: x86_unimpl("switch@0x105b039c out of table"); return;
  }
  /* 105b03a3 nop  */
  /* nop */
L_105b03b0:;
  /* 105b03b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b03b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b03b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105b03b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105b03b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105b03bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105b03bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b03c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105b03c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b03c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b03cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b03ce jb 0x105b039c */
  if (C.cf) goto L_105b039c;
  /* 105b03d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b03d2 jmp dword ptr [edx*4 + 0x105b0488] */
  switch (EDX) {
    case 0: goto L_105b0498;
    case 1: goto L_105b04a0;
    case 2: goto L_105b04ac;
    case 3: goto L_105b04c0;
    default: x86_unimpl("switch@0x105b03d2 out of table"); return;
  }
  /* 105b03d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b03dc:;
  /* 105b03dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b03de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b03e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105b03e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105b03e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b03e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105b03eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b03ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b03f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b03f4 jb 0x105b039c */
  if (C.cf) goto L_105b039c;
  /* 105b03f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b03f8 jmp dword ptr [edx*4 + 0x105b0488] */
  switch (EDX) {
    case 0: goto L_105b0498;
    case 1: goto L_105b04a0;
    case 2: goto L_105b04ac;
    case 3: goto L_105b04c0;
    default: x86_unimpl("switch@0x105b03f8 out of table"); return;
  }
  /* 105b03ff nop  */
  /* nop */
L_105b0400:;
  /* 105b0400 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b0402 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b0404 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105b0406 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b0407 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b040a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105b040b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b040e jb 0x105b039c */
  if (C.cf) goto L_105b039c;
  /* 105b0410 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b0412 jmp dword ptr [edx*4 + 0x105b0488] */
  switch (EDX) {
    case 0: goto L_105b0498;
    case 1: goto L_105b04a0;
    case 2: goto L_105b04ac;
    case 3: goto L_105b04c0;
    default: x86_unimpl("switch@0x105b0412 out of table"); return;
  }
  /* 105b0419 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b043c:;
  /* 105b043c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 105b0440 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_105b0444:;
  /* 105b0444 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 105b0448 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_105b044c:;
  /* 105b044c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 105b0450 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_105b0454:;
  /* 105b0454 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 105b0458 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_105b045c:;
  /* 105b045c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 105b0460 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_105b0464:;
  /* 105b0464 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 105b0468 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_105b046c:;
  /* 105b046c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 105b0470 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 105b0474 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105b047b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b047d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105b047f:;
  /* 105b047f jmp dword ptr [edx*4 + 0x105b0488] */
  switch (EDX) {
    case 0: goto L_105b0498;
    case 1: goto L_105b04a0;
    case 2: goto L_105b04ac;
    case 3: goto L_105b04c0;
    default: x86_unimpl("switch@0x105b047f out of table"); return;
  }
  /* 105b0486 mov edi, edi */
  EDI = (EDI);
L_105b0498:;
  /* 105b0498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b049b pop esi */
  ESI = (pop32());
  /* 105b049c pop edi */
  EDI = (pop32());
  /* 105b049d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b049e ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b049f nop  */
  /* nop */
L_105b04a0:;
  /* 105b04a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b04a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105b04a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b04a7 pop esi */
  ESI = (pop32());
  /* 105b04a8 pop edi */
  EDI = (pop32());
  /* 105b04a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b04aa ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b04ab nop  */
  /* nop */
L_105b04ac:;
  /* 105b04ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b04ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105b04b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105b04b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105b04b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b04b9 pop esi */
  ESI = (pop32());
  /* 105b04ba pop edi */
  EDI = (pop32());
  /* 105b04bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b04bc ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b04bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b04c0:;
  /* 105b04c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b04c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105b04c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105b04c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105b04ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105b04cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105b04d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b04d3 pop esi */
  ESI = (pop32());
  /* 105b04d4 pop edi */
  EDI = (pop32());
  /* 105b04d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b04d6 ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b04d7 nop  */
  /* nop */
L_105b04d8:;
  /* 105b04d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 105b04dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 105b04e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105b04e6 jne 0x105b050c */
  if (!C.zf) goto L_105b050c;
  /* 105b04e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b04eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105b04ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b04f1 jb 0x105b0500 */
  if (C.cf) goto L_105b0500;
  /* 105b04f3 std  */
  C.df=1;
  /* 105b04f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b04f6 cld  */
  C.df=0;
  /* 105b04f7 jmp dword ptr [edx*4 + 0x105b0620] */
  switch (EDX) {
    case 0: goto L_105b0630;
    case 1: goto L_105b0638;
    case 2: goto L_105b0648;
    case 3: goto L_105b065c;
    default: x86_unimpl("switch@0x105b04f7 out of table"); return;
  }
  /* 105b04fe mov edi, edi */
  EDI = (EDI);
L_105b0500:;
  /* 105b0500 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b0502 jmp dword ptr [ecx*4 + 0x105b05d0] */
  switch (ECX) {
    case 0: goto L_105b0617;
    default: x86_unimpl("switch@0x105b0502 out of table"); return;
  }
  /* 105b0509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b050c:;
  /* 105b050c mov eax, edi */
  EAX = (EDI);
  /* 105b050e mov edx, 3 */
  EDX = (0x3u);
  /* 105b0513 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0516 jb 0x105b0524 */
  if (C.cf) goto L_105b0524;
  /* 105b0518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105b051b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b051d jmp dword ptr [eax*4 + 0x105b0528] */
  switch (EAX) {
    case 1: goto L_105b0538;
    case 2: goto L_105b0558;
    case 3: goto L_105b0580;
    default: x86_unimpl("switch@0x105b051d out of table"); return;
  }
L_105b0524:;
  /* 105b0524 jmp dword ptr [ecx*4 + 0x105b0620] */
  switch (ECX) {
    case 0: goto L_105b0630;
    case 1: goto L_105b0638;
    case 2: goto L_105b0648;
    case 3: goto L_105b065c;
    default: x86_unimpl("switch@0x105b0524 out of table"); return;
  }
  /* 105b052b nop  */
  /* nop */
L_105b0538:;
  /* 105b0538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105b053b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b053d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105b0540 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 105b0541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b0544 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 105b0545 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0548 jb 0x105b0500 */
  if (C.cf) goto L_105b0500;
  /* 105b054a std  */
  C.df=1;
  /* 105b054b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b054d cld  */
  C.df=0;
  /* 105b054e jmp dword ptr [edx*4 + 0x105b0620] */
  switch (EDX) {
    case 0: goto L_105b0630;
    case 1: goto L_105b0638;
    case 2: goto L_105b0648;
    case 3: goto L_105b065c;
    default: x86_unimpl("switch@0x105b054e out of table"); return;
  }
  /* 105b0555 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b0558:;
  /* 105b0558 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105b055b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b055d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105b0560 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105b0563 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b0566 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105b0569 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b056c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b056f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0572 jb 0x105b0500 */
  if (C.cf) goto L_105b0500;
  /* 105b0574 std  */
  C.df=1;
  /* 105b0575 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b0577 cld  */
  C.df=0;
  /* 105b0578 jmp dword ptr [edx*4 + 0x105b0620] */
  switch (EDX) {
    case 0: goto L_105b0630;
    case 1: goto L_105b0638;
    case 2: goto L_105b0648;
    case 3: goto L_105b065c;
    default: x86_unimpl("switch@0x105b0578 out of table"); return;
  }
  /* 105b057f nop  */
  /* nop */
L_105b0580:;
  /* 105b0580 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105b0583 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b0585 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105b0588 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105b058b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105b058e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105b0591 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105b0594 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105b0597 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b059a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b059d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b05a0 jb 0x105b0500 */
  if (C.cf) goto L_105b0500;
  /* 105b05a6 std  */
  C.df=1;
  /* 105b05a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105b05a9 cld  */
  C.df=0;
  /* 105b05aa jmp dword ptr [edx*4 + 0x105b0620] */
  switch (EDX) {
    case 0: goto L_105b0630;
    case 1: goto L_105b0638;
    case 2: goto L_105b0648;
    case 3: goto L_105b065c;
    default: x86_unimpl("switch@0x105b05aa out of table"); return;
  }
  /* 105b05b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 105b05b4 aam 5 */
  x86_unimpl("aam @ 0x105b05b4");
  /* 105b05b6 pop ebx */
  EBX = (pop32());
  /* 105b05b7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 105b05b9 add eax, 0x5e4105b */
  { uint32_t _a=(EAX),_b=(0x5e4105bu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b05be pop ebx */
  EBX = (pop32());
  /* 105b05bf adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 105b05c1 add eax, 0x5f4105b */
  { uint32_t _a=(EAX),_b=(0x5f4105bu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b05c6 pop ebx */
  EBX = (pop32());
  /* 105b05c7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 105b05c9 add eax, 0x604105b */
  { uint32_t _a=(EAX),_b=(0x604105bu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b05ce pop ebx */
  EBX = (pop32());
  /* 105b05d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 105b05d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 105b05dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 105b05e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 105b05e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 105b05e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 105b05ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 105b05f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 105b05f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 105b05f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 105b05fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 105b0600 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 105b0604 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 105b0608 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 105b060c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105b0613 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0615 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105b0617:;
  /* 105b0617 jmp dword ptr [edx*4 + 0x105b0620] */
  switch (EDX) {
    case 0: goto L_105b0630;
    case 1: goto L_105b0638;
    case 2: goto L_105b0648;
    case 3: goto L_105b065c;
    default: x86_unimpl("switch@0x105b0617 out of table"); return;
  }
  /* 105b061e mov edi, edi */
  EDI = (EDI);
L_105b0630:;
  /* 105b0630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0633 pop esi */
  ESI = (pop32());
  /* 105b0634 pop edi */
  EDI = (pop32());
  /* 105b0635 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b0636 ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b0637 nop  */
  /* nop */
L_105b0638:;
  /* 105b0638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105b063b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105b063e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0641 pop esi */
  ESI = (pop32());
  /* 105b0642 pop edi */
  EDI = (pop32());
  /* 105b0643 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b0644 ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b0645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b0648:;
  /* 105b0648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105b064b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105b064e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105b0651 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105b0654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0657 pop esi */
  ESI = (pop32());
  /* 105b0658 pop edi */
  EDI = (pop32());
  /* 105b0659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b065a ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
  /* 105b065b nop  */
  /* nop */
L_105b065c:;
  /* 105b065c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105b065f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105b0662 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105b0665 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105b0668 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105b066b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105b066e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0671 pop esi */
  ESI = (pop32());
  /* 105b0672 pop edi */
  EDI = (pop32());
  /* 105b0673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b0674 ret  */
  ESPCHK(0x105b0340u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x105b0680 (421 bytes, 148 insns) */
void f_105b0680(void) {
  FTRACE(0x105b0680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0680 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0681 mov ebp, esp */
  EBP = (ESP);
  /* 105b0683 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b0685 push 0x105ceba0 */
  push32((uint32_t)(0x105ceba0u));
  /* 105b068a push 0x105b3270 */
  push32((uint32_t)(0x105b3270u));
  /* 105b068f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105b0695 push eax */
  push32((uint32_t)(EAX));
  /* 105b0696 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105b069d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b06a0 push ebx */
  push32((uint32_t)(EBX));
  /* 105b06a1 push esi */
  push32((uint32_t)(ESI));
  /* 105b06a2 push edi */
  push32((uint32_t)(EDI));
  /* 105b06a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b06a6 cmp dword ptr [0x105d2bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b06ad jne 0x105b06fe */
  if (!C.zf) goto L_105b06fe;
  /* 105b06af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 105b06b2 push eax */
  push32((uint32_t)(EAX));
  /* 105b06b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b06b5 push 0x105ceb9c */
  push32((uint32_t)(0x105ceb9cu));
  /* 105b06ba push 1 */
  push32((uint32_t)(0x1u));
  /* 105b06bc call dword ptr [0x105d52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52dc))), 0x105b06c2u);
  /* 105b06c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b06c4 je 0x105b06d2 */
  if (C.zf) goto L_105b06d2;
  /* 105b06c6 mov dword ptr [0x105d2bc0], 1 */
  w32((uint32_t)(0x105d2bc0), (0x1u));
  /* 105b06d0 jmp 0x105b06fe */
  goto L_105b06fe;
L_105b06d2:;
  /* 105b06d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 105b06d5 push ecx */
  push32((uint32_t)(ECX));
  /* 105b06d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b06d8 push 0x105ceb98 */
  push32((uint32_t)(0x105ceb98u));
  /* 105b06dd push 1 */
  push32((uint32_t)(0x1u));
  /* 105b06df push 0 */
  push32((uint32_t)(0x0u));
  /* 105b06e1 call dword ptr [0x105d5290] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5290))), 0x105b06e7u);
  /* 105b06e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b06e9 je 0x105b06f7 */
  if (C.zf) goto L_105b06f7;
  /* 105b06eb mov dword ptr [0x105d2bc0], 2 */
  w32((uint32_t)(0x105d2bc0), (0x2u));
  /* 105b06f5 jmp 0x105b06fe */
  goto L_105b06fe;
L_105b06f7:;
  /* 105b06f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b06f9 jmp 0x105b0828 */
  goto L_105b0828;
L_105b06fe:;
  /* 105b06fe cmp dword ptr [0x105d2bc0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bc0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0705 jne 0x105b0735 */
  if (!C.zf) goto L_105b0735;
  /* 105b0707 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b070b jne 0x105b0716 */
  if (!C.zf) goto L_105b0716;
  /* 105b070d mov edx, dword ptr [0x105d2ba8] */
  EDX = (r32((uint32_t)(0x105d2ba8)));
  /* 105b0713 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_105b0716:;
  /* 105b0716 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b0719 push eax */
  push32((uint32_t)(EAX));
  /* 105b071a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b071d push ecx */
  push32((uint32_t)(ECX));
  /* 105b071e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0721 push edx */
  push32((uint32_t)(EDX));
  /* 105b0722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0725 push eax */
  push32((uint32_t)(EAX));
  /* 105b0726 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b0729 push ecx */
  push32((uint32_t)(ECX));
  /* 105b072a call dword ptr [0x105d5290] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5290))), 0x105b0730u);
  /* 105b0730 jmp 0x105b0828 */
  goto L_105b0828;
L_105b0735:;
  /* 105b0735 cmp dword ptr [0x105d2bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b073c jne 0x105b0826 */
  if (!C.zf) goto L_105b0826;
  /* 105b0742 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0746 jne 0x105b0751 */
  if (!C.zf) goto L_105b0751;
  /* 105b0748 mov edx, dword ptr [0x105d2bb8] */
  EDX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b074e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_105b0751:;
  /* 105b0751 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0753 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0755 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b0758 push eax */
  push32((uint32_t)(EAX));
  /* 105b0759 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b075c push ecx */
  push32((uint32_t)(ECX));
  /* 105b075d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b0760 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b0762 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0764 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105b0767 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b076a push edx */
  push32((uint32_t)(EDX));
  /* 105b076b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b076e push eax */
  push32((uint32_t)(EAX));
  /* 105b076f call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b0775u);
  /* 105b0775 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105b0778 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b077c jne 0x105b0785 */
  if (!C.zf) goto L_105b0785;
  /* 105b077e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0780 jmp 0x105b0828 */
  goto L_105b0828;
L_105b0785:;
  /* 105b0785 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b078c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b078f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b0791 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0794 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b0796 call 0x105aab90 */
  push32(0x105b079bu); f_105aab90();
  /* 105b079b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 105b079e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b07a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b07a4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105b07a7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b07aa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 105b07ac push edx */
  push32((uint32_t)(EDX));
  /* 105b07ad push 0 */
  push32((uint32_t)(0x0u));
  /* 105b07af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b07b2 push eax */
  push32((uint32_t)(EAX));
  /* 105b07b3 call 0x105ac110 */
  push32(0x105b07b8u); f_105ac110();
  /* 105b07b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b07bb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b07c2 jmp 0x105b07db */
  goto L_105b07db;
  /* 105b07c4 mov eax, 1 */
  EAX = (0x1u);
  /* 105b07c9 ret  */
  ESPCHK(0x105b0680u, _esp0);
  ESP += 4; return;
  /* 105b07ca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b07cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105b07d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b07db:;
  /* 105b07db cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b07df jne 0x105b07e5 */
  if (!C.zf) goto L_105b07e5;
  /* 105b07e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b07e3 jmp 0x105b0828 */
  goto L_105b0828;
L_105b07e5:;
  /* 105b07e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b07e8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b07e9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b07ec push edx */
  push32((uint32_t)(EDX));
  /* 105b07ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b07f0 push eax */
  push32((uint32_t)(EAX));
  /* 105b07f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b07f4 push ecx */
  push32((uint32_t)(ECX));
  /* 105b07f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b07f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b07fa push edx */
  push32((uint32_t)(EDX));
  /* 105b07fb call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b0801u);
  /* 105b0801 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105b0804 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0808 jne 0x105b080e */
  if (!C.zf) goto L_105b080e;
  /* 105b080a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b080c jmp 0x105b0828 */
  goto L_105b0828;
L_105b080e:;
  /* 105b080e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b0811 push eax */
  push32((uint32_t)(EAX));
  /* 105b0812 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b0815 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0816 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b0819 push edx */
  push32((uint32_t)(EDX));
  /* 105b081a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b081d push eax */
  push32((uint32_t)(EAX));
  /* 105b081e call dword ptr [0x105d52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52dc))), 0x105b0824u);
  /* 105b0824 jmp 0x105b0828 */
  goto L_105b0828;
L_105b0826:;
  /* 105b0826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b0828:;
  /* 105b0828 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 105b082b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b082e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105b0835 pop edi */
  EDI = (pop32());
  /* 105b0836 pop esi */
  ESI = (pop32());
  /* 105b0837 pop ebx */
  EBX = (pop32());
  /* 105b0838 mov esp, ebp */
  ESP = (EBP);
  /* 105b083a pop ebp */
  EBP = (pop32());
  /* 105b083b ret  */
  ESPCHK(0x105b0680u, _esp0);
  ESP += 4; return;
}

/* FUN_10010840 @ 0x105b0840 (727 bytes, 263 insns) */
void f_105b0840(void) {
  FTRACE(0x105b0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0840 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0841 mov ebp, esp */
  EBP = (ESP);
  /* 105b0843 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b0845 push 0x105cebb0 */
  push32((uint32_t)(0x105cebb0u));
  /* 105b084a push 0x105b3270 */
  push32((uint32_t)(0x105b3270u));
  /* 105b084f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105b0855 push eax */
  push32((uint32_t)(EAX));
  /* 105b0856 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105b085d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0860 push ebx */
  push32((uint32_t)(EBX));
  /* 105b0861 push esi */
  push32((uint32_t)(ESI));
  /* 105b0862 push edi */
  push32((uint32_t)(EDI));
  /* 105b0863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b0866 cmp dword ptr [0x105d2bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b086d jne 0x105b08c6 */
  if (!C.zf) goto L_105b08c6;
  /* 105b086f push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0871 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0873 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0875 push 0x105ceb9c */
  push32((uint32_t)(0x105ceb9cu));
  /* 105b087a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105b087f push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0881 call dword ptr [0x105d52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e4))), 0x105b0887u);
  /* 105b0887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0889 je 0x105b0897 */
  if (C.zf) goto L_105b0897;
  /* 105b088b mov dword ptr [0x105d2bc4], 1 */
  w32((uint32_t)(0x105d2bc4), (0x1u));
  /* 105b0895 jmp 0x105b08c6 */
  goto L_105b08c6;
L_105b0897:;
  /* 105b0897 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0899 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b089b push 1 */
  push32((uint32_t)(0x1u));
  /* 105b089d push 0x105ceb98 */
  push32((uint32_t)(0x105ceb98u));
  /* 105b08a2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105b08a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b08a9 call dword ptr [0x105d52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e0))), 0x105b08afu);
  /* 105b08af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b08b1 je 0x105b08bf */
  if (C.zf) goto L_105b08bf;
  /* 105b08b3 mov dword ptr [0x105d2bc4], 2 */
  w32((uint32_t)(0x105d2bc4), (0x2u));
  /* 105b08bd jmp 0x105b08c6 */
  goto L_105b08c6;
L_105b08bf:;
  /* 105b08bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b08c1 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b08c6:;
  /* 105b08c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b08ca jle 0x105b08df */
  if ((C.zf||C.sf!=C.of)) goto L_105b08df;
  /* 105b08cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b08cf push eax */
  push32((uint32_t)(EAX));
  /* 105b08d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b08d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b08d4 call 0x105b0b50 */
  push32(0x105b08d9u); f_105b0b50();
  /* 105b08d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b08dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_105b08df:;
  /* 105b08df cmp dword ptr [0x105d2bc4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bc4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b08e6 jne 0x105b090b */
  if (!C.zf) goto L_105b090b;
  /* 105b08e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b08eb push edx */
  push32((uint32_t)(EDX));
  /* 105b08ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b08ef push eax */
  push32((uint32_t)(EAX));
  /* 105b08f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b08f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b08f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b08f7 push edx */
  push32((uint32_t)(EDX));
  /* 105b08f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b08fb push eax */
  push32((uint32_t)(EAX));
  /* 105b08fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b08ff push ecx */
  push32((uint32_t)(ECX));
  /* 105b0900 call dword ptr [0x105d52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e0))), 0x105b0906u);
  /* 105b0906 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b090b:;
  /* 105b090b cmp dword ptr [0x105d2bc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0912 jne 0x105b0b2f */
  if (!C.zf) goto L_105b0b2f;
  /* 105b0918 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b091c jne 0x105b0927 */
  if (!C.zf) goto L_105b0927;
  /* 105b091e mov edx, dword ptr [0x105d2bb8] */
  EDX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b0924 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_105b0927:;
  /* 105b0927 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0929 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b092b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b092e push eax */
  push32((uint32_t)(EAX));
  /* 105b092f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b0932 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0933 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 105b0936 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b0938 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b093a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105b093d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0940 push edx */
  push32((uint32_t)(EDX));
  /* 105b0941 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b0944 push eax */
  push32((uint32_t)(EAX));
  /* 105b0945 call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b094bu);
  /* 105b094b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105b094e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0952 jne 0x105b095b */
  if (!C.zf) goto L_105b095b;
  /* 105b0954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0956 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b095b:;
  /* 105b095b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b0962 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b0965 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b0967 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b096a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b096c call 0x105aab90 */
  push32(0x105b0971u); f_105aab90();
  /* 105b0971 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 105b0974 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b0977 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b097a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105b097d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b0984 jmp 0x105b099d */
  goto L_105b099d;
  /* 105b0986 mov eax, 1 */
  EAX = (0x1u);
  /* 105b098b ret  */
  ESPCHK(0x105b0840u, _esp0);
  ESP += 4; return;
  /* 105b098c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b098f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105b0996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b099d:;
  /* 105b099d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b09a1 jne 0x105b09aa */
  if (!C.zf) goto L_105b09aa;
  /* 105b09a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b09a5 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b09aa:;
  /* 105b09aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b09ad push edx */
  push32((uint32_t)(EDX));
  /* 105b09ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b09b1 push eax */
  push32((uint32_t)(EAX));
  /* 105b09b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b09b5 push ecx */
  push32((uint32_t)(ECX));
  /* 105b09b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b09b9 push edx */
  push32((uint32_t)(EDX));
  /* 105b09ba push 1 */
  push32((uint32_t)(0x1u));
  /* 105b09bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b09bf push eax */
  push32((uint32_t)(EAX));
  /* 105b09c0 call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b09c6u);
  /* 105b09c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b09c8 jne 0x105b09d1 */
  if (!C.zf) goto L_105b09d1;
  /* 105b09ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b09cc jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b09d1:;
  /* 105b09d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b09d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b09d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b09d8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b09d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b09dc push edx */
  push32((uint32_t)(EDX));
  /* 105b09dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b09e0 push eax */
  push32((uint32_t)(EAX));
  /* 105b09e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b09e4 push ecx */
  push32((uint32_t)(ECX));
  /* 105b09e5 call dword ptr [0x105d52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e4))), 0x105b09ebu);
  /* 105b09eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105b09ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b09f2 jne 0x105b09fb */
  if (!C.zf) goto L_105b09fb;
  /* 105b09f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b09f6 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b09fb:;
  /* 105b09fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b09fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 105b0a04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b0a06 je 0x105b0a4b */
  if (C.zf) goto L_105b0a4b;
  /* 105b0a08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0a0c je 0x105b0a46 */
  if (C.zf) goto L_105b0a46;
  /* 105b0a0e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b0a11 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0a14 jle 0x105b0a1d */
  if ((C.zf||C.sf!=C.of)) goto L_105b0a1d;
  /* 105b0a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0a18 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0a1d:;
  /* 105b0a1d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b0a20 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0a21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b0a24 push edx */
  push32((uint32_t)(EDX));
  /* 105b0a25 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b0a28 push eax */
  push32((uint32_t)(EAX));
  /* 105b0a29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b0a2c push ecx */
  push32((uint32_t)(ECX));
  /* 105b0a2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0a30 push edx */
  push32((uint32_t)(EDX));
  /* 105b0a31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0a34 push eax */
  push32((uint32_t)(EAX));
  /* 105b0a35 call dword ptr [0x105d52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e4))), 0x105b0a3bu);
  /* 105b0a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0a3d jne 0x105b0a46 */
  if (!C.zf) goto L_105b0a46;
  /* 105b0a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0a41 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0a46:;
  /* 105b0a46 jmp 0x105b0b2a */
  goto L_105b0b2a;
L_105b0a4b:;
  /* 105b0a4b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b0a4e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105b0a51 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105b0a58 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b0a5b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b0a5d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0a60 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b0a62 call 0x105aab90 */
  push32(0x105b0a67u); f_105aab90();
  /* 105b0a67 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 105b0a6a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b0a6d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105b0a70 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105b0a73 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b0a7a jmp 0x105b0a93 */
  goto L_105b0a93;
  /* 105b0a7c mov eax, 1 */
  EAX = (0x1u);
  /* 105b0a81 ret  */
  ESPCHK(0x105b0840u, _esp0);
  ESP += 4; return;
  /* 105b0a82 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b0a85 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105b0a8c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b0a93:;
  /* 105b0a93 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0a97 jne 0x105b0aa0 */
  if (!C.zf) goto L_105b0aa0;
  /* 105b0a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0a9b jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0aa0:;
  /* 105b0aa0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b0aa3 push eax */
  push32((uint32_t)(EAX));
  /* 105b0aa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b0aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0aa8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b0aab push edx */
  push32((uint32_t)(EDX));
  /* 105b0aac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b0aaf push eax */
  push32((uint32_t)(EAX));
  /* 105b0ab0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0ab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0ab7 push edx */
  push32((uint32_t)(EDX));
  /* 105b0ab8 call dword ptr [0x105d52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e4))), 0x105b0abeu);
  /* 105b0abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0ac0 jne 0x105b0ac6 */
  if (!C.zf) goto L_105b0ac6;
  /* 105b0ac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0ac4 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0ac6:;
  /* 105b0ac6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0aca jne 0x105b0afa */
  if (!C.zf) goto L_105b0afa;
  /* 105b0acc push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0ace push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0ad4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b0ad7 push eax */
  push32((uint32_t)(EAX));
  /* 105b0ad8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b0adb push ecx */
  push32((uint32_t)(ECX));
  /* 105b0adc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b0ae1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b0ae4 push edx */
  push32((uint32_t)(EDX));
  /* 105b0ae5 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b0aebu);
  /* 105b0aeb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105b0aee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0af2 jne 0x105b0af8 */
  if (!C.zf) goto L_105b0af8;
  /* 105b0af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0af6 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0af8:;
  /* 105b0af8 jmp 0x105b0b2a */
  goto L_105b0b2a;
L_105b0afa:;
  /* 105b0afa push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0afc push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0afe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b0b01 push eax */
  push32((uint32_t)(EAX));
  /* 105b0b02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b0b05 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0b06 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b0b09 push edx */
  push32((uint32_t)(EDX));
  /* 105b0b0a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b0b0d push eax */
  push32((uint32_t)(EAX));
  /* 105b0b0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b0b13 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b0b16 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0b17 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b0b1du);
  /* 105b0b1d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105b0b20 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0b24 jne 0x105b0b2a */
  if (!C.zf) goto L_105b0b2a;
  /* 105b0b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0b28 jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0b2a:;
  /* 105b0b2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b0b2d jmp 0x105b0b31 */
  goto L_105b0b31;
L_105b0b2f:;
  /* 105b0b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b0b31:;
  /* 105b0b31 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 105b0b34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b0b37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105b0b3e pop edi */
  EDI = (pop32());
  /* 105b0b3f pop esi */
  ESI = (pop32());
  /* 105b0b40 pop ebx */
  EBX = (pop32());
  /* 105b0b41 mov esp, ebp */
  ESP = (EBP);
  /* 105b0b43 pop ebp */
  EBP = (pop32());
  /* 105b0b44 ret  */
  ESPCHK(0x105b0840u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b50 @ 0x105b0b50 (80 bytes, 32 insns) */
void f_105b0b50(void) {
  FTRACE(0x105b0b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0b50 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0b51 mov ebp, esp */
  EBP = (ESP);
  /* 105b0b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b0b59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b0b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0b5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105b0b62:;
  /* 105b0b62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0b65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0b68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0b6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b0b6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b0b70 je 0x105b0b87 */
  if (C.zf) goto L_105b0b87;
  /* 105b0b72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0b75 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b0b78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b0b7a je 0x105b0b87 */
  if (C.zf) goto L_105b0b87;
  /* 105b0b7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0b7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0b82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b0b85 jmp 0x105b0b62 */
  goto L_105b0b62;
L_105b0b87:;
  /* 105b0b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0b8a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b0b8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b0b8f jne 0x105b0b99 */
  if (!C.zf) goto L_105b0b99;
  /* 105b0b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0b94 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0b97 jmp 0x105b0b9c */
  goto L_105b0b9c;
L_105b0b99:;
  /* 105b0b99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_105b0b9c:;
  /* 105b0b9c mov esp, ebp */
  ESP = (EBP);
  /* 105b0b9e pop ebp */
  EBP = (pop32());
  /* 105b0b9f ret  */
  ESPCHK(0x105b0b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ba0 @ 0x105b0ba0 (130 bytes, 50 insns) */
void f_105b0ba0(void) {
  FTRACE(0x105b0ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0ba1 mov ebp, esp */
  EBP = (ESP);
  /* 105b0ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 105b0ba5 push esi */
  push32((uint32_t)(ESI));
  /* 105b0ba6 push edi */
  push32((uint32_t)(EDI));
  /* 105b0ba7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b0bae:;
  /* 105b0bae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0bb2 jne 0x105b0bd2 */
  if (!C.zf) goto L_105b0bd2;
  /* 105b0bb4 push 0x105cebd4 */
  push32((uint32_t)(0x105cebd4u));
  /* 105b0bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0bbb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 105b0bbd push 0x105cebc8 */
  push32((uint32_t)(0x105cebc8u));
  /* 105b0bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0bc4 call 0x105a5990 */
  push32(0x105b0bc9u); f_105a5990();
  /* 105b0bc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0bcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0bcf jne 0x105b0bd2 */
  if (!C.zf) goto L_105b0bd2;
  /* 105b0bd1 int3  */
  x86_unimpl("int3 @ 0x105b0bd1");
L_105b0bd2:;
  /* 105b0bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0bd6 jne 0x105b0bae */
  if (!C.zf) goto L_105b0bae;
  /* 105b0bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0bdb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105b0bde and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 105b0be1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b0be3 je 0x105b0bf1 */
  if (C.zf) goto L_105b0bf1;
  /* 105b0be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0be8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 105b0bef jmp 0x105b0c18 */
  goto L_105b0c18;
L_105b0bf1:;
  /* 105b0bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0bf5 call 0x105ab9d0 */
  push32(0x105b0bfau); f_105ab9d0();
  /* 105b0bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0bfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0c00 push edx */
  push32((uint32_t)(EDX));
  /* 105b0c01 call 0x105b0c30 */
  push32(0x105b0c06u); f_105b0c30();
  /* 105b0c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b0c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0c0f push eax */
  push32((uint32_t)(EAX));
  /* 105b0c10 call 0x105aba40 */
  push32(0x105b0c15u); f_105aba40();
  /* 105b0c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b0c18:;
  /* 105b0c18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0c1b pop edi */
  EDI = (pop32());
  /* 105b0c1c pop esi */
  ESI = (pop32());
  /* 105b0c1d pop ebx */
  EBX = (pop32());
  /* 105b0c1e mov esp, ebp */
  ESP = (EBP);
  /* 105b0c20 pop ebp */
  EBP = (pop32());
  /* 105b0c21 ret  */
  ESPCHK(0x105b0ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x105b0c30 (190 bytes, 67 insns) */
void f_105b0c30(void) {
  FTRACE(0x105b0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0c31 mov ebp, esp */
  EBP = (ESP);
  /* 105b0c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0c36 push ebx */
  push32((uint32_t)(EBX));
  /* 105b0c37 push esi */
  push32((uint32_t)(ESI));
  /* 105b0c38 push edi */
  push32((uint32_t)(EDI));
  /* 105b0c39 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b0c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0c43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105b0c46:;
  /* 105b0c46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0c4a jne 0x105b0c6a */
  if (!C.zf) goto L_105b0c6a;
  /* 105b0c4c push 0x105cdff4 */
  push32((uint32_t)(0x105cdff4u));
  /* 105b0c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b0c53 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 105b0c55 push 0x105cebc8 */
  push32((uint32_t)(0x105cebc8u));
  /* 105b0c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0c5c call 0x105a5990 */
  push32(0x105b0c61u); f_105a5990();
  /* 105b0c61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0c64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0c67 jne 0x105b0c6a */
  if (!C.zf) goto L_105b0c6a;
  /* 105b0c69 int3  */
  x86_unimpl("int3 @ 0x105b0c69");
L_105b0c6a:;
  /* 105b0c6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0c6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b0c6e jne 0x105b0c46 */
  if (!C.zf) goto L_105b0c46;
  /* 105b0c70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0c73 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105b0c76 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 105b0c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0c7d je 0x105b0cda */
  if (C.zf) goto L_105b0cda;
  /* 105b0c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0c82 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0c83 call 0x105af6d0 */
  push32(0x105b0c88u); f_105af6d0();
  /* 105b0c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0c8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b0c8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0c91 push edx */
  push32((uint32_t)(EDX));
  /* 105b0c92 call 0x105b3480 */
  push32(0x105b0c97u); f_105b3480();
  /* 105b0c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0c9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0c9d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105b0ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0ca1 call 0x105b3350 */
  push32(0x105b0ca6u); f_105b3350();
  /* 105b0ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0cab jge 0x105b0cb6 */
  if ((C.sf==C.of)) goto L_105b0cb6;
  /* 105b0cad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b0cb4 jmp 0x105b0cda */
  goto L_105b0cda;
L_105b0cb6:;
  /* 105b0cb6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0cb9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0cbd je 0x105b0cda */
  if (C.zf) goto L_105b0cda;
  /* 105b0cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0cc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0cc4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105b0cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0cc8 call 0x105a8480 */
  push32(0x105b0ccdu); f_105a8480();
  /* 105b0ccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0cd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0cd3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_105b0cda:;
  /* 105b0cda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b0cdd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 105b0ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0ce7 pop edi */
  EDI = (pop32());
  /* 105b0ce8 pop esi */
  ESI = (pop32());
  /* 105b0ce9 pop ebx */
  EBX = (pop32());
  /* 105b0cea mov esp, ebp */
  ESP = (EBP);
  /* 105b0cec pop ebp */
  EBP = (pop32());
  /* 105b0ced ret  */
  ESPCHK(0x105b0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x105b0cf0 (210 bytes, 63 insns) */
void f_105b0cf0(void) {
  FTRACE(0x105b0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 105b0cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0cf7 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0cfd jae 0x105b0d21 */
  if (!C.cf) goto L_105b0d21;
  /* 105b0cff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0d02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105b0d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0d08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105b0d0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b0d0e mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105b0d15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105b0d1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105b0d1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b0d1f jne 0x105b0d34 */
  if (!C.zf) goto L_105b0d34;
L_105b0d21:;
  /* 105b0d21 call 0x105aef60 */
  push32(0x105b0d26u); f_105aef60();
  /* 105b0d26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105b0d2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b0d2f jmp 0x105b0dbe */
  goto L_105b0dbe;
L_105b0d34:;
  /* 105b0d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0d37 push edx */
  push32((uint32_t)(EDX));
  /* 105b0d38 call 0x105af490 */
  push32(0x105b0d3du); f_105af490();
  /* 105b0d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0d43 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105b0d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0d49 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105b0d4c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b0d4f mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105b0d56 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 105b0d5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 105b0d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0d60 je 0x105b0d9d */
  if (C.zf) goto L_105b0d9d;
  /* 105b0d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0d65 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0d66 call 0x105af310 */
  push32(0x105b0d6bu); f_105af310();
  /* 105b0d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0d6e push eax */
  push32((uint32_t)(EAX));
  /* 105b0d6f call dword ptr [0x105d52e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52e8))), 0x105b0d75u);
  /* 105b0d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0d77 jne 0x105b0d84 */
  if (!C.zf) goto L_105b0d84;
  /* 105b0d79 call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105b0d7fu);
  /* 105b0d7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b0d82 jmp 0x105b0d8b */
  goto L_105b0d8b;
L_105b0d84:;
  /* 105b0d84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105b0d8b:;
  /* 105b0d8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0d8f jne 0x105b0d93 */
  if (!C.zf) goto L_105b0d93;
  /* 105b0d91 jmp 0x105b0daf */
  goto L_105b0daf;
L_105b0d93:;
  /* 105b0d93 call 0x105aef70 */
  push32(0x105b0d98u); f_105aef70();
  /* 105b0d98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0d9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105b0d9d:;
  /* 105b0d9d call 0x105aef60 */
  push32(0x105b0da2u); f_105aef60();
  /* 105b0da2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105b0da8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b0daf:;
  /* 105b0daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0db2 push eax */
  push32((uint32_t)(EAX));
  /* 105b0db3 call 0x105af520 */
  push32(0x105b0db8u); f_105af520();
  /* 105b0db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105b0dbe:;
  /* 105b0dbe mov esp, ebp */
  ESP = (EBP);
  /* 105b0dc0 pop ebp */
  EBP = (pop32());
  /* 105b0dc1 ret  */
  ESPCHK(0x105b0cf0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x105b0dd0 (219 bytes, 64 insns) */
void f_105b0dd0(void) {
  FTRACE(0x105b0dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0dd1 mov ebp, esp */
  EBP = (ESP);
  /* 105b0dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0dd4 cmp dword ptr [0x105d2bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0ddb je 0x105b0e71 */
  if (C.zf) goto L_105b0e71;
  /* 105b0de1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 105b0de3 push 0x105cebe4 */
  push32((uint32_t)(0x105cebe4u));
  /* 105b0de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0dea push 0xac */
  push32((uint32_t)(0xacu));
  /* 105b0def push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0df1 call 0x105a7e00 */
  push32(0x105b0df6u); f_105a7e00();
  /* 105b0df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b0dfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0e00 jne 0x105b0e0c */
  if (!C.zf) goto L_105b0e0c;
  /* 105b0e02 mov eax, 1 */
  EAX = (0x1u);
  /* 105b0e07 jmp 0x105b0ea7 */
  goto L_105b0ea7;
L_105b0e0c:;
  /* 105b0e0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0e0f push eax */
  push32((uint32_t)(EAX));
  /* 105b0e10 call 0x105b0eb0 */
  push32(0x105b0e15u); f_105b0eb0();
  /* 105b0e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b0e1a je 0x105b0e3d */
  if (C.zf) goto L_105b0e3d;
  /* 105b0e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0e1f push ecx */
  push32((uint32_t)(ECX));
  /* 105b0e20 call 0x105b1440 */
  push32(0x105b0e25u); f_105b1440();
  /* 105b0e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e28 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0e2d push edx */
  push32((uint32_t)(EDX));
  /* 105b0e2e call 0x105a8480 */
  push32(0x105b0e33u); f_105a8480();
  /* 105b0e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e36 mov eax, 1 */
  EAX = (0x1u);
  /* 105b0e3b jmp 0x105b0ea7 */
  goto L_105b0ea7;
L_105b0e3d:;
  /* 105b0e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0e40 mov dword ptr [0x105d1ca8], eax */
  w32((uint32_t)(0x105d1ca8), (EAX));
  /* 105b0e45 mov ecx, dword ptr [0x105d2bc8] */
  ECX = (r32((uint32_t)(0x105d2bc8)));
  /* 105b0e4b push ecx */
  push32((uint32_t)(ECX));
  /* 105b0e4c call 0x105b1440 */
  push32(0x105b0e51u); f_105b1440();
  /* 105b0e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e54 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0e56 mov edx, dword ptr [0x105d2bc8] */
  EDX = (r32((uint32_t)(0x105d2bc8)));
  /* 105b0e5c push edx */
  push32((uint32_t)(EDX));
  /* 105b0e5d call 0x105a8480 */
  push32(0x105b0e62u); f_105a8480();
  /* 105b0e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0e68 mov dword ptr [0x105d2bc8], eax */
  w32((uint32_t)(0x105d2bc8), (EAX));
  /* 105b0e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0e6f jmp 0x105b0ea7 */
  goto L_105b0ea7;
L_105b0e71:;
  /* 105b0e71 mov dword ptr [0x105d1ca8], 0x105d1cb0 */
  w32((uint32_t)(0x105d1ca8), (0x105d1cb0u));
  /* 105b0e7b mov ecx, dword ptr [0x105d2bc8] */
  ECX = (r32((uint32_t)(0x105d2bc8)));
  /* 105b0e81 push ecx */
  push32((uint32_t)(ECX));
  /* 105b0e82 call 0x105b1440 */
  push32(0x105b0e87u); f_105b1440();
  /* 105b0e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e8a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b0e8c mov edx, dword ptr [0x105d2bc8] */
  EDX = (r32((uint32_t)(0x105d2bc8)));
  /* 105b0e92 push edx */
  push32((uint32_t)(EDX));
  /* 105b0e93 call 0x105a8480 */
  push32(0x105b0e98u); f_105a8480();
  /* 105b0e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0e9b mov dword ptr [0x105d2bc8], 0 */
  w32((uint32_t)(0x105d2bc8), (0x0u));
  /* 105b0ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b0ea7:;
  /* 105b0ea7 mov esp, ebp */
  ESP = (EBP);
  /* 105b0ea9 pop ebp */
  EBP = (pop32());
  /* 105b0eaa ret  */
  ESPCHK(0x105b0dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x105b0eb0 (1423 bytes, 533 insns) */
void f_105b0eb0(void) {
  FTRACE(0x105b0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 105b0eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b0eb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105b0ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b0ebf mov ax, word ptr [0x105d2c02] */
  AX = (r16((uint32_t)(0x105d2c02)));
  /* 105b0ec5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b0ec8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0eca mov cx, word ptr [0x105d2c04] */
  CX = (r16((uint32_t)(0x105d2c04)));
  /* 105b0ed1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b0ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b0ed8 jne 0x105b0ee2 */
  if (!C.zf) goto L_105b0ee2;
  /* 105b0eda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b0edd jmp 0x105b143b */
  goto L_105b143b;
L_105b0ee2:;
  /* 105b0ee2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0ee5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0ee8 push edx */
  push32((uint32_t)(EDX));
  /* 105b0ee9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 105b0eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0eee push eax */
  push32((uint32_t)(EAX));
  /* 105b0eef push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0ef1 call 0x105b4990 */
  push32(0x105b0ef6u); f_105b4990();
  /* 105b0ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0ef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0efc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0efe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0f04 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f07 push edx */
  push32((uint32_t)(EDX));
  /* 105b0f08 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 105b0f0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0f0d push eax */
  push32((uint32_t)(EAX));
  /* 105b0f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0f10 call 0x105b4990 */
  push32(0x105b0f15u); f_105b4990();
  /* 105b0f15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0f1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0f1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0f20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0f23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f26 push edx */
  push32((uint32_t)(EDX));
  /* 105b0f27 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 105b0f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0f2c push eax */
  push32((uint32_t)(EAX));
  /* 105b0f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0f2f call 0x105b4990 */
  push32(0x105b0f34u); f_105b4990();
  /* 105b0f34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0f3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0f3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0f42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f45 push edx */
  push32((uint32_t)(EDX));
  /* 105b0f46 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 105b0f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0f4b push eax */
  push32((uint32_t)(EAX));
  /* 105b0f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0f4e call 0x105b4990 */
  push32(0x105b0f53u); f_105b4990();
  /* 105b0f53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0f59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0f5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0f61 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f64 push edx */
  push32((uint32_t)(EDX));
  /* 105b0f65 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 105b0f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0f6a push eax */
  push32((uint32_t)(EAX));
  /* 105b0f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0f6d call 0x105b4990 */
  push32(0x105b0f72u); f_105b4990();
  /* 105b0f72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0f78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0f7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0f7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0f80 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f83 push edx */
  push32((uint32_t)(EDX));
  /* 105b0f84 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 105b0f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0f89 push eax */
  push32((uint32_t)(EAX));
  /* 105b0f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0f8c call 0x105b4990 */
  push32(0x105b0f91u); f_105b4990();
  /* 105b0f91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0f97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0f99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0f9f push edx */
  push32((uint32_t)(EDX));
  /* 105b0fa0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 105b0fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0fa5 push eax */
  push32((uint32_t)(EAX));
  /* 105b0fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0fa8 call 0x105b4990 */
  push32(0x105b0fadu); f_105b4990();
  /* 105b0fad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0fb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0fb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0fb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0fbb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0fbe push edx */
  push32((uint32_t)(EDX));
  /* 105b0fbf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 105b0fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0fc4 push eax */
  push32((uint32_t)(EAX));
  /* 105b0fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0fc7 call 0x105b4990 */
  push32(0x105b0fccu); f_105b4990();
  /* 105b0fcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0fd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0fd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0fd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0fda add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0fdd push edx */
  push32((uint32_t)(EDX));
  /* 105b0fde push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 105b0fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b0fe3 push eax */
  push32((uint32_t)(EAX));
  /* 105b0fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b0fe6 call 0x105b4990 */
  push32(0x105b0febu); f_105b4990();
  /* 105b0feb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0fee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b0ff1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b0ff3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b0ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b0ff9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b0ffc push edx */
  push32((uint32_t)(EDX));
  /* 105b0ffd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 105b0fff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1002 push eax */
  push32((uint32_t)(EAX));
  /* 105b1003 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1005 call 0x105b4990 */
  push32(0x105b100au); f_105b4990();
  /* 105b100a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b100d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1010 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1012 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1018 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b101b push edx */
  push32((uint32_t)(EDX));
  /* 105b101c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 105b101e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1021 push eax */
  push32((uint32_t)(EAX));
  /* 105b1022 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1024 call 0x105b4990 */
  push32(0x105b1029u); f_105b4990();
  /* 105b1029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b102c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b102f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1031 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1037 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b103a push edx */
  push32((uint32_t)(EDX));
  /* 105b103b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 105b103d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1040 push eax */
  push32((uint32_t)(EAX));
  /* 105b1041 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1043 call 0x105b4990 */
  push32(0x105b1048u); f_105b4990();
  /* 105b1048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b104b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b104e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1050 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1056 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1059 push edx */
  push32((uint32_t)(EDX));
  /* 105b105a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 105b105c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b105f push eax */
  push32((uint32_t)(EAX));
  /* 105b1060 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1062 call 0x105b4990 */
  push32(0x105b1067u); f_105b4990();
  /* 105b1067 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b106a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b106d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b106f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1072 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1075 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1078 push edx */
  push32((uint32_t)(EDX));
  /* 105b1079 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105b107b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b107e push eax */
  push32((uint32_t)(EAX));
  /* 105b107f push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1081 call 0x105b4990 */
  push32(0x105b1086u); f_105b4990();
  /* 105b1086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1089 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b108c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b108e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1094 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1097 push edx */
  push32((uint32_t)(EDX));
  /* 105b1098 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 105b109a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b109d push eax */
  push32((uint32_t)(EAX));
  /* 105b109e push 1 */
  push32((uint32_t)(0x1u));
  /* 105b10a0 call 0x105b4990 */
  push32(0x105b10a5u); f_105b4990();
  /* 105b10a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b10a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b10ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b10ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b10b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b10b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b10b6 push edx */
  push32((uint32_t)(EDX));
  /* 105b10b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 105b10b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b10bc push eax */
  push32((uint32_t)(EAX));
  /* 105b10bd push 1 */
  push32((uint32_t)(0x1u));
  /* 105b10bf call 0x105b4990 */
  push32(0x105b10c4u); f_105b4990();
  /* 105b10c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b10c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b10ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b10cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b10cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b10d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b10d5 push edx */
  push32((uint32_t)(EDX));
  /* 105b10d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 105b10d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b10db push eax */
  push32((uint32_t)(EAX));
  /* 105b10dc push 1 */
  push32((uint32_t)(0x1u));
  /* 105b10de call 0x105b4990 */
  push32(0x105b10e3u); f_105b4990();
  /* 105b10e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b10e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b10e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b10eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b10ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b10f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b10f4 push edx */
  push32((uint32_t)(EDX));
  /* 105b10f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 105b10f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b10fa push eax */
  push32((uint32_t)(EAX));
  /* 105b10fb push 1 */
  push32((uint32_t)(0x1u));
  /* 105b10fd call 0x105b4990 */
  push32(0x105b1102u); f_105b4990();
  /* 105b1102 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1108 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b110a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b110d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1110 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1113 push edx */
  push32((uint32_t)(EDX));
  /* 105b1114 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 105b1116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1119 push eax */
  push32((uint32_t)(EAX));
  /* 105b111a push 1 */
  push32((uint32_t)(0x1u));
  /* 105b111c call 0x105b4990 */
  push32(0x105b1121u); f_105b4990();
  /* 105b1121 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1124 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1127 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1129 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b112c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b112f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1132 push edx */
  push32((uint32_t)(EDX));
  /* 105b1133 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 105b1135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1138 push eax */
  push32((uint32_t)(EAX));
  /* 105b1139 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b113b call 0x105b4990 */
  push32(0x105b1140u); f_105b4990();
  /* 105b1140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1143 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1146 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1148 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b114b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b114e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1151 push edx */
  push32((uint32_t)(EDX));
  /* 105b1152 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 105b1154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1157 push eax */
  push32((uint32_t)(EAX));
  /* 105b1158 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b115a call 0x105b4990 */
  push32(0x105b115fu); f_105b4990();
  /* 105b115f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1162 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1165 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1167 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b116a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b116d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1170 push edx */
  push32((uint32_t)(EDX));
  /* 105b1171 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 105b1173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1176 push eax */
  push32((uint32_t)(EAX));
  /* 105b1177 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1179 call 0x105b4990 */
  push32(0x105b117eu); f_105b4990();
  /* 105b117e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1184 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1186 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b118c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b118f push edx */
  push32((uint32_t)(EDX));
  /* 105b1190 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 105b1192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1195 push eax */
  push32((uint32_t)(EAX));
  /* 105b1196 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1198 call 0x105b4990 */
  push32(0x105b119du); f_105b4990();
  /* 105b119d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b11a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b11a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b11a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b11ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11ae push edx */
  push32((uint32_t)(EDX));
  /* 105b11af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 105b11b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b11b4 push eax */
  push32((uint32_t)(EAX));
  /* 105b11b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b11b7 call 0x105b4990 */
  push32(0x105b11bcu); f_105b4990();
  /* 105b11bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b11c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b11c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b11c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b11ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11cd push edx */
  push32((uint32_t)(EDX));
  /* 105b11ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 105b11d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b11d3 push eax */
  push32((uint32_t)(EAX));
  /* 105b11d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b11d6 call 0x105b4990 */
  push32(0x105b11dbu); f_105b4990();
  /* 105b11db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b11e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b11e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b11e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b11e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11ec push edx */
  push32((uint32_t)(EDX));
  /* 105b11ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 105b11ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b11f2 push eax */
  push32((uint32_t)(EAX));
  /* 105b11f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b11f5 call 0x105b4990 */
  push32(0x105b11fau); f_105b4990();
  /* 105b11fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b11fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1200 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1208 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b120b push edx */
  push32((uint32_t)(EDX));
  /* 105b120c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 105b120e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1211 push eax */
  push32((uint32_t)(EAX));
  /* 105b1212 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1214 call 0x105b4990 */
  push32(0x105b1219u); f_105b4990();
  /* 105b1219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b121c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b121f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1221 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1227 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b122a push edx */
  push32((uint32_t)(EDX));
  /* 105b122b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 105b122d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1230 push eax */
  push32((uint32_t)(EAX));
  /* 105b1231 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1233 call 0x105b4990 */
  push32(0x105b1238u); f_105b4990();
  /* 105b1238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b123b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b123e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1246 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1249 push edx */
  push32((uint32_t)(EDX));
  /* 105b124a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 105b124c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b124f push eax */
  push32((uint32_t)(EAX));
  /* 105b1250 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1252 call 0x105b4990 */
  push32(0x105b1257u); f_105b4990();
  /* 105b1257 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b125a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b125d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b125f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1265 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1268 push edx */
  push32((uint32_t)(EDX));
  /* 105b1269 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 105b126b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b126e push eax */
  push32((uint32_t)(EAX));
  /* 105b126f push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1271 call 0x105b4990 */
  push32(0x105b1276u); f_105b4990();
  /* 105b1276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1279 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b127c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b127e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1284 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1287 push edx */
  push32((uint32_t)(EDX));
  /* 105b1288 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 105b128a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b128d push eax */
  push32((uint32_t)(EAX));
  /* 105b128e push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1290 call 0x105b4990 */
  push32(0x105b1295u); f_105b4990();
  /* 105b1295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1298 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b129b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b129d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b12a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b12a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b12a6 push edx */
  push32((uint32_t)(EDX));
  /* 105b12a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 105b12a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b12ac push eax */
  push32((uint32_t)(EAX));
  /* 105b12ad push 1 */
  push32((uint32_t)(0x1u));
  /* 105b12af call 0x105b4990 */
  push32(0x105b12b4u); f_105b4990();
  /* 105b12b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b12b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b12ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b12bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b12bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b12c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b12c8 push edx */
  push32((uint32_t)(EDX));
  /* 105b12c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 105b12cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b12ce push eax */
  push32((uint32_t)(EAX));
  /* 105b12cf push 1 */
  push32((uint32_t)(0x1u));
  /* 105b12d1 call 0x105b4990 */
  push32(0x105b12d6u); f_105b4990();
  /* 105b12d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b12d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b12dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b12de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b12e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b12e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b12ea push edx */
  push32((uint32_t)(EDX));
  /* 105b12eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105b12ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b12f0 push eax */
  push32((uint32_t)(EAX));
  /* 105b12f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b12f3 call 0x105b4990 */
  push32(0x105b12f8u); f_105b4990();
  /* 105b12f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b12fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b12fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1300 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1306 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b130c push edx */
  push32((uint32_t)(EDX));
  /* 105b130d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105b130f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1312 push eax */
  push32((uint32_t)(EAX));
  /* 105b1313 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1315 call 0x105b4990 */
  push32(0x105b131au); f_105b4990();
  /* 105b131a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b131d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1320 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1322 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1328 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b132e push edx */
  push32((uint32_t)(EDX));
  /* 105b132f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 105b1331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1334 push eax */
  push32((uint32_t)(EAX));
  /* 105b1335 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1337 call 0x105b4990 */
  push32(0x105b133cu); f_105b4990();
  /* 105b133c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b133f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1342 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1344 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1347 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b134a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1350 push edx */
  push32((uint32_t)(EDX));
  /* 105b1351 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 105b1353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1356 push eax */
  push32((uint32_t)(EAX));
  /* 105b1357 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1359 call 0x105b4990 */
  push32(0x105b135eu); f_105b4990();
  /* 105b135e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1361 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1364 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1366 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b136c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1372 push edx */
  push32((uint32_t)(EDX));
  /* 105b1373 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 105b1375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1378 push eax */
  push32((uint32_t)(EAX));
  /* 105b1379 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b137b call 0x105b4990 */
  push32(0x105b1380u); f_105b4990();
  /* 105b1380 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1383 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1386 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1388 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b138b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b138e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1394 push edx */
  push32((uint32_t)(EDX));
  /* 105b1395 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 105b1397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b139a push eax */
  push32((uint32_t)(EAX));
  /* 105b139b push 1 */
  push32((uint32_t)(0x1u));
  /* 105b139d call 0x105b4990 */
  push32(0x105b13a2u); f_105b4990();
  /* 105b13a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b13a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b13a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b13aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b13ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b13b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b13b6 push edx */
  push32((uint32_t)(EDX));
  /* 105b13b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 105b13b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b13bc push eax */
  push32((uint32_t)(EAX));
  /* 105b13bd push 1 */
  push32((uint32_t)(0x1u));
  /* 105b13bf call 0x105b4990 */
  push32(0x105b13c4u); f_105b4990();
  /* 105b13c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b13c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b13ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b13cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b13cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b13d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b13d8 push edx */
  push32((uint32_t)(EDX));
  /* 105b13d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 105b13db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b13de push eax */
  push32((uint32_t)(EAX));
  /* 105b13df push 1 */
  push32((uint32_t)(0x1u));
  /* 105b13e1 call 0x105b4990 */
  push32(0x105b13e6u); f_105b4990();
  /* 105b13e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b13e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b13ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b13ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b13f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b13f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b13fa push edx */
  push32((uint32_t)(EDX));
  /* 105b13fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 105b13fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1400 push eax */
  push32((uint32_t)(EAX));
  /* 105b1401 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1403 call 0x105b4990 */
  push32(0x105b1408u); f_105b4990();
  /* 105b1408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b140b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b140e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1416 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b141c push edx */
  push32((uint32_t)(EDX));
  /* 105b141d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 105b1422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1425 push eax */
  push32((uint32_t)(EAX));
  /* 105b1426 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1428 call 0x105b4990 */
  push32(0x105b142du); f_105b4990();
  /* 105b142d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1430 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b1433 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1435 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b1438 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_105b143b:;
  /* 105b143b mov esp, ebp */
  ESP = (EBP);
  /* 105b143d pop ebp */
  EBP = (pop32());
  /* 105b143e ret  */
  ESPCHK(0x105b0eb0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x105b1440 (779 bytes, 265 insns) */
void f_105b1440(void) {
  FTRACE(0x105b1440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1440 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1441 mov ebp, esp */
  EBP = (ESP);
  /* 105b1443 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1447 jne 0x105b144e */
  if (!C.zf) goto L_105b144e;
  /* 105b1449 jmp 0x105b1749 */
  goto L_105b1749;
L_105b144e:;
  /* 105b144e push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1453 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105b1456 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1457 call 0x105a8480 */
  push32(0x105b145cu); f_105a8480();
  /* 105b145c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b145f push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1464 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105b1467 push eax */
  push32((uint32_t)(EAX));
  /* 105b1468 call 0x105a8480 */
  push32(0x105b146du); f_105a8480();
  /* 105b146d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1470 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1475 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105b1478 push edx */
  push32((uint32_t)(EDX));
  /* 105b1479 call 0x105a8480 */
  push32(0x105b147eu); f_105a8480();
  /* 105b147e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1481 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1486 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105b1489 push ecx */
  push32((uint32_t)(ECX));
  /* 105b148a call 0x105a8480 */
  push32(0x105b148fu); f_105a8480();
  /* 105b148f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1492 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1497 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105b149a push eax */
  push32((uint32_t)(EAX));
  /* 105b149b call 0x105a8480 */
  push32(0x105b14a0u); f_105a8480();
  /* 105b14a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b14a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b14a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b14a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105b14ab push edx */
  push32((uint32_t)(EDX));
  /* 105b14ac call 0x105a8480 */
  push32(0x105b14b1u); f_105a8480();
  /* 105b14b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b14b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b14b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b14b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b14bb push ecx */
  push32((uint32_t)(ECX));
  /* 105b14bc call 0x105a8480 */
  push32(0x105b14c1u); f_105a8480();
  /* 105b14c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b14c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b14c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b14c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 105b14cc push eax */
  push32((uint32_t)(EAX));
  /* 105b14cd call 0x105a8480 */
  push32(0x105b14d2u); f_105a8480();
  /* 105b14d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b14d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b14d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b14da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 105b14dd push edx */
  push32((uint32_t)(EDX));
  /* 105b14de call 0x105a8480 */
  push32(0x105b14e3u); f_105a8480();
  /* 105b14e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b14e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b14e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b14eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 105b14ee push ecx */
  push32((uint32_t)(ECX));
  /* 105b14ef call 0x105a8480 */
  push32(0x105b14f4u); f_105a8480();
  /* 105b14f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b14f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b14f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b14fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 105b14ff push eax */
  push32((uint32_t)(EAX));
  /* 105b1500 call 0x105a8480 */
  push32(0x105b1505u); f_105a8480();
  /* 105b1505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1508 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b150a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b150d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 105b1510 push edx */
  push32((uint32_t)(EDX));
  /* 105b1511 call 0x105a8480 */
  push32(0x105b1516u); f_105a8480();
  /* 105b1516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1519 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b151b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b151e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 105b1521 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1522 call 0x105a8480 */
  push32(0x105b1527u); f_105a8480();
  /* 105b1527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b152a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b152c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b152f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b1532 push eax */
  push32((uint32_t)(EAX));
  /* 105b1533 call 0x105a8480 */
  push32(0x105b1538u); f_105a8480();
  /* 105b1538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b153b push 2 */
  push32((uint32_t)(0x2u));
  /* 105b153d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1540 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 105b1543 push edx */
  push32((uint32_t)(EDX));
  /* 105b1544 call 0x105a8480 */
  push32(0x105b1549u); f_105a8480();
  /* 105b1549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b154c push 2 */
  push32((uint32_t)(0x2u));
  /* 105b154e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1551 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 105b1554 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1555 call 0x105a8480 */
  push32(0x105b155au); f_105a8480();
  /* 105b155a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b155d push 2 */
  push32((uint32_t)(0x2u));
  /* 105b155f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1562 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 105b1565 push eax */
  push32((uint32_t)(EAX));
  /* 105b1566 call 0x105a8480 */
  push32(0x105b156bu); f_105a8480();
  /* 105b156b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b156e push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1573 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 105b1576 push edx */
  push32((uint32_t)(EDX));
  /* 105b1577 call 0x105a8480 */
  push32(0x105b157cu); f_105a8480();
  /* 105b157c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b157f push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1584 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 105b1587 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1588 call 0x105a8480 */
  push32(0x105b158du); f_105a8480();
  /* 105b158d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1590 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1592 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1595 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 105b1598 push eax */
  push32((uint32_t)(EAX));
  /* 105b1599 call 0x105a8480 */
  push32(0x105b159eu); f_105a8480();
  /* 105b159e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b15a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b15a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b15a6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105b15a9 push edx */
  push32((uint32_t)(EDX));
  /* 105b15aa call 0x105a8480 */
  push32(0x105b15afu); f_105a8480();
  /* 105b15af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b15b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b15b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b15b7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 105b15ba push ecx */
  push32((uint32_t)(ECX));
  /* 105b15bb call 0x105a8480 */
  push32(0x105b15c0u); f_105a8480();
  /* 105b15c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b15c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b15c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b15c8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 105b15cb push eax */
  push32((uint32_t)(EAX));
  /* 105b15cc call 0x105a8480 */
  push32(0x105b15d1u); f_105a8480();
  /* 105b15d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b15d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b15d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b15d9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 105b15dc push edx */
  push32((uint32_t)(EDX));
  /* 105b15dd call 0x105a8480 */
  push32(0x105b15e2u); f_105a8480();
  /* 105b15e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b15e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b15e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b15ea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 105b15ed push ecx */
  push32((uint32_t)(ECX));
  /* 105b15ee call 0x105a8480 */
  push32(0x105b15f3u); f_105a8480();
  /* 105b15f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b15f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b15f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b15fb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 105b15fe push eax */
  push32((uint32_t)(EAX));
  /* 105b15ff call 0x105a8480 */
  push32(0x105b1604u); f_105a8480();
  /* 105b1604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1607 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b160c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 105b160f push edx */
  push32((uint32_t)(EDX));
  /* 105b1610 call 0x105a8480 */
  push32(0x105b1615u); f_105a8480();
  /* 105b1615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1618 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b161a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b161d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 105b1620 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1621 call 0x105a8480 */
  push32(0x105b1626u); f_105a8480();
  /* 105b1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1629 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b162b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b162e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 105b1631 push eax */
  push32((uint32_t)(EAX));
  /* 105b1632 call 0x105a8480 */
  push32(0x105b1637u); f_105a8480();
  /* 105b1637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b163a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b163c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b163f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 105b1642 push edx */
  push32((uint32_t)(EDX));
  /* 105b1643 call 0x105a8480 */
  push32(0x105b1648u); f_105a8480();
  /* 105b1648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b164b push 2 */
  push32((uint32_t)(0x2u));
  /* 105b164d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1650 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 105b1653 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1654 call 0x105a8480 */
  push32(0x105b1659u); f_105a8480();
  /* 105b1659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b165c push 2 */
  push32((uint32_t)(0x2u));
  /* 105b165e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1661 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 105b1664 push eax */
  push32((uint32_t)(EAX));
  /* 105b1665 call 0x105a8480 */
  push32(0x105b166au); f_105a8480();
  /* 105b166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b166d push 2 */
  push32((uint32_t)(0x2u));
  /* 105b166f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1672 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 105b1678 push edx */
  push32((uint32_t)(EDX));
  /* 105b1679 call 0x105a8480 */
  push32(0x105b167eu); f_105a8480();
  /* 105b167e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1681 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1686 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 105b168c push ecx */
  push32((uint32_t)(ECX));
  /* 105b168d call 0x105a8480 */
  push32(0x105b1692u); f_105a8480();
  /* 105b1692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1695 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b169a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 105b16a0 push eax */
  push32((uint32_t)(EAX));
  /* 105b16a1 call 0x105a8480 */
  push32(0x105b16a6u); f_105a8480();
  /* 105b16a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b16a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b16ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b16ae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 105b16b4 push edx */
  push32((uint32_t)(EDX));
  /* 105b16b5 call 0x105a8480 */
  push32(0x105b16bau); f_105a8480();
  /* 105b16ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b16bd push 2 */
  push32((uint32_t)(0x2u));
  /* 105b16bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b16c2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 105b16c8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b16c9 call 0x105a8480 */
  push32(0x105b16ceu); f_105a8480();
  /* 105b16ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b16d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b16d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b16d6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 105b16dc push eax */
  push32((uint32_t)(EAX));
  /* 105b16dd call 0x105a8480 */
  push32(0x105b16e2u); f_105a8480();
  /* 105b16e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b16e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b16e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b16ea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 105b16f0 push edx */
  push32((uint32_t)(EDX));
  /* 105b16f1 call 0x105a8480 */
  push32(0x105b16f6u); f_105a8480();
  /* 105b16f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b16f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b16fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b16fe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 105b1704 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1705 call 0x105a8480 */
  push32(0x105b170au); f_105a8480();
  /* 105b170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b170d push 2 */
  push32((uint32_t)(0x2u));
  /* 105b170f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1712 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 105b1718 push eax */
  push32((uint32_t)(EAX));
  /* 105b1719 call 0x105a8480 */
  push32(0x105b171eu); f_105a8480();
  /* 105b171e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1721 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1723 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1726 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 105b172c push edx */
  push32((uint32_t)(EDX));
  /* 105b172d call 0x105a8480 */
  push32(0x105b1732u); f_105a8480();
  /* 105b1732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1735 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b173a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 105b1740 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1741 call 0x105a8480 */
  push32(0x105b1746u); f_105a8480();
  /* 105b1746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b1749:;
  /* 105b1749 pop ebp */
  EBP = (pop32());
  /* 105b174a ret  */
  ESPCHK(0x105b1440u, _esp0);
  ESP += 4; return;
}

/* FUN_10011750 @ 0x105b1750 (678 bytes, 180 insns) */
void f_105b1750(void) {
  FTRACE(0x105b1750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1750 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1751 mov ebp, esp */
  EBP = (ESP);
  /* 105b1753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b1756 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b175d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b175f mov ax, word ptr [0x105d2bfe] */
  AX = (r16((uint32_t)(0x105d2bfe)));
  /* 105b1765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b1768 cmp dword ptr [0x105d2bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b176f je 0x105b18ca */
  if (C.zf) goto L_105b18ca;
  /* 105b1775 push 0x105d2bcc */
  push32((uint32_t)(0x105d2bccu));
  /* 105b177a push 0xe */
  push32((uint32_t)(0xeu));
  /* 105b177c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b177f push ecx */
  push32((uint32_t)(ECX));
  /* 105b1780 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1782 call 0x105b4990 */
  push32(0x105b1787u); f_105b4990();
  /* 105b1787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b178a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b178d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105b178f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b1792 push 0x105d2bd0 */
  push32((uint32_t)(0x105d2bd0u));
  /* 105b1797 push 0xf */
  push32((uint32_t)(0xfu));
  /* 105b1799 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b179c push eax */
  push32((uint32_t)(EAX));
  /* 105b179d push 1 */
  push32((uint32_t)(0x1u));
  /* 105b179f call 0x105b4990 */
  push32(0x105b17a4u); f_105b4990();
  /* 105b17a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b17a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b17aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b17ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b17af push 0x105d2bd4 */
  push32((uint32_t)(0x105d2bd4u));
  /* 105b17b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105b17b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b17b9 push edx */
  push32((uint32_t)(EDX));
  /* 105b17ba push 1 */
  push32((uint32_t)(0x1u));
  /* 105b17bc call 0x105b4990 */
  push32(0x105b17c1u); f_105b4990();
  /* 105b17c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b17c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b17c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b17c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b17cc mov edx, dword ptr [0x105d2bd4] */
  EDX = (r32((uint32_t)(0x105d2bd4)));
  /* 105b17d2 push edx */
  push32((uint32_t)(EDX));
  /* 105b17d3 call 0x105b1a00 */
  push32(0x105b17d8u); f_105b1a00();
  /* 105b17d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b17db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b17df je 0x105b1839 */
  if (C.zf) goto L_105b1839;
  /* 105b17e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b17e3 mov eax, dword ptr [0x105d2bcc] */
  EAX = (r32((uint32_t)(0x105d2bcc)));
  /* 105b17e8 push eax */
  push32((uint32_t)(EAX));
  /* 105b17e9 call 0x105a8480 */
  push32(0x105b17eeu); f_105a8480();
  /* 105b17ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b17f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b17f3 mov ecx, dword ptr [0x105d2bd0] */
  ECX = (r32((uint32_t)(0x105d2bd0)));
  /* 105b17f9 push ecx */
  push32((uint32_t)(ECX));
  /* 105b17fa call 0x105a8480 */
  push32(0x105b17ffu); f_105a8480();
  /* 105b17ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1802 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1804 mov edx, dword ptr [0x105d2bd4] */
  EDX = (r32((uint32_t)(0x105d2bd4)));
  /* 105b180a push edx */
  push32((uint32_t)(EDX));
  /* 105b180b call 0x105a8480 */
  push32(0x105b1810u); f_105a8480();
  /* 105b1810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1813 mov dword ptr [0x105d2bcc], 0 */
  w32((uint32_t)(0x105d2bcc), (0x0u));
  /* 105b181d mov dword ptr [0x105d2bd0], 0 */
  w32((uint32_t)(0x105d2bd0), (0x0u));
  /* 105b1827 mov dword ptr [0x105d2bd4], 0 */
  w32((uint32_t)(0x105d2bd4), (0x0u));
  /* 105b1831 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b1834 jmp 0x105b19f2 */
  goto L_105b19f2;
L_105b1839:;
  /* 105b1839 mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b183e cmp dword ptr [eax], 0x105d1d60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x105d1d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1844 je 0x105b1880 */
  if (C.zf) goto L_105b1880;
  /* 105b1846 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1848 mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b184e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b1850 push edx */
  push32((uint32_t)(EDX));
  /* 105b1851 call 0x105a8480 */
  push32(0x105b1856u); f_105a8480();
  /* 105b1856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1859 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b185b mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1860 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105b1863 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1864 call 0x105a8480 */
  push32(0x105b1869u); f_105a8480();
  /* 105b1869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b186c push 2 */
  push32((uint32_t)(0x2u));
  /* 105b186e mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1874 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105b1877 push eax */
  push32((uint32_t)(EAX));
  /* 105b1878 call 0x105a8480 */
  push32(0x105b187du); f_105a8480();
  /* 105b187d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b1880:;
  /* 105b1880 mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1886 mov edx, dword ptr [0x105d2bcc] */
  EDX = (r32((uint32_t)(0x105d2bcc)));
  /* 105b188c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105b188e mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1893 mov ecx, dword ptr [0x105d2bd0] */
  ECX = (r32((uint32_t)(0x105d2bd0)));
  /* 105b1899 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105b189c mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b18a2 mov eax, dword ptr [0x105d2bd4] */
  EAX = (r32((uint32_t)(0x105d2bd4)));
  /* 105b18a7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105b18aa mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b18b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b18b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b18b4 mov byte ptr [0x105d115c], al */
  w8((uint32_t)(0x105d115c), (AL));
  /* 105b18b9 mov dword ptr [0x105d1160], 1 */
  w32((uint32_t)(0x105d1160), (0x1u));
  /* 105b18c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b18c5 jmp 0x105b19f2 */
  goto L_105b19f2;
L_105b18ca:;
  /* 105b18ca push 2 */
  push32((uint32_t)(0x2u));
  /* 105b18cc mov ecx, dword ptr [0x105d2bcc] */
  ECX = (r32((uint32_t)(0x105d2bcc)));
  /* 105b18d2 push ecx */
  push32((uint32_t)(ECX));
  /* 105b18d3 call 0x105a8480 */
  push32(0x105b18d8u); f_105a8480();
  /* 105b18d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b18db push 2 */
  push32((uint32_t)(0x2u));
  /* 105b18dd mov edx, dword ptr [0x105d2bd0] */
  EDX = (r32((uint32_t)(0x105d2bd0)));
  /* 105b18e3 push edx */
  push32((uint32_t)(EDX));
  /* 105b18e4 call 0x105a8480 */
  push32(0x105b18e9u); f_105a8480();
  /* 105b18e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b18ec push 2 */
  push32((uint32_t)(0x2u));
  /* 105b18ee mov eax, dword ptr [0x105d2bd4] */
  EAX = (r32((uint32_t)(0x105d2bd4)));
  /* 105b18f3 push eax */
  push32((uint32_t)(EAX));
  /* 105b18f4 call 0x105a8480 */
  push32(0x105b18f9u); f_105a8480();
  /* 105b18f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b18fc mov dword ptr [0x105d2bcc], 0 */
  w32((uint32_t)(0x105d2bcc), (0x0u));
  /* 105b1906 mov dword ptr [0x105d2bd0], 0 */
  w32((uint32_t)(0x105d2bd0), (0x0u));
  /* 105b1910 mov dword ptr [0x105d2bd4], 0 */
  w32((uint32_t)(0x105d2bd4), (0x0u));
  /* 105b191a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 105b191f push 0x105cebf0 */
  push32((uint32_t)(0x105cebf0u));
  /* 105b1924 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1926 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1928 call 0x105a79f0 */
  push32(0x105b192du); f_105a79f0();
  /* 105b192d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1930 mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1936 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b1938 mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b193e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1941 jne 0x105b194b */
  if (!C.zf) goto L_105b194b;
  /* 105b1943 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b1946 jmp 0x105b19f2 */
  goto L_105b19f2;
L_105b194b:;
  /* 105b194b push 0x105ceb90 */
  push32((uint32_t)(0x105ceb90u));
  /* 105b1950 mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1955 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b1957 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1958 call 0x105aa9a0 */
  push32(0x105b195du); f_105aa9a0();
  /* 105b195d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1960 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 105b1965 push 0x105cebf0 */
  push32((uint32_t)(0x105cebf0u));
  /* 105b196a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b196c push 2 */
  push32((uint32_t)(0x2u));
  /* 105b196e call 0x105a79f0 */
  push32(0x105b1973u); f_105a79f0();
  /* 105b1973 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1976 mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b197c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105b197f mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1984 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1988 jne 0x105b198f */
  if (!C.zf) goto L_105b198f;
  /* 105b198a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b198d jmp 0x105b19f2 */
  goto L_105b19f2;
L_105b198f:;
  /* 105b198f mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1995 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105b1998 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105b199b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 105b19a0 push 0x105cebf0 */
  push32((uint32_t)(0x105cebf0u));
  /* 105b19a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b19a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b19a9 call 0x105a79f0 */
  push32(0x105b19aeu); f_105a79f0();
  /* 105b19ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b19b1 mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b19b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 105b19ba mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b19c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b19c4 jne 0x105b19cb */
  if (!C.zf) goto L_105b19cb;
  /* 105b19c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b19c9 jmp 0x105b19f2 */
  goto L_105b19f2;
L_105b19cb:;
  /* 105b19cb mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b19d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105b19d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105b19d6 mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b19dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b19de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b19e0 mov byte ptr [0x105d115c], cl */
  w8((uint32_t)(0x105d115c), (CL));
  /* 105b19e6 mov dword ptr [0x105d1160], 1 */
  w32((uint32_t)(0x105d1160), (0x1u));
  /* 105b19f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b19f2:;
  /* 105b19f2 mov esp, ebp */
  ESP = (EBP);
  /* 105b19f4 pop ebp */
  EBP = (pop32());
  /* 105b19f5 ret  */
  ESPCHK(0x105b1750u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x105b1a00 (125 bytes, 49 insns) */
void f_105b1a00(void) {
  FTRACE(0x105b1a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1a00 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1a01 mov ebp, esp */
  EBP = (ESP);
  /* 105b1a03 push ecx */
  push32((uint32_t)(ECX));
L_105b1a04:;
  /* 105b1a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b1a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b1a0c je 0x105b1a79 */
  if (C.zf) goto L_105b1a79;
  /* 105b1a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b1a14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1a17 jl 0x105b1a3d */
  if ((C.sf!=C.of)) goto L_105b1a3d;
  /* 105b1a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b1a1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1a22 jg 0x105b1a3d */
  if ((!C.zf&&C.sf==C.of)) goto L_105b1a3d;
  /* 105b1a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b1a2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b1a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105b1a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1a38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b1a3b jmp 0x105b1a77 */
  goto L_105b1a77;
L_105b1a3d:;
  /* 105b1a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b1a43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1a46 jne 0x105b1a6e */
  if (!C.zf) goto L_105b1a6e;
  /* 105b1a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b1a4e:;
  /* 105b1a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1a54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105b1a57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b1a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1a5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b1a62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1a65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b1a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b1a6a jne 0x105b1a4e */
  if (!C.zf) goto L_105b1a4e;
  /* 105b1a6c jmp 0x105b1a77 */
  goto L_105b1a77;
L_105b1a6e:;
  /* 105b1a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1a74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105b1a77:;
  /* 105b1a77 jmp 0x105b1a04 */
  goto L_105b1a04;
L_105b1a79:;
  /* 105b1a79 mov esp, ebp */
  ESP = (EBP);
  /* 105b1a7b pop ebp */
  EBP = (pop32());
  /* 105b1a7c ret  */
  ESPCHK(0x105b1a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x105b1a80 (304 bytes, 85 insns) */
void f_105b1a80(void) {
  FTRACE(0x105b1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1a80 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1a81 mov ebp, esp */
  EBP = (ESP);
  /* 105b1a83 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1a84 cmp dword ptr [0x105d2bac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1a8b je 0x105b1b4c */
  if (C.zf) goto L_105b1b4c;
  /* 105b1a91 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 105b1a93 push 0x105cebfc */
  push32((uint32_t)(0x105cebfcu));
  /* 105b1a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1a9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105b1a9c push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1a9e call 0x105a7e00 */
  push32(0x105b1aa3u); f_105a7e00();
  /* 105b1aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1aa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b1aa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1aad jne 0x105b1ab9 */
  if (!C.zf) goto L_105b1ab9;
  /* 105b1aaf mov eax, 1 */
  EAX = (0x1u);
  /* 105b1ab4 jmp 0x105b1bac */
  goto L_105b1bac;
L_105b1ab9:;
  /* 105b1ab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1abc push eax */
  push32((uint32_t)(EAX));
  /* 105b1abd call 0x105b1bb0 */
  push32(0x105b1ac2u); f_105b1bb0();
  /* 105b1ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b1ac7 je 0x105b1aed */
  if (C.zf) goto L_105b1aed;
  /* 105b1ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1acc push ecx */
  push32((uint32_t)(ECX));
  /* 105b1acd call 0x105b1e40 */
  push32(0x105b1ad2u); f_105b1e40();
  /* 105b1ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1ad7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1ada push edx */
  push32((uint32_t)(EDX));
  /* 105b1adb call 0x105a8480 */
  push32(0x105b1ae0u); f_105a8480();
  /* 105b1ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ae3 mov eax, 1 */
  EAX = (0x1u);
  /* 105b1ae8 jmp 0x105b1bac */
  goto L_105b1bac;
L_105b1aed:;
  /* 105b1aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1af0 mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1af6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b1af8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b1afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1afd mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1b03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105b1b06 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105b1b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1b0c mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1b12 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105b1b15 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 105b1b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1b1b mov dword ptr [0x105d1d98], eax */
  w32((uint32_t)(0x105d1d98), (EAX));
  /* 105b1b20 mov ecx, dword ptr [0x105d2bd8] */
  ECX = (r32((uint32_t)(0x105d2bd8)));
  /* 105b1b26 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1b27 call 0x105b1e40 */
  push32(0x105b1b2cu); f_105b1e40();
  /* 105b1b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1b2f push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1b31 mov edx, dword ptr [0x105d2bd8] */
  EDX = (r32((uint32_t)(0x105d2bd8)));
  /* 105b1b37 push edx */
  push32((uint32_t)(EDX));
  /* 105b1b38 call 0x105a8480 */
  push32(0x105b1b3du); f_105a8480();
  /* 105b1b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1b43 mov dword ptr [0x105d2bd8], eax */
  w32((uint32_t)(0x105d2bd8), (EAX));
  /* 105b1b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b1b4a jmp 0x105b1bac */
  goto L_105b1bac;
L_105b1b4c:;
  /* 105b1b4c mov ecx, dword ptr [0x105d1d98] */
  ECX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1b52 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b1b54 mov dword ptr [0x105d1d68], edx */
  w32((uint32_t)(0x105d1d68), (EDX));
  /* 105b1b5a mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1b5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105b1b62 mov dword ptr [0x105d1d6c], ecx */
  w32((uint32_t)(0x105d1d6c), (ECX));
  /* 105b1b68 mov edx, dword ptr [0x105d1d98] */
  EDX = (r32((uint32_t)(0x105d1d98)));
  /* 105b1b6e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105b1b71 mov dword ptr [0x105d1d70], eax */
  w32((uint32_t)(0x105d1d70), (EAX));
  /* 105b1b76 mov dword ptr [0x105d1d98], 0x105d1d68 */
  w32((uint32_t)(0x105d1d98), (0x105d1d68u));
  /* 105b1b80 mov ecx, dword ptr [0x105d2bd8] */
  ECX = (r32((uint32_t)(0x105d2bd8)));
  /* 105b1b86 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1b87 call 0x105b1e40 */
  push32(0x105b1b8cu); f_105b1e40();
  /* 105b1b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1b91 mov edx, dword ptr [0x105d2bd8] */
  EDX = (r32((uint32_t)(0x105d2bd8)));
  /* 105b1b97 push edx */
  push32((uint32_t)(EDX));
  /* 105b1b98 call 0x105a8480 */
  push32(0x105b1b9du); f_105a8480();
  /* 105b1b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ba0 mov dword ptr [0x105d2bd8], 0 */
  w32((uint32_t)(0x105d2bd8), (0x0u));
  /* 105b1baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b1bac:;
  /* 105b1bac mov esp, ebp */
  ESP = (EBP);
  /* 105b1bae pop ebp */
  EBP = (pop32());
  /* 105b1baf ret  */
  ESPCHK(0x105b1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bb0 @ 0x105b1bb0 (525 bytes, 200 insns) */
void f_105b1bb0(void) {
  FTRACE(0x105b1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 105b1bb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b1bb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b1bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b1bbf mov ax, word ptr [0x105d2bf8] */
  AX = (r16((uint32_t)(0x105d2bf8)));
  /* 105b1bc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b1bc8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1bcc jne 0x105b1bd6 */
  if (!C.zf) goto L_105b1bd6;
  /* 105b1bce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b1bd1 jmp 0x105b1db9 */
  goto L_105b1db9;
L_105b1bd6:;
  /* 105b1bd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1bd9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1bdc push ecx */
  push32((uint32_t)(ECX));
  /* 105b1bdd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 105b1bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1be2 push edx */
  push32((uint32_t)(EDX));
  /* 105b1be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1be5 call 0x105b4990 */
  push32(0x105b1beau); f_105b4990();
  /* 105b1bea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1bed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1bf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1bf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1bf8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1bfb push edx */
  push32((uint32_t)(EDX));
  /* 105b1bfc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 105b1bfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1c01 push eax */
  push32((uint32_t)(EAX));
  /* 105b1c02 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1c04 call 0x105b4990 */
  push32(0x105b1c09u); f_105b4990();
  /* 105b1c09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1c0f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1c11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1c17 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c1a push edx */
  push32((uint32_t)(EDX));
  /* 105b1c1b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 105b1c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1c20 push eax */
  push32((uint32_t)(EAX));
  /* 105b1c21 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1c23 call 0x105b4990 */
  push32(0x105b1c28u); f_105b4990();
  /* 105b1c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1c2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1c30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1c33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1c36 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c39 push edx */
  push32((uint32_t)(EDX));
  /* 105b1c3a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 105b1c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1c3f push eax */
  push32((uint32_t)(EAX));
  /* 105b1c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1c42 call 0x105b4990 */
  push32(0x105b1c47u); f_105b4990();
  /* 105b1c47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1c4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1c4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1c55 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c58 push edx */
  push32((uint32_t)(EDX));
  /* 105b1c59 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 105b1c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1c5e push eax */
  push32((uint32_t)(EAX));
  /* 105b1c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1c61 call 0x105b4990 */
  push32(0x105b1c66u); f_105b4990();
  /* 105b1c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1c6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1c6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1c71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1c74 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b1c77 push eax */
  push32((uint32_t)(EAX));
  /* 105b1c78 call 0x105b1dc0 */
  push32(0x105b1c7du); f_105b1dc0();
  /* 105b1c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1c83 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c86 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1c87 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 105b1c89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1c8c push edx */
  push32((uint32_t)(EDX));
  /* 105b1c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1c8f call 0x105b4990 */
  push32(0x105b1c94u); f_105b4990();
  /* 105b1c94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1c9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1c9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1c9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1ca2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ca5 push edx */
  push32((uint32_t)(EDX));
  /* 105b1ca6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 105b1ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1cab push eax */
  push32((uint32_t)(EAX));
  /* 105b1cac push 1 */
  push32((uint32_t)(0x1u));
  /* 105b1cae call 0x105b4990 */
  push32(0x105b1cb3u); f_105b4990();
  /* 105b1cb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1cb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1cb9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1cbb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1cbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1cc1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1cc4 push edx */
  push32((uint32_t)(EDX));
  /* 105b1cc5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 105b1cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1cca push eax */
  push32((uint32_t)(EAX));
  /* 105b1ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1ccd call 0x105b4990 */
  push32(0x105b1cd2u); f_105b4990();
  /* 105b1cd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1cd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1cda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1ce0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ce3 push edx */
  push32((uint32_t)(EDX));
  /* 105b1ce4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105b1ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1ce9 push eax */
  push32((uint32_t)(EAX));
  /* 105b1cea push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1cec call 0x105b4990 */
  push32(0x105b1cf1u); f_105b4990();
  /* 105b1cf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1cf4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1cf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1cf9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1cff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d02 push edx */
  push32((uint32_t)(EDX));
  /* 105b1d03 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 105b1d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1d08 push eax */
  push32((uint32_t)(EAX));
  /* 105b1d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1d0b call 0x105b4990 */
  push32(0x105b1d10u); f_105b4990();
  /* 105b1d10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1d16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1d18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1d1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1d1e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d21 push edx */
  push32((uint32_t)(EDX));
  /* 105b1d22 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 105b1d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1d27 push eax */
  push32((uint32_t)(EAX));
  /* 105b1d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1d2a call 0x105b4990 */
  push32(0x105b1d2fu); f_105b4990();
  /* 105b1d2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1d35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1d37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1d3d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d40 push edx */
  push32((uint32_t)(EDX));
  /* 105b1d41 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 105b1d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1d46 push eax */
  push32((uint32_t)(EAX));
  /* 105b1d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1d49 call 0x105b4990 */
  push32(0x105b1d4eu); f_105b4990();
  /* 105b1d4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1d54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1d56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1d59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1d5c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d5f push edx */
  push32((uint32_t)(EDX));
  /* 105b1d60 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 105b1d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1d65 push eax */
  push32((uint32_t)(EAX));
  /* 105b1d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1d68 call 0x105b4990 */
  push32(0x105b1d6du); f_105b4990();
  /* 105b1d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1d73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1d75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1d7b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d7e push edx */
  push32((uint32_t)(EDX));
  /* 105b1d7f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 105b1d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1d84 push eax */
  push32((uint32_t)(EAX));
  /* 105b1d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1d87 call 0x105b4990 */
  push32(0x105b1d8cu); f_105b4990();
  /* 105b1d8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1d92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1d9a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1d9d push edx */
  push32((uint32_t)(EDX));
  /* 105b1d9e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 105b1da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1da3 push eax */
  push32((uint32_t)(EAX));
  /* 105b1da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1da6 call 0x105b4990 */
  push32(0x105b1dabu); f_105b4990();
  /* 105b1dab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1dae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b1db1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b1db3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b1db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105b1db9:;
  /* 105b1db9 mov esp, ebp */
  ESP = (EBP);
  /* 105b1dbb pop ebp */
  EBP = (pop32());
  /* 105b1dbc ret  */
  ESPCHK(0x105b1bb0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x105b1dc0 (125 bytes, 49 insns) */
void f_105b1dc0(void) {
  FTRACE(0x105b1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 105b1dc3 push ecx */
  push32((uint32_t)(ECX));
L_105b1dc4:;
  /* 105b1dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1dc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b1dca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b1dcc je 0x105b1e39 */
  if (C.zf) goto L_105b1e39;
  /* 105b1dce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1dd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b1dd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1dd7 jl 0x105b1dfd */
  if ((C.sf!=C.of)) goto L_105b1dfd;
  /* 105b1dd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1ddc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b1ddf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1de2 jg 0x105b1dfd */
  if ((!C.zf&&C.sf==C.of)) goto L_105b1dfd;
  /* 105b1de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b1dea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b1ded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1df0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105b1df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1df5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1df8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b1dfb jmp 0x105b1e37 */
  goto L_105b1e37;
L_105b1dfd:;
  /* 105b1dfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b1e03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1e06 jne 0x105b1e2e */
  if (!C.zf) goto L_105b1e2e;
  /* 105b1e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b1e0e:;
  /* 105b1e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1e14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105b1e17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b1e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1e1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b1e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b1e25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b1e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b1e2a jne 0x105b1e0e */
  if (!C.zf) goto L_105b1e0e;
  /* 105b1e2c jmp 0x105b1e37 */
  goto L_105b1e37;
L_105b1e2e:;
  /* 105b1e2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1e34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105b1e37:;
  /* 105b1e37 jmp 0x105b1dc4 */
  goto L_105b1dc4;
L_105b1e39:;
  /* 105b1e39 mov esp, ebp */
  ESP = (EBP);
  /* 105b1e3b pop ebp */
  EBP = (pop32());
  /* 105b1e3c ret  */
  ESPCHK(0x105b1dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e40 @ 0x105b1e40 (147 bytes, 52 insns) */
void f_105b1e40(void) {
  FTRACE(0x105b1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1e40 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1e41 mov ebp, esp */
  EBP = (ESP);
  /* 105b1e43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1e47 jne 0x105b1e4e */
  if (!C.zf) goto L_105b1e4e;
  /* 105b1e49 jmp 0x105b1ed1 */
  goto L_105b1ed1;
L_105b1e4e:;
  /* 105b1e4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e51 cmp dword ptr [eax + 0xc], 0x105d2c34 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x105d2c34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1e58 je 0x105b1ed1 */
  if (C.zf) goto L_105b1ed1;
  /* 105b1e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105b1e62 push edx */
  push32((uint32_t)(EDX));
  /* 105b1e63 call 0x105a8480 */
  push32(0x105b1e68u); f_105a8480();
  /* 105b1e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105b1e73 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1e74 call 0x105a8480 */
  push32(0x105b1e79u); f_105a8480();
  /* 105b1e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105b1e84 push eax */
  push32((uint32_t)(EAX));
  /* 105b1e85 call 0x105a8480 */
  push32(0x105b1e8au); f_105a8480();
  /* 105b1e8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1e8d push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1e92 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105b1e95 push edx */
  push32((uint32_t)(EDX));
  /* 105b1e96 call 0x105a8480 */
  push32(0x105b1e9bu); f_105a8480();
  /* 105b1e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1e9e push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1ea3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105b1ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 105b1ea7 call 0x105a8480 */
  push32(0x105b1eacu); f_105a8480();
  /* 105b1eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1eaf push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1eb4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 105b1eb7 push eax */
  push32((uint32_t)(EAX));
  /* 105b1eb8 call 0x105a8480 */
  push32(0x105b1ebdu); f_105a8480();
  /* 105b1ebd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1ec0 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1ec2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b1ec5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 105b1ec8 push edx */
  push32((uint32_t)(EDX));
  /* 105b1ec9 call 0x105a8480 */
  push32(0x105b1eceu); f_105a8480();
  /* 105b1ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b1ed1:;
  /* 105b1ed1 pop ebp */
  EBP = (pop32());
  /* 105b1ed2 ret  */
  ESPCHK(0x105b1e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ee0 @ 0x105b1ee0 (928 bytes, 284 insns) */
void f_105b1ee0(void) {
  FTRACE(0x105b1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b1ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b1ee1 mov ebp, esp */
  EBP = (ESP);
  /* 105b1ee3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b1ee6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 105b1eed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 105b1ef4 cmp dword ptr [0x105d2ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1efb je 0x105b2231 */
  if (C.zf) goto L_105b2231;
  /* 105b1f01 cmp dword ptr [0x105d2bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1f08 jne 0x105b1f30 */
  if (!C.zf) goto L_105b1f30;
  /* 105b1f0a push 0x105d2bb8 */
  push32((uint32_t)(0x105d2bb8u));
  /* 105b1f0f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 105b1f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b1f16 mov ax, word ptr [0x105d2bf0] */
  AX = (r16((uint32_t)(0x105d2bf0)));
  /* 105b1f1c push eax */
  push32((uint32_t)(EAX));
  /* 105b1f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 105b1f1f call 0x105b4990 */
  push32(0x105b1f24u); f_105b4990();
  /* 105b1f24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b1f29 je 0x105b1f30 */
  if (C.zf) goto L_105b1f30;
  /* 105b1f2b jmp 0x105b21f2 */
  goto L_105b21f2;
L_105b1f30:;
  /* 105b1f30 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 105b1f32 push 0x105cec08 */
  push32((uint32_t)(0x105cec08u));
  /* 105b1f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1f39 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 105b1f3e call 0x105a79f0 */
  push32(0x105b1f43u); f_105a79f0();
  /* 105b1f43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1f46 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 105b1f49 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 105b1f4b push 0x105cec08 */
  push32((uint32_t)(0x105cec08u));
  /* 105b1f50 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1f52 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 105b1f57 call 0x105a79f0 */
  push32(0x105b1f5cu); f_105a79f0();
  /* 105b1f5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1f5f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105b1f62 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 105b1f64 push 0x105cec08 */
  push32((uint32_t)(0x105cec08u));
  /* 105b1f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1f6b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 105b1f70 call 0x105a79f0 */
  push32(0x105b1f75u); f_105a79f0();
  /* 105b1f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1f78 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105b1f7b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 105b1f7d push 0x105cec08 */
  push32((uint32_t)(0x105cec08u));
  /* 105b1f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b1f84 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 105b1f89 call 0x105a79f0 */
  push32(0x105b1f8eu); f_105a79f0();
  /* 105b1f8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1f91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105b1f94 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1f98 je 0x105b1fac */
  if (C.zf) goto L_105b1fac;
  /* 105b1f9a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1f9e je 0x105b1fac */
  if (C.zf) goto L_105b1fac;
  /* 105b1fa0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1fa4 je 0x105b1fac */
  if (C.zf) goto L_105b1fac;
  /* 105b1fa6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1faa jne 0x105b1fb1 */
  if (!C.zf) goto L_105b1fb1;
L_105b1fac:;
  /* 105b1fac jmp 0x105b21f2 */
  goto L_105b21f2;
L_105b1fb1:;
  /* 105b1fb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b1fb4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105b1fb7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105b1fbe jmp 0x105b1fc9 */
  goto L_105b1fc9;
L_105b1fc0:;
  /* 105b1fc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b1fc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1fc6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_105b1fc9:;
  /* 105b1fc9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b1fd0 jge 0x105b1fe5 */
  if ((C.sf==C.of)) goto L_105b1fe5;
  /* 105b1fd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b1fd5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 105b1fd8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105b1fda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b1fdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b1fe0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105b1fe3 jmp 0x105b1fc0 */
  goto L_105b1fc0;
L_105b1fe5:;
  /* 105b1fe5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 105b1fe8 push eax */
  push32((uint32_t)(EAX));
  /* 105b1fe9 mov ecx, dword ptr [0x105d2bb8] */
  ECX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b1fef push ecx */
  push32((uint32_t)(ECX));
  /* 105b1ff0 call dword ptr [0x105d52c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52c0))), 0x105b1ff6u);
  /* 105b1ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b1ff8 jne 0x105b1fff */
  if (!C.zf) goto L_105b1fff;
  /* 105b1ffa jmp 0x105b21f2 */
  goto L_105b21f2;
L_105b1fff:;
  /* 105b1fff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2003 jbe 0x105b200a */
  if ((C.cf||C.zf)) goto L_105b200a;
  /* 105b2005 jmp 0x105b21f2 */
  goto L_105b21f2;
L_105b200a:;
  /* 105b200a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b200d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b2013 mov dword ptr [0x105d1158], edx */
  w32((uint32_t)(0x105d1158), (EDX));
  /* 105b2019 cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2020 jle 0x105b2079 */
  if ((C.zf||C.sf!=C.of)) goto L_105b2079;
  /* 105b2022 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 105b2025 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105b2028 jmp 0x105b2033 */
  goto L_105b2033;
L_105b202a:;
  /* 105b202a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b202d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2030 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_105b2033:;
  /* 105b2033 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2038 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b203a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b203c je 0x105b2079 */
  if (C.zf) goto L_105b2079;
  /* 105b203e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2041 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b2043 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105b2046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b2048 je 0x105b2079 */
  if (C.zf) goto L_105b2079;
  /* 105b204a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b204d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b204f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b2051 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105b2054 jmp 0x105b205f */
  goto L_105b205f;
L_105b2056:;
  /* 105b2056 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b2059 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b205c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_105b205f:;
  /* 105b205f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2062 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2064 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105b2067 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b206a jg 0x105b2077 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b2077;
  /* 105b206c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b206f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2072 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105b2075 jmp 0x105b2056 */
  goto L_105b2056;
L_105b2077:;
  /* 105b2077 jmp 0x105b202a */
  goto L_105b202a;
L_105b2079:;
  /* 105b2079 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b207b push 0 */
  push32((uint32_t)(0x0u));
  /* 105b207d push 0 */
  push32((uint32_t)(0x0u));
  /* 105b207f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b2082 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2085 push eax */
  push32((uint32_t)(EAX));
  /* 105b2086 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105b208b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b208e push ecx */
  push32((uint32_t)(ECX));
  /* 105b208f push 1 */
  push32((uint32_t)(0x1u));
  /* 105b2091 call 0x105b0680 */
  push32(0x105b2096u); f_105b0680();
  /* 105b2096 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b209b jne 0x105b20a2 */
  if (!C.zf) goto L_105b20a2;
  /* 105b209d jmp 0x105b21f2 */
  goto L_105b21f2;
L_105b20a2:;
  /* 105b20a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b20a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 105b20aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b20ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105b20b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105b20b7 jmp 0x105b20c2 */
  goto L_105b20c2;
L_105b20b9:;
  /* 105b20b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b20bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b20bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_105b20c2:;
  /* 105b20c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b20c9 jge 0x105b20e0 */
  if ((C.sf==C.of)) goto L_105b20e0;
  /* 105b20cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b20ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 105b20d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 105b20d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b20d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b20db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105b20de jmp 0x105b20b9 */
  goto L_105b20b9;
L_105b20e0:;
  /* 105b20e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b20e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b20e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b20e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b20ea push edx */
  push32((uint32_t)(EDX));
  /* 105b20eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105b20f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b20f3 push eax */
  push32((uint32_t)(EAX));
  /* 105b20f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b20f6 call 0x105b4c30 */
  push32(0x105b20fbu); f_105b4c30();
  /* 105b20fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b20fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2100 jne 0x105b2107 */
  if (!C.zf) goto L_105b2107;
  /* 105b2102 jmp 0x105b21f2 */
  goto L_105b21f2;
L_105b2107:;
  /* 105b2107 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b210a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 105b210f cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2116 jle 0x105b2173 */
  if ((C.zf||C.sf!=C.of)) goto L_105b2173;
  /* 105b2118 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 105b211b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105b211e jmp 0x105b2129 */
  goto L_105b2129;
L_105b2120:;
  /* 105b2120 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2123 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2126 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105b2129:;
  /* 105b2129 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b212c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b212e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b2130 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b2132 je 0x105b2173 */
  if (C.zf) goto L_105b2173;
  /* 105b2134 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2137 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2139 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105b213c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b213e je 0x105b2173 */
  if (C.zf) goto L_105b2173;
  /* 105b2140 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2145 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b2147 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105b214a jmp 0x105b2155 */
  goto L_105b2155;
L_105b214c:;
  /* 105b214c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b214f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2152 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_105b2155:;
  /* 105b2155 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b2158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b215a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105b215d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2160 jg 0x105b2171 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b2171;
  /* 105b2162 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b2165 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b2168 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 105b216f jmp 0x105b214c */
  goto L_105b214c;
L_105b2171:;
  /* 105b2171 jmp 0x105b2120 */
  goto L_105b2120;
L_105b2173:;
  /* 105b2173 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b2176 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2179 mov dword ptr [0x105d0de8], eax */
  w32((uint32_t)(0x105d0de8), (EAX));
  /* 105b217e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b2181 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2184 mov dword ptr [0x105d0dec], ecx */
  w32((uint32_t)(0x105d0dec), (ECX));
  /* 105b218a cmp dword ptr [0x105d2bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2191 je 0x105b21a4 */
  if (C.zf) goto L_105b21a4;
  /* 105b2193 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b2195 mov edx, dword ptr [0x105d2bdc] */
  EDX = (r32((uint32_t)(0x105d2bdc)));
  /* 105b219b push edx */
  push32((uint32_t)(EDX));
  /* 105b219c call 0x105a8480 */
  push32(0x105b21a1u); f_105a8480();
  /* 105b21a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b21a4:;
  /* 105b21a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b21a7 mov dword ptr [0x105d2bdc], eax */
  w32((uint32_t)(0x105d2bdc), (EAX));
  /* 105b21ac cmp dword ptr [0x105d2be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b21b3 je 0x105b21c6 */
  if (C.zf) goto L_105b21c6;
  /* 105b21b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b21b7 mov ecx, dword ptr [0x105d2be0] */
  ECX = (r32((uint32_t)(0x105d2be0)));
  /* 105b21bd push ecx */
  push32((uint32_t)(ECX));
  /* 105b21be call 0x105a8480 */
  push32(0x105b21c3u); f_105a8480();
  /* 105b21c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b21c6:;
  /* 105b21c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b21c9 mov dword ptr [0x105d2be0], edx */
  w32((uint32_t)(0x105d2be0), (EDX));
  /* 105b21cf push 2 */
  push32((uint32_t)(0x2u));
  /* 105b21d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b21d4 push eax */
  push32((uint32_t)(EAX));
  /* 105b21d5 call 0x105a8480 */
  push32(0x105b21dau); f_105a8480();
  /* 105b21da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b21dd push 2 */
  push32((uint32_t)(0x2u));
  /* 105b21df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b21e2 push ecx */
  push32((uint32_t)(ECX));
  /* 105b21e3 call 0x105a8480 */
  push32(0x105b21e8u); f_105a8480();
  /* 105b21e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b21eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b21ed jmp 0x105b227c */
  goto L_105b227c;
L_105b21f2:;
  /* 105b21f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b21f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b21f7 push edx */
  push32((uint32_t)(EDX));
  /* 105b21f8 call 0x105a8480 */
  push32(0x105b21fdu); f_105a8480();
  /* 105b21fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2200 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b2202 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b2205 push eax */
  push32((uint32_t)(EAX));
  /* 105b2206 call 0x105a8480 */
  push32(0x105b220bu); f_105a8480();
  /* 105b220b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b220e push 2 */
  push32((uint32_t)(0x2u));
  /* 105b2210 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b2213 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2214 call 0x105a8480 */
  push32(0x105b2219u); f_105a8480();
  /* 105b2219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b221c push 2 */
  push32((uint32_t)(0x2u));
  /* 105b221e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b2221 push edx */
  push32((uint32_t)(EDX));
  /* 105b2222 call 0x105a8480 */
  push32(0x105b2227u); f_105a8480();
  /* 105b2227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b222a mov eax, 1 */
  EAX = (0x1u);
  /* 105b222f jmp 0x105b227c */
  goto L_105b227c;
L_105b2231:;
  /* 105b2231 mov dword ptr [0x105d0de8], 0x105d0df2 */
  w32((uint32_t)(0x105d0de8), (0x105d0df2u));
  /* 105b223b mov dword ptr [0x105d0dec], 0x105d0df2 */
  w32((uint32_t)(0x105d0dec), (0x105d0df2u));
  /* 105b2245 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b2247 mov eax, dword ptr [0x105d2bdc] */
  EAX = (r32((uint32_t)(0x105d2bdc)));
  /* 105b224c push eax */
  push32((uint32_t)(EAX));
  /* 105b224d call 0x105a8480 */
  push32(0x105b2252u); f_105a8480();
  /* 105b2252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2255 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b2257 mov ecx, dword ptr [0x105d2be0] */
  ECX = (r32((uint32_t)(0x105d2be0)));
  /* 105b225d push ecx */
  push32((uint32_t)(ECX));
  /* 105b225e call 0x105a8480 */
  push32(0x105b2263u); f_105a8480();
  /* 105b2263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2266 mov dword ptr [0x105d2bdc], 0 */
  w32((uint32_t)(0x105d2bdc), (0x0u));
  /* 105b2270 mov dword ptr [0x105d2be0], 0 */
  w32((uint32_t)(0x105d2be0), (0x0u));
  /* 105b227a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b227c:;
  /* 105b227c mov esp, ebp */
  ESP = (EBP);
  /* 105b227e pop ebp */
  EBP = (pop32());
  /* 105b227f ret  */
  ESPCHK(0x105b1ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012280 @ 0x105b2280 (7 bytes, 5 insns) */
void f_105b2280(void) {
  FTRACE(0x105b2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2280 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2281 mov ebp, esp */
  EBP = (ESP);
  /* 105b2283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2285 pop ebp */
  EBP = (pop32());
  /* 105b2286 ret  */
  ESPCHK(0x105b2280u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x105b2290 (129 bytes, 56 insns) */
void f_105b2290(void) {
  FTRACE(0x105b2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2290 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 105b2294 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 105b2298 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 105b229e jne 0x105b22dc */
  if (!C.zf) goto L_105b22dc;
L_105b22a0:;
  /* 105b22a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b22a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b22a4 jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b22a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b22a8 je 0x105b22d0 */
  if (C.zf) goto L_105b22d0;
  /* 105b22aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b22ad jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b22af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105b22b1 je 0x105b22d0 */
  if (C.zf) goto L_105b22d0;
  /* 105b22b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105b22b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b22b9 jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b22bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b22bd je 0x105b22d0 */
  if (C.zf) goto L_105b22d0;
  /* 105b22bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b22c2 jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b22c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b22c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b22ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105b22cc jne 0x105b22a0 */
  if (!C.zf) goto L_105b22a0;
  /* 105b22ce mov edi, edi */
  EDI = (EDI);
L_105b22d0:;
  /* 105b22d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b22d2 ret  */
  ESPCHK(0x105b2290u, _esp0);
  ESP += 4; return;
  /* 105b22d3 nop  */
  /* nop */
L_105b22d4:;
  /* 105b22d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b22d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b22d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 105b22d9 ret  */
  ESPCHK(0x105b2290u, _esp0);
  ESP += 4; return;
  /* 105b22da mov edi, edi */
  EDI = (EDI);
L_105b22dc:;
  /* 105b22dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 105b22e2 je 0x105b22f8 */
  if (C.zf) goto L_105b22f8;
  /* 105b22e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b22e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105b22e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b22e9 jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b22eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105b22ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b22ee je 0x105b22d0 */
  if (C.zf) goto L_105b22d0;
  /* 105b22f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 105b22f6 je 0x105b22a0 */
  if (C.zf) goto L_105b22a0;
L_105b22f8:;
  /* 105b22f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 105b22fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b22fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b2300 jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b2302 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b2304 je 0x105b22d0 */
  if (C.zf) goto L_105b22d0;
  /* 105b2306 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b2309 jne 0x105b22d4 */
  if (!C.zf) goto L_105b22d4;
  /* 105b230b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105b230d je 0x105b22d0 */
  if (C.zf) goto L_105b22d0;
  /* 105b230f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2312 jmp 0x105b22a0 */
  goto L_105b22a0;
}

/* FUN_10012320 @ 0x105b2320 (62 bytes, 35 insns) */
void f_105b2320(void) {
  FTRACE(0x105b2320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2320 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2321 mov ebp, esp */
  EBP = (ESP);
  /* 105b2323 push esi */
  push32((uint32_t)(ESI));
  /* 105b2324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2326 push eax */
  push32((uint32_t)(EAX));
  /* 105b2327 push eax */
  push32((uint32_t)(EAX));
  /* 105b2328 push eax */
  push32((uint32_t)(EAX));
  /* 105b2329 push eax */
  push32((uint32_t)(EAX));
  /* 105b232a push eax */
  push32((uint32_t)(EAX));
  /* 105b232b push eax */
  push32((uint32_t)(EAX));
  /* 105b232c push eax */
  push32((uint32_t)(EAX));
  /* 105b232d push eax */
  push32((uint32_t)(EAX));
  /* 105b232e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b2331 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b2334:;
  /* 105b2334 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b2336 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b2338 je 0x105b2341 */
  if (C.zf) goto L_105b2341;
  /* 105b233a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105b233b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x105b233b");
  /* 105b233f jmp 0x105b2334 */
  goto L_105b2334;
L_105b2341:;
  /* 105b2341 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2344 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105b2347 nop  */
  /* nop */
L_105b2348:;
  /* 105b2348 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105b2349 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b234b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b234d je 0x105b2356 */
  if (C.zf) goto L_105b2356;
  /* 105b234f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b2350 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x105b2350");
  /* 105b2354 jae 0x105b2348 */
  if (!C.cf) goto L_105b2348;
L_105b2356:;
  /* 105b2356 mov eax, ecx */
  EAX = (ECX);
  /* 105b2358 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b235b pop esi */
  ESI = (pop32());
  /* 105b235c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b235d ret  */
  ESPCHK(0x105b2320u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x105b2360 (56 bytes, 31 insns) */
void f_105b2360(void) {
  FTRACE(0x105b2360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2360 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2361 mov ebp, esp */
  EBP = (ESP);
  /* 105b2363 push edi */
  push32((uint32_t)(EDI));
  /* 105b2364 push esi */
  push32((uint32_t)(ESI));
  /* 105b2365 push ebx */
  push32((uint32_t)(EBX));
  /* 105b2366 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b2369 jecxz 0x105b2391 */
  x86_unimpl("jecxz @ 0x105b2369");
  /* 105b236b mov ebx, ecx */
  EBX = (ECX);
  /* 105b236d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2370 mov esi, edi */
  ESI = (EDI);
  /* 105b2372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2374 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 105b2376 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2378 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b237a mov edi, esi */
  EDI = (ESI);
  /* 105b237c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105b237f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 105b2381 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 105b2384 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2386 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b2389 ja 0x105b238f */
  if ((!C.cf&&!C.zf)) goto L_105b238f;
  /* 105b238b je 0x105b2391 */
  if (C.zf) goto L_105b2391;
  /* 105b238d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105b238e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_105b238f:;
  /* 105b238f not ecx */
  ECX = (~(ECX));
L_105b2391:;
  /* 105b2391 mov eax, ecx */
  EAX = (ECX);
  /* 105b2393 pop ebx */
  EBX = (pop32());
  /* 105b2394 pop esi */
  ESI = (pop32());
  /* 105b2395 pop edi */
  EDI = (pop32());
  /* 105b2396 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b2397 ret  */
  ESPCHK(0x105b2360u, _esp0);
  ESP += 4; return;
}

/* FUN_100123a0 @ 0x105b23a0 (58 bytes, 32 insns) */
void f_105b23a0(void) {
  FTRACE(0x105b23a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b23a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b23a1 mov ebp, esp */
  EBP = (ESP);
  /* 105b23a3 push esi */
  push32((uint32_t)(ESI));
  /* 105b23a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b23a6 push eax */
  push32((uint32_t)(EAX));
  /* 105b23a7 push eax */
  push32((uint32_t)(EAX));
  /* 105b23a8 push eax */
  push32((uint32_t)(EAX));
  /* 105b23a9 push eax */
  push32((uint32_t)(EAX));
  /* 105b23aa push eax */
  push32((uint32_t)(EAX));
  /* 105b23ab push eax */
  push32((uint32_t)(EAX));
  /* 105b23ac push eax */
  push32((uint32_t)(EAX));
  /* 105b23ad push eax */
  push32((uint32_t)(EAX));
  /* 105b23ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b23b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b23b4:;
  /* 105b23b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b23b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b23b8 je 0x105b23c1 */
  if (C.zf) goto L_105b23c1;
  /* 105b23ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105b23bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x105b23bb");
  /* 105b23bf jmp 0x105b23b4 */
  goto L_105b23b4;
L_105b23c1:;
  /* 105b23c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_105b23c4:;
  /* 105b23c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b23c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b23c8 je 0x105b23d4 */
  if (C.zf) goto L_105b23d4;
  /* 105b23ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b23cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x105b23cb");
  /* 105b23cf jae 0x105b23c4 */
  if (!C.cf) goto L_105b23c4;
  /* 105b23d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_105b23d4:;
  /* 105b23d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b23d7 pop esi */
  ESI = (pop32());
  /* 105b23d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b23d9 ret  */
  ESPCHK(0x105b23a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x105b23e0 (512 bytes, 147 insns) */
void f_105b23e0(void) {
  FTRACE(0x105b23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b23e1 mov ebp, esp */
  EBP = (ESP);
  /* 105b23e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b23e6 cmp dword ptr [0x105d2c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b23ed jne 0x105b2412 */
  if (!C.zf) goto L_105b2412;
  /* 105b23ef call 0x105b2eb0 */
  push32(0x105b23f4u); f_105b2eb0();
  /* 105b23f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b23f6 je 0x105b2402 */
  if (C.zf) goto L_105b2402;
  /* 105b23f8 mov eax, dword ptr [0x105d52f4] */
  EAX = (r32((uint32_t)(0x105d52f4)));
  /* 105b23fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b2400 jmp 0x105b2409 */
  goto L_105b2409;
L_105b2402:;
  /* 105b2402 mov dword ptr [ebp - 8], 0x105b2f00 */
  w32((uint32_t)(EBP + -0x8), (0x105b2f00u));
L_105b2409:;
  /* 105b2409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b240c mov dword ptr [0x105d2c28], ecx */
  w32((uint32_t)(0x105d2c28), (ECX));
L_105b2412:;
  /* 105b2412 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2416 jne 0x105b2422 */
  if (!C.zf) goto L_105b2422;
  /* 105b2418 call 0x105b2d00 */
  push32(0x105b241du); f_105b2d00();
  /* 105b241d jmp 0x105b24ee */
  goto L_105b24ee;
L_105b2422:;
  /* 105b2422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2425 mov dword ptr [0x105d2c18], edx */
  w32((uint32_t)(0x105d2c18), (EDX));
  /* 105b242b cmp dword ptr [0x105d2c18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2432 je 0x105b2454 */
  if (C.zf) goto L_105b2454;
  /* 105b2434 mov eax, dword ptr [0x105d2c18] */
  EAX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2439 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b243c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b243e je 0x105b2454 */
  if (C.zf) goto L_105b2454;
  /* 105b2440 push 0x105d2c18 */
  push32((uint32_t)(0x105d2c18u));
  /* 105b2445 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105b2447 push 0x105d1a90 */
  push32((uint32_t)(0x105d1a90u));
  /* 105b244c call 0x105b25e0 */
  push32(0x105b2451u); f_105b25e0();
  /* 105b2451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b2454:;
  /* 105b2454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2457 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b245a mov dword ptr [0x105d2c1c], edx */
  w32((uint32_t)(0x105d2c1c), (EDX));
  /* 105b2460 cmp dword ptr [0x105d2c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2467 je 0x105b2489 */
  if (C.zf) goto L_105b2489;
  /* 105b2469 mov eax, dword ptr [0x105d2c1c] */
  EAX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b246e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b2471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b2473 je 0x105b2489 */
  if (C.zf) goto L_105b2489;
  /* 105b2475 push 0x105d2c1c */
  push32((uint32_t)(0x105d2c1cu));
  /* 105b247a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 105b247c push 0x105d19d8 */
  push32((uint32_t)(0x105d19d8u));
  /* 105b2481 call 0x105b25e0 */
  push32(0x105b2486u); f_105b25e0();
  /* 105b2486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b2489:;
  /* 105b2489 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
  /* 105b2493 cmp dword ptr [0x105d2c18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b249a je 0x105b24cd */
  if (C.zf) goto L_105b24cd;
  /* 105b249c mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b24a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b24a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b24a7 je 0x105b24cd */
  if (C.zf) goto L_105b24cd;
  /* 105b24a9 cmp dword ptr [0x105d2c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b24b0 je 0x105b24c6 */
  if (C.zf) goto L_105b24c6;
  /* 105b24b2 mov ecx, dword ptr [0x105d2c1c] */
  ECX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b24b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b24bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b24bd je 0x105b24c6 */
  if (C.zf) goto L_105b24c6;
  /* 105b24bf call 0x105b2670 */
  push32(0x105b24c4u); f_105b2670();
  /* 105b24c4 jmp 0x105b24cb */
  goto L_105b24cb;
L_105b24c6:;
  /* 105b24c6 call 0x105b2a60 */
  push32(0x105b24cbu); f_105b2a60();
L_105b24cb:;
  /* 105b24cb jmp 0x105b24ee */
  goto L_105b24ee;
L_105b24cd:;
  /* 105b24cd cmp dword ptr [0x105d2c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b24d4 je 0x105b24e9 */
  if (C.zf) goto L_105b24e9;
  /* 105b24d6 mov eax, dword ptr [0x105d2c1c] */
  EAX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b24db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b24de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b24e0 je 0x105b24e9 */
  if (C.zf) goto L_105b24e9;
  /* 105b24e2 call 0x105b2c00 */
  push32(0x105b24e7u); f_105b2c00();
  /* 105b24e7 jmp 0x105b24ee */
  goto L_105b24ee;
L_105b24e9:;
  /* 105b24e9 call 0x105b2d00 */
  push32(0x105b24eeu); f_105b2d00();
L_105b24ee:;
  /* 105b24ee cmp dword ptr [0x105d2c20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b24f5 jne 0x105b24fe */
  if (!C.zf) goto L_105b24fe;
  /* 105b24f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b24f9 jmp 0x105b25dc */
  goto L_105b25dc;
L_105b24fe:;
  /* 105b24fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2501 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2507 push edx */
  push32((uint32_t)(EDX));
  /* 105b2508 call 0x105b2d30 */
  push32(0x105b250du); f_105b2d30();
  /* 105b250d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2510 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b2513 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2517 je 0x105b252c */
  if (C.zf) goto L_105b252c;
  /* 105b2519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b251c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b2521 push eax */
  push32((uint32_t)(EAX));
  /* 105b2522 call dword ptr [0x105d52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f0))), 0x105b2528u);
  /* 105b2528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b252a jne 0x105b2533 */
  if (!C.zf) goto L_105b2533;
L_105b252c:;
  /* 105b252c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b252e jmp 0x105b25dc */
  goto L_105b25dc;
L_105b2533:;
  /* 105b2533 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b2535 mov ecx, dword ptr [0x105d2c08] */
  ECX = (r32((uint32_t)(0x105d2c08)));
  /* 105b253b push ecx */
  push32((uint32_t)(ECX));
  /* 105b253c call dword ptr [0x105d52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52ec))), 0x105b2542u);
  /* 105b2542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2544 jne 0x105b254d */
  if (!C.zf) goto L_105b254d;
  /* 105b2546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2548 jmp 0x105b25dc */
  goto L_105b25dc;
L_105b254d:;
  /* 105b254d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2551 je 0x105b2578 */
  if (C.zf) goto L_105b2578;
  /* 105b2553 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b2556 mov ax, word ptr [0x105d2c08] */
  AX = (r16((uint32_t)(0x105d2c08)));
  /* 105b255c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 105b255f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b2562 mov dx, word ptr [0x105d2c24] */
  DX = (r16((uint32_t)(0x105d2c24)));
  /* 105b2569 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 105b256d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b2570 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 105b2574 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_105b2578:;
  /* 105b2578 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b257c je 0x105b25d7 */
  if (C.zf) goto L_105b25d7;
  /* 105b257e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105b2580 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b2583 push edx */
  push32((uint32_t)(EDX));
  /* 105b2584 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 105b2589 mov eax, dword ptr [0x105d2c08] */
  EAX = (r32((uint32_t)(0x105d2c08)));
  /* 105b258e push eax */
  push32((uint32_t)(EAX));
  /* 105b258f call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b2595u);
  /* 105b2595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2597 jne 0x105b259d */
  if (!C.zf) goto L_105b259d;
  /* 105b2599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b259b jmp 0x105b25dc */
  goto L_105b25dc;
L_105b259d:;
  /* 105b259d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105b259f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b25a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b25a5 push ecx */
  push32((uint32_t)(ECX));
  /* 105b25a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 105b25ab mov edx, dword ptr [0x105d2c24] */
  EDX = (r32((uint32_t)(0x105d2c24)));
  /* 105b25b1 push edx */
  push32((uint32_t)(EDX));
  /* 105b25b2 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b25b8u);
  /* 105b25b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b25ba jne 0x105b25c0 */
  if (!C.zf) goto L_105b25c0;
  /* 105b25bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b25be jmp 0x105b25dc */
  goto L_105b25dc;
L_105b25c0:;
  /* 105b25c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 105b25c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b25c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b25ca push eax */
  push32((uint32_t)(EAX));
  /* 105b25cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b25ce push ecx */
  push32((uint32_t)(ECX));
  /* 105b25cf call 0x105aa530 */
  push32(0x105b25d4u); f_105aa530();
  /* 105b25d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b25d7:;
  /* 105b25d7 mov eax, 1 */
  EAX = (0x1u);
L_105b25dc:;
  /* 105b25dc mov esp, ebp */
  ESP = (EBP);
  /* 105b25de pop ebp */
  EBP = (pop32());
  /* 105b25df ret  */
  ESPCHK(0x105b23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x105b25e0 (130 bytes, 47 insns) */
void f_105b25e0(void) {
  FTRACE(0x105b25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b25e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b25e1 mov ebp, esp */
  EBP = (ESP);
  /* 105b25e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b25e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105b25ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_105b25f4:;
  /* 105b25f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b25f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b25fa jg 0x105b265e */
  if ((!C.zf&&C.sf==C.of)) goto L_105b265e;
  /* 105b25fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2600 je 0x105b265e */
  if (C.zf) goto L_105b265e;
  /* 105b2602 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2605 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2608 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b2609 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b260b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b260d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b2610 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b2613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2616 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 105b2619 push eax */
  push32((uint32_t)(EAX));
  /* 105b261a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b261d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b261f push edx */
  push32((uint32_t)(EDX));
  /* 105b2620 call 0x105b4ea0 */
  push32(0x105b2625u); f_105b4ea0();
  /* 105b2625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2628 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b262b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b262f jne 0x105b2642 */
  if (!C.zf) goto L_105b2642;
  /* 105b2631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b2634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2637 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 105b263b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b263e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b2640 jmp 0x105b265c */
  goto L_105b265c;
L_105b2642:;
  /* 105b2642 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2646 jge 0x105b2653 */
  if ((C.sf==C.of)) goto L_105b2653;
  /* 105b2648 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b264b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b264e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 105b2651 jmp 0x105b265c */
  goto L_105b265c;
L_105b2653:;
  /* 105b2653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b2656 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2659 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105b265c:;
  /* 105b265c jmp 0x105b25f4 */
  goto L_105b25f4;
L_105b265e:;
  /* 105b265e mov esp, ebp */
  ESP = (EBP);
  /* 105b2660 pop ebp */
  EBP = (pop32());
  /* 105b2661 ret  */
  ESPCHK(0x105b25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012670 @ 0x105b2670 (186 bytes, 50 insns) */
void f_105b2670(void) {
  FTRACE(0x105b2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2670 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2671 mov ebp, esp */
  EBP = (ESP);
  /* 105b2673 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2674 mov eax, dword ptr [0x105d2c18] */
  EAX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2679 push eax */
  push32((uint32_t)(EAX));
  /* 105b267a call 0x105aa820 */
  push32(0x105b267fu); f_105aa820();
  /* 105b267f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2682 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2684 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2687 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105b268a mov dword ptr [0x105d2c14], ecx */
  w32((uint32_t)(0x105d2c14), (ECX));
  /* 105b2690 mov edx, dword ptr [0x105d2c1c] */
  EDX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b2696 push edx */
  push32((uint32_t)(EDX));
  /* 105b2697 call 0x105aa820 */
  push32(0x105b269cu); f_105aa820();
  /* 105b269c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b269f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b26a1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b26a4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105b26a7 mov dword ptr [0x105d2c0c], ecx */
  w32((uint32_t)(0x105d2c0c), (ECX));
  /* 105b26ad mov dword ptr [0x105d2c08], 0 */
  w32((uint32_t)(0x105d2c08), (0x0u));
  /* 105b26b7 cmp dword ptr [0x105d2c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b26be je 0x105b26c9 */
  if (C.zf) goto L_105b26c9;
  /* 105b26c0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105b26c7 jmp 0x105b26db */
  goto L_105b26db;
L_105b26c9:;
  /* 105b26c9 mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b26cf push edx */
  push32((uint32_t)(EDX));
  /* 105b26d0 call 0x105b3110 */
  push32(0x105b26d5u); f_105b3110();
  /* 105b26d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b26d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b26db:;
  /* 105b26db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b26de mov dword ptr [0x105d2c10], eax */
  w32((uint32_t)(0x105d2c10), (EAX));
  /* 105b26e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b26e5 push 0x105b2730 */
  push32((uint32_t)(0x105b2730u));
  /* 105b26ea call dword ptr [0x105d52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52d4))), 0x105b26f0u);
  /* 105b26f0 mov ecx, dword ptr [0x105d2c20] */
  ECX = (r32((uint32_t)(0x105d2c20)));
  /* 105b26f6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 105b26fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b26fe je 0x105b271c */
  if (C.zf) goto L_105b271c;
  /* 105b2700 mov edx, dword ptr [0x105d2c20] */
  EDX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2706 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 105b270c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b270e je 0x105b271c */
  if (C.zf) goto L_105b271c;
  /* 105b2710 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2715 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 105b2718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b271a jne 0x105b2726 */
  if (!C.zf) goto L_105b2726;
L_105b271c:;
  /* 105b271c mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
L_105b2726:;
  /* 105b2726 mov esp, ebp */
  ESP = (EBP);
  /* 105b2728 pop ebp */
  EBP = (pop32());
  /* 105b2729 ret  */
  ESPCHK(0x105b2670u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x105b2730 (804 bytes, 220 insns) */
void f_105b2730(void) {
  FTRACE(0x105b2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2730 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2731 mov ebp, esp */
  EBP = (ESP);
  /* 105b2733 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2739 push eax */
  push32((uint32_t)(EAX));
  /* 105b273a call 0x105b3090 */
  push32(0x105b273fu); f_105b3090();
  /* 105b273f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2742 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 105b2745 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105b2747 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b274a push ecx */
  push32((uint32_t)(ECX));
  /* 105b274b mov edx, dword ptr [0x105d2c0c] */
  EDX = (r32((uint32_t)(0x105d2c0c)));
  /* 105b2751 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2753 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2755 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 105b275b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2761 push edx */
  push32((uint32_t)(EDX));
  /* 105b2762 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2765 push eax */
  push32((uint32_t)(EAX));
  /* 105b2766 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b276cu);
  /* 105b276c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b276e jne 0x105b2784 */
  if (!C.zf) goto L_105b2784;
  /* 105b2770 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
  /* 105b277a mov eax, 1 */
  EAX = (0x1u);
  /* 105b277f jmp 0x105b2a4e */
  goto L_105b2a4e;
L_105b2784:;
  /* 105b2784 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b2787 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2788 mov edx, dword ptr [0x105d2c1c] */
  EDX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b278e push edx */
  push32((uint32_t)(EDX));
  /* 105b278f call 0x105b4ea0 */
  push32(0x105b2794u); f_105b4ea0();
  /* 105b2794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2799 jne 0x105b28bf */
  if (!C.zf) goto L_105b28bf;
  /* 105b279f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105b27a1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105b27a4 push eax */
  push32((uint32_t)(EAX));
  /* 105b27a5 mov ecx, dword ptr [0x105d2c14] */
  ECX = (r32((uint32_t)(0x105d2c14)));
  /* 105b27ab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b27ad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b27af and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 105b27b5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b27bb push ecx */
  push32((uint32_t)(ECX));
  /* 105b27bc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b27bf push edx */
  push32((uint32_t)(EDX));
  /* 105b27c0 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b27c6u);
  /* 105b27c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b27c8 jne 0x105b27de */
  if (!C.zf) goto L_105b27de;
  /* 105b27ca mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
  /* 105b27d4 mov eax, 1 */
  EAX = (0x1u);
  /* 105b27d9 jmp 0x105b2a4e */
  goto L_105b2a4e;
L_105b27de:;
  /* 105b27de lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105b27e1 push eax */
  push32((uint32_t)(EAX));
  /* 105b27e2 mov ecx, dword ptr [0x105d2c18] */
  ECX = (r32((uint32_t)(0x105d2c18)));
  /* 105b27e8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b27e9 call 0x105b4ea0 */
  push32(0x105b27eeu); f_105b4ea0();
  /* 105b27ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b27f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b27f3 jne 0x105b2820 */
  if (!C.zf) goto L_105b2820;
  /* 105b27f5 mov edx, dword ptr [0x105d2c20] */
  EDX = (r32((uint32_t)(0x105d2c20)));
  /* 105b27fb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 105b2801 mov dword ptr [0x105d2c20], edx */
  w32((uint32_t)(0x105d2c20), (EDX));
  /* 105b2807 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b280a mov dword ptr [0x105d2c24], eax */
  w32((uint32_t)(0x105d2c24), (EAX));
  /* 105b280f mov ecx, dword ptr [0x105d2c24] */
  ECX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2815 mov dword ptr [0x105d2c08], ecx */
  w32((uint32_t)(0x105d2c08), (ECX));
  /* 105b281b jmp 0x105b28bf */
  goto L_105b28bf;
L_105b2820:;
  /* 105b2820 mov edx, dword ptr [0x105d2c20] */
  EDX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2826 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 105b2829 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b282b jne 0x105b28bf */
  if (!C.zf) goto L_105b28bf;
  /* 105b2831 cmp dword ptr [0x105d2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2838 je 0x105b288d */
  if (C.zf) goto L_105b288d;
  /* 105b283a mov eax, dword ptr [0x105d2c10] */
  EAX = (r32((uint32_t)(0x105d2c10)));
  /* 105b283f push eax */
  push32((uint32_t)(EAX));
  /* 105b2840 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b2843 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2844 mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b284a push edx */
  push32((uint32_t)(EDX));
  /* 105b284b call 0x105b4f70 */
  push32(0x105b2850u); f_105b4f70();
  /* 105b2850 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2853 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2855 jne 0x105b288d */
  if (!C.zf) goto L_105b288d;
  /* 105b2857 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b285c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 105b285e mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
  /* 105b2863 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2866 mov dword ptr [0x105d2c24], ecx */
  w32((uint32_t)(0x105d2c24), (ECX));
  /* 105b286c mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2872 push edx */
  push32((uint32_t)(EDX));
  /* 105b2873 call 0x105aa820 */
  push32(0x105b2878u); f_105aa820();
  /* 105b2878 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b287b cmp eax, dword ptr [0x105d2c10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d2c10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2881 jne 0x105b288b */
  if (!C.zf) goto L_105b288b;
  /* 105b2883 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2886 mov dword ptr [0x105d2c08], eax */
  w32((uint32_t)(0x105d2c08), (EAX));
L_105b288b:;
  /* 105b288b jmp 0x105b28bf */
  goto L_105b28bf;
L_105b288d:;
  /* 105b288d mov ecx, dword ptr [0x105d2c20] */
  ECX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2893 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105b2896 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b2898 jne 0x105b28bf */
  if (!C.zf) goto L_105b28bf;
  /* 105b289a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b289d push edx */
  push32((uint32_t)(EDX));
  /* 105b289e call 0x105b2dd0 */
  push32(0x105b28a3u); f_105b2dd0();
  /* 105b28a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b28a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b28a8 je 0x105b28bf */
  if (C.zf) goto L_105b28bf;
  /* 105b28aa mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b28af or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 105b28b1 mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
  /* 105b28b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b28b9 mov dword ptr [0x105d2c24], ecx */
  w32((uint32_t)(0x105d2c24), (ECX));
L_105b28bf:;
  /* 105b28bf mov edx, dword ptr [0x105d2c20] */
  EDX = (r32((uint32_t)(0x105d2c20)));
  /* 105b28c5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 105b28cb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b28d1 je 0x105b2a41 */
  if (C.zf) goto L_105b2a41;
  /* 105b28d7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105b28d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105b28dc push eax */
  push32((uint32_t)(EAX));
  /* 105b28dd mov ecx, dword ptr [0x105d2c14] */
  ECX = (r32((uint32_t)(0x105d2c14)));
  /* 105b28e3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b28e5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b28e7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 105b28ed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b28f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b28f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b28f7 push edx */
  push32((uint32_t)(EDX));
  /* 105b28f8 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b28feu);
  /* 105b28fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2900 jne 0x105b2916 */
  if (!C.zf) goto L_105b2916;
  /* 105b2902 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
  /* 105b290c mov eax, 1 */
  EAX = (0x1u);
  /* 105b2911 jmp 0x105b2a4e */
  goto L_105b2a4e;
L_105b2916:;
  /* 105b2916 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105b2919 push eax */
  push32((uint32_t)(EAX));
  /* 105b291a mov ecx, dword ptr [0x105d2c18] */
  ECX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2920 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2921 call 0x105b4ea0 */
  push32(0x105b2926u); f_105b4ea0();
  /* 105b2926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b292b jne 0x105b29e0 */
  if (!C.zf) goto L_105b29e0;
  /* 105b2931 mov edx, dword ptr [0x105d2c20] */
  EDX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2937 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 105b293a mov dword ptr [0x105d2c20], edx */
  w32((uint32_t)(0x105d2c20), (EDX));
  /* 105b2940 cmp dword ptr [0x105d2c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2947 je 0x105b296a */
  if (C.zf) goto L_105b296a;
  /* 105b2949 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b294e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 105b2951 mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
  /* 105b2956 cmp dword ptr [0x105d2c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b295d jne 0x105b2968 */
  if (!C.zf) goto L_105b2968;
  /* 105b295f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2962 mov dword ptr [0x105d2c08], ecx */
  w32((uint32_t)(0x105d2c08), (ECX));
L_105b2968:;
  /* 105b2968 jmp 0x105b29de */
  goto L_105b29de;
L_105b296a:;
  /* 105b296a cmp dword ptr [0x105d2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2971 je 0x105b29bf */
  if (C.zf) goto L_105b29bf;
  /* 105b2973 mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2979 push edx */
  push32((uint32_t)(EDX));
  /* 105b297a call 0x105aa820 */
  push32(0x105b297fu); f_105aa820();
  /* 105b297f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2982 cmp eax, dword ptr [0x105d2c10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d2c10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2988 jne 0x105b29bf */
  if (!C.zf) goto L_105b29bf;
  /* 105b298a push 1 */
  push32((uint32_t)(0x1u));
  /* 105b298c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b298f push eax */
  push32((uint32_t)(EAX));
  /* 105b2990 call 0x105b2e20 */
  push32(0x105b2995u); f_105b2e20();
  /* 105b2995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b299a je 0x105b29bd */
  if (C.zf) goto L_105b29bd;
  /* 105b299c mov ecx, dword ptr [0x105d2c20] */
  ECX = (r32((uint32_t)(0x105d2c20)));
  /* 105b29a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 105b29a5 mov dword ptr [0x105d2c20], ecx */
  w32((uint32_t)(0x105d2c20), (ECX));
  /* 105b29ab cmp dword ptr [0x105d2c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b29b2 jne 0x105b29bd */
  if (!C.zf) goto L_105b29bd;
  /* 105b29b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b29b7 mov dword ptr [0x105d2c08], edx */
  w32((uint32_t)(0x105d2c08), (EDX));
L_105b29bd:;
  /* 105b29bd jmp 0x105b29de */
  goto L_105b29de;
L_105b29bf:;
  /* 105b29bf mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b29c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 105b29c7 mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
  /* 105b29cc cmp dword ptr [0x105d2c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b29d3 jne 0x105b29de */
  if (!C.zf) goto L_105b29de;
  /* 105b29d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b29d8 mov dword ptr [0x105d2c08], ecx */
  w32((uint32_t)(0x105d2c08), (ECX));
L_105b29de:;
  /* 105b29de jmp 0x105b2a41 */
  goto L_105b2a41;
L_105b29e0:;
  /* 105b29e0 cmp dword ptr [0x105d2c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b29e7 jne 0x105b2a41 */
  if (!C.zf) goto L_105b2a41;
  /* 105b29e9 cmp dword ptr [0x105d2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b29f0 je 0x105b2a41 */
  if (C.zf) goto L_105b2a41;
  /* 105b29f2 mov edx, dword ptr [0x105d2c10] */
  EDX = (r32((uint32_t)(0x105d2c10)));
  /* 105b29f8 push edx */
  push32((uint32_t)(EDX));
  /* 105b29f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105b29fc push eax */
  push32((uint32_t)(EAX));
  /* 105b29fd mov ecx, dword ptr [0x105d2c18] */
  ECX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2a03 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2a04 call 0x105b4f70 */
  push32(0x105b2a09u); f_105b4f70();
  /* 105b2a09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2a0e jne 0x105b2a41 */
  if (!C.zf) goto L_105b2a41;
  /* 105b2a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b2a12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2a15 push edx */
  push32((uint32_t)(EDX));
  /* 105b2a16 call 0x105b2e20 */
  push32(0x105b2a1bu); f_105b2e20();
  /* 105b2a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2a1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2a20 je 0x105b2a41 */
  if (C.zf) goto L_105b2a41;
  /* 105b2a22 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2a27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 105b2a2a mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
  /* 105b2a2f cmp dword ptr [0x105d2c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2a36 jne 0x105b2a41 */
  if (!C.zf) goto L_105b2a41;
  /* 105b2a38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2a3b mov dword ptr [0x105d2c08], ecx */
  w32((uint32_t)(0x105d2c08), (ECX));
L_105b2a41:;
  /* 105b2a41 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2a46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105b2a49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2a4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2a4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105b2a4e:;
  /* 105b2a4e mov esp, ebp */
  ESP = (EBP);
  /* 105b2a50 pop ebp */
  EBP = (pop32());
  /* 105b2a51 ret 4 */
  ESPCHK(0x105b2730u, _esp0);
  ESP += 8; return;
}

/* FUN_10012a60 @ 0x105b2a60 (116 bytes, 33 insns) */
void f_105b2a60(void) {
  FTRACE(0x105b2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2a61 mov ebp, esp */
  EBP = (ESP);
  /* 105b2a63 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2a64 mov eax, dword ptr [0x105d2c18] */
  EAX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2a69 push eax */
  push32((uint32_t)(EAX));
  /* 105b2a6a call 0x105aa820 */
  push32(0x105b2a6fu); f_105aa820();
  /* 105b2a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2a72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2a74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2a77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105b2a7a mov dword ptr [0x105d2c14], ecx */
  w32((uint32_t)(0x105d2c14), (ECX));
  /* 105b2a80 cmp dword ptr [0x105d2c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2a87 je 0x105b2a92 */
  if (C.zf) goto L_105b2a92;
  /* 105b2a89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105b2a90 jmp 0x105b2aa4 */
  goto L_105b2aa4;
L_105b2a92:;
  /* 105b2a92 mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2a98 push edx */
  push32((uint32_t)(EDX));
  /* 105b2a99 call 0x105b3110 */
  push32(0x105b2a9eu); f_105b3110();
  /* 105b2a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2aa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b2aa4:;
  /* 105b2aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b2aa7 mov dword ptr [0x105d2c10], eax */
  w32((uint32_t)(0x105d2c10), (EAX));
  /* 105b2aac push 1 */
  push32((uint32_t)(0x1u));
  /* 105b2aae push 0x105b2ae0 */
  push32((uint32_t)(0x105b2ae0u));
  /* 105b2ab3 call dword ptr [0x105d52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52d4))), 0x105b2ab9u);
  /* 105b2ab9 mov ecx, dword ptr [0x105d2c20] */
  ECX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2abf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105b2ac2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b2ac4 jne 0x105b2ad0 */
  if (!C.zf) goto L_105b2ad0;
  /* 105b2ac6 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
L_105b2ad0:;
  /* 105b2ad0 mov esp, ebp */
  ESP = (EBP);
  /* 105b2ad2 pop ebp */
  EBP = (pop32());
  /* 105b2ad3 ret  */
  ESPCHK(0x105b2a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ae0 @ 0x105b2ae0 (287 bytes, 86 insns) */
void f_105b2ae0(void) {
  FTRACE(0x105b2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 105b2ae3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2ae9 push eax */
  push32((uint32_t)(EAX));
  /* 105b2aea call 0x105b3090 */
  push32(0x105b2aefu); f_105b3090();
  /* 105b2aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2af2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 105b2af5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105b2af7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b2afa push ecx */
  push32((uint32_t)(ECX));
  /* 105b2afb mov edx, dword ptr [0x105d2c14] */
  EDX = (r32((uint32_t)(0x105d2c14)));
  /* 105b2b01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2b03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2b05 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 105b2b0b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2b11 push edx */
  push32((uint32_t)(EDX));
  /* 105b2b12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2b15 push eax */
  push32((uint32_t)(EAX));
  /* 105b2b16 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b2b1cu);
  /* 105b2b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2b1e jne 0x105b2b34 */
  if (!C.zf) goto L_105b2b34;
  /* 105b2b20 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
  /* 105b2b2a mov eax, 1 */
  EAX = (0x1u);
  /* 105b2b2f jmp 0x105b2bf9 */
  goto L_105b2bf9;
L_105b2b34:;
  /* 105b2b34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b2b37 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2b38 mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2b3e push edx */
  push32((uint32_t)(EDX));
  /* 105b2b3f call 0x105b4ea0 */
  push32(0x105b2b44u); f_105b4ea0();
  /* 105b2b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2b49 jne 0x105b2b89 */
  if (!C.zf) goto L_105b2b89;
  /* 105b2b4b cmp dword ptr [0x105d2c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2b52 jne 0x105b2b66 */
  if (!C.zf) goto L_105b2b66;
  /* 105b2b54 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b2b56 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2b59 push eax */
  push32((uint32_t)(EAX));
  /* 105b2b5a call 0x105b2e20 */
  push32(0x105b2b5fu); f_105b2e20();
  /* 105b2b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2b64 je 0x105b2b87 */
  if (C.zf) goto L_105b2b87;
L_105b2b66:;
  /* 105b2b66 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2b69 mov dword ptr [0x105d2c24], ecx */
  w32((uint32_t)(0x105d2c24), (ECX));
  /* 105b2b6f mov edx, dword ptr [0x105d2c24] */
  EDX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2b75 mov dword ptr [0x105d2c08], edx */
  w32((uint32_t)(0x105d2c08), (EDX));
  /* 105b2b7b mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2b80 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 105b2b82 mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
L_105b2b87:;
  /* 105b2b87 jmp 0x105b2bec */
  goto L_105b2bec;
L_105b2b89:;
  /* 105b2b89 cmp dword ptr [0x105d2c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2b90 jne 0x105b2bec */
  if (!C.zf) goto L_105b2bec;
  /* 105b2b92 cmp dword ptr [0x105d2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2b99 je 0x105b2bec */
  if (C.zf) goto L_105b2bec;
  /* 105b2b9b mov ecx, dword ptr [0x105d2c10] */
  ECX = (r32((uint32_t)(0x105d2c10)));
  /* 105b2ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2ba2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 105b2ba5 push edx */
  push32((uint32_t)(EDX));
  /* 105b2ba6 mov eax, dword ptr [0x105d2c18] */
  EAX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2bab push eax */
  push32((uint32_t)(EAX));
  /* 105b2bac call 0x105b4f70 */
  push32(0x105b2bb1u); f_105b4f70();
  /* 105b2bb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2bb6 jne 0x105b2bec */
  if (!C.zf) goto L_105b2bec;
  /* 105b2bb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b2bba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2bbd push ecx */
  push32((uint32_t)(ECX));
  /* 105b2bbe call 0x105b2e20 */
  push32(0x105b2bc3u); f_105b2e20();
  /* 105b2bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2bc8 je 0x105b2bec */
  if (C.zf) goto L_105b2bec;
  /* 105b2bca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2bcd mov dword ptr [0x105d2c24], edx */
  w32((uint32_t)(0x105d2c24), (EDX));
  /* 105b2bd3 mov eax, dword ptr [0x105d2c24] */
  EAX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2bd8 mov dword ptr [0x105d2c08], eax */
  w32((uint32_t)(0x105d2c08), (EAX));
  /* 105b2bdd mov ecx, dword ptr [0x105d2c20] */
  ECX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2be3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105b2be6 mov dword ptr [0x105d2c20], ecx */
  w32((uint32_t)(0x105d2c20), (ECX));
L_105b2bec:;
  /* 105b2bec mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2bf1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105b2bf4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2bf6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2bf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105b2bf9:;
  /* 105b2bf9 mov esp, ebp */
  ESP = (EBP);
  /* 105b2bfb pop ebp */
  EBP = (pop32());
  /* 105b2bfc ret 4 */
  ESPCHK(0x105b2ae0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012c00 @ 0x105b2c00 (69 bytes, 20 insns) */
void f_105b2c00(void) {
  FTRACE(0x105b2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2c01 mov ebp, esp */
  EBP = (ESP);
  /* 105b2c03 mov eax, dword ptr [0x105d2c1c] */
  EAX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b2c08 push eax */
  push32((uint32_t)(EAX));
  /* 105b2c09 call 0x105aa820 */
  push32(0x105b2c0eu); f_105aa820();
  /* 105b2c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2c11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2c13 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2c16 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105b2c19 mov dword ptr [0x105d2c0c], ecx */
  w32((uint32_t)(0x105d2c0c), (ECX));
  /* 105b2c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 105b2c21 push 0x105b2c50 */
  push32((uint32_t)(0x105b2c50u));
  /* 105b2c26 call dword ptr [0x105d52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52d4))), 0x105b2c2cu);
  /* 105b2c2c mov edx, dword ptr [0x105d2c20] */
  EDX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2c32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105b2c35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b2c37 jne 0x105b2c43 */
  if (!C.zf) goto L_105b2c43;
  /* 105b2c39 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
L_105b2c43:;
  /* 105b2c43 pop ebp */
  EBP = (pop32());
  /* 105b2c44 ret  */
  ESPCHK(0x105b2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c50 @ 0x105b2c50 (172 bytes, 54 insns) */
void f_105b2c50(void) {
  FTRACE(0x105b2c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2c50 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2c51 mov ebp, esp */
  EBP = (ESP);
  /* 105b2c53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2c59 push eax */
  push32((uint32_t)(EAX));
  /* 105b2c5a call 0x105b3090 */
  push32(0x105b2c5fu); f_105b3090();
  /* 105b2c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2c62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 105b2c65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105b2c67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b2c6a push ecx */
  push32((uint32_t)(ECX));
  /* 105b2c6b mov edx, dword ptr [0x105d2c0c] */
  EDX = (r32((uint32_t)(0x105d2c0c)));
  /* 105b2c71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2c73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2c75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 105b2c7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2c81 push edx */
  push32((uint32_t)(EDX));
  /* 105b2c82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2c85 push eax */
  push32((uint32_t)(EAX));
  /* 105b2c86 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b2c8cu);
  /* 105b2c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2c8e jne 0x105b2ca1 */
  if (!C.zf) goto L_105b2ca1;
  /* 105b2c90 mov dword ptr [0x105d2c20], 0 */
  w32((uint32_t)(0x105d2c20), (0x0u));
  /* 105b2c9a mov eax, 1 */
  EAX = (0x1u);
  /* 105b2c9f jmp 0x105b2cf6 */
  goto L_105b2cf6;
L_105b2ca1:;
  /* 105b2ca1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105b2ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2ca5 mov edx, dword ptr [0x105d2c1c] */
  EDX = (r32((uint32_t)(0x105d2c1c)));
  /* 105b2cab push edx */
  push32((uint32_t)(EDX));
  /* 105b2cac call 0x105b4ea0 */
  push32(0x105b2cb1u); f_105b4ea0();
  /* 105b2cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2cb6 jne 0x105b2ce9 */
  if (!C.zf) goto L_105b2ce9;
  /* 105b2cb8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2cbb push eax */
  push32((uint32_t)(EAX));
  /* 105b2cbc call 0x105b2dd0 */
  push32(0x105b2cc1u); f_105b2dd0();
  /* 105b2cc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2cc6 je 0x105b2ce9 */
  if (C.zf) goto L_105b2ce9;
  /* 105b2cc8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105b2ccb mov dword ptr [0x105d2c24], ecx */
  w32((uint32_t)(0x105d2c24), (ECX));
  /* 105b2cd1 mov edx, dword ptr [0x105d2c24] */
  EDX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2cd7 mov dword ptr [0x105d2c08], edx */
  w32((uint32_t)(0x105d2c08), (EDX));
  /* 105b2cdd mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2ce2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 105b2ce4 mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
L_105b2ce9:;
  /* 105b2ce9 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2cee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105b2cf1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b2cf3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2cf5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105b2cf6:;
  /* 105b2cf6 mov esp, ebp */
  ESP = (EBP);
  /* 105b2cf8 pop ebp */
  EBP = (pop32());
  /* 105b2cf9 ret 4 */
  ESPCHK(0x105b2c50u, _esp0);
  ESP += 8; return;
}

/* FUN_10012d00 @ 0x105b2d00 (43 bytes, 11 insns) */
void f_105b2d00(void) {
  FTRACE(0x105b2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2d01 mov ebp, esp */
  EBP = (ESP);
  /* 105b2d03 mov eax, dword ptr [0x105d2c20] */
  EAX = (r32((uint32_t)(0x105d2c20)));
  /* 105b2d08 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 105b2d0d mov dword ptr [0x105d2c20], eax */
  w32((uint32_t)(0x105d2c20), (EAX));
  /* 105b2d12 call dword ptr [0x105d52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52d8))), 0x105b2d18u);
  /* 105b2d18 mov dword ptr [0x105d2c24], eax */
  w32((uint32_t)(0x105d2c24), (EAX));
  /* 105b2d1d mov ecx, dword ptr [0x105d2c24] */
  ECX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2d23 mov dword ptr [0x105d2c08], ecx */
  w32((uint32_t)(0x105d2c08), (ECX));
  /* 105b2d29 pop ebp */
  EBP = (pop32());
  /* 105b2d2a ret  */
  ESPCHK(0x105b2d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x105b2d30 (155 bytes, 57 insns) */
void f_105b2d30(void) {
  FTRACE(0x105b2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2d30 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2d31 mov ebp, esp */
  EBP = (ESP);
  /* 105b2d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2d36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2d3a je 0x105b2d5b */
  if (C.zf) goto L_105b2d5b;
  /* 105b2d3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2d3f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b2d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b2d44 je 0x105b2d5b */
  if (C.zf) goto L_105b2d5b;
  /* 105b2d46 push 0x105cf298 */
  push32((uint32_t)(0x105cf298u));
  /* 105b2d4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2d4e push edx */
  push32((uint32_t)(EDX));
  /* 105b2d4f call 0x105b2290 */
  push32(0x105b2d54u); f_105b2290();
  /* 105b2d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2d59 jne 0x105b2d83 */
  if (!C.zf) goto L_105b2d83;
L_105b2d5b:;
  /* 105b2d5b push 8 */
  push32((uint32_t)(0x8u));
  /* 105b2d5d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105b2d60 push eax */
  push32((uint32_t)(EAX));
  /* 105b2d61 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 105b2d66 mov ecx, dword ptr [0x105d2c24] */
  ECX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2d6c push ecx */
  push32((uint32_t)(ECX));
  /* 105b2d6d call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b2d73u);
  /* 105b2d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2d75 jne 0x105b2d7b */
  if (!C.zf) goto L_105b2d7b;
  /* 105b2d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2d79 jmp 0x105b2dc7 */
  goto L_105b2dc7;
L_105b2d7b:;
  /* 105b2d7b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 105b2d7e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105b2d81 jmp 0x105b2dbb */
  goto L_105b2dbb;
L_105b2d83:;
  /* 105b2d83 push 0x105cf294 */
  push32((uint32_t)(0x105cf294u));
  /* 105b2d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2d8b push eax */
  push32((uint32_t)(EAX));
  /* 105b2d8c call 0x105b2290 */
  push32(0x105b2d91u); f_105b2290();
  /* 105b2d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2d96 jne 0x105b2dbb */
  if (!C.zf) goto L_105b2dbb;
  /* 105b2d98 push 8 */
  push32((uint32_t)(0x8u));
  /* 105b2d9a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105b2d9d push ecx */
  push32((uint32_t)(ECX));
  /* 105b2d9e push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b2da0 mov edx, dword ptr [0x105d2c24] */
  EDX = (r32((uint32_t)(0x105d2c24)));
  /* 105b2da6 push edx */
  push32((uint32_t)(EDX));
  /* 105b2da7 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b2dadu);
  /* 105b2dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2daf jne 0x105b2db5 */
  if (!C.zf) goto L_105b2db5;
  /* 105b2db1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2db3 jmp 0x105b2dc7 */
  goto L_105b2dc7;
L_105b2db5:;
  /* 105b2db5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105b2db8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105b2dbb:;
  /* 105b2dbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2dbe push ecx */
  push32((uint32_t)(ECX));
  /* 105b2dbf call 0x105b5080 */
  push32(0x105b2dc4u); f_105b5080();
  /* 105b2dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b2dc7:;
  /* 105b2dc7 mov esp, ebp */
  ESP = (EBP);
  /* 105b2dc9 pop ebp */
  EBP = (pop32());
  /* 105b2dca ret  */
  ESPCHK(0x105b2d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x105b2dd0 (79 bytes, 26 insns) */
void f_105b2dd0(void) {
  FTRACE(0x105b2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 105b2dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2dd6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 105b2dda mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 105b2dde mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b2de5 jmp 0x105b2df0 */
  goto L_105b2df0;
L_105b2de7:;
  /* 105b2de7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b2dea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2ded mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105b2df0:;
  /* 105b2df0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2df4 jae 0x105b2e16 */
  if (!C.cf) goto L_105b2e16;
  /* 105b2df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b2df9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b2dff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b2e02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b2e04 mov cx, word ptr [eax*2 + 0x105d19c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x105d19c4)));
  /* 105b2e0c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2e0e jne 0x105b2e14 */
  if (!C.zf) goto L_105b2e14;
  /* 105b2e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e12 jmp 0x105b2e1b */
  goto L_105b2e1b;
L_105b2e14:;
  /* 105b2e14 jmp 0x105b2de7 */
  goto L_105b2de7;
L_105b2e16:;
  /* 105b2e16 mov eax, 1 */
  EAX = (0x1u);
L_105b2e1b:;
  /* 105b2e1b mov esp, ebp */
  ESP = (EBP);
  /* 105b2e1d pop ebp */
  EBP = (pop32());
  /* 105b2e1e ret  */
  ESPCHK(0x105b2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x105b2e20 (135 bytes, 48 insns) */
void f_105b2e20(void) {
  FTRACE(0x105b2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2e21 mov ebp, esp */
  EBP = (ESP);
  /* 105b2e23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2e26 push esi */
  push32((uint32_t)(ESI));
  /* 105b2e27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2e2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e2f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e39 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 105b2e3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b2e44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105b2e46 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 105b2e49 push ecx */
  push32((uint32_t)(ECX));
  /* 105b2e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 105b2e4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b2e4f push edx */
  push32((uint32_t)(EDX));
  /* 105b2e50 call dword ptr [0x105d2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d2c28))), 0x105b2e56u);
  /* 105b2e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2e58 jne 0x105b2e5e */
  if (!C.zf) goto L_105b2e5e;
  /* 105b2e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e5c jmp 0x105b2ea2 */
  goto L_105b2ea2;
L_105b2e5e:;
  /* 105b2e5e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 105b2e61 push eax */
  push32((uint32_t)(EAX));
  /* 105b2e62 call 0x105b3090 */
  push32(0x105b2e67u); f_105b3090();
  /* 105b2e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2e6a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2e6d je 0x105b2e9d */
  if (C.zf) goto L_105b2e9d;
  /* 105b2e6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2e73 je 0x105b2e9d */
  if (C.zf) goto L_105b2e9d;
  /* 105b2e75 mov ecx, dword ptr [0x105d2c18] */
  ECX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2e7b push ecx */
  push32((uint32_t)(ECX));
  /* 105b2e7c call 0x105b3110 */
  push32(0x105b2e81u); f_105b3110();
  /* 105b2e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2e84 mov esi, eax */
  ESI = (EAX);
  /* 105b2e86 mov edx, dword ptr [0x105d2c18] */
  EDX = (r32((uint32_t)(0x105d2c18)));
  /* 105b2e8c push edx */
  push32((uint32_t)(EDX));
  /* 105b2e8d call 0x105aa820 */
  push32(0x105b2e92u); f_105aa820();
  /* 105b2e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2e95 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2e97 jne 0x105b2e9d */
  if (!C.zf) goto L_105b2e9d;
  /* 105b2e99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b2e9b jmp 0x105b2ea2 */
  goto L_105b2ea2;
L_105b2e9d:;
  /* 105b2e9d mov eax, 1 */
  EAX = (0x1u);
L_105b2ea2:;
  /* 105b2ea2 pop esi */
  ESI = (pop32());
  /* 105b2ea3 mov esp, ebp */
  ESP = (EBP);
  /* 105b2ea5 pop ebp */
  EBP = (pop32());
  /* 105b2ea6 ret  */
  ESPCHK(0x105b2e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x105b2eb0 (77 bytes, 18 insns) */
void f_105b2eb0(void) {
  FTRACE(0x105b2eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2eb1 mov ebp, esp */
  EBP = (ESP);
  /* 105b2eb3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2eb9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 105b2ec3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 105b2ec9 push eax */
  push32((uint32_t)(EAX));
  /* 105b2eca call dword ptr [0x105d52fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52fc))), 0x105b2ed0u);
  /* 105b2ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b2ed2 je 0x105b2ee9 */
  if (C.zf) goto L_105b2ee9;
  /* 105b2ed4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2edb jne 0x105b2ee9 */
  if (!C.zf) goto L_105b2ee9;
  /* 105b2edd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 105b2ee7 jmp 0x105b2ef3 */
  goto L_105b2ef3;
L_105b2ee9:;
  /* 105b2ee9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_105b2ef3:;
  /* 105b2ef3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105b2ef9 mov esp, ebp */
  ESP = (EBP);
  /* 105b2efb pop ebp */
  EBP = (pop32());
  /* 105b2efc ret  */
  ESPCHK(0x105b2eb0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x105b2f00 (388 bytes, 118 insns) */
void f_105b2f00(void) {
  FTRACE(0x105b2f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b2f00 push ebp */
  push32((uint32_t)(EBP));
  /* 105b2f01 mov ebp, esp */
  EBP = (ESP);
  /* 105b2f03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2f06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b2f0d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 105b2f14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105b2f1b:;
  /* 105b2f1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b2f1e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f21 jg 0x105b3068 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b3068;
  /* 105b2f27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b2f2a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2f2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b2f2e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b2f30 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b2f32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b2f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2f38 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b2f3e cmp edx, dword ptr [ecx + 0x105d1520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x105d1520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f44 jne 0x105b303e */
  if (!C.zf) goto L_105b303e;
  /* 105b2f4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b2f4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b2f50 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f54 ja 0x105b2f77 */
  if ((!C.cf&&!C.zf)) goto L_105b2f77;
  /* 105b2f56 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f5a je 0x105b2fe9 */
  if (C.zf) goto L_105b2fe9;
  /* 105b2f60 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f64 je 0x105b2f94 */
  if (C.zf) goto L_105b2f94;
  /* 105b2f66 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f6a je 0x105b2fb6 */
  if (C.zf) goto L_105b2fb6;
  /* 105b2f6c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f70 je 0x105b2fd8 */
  if (C.zf) goto L_105b2fd8;
  /* 105b2f72 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2f77:;
  /* 105b2f77 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f7e je 0x105b2fa5 */
  if (C.zf) goto L_105b2fa5;
  /* 105b2f80 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f87 je 0x105b2fc7 */
  if (C.zf) goto L_105b2fc7;
  /* 105b2f89 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b2f90 je 0x105b2ffa */
  if (C.zf) goto L_105b2ffa;
  /* 105b2f92 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2f94:;
  /* 105b2f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2f97 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2f9a add ecx, 0x105d1524 */
  { uint32_t _a=(ECX),_b=(0x105d1524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2fa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b2fa3 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2fa5:;
  /* 105b2fa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2fa8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2fab mov eax, dword ptr [edx + 0x105d152c] */
  EAX = (r32((uint32_t)(EDX + 0x105d152c)));
  /* 105b2fb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b2fb4 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2fb6:;
  /* 105b2fb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2fb9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2fbc add ecx, 0x105d1530 */
  { uint32_t _a=(ECX),_b=(0x105d1530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2fc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b2fc5 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2fc7:;
  /* 105b2fc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2fca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2fcd mov eax, dword ptr [edx + 0x105d1534] */
  EAX = (r32((uint32_t)(EDX + 0x105d1534)));
  /* 105b2fd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b2fd6 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2fd8:;
  /* 105b2fd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2fdb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2fde add ecx, 0x105d1538 */
  { uint32_t _a=(ECX),_b=(0x105d1538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2fe4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b2fe7 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2fe9:;
  /* 105b2fe9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2fec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b2fef add edx, 0x105d153c */
  { uint32_t _a=(EDX),_b=(0x105d153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b2ff5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b2ff8 jmp 0x105b3008 */
  goto L_105b3008;
L_105b2ffa:;
  /* 105b2ffa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b2ffd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b3000 add eax, 0x105d1544 */
  { uint32_t _a=(EAX),_b=(0x105d1544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3005 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105b3008:;
  /* 105b3008 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b300c je 0x105b3014 */
  if (C.zf) goto L_105b3014;
  /* 105b300e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3012 jge 0x105b3016 */
  if ((C.sf==C.of)) goto L_105b3016;
L_105b3014:;
  /* 105b3014 jmp 0x105b3068 */
  goto L_105b3068;
L_105b3016:;
  /* 105b3016 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b301c push ecx */
  push32((uint32_t)(ECX));
  /* 105b301d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b3020 push edx */
  push32((uint32_t)(EDX));
  /* 105b3021 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3024 push eax */
  push32((uint32_t)(EAX));
  /* 105b3025 call 0x105ab210 */
  push32(0x105b302au); f_105ab210();
  /* 105b302a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b302d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3030 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3033 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 105b3037 mov eax, 1 */
  EAX = (0x1u);
  /* 105b303c jmp 0x105b307e */
  goto L_105b307e;
L_105b303e:;
  /* 105b303e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3041 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b3044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3047 cmp eax, dword ptr [edx + 0x105d1520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x105d1520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b304d jae 0x105b305a */
  if (!C.cf) goto L_105b305a;
  /* 105b304f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3052 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3055 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b3058 jmp 0x105b3063 */
  goto L_105b3063;
L_105b305a:;
  /* 105b305a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b305d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3060 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b3063:;
  /* 105b3063 jmp 0x105b2f1b */
  goto L_105b2f1b;
L_105b3068:;
  /* 105b3068 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b306b push eax */
  push32((uint32_t)(EAX));
  /* 105b306c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b306f push ecx */
  push32((uint32_t)(ECX));
  /* 105b3070 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3073 push edx */
  push32((uint32_t)(EDX));
  /* 105b3074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3077 push eax */
  push32((uint32_t)(EAX));
  /* 105b3078 call dword ptr [0x105d52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f4))), 0x105b307eu);
L_105b307e:;
  /* 105b307e mov esp, ebp */
  ESP = (EBP);
  /* 105b3080 pop ebp */
  EBP = (pop32());
  /* 105b3081 ret 0x10 */
  ESPCHK(0x105b2f00u, _esp0);
  ESP += 20; return;
}

/* FUN_10013090 @ 0x105b3090 (118 bytes, 42 insns) */
void f_105b3090(void) {
  FTRACE(0x105b3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3090 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3091 mov ebp, esp */
  EBP = (ESP);
  /* 105b3093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3096 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105b309d:;
  /* 105b309d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b30a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b30a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 105b30a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b30a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b30ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b30af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b30b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b30b4 je 0x105b30ff */
  if (C.zf) goto L_105b30ff;
  /* 105b30b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b30ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b30bd jl 0x105b30d2 */
  if ((C.sf!=C.of)) goto L_105b30d2;
  /* 105b30bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b30c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b30c6 jg 0x105b30d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b30d2;
  /* 105b30c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105b30cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105b30cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 105b30d0 jmp 0x105b30ec */
  goto L_105b30ec;
L_105b30d2:;
  /* 105b30d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b30d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b30d9 jl 0x105b30ec */
  if ((C.sf!=C.of)) goto L_105b30ec;
  /* 105b30db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b30df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b30e2 jg 0x105b30ec */
  if ((!C.zf&&C.sf==C.of)) goto L_105b30ec;
  /* 105b30e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105b30e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105b30e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_105b30ec:;
  /* 105b30ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b30ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105b30f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b30f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 105b30fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b30fd jmp 0x105b309d */
  goto L_105b309d;
L_105b30ff:;
  /* 105b30ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b3102 mov esp, ebp */
  ESP = (EBP);
  /* 105b3104 pop ebp */
  EBP = (pop32());
  /* 105b3105 ret  */
  ESPCHK(0x105b3090u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x105b3110 (101 bytes, 36 insns) */
void f_105b3110(void) {
  FTRACE(0x105b3110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3110 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3111 mov ebp, esp */
  EBP = (ESP);
  /* 105b3113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3116 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b311d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3120 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b3122 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 105b3125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3128 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b312b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_105b312e:;
  /* 105b312e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105b3132 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3135 jl 0x105b3140 */
  if ((C.sf!=C.of)) goto L_105b3140;
  /* 105b3137 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105b313b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b313e jle 0x105b3152 */
  if ((C.zf||C.sf!=C.of)) goto L_105b3152;
L_105b3140:;
  /* 105b3140 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105b3144 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3147 jl 0x105b316e */
  if ((C.sf!=C.of)) goto L_105b316e;
  /* 105b3149 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105b314d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3150 jg 0x105b316e */
  if ((!C.zf&&C.sf==C.of)) goto L_105b316e;
L_105b3152:;
  /* 105b3152 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b3155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3158 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b315b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b315e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b3160 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 105b3163 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3166 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3169 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105b316c jmp 0x105b312e */
  goto L_105b312e;
L_105b316e:;
  /* 105b316e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b3171 mov esp, ebp */
  ESP = (EBP);
  /* 105b3173 pop ebp */
  EBP = (pop32());
  /* 105b3174 ret  */
  ESPCHK(0x105b3110u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x105b3178 (32 bytes, 18 insns) */
void f_105b3178(void) {
  FTRACE(0x105b3178u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3178 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3179 mov ebp, esp */
  EBP = (ESP);
  /* 105b317b push ebx */
  push32((uint32_t)(EBX));
  /* 105b317c push esi */
  push32((uint32_t)(ESI));
  /* 105b317d push edi */
  push32((uint32_t)(EDI));
  /* 105b317e push ebp */
  push32((uint32_t)(EBP));
  /* 105b317f push 0 */
  push32((uint32_t)(0x0u));
  /* 105b3181 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b3183 push 0x105b3190 */
  push32((uint32_t)(0x105b3190u));
  /* 105b3188 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 105b318b call 0x105b6f5c */
  push32(0x105b3190u); f_105b6f5c();
  /* 105b3190 pop ebp */
  EBP = (pop32());
  /* 105b3191 pop edi */
  EDI = (pop32());
  /* 105b3192 pop esi */
  ESI = (pop32());
  /* 105b3193 pop ebx */
  EBX = (pop32());
  /* 105b3194 mov esp, ebp */
  ESP = (EBP);
  /* 105b3196 pop ebp */
  EBP = (pop32());
  /* 105b3197 ret  */
  ESPCHK(0x105b3178u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x105b31ba (104 bytes, 33 insns) */
void f_105b31ba(void) {
  FTRACE(0x105b31bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b31ba push ebx */
  push32((uint32_t)(EBX));
  /* 105b31bb push esi */
  push32((uint32_t)(ESI));
  /* 105b31bc push edi */
  push32((uint32_t)(EDI));
  /* 105b31bd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105b31c1 push eax */
  push32((uint32_t)(EAX));
  /* 105b31c2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 105b31c4 push 0x105b3198 */
  push32((uint32_t)(0x105b3198u));
  /* 105b31c9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 105b31d0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_105b31d7:;
  /* 105b31d7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 105b31db mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 105b31de mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 105b31e1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b31e4 je 0x105b3214 */
  if (C.zf) goto L_105b3214;
  /* 105b31e6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b31ea je 0x105b3214 */
  if (C.zf) goto L_105b3214;
  /* 105b31ec lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 105b31ef mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 105b31f2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 105b31f6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 105b31f9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b31fe jne 0x105b3212 */
  if (!C.zf) goto L_105b3212;
  /* 105b3200 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 105b3205 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 105b3209 call 0x105b324e */
  push32(0x105b320eu); f_105b324e();
  /* 105b320e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x105b3212u);
L_105b3212:;
  /* 105b3212 jmp 0x105b31d7 */
  goto L_105b31d7;
L_105b3214:;
  /* 105b3214 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 105b321b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b321e pop edi */
  EDI = (pop32());
  /* 105b321f pop esi */
  ESI = (pop32());
  /* 105b3220 pop ebx */
  EBX = (pop32());
  /* 105b3221 ret  */
  ESPCHK(0x105b31bau, _esp0);
  ESP += 4; return;
}

/* FUN_1001324e @ 0x105b324e (24 bytes, 10 insns) */
void f_105b324e(void) {
  FTRACE(0x105b324eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b324e push ebx */
  push32((uint32_t)(EBX));
  /* 105b324f push ecx */
  push32((uint32_t)(ECX));
  /* 105b3250 mov ebx, 0x105d1c98 */
  EBX = (0x105d1c98u);
  /* 105b3255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3258 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 105b325b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 105b325e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 105b3261 pop ecx */
  ECX = (pop32());
  /* 105b3262 pop ebx */
  EBX = (pop32());
  /* 105b3263 ret 4 */
  ESPCHK(0x105b324eu, _esp0);
  ESP += 8; return;
}

/* FUN_1001332d @ 0x105b332d (27 bytes, 11 insns) */
void f_105b332d(void) {
  FTRACE(0x105b332du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b332d push ebp */
  push32((uint32_t)(EBP));
  /* 105b332e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 105b3332 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 105b3334 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105b3337 push eax */
  push32((uint32_t)(EAX));
  /* 105b3338 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 105b333b push eax */
  push32((uint32_t)(EAX));
  /* 105b333c call 0x105b31ba */
  push32(0x105b3341u); f_105b31ba();
  /* 105b3341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3344 pop ebp */
  EBP = (pop32());
  /* 105b3345 ret 4 */
  ESPCHK(0x105b332du, _esp0);
  ESP += 8; return;
}

/* FUN_10013350 @ 0x105b3350 (122 bytes, 39 insns) */
void f_105b3350(void) {
  FTRACE(0x105b3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3350 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3351 mov ebp, esp */
  EBP = (ESP);
  /* 105b3353 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3357 cmp eax, dword ptr [0x105d449c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d449c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b335d jae 0x105b3381 */
  if (!C.cf) goto L_105b3381;
  /* 105b335f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3362 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105b3365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3368 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105b336b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b336e mov eax, dword ptr [ecx*4 + 0x105d4360] */
  EAX = (r32((uint32_t)(ECX*4 + 0x105d4360)));
  /* 105b3375 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105b337a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105b337d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b337f jne 0x105b339c */
  if (!C.zf) goto L_105b339c;
L_105b3381:;
  /* 105b3381 call 0x105aef60 */
  push32(0x105b3386u); f_105aef60();
  /* 105b3386 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105b338c call 0x105aef70 */
  push32(0x105b3391u); f_105aef70();
  /* 105b3391 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105b3397 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b339a jmp 0x105b33c6 */
  goto L_105b33c6;
L_105b339c:;
  /* 105b339c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b339f push edx */
  push32((uint32_t)(EDX));
  /* 105b33a0 call 0x105af490 */
  push32(0x105b33a5u); f_105af490();
  /* 105b33a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b33a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b33ab push eax */
  push32((uint32_t)(EAX));
  /* 105b33ac call 0x105b33d0 */
  push32(0x105b33b1u); f_105b33d0();
  /* 105b33b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b33b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b33b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b33ba push ecx */
  push32((uint32_t)(ECX));
  /* 105b33bb call 0x105af520 */
  push32(0x105b33c0u); f_105af520();
  /* 105b33c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b33c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105b33c6:;
  /* 105b33c6 mov esp, ebp */
  ESP = (EBP);
  /* 105b33c8 pop ebp */
  EBP = (pop32());
  /* 105b33c9 ret  */
  ESPCHK(0x105b3350u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x105b33d0 (170 bytes, 59 insns) */
void f_105b33d0(void) {
  FTRACE(0x105b33d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b33d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b33d1 mov ebp, esp */
  EBP = (ESP);
  /* 105b33d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b33d4 push esi */
  push32((uint32_t)(ESI));
  /* 105b33d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b33d8 push eax */
  push32((uint32_t)(EAX));
  /* 105b33d9 call 0x105af310 */
  push32(0x105b33deu); f_105af310();
  /* 105b33de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b33e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b33e4 je 0x105b3423 */
  if (C.zf) goto L_105b3423;
  /* 105b33e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b33ea je 0x105b33f2 */
  if (C.zf) goto L_105b33f2;
  /* 105b33ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b33f0 jne 0x105b340c */
  if (!C.zf) goto L_105b340c;
L_105b33f2:;
  /* 105b33f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b33f4 call 0x105af310 */
  push32(0x105b33f9u); f_105af310();
  /* 105b33f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b33fc mov esi, eax */
  ESI = (EAX);
  /* 105b33fe push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3400 call 0x105af310 */
  push32(0x105b3405u); f_105af310();
  /* 105b3405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3408 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b340a je 0x105b3423 */
  if (C.zf) goto L_105b3423;
L_105b340c:;
  /* 105b340c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b340f push ecx */
  push32((uint32_t)(ECX));
  /* 105b3410 call 0x105af310 */
  push32(0x105b3415u); f_105af310();
  /* 105b3415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3418 push eax */
  push32((uint32_t)(EAX));
  /* 105b3419 call dword ptr [0x105d5304] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5304))), 0x105b341fu);
  /* 105b341f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b3421 je 0x105b342c */
  if (C.zf) goto L_105b342c;
L_105b3423:;
  /* 105b3423 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b342a jmp 0x105b3435 */
  goto L_105b3435;
L_105b342c:;
  /* 105b342c call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105b3432u);
  /* 105b3432 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b3435:;
  /* 105b3435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3438 push edx */
  push32((uint32_t)(EDX));
  /* 105b3439 call 0x105af230 */
  push32(0x105b343eu); f_105af230();
  /* 105b343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3444 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105b3447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b344a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105b344d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b3450 mov edx, dword ptr [eax*4 + 0x105d4360] */
  EDX = (r32((uint32_t)(EAX*4 + 0x105d4360)));
  /* 105b3457 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 105b345c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3460 je 0x105b3473 */
  if (C.zf) goto L_105b3473;
  /* 105b3462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b3465 push eax */
  push32((uint32_t)(EAX));
  /* 105b3466 call 0x105aeec0 */
  push32(0x105b346bu); f_105aeec0();
  /* 105b346b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b346e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b3471 jmp 0x105b3475 */
  goto L_105b3475;
L_105b3473:;
  /* 105b3473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b3475:;
  /* 105b3475 pop esi */
  ESI = (pop32());
  /* 105b3476 mov esp, ebp */
  ESP = (EBP);
  /* 105b3478 pop ebp */
  EBP = (pop32());
  /* 105b3479 ret  */
  ESPCHK(0x105b33d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x105b3480 (146 bytes, 52 insns) */
void f_105b3480(void) {
  FTRACE(0x105b3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3480 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3481 mov ebp, esp */
  EBP = (ESP);
  /* 105b3483 push ebx */
  push32((uint32_t)(EBX));
  /* 105b3484 push esi */
  push32((uint32_t)(ESI));
  /* 105b3485 push edi */
  push32((uint32_t)(EDI));
L_105b3486:;
  /* 105b3486 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b348a jne 0x105b34aa */
  if (!C.zf) goto L_105b34aa;
  /* 105b348c push 0x105cebd4 */
  push32((uint32_t)(0x105cebd4u));
  /* 105b3491 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b3493 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105b3495 push 0x105cf29c */
  push32((uint32_t)(0x105cf29cu));
  /* 105b349a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b349c call 0x105a5990 */
  push32(0x105b34a1u); f_105a5990();
  /* 105b34a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b34a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b34a7 jne 0x105b34aa */
  if (!C.zf) goto L_105b34aa;
  /* 105b34a9 int3  */
  x86_unimpl("int3 @ 0x105b34a9");
L_105b34aa:;
  /* 105b34aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b34ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b34ae jne 0x105b3486 */
  if (!C.zf) goto L_105b3486;
  /* 105b34b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105b34b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 105b34bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b34be je 0x105b350d */
  if (C.zf) goto L_105b350d;
  /* 105b34c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105b34c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 105b34c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b34cb je 0x105b350d */
  if (C.zf) goto L_105b350d;
  /* 105b34cd push 2 */
  push32((uint32_t)(0x2u));
  /* 105b34cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105b34d5 push eax */
  push32((uint32_t)(EAX));
  /* 105b34d6 call 0x105a8480 */
  push32(0x105b34dbu); f_105a8480();
  /* 105b34db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b34de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105b34e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 105b34ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 105b34f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 105b34f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b34fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 105b3503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3506 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_105b350d:;
  /* 105b350d pop edi */
  EDI = (pop32());
  /* 105b350e pop esi */
  ESI = (pop32());
  /* 105b350f pop ebx */
  EBX = (pop32());
  /* 105b3510 pop ebp */
  EBP = (pop32());
  /* 105b3511 ret  */
  ESPCHK(0x105b3480u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x105b3520 (289 bytes, 97 insns) */
void f_105b3520(void) {
  FTRACE(0x105b3520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3520 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3521 mov ebp, esp */
  EBP = (ESP);
  /* 105b3523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3526 push esi */
  push32((uint32_t)(ESI));
  /* 105b3527 mov eax, dword ptr [0x105d1ca8] */
  EAX = (r32((uint32_t)(0x105d1ca8)));
  /* 105b352c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b352f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b3536 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b353d jmp 0x105b3548 */
  goto L_105b3548;
L_105b353f:;
  /* 105b353f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3542 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3545 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105b3548:;
  /* 105b3548 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b354c jae 0x105b3581 */
  if (!C.cf) goto L_105b3581;
  /* 105b354e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3554 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105b3557 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3558 call 0x105aa820 */
  push32(0x105b355du); f_105aa820();
  /* 105b355d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3560 mov esi, eax */
  ESI = (EAX);
  /* 105b3562 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3565 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3568 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 105b356c push ecx */
  push32((uint32_t)(ECX));
  /* 105b356d call 0x105aa820 */
  push32(0x105b3572u); f_105aa820();
  /* 105b3572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3575 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3578 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105b357c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b357f jmp 0x105b353f */
  goto L_105b353f;
L_105b3581:;
  /* 105b3581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b3584 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3587 push eax */
  push32((uint32_t)(EAX));
  /* 105b3588 call 0x105a79d0 */
  push32(0x105b358du); f_105a79d0();
  /* 105b358d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3590 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b3593 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3597 je 0x105b3639 */
  if (C.zf) goto L_105b3639;
  /* 105b359d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b35a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b35a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b35aa jmp 0x105b35b5 */
  goto L_105b35b5;
L_105b35ac:;
  /* 105b35ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b35af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b35b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b35b5:;
  /* 105b35b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b35b9 jae 0x105b362a */
  if (!C.cf) goto L_105b362a;
  /* 105b35bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b35be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 105b35c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b35c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b35c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b35ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b35cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b35d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105b35d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b35d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b35d7 push edx */
  push32((uint32_t)(EDX));
  /* 105b35d8 call 0x105aa9a0 */
  push32(0x105b35ddu); f_105aa9a0();
  /* 105b35dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b35e0 push eax */
  push32((uint32_t)(EAX));
  /* 105b35e1 call 0x105aa820 */
  push32(0x105b35e6u); f_105aa820();
  /* 105b35e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b35e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b35ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b35ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b35f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b35f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 105b35f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b35fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b35fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b3600 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3603 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3606 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 105b360a push eax */
  push32((uint32_t)(EAX));
  /* 105b360b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b360e push ecx */
  push32((uint32_t)(ECX));
  /* 105b360f call 0x105aa9a0 */
  push32(0x105b3614u); f_105aa9a0();
  /* 105b3614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3617 push eax */
  push32((uint32_t)(EAX));
  /* 105b3618 call 0x105aa820 */
  push32(0x105b361du); f_105aa820();
  /* 105b361d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3620 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3623 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3625 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b3628 jmp 0x105b35ac */
  goto L_105b35ac;
L_105b362a:;
  /* 105b362a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b362d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105b3630 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3633 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3636 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105b3639:;
  /* 105b3639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b363c pop esi */
  ESI = (pop32());
  /* 105b363d mov esp, ebp */
  ESP = (EBP);
  /* 105b363f pop ebp */
  EBP = (pop32());
  /* 105b3640 ret  */
  ESPCHK(0x105b3520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013650 @ 0x105b3650 (291 bytes, 97 insns) */
void f_105b3650(void) {
  FTRACE(0x105b3650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3650 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3651 mov ebp, esp */
  EBP = (ESP);
  /* 105b3653 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3656 push esi */
  push32((uint32_t)(ESI));
  /* 105b3657 mov eax, dword ptr [0x105d1ca8] */
  EAX = (r32((uint32_t)(0x105d1ca8)));
  /* 105b365c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b365f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b3666 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b366d jmp 0x105b3678 */
  goto L_105b3678;
L_105b366f:;
  /* 105b366f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3672 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3675 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105b3678:;
  /* 105b3678 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b367c jae 0x105b36b2 */
  if (!C.cf) goto L_105b36b2;
  /* 105b367e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3684 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 105b3688 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3689 call 0x105aa820 */
  push32(0x105b368eu); f_105aa820();
  /* 105b368e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3691 mov esi, eax */
  ESI = (EAX);
  /* 105b3693 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3696 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3699 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 105b369d push ecx */
  push32((uint32_t)(ECX));
  /* 105b369e call 0x105aa820 */
  push32(0x105b36a3u); f_105aa820();
  /* 105b36a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b36a6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b36a9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105b36ad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b36b0 jmp 0x105b366f */
  goto L_105b366f;
L_105b36b2:;
  /* 105b36b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b36b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b36b8 push eax */
  push32((uint32_t)(EAX));
  /* 105b36b9 call 0x105a79d0 */
  push32(0x105b36beu); f_105a79d0();
  /* 105b36be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b36c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b36c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b36c8 je 0x105b376b */
  if (C.zf) goto L_105b376b;
  /* 105b36ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b36d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b36d4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b36db jmp 0x105b36e6 */
  goto L_105b36e6;
L_105b36dd:;
  /* 105b36dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b36e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b36e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b36e6:;
  /* 105b36e6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b36ea jae 0x105b375c */
  if (!C.cf) goto L_105b375c;
  /* 105b36ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b36ef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 105b36f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b36f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b36f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b36fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b36fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3701 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 105b3705 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3706 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3709 push edx */
  push32((uint32_t)(EDX));
  /* 105b370a call 0x105aa9a0 */
  push32(0x105b370fu); f_105aa9a0();
  /* 105b370f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3712 push eax */
  push32((uint32_t)(EAX));
  /* 105b3713 call 0x105aa820 */
  push32(0x105b3718u); f_105aa820();
  /* 105b3718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b371b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b371e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3720 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b3723 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3726 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 105b3729 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b372c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b372f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b3732 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3735 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3738 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105b373c push eax */
  push32((uint32_t)(EAX));
  /* 105b373d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3740 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3741 call 0x105aa9a0 */
  push32(0x105b3746u); f_105aa9a0();
  /* 105b3746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3749 push eax */
  push32((uint32_t)(EAX));
  /* 105b374a call 0x105aa820 */
  push32(0x105b374fu); f_105aa820();
  /* 105b374f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3752 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3755 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3757 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b375a jmp 0x105b36dd */
  goto L_105b36dd;
L_105b375c:;
  /* 105b375c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b375f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105b3762 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3768 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105b376b:;
  /* 105b376b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b376e pop esi */
  ESI = (pop32());
  /* 105b376f mov esp, ebp */
  ESP = (EBP);
  /* 105b3771 pop ebp */
  EBP = (pop32());
  /* 105b3772 ret  */
  ESPCHK(0x105b3650u, _esp0);
  ESP += 4; return;
}

/* FUN_10013780 @ 0x105b3780 (878 bytes, 273 insns) */
void f_105b3780(void) {
  FTRACE(0x105b3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3780 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3781 mov ebp, esp */
  EBP = (ESP);
  /* 105b3783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3786 push esi */
  push32((uint32_t)(ESI));
  /* 105b3787 mov eax, dword ptr [0x105d1ca8] */
  EAX = (r32((uint32_t)(0x105d1ca8)));
  /* 105b378c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b378f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b3796 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b379d jmp 0x105b37a8 */
  goto L_105b37a8;
L_105b379f:;
  /* 105b379f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b37a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b37a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105b37a8:;
  /* 105b37a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b37ac jae 0x105b37e1 */
  if (!C.cf) goto L_105b37e1;
  /* 105b37ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b37b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b37b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105b37b7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b37b8 call 0x105aa820 */
  push32(0x105b37bdu); f_105aa820();
  /* 105b37bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b37c0 mov esi, eax */
  ESI = (EAX);
  /* 105b37c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b37c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b37c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 105b37cc push ecx */
  push32((uint32_t)(ECX));
  /* 105b37cd call 0x105aa820 */
  push32(0x105b37d2u); f_105aa820();
  /* 105b37d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b37d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b37d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105b37dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b37df jmp 0x105b379f */
  goto L_105b379f;
L_105b37e1:;
  /* 105b37e1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b37e8 jmp 0x105b37f3 */
  goto L_105b37f3;
L_105b37ea:;
  /* 105b37ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b37ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b37f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105b37f3:;
  /* 105b37f3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b37f7 jae 0x105b382d */
  if (!C.cf) goto L_105b382d;
  /* 105b37f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b37fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b37ff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 105b3803 push eax */
  push32((uint32_t)(EAX));
  /* 105b3804 call 0x105aa820 */
  push32(0x105b3809u); f_105aa820();
  /* 105b3809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b380c mov esi, eax */
  ESI = (EAX);
  /* 105b380e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3811 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3814 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105b3818 push eax */
  push32((uint32_t)(EAX));
  /* 105b3819 call 0x105aa820 */
  push32(0x105b381eu); f_105aa820();
  /* 105b381e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3821 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3824 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105b3828 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b382b jmp 0x105b37ea */
  goto L_105b37ea;
L_105b382d:;
  /* 105b382d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3830 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 105b3836 push eax */
  push32((uint32_t)(EAX));
  /* 105b3837 call 0x105aa820 */
  push32(0x105b383cu); f_105aa820();
  /* 105b383c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b383f mov esi, eax */
  ESI = (EAX);
  /* 105b3841 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3844 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 105b384a push edx */
  push32((uint32_t)(EDX));
  /* 105b384b call 0x105aa820 */
  push32(0x105b3850u); f_105aa820();
  /* 105b3850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3853 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3856 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105b385a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b385d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3860 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 105b3866 push edx */
  push32((uint32_t)(EDX));
  /* 105b3867 call 0x105aa820 */
  push32(0x105b386cu); f_105aa820();
  /* 105b386c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b386f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b3872 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105b3876 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b3879 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b387c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 105b3882 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3883 call 0x105aa820 */
  push32(0x105b3888u); f_105aa820();
  /* 105b3888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b388b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b388e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105b3892 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b3895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3898 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 105b389e push edx */
  push32((uint32_t)(EDX));
  /* 105b389f call 0x105aa820 */
  push32(0x105b38a4u); f_105aa820();
  /* 105b38a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b38a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b38aa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105b38ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b38b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b38b4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b38b9 push eax */
  push32((uint32_t)(EAX));
  /* 105b38ba call 0x105a79d0 */
  push32(0x105b38bfu); f_105a79d0();
  /* 105b38bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b38c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b38c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b38c9 je 0x105b3ae6 */
  if (C.zf) goto L_105b3ae6;
  /* 105b38cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b38d2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105b38d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b38d8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b38de mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b38e1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 105b38e6 mov eax, dword ptr [0x105d1ca8] */
  EAX = (r32((uint32_t)(0x105d1ca8)));
  /* 105b38eb push eax */
  push32((uint32_t)(EAX));
  /* 105b38ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b38ef push ecx */
  push32((uint32_t)(ECX));
  /* 105b38f0 call 0x105aeb80 */
  push32(0x105b38f5u); f_105aeb80();
  /* 105b38f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b38f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b38ff jmp 0x105b390a */
  goto L_105b390a;
L_105b3901:;
  /* 105b3901 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3904 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3907 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b390a:;
  /* 105b390a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b390e jae 0x105b397e */
  if (!C.cf) goto L_105b397e;
  /* 105b3910 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b3916 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3919 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 105b391c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b391f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3922 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105b3925 push edx */
  push32((uint32_t)(EDX));
  /* 105b3926 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3929 push eax */
  push32((uint32_t)(EAX));
  /* 105b392a call 0x105aa9a0 */
  push32(0x105b392fu); f_105aa9a0();
  /* 105b392f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3932 push eax */
  push32((uint32_t)(EAX));
  /* 105b3933 call 0x105aa820 */
  push32(0x105b3938u); f_105aa820();
  /* 105b3938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b393b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b393e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105b3942 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b3945 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3948 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b394b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b394e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 105b3952 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3958 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 105b395c push edx */
  push32((uint32_t)(EDX));
  /* 105b395d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3960 push eax */
  push32((uint32_t)(EAX));
  /* 105b3961 call 0x105aa9a0 */
  push32(0x105b3966u); f_105aa9a0();
  /* 105b3966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3969 push eax */
  push32((uint32_t)(EAX));
  /* 105b396a call 0x105aa820 */
  push32(0x105b396fu); f_105aa820();
  /* 105b396f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3972 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3975 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105b3979 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b397c jmp 0x105b3901 */
  goto L_105b3901;
L_105b397e:;
  /* 105b397e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b3985 jmp 0x105b3990 */
  goto L_105b3990;
L_105b3987:;
  /* 105b3987 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b398a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b398d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105b3990:;
  /* 105b3990 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3994 jae 0x105b3a06 */
  if (!C.cf) goto L_105b3a06;
  /* 105b3996 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3999 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b399c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b399f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 105b39a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b39a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b39a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 105b39ad push eax */
  push32((uint32_t)(EAX));
  /* 105b39ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b39b1 push ecx */
  push32((uint32_t)(ECX));
  /* 105b39b2 call 0x105aa9a0 */
  push32(0x105b39b7u); f_105aa9a0();
  /* 105b39b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b39ba push eax */
  push32((uint32_t)(EAX));
  /* 105b39bb call 0x105aa820 */
  push32(0x105b39c0u); f_105aa820();
  /* 105b39c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b39c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b39c6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105b39ca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b39cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b39d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b39d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b39d6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 105b39da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b39dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b39e0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105b39e4 push eax */
  push32((uint32_t)(EAX));
  /* 105b39e5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b39e8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b39e9 call 0x105aa9a0 */
  push32(0x105b39eeu); f_105aa9a0();
  /* 105b39ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b39f1 push eax */
  push32((uint32_t)(EAX));
  /* 105b39f2 call 0x105aa820 */
  push32(0x105b39f7u); f_105aa820();
  /* 105b39f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b39fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b39fd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105b3a01 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b3a04 jmp 0x105b3987 */
  goto L_105b3987;
L_105b3a06:;
  /* 105b3a06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b3a09 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a0c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 105b3a12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3a15 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 105b3a1b push ecx */
  push32((uint32_t)(ECX));
  /* 105b3a1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a1f push edx */
  push32((uint32_t)(EDX));
  /* 105b3a20 call 0x105aa9a0 */
  push32(0x105b3a25u); f_105aa9a0();
  /* 105b3a25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3a28 push eax */
  push32((uint32_t)(EAX));
  /* 105b3a29 call 0x105aa820 */
  push32(0x105b3a2eu); f_105aa820();
  /* 105b3a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3a31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a34 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105b3a38 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b3a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b3a3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a41 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 105b3a47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3a4a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 105b3a50 push eax */
  push32((uint32_t)(EAX));
  /* 105b3a51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a54 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3a55 call 0x105aa9a0 */
  push32(0x105b3a5au); f_105aa9a0();
  /* 105b3a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3a5d push eax */
  push32((uint32_t)(EAX));
  /* 105b3a5e call 0x105aa820 */
  push32(0x105b3a63u); f_105aa820();
  /* 105b3a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3a66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a69 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105b3a6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b3a70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b3a73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a76 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 105b3a7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3a7f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 105b3a85 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3a86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a89 push edx */
  push32((uint32_t)(EDX));
  /* 105b3a8a call 0x105aa9a0 */
  push32(0x105b3a8fu); f_105aa9a0();
  /* 105b3a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3a92 push eax */
  push32((uint32_t)(EAX));
  /* 105b3a93 call 0x105aa820 */
  push32(0x105b3a98u); f_105aa820();
  /* 105b3a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3a9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3a9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105b3aa2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b3aa5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b3aa8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3aab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 105b3ab1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3ab4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 105b3aba push eax */
  push32((uint32_t)(EAX));
  /* 105b3abb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3abe push ecx */
  push32((uint32_t)(ECX));
  /* 105b3abf call 0x105aa9a0 */
  push32(0x105b3ac4u); f_105aa9a0();
  /* 105b3ac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3ac7 push eax */
  push32((uint32_t)(EAX));
  /* 105b3ac8 call 0x105aa820 */
  push32(0x105b3acdu); f_105aa820();
  /* 105b3acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3ad0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3ad3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105b3ad7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b3ada mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b3add mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b3ae0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_105b3ae6:;
  /* 105b3ae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b3ae9 pop esi */
  ESI = (pop32());
  /* 105b3aea mov esp, ebp */
  ESP = (EBP);
  /* 105b3aec pop ebp */
  EBP = (pop32());
  /* 105b3aed ret  */
  ESPCHK(0x105b3780u, _esp0);
  ESP += 4; return;
}

/* FUN_10013af0 @ 0x105b3af0 (31 bytes, 15 insns) */
void f_105b3af0(void) {
  FTRACE(0x105b3af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3af0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3af1 mov ebp, esp */
  EBP = (ESP);
  /* 105b3af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b3af5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3af8 push eax */
  push32((uint32_t)(EAX));
  /* 105b3af9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3afc push ecx */
  push32((uint32_t)(ECX));
  /* 105b3afd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3b00 push edx */
  push32((uint32_t)(EDX));
  /* 105b3b01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3b04 push eax */
  push32((uint32_t)(EAX));
  /* 105b3b05 call 0x105b3b10 */
  push32(0x105b3b0au); f_105b3b10();
  /* 105b3b0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3b0d pop ebp */
  EBP = (pop32());
  /* 105b3b0e ret  */
  ESPCHK(0x105b3af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x105b3b10 (394 bytes, 123 insns) */
void f_105b3b10(void) {
  FTRACE(0x105b3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3b11 mov ebp, esp */
  EBP = (ESP);
  /* 105b3b13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3b16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3b19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b3b1c push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105b3b21 call dword ptr [0x105d5224] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5224))), 0x105b3b27u);
  /* 105b3b27 cmp dword ptr [0x105d2d1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3b2e je 0x105b3b4e */
  if (C.zf) goto L_105b3b4e;
  /* 105b3b30 push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105b3b35 call dword ptr [0x105d5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5218))), 0x105b3b3bu);
  /* 105b3b3b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b3b3d call 0x105abda0 */
  push32(0x105b3b42u); f_105abda0();
  /* 105b3b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3b45 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105b3b4c jmp 0x105b3b55 */
  goto L_105b3b55;
L_105b3b4e:;
  /* 105b3b4e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105b3b55:;
  /* 105b3b55 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3b59 jne 0x105b3b66 */
  if (!C.zf) goto L_105b3b66;
  /* 105b3b5b mov ecx, dword ptr [0x105d1ca8] */
  ECX = (r32((uint32_t)(0x105d1ca8)));
  /* 105b3b61 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105b3b64 jmp 0x105b3b6c */
  goto L_105b3b6c;
L_105b3b66:;
  /* 105b3b66 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3b69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b3b6c:;
  /* 105b3b6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b3b6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b3b72:;
  /* 105b3b72 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3b76 jbe 0x105b3c63 */
  if ((C.cf||C.zf)) goto L_105b3c63;
  /* 105b3b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3b7f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b3b81 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 105b3b84 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b3b88 je 0x105b3b92 */
  if (C.zf) goto L_105b3b92;
  /* 105b3b8a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b3b8e je 0x105b3b97 */
  if (C.zf) goto L_105b3b97;
  /* 105b3b90 jmp 0x105b3bf1 */
  goto L_105b3bf1;
L_105b3b92:;
  /* 105b3b92 jmp 0x105b3c63 */
  goto L_105b3c63;
L_105b3b97:;
  /* 105b3b97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3b9d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 105b3ba0 mov dword ptr [0x105d2d08], 0 */
  w32((uint32_t)(0x105d2d08), (0x0u));
  /* 105b3baa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3bad movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b3bb0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3bb3 jne 0x105b3bc8 */
  if (!C.zf) goto L_105b3bc8;
  /* 105b3bb5 mov dword ptr [0x105d2d08], 1 */
  w32((uint32_t)(0x105d2d08), (0x1u));
  /* 105b3bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3bc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3bc5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105b3bc8:;
  /* 105b3bc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b3bcb push ecx */
  push32((uint32_t)(ECX));
  /* 105b3bcc lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 105b3bcf push edx */
  push32((uint32_t)(EDX));
  /* 105b3bd0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 105b3bd3 push eax */
  push32((uint32_t)(EAX));
  /* 105b3bd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3bd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3bdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b3bdd push eax */
  push32((uint32_t)(EAX));
  /* 105b3bde call 0x105b3ca0 */
  push32(0x105b3be3u); f_105b3ca0();
  /* 105b3be3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3be6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3be9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3bec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105b3bef jmp 0x105b3c5e */
  goto L_105b3c5e;
L_105b3bf1:;
  /* 105b3bf1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b3bf6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b3bf8 mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b3bfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b3c00 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b3c04 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 105b3c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b3c0c je 0x105b3c39 */
  if (C.zf) goto L_105b3c39;
  /* 105b3c0e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3c12 jbe 0x105b3c39 */
  if ((C.cf||C.zf)) goto L_105b3c39;
  /* 105b3c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3c17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3c1a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b3c1c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105b3c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3c21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3c24 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b3c27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3c2a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3c2d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105b3c30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3c33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3c36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105b3c39:;
  /* 105b3c39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3c3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3c3f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b3c41 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105b3c43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3c46 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3c49 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b3c4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3c4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3c52 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105b3c55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3c58 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3c5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105b3c5e:;
  /* 105b3c5e jmp 0x105b3b72 */
  goto L_105b3b72;
L_105b3c63:;
  /* 105b3c63 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3c67 je 0x105b3c75 */
  if (C.zf) goto L_105b3c75;
  /* 105b3c69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b3c6b call 0x105abe40 */
  push32(0x105b3c70u); f_105abe40();
  /* 105b3c70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3c73 jmp 0x105b3c80 */
  goto L_105b3c80;
L_105b3c75:;
  /* 105b3c75 push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105b3c7a call dword ptr [0x105d5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5218))), 0x105b3c80u);
L_105b3c80:;
  /* 105b3c80 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3c84 jbe 0x105b3c94 */
  if ((C.cf||C.zf)) goto L_105b3c94;
  /* 105b3c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b3c89 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105b3c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3c8f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3c92 jmp 0x105b3c96 */
  goto L_105b3c96;
L_105b3c94:;
  /* 105b3c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b3c96:;
  /* 105b3c96 mov esp, ebp */
  ESP = (EBP);
  /* 105b3c98 pop ebp */
  EBP = (pop32());
  /* 105b3c99 ret  */
  ESPCHK(0x105b3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ca0 @ 0x105b3ca0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_105b3ca0(void) {
  FTRACE(0x105b3ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b3ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b3ca1 mov ebp, esp */
  EBP = (ESP);
  /* 105b3ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3ca6 push esi */
  push32((uint32_t)(ESI));
  /* 105b3ca7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 105b3cab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b3cae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3cb1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3cb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b3cb7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3cbb ja 0x105b4208 */
  if ((!C.cf&&!C.zf)) goto L_105b4208;
  /* 105b3cc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b3cc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b3cc6 mov dl, byte ptr [eax + 0x105b4269] */
  DL = (r8((uint32_t)(EAX + 0x105b4269)));
  /* 105b3ccc jmp dword ptr [edx*4 + 0x105b420d] */
  switch (EDX) {
    case 0: goto L_105b41e6;
    case 1: goto L_105b3cf5;
    case 2: goto L_105b3d3b;
    case 3: goto L_105b3e88;
    case 4: goto L_105b3eb0;
    case 5: goto L_105b3f4f;
    case 6: goto L_105b3fbb;
    case 7: goto L_105b3fe4;
    case 8: goto L_105b4025;
    case 9: goto L_105b4107;
    case 10: goto L_105b416e;
    case 11: goto L_105b41bb;
    case 12: goto L_105b3cd3;
    case 13: goto L_105b3d18;
    case 14: goto L_105b3d5e;
    case 15: goto L_105b3e5e;
    case 16: goto L_105b3ef5;
    case 17: goto L_105b3f22;
    case 18: goto L_105b3f77;
    case 19: goto L_105b3ffb;
    case 20: goto L_105b40a9;
    case 21: goto L_105b4138;
    case 22: goto L_105b4208;
    default: x86_unimpl("switch@0x105b3ccc out of table"); return;
  }
L_105b3cd3:;
  /* 105b3cd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3cd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3cda push edx */
  push32((uint32_t)(EDX));
  /* 105b3cdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3cde mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105b3ce1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3ce4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105b3ce7 push eax */
  push32((uint32_t)(EAX));
  /* 105b3ce8 call 0x105b42c0 */
  push32(0x105b3cedu); f_105b42c0();
  /* 105b3ced add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3cf0 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3cf5:;
  /* 105b3cf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3cf9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3cfc push edx */
  push32((uint32_t)(EDX));
  /* 105b3cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3d00 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105b3d03 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3d06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 105b3d0a push eax */
  push32((uint32_t)(EAX));
  /* 105b3d0b call 0x105b42c0 */
  push32(0x105b3d10u); f_105b42c0();
  /* 105b3d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3d13 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3d18:;
  /* 105b3d18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3d1b push ecx */
  push32((uint32_t)(ECX));
  /* 105b3d1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3d1f push edx */
  push32((uint32_t)(EDX));
  /* 105b3d20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3d23 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105b3d26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3d29 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 105b3d2d push eax */
  push32((uint32_t)(EAX));
  /* 105b3d2e call 0x105b42c0 */
  push32(0x105b3d33u); f_105b42c0();
  /* 105b3d33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3d36 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3d3b:;
  /* 105b3d3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3d3e push ecx */
  push32((uint32_t)(ECX));
  /* 105b3d3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3d42 push edx */
  push32((uint32_t)(EDX));
  /* 105b3d43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3d46 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105b3d49 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3d4c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105b3d50 push eax */
  push32((uint32_t)(EAX));
  /* 105b3d51 call 0x105b42c0 */
  push32(0x105b3d56u); f_105b42c0();
  /* 105b3d56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3d59 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3d5e:;
  /* 105b3d5e cmp dword ptr [0x105d2d08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3d65 je 0x105b3de6 */
  if (C.zf) goto L_105b3de6;
  /* 105b3d67 mov dword ptr [0x105d2d08], 0 */
  w32((uint32_t)(0x105d2d08), (0x0u));
  /* 105b3d71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3d74 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3d75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3d78 push edx */
  push32((uint32_t)(EDX));
  /* 105b3d79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3d7c push eax */
  push32((uint32_t)(EAX));
  /* 105b3d7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3d80 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3d81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3d84 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 105b3d8a push eax */
  push32((uint32_t)(EAX));
  /* 105b3d8b call 0x105b4470 */
  push32(0x105b3d90u); f_105b4470();
  /* 105b3d90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3d93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3d96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3d99 jne 0x105b3da0 */
  if (!C.zf) goto L_105b3da0;
  /* 105b3d9b jmp 0x105b4208 */
  goto L_105b4208;
L_105b3da0:;
  /* 105b3da0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3da3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b3da5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 105b3da8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3dab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b3dad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3db0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3db3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b3db5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3db8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b3dba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3dbd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3dc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b3dc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3dc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3dc9 push edx */
  push32((uint32_t)(EDX));
  /* 105b3dca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3dcd push eax */
  push32((uint32_t)(EAX));
  /* 105b3dce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3dd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3dd5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 105b3ddb push eax */
  push32((uint32_t)(EAX));
  /* 105b3ddc call 0x105b4470 */
  push32(0x105b3de1u); f_105b4470();
  /* 105b3de1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3de4 jmp 0x105b3e59 */
  goto L_105b3e59;
L_105b3de6:;
  /* 105b3de6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3de9 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3dea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3ded push edx */
  push32((uint32_t)(EDX));
  /* 105b3dee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3df1 push eax */
  push32((uint32_t)(EAX));
  /* 105b3df2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3df5 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3df6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3df9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 105b3dff push eax */
  push32((uint32_t)(EAX));
  /* 105b3e00 call 0x105b4470 */
  push32(0x105b3e05u); f_105b4470();
  /* 105b3e05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3e08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3e0b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3e0e jne 0x105b3e15 */
  if (!C.zf) goto L_105b3e15;
  /* 105b3e10 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3e15:;
  /* 105b3e15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3e18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b3e1a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 105b3e1d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3e20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b3e22 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3e25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3e28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b3e2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3e2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b3e2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b3e32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3e35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b3e37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3e3a push ecx */
  push32((uint32_t)(ECX));
  /* 105b3e3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3e3e push edx */
  push32((uint32_t)(EDX));
  /* 105b3e3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3e42 push eax */
  push32((uint32_t)(EAX));
  /* 105b3e43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3e46 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3e47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3e4a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 105b3e50 push eax */
  push32((uint32_t)(EAX));
  /* 105b3e51 call 0x105b4470 */
  push32(0x105b3e56u); f_105b4470();
  /* 105b3e56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b3e59:;
  /* 105b3e59 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3e5e:;
  /* 105b3e5e mov ecx, dword ptr [0x105d2d08] */
  ECX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3e64 mov dword ptr [0x105d2d18], ecx */
  w32((uint32_t)(0x105d2d18), (ECX));
  /* 105b3e6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3e6d push edx */
  push32((uint32_t)(EDX));
  /* 105b3e6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3e71 push eax */
  push32((uint32_t)(EAX));
  /* 105b3e72 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3e74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3e77 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105b3e7a push edx */
  push32((uint32_t)(EDX));
  /* 105b3e7b call 0x105b4310 */
  push32(0x105b3e80u); f_105b4310();
  /* 105b3e80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3e83 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3e88:;
  /* 105b3e88 mov eax, dword ptr [0x105d2d08] */
  EAX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3e8d mov dword ptr [0x105d2d18], eax */
  w32((uint32_t)(0x105d2d18), (EAX));
  /* 105b3e92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3e95 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3e96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3e99 push edx */
  push32((uint32_t)(EDX));
  /* 105b3e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3e9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3e9f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105b3ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3ea3 call 0x105b4310 */
  push32(0x105b3ea8u); f_105b4310();
  /* 105b3ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3eab jmp 0x105b4208 */
  goto L_105b4208;
L_105b3eb0:;
  /* 105b3eb0 mov edx, dword ptr [0x105d2d08] */
  EDX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3eb6 mov dword ptr [0x105d2d18], edx */
  w32((uint32_t)(0x105d2d18), (EDX));
  /* 105b3ebc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3ebf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 105b3ec2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b3ec3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 105b3ec8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b3eca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b3ecd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3ed1 jne 0x105b3eda */
  if (!C.zf) goto L_105b3eda;
  /* 105b3ed3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_105b3eda:;
  /* 105b3eda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3edd push edx */
  push32((uint32_t)(EDX));
  /* 105b3ede mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3ee1 push eax */
  push32((uint32_t)(EAX));
  /* 105b3ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3ee4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b3ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3ee8 call 0x105b4310 */
  push32(0x105b3eedu); f_105b4310();
  /* 105b3eed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3ef0 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3ef5:;
  /* 105b3ef5 mov edx, dword ptr [0x105d2d08] */
  EDX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3efb mov dword ptr [0x105d2d18], edx */
  w32((uint32_t)(0x105d2d18), (EDX));
  /* 105b3f01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3f04 push eax */
  push32((uint32_t)(EAX));
  /* 105b3f05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3f08 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3f09 push 3 */
  push32((uint32_t)(0x3u));
  /* 105b3f0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3f0e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b3f11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3f14 push eax */
  push32((uint32_t)(EAX));
  /* 105b3f15 call 0x105b4310 */
  push32(0x105b3f1au); f_105b4310();
  /* 105b3f1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3f1d jmp 0x105b4208 */
  goto L_105b4208;
L_105b3f22:;
  /* 105b3f22 mov ecx, dword ptr [0x105d2d08] */
  ECX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3f28 mov dword ptr [0x105d2d18], ecx */
  w32((uint32_t)(0x105d2d18), (ECX));
  /* 105b3f2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3f31 push edx */
  push32((uint32_t)(EDX));
  /* 105b3f32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3f35 push eax */
  push32((uint32_t)(EAX));
  /* 105b3f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3f38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3f3b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105b3f3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3f41 push edx */
  push32((uint32_t)(EDX));
  /* 105b3f42 call 0x105b4310 */
  push32(0x105b3f47u); f_105b4310();
  /* 105b3f47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3f4a jmp 0x105b4208 */
  goto L_105b4208;
L_105b3f4f:;
  /* 105b3f4f mov eax, dword ptr [0x105d2d08] */
  EAX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3f54 mov dword ptr [0x105d2d18], eax */
  w32((uint32_t)(0x105d2d18), (EAX));
  /* 105b3f59 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3f5c push ecx */
  push32((uint32_t)(ECX));
  /* 105b3f5d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3f60 push edx */
  push32((uint32_t)(EDX));
  /* 105b3f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3f63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3f66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105b3f69 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3f6a call 0x105b4310 */
  push32(0x105b3f6fu); f_105b4310();
  /* 105b3f6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3f72 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3f77:;
  /* 105b3f77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3f7a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b3f7e jg 0x105b3f9c */
  if ((!C.zf&&C.sf==C.of)) goto L_105b3f9c;
  /* 105b3f80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3f83 push eax */
  push32((uint32_t)(EAX));
  /* 105b3f84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3f87 push ecx */
  push32((uint32_t)(ECX));
  /* 105b3f88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3f8b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 105b3f91 push eax */
  push32((uint32_t)(EAX));
  /* 105b3f92 call 0x105b42c0 */
  push32(0x105b3f97u); f_105b42c0();
  /* 105b3f97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3f9a jmp 0x105b3fb6 */
  goto L_105b3fb6;
L_105b3f9c:;
  /* 105b3f9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3f9f push ecx */
  push32((uint32_t)(ECX));
  /* 105b3fa0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3fa3 push edx */
  push32((uint32_t)(EDX));
  /* 105b3fa4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b3fa7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 105b3fad push ecx */
  push32((uint32_t)(ECX));
  /* 105b3fae call 0x105b42c0 */
  push32(0x105b3fb3u); f_105b42c0();
  /* 105b3fb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b3fb6:;
  /* 105b3fb6 jmp 0x105b4208 */
  goto L_105b4208;
L_105b3fbb:;
  /* 105b3fbb mov edx, dword ptr [0x105d2d08] */
  EDX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3fc1 mov dword ptr [0x105d2d18], edx */
  w32((uint32_t)(0x105d2d18), (EDX));
  /* 105b3fc7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b3fca push eax */
  push32((uint32_t)(EAX));
  /* 105b3fcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b3fce push ecx */
  push32((uint32_t)(ECX));
  /* 105b3fcf push 2 */
  push32((uint32_t)(0x2u));
  /* 105b3fd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3fd4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b3fd6 push eax */
  push32((uint32_t)(EAX));
  /* 105b3fd7 call 0x105b4310 */
  push32(0x105b3fdcu); f_105b4310();
  /* 105b3fdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b3fdf jmp 0x105b4208 */
  goto L_105b4208;
L_105b3fe4:;
  /* 105b3fe4 mov ecx, dword ptr [0x105d2d08] */
  ECX = (r32((uint32_t)(0x105d2d08)));
  /* 105b3fea mov dword ptr [0x105d2d18], ecx */
  w32((uint32_t)(0x105d2d18), (ECX));
  /* 105b3ff0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b3ff3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 105b3ff6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b3ff9 jmp 0x105b404d */
  goto L_105b404d;
L_105b3ffb:;
  /* 105b3ffb mov ecx, dword ptr [0x105d2d08] */
  ECX = (r32((uint32_t)(0x105d2d08)));
  /* 105b4001 mov dword ptr [0x105d2d18], ecx */
  w32((uint32_t)(0x105d2d18), (ECX));
  /* 105b4007 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b400a push edx */
  push32((uint32_t)(EDX));
  /* 105b400b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b400e push eax */
  push32((uint32_t)(EAX));
  /* 105b400f push 1 */
  push32((uint32_t)(0x1u));
  /* 105b4011 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4014 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105b4017 push edx */
  push32((uint32_t)(EDX));
  /* 105b4018 call 0x105b4310 */
  push32(0x105b401du); f_105b4310();
  /* 105b401d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4020 jmp 0x105b4208 */
  goto L_105b4208;
L_105b4025:;
  /* 105b4025 mov eax, dword ptr [0x105d2d08] */
  EAX = (r32((uint32_t)(0x105d2d08)));
  /* 105b402a mov dword ptr [0x105d2d18], eax */
  w32((uint32_t)(0x105d2d18), (EAX));
  /* 105b402f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4032 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4036 jne 0x105b4041 */
  if (!C.zf) goto L_105b4041;
  /* 105b4038 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 105b403f jmp 0x105b404d */
  goto L_105b404d;
L_105b4041:;
  /* 105b4041 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4044 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 105b4047 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b404a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105b404d:;
  /* 105b404d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4050 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105b4053 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4056 jge 0x105b4061 */
  if ((C.sf==C.of)) goto L_105b4061;
  /* 105b4058 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b405f jmp 0x105b408e */
  goto L_105b408e;
L_105b4061:;
  /* 105b4061 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4064 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105b4067 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4068 mov ecx, 7 */
  ECX = (0x7u);
  /* 105b406d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b406f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b4072 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4075 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b4078 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4079 mov ecx, 7 */
  ECX = (0x7u);
  /* 105b407e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b4080 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4083 jl 0x105b408e */
  if ((C.sf!=C.of)) goto L_105b408e;
  /* 105b4085 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b408b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105b408e:;
  /* 105b408e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4091 push eax */
  push32((uint32_t)(EAX));
  /* 105b4092 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4095 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4096 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b4098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b409b push edx */
  push32((uint32_t)(EDX));
  /* 105b409c call 0x105b4310 */
  push32(0x105b40a1u); f_105b4310();
  /* 105b40a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b40a4 jmp 0x105b4208 */
  goto L_105b4208;
L_105b40a9:;
  /* 105b40a9 cmp dword ptr [0x105d2d08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b40b0 je 0x105b40e0 */
  if (C.zf) goto L_105b40e0;
  /* 105b40b2 mov dword ptr [0x105d2d08], 0 */
  w32((uint32_t)(0x105d2d08), (0x0u));
  /* 105b40bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b40bf push eax */
  push32((uint32_t)(EAX));
  /* 105b40c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b40c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b40c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b40c7 push edx */
  push32((uint32_t)(EDX));
  /* 105b40c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b40cb push eax */
  push32((uint32_t)(EAX));
  /* 105b40cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b40cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 105b40d5 push edx */
  push32((uint32_t)(EDX));
  /* 105b40d6 call 0x105b4470 */
  push32(0x105b40dbu); f_105b4470();
  /* 105b40db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b40de jmp 0x105b4102 */
  goto L_105b4102;
L_105b40e0:;
  /* 105b40e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b40e3 push eax */
  push32((uint32_t)(EAX));
  /* 105b40e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b40e7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b40e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b40eb push edx */
  push32((uint32_t)(EDX));
  /* 105b40ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b40ef push eax */
  push32((uint32_t)(EAX));
  /* 105b40f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b40f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 105b40f9 push edx */
  push32((uint32_t)(EDX));
  /* 105b40fa call 0x105b4470 */
  push32(0x105b40ffu); f_105b4470();
  /* 105b40ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b4102:;
  /* 105b4102 jmp 0x105b4208 */
  goto L_105b4208;
L_105b4107:;
  /* 105b4107 mov dword ptr [0x105d2d08], 0 */
  w32((uint32_t)(0x105d2d08), (0x0u));
  /* 105b4111 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b4114 push eax */
  push32((uint32_t)(EAX));
  /* 105b4115 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4118 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4119 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b411c push edx */
  push32((uint32_t)(EDX));
  /* 105b411d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4120 push eax */
  push32((uint32_t)(EAX));
  /* 105b4121 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b4124 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 105b412a push edx */
  push32((uint32_t)(EDX));
  /* 105b412b call 0x105b4470 */
  push32(0x105b4130u); f_105b4470();
  /* 105b4130 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4133 jmp 0x105b4208 */
  goto L_105b4208;
L_105b4138:;
  /* 105b4138 mov eax, dword ptr [0x105d2d08] */
  EAX = (r32((uint32_t)(0x105d2d08)));
  /* 105b413d mov dword ptr [0x105d2d18], eax */
  w32((uint32_t)(0x105d2d18), (EAX));
  /* 105b4142 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4145 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 105b4148 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4149 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 105b414e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b4150 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b4153 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4156 push edx */
  push32((uint32_t)(EDX));
  /* 105b4157 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b415a push eax */
  push32((uint32_t)(EAX));
  /* 105b415b push 2 */
  push32((uint32_t)(0x2u));
  /* 105b415d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4160 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4161 call 0x105b4310 */
  push32(0x105b4166u); f_105b4310();
  /* 105b4166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4169 jmp 0x105b4208 */
  goto L_105b4208;
L_105b416e:;
  /* 105b416e mov edx, dword ptr [0x105d2d08] */
  EDX = (r32((uint32_t)(0x105d2d08)));
  /* 105b4174 mov dword ptr [0x105d2d18], edx */
  w32((uint32_t)(0x105d2d18), (EDX));
  /* 105b417a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b417d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 105b4180 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4181 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 105b4186 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b4188 mov ecx, eax */
  ECX = (EAX);
  /* 105b418a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b418d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b4190 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4193 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105b4196 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4197 mov esi, 0x64 */
  ESI = (0x64u);
  /* 105b419c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b419e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b41a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b41a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b41a6 push eax */
  push32((uint32_t)(EAX));
  /* 105b41a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b41aa push ecx */
  push32((uint32_t)(ECX));
  /* 105b41ab push 4 */
  push32((uint32_t)(0x4u));
  /* 105b41ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b41b0 push edx */
  push32((uint32_t)(EDX));
  /* 105b41b1 call 0x105b4310 */
  push32(0x105b41b6u); f_105b4310();
  /* 105b41b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b41b9 jmp 0x105b4208 */
  goto L_105b4208;
L_105b41bb:;
  /* 105b41bb call 0x105b52d0 */
  push32(0x105b41c0u); f_105b52d0();
  /* 105b41c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b41c3 push eax */
  push32((uint32_t)(EAX));
  /* 105b41c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b41c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105b41c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b41cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b41cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b41d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 105b41d4 mov ecx, dword ptr [eax*4 + 0x105d1e2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x105d1e2c)));
  /* 105b41db push ecx */
  push32((uint32_t)(ECX));
  /* 105b41dc call 0x105b42c0 */
  push32(0x105b41e1u); f_105b42c0();
  /* 105b41e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b41e4 jmp 0x105b4208 */
  goto L_105b4208;
L_105b41e6:;
  /* 105b41e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b41e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b41eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 105b41ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b41f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b41f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b41f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b41f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b41fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b41fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b4200 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4203 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4206 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105b4208:;
  /* 105b4208 pop esi */
  ESI = (pop32());
  /* 105b4209 mov esp, ebp */
  ESP = (EBP);
  /* 105b420b pop ebp */
  EBP = (pop32());
  /* 105b420c ret  */
  ESPCHK(0x105b3ca0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x105b42c0 (72 bytes, 30 insns) */
void f_105b42c0(void) {
  FTRACE(0x105b42c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b42c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b42c1 mov ebp, esp */
  EBP = (ESP);
L_105b42c3:;
  /* 105b42c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b42c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b42c9 je 0x105b4306 */
  if (C.zf) goto L_105b4306;
  /* 105b42cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b42ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b42d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b42d3 je 0x105b4306 */
  if (C.zf) goto L_105b4306;
  /* 105b42d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b42d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b42da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b42dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b42df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b42e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b42e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b42e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b42e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b42ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b42ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b42f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b42f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105b42f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b42fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b42fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b42ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4302 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b4304 jmp 0x105b42c3 */
  goto L_105b42c3;
L_105b4306:;
  /* 105b4306 pop ebp */
  EBP = (pop32());
  /* 105b4307 ret  */
  ESPCHK(0x105b42c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014310 @ 0x105b4310 (173 bytes, 64 insns) */
void f_105b4310(void) {
  FTRACE(0x105b4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4310 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4311 mov ebp, esp */
  EBP = (ESP);
  /* 105b4313 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b431b cmp dword ptr [0x105d2d18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4322 je 0x105b433a */
  if (C.zf) goto L_105b433a;
  /* 105b4324 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4327 push eax */
  push32((uint32_t)(EAX));
  /* 105b4328 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b432b push ecx */
  push32((uint32_t)(ECX));
  /* 105b432c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b432f push edx */
  push32((uint32_t)(EDX));
  /* 105b4330 call 0x105b43c0 */
  push32(0x105b4335u); f_105b43c0();
  /* 105b4335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4338 jmp 0x105b43b9 */
  goto L_105b43b9;
L_105b433a:;
  /* 105b433a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b433d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4340 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4342 jae 0x105b43b0 */
  if (!C.cf) goto L_105b43b0;
  /* 105b4344 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4347 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b434a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 105b434d jmp 0x105b4358 */
  goto L_105b4358;
L_105b434f:;
  /* 105b434f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4352 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4355 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_105b4358:;
  /* 105b4358 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b435b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b435e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b4360 je 0x105b4394 */
  if (C.zf) goto L_105b4394;
  /* 105b4362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4365 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4366 mov ecx, 0xa */
  ECX = (0xau);
  /* 105b436b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b436d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4370 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4373 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b4375 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4378 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 105b437b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b437e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b437f mov ecx, 0xa */
  ECX = (0xau);
  /* 105b4384 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b4386 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b4389 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b438c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b438f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b4392 jmp 0x105b434f */
  goto L_105b434f;
L_105b4394:;
  /* 105b4394 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4397 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b4399 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b439c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b439f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105b43a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b43a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b43a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b43a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b43ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105b43ae jmp 0x105b43b9 */
  goto L_105b43b9;
L_105b43b0:;
  /* 105b43b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b43b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105b43b9:;
  /* 105b43b9 mov esp, ebp */
  ESP = (EBP);
  /* 105b43bb pop ebp */
  EBP = (pop32());
  /* 105b43bc ret  */
  ESPCHK(0x105b4310u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x105b43c0 (172 bytes, 65 insns) */
void f_105b43c0(void) {
  FTRACE(0x105b43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b43c1 mov ebp, esp */
  EBP = (ESP);
  /* 105b43c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b43c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b43c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b43cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b43ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b43d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b43d4 jbe 0x105b441b */
  if ((C.cf||C.zf)) goto L_105b441b;
L_105b43d6:;
  /* 105b43d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b43d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b43da mov ecx, 0xa */
  ECX = (0xau);
  /* 105b43df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b43e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b43e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b43e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105b43e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b43ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b43ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b43f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b43f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b43f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b43fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b43fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b43ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4402 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b4403 mov ecx, 0xa */
  ECX = (0xau);
  /* 105b4408 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b440a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b440d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4411 jle 0x105b441b */
  if ((C.zf||C.sf!=C.of)) goto L_105b441b;
  /* 105b4413 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4416 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4419 ja 0x105b43d6 */
  if ((!C.cf&&!C.zf)) goto L_105b43d6;
L_105b441b:;
  /* 105b441b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b441e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b4420 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b4423 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4429 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105b442b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b442e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4431 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105b4434:;
  /* 105b4434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4437 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b4439 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 105b443c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b443f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b4442 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b4444 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b4446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4449 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b444c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b444f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b4452 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 105b4455 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 105b4457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b445a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b445d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b4460 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b4463 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4466 jb 0x105b4434 */
  if (C.cf) goto L_105b4434;
  /* 105b4468 mov esp, ebp */
  ESP = (EBP);
  /* 105b446a pop ebp */
  EBP = (pop32());
  /* 105b446b ret  */
  ESPCHK(0x105b43c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014470 @ 0x105b4470 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_105b4470(void) {
  FTRACE(0x105b4470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4470 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4471 mov ebp, esp */
  EBP = (ESP);
  /* 105b4473 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105b4476:;
  /* 105b4476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4479 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b447c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b447e je 0x105b48ec */
  if (C.zf) goto L_105b48ec;
  /* 105b4484 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4487 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b448a je 0x105b48ec */
  if (C.zf) goto L_105b48ec;
  /* 105b4490 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 105b4494 mov dword ptr [0x105d2d18], 0 */
  w32((uint32_t)(0x105d2d18), (0x0u));
  /* 105b449e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105b44a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b44a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b44ab jmp 0x105b44b6 */
  goto L_105b44b6;
L_105b44ad:;
  /* 105b44ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b44b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b44b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105b44b6:;
  /* 105b44b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b44b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b44bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b44bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b44c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b44c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b44c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b44cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b44cd jne 0x105b44d1 */
  if (!C.zf) goto L_105b44d1;
  /* 105b44cf jmp 0x105b44ad */
  goto L_105b44ad;
L_105b44d1:;
  /* 105b44d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b44d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b44d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b44da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b44dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b44e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b44e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b44e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b44e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105b44ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b44f0 ja 0x105b4840 */
  if ((!C.cf&&!C.zf)) goto L_105b4840;
  /* 105b44f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b44f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b44fb mov al, byte ptr [ecx + 0x105b491c] */
  AL = (r8((uint32_t)(ECX + 0x105b491c)));
  /* 105b4501 jmp dword ptr [eax*4 + 0x105b48f0] */
  switch (EAX) {
    case 0: goto L_105b475f;
    case 1: goto L_105b4643;
    case 2: goto L_105b45ce;
    case 3: goto L_105b4508;
    case 4: goto L_105b4546;
    case 5: goto L_105b45a7;
    case 6: goto L_105b45f5;
    case 7: goto L_105b461c;
    case 8: goto L_105b468a;
    case 9: goto L_105b4584;
    case 10: goto L_105b4840;
    default: x86_unimpl("switch@0x105b4501 out of table"); return;
  }
L_105b4508:;
  /* 105b4508 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b450b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105b450e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b4511 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4514 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105b4517 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b451b ja 0x105b4541 */
  if ((!C.cf&&!C.zf)) goto L_105b4541;
  /* 105b451d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b4520 jmp dword ptr [ecx*4 + 0x105b496f] */
  switch (ECX) {
    case 0: goto L_105b4527;
    case 1: goto L_105b4531;
    case 2: goto L_105b4537;
    case 3: goto L_105b453d;
    case 4: goto L_105b4565;
    case 5: goto L_105b456f;
    case 6: goto L_105b4575;
    case 7: goto L_105b457b;
    default: x86_unimpl("switch@0x105b4520 out of table"); return;
  }
L_105b4527:;
  /* 105b4527 mov dword ptr [0x105d2d18], 1 */
  w32((uint32_t)(0x105d2d18), (0x1u));
L_105b4531:;
  /* 105b4531 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 105b4535 jmp 0x105b4541 */
  goto L_105b4541;
L_105b4537:;
  /* 105b4537 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 105b453b jmp 0x105b4541 */
  goto L_105b4541;
L_105b453d:;
  /* 105b453d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_105b4541:;
  /* 105b4541 jmp 0x105b4840 */
  goto L_105b4840;
L_105b4546:;
  /* 105b4546 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4549 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105b454c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b454f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4552 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105b4555 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4559 ja 0x105b457f */
  if ((!C.cf&&!C.zf)) goto L_105b457f;
  /* 105b455b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b455e jmp dword ptr [ecx*4 + 0x105b497f] */
  switch (ECX) {
    case 0: goto L_105b4565;
    case 1: goto L_105b456f;
    case 2: goto L_105b4575;
    case 3: goto L_105b457b;
    default: x86_unimpl("switch@0x105b455e out of table"); return;
  }
L_105b4565:;
  /* 105b4565 mov dword ptr [0x105d2d18], 1 */
  w32((uint32_t)(0x105d2d18), (0x1u));
L_105b456f:;
  /* 105b456f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 105b4573 jmp 0x105b457f */
  goto L_105b457f;
L_105b4575:;
  /* 105b4575 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 105b4579 jmp 0x105b457f */
  goto L_105b457f;
L_105b457b:;
  /* 105b457b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_105b457f:;
  /* 105b457f jmp 0x105b4840 */
  goto L_105b4840;
L_105b4584:;
  /* 105b4584 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4587 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105b458a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b458e je 0x105b4598 */
  if (C.zf) goto L_105b4598;
  /* 105b4590 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4594 je 0x105b459e */
  if (C.zf) goto L_105b459e;
  /* 105b4596 jmp 0x105b45a2 */
  goto L_105b45a2;
L_105b4598:;
  /* 105b4598 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 105b459c jmp 0x105b45a2 */
  goto L_105b45a2;
L_105b459e:;
  /* 105b459e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_105b45a2:;
  /* 105b45a2 jmp 0x105b4840 */
  goto L_105b4840;
L_105b45a7:;
  /* 105b45a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b45aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105b45ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b45b1 je 0x105b45bb */
  if (C.zf) goto L_105b45bb;
  /* 105b45b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b45b7 je 0x105b45c5 */
  if (C.zf) goto L_105b45c5;
  /* 105b45b9 jmp 0x105b45c9 */
  goto L_105b45c9;
L_105b45bb:;
  /* 105b45bb mov dword ptr [0x105d2d18], 1 */
  w32((uint32_t)(0x105d2d18), (0x1u));
L_105b45c5:;
  /* 105b45c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_105b45c9:;
  /* 105b45c9 jmp 0x105b4840 */
  goto L_105b4840;
L_105b45ce:;
  /* 105b45ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b45d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 105b45d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b45d8 je 0x105b45e2 */
  if (C.zf) goto L_105b45e2;
  /* 105b45da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b45de je 0x105b45ec */
  if (C.zf) goto L_105b45ec;
  /* 105b45e0 jmp 0x105b45f0 */
  goto L_105b45f0;
L_105b45e2:;
  /* 105b45e2 mov dword ptr [0x105d2d18], 1 */
  w32((uint32_t)(0x105d2d18), (0x1u));
L_105b45ec:;
  /* 105b45ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_105b45f0:;
  /* 105b45f0 jmp 0x105b4840 */
  goto L_105b4840;
L_105b45f5:;
  /* 105b45f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b45f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 105b45fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b45ff je 0x105b4609 */
  if (C.zf) goto L_105b4609;
  /* 105b4601 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4605 je 0x105b4613 */
  if (C.zf) goto L_105b4613;
  /* 105b4607 jmp 0x105b4617 */
  goto L_105b4617;
L_105b4609:;
  /* 105b4609 mov dword ptr [0x105d2d18], 1 */
  w32((uint32_t)(0x105d2d18), (0x1u));
L_105b4613:;
  /* 105b4613 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_105b4617:;
  /* 105b4617 jmp 0x105b4840 */
  goto L_105b4840;
L_105b461c:;
  /* 105b461c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b461f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 105b4622 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4626 je 0x105b4630 */
  if (C.zf) goto L_105b4630;
  /* 105b4628 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b462c je 0x105b463a */
  if (C.zf) goto L_105b463a;
  /* 105b462e jmp 0x105b463e */
  goto L_105b463e;
L_105b4630:;
  /* 105b4630 mov dword ptr [0x105d2d18], 1 */
  w32((uint32_t)(0x105d2d18), (0x1u));
L_105b463a:;
  /* 105b463a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_105b463e:;
  /* 105b463e jmp 0x105b4840 */
  goto L_105b4840;
L_105b4643:;
  /* 105b4643 push 0x105cf3d0 */
  push32((uint32_t)(0x105cf3d0u));
  /* 105b4648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b464b push ecx */
  push32((uint32_t)(ECX));
  /* 105b464c call 0x105b4ea0 */
  push32(0x105b4651u); f_105b4ea0();
  /* 105b4651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b4656 jne 0x105b4663 */
  if (!C.zf) goto L_105b4663;
  /* 105b4658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b465b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b465e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b4661 jmp 0x105b4681 */
  goto L_105b4681;
L_105b4663:;
  /* 105b4663 push 0x105cf3cc */
  push32((uint32_t)(0x105cf3ccu));
  /* 105b4668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b466b push eax */
  push32((uint32_t)(EAX));
  /* 105b466c call 0x105b4ea0 */
  push32(0x105b4671u); f_105b4ea0();
  /* 105b4671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b4676 jne 0x105b4681 */
  if (!C.zf) goto L_105b4681;
  /* 105b4678 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b467b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b467e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105b4681:;
  /* 105b4681 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 105b4685 jmp 0x105b4840 */
  goto L_105b4840;
L_105b468a:;
  /* 105b468a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b468d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4691 jg 0x105b46a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b46a1;
  /* 105b4693 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b4696 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 105b469c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105b469f jmp 0x105b46ad */
  goto L_105b46ad;
L_105b46a1:;
  /* 105b46a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b46a4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 105b46aa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105b46ad:;
  /* 105b46ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b46b1 jle 0x105b4754 */
  if ((C.zf||C.sf!=C.of)) goto L_105b4754;
  /* 105b46b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b46ba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b46bd jbe 0x105b4754 */
  if ((C.cf||C.zf)) goto L_105b4754;
  /* 105b46c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b46c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b46c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b46ca mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b46d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b46d2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b46d6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 105b46dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b46de je 0x105b4717 */
  if (C.zf) goto L_105b4717;
  /* 105b46e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b46e3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b46e6 jbe 0x105b4717 */
  if ((C.cf||C.zf)) goto L_105b4717;
  /* 105b46e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b46eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b46ed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b46f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b46f2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105b46f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b46f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b46f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b46fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b46ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b4701 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b4704 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4707 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105b470a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b470d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b470f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4712 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4715 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105b4717:;
  /* 105b4717 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b471a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b471c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b471f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b4721 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b4723 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4726 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b4728 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b472b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b472e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b4730 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b4733 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4736 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105b4739 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b473c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b473e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4741 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4744 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b4746 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4749 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b474c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105b474f jmp 0x105b46ad */
  goto L_105b46ad;
L_105b4754:;
  /* 105b4754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4757 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b475a jmp 0x105b4476 */
  goto L_105b4476;
L_105b475f:;
  /* 105b475f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4762 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105b4765 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b4767 je 0x105b4832 */
  if (C.zf) goto L_105b4832;
  /* 105b476d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4770 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4773 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_105b4776:;
  /* 105b4776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4779 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b477c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b477e je 0x105b4830 */
  if (C.zf) goto L_105b4830;
  /* 105b4784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4787 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b478a je 0x105b4830 */
  if (C.zf) goto L_105b4830;
  /* 105b4790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4793 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b4796 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4799 jne 0x105b47a9 */
  if (!C.zf) goto L_105b47a9;
  /* 105b479b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b479e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b47a1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105b47a4 jmp 0x105b4830 */
  goto L_105b4830;
L_105b47a9:;
  /* 105b47a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b47ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b47ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b47b0 mov edx, dword ptr [0x105d0de8] */
  EDX = (r32((uint32_t)(0x105d0de8)));
  /* 105b47b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b47b8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 105b47bc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 105b47c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b47c3 je 0x105b47fc */
  if (C.zf) goto L_105b47fc;
  /* 105b47c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b47c8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b47cb jbe 0x105b47fc */
  if ((C.cf||C.zf)) goto L_105b47fc;
  /* 105b47cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b47d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b47d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b47d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b47d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105b47d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b47dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b47de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b47e1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b47e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105b47e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b47e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b47ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b47ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b47f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b47f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b47f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b47fa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105b47fc:;
  /* 105b47fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b47ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b4801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4804 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b4806 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105b4808 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b480b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b480d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4813 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b4815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b481b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105b481e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4821 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b4823 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4826 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4829 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105b482b jmp 0x105b4776 */
  goto L_105b4776;
L_105b4830:;
  /* 105b4830 jmp 0x105b483b */
  goto L_105b483b;
L_105b4832:;
  /* 105b4832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4835 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4838 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105b483b:;
  /* 105b483b jmp 0x105b4476 */
  goto L_105b4476;
L_105b4840:;
  /* 105b4840 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105b4844 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b4846 je 0x105b486c */
  if (C.zf) goto L_105b486c;
  /* 105b4848 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b484b push edx */
  push32((uint32_t)(EDX));
  /* 105b484c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b484f push eax */
  push32((uint32_t)(EAX));
  /* 105b4850 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4853 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4854 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4857 push edx */
  push32((uint32_t)(EDX));
  /* 105b4858 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105b485b push eax */
  push32((uint32_t)(EAX));
  /* 105b485c call 0x105b3ca0 */
  push32(0x105b4861u); f_105b3ca0();
  /* 105b4861 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b4867 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105b486a jmp 0x105b48e7 */
  goto L_105b48e7;
L_105b486c:;
  /* 105b486c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b486f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4871 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b4873 mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b4879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b487b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b487f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 105b4885 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b4887 je 0x105b48b8 */
  if (C.zf) goto L_105b48b8;
  /* 105b4889 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b488c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b488e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4891 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b4893 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b4895 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4898 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b489a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b489d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b48a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105b48a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b48a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b48a8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105b48ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b48ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b48b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b48b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b48b6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_105b48b8:;
  /* 105b48b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b48bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b48bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b48c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b48c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105b48c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b48c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b48c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b48cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b48cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105b48d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b48d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b48d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b48da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b48dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b48df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b48e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b48e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105b48e7:;
  /* 105b48e7 jmp 0x105b4476 */
  goto L_105b4476;
L_105b48ec:;
  /* 105b48ec mov esp, ebp */
  ESP = (EBP);
  /* 105b48ee pop ebp */
  EBP = (pop32());
  /* 105b48ef ret  */
  ESPCHK(0x105b4470u, _esp0);
  ESP += 4; return;
}

/* FUN_10014990 @ 0x105b4990 (650 bytes, 178 insns) */
void f_105b4990(void) {
  FTRACE(0x105b4990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4990 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4991 mov ebp, esp */
  EBP = (ESP);
  /* 105b4993 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4999 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b499d jne 0x105b4af9 */
  if (!C.zf) goto L_105b4af9;
  /* 105b49a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b49a6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 105b49ac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 105b49b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b49b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b49bc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 105b49c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b49c8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 105b49ce push edx */
  push32((uint32_t)(EDX));
  /* 105b49cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b49d2 push eax */
  push32((uint32_t)(EAX));
  /* 105b49d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b49d6 push ecx */
  push32((uint32_t)(ECX));
  /* 105b49d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b49da push edx */
  push32((uint32_t)(EDX));
  /* 105b49db call 0x105b5db0 */
  push32(0x105b49e0u); f_105b5db0();
  /* 105b49e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b49e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b49e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b49ea jne 0x105b4a7f */
  if (!C.zf) goto L_105b4a7f;
  /* 105b49f0 call dword ptr [0x105d5250] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5250))), 0x105b49f6u);
  /* 105b49f6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b49f9 je 0x105b4a00 */
  if (C.zf) goto L_105b4a00;
  /* 105b49fb jmp 0x105b4add */
  goto L_105b4add;
L_105b4a00:;
  /* 105b4a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4a06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4a09 push eax */
  push32((uint32_t)(EAX));
  /* 105b4a0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4a0d push ecx */
  push32((uint32_t)(ECX));
  /* 105b4a0e call 0x105b5db0 */
  push32(0x105b4a13u); f_105b5db0();
  /* 105b4a13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4a16 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 105b4a1c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4a23 jne 0x105b4a2a */
  if (!C.zf) goto L_105b4a2a;
  /* 105b4a25 jmp 0x105b4add */
  goto L_105b4add;
L_105b4a2a:;
  /* 105b4a2a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 105b4a2c push 0x105cf3d8 */
  push32((uint32_t)(0x105cf3d8u));
  /* 105b4a31 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b4a33 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 105b4a39 push edx */
  push32((uint32_t)(EDX));
  /* 105b4a3a call 0x105a79f0 */
  push32(0x105b4a3fu); f_105a79f0();
  /* 105b4a3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4a42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b4a45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4a49 jne 0x105b4a50 */
  if (!C.zf) goto L_105b4a50;
  /* 105b4a4b jmp 0x105b4add */
  goto L_105b4add;
L_105b4a50:;
  /* 105b4a50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105b4a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4a59 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 105b4a5f push eax */
  push32((uint32_t)(EAX));
  /* 105b4a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4a63 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4a64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4a67 push edx */
  push32((uint32_t)(EDX));
  /* 105b4a68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4a6b push eax */
  push32((uint32_t)(EAX));
  /* 105b4a6c call 0x105b5db0 */
  push32(0x105b4a71u); f_105b5db0();
  /* 105b4a71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4a74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b4a77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4a7b jne 0x105b4a7f */
  if (!C.zf) goto L_105b4a7f;
  /* 105b4a7d jmp 0x105b4add */
  goto L_105b4add;
L_105b4a7f:;
  /* 105b4a7f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 105b4a81 push 0x105cf3d8 */
  push32((uint32_t)(0x105cf3d8u));
  /* 105b4a86 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b4a88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b4a8b push ecx */
  push32((uint32_t)(ECX));
  /* 105b4a8c call 0x105a79f0 */
  push32(0x105b4a91u); f_105a79f0();
  /* 105b4a91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4a94 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 105b4a9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105b4a9c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 105b4aa2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4aa5 jne 0x105b4aa9 */
  if (!C.zf) goto L_105b4aa9;
  /* 105b4aa7 jmp 0x105b4add */
  goto L_105b4add;
L_105b4aa9:;
  /* 105b4aa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b4aac push ecx */
  push32((uint32_t)(ECX));
  /* 105b4aad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4ab0 push edx */
  push32((uint32_t)(EDX));
  /* 105b4ab1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 105b4ab7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b4ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4aba call 0x105ab210 */
  push32(0x105b4abfu); f_105ab210();
  /* 105b4abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4ac2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4ac6 je 0x105b4ad6 */
  if (C.zf) goto L_105b4ad6;
  /* 105b4ac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b4aca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4acd push edx */
  push32((uint32_t)(EDX));
  /* 105b4ace call 0x105a8480 */
  push32(0x105b4ad3u); f_105a8480();
  /* 105b4ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b4ad6:;
  /* 105b4ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4ad8 jmp 0x105b4c16 */
  goto L_105b4c16;
L_105b4add:;
  /* 105b4add cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4ae1 je 0x105b4af1 */
  if (C.zf) goto L_105b4af1;
  /* 105b4ae3 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b4ae5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b4ae8 push eax */
  push32((uint32_t)(EAX));
  /* 105b4ae9 call 0x105a8480 */
  push32(0x105b4aeeu); f_105a8480();
  /* 105b4aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b4af1:;
  /* 105b4af1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b4af4 jmp 0x105b4c16 */
  goto L_105b4c16;
L_105b4af9:;
  /* 105b4af9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4afd jne 0x105b4c13 */
  if (!C.zf) goto L_105b4c13;
  /* 105b4b03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 105b4b0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4b10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 105b4b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4b18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105b4b1e push edx */
  push32((uint32_t)(EDX));
  /* 105b4b1f push 0x105d2c2c */
  push32((uint32_t)(0x105d2c2cu));
  /* 105b4b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4b27 push eax */
  push32((uint32_t)(EAX));
  /* 105b4b28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4b2b push ecx */
  push32((uint32_t)(ECX));
  /* 105b4b2c call 0x105b5c10 */
  push32(0x105b4b31u); f_105b5c10();
  /* 105b4b31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b4b36 jne 0x105b4b40 */
  if (!C.zf) goto L_105b4b40;
  /* 105b4b38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b4b3b jmp 0x105b4c16 */
  goto L_105b4c16;
L_105b4b40:;
  /* 105b4b40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105b4b46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105b4b49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 105b4b53 jmp 0x105b4b64 */
  goto L_105b4b64;
L_105b4b55:;
  /* 105b4b55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105b4b5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4b5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_105b4b64:;
  /* 105b4b64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4b6b jge 0x105b4c0f */
  if ((C.sf==C.of)) goto L_105b4c0f;
  /* 105b4b71 cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4b78 jle 0x105b4bab */
  if ((C.zf||C.sf!=C.of)) goto L_105b4bab;
  /* 105b4b7a push 4 */
  push32((uint32_t)(0x4u));
  /* 105b4b7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105b4b82 mov dl, byte ptr [ecx*2 + 0x105d2c2c] */
  DL = (r8((uint32_t)(ECX*2 + 0x105d2c2c)));
  /* 105b4b89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 105b4b8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105b4b95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b4b9a push eax */
  push32((uint32_t)(EAX));
  /* 105b4b9b call 0x105ae2b0 */
  push32(0x105b4ba0u); f_105ae2b0();
  /* 105b4ba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4ba3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 105b4ba9 jmp 0x105b4bde */
  goto L_105b4bde;
L_105b4bab:;
  /* 105b4bab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105b4bb1 mov dl, byte ptr [ecx*2 + 0x105d2c2c] */
  DL = (r8((uint32_t)(ECX*2 + 0x105d2c2c)));
  /* 105b4bb8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 105b4bbe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105b4bc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b4bc9 mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b4bcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b4bd1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b4bd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105b4bd8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_105b4bde:;
  /* 105b4bde cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4be5 je 0x105b4c08 */
  if (C.zf) goto L_105b4c08;
  /* 105b4be7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105b4bed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b4bf0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b4bf3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 105b4bfa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 105b4bfe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105b4c04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105b4c06 jmp 0x105b4c0a */
  goto L_105b4c0a;
L_105b4c08:;
  /* 105b4c08 jmp 0x105b4c0f */
  goto L_105b4c0f;
L_105b4c0a:;
  /* 105b4c0a jmp 0x105b4b55 */
  goto L_105b4b55;
L_105b4c0f:;
  /* 105b4c0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4c11 jmp 0x105b4c16 */
  goto L_105b4c16;
L_105b4c13:;
  /* 105b4c13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105b4c16:;
  /* 105b4c16 mov esp, ebp */
  ESP = (EBP);
  /* 105b4c18 pop ebp */
  EBP = (pop32());
  /* 105b4c19 ret  */
  ESPCHK(0x105b4990u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c20 @ 0x105b4c20 (10 bytes, 5 insns) */
void f_105b4c20(void) {
  FTRACE(0x105b4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4c21 mov ebp, esp */
  EBP = (ESP);
  /* 105b4c23 mov eax, dword ptr [0x105d1d98] */
  EAX = (r32((uint32_t)(0x105d1d98)));
  /* 105b4c28 pop ebp */
  EBP = (pop32());
  /* 105b4c29 ret  */
  ESPCHK(0x105b4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c30 @ 0x105b4c30 (575 bytes, 196 insns) */
void f_105b4c30(void) {
  FTRACE(0x105b4c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4c30 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4c31 mov ebp, esp */
  EBP = (ESP);
  /* 105b4c33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b4c35 push 0x105cf3e8 */
  push32((uint32_t)(0x105cf3e8u));
  /* 105b4c3a push 0x105b3270 */
  push32((uint32_t)(0x105b3270u));
  /* 105b4c3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105b4c45 push eax */
  push32((uint32_t)(EAX));
  /* 105b4c46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105b4c4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4c50 push ebx */
  push32((uint32_t)(EBX));
  /* 105b4c51 push esi */
  push32((uint32_t)(ESI));
  /* 105b4c52 push edi */
  push32((uint32_t)(EDI));
  /* 105b4c53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b4c56 cmp dword ptr [0x105d2c38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4c5d jne 0x105b4cae */
  if (!C.zf) goto L_105b4cae;
  /* 105b4c5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 105b4c62 push eax */
  push32((uint32_t)(EAX));
  /* 105b4c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b4c65 push 0x105ceb9c */
  push32((uint32_t)(0x105ceb9cu));
  /* 105b4c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 105b4c6c call dword ptr [0x105d52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52dc))), 0x105b4c72u);
  /* 105b4c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b4c74 je 0x105b4c82 */
  if (C.zf) goto L_105b4c82;
  /* 105b4c76 mov dword ptr [0x105d2c38], 1 */
  w32((uint32_t)(0x105d2c38), (0x1u));
  /* 105b4c80 jmp 0x105b4cae */
  goto L_105b4cae;
L_105b4c82:;
  /* 105b4c82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 105b4c85 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b4c88 push 0x105ceb98 */
  push32((uint32_t)(0x105ceb98u));
  /* 105b4c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 105b4c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4c91 call dword ptr [0x105d5290] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5290))), 0x105b4c97u);
  /* 105b4c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b4c99 je 0x105b4ca7 */
  if (C.zf) goto L_105b4ca7;
  /* 105b4c9b mov dword ptr [0x105d2c38], 2 */
  w32((uint32_t)(0x105d2c38), (0x2u));
  /* 105b4ca5 jmp 0x105b4cae */
  goto L_105b4cae;
L_105b4ca7:;
  /* 105b4ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4ca9 jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4cae:;
  /* 105b4cae cmp dword ptr [0x105d2c38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4cb5 jne 0x105b4cd2 */
  if (!C.zf) goto L_105b4cd2;
  /* 105b4cb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4cba push edx */
  push32((uint32_t)(EDX));
  /* 105b4cbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4cbe push eax */
  push32((uint32_t)(EAX));
  /* 105b4cbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4cc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4cc6 push edx */
  push32((uint32_t)(EDX));
  /* 105b4cc7 call dword ptr [0x105d52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52dc))), 0x105b4ccdu);
  /* 105b4ccd jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4cd2:;
  /* 105b4cd2 cmp dword ptr [0x105d2c38], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c38))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4cd9 jne 0x105b4e87 */
  if (!C.zf) goto L_105b4e87;
  /* 105b4cdf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4ce3 jne 0x105b4ced */
  if (!C.zf) goto L_105b4ced;
  /* 105b4ce5 mov eax, dword ptr [0x105d2bb8] */
  EAX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b4cea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_105b4ced:;
  /* 105b4ced push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4cef push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4cf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4cf9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4cfc push edx */
  push32((uint32_t)(EDX));
  /* 105b4cfd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b4d02 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b4d05 push eax */
  push32((uint32_t)(EAX));
  /* 105b4d06 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b4d0cu);
  /* 105b4d0c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105b4d0f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4d13 jne 0x105b4d1c */
  if (!C.zf) goto L_105b4d1c;
  /* 105b4d15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4d17 jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4d1c:;
  /* 105b4d1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b4d23 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b4d26 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4d29 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b4d2b call 0x105aab90 */
  push32(0x105b4d30u); f_105aab90();
  /* 105b4d30 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 105b4d33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b4d36 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105b4d39 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105b4d3c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b4d3f push edx */
  push32((uint32_t)(EDX));
  /* 105b4d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4d42 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b4d45 push eax */
  push32((uint32_t)(EAX));
  /* 105b4d46 call 0x105ac110 */
  push32(0x105b4d4bu); f_105ac110();
  /* 105b4d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4d4e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b4d55 jmp 0x105b4d6e */
  goto L_105b4d6e;
  /* 105b4d57 mov eax, 1 */
  EAX = (0x1u);
  /* 105b4d5c ret  */
  ESPCHK(0x105b4c30u, _esp0);
  ESP += 4; return;
  /* 105b4d5d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b4d60 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 105b4d67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b4d6e:;
  /* 105b4d6e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4d72 jne 0x105b4d7b */
  if (!C.zf) goto L_105b4d7b;
  /* 105b4d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4d76 jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4d7b:;
  /* 105b4d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4d7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b4d82 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4d83 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b4d86 push edx */
  push32((uint32_t)(EDX));
  /* 105b4d87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4d8a push eax */
  push32((uint32_t)(EAX));
  /* 105b4d8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4d8e push ecx */
  push32((uint32_t)(ECX));
  /* 105b4d8f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b4d94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b4d97 push edx */
  push32((uint32_t)(EDX));
  /* 105b4d98 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b4d9eu);
  /* 105b4d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b4da0 jne 0x105b4da9 */
  if (!C.zf) goto L_105b4da9;
  /* 105b4da2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4da4 jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4da9:;
  /* 105b4da9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105b4db0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b4db3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 105b4db7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4dba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b4dbc call 0x105aab90 */
  push32(0x105b4dc1u); f_105aab90();
  /* 105b4dc1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 105b4dc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b4dc7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105b4dca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105b4dcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b4dd4 jmp 0x105b4ded */
  goto L_105b4ded;
  /* 105b4dd6 mov eax, 1 */
  EAX = (0x1u);
  /* 105b4ddb ret  */
  ESPCHK(0x105b4c30u, _esp0);
  ESP += 4; return;
  /* 105b4ddc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b4ddf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105b4de6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b4ded:;
  /* 105b4ded cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4df1 jne 0x105b4dfa */
  if (!C.zf) goto L_105b4dfa;
  /* 105b4df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4df5 jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4dfa:;
  /* 105b4dfa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4dfe jne 0x105b4e09 */
  if (!C.zf) goto L_105b4e09;
  /* 105b4e00 mov edx, dword ptr [0x105d2ba8] */
  EDX = (r32((uint32_t)(0x105d2ba8)));
  /* 105b4e06 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_105b4e09:;
  /* 105b4e09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4e0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b4e0f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 105b4e15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4e18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b4e1b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 105b4e22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b4e25 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4e26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b4e29 push edx */
  push32((uint32_t)(EDX));
  /* 105b4e2a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105b4e2d push eax */
  push32((uint32_t)(EAX));
  /* 105b4e2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4e31 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4e32 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b4e35 push edx */
  push32((uint32_t)(EDX));
  /* 105b4e36 call dword ptr [0x105d5290] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5290))), 0x105b4e3cu);
  /* 105b4e3c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105b4e3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4e42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b4e45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b4e47 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 105b4e4c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4e52 je 0x105b4e68 */
  if (C.zf) goto L_105b4e68;
  /* 105b4e54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4e57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b4e5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b4e5c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b4e60 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4e66 je 0x105b4e6c */
  if (C.zf) goto L_105b4e6c;
L_105b4e68:;
  /* 105b4e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4e6a jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4e6c:;
  /* 105b4e6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4e6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b4e71 push eax */
  push32((uint32_t)(EAX));
  /* 105b4e72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b4e75 push ecx */
  push32((uint32_t)(ECX));
  /* 105b4e76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b4e79 push edx */
  push32((uint32_t)(EDX));
  /* 105b4e7a call 0x105b0340 */
  push32(0x105b4e7fu); f_105b0340();
  /* 105b4e7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4e82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b4e85 jmp 0x105b4e89 */
  goto L_105b4e89;
L_105b4e87:;
  /* 105b4e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b4e89:;
  /* 105b4e89 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 105b4e8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b4e8f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105b4e96 pop edi */
  EDI = (pop32());
  /* 105b4e97 pop esi */
  ESI = (pop32());
  /* 105b4e98 pop ebx */
  EBX = (pop32());
  /* 105b4e99 mov esp, ebp */
  ESP = (EBP);
  /* 105b4e9b pop ebp */
  EBP = (pop32());
  /* 105b4e9c ret  */
  ESPCHK(0x105b4c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ea0 @ 0x105b4ea0 (208 bytes, 85 insns) */
void f_105b4ea0(void) {
  FTRACE(0x105b4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 105b4ea3 push edi */
  push32((uint32_t)(EDI));
  /* 105b4ea4 push esi */
  push32((uint32_t)(ESI));
  /* 105b4ea5 push ebx */
  push32((uint32_t)(EBX));
  /* 105b4ea6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4ea9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4eac lea eax, [0x105d2ba0] */
  EAX = ((uint32_t)(0x105d2ba0));
  /* 105b4eb2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4eb6 jne 0x105b4ef3 */
  if (!C.zf) goto L_105b4ef3;
  /* 105b4eb8 mov al, 0xff */
  AL = (0xffu);
  /* 105b4eba mov edi, edi */
  EDI = (EDI);
L_105b4ebc:;
  /* 105b4ebc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b4ebe je 0x105b4eee */
  if (C.zf) goto L_105b4eee;
  /* 105b4ec0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b4ec2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b4ec3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 105b4ec5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105b4ec6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4ec8 je 0x105b4ebc */
  if (C.zf) goto L_105b4ebc;
  /* 105b4eca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105b4ecc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4ece sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105b4ed0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105b4ed3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105b4ed5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105b4ed7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 105b4ed9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105b4edb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4edd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105b4edf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105b4ee2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105b4ee4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105b4ee6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4ee8 je 0x105b4ebc */
  if (C.zf) goto L_105b4ebc;
  /* 105b4eea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105b4eec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_105b4eee:;
  /* 105b4eee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 105b4ef1 jmp 0x105b4f6b */
  goto L_105b4f6b;
L_105b4ef3:;
  /* 105b4ef3 lock inc dword ptr [0x105d2d2c] */
  x86_unimpl("lock inc @ 0x105b4ef3");
  /* 105b4efa cmp dword ptr [0x105d2d1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4f01 jg 0x105b4f07 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b4f07;
  /* 105b4f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4f05 jmp 0x105b4f1c */
  goto L_105b4f1c;
L_105b4f07:;
  /* 105b4f07 lock dec dword ptr [0x105d2d2c] */
  x86_unimpl("lock dec @ 0x105b4f07");
  /* 105b4f0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b4f10 call 0x105abda0 */
  push32(0x105b4f15u); f_105abda0();
  /* 105b4f15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_105b4f1c:;
  /* 105b4f1c mov eax, 0xff */
  EAX = (0xffu);
  /* 105b4f21 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 105b4f23 nop  */
  /* nop */
L_105b4f24:;
  /* 105b4f24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b4f26 je 0x105b4f4f */
  if (C.zf) goto L_105b4f4f;
  /* 105b4f28 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b4f2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b4f2b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 105b4f2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105b4f2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4f30 je 0x105b4f24 */
  if (C.zf) goto L_105b4f24;
  /* 105b4f32 push eax */
  push32((uint32_t)(EAX));
  /* 105b4f33 push ebx */
  push32((uint32_t)(EBX));
  /* 105b4f34 call 0x105b6010 */
  push32(0x105b4f39u); f_105b6010();
  /* 105b4f39 mov ebx, eax */
  EBX = (EAX);
  /* 105b4f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4f3e call 0x105b6010 */
  push32(0x105b4f43u); f_105b6010();
  /* 105b4f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b4f46 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4f48 je 0x105b4f24 */
  if (C.zf) goto L_105b4f24;
  /* 105b4f4a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b4f4c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105b4f4f:;
  /* 105b4f4f mov ebx, eax */
  EBX = (EAX);
  /* 105b4f51 pop eax */
  EAX = (pop32());
  /* 105b4f52 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b4f54 jne 0x105b4f5f */
  if (!C.zf) goto L_105b4f5f;
  /* 105b4f56 lock dec dword ptr [0x105d2d2c] */
  x86_unimpl("lock dec @ 0x105b4f56");
  /* 105b4f5d jmp 0x105b4f69 */
  goto L_105b4f69;
L_105b4f5f:;
  /* 105b4f5f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b4f61 call 0x105abe40 */
  push32(0x105b4f66u); f_105abe40();
  /* 105b4f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b4f69:;
  /* 105b4f69 mov eax, ebx */
  EAX = (EBX);
L_105b4f6b:;
  /* 105b4f6b pop ebx */
  EBX = (pop32());
  /* 105b4f6c pop esi */
  ESI = (pop32());
  /* 105b4f6d pop edi */
  EDI = (pop32());
  /* 105b4f6e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b4f6f ret  */
  ESPCHK(0x105b4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f70 @ 0x105b4f70 (257 bytes, 103 insns) */
void f_105b4f70(void) {
  FTRACE(0x105b4f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b4f70 push ebp */
  push32((uint32_t)(EBP));
  /* 105b4f71 mov ebp, esp */
  EBP = (ESP);
  /* 105b4f73 push edi */
  push32((uint32_t)(EDI));
  /* 105b4f74 push esi */
  push32((uint32_t)(ESI));
  /* 105b4f75 push ebx */
  push32((uint32_t)(EBX));
  /* 105b4f76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b4f79 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b4f7b je 0x105b506a */
  if (C.zf) goto L_105b506a;
  /* 105b4f81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 105b4f84 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 105b4f87 lea eax, [0x105d2ba0] */
  EAX = ((uint32_t)(0x105d2ba0));
  /* 105b4f8d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4f91 jne 0x105b4fe1 */
  if (!C.zf) goto L_105b4fe1;
  /* 105b4f93 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 105b4f95 mov bl, 0x5a */
  BL = (0x5au);
  /* 105b4f97 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 105b4f99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105b4f9c:;
  /* 105b4f9c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 105b4f9e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105b4fa0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 105b4fa2 je 0x105b4fc5 */
  if (C.zf) goto L_105b4fc5;
  /* 105b4fa4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105b4fa6 je 0x105b4fc5 */
  if (C.zf) goto L_105b4fc5;
  /* 105b4fa8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b4fa9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105b4faa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4fac jb 0x105b4fb4 */
  if (C.cf) goto L_105b4fb4;
  /* 105b4fae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4fb0 ja 0x105b4fb4 */
  if ((!C.cf&&!C.zf)) goto L_105b4fb4;
  /* 105b4fb2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_105b4fb4:;
  /* 105b4fb4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4fb6 jb 0x105b4fbe */
  if (C.cf) goto L_105b4fbe;
  /* 105b4fb8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4fba ja 0x105b4fbe */
  if ((!C.cf&&!C.zf)) goto L_105b4fbe;
  /* 105b4fbc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_105b4fbe:;
  /* 105b4fbe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4fc0 jne 0x105b4fcf */
  if (!C.zf) goto L_105b4fcf;
  /* 105b4fc2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105b4fc3 jne 0x105b4f9c */
  if (!C.zf) goto L_105b4f9c;
L_105b4fc5:;
  /* 105b4fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b4fc7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b4fc9 je 0x105b506a */
  if (C.zf) goto L_105b506a;
L_105b4fcf:;
  /* 105b4fcf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 105b4fd4 jb 0x105b506a */
  if (C.cf) goto L_105b506a;
  /* 105b4fda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b4fdc jmp 0x105b506a */
  goto L_105b506a;
L_105b4fe1:;
  /* 105b4fe1 lock inc dword ptr [0x105d2d2c] */
  x86_unimpl("lock inc @ 0x105b4fe1");
  /* 105b4fe8 cmp dword ptr [0x105d2d1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b4fef jg 0x105b4ff5 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b4ff5;
  /* 105b4ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b4ff3 jmp 0x105b500e */
  goto L_105b500e;
L_105b4ff5:;
  /* 105b4ff5 lock dec dword ptr [0x105d2d2c] */
  x86_unimpl("lock dec @ 0x105b4ff5");
  /* 105b4ffc mov ebx, ecx */
  EBX = (ECX);
  /* 105b4ffe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b5000 call 0x105abda0 */
  push32(0x105b5005u); f_105abda0();
  /* 105b5005 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 105b500c mov ecx, ebx */
  ECX = (EBX);
L_105b500e:;
  /* 105b500e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5010 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 105b5012 mov edi, edi */
  EDI = (EDI);
L_105b5014:;
  /* 105b5014 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105b5016 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5018 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 105b501a je 0x105b503f */
  if (C.zf) goto L_105b503f;
  /* 105b501c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 105b501e je 0x105b503f */
  if (C.zf) goto L_105b503f;
  /* 105b5020 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105b5021 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105b5022 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5023 push eax */
  push32((uint32_t)(EAX));
  /* 105b5024 push ebx */
  push32((uint32_t)(EBX));
  /* 105b5025 call 0x105b6010 */
  push32(0x105b502au); f_105b6010();
  /* 105b502a mov ebx, eax */
  EBX = (EAX);
  /* 105b502c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b502f call 0x105b6010 */
  push32(0x105b5034u); f_105b6010();
  /* 105b5034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5037 pop ecx */
  ECX = (pop32());
  /* 105b5038 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b503a jne 0x105b5045 */
  if (!C.zf) goto L_105b5045;
  /* 105b503c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105b503d jne 0x105b5014 */
  if (!C.zf) goto L_105b5014;
L_105b503f:;
  /* 105b503f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b5041 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5043 je 0x105b504e */
  if (C.zf) goto L_105b504e;
L_105b5045:;
  /* 105b5045 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 105b504a jb 0x105b504e */
  if (C.cf) goto L_105b504e;
  /* 105b504c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_105b504e:;
  /* 105b504e pop eax */
  EAX = (pop32());
  /* 105b504f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5051 jne 0x105b505c */
  if (!C.zf) goto L_105b505c;
  /* 105b5053 lock dec dword ptr [0x105d2d2c] */
  x86_unimpl("lock dec @ 0x105b5053");
  /* 105b505a jmp 0x105b506a */
  goto L_105b506a;
L_105b505c:;
  /* 105b505c mov ebx, ecx */
  EBX = (ECX);
  /* 105b505e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b5060 call 0x105abe40 */
  push32(0x105b5065u); f_105abe40();
  /* 105b5065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5068 mov ecx, ebx */
  ECX = (EBX);
L_105b506a:;
  /* 105b506a mov eax, ecx */
  EAX = (ECX);
  /* 105b506c pop ebx */
  EBX = (pop32());
  /* 105b506d pop esi */
  ESI = (pop32());
  /* 105b506e pop edi */
  EDI = (pop32());
  /* 105b506f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105b5070 ret  */
  ESPCHK(0x105b4f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015080 @ 0x105b5080 (255 bytes, 88 insns) */
void f_105b5080(void) {
  FTRACE(0x105b5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5080 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5081 mov ebp, esp */
  EBP = (ESP);
  /* 105b5083 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105b5086:;
  /* 105b5086 cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b508d jle 0x105b50a6 */
  if ((C.zf||C.sf!=C.of)) goto L_105b50a6;
  /* 105b508f push 8 */
  push32((uint32_t)(0x8u));
  /* 105b5091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5094 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b5096 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b5098 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5099 call 0x105ae2b0 */
  push32(0x105b509eu); f_105ae2b0();
  /* 105b509e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b50a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105b50a4 jmp 0x105b50bf */
  goto L_105b50bf;
L_105b50a6:;
  /* 105b50a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b50a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b50ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b50ad mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b50b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b50b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b50b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105b50bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b50bf:;
  /* 105b50bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b50c3 je 0x105b50d0 */
  if (C.zf) goto L_105b50d0;
  /* 105b50c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b50c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b50cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b50ce jmp 0x105b5086 */
  goto L_105b5086;
L_105b50d0:;
  /* 105b50d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b50d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b50d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b50d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b50da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b50dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b50e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b50e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b50e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b50e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b50ed je 0x105b50f5 */
  if (C.zf) goto L_105b50f5;
  /* 105b50ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b50f3 jne 0x105b5108 */
  if (!C.zf) goto L_105b5108;
L_105b50f5:;
  /* 105b50f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b50f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b50fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b50fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b50ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5105 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105b5108:;
  /* 105b5108 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105b510f:;
  /* 105b510f cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5116 jle 0x105b512b */
  if ((C.zf||C.sf!=C.of)) goto L_105b512b;
  /* 105b5118 push 4 */
  push32((uint32_t)(0x4u));
  /* 105b511a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b511d push edx */
  push32((uint32_t)(EDX));
  /* 105b511e call 0x105ae2b0 */
  push32(0x105b5123u); f_105ae2b0();
  /* 105b5123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5126 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b5129 jmp 0x105b5140 */
  goto L_105b5140;
L_105b512b:;
  /* 105b512b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b512e mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b5134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5136 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b513a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105b513d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105b5140:;
  /* 105b5140 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5144 je 0x105b516b */
  if (C.zf) goto L_105b516b;
  /* 105b5146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5149 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b514c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b514f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 105b5153 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b5156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5159 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b515b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b515d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b5160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5163 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5166 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105b5169 jmp 0x105b510f */
  goto L_105b510f;
L_105b516b:;
  /* 105b516b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b516f jne 0x105b5178 */
  if (!C.zf) goto L_105b5178;
  /* 105b5171 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5174 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b5176 jmp 0x105b517b */
  goto L_105b517b;
L_105b5178:;
  /* 105b5178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105b517b:;
  /* 105b517b mov esp, ebp */
  ESP = (EBP);
  /* 105b517d pop ebp */
  EBP = (pop32());
  /* 105b517e ret  */
  ESPCHK(0x105b5080u, _esp0);
  ESP += 4; return;
}

/* FUN_10015180 @ 0x105b5180 (17 bytes, 8 insns) */
void f_105b5180(void) {
  FTRACE(0x105b5180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5180 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5181 mov ebp, esp */
  EBP = (ESP);
  /* 105b5183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5186 push eax */
  push32((uint32_t)(EAX));
  /* 105b5187 call 0x105b5080 */
  push32(0x105b518cu); f_105b5080();
  /* 105b518c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b518f pop ebp */
  EBP = (pop32());
  /* 105b5190 ret  */
  ESPCHK(0x105b5180u, _esp0);
  ESP += 4; return;
}

/* FUN_100151a0 @ 0x105b51a0 (297 bytes, 106 insns) */
void f_105b51a0(void) {
  FTRACE(0x105b51a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b51a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b51a1 mov ebp, esp */
  EBP = (ESP);
  /* 105b51a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b51a6 push esi */
  push32((uint32_t)(ESI));
L_105b51a7:;
  /* 105b51a7 cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b51ae jle 0x105b51c7 */
  if ((C.zf||C.sf!=C.of)) goto L_105b51c7;
  /* 105b51b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 105b51b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b51b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b51b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b51b9 push ecx */
  push32((uint32_t)(ECX));
  /* 105b51ba call 0x105ae2b0 */
  push32(0x105b51bfu); f_105ae2b0();
  /* 105b51bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b51c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b51c5 jmp 0x105b51e0 */
  goto L_105b51e0;
L_105b51c7:;
  /* 105b51c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b51ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b51cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b51ce mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b51d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b51d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b51da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105b51dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105b51e0:;
  /* 105b51e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b51e4 je 0x105b51f1 */
  if (C.zf) goto L_105b51f1;
  /* 105b51e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b51e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b51ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b51ef jmp 0x105b51a7 */
  goto L_105b51a7;
L_105b51f1:;
  /* 105b51f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b51f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b51f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b51f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b51fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b51fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5201 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b5204 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b5207 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105b520a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b520e je 0x105b5216 */
  if (C.zf) goto L_105b5216;
  /* 105b5210 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5214 jne 0x105b5229 */
  if (!C.zf) goto L_105b5229;
L_105b5216:;
  /* 105b5216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b521b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b521d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b5220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5223 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5226 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105b5229:;
  /* 105b5229 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105b5230 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105b5237:;
  /* 105b5237 cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b523e jle 0x105b5253 */
  if ((C.zf||C.sf!=C.of)) goto L_105b5253;
  /* 105b5240 push 4 */
  push32((uint32_t)(0x4u));
  /* 105b5242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b5245 push edx */
  push32((uint32_t)(EDX));
  /* 105b5246 call 0x105ae2b0 */
  push32(0x105b524bu); f_105ae2b0();
  /* 105b524b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b524e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105b5251 jmp 0x105b5268 */
  goto L_105b5268;
L_105b5253:;
  /* 105b5253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b5256 mov ecx, dword ptr [0x105d0de8] */
  ECX = (r32((uint32_t)(0x105d0de8)));
  /* 105b525c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b525e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105b5262 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105b5265 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_105b5268:;
  /* 105b5268 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b526c je 0x105b52a9 */
  if (C.zf) goto L_105b52a9;
  /* 105b526e push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5270 push 0xa */
  push32((uint32_t)(0xau));
  /* 105b5272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5275 push eax */
  push32((uint32_t)(EAX));
  /* 105b5276 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5279 push ecx */
  push32((uint32_t)(ECX));
  /* 105b527a call 0x105b6140 */
  push32(0x105b527fu); f_105b6140();
  /* 105b527f mov ecx, eax */
  ECX = (EAX);
  /* 105b5281 mov esi, edx */
  ESI = (EDX);
  /* 105b5283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b5286 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5289 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b528a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b528c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b528e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b5291 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 105b5294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5299 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b529b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b529e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b52a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b52a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105b52a7 jmp 0x105b5237 */
  goto L_105b5237;
L_105b52a9:;
  /* 105b52a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b52ad jne 0x105b52be */
  if (!C.zf) goto L_105b52be;
  /* 105b52af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b52b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b52b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b52b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b52ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b52bc jmp 0x105b52c4 */
  goto L_105b52c4;
L_105b52be:;
  /* 105b52be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b52c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_105b52c4:;
  /* 105b52c4 pop esi */
  ESI = (pop32());
  /* 105b52c5 mov esp, ebp */
  ESP = (EBP);
  /* 105b52c7 pop ebp */
  EBP = (pop32());
  /* 105b52c8 ret  */
  ESPCHK(0x105b51a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100152d0 @ 0x105b52d0 (61 bytes, 18 insns) */
void f_105b52d0(void) {
  FTRACE(0x105b52d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b52d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b52d1 mov ebp, esp */
  EBP = (ESP);
  /* 105b52d3 cmp dword ptr [0x105d2cf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b52da jne 0x105b530b */
  if (!C.zf) goto L_105b530b;
  /* 105b52dc push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b52de call 0x105abda0 */
  push32(0x105b52e3u); f_105abda0();
  /* 105b52e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b52e6 cmp dword ptr [0x105d2cf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b52ed jne 0x105b5301 */
  if (!C.zf) goto L_105b5301;
  /* 105b52ef call 0x105b5330 */
  push32(0x105b52f4u); f_105b5330();
  /* 105b52f4 mov eax, dword ptr [0x105d2cf8] */
  EAX = (r32((uint32_t)(0x105d2cf8)));
  /* 105b52f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b52fc mov dword ptr [0x105d2cf8], eax */
  w32((uint32_t)(0x105d2cf8), (EAX));
L_105b5301:;
  /* 105b5301 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b5303 call 0x105abe40 */
  push32(0x105b5308u); f_105abe40();
  /* 105b5308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b530b:;
  /* 105b530b pop ebp */
  EBP = (pop32());
  /* 105b530c ret  */
  ESPCHK(0x105b52d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015310 @ 0x105b5310 (30 bytes, 11 insns) */
void f_105b5310(void) {
  FTRACE(0x105b5310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5310 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5311 mov ebp, esp */
  EBP = (ESP);
  /* 105b5313 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b5315 call 0x105abda0 */
  push32(0x105b531au); f_105abda0();
  /* 105b531a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b531d call 0x105b5330 */
  push32(0x105b5322u); f_105b5330();
  /* 105b5322 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b5324 call 0x105abe40 */
  push32(0x105b5329u); f_105abe40();
  /* 105b5329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b532c pop ebp */
  EBP = (pop32());
  /* 105b532d ret  */
  ESPCHK(0x105b5310u, _esp0);
  ESP += 4; return;
}

/* FUN_10015330 @ 0x105b5330 (939 bytes, 266 insns) */
void f_105b5330(void) {
  FTRACE(0x105b5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5330 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5331 mov ebp, esp */
  EBP = (ESP);
  /* 105b5333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b533d push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b533f call 0x105abda0 */
  push32(0x105b5344u); f_105abda0();
  /* 105b5344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5347 mov dword ptr [0x105d2c40], 0 */
  w32((uint32_t)(0x105d2c40), (0x0u));
  /* 105b5351 mov dword ptr [0x105d1e48], 0xffffffff */
  w32((uint32_t)(0x105d1e48), (0xffffffffu));
  /* 105b535b mov eax, dword ptr [0x105d1e48] */
  EAX = (r32((uint32_t)(0x105d1e48)));
  /* 105b5360 mov dword ptr [0x105d1e38], eax */
  w32((uint32_t)(0x105d1e38), (EAX));
  /* 105b5365 push 0x105cf448 */
  push32((uint32_t)(0x105cf448u));
  /* 105b536a call 0x105b61b0 */
  push32(0x105b536fu); f_105b61b0();
  /* 105b536f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5372 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b5375 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5379 jne 0x105b54b3 */
  if (!C.zf) goto L_105b54b3;
  /* 105b537f push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b5381 call 0x105abe40 */
  push32(0x105b5386u); f_105abe40();
  /* 105b5386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5389 push 0x105d2c48 */
  push32((uint32_t)(0x105d2c48u));
  /* 105b538e call dword ptr [0x105d52f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f8))), 0x105b5394u);
  /* 105b5394 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5397 je 0x105b54ae */
  if (C.zf) goto L_105b54ae;
  /* 105b539d mov dword ptr [0x105d2c40], 1 */
  w32((uint32_t)(0x105d2c40), (0x1u));
  /* 105b53a7 mov ecx, dword ptr [0x105d2c48] */
  ECX = (r32((uint32_t)(0x105d2c48)));
  /* 105b53ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b53b0 mov dword ptr [0x105d1da0], ecx */
  w32((uint32_t)(0x105d1da0), (ECX));
  /* 105b53b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b53b8 mov dx, word ptr [0x105d2c8e] */
  DX = (r16((uint32_t)(0x105d2c8e)));
  /* 105b53bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b53c1 je 0x105b53d9 */
  if (C.zf) goto L_105b53d9;
  /* 105b53c3 mov eax, dword ptr [0x105d2c9c] */
  EAX = (r32((uint32_t)(0x105d2c9c)));
  /* 105b53c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b53cb mov ecx, dword ptr [0x105d1da0] */
  ECX = (r32((uint32_t)(0x105d1da0)));
  /* 105b53d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b53d3 mov dword ptr [0x105d1da0], ecx */
  w32((uint32_t)(0x105d1da0), (ECX));
L_105b53d9:;
  /* 105b53d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b53db mov dx, word ptr [0x105d2ce2] */
  DX = (r16((uint32_t)(0x105d2ce2)));
  /* 105b53e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b53e4 je 0x105b540e */
  if (C.zf) goto L_105b540e;
  /* 105b53e6 cmp dword ptr [0x105d2cf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b53ed je 0x105b540e */
  if (C.zf) goto L_105b540e;
  /* 105b53ef mov dword ptr [0x105d1da4], 1 */
  w32((uint32_t)(0x105d1da4), (0x1u));
  /* 105b53f9 mov eax, dword ptr [0x105d2cf0] */
  EAX = (r32((uint32_t)(0x105d2cf0)));
  /* 105b53fe sub eax, dword ptr [0x105d2c9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d2c9c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5404 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5407 mov dword ptr [0x105d1da8], eax */
  w32((uint32_t)(0x105d1da8), (EAX));
  /* 105b540c jmp 0x105b5422 */
  goto L_105b5422;
L_105b540e:;
  /* 105b540e mov dword ptr [0x105d1da4], 0 */
  w32((uint32_t)(0x105d1da4), (0x0u));
  /* 105b5418 mov dword ptr [0x105d1da8], 0 */
  w32((uint32_t)(0x105d1da8), (0x0u));
L_105b5422:;
  /* 105b5422 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105b5425 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5426 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5428 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105b542a mov edx, dword ptr [0x105d1e2c] */
  EDX = (r32((uint32_t)(0x105d1e2c)));
  /* 105b5430 push edx */
  push32((uint32_t)(EDX));
  /* 105b5431 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5433 push 0x105d2c4c */
  push32((uint32_t)(0x105d2c4cu));
  /* 105b5438 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b543d mov eax, dword ptr [0x105d2bb8] */
  EAX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b5442 push eax */
  push32((uint32_t)(EAX));
  /* 105b5443 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b5449u);
  /* 105b5449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b544b je 0x105b545f */
  if (C.zf) goto L_105b545f;
  /* 105b544d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5451 jne 0x105b545f */
  if (!C.zf) goto L_105b545f;
  /* 105b5453 mov ecx, dword ptr [0x105d1e2c] */
  ECX = (r32((uint32_t)(0x105d1e2c)));
  /* 105b5459 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 105b545d jmp 0x105b5468 */
  goto L_105b5468;
L_105b545f:;
  /* 105b545f mov edx, dword ptr [0x105d1e2c] */
  EDX = (r32((uint32_t)(0x105d1e2c)));
  /* 105b5465 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_105b5468:;
  /* 105b5468 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105b546b push eax */
  push32((uint32_t)(EAX));
  /* 105b546c push 0 */
  push32((uint32_t)(0x0u));
  /* 105b546e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105b5470 mov ecx, dword ptr [0x105d1e30] */
  ECX = (r32((uint32_t)(0x105d1e30)));
  /* 105b5476 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5477 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5479 push 0x105d2ca0 */
  push32((uint32_t)(0x105d2ca0u));
  /* 105b547e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b5483 mov edx, dword ptr [0x105d2bb8] */
  EDX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b5489 push edx */
  push32((uint32_t)(EDX));
  /* 105b548a call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b5490u);
  /* 105b5490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5492 je 0x105b54a5 */
  if (C.zf) goto L_105b54a5;
  /* 105b5494 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5498 jne 0x105b54a5 */
  if (!C.zf) goto L_105b54a5;
  /* 105b549a mov eax, dword ptr [0x105d1e30] */
  EAX = (r32((uint32_t)(0x105d1e30)));
  /* 105b549f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 105b54a3 jmp 0x105b54ae */
  goto L_105b54ae;
L_105b54a5:;
  /* 105b54a5 mov ecx, dword ptr [0x105d1e30] */
  ECX = (r32((uint32_t)(0x105d1e30)));
  /* 105b54ab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_105b54ae:;
  /* 105b54ae jmp 0x105b56d7 */
  goto L_105b56d7;
L_105b54b3:;
  /* 105b54b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b54b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b54b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b54bb je 0x105b54dd */
  if (C.zf) goto L_105b54dd;
  /* 105b54bd cmp dword ptr [0x105d2cf4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cf4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b54c4 je 0x105b54ec */
  if (C.zf) goto L_105b54ec;
  /* 105b54c6 mov ecx, dword ptr [0x105d2cf4] */
  ECX = (r32((uint32_t)(0x105d2cf4)));
  /* 105b54cc push ecx */
  push32((uint32_t)(ECX));
  /* 105b54cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b54d0 push edx */
  push32((uint32_t)(EDX));
  /* 105b54d1 call 0x105b2290 */
  push32(0x105b54d6u); f_105b2290();
  /* 105b54d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b54d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b54db jne 0x105b54ec */
  if (!C.zf) goto L_105b54ec;
L_105b54dd:;
  /* 105b54dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b54df call 0x105abe40 */
  push32(0x105b54e4u); f_105abe40();
  /* 105b54e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b54e7 jmp 0x105b56d7 */
  goto L_105b56d7;
L_105b54ec:;
  /* 105b54ec push 2 */
  push32((uint32_t)(0x2u));
  /* 105b54ee mov eax, dword ptr [0x105d2cf4] */
  EAX = (r32((uint32_t)(0x105d2cf4)));
  /* 105b54f3 push eax */
  push32((uint32_t)(EAX));
  /* 105b54f4 call 0x105a8480 */
  push32(0x105b54f9u); f_105a8480();
  /* 105b54f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b54fc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 105b5501 push 0x105cf440 */
  push32((uint32_t)(0x105cf440u));
  /* 105b5506 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b5508 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b550b push ecx */
  push32((uint32_t)(ECX));
  /* 105b550c call 0x105aa820 */
  push32(0x105b5511u); f_105aa820();
  /* 105b5511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5514 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5517 push eax */
  push32((uint32_t)(EAX));
  /* 105b5518 call 0x105a79f0 */
  push32(0x105b551du); f_105a79f0();
  /* 105b551d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5520 mov dword ptr [0x105d2cf4], eax */
  w32((uint32_t)(0x105d2cf4), (EAX));
  /* 105b5525 cmp dword ptr [0x105d2cf4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cf4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b552c jne 0x105b553d */
  if (!C.zf) goto L_105b553d;
  /* 105b552e push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b5530 call 0x105abe40 */
  push32(0x105b5535u); f_105abe40();
  /* 105b5535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5538 jmp 0x105b56d7 */
  goto L_105b56d7;
L_105b553d:;
  /* 105b553d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5540 push edx */
  push32((uint32_t)(EDX));
  /* 105b5541 mov eax, dword ptr [0x105d2cf4] */
  EAX = (r32((uint32_t)(0x105d2cf4)));
  /* 105b5546 push eax */
  push32((uint32_t)(EAX));
  /* 105b5547 call 0x105aa9a0 */
  push32(0x105b554cu); f_105aa9a0();
  /* 105b554c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b554f push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b5551 call 0x105abe40 */
  push32(0x105b5556u); f_105abe40();
  /* 105b5556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5559 push 3 */
  push32((uint32_t)(0x3u));
  /* 105b555b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b555e push ecx */
  push32((uint32_t)(ECX));
  /* 105b555f mov edx, dword ptr [0x105d1e2c] */
  EDX = (r32((uint32_t)(0x105d1e2c)));
  /* 105b5565 push edx */
  push32((uint32_t)(EDX));
  /* 105b5566 call 0x105ab210 */
  push32(0x105b556bu); f_105ab210();
  /* 105b556b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b556e mov eax, dword ptr [0x105d1e2c] */
  EAX = (r32((uint32_t)(0x105d1e2c)));
  /* 105b5573 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 105b5577 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b557a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b557d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b5580 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5583 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b5586 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5589 jne 0x105b559d */
  if (!C.zf) goto L_105b559d;
  /* 105b558b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b558e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5591 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b5594 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b559a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105b559d:;
  /* 105b559d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55a0 push eax */
  push32((uint32_t)(EAX));
  /* 105b55a1 call 0x105b5080 */
  push32(0x105b55a6u); f_105b5080();
  /* 105b55a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b55a9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b55af mov dword ptr [0x105d1da0], eax */
  w32((uint32_t)(0x105d1da0), (EAX));
L_105b55b4:;
  /* 105b55b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b55ba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b55bd je 0x105b55d5 */
  if (C.zf) goto L_105b55d5;
  /* 105b55bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55c2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b55c5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b55c8 jl 0x105b55e0 */
  if ((C.sf!=C.of)) goto L_105b55e0;
  /* 105b55ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b55d0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b55d3 jg 0x105b55e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b55e0;
L_105b55d5:;
  /* 105b55d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b55db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b55de jmp 0x105b55b4 */
  goto L_105b55b4;
L_105b55e0:;
  /* 105b55e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b55e6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b55e9 jne 0x105b5685 */
  if (!C.zf) goto L_105b5685;
  /* 105b55ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b55f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b55f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b55fb push edx */
  push32((uint32_t)(EDX));
  /* 105b55fc call 0x105b5080 */
  push32(0x105b5601u); f_105b5080();
  /* 105b5601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5604 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5607 mov ecx, dword ptr [0x105d1da0] */
  ECX = (r32((uint32_t)(0x105d1da0)));
  /* 105b560d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b560f mov dword ptr [0x105d1da0], ecx */
  w32((uint32_t)(0x105d1da0), (ECX));
L_105b5615:;
  /* 105b5615 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5618 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b561b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b561e jl 0x105b5636 */
  if ((C.sf!=C.of)) goto L_105b5636;
  /* 105b5620 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5623 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b5626 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5629 jg 0x105b5636 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b5636;
  /* 105b562b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b562e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5631 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b5634 jmp 0x105b5615 */
  goto L_105b5615;
L_105b5636:;
  /* 105b5636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5639 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b563c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b563f jne 0x105b5685 */
  if (!C.zf) goto L_105b5685;
  /* 105b5641 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5647 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b564a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b564d push ecx */
  push32((uint32_t)(ECX));
  /* 105b564e call 0x105b5080 */
  push32(0x105b5653u); f_105b5080();
  /* 105b5653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5656 mov edx, dword ptr [0x105d1da0] */
  EDX = (r32((uint32_t)(0x105d1da0)));
  /* 105b565c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b565e mov dword ptr [0x105d1da0], edx */
  w32((uint32_t)(0x105d1da0), (EDX));
L_105b5664:;
  /* 105b5664 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5667 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b566a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b566d jl 0x105b5685 */
  if ((C.sf!=C.of)) goto L_105b5685;
  /* 105b566f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5672 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105b5675 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5678 jg 0x105b5685 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b5685;
  /* 105b567a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b567d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5680 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b5683 jmp 0x105b5664 */
  goto L_105b5664;
L_105b5685:;
  /* 105b5685 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5689 je 0x105b5699 */
  if (C.zf) goto L_105b5699;
  /* 105b568b mov edx, dword ptr [0x105d1da0] */
  EDX = (r32((uint32_t)(0x105d1da0)));
  /* 105b5691 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b5693 mov dword ptr [0x105d1da0], edx */
  w32((uint32_t)(0x105d1da0), (EDX));
L_105b5699:;
  /* 105b5699 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b569c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105b569f mov dword ptr [0x105d1da4], ecx */
  w32((uint32_t)(0x105d1da4), (ECX));
  /* 105b56a5 cmp dword ptr [0x105d1da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d1da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b56ac je 0x105b56ce */
  if (C.zf) goto L_105b56ce;
  /* 105b56ae push 3 */
  push32((uint32_t)(0x3u));
  /* 105b56b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b56b3 push edx */
  push32((uint32_t)(EDX));
  /* 105b56b4 mov eax, dword ptr [0x105d1e30] */
  EAX = (r32((uint32_t)(0x105d1e30)));
  /* 105b56b9 push eax */
  push32((uint32_t)(EAX));
  /* 105b56ba call 0x105ab210 */
  push32(0x105b56bfu); f_105ab210();
  /* 105b56bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b56c2 mov ecx, dword ptr [0x105d1e30] */
  ECX = (r32((uint32_t)(0x105d1e30)));
  /* 105b56c8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 105b56cc jmp 0x105b56d7 */
  goto L_105b56d7;
L_105b56ce:;
  /* 105b56ce mov edx, dword ptr [0x105d1e30] */
  EDX = (r32((uint32_t)(0x105d1e30)));
  /* 105b56d4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_105b56d7:;
  /* 105b56d7 mov esp, ebp */
  ESP = (EBP);
  /* 105b56d9 pop ebp */
  EBP = (pop32());
  /* 105b56da ret  */
  ESPCHK(0x105b5330u, _esp0);
  ESP += 4; return;
}

/* FUN_100156e0 @ 0x105b56e0 (46 bytes, 18 insns) */
void f_105b56e0(void) {
  FTRACE(0x105b56e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b56e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b56e1 mov ebp, esp */
  EBP = (ESP);
  /* 105b56e3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b56e4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b56e6 call 0x105abda0 */
  push32(0x105b56ebu); f_105abda0();
  /* 105b56eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b56ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b56f1 push eax */
  push32((uint32_t)(EAX));
  /* 105b56f2 call 0x105b5710 */
  push32(0x105b56f7u); f_105b5710();
  /* 105b56f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b56fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b56fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 105b56ff call 0x105abe40 */
  push32(0x105b5704u); f_105abe40();
  /* 105b5704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b570a mov esp, ebp */
  ESP = (EBP);
  /* 105b570c pop ebp */
  EBP = (pop32());
  /* 105b570d ret  */
  ESPCHK(0x105b56e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015710 @ 0x105b5710 (762 bytes, 246 insns) */
void f_105b5710(void) {
  FTRACE(0x105b5710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5710 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5711 mov ebp, esp */
  EBP = (ESP);
  /* 105b5713 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5714 cmp dword ptr [0x105d1da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d1da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b571b jne 0x105b5724 */
  if (!C.zf) goto L_105b5724;
  /* 105b571d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b571f jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b5724:;
  /* 105b5724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5727 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105b572a cmp ecx, dword ptr [0x105d1e38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d1e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5730 jne 0x105b5744 */
  if (!C.zf) goto L_105b5744;
  /* 105b5732 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5735 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105b5738 cmp eax, dword ptr [0x105d1e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b573e je 0x105b590b */
  if (C.zf) goto L_105b590b;
L_105b5744:;
  /* 105b5744 cmp dword ptr [0x105d2c40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b574b je 0x105b58c5 */
  if (C.zf) goto L_105b58c5;
  /* 105b5751 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b5753 mov cx, word ptr [0x105d2ce0] */
  CX = (r16((uint32_t)(0x105d2ce0)));
  /* 105b575a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b575c jne 0x105b57b9 */
  if (!C.zf) goto L_105b57b9;
  /* 105b575e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5760 mov dx, word ptr [0x105d2cee] */
  DX = (r16((uint32_t)(0x105d2cee)));
  /* 105b5767 push edx */
  push32((uint32_t)(EDX));
  /* 105b5768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b576a mov ax, word ptr [0x105d2cec] */
  AX = (r16((uint32_t)(0x105d2cec)));
  /* 105b5770 push eax */
  push32((uint32_t)(EAX));
  /* 105b5771 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b5773 mov cx, word ptr [0x105d2cea] */
  CX = (r16((uint32_t)(0x105d2cea)));
  /* 105b577a push ecx */
  push32((uint32_t)(ECX));
  /* 105b577b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b577d mov dx, word ptr [0x105d2ce8] */
  DX = (r16((uint32_t)(0x105d2ce8)));
  /* 105b5784 push edx */
  push32((uint32_t)(EDX));
  /* 105b5785 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5789 mov ax, word ptr [0x105d2ce4] */
  AX = (r16((uint32_t)(0x105d2ce4)));
  /* 105b578f push eax */
  push32((uint32_t)(EAX));
  /* 105b5790 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b5792 mov cx, word ptr [0x105d2ce6] */
  CX = (r16((uint32_t)(0x105d2ce6)));
  /* 105b5799 push ecx */
  push32((uint32_t)(ECX));
  /* 105b579a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b579c mov dx, word ptr [0x105d2ce2] */
  DX = (r16((uint32_t)(0x105d2ce2)));
  /* 105b57a3 push edx */
  push32((uint32_t)(EDX));
  /* 105b57a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b57a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105b57aa push ecx */
  push32((uint32_t)(ECX));
  /* 105b57ab push 1 */
  push32((uint32_t)(0x1u));
  /* 105b57ad push 1 */
  push32((uint32_t)(0x1u));
  /* 105b57af call 0x105b5a10 */
  push32(0x105b57b4u); f_105b5a10();
  /* 105b57b4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b57b7 jmp 0x105b580a */
  goto L_105b580a;
L_105b57b9:;
  /* 105b57b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b57bb mov dx, word ptr [0x105d2cee] */
  DX = (r16((uint32_t)(0x105d2cee)));
  /* 105b57c2 push edx */
  push32((uint32_t)(EDX));
  /* 105b57c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b57c5 mov ax, word ptr [0x105d2cec] */
  AX = (r16((uint32_t)(0x105d2cec)));
  /* 105b57cb push eax */
  push32((uint32_t)(EAX));
  /* 105b57cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b57ce mov cx, word ptr [0x105d2cea] */
  CX = (r16((uint32_t)(0x105d2cea)));
  /* 105b57d5 push ecx */
  push32((uint32_t)(ECX));
  /* 105b57d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b57d8 mov dx, word ptr [0x105d2ce8] */
  DX = (r16((uint32_t)(0x105d2ce8)));
  /* 105b57df push edx */
  push32((uint32_t)(EDX));
  /* 105b57e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b57e2 mov ax, word ptr [0x105d2ce6] */
  AX = (r16((uint32_t)(0x105d2ce6)));
  /* 105b57e8 push eax */
  push32((uint32_t)(EAX));
  /* 105b57e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b57eb push 0 */
  push32((uint32_t)(0x0u));
  /* 105b57ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b57ef mov cx, word ptr [0x105d2ce2] */
  CX = (r16((uint32_t)(0x105d2ce2)));
  /* 105b57f6 push ecx */
  push32((uint32_t)(ECX));
  /* 105b57f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b57fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105b57fd push eax */
  push32((uint32_t)(EAX));
  /* 105b57fe push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5800 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5802 call 0x105b5a10 */
  push32(0x105b5807u); f_105b5a10();
  /* 105b5807 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b580a:;
  /* 105b580a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b580c mov cx, word ptr [0x105d2c8c] */
  CX = (r16((uint32_t)(0x105d2c8c)));
  /* 105b5813 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b5815 jne 0x105b5872 */
  if (!C.zf) goto L_105b5872;
  /* 105b5817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5819 mov dx, word ptr [0x105d2c9a] */
  DX = (r16((uint32_t)(0x105d2c9a)));
  /* 105b5820 push edx */
  push32((uint32_t)(EDX));
  /* 105b5821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5823 mov ax, word ptr [0x105d2c98] */
  AX = (r16((uint32_t)(0x105d2c98)));
  /* 105b5829 push eax */
  push32((uint32_t)(EAX));
  /* 105b582a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b582c mov cx, word ptr [0x105d2c96] */
  CX = (r16((uint32_t)(0x105d2c96)));
  /* 105b5833 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5836 mov dx, word ptr [0x105d2c94] */
  DX = (r16((uint32_t)(0x105d2c94)));
  /* 105b583d push edx */
  push32((uint32_t)(EDX));
  /* 105b583e push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5842 mov ax, word ptr [0x105d2c90] */
  AX = (r16((uint32_t)(0x105d2c90)));
  /* 105b5848 push eax */
  push32((uint32_t)(EAX));
  /* 105b5849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b584b mov cx, word ptr [0x105d2c92] */
  CX = (r16((uint32_t)(0x105d2c92)));
  /* 105b5852 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5853 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5855 mov dx, word ptr [0x105d2c8e] */
  DX = (r16((uint32_t)(0x105d2c8e)));
  /* 105b585c push edx */
  push32((uint32_t)(EDX));
  /* 105b585d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5860 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105b5863 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5864 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5866 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5868 call 0x105b5a10 */
  push32(0x105b586du); f_105b5a10();
  /* 105b586d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5870 jmp 0x105b58c3 */
  goto L_105b58c3;
L_105b5872:;
  /* 105b5872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5874 mov dx, word ptr [0x105d2c9a] */
  DX = (r16((uint32_t)(0x105d2c9a)));
  /* 105b587b push edx */
  push32((uint32_t)(EDX));
  /* 105b587c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b587e mov ax, word ptr [0x105d2c98] */
  AX = (r16((uint32_t)(0x105d2c98)));
  /* 105b5884 push eax */
  push32((uint32_t)(EAX));
  /* 105b5885 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b5887 mov cx, word ptr [0x105d2c96] */
  CX = (r16((uint32_t)(0x105d2c96)));
  /* 105b588e push ecx */
  push32((uint32_t)(ECX));
  /* 105b588f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b5891 mov dx, word ptr [0x105d2c94] */
  DX = (r16((uint32_t)(0x105d2c94)));
  /* 105b5898 push edx */
  push32((uint32_t)(EDX));
  /* 105b5899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b589b mov ax, word ptr [0x105d2c92] */
  AX = (r16((uint32_t)(0x105d2c92)));
  /* 105b58a1 push eax */
  push32((uint32_t)(EAX));
  /* 105b58a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b58a8 mov cx, word ptr [0x105d2c8e] */
  CX = (r16((uint32_t)(0x105d2c8e)));
  /* 105b58af push ecx */
  push32((uint32_t)(ECX));
  /* 105b58b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b58b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105b58b6 push eax */
  push32((uint32_t)(EAX));
  /* 105b58b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58bb call 0x105b5a10 */
  push32(0x105b58c0u); f_105b5a10();
  /* 105b58c0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b58c3:;
  /* 105b58c3 jmp 0x105b590b */
  goto L_105b590b;
L_105b58c5:;
  /* 105b58c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58cb push 2 */
  push32((uint32_t)(0x2u));
  /* 105b58cd push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58cf push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b58d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 105b58d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b58d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105b58db push edx */
  push32((uint32_t)(EDX));
  /* 105b58dc push 1 */
  push32((uint32_t)(0x1u));
  /* 105b58de push 1 */
  push32((uint32_t)(0x1u));
  /* 105b58e0 call 0x105b5a10 */
  push32(0x105b58e5u); f_105b5a10();
  /* 105b58e5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b58e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58ea push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58ec push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58ee push 2 */
  push32((uint32_t)(0x2u));
  /* 105b58f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b58f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 105b58f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 105b58f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b58fb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105b58fe push ecx */
  push32((uint32_t)(ECX));
  /* 105b58ff push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5901 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5903 call 0x105b5a10 */
  push32(0x105b5908u); f_105b5a10();
  /* 105b5908 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b590b:;
  /* 105b590b mov edx, dword ptr [0x105d1e3c] */
  EDX = (r32((uint32_t)(0x105d1e3c)));
  /* 105b5911 cmp edx, dword ptr [0x105d1e4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5917 jge 0x105b5964 */
  if ((C.sf==C.of)) goto L_105b5964;
  /* 105b5919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b591c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105b591f cmp ecx, dword ptr [0x105d1e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5925 jl 0x105b5935 */
  if ((C.sf!=C.of)) goto L_105b5935;
  /* 105b5927 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b592a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b592d cmp eax, dword ptr [0x105d1e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5933 jle 0x105b593c */
  if ((C.zf||C.sf!=C.of)) goto L_105b593c;
L_105b5935:;
  /* 105b5935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5937 jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b593c:;
  /* 105b593c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b593f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105b5942 cmp edx, dword ptr [0x105d1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5948 jle 0x105b5962 */
  if ((C.zf||C.sf!=C.of)) goto L_105b5962;
  /* 105b594a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b594d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105b5950 cmp ecx, dword ptr [0x105d1e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5956 jge 0x105b5962 */
  if ((C.sf==C.of)) goto L_105b5962;
  /* 105b5958 mov eax, 1 */
  EAX = (0x1u);
  /* 105b595d jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b5962:;
  /* 105b5962 jmp 0x105b59a7 */
  goto L_105b59a7;
L_105b5964:;
  /* 105b5964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5967 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b596a cmp eax, dword ptr [0x105d1e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5970 jl 0x105b5980 */
  if ((C.sf!=C.of)) goto L_105b5980;
  /* 105b5972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5975 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105b5978 cmp edx, dword ptr [0x105d1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b597e jle 0x105b5987 */
  if ((C.zf||C.sf!=C.of)) goto L_105b5987;
L_105b5980:;
  /* 105b5980 mov eax, 1 */
  EAX = (0x1u);
  /* 105b5985 jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b5987:;
  /* 105b5987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b598a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105b598d cmp ecx, dword ptr [0x105d1e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5993 jle 0x105b59a7 */
  if ((C.zf||C.sf!=C.of)) goto L_105b59a7;
  /* 105b5995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5998 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105b599b cmp eax, dword ptr [0x105d1e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b59a1 jge 0x105b59a7 */
  if ((C.sf==C.of)) goto L_105b59a7;
  /* 105b59a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b59a5 jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b59a7:;
  /* 105b59a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b59aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105b59ad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b59b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b59b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b59b5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b59b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b59ba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105b59bd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b59c3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b59c5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b59cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b59ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b59d1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105b59d4 cmp edx, dword ptr [0x105d1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x105d1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b59da jne 0x105b59f2 */
  if (!C.zf) goto L_105b59f2;
  /* 105b59dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b59df cmp eax, dword ptr [0x105d1e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d1e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b59e5 jl 0x105b59ee */
  if ((C.sf!=C.of)) goto L_105b59ee;
  /* 105b59e7 mov eax, 1 */
  EAX = (0x1u);
  /* 105b59ec jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b59ee:;
  /* 105b59ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b59f0 jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b59f2:;
  /* 105b59f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b59f5 cmp ecx, dword ptr [0x105d1e50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d1e50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b59fb jge 0x105b5a04 */
  if ((C.sf==C.of)) goto L_105b5a04;
  /* 105b59fd mov eax, 1 */
  EAX = (0x1u);
  /* 105b5a02 jmp 0x105b5a06 */
  goto L_105b5a06;
L_105b5a04:;
  /* 105b5a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b5a06:;
  /* 105b5a06 mov esp, ebp */
  ESP = (EBP);
  /* 105b5a08 pop ebp */
  EBP = (pop32());
  /* 105b5a09 ret  */
  ESPCHK(0x105b5710u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a10 @ 0x105b5a10 (504 bytes, 145 insns) */
void f_105b5a10(void) {
  FTRACE(0x105b5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5a11 mov ebp, esp */
  EBP = (ESP);
  /* 105b5a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5a16 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5a1a jne 0x105b5aec */
  if (!C.zf) goto L_105b5aec;
  /* 105b5a20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5a23 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105b5a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5a28 jne 0x105b5a39 */
  if (!C.zf) goto L_105b5a39;
  /* 105b5a2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5a2d mov edx, dword ptr [ecx*4 + 0x105d1e5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d1e5c)));
  /* 105b5a34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105b5a37 jmp 0x105b5a46 */
  goto L_105b5a46;
L_105b5a39:;
  /* 105b5a39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5a3c mov ecx, dword ptr [eax*4 + 0x105d1e90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x105d1e90)));
  /* 105b5a43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105b5a46:;
  /* 105b5a46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b5a49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5a4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b5a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5a52 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5a55 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5a5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5a60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5a63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5a66 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 105b5a69 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 105b5a6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105b5a6e mov ecx, 7 */
  ECX = (0x7u);
  /* 105b5a73 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105b5a75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b5a78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b5a7b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5a7e jg 0x105b5a99 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b5a99;
  /* 105b5a80 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b5a83 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5a86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b5a89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5a8c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5a8f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5a92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5a94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b5a97 jmp 0x105b5aad */
  goto L_105b5aad;
L_105b5a99:;
  /* 105b5a99 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b5a9c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5a9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b5aa2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5aa5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5aa8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5aaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105b5aad:;
  /* 105b5aad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5ab1 jne 0x105b5aea */
  if (!C.zf) goto L_105b5aea;
  /* 105b5ab3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5ab6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 105b5ab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b5abb jne 0x105b5acc */
  if (!C.zf) goto L_105b5acc;
  /* 105b5abd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5ac0 mov eax, dword ptr [edx*4 + 0x105d1e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d1e60)));
  /* 105b5ac7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105b5aca jmp 0x105b5ad9 */
  goto L_105b5ad9;
L_105b5acc:;
  /* 105b5acc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5acf mov edx, dword ptr [ecx*4 + 0x105d1e94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x105d1e94)));
  /* 105b5ad6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105b5ad9:;
  /* 105b5ad9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5adc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5adf jle 0x105b5aea */
  if ((C.zf||C.sf!=C.of)) goto L_105b5aea;
  /* 105b5ae1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5ae4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5ae7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105b5aea:;
  /* 105b5aea jmp 0x105b5b21 */
  goto L_105b5b21;
L_105b5aec:;
  /* 105b5aec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5aef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105b5af2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b5af4 jne 0x105b5b05 */
  if (!C.zf) goto L_105b5b05;
  /* 105b5af6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5af9 mov ecx, dword ptr [eax*4 + 0x105d1e5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x105d1e5c)));
  /* 105b5b00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105b5b03 jmp 0x105b5b12 */
  goto L_105b5b12;
L_105b5b05:;
  /* 105b5b05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5b08 mov eax, dword ptr [edx*4 + 0x105d1e90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x105d1e90)));
  /* 105b5b0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_105b5b12:;
  /* 105b5b12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b5b15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105b5b18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5b1b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105b5b21:;
  /* 105b5b21 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5b25 jne 0x105b5b61 */
  if (!C.zf) goto L_105b5b61;
  /* 105b5b27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5b2a mov dword ptr [0x105d1e3c], eax */
  w32((uint32_t)(0x105d1e3c), (EAX));
  /* 105b5b2f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 105b5b32 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b35 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 105b5b38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b3a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b3d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 105b5b40 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b42 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b48 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 105b5b4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b4d mov dword ptr [0x105d1e40], ecx */
  w32((uint32_t)(0x105d1e40), (ECX));
  /* 105b5b53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5b56 mov dword ptr [0x105d1e38], edx */
  w32((uint32_t)(0x105d1e38), (EDX));
  /* 105b5b5c jmp 0x105b5c04 */
  goto L_105b5c04;
L_105b5b61:;
  /* 105b5b61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b5b64 mov dword ptr [0x105d1e4c], eax */
  w32((uint32_t)(0x105d1e4c), (EAX));
  /* 105b5b69 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 105b5b6c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b6f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 105b5b72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b74 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b77 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 105b5b7a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b7c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b82 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 105b5b85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5b87 mov dword ptr [0x105d1e50], ecx */
  w32((uint32_t)(0x105d1e50), (ECX));
  /* 105b5b8d mov edx, dword ptr [0x105d1da8] */
  EDX = (r32((uint32_t)(0x105d1da8)));
  /* 105b5b93 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105b5b99 mov eax, dword ptr [0x105d1e50] */
  EAX = (r32((uint32_t)(0x105d1e50)));
  /* 105b5b9e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5ba0 mov dword ptr [0x105d1e50], eax */
  w32((uint32_t)(0x105d1e50), (EAX));
  /* 105b5ba5 cmp dword ptr [0x105d1e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d1e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5bac jge 0x105b5bd1 */
  if ((C.sf==C.of)) goto L_105b5bd1;
  /* 105b5bae mov ecx, dword ptr [0x105d1e50] */
  ECX = (r32((uint32_t)(0x105d1e50)));
  /* 105b5bb4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5bba mov dword ptr [0x105d1e50], ecx */
  w32((uint32_t)(0x105d1e50), (ECX));
  /* 105b5bc0 mov edx, dword ptr [0x105d1e4c] */
  EDX = (r32((uint32_t)(0x105d1e4c)));
  /* 105b5bc6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5bc9 mov dword ptr [0x105d1e4c], edx */
  w32((uint32_t)(0x105d1e4c), (EDX));
  /* 105b5bcf jmp 0x105b5bfb */
  goto L_105b5bfb;
L_105b5bd1:;
  /* 105b5bd1 cmp dword ptr [0x105d1e50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x105d1e50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5bdb jl 0x105b5bfb */
  if ((C.sf!=C.of)) goto L_105b5bfb;
  /* 105b5bdd mov eax, dword ptr [0x105d1e50] */
  EAX = (r32((uint32_t)(0x105d1e50)));
  /* 105b5be2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b5be7 mov dword ptr [0x105d1e50], eax */
  w32((uint32_t)(0x105d1e50), (EAX));
  /* 105b5bec mov ecx, dword ptr [0x105d1e4c] */
  ECX = (r32((uint32_t)(0x105d1e4c)));
  /* 105b5bf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5bf5 mov dword ptr [0x105d1e4c], ecx */
  w32((uint32_t)(0x105d1e4c), (ECX));
L_105b5bfb:;
  /* 105b5bfb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5bfe mov dword ptr [0x105d1e48], edx */
  w32((uint32_t)(0x105d1e48), (EDX));
L_105b5c04:;
  /* 105b5c04 mov esp, ebp */
  ESP = (EBP);
  /* 105b5c06 pop ebp */
  EBP = (pop32());
  /* 105b5c07 ret  */
  ESPCHK(0x105b5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c10 @ 0x105b5c10 (382 bytes, 135 insns) */
void f_105b5c10(void) {
  FTRACE(0x105b5c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5c10 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5c11 mov ebp, esp */
  EBP = (ESP);
  /* 105b5c13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5c15 push 0x105cf450 */
  push32((uint32_t)(0x105cf450u));
  /* 105b5c1a push 0x105b3270 */
  push32((uint32_t)(0x105b3270u));
  /* 105b5c1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105b5c25 push eax */
  push32((uint32_t)(EAX));
  /* 105b5c26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105b5c2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5c30 push ebx */
  push32((uint32_t)(EBX));
  /* 105b5c31 push esi */
  push32((uint32_t)(ESI));
  /* 105b5c32 push edi */
  push32((uint32_t)(EDI));
  /* 105b5c33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b5c36 cmp dword ptr [0x105d2cfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5c3d jne 0x105b5c82 */
  if (!C.zf) goto L_105b5c82;
  /* 105b5c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5c43 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5c47 call dword ptr [0x105d530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d530c))), 0x105b5c4du);
  /* 105b5c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5c4f je 0x105b5c5d */
  if (C.zf) goto L_105b5c5d;
  /* 105b5c51 mov dword ptr [0x105d2cfc], 1 */
  w32((uint32_t)(0x105d2cfc), (0x1u));
  /* 105b5c5b jmp 0x105b5c82 */
  goto L_105b5c82;
L_105b5c5d:;
  /* 105b5c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5c65 call dword ptr [0x105d52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f4))), 0x105b5c6bu);
  /* 105b5c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5c6d je 0x105b5c7b */
  if (C.zf) goto L_105b5c7b;
  /* 105b5c6f mov dword ptr [0x105d2cfc], 2 */
  w32((uint32_t)(0x105d2cfc), (0x2u));
  /* 105b5c79 jmp 0x105b5c82 */
  goto L_105b5c82;
L_105b5c7b:;
  /* 105b5c7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5c7d jmp 0x105b5d91 */
  goto L_105b5d91;
L_105b5c82:;
  /* 105b5c82 cmp dword ptr [0x105d2cfc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cfc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5c89 jne 0x105b5ca6 */
  if (!C.zf) goto L_105b5ca6;
  /* 105b5c8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5c8e push eax */
  push32((uint32_t)(EAX));
  /* 105b5c8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5c92 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5c93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b5c96 push edx */
  push32((uint32_t)(EDX));
  /* 105b5c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5c9a push eax */
  push32((uint32_t)(EAX));
  /* 105b5c9b call dword ptr [0x105d530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d530c))), 0x105b5ca1u);
  /* 105b5ca1 jmp 0x105b5d91 */
  goto L_105b5d91;
L_105b5ca6:;
  /* 105b5ca6 cmp dword ptr [0x105d2cfc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2cfc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5cad jne 0x105b5d8f */
  if (!C.zf) goto L_105b5d8f;
  /* 105b5cb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5cb7 jne 0x105b5cc2 */
  if (!C.zf) goto L_105b5cc2;
  /* 105b5cb9 mov ecx, dword ptr [0x105d2bb8] */
  ECX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b5cbf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_105b5cc2:;
  /* 105b5cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5cc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b5cc9 push edx */
  push32((uint32_t)(EDX));
  /* 105b5cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5ccd push eax */
  push32((uint32_t)(EAX));
  /* 105b5cce call dword ptr [0x105d52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f4))), 0x105b5cd4u);
  /* 105b5cd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105b5cd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5cdb jne 0x105b5ce4 */
  if (!C.zf) goto L_105b5ce4;
  /* 105b5cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5cdf jmp 0x105b5d91 */
  goto L_105b5d91;
L_105b5ce4:;
  /* 105b5ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b5ceb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b5cee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5cf1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b5cf3 call 0x105aab90 */
  push32(0x105b5cf8u); f_105aab90();
  /* 105b5cf8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 105b5cfb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b5cfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b5d01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105b5d04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b5d0b jmp 0x105b5d24 */
  goto L_105b5d24;
  /* 105b5d0d mov eax, 1 */
  EAX = (0x1u);
  /* 105b5d12 ret  */
  ESPCHK(0x105b5c10u, _esp0);
  ESP += 4; return;
  /* 105b5d13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b5d16 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105b5d1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b5d24:;
  /* 105b5d24 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5d28 jne 0x105b5d2e */
  if (!C.zf) goto L_105b5d2e;
  /* 105b5d2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5d2c jmp 0x105b5d91 */
  goto L_105b5d91;
L_105b5d2e:;
  /* 105b5d2e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b5d31 push edx */
  push32((uint32_t)(EDX));
  /* 105b5d32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b5d35 push eax */
  push32((uint32_t)(EAX));
  /* 105b5d36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b5d39 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5d3d push edx */
  push32((uint32_t)(EDX));
  /* 105b5d3e call dword ptr [0x105d52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f4))), 0x105b5d44u);
  /* 105b5d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5d46 jne 0x105b5d4c */
  if (!C.zf) goto L_105b5d4c;
  /* 105b5d48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5d4a jmp 0x105b5d91 */
  goto L_105b5d91;
L_105b5d4c:;
  /* 105b5d4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5d50 jne 0x105b5d6d */
  if (!C.zf) goto L_105b5d6d;
  /* 105b5d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5d56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5d58 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b5d5b push eax */
  push32((uint32_t)(EAX));
  /* 105b5d5c push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5d5e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b5d61 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5d62 call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b5d68u);
  /* 105b5d68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105b5d6b jmp 0x105b5d8a */
  goto L_105b5d8a;
L_105b5d6d:;
  /* 105b5d6d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5d70 push edx */
  push32((uint32_t)(EDX));
  /* 105b5d71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5d74 push eax */
  push32((uint32_t)(EAX));
  /* 105b5d75 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5d77 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b5d7a push ecx */
  push32((uint32_t)(ECX));
  /* 105b5d7b push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5d7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b5d80 push edx */
  push32((uint32_t)(EDX));
  /* 105b5d81 call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b5d87u);
  /* 105b5d87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105b5d8a:;
  /* 105b5d8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b5d8d jmp 0x105b5d91 */
  goto L_105b5d91;
L_105b5d8f:;
  /* 105b5d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b5d91:;
  /* 105b5d91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 105b5d94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b5d97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105b5d9e pop edi */
  EDI = (pop32());
  /* 105b5d9f pop esi */
  ESI = (pop32());
  /* 105b5da0 pop ebx */
  EBX = (pop32());
  /* 105b5da1 mov esp, ebp */
  ESP = (EBP);
  /* 105b5da3 pop ebp */
  EBP = (pop32());
  /* 105b5da4 ret  */
  ESPCHK(0x105b5c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015db0 @ 0x105b5db0 (398 bytes, 140 insns) */
void f_105b5db0(void) {
  FTRACE(0x105b5db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5db0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5db1 mov ebp, esp */
  EBP = (ESP);
  /* 105b5db3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5db5 push 0x105cf460 */
  push32((uint32_t)(0x105cf460u));
  /* 105b5dba push 0x105b3270 */
  push32((uint32_t)(0x105b3270u));
  /* 105b5dbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105b5dc5 push eax */
  push32((uint32_t)(EAX));
  /* 105b5dc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105b5dcd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 105b5dd1 push esi */
  push32((uint32_t)(ESI));
  /* 105b5dd2 push edi */
  push32((uint32_t)(EDI));
  /* 105b5dd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b5dd6 cmp dword ptr [0x105d2d00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5ddd jne 0x105b5e22 */
  if (!C.zf) goto L_105b5e22;
  /* 105b5ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5de7 call dword ptr [0x105d530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d530c))), 0x105b5dedu);
  /* 105b5ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5def je 0x105b5dfd */
  if (C.zf) goto L_105b5dfd;
  /* 105b5df1 mov dword ptr [0x105d2d00], 1 */
  w32((uint32_t)(0x105d2d00), (0x1u));
  /* 105b5dfb jmp 0x105b5e22 */
  goto L_105b5e22;
L_105b5dfd:;
  /* 105b5dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5dff push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5e01 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b5e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5e05 call dword ptr [0x105d52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f4))), 0x105b5e0bu);
  /* 105b5e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5e0d je 0x105b5e1b */
  if (C.zf) goto L_105b5e1b;
  /* 105b5e0f mov dword ptr [0x105d2d00], 2 */
  w32((uint32_t)(0x105d2d00), (0x2u));
  /* 105b5e19 jmp 0x105b5e22 */
  goto L_105b5e22;
L_105b5e1b:;
  /* 105b5e1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5e1d jmp 0x105b5f41 */
  goto L_105b5f41;
L_105b5e22:;
  /* 105b5e22 cmp dword ptr [0x105d2d00], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d00))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5e29 jne 0x105b5e46 */
  if (!C.zf) goto L_105b5e46;
  /* 105b5e2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5e2e push eax */
  push32((uint32_t)(EAX));
  /* 105b5e2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5e32 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5e33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b5e36 push edx */
  push32((uint32_t)(EDX));
  /* 105b5e37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5e3a push eax */
  push32((uint32_t)(EAX));
  /* 105b5e3b call dword ptr [0x105d52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52f4))), 0x105b5e41u);
  /* 105b5e41 jmp 0x105b5f41 */
  goto L_105b5f41;
L_105b5e46:;
  /* 105b5e46 cmp dword ptr [0x105d2d00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5e4d jne 0x105b5f3f */
  if (!C.zf) goto L_105b5f3f;
  /* 105b5e53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5e57 jne 0x105b5e62 */
  if (!C.zf) goto L_105b5e62;
  /* 105b5e59 mov ecx, dword ptr [0x105d2bb8] */
  ECX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b5e5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_105b5e62:;
  /* 105b5e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5e66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b5e69 push edx */
  push32((uint32_t)(EDX));
  /* 105b5e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5e6d push eax */
  push32((uint32_t)(EAX));
  /* 105b5e6e call dword ptr [0x105d530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d530c))), 0x105b5e74u);
  /* 105b5e74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105b5e77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5e7b jne 0x105b5e84 */
  if (!C.zf) goto L_105b5e84;
  /* 105b5e7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5e7f jmp 0x105b5f41 */
  goto L_105b5f41;
L_105b5e84:;
  /* 105b5e84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b5e8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b5e8e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b5e90 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5e93 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b5e95 call 0x105aab90 */
  push32(0x105b5e9au); f_105aab90();
  /* 105b5e9a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 105b5e9d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b5ea0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b5ea3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105b5ea6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b5ead jmp 0x105b5ec6 */
  goto L_105b5ec6;
  /* 105b5eaf mov eax, 1 */
  EAX = (0x1u);
  /* 105b5eb4 ret  */
  ESPCHK(0x105b5db0u, _esp0);
  ESP += 4; return;
  /* 105b5eb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b5eb8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105b5ebf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b5ec6:;
  /* 105b5ec6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5eca jne 0x105b5ed0 */
  if (!C.zf) goto L_105b5ed0;
  /* 105b5ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5ece jmp 0x105b5f41 */
  goto L_105b5f41;
L_105b5ed0:;
  /* 105b5ed0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b5ed3 push edx */
  push32((uint32_t)(EDX));
  /* 105b5ed4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b5ed7 push eax */
  push32((uint32_t)(EAX));
  /* 105b5ed8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b5edb push ecx */
  push32((uint32_t)(ECX));
  /* 105b5edc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5edf push edx */
  push32((uint32_t)(EDX));
  /* 105b5ee0 call dword ptr [0x105d530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d530c))), 0x105b5ee6u);
  /* 105b5ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b5ee8 jne 0x105b5eee */
  if (!C.zf) goto L_105b5eee;
  /* 105b5eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b5eec jmp 0x105b5f41 */
  goto L_105b5f41;
L_105b5eee:;
  /* 105b5eee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5ef2 jne 0x105b5f16 */
  if (!C.zf) goto L_105b5f16;
  /* 105b5ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5efa push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5efc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5efe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b5f01 push eax */
  push32((uint32_t)(EAX));
  /* 105b5f02 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b5f07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b5f0a push ecx */
  push32((uint32_t)(ECX));
  /* 105b5f0b call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b5f11u);
  /* 105b5f11 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105b5f14 jmp 0x105b5f3a */
  goto L_105b5f3a;
L_105b5f16:;
  /* 105b5f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b5f1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b5f1d push edx */
  push32((uint32_t)(EDX));
  /* 105b5f1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b5f21 push eax */
  push32((uint32_t)(EAX));
  /* 105b5f22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b5f24 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b5f27 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5f28 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105b5f2d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b5f30 push edx */
  push32((uint32_t)(EDX));
  /* 105b5f31 call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b5f37u);
  /* 105b5f37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105b5f3a:;
  /* 105b5f3a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b5f3d jmp 0x105b5f41 */
  goto L_105b5f41;
L_105b5f3f:;
  /* 105b5f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b5f41:;
  /* 105b5f41 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 105b5f44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b5f47 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105b5f4e pop edi */
  EDI = (pop32());
  /* 105b5f4f pop esi */
  ESI = (pop32());
  /* 105b5f50 pop ebx */
  EBX = (pop32());
  /* 105b5f51 mov esp, ebp */
  ESP = (EBP);
  /* 105b5f53 pop ebp */
  EBP = (pop32());
  /* 105b5f54 ret  */
  ESPCHK(0x105b5db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f60 @ 0x105b5f60 (11 bytes, 6 insns) */
void f_105b5f60(void) {
  FTRACE(0x105b5f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5f60 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5f61 mov ebp, esp */
  EBP = (ESP);
  /* 105b5f63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5f66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5f69 pop ebp */
  EBP = (pop32());
  /* 105b5f6a ret  */
  ESPCHK(0x105b5f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f70 @ 0x105b5f70 (147 bytes, 43 insns) */
void f_105b5f70(void) {
  FTRACE(0x105b5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 105b5f71 mov ebp, esp */
  EBP = (ESP);
  /* 105b5f73 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5f74 cmp dword ptr [0x105d2ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5f7b jne 0x105b5f97 */
  if (!C.zf) goto L_105b5f97;
  /* 105b5f7d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5f81 jl 0x105b5f92 */
  if ((C.sf!=C.of)) goto L_105b5f92;
  /* 105b5f83 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5f87 jg 0x105b5f92 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b5f92;
  /* 105b5f89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5f8c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5f8f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105b5f92:;
  /* 105b5f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5f95 jmp 0x105b5fff */
  goto L_105b5fff;
L_105b5f97:;
  /* 105b5f97 push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105b5f9c call dword ptr [0x105d5224] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5224))), 0x105b5fa2u);
  /* 105b5fa2 cmp dword ptr [0x105d2d1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5fa9 je 0x105b5fc9 */
  if (C.zf) goto L_105b5fc9;
  /* 105b5fab push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105b5fb0 call dword ptr [0x105d5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5218))), 0x105b5fb6u);
  /* 105b5fb6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b5fb8 call 0x105abda0 */
  push32(0x105b5fbdu); f_105abda0();
  /* 105b5fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5fc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105b5fc7 jmp 0x105b5fd0 */
  goto L_105b5fd0;
L_105b5fc9:;
  /* 105b5fc9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105b5fd0:;
  /* 105b5fd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b5fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b5fd4 call 0x105b6010 */
  push32(0x105b5fd9u); f_105b6010();
  /* 105b5fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5fdc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105b5fdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b5fe3 je 0x105b5ff1 */
  if (C.zf) goto L_105b5ff1;
  /* 105b5fe5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105b5fe7 call 0x105abe40 */
  push32(0x105b5fecu); f_105abe40();
  /* 105b5fec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b5fef jmp 0x105b5ffc */
  goto L_105b5ffc;
L_105b5ff1:;
  /* 105b5ff1 push 0x105d2d2c */
  push32((uint32_t)(0x105d2d2cu));
  /* 105b5ff6 call dword ptr [0x105d5218] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5218))), 0x105b5ffcu);
L_105b5ffc:;
  /* 105b5ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_105b5fff:;
  /* 105b5fff mov esp, ebp */
  ESP = (EBP);
  /* 105b6001 pop ebp */
  EBP = (pop32());
  /* 105b6002 ret  */
  ESPCHK(0x105b5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10016010 @ 0x105b6010 (299 bytes, 91 insns) */
void f_105b6010(void) {
  FTRACE(0x105b6010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6010 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6011 mov ebp, esp */
  EBP = (ESP);
  /* 105b6013 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6016 cmp dword ptr [0x105d2ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b601d jne 0x105b603c */
  if (!C.zf) goto L_105b603c;
  /* 105b601f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6023 jl 0x105b6034 */
  if ((C.sf!=C.of)) goto L_105b6034;
  /* 105b6025 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6029 jg 0x105b6034 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b6034;
  /* 105b602b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b602e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6031 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105b6034:;
  /* 105b6034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6037 jmp 0x105b6137 */
  goto L_105b6137;
L_105b603c:;
  /* 105b603c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6043 jge 0x105b6083 */
  if ((C.sf==C.of)) goto L_105b6083;
  /* 105b6045 cmp dword ptr [0x105d1158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d1158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b604c jle 0x105b6061 */
  if ((C.zf||C.sf!=C.of)) goto L_105b6061;
  /* 105b604e push 1 */
  push32((uint32_t)(0x1u));
  /* 105b6050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6053 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6054 call 0x105ae2b0 */
  push32(0x105b6059u); f_105ae2b0();
  /* 105b6059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b605c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105b605f jmp 0x105b6075 */
  goto L_105b6075;
L_105b6061:;
  /* 105b6061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6064 mov eax, dword ptr [0x105d0de8] */
  EAX = (r32((uint32_t)(0x105d0de8)));
  /* 105b6069 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b606b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105b606f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105b6072 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105b6075:;
  /* 105b6075 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6079 jne 0x105b6083 */
  if (!C.zf) goto L_105b6083;
  /* 105b607b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b607e jmp 0x105b6137 */
  goto L_105b6137;
L_105b6083:;
  /* 105b6083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6086 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105b6089 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b608f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b6095 mov eax, dword ptr [0x105d0de8] */
  EAX = (r32((uint32_t)(0x105d0de8)));
  /* 105b609a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b609c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105b60a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 105b60a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b60a8 je 0x105b60cc */
  if (C.zf) goto L_105b60cc;
  /* 105b60aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b60ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105b60b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b60b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 105b60b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 105b60bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 105b60bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 105b60c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105b60ca jmp 0x105b60dd */
  goto L_105b60dd;
L_105b60cc:;
  /* 105b60cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 105b60cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 105b60d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 105b60d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_105b60dd:;
  /* 105b60dd push 1 */
  push32((uint32_t)(0x1u));
  /* 105b60df push 0 */
  push32((uint32_t)(0x0u));
  /* 105b60e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 105b60e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 105b60e6 push edx */
  push32((uint32_t)(EDX));
  /* 105b60e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b60ea push eax */
  push32((uint32_t)(EAX));
  /* 105b60eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105b60ee push ecx */
  push32((uint32_t)(ECX));
  /* 105b60ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105b60f4 mov edx, dword ptr [0x105d2ba8] */
  EDX = (r32((uint32_t)(0x105d2ba8)));
  /* 105b60fa push edx */
  push32((uint32_t)(EDX));
  /* 105b60fb call 0x105b0840 */
  push32(0x105b6100u); f_105b0840();
  /* 105b6100 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b6106 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b610a jne 0x105b6111 */
  if (!C.zf) goto L_105b6111;
  /* 105b610c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b610f jmp 0x105b6137 */
  goto L_105b6137;
L_105b6111:;
  /* 105b6111 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6115 jne 0x105b6121 */
  if (!C.zf) goto L_105b6121;
  /* 105b6117 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b611a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b611f jmp 0x105b6137 */
  goto L_105b6137;
L_105b6121:;
  /* 105b6121 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6124 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b6129 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 105b612c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105b6132 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 105b6135 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_105b6137:;
  /* 105b6137 mov esp, ebp */
  ESP = (EBP);
  /* 105b6139 pop ebp */
  EBP = (pop32());
  /* 105b613a ret  */
  ESPCHK(0x105b6010u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x105b6140 (52 bytes, 19 insns) */
void f_105b6140(void) {
  FTRACE(0x105b6140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6140 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105b6144 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 105b6148 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105b614a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 105b614e jne 0x105b6159 */
  if (!C.zf) goto L_105b6159;
  /* 105b6150 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 105b6154 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105b6156 ret 0x10 */
  ESPCHK(0x105b6140u, _esp0);
  ESP += 20; return;
L_105b6159:;
  /* 105b6159 push ebx */
  push32((uint32_t)(EBX));
  /* 105b615a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105b615c mov ebx, eax */
  EBX = (EAX);
  /* 105b615e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105b6162 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105b6166 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6168 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105b616c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105b616e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6170 pop ebx */
  EBX = (pop32());
  /* 105b6171 ret 0x10 */
  ESPCHK(0x105b6140u, _esp0);
  ESP += 20; return;
}

/* FUN_10016180 @ 0x105b6180 (46 bytes, 18 insns) */
void f_105b6180(void) {
  FTRACE(0x105b6180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6180 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6181 mov ebp, esp */
  EBP = (ESP);
  /* 105b6183 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6184 push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b6186 call 0x105abda0 */
  push32(0x105b618bu); f_105abda0();
  /* 105b618b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b618e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6191 push eax */
  push32((uint32_t)(EAX));
  /* 105b6192 call 0x105b61b0 */
  push32(0x105b6197u); f_105b61b0();
  /* 105b6197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b619a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b619d push 0xc */
  push32((uint32_t)(0xcu));
  /* 105b619f call 0x105abe40 */
  push32(0x105b61a4u); f_105abe40();
  /* 105b61a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b61a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b61aa mov esp, ebp */
  ESP = (EBP);
  /* 105b61ac pop ebp */
  EBP = (pop32());
  /* 105b61ad ret  */
  ESPCHK(0x105b6180u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x105b61b0 (198 bytes, 69 insns) */
void f_105b61b0(void) {
  FTRACE(0x105b61b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b61b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b61b1 mov ebp, esp */
  EBP = (ESP);
  /* 105b61b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b61b6 mov eax, dword ptr [0x105d29bc] */
  EAX = (r32((uint32_t)(0x105d29bc)));
  /* 105b61bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b61be cmp dword ptr [0x105d44a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d44a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b61c5 jne 0x105b61ce */
  if (!C.zf) goto L_105b61ce;
  /* 105b61c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b61c9 jmp 0x105b6272 */
  goto L_105b6272;
L_105b61ce:;
  /* 105b61ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b61d2 jne 0x105b61f6 */
  if (!C.zf) goto L_105b61f6;
  /* 105b61d4 cmp dword ptr [0x105d29c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b61db je 0x105b61f6 */
  if (C.zf) goto L_105b61f6;
  /* 105b61dd call 0x105b62d0 */
  push32(0x105b61e2u); f_105b62d0();
  /* 105b61e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b61e4 je 0x105b61ed */
  if (C.zf) goto L_105b61ed;
  /* 105b61e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b61e8 jmp 0x105b6272 */
  goto L_105b6272;
L_105b61ed:;
  /* 105b61ed mov ecx, dword ptr [0x105d29bc] */
  ECX = (r32((uint32_t)(0x105d29bc)));
  /* 105b61f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105b61f6:;
  /* 105b61f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b61fa je 0x105b6270 */
  if (C.zf) goto L_105b6270;
  /* 105b61fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6200 je 0x105b6270 */
  if (C.zf) goto L_105b6270;
  /* 105b6202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6205 push edx */
  push32((uint32_t)(EDX));
  /* 105b6206 call 0x105aa820 */
  push32(0x105b620bu); f_105aa820();
  /* 105b620b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b620e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b6211:;
  /* 105b6211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6214 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6217 je 0x105b6270 */
  if (C.zf) goto L_105b6270;
  /* 105b6219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b621c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b621e push edx */
  push32((uint32_t)(EDX));
  /* 105b621f call 0x105aa820 */
  push32(0x105b6224u); f_105aa820();
  /* 105b6224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6227 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b622a jbe 0x105b6265 */
  if ((C.cf||C.zf)) goto L_105b6265;
  /* 105b622c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b622f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b6231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6234 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 105b6238 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b623b jne 0x105b6265 */
  if (!C.zf) goto L_105b6265;
  /* 105b623d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6240 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6244 push edx */
  push32((uint32_t)(EDX));
  /* 105b6245 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6248 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b624a push ecx */
  push32((uint32_t)(ECX));
  /* 105b624b call 0x105b6280 */
  push32(0x105b6250u); f_105b6280();
  /* 105b6250 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b6255 jne 0x105b6265 */
  if (!C.zf) goto L_105b6265;
  /* 105b6257 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b625a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b625c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b625f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 105b6263 jmp 0x105b6272 */
  goto L_105b6272;
L_105b6265:;
  /* 105b6265 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6268 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b626b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b626e jmp 0x105b6211 */
  goto L_105b6211;
L_105b6270:;
  /* 105b6270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b6272:;
  /* 105b6272 mov esp, ebp */
  ESP = (EBP);
  /* 105b6274 pop ebp */
  EBP = (pop32());
  /* 105b6275 ret  */
  ESPCHK(0x105b61b0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x105b6280 (79 bytes, 32 insns) */
void f_105b6280(void) {
  FTRACE(0x105b6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6280 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6281 mov ebp, esp */
  EBP = (ESP);
  /* 105b6283 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6284 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6288 jne 0x105b628e */
  if (!C.zf) goto L_105b628e;
  /* 105b628a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b628c jmp 0x105b62cb */
  goto L_105b62cb;
L_105b628e:;
  /* 105b628e mov eax, dword ptr [0x105d2d30] */
  EAX = (r32((uint32_t)(0x105d2d30)));
  /* 105b6293 push eax */
  push32((uint32_t)(EAX));
  /* 105b6294 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b6297 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b629b push edx */
  push32((uint32_t)(EDX));
  /* 105b629c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b629f push eax */
  push32((uint32_t)(EAX));
  /* 105b62a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b62a3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b62a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b62a6 mov edx, dword ptr [0x105d2fc4] */
  EDX = (r32((uint32_t)(0x105d2fc4)));
  /* 105b62ac push edx */
  push32((uint32_t)(EDX));
  /* 105b62ad call 0x105b6380 */
  push32(0x105b62b2u); f_105b6380();
  /* 105b62b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b62b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b62b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b62bc jne 0x105b62c5 */
  if (!C.zf) goto L_105b62c5;
  /* 105b62be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 105b62c3 jmp 0x105b62cb */
  goto L_105b62cb;
L_105b62c5:;
  /* 105b62c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b62c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105b62cb:;
  /* 105b62cb mov esp, ebp */
  ESP = (EBP);
  /* 105b62cd pop ebp */
  EBP = (pop32());
  /* 105b62ce ret  */
  ESPCHK(0x105b6280u, _esp0);
  ESP += 4; return;
}

/* FUN_100162d0 @ 0x105b62d0 (174 bytes, 66 insns) */
void f_105b62d0(void) {
  FTRACE(0x105b62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b62d1 mov ebp, esp */
  EBP = (ESP);
  /* 105b62d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b62d6 mov eax, dword ptr [0x105d29c4] */
  EAX = (r32((uint32_t)(0x105d29c4)));
  /* 105b62db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105b62de:;
  /* 105b62de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b62e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b62e4 je 0x105b6378 */
  if (C.zf) goto L_105b6378;
  /* 105b62ea push 0 */
  push32((uint32_t)(0x0u));
  /* 105b62ec push 0 */
  push32((uint32_t)(0x0u));
  /* 105b62ee push 0 */
  push32((uint32_t)(0x0u));
  /* 105b62f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b62f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b62f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b62f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b62f9 push eax */
  push32((uint32_t)(EAX));
  /* 105b62fa push 0 */
  push32((uint32_t)(0x0u));
  /* 105b62fc push 1 */
  push32((uint32_t)(0x1u));
  /* 105b62fe call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b6304u);
  /* 105b6304 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b6307 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b630b jne 0x105b6312 */
  if (!C.zf) goto L_105b6312;
  /* 105b630d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b6310 jmp 0x105b637a */
  goto L_105b637a;
L_105b6312:;
  /* 105b6312 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 105b6314 push 0x105cf46c */
  push32((uint32_t)(0x105cf46cu));
  /* 105b6319 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b631b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b631e push ecx */
  push32((uint32_t)(ECX));
  /* 105b631f call 0x105a79f0 */
  push32(0x105b6324u); f_105a79f0();
  /* 105b6324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6327 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b632a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b632e jne 0x105b6335 */
  if (!C.zf) goto L_105b6335;
  /* 105b6330 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b6333 jmp 0x105b637a */
  goto L_105b637a;
L_105b6335:;
  /* 105b6335 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b6337 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b6339 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b633c push edx */
  push32((uint32_t)(EDX));
  /* 105b633d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6340 push eax */
  push32((uint32_t)(EAX));
  /* 105b6341 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b6343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6346 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b6348 push edx */
  push32((uint32_t)(EDX));
  /* 105b6349 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b634b push 1 */
  push32((uint32_t)(0x1u));
  /* 105b634d call dword ptr [0x105d527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d527c))), 0x105b6353u);
  /* 105b6353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b6355 jne 0x105b635c */
  if (!C.zf) goto L_105b635c;
  /* 105b6357 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b635a jmp 0x105b637a */
  goto L_105b637a;
L_105b635c:;
  /* 105b635c push 0 */
  push32((uint32_t)(0x0u));
  /* 105b635e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6361 push eax */
  push32((uint32_t)(EAX));
  /* 105b6362 call 0x105b67d0 */
  push32(0x105b6367u); f_105b67d0();
  /* 105b6367 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b636a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b636d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6370 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b6373 jmp 0x105b62de */
  goto L_105b62de;
L_105b6378:;
  /* 105b6378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b637a:;
  /* 105b637a mov esp, ebp */
  ESP = (EBP);
  /* 105b637c pop ebp */
  EBP = (pop32());
  /* 105b637d ret  */
  ESPCHK(0x105b62d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016380 @ 0x105b6380 (970 bytes, 340 insns) */
void f_105b6380(void) {
  FTRACE(0x105b6380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6380 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6381 mov ebp, esp */
  EBP = (ESP);
  /* 105b6383 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105b6385 push 0x105cf4c0 */
  push32((uint32_t)(0x105cf4c0u));
  /* 105b638a push 0x105b3270 */
  push32((uint32_t)(0x105b3270u));
  /* 105b638f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105b6395 push eax */
  push32((uint32_t)(EAX));
  /* 105b6396 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105b639d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b63a0 push ebx */
  push32((uint32_t)(EBX));
  /* 105b63a1 push esi */
  push32((uint32_t)(ESI));
  /* 105b63a2 push edi */
  push32((uint32_t)(EDI));
  /* 105b63a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b63a6 cmp dword ptr [0x105d2d04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b63ad jne 0x105b6406 */
  if (!C.zf) goto L_105b6406;
  /* 105b63af push 1 */
  push32((uint32_t)(0x1u));
  /* 105b63b1 push 0x105ceb9c */
  push32((uint32_t)(0x105ceb9cu));
  /* 105b63b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b63b8 push 0x105ceb9c */
  push32((uint32_t)(0x105ceb9cu));
  /* 105b63bd push 0 */
  push32((uint32_t)(0x0u));
  /* 105b63bf push 0 */
  push32((uint32_t)(0x0u));
  /* 105b63c1 call dword ptr [0x105d5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5308))), 0x105b63c7u);
  /* 105b63c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b63c9 je 0x105b63d7 */
  if (C.zf) goto L_105b63d7;
  /* 105b63cb mov dword ptr [0x105d2d04], 1 */
  w32((uint32_t)(0x105d2d04), (0x1u));
  /* 105b63d5 jmp 0x105b6406 */
  goto L_105b6406;
L_105b63d7:;
  /* 105b63d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b63d9 push 0x105ceb98 */
  push32((uint32_t)(0x105ceb98u));
  /* 105b63de push 1 */
  push32((uint32_t)(0x1u));
  /* 105b63e0 push 0x105ceb98 */
  push32((uint32_t)(0x105ceb98u));
  /* 105b63e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b63e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b63e9 call dword ptr [0x105d5310] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5310))), 0x105b63efu);
  /* 105b63ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b63f1 je 0x105b63ff */
  if (C.zf) goto L_105b63ff;
  /* 105b63f3 mov dword ptr [0x105d2d04], 2 */
  w32((uint32_t)(0x105d2d04), (0x2u));
  /* 105b63fd jmp 0x105b6406 */
  goto L_105b6406;
L_105b63ff:;
  /* 105b63ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6401 jmp 0x105b6764 */
  goto L_105b6764;
L_105b6406:;
  /* 105b6406 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b640a jle 0x105b641f */
  if ((C.zf||C.sf!=C.of)) goto L_105b641f;
  /* 105b640c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b640f push eax */
  push32((uint32_t)(EAX));
  /* 105b6410 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b6413 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6414 call 0x105b6780 */
  push32(0x105b6419u); f_105b6780();
  /* 105b6419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b641c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_105b641f:;
  /* 105b641f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6423 jle 0x105b6438 */
  if ((C.zf||C.sf!=C.of)) goto L_105b6438;
  /* 105b6425 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b6428 push edx */
  push32((uint32_t)(EDX));
  /* 105b6429 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b642c push eax */
  push32((uint32_t)(EAX));
  /* 105b642d call 0x105b6780 */
  push32(0x105b6432u); f_105b6780();
  /* 105b6432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6435 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_105b6438:;
  /* 105b6438 cmp dword ptr [0x105d2d04], 2 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d04))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b643f jne 0x105b6464 */
  if (!C.zf) goto L_105b6464;
  /* 105b6441 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b6444 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6445 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b6448 push edx */
  push32((uint32_t)(EDX));
  /* 105b6449 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b644c push eax */
  push32((uint32_t)(EAX));
  /* 105b644d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b6450 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6451 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6454 push edx */
  push32((uint32_t)(EDX));
  /* 105b6455 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6458 push eax */
  push32((uint32_t)(EAX));
  /* 105b6459 call dword ptr [0x105d5310] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5310))), 0x105b645fu);
  /* 105b645f jmp 0x105b6764 */
  goto L_105b6764;
L_105b6464:;
  /* 105b6464 cmp dword ptr [0x105d2d04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x105d2d04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b646b jne 0x105b6762 */
  if (!C.zf) goto L_105b6762;
  /* 105b6471 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6475 jne 0x105b6480 */
  if (!C.zf) goto L_105b6480;
  /* 105b6477 mov ecx, dword ptr [0x105d2bb8] */
  ECX = (r32((uint32_t)(0x105d2bb8)));
  /* 105b647d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_105b6480:;
  /* 105b6480 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6484 je 0x105b6490 */
  if (C.zf) goto L_105b6490;
  /* 105b6486 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b648a jne 0x105b660c */
  if (!C.zf) goto L_105b660c;
L_105b6490:;
  /* 105b6490 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b6493 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6496 jne 0x105b64a2 */
  if (!C.zf) goto L_105b64a2;
  /* 105b6498 mov eax, 2 */
  EAX = (0x2u);
  /* 105b649d jmp 0x105b6764 */
  goto L_105b6764;
L_105b64a2:;
  /* 105b64a2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b64a6 jle 0x105b64b2 */
  if ((C.zf||C.sf!=C.of)) goto L_105b64b2;
  /* 105b64a8 mov eax, 1 */
  EAX = (0x1u);
  /* 105b64ad jmp 0x105b6764 */
  goto L_105b6764;
L_105b64b2:;
  /* 105b64b2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b64b6 jle 0x105b64c2 */
  if ((C.zf||C.sf!=C.of)) goto L_105b64c2;
  /* 105b64b8 mov eax, 3 */
  EAX = (0x3u);
  /* 105b64bd jmp 0x105b6764 */
  goto L_105b6764;
L_105b64c2:;
  /* 105b64c2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 105b64c5 push eax */
  push32((uint32_t)(EAX));
  /* 105b64c6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b64c9 push ecx */
  push32((uint32_t)(ECX));
  /* 105b64ca call dword ptr [0x105d52c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d52c0))), 0x105b64d0u);
  /* 105b64d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b64d2 jne 0x105b64db */
  if (!C.zf) goto L_105b64db;
  /* 105b64d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b64d6 jmp 0x105b6764 */
  goto L_105b6764;
L_105b64db:;
  /* 105b64db cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b64df jne 0x105b64e7 */
  if (!C.zf) goto L_105b64e7;
  /* 105b64e1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b64e5 je 0x105b6514 */
  if (C.zf) goto L_105b6514;
L_105b64e7:;
  /* 105b64e7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b64eb jne 0x105b64f3 */
  if (!C.zf) goto L_105b64f3;
  /* 105b64ed cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b64f1 je 0x105b6514 */
  if (C.zf) goto L_105b6514;
L_105b64f3:;
  /* 105b64f3 push 0x105cf480 */
  push32((uint32_t)(0x105cf480u));
  /* 105b64f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105b64fa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 105b64ff push 0x105cf478 */
  push32((uint32_t)(0x105cf478u));
  /* 105b6504 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6506 call 0x105a5990 */
  push32(0x105b650bu); f_105a5990();
  /* 105b650b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b650e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6511 jne 0x105b6514 */
  if (!C.zf) goto L_105b6514;
  /* 105b6513 int3  */
  x86_unimpl("int3 @ 0x105b6513");
L_105b6514:;
  /* 105b6514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b6516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b6518 jne 0x105b64db */
  if (!C.zf) goto L_105b64db;
  /* 105b651a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b651e jle 0x105b6593 */
  if ((C.zf||C.sf!=C.of)) goto L_105b6593;
  /* 105b6520 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6524 jae 0x105b6530 */
  if (!C.cf) goto L_105b6530;
  /* 105b6526 mov eax, 3 */
  EAX = (0x3u);
  /* 105b652b jmp 0x105b6764 */
  goto L_105b6764;
L_105b6530:;
  /* 105b6530 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 105b6533 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 105b6536 jmp 0x105b6541 */
  goto L_105b6541;
L_105b6538:;
  /* 105b6538 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b653b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b653e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_105b6541:;
  /* 105b6541 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b6544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6546 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b6548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b654a je 0x105b6589 */
  if (C.zf) goto L_105b6589;
  /* 105b654c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b654f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b6551 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105b6554 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b6556 je 0x105b6589 */
  if (C.zf) goto L_105b6589;
  /* 105b6558 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b655b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b655d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b655f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b6562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6564 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b6566 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6568 jl 0x105b6587 */
  if ((C.sf!=C.of)) goto L_105b6587;
  /* 105b656a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b656d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b656f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b6571 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b6574 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b6576 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105b6579 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b657b jg 0x105b6587 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b6587;
  /* 105b657d mov eax, 2 */
  EAX = (0x2u);
  /* 105b6582 jmp 0x105b6764 */
  goto L_105b6764;
L_105b6587:;
  /* 105b6587 jmp 0x105b6538 */
  goto L_105b6538;
L_105b6589:;
  /* 105b6589 mov eax, 3 */
  EAX = (0x3u);
  /* 105b658e jmp 0x105b6764 */
  goto L_105b6764;
L_105b6593:;
  /* 105b6593 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6597 jle 0x105b660c */
  if ((C.zf||C.sf!=C.of)) goto L_105b660c;
  /* 105b6599 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b659d jae 0x105b65a9 */
  if (!C.cf) goto L_105b65a9;
  /* 105b659f mov eax, 1 */
  EAX = (0x1u);
  /* 105b65a4 jmp 0x105b6764 */
  goto L_105b6764;
L_105b65a9:;
  /* 105b65a9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 105b65ac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 105b65af jmp 0x105b65ba */
  goto L_105b65ba;
L_105b65b1:;
  /* 105b65b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b65b4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b65b7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_105b65ba:;
  /* 105b65ba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b65bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b65bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b65c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b65c3 je 0x105b6602 */
  if (C.zf) goto L_105b6602;
  /* 105b65c5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b65c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b65ca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105b65cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b65cf je 0x105b6602 */
  if (C.zf) goto L_105b6602;
  /* 105b65d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b65d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b65d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105b65d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b65db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105b65dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105b65df cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b65e1 jl 0x105b6600 */
  if ((C.sf!=C.of)) goto L_105b6600;
  /* 105b65e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b65e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b65e8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b65ea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105b65ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b65ef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105b65f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b65f4 jg 0x105b6600 */
  if ((!C.zf&&C.sf==C.of)) goto L_105b6600;
  /* 105b65f6 mov eax, 2 */
  EAX = (0x2u);
  /* 105b65fb jmp 0x105b6764 */
  goto L_105b6764;
L_105b6600:;
  /* 105b6600 jmp 0x105b65b1 */
  goto L_105b65b1;
L_105b6602:;
  /* 105b6602 mov eax, 1 */
  EAX = (0x1u);
  /* 105b6607 jmp 0x105b6764 */
  goto L_105b6764;
L_105b660c:;
  /* 105b660c push 0 */
  push32((uint32_t)(0x0u));
  /* 105b660e push 0 */
  push32((uint32_t)(0x0u));
  /* 105b6610 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b6613 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6614 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b6617 push edx */
  push32((uint32_t)(EDX));
  /* 105b6618 push 9 */
  push32((uint32_t)(0x9u));
  /* 105b661a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b661d push eax */
  push32((uint32_t)(EAX));
  /* 105b661e call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b6624u);
  /* 105b6624 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105b6627 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b662b jne 0x105b6634 */
  if (!C.zf) goto L_105b6634;
  /* 105b662d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b662f jmp 0x105b6764 */
  goto L_105b6764;
L_105b6634:;
  /* 105b6634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105b663b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b663e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b6640 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6643 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b6645 call 0x105aab90 */
  push32(0x105b664au); f_105aab90();
  /* 105b664a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 105b664d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b6650 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 105b6653 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105b6656 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b665d jmp 0x105b6676 */
  goto L_105b6676;
  /* 105b665f mov eax, 1 */
  EAX = (0x1u);
  /* 105b6664 ret  */
  ESPCHK(0x105b6380u, _esp0);
  ESP += 4; return;
  /* 105b6665 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b6668 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105b666f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b6676:;
  /* 105b6676 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b667a jne 0x105b6683 */
  if (!C.zf) goto L_105b6683;
  /* 105b667c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b667e jmp 0x105b6764 */
  goto L_105b6764;
L_105b6683:;
  /* 105b6683 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b6686 push edx */
  push32((uint32_t)(EDX));
  /* 105b6687 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b668a push eax */
  push32((uint32_t)(EAX));
  /* 105b668b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105b668e push ecx */
  push32((uint32_t)(ECX));
  /* 105b668f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105b6692 push edx */
  push32((uint32_t)(EDX));
  /* 105b6693 push 1 */
  push32((uint32_t)(0x1u));
  /* 105b6695 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b6698 push eax */
  push32((uint32_t)(EAX));
  /* 105b6699 call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b669fu);
  /* 105b669f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b66a1 jne 0x105b66aa */
  if (!C.zf) goto L_105b66aa;
  /* 105b66a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b66a5 jmp 0x105b6764 */
  goto L_105b6764;
L_105b66aa:;
  /* 105b66aa push 0 */
  push32((uint32_t)(0x0u));
  /* 105b66ac push 0 */
  push32((uint32_t)(0x0u));
  /* 105b66ae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b66b1 push ecx */
  push32((uint32_t)(ECX));
  /* 105b66b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b66b5 push edx */
  push32((uint32_t)(EDX));
  /* 105b66b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 105b66b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b66bb push eax */
  push32((uint32_t)(EAX));
  /* 105b66bc call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b66c2u);
  /* 105b66c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105b66c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b66c9 jne 0x105b66d2 */
  if (!C.zf) goto L_105b66d2;
  /* 105b66cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b66cd jmp 0x105b6764 */
  goto L_105b6764;
L_105b66d2:;
  /* 105b66d2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105b66d9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b66dc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105b66de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b66e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105b66e3 call 0x105aab90 */
  push32(0x105b66e8u); f_105aab90();
  /* 105b66e8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 105b66eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105b66ee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 105b66f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 105b66f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105b66fb jmp 0x105b6714 */
  goto L_105b6714;
  /* 105b66fd mov eax, 1 */
  EAX = (0x1u);
  /* 105b6702 ret  */
  ESPCHK(0x105b6380u, _esp0);
  ESP += 4; return;
  /* 105b6703 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105b6706 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 105b670d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105b6714:;
  /* 105b6714 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6718 jne 0x105b671e */
  if (!C.zf) goto L_105b671e;
  /* 105b671a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b671c jmp 0x105b6764 */
  goto L_105b6764;
L_105b671e:;
  /* 105b671e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b6721 push edx */
  push32((uint32_t)(EDX));
  /* 105b6722 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b6725 push eax */
  push32((uint32_t)(EAX));
  /* 105b6726 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105b6729 push ecx */
  push32((uint32_t)(ECX));
  /* 105b672a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105b672d push edx */
  push32((uint32_t)(EDX));
  /* 105b672e push 1 */
  push32((uint32_t)(0x1u));
  /* 105b6730 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105b6733 push eax */
  push32((uint32_t)(EAX));
  /* 105b6734 call dword ptr [0x105d528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d528c))), 0x105b673au);
  /* 105b673a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b673c jne 0x105b6742 */
  if (!C.zf) goto L_105b6742;
  /* 105b673e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6740 jmp 0x105b6764 */
  goto L_105b6764;
L_105b6742:;
  /* 105b6742 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105b6745 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6746 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105b6749 push edx */
  push32((uint32_t)(EDX));
  /* 105b674a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105b674d push eax */
  push32((uint32_t)(EAX));
  /* 105b674e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105b6751 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6752 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6755 push edx */
  push32((uint32_t)(EDX));
  /* 105b6756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6759 push eax */
  push32((uint32_t)(EAX));
  /* 105b675a call dword ptr [0x105d5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5308))), 0x105b6760u);
  /* 105b6760 jmp 0x105b6764 */
  goto L_105b6764;
L_105b6762:;
  /* 105b6762 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b6764:;
  /* 105b6764 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 105b6767 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b676a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105b6771 pop edi */
  EDI = (pop32());
  /* 105b6772 pop esi */
  ESI = (pop32());
  /* 105b6773 pop ebx */
  EBX = (pop32());
  /* 105b6774 mov esp, ebp */
  ESP = (EBP);
  /* 105b6776 pop ebp */
  EBP = (pop32());
  /* 105b6777 ret  */
  ESPCHK(0x105b6380u, _esp0);
  ESP += 4; return;
}

/* FUN_10016780 @ 0x105b6780 (80 bytes, 32 insns) */
void f_105b6780(void) {
  FTRACE(0x105b6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6780 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6781 mov ebp, esp */
  EBP = (ESP);
  /* 105b6783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6786 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6789 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b678c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b678f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105b6792:;
  /* 105b6792 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6798 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b679b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b679e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b67a0 je 0x105b67b7 */
  if (C.zf) goto L_105b67b7;
  /* 105b67a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b67a5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b67a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b67aa je 0x105b67b7 */
  if (C.zf) goto L_105b67b7;
  /* 105b67ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b67af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b67b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b67b5 jmp 0x105b6792 */
  goto L_105b6792;
L_105b67b7:;
  /* 105b67b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b67ba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105b67bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b67bf jne 0x105b67c9 */
  if (!C.zf) goto L_105b67c9;
  /* 105b67c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b67c4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b67c7 jmp 0x105b67cc */
  goto L_105b67cc;
L_105b67c9:;
  /* 105b67c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_105b67cc:;
  /* 105b67cc mov esp, ebp */
  ESP = (EBP);
  /* 105b67ce pop ebp */
  EBP = (pop32());
  /* 105b67cf ret  */
  ESPCHK(0x105b6780u, _esp0);
  ESP += 4; return;
}

/* FUN_100167d0 @ 0x105b67d0 (736 bytes, 224 insns) */
void f_105b67d0(void) {
  FTRACE(0x105b67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b67d1 mov ebp, esp */
  EBP = (ESP);
  /* 105b67d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b67d6 push esi */
  push32((uint32_t)(ESI));
  /* 105b67d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b67db je 0x105b67fc */
  if (C.zf) goto L_105b67fc;
  /* 105b67dd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 105b67df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b67e2 push eax */
  push32((uint32_t)(EAX));
  /* 105b67e3 call 0x105b6c20 */
  push32(0x105b67e8u); f_105b6c20();
  /* 105b67e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b67eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105b67ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b67f2 je 0x105b67fc */
  if (C.zf) goto L_105b67fc;
  /* 105b67f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b67f7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b67fa jne 0x105b6804 */
  if (!C.zf) goto L_105b6804;
L_105b67fc:;
  /* 105b67fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b67ff jmp 0x105b6aab */
  goto L_105b6aab;
L_105b6804:;
  /* 105b6804 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b6807 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105b680b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b680d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b680f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 105b6810 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105b6813 mov ecx, dword ptr [0x105d29bc] */
  ECX = (r32((uint32_t)(0x105d29bc)));
  /* 105b6819 cmp ecx, dword ptr [0x105d29c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x105d29c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b681f jne 0x105b6835 */
  if (!C.zf) goto L_105b6835;
  /* 105b6821 mov edx, dword ptr [0x105d29bc] */
  EDX = (r32((uint32_t)(0x105d29bc)));
  /* 105b6827 push edx */
  push32((uint32_t)(EDX));
  /* 105b6828 call 0x105b6b30 */
  push32(0x105b682du); f_105b6b30();
  /* 105b682d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6830 mov dword ptr [0x105d29bc], eax */
  w32((uint32_t)(0x105d29bc), (EAX));
L_105b6835:;
  /* 105b6835 cmp dword ptr [0x105d29bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b683c jne 0x105b68f5 */
  if (!C.zf) goto L_105b68f5;
  /* 105b6842 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6846 je 0x105b6867 */
  if (C.zf) goto L_105b6867;
  /* 105b6848 cmp dword ptr [0x105d29c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b684f je 0x105b6867 */
  if (C.zf) goto L_105b6867;
  /* 105b6851 call 0x105b62d0 */
  push32(0x105b6856u); f_105b62d0();
  /* 105b6856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b6858 je 0x105b6862 */
  if (C.zf) goto L_105b6862;
  /* 105b685a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b685d jmp 0x105b6aab */
  goto L_105b6aab;
L_105b6862:;
  /* 105b6862 jmp 0x105b68f5 */
  goto L_105b68f5;
L_105b6867:;
  /* 105b6867 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b686b je 0x105b6874 */
  if (C.zf) goto L_105b6874;
  /* 105b686d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b686f jmp 0x105b6aab */
  goto L_105b6aab;
L_105b6874:;
  /* 105b6874 cmp dword ptr [0x105d29bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b687b jne 0x105b68b4 */
  if (!C.zf) goto L_105b68b4;
  /* 105b687d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 105b6882 push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b6887 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6889 push 4 */
  push32((uint32_t)(0x4u));
  /* 105b688b call 0x105a79f0 */
  push32(0x105b6890u); f_105a79f0();
  /* 105b6890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6893 mov dword ptr [0x105d29bc], eax */
  w32((uint32_t)(0x105d29bc), (EAX));
  /* 105b6898 cmp dword ptr [0x105d29bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b689f jne 0x105b68a9 */
  if (!C.zf) goto L_105b68a9;
  /* 105b68a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b68a4 jmp 0x105b6aab */
  goto L_105b6aab;
L_105b68a9:;
  /* 105b68a9 mov eax, dword ptr [0x105d29bc] */
  EAX = (r32((uint32_t)(0x105d29bc)));
  /* 105b68ae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105b68b4:;
  /* 105b68b4 cmp dword ptr [0x105d29c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b68bb jne 0x105b68f5 */
  if (!C.zf) goto L_105b68f5;
  /* 105b68bd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 105b68c2 push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b68c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b68c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 105b68cb call 0x105a79f0 */
  push32(0x105b68d0u); f_105a79f0();
  /* 105b68d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b68d3 mov dword ptr [0x105d29c4], eax */
  w32((uint32_t)(0x105d29c4), (EAX));
  /* 105b68d8 cmp dword ptr [0x105d29c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d29c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b68df jne 0x105b68e9 */
  if (!C.zf) goto L_105b68e9;
  /* 105b68e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b68e4 jmp 0x105b6aab */
  goto L_105b6aab;
L_105b68e9:;
  /* 105b68e9 mov ecx, dword ptr [0x105d29c4] */
  ECX = (r32((uint32_t)(0x105d29c4)));
  /* 105b68ef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_105b68f5:;
  /* 105b68f5 mov edx, dword ptr [0x105d29bc] */
  EDX = (r32((uint32_t)(0x105d29bc)));
  /* 105b68fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105b68fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b6901 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6904 push eax */
  push32((uint32_t)(EAX));
  /* 105b6905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6908 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6909 call 0x105b6ab0 */
  push32(0x105b690eu); f_105b6ab0();
  /* 105b690e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6911 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b6914 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6918 jl 0x105b69b1 */
  if ((C.sf!=C.of)) goto L_105b69b1;
  /* 105b691e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6921 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6924 je 0x105b69b1 */
  if (C.zf) goto L_105b69b1;
  /* 105b692a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b692e je 0x105b69a3 */
  if (C.zf) goto L_105b69a3;
  /* 105b6930 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6938 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105b693b push edx */
  push32((uint32_t)(EDX));
  /* 105b693c call 0x105a8480 */
  push32(0x105b6941u); f_105a8480();
  /* 105b6941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6944 jmp 0x105b694f */
  goto L_105b694f;
L_105b6946:;
  /* 105b6946 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b694c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105b694f:;
  /* 105b694f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6952 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6955 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6959 je 0x105b6970 */
  if (C.zf) goto L_105b6970;
  /* 105b695b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b695e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6961 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6964 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6967 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 105b696b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 105b696e jmp 0x105b6946 */
  goto L_105b6946;
L_105b6970:;
  /* 105b6970 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 105b6975 push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b697a push 2 */
  push32((uint32_t)(0x2u));
  /* 105b697c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b697f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 105b6982 push eax */
  push32((uint32_t)(EAX));
  /* 105b6983 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6986 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6987 call 0x105a7e80 */
  push32(0x105b698cu); f_105a7e80();
  /* 105b698c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b698f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b6992 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6996 je 0x105b69a1 */
  if (C.zf) goto L_105b69a1;
  /* 105b6998 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b699b mov dword ptr [0x105d29bc], edx */
  w32((uint32_t)(0x105d29bc), (EDX));
L_105b69a1:;
  /* 105b69a1 jmp 0x105b69af */
  goto L_105b69af;
L_105b69a3:;
  /* 105b69a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b69a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b69a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b69ac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_105b69af:;
  /* 105b69af jmp 0x105b6a24 */
  goto L_105b6a24;
L_105b69b1:;
  /* 105b69b1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b69b5 jne 0x105b6a1d */
  if (!C.zf) goto L_105b6a1d;
  /* 105b69b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b69bb jge 0x105b69c5 */
  if ((C.sf==C.of)) goto L_105b69c5;
  /* 105b69bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b69c0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b69c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105b69c5:;
  /* 105b69c5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 105b69ca push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b69cf push 2 */
  push32((uint32_t)(0x2u));
  /* 105b69d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b69d4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 105b69db push edx */
  push32((uint32_t)(EDX));
  /* 105b69dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b69df push eax */
  push32((uint32_t)(EAX));
  /* 105b69e0 call 0x105a7e80 */
  push32(0x105b69e5u); f_105a7e80();
  /* 105b69e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b69e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b69eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b69ef jne 0x105b69f9 */
  if (!C.zf) goto L_105b69f9;
  /* 105b69f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b69f4 jmp 0x105b6aab */
  goto L_105b6aab;
L_105b69f9:;
  /* 105b69f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b69fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b69ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6a02 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 105b6a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6a08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6a0b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 105b6a13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6a16 mov dword ptr [0x105d29bc], eax */
  w32((uint32_t)(0x105d29bc), (EAX));
  /* 105b6a1b jmp 0x105b6a24 */
  goto L_105b6a24;
L_105b6a1d:;
  /* 105b6a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6a1f jmp 0x105b6aab */
  goto L_105b6aab;
L_105b6a24:;
  /* 105b6a24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6a28 je 0x105b6aa9 */
  if (C.zf) goto L_105b6aa9;
  /* 105b6a2a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 105b6a2f push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b6a34 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6a39 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6a3a call 0x105aa820 */
  push32(0x105b6a3fu); f_105aa820();
  /* 105b6a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6a42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6a45 push eax */
  push32((uint32_t)(EAX));
  /* 105b6a46 call 0x105a79f0 */
  push32(0x105b6a4bu); f_105a79f0();
  /* 105b6a4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6a4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105b6a51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6a55 je 0x105b6aa9 */
  if (C.zf) goto L_105b6aa9;
  /* 105b6a57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6a5a push edx */
  push32((uint32_t)(EDX));
  /* 105b6a5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b6a5e push eax */
  push32((uint32_t)(EAX));
  /* 105b6a5f call 0x105aa9a0 */
  push32(0x105b6a64u); f_105aa9a0();
  /* 105b6a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6a67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105b6a6a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6a6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b6a70 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6a72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105b6a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6a78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105b6a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6a7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6a81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b6a84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105b6a87 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105b6a89 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6a8b not edx */
  EDX = (~(EDX));
  /* 105b6a8d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 105b6a90 push edx */
  push32((uint32_t)(EDX));
  /* 105b6a91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b6a94 push eax */
  push32((uint32_t)(EAX));
  /* 105b6a95 call dword ptr [0x105d5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x105d5314))), 0x105b6a9bu);
  /* 105b6a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6a9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b6aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6aa1 call 0x105a8480 */
  push32(0x105b6aa6u); f_105a8480();
  /* 105b6aa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b6aa9:;
  /* 105b6aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b6aab:;
  /* 105b6aab pop esi */
  ESI = (pop32());
  /* 105b6aac mov esp, ebp */
  ESP = (EBP);
  /* 105b6aae pop ebp */
  EBP = (pop32());
  /* 105b6aaf ret  */
  ESPCHK(0x105b67d0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x105b6ab0 (124 bytes, 47 insns) */
void f_105b6ab0(void) {
  FTRACE(0x105b6ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6ab1 mov ebp, esp */
  EBP = (ESP);
  /* 105b6ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6ab4 mov eax, dword ptr [0x105d29bc] */
  EAX = (r32((uint32_t)(0x105d29bc)));
  /* 105b6ab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105b6abc jmp 0x105b6ac7 */
  goto L_105b6ac7;
L_105b6abe:;
  /* 105b6abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6ac1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6ac4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105b6ac7:;
  /* 105b6ac7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6aca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6acd je 0x105b6b1a */
  if (C.zf) goto L_105b6b1a;
  /* 105b6acf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6ad2 push eax */
  push32((uint32_t)(EAX));
  /* 105b6ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6ad6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b6ad8 push edx */
  push32((uint32_t)(EDX));
  /* 105b6ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6adc push eax */
  push32((uint32_t)(EAX));
  /* 105b6add call 0x105b6280 */
  push32(0x105b6ae2u); f_105b6280();
  /* 105b6ae2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105b6ae7 jne 0x105b6b18 */
  if (!C.zf) goto L_105b6b18;
  /* 105b6ae9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6aec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b6aee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6af1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 105b6af5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6af8 je 0x105b6b0a */
  if (C.zf) goto L_105b6b0a;
  /* 105b6afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6afd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b6aff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6b02 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 105b6b06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b6b08 jne 0x105b6b18 */
  if (!C.zf) goto L_105b6b18;
L_105b6b0a:;
  /* 105b6b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6b0d sub eax, dword ptr [0x105d29bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d29bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6b13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 105b6b16 jmp 0x105b6b28 */
  goto L_105b6b28;
L_105b6b18:;
  /* 105b6b18 jmp 0x105b6abe */
  goto L_105b6abe;
L_105b6b1a:;
  /* 105b6b1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6b1d sub eax, dword ptr [0x105d29bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x105d29bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6b23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 105b6b26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_105b6b28:;
  /* 105b6b28 mov esp, ebp */
  ESP = (EBP);
  /* 105b6b2a pop ebp */
  EBP = (pop32());
  /* 105b6b2b ret  */
  ESPCHK(0x105b6ab0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x105b6b30 (238 bytes, 80 insns) */
void f_105b6b30(void) {
  FTRACE(0x105b6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6b31 mov ebp, esp */
  EBP = (ESP);
  /* 105b6b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6b36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105b6b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6b40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b6b43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6b47 jne 0x105b6b50 */
  if (!C.zf) goto L_105b6b50;
  /* 105b6b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6b4b jmp 0x105b6c1a */
  goto L_105b6c1a;
L_105b6b50:;
  /* 105b6b50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6b53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b6b55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6b58 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6b5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105b6b5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b6b60 je 0x105b6b6d */
  if (C.zf) goto L_105b6b6d;
  /* 105b6b62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b6b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6b68 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105b6b6b jmp 0x105b6b50 */
  goto L_105b6b50;
L_105b6b6d:;
  /* 105b6b6d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 105b6b72 push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b6b77 push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6b79 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105b6b7c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 105b6b83 push eax */
  push32((uint32_t)(EAX));
  /* 105b6b84 call 0x105a79f0 */
  push32(0x105b6b89u); f_105a79f0();
  /* 105b6b89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6b8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105b6b8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6b92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105b6b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6b99 jne 0x105b6ba5 */
  if (!C.zf) goto L_105b6ba5;
  /* 105b6b9b push 9 */
  push32((uint32_t)(0x9u));
  /* 105b6b9d call 0x105a5840 */
  push32(0x105b6ba2u); f_105a5840();
  /* 105b6ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b6ba5:;
  /* 105b6ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6ba8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105b6bab:;
  /* 105b6bab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6bae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6bb1 je 0x105b6c0e */
  if (C.zf) goto L_105b6c0e;
  /* 105b6bb3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 105b6bb8 push 0x105cf4d8 */
  push32((uint32_t)(0x105cf4d8u));
  /* 105b6bbd push 2 */
  push32((uint32_t)(0x2u));
  /* 105b6bbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6bc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105b6bc4 push edx */
  push32((uint32_t)(EDX));
  /* 105b6bc5 call 0x105aa820 */
  push32(0x105b6bcau); f_105aa820();
  /* 105b6bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6bd0 push eax */
  push32((uint32_t)(EAX));
  /* 105b6bd1 call 0x105a79f0 */
  push32(0x105b6bd6u); f_105a79f0();
  /* 105b6bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6bd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6bdc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105b6bde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6be1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6be4 je 0x105b6bfa */
  if (C.zf) goto L_105b6bfa;
  /* 105b6be6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6be9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105b6beb push ecx */
  push32((uint32_t)(ECX));
  /* 105b6bec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6bef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105b6bf1 push eax */
  push32((uint32_t)(EAX));
  /* 105b6bf2 call 0x105aa9a0 */
  push32(0x105b6bf7u); f_105aa9a0();
  /* 105b6bf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105b6bfa:;
  /* 105b6bfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105b6bfd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6c00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105b6c03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6c06 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6c09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105b6c0c jmp 0x105b6bab */
  goto L_105b6bab;
L_105b6c0e:;
  /* 105b6c0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105b6c11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105b6c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105b6c1a:;
  /* 105b6c1a mov esp, ebp */
  ESP = (EBP);
  /* 105b6c1c pop ebp */
  EBP = (pop32());
  /* 105b6c1d ret  */
  ESPCHK(0x105b6b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c20 @ 0x105b6c20 (237 bytes, 81 insns) */
void f_105b6c20(void) {
  FTRACE(0x105b6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6c20 push ebp */
  push32((uint32_t)(EBP));
  /* 105b6c21 mov ebp, esp */
  EBP = (ESP);
  /* 105b6c23 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6c24 cmp dword ptr [0x105d2dbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x105d2dbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6c2b jne 0x105b6c42 */
  if (!C.zf) goto L_105b6c42;
  /* 105b6c2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105b6c30 push eax */
  push32((uint32_t)(EAX));
  /* 105b6c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6c34 push ecx */
  push32((uint32_t)(ECX));
  /* 105b6c35 call 0x105b6d20 */
  push32(0x105b6c3au); f_105b6d20();
  /* 105b6c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6c3d jmp 0x105b6d09 */
  goto L_105b6d09;
L_105b6c42:;
  /* 105b6c42 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105b6c44 call 0x105abda0 */
  push32(0x105b6c49u); f_105abda0();
  /* 105b6c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6c4c jmp 0x105b6c57 */
  goto L_105b6c57;
L_105b6c4e:;
  /* 105b6c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6c51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6c54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_105b6c57:;
  /* 105b6c57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6c5a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 105b6c5e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 105b6c62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6c65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b6c6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105b6c6d je 0x105b6ceb */
  if (C.zf) goto L_105b6ceb;
  /* 105b6c6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6c72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b6c77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b6c79 mov cl, byte ptr [eax + 0x105d2ec1] */
  CL = (r8((uint32_t)(EAX + 0x105d2ec1)));
  /* 105b6c7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105b6c82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b6c84 je 0x105b6cd6 */
  if (C.zf) goto L_105b6cd6;
  /* 105b6c86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6c89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6c8c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105b6c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6c92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b6c94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b6c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105b6c98 jne 0x105b6ca8 */
  if (!C.zf) goto L_105b6ca8;
  /* 105b6c9a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105b6c9c call 0x105abe40 */
  push32(0x105b6ca1u); f_105abe40();
  /* 105b6ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6ca6 jmp 0x105b6d09 */
  goto L_105b6d09;
L_105b6ca8:;
  /* 105b6ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6cab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b6cb1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105b6cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6cb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105b6cb9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105b6cbb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105b6cbd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6cc0 jne 0x105b6cd4 */
  if (!C.zf) goto L_105b6cd4;
  /* 105b6cc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105b6cc4 call 0x105abe40 */
  push32(0x105b6cc9u); f_105abe40();
  /* 105b6cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6ccc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6ccf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105b6cd2 jmp 0x105b6d09 */
  goto L_105b6d09;
L_105b6cd4:;
  /* 105b6cd4 jmp 0x105b6ce6 */
  goto L_105b6ce6;
L_105b6cd6:;
  /* 105b6cd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6cd9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105b6cdf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6ce2 jne 0x105b6ce6 */
  if (!C.zf) goto L_105b6ce6;
  /* 105b6ce4 jmp 0x105b6ceb */
  goto L_105b6ceb;
L_105b6ce6:;
  /* 105b6ce6 jmp 0x105b6c4e */
  goto L_105b6c4e;
L_105b6ceb:;
  /* 105b6ceb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105b6ced call 0x105abe40 */
  push32(0x105b6cf2u); f_105abe40();
  /* 105b6cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105b6cf8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b6cfd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105b6d00 jne 0x105b6d07 */
  if (!C.zf) goto L_105b6d07;
  /* 105b6d02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105b6d05 jmp 0x105b6d09 */
  goto L_105b6d09;
L_105b6d07:;
  /* 105b6d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105b6d09:;
  /* 105b6d09 mov esp, ebp */
  ESP = (EBP);
  /* 105b6d0b pop ebp */
  EBP = (pop32());
  /* 105b6d0c ret  */
  ESPCHK(0x105b6c20u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x105b6d20 (193 bytes, 87 insns) */
void f_105b6d20(void) {
  FTRACE(0x105b6d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105b6d20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6d22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 105b6d26 push ebx */
  push32((uint32_t)(EBX));
  /* 105b6d27 mov ebx, eax */
  EBX = (EAX);
  /* 105b6d29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 105b6d2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 105b6d30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 105b6d36 je 0x105b6d4b */
  if (C.zf) goto L_105b6d4b;
L_105b6d38:;
  /* 105b6d38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 105b6d3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105b6d3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b6d3d je 0x105b6d10 */
  if (C.zf) { jmp_ind(0x105b6d10u); return; }
  /* 105b6d3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 105b6d41 je 0x105b6d94 */
  if (C.zf) goto L_105b6d94;
  /* 105b6d43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 105b6d49 jne 0x105b6d38 */
  if (!C.zf) goto L_105b6d38;
L_105b6d4b:;
  /* 105b6d4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 105b6d4d push edi */
  push32((uint32_t)(EDI));
  /* 105b6d4e mov eax, ebx */
  EAX = (EBX);
  /* 105b6d50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 105b6d53 push esi */
  push32((uint32_t)(ESI));
  /* 105b6d54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_105b6d56:;
  /* 105b6d56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 105b6d58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 105b6d5d mov eax, ecx */
  EAX = (ECX);
  /* 105b6d5f mov esi, edi */
  ESI = (EDI);
  /* 105b6d61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 105b6d63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6d65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6d67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105b6d6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105b6d6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 105b6d6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 105b6d71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105b6d74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 105b6d7a jne 0x105b6d98 */
  if (!C.zf) goto L_105b6d98;
  /* 105b6d7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105b6d81 je 0x105b6d56 */
  if (C.zf) goto L_105b6d56;
  /* 105b6d83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105b6d88 jne 0x105b6d92 */
  if (!C.zf) goto L_105b6d92;
  /* 105b6d8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 105b6d90 jne 0x105b6d56 */
  if (!C.zf) goto L_105b6d56;
L_105b6d92:;
  /* 105b6d92 pop esi */
  ESI = (pop32());
  /* 105b6d93 pop edi */
  EDI = (pop32());
L_105b6d94:;
  /* 105b6d94 pop ebx */
  EBX = (pop32());
  /* 105b6d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105b6d97 ret  */
  ESPCHK(0x105b6d20u, _esp0);
  ESP += 4; return;
L_105b6d98:;
  /* 105b6d98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 105b6d9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b6d9d je 0x105b6dd5 */
  if (C.zf) goto L_105b6dd5;
  /* 105b6d9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105b6da1 je 0x105b6d92 */
  if (C.zf) goto L_105b6d92;
  /* 105b6da3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b6da5 je 0x105b6dce */
  if (C.zf) goto L_105b6dce;
  /* 105b6da7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105b6da9 je 0x105b6d92 */
  if (C.zf) goto L_105b6d92;
  /* 105b6dab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105b6dae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b6db0 je 0x105b6dc7 */
  if (C.zf) goto L_105b6dc7;
  /* 105b6db2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105b6db4 je 0x105b6d92 */
  if (C.zf) goto L_105b6d92;
  /* 105b6db6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105b6db8 je 0x105b6dc0 */
  if (C.zf) goto L_105b6dc0;
  /* 105b6dba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105b6dbc je 0x105b6d92 */
  if (C.zf) goto L_105b6d92;
  /* 105b6dbe jmp 0x105b6d56 */
  goto L_105b6d56;
L_105b6dc0:;
  /* 105b6dc0 pop esi */
  ESI = (pop32());
  /* 105b6dc1 pop edi */
  EDI = (pop32());
  /* 105b6dc2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 105b6dc5 pop ebx */
  EBX = (pop32());
  /* 105b6dc6 ret  */
  ESPCHK(0x105b6d20u, _esp0);
  ESP += 4; return;
L_105b6dc7:;
  /* 105b6dc7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 105b6dca pop esi */
  ESI = (pop32());
  /* 105b6dcb pop edi */
  EDI = (pop32());
  /* 105b6dcc pop ebx */
  EBX = (pop32());
  /* 105b6dcd ret  */
  ESPCHK(0x105b6d20u, _esp0);
  ESP += 4; return;
L_105b6dce:;
  /* 105b6dce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 105b6dd1 pop esi */
  ESI = (pop32());
  /* 105b6dd2 pop edi */
  EDI = (pop32());
  /* 105b6dd3 pop ebx */
  EBX = (pop32());
  /* 105b6dd4 ret  */
  ESPCHK(0x105b6d20u, _esp0);
  ESP += 4; return;
L_105b6dd5:;
  /* 105b6dd5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 105b6dd8 pop esi */
  ESI = (pop32());
  /* 105b6dd9 pop edi */
  EDI = (pop32());
  /* 105b6dda pop ebx */
  EBX = (pop32());
  /* 105b6ddb ret  */
  ESPCHK(0x105b6d20u, _esp0);
  ESP += 4; return;
  /* 105b6ddc jmp dword ptr [0x105d5204] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x105d5204)))); return;
}

