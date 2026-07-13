#include "recomp.h"

/* FUN_1000eaf0 @ 0x1160eaf0 (403 bytes, 117 insns) */
void f_1160eaf0(void) {
  FTRACE(0x1160eaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160eaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160eaf1 mov ebp, esp */
  EBP = (ESP);
  /* 1160eaf3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160eaf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160eafc push eax */
  push32((uint32_t)(EAX));
  /* 1160eafd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1160eb03 push ecx */
  push32((uint32_t)(ECX));
  /* 1160eb04 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1160eb0a push edx */
  push32((uint32_t)(EDX));
  /* 1160eb0b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1160eb11 push eax */
  push32((uint32_t)(EAX));
  /* 1160eb12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160eb15 push ecx */
  push32((uint32_t)(ECX));
  /* 1160eb16 call 0x1160ed90 */
  push32(0x1160eb1bu); f_1160ed90();
  /* 1160eb1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eb1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160eb20 jne 0x1160eb29 */
  if (!C.zf) goto L_1160eb29;
  /* 1160eb22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160eb24 jmp 0x1160ec7f */
  goto L_1160ec7f;
L_1160eb29:;
  /* 1160eb29 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1160eb2e push 0x1162c058 */
  push32((uint32_t)(0x1162c058u));
  /* 1160eb33 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160eb35 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1160eb3b push edx */
  push32((uint32_t)(EDX));
  /* 1160eb3c call 0x116079e0 */
  push32(0x1160eb41u); f_116079e0();
  /* 1160eb41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eb44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eb47 push eax */
  push32((uint32_t)(EAX));
  /* 1160eb48 call 0x11604bb0 */
  push32(0x1160eb4du); f_11604bb0();
  /* 1160eb4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eb50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160eb53 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160eb57 jne 0x1160eb60 */
  if (!C.zf) goto L_1160eb60;
  /* 1160eb59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160eb5b jmp 0x1160ec7f */
  goto L_1160ec7f;
L_1160eb60:;
  /* 1160eb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160eb63 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160eb66 mov ecx, dword ptr [eax + 0x1162f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1162f4dc)));
  /* 1160eb6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160eb6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160eb72 mov eax, dword ptr [edx*4 + 0x11630938] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11630938)));
  /* 1160eb79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160eb7c push 6 */
  push32((uint32_t)(0x6u));
  /* 1160eb7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160eb81 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160eb84 add ecx, 0x11630988 */
  { uint32_t _a=(ECX),_b=(0x11630988u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eb8a push ecx */
  push32((uint32_t)(ECX));
  /* 1160eb8b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1160eb8e push edx */
  push32((uint32_t)(EDX));
  /* 1160eb8f call 0x1160b490 */
  push32(0x1160eb94u); f_1160b490();
  /* 1160eb94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eb97 mov eax, dword ptr [0x11630950] */
  EAX = (r32((uint32_t)(0x11630950)));
  /* 1160eb9c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1160eb9f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1160eba5 push ecx */
  push32((uint32_t)(ECX));
  /* 1160eba6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160eba9 push edx */
  push32((uint32_t)(EDX));
  /* 1160ebaa call 0x11607b60 */
  push32(0x1160ebafu); f_11607b60();
  /* 1160ebaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ebb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ebb5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ebb8 mov dword ptr [ecx + 0x1162f4dc], eax */
  w32((uint32_t)(ECX + 0x1162f4dc), (EAX));
  /* 1160ebbe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1160ebc4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1160ebca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ebcd mov dword ptr [eax*4 + 0x11630938], edx */
  w32((uint32_t)(EAX*4 + 0x11630938), (EDX));
  /* 1160ebd4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1160ebd6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1160ebdc push ecx */
  push32((uint32_t)(ECX));
  /* 1160ebdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ebe0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ebe3 add edx, 0x11630988 */
  { uint32_t _a=(EDX),_b=(0x11630988u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ebe9 push edx */
  push32((uint32_t)(EDX));
  /* 1160ebea call 0x1160b490 */
  push32(0x1160ebefu); f_1160b490();
  /* 1160ebef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ebf2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ebf6 jne 0x1160ec03 */
  if (!C.zf) goto L_1160ec03;
  /* 1160ebf8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160ebfe mov dword ptr [0x11630950], eax */
  w32((uint32_t)(0x11630950), (EAX));
L_1160ec03:;
  /* 1160ec03 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ec07 jne 0x1160ec15 */
  if (!C.zf) goto L_1160ec15;
  /* 1160ec09 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160ec0f mov dword ptr [0x11630954], ecx */
  w32((uint32_t)(0x11630954), (ECX));
L_1160ec15:;
  /* 1160ec15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ec18 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ec1b call dword ptr [edx + 0x1162f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1162f4e0))), 0x1160ec21u);
  /* 1160ec21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ec23 je 0x1160ec5c */
  if (C.zf) goto L_1160ec5c;
  /* 1160ec25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ec28 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ec2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ec2e mov dword ptr [eax + 0x1162f4dc], ecx */
  w32((uint32_t)(EAX + 0x1162f4dc), (ECX));
  /* 1160ec34 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ec36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ec39 push edx */
  push32((uint32_t)(EDX));
  /* 1160ec3a call 0x11605640 */
  push32(0x1160ec3fu); f_11605640();
  /* 1160ec3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ec42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ec45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ec48 mov dword ptr [eax*4 + 0x11630938], ecx */
  w32((uint32_t)(EAX*4 + 0x11630938), (ECX));
  /* 1160ec4f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160ec52 mov dword ptr [0x11630950], edx */
  w32((uint32_t)(0x11630950), (EDX));
  /* 1160ec58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ec5a jmp 0x1160ec7f */
  goto L_1160ec7f;
L_1160ec5c:;
  /* 1160ec5c cmp dword ptr [ebp - 0xc], 0x1162f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1162f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ec63 je 0x1160ec73 */
  if (C.zf) goto L_1160ec73;
  /* 1160ec65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ec67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ec6a push eax */
  push32((uint32_t)(EAX));
  /* 1160ec6b call 0x11605640 */
  push32(0x1160ec70u); f_11605640();
  /* 1160ec70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160ec73:;
  /* 1160ec73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ec76 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ec79 mov eax, dword ptr [ecx + 0x1162f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1162f4dc)));
L_1160ec7f:;
  /* 1160ec7f mov esp, ebp */
  ESP = (EBP);
  /* 1160ec81 pop ebp */
  EBP = (pop32());
  /* 1160ec82 ret  */
  ESPCHK(0x1160eaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x1160ec90 (256 bytes, 72 insns) */
void f_1160ec90(void) {
  FTRACE(0x1160ec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ec90 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ec91 mov ebp, esp */
  EBP = (ESP);
  /* 1160ec93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ec96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1160ec9d cmp dword ptr [0x1162f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1162f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160eca4 jne 0x1160ecc4 */
  if (!C.zf) goto L_1160ecc4;
  /* 1160eca6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1160ecab push 0x1162c058 */
  push32((uint32_t)(0x1162c058u));
  /* 1160ecb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ecb2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1160ecb7 call 0x11604bb0 */
  push32(0x1160ecbcu); f_11604bb0();
  /* 1160ecbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ecbf mov dword ptr [0x1162f4dc], eax */
  w32((uint32_t)(0x1162f4dc), (EAX));
L_1160ecc4:;
  /* 1160ecc4 mov eax, dword ptr [0x1162f4dc] */
  EAX = (r32((uint32_t)(0x1162f4dc)));
  /* 1160ecc9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1160eccc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1160ecd3 jmp 0x1160ecde */
  goto L_1160ecde;
L_1160ecd5:;
  /* 1160ecd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ecd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ecdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160ecde:;
  /* 1160ecde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ece1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ece4 mov eax, dword ptr [edx + 0x1162f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1162f4dc)));
  /* 1160ecea push eax */
  push32((uint32_t)(EAX));
  /* 1160eceb push 0x1162c064 */
  push32((uint32_t)(0x1162c064u));
  /* 1160ecf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ecf3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ecf6 mov edx, dword ptr [ecx + 0x1162f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1162f4d8)));
  /* 1160ecfc push edx */
  push32((uint32_t)(EDX));
  /* 1160ecfd push 3 */
  push32((uint32_t)(0x3u));
  /* 1160ecff mov eax, dword ptr [0x1162f4dc] */
  EAX = (r32((uint32_t)(0x1162f4dc)));
  /* 1160ed04 push eax */
  push32((uint32_t)(EAX));
  /* 1160ed05 call 0x1160ef30 */
  push32(0x1160ed0au); f_1160ef30();
  /* 1160ed0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ed0d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ed11 jge 0x1160ed59 */
  if ((C.sf==C.of)) goto L_1160ed59;
  /* 1160ed13 push 0x1162c050 */
  push32((uint32_t)(0x1162c050u));
  /* 1160ed18 mov ecx, dword ptr [0x1162f4dc] */
  ECX = (r32((uint32_t)(0x1162f4dc)));
  /* 1160ed1e push ecx */
  push32((uint32_t)(ECX));
  /* 1160ed1f call 0x11607b70 */
  push32(0x1160ed24u); f_11607b70();
  /* 1160ed24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ed27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ed2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ed2d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ed30 mov eax, dword ptr [edx + 0x1162f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1162f4dc)));
  /* 1160ed36 push eax */
  push32((uint32_t)(EAX));
  /* 1160ed37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ed3a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ed3d mov edx, dword ptr [ecx + 0x1162f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1162f4dc)));
  /* 1160ed43 push edx */
  push32((uint32_t)(EDX));
  /* 1160ed44 call 0x11610840 */
  push32(0x1160ed49u); f_11610840();
  /* 1160ed49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ed4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ed4e je 0x1160ed57 */
  if (C.zf) goto L_1160ed57;
  /* 1160ed50 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1160ed57:;
  /* 1160ed57 jmp 0x1160ed87 */
  goto L_1160ed87;
L_1160ed59:;
  /* 1160ed59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ed5d jne 0x1160ed66 */
  if (!C.zf) goto L_1160ed66;
  /* 1160ed5f mov eax, dword ptr [0x1162f4dc] */
  EAX = (r32((uint32_t)(0x1162f4dc)));
  /* 1160ed64 jmp 0x1160ed8c */
  goto L_1160ed8c;
L_1160ed66:;
  /* 1160ed66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ed68 mov eax, dword ptr [0x1162f4dc] */
  EAX = (r32((uint32_t)(0x1162f4dc)));
  /* 1160ed6d push eax */
  push32((uint32_t)(EAX));
  /* 1160ed6e call 0x11605640 */
  push32(0x1160ed73u); f_11605640();
  /* 1160ed73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ed76 mov dword ptr [0x1162f4dc], 0 */
  w32((uint32_t)(0x1162f4dc), (0x0u));
  /* 1160ed80 mov eax, dword ptr [0x1162f4f4] */
  EAX = (r32((uint32_t)(0x1162f4f4)));
  /* 1160ed85 jmp 0x1160ed8c */
  goto L_1160ed8c;
L_1160ed87:;
  /* 1160ed87 jmp 0x1160ecd5 */
  goto L_1160ecd5;
L_1160ed8c:;
  /* 1160ed8c mov esp, ebp */
  ESP = (EBP);
  /* 1160ed8e pop ebp */
  EBP = (pop32());
  /* 1160ed8f ret  */
  ESPCHK(0x1160ec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1160ed90 (388 bytes, 115 insns) */
void f_1160ed90(void) {
  FTRACE(0x1160ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1160ed93 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ed99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ed9d jne 0x1160eda6 */
  if (!C.zf) goto L_1160eda6;
  /* 1160ed9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160eda1 jmp 0x1160ef10 */
  goto L_1160ef10;
L_1160eda6:;
  /* 1160eda6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160eda9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160edac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160edaf jne 0x1160ee00 */
  if (!C.zf) goto L_1160ee00;
  /* 1160edb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160edb4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1160edb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160edba jne 0x1160ee00 */
  if (!C.zf) goto L_1160ee00;
  /* 1160edbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160edbf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1160edc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160edc5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1160edc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160edcd je 0x1160ede9 */
  if (C.zf) goto L_1160ede9;
  /* 1160edcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160edd2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1160edd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160edda mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1160ede0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160ede3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1160ede9:;
  /* 1160ede9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160eded je 0x1160edf8 */
  if (C.zf) goto L_1160edf8;
  /* 1160edef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160edf2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1160edf8:;
  /* 1160edf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160edfb jmp 0x1160ef10 */
  goto L_1160ef10;
L_1160ee00:;
  /* 1160ee00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ee03 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ee04 push 0x1162f450 */
  push32((uint32_t)(0x1162f450u));
  /* 1160ee09 call 0x11610840 */
  push32(0x1160ee0eu); f_11610840();
  /* 1160ee0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ee11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ee13 je 0x1160eec8 */
  if (C.zf) goto L_1160eec8;
  /* 1160ee19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ee1c push edx */
  push32((uint32_t)(EDX));
  /* 1160ee1d push 0x1162f3cc */
  push32((uint32_t)(0x1162f3ccu));
  /* 1160ee22 call 0x11610840 */
  push32(0x1160ee27u); f_11610840();
  /* 1160ee27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ee2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ee2c je 0x1160eec8 */
  if (C.zf) goto L_1160eec8;
  /* 1160ee32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ee35 push eax */
  push32((uint32_t)(EAX));
  /* 1160ee36 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1160ee3c push ecx */
  push32((uint32_t)(ECX));
  /* 1160ee3d call 0x1160ef80 */
  push32(0x1160ee42u); f_1160ef80();
  /* 1160ee42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ee45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ee47 je 0x1160ee50 */
  if (C.zf) goto L_1160ee50;
  /* 1160ee49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ee4b jmp 0x1160ef10 */
  goto L_1160ef10;
L_1160ee50:;
  /* 1160ee50 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1160ee56 push edx */
  push32((uint32_t)(EDX));
  /* 1160ee57 push 0x11630960 */
  push32((uint32_t)(0x11630960u));
  /* 1160ee5c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1160ee62 push eax */
  push32((uint32_t)(EAX));
  /* 1160ee63 call 0x11610990 */
  push32(0x1160ee68u); f_11610990();
  /* 1160ee68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ee6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ee6d jne 0x1160ee76 */
  if (!C.zf) goto L_1160ee76;
  /* 1160ee6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ee71 jmp 0x1160ef10 */
  goto L_1160ef10;
L_1160ee76:;
  /* 1160ee76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160ee78 mov cx, word ptr [0x11630964] */
  CX = (r16((uint32_t)(0x11630964)));
  /* 1160ee7f mov dword ptr [0x11630968], ecx */
  w32((uint32_t)(0x11630968), (ECX));
  /* 1160ee85 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1160ee8b push edx */
  push32((uint32_t)(EDX));
  /* 1160ee8c push 0x1162f450 */
  push32((uint32_t)(0x1162f450u));
  /* 1160ee91 call 0x1160f0e0 */
  push32(0x1160ee96u); f_1160f0e0();
  /* 1160ee96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ee99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ee9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160ee9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160eea1 je 0x1160eeb6 */
  if (C.zf) goto L_1160eeb6;
  /* 1160eea3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160eea6 push edx */
  push32((uint32_t)(EDX));
  /* 1160eea7 push 0x1162f3cc */
  push32((uint32_t)(0x1162f3ccu));
  /* 1160eeac call 0x11607b60 */
  push32(0x1160eeb1u); f_11607b60();
  /* 1160eeb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eeb4 jmp 0x1160eec8 */
  goto L_1160eec8;
L_1160eeb6:;
  /* 1160eeb6 push 0x1162f450 */
  push32((uint32_t)(0x1162f450u));
  /* 1160eebb push 0x1162f3cc */
  push32((uint32_t)(0x1162f3ccu));
  /* 1160eec0 call 0x11607b60 */
  push32(0x1160eec5u); f_11607b60();
  /* 1160eec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160eec8:;
  /* 1160eec8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160eecc je 0x1160eee1 */
  if (C.zf) goto L_1160eee1;
  /* 1160eece push 6 */
  push32((uint32_t)(0x6u));
  /* 1160eed0 push 0x11630960 */
  push32((uint32_t)(0x11630960u));
  /* 1160eed5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160eed8 push eax */
  push32((uint32_t)(EAX));
  /* 1160eed9 call 0x1160b490 */
  push32(0x1160eedeu); f_1160b490();
  /* 1160eede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160eee1:;
  /* 1160eee1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160eee5 je 0x1160eefa */
  if (C.zf) goto L_1160eefa;
  /* 1160eee7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1160eee9 push 0x11630968 */
  push32((uint32_t)(0x11630968u));
  /* 1160eeee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160eef1 push ecx */
  push32((uint32_t)(ECX));
  /* 1160eef2 call 0x1160b490 */
  push32(0x1160eef7u); f_1160b490();
  /* 1160eef7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160eefa:;
  /* 1160eefa push 0x1162f450 */
  push32((uint32_t)(0x1162f450u));
  /* 1160eeff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160ef02 push edx */
  push32((uint32_t)(EDX));
  /* 1160ef03 call 0x11607b60 */
  push32(0x1160ef08u); f_11607b60();
  /* 1160ef08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ef0b mov eax, 0x1162f450 */
  EAX = (0x1162f450u);
L_1160ef10:;
  /* 1160ef10 mov esp, ebp */
  ESP = (EBP);
  /* 1160ef12 pop ebp */
  EBP = (pop32());
  /* 1160ef13 ret  */
  ESPCHK(0x1160ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x1160ef20 (7 bytes, 5 insns) */
void f_1160ef20(void) {
  FTRACE(0x1160ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ef21 mov ebp, esp */
  EBP = (ESP);
  /* 1160ef23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ef25 pop ebp */
  EBP = (pop32());
  /* 1160ef26 ret  */
  ESPCHK(0x1160ef20u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1160ef30 (79 bytes, 28 insns) */
void f_1160ef30(void) {
  FTRACE(0x1160ef30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ef30 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ef31 mov ebp, esp */
  EBP = (ESP);
  /* 1160ef33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ef36 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1160ef39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160ef3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1160ef43 jmp 0x1160ef4e */
  goto L_1160ef4e;
L_1160ef45:;
  /* 1160ef45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ef48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ef4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1160ef4e:;
  /* 1160ef4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ef51 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ef54 jge 0x1160ef74 */
  if ((C.sf==C.of)) goto L_1160ef74;
  /* 1160ef56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ef59 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ef5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160ef5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ef62 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1160ef65 push edx */
  push32((uint32_t)(EDX));
  /* 1160ef66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ef69 push eax */
  push32((uint32_t)(EAX));
  /* 1160ef6a call 0x11607b70 */
  push32(0x1160ef6fu); f_11607b70();
  /* 1160ef6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ef72 jmp 0x1160ef45 */
  goto L_1160ef45;
L_1160ef74:;
  /* 1160ef74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160ef7b mov esp, ebp */
  ESP = (EBP);
  /* 1160ef7d pop ebp */
  EBP = (pop32());
  /* 1160ef7e ret  */
  ESPCHK(0x1160ef30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x1160ef80 (349 bytes, 122 insns) */
void f_1160ef80(void) {
  FTRACE(0x1160ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1160ef83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ef86 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1160ef8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ef8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ef90 push eax */
  push32((uint32_t)(EAX));
  /* 1160ef91 call 0x11608920 */
  push32(0x1160ef96u); f_11608920();
  /* 1160ef96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ef99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160ef9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160ef9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160efa1 jne 0x1160efaa */
  if (!C.zf) goto L_1160efaa;
  /* 1160efa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160efa5 jmp 0x1160f0d9 */
  goto L_1160f0d9;
L_1160efaa:;
  /* 1160efaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160efad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160efb0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160efb3 jne 0x1160efe0 */
  if (!C.zf) goto L_1160efe0;
  /* 1160efb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160efb8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1160efbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160efbe je 0x1160efe0 */
  if (C.zf) goto L_1160efe0;
  /* 1160efc0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160efc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160efc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1160efc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160efca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160efd0 push edx */
  push32((uint32_t)(EDX));
  /* 1160efd1 call 0x11607b60 */
  push32(0x1160efd6u); f_11607b60();
  /* 1160efd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160efd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160efdb jmp 0x1160f0d9 */
  goto L_1160f0d9;
L_1160efe0:;
  /* 1160efe0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160efe7 jmp 0x1160eff2 */
  goto L_1160eff2;
L_1160efe9:;
  /* 1160efe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160efec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160efef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160eff2:;
  /* 1160eff2 push 0x1162c068 */
  push32((uint32_t)(0x1162c068u));
  /* 1160eff7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160effa push ecx */
  push32((uint32_t)(ECX));
  /* 1160effb call 0x116108d0 */
  push32(0x1160f000u); f_116108d0();
  /* 1160f000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f003 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1160f006 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f00a jne 0x1160f014 */
  if (!C.zf) goto L_1160f014;
  /* 1160f00c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160f00f jmp 0x1160f0d9 */
  goto L_1160f0d9;
L_1160f014:;
  /* 1160f014 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f017 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f01a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1160f01c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1160f01f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f023 jne 0x1160f04a */
  if (!C.zf) goto L_1160f04a;
  /* 1160f025 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f029 jge 0x1160f04a */
  if ((C.sf==C.of)) goto L_1160f04a;
  /* 1160f02b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1160f02f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f032 je 0x1160f04a */
  if (C.zf) goto L_1160f04a;
  /* 1160f034 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f037 push edx */
  push32((uint32_t)(EDX));
  /* 1160f038 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f03b push eax */
  push32((uint32_t)(EAX));
  /* 1160f03c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f03f push ecx */
  push32((uint32_t)(ECX));
  /* 1160f040 call 0x116083d0 */
  push32(0x1160f045u); f_116083d0();
  /* 1160f045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f048 jmp 0x1160f0b0 */
  goto L_1160f0b0;
L_1160f04a:;
  /* 1160f04a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f04e jne 0x1160f078 */
  if (!C.zf) goto L_1160f078;
  /* 1160f050 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f054 jge 0x1160f078 */
  if ((C.sf==C.of)) goto L_1160f078;
  /* 1160f056 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1160f05a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f05d je 0x1160f078 */
  if (C.zf) goto L_1160f078;
  /* 1160f05f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f062 push eax */
  push32((uint32_t)(EAX));
  /* 1160f063 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f066 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f06a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f06d push edx */
  push32((uint32_t)(EDX));
  /* 1160f06e call 0x116083d0 */
  push32(0x1160f073u); f_116083d0();
  /* 1160f073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f076 jmp 0x1160f0b0 */
  goto L_1160f0b0;
L_1160f078:;
  /* 1160f078 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f07c jne 0x1160f0ab */
  if (!C.zf) goto L_1160f0ab;
  /* 1160f07e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1160f082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f084 je 0x1160f08f */
  if (C.zf) goto L_1160f08f;
  /* 1160f086 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1160f08a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f08d jne 0x1160f0ab */
  if (!C.zf) goto L_1160f0ab;
L_1160f08f:;
  /* 1160f08f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f092 push edx */
  push32((uint32_t)(EDX));
  /* 1160f093 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f096 push eax */
  push32((uint32_t)(EAX));
  /* 1160f097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f09a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f0a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f0a1 call 0x116083d0 */
  push32(0x1160f0a6u); f_116083d0();
  /* 1160f0a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f0a9 jmp 0x1160f0b0 */
  goto L_1160f0b0;
L_1160f0ab:;
  /* 1160f0ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160f0ae jmp 0x1160f0d9 */
  goto L_1160f0d9;
L_1160f0b0:;
  /* 1160f0b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1160f0b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f0b7 jne 0x1160f0bb */
  if (!C.zf) goto L_1160f0bb;
  /* 1160f0b9 jmp 0x1160f0d7 */
  goto L_1160f0d7;
L_1160f0bb:;
  /* 1160f0bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1160f0bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f0c1 jne 0x1160f0c5 */
  if (!C.zf) goto L_1160f0c5;
  /* 1160f0c3 jmp 0x1160f0d7 */
  goto L_1160f0d7;
L_1160f0c5:;
  /* 1160f0c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f0c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f0cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1160f0cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1160f0d2 jmp 0x1160efe9 */
  goto L_1160efe9;
L_1160f0d7:;
  /* 1160f0d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160f0d9:;
  /* 1160f0d9 mov esp, ebp */
  ESP = (EBP);
  /* 1160f0db pop ebp */
  EBP = (pop32());
  /* 1160f0dc ret  */
  ESPCHK(0x1160ef80u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1160f0e0 (101 bytes, 36 insns) */
void f_1160f0e0(void) {
  FTRACE(0x1160f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1160f0e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f0e6 push eax */
  push32((uint32_t)(EAX));
  /* 1160f0e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f0ea push ecx */
  push32((uint32_t)(ECX));
  /* 1160f0eb call 0x11607b60 */
  push32(0x1160f0f0u); f_11607b60();
  /* 1160f0f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f0f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f0f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1160f0fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f0fc je 0x1160f118 */
  if (C.zf) goto L_1160f118;
  /* 1160f0fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f101 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f104 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f105 push 0x1162c070 */
  push32((uint32_t)(0x1162c070u));
  /* 1160f10a push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f10c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f10f push edx */
  push32((uint32_t)(EDX));
  /* 1160f110 call 0x1160ef30 */
  push32(0x1160f115u); f_1160ef30();
  /* 1160f115 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160f118:;
  /* 1160f118 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f11b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1160f122 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160f124 je 0x1160f143 */
  if (C.zf) goto L_1160f143;
  /* 1160f126 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160f129 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f12f push edx */
  push32((uint32_t)(EDX));
  /* 1160f130 push 0x1162c06c */
  push32((uint32_t)(0x1162c06cu));
  /* 1160f135 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f13a push eax */
  push32((uint32_t)(EAX));
  /* 1160f13b call 0x1160ef30 */
  push32(0x1160f140u); f_1160ef30();
  /* 1160f140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160f143:;
  /* 1160f143 pop ebp */
  EBP = (pop32());
  /* 1160f144 ret  */
  ESPCHK(0x1160f0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f150 @ 0x1160f150 (130 bytes, 50 insns) */
void f_1160f150(void) {
  FTRACE(0x1160f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f150 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f151 mov ebp, esp */
  EBP = (ESP);
  /* 1160f153 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f154 push ebx */
  push32((uint32_t)(EBX));
  /* 1160f155 push esi */
  push32((uint32_t)(ESI));
  /* 1160f156 push edi */
  push32((uint32_t)(EDI));
  /* 1160f157 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1160f15e:;
  /* 1160f15e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f162 jne 0x1160f182 */
  if (!C.zf) goto L_1160f182;
  /* 1160f164 push 0x1162c080 */
  push32((uint32_t)(0x1162c080u));
  /* 1160f169 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160f16b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1160f16d push 0x1162c074 */
  push32((uint32_t)(0x1162c074u));
  /* 1160f172 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f174 call 0x11603c70 */
  push32(0x1160f179u); f_11603c70();
  /* 1160f179 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f17c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f17f jne 0x1160f182 */
  if (!C.zf) goto L_1160f182;
  /* 1160f181 int3  */
  x86_unimpl("int3 @ 0x1160f181");
L_1160f182:;
  /* 1160f182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160f184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f186 jne 0x1160f15e */
  if (!C.zf) goto L_1160f15e;
  /* 1160f188 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f18b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160f18e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1160f191 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160f193 je 0x1160f1a1 */
  if (C.zf) goto L_1160f1a1;
  /* 1160f195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f198 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1160f19f jmp 0x1160f1c8 */
  goto L_1160f1c8;
L_1160f1a1:;
  /* 1160f1a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f1a5 call 0x1160d9c0 */
  push32(0x1160f1aau); f_1160d9c0();
  /* 1160f1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f1ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f1b0 push edx */
  push32((uint32_t)(EDX));
  /* 1160f1b1 call 0x1160f1e0 */
  push32(0x1160f1b6u); f_1160f1e0();
  /* 1160f1b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f1b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160f1bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f1bf push eax */
  push32((uint32_t)(EAX));
  /* 1160f1c0 call 0x1160da30 */
  push32(0x1160f1c5u); f_1160da30();
  /* 1160f1c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160f1c8:;
  /* 1160f1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f1cb pop edi */
  EDI = (pop32());
  /* 1160f1cc pop esi */
  ESI = (pop32());
  /* 1160f1cd pop ebx */
  EBX = (pop32());
  /* 1160f1ce mov esp, ebp */
  ESP = (EBP);
  /* 1160f1d0 pop ebp */
  EBP = (pop32());
  /* 1160f1d1 ret  */
  ESPCHK(0x1160f150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1e0 @ 0x1160f1e0 (190 bytes, 67 insns) */
void f_1160f1e0(void) {
  FTRACE(0x1160f1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1160f1e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160f1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1160f1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1160f1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1160f1e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1160f1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f1f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1160f1f6:;
  /* 1160f1f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f1fa jne 0x1160f21a */
  if (!C.zf) goto L_1160f21a;
  /* 1160f1fc push 0x1162bf24 */
  push32((uint32_t)(0x1162bf24u));
  /* 1160f201 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160f203 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1160f205 push 0x1162c074 */
  push32((uint32_t)(0x1162c074u));
  /* 1160f20a push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f20c call 0x11603c70 */
  push32(0x1160f211u); f_11603c70();
  /* 1160f211 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f214 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f217 jne 0x1160f21a */
  if (!C.zf) goto L_1160f21a;
  /* 1160f219 int3  */
  x86_unimpl("int3 @ 0x1160f219");
L_1160f21a:;
  /* 1160f21a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f21c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160f21e jne 0x1160f1f6 */
  if (!C.zf) goto L_1160f1f6;
  /* 1160f220 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f223 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160f226 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1160f22b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f22d je 0x1160f28a */
  if (C.zf) goto L_1160f28a;
  /* 1160f22f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f232 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f233 call 0x1160e4e0 */
  push32(0x1160f238u); f_1160e4e0();
  /* 1160f238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f23b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160f23e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f241 push edx */
  push32((uint32_t)(EDX));
  /* 1160f242 call 0x11611860 */
  push32(0x1160f247u); f_11611860();
  /* 1160f247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f24a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f24d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160f250 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f251 call 0x11611730 */
  push32(0x1160f256u); f_11611730();
  /* 1160f256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f25b jge 0x1160f266 */
  if ((C.sf==C.of)) goto L_1160f266;
  /* 1160f25d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1160f264 jmp 0x1160f28a */
  goto L_1160f28a;
L_1160f266:;
  /* 1160f266 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f269 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f26d je 0x1160f28a */
  if (C.zf) goto L_1160f28a;
  /* 1160f26f push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f274 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1160f277 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f278 call 0x11605640 */
  push32(0x1160f27du); f_11605640();
  /* 1160f27d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f280 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f283 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1160f28a:;
  /* 1160f28a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f28d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1160f294 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f297 pop edi */
  EDI = (pop32());
  /* 1160f298 pop esi */
  ESI = (pop32());
  /* 1160f299 pop ebx */
  EBX = (pop32());
  /* 1160f29a mov esp, ebp */
  ESP = (EBP);
  /* 1160f29c pop ebp */
  EBP = (pop32());
  /* 1160f29d ret  */
  ESPCHK(0x1160f1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2a0 @ 0x1160f2a0 (210 bytes, 63 insns) */
void f_1160f2a0(void) {
  FTRACE(0x1160f2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1160f2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f2a7 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f2ad jae 0x1160f2d1 */
  if (!C.cf) goto L_1160f2d1;
  /* 1160f2af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f2b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160f2b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f2b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160f2bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160f2be mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160f2c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160f2ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1160f2cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160f2cf jne 0x1160f2e4 */
  if (!C.zf) goto L_1160f2e4;
L_1160f2d1:;
  /* 1160f2d1 call 0x1160ca80 */
  push32(0x1160f2d6u); f_1160ca80();
  /* 1160f2d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160f2dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160f2df jmp 0x1160f36e */
  goto L_1160f36e;
L_1160f2e4:;
  /* 1160f2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f2e7 push edx */
  push32((uint32_t)(EDX));
  /* 1160f2e8 call 0x1160e2a0 */
  push32(0x1160f2edu); f_1160e2a0();
  /* 1160f2ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f2f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f2f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160f2f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f2f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160f2fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160f2ff mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160f306 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1160f30b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1160f30e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f310 je 0x1160f34d */
  if (C.zf) goto L_1160f34d;
  /* 1160f312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f315 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f316 call 0x1160e120 */
  push32(0x1160f31bu); f_1160e120();
  /* 1160f31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f31e push eax */
  push32((uint32_t)(EAX));
  /* 1160f31f call dword ptr [0x11633300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633300))), 0x1160f325u);
  /* 1160f325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f327 jne 0x1160f334 */
  if (!C.zf) goto L_1160f334;
  /* 1160f329 call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x1160f32fu);
  /* 1160f32f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160f332 jmp 0x1160f33b */
  goto L_1160f33b;
L_1160f334:;
  /* 1160f334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1160f33b:;
  /* 1160f33b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f33f jne 0x1160f343 */
  if (!C.zf) goto L_1160f343;
  /* 1160f341 jmp 0x1160f35f */
  goto L_1160f35f;
L_1160f343:;
  /* 1160f343 call 0x1160ca90 */
  push32(0x1160f348u); f_1160ca90();
  /* 1160f348 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f34b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1160f34d:;
  /* 1160f34d call 0x1160ca80 */
  push32(0x1160f352u); f_1160ca80();
  /* 1160f352 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160f358 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1160f35f:;
  /* 1160f35f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f362 push eax */
  push32((uint32_t)(EAX));
  /* 1160f363 call 0x1160e330 */
  push32(0x1160f368u); f_1160e330();
  /* 1160f368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f36b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1160f36e:;
  /* 1160f36e mov esp, ebp */
  ESP = (EBP);
  /* 1160f370 pop ebp */
  EBP = (pop32());
  /* 1160f371 ret  */
  ESPCHK(0x1160f2a0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1160f380 (219 bytes, 64 insns) */
void f_1160f380(void) {
  FTRACE(0x1160f380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f380 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f381 mov ebp, esp */
  EBP = (ESP);
  /* 1160f383 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f384 cmp dword ptr [0x1163094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1163094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f38b je 0x1160f421 */
  if (C.zf) goto L_1160f421;
  /* 1160f391 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1160f393 push 0x1162c090 */
  push32((uint32_t)(0x1162c090u));
  /* 1160f398 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f39a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1160f39f push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f3a1 call 0x11604fc0 */
  push32(0x1160f3a6u); f_11604fc0();
  /* 1160f3a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f3a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160f3ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f3b0 jne 0x1160f3bc */
  if (!C.zf) goto L_1160f3bc;
  /* 1160f3b2 mov eax, 1 */
  EAX = (0x1u);
  /* 1160f3b7 jmp 0x1160f457 */
  goto L_1160f457;
L_1160f3bc:;
  /* 1160f3bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f3bf push eax */
  push32((uint32_t)(EAX));
  /* 1160f3c0 call 0x1160f460 */
  push32(0x1160f3c5u); f_1160f460();
  /* 1160f3c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f3c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160f3ca je 0x1160f3ed */
  if (C.zf) goto L_1160f3ed;
  /* 1160f3cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f3cf push ecx */
  push32((uint32_t)(ECX));
  /* 1160f3d0 call 0x1160f9f0 */
  push32(0x1160f3d5u); f_1160f9f0();
  /* 1160f3d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f3d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f3da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f3dd push edx */
  push32((uint32_t)(EDX));
  /* 1160f3de call 0x11605640 */
  push32(0x1160f3e3u); f_11605640();
  /* 1160f3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f3e6 mov eax, 1 */
  EAX = (0x1u);
  /* 1160f3eb jmp 0x1160f457 */
  goto L_1160f457;
L_1160f3ed:;
  /* 1160f3ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f3f0 mov dword ptr [0x1162fc98], eax */
  w32((uint32_t)(0x1162fc98), (EAX));
  /* 1160f3f5 mov ecx, dword ptr [0x1163096c] */
  ECX = (r32((uint32_t)(0x1163096c)));
  /* 1160f3fb push ecx */
  push32((uint32_t)(ECX));
  /* 1160f3fc call 0x1160f9f0 */
  push32(0x1160f401u); f_1160f9f0();
  /* 1160f401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f404 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f406 mov edx, dword ptr [0x1163096c] */
  EDX = (r32((uint32_t)(0x1163096c)));
  /* 1160f40c push edx */
  push32((uint32_t)(EDX));
  /* 1160f40d call 0x11605640 */
  push32(0x1160f412u); f_11605640();
  /* 1160f412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f418 mov dword ptr [0x1163096c], eax */
  w32((uint32_t)(0x1163096c), (EAX));
  /* 1160f41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160f41f jmp 0x1160f457 */
  goto L_1160f457;
L_1160f421:;
  /* 1160f421 mov dword ptr [0x1162fc98], 0x1162fca0 */
  w32((uint32_t)(0x1162fc98), (0x1162fca0u));
  /* 1160f42b mov ecx, dword ptr [0x1163096c] */
  ECX = (r32((uint32_t)(0x1163096c)));
  /* 1160f431 push ecx */
  push32((uint32_t)(ECX));
  /* 1160f432 call 0x1160f9f0 */
  push32(0x1160f437u); f_1160f9f0();
  /* 1160f437 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f43a push 2 */
  push32((uint32_t)(0x2u));
  /* 1160f43c mov edx, dword ptr [0x1163096c] */
  EDX = (r32((uint32_t)(0x1163096c)));
  /* 1160f442 push edx */
  push32((uint32_t)(EDX));
  /* 1160f443 call 0x11605640 */
  push32(0x1160f448u); f_11605640();
  /* 1160f448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f44b mov dword ptr [0x1163096c], 0 */
  w32((uint32_t)(0x1163096c), (0x0u));
  /* 1160f455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160f457:;
  /* 1160f457 mov esp, ebp */
  ESP = (EBP);
  /* 1160f459 pop ebp */
  EBP = (pop32());
  /* 1160f45a ret  */
  ESPCHK(0x1160f380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f460 @ 0x1160f460 (1423 bytes, 533 insns) */
void f_1160f460(void) {
  FTRACE(0x1160f460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f460 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f461 mov ebp, esp */
  EBP = (ESP);
  /* 1160f463 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160f466 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160f46d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160f46f mov ax, word ptr [0x116309a6] */
  AX = (r16((uint32_t)(0x116309a6)));
  /* 1160f475 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160f478 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f47a mov cx, word ptr [0x116309a8] */
  CX = (r16((uint32_t)(0x116309a8)));
  /* 1160f481 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160f484 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f488 jne 0x1160f492 */
  if (!C.zf) goto L_1160f492;
  /* 1160f48a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160f48d jmp 0x1160f9eb */
  goto L_1160f9eb;
L_1160f492:;
  /* 1160f492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f495 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f498 push edx */
  push32((uint32_t)(EDX));
  /* 1160f499 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1160f49b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f49e push eax */
  push32((uint32_t)(EAX));
  /* 1160f49f push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f4a1 call 0x11612d70 */
  push32(0x1160f4a6u); f_11612d70();
  /* 1160f4a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f4a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f4ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f4ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f4b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f4b4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f4b7 push edx */
  push32((uint32_t)(EDX));
  /* 1160f4b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1160f4ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f4bd push eax */
  push32((uint32_t)(EAX));
  /* 1160f4be push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f4c0 call 0x11612d70 */
  push32(0x1160f4c5u); f_11612d70();
  /* 1160f4c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f4c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f4cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f4cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f4d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f4d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f4d6 push edx */
  push32((uint32_t)(EDX));
  /* 1160f4d7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1160f4d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f4dc push eax */
  push32((uint32_t)(EAX));
  /* 1160f4dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f4df call 0x11612d70 */
  push32(0x1160f4e4u); f_11612d70();
  /* 1160f4e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f4e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f4ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f4ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f4ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f4f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f4f5 push edx */
  push32((uint32_t)(EDX));
  /* 1160f4f6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1160f4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f4fb push eax */
  push32((uint32_t)(EAX));
  /* 1160f4fc push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f4fe call 0x11612d70 */
  push32(0x1160f503u); f_11612d70();
  /* 1160f503 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f506 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f509 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f50b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f50e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f511 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f514 push edx */
  push32((uint32_t)(EDX));
  /* 1160f515 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1160f517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f51a push eax */
  push32((uint32_t)(EAX));
  /* 1160f51b push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f51d call 0x11612d70 */
  push32(0x1160f522u); f_11612d70();
  /* 1160f522 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f528 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f52a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f52d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f530 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f533 push edx */
  push32((uint32_t)(EDX));
  /* 1160f534 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1160f536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f539 push eax */
  push32((uint32_t)(EAX));
  /* 1160f53a push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f53c call 0x11612d70 */
  push32(0x1160f541u); f_11612d70();
  /* 1160f541 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f544 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f547 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f549 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f54c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f54f push edx */
  push32((uint32_t)(EDX));
  /* 1160f550 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1160f552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f555 push eax */
  push32((uint32_t)(EAX));
  /* 1160f556 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f558 call 0x11612d70 */
  push32(0x1160f55du); f_11612d70();
  /* 1160f55d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f560 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f563 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f565 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f56b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f56e push edx */
  push32((uint32_t)(EDX));
  /* 1160f56f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1160f571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f574 push eax */
  push32((uint32_t)(EAX));
  /* 1160f575 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f577 call 0x11612d70 */
  push32(0x1160f57cu); f_11612d70();
  /* 1160f57c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f57f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f582 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f584 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f58a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f58d push edx */
  push32((uint32_t)(EDX));
  /* 1160f58e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1160f590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f593 push eax */
  push32((uint32_t)(EAX));
  /* 1160f594 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f596 call 0x11612d70 */
  push32(0x1160f59bu); f_11612d70();
  /* 1160f59b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f59e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f5a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f5a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f5a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f5a9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f5ac push edx */
  push32((uint32_t)(EDX));
  /* 1160f5ad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1160f5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f5b2 push eax */
  push32((uint32_t)(EAX));
  /* 1160f5b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f5b5 call 0x11612d70 */
  push32(0x1160f5bau); f_11612d70();
  /* 1160f5ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f5bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f5c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f5c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f5c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f5c8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f5cb push edx */
  push32((uint32_t)(EDX));
  /* 1160f5cc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1160f5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f5d1 push eax */
  push32((uint32_t)(EAX));
  /* 1160f5d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f5d4 call 0x11612d70 */
  push32(0x1160f5d9u); f_11612d70();
  /* 1160f5d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f5dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f5df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f5e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f5e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f5e7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f5ea push edx */
  push32((uint32_t)(EDX));
  /* 1160f5eb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1160f5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f5f0 push eax */
  push32((uint32_t)(EAX));
  /* 1160f5f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f5f3 call 0x11612d70 */
  push32(0x1160f5f8u); f_11612d70();
  /* 1160f5f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f5fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f5fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f600 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f606 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f609 push edx */
  push32((uint32_t)(EDX));
  /* 1160f60a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1160f60c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f60f push eax */
  push32((uint32_t)(EAX));
  /* 1160f610 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f612 call 0x11612d70 */
  push32(0x1160f617u); f_11612d70();
  /* 1160f617 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f61a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f61d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f61f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f625 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f628 push edx */
  push32((uint32_t)(EDX));
  /* 1160f629 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1160f62b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f62e push eax */
  push32((uint32_t)(EAX));
  /* 1160f62f push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f631 call 0x11612d70 */
  push32(0x1160f636u); f_11612d70();
  /* 1160f636 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f639 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f63c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f63e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f644 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f647 push edx */
  push32((uint32_t)(EDX));
  /* 1160f648 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1160f64a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f64d push eax */
  push32((uint32_t)(EAX));
  /* 1160f64e push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f650 call 0x11612d70 */
  push32(0x1160f655u); f_11612d70();
  /* 1160f655 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f658 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f65b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f65d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f660 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f663 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f666 push edx */
  push32((uint32_t)(EDX));
  /* 1160f667 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1160f669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f66c push eax */
  push32((uint32_t)(EAX));
  /* 1160f66d push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f66f call 0x11612d70 */
  push32(0x1160f674u); f_11612d70();
  /* 1160f674 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f67a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f67c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f67f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f682 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f685 push edx */
  push32((uint32_t)(EDX));
  /* 1160f686 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1160f688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f68b push eax */
  push32((uint32_t)(EAX));
  /* 1160f68c push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f68e call 0x11612d70 */
  push32(0x1160f693u); f_11612d70();
  /* 1160f693 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f696 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f699 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f69b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f6a1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f6a4 push edx */
  push32((uint32_t)(EDX));
  /* 1160f6a5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1160f6a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f6aa push eax */
  push32((uint32_t)(EAX));
  /* 1160f6ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f6ad call 0x11612d70 */
  push32(0x1160f6b2u); f_11612d70();
  /* 1160f6b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f6b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f6b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f6ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f6bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f6c0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f6c3 push edx */
  push32((uint32_t)(EDX));
  /* 1160f6c4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1160f6c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f6c9 push eax */
  push32((uint32_t)(EAX));
  /* 1160f6ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f6cc call 0x11612d70 */
  push32(0x1160f6d1u); f_11612d70();
  /* 1160f6d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f6d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f6d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f6d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f6dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f6df add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f6e2 push edx */
  push32((uint32_t)(EDX));
  /* 1160f6e3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1160f6e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f6e8 push eax */
  push32((uint32_t)(EAX));
  /* 1160f6e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f6eb call 0x11612d70 */
  push32(0x1160f6f0u); f_11612d70();
  /* 1160f6f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f6f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f6f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f6f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f6fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f6fe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f701 push edx */
  push32((uint32_t)(EDX));
  /* 1160f702 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1160f704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f707 push eax */
  push32((uint32_t)(EAX));
  /* 1160f708 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f70a call 0x11612d70 */
  push32(0x1160f70fu); f_11612d70();
  /* 1160f70f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f712 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f715 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f717 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f71a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f71d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f720 push edx */
  push32((uint32_t)(EDX));
  /* 1160f721 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1160f723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f726 push eax */
  push32((uint32_t)(EAX));
  /* 1160f727 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f729 call 0x11612d70 */
  push32(0x1160f72eu); f_11612d70();
  /* 1160f72e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f731 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f734 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f739 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f73c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f73f push edx */
  push32((uint32_t)(EDX));
  /* 1160f740 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1160f742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f745 push eax */
  push32((uint32_t)(EAX));
  /* 1160f746 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f748 call 0x11612d70 */
  push32(0x1160f74du); f_11612d70();
  /* 1160f74d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f750 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f753 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f755 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f75b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f75e push edx */
  push32((uint32_t)(EDX));
  /* 1160f75f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1160f761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f764 push eax */
  push32((uint32_t)(EAX));
  /* 1160f765 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f767 call 0x11612d70 */
  push32(0x1160f76cu); f_11612d70();
  /* 1160f76c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f76f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f772 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f774 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f77a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f77d push edx */
  push32((uint32_t)(EDX));
  /* 1160f77e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1160f780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f783 push eax */
  push32((uint32_t)(EAX));
  /* 1160f784 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f786 call 0x11612d70 */
  push32(0x1160f78bu); f_11612d70();
  /* 1160f78b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f78e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f791 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f793 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f796 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f799 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f79c push edx */
  push32((uint32_t)(EDX));
  /* 1160f79d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1160f79f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f7a2 push eax */
  push32((uint32_t)(EAX));
  /* 1160f7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f7a5 call 0x11612d70 */
  push32(0x1160f7aau); f_11612d70();
  /* 1160f7aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f7ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f7b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f7b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f7b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f7b8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f7bb push edx */
  push32((uint32_t)(EDX));
  /* 1160f7bc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1160f7be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f7c1 push eax */
  push32((uint32_t)(EAX));
  /* 1160f7c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f7c4 call 0x11612d70 */
  push32(0x1160f7c9u); f_11612d70();
  /* 1160f7c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f7cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f7cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f7d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f7d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f7d7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f7da push edx */
  push32((uint32_t)(EDX));
  /* 1160f7db push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1160f7dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f7e0 push eax */
  push32((uint32_t)(EAX));
  /* 1160f7e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f7e3 call 0x11612d70 */
  push32(0x1160f7e8u); f_11612d70();
  /* 1160f7e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f7eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f7ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f7f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f7f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f7f6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f7f9 push edx */
  push32((uint32_t)(EDX));
  /* 1160f7fa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1160f7fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f7ff push eax */
  push32((uint32_t)(EAX));
  /* 1160f800 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f802 call 0x11612d70 */
  push32(0x1160f807u); f_11612d70();
  /* 1160f807 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f80a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f80d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f80f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f812 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f815 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f818 push edx */
  push32((uint32_t)(EDX));
  /* 1160f819 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1160f81b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f81e push eax */
  push32((uint32_t)(EAX));
  /* 1160f81f push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f821 call 0x11612d70 */
  push32(0x1160f826u); f_11612d70();
  /* 1160f826 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f829 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f82c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f82e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f834 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f837 push edx */
  push32((uint32_t)(EDX));
  /* 1160f838 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1160f83a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f83d push eax */
  push32((uint32_t)(EAX));
  /* 1160f83e push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f840 call 0x11612d70 */
  push32(0x1160f845u); f_11612d70();
  /* 1160f845 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f848 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f84b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f84d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f850 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f853 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f856 push edx */
  push32((uint32_t)(EDX));
  /* 1160f857 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1160f859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f85c push eax */
  push32((uint32_t)(EAX));
  /* 1160f85d push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f85f call 0x11612d70 */
  push32(0x1160f864u); f_11612d70();
  /* 1160f864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f867 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f86a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f86c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f86f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f872 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f878 push edx */
  push32((uint32_t)(EDX));
  /* 1160f879 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1160f87b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f87e push eax */
  push32((uint32_t)(EAX));
  /* 1160f87f push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f881 call 0x11612d70 */
  push32(0x1160f886u); f_11612d70();
  /* 1160f886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f889 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f88c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f88e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f894 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f89a push edx */
  push32((uint32_t)(EDX));
  /* 1160f89b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1160f89d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f8a0 push eax */
  push32((uint32_t)(EAX));
  /* 1160f8a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f8a3 call 0x11612d70 */
  push32(0x1160f8a8u); f_11612d70();
  /* 1160f8a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f8ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f8ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f8b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f8b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f8b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f8bc push edx */
  push32((uint32_t)(EDX));
  /* 1160f8bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1160f8bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f8c2 push eax */
  push32((uint32_t)(EAX));
  /* 1160f8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f8c5 call 0x11612d70 */
  push32(0x1160f8cau); f_11612d70();
  /* 1160f8ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f8cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f8d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f8d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f8d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f8d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f8de push edx */
  push32((uint32_t)(EDX));
  /* 1160f8df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1160f8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f8e4 push eax */
  push32((uint32_t)(EAX));
  /* 1160f8e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f8e7 call 0x11612d70 */
  push32(0x1160f8ecu); f_11612d70();
  /* 1160f8ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f8ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f8f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f8f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f8f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f8fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f900 push edx */
  push32((uint32_t)(EDX));
  /* 1160f901 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1160f903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f906 push eax */
  push32((uint32_t)(EAX));
  /* 1160f907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f909 call 0x11612d70 */
  push32(0x1160f90eu); f_11612d70();
  /* 1160f90e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f911 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f914 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f916 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f91c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f922 push edx */
  push32((uint32_t)(EDX));
  /* 1160f923 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1160f925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f928 push eax */
  push32((uint32_t)(EAX));
  /* 1160f929 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f92b call 0x11612d70 */
  push32(0x1160f930u); f_11612d70();
  /* 1160f930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f933 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f936 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f938 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f93b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f93e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f944 push edx */
  push32((uint32_t)(EDX));
  /* 1160f945 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1160f947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f94a push eax */
  push32((uint32_t)(EAX));
  /* 1160f94b push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f94d call 0x11612d70 */
  push32(0x1160f952u); f_11612d70();
  /* 1160f952 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f955 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f958 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f95a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f95d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f960 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f966 push edx */
  push32((uint32_t)(EDX));
  /* 1160f967 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1160f969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160f96c push eax */
  push32((uint32_t)(EAX));
  /* 1160f96d push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f96f call 0x11612d70 */
  push32(0x1160f974u); f_11612d70();
  /* 1160f974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f977 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f97a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f97c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f97f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f982 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f988 push edx */
  push32((uint32_t)(EDX));
  /* 1160f989 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1160f98b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f98e push eax */
  push32((uint32_t)(EAX));
  /* 1160f98f push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f991 call 0x11612d70 */
  push32(0x1160f996u); f_11612d70();
  /* 1160f996 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f999 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f99c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f99e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f9a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f9a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f9aa push edx */
  push32((uint32_t)(EDX));
  /* 1160f9ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1160f9ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f9b0 push eax */
  push32((uint32_t)(EAX));
  /* 1160f9b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f9b3 call 0x11612d70 */
  push32(0x1160f9b8u); f_11612d70();
  /* 1160f9b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f9bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f9be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f9c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160f9c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f9cc push edx */
  push32((uint32_t)(EDX));
  /* 1160f9cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1160f9d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160f9d5 push eax */
  push32((uint32_t)(EAX));
  /* 1160f9d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160f9d8 call 0x11612d70 */
  push32(0x1160f9ddu); f_11612d70();
  /* 1160f9dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160f9e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160f9e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160f9e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160f9e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1160f9eb:;
  /* 1160f9eb mov esp, ebp */
  ESP = (EBP);
  /* 1160f9ed pop ebp */
  EBP = (pop32());
  /* 1160f9ee ret  */
  ESPCHK(0x1160f460u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1160f9f0 (779 bytes, 265 insns) */
void f_1160f9f0(void) {
  FTRACE(0x1160f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1160f9f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160f9f7 jne 0x1160f9fe */
  if (!C.zf) goto L_1160f9fe;
  /* 1160f9f9 jmp 0x1160fcf9 */
  goto L_1160fcf9;
L_1160f9fe:;
  /* 1160f9fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa03 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160fa06 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fa07 call 0x11605640 */
  push32(0x1160fa0cu); f_11605640();
  /* 1160fa0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160fa17 push eax */
  push32((uint32_t)(EAX));
  /* 1160fa18 call 0x11605640 */
  push32(0x1160fa1du); f_11605640();
  /* 1160fa1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa20 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa25 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160fa28 push edx */
  push32((uint32_t)(EDX));
  /* 1160fa29 call 0x11605640 */
  push32(0x1160fa2eu); f_11605640();
  /* 1160fa2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160fa39 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fa3a call 0x11605640 */
  push32(0x1160fa3fu); f_11605640();
  /* 1160fa3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa47 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1160fa4a push eax */
  push32((uint32_t)(EAX));
  /* 1160fa4b call 0x11605640 */
  push32(0x1160fa50u); f_11605640();
  /* 1160fa50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa58 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1160fa5b push edx */
  push32((uint32_t)(EDX));
  /* 1160fa5c call 0x11605640 */
  push32(0x1160fa61u); f_11605640();
  /* 1160fa61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa69 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160fa6b push ecx */
  push32((uint32_t)(ECX));
  /* 1160fa6c call 0x11605640 */
  push32(0x1160fa71u); f_11605640();
  /* 1160fa71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa74 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa79 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1160fa7c push eax */
  push32((uint32_t)(EAX));
  /* 1160fa7d call 0x11605640 */
  push32(0x1160fa82u); f_11605640();
  /* 1160fa82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa85 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa8a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1160fa8d push edx */
  push32((uint32_t)(EDX));
  /* 1160fa8e call 0x11605640 */
  push32(0x1160fa93u); f_11605640();
  /* 1160fa93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fa96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fa98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fa9b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1160fa9e push ecx */
  push32((uint32_t)(ECX));
  /* 1160fa9f call 0x11605640 */
  push32(0x1160faa4u); f_11605640();
  /* 1160faa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160faa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160faa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160faac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1160faaf push eax */
  push32((uint32_t)(EAX));
  /* 1160fab0 call 0x11605640 */
  push32(0x1160fab5u); f_11605640();
  /* 1160fab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fab8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160faba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fabd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1160fac0 push edx */
  push32((uint32_t)(EDX));
  /* 1160fac1 call 0x11605640 */
  push32(0x1160fac6u); f_11605640();
  /* 1160fac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160facb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160face mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1160fad1 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fad2 call 0x11605640 */
  push32(0x1160fad7u); f_11605640();
  /* 1160fad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fada push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fadc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fadf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1160fae2 push eax */
  push32((uint32_t)(EAX));
  /* 1160fae3 call 0x11605640 */
  push32(0x1160fae8u); f_11605640();
  /* 1160fae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160faeb push 2 */
  push32((uint32_t)(0x2u));
  /* 1160faed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160faf0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1160faf3 push edx */
  push32((uint32_t)(EDX));
  /* 1160faf4 call 0x11605640 */
  push32(0x1160faf9u); f_11605640();
  /* 1160faf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fafc push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fafe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb01 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1160fb04 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fb05 call 0x11605640 */
  push32(0x1160fb0au); f_11605640();
  /* 1160fb0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb12 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1160fb15 push eax */
  push32((uint32_t)(EAX));
  /* 1160fb16 call 0x11605640 */
  push32(0x1160fb1bu); f_11605640();
  /* 1160fb1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb23 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1160fb26 push edx */
  push32((uint32_t)(EDX));
  /* 1160fb27 call 0x11605640 */
  push32(0x1160fb2cu); f_11605640();
  /* 1160fb2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb2f push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb34 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1160fb37 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fb38 call 0x11605640 */
  push32(0x1160fb3du); f_11605640();
  /* 1160fb3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb40 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb45 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1160fb48 push eax */
  push32((uint32_t)(EAX));
  /* 1160fb49 call 0x11605640 */
  push32(0x1160fb4eu); f_11605640();
  /* 1160fb4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb51 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb56 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1160fb59 push edx */
  push32((uint32_t)(EDX));
  /* 1160fb5a call 0x11605640 */
  push32(0x1160fb5fu); f_11605640();
  /* 1160fb5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb62 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb67 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1160fb6a push ecx */
  push32((uint32_t)(ECX));
  /* 1160fb6b call 0x11605640 */
  push32(0x1160fb70u); f_11605640();
  /* 1160fb70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb78 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1160fb7b push eax */
  push32((uint32_t)(EAX));
  /* 1160fb7c call 0x11605640 */
  push32(0x1160fb81u); f_11605640();
  /* 1160fb81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb84 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb89 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1160fb8c push edx */
  push32((uint32_t)(EDX));
  /* 1160fb8d call 0x11605640 */
  push32(0x1160fb92u); f_11605640();
  /* 1160fb92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fb95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fb97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fb9a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1160fb9d push ecx */
  push32((uint32_t)(ECX));
  /* 1160fb9e call 0x11605640 */
  push32(0x1160fba3u); f_11605640();
  /* 1160fba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fba6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fba8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fbab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1160fbae push eax */
  push32((uint32_t)(EAX));
  /* 1160fbaf call 0x11605640 */
  push32(0x1160fbb4u); f_11605640();
  /* 1160fbb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fbb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fbb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fbbc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1160fbbf push edx */
  push32((uint32_t)(EDX));
  /* 1160fbc0 call 0x11605640 */
  push32(0x1160fbc5u); f_11605640();
  /* 1160fbc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fbc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fbca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fbcd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1160fbd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fbd1 call 0x11605640 */
  push32(0x1160fbd6u); f_11605640();
  /* 1160fbd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fbd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fbdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fbde mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1160fbe1 push eax */
  push32((uint32_t)(EAX));
  /* 1160fbe2 call 0x11605640 */
  push32(0x1160fbe7u); f_11605640();
  /* 1160fbe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fbea push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fbec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fbef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1160fbf2 push edx */
  push32((uint32_t)(EDX));
  /* 1160fbf3 call 0x11605640 */
  push32(0x1160fbf8u); f_11605640();
  /* 1160fbf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fbfb push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fbfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc00 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1160fc03 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fc04 call 0x11605640 */
  push32(0x1160fc09u); f_11605640();
  /* 1160fc09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc0c push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc11 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1160fc14 push eax */
  push32((uint32_t)(EAX));
  /* 1160fc15 call 0x11605640 */
  push32(0x1160fc1au); f_11605640();
  /* 1160fc1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc1d push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc22 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1160fc28 push edx */
  push32((uint32_t)(EDX));
  /* 1160fc29 call 0x11605640 */
  push32(0x1160fc2eu); f_11605640();
  /* 1160fc2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc36 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1160fc3c push ecx */
  push32((uint32_t)(ECX));
  /* 1160fc3d call 0x11605640 */
  push32(0x1160fc42u); f_11605640();
  /* 1160fc42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc4a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1160fc50 push eax */
  push32((uint32_t)(EAX));
  /* 1160fc51 call 0x11605640 */
  push32(0x1160fc56u); f_11605640();
  /* 1160fc56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc5e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1160fc64 push edx */
  push32((uint32_t)(EDX));
  /* 1160fc65 call 0x11605640 */
  push32(0x1160fc6au); f_11605640();
  /* 1160fc6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc72 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1160fc78 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fc79 call 0x11605640 */
  push32(0x1160fc7eu); f_11605640();
  /* 1160fc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc81 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc86 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1160fc8c push eax */
  push32((uint32_t)(EAX));
  /* 1160fc8d call 0x11605640 */
  push32(0x1160fc92u); f_11605640();
  /* 1160fc92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fc95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fc97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fc9a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1160fca0 push edx */
  push32((uint32_t)(EDX));
  /* 1160fca1 call 0x11605640 */
  push32(0x1160fca6u); f_11605640();
  /* 1160fca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fcab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fcae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1160fcb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fcb5 call 0x11605640 */
  push32(0x1160fcbau); f_11605640();
  /* 1160fcba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fcbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fcbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fcc2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1160fcc8 push eax */
  push32((uint32_t)(EAX));
  /* 1160fcc9 call 0x11605640 */
  push32(0x1160fcceu); f_11605640();
  /* 1160fcce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fcd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fcd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fcd6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1160fcdc push edx */
  push32((uint32_t)(EDX));
  /* 1160fcdd call 0x11605640 */
  push32(0x1160fce2u); f_11605640();
  /* 1160fce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fcea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1160fcf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fcf1 call 0x11605640 */
  push32(0x1160fcf6u); f_11605640();
  /* 1160fcf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160fcf9:;
  /* 1160fcf9 pop ebp */
  EBP = (pop32());
  /* 1160fcfa ret  */
  ESPCHK(0x1160f9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd00 @ 0x1160fd00 (678 bytes, 180 insns) */
void f_1160fd00(void) {
  FTRACE(0x1160fd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160fd00 push ebp */
  push32((uint32_t)(EBP));
  /* 1160fd01 mov ebp, esp */
  EBP = (ESP);
  /* 1160fd03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160fd06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1160fd0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160fd0f mov ax, word ptr [0x116309a2] */
  AX = (r16((uint32_t)(0x116309a2)));
  /* 1160fd15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160fd18 cmp dword ptr [0x11630948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160fd1f je 0x1160fe7a */
  if (C.zf) goto L_1160fe7a;
  /* 1160fd25 push 0x11630970 */
  push32((uint32_t)(0x11630970u));
  /* 1160fd2a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1160fd2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160fd2f push ecx */
  push32((uint32_t)(ECX));
  /* 1160fd30 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160fd32 call 0x11612d70 */
  push32(0x1160fd37u); f_11612d70();
  /* 1160fd37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fd3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160fd3d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1160fd3f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1160fd42 push 0x11630974 */
  push32((uint32_t)(0x11630974u));
  /* 1160fd47 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1160fd49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160fd4c push eax */
  push32((uint32_t)(EAX));
  /* 1160fd4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1160fd4f call 0x11612d70 */
  push32(0x1160fd54u); f_11612d70();
  /* 1160fd54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fd57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160fd5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160fd5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160fd5f push 0x11630978 */
  push32((uint32_t)(0x11630978u));
  /* 1160fd64 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1160fd66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160fd69 push edx */
  push32((uint32_t)(EDX));
  /* 1160fd6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1160fd6c call 0x11612d70 */
  push32(0x1160fd71u); f_11612d70();
  /* 1160fd71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fd74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160fd77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160fd79 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160fd7c mov edx, dword ptr [0x11630978] */
  EDX = (r32((uint32_t)(0x11630978)));
  /* 1160fd82 push edx */
  push32((uint32_t)(EDX));
  /* 1160fd83 call 0x1160ffb0 */
  push32(0x1160fd88u); f_1160ffb0();
  /* 1160fd88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fd8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160fd8f je 0x1160fde9 */
  if (C.zf) goto L_1160fde9;
  /* 1160fd91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fd93 mov eax, dword ptr [0x11630970] */
  EAX = (r32((uint32_t)(0x11630970)));
  /* 1160fd98 push eax */
  push32((uint32_t)(EAX));
  /* 1160fd99 call 0x11605640 */
  push32(0x1160fd9eu); f_11605640();
  /* 1160fd9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fda1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fda3 mov ecx, dword ptr [0x11630974] */
  ECX = (r32((uint32_t)(0x11630974)));
  /* 1160fda9 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fdaa call 0x11605640 */
  push32(0x1160fdafu); f_11605640();
  /* 1160fdaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fdb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fdb4 mov edx, dword ptr [0x11630978] */
  EDX = (r32((uint32_t)(0x11630978)));
  /* 1160fdba push edx */
  push32((uint32_t)(EDX));
  /* 1160fdbb call 0x11605640 */
  push32(0x1160fdc0u); f_11605640();
  /* 1160fdc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fdc3 mov dword ptr [0x11630970], 0 */
  w32((uint32_t)(0x11630970), (0x0u));
  /* 1160fdcd mov dword ptr [0x11630974], 0 */
  w32((uint32_t)(0x11630974), (0x0u));
  /* 1160fdd7 mov dword ptr [0x11630978], 0 */
  w32((uint32_t)(0x11630978), (0x0u));
  /* 1160fde1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160fde4 jmp 0x1160ffa2 */
  goto L_1160ffa2;
L_1160fde9:;
  /* 1160fde9 mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fdee cmp dword ptr [eax], 0x1162fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1162fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160fdf4 je 0x1160fe30 */
  if (C.zf) goto L_1160fe30;
  /* 1160fdf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fdf8 mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fdfe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160fe00 push edx */
  push32((uint32_t)(EDX));
  /* 1160fe01 call 0x11605640 */
  push32(0x1160fe06u); f_11605640();
  /* 1160fe06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fe09 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fe0b mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fe10 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160fe13 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fe14 call 0x11605640 */
  push32(0x1160fe19u); f_11605640();
  /* 1160fe19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fe1c push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fe1e mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fe24 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160fe27 push eax */
  push32((uint32_t)(EAX));
  /* 1160fe28 call 0x11605640 */
  push32(0x1160fe2du); f_11605640();
  /* 1160fe2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160fe30:;
  /* 1160fe30 mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fe36 mov edx, dword ptr [0x11630970] */
  EDX = (r32((uint32_t)(0x11630970)));
  /* 1160fe3c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1160fe3e mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fe43 mov ecx, dword ptr [0x11630974] */
  ECX = (r32((uint32_t)(0x11630974)));
  /* 1160fe49 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1160fe4c mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fe52 mov eax, dword ptr [0x11630978] */
  EAX = (r32((uint32_t)(0x11630978)));
  /* 1160fe57 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1160fe5a mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fe60 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160fe62 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1160fe64 mov byte ptr [0x1162eea8], al */
  w8((uint32_t)(0x1162eea8), (AL));
  /* 1160fe69 mov dword ptr [0x1162eeac], 1 */
  w32((uint32_t)(0x1162eeac), (0x1u));
  /* 1160fe73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160fe75 jmp 0x1160ffa2 */
  goto L_1160ffa2;
L_1160fe7a:;
  /* 1160fe7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fe7c mov ecx, dword ptr [0x11630970] */
  ECX = (r32((uint32_t)(0x11630970)));
  /* 1160fe82 push ecx */
  push32((uint32_t)(ECX));
  /* 1160fe83 call 0x11605640 */
  push32(0x1160fe88u); f_11605640();
  /* 1160fe88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fe8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fe8d mov edx, dword ptr [0x11630974] */
  EDX = (r32((uint32_t)(0x11630974)));
  /* 1160fe93 push edx */
  push32((uint32_t)(EDX));
  /* 1160fe94 call 0x11605640 */
  push32(0x1160fe99u); f_11605640();
  /* 1160fe99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fe9c push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fe9e mov eax, dword ptr [0x11630978] */
  EAX = (r32((uint32_t)(0x11630978)));
  /* 1160fea3 push eax */
  push32((uint32_t)(EAX));
  /* 1160fea4 call 0x11605640 */
  push32(0x1160fea9u); f_11605640();
  /* 1160fea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160feac mov dword ptr [0x11630970], 0 */
  w32((uint32_t)(0x11630970), (0x0u));
  /* 1160feb6 mov dword ptr [0x11630974], 0 */
  w32((uint32_t)(0x11630974), (0x0u));
  /* 1160fec0 mov dword ptr [0x11630978], 0 */
  w32((uint32_t)(0x11630978), (0x0u));
  /* 1160feca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1160fecf push 0x1162c09c */
  push32((uint32_t)(0x1162c09cu));
  /* 1160fed4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fed6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160fed8 call 0x11604bb0 */
  push32(0x1160feddu); f_11604bb0();
  /* 1160fedd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160fee0 mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 1160fee6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1160fee8 mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1160feee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160fef1 jne 0x1160fefb */
  if (!C.zf) goto L_1160fefb;
  /* 1160fef3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160fef6 jmp 0x1160ffa2 */
  goto L_1160ffa2;
L_1160fefb:;
  /* 1160fefb push 0x1162c06c */
  push32((uint32_t)(0x1162c06cu));
  /* 1160ff00 mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff05 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160ff07 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ff08 call 0x11607b60 */
  push32(0x1160ff0du); f_11607b60();
  /* 1160ff0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ff10 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1160ff15 push 0x1162c09c */
  push32((uint32_t)(0x1162c09cu));
  /* 1160ff1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ff1c push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ff1e call 0x11604bb0 */
  push32(0x1160ff23u); f_11604bb0();
  /* 1160ff23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ff26 mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff2c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1160ff2f mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff34 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ff38 jne 0x1160ff3f */
  if (!C.zf) goto L_1160ff3f;
  /* 1160ff3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160ff3d jmp 0x1160ffa2 */
  goto L_1160ffa2;
L_1160ff3f:;
  /* 1160ff3f mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160ff48 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1160ff4b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1160ff50 push 0x1162c09c */
  push32((uint32_t)(0x1162c09cu));
  /* 1160ff55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ff57 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ff59 call 0x11604bb0 */
  push32(0x1160ff5eu); f_11604bb0();
  /* 1160ff5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ff61 mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff67 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1160ff6a mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff70 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ff74 jne 0x1160ff7b */
  if (!C.zf) goto L_1160ff7b;
  /* 1160ff76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160ff79 jmp 0x1160ffa2 */
  goto L_1160ffa2;
L_1160ff7b:;
  /* 1160ff7b mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff80 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1160ff83 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1160ff86 mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1160ff8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1160ff8e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1160ff90 mov byte ptr [0x1162eea8], cl */
  w8((uint32_t)(0x1162eea8), (CL));
  /* 1160ff96 mov dword ptr [0x1162eeac], 1 */
  w32((uint32_t)(0x1162eeac), (0x1u));
  /* 1160ffa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160ffa2:;
  /* 1160ffa2 mov esp, ebp */
  ESP = (EBP);
  /* 1160ffa4 pop ebp */
  EBP = (pop32());
  /* 1160ffa5 ret  */
  ESPCHK(0x1160fd00u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1160ffb0 (125 bytes, 49 insns) */
void f_1160ffb0(void) {
  FTRACE(0x1160ffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ffb1 mov ebp, esp */
  EBP = (ESP);
  /* 1160ffb3 push ecx */
  push32((uint32_t)(ECX));
L_1160ffb4:;
  /* 1160ffb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ffb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160ffba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160ffbc je 0x11610029 */
  if (C.zf) goto L_11610029;
  /* 1160ffbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ffc1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1160ffc4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ffc7 jl 0x1160ffed */
  if ((C.sf!=C.of)) goto L_1160ffed;
  /* 1160ffc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ffcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160ffcf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ffd2 jg 0x1160ffed */
  if ((!C.zf&&C.sf==C.of)) goto L_1160ffed;
  /* 1160ffd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ffd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160ffda sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ffdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ffe0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1160ffe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ffe5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ffe8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1160ffeb jmp 0x11610027 */
  goto L_11610027;
L_1160ffed:;
  /* 1160ffed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fff0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160fff3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160fff6 jne 0x1161001e */
  if (!C.zf) goto L_1161001e;
  /* 1160fff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160fffb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160fffe:;
  /* 1160fffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610004 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11610007 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11610009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161000c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161000f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11610012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610015 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11610018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161001a jne 0x1160fffe */
  if (!C.zf) goto L_1160fffe;
  /* 1161001c jmp 0x11610027 */
  goto L_11610027;
L_1161001e:;
  /* 1161001e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610024 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11610027:;
  /* 11610027 jmp 0x1160ffb4 */
  goto L_1160ffb4;
L_11610029:;
  /* 11610029 mov esp, ebp */
  ESP = (EBP);
  /* 1161002b pop ebp */
  EBP = (pop32());
  /* 1161002c ret  */
  ESPCHK(0x1160ffb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010030 @ 0x11610030 (304 bytes, 85 insns) */
void f_11610030(void) {
  FTRACE(0x11610030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610030 push ebp */
  push32((uint32_t)(EBP));
  /* 11610031 mov ebp, esp */
  EBP = (ESP);
  /* 11610033 push ecx */
  push32((uint32_t)(ECX));
  /* 11610034 cmp dword ptr [0x11630944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161003b je 0x116100fc */
  if (C.zf) goto L_116100fc;
  /* 11610041 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11610043 push 0x1162c0a8 */
  push32((uint32_t)(0x1162c0a8u));
  /* 11610048 push 2 */
  push32((uint32_t)(0x2u));
  /* 1161004a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1161004c push 1 */
  push32((uint32_t)(0x1u));
  /* 1161004e call 0x11604fc0 */
  push32(0x11610053u); f_11604fc0();
  /* 11610053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610056 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11610059 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161005d jne 0x11610069 */
  if (!C.zf) goto L_11610069;
  /* 1161005f mov eax, 1 */
  EAX = (0x1u);
  /* 11610064 jmp 0x1161015c */
  goto L_1161015c;
L_11610069:;
  /* 11610069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161006c push eax */
  push32((uint32_t)(EAX));
  /* 1161006d call 0x11610160 */
  push32(0x11610072u); f_11610160();
  /* 11610072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610077 je 0x1161009d */
  if (C.zf) goto L_1161009d;
  /* 11610079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161007c push ecx */
  push32((uint32_t)(ECX));
  /* 1161007d call 0x116103f0 */
  push32(0x11610082u); f_116103f0();
  /* 11610082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610085 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610087 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161008a push edx */
  push32((uint32_t)(EDX));
  /* 1161008b call 0x11605640 */
  push32(0x11610090u); f_11605640();
  /* 11610090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610093 mov eax, 1 */
  EAX = (0x1u);
  /* 11610098 jmp 0x1161015c */
  goto L_1161015c;
L_1161009d:;
  /* 1161009d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116100a0 mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 116100a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116100a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116100aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116100ad mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 116100b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116100b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116100b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116100bc mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 116100c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116100c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116100c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116100cb mov dword ptr [0x1162fd88], eax */
  w32((uint32_t)(0x1162fd88), (EAX));
  /* 116100d0 mov ecx, dword ptr [0x1163097c] */
  ECX = (r32((uint32_t)(0x1163097c)));
  /* 116100d6 push ecx */
  push32((uint32_t)(ECX));
  /* 116100d7 call 0x116103f0 */
  push32(0x116100dcu); f_116103f0();
  /* 116100dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116100df push 2 */
  push32((uint32_t)(0x2u));
  /* 116100e1 mov edx, dword ptr [0x1163097c] */
  EDX = (r32((uint32_t)(0x1163097c)));
  /* 116100e7 push edx */
  push32((uint32_t)(EDX));
  /* 116100e8 call 0x11605640 */
  push32(0x116100edu); f_11605640();
  /* 116100ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116100f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116100f3 mov dword ptr [0x1163097c], eax */
  w32((uint32_t)(0x1163097c), (EAX));
  /* 116100f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116100fa jmp 0x1161015c */
  goto L_1161015c;
L_116100fc:;
  /* 116100fc mov ecx, dword ptr [0x1162fd88] */
  ECX = (r32((uint32_t)(0x1162fd88)));
  /* 11610102 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11610104 mov dword ptr [0x1162fd58], edx */
  w32((uint32_t)(0x1162fd58), (EDX));
  /* 1161010a mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 1161010f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11610112 mov dword ptr [0x1162fd5c], ecx */
  w32((uint32_t)(0x1162fd5c), (ECX));
  /* 11610118 mov edx, dword ptr [0x1162fd88] */
  EDX = (r32((uint32_t)(0x1162fd88)));
  /* 1161011e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11610121 mov dword ptr [0x1162fd60], eax */
  w32((uint32_t)(0x1162fd60), (EAX));
  /* 11610126 mov dword ptr [0x1162fd88], 0x1162fd58 */
  w32((uint32_t)(0x1162fd88), (0x1162fd58u));
  /* 11610130 mov ecx, dword ptr [0x1163097c] */
  ECX = (r32((uint32_t)(0x1163097c)));
  /* 11610136 push ecx */
  push32((uint32_t)(ECX));
  /* 11610137 call 0x116103f0 */
  push32(0x1161013cu); f_116103f0();
  /* 1161013c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161013f push 2 */
  push32((uint32_t)(0x2u));
  /* 11610141 mov edx, dword ptr [0x1163097c] */
  EDX = (r32((uint32_t)(0x1163097c)));
  /* 11610147 push edx */
  push32((uint32_t)(EDX));
  /* 11610148 call 0x11605640 */
  push32(0x1161014du); f_11605640();
  /* 1161014d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610150 mov dword ptr [0x1163097c], 0 */
  w32((uint32_t)(0x1163097c), (0x0u));
  /* 1161015a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1161015c:;
  /* 1161015c mov esp, ebp */
  ESP = (EBP);
  /* 1161015e pop ebp */
  EBP = (pop32());
  /* 1161015f ret  */
  ESPCHK(0x11610030u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x11610160 (525 bytes, 200 insns) */
void f_11610160(void) {
  FTRACE(0x11610160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610160 push ebp */
  push32((uint32_t)(EBP));
  /* 11610161 mov ebp, esp */
  EBP = (ESP);
  /* 11610163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610166 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1161016d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161016f mov ax, word ptr [0x1163099c] */
  AX = (r16((uint32_t)(0x1163099c)));
  /* 11610175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11610178 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161017c jne 0x11610186 */
  if (!C.zf) goto L_11610186;
  /* 1161017e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11610181 jmp 0x11610369 */
  goto L_11610369;
L_11610186:;
  /* 11610186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610189 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161018c push ecx */
  push32((uint32_t)(ECX));
  /* 1161018d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1161018f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610192 push edx */
  push32((uint32_t)(EDX));
  /* 11610193 push 1 */
  push32((uint32_t)(0x1u));
  /* 11610195 call 0x11612d70 */
  push32(0x1161019au); f_11612d70();
  /* 1161019a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161019d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116101a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116101a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116101a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116101a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116101ab push edx */
  push32((uint32_t)(EDX));
  /* 116101ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 116101ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116101b1 push eax */
  push32((uint32_t)(EAX));
  /* 116101b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116101b4 call 0x11612d70 */
  push32(0x116101b9u); f_11612d70();
  /* 116101b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116101bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116101bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116101c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116101c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116101c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116101ca push edx */
  push32((uint32_t)(EDX));
  /* 116101cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116101cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116101d0 push eax */
  push32((uint32_t)(EAX));
  /* 116101d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116101d3 call 0x11612d70 */
  push32(0x116101d8u); f_11612d70();
  /* 116101d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116101db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116101de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116101e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116101e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116101e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116101e9 push edx */
  push32((uint32_t)(EDX));
  /* 116101ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 116101ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116101ef push eax */
  push32((uint32_t)(EAX));
  /* 116101f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116101f2 call 0x11612d70 */
  push32(0x116101f7u); f_11612d70();
  /* 116101f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116101fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116101fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116101ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11610202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610205 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610208 push edx */
  push32((uint32_t)(EDX));
  /* 11610209 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1161020b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161020e push eax */
  push32((uint32_t)(EAX));
  /* 1161020f push 1 */
  push32((uint32_t)(0x1u));
  /* 11610211 call 0x11612d70 */
  push32(0x11610216u); f_11612d70();
  /* 11610216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1161021c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1161021e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11610221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610224 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11610227 push eax */
  push32((uint32_t)(EAX));
  /* 11610228 call 0x11610370 */
  push32(0x1161022du); f_11610370();
  /* 1161022d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610233 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610236 push ecx */
  push32((uint32_t)(ECX));
  /* 11610237 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11610239 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161023c push edx */
  push32((uint32_t)(EDX));
  /* 1161023d push 1 */
  push32((uint32_t)(0x1u));
  /* 1161023f call 0x11612d70 */
  push32(0x11610244u); f_11612d70();
  /* 11610244 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610247 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1161024a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1161024c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1161024f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610252 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610255 push edx */
  push32((uint32_t)(EDX));
  /* 11610256 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11610258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161025b push eax */
  push32((uint32_t)(EAX));
  /* 1161025c push 1 */
  push32((uint32_t)(0x1u));
  /* 1161025e call 0x11612d70 */
  push32(0x11610263u); f_11612d70();
  /* 11610263 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610266 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11610269 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1161026b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1161026e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610271 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610274 push edx */
  push32((uint32_t)(EDX));
  /* 11610275 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11610277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161027a push eax */
  push32((uint32_t)(EAX));
  /* 1161027b push 0 */
  push32((uint32_t)(0x0u));
  /* 1161027d call 0x11612d70 */
  push32(0x11610282u); f_11612d70();
  /* 11610282 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11610288 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1161028a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1161028d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610290 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610293 push edx */
  push32((uint32_t)(EDX));
  /* 11610294 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11610296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610299 push eax */
  push32((uint32_t)(EAX));
  /* 1161029a push 0 */
  push32((uint32_t)(0x0u));
  /* 1161029c call 0x11612d70 */
  push32(0x116102a1u); f_11612d70();
  /* 116102a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116102a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116102a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116102a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116102ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116102af add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116102b2 push edx */
  push32((uint32_t)(EDX));
  /* 116102b3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 116102b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116102b8 push eax */
  push32((uint32_t)(EAX));
  /* 116102b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116102bb call 0x11612d70 */
  push32(0x116102c0u); f_11612d70();
  /* 116102c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116102c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116102c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116102c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116102cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116102ce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116102d1 push edx */
  push32((uint32_t)(EDX));
  /* 116102d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 116102d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116102d7 push eax */
  push32((uint32_t)(EAX));
  /* 116102d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116102da call 0x11612d70 */
  push32(0x116102dfu); f_11612d70();
  /* 116102df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116102e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116102e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116102e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116102ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116102ed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116102f0 push edx */
  push32((uint32_t)(EDX));
  /* 116102f1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 116102f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116102f6 push eax */
  push32((uint32_t)(EAX));
  /* 116102f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116102f9 call 0x11612d70 */
  push32(0x116102feu); f_11612d70();
  /* 116102fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610301 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11610304 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11610306 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11610309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161030c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161030f push edx */
  push32((uint32_t)(EDX));
  /* 11610310 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11610312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610315 push eax */
  push32((uint32_t)(EAX));
  /* 11610316 push 0 */
  push32((uint32_t)(0x0u));
  /* 11610318 call 0x11612d70 */
  push32(0x1161031du); f_11612d70();
  /* 1161031d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610320 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11610323 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11610325 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11610328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161032b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161032e push edx */
  push32((uint32_t)(EDX));
  /* 1161032f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11610331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610334 push eax */
  push32((uint32_t)(EAX));
  /* 11610335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11610337 call 0x11612d70 */
  push32(0x1161033cu); f_11612d70();
  /* 1161033c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161033f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11610342 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11610344 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11610347 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161034a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161034d push edx */
  push32((uint32_t)(EDX));
  /* 1161034e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11610350 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610353 push eax */
  push32((uint32_t)(EAX));
  /* 11610354 push 0 */
  push32((uint32_t)(0x0u));
  /* 11610356 call 0x11612d70 */
  push32(0x1161035bu); f_11612d70();
  /* 1161035b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161035e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11610361 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11610363 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11610366 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11610369:;
  /* 11610369 mov esp, ebp */
  ESP = (EBP);
  /* 1161036b pop ebp */
  EBP = (pop32());
  /* 1161036c ret  */
  ESPCHK(0x11610160u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11610370 (125 bytes, 49 insns) */
void f_11610370(void) {
  FTRACE(0x11610370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610370 push ebp */
  push32((uint32_t)(EBP));
  /* 11610371 mov ebp, esp */
  EBP = (ESP);
  /* 11610373 push ecx */
  push32((uint32_t)(ECX));
L_11610374:;
  /* 11610374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610377 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1161037a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1161037c je 0x116103e9 */
  if (C.zf) goto L_116103e9;
  /* 1161037e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610381 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11610384 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610387 jl 0x116103ad */
  if ((C.sf!=C.of)) goto L_116103ad;
  /* 11610389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161038c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1161038f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610392 jg 0x116103ad */
  if ((!C.zf&&C.sf==C.of)) goto L_116103ad;
  /* 11610394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610397 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1161039a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161039d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116103a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116103a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116103a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116103a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116103ab jmp 0x116103e7 */
  goto L_116103e7;
L_116103ad:;
  /* 116103ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116103b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116103b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116103b6 jne 0x116103de */
  if (!C.zf) goto L_116103de;
  /* 116103b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116103bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116103be:;
  /* 116103be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116103c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116103c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116103c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116103c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116103cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116103cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116103d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116103d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116103d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116103da jne 0x116103be */
  if (!C.zf) goto L_116103be;
  /* 116103dc jmp 0x116103e7 */
  goto L_116103e7;
L_116103de:;
  /* 116103de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116103e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116103e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116103e7:;
  /* 116103e7 jmp 0x11610374 */
  goto L_11610374;
L_116103e9:;
  /* 116103e9 mov esp, ebp */
  ESP = (EBP);
  /* 116103eb pop ebp */
  EBP = (pop32());
  /* 116103ec ret  */
  ESPCHK(0x11610370u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x116103f0 (147 bytes, 52 insns) */
void f_116103f0(void) {
  FTRACE(0x116103f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116103f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116103f1 mov ebp, esp */
  EBP = (ESP);
  /* 116103f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116103f7 jne 0x116103fe */
  if (!C.zf) goto L_116103fe;
  /* 116103f9 jmp 0x11610481 */
  goto L_11610481;
L_116103fe:;
  /* 116103fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610401 cmp dword ptr [eax + 0xc], 0x116309d8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x116309d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610408 je 0x11610481 */
  if (C.zf) goto L_11610481;
  /* 1161040a push 2 */
  push32((uint32_t)(0x2u));
  /* 1161040c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161040f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11610412 push edx */
  push32((uint32_t)(EDX));
  /* 11610413 call 0x11605640 */
  push32(0x11610418u); f_11605640();
  /* 11610418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161041b push 2 */
  push32((uint32_t)(0x2u));
  /* 1161041d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610420 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11610423 push ecx */
  push32((uint32_t)(ECX));
  /* 11610424 call 0x11605640 */
  push32(0x11610429u); f_11605640();
  /* 11610429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161042c push 2 */
  push32((uint32_t)(0x2u));
  /* 1161042e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610431 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11610434 push eax */
  push32((uint32_t)(EAX));
  /* 11610435 call 0x11605640 */
  push32(0x1161043au); f_11605640();
  /* 1161043a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161043d push 2 */
  push32((uint32_t)(0x2u));
  /* 1161043f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610442 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11610445 push edx */
  push32((uint32_t)(EDX));
  /* 11610446 call 0x11605640 */
  push32(0x1161044bu); f_11605640();
  /* 1161044b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161044e push 2 */
  push32((uint32_t)(0x2u));
  /* 11610450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610453 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11610456 push ecx */
  push32((uint32_t)(ECX));
  /* 11610457 call 0x11605640 */
  push32(0x1161045cu); f_11605640();
  /* 1161045c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161045f push 2 */
  push32((uint32_t)(0x2u));
  /* 11610461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610464 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11610467 push eax */
  push32((uint32_t)(EAX));
  /* 11610468 call 0x11605640 */
  push32(0x1161046du); f_11605640();
  /* 1161046d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610470 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610475 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11610478 push edx */
  push32((uint32_t)(EDX));
  /* 11610479 call 0x11605640 */
  push32(0x1161047eu); f_11605640();
  /* 1161047e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11610481:;
  /* 11610481 pop ebp */
  EBP = (pop32());
  /* 11610482 ret  */
  ESPCHK(0x116103f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010490 @ 0x11610490 (928 bytes, 284 insns) */
void f_11610490(void) {
  FTRACE(0x11610490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610490 push ebp */
  push32((uint32_t)(EBP));
  /* 11610491 mov ebp, esp */
  EBP = (ESP);
  /* 11610493 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610496 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1161049d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 116104a4 cmp dword ptr [0x11630940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116104ab je 0x116107e1 */
  if (C.zf) goto L_116107e1;
  /* 116104b1 cmp dword ptr [0x11630950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116104b8 jne 0x116104e0 */
  if (!C.zf) goto L_116104e0;
  /* 116104ba push 0x11630950 */
  push32((uint32_t)(0x11630950u));
  /* 116104bf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 116104c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116104c6 mov ax, word ptr [0x11630994] */
  AX = (r16((uint32_t)(0x11630994)));
  /* 116104cc push eax */
  push32((uint32_t)(EAX));
  /* 116104cd push 0 */
  push32((uint32_t)(0x0u));
  /* 116104cf call 0x11612d70 */
  push32(0x116104d4u); f_11612d70();
  /* 116104d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116104d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116104d9 je 0x116104e0 */
  if (C.zf) goto L_116104e0;
  /* 116104db jmp 0x116107a2 */
  goto L_116107a2;
L_116104e0:;
  /* 116104e0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 116104e2 push 0x1162c0b4 */
  push32((uint32_t)(0x1162c0b4u));
  /* 116104e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116104e9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 116104ee call 0x11604bb0 */
  push32(0x116104f3u); f_11604bb0();
  /* 116104f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116104f6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116104f9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116104fb push 0x1162c0b4 */
  push32((uint32_t)(0x1162c0b4u));
  /* 11610500 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610502 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11610507 call 0x11604bb0 */
  push32(0x1161050cu); f_11604bb0();
  /* 1161050c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161050f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11610512 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11610514 push 0x1162c0b4 */
  push32((uint32_t)(0x1162c0b4u));
  /* 11610519 push 2 */
  push32((uint32_t)(0x2u));
  /* 1161051b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11610520 call 0x11604bb0 */
  push32(0x11610525u); f_11604bb0();
  /* 11610525 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610528 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1161052b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1161052d push 0x1162c0b4 */
  push32((uint32_t)(0x1162c0b4u));
  /* 11610532 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610534 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11610539 call 0x11604bb0 */
  push32(0x1161053eu); f_11604bb0();
  /* 1161053e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610541 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11610544 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610548 je 0x1161055c */
  if (C.zf) goto L_1161055c;
  /* 1161054a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161054e je 0x1161055c */
  if (C.zf) goto L_1161055c;
  /* 11610550 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610554 je 0x1161055c */
  if (C.zf) goto L_1161055c;
  /* 11610556 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161055a jne 0x11610561 */
  if (!C.zf) goto L_11610561;
L_1161055c:;
  /* 1161055c jmp 0x116107a2 */
  goto L_116107a2;
L_11610561:;
  /* 11610561 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11610564 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11610567 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1161056e jmp 0x11610579 */
  goto L_11610579;
L_11610570:;
  /* 11610570 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11610573 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610576 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11610579:;
  /* 11610579 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610580 jge 0x11610595 */
  if ((C.sf==C.of)) goto L_11610595;
  /* 11610582 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11610585 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11610588 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1161058a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1161058d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610590 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11610593 jmp 0x11610570 */
  goto L_11610570;
L_11610595:;
  /* 11610595 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11610598 push eax */
  push32((uint32_t)(EAX));
  /* 11610599 mov ecx, dword ptr [0x11630950] */
  ECX = (r32((uint32_t)(0x11630950)));
  /* 1161059f push ecx */
  push32((uint32_t)(ECX));
  /* 116105a0 call dword ptr [0x11633330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633330))), 0x116105a6u);
  /* 116105a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116105a8 jne 0x116105af */
  if (!C.zf) goto L_116105af;
  /* 116105aa jmp 0x116107a2 */
  goto L_116107a2;
L_116105af:;
  /* 116105af cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116105b3 jbe 0x116105ba */
  if ((C.cf||C.zf)) goto L_116105ba;
  /* 116105b5 jmp 0x116107a2 */
  goto L_116107a2;
L_116105ba:;
  /* 116105ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116105bd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116105c3 mov dword ptr [0x1162eea4], edx */
  w32((uint32_t)(0x1162eea4), (EDX));
  /* 116105c9 cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116105d0 jle 0x11610629 */
  if ((C.zf||C.sf!=C.of)) goto L_11610629;
  /* 116105d2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 116105d5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116105d8 jmp 0x116105e3 */
  goto L_116105e3;
L_116105da:;
  /* 116105da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116105dd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116105e0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_116105e3:;
  /* 116105e3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116105e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116105e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116105ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116105ec je 0x11610629 */
  if (C.zf) goto L_11610629;
  /* 116105ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116105f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116105f3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 116105f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116105f8 je 0x11610629 */
  if (C.zf) goto L_11610629;
  /* 116105fa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116105fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116105ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11610601 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11610604 jmp 0x1161060f */
  goto L_1161060f;
L_11610606:;
  /* 11610606 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11610609 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161060c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1161060f:;
  /* 1161060f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11610612 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11610614 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11610617 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161061a jg 0x11610627 */
  if ((!C.zf&&C.sf==C.of)) goto L_11610627;
  /* 1161061c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1161061f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610622 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11610625 jmp 0x11610606 */
  goto L_11610606;
L_11610627:;
  /* 11610627 jmp 0x116105da */
  goto L_116105da;
L_11610629:;
  /* 11610629 push 0 */
  push32((uint32_t)(0x0u));
  /* 1161062b push 0 */
  push32((uint32_t)(0x0u));
  /* 1161062d push 0 */
  push32((uint32_t)(0x0u));
  /* 1161062f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11610632 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610635 push eax */
  push32((uint32_t)(EAX));
  /* 11610636 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1161063b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1161063e push ecx */
  push32((uint32_t)(ECX));
  /* 1161063f push 1 */
  push32((uint32_t)(0x1u));
  /* 11610641 call 0x1160cde0 */
  push32(0x11610646u); f_1160cde0();
  /* 11610646 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161064b jne 0x11610652 */
  if (!C.zf) goto L_11610652;
  /* 1161064d jmp 0x116107a2 */
  goto L_116107a2;
L_11610652:;
  /* 11610652 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11610655 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1161065a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1161065d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11610660 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11610667 jmp 0x11610672 */
  goto L_11610672;
L_11610669:;
  /* 11610669 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1161066c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161066f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11610672:;
  /* 11610672 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610679 jge 0x11610690 */
  if ((C.sf==C.of)) goto L_11610690;
  /* 1161067b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1161067e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11610682 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11610685 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11610688 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161068b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1161068e jmp 0x11610669 */
  goto L_11610669;
L_11610690:;
  /* 11610690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11610692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11610694 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11610697 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161069a push edx */
  push32((uint32_t)(EDX));
  /* 1161069b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116106a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116106a3 push eax */
  push32((uint32_t)(EAX));
  /* 116106a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116106a6 call 0x11613010 */
  push32(0x116106abu); f_11613010();
  /* 116106ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116106ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116106b0 jne 0x116106b7 */
  if (!C.zf) goto L_116106b7;
  /* 116106b2 jmp 0x116107a2 */
  goto L_116107a2;
L_116106b7:;
  /* 116106b7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116106ba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 116106bf cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116106c6 jle 0x11610723 */
  if ((C.zf||C.sf!=C.of)) goto L_11610723;
  /* 116106c8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 116106cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116106ce jmp 0x116106d9 */
  goto L_116106d9;
L_116106d0:;
  /* 116106d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116106d3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116106d6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116106d9:;
  /* 116106d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116106dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116106de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116106e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116106e2 je 0x11610723 */
  if (C.zf) goto L_11610723;
  /* 116106e4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116106e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116106e9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116106ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116106ee je 0x11610723 */
  if (C.zf) goto L_11610723;
  /* 116106f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116106f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116106f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116106f7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116106fa jmp 0x11610705 */
  goto L_11610705;
L_116106fc:;
  /* 116106fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116106ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610702 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11610705:;
  /* 11610705 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11610708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161070a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1161070d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610710 jg 0x11610721 */
  if ((!C.zf&&C.sf==C.of)) goto L_11610721;
  /* 11610712 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11610715 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11610718 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1161071f jmp 0x116106fc */
  goto L_116106fc;
L_11610721:;
  /* 11610721 jmp 0x116106d0 */
  goto L_116106d0;
L_11610723:;
  /* 11610723 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11610726 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610729 mov dword ptr [0x1162ec98], eax */
  w32((uint32_t)(0x1162ec98), (EAX));
  /* 1161072e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11610731 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610734 mov dword ptr [0x1162ec9c], ecx */
  w32((uint32_t)(0x1162ec9c), (ECX));
  /* 1161073a cmp dword ptr [0x11630980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610741 je 0x11610754 */
  if (C.zf) goto L_11610754;
  /* 11610743 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610745 mov edx, dword ptr [0x11630980] */
  EDX = (r32((uint32_t)(0x11630980)));
  /* 1161074b push edx */
  push32((uint32_t)(EDX));
  /* 1161074c call 0x11605640 */
  push32(0x11610751u); f_11605640();
  /* 11610751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11610754:;
  /* 11610754 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11610757 mov dword ptr [0x11630980], eax */
  w32((uint32_t)(0x11630980), (EAX));
  /* 1161075c cmp dword ptr [0x11630984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610763 je 0x11610776 */
  if (C.zf) goto L_11610776;
  /* 11610765 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610767 mov ecx, dword ptr [0x11630984] */
  ECX = (r32((uint32_t)(0x11630984)));
  /* 1161076d push ecx */
  push32((uint32_t)(ECX));
  /* 1161076e call 0x11605640 */
  push32(0x11610773u); f_11605640();
  /* 11610773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11610776:;
  /* 11610776 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11610779 mov dword ptr [0x11630984], edx */
  w32((uint32_t)(0x11630984), (EDX));
  /* 1161077f push 2 */
  push32((uint32_t)(0x2u));
  /* 11610781 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11610784 push eax */
  push32((uint32_t)(EAX));
  /* 11610785 call 0x11605640 */
  push32(0x1161078au); f_11605640();
  /* 1161078a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161078d push 2 */
  push32((uint32_t)(0x2u));
  /* 1161078f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11610792 push ecx */
  push32((uint32_t)(ECX));
  /* 11610793 call 0x11605640 */
  push32(0x11610798u); f_11605640();
  /* 11610798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161079b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161079d jmp 0x1161082c */
  goto L_1161082c;
L_116107a2:;
  /* 116107a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116107a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116107a7 push edx */
  push32((uint32_t)(EDX));
  /* 116107a8 call 0x11605640 */
  push32(0x116107adu); f_11605640();
  /* 116107ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116107b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116107b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116107b5 push eax */
  push32((uint32_t)(EAX));
  /* 116107b6 call 0x11605640 */
  push32(0x116107bbu); f_11605640();
  /* 116107bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116107be push 2 */
  push32((uint32_t)(0x2u));
  /* 116107c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116107c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116107c4 call 0x11605640 */
  push32(0x116107c9u); f_11605640();
  /* 116107c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116107cc push 2 */
  push32((uint32_t)(0x2u));
  /* 116107ce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116107d1 push edx */
  push32((uint32_t)(EDX));
  /* 116107d2 call 0x11605640 */
  push32(0x116107d7u); f_11605640();
  /* 116107d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116107da mov eax, 1 */
  EAX = (0x1u);
  /* 116107df jmp 0x1161082c */
  goto L_1161082c;
L_116107e1:;
  /* 116107e1 mov dword ptr [0x1162ec98], 0x1162eca2 */
  w32((uint32_t)(0x1162ec98), (0x1162eca2u));
  /* 116107eb mov dword ptr [0x1162ec9c], 0x1162eca2 */
  w32((uint32_t)(0x1162ec9c), (0x1162eca2u));
  /* 116107f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116107f7 mov eax, dword ptr [0x11630980] */
  EAX = (r32((uint32_t)(0x11630980)));
  /* 116107fc push eax */
  push32((uint32_t)(EAX));
  /* 116107fd call 0x11605640 */
  push32(0x11610802u); f_11605640();
  /* 11610802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610805 push 2 */
  push32((uint32_t)(0x2u));
  /* 11610807 mov ecx, dword ptr [0x11630984] */
  ECX = (r32((uint32_t)(0x11630984)));
  /* 1161080d push ecx */
  push32((uint32_t)(ECX));
  /* 1161080e call 0x11605640 */
  push32(0x11610813u); f_11605640();
  /* 11610813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610816 mov dword ptr [0x11630980], 0 */
  w32((uint32_t)(0x11630980), (0x0u));
  /* 11610820 mov dword ptr [0x11630984], 0 */
  w32((uint32_t)(0x11630984), (0x0u));
  /* 1161082a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1161082c:;
  /* 1161082c mov esp, ebp */
  ESP = (EBP);
  /* 1161082e pop ebp */
  EBP = (pop32());
  /* 1161082f ret  */
  ESPCHK(0x11610490u, _esp0);
  ESP += 4; return;
}

/* FUN_10010830 @ 0x11610830 (7 bytes, 5 insns) */
void f_11610830(void) {
  FTRACE(0x11610830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610830 push ebp */
  push32((uint32_t)(EBP));
  /* 11610831 mov ebp, esp */
  EBP = (ESP);
  /* 11610833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610835 pop ebp */
  EBP = (pop32());
  /* 11610836 ret  */
  ESPCHK(0x11610830u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11610840 (129 bytes, 56 insns) */
void f_11610840(void) {
  FTRACE(0x11610840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610840 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11610844 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11610848 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1161084e jne 0x1161088c */
  if (!C.zf) goto L_1161088c;
L_11610850:;
  /* 11610850 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11610852 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11610854 jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 11610856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11610858 je 0x11610880 */
  if (C.zf) goto L_11610880;
  /* 1161085a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1161085d jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 1161085f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11610861 je 0x11610880 */
  if (C.zf) goto L_11610880;
  /* 11610863 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11610866 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11610869 jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 1161086b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1161086d je 0x11610880 */
  if (C.zf) goto L_11610880;
  /* 1161086f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11610872 jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 11610874 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610877 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161087a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1161087c jne 0x11610850 */
  if (!C.zf) goto L_11610850;
  /* 1161087e mov edi, edi */
  EDI = (EDI);
L_11610880:;
  /* 11610880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610882 ret  */
  ESPCHK(0x11610840u, _esp0);
  ESP += 4; return;
  /* 11610883 nop  */
  /* nop */
L_11610884:;
  /* 11610884 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610886 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11610888 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11610889 ret  */
  ESPCHK(0x11610840u, _esp0);
  ESP += 4; return;
  /* 1161088a mov edi, edi */
  EDI = (EDI);
L_1161088c:;
  /* 1161088c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11610892 je 0x116108a8 */
  if (C.zf) goto L_116108a8;
  /* 11610894 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11610896 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11610897 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11610899 jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 1161089b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1161089c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1161089e je 0x11610880 */
  if (C.zf) goto L_11610880;
  /* 116108a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 116108a6 je 0x11610850 */
  if (C.zf) goto L_11610850;
L_116108a8:;
  /* 116108a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116108ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116108ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116108b0 jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 116108b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116108b4 je 0x11610880 */
  if (C.zf) goto L_11610880;
  /* 116108b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116108b9 jne 0x11610884 */
  if (!C.zf) goto L_11610884;
  /* 116108bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116108bd je 0x11610880 */
  if (C.zf) goto L_11610880;
  /* 116108bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116108c2 jmp 0x11610850 */
  goto L_11610850;
}

/* FUN_100108d0 @ 0x116108d0 (62 bytes, 35 insns) */
void f_116108d0(void) {
  FTRACE(0x116108d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116108d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116108d1 mov ebp, esp */
  EBP = (ESP);
  /* 116108d3 push esi */
  push32((uint32_t)(ESI));
  /* 116108d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116108d6 push eax */
  push32((uint32_t)(EAX));
  /* 116108d7 push eax */
  push32((uint32_t)(EAX));
  /* 116108d8 push eax */
  push32((uint32_t)(EAX));
  /* 116108d9 push eax */
  push32((uint32_t)(EAX));
  /* 116108da push eax */
  push32((uint32_t)(EAX));
  /* 116108db push eax */
  push32((uint32_t)(EAX));
  /* 116108dc push eax */
  push32((uint32_t)(EAX));
  /* 116108dd push eax */
  push32((uint32_t)(EAX));
  /* 116108de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116108e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116108e4:;
  /* 116108e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116108e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116108e8 je 0x116108f1 */
  if (C.zf) goto L_116108f1;
  /* 116108ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116108eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x116108eb");
  /* 116108ef jmp 0x116108e4 */
  goto L_116108e4;
L_116108f1:;
  /* 116108f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 116108f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116108f7 nop  */
  /* nop */
L_116108f8:;
  /* 116108f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116108f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116108fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116108fd je 0x11610906 */
  if (C.zf) goto L_11610906;
  /* 116108ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11610900 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11610900");
  /* 11610904 jae 0x116108f8 */
  if (!C.cf) goto L_116108f8;
L_11610906:;
  /* 11610906 mov eax, ecx */
  EAX = (ECX);
  /* 11610908 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161090b pop esi */
  ESI = (pop32());
  /* 1161090c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1161090d ret  */
  ESPCHK(0x116108d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11610910 (56 bytes, 31 insns) */
void f_11610910(void) {
  FTRACE(0x11610910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610910 push ebp */
  push32((uint32_t)(EBP));
  /* 11610911 mov ebp, esp */
  EBP = (ESP);
  /* 11610913 push edi */
  push32((uint32_t)(EDI));
  /* 11610914 push esi */
  push32((uint32_t)(ESI));
  /* 11610915 push ebx */
  push32((uint32_t)(EBX));
  /* 11610916 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11610919 jecxz 0x11610941 */
  x86_unimpl("jecxz @ 0x11610919");
  /* 1161091b mov ebx, ecx */
  EBX = (ECX);
  /* 1161091d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11610920 mov esi, edi */
  ESI = (EDI);
  /* 11610922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610924 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11610926 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11610928 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161092a mov edi, esi */
  EDI = (ESI);
  /* 1161092c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1161092f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11610931 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11610934 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11610936 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11610939 ja 0x1161093f */
  if ((!C.cf&&!C.zf)) goto L_1161093f;
  /* 1161093b je 0x11610941 */
  if (C.zf) goto L_11610941;
  /* 1161093d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1161093e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1161093f:;
  /* 1161093f not ecx */
  ECX = (~(ECX));
L_11610941:;
  /* 11610941 mov eax, ecx */
  EAX = (ECX);
  /* 11610943 pop ebx */
  EBX = (pop32());
  /* 11610944 pop esi */
  ESI = (pop32());
  /* 11610945 pop edi */
  EDI = (pop32());
  /* 11610946 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11610947 ret  */
  ESPCHK(0x11610910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010950 @ 0x11610950 (58 bytes, 32 insns) */
void f_11610950(void) {
  FTRACE(0x11610950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610950 push ebp */
  push32((uint32_t)(EBP));
  /* 11610951 mov ebp, esp */
  EBP = (ESP);
  /* 11610953 push esi */
  push32((uint32_t)(ESI));
  /* 11610954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610956 push eax */
  push32((uint32_t)(EAX));
  /* 11610957 push eax */
  push32((uint32_t)(EAX));
  /* 11610958 push eax */
  push32((uint32_t)(EAX));
  /* 11610959 push eax */
  push32((uint32_t)(EAX));
  /* 1161095a push eax */
  push32((uint32_t)(EAX));
  /* 1161095b push eax */
  push32((uint32_t)(EAX));
  /* 1161095c push eax */
  push32((uint32_t)(EAX));
  /* 1161095d push eax */
  push32((uint32_t)(EAX));
  /* 1161095e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11610961 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11610964:;
  /* 11610964 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11610966 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11610968 je 0x11610971 */
  if (C.zf) goto L_11610971;
  /* 1161096a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1161096b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1161096b");
  /* 1161096f jmp 0x11610964 */
  goto L_11610964;
L_11610971:;
  /* 11610971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11610974:;
  /* 11610974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11610976 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11610978 je 0x11610984 */
  if (C.zf) goto L_11610984;
  /* 1161097a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1161097b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1161097b");
  /* 1161097f jae 0x11610974 */
  if (!C.cf) goto L_11610974;
  /* 11610981 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11610984:;
  /* 11610984 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610987 pop esi */
  ESI = (pop32());
  /* 11610988 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11610989 ret  */
  ESPCHK(0x11610950u, _esp0);
  ESP += 4; return;
}

/* FUN_10010990 @ 0x11610990 (512 bytes, 147 insns) */
void f_11610990(void) {
  FTRACE(0x11610990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610990 push ebp */
  push32((uint32_t)(EBP));
  /* 11610991 mov ebp, esp */
  EBP = (ESP);
  /* 11610993 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610996 cmp dword ptr [0x116309cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161099d jne 0x116109c2 */
  if (!C.zf) goto L_116109c2;
  /* 1161099f call 0x11611460 */
  push32(0x116109a4u); f_11611460();
  /* 116109a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116109a6 je 0x116109b2 */
  if (C.zf) goto L_116109b2;
  /* 116109a8 mov eax, dword ptr [0x116332f4] */
  EAX = (r32((uint32_t)(0x116332f4)));
  /* 116109ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116109b0 jmp 0x116109b9 */
  goto L_116109b9;
L_116109b2:;
  /* 116109b2 mov dword ptr [ebp - 8], 0x116114b0 */
  w32((uint32_t)(EBP + -0x8), (0x116114b0u));
L_116109b9:;
  /* 116109b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116109bc mov dword ptr [0x116309cc], ecx */
  w32((uint32_t)(0x116309cc), (ECX));
L_116109c2:;
  /* 116109c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116109c6 jne 0x116109d2 */
  if (!C.zf) goto L_116109d2;
  /* 116109c8 call 0x116112b0 */
  push32(0x116109cdu); f_116112b0();
  /* 116109cd jmp 0x11610a9e */
  goto L_11610a9e;
L_116109d2:;
  /* 116109d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116109d5 mov dword ptr [0x116309bc], edx */
  w32((uint32_t)(0x116309bc), (EDX));
  /* 116109db cmp dword ptr [0x116309bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116109e2 je 0x11610a04 */
  if (C.zf) goto L_11610a04;
  /* 116109e4 mov eax, dword ptr [0x116309bc] */
  EAX = (r32((uint32_t)(0x116309bc)));
  /* 116109e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116109ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116109ee je 0x11610a04 */
  if (C.zf) goto L_11610a04;
  /* 116109f0 push 0x116309bc */
  push32((uint32_t)(0x116309bcu));
  /* 116109f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116109f7 push 0x1162fa90 */
  push32((uint32_t)(0x1162fa90u));
  /* 116109fc call 0x11610b90 */
  push32(0x11610a01u); f_11610b90();
  /* 11610a01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11610a04:;
  /* 11610a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610a07 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610a0a mov dword ptr [0x116309c0], edx */
  w32((uint32_t)(0x116309c0), (EDX));
  /* 11610a10 cmp dword ptr [0x116309c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610a17 je 0x11610a39 */
  if (C.zf) goto L_11610a39;
  /* 11610a19 mov eax, dword ptr [0x116309c0] */
  EAX = (r32((uint32_t)(0x116309c0)));
  /* 11610a1e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11610a21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11610a23 je 0x11610a39 */
  if (C.zf) goto L_11610a39;
  /* 11610a25 push 0x116309c0 */
  push32((uint32_t)(0x116309c0u));
  /* 11610a2a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11610a2c push 0x1162f9d8 */
  push32((uint32_t)(0x1162f9d8u));
  /* 11610a31 call 0x11610b90 */
  push32(0x11610a36u); f_11610b90();
  /* 11610a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11610a39:;
  /* 11610a39 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
  /* 11610a43 cmp dword ptr [0x116309bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610a4a je 0x11610a7d */
  if (C.zf) goto L_11610a7d;
  /* 11610a4c mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 11610a52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11610a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610a57 je 0x11610a7d */
  if (C.zf) goto L_11610a7d;
  /* 11610a59 cmp dword ptr [0x116309c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610a60 je 0x11610a76 */
  if (C.zf) goto L_11610a76;
  /* 11610a62 mov ecx, dword ptr [0x116309c0] */
  ECX = (r32((uint32_t)(0x116309c0)));
  /* 11610a68 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11610a6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11610a6d je 0x11610a76 */
  if (C.zf) goto L_11610a76;
  /* 11610a6f call 0x11610c20 */
  push32(0x11610a74u); f_11610c20();
  /* 11610a74 jmp 0x11610a7b */
  goto L_11610a7b;
L_11610a76:;
  /* 11610a76 call 0x11611010 */
  push32(0x11610a7bu); f_11611010();
L_11610a7b:;
  /* 11610a7b jmp 0x11610a9e */
  goto L_11610a9e;
L_11610a7d:;
  /* 11610a7d cmp dword ptr [0x116309c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610a84 je 0x11610a99 */
  if (C.zf) goto L_11610a99;
  /* 11610a86 mov eax, dword ptr [0x116309c0] */
  EAX = (r32((uint32_t)(0x116309c0)));
  /* 11610a8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11610a8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11610a90 je 0x11610a99 */
  if (C.zf) goto L_11610a99;
  /* 11610a92 call 0x116111b0 */
  push32(0x11610a97u); f_116111b0();
  /* 11610a97 jmp 0x11610a9e */
  goto L_11610a9e;
L_11610a99:;
  /* 11610a99 call 0x116112b0 */
  push32(0x11610a9eu); f_116112b0();
L_11610a9e:;
  /* 11610a9e cmp dword ptr [0x116309c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610aa5 jne 0x11610aae */
  if (!C.zf) goto L_11610aae;
  /* 11610aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610aa9 jmp 0x11610b8c */
  goto L_11610b8c;
L_11610aae:;
  /* 11610aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610ab1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610ab7 push edx */
  push32((uint32_t)(EDX));
  /* 11610ab8 call 0x116112e0 */
  push32(0x11610abdu); f_116112e0();
  /* 11610abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610ac0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11610ac3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610ac7 je 0x11610adc */
  if (C.zf) goto L_11610adc;
  /* 11610ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610acc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11610ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11610ad2 call dword ptr [0x116332f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f8))), 0x11610ad8u);
  /* 11610ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610ada jne 0x11610ae3 */
  if (!C.zf) goto L_11610ae3;
L_11610adc:;
  /* 11610adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610ade jmp 0x11610b8c */
  goto L_11610b8c;
L_11610ae3:;
  /* 11610ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11610ae5 mov ecx, dword ptr [0x116309ac] */
  ECX = (r32((uint32_t)(0x116309ac)));
  /* 11610aeb push ecx */
  push32((uint32_t)(ECX));
  /* 11610aec call dword ptr [0x116332fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332fc))), 0x11610af2u);
  /* 11610af2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610af4 jne 0x11610afd */
  if (!C.zf) goto L_11610afd;
  /* 11610af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610af8 jmp 0x11610b8c */
  goto L_11610b8c;
L_11610afd:;
  /* 11610afd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610b01 je 0x11610b28 */
  if (C.zf) goto L_11610b28;
  /* 11610b03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11610b06 mov ax, word ptr [0x116309ac] */
  AX = (r16((uint32_t)(0x116309ac)));
  /* 11610b0c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11610b0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11610b12 mov dx, word ptr [0x116309c8] */
  DX = (r16((uint32_t)(0x116309c8)));
  /* 11610b19 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11610b1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11610b20 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11610b24 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11610b28:;
  /* 11610b28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610b2c je 0x11610b87 */
  if (C.zf) goto L_11610b87;
  /* 11610b2e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11610b30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11610b33 push edx */
  push32((uint32_t)(EDX));
  /* 11610b34 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11610b39 mov eax, dword ptr [0x116309ac] */
  EAX = (r32((uint32_t)(0x116309ac)));
  /* 11610b3e push eax */
  push32((uint32_t)(EAX));
  /* 11610b3f call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11610b45u);
  /* 11610b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610b47 jne 0x11610b4d */
  if (!C.zf) goto L_11610b4d;
  /* 11610b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610b4b jmp 0x11610b8c */
  goto L_11610b8c;
L_11610b4d:;
  /* 11610b4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11610b4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11610b52 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610b55 push ecx */
  push32((uint32_t)(ECX));
  /* 11610b56 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11610b5b mov edx, dword ptr [0x116309c8] */
  EDX = (r32((uint32_t)(0x116309c8)));
  /* 11610b61 push edx */
  push32((uint32_t)(EDX));
  /* 11610b62 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11610b68u);
  /* 11610b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610b6a jne 0x11610b70 */
  if (!C.zf) goto L_11610b70;
  /* 11610b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11610b6e jmp 0x11610b8c */
  goto L_11610b8c;
L_11610b70:;
  /* 11610b70 push 0xa */
  push32((uint32_t)(0xau));
  /* 11610b72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11610b75 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610b7a push eax */
  push32((uint32_t)(EAX));
  /* 11610b7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610b7e push ecx */
  push32((uint32_t)(ECX));
  /* 11610b7f call 0x116076f0 */
  push32(0x11610b84u); f_116076f0();
  /* 11610b84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11610b87:;
  /* 11610b87 mov eax, 1 */
  EAX = (0x1u);
L_11610b8c:;
  /* 11610b8c mov esp, ebp */
  ESP = (EBP);
  /* 11610b8e pop ebp */
  EBP = (pop32());
  /* 11610b8f ret  */
  ESPCHK(0x11610990u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b90 @ 0x11610b90 (130 bytes, 47 insns) */
void f_11610b90(void) {
  FTRACE(0x11610b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11610b91 mov ebp, esp */
  EBP = (ESP);
  /* 11610b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610b96 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11610b9d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11610ba4:;
  /* 11610ba4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11610ba7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610baa jg 0x11610c0e */
  if ((!C.zf&&C.sf==C.of)) goto L_11610c0e;
  /* 11610bac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610bb0 je 0x11610c0e */
  if (C.zf) goto L_11610c0e;
  /* 11610bb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11610bb5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610bb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11610bb9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610bbb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11610bbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11610bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610bc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610bc6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11610bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11610bca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11610bcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11610bcf push edx */
  push32((uint32_t)(EDX));
  /* 11610bd0 call 0x11613280 */
  push32(0x11610bd5u); f_11613280();
  /* 11610bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610bd8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11610bdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610bdf jne 0x11610bf2 */
  if (!C.zf) goto L_11610bf2;
  /* 11610be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610be7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11610beb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11610bee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11610bf0 jmp 0x11610c0c */
  goto L_11610c0c;
L_11610bf2:;
  /* 11610bf2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610bf6 jge 0x11610c03 */
  if ((C.sf==C.of)) goto L_11610c03;
  /* 11610bf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610bfb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610bfe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11610c01 jmp 0x11610c0c */
  goto L_11610c0c;
L_11610c03:;
  /* 11610c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610c06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610c09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11610c0c:;
  /* 11610c0c jmp 0x11610ba4 */
  goto L_11610ba4;
L_11610c0e:;
  /* 11610c0e mov esp, ebp */
  ESP = (EBP);
  /* 11610c10 pop ebp */
  EBP = (pop32());
  /* 11610c11 ret  */
  ESPCHK(0x11610b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x11610c20 (186 bytes, 50 insns) */
void f_11610c20(void) {
  FTRACE(0x11610c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11610c21 mov ebp, esp */
  EBP = (ESP);
  /* 11610c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11610c24 mov eax, dword ptr [0x116309bc] */
  EAX = (r32((uint32_t)(0x116309bc)));
  /* 11610c29 push eax */
  push32((uint32_t)(EAX));
  /* 11610c2a call 0x116079e0 */
  push32(0x11610c2fu); f_116079e0();
  /* 11610c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610c32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11610c34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610c37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11610c3a mov dword ptr [0x116309b8], ecx */
  w32((uint32_t)(0x116309b8), (ECX));
  /* 11610c40 mov edx, dword ptr [0x116309c0] */
  EDX = (r32((uint32_t)(0x116309c0)));
  /* 11610c46 push edx */
  push32((uint32_t)(EDX));
  /* 11610c47 call 0x116079e0 */
  push32(0x11610c4cu); f_116079e0();
  /* 11610c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610c4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11610c51 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610c54 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11610c57 mov dword ptr [0x116309b0], ecx */
  w32((uint32_t)(0x116309b0), (ECX));
  /* 11610c5d mov dword ptr [0x116309ac], 0 */
  w32((uint32_t)(0x116309ac), (0x0u));
  /* 11610c67 cmp dword ptr [0x116309b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610c6e je 0x11610c79 */
  if (C.zf) goto L_11610c79;
  /* 11610c70 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11610c77 jmp 0x11610c8b */
  goto L_11610c8b;
L_11610c79:;
  /* 11610c79 mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 11610c7f push edx */
  push32((uint32_t)(EDX));
  /* 11610c80 call 0x116116c0 */
  push32(0x11610c85u); f_116116c0();
  /* 11610c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610c88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11610c8b:;
  /* 11610c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11610c8e mov dword ptr [0x116309b4], eax */
  w32((uint32_t)(0x116309b4), (EAX));
  /* 11610c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11610c95 push 0x11610ce0 */
  push32((uint32_t)(0x11610ce0u));
  /* 11610c9a call dword ptr [0x116332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f0))), 0x11610ca0u);
  /* 11610ca0 mov ecx, dword ptr [0x116309c4] */
  ECX = (r32((uint32_t)(0x116309c4)));
  /* 11610ca6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11610cac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11610cae je 0x11610ccc */
  if (C.zf) goto L_11610ccc;
  /* 11610cb0 mov edx, dword ptr [0x116309c4] */
  EDX = (r32((uint32_t)(0x116309c4)));
  /* 11610cb6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11610cbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11610cbe je 0x11610ccc */
  if (C.zf) goto L_11610ccc;
  /* 11610cc0 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610cc5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11610cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610cca jne 0x11610cd6 */
  if (!C.zf) goto L_11610cd6;
L_11610ccc:;
  /* 11610ccc mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
L_11610cd6:;
  /* 11610cd6 mov esp, ebp */
  ESP = (EBP);
  /* 11610cd8 pop ebp */
  EBP = (pop32());
  /* 11610cd9 ret  */
  ESPCHK(0x11610c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ce0 @ 0x11610ce0 (804 bytes, 220 insns) */
void f_11610ce0(void) {
  FTRACE(0x11610ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11610ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11610ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11610ce3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11610ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11610cea call 0x11611640 */
  push32(0x11610cefu); f_11611640();
  /* 11610cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610cf2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11610cf5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11610cf7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11610cfa push ecx */
  push32((uint32_t)(ECX));
  /* 11610cfb mov edx, dword ptr [0x116309b0] */
  EDX = (r32((uint32_t)(0x116309b0)));
  /* 11610d01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11610d03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610d05 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11610d0b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610d11 push edx */
  push32((uint32_t)(EDX));
  /* 11610d12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610d15 push eax */
  push32((uint32_t)(EAX));
  /* 11610d16 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11610d1cu);
  /* 11610d1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610d1e jne 0x11610d34 */
  if (!C.zf) goto L_11610d34;
  /* 11610d20 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
  /* 11610d2a mov eax, 1 */
  EAX = (0x1u);
  /* 11610d2f jmp 0x11610ffe */
  goto L_11610ffe;
L_11610d34:;
  /* 11610d34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11610d37 push ecx */
  push32((uint32_t)(ECX));
  /* 11610d38 mov edx, dword ptr [0x116309c0] */
  EDX = (r32((uint32_t)(0x116309c0)));
  /* 11610d3e push edx */
  push32((uint32_t)(EDX));
  /* 11610d3f call 0x11613280 */
  push32(0x11610d44u); f_11613280();
  /* 11610d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610d47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610d49 jne 0x11610e6f */
  if (!C.zf) goto L_11610e6f;
  /* 11610d4f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11610d51 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11610d54 push eax */
  push32((uint32_t)(EAX));
  /* 11610d55 mov ecx, dword ptr [0x116309b8] */
  ECX = (r32((uint32_t)(0x116309b8)));
  /* 11610d5b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11610d5d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610d5f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11610d65 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610d6b push ecx */
  push32((uint32_t)(ECX));
  /* 11610d6c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610d6f push edx */
  push32((uint32_t)(EDX));
  /* 11610d70 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11610d76u);
  /* 11610d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610d78 jne 0x11610d8e */
  if (!C.zf) goto L_11610d8e;
  /* 11610d7a mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
  /* 11610d84 mov eax, 1 */
  EAX = (0x1u);
  /* 11610d89 jmp 0x11610ffe */
  goto L_11610ffe;
L_11610d8e:;
  /* 11610d8e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11610d91 push eax */
  push32((uint32_t)(EAX));
  /* 11610d92 mov ecx, dword ptr [0x116309bc] */
  ECX = (r32((uint32_t)(0x116309bc)));
  /* 11610d98 push ecx */
  push32((uint32_t)(ECX));
  /* 11610d99 call 0x11613280 */
  push32(0x11610d9eu); f_11613280();
  /* 11610d9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610da3 jne 0x11610dd0 */
  if (!C.zf) goto L_11610dd0;
  /* 11610da5 mov edx, dword ptr [0x116309c4] */
  EDX = (r32((uint32_t)(0x116309c4)));
  /* 11610dab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11610db1 mov dword ptr [0x116309c4], edx */
  w32((uint32_t)(0x116309c4), (EDX));
  /* 11610db7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610dba mov dword ptr [0x116309c8], eax */
  w32((uint32_t)(0x116309c8), (EAX));
  /* 11610dbf mov ecx, dword ptr [0x116309c8] */
  ECX = (r32((uint32_t)(0x116309c8)));
  /* 11610dc5 mov dword ptr [0x116309ac], ecx */
  w32((uint32_t)(0x116309ac), (ECX));
  /* 11610dcb jmp 0x11610e6f */
  goto L_11610e6f;
L_11610dd0:;
  /* 11610dd0 mov edx, dword ptr [0x116309c4] */
  EDX = (r32((uint32_t)(0x116309c4)));
  /* 11610dd6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11610dd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11610ddb jne 0x11610e6f */
  if (!C.zf) goto L_11610e6f;
  /* 11610de1 cmp dword ptr [0x116309b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610de8 je 0x11610e3d */
  if (C.zf) goto L_11610e3d;
  /* 11610dea mov eax, dword ptr [0x116309b4] */
  EAX = (r32((uint32_t)(0x116309b4)));
  /* 11610def push eax */
  push32((uint32_t)(EAX));
  /* 11610df0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11610df3 push ecx */
  push32((uint32_t)(ECX));
  /* 11610df4 mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 11610dfa push edx */
  push32((uint32_t)(EDX));
  /* 11610dfb call 0x11613350 */
  push32(0x11610e00u); f_11613350();
  /* 11610e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610e05 jne 0x11610e3d */
  if (!C.zf) goto L_11610e3d;
  /* 11610e07 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610e0c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11610e0e mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
  /* 11610e13 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610e16 mov dword ptr [0x116309c8], ecx */
  w32((uint32_t)(0x116309c8), (ECX));
  /* 11610e1c mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 11610e22 push edx */
  push32((uint32_t)(EDX));
  /* 11610e23 call 0x116079e0 */
  push32(0x11610e28u); f_116079e0();
  /* 11610e28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610e2b cmp eax, dword ptr [0x116309b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116309b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610e31 jne 0x11610e3b */
  if (!C.zf) goto L_11610e3b;
  /* 11610e33 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610e36 mov dword ptr [0x116309ac], eax */
  w32((uint32_t)(0x116309ac), (EAX));
L_11610e3b:;
  /* 11610e3b jmp 0x11610e6f */
  goto L_11610e6f;
L_11610e3d:;
  /* 11610e3d mov ecx, dword ptr [0x116309c4] */
  ECX = (r32((uint32_t)(0x116309c4)));
  /* 11610e43 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11610e46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11610e48 jne 0x11610e6f */
  if (!C.zf) goto L_11610e6f;
  /* 11610e4a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610e4d push edx */
  push32((uint32_t)(EDX));
  /* 11610e4e call 0x11611380 */
  push32(0x11610e53u); f_11611380();
  /* 11610e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610e58 je 0x11610e6f */
  if (C.zf) goto L_11610e6f;
  /* 11610e5a mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610e5f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11610e61 mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
  /* 11610e66 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610e69 mov dword ptr [0x116309c8], ecx */
  w32((uint32_t)(0x116309c8), (ECX));
L_11610e6f:;
  /* 11610e6f mov edx, dword ptr [0x116309c4] */
  EDX = (r32((uint32_t)(0x116309c4)));
  /* 11610e75 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11610e7b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610e81 je 0x11610ff1 */
  if (C.zf) goto L_11610ff1;
  /* 11610e87 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11610e89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11610e8c push eax */
  push32((uint32_t)(EAX));
  /* 11610e8d mov ecx, dword ptr [0x116309b8] */
  ECX = (r32((uint32_t)(0x116309b8)));
  /* 11610e93 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11610e95 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610e97 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11610e9d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11610ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11610ea4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11610ea8 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11610eaeu);
  /* 11610eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610eb0 jne 0x11610ec6 */
  if (!C.zf) goto L_11610ec6;
  /* 11610eb2 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
  /* 11610ebc mov eax, 1 */
  EAX = (0x1u);
  /* 11610ec1 jmp 0x11610ffe */
  goto L_11610ffe;
L_11610ec6:;
  /* 11610ec6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11610ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11610eca mov ecx, dword ptr [0x116309bc] */
  ECX = (r32((uint32_t)(0x116309bc)));
  /* 11610ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11610ed1 call 0x11613280 */
  push32(0x11610ed6u); f_11613280();
  /* 11610ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610edb jne 0x11610f90 */
  if (!C.zf) goto L_11610f90;
  /* 11610ee1 mov edx, dword ptr [0x116309c4] */
  EDX = (r32((uint32_t)(0x116309c4)));
  /* 11610ee7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11610eea mov dword ptr [0x116309c4], edx */
  w32((uint32_t)(0x116309c4), (EDX));
  /* 11610ef0 cmp dword ptr [0x116309b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610ef7 je 0x11610f1a */
  if (C.zf) goto L_11610f1a;
  /* 11610ef9 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610efe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11610f01 mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
  /* 11610f06 cmp dword ptr [0x116309ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610f0d jne 0x11610f18 */
  if (!C.zf) goto L_11610f18;
  /* 11610f0f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610f12 mov dword ptr [0x116309ac], ecx */
  w32((uint32_t)(0x116309ac), (ECX));
L_11610f18:;
  /* 11610f18 jmp 0x11610f8e */
  goto L_11610f8e;
L_11610f1a:;
  /* 11610f1a cmp dword ptr [0x116309b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610f21 je 0x11610f6f */
  if (C.zf) goto L_11610f6f;
  /* 11610f23 mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 11610f29 push edx */
  push32((uint32_t)(EDX));
  /* 11610f2a call 0x116079e0 */
  push32(0x11610f2fu); f_116079e0();
  /* 11610f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610f32 cmp eax, dword ptr [0x116309b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116309b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610f38 jne 0x11610f6f */
  if (!C.zf) goto L_11610f6f;
  /* 11610f3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11610f3c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610f3f push eax */
  push32((uint32_t)(EAX));
  /* 11610f40 call 0x116113d0 */
  push32(0x11610f45u); f_116113d0();
  /* 11610f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610f4a je 0x11610f6d */
  if (C.zf) goto L_11610f6d;
  /* 11610f4c mov ecx, dword ptr [0x116309c4] */
  ECX = (r32((uint32_t)(0x116309c4)));
  /* 11610f52 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11610f55 mov dword ptr [0x116309c4], ecx */
  w32((uint32_t)(0x116309c4), (ECX));
  /* 11610f5b cmp dword ptr [0x116309ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610f62 jne 0x11610f6d */
  if (!C.zf) goto L_11610f6d;
  /* 11610f64 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610f67 mov dword ptr [0x116309ac], edx */
  w32((uint32_t)(0x116309ac), (EDX));
L_11610f6d:;
  /* 11610f6d jmp 0x11610f8e */
  goto L_11610f8e;
L_11610f6f:;
  /* 11610f6f mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610f74 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11610f77 mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
  /* 11610f7c cmp dword ptr [0x116309ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610f83 jne 0x11610f8e */
  if (!C.zf) goto L_11610f8e;
  /* 11610f85 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610f88 mov dword ptr [0x116309ac], ecx */
  w32((uint32_t)(0x116309ac), (ECX));
L_11610f8e:;
  /* 11610f8e jmp 0x11610ff1 */
  goto L_11610ff1;
L_11610f90:;
  /* 11610f90 cmp dword ptr [0x116309b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610f97 jne 0x11610ff1 */
  if (!C.zf) goto L_11610ff1;
  /* 11610f99 cmp dword ptr [0x116309b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610fa0 je 0x11610ff1 */
  if (C.zf) goto L_11610ff1;
  /* 11610fa2 mov edx, dword ptr [0x116309b4] */
  EDX = (r32((uint32_t)(0x116309b4)));
  /* 11610fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11610fa9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11610fac push eax */
  push32((uint32_t)(EAX));
  /* 11610fad mov ecx, dword ptr [0x116309bc] */
  ECX = (r32((uint32_t)(0x116309bc)));
  /* 11610fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11610fb4 call 0x11613350 */
  push32(0x11610fb9u); f_11613350();
  /* 11610fb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610fbe jne 0x11610ff1 */
  if (!C.zf) goto L_11610ff1;
  /* 11610fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11610fc2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610fc5 push edx */
  push32((uint32_t)(EDX));
  /* 11610fc6 call 0x116113d0 */
  push32(0x11610fcbu); f_116113d0();
  /* 11610fcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11610fce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11610fd0 je 0x11610ff1 */
  if (C.zf) goto L_11610ff1;
  /* 11610fd2 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610fd7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11610fda mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
  /* 11610fdf cmp dword ptr [0x116309ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11610fe6 jne 0x11610ff1 */
  if (!C.zf) goto L_11610ff1;
  /* 11610fe8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11610feb mov dword ptr [0x116309ac], ecx */
  w32((uint32_t)(0x116309ac), (ECX));
L_11610ff1:;
  /* 11610ff1 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11610ff6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11610ff9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11610ffb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11610ffd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11610ffe:;
  /* 11610ffe mov esp, ebp */
  ESP = (EBP);
  /* 11611000 pop ebp */
  EBP = (pop32());
  /* 11611001 ret 4 */
  ESPCHK(0x11610ce0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011010 @ 0x11611010 (116 bytes, 33 insns) */
void f_11611010(void) {
  FTRACE(0x11611010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611010 push ebp */
  push32((uint32_t)(EBP));
  /* 11611011 mov ebp, esp */
  EBP = (ESP);
  /* 11611013 push ecx */
  push32((uint32_t)(ECX));
  /* 11611014 mov eax, dword ptr [0x116309bc] */
  EAX = (r32((uint32_t)(0x116309bc)));
  /* 11611019 push eax */
  push32((uint32_t)(EAX));
  /* 1161101a call 0x116079e0 */
  push32(0x1161101fu); f_116079e0();
  /* 1161101f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611022 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11611024 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611027 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1161102a mov dword ptr [0x116309b8], ecx */
  w32((uint32_t)(0x116309b8), (ECX));
  /* 11611030 cmp dword ptr [0x116309b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611037 je 0x11611042 */
  if (C.zf) goto L_11611042;
  /* 11611039 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11611040 jmp 0x11611054 */
  goto L_11611054;
L_11611042:;
  /* 11611042 mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 11611048 push edx */
  push32((uint32_t)(EDX));
  /* 11611049 call 0x116116c0 */
  push32(0x1161104eu); f_116116c0();
  /* 1161104e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611051 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11611054:;
  /* 11611054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611057 mov dword ptr [0x116309b4], eax */
  w32((uint32_t)(0x116309b4), (EAX));
  /* 1161105c push 1 */
  push32((uint32_t)(0x1u));
  /* 1161105e push 0x11611090 */
  push32((uint32_t)(0x11611090u));
  /* 11611063 call dword ptr [0x116332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f0))), 0x11611069u);
  /* 11611069 mov ecx, dword ptr [0x116309c4] */
  ECX = (r32((uint32_t)(0x116309c4)));
  /* 1161106f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11611072 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11611074 jne 0x11611080 */
  if (!C.zf) goto L_11611080;
  /* 11611076 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
L_11611080:;
  /* 11611080 mov esp, ebp */
  ESP = (EBP);
  /* 11611082 pop ebp */
  EBP = (pop32());
  /* 11611083 ret  */
  ESPCHK(0x11611010u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x11611090 (287 bytes, 86 insns) */
void f_11611090(void) {
  FTRACE(0x11611090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611090 push ebp */
  push32((uint32_t)(EBP));
  /* 11611091 mov ebp, esp */
  EBP = (ESP);
  /* 11611093 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611099 push eax */
  push32((uint32_t)(EAX));
  /* 1161109a call 0x11611640 */
  push32(0x1161109fu); f_11611640();
  /* 1161109f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116110a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 116110a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116110a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116110aa push ecx */
  push32((uint32_t)(ECX));
  /* 116110ab mov edx, dword ptr [0x116309b8] */
  EDX = (r32((uint32_t)(0x116309b8)));
  /* 116110b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116110b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116110b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 116110bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116110c1 push edx */
  push32((uint32_t)(EDX));
  /* 116110c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116110c5 push eax */
  push32((uint32_t)(EAX));
  /* 116110c6 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x116110ccu);
  /* 116110cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116110ce jne 0x116110e4 */
  if (!C.zf) goto L_116110e4;
  /* 116110d0 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
  /* 116110da mov eax, 1 */
  EAX = (0x1u);
  /* 116110df jmp 0x116111a9 */
  goto L_116111a9;
L_116110e4:;
  /* 116110e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116110e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116110e8 mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 116110ee push edx */
  push32((uint32_t)(EDX));
  /* 116110ef call 0x11613280 */
  push32(0x116110f4u); f_11613280();
  /* 116110f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116110f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116110f9 jne 0x11611139 */
  if (!C.zf) goto L_11611139;
  /* 116110fb cmp dword ptr [0x116309b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611102 jne 0x11611116 */
  if (!C.zf) goto L_11611116;
  /* 11611104 push 1 */
  push32((uint32_t)(0x1u));
  /* 11611106 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11611109 push eax */
  push32((uint32_t)(EAX));
  /* 1161110a call 0x116113d0 */
  push32(0x1161110fu); f_116113d0();
  /* 1161110f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611114 je 0x11611137 */
  if (C.zf) goto L_11611137;
L_11611116:;
  /* 11611116 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11611119 mov dword ptr [0x116309c8], ecx */
  w32((uint32_t)(0x116309c8), (ECX));
  /* 1161111f mov edx, dword ptr [0x116309c8] */
  EDX = (r32((uint32_t)(0x116309c8)));
  /* 11611125 mov dword ptr [0x116309ac], edx */
  w32((uint32_t)(0x116309ac), (EDX));
  /* 1161112b mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11611130 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11611132 mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
L_11611137:;
  /* 11611137 jmp 0x1161119c */
  goto L_1161119c;
L_11611139:;
  /* 11611139 cmp dword ptr [0x116309b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611140 jne 0x1161119c */
  if (!C.zf) goto L_1161119c;
  /* 11611142 cmp dword ptr [0x116309b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611149 je 0x1161119c */
  if (C.zf) goto L_1161119c;
  /* 1161114b mov ecx, dword ptr [0x116309b4] */
  ECX = (r32((uint32_t)(0x116309b4)));
  /* 11611151 push ecx */
  push32((uint32_t)(ECX));
  /* 11611152 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11611155 push edx */
  push32((uint32_t)(EDX));
  /* 11611156 mov eax, dword ptr [0x116309bc] */
  EAX = (r32((uint32_t)(0x116309bc)));
  /* 1161115b push eax */
  push32((uint32_t)(EAX));
  /* 1161115c call 0x11613350 */
  push32(0x11611161u); f_11613350();
  /* 11611161 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611166 jne 0x1161119c */
  if (!C.zf) goto L_1161119c;
  /* 11611168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1161116a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1161116d push ecx */
  push32((uint32_t)(ECX));
  /* 1161116e call 0x116113d0 */
  push32(0x11611173u); f_116113d0();
  /* 11611173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611178 je 0x1161119c */
  if (C.zf) goto L_1161119c;
  /* 1161117a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1161117d mov dword ptr [0x116309c8], edx */
  w32((uint32_t)(0x116309c8), (EDX));
  /* 11611183 mov eax, dword ptr [0x116309c8] */
  EAX = (r32((uint32_t)(0x116309c8)));
  /* 11611188 mov dword ptr [0x116309ac], eax */
  w32((uint32_t)(0x116309ac), (EAX));
  /* 1161118d mov ecx, dword ptr [0x116309c4] */
  ECX = (r32((uint32_t)(0x116309c4)));
  /* 11611193 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11611196 mov dword ptr [0x116309c4], ecx */
  w32((uint32_t)(0x116309c4), (ECX));
L_1161119c:;
  /* 1161119c mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 116111a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116111a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116111a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116111a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116111a9:;
  /* 116111a9 mov esp, ebp */
  ESP = (EBP);
  /* 116111ab pop ebp */
  EBP = (pop32());
  /* 116111ac ret 4 */
  ESPCHK(0x11611090u, _esp0);
  ESP += 8; return;
}

/* FUN_100111b0 @ 0x116111b0 (69 bytes, 20 insns) */
void f_116111b0(void) {
  FTRACE(0x116111b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116111b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116111b1 mov ebp, esp */
  EBP = (ESP);
  /* 116111b3 mov eax, dword ptr [0x116309c0] */
  EAX = (r32((uint32_t)(0x116309c0)));
  /* 116111b8 push eax */
  push32((uint32_t)(EAX));
  /* 116111b9 call 0x116079e0 */
  push32(0x116111beu); f_116079e0();
  /* 116111be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116111c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116111c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116111c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116111c9 mov dword ptr [0x116309b0], ecx */
  w32((uint32_t)(0x116309b0), (ECX));
  /* 116111cf push 1 */
  push32((uint32_t)(0x1u));
  /* 116111d1 push 0x11611200 */
  push32((uint32_t)(0x11611200u));
  /* 116111d6 call dword ptr [0x116332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f0))), 0x116111dcu);
  /* 116111dc mov edx, dword ptr [0x116309c4] */
  EDX = (r32((uint32_t)(0x116309c4)));
  /* 116111e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116111e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116111e7 jne 0x116111f3 */
  if (!C.zf) goto L_116111f3;
  /* 116111e9 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
L_116111f3:;
  /* 116111f3 pop ebp */
  EBP = (pop32());
  /* 116111f4 ret  */
  ESPCHK(0x116111b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x11611200 (172 bytes, 54 insns) */
void f_11611200(void) {
  FTRACE(0x11611200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611200 push ebp */
  push32((uint32_t)(EBP));
  /* 11611201 mov ebp, esp */
  EBP = (ESP);
  /* 11611203 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611209 push eax */
  push32((uint32_t)(EAX));
  /* 1161120a call 0x11611640 */
  push32(0x1161120fu); f_11611640();
  /* 1161120f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611212 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11611215 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11611217 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1161121a push ecx */
  push32((uint32_t)(ECX));
  /* 1161121b mov edx, dword ptr [0x116309b0] */
  EDX = (r32((uint32_t)(0x116309b0)));
  /* 11611221 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11611223 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611225 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1161122b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611231 push edx */
  push32((uint32_t)(EDX));
  /* 11611232 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11611235 push eax */
  push32((uint32_t)(EAX));
  /* 11611236 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x1161123cu);
  /* 1161123c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161123e jne 0x11611251 */
  if (!C.zf) goto L_11611251;
  /* 11611240 mov dword ptr [0x116309c4], 0 */
  w32((uint32_t)(0x116309c4), (0x0u));
  /* 1161124a mov eax, 1 */
  EAX = (0x1u);
  /* 1161124f jmp 0x116112a6 */
  goto L_116112a6;
L_11611251:;
  /* 11611251 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11611254 push ecx */
  push32((uint32_t)(ECX));
  /* 11611255 mov edx, dword ptr [0x116309c0] */
  EDX = (r32((uint32_t)(0x116309c0)));
  /* 1161125b push edx */
  push32((uint32_t)(EDX));
  /* 1161125c call 0x11613280 */
  push32(0x11611261u); f_11613280();
  /* 11611261 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611266 jne 0x11611299 */
  if (!C.zf) goto L_11611299;
  /* 11611268 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1161126b push eax */
  push32((uint32_t)(EAX));
  /* 1161126c call 0x11611380 */
  push32(0x11611271u); f_11611380();
  /* 11611271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611276 je 0x11611299 */
  if (C.zf) goto L_11611299;
  /* 11611278 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1161127b mov dword ptr [0x116309c8], ecx */
  w32((uint32_t)(0x116309c8), (ECX));
  /* 11611281 mov edx, dword ptr [0x116309c8] */
  EDX = (r32((uint32_t)(0x116309c8)));
  /* 11611287 mov dword ptr [0x116309ac], edx */
  w32((uint32_t)(0x116309ac), (EDX));
  /* 1161128d mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 11611292 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11611294 mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
L_11611299:;
  /* 11611299 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 1161129e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116112a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116112a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116112a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116112a6:;
  /* 116112a6 mov esp, ebp */
  ESP = (EBP);
  /* 116112a8 pop ebp */
  EBP = (pop32());
  /* 116112a9 ret 4 */
  ESPCHK(0x11611200u, _esp0);
  ESP += 8; return;
}

/* FUN_100112b0 @ 0x116112b0 (43 bytes, 11 insns) */
void f_116112b0(void) {
  FTRACE(0x116112b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116112b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116112b1 mov ebp, esp */
  EBP = (ESP);
  /* 116112b3 mov eax, dword ptr [0x116309c4] */
  EAX = (r32((uint32_t)(0x116309c4)));
  /* 116112b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 116112bd mov dword ptr [0x116309c4], eax */
  w32((uint32_t)(0x116309c4), (EAX));
  /* 116112c2 call dword ptr [0x116332ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332ec))), 0x116112c8u);
  /* 116112c8 mov dword ptr [0x116309c8], eax */
  w32((uint32_t)(0x116309c8), (EAX));
  /* 116112cd mov ecx, dword ptr [0x116309c8] */
  ECX = (r32((uint32_t)(0x116309c8)));
  /* 116112d3 mov dword ptr [0x116309ac], ecx */
  w32((uint32_t)(0x116309ac), (ECX));
  /* 116112d9 pop ebp */
  EBP = (pop32());
  /* 116112da ret  */
  ESPCHK(0x116112b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x116112e0 (155 bytes, 57 insns) */
void f_116112e0(void) {
  FTRACE(0x116112e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116112e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116112e1 mov ebp, esp */
  EBP = (ESP);
  /* 116112e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116112e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116112ea je 0x1161130b */
  if (C.zf) goto L_1161130b;
  /* 116112ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116112ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116112f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116112f4 je 0x1161130b */
  if (C.zf) goto L_1161130b;
  /* 116112f6 push 0x1162c744 */
  push32((uint32_t)(0x1162c744u));
  /* 116112fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116112fe push edx */
  push32((uint32_t)(EDX));
  /* 116112ff call 0x11610840 */
  push32(0x11611304u); f_11610840();
  /* 11611304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611307 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611309 jne 0x11611333 */
  if (!C.zf) goto L_11611333;
L_1161130b:;
  /* 1161130b push 8 */
  push32((uint32_t)(0x8u));
  /* 1161130d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11611310 push eax */
  push32((uint32_t)(EAX));
  /* 11611311 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11611316 mov ecx, dword ptr [0x116309c8] */
  ECX = (r32((uint32_t)(0x116309c8)));
  /* 1161131c push ecx */
  push32((uint32_t)(ECX));
  /* 1161131d call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11611323u);
  /* 11611323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611325 jne 0x1161132b */
  if (!C.zf) goto L_1161132b;
  /* 11611327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11611329 jmp 0x11611377 */
  goto L_11611377;
L_1161132b:;
  /* 1161132b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1161132e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11611331 jmp 0x1161136b */
  goto L_1161136b;
L_11611333:;
  /* 11611333 push 0x1162c740 */
  push32((uint32_t)(0x1162c740u));
  /* 11611338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161133b push eax */
  push32((uint32_t)(EAX));
  /* 1161133c call 0x11610840 */
  push32(0x11611341u); f_11610840();
  /* 11611341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611346 jne 0x1161136b */
  if (!C.zf) goto L_1161136b;
  /* 11611348 push 8 */
  push32((uint32_t)(0x8u));
  /* 1161134a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1161134d push ecx */
  push32((uint32_t)(ECX));
  /* 1161134e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11611350 mov edx, dword ptr [0x116309c8] */
  EDX = (r32((uint32_t)(0x116309c8)));
  /* 11611356 push edx */
  push32((uint32_t)(EDX));
  /* 11611357 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x1161135du);
  /* 1161135d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161135f jne 0x11611365 */
  if (!C.zf) goto L_11611365;
  /* 11611361 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11611363 jmp 0x11611377 */
  goto L_11611377;
L_11611365:;
  /* 11611365 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11611368 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1161136b:;
  /* 1161136b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161136e push ecx */
  push32((uint32_t)(ECX));
  /* 1161136f call 0x11613460 */
  push32(0x11611374u); f_11613460();
  /* 11611374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11611377:;
  /* 11611377 mov esp, ebp */
  ESP = (EBP);
  /* 11611379 pop ebp */
  EBP = (pop32());
  /* 1161137a ret  */
  ESPCHK(0x116112e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011380 @ 0x11611380 (79 bytes, 26 insns) */
void f_11611380(void) {
  FTRACE(0x11611380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611380 push ebp */
  push32((uint32_t)(EBP));
  /* 11611381 mov ebp, esp */
  EBP = (ESP);
  /* 11611383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611386 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1161138a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1161138e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11611395 jmp 0x116113a0 */
  goto L_116113a0;
L_11611397:;
  /* 11611397 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1161139a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161139d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116113a0:;
  /* 116113a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116113a4 jae 0x116113c6 */
  if (!C.cf) goto L_116113c6;
  /* 116113a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116113a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116113af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116113b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116113b4 mov cx, word ptr [eax*2 + 0x1162f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1162f9c4)));
  /* 116113bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116113be jne 0x116113c4 */
  if (!C.zf) goto L_116113c4;
  /* 116113c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116113c2 jmp 0x116113cb */
  goto L_116113cb;
L_116113c4:;
  /* 116113c4 jmp 0x11611397 */
  goto L_11611397;
L_116113c6:;
  /* 116113c6 mov eax, 1 */
  EAX = (0x1u);
L_116113cb:;
  /* 116113cb mov esp, ebp */
  ESP = (EBP);
  /* 116113cd pop ebp */
  EBP = (pop32());
  /* 116113ce ret  */
  ESPCHK(0x11611380u, _esp0);
  ESP += 4; return;
}

/* FUN_100113d0 @ 0x116113d0 (135 bytes, 48 insns) */
void f_116113d0(void) {
  FTRACE(0x116113d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116113d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116113d1 mov ebp, esp */
  EBP = (ESP);
  /* 116113d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116113d6 push esi */
  push32((uint32_t)(ESI));
  /* 116113d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116113da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116113df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 116113e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116113e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 116113ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116113f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116113f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116113f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 116113f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116113fa push 1 */
  push32((uint32_t)(0x1u));
  /* 116113fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116113ff push edx */
  push32((uint32_t)(EDX));
  /* 11611400 call dword ptr [0x116309cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116309cc))), 0x11611406u);
  /* 11611406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611408 jne 0x1161140e */
  if (!C.zf) goto L_1161140e;
  /* 1161140a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161140c jmp 0x11611452 */
  goto L_11611452;
L_1161140e:;
  /* 1161140e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11611411 push eax */
  push32((uint32_t)(EAX));
  /* 11611412 call 0x11611640 */
  push32(0x11611417u); f_11611640();
  /* 11611417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161141a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161141d je 0x1161144d */
  if (C.zf) goto L_1161144d;
  /* 1161141f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611423 je 0x1161144d */
  if (C.zf) goto L_1161144d;
  /* 11611425 mov ecx, dword ptr [0x116309bc] */
  ECX = (r32((uint32_t)(0x116309bc)));
  /* 1161142b push ecx */
  push32((uint32_t)(ECX));
  /* 1161142c call 0x116116c0 */
  push32(0x11611431u); f_116116c0();
  /* 11611431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611434 mov esi, eax */
  ESI = (EAX);
  /* 11611436 mov edx, dword ptr [0x116309bc] */
  EDX = (r32((uint32_t)(0x116309bc)));
  /* 1161143c push edx */
  push32((uint32_t)(EDX));
  /* 1161143d call 0x116079e0 */
  push32(0x11611442u); f_116079e0();
  /* 11611442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611445 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611447 jne 0x1161144d */
  if (!C.zf) goto L_1161144d;
  /* 11611449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161144b jmp 0x11611452 */
  goto L_11611452;
L_1161144d:;
  /* 1161144d mov eax, 1 */
  EAX = (0x1u);
L_11611452:;
  /* 11611452 pop esi */
  ESI = (pop32());
  /* 11611453 mov esp, ebp */
  ESP = (EBP);
  /* 11611455 pop ebp */
  EBP = (pop32());
  /* 11611456 ret  */
  ESPCHK(0x116113d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011460 @ 0x11611460 (77 bytes, 18 insns) */
void f_11611460(void) {
  FTRACE(0x11611460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611460 push ebp */
  push32((uint32_t)(EBP));
  /* 11611461 mov ebp, esp */
  EBP = (ESP);
  /* 11611463 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611469 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11611473 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11611479 push eax */
  push32((uint32_t)(EAX));
  /* 1161147a call dword ptr [0x116332e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332e8))), 0x11611480u);
  /* 11611480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611482 je 0x11611499 */
  if (C.zf) goto L_11611499;
  /* 11611484 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161148b jne 0x11611499 */
  if (!C.zf) goto L_11611499;
  /* 1161148d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11611497 jmp 0x116114a3 */
  goto L_116114a3;
L_11611499:;
  /* 11611499 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_116114a3:;
  /* 116114a3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 116114a9 mov esp, ebp */
  ESP = (EBP);
  /* 116114ab pop ebp */
  EBP = (pop32());
  /* 116114ac ret  */
  ESPCHK(0x11611460u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x116114b0 (388 bytes, 118 insns) */
void f_116114b0(void) {
  FTRACE(0x116114b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116114b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116114b1 mov ebp, esp */
  EBP = (ESP);
  /* 116114b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116114b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 116114bd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 116114c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116114cb:;
  /* 116114cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116114ce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116114d1 jg 0x11611618 */
  if ((!C.zf&&C.sf==C.of)) goto L_11611618;
  /* 116114d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116114da add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116114dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116114de sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116114e0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116114e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116114e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116114e8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116114eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116114ee cmp edx, dword ptr [ecx + 0x1162f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1162f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116114f4 jne 0x116115ee */
  if (!C.zf) goto L_116115ee;
  /* 116114fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116114fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11611500 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611504 ja 0x11611527 */
  if ((!C.cf&&!C.zf)) goto L_11611527;
  /* 11611506 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161150a je 0x11611599 */
  if (C.zf) goto L_11611599;
  /* 11611510 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611514 je 0x11611544 */
  if (C.zf) goto L_11611544;
  /* 11611516 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161151a je 0x11611566 */
  if (C.zf) goto L_11611566;
  /* 1161151c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611520 je 0x11611588 */
  if (C.zf) goto L_11611588;
  /* 11611522 jmp 0x116115b8 */
  goto L_116115b8;
L_11611527:;
  /* 11611527 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161152e je 0x11611555 */
  if (C.zf) goto L_11611555;
  /* 11611530 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611537 je 0x11611577 */
  if (C.zf) goto L_11611577;
  /* 11611539 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611540 je 0x116115aa */
  if (C.zf) goto L_116115aa;
  /* 11611542 jmp 0x116115b8 */
  goto L_116115b8;
L_11611544:;
  /* 11611544 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611547 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161154a add ecx, 0x1162f524 */
  { uint32_t _a=(ECX),_b=(0x1162f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611550 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11611553 jmp 0x116115b8 */
  goto L_116115b8;
L_11611555:;
  /* 11611555 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611558 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161155b mov eax, dword ptr [edx + 0x1162f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1162f52c)));
  /* 11611561 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11611564 jmp 0x116115b8 */
  goto L_116115b8;
L_11611566:;
  /* 11611566 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611569 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161156c add ecx, 0x1162f530 */
  { uint32_t _a=(ECX),_b=(0x1162f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611572 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11611575 jmp 0x116115b8 */
  goto L_116115b8;
L_11611577:;
  /* 11611577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161157a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161157d mov eax, dword ptr [edx + 0x1162f534] */
  EAX = (r32((uint32_t)(EDX + 0x1162f534)));
  /* 11611583 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11611586 jmp 0x116115b8 */
  goto L_116115b8;
L_11611588:;
  /* 11611588 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161158b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161158e add ecx, 0x1162f538 */
  { uint32_t _a=(ECX),_b=(0x1162f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611594 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11611597 jmp 0x116115b8 */
  goto L_116115b8;
L_11611599:;
  /* 11611599 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161159c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161159f add edx, 0x1162f53c */
  { uint32_t _a=(EDX),_b=(0x1162f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116115a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116115a8 jmp 0x116115b8 */
  goto L_116115b8;
L_116115aa:;
  /* 116115aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116115ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116115b0 add eax, 0x1162f544 */
  { uint32_t _a=(EAX),_b=(0x1162f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116115b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116115b8:;
  /* 116115b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116115bc je 0x116115c4 */
  if (C.zf) goto L_116115c4;
  /* 116115be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116115c2 jge 0x116115c6 */
  if ((C.sf==C.of)) goto L_116115c6;
L_116115c4:;
  /* 116115c4 jmp 0x11611618 */
  goto L_11611618;
L_116115c6:;
  /* 116115c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116115c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116115cc push ecx */
  push32((uint32_t)(ECX));
  /* 116115cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116115d0 push edx */
  push32((uint32_t)(EDX));
  /* 116115d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116115d4 push eax */
  push32((uint32_t)(EAX));
  /* 116115d5 call 0x116083d0 */
  push32(0x116115dau); f_116083d0();
  /* 116115da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116115dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116115e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116115e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 116115e7 mov eax, 1 */
  EAX = (0x1u);
  /* 116115ec jmp 0x1161162e */
  goto L_1161162e;
L_116115ee:;
  /* 116115ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116115f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116115f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116115f7 cmp eax, dword ptr [edx + 0x1162f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1162f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116115fd jae 0x1161160a */
  if (!C.cf) goto L_1161160a;
  /* 116115ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611602 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611605 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11611608 jmp 0x11611613 */
  goto L_11611613;
L_1161160a:;
  /* 1161160a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161160d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611610 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11611613:;
  /* 11611613 jmp 0x116114cb */
  goto L_116114cb;
L_11611618:;
  /* 11611618 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161161b push eax */
  push32((uint32_t)(EAX));
  /* 1161161c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161161f push ecx */
  push32((uint32_t)(ECX));
  /* 11611620 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11611623 push edx */
  push32((uint32_t)(EDX));
  /* 11611624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611627 push eax */
  push32((uint32_t)(EAX));
  /* 11611628 call dword ptr [0x116332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f4))), 0x1161162eu);
L_1161162e:;
  /* 1161162e mov esp, ebp */
  ESP = (EBP);
  /* 11611630 pop ebp */
  EBP = (pop32());
  /* 11611631 ret 0x10 */
  ESPCHK(0x116114b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011640 @ 0x11611640 (118 bytes, 42 insns) */
void f_11611640(void) {
  FTRACE(0x11611640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611640 push ebp */
  push32((uint32_t)(EBP));
  /* 11611641 mov ebp, esp */
  EBP = (ESP);
  /* 11611643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611646 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1161164d:;
  /* 1161164d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611650 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11611652 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11611655 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11611659 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161165c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161165f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11611662 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11611664 je 0x116116af */
  if (C.zf) goto L_116116af;
  /* 11611666 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1161166a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161166d jl 0x11611682 */
  if ((C.sf!=C.of)) goto L_11611682;
  /* 1161166f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11611673 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611676 jg 0x11611682 */
  if ((!C.zf&&C.sf==C.of)) goto L_11611682;
  /* 11611678 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1161167b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1161167d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11611680 jmp 0x1161169c */
  goto L_1161169c;
L_11611682:;
  /* 11611682 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11611686 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611689 jl 0x1161169c */
  if ((C.sf!=C.of)) goto L_1161169c;
  /* 1161168b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1161168f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611692 jg 0x1161169c */
  if ((!C.zf&&C.sf==C.of)) goto L_1161169c;
  /* 11611694 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11611697 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11611699 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1161169c:;
  /* 1161169c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161169f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116116a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116116a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 116116aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116116ad jmp 0x1161164d */
  goto L_1161164d;
L_116116af:;
  /* 116116af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116116b2 mov esp, ebp */
  ESP = (EBP);
  /* 116116b4 pop ebp */
  EBP = (pop32());
  /* 116116b5 ret  */
  ESPCHK(0x11611640u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x116116c0 (101 bytes, 36 insns) */
void f_116116c0(void) {
  FTRACE(0x116116c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116116c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116116c1 mov ebp, esp */
  EBP = (ESP);
  /* 116116c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116116c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116116cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116116d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116116d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 116116d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116116d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116116db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_116116de:;
  /* 116116de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116116e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116116e5 jl 0x116116f0 */
  if ((C.sf!=C.of)) goto L_116116f0;
  /* 116116e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116116eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116116ee jle 0x11611702 */
  if ((C.zf||C.sf!=C.of)) goto L_11611702;
L_116116f0:;
  /* 116116f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116116f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116116f7 jl 0x1161171e */
  if ((C.sf!=C.of)) goto L_1161171e;
  /* 116116f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 116116fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611700 jg 0x1161171e */
  if ((!C.zf&&C.sf==C.of)) goto L_1161171e;
L_11611702:;
  /* 11611702 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611708 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1161170b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161170e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11611710 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11611713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611716 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611719 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1161171c jmp 0x116116de */
  goto L_116116de;
L_1161171e:;
  /* 1161171e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611721 mov esp, ebp */
  ESP = (EBP);
  /* 11611723 pop ebp */
  EBP = (pop32());
  /* 11611724 ret  */
  ESPCHK(0x116116c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011730 @ 0x11611730 (122 bytes, 39 insns) */
void f_11611730(void) {
  FTRACE(0x11611730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611730 push ebp */
  push32((uint32_t)(EBP));
  /* 11611731 mov ebp, esp */
  EBP = (ESP);
  /* 11611733 push ecx */
  push32((uint32_t)(ECX));
  /* 11611734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611737 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161173d jae 0x11611761 */
  if (!C.cf) goto L_11611761;
  /* 1161173f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611742 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11611745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611748 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1161174b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161174e mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 11611755 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1161175a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1161175d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1161175f jne 0x1161177c */
  if (!C.zf) goto L_1161177c;
L_11611761:;
  /* 11611761 call 0x1160ca80 */
  push32(0x11611766u); f_1160ca80();
  /* 11611766 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1161176c call 0x1160ca90 */
  push32(0x11611771u); f_1160ca90();
  /* 11611771 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11611777 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1161177a jmp 0x116117a6 */
  goto L_116117a6;
L_1161177c:;
  /* 1161177c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161177f push edx */
  push32((uint32_t)(EDX));
  /* 11611780 call 0x1160e2a0 */
  push32(0x11611785u); f_1160e2a0();
  /* 11611785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611788 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161178b push eax */
  push32((uint32_t)(EAX));
  /* 1161178c call 0x116117b0 */
  push32(0x11611791u); f_116117b0();
  /* 11611791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611794 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11611797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161179a push ecx */
  push32((uint32_t)(ECX));
  /* 1161179b call 0x1160e330 */
  push32(0x116117a0u); f_1160e330();
  /* 116117a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116117a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116117a6:;
  /* 116117a6 mov esp, ebp */
  ESP = (EBP);
  /* 116117a8 pop ebp */
  EBP = (pop32());
  /* 116117a9 ret  */
  ESPCHK(0x11611730u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x116117b0 (170 bytes, 59 insns) */
void f_116117b0(void) {
  FTRACE(0x116117b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116117b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116117b1 mov ebp, esp */
  EBP = (ESP);
  /* 116117b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116117b4 push esi */
  push32((uint32_t)(ESI));
  /* 116117b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116117b8 push eax */
  push32((uint32_t)(EAX));
  /* 116117b9 call 0x1160e120 */
  push32(0x116117beu); f_1160e120();
  /* 116117be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116117c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116117c4 je 0x11611803 */
  if (C.zf) goto L_11611803;
  /* 116117c6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116117ca je 0x116117d2 */
  if (C.zf) goto L_116117d2;
  /* 116117cc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116117d0 jne 0x116117ec */
  if (!C.zf) goto L_116117ec;
L_116117d2:;
  /* 116117d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116117d4 call 0x1160e120 */
  push32(0x116117d9u); f_1160e120();
  /* 116117d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116117dc mov esi, eax */
  ESI = (EAX);
  /* 116117de push 2 */
  push32((uint32_t)(0x2u));
  /* 116117e0 call 0x1160e120 */
  push32(0x116117e5u); f_1160e120();
  /* 116117e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116117e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116117ea je 0x11611803 */
  if (C.zf) goto L_11611803;
L_116117ec:;
  /* 116117ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116117ef push ecx */
  push32((uint32_t)(ECX));
  /* 116117f0 call 0x1160e120 */
  push32(0x116117f5u); f_1160e120();
  /* 116117f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116117f8 push eax */
  push32((uint32_t)(EAX));
  /* 116117f9 call dword ptr [0x116332e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332e4))), 0x116117ffu);
  /* 116117ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11611801 je 0x1161180c */
  if (C.zf) goto L_1161180c;
L_11611803:;
  /* 11611803 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1161180a jmp 0x11611815 */
  goto L_11611815;
L_1161180c:;
  /* 1161180c call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x11611812u);
  /* 11611812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11611815:;
  /* 11611815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611818 push edx */
  push32((uint32_t)(EDX));
  /* 11611819 call 0x1160e040 */
  push32(0x1161181eu); f_1160e040();
  /* 1161181e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611824 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11611827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161182a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1161182d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11611830 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 11611837 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1161183c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611840 je 0x11611853 */
  if (C.zf) goto L_11611853;
  /* 11611842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611845 push eax */
  push32((uint32_t)(EAX));
  /* 11611846 call 0x1160c9e0 */
  push32(0x1161184bu); f_1160c9e0();
  /* 1161184b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161184e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11611851 jmp 0x11611855 */
  goto L_11611855;
L_11611853:;
  /* 11611853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11611855:;
  /* 11611855 pop esi */
  ESI = (pop32());
  /* 11611856 mov esp, ebp */
  ESP = (EBP);
  /* 11611858 pop ebp */
  EBP = (pop32());
  /* 11611859 ret  */
  ESPCHK(0x116117b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x11611860 (146 bytes, 52 insns) */
void f_11611860(void) {
  FTRACE(0x11611860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611860 push ebp */
  push32((uint32_t)(EBP));
  /* 11611861 mov ebp, esp */
  EBP = (ESP);
  /* 11611863 push ebx */
  push32((uint32_t)(EBX));
  /* 11611864 push esi */
  push32((uint32_t)(ESI));
  /* 11611865 push edi */
  push32((uint32_t)(EDI));
L_11611866:;
  /* 11611866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161186a jne 0x1161188a */
  if (!C.zf) goto L_1161188a;
  /* 1161186c push 0x1162c080 */
  push32((uint32_t)(0x1162c080u));
  /* 11611871 push 0 */
  push32((uint32_t)(0x0u));
  /* 11611873 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11611875 push 0x1162c748 */
  push32((uint32_t)(0x1162c748u));
  /* 1161187a push 2 */
  push32((uint32_t)(0x2u));
  /* 1161187c call 0x11603c70 */
  push32(0x11611881u); f_11603c70();
  /* 11611881 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611884 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611887 jne 0x1161188a */
  if (!C.zf) goto L_1161188a;
  /* 11611889 int3  */
  x86_unimpl("int3 @ 0x11611889");
L_1161188a:;
  /* 1161188a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161188c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161188e jne 0x11611866 */
  if (!C.zf) goto L_11611866;
  /* 11611890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611893 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11611896 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1161189c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1161189e je 0x116118ed */
  if (C.zf) goto L_116118ed;
  /* 116118a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116118a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116118a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116118ab je 0x116118ed */
  if (C.zf) goto L_116118ed;
  /* 116118ad push 2 */
  push32((uint32_t)(0x2u));
  /* 116118af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116118b5 push eax */
  push32((uint32_t)(EAX));
  /* 116118b6 call 0x11605640 */
  push32(0x116118bbu); f_11605640();
  /* 116118bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116118be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116118c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 116118ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 116118d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116118d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116118e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116118e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_116118ed:;
  /* 116118ed pop edi */
  EDI = (pop32());
  /* 116118ee pop esi */
  ESI = (pop32());
  /* 116118ef pop ebx */
  EBX = (pop32());
  /* 116118f0 pop ebp */
  EBP = (pop32());
  /* 116118f1 ret  */
  ESPCHK(0x11611860u, _esp0);
  ESP += 4; return;
}

/* FUN_10011900 @ 0x11611900 (289 bytes, 97 insns) */
void f_11611900(void) {
  FTRACE(0x11611900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611900 push ebp */
  push32((uint32_t)(EBP));
  /* 11611901 mov ebp, esp */
  EBP = (ESP);
  /* 11611903 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611906 push esi */
  push32((uint32_t)(ESI));
  /* 11611907 mov eax, dword ptr [0x1162fc98] */
  EAX = (r32((uint32_t)(0x1162fc98)));
  /* 1161190c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1161190f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11611916 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1161191d jmp 0x11611928 */
  goto L_11611928;
L_1161191f:;
  /* 1161191f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611925 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11611928:;
  /* 11611928 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161192c jae 0x11611961 */
  if (!C.cf) goto L_11611961;
  /* 1161192e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611931 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611934 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11611937 push ecx */
  push32((uint32_t)(ECX));
  /* 11611938 call 0x116079e0 */
  push32(0x1161193du); f_116079e0();
  /* 1161193d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611940 mov esi, eax */
  ESI = (EAX);
  /* 11611942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611945 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611948 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1161194c push ecx */
  push32((uint32_t)(ECX));
  /* 1161194d call 0x116079e0 */
  push32(0x11611952u); f_116079e0();
  /* 11611952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611955 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611958 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1161195c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1161195f jmp 0x1161191f */
  goto L_1161191f;
L_11611961:;
  /* 11611961 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611964 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611967 push eax */
  push32((uint32_t)(EAX));
  /* 11611968 call 0x11604b90 */
  push32(0x1161196du); f_11604b90();
  /* 1161196d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611970 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11611973 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611977 je 0x11611a19 */
  if (C.zf) goto L_11611a19;
  /* 1161197d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611980 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11611983 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1161198a jmp 0x11611995 */
  goto L_11611995;
L_1161198c:;
  /* 1161198c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1161198f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611992 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11611995:;
  /* 11611995 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611999 jae 0x11611a0a */
  if (!C.cf) goto L_11611a0a;
  /* 1161199b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1161199e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 116119a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116119a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116119a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116119aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116119ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116119b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 116119b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116119b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116119b7 push edx */
  push32((uint32_t)(EDX));
  /* 116119b8 call 0x11607b60 */
  push32(0x116119bdu); f_11607b60();
  /* 116119bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116119c0 push eax */
  push32((uint32_t)(EAX));
  /* 116119c1 call 0x116079e0 */
  push32(0x116119c6u); f_116079e0();
  /* 116119c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116119c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116119cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116119ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116119d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116119d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 116119d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116119da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116119dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116119e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116119e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116119e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116119ea push eax */
  push32((uint32_t)(EAX));
  /* 116119eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116119ee push ecx */
  push32((uint32_t)(ECX));
  /* 116119ef call 0x11607b60 */
  push32(0x116119f4u); f_11607b60();
  /* 116119f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116119f7 push eax */
  push32((uint32_t)(EAX));
  /* 116119f8 call 0x116079e0 */
  push32(0x116119fdu); f_116079e0();
  /* 116119fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611a03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a05 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611a08 jmp 0x1161198c */
  goto L_1161198c;
L_11611a0a:;
  /* 11611a0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611a0d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11611a10 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611a13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a16 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11611a19:;
  /* 11611a19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611a1c pop esi */
  ESI = (pop32());
  /* 11611a1d mov esp, ebp */
  ESP = (EBP);
  /* 11611a1f pop ebp */
  EBP = (pop32());
  /* 11611a20 ret  */
  ESPCHK(0x11611900u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a30 @ 0x11611a30 (291 bytes, 97 insns) */
void f_11611a30(void) {
  FTRACE(0x11611a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11611a31 mov ebp, esp */
  EBP = (ESP);
  /* 11611a33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611a36 push esi */
  push32((uint32_t)(ESI));
  /* 11611a37 mov eax, dword ptr [0x1162fc98] */
  EAX = (r32((uint32_t)(0x1162fc98)));
  /* 11611a3c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11611a3f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11611a46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11611a4d jmp 0x11611a58 */
  goto L_11611a58;
L_11611a4f:;
  /* 11611a4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611a52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11611a58:;
  /* 11611a58 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611a5c jae 0x11611a92 */
  if (!C.cf) goto L_11611a92;
  /* 11611a5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611a61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611a64 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11611a68 push ecx */
  push32((uint32_t)(ECX));
  /* 11611a69 call 0x116079e0 */
  push32(0x11611a6eu); f_116079e0();
  /* 11611a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a71 mov esi, eax */
  ESI = (EAX);
  /* 11611a73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611a76 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611a79 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11611a7d push ecx */
  push32((uint32_t)(ECX));
  /* 11611a7e call 0x116079e0 */
  push32(0x11611a83u); f_116079e0();
  /* 11611a83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a86 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a89 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11611a8d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11611a90 jmp 0x11611a4f */
  goto L_11611a4f;
L_11611a92:;
  /* 11611a92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611a95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611a98 push eax */
  push32((uint32_t)(EAX));
  /* 11611a99 call 0x11604b90 */
  push32(0x11611a9eu); f_11604b90();
  /* 11611a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611aa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11611aa4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611aa8 je 0x11611b4b */
  if (C.zf) goto L_11611b4b;
  /* 11611aae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611ab1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11611ab4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11611abb jmp 0x11611ac6 */
  goto L_11611ac6;
L_11611abd:;
  /* 11611abd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611ac0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611ac3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11611ac6:;
  /* 11611ac6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611aca jae 0x11611b3c */
  if (!C.cf) goto L_11611b3c;
  /* 11611acc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611acf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11611ad2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611ad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611ad8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11611adb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611ade mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611ae1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11611ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11611ae6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611ae9 push edx */
  push32((uint32_t)(EDX));
  /* 11611aea call 0x11607b60 */
  push32(0x11611aefu); f_11607b60();
  /* 11611aef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611af2 push eax */
  push32((uint32_t)(EAX));
  /* 11611af3 call 0x116079e0 */
  push32(0x11611af8u); f_116079e0();
  /* 11611af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611afb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611afe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11611b03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611b06 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11611b09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611b0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11611b12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611b15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611b18 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11611b1c push eax */
  push32((uint32_t)(EAX));
  /* 11611b1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611b20 push ecx */
  push32((uint32_t)(ECX));
  /* 11611b21 call 0x11607b60 */
  push32(0x11611b26u); f_11607b60();
  /* 11611b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b29 push eax */
  push32((uint32_t)(EAX));
  /* 11611b2a call 0x116079e0 */
  push32(0x11611b2fu); f_116079e0();
  /* 11611b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b32 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611b35 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b37 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611b3a jmp 0x11611abd */
  goto L_11611abd;
L_11611b3c:;
  /* 11611b3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611b3f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11611b42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611b45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11611b4b:;
  /* 11611b4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611b4e pop esi */
  ESI = (pop32());
  /* 11611b4f mov esp, ebp */
  ESP = (EBP);
  /* 11611b51 pop ebp */
  EBP = (pop32());
  /* 11611b52 ret  */
  ESPCHK(0x11611a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x11611b60 (878 bytes, 273 insns) */
void f_11611b60(void) {
  FTRACE(0x11611b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11611b61 mov ebp, esp */
  EBP = (ESP);
  /* 11611b63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611b66 push esi */
  push32((uint32_t)(ESI));
  /* 11611b67 mov eax, dword ptr [0x1162fc98] */
  EAX = (r32((uint32_t)(0x1162fc98)));
  /* 11611b6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11611b6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11611b76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11611b7d jmp 0x11611b88 */
  goto L_11611b88;
L_11611b7f:;
  /* 11611b7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611b82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611b85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11611b88:;
  /* 11611b88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611b8c jae 0x11611bc1 */
  if (!C.cf) goto L_11611bc1;
  /* 11611b8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611b91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611b94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11611b97 push ecx */
  push32((uint32_t)(ECX));
  /* 11611b98 call 0x116079e0 */
  push32(0x11611b9du); f_116079e0();
  /* 11611b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611ba0 mov esi, eax */
  ESI = (EAX);
  /* 11611ba2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611ba5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611ba8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11611bac push ecx */
  push32((uint32_t)(ECX));
  /* 11611bad call 0x116079e0 */
  push32(0x11611bb2u); f_116079e0();
  /* 11611bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611bb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611bb8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11611bbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11611bbf jmp 0x11611b7f */
  goto L_11611b7f;
L_11611bc1:;
  /* 11611bc1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11611bc8 jmp 0x11611bd3 */
  goto L_11611bd3;
L_11611bca:;
  /* 11611bca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611bd0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11611bd3:;
  /* 11611bd3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611bd7 jae 0x11611c0d */
  if (!C.cf) goto L_11611c0d;
  /* 11611bd9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611bdc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611bdf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11611be3 push eax */
  push32((uint32_t)(EAX));
  /* 11611be4 call 0x116079e0 */
  push32(0x11611be9u); f_116079e0();
  /* 11611be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611bec mov esi, eax */
  ESI = (EAX);
  /* 11611bee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611bf1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611bf4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11611bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11611bf9 call 0x116079e0 */
  push32(0x11611bfeu); f_116079e0();
  /* 11611bfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c01 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c04 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11611c08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11611c0b jmp 0x11611bca */
  goto L_11611bca;
L_11611c0d:;
  /* 11611c0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611c10 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11611c16 push eax */
  push32((uint32_t)(EAX));
  /* 11611c17 call 0x116079e0 */
  push32(0x11611c1cu); f_116079e0();
  /* 11611c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c1f mov esi, eax */
  ESI = (EAX);
  /* 11611c21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611c24 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11611c2a push edx */
  push32((uint32_t)(EDX));
  /* 11611c2b call 0x116079e0 */
  push32(0x11611c30u); f_116079e0();
  /* 11611c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c33 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c36 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11611c3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11611c3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611c40 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11611c46 push edx */
  push32((uint32_t)(EDX));
  /* 11611c47 call 0x116079e0 */
  push32(0x11611c4cu); f_116079e0();
  /* 11611c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611c52 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11611c56 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11611c59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611c5c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11611c62 push ecx */
  push32((uint32_t)(ECX));
  /* 11611c63 call 0x116079e0 */
  push32(0x11611c68u); f_116079e0();
  /* 11611c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611c6e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11611c72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11611c75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611c78 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11611c7e push edx */
  push32((uint32_t)(EDX));
  /* 11611c7f call 0x116079e0 */
  push32(0x11611c84u); f_116079e0();
  /* 11611c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611c8a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11611c8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11611c91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11611c94 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611c99 push eax */
  push32((uint32_t)(EAX));
  /* 11611c9a call 0x11604b90 */
  push32(0x11611c9fu); f_11604b90();
  /* 11611c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611ca2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11611ca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611ca9 je 0x11611ec6 */
  if (C.zf) goto L_11611ec6;
  /* 11611caf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611cb2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11611cb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611cb8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611cbe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611cc1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11611cc6 mov eax, dword ptr [0x1162fc98] */
  EAX = (r32((uint32_t)(0x1162fc98)));
  /* 11611ccb push eax */
  push32((uint32_t)(EAX));
  /* 11611ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611ccf push ecx */
  push32((uint32_t)(ECX));
  /* 11611cd0 call 0x1160b490 */
  push32(0x11611cd5u); f_1160b490();
  /* 11611cd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611cd8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11611cdf jmp 0x11611cea */
  goto L_11611cea;
L_11611ce1:;
  /* 11611ce1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611ce4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611ce7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11611cea:;
  /* 11611cea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611cee jae 0x11611d5e */
  if (!C.cf) goto L_11611d5e;
  /* 11611cf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611cf3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611cf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611cf9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11611cfc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611cff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611d02 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11611d05 push edx */
  push32((uint32_t)(EDX));
  /* 11611d06 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d09 push eax */
  push32((uint32_t)(EAX));
  /* 11611d0a call 0x11607b60 */
  push32(0x11611d0fu); f_11607b60();
  /* 11611d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611d12 push eax */
  push32((uint32_t)(EAX));
  /* 11611d13 call 0x116079e0 */
  push32(0x11611d18u); f_116079e0();
  /* 11611d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611d1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d1e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11611d22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611d25 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611d28 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611d2b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d2e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11611d32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611d38 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11611d3c push edx */
  push32((uint32_t)(EDX));
  /* 11611d3d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d40 push eax */
  push32((uint32_t)(EAX));
  /* 11611d41 call 0x11607b60 */
  push32(0x11611d46u); f_11607b60();
  /* 11611d46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611d49 push eax */
  push32((uint32_t)(EAX));
  /* 11611d4a call 0x116079e0 */
  push32(0x11611d4fu); f_116079e0();
  /* 11611d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611d52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d55 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11611d59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611d5c jmp 0x11611ce1 */
  goto L_11611ce1;
L_11611d5e:;
  /* 11611d5e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11611d65 jmp 0x11611d70 */
  goto L_11611d70;
L_11611d67:;
  /* 11611d67 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611d6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611d6d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11611d70:;
  /* 11611d70 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611d74 jae 0x11611de6 */
  if (!C.cf) goto L_11611de6;
  /* 11611d76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611d79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611d7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d7f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11611d83 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611d86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611d89 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11611d8d push eax */
  push32((uint32_t)(EAX));
  /* 11611d8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611d91 push ecx */
  push32((uint32_t)(ECX));
  /* 11611d92 call 0x11607b60 */
  push32(0x11611d97u); f_11607b60();
  /* 11611d97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611d9a push eax */
  push32((uint32_t)(EAX));
  /* 11611d9b call 0x116079e0 */
  push32(0x11611da0u); f_116079e0();
  /* 11611da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611da3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611da6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11611daa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11611dad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611db0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611db3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611db6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11611dba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611dbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611dc0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11611dc4 push eax */
  push32((uint32_t)(EAX));
  /* 11611dc5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11611dc9 call 0x11607b60 */
  push32(0x11611dceu); f_11607b60();
  /* 11611dce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611dd1 push eax */
  push32((uint32_t)(EAX));
  /* 11611dd2 call 0x116079e0 */
  push32(0x11611dd7u); f_116079e0();
  /* 11611dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611dda mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611ddd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11611de1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11611de4 jmp 0x11611d67 */
  goto L_11611d67;
L_11611de6:;
  /* 11611de6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611de9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611dec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11611df2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611df5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11611dfb push ecx */
  push32((uint32_t)(ECX));
  /* 11611dfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611dff push edx */
  push32((uint32_t)(EDX));
  /* 11611e00 call 0x11607b60 */
  push32(0x11611e05u); f_11607b60();
  /* 11611e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611e08 push eax */
  push32((uint32_t)(EAX));
  /* 11611e09 call 0x116079e0 */
  push32(0x11611e0eu); f_116079e0();
  /* 11611e0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611e11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e14 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11611e18 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611e1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611e1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e21 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11611e27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611e2a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11611e30 push eax */
  push32((uint32_t)(EAX));
  /* 11611e31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e34 push ecx */
  push32((uint32_t)(ECX));
  /* 11611e35 call 0x11607b60 */
  push32(0x11611e3au); f_11607b60();
  /* 11611e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611e3d push eax */
  push32((uint32_t)(EAX));
  /* 11611e3e call 0x116079e0 */
  push32(0x11611e43u); f_116079e0();
  /* 11611e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611e46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e49 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11611e4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11611e50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611e53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e56 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11611e5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611e5f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11611e65 push ecx */
  push32((uint32_t)(ECX));
  /* 11611e66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e69 push edx */
  push32((uint32_t)(EDX));
  /* 11611e6a call 0x11607b60 */
  push32(0x11611e6fu); f_11607b60();
  /* 11611e6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611e72 push eax */
  push32((uint32_t)(EAX));
  /* 11611e73 call 0x116079e0 */
  push32(0x11611e78u); f_116079e0();
  /* 11611e78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611e7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e7e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11611e82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11611e85 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611e88 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e8b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11611e91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11611e94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11611e9a push eax */
  push32((uint32_t)(EAX));
  /* 11611e9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611e9e push ecx */
  push32((uint32_t)(ECX));
  /* 11611e9f call 0x11607b60 */
  push32(0x11611ea4u); f_11607b60();
  /* 11611ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611ea7 push eax */
  push32((uint32_t)(EAX));
  /* 11611ea8 call 0x116079e0 */
  push32(0x11611eadu); f_116079e0();
  /* 11611ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611eb0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611eb3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11611eb7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11611eba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11611ebd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11611ec0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11611ec6:;
  /* 11611ec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611ec9 pop esi */
  ESI = (pop32());
  /* 11611eca mov esp, ebp */
  ESP = (EBP);
  /* 11611ecc pop ebp */
  EBP = (pop32());
  /* 11611ecd ret  */
  ESPCHK(0x11611b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ed0 @ 0x11611ed0 (31 bytes, 15 insns) */
void f_11611ed0(void) {
  FTRACE(0x11611ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11611ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11611ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11611ed5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11611ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11611ed9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611edc push ecx */
  push32((uint32_t)(ECX));
  /* 11611edd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11611ee0 push edx */
  push32((uint32_t)(EDX));
  /* 11611ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611ee4 push eax */
  push32((uint32_t)(EAX));
  /* 11611ee5 call 0x11611ef0 */
  push32(0x11611eeau); f_11611ef0();
  /* 11611eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611eed pop ebp */
  EBP = (pop32());
  /* 11611eee ret  */
  ESPCHK(0x11611ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x11611ef0 (393 bytes, 123 insns) */
void f_11611ef0(void) {
  FTRACE(0x11611ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11611ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11611ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11611ef3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11611ef6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611efa jne 0x11611f06 */
  if (!C.zf) goto L_11611f06;
  /* 11611efc mov eax, dword ptr [0x1162fc98] */
  EAX = (r32((uint32_t)(0x1162fc98)));
  /* 11611f01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11611f04 jmp 0x11611f0c */
  goto L_11611f0c;
L_11611f06:;
  /* 11611f06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11611f09 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11611f0c:;
  /* 11611f0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11611f0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11611f12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11611f15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11611f18 push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 11611f1d call dword ptr [0x116333a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333a4))), 0x11611f23u);
  /* 11611f23 cmp dword ptr [0x11630abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611f2a je 0x11611f4a */
  if (C.zf) goto L_11611f4a;
  /* 11611f2c push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 11611f31 call dword ptr [0x11633394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633394))), 0x11611f37u);
  /* 11611f37 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11611f39 call 0x116085b0 */
  push32(0x11611f3eu); f_116085b0();
  /* 11611f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611f41 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11611f48 jmp 0x11611f51 */
  goto L_11611f51;
L_11611f4a:;
  /* 11611f4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11611f51:;
  /* 11611f51 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611f55 jbe 0x11612042 */
  if ((C.cf||C.zf)) goto L_11612042;
  /* 11611f5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611f5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11611f60 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11611f63 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11611f67 je 0x11611f71 */
  if (C.zf) goto L_11611f71;
  /* 11611f69 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11611f6d je 0x11611f76 */
  if (C.zf) goto L_11611f76;
  /* 11611f6f jmp 0x11611fd0 */
  goto L_11611fd0;
L_11611f71:;
  /* 11611f71 jmp 0x11612042 */
  goto L_11612042;
L_11611f76:;
  /* 11611f76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611f79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611f7c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11611f7f mov dword ptr [0x11630aa8], 0 */
  w32((uint32_t)(0x11630aa8), (0x0u));
  /* 11611f89 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611f8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11611f8f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611f92 jne 0x11611fa7 */
  if (!C.zf) goto L_11611fa7;
  /* 11611f94 mov dword ptr [0x11630aa8], 1 */
  w32((uint32_t)(0x11630aa8), (0x1u));
  /* 11611f9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611fa1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611fa4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11611fa7:;
  /* 11611fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11611faa push ecx */
  push32((uint32_t)(ECX));
  /* 11611fab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11611fae push edx */
  push32((uint32_t)(EDX));
  /* 11611faf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11611fb2 push eax */
  push32((uint32_t)(EAX));
  /* 11611fb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11611fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11611fb7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611fba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11611fbc push eax */
  push32((uint32_t)(EAX));
  /* 11611fbd call 0x11612080 */
  push32(0x11611fc2u); f_11612080();
  /* 11611fc2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11611fc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611fc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11611fcb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11611fce jmp 0x1161203d */
  goto L_1161203d;
L_11611fd0:;
  /* 11611fd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11611fd5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11611fd7 mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 11611fdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11611fdf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11611fe3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11611fe9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11611feb je 0x11612018 */
  if (C.zf) goto L_11612018;
  /* 11611fed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11611ff1 jbe 0x11612018 */
  if ((C.cf||C.zf)) goto L_11612018;
  /* 11611ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11611ff6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11611ff9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11611ffb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11611ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612003 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11612006 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612009 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161200c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1161200f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612012 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612015 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11612018:;
  /* 11612018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161201b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161201e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11612020 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11612022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612025 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612028 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1161202b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161202e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612031 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11612034 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612037 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161203a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1161203d:;
  /* 1161203d jmp 0x11611f51 */
  goto L_11611f51;
L_11612042:;
  /* 11612042 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612046 je 0x11612054 */
  if (C.zf) goto L_11612054;
  /* 11612048 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1161204a call 0x11608650 */
  push32(0x1161204fu); f_11608650();
  /* 1161204f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612052 jmp 0x1161205f */
  goto L_1161205f;
L_11612054:;
  /* 11612054 push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 11612059 call dword ptr [0x11633394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633394))), 0x1161205fu);
L_1161205f:;
  /* 1161205f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612063 jbe 0x11612073 */
  if ((C.cf||C.zf)) goto L_11612073;
  /* 11612065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612068 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1161206b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161206e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612071 jmp 0x11612075 */
  goto L_11612075;
L_11612073:;
  /* 11612073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11612075:;
  /* 11612075 mov esp, ebp */
  ESP = (EBP);
  /* 11612077 pop ebp */
  EBP = (pop32());
  /* 11612078 ret  */
  ESPCHK(0x11611ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012080 @ 0x11612080 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11612080(void) {
  FTRACE(0x11612080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11612080 push ebp */
  push32((uint32_t)(EBP));
  /* 11612081 mov ebp, esp */
  EBP = (ESP);
  /* 11612083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612086 push esi */
  push32((uint32_t)(ESI));
  /* 11612087 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1161208b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1161208e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612091 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612094 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11612097 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161209b ja 0x116125e8 */
  if ((!C.cf&&!C.zf)) goto L_116125e8;
  /* 116120a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116120a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116120a6 mov dl, byte ptr [eax + 0x11612649] */
  DL = (r8((uint32_t)(EAX + 0x11612649)));
  /* 116120ac jmp dword ptr [edx*4 + 0x116125ed] */
  switch (EDX) {
    case 0: goto L_116125c6;
    case 1: goto L_116120d5;
    case 2: goto L_1161211b;
    case 3: goto L_11612268;
    case 4: goto L_11612290;
    case 5: goto L_1161232f;
    case 6: goto L_1161239b;
    case 7: goto L_116123c4;
    case 8: goto L_11612405;
    case 9: goto L_116124e7;
    case 10: goto L_1161254e;
    case 11: goto L_1161259b;
    case 12: goto L_116120b3;
    case 13: goto L_116120f8;
    case 14: goto L_1161213e;
    case 15: goto L_1161223e;
    case 16: goto L_116122d5;
    case 17: goto L_11612302;
    case 18: goto L_11612357;
    case 19: goto L_116123db;
    case 20: goto L_11612489;
    case 21: goto L_11612518;
    case 22: goto L_116125e8;
    default: x86_unimpl("switch@0x116120ac out of table"); return;
  }
L_116120b3:;
  /* 116120b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116120b6 push ecx */
  push32((uint32_t)(ECX));
  /* 116120b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116120ba push edx */
  push32((uint32_t)(EDX));
  /* 116120bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116120be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116120c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116120c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116120c7 push eax */
  push32((uint32_t)(EAX));
  /* 116120c8 call 0x116126a0 */
  push32(0x116120cdu); f_116126a0();
  /* 116120cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116120d0 jmp 0x116125e8 */
  goto L_116125e8;
L_116120d5:;
  /* 116120d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116120d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116120d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116120dc push edx */
  push32((uint32_t)(EDX));
  /* 116120dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116120e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116120e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116120e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 116120ea push eax */
  push32((uint32_t)(EAX));
  /* 116120eb call 0x116126a0 */
  push32(0x116120f0u); f_116126a0();
  /* 116120f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116120f3 jmp 0x116125e8 */
  goto L_116125e8;
L_116120f8:;
  /* 116120f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116120fb push ecx */
  push32((uint32_t)(ECX));
  /* 116120fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116120ff push edx */
  push32((uint32_t)(EDX));
  /* 11612100 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612103 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11612106 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612109 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1161210d push eax */
  push32((uint32_t)(EAX));
  /* 1161210e call 0x116126a0 */
  push32(0x11612113u); f_116126a0();
  /* 11612113 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612116 jmp 0x116125e8 */
  goto L_116125e8;
L_1161211b:;
  /* 1161211b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161211e push ecx */
  push32((uint32_t)(ECX));
  /* 1161211f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612122 push edx */
  push32((uint32_t)(EDX));
  /* 11612123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612126 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11612129 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1161212c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11612130 push eax */
  push32((uint32_t)(EAX));
  /* 11612131 call 0x116126a0 */
  push32(0x11612136u); f_116126a0();
  /* 11612136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612139 jmp 0x116125e8 */
  goto L_116125e8;
L_1161213e:;
  /* 1161213e cmp dword ptr [0x11630aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612145 je 0x116121c6 */
  if (C.zf) goto L_116121c6;
  /* 11612147 mov dword ptr [0x11630aa8], 0 */
  w32((uint32_t)(0x11630aa8), (0x0u));
  /* 11612151 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612154 push ecx */
  push32((uint32_t)(ECX));
  /* 11612155 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612158 push edx */
  push32((uint32_t)(EDX));
  /* 11612159 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161215c push eax */
  push32((uint32_t)(EAX));
  /* 1161215d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612160 push ecx */
  push32((uint32_t)(ECX));
  /* 11612161 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612164 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1161216a push eax */
  push32((uint32_t)(EAX));
  /* 1161216b call 0x11612850 */
  push32(0x11612170u); f_11612850();
  /* 11612170 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612173 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612176 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612179 jne 0x11612180 */
  if (!C.zf) goto L_11612180;
  /* 1161217b jmp 0x116125e8 */
  goto L_116125e8;
L_11612180:;
  /* 11612180 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612183 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612185 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11612188 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161218b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1161218d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612190 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612193 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11612195 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612198 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1161219a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161219d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116121a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116121a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116121a5 push ecx */
  push32((uint32_t)(ECX));
  /* 116121a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116121a9 push edx */
  push32((uint32_t)(EDX));
  /* 116121aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116121ad push eax */
  push32((uint32_t)(EAX));
  /* 116121ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116121b1 push ecx */
  push32((uint32_t)(ECX));
  /* 116121b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116121b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 116121bb push eax */
  push32((uint32_t)(EAX));
  /* 116121bc call 0x11612850 */
  push32(0x116121c1u); f_11612850();
  /* 116121c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116121c4 jmp 0x11612239 */
  goto L_11612239;
L_116121c6:;
  /* 116121c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116121c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116121ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116121cd push edx */
  push32((uint32_t)(EDX));
  /* 116121ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116121d1 push eax */
  push32((uint32_t)(EAX));
  /* 116121d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116121d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116121d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116121d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 116121df push eax */
  push32((uint32_t)(EAX));
  /* 116121e0 call 0x11612850 */
  push32(0x116121e5u); f_11612850();
  /* 116121e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116121e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116121eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116121ee jne 0x116121f5 */
  if (!C.zf) goto L_116121f5;
  /* 116121f0 jmp 0x116125e8 */
  goto L_116125e8;
L_116121f5:;
  /* 116121f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116121f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116121fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 116121fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612200 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612202 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612205 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612208 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1161220a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161220d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1161220f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612212 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612215 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11612217 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1161221a push ecx */
  push32((uint32_t)(ECX));
  /* 1161221b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161221e push edx */
  push32((uint32_t)(EDX));
  /* 1161221f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612222 push eax */
  push32((uint32_t)(EAX));
  /* 11612223 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612226 push ecx */
  push32((uint32_t)(ECX));
  /* 11612227 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1161222a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11612230 push eax */
  push32((uint32_t)(EAX));
  /* 11612231 call 0x11612850 */
  push32(0x11612236u); f_11612850();
  /* 11612236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11612239:;
  /* 11612239 jmp 0x116125e8 */
  goto L_116125e8;
L_1161223e:;
  /* 1161223e mov ecx, dword ptr [0x11630aa8] */
  ECX = (r32((uint32_t)(0x11630aa8)));
  /* 11612244 mov dword ptr [0x11630ab8], ecx */
  w32((uint32_t)(0x11630ab8), (ECX));
  /* 1161224a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161224d push edx */
  push32((uint32_t)(EDX));
  /* 1161224e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612251 push eax */
  push32((uint32_t)(EAX));
  /* 11612252 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612254 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612257 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1161225a push edx */
  push32((uint32_t)(EDX));
  /* 1161225b call 0x116126f0 */
  push32(0x11612260u); f_116126f0();
  /* 11612260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612263 jmp 0x116125e8 */
  goto L_116125e8;
L_11612268:;
  /* 11612268 mov eax, dword ptr [0x11630aa8] */
  EAX = (r32((uint32_t)(0x11630aa8)));
  /* 1161226d mov dword ptr [0x11630ab8], eax */
  w32((uint32_t)(0x11630ab8), (EAX));
  /* 11612272 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612275 push ecx */
  push32((uint32_t)(ECX));
  /* 11612276 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612279 push edx */
  push32((uint32_t)(EDX));
  /* 1161227a push 2 */
  push32((uint32_t)(0x2u));
  /* 1161227c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161227f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11612282 push ecx */
  push32((uint32_t)(ECX));
  /* 11612283 call 0x116126f0 */
  push32(0x11612288u); f_116126f0();
  /* 11612288 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161228b jmp 0x116125e8 */
  goto L_116125e8;
L_11612290:;
  /* 11612290 mov edx, dword ptr [0x11630aa8] */
  EDX = (r32((uint32_t)(0x11630aa8)));
  /* 11612296 mov dword ptr [0x11630ab8], edx */
  w32((uint32_t)(0x11630ab8), (EDX));
  /* 1161229c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161229f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 116122a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116122a3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 116122a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116122aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116122ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116122b1 jne 0x116122ba */
  if (!C.zf) goto L_116122ba;
  /* 116122b3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_116122ba:;
  /* 116122ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116122bd push edx */
  push32((uint32_t)(EDX));
  /* 116122be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116122c1 push eax */
  push32((uint32_t)(EAX));
  /* 116122c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116122c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116122c7 push ecx */
  push32((uint32_t)(ECX));
  /* 116122c8 call 0x116126f0 */
  push32(0x116122cdu); f_116126f0();
  /* 116122cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116122d0 jmp 0x116125e8 */
  goto L_116125e8;
L_116122d5:;
  /* 116122d5 mov edx, dword ptr [0x11630aa8] */
  EDX = (r32((uint32_t)(0x11630aa8)));
  /* 116122db mov dword ptr [0x11630ab8], edx */
  w32((uint32_t)(0x11630ab8), (EDX));
  /* 116122e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116122e4 push eax */
  push32((uint32_t)(EAX));
  /* 116122e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116122e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116122e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 116122eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116122ee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 116122f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116122f4 push eax */
  push32((uint32_t)(EAX));
  /* 116122f5 call 0x116126f0 */
  push32(0x116122fau); f_116126f0();
  /* 116122fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116122fd jmp 0x116125e8 */
  goto L_116125e8;
L_11612302:;
  /* 11612302 mov ecx, dword ptr [0x11630aa8] */
  ECX = (r32((uint32_t)(0x11630aa8)));
  /* 11612308 mov dword ptr [0x11630ab8], ecx */
  w32((uint32_t)(0x11630ab8), (ECX));
  /* 1161230e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612311 push edx */
  push32((uint32_t)(EDX));
  /* 11612312 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612315 push eax */
  push32((uint32_t)(EAX));
  /* 11612316 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612318 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161231b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1161231e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612321 push edx */
  push32((uint32_t)(EDX));
  /* 11612322 call 0x116126f0 */
  push32(0x11612327u); f_116126f0();
  /* 11612327 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161232a jmp 0x116125e8 */
  goto L_116125e8;
L_1161232f:;
  /* 1161232f mov eax, dword ptr [0x11630aa8] */
  EAX = (r32((uint32_t)(0x11630aa8)));
  /* 11612334 mov dword ptr [0x11630ab8], eax */
  w32((uint32_t)(0x11630ab8), (EAX));
  /* 11612339 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161233c push ecx */
  push32((uint32_t)(ECX));
  /* 1161233d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612340 push edx */
  push32((uint32_t)(EDX));
  /* 11612341 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11612349 push ecx */
  push32((uint32_t)(ECX));
  /* 1161234a call 0x116126f0 */
  push32(0x1161234fu); f_116126f0();
  /* 1161234f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612352 jmp 0x116125e8 */
  goto L_116125e8;
L_11612357:;
  /* 11612357 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161235a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161235e jg 0x1161237c */
  if ((!C.zf&&C.sf==C.of)) goto L_1161237c;
  /* 11612360 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612363 push eax */
  push32((uint32_t)(EAX));
  /* 11612364 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612367 push ecx */
  push32((uint32_t)(ECX));
  /* 11612368 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1161236b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11612371 push eax */
  push32((uint32_t)(EAX));
  /* 11612372 call 0x116126a0 */
  push32(0x11612377u); f_116126a0();
  /* 11612377 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161237a jmp 0x11612396 */
  goto L_11612396;
L_1161237c:;
  /* 1161237c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161237f push ecx */
  push32((uint32_t)(ECX));
  /* 11612380 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612383 push edx */
  push32((uint32_t)(EDX));
  /* 11612384 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612387 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1161238d push ecx */
  push32((uint32_t)(ECX));
  /* 1161238e call 0x116126a0 */
  push32(0x11612393u); f_116126a0();
  /* 11612393 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11612396:;
  /* 11612396 jmp 0x116125e8 */
  goto L_116125e8;
L_1161239b:;
  /* 1161239b mov edx, dword ptr [0x11630aa8] */
  EDX = (r32((uint32_t)(0x11630aa8)));
  /* 116123a1 mov dword ptr [0x11630ab8], edx */
  w32((uint32_t)(0x11630ab8), (EDX));
  /* 116123a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116123aa push eax */
  push32((uint32_t)(EAX));
  /* 116123ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116123ae push ecx */
  push32((uint32_t)(ECX));
  /* 116123af push 2 */
  push32((uint32_t)(0x2u));
  /* 116123b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116123b4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116123b6 push eax */
  push32((uint32_t)(EAX));
  /* 116123b7 call 0x116126f0 */
  push32(0x116123bcu); f_116126f0();
  /* 116123bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116123bf jmp 0x116125e8 */
  goto L_116125e8;
L_116123c4:;
  /* 116123c4 mov ecx, dword ptr [0x11630aa8] */
  ECX = (r32((uint32_t)(0x11630aa8)));
  /* 116123ca mov dword ptr [0x11630ab8], ecx */
  w32((uint32_t)(0x11630ab8), (ECX));
  /* 116123d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116123d3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 116123d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116123d9 jmp 0x1161242d */
  goto L_1161242d;
L_116123db:;
  /* 116123db mov ecx, dword ptr [0x11630aa8] */
  ECX = (r32((uint32_t)(0x11630aa8)));
  /* 116123e1 mov dword ptr [0x11630ab8], ecx */
  w32((uint32_t)(0x11630ab8), (ECX));
  /* 116123e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116123ea push edx */
  push32((uint32_t)(EDX));
  /* 116123eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116123ee push eax */
  push32((uint32_t)(EAX));
  /* 116123ef push 1 */
  push32((uint32_t)(0x1u));
  /* 116123f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116123f4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116123f7 push edx */
  push32((uint32_t)(EDX));
  /* 116123f8 call 0x116126f0 */
  push32(0x116123fdu); f_116126f0();
  /* 116123fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612400 jmp 0x116125e8 */
  goto L_116125e8;
L_11612405:;
  /* 11612405 mov eax, dword ptr [0x11630aa8] */
  EAX = (r32((uint32_t)(0x11630aa8)));
  /* 1161240a mov dword ptr [0x11630ab8], eax */
  w32((uint32_t)(0x11630ab8), (EAX));
  /* 1161240f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612412 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612416 jne 0x11612421 */
  if (!C.zf) goto L_11612421;
  /* 11612418 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1161241f jmp 0x1161242d */
  goto L_1161242d;
L_11612421:;
  /* 11612421 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612424 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11612427 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161242a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1161242d:;
  /* 1161242d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612430 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11612433 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612436 jge 0x11612441 */
  if ((C.sf==C.of)) goto L_11612441;
  /* 11612438 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1161243f jmp 0x1161246e */
  goto L_1161246e;
L_11612441:;
  /* 11612441 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612444 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11612447 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11612448 mov ecx, 7 */
  ECX = (0x7u);
  /* 1161244d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1161244f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11612452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612455 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11612458 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11612459 mov ecx, 7 */
  ECX = (0x7u);
  /* 1161245e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11612460 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612463 jl 0x1161246e */
  if ((C.sf!=C.of)) goto L_1161246e;
  /* 11612465 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612468 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161246b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1161246e:;
  /* 1161246e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612471 push eax */
  push32((uint32_t)(EAX));
  /* 11612472 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612475 push ecx */
  push32((uint32_t)(ECX));
  /* 11612476 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161247b push edx */
  push32((uint32_t)(EDX));
  /* 1161247c call 0x116126f0 */
  push32(0x11612481u); f_116126f0();
  /* 11612481 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612484 jmp 0x116125e8 */
  goto L_116125e8;
L_11612489:;
  /* 11612489 cmp dword ptr [0x11630aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612490 je 0x116124c0 */
  if (C.zf) goto L_116124c0;
  /* 11612492 mov dword ptr [0x11630aa8], 0 */
  w32((uint32_t)(0x11630aa8), (0x0u));
  /* 1161249c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1161249f push eax */
  push32((uint32_t)(EAX));
  /* 116124a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116124a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116124a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116124a7 push edx */
  push32((uint32_t)(EDX));
  /* 116124a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116124ab push eax */
  push32((uint32_t)(EAX));
  /* 116124ac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116124af mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 116124b5 push edx */
  push32((uint32_t)(EDX));
  /* 116124b6 call 0x11612850 */
  push32(0x116124bbu); f_11612850();
  /* 116124bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116124be jmp 0x116124e2 */
  goto L_116124e2;
L_116124c0:;
  /* 116124c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116124c3 push eax */
  push32((uint32_t)(EAX));
  /* 116124c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116124c7 push ecx */
  push32((uint32_t)(ECX));
  /* 116124c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116124cb push edx */
  push32((uint32_t)(EDX));
  /* 116124cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116124cf push eax */
  push32((uint32_t)(EAX));
  /* 116124d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116124d3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 116124d9 push edx */
  push32((uint32_t)(EDX));
  /* 116124da call 0x11612850 */
  push32(0x116124dfu); f_11612850();
  /* 116124df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116124e2:;
  /* 116124e2 jmp 0x116125e8 */
  goto L_116125e8;
L_116124e7:;
  /* 116124e7 mov dword ptr [0x11630aa8], 0 */
  w32((uint32_t)(0x11630aa8), (0x0u));
  /* 116124f1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116124f4 push eax */
  push32((uint32_t)(EAX));
  /* 116124f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116124f8 push ecx */
  push32((uint32_t)(ECX));
  /* 116124f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116124fc push edx */
  push32((uint32_t)(EDX));
  /* 116124fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612500 push eax */
  push32((uint32_t)(EAX));
  /* 11612501 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612504 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1161250a push edx */
  push32((uint32_t)(EDX));
  /* 1161250b call 0x11612850 */
  push32(0x11612510u); f_11612850();
  /* 11612510 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612513 jmp 0x116125e8 */
  goto L_116125e8;
L_11612518:;
  /* 11612518 mov eax, dword ptr [0x11630aa8] */
  EAX = (r32((uint32_t)(0x11630aa8)));
  /* 1161251d mov dword ptr [0x11630ab8], eax */
  w32((uint32_t)(0x11630ab8), (EAX));
  /* 11612522 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612525 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11612528 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11612529 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1161252e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11612530 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11612533 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612536 push edx */
  push32((uint32_t)(EDX));
  /* 11612537 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161253a push eax */
  push32((uint32_t)(EAX));
  /* 1161253b push 2 */
  push32((uint32_t)(0x2u));
  /* 1161253d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612540 push ecx */
  push32((uint32_t)(ECX));
  /* 11612541 call 0x116126f0 */
  push32(0x11612546u); f_116126f0();
  /* 11612546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612549 jmp 0x116125e8 */
  goto L_116125e8;
L_1161254e:;
  /* 1161254e mov edx, dword ptr [0x11630aa8] */
  EDX = (r32((uint32_t)(0x11630aa8)));
  /* 11612554 mov dword ptr [0x11630ab8], edx */
  w32((uint32_t)(0x11630ab8), (EDX));
  /* 1161255a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161255d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11612560 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11612561 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11612566 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11612568 mov ecx, eax */
  ECX = (EAX);
  /* 1161256a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161256d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11612570 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612573 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11612576 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11612577 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1161257c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1161257e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612580 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11612583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612586 push eax */
  push32((uint32_t)(EAX));
  /* 11612587 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161258a push ecx */
  push32((uint32_t)(ECX));
  /* 1161258b push 4 */
  push32((uint32_t)(0x4u));
  /* 1161258d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612590 push edx */
  push32((uint32_t)(EDX));
  /* 11612591 call 0x116126f0 */
  push32(0x11612596u); f_116126f0();
  /* 11612596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612599 jmp 0x116125e8 */
  goto L_116125e8;
L_1161259b:;
  /* 1161259b call 0x116136b0 */
  push32(0x116125a0u); f_116136b0();
  /* 116125a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116125a3 push eax */
  push32((uint32_t)(EAX));
  /* 116125a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116125a7 push ecx */
  push32((uint32_t)(ECX));
  /* 116125a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116125ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116125ad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116125b1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 116125b4 mov ecx, dword ptr [eax*4 + 0x1162fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1162fe1c)));
  /* 116125bb push ecx */
  push32((uint32_t)(ECX));
  /* 116125bc call 0x116126a0 */
  push32(0x116125c1u); f_116126a0();
  /* 116125c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116125c4 jmp 0x116125e8 */
  goto L_116125e8;
L_116125c6:;
  /* 116125c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116125c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116125cb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 116125ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116125d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116125d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116125d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116125d9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116125db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116125de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116125e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116125e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116125e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116125e8:;
  /* 116125e8 pop esi */
  ESI = (pop32());
  /* 116125e9 mov esp, ebp */
  ESP = (EBP);
  /* 116125eb pop ebp */
  EBP = (pop32());
  /* 116125ec ret  */
  ESPCHK(0x11612080u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x116126a0 (72 bytes, 30 insns) */
void f_116126a0(void) {
  FTRACE(0x116126a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116126a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116126a1 mov ebp, esp */
  EBP = (ESP);
L_116126a3:;
  /* 116126a3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116126a6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116126a9 je 0x116126e6 */
  if (C.zf) goto L_116126e6;
  /* 116126ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116126ae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116126b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116126b3 je 0x116126e6 */
  if (C.zf) goto L_116126e6;
  /* 116126b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116126b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116126ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116126bd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116126bf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116126c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116126c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116126c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116126c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116126cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116126ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116126d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116126d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 116126d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116126da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116126dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116126df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116126e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116126e4 jmp 0x116126a3 */
  goto L_116126a3;
L_116126e6:;
  /* 116126e6 pop ebp */
  EBP = (pop32());
  /* 116126e7 ret  */
  ESPCHK(0x116126a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126f0 @ 0x116126f0 (173 bytes, 64 insns) */
void f_116126f0(void) {
  FTRACE(0x116126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116126f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116126f1 mov ebp, esp */
  EBP = (ESP);
  /* 116126f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116126f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116126fb cmp dword ptr [0x11630ab8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630ab8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612702 je 0x1161271a */
  if (C.zf) goto L_1161271a;
  /* 11612704 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612707 push eax */
  push32((uint32_t)(EAX));
  /* 11612708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161270b push ecx */
  push32((uint32_t)(ECX));
  /* 1161270c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161270f push edx */
  push32((uint32_t)(EDX));
  /* 11612710 call 0x116127a0 */
  push32(0x11612715u); f_116127a0();
  /* 11612715 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612718 jmp 0x11612799 */
  goto L_11612799;
L_1161271a:;
  /* 1161271a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161271d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612720 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612722 jae 0x11612790 */
  if (!C.cf) goto L_11612790;
  /* 11612724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612727 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161272a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1161272d jmp 0x11612738 */
  goto L_11612738;
L_1161272f:;
  /* 1161272f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612732 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612735 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11612738:;
  /* 11612738 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161273b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161273e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11612740 je 0x11612774 */
  if (C.zf) goto L_11612774;
  /* 11612742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612745 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11612746 mov ecx, 0xa */
  ECX = (0xau);
  /* 1161274b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1161274d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612750 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612753 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612755 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612758 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1161275b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161275e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1161275f mov ecx, 0xa */
  ECX = (0xau);
  /* 11612764 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11612766 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11612769 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161276c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161276f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11612772 jmp 0x1161272f */
  goto L_1161272f;
L_11612774:;
  /* 11612774 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612777 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612779 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161277c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161277f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11612781 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612784 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612786 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612789 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161278c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1161278e jmp 0x11612799 */
  goto L_11612799;
L_11612790:;
  /* 11612790 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612793 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11612799:;
  /* 11612799 mov esp, ebp */
  ESP = (EBP);
  /* 1161279b pop ebp */
  EBP = (pop32());
  /* 1161279c ret  */
  ESPCHK(0x116126f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x116127a0 (172 bytes, 65 insns) */
void f_116127a0(void) {
  FTRACE(0x116127a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116127a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116127a1 mov ebp, esp */
  EBP = (ESP);
  /* 116127a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116127a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116127a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116127ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116127ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116127b1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116127b4 jbe 0x116127fb */
  if ((C.cf||C.zf)) goto L_116127fb;
L_116127b6:;
  /* 116127b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116127b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116127ba mov ecx, 0xa */
  ECX = (0xau);
  /* 116127bf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116127c1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116127c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116127c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116127c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116127cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116127cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116127d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116127d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116127d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116127da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116127dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116127df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116127e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116127e3 mov ecx, 0xa */
  ECX = (0xau);
  /* 116127e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116127ea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116127ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116127f1 jle 0x116127fb */
  if ((C.zf||C.sf!=C.of)) goto L_116127fb;
  /* 116127f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116127f6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116127f9 ja 0x116127b6 */
  if ((!C.cf&&!C.zf)) goto L_116127b6;
L_116127fb:;
  /* 116127fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116127fe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612800 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11612803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612809 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1161280b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161280e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612811 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11612814:;
  /* 11612814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612817 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11612819 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1161281c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161281f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11612822 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11612824 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11612826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612829 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161282c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1161282f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11612832 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11612835 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11612837 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1161283a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161283d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11612840 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11612843 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612846 jb 0x11612814 */
  if (C.cf) goto L_11612814;
  /* 11612848 mov esp, ebp */
  ESP = (EBP);
  /* 1161284a pop ebp */
  EBP = (pop32());
  /* 1161284b ret  */
  ESPCHK(0x116127a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012850 @ 0x11612850 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11612850(void) {
  FTRACE(0x11612850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11612850 push ebp */
  push32((uint32_t)(EBP));
  /* 11612851 mov ebp, esp */
  EBP = (ESP);
  /* 11612853 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11612856:;
  /* 11612856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612859 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1161285c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1161285e je 0x11612ccc */
  if (C.zf) goto L_11612ccc;
  /* 11612864 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612867 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161286a je 0x11612ccc */
  if (C.zf) goto L_11612ccc;
  /* 11612870 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11612874 mov dword ptr [0x11630ab8], 0 */
  w32((uint32_t)(0x11630ab8), (0x0u));
  /* 1161287e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11612885 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612888 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1161288b jmp 0x11612896 */
  goto L_11612896;
L_1161288d:;
  /* 1161288d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612890 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612893 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11612896:;
  /* 11612896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612899 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1161289c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161289f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116128a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116128a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116128a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116128ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116128ad jne 0x116128b1 */
  if (!C.zf) goto L_116128b1;
  /* 116128af jmp 0x1161288d */
  goto L_1161288d;
L_116128b1:;
  /* 116128b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116128b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116128b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116128ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116128bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116128c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116128c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116128c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116128c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116128cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116128d0 ja 0x11612c20 */
  if ((!C.cf&&!C.zf)) goto L_11612c20;
  /* 116128d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116128d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116128db mov al, byte ptr [ecx + 0x11612cfc] */
  AL = (r8((uint32_t)(ECX + 0x11612cfc)));
  /* 116128e1 jmp dword ptr [eax*4 + 0x11612cd0] */
  switch (EAX) {
    case 0: goto L_11612b3f;
    case 1: goto L_11612a23;
    case 2: goto L_116129ae;
    case 3: goto L_116128e8;
    case 4: goto L_11612926;
    case 5: goto L_11612987;
    case 6: goto L_116129d5;
    case 7: goto L_116129fc;
    case 8: goto L_11612a6a;
    case 9: goto L_11612964;
    case 10: goto L_11612c20;
    default: x86_unimpl("switch@0x116128e1 out of table"); return;
  }
L_116128e8:;
  /* 116128e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116128eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116128ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116128f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116128f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116128f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116128fb ja 0x11612921 */
  if ((!C.cf&&!C.zf)) goto L_11612921;
  /* 116128fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11612900 jmp dword ptr [ecx*4 + 0x11612d4f] */
  switch (ECX) {
    case 0: goto L_11612907;
    case 1: goto L_11612911;
    case 2: goto L_11612917;
    case 3: goto L_1161291d;
    case 4: goto L_11612945;
    case 5: goto L_1161294f;
    case 6: goto L_11612955;
    case 7: goto L_1161295b;
    default: x86_unimpl("switch@0x11612900 out of table"); return;
  }
L_11612907:;
  /* 11612907 mov dword ptr [0x11630ab8], 1 */
  w32((uint32_t)(0x11630ab8), (0x1u));
L_11612911:;
  /* 11612911 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11612915 jmp 0x11612921 */
  goto L_11612921;
L_11612917:;
  /* 11612917 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1161291b jmp 0x11612921 */
  goto L_11612921;
L_1161291d:;
  /* 1161291d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11612921:;
  /* 11612921 jmp 0x11612c20 */
  goto L_11612c20;
L_11612926:;
  /* 11612926 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612929 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1161292c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1161292f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612932 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11612935 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612939 ja 0x1161295f */
  if ((!C.cf&&!C.zf)) goto L_1161295f;
  /* 1161293b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1161293e jmp dword ptr [ecx*4 + 0x11612d5f] */
  switch (ECX) {
    case 0: goto L_11612945;
    case 1: goto L_1161294f;
    case 2: goto L_11612955;
    case 3: goto L_1161295b;
    default: x86_unimpl("switch@0x1161293e out of table"); return;
  }
L_11612945:;
  /* 11612945 mov dword ptr [0x11630ab8], 1 */
  w32((uint32_t)(0x11630ab8), (0x1u));
L_1161294f:;
  /* 1161294f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11612953 jmp 0x1161295f */
  goto L_1161295f;
L_11612955:;
  /* 11612955 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11612959 jmp 0x1161295f */
  goto L_1161295f;
L_1161295b:;
  /* 1161295b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1161295f:;
  /* 1161295f jmp 0x11612c20 */
  goto L_11612c20;
L_11612964:;
  /* 11612964 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612967 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1161296a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161296e je 0x11612978 */
  if (C.zf) goto L_11612978;
  /* 11612970 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612974 je 0x1161297e */
  if (C.zf) goto L_1161297e;
  /* 11612976 jmp 0x11612982 */
  goto L_11612982;
L_11612978:;
  /* 11612978 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1161297c jmp 0x11612982 */
  goto L_11612982;
L_1161297e:;
  /* 1161297e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11612982:;
  /* 11612982 jmp 0x11612c20 */
  goto L_11612c20;
L_11612987:;
  /* 11612987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161298a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1161298d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612991 je 0x1161299b */
  if (C.zf) goto L_1161299b;
  /* 11612993 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612997 je 0x116129a5 */
  if (C.zf) goto L_116129a5;
  /* 11612999 jmp 0x116129a9 */
  goto L_116129a9;
L_1161299b:;
  /* 1161299b mov dword ptr [0x11630ab8], 1 */
  w32((uint32_t)(0x11630ab8), (0x1u));
L_116129a5:;
  /* 116129a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_116129a9:;
  /* 116129a9 jmp 0x11612c20 */
  goto L_11612c20;
L_116129ae:;
  /* 116129ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116129b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 116129b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116129b8 je 0x116129c2 */
  if (C.zf) goto L_116129c2;
  /* 116129ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116129be je 0x116129cc */
  if (C.zf) goto L_116129cc;
  /* 116129c0 jmp 0x116129d0 */
  goto L_116129d0;
L_116129c2:;
  /* 116129c2 mov dword ptr [0x11630ab8], 1 */
  w32((uint32_t)(0x11630ab8), (0x1u));
L_116129cc:;
  /* 116129cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_116129d0:;
  /* 116129d0 jmp 0x11612c20 */
  goto L_11612c20;
L_116129d5:;
  /* 116129d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116129d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 116129db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116129df je 0x116129e9 */
  if (C.zf) goto L_116129e9;
  /* 116129e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116129e5 je 0x116129f3 */
  if (C.zf) goto L_116129f3;
  /* 116129e7 jmp 0x116129f7 */
  goto L_116129f7;
L_116129e9:;
  /* 116129e9 mov dword ptr [0x11630ab8], 1 */
  w32((uint32_t)(0x11630ab8), (0x1u));
L_116129f3:;
  /* 116129f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_116129f7:;
  /* 116129f7 jmp 0x11612c20 */
  goto L_11612c20;
L_116129fc:;
  /* 116129fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116129ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11612a02 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612a06 je 0x11612a10 */
  if (C.zf) goto L_11612a10;
  /* 11612a08 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612a0c je 0x11612a1a */
  if (C.zf) goto L_11612a1a;
  /* 11612a0e jmp 0x11612a1e */
  goto L_11612a1e;
L_11612a10:;
  /* 11612a10 mov dword ptr [0x11630ab8], 1 */
  w32((uint32_t)(0x11630ab8), (0x1u));
L_11612a1a:;
  /* 11612a1a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11612a1e:;
  /* 11612a1e jmp 0x11612c20 */
  goto L_11612c20;
L_11612a23:;
  /* 11612a23 push 0x1162c87c */
  push32((uint32_t)(0x1162c87cu));
  /* 11612a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612a2b push ecx */
  push32((uint32_t)(ECX));
  /* 11612a2c call 0x11613280 */
  push32(0x11612a31u); f_11613280();
  /* 11612a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11612a36 jne 0x11612a43 */
  if (!C.zf) goto L_11612a43;
  /* 11612a38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612a3b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612a3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11612a41 jmp 0x11612a61 */
  goto L_11612a61;
L_11612a43:;
  /* 11612a43 push 0x1162c878 */
  push32((uint32_t)(0x1162c878u));
  /* 11612a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612a4b push eax */
  push32((uint32_t)(EAX));
  /* 11612a4c call 0x11613280 */
  push32(0x11612a51u); f_11613280();
  /* 11612a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11612a56 jne 0x11612a61 */
  if (!C.zf) goto L_11612a61;
  /* 11612a58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612a5b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612a5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11612a61:;
  /* 11612a61 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11612a65 jmp 0x11612c20 */
  goto L_11612c20;
L_11612a6a:;
  /* 11612a6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612a6d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612a71 jg 0x11612a81 */
  if ((!C.zf&&C.sf==C.of)) goto L_11612a81;
  /* 11612a73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612a76 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11612a7c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11612a7f jmp 0x11612a8d */
  goto L_11612a8d;
L_11612a81:;
  /* 11612a81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612a84 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11612a8a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11612a8d:;
  /* 11612a8d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612a91 jle 0x11612b34 */
  if ((C.zf||C.sf!=C.of)) goto L_11612b34;
  /* 11612a97 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612a9a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612a9d jbe 0x11612b34 */
  if ((C.cf||C.zf)) goto L_11612b34;
  /* 11612aa3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11612aa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11612aa8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11612aaa mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 11612ab0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11612ab2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11612ab6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11612abc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11612abe je 0x11612af7 */
  if (C.zf) goto L_11612af7;
  /* 11612ac0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612ac3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612ac6 jbe 0x11612af7 */
  if ((C.cf||C.zf)) goto L_11612af7;
  /* 11612ac8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612acb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612acd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11612ad0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11612ad2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11612ad4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612ad7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612ad9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612adc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612adf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11612ae1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11612ae4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612ae7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11612aea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612aed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612aef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612af2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612af5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11612af7:;
  /* 11612af7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612afa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612afc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11612aff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11612b01 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11612b03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612b06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612b08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612b0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612b0e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11612b10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11612b13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612b16 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11612b19 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612b1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612b1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612b21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612b24 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11612b26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612b29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612b2c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11612b2f jmp 0x11612a8d */
  goto L_11612a8d;
L_11612b34:;
  /* 11612b34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612b37 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11612b3a jmp 0x11612856 */
  goto L_11612856;
L_11612b3f:;
  /* 11612b3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612b42 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11612b45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11612b47 je 0x11612c12 */
  if (C.zf) goto L_11612c12;
  /* 11612b4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612b50 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612b53 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11612b56:;
  /* 11612b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612b59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11612b5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11612b5e je 0x11612c10 */
  if (C.zf) goto L_11612c10;
  /* 11612b64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612b67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612b6a je 0x11612c10 */
  if (C.zf) goto L_11612c10;
  /* 11612b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612b73 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11612b76 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612b79 jne 0x11612b89 */
  if (!C.zf) goto L_11612b89;
  /* 11612b7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612b7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612b81 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11612b84 jmp 0x11612c10 */
  goto L_11612c10;
L_11612b89:;
  /* 11612b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612b8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11612b8e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11612b90 mov edx, dword ptr [0x1162ec98] */
  EDX = (r32((uint32_t)(0x1162ec98)));
  /* 11612b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11612b98 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11612b9c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11612ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11612ba3 je 0x11612bdc */
  if (C.zf) goto L_11612bdc;
  /* 11612ba5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612ba8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612bab jbe 0x11612bdc */
  if ((C.cf||C.zf)) goto L_11612bdc;
  /* 11612bad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612bb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612bb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612bb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11612bb7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11612bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612bbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612bbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612bc1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612bc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11612bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612bc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612bcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11612bcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612bd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612bd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612bd7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612bda mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11612bdc:;
  /* 11612bdc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612bdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612be4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11612be6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11612be8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612beb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612bed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612bf3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11612bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612bf8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612bfb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11612bfe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612c01 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612c03 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612c06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612c09 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11612c0b jmp 0x11612b56 */
  goto L_11612b56;
L_11612c10:;
  /* 11612c10 jmp 0x11612c1b */
  goto L_11612c1b;
L_11612c12:;
  /* 11612c12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612c15 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612c18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11612c1b:;
  /* 11612c1b jmp 0x11612856 */
  goto L_11612856;
L_11612c20:;
  /* 11612c20 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11612c24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11612c26 je 0x11612c4c */
  if (C.zf) goto L_11612c4c;
  /* 11612c28 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11612c2b push edx */
  push32((uint32_t)(EDX));
  /* 11612c2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612c2f push eax */
  push32((uint32_t)(EAX));
  /* 11612c30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11612c34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612c37 push edx */
  push32((uint32_t)(EDX));
  /* 11612c38 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11612c3b push eax */
  push32((uint32_t)(EAX));
  /* 11612c3c call 0x11612080 */
  push32(0x11612c41u); f_11612080();
  /* 11612c41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612c44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11612c47 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11612c4a jmp 0x11612cc7 */
  goto L_11612cc7;
L_11612c4c:;
  /* 11612c4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612c4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11612c51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11612c53 mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 11612c59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11612c5b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11612c5f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11612c65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11612c67 je 0x11612c98 */
  if (C.zf) goto L_11612c98;
  /* 11612c69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612c6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612c71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11612c73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11612c75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612c78 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612c7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612c7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612c80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11612c82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612c88 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11612c8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612c8e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612c90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612c93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612c96 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11612c98:;
  /* 11612c98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612c9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11612c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612ca0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11612ca2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11612ca4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612ca7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612ca9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612cac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612caf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11612cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11612cb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612cb7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11612cba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612cbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11612cbf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612cc2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612cc5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11612cc7:;
  /* 11612cc7 jmp 0x11612856 */
  goto L_11612856;
L_11612ccc:;
  /* 11612ccc mov esp, ebp */
  ESP = (EBP);
  /* 11612cce pop ebp */
  EBP = (pop32());
  /* 11612ccf ret  */
  ESPCHK(0x11612850u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x11612d70 (650 bytes, 178 insns) */
void f_11612d70(void) {
  FTRACE(0x11612d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11612d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11612d71 mov ebp, esp */
  EBP = (ESP);
  /* 11612d73 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11612d79 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612d7d jne 0x11612ed9 */
  if (!C.zf) goto L_11612ed9;
  /* 11612d83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612d86 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11612d8c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11612d92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11612d95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11612d9c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11612da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11612da8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11612dae push edx */
  push32((uint32_t)(EDX));
  /* 11612daf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612db2 push eax */
  push32((uint32_t)(EAX));
  /* 11612db3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612db6 push ecx */
  push32((uint32_t)(ECX));
  /* 11612db7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612dba push edx */
  push32((uint32_t)(EDX));
  /* 11612dbb call 0x11614190 */
  push32(0x11612dc0u); f_11614190();
  /* 11612dc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612dc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11612dc6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612dca jne 0x11612e5f */
  if (!C.zf) goto L_11612e5f;
  /* 11612dd0 call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x11612dd6u);
  /* 11612dd6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612dd9 je 0x11612de0 */
  if (C.zf) goto L_11612de0;
  /* 11612ddb jmp 0x11612ebd */
  goto L_11612ebd;
L_11612de0:;
  /* 11612de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11612de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11612de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11612de6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612de9 push eax */
  push32((uint32_t)(EAX));
  /* 11612dea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612ded push ecx */
  push32((uint32_t)(ECX));
  /* 11612dee call 0x11614190 */
  push32(0x11612df3u); f_11614190();
  /* 11612df3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612df6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11612dfc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612e03 jne 0x11612e0a */
  if (!C.zf) goto L_11612e0a;
  /* 11612e05 jmp 0x11612ebd */
  goto L_11612ebd;
L_11612e0a:;
  /* 11612e0a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11612e0c push 0x1162c884 */
  push32((uint32_t)(0x1162c884u));
  /* 11612e11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612e13 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11612e19 push edx */
  push32((uint32_t)(EDX));
  /* 11612e1a call 0x11604bb0 */
  push32(0x11612e1fu); f_11604bb0();
  /* 11612e1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612e22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11612e25 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612e29 jne 0x11612e30 */
  if (!C.zf) goto L_11612e30;
  /* 11612e2b jmp 0x11612ebd */
  goto L_11612ebd;
L_11612e30:;
  /* 11612e30 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11612e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11612e39 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11612e3f push eax */
  push32((uint32_t)(EAX));
  /* 11612e40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11612e44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612e47 push edx */
  push32((uint32_t)(EDX));
  /* 11612e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612e4b push eax */
  push32((uint32_t)(EAX));
  /* 11612e4c call 0x11614190 */
  push32(0x11612e51u); f_11614190();
  /* 11612e51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612e54 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11612e57 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612e5b jne 0x11612e5f */
  if (!C.zf) goto L_11612e5f;
  /* 11612e5d jmp 0x11612ebd */
  goto L_11612ebd;
L_11612e5f:;
  /* 11612e5f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11612e61 push 0x1162c884 */
  push32((uint32_t)(0x1162c884u));
  /* 11612e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612e68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11612e6b push ecx */
  push32((uint32_t)(ECX));
  /* 11612e6c call 0x11604bb0 */
  push32(0x11612e71u); f_11604bb0();
  /* 11612e71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612e74 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11612e7a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11612e7c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11612e82 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612e85 jne 0x11612e89 */
  if (!C.zf) goto L_11612e89;
  /* 11612e87 jmp 0x11612ebd */
  goto L_11612ebd;
L_11612e89:;
  /* 11612e89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11612e8c push ecx */
  push32((uint32_t)(ECX));
  /* 11612e8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612e90 push edx */
  push32((uint32_t)(EDX));
  /* 11612e91 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11612e97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11612e99 push ecx */
  push32((uint32_t)(ECX));
  /* 11612e9a call 0x116083d0 */
  push32(0x11612e9fu); f_116083d0();
  /* 11612e9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612ea2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612ea6 je 0x11612eb6 */
  if (C.zf) goto L_11612eb6;
  /* 11612ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612eaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612ead push edx */
  push32((uint32_t)(EDX));
  /* 11612eae call 0x11605640 */
  push32(0x11612eb3u); f_11605640();
  /* 11612eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11612eb6:;
  /* 11612eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11612eb8 jmp 0x11612ff6 */
  goto L_11612ff6;
L_11612ebd:;
  /* 11612ebd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612ec1 je 0x11612ed1 */
  if (C.zf) goto L_11612ed1;
  /* 11612ec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11612ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11612ec8 push eax */
  push32((uint32_t)(EAX));
  /* 11612ec9 call 0x11605640 */
  push32(0x11612eceu); f_11605640();
  /* 11612ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11612ed1:;
  /* 11612ed1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11612ed4 jmp 0x11612ff6 */
  goto L_11612ff6;
L_11612ed9:;
  /* 11612ed9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612edd jne 0x11612ff3 */
  if (!C.zf) goto L_11612ff3;
  /* 11612ee3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11612eed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11612ef0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11612ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11612ef8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11612efe push edx */
  push32((uint32_t)(EDX));
  /* 11612eff push 0x116309d0 */
  push32((uint32_t)(0x116309d0u));
  /* 11612f04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11612f07 push eax */
  push32((uint32_t)(EAX));
  /* 11612f08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11612f0b push ecx */
  push32((uint32_t)(ECX));
  /* 11612f0c call 0x11613ff0 */
  push32(0x11612f11u); f_11613ff0();
  /* 11612f11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11612f16 jne 0x11612f20 */
  if (!C.zf) goto L_11612f20;
  /* 11612f18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11612f1b jmp 0x11612ff6 */
  goto L_11612ff6;
L_11612f20:;
  /* 11612f20 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11612f26 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11612f29 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11612f33 jmp 0x11612f44 */
  goto L_11612f44;
L_11612f35:;
  /* 11612f35 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11612f3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11612f3e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11612f44:;
  /* 11612f44 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612f4b jge 0x11612fef */
  if ((C.sf==C.of)) goto L_11612fef;
  /* 11612f51 cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612f58 jle 0x11612f8b */
  if ((C.zf||C.sf!=C.of)) goto L_11612f8b;
  /* 11612f5a push 4 */
  push32((uint32_t)(0x4u));
  /* 11612f5c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11612f62 mov dl, byte ptr [ecx*2 + 0x116309d0] */
  DL = (r8((uint32_t)(ECX*2 + 0x116309d0)));
  /* 11612f69 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11612f6f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11612f75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11612f7a push eax */
  push32((uint32_t)(EAX));
  /* 11612f7b call 0x1160abc0 */
  push32(0x11612f80u); f_1160abc0();
  /* 11612f80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11612f83 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11612f89 jmp 0x11612fbe */
  goto L_11612fbe;
L_11612f8b:;
  /* 11612f8b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11612f91 mov dl, byte ptr [ecx*2 + 0x116309d0] */
  DL = (r8((uint32_t)(ECX*2 + 0x116309d0)));
  /* 11612f98 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11612f9e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11612fa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11612fa9 mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 11612faf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11612fb1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11612fb5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11612fb8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11612fbe:;
  /* 11612fbe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11612fc5 je 0x11612fe8 */
  if (C.zf) goto L_11612fe8;
  /* 11612fc7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11612fcd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11612fd0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11612fd3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11612fda lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11612fde mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11612fe4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11612fe6 jmp 0x11612fea */
  goto L_11612fea;
L_11612fe8:;
  /* 11612fe8 jmp 0x11612fef */
  goto L_11612fef;
L_11612fea:;
  /* 11612fea jmp 0x11612f35 */
  goto L_11612f35;
L_11612fef:;
  /* 11612fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11612ff1 jmp 0x11612ff6 */
  goto L_11612ff6;
L_11612ff3:;
  /* 11612ff3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11612ff6:;
  /* 11612ff6 mov esp, ebp */
  ESP = (EBP);
  /* 11612ff8 pop ebp */
  EBP = (pop32());
  /* 11612ff9 ret  */
  ESPCHK(0x11612d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013000 @ 0x11613000 (10 bytes, 5 insns) */
void f_11613000(void) {
  FTRACE(0x11613000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613000 push ebp */
  push32((uint32_t)(EBP));
  /* 11613001 mov ebp, esp */
  EBP = (ESP);
  /* 11613003 mov eax, dword ptr [0x1162fd88] */
  EAX = (r32((uint32_t)(0x1162fd88)));
  /* 11613008 pop ebp */
  EBP = (pop32());
  /* 11613009 ret  */
  ESPCHK(0x11613000u, _esp0);
  ESP += 4; return;
}

/* FUN_10013010 @ 0x11613010 (575 bytes, 196 insns) */
void f_11613010(void) {
  FTRACE(0x11613010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613010 push ebp */
  push32((uint32_t)(EBP));
  /* 11613011 mov ebp, esp */
  EBP = (ESP);
  /* 11613013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11613015 push 0x1162c890 */
  push32((uint32_t)(0x1162c890u));
  /* 1161301a push 0x1160dcb8 */
  push32((uint32_t)(0x1160dcb8u));
  /* 1161301f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11613025 push eax */
  push32((uint32_t)(EAX));
  /* 11613026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1161302d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613030 push ebx */
  push32((uint32_t)(EBX));
  /* 11613031 push esi */
  push32((uint32_t)(ESI));
  /* 11613032 push edi */
  push32((uint32_t)(EDI));
  /* 11613033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11613036 cmp dword ptr [0x116309dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161303d jne 0x1161308e */
  if (!C.zf) goto L_1161308e;
  /* 1161303f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11613042 push eax */
  push32((uint32_t)(EAX));
  /* 11613043 push 1 */
  push32((uint32_t)(0x1u));
  /* 11613045 push 0x1162bfc4 */
  push32((uint32_t)(0x1162bfc4u));
  /* 1161304a push 1 */
  push32((uint32_t)(0x1u));
  /* 1161304c call dword ptr [0x1163331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163331c))), 0x11613052u);
  /* 11613052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11613054 je 0x11613062 */
  if (C.zf) goto L_11613062;
  /* 11613056 mov dword ptr [0x116309dc], 1 */
  w32((uint32_t)(0x116309dc), (0x1u));
  /* 11613060 jmp 0x1161308e */
  goto L_1161308e;
L_11613062:;
  /* 11613062 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11613065 push ecx */
  push32((uint32_t)(ECX));
  /* 11613066 push 1 */
  push32((uint32_t)(0x1u));
  /* 11613068 push 0x1162bfc0 */
  push32((uint32_t)(0x1162bfc0u));
  /* 1161306d push 1 */
  push32((uint32_t)(0x1u));
  /* 1161306f push 0 */
  push32((uint32_t)(0x0u));
  /* 11613071 call dword ptr [0x11633320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633320))), 0x11613077u);
  /* 11613077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11613079 je 0x11613087 */
  if (C.zf) goto L_11613087;
  /* 1161307b mov dword ptr [0x116309dc], 2 */
  w32((uint32_t)(0x116309dc), (0x2u));
  /* 11613085 jmp 0x1161308e */
  goto L_1161308e;
L_11613087:;
  /* 11613087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613089 jmp 0x11613269 */
  goto L_11613269;
L_1161308e:;
  /* 1161308e cmp dword ptr [0x116309dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116309dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613095 jne 0x116130b2 */
  if (!C.zf) goto L_116130b2;
  /* 11613097 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161309a push edx */
  push32((uint32_t)(EDX));
  /* 1161309b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161309e push eax */
  push32((uint32_t)(EAX));
  /* 1161309f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116130a2 push ecx */
  push32((uint32_t)(ECX));
  /* 116130a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116130a6 push edx */
  push32((uint32_t)(EDX));
  /* 116130a7 call dword ptr [0x1163331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163331c))), 0x116130adu);
  /* 116130ad jmp 0x11613269 */
  goto L_11613269;
L_116130b2:;
  /* 116130b2 cmp dword ptr [0x116309dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116309dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116130b9 jne 0x11613267 */
  if (!C.zf) goto L_11613267;
  /* 116130bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116130c3 jne 0x116130cd */
  if (!C.zf) goto L_116130cd;
  /* 116130c5 mov eax, dword ptr [0x11630950] */
  EAX = (r32((uint32_t)(0x11630950)));
  /* 116130ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_116130cd:;
  /* 116130cd push 0 */
  push32((uint32_t)(0x0u));
  /* 116130cf push 0 */
  push32((uint32_t)(0x0u));
  /* 116130d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116130d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116130d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116130d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116130d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116130dc push edx */
  push32((uint32_t)(EDX));
  /* 116130dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116130e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116130e5 push eax */
  push32((uint32_t)(EAX));
  /* 116130e6 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x116130ecu);
  /* 116130ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116130ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116130f3 jne 0x116130fc */
  if (!C.zf) goto L_116130fc;
  /* 116130f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116130f7 jmp 0x11613269 */
  goto L_11613269;
L_116130fc:;
  /* 116130fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11613103 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11613106 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613109 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1161310b call 0x11607d50 */
  push32(0x11613110u); f_11607d50();
  /* 11613110 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11613113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11613116 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11613119 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1161311c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1161311f push edx */
  push32((uint32_t)(EDX));
  /* 11613120 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613122 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11613125 push eax */
  push32((uint32_t)(EAX));
  /* 11613126 call 0x11608920 */
  push32(0x1161312bu); f_11608920();
  /* 1161312b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161312e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11613135 jmp 0x1161314e */
  goto L_1161314e;
  /* 11613137 mov eax, 1 */
  EAX = (0x1u);
  /* 1161313c ret  */
  ESPCHK(0x11613010u, _esp0);
  ESP += 4; return;
  /* 1161313d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11613140 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11613147 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1161314e:;
  /* 1161314e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613152 jne 0x1161315b */
  if (!C.zf) goto L_1161315b;
  /* 11613154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613156 jmp 0x11613269 */
  goto L_11613269;
L_1161315b:;
  /* 1161315b push 0 */
  push32((uint32_t)(0x0u));
  /* 1161315d push 0 */
  push32((uint32_t)(0x0u));
  /* 1161315f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11613162 push ecx */
  push32((uint32_t)(ECX));
  /* 11613163 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11613166 push edx */
  push32((uint32_t)(EDX));
  /* 11613167 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161316a push eax */
  push32((uint32_t)(EAX));
  /* 1161316b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161316e push ecx */
  push32((uint32_t)(ECX));
  /* 1161316f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11613174 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11613177 push edx */
  push32((uint32_t)(EDX));
  /* 11613178 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x1161317eu);
  /* 1161317e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11613180 jne 0x11613189 */
  if (!C.zf) goto L_11613189;
  /* 11613182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613184 jmp 0x11613269 */
  goto L_11613269;
L_11613189:;
  /* 11613189 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11613190 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11613193 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11613197 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161319a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1161319c call 0x11607d50 */
  push32(0x116131a1u); f_11607d50();
  /* 116131a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 116131a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116131a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116131aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116131ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116131b4 jmp 0x116131cd */
  goto L_116131cd;
  /* 116131b6 mov eax, 1 */
  EAX = (0x1u);
  /* 116131bb ret  */
  ESPCHK(0x11613010u, _esp0);
  ESP += 4; return;
  /* 116131bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116131bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116131c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116131cd:;
  /* 116131cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116131d1 jne 0x116131da */
  if (!C.zf) goto L_116131da;
  /* 116131d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116131d5 jmp 0x11613269 */
  goto L_11613269;
L_116131da:;
  /* 116131da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116131de jne 0x116131e9 */
  if (!C.zf) goto L_116131e9;
  /* 116131e0 mov edx, dword ptr [0x11630940] */
  EDX = (r32((uint32_t)(0x11630940)));
  /* 116131e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_116131e9:;
  /* 116131e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116131ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116131ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 116131f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116131f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116131fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11613202 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11613205 push ecx */
  push32((uint32_t)(ECX));
  /* 11613206 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11613209 push edx */
  push32((uint32_t)(EDX));
  /* 1161320a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1161320d push eax */
  push32((uint32_t)(EAX));
  /* 1161320e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613211 push ecx */
  push32((uint32_t)(ECX));
  /* 11613212 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11613215 push edx */
  push32((uint32_t)(EDX));
  /* 11613216 call dword ptr [0x11633320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633320))), 0x1161321cu);
  /* 1161321c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1161321f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613222 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11613225 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613227 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1161322c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613232 je 0x11613248 */
  if (C.zf) goto L_11613248;
  /* 11613234 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613237 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1161323a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1161323c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11613240 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613246 je 0x1161324c */
  if (C.zf) goto L_1161324c;
L_11613248:;
  /* 11613248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161324a jmp 0x11613269 */
  goto L_11613269;
L_1161324c:;
  /* 1161324c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161324f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11613251 push eax */
  push32((uint32_t)(EAX));
  /* 11613252 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11613255 push ecx */
  push32((uint32_t)(ECX));
  /* 11613256 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613259 push edx */
  push32((uint32_t)(EDX));
  /* 1161325a call 0x1160caa0 */
  push32(0x1161325fu); f_1160caa0();
  /* 1161325f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613262 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11613265 jmp 0x11613269 */
  goto L_11613269;
L_11613267:;
  /* 11613267 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11613269:;
  /* 11613269 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1161326c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1161326f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11613276 pop edi */
  EDI = (pop32());
  /* 11613277 pop esi */
  ESI = (pop32());
  /* 11613278 pop ebx */
  EBX = (pop32());
  /* 11613279 mov esp, ebp */
  ESP = (EBP);
  /* 1161327b pop ebp */
  EBP = (pop32());
  /* 1161327c ret  */
  ESPCHK(0x11613010u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x11613280 (208 bytes, 85 insns) */
void f_11613280(void) {
  FTRACE(0x11613280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613280 push ebp */
  push32((uint32_t)(EBP));
  /* 11613281 mov ebp, esp */
  EBP = (ESP);
  /* 11613283 push edi */
  push32((uint32_t)(EDI));
  /* 11613284 push esi */
  push32((uint32_t)(ESI));
  /* 11613285 push ebx */
  push32((uint32_t)(EBX));
  /* 11613286 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11613289 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1161328c lea eax, [0x11630938] */
  EAX = ((uint32_t)(0x11630938));
  /* 11613292 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613296 jne 0x116132d3 */
  if (!C.zf) goto L_116132d3;
  /* 11613298 mov al, 0xff */
  AL = (0xffu);
  /* 1161329a mov edi, edi */
  EDI = (EDI);
L_1161329c:;
  /* 1161329c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1161329e je 0x116132ce */
  if (C.zf) goto L_116132ce;
  /* 116132a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116132a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116132a3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 116132a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116132a6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116132a8 je 0x1161329c */
  if (C.zf) goto L_1161329c;
  /* 116132aa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116132ac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116132ae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116132b0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116132b3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116132b5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116132b7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 116132b9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116132bb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116132bd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116132bf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 116132c2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116132c4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116132c6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116132c8 je 0x1161329c */
  if (C.zf) goto L_1161329c;
  /* 116132ca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116132cc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_116132ce:;
  /* 116132ce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 116132d1 jmp 0x1161334b */
  goto L_1161334b;
L_116132d3:;
  /* 116132d3 lock inc dword ptr [0x11630acc] */
  x86_unimpl("lock inc @ 0x116132d3");
  /* 116132da cmp dword ptr [0x11630abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116132e1 jg 0x116132e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_116132e7;
  /* 116132e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116132e5 jmp 0x116132fc */
  goto L_116132fc;
L_116132e7:;
  /* 116132e7 lock dec dword ptr [0x11630acc] */
  x86_unimpl("lock dec @ 0x116132e7");
  /* 116132ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116132f0 call 0x116085b0 */
  push32(0x116132f5u); f_116085b0();
  /* 116132f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_116132fc:;
  /* 116132fc mov eax, 0xff */
  EAX = (0xffu);
  /* 11613301 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11613303 nop  */
  /* nop */
L_11613304:;
  /* 11613304 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11613306 je 0x1161332f */
  if (C.zf) goto L_1161332f;
  /* 11613308 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1161330a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1161330b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1161330d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1161330e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11613310 je 0x11613304 */
  if (C.zf) goto L_11613304;
  /* 11613312 push eax */
  push32((uint32_t)(EAX));
  /* 11613313 push ebx */
  push32((uint32_t)(EBX));
  /* 11613314 call 0x116143f0 */
  push32(0x11613319u); f_116143f0();
  /* 11613319 mov ebx, eax */
  EBX = (EAX);
  /* 1161331b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161331e call 0x116143f0 */
  push32(0x11613323u); f_116143f0();
  /* 11613323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613326 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11613328 je 0x11613304 */
  if (C.zf) goto L_11613304;
  /* 1161332a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1161332c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1161332f:;
  /* 1161332f mov ebx, eax */
  EBX = (EAX);
  /* 11613331 pop eax */
  EAX = (pop32());
  /* 11613332 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613334 jne 0x1161333f */
  if (!C.zf) goto L_1161333f;
  /* 11613336 lock dec dword ptr [0x11630acc] */
  x86_unimpl("lock dec @ 0x11613336");
  /* 1161333d jmp 0x11613349 */
  goto L_11613349;
L_1161333f:;
  /* 1161333f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11613341 call 0x11608650 */
  push32(0x11613346u); f_11608650();
  /* 11613346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11613349:;
  /* 11613349 mov eax, ebx */
  EAX = (EBX);
L_1161334b:;
  /* 1161334b pop ebx */
  EBX = (pop32());
  /* 1161334c pop esi */
  ESI = (pop32());
  /* 1161334d pop edi */
  EDI = (pop32());
  /* 1161334e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1161334f ret  */
  ESPCHK(0x11613280u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x11613350 (257 bytes, 103 insns) */
void f_11613350(void) {
  FTRACE(0x11613350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613350 push ebp */
  push32((uint32_t)(EBP));
  /* 11613351 mov ebp, esp */
  EBP = (ESP);
  /* 11613353 push edi */
  push32((uint32_t)(EDI));
  /* 11613354 push esi */
  push32((uint32_t)(ESI));
  /* 11613355 push ebx */
  push32((uint32_t)(EBX));
  /* 11613356 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613359 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1161335b je 0x1161344a */
  if (C.zf) goto L_1161344a;
  /* 11613361 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11613364 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11613367 lea eax, [0x11630938] */
  EAX = ((uint32_t)(0x11630938));
  /* 1161336d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613371 jne 0x116133c1 */
  if (!C.zf) goto L_116133c1;
  /* 11613373 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11613375 mov bl, 0x5a */
  BL = (0x5au);
  /* 11613377 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11613379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1161337c:;
  /* 1161337c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1161337e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11613380 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11613382 je 0x116133a5 */
  if (C.zf) goto L_116133a5;
  /* 11613384 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11613386 je 0x116133a5 */
  if (C.zf) goto L_116133a5;
  /* 11613388 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11613389 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1161338a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1161338c jb 0x11613394 */
  if (C.cf) goto L_11613394;
  /* 1161338e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11613390 ja 0x11613394 */
  if ((!C.cf&&!C.zf)) goto L_11613394;
  /* 11613392 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11613394:;
  /* 11613394 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11613396 jb 0x1161339e */
  if (C.cf) goto L_1161339e;
  /* 11613398 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1161339a ja 0x1161339e */
  if ((!C.cf&&!C.zf)) goto L_1161339e;
  /* 1161339c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1161339e:;
  /* 1161339e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116133a0 jne 0x116133af */
  if (!C.zf) goto L_116133af;
  /* 116133a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116133a3 jne 0x1161337c */
  if (!C.zf) goto L_1161337c;
L_116133a5:;
  /* 116133a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116133a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116133a9 je 0x1161344a */
  if (C.zf) goto L_1161344a;
L_116133af:;
  /* 116133af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116133b4 jb 0x1161344a */
  if (C.cf) goto L_1161344a;
  /* 116133ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116133bc jmp 0x1161344a */
  goto L_1161344a;
L_116133c1:;
  /* 116133c1 lock inc dword ptr [0x11630acc] */
  x86_unimpl("lock inc @ 0x116133c1");
  /* 116133c8 cmp dword ptr [0x11630abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116133cf jg 0x116133d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_116133d5;
  /* 116133d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116133d3 jmp 0x116133ee */
  goto L_116133ee;
L_116133d5:;
  /* 116133d5 lock dec dword ptr [0x11630acc] */
  x86_unimpl("lock dec @ 0x116133d5");
  /* 116133dc mov ebx, ecx */
  EBX = (ECX);
  /* 116133de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116133e0 call 0x116085b0 */
  push32(0x116133e5u); f_116085b0();
  /* 116133e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 116133ec mov ecx, ebx */
  ECX = (EBX);
L_116133ee:;
  /* 116133ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116133f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116133f2 mov edi, edi */
  EDI = (EDI);
L_116133f4:;
  /* 116133f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116133f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116133f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116133fa je 0x1161341f */
  if (C.zf) goto L_1161341f;
  /* 116133fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116133fe je 0x1161341f */
  if (C.zf) goto L_1161341f;
  /* 11613400 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11613401 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11613402 push ecx */
  push32((uint32_t)(ECX));
  /* 11613403 push eax */
  push32((uint32_t)(EAX));
  /* 11613404 push ebx */
  push32((uint32_t)(EBX));
  /* 11613405 call 0x116143f0 */
  push32(0x1161340au); f_116143f0();
  /* 1161340a mov ebx, eax */
  EBX = (EAX);
  /* 1161340c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161340f call 0x116143f0 */
  push32(0x11613414u); f_116143f0();
  /* 11613414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613417 pop ecx */
  ECX = (pop32());
  /* 11613418 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161341a jne 0x11613425 */
  if (!C.zf) goto L_11613425;
  /* 1161341c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1161341d jne 0x116133f4 */
  if (!C.zf) goto L_116133f4;
L_1161341f:;
  /* 1161341f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613421 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613423 je 0x1161342e */
  if (C.zf) goto L_1161342e;
L_11613425:;
  /* 11613425 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1161342a jb 0x1161342e */
  if (C.cf) goto L_1161342e;
  /* 1161342c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1161342e:;
  /* 1161342e pop eax */
  EAX = (pop32());
  /* 1161342f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613431 jne 0x1161343c */
  if (!C.zf) goto L_1161343c;
  /* 11613433 lock dec dword ptr [0x11630acc] */
  x86_unimpl("lock dec @ 0x11613433");
  /* 1161343a jmp 0x1161344a */
  goto L_1161344a;
L_1161343c:;
  /* 1161343c mov ebx, ecx */
  EBX = (ECX);
  /* 1161343e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11613440 call 0x11608650 */
  push32(0x11613445u); f_11608650();
  /* 11613445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613448 mov ecx, ebx */
  ECX = (EBX);
L_1161344a:;
  /* 1161344a mov eax, ecx */
  EAX = (ECX);
  /* 1161344c pop ebx */
  EBX = (pop32());
  /* 1161344d pop esi */
  ESI = (pop32());
  /* 1161344e pop edi */
  EDI = (pop32());
  /* 1161344f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11613450 ret  */
  ESPCHK(0x11613350u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x11613460 (255 bytes, 88 insns) */
void f_11613460(void) {
  FTRACE(0x11613460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613460 push ebp */
  push32((uint32_t)(EBP));
  /* 11613461 mov ebp, esp */
  EBP = (ESP);
  /* 11613463 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11613466:;
  /* 11613466 cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161346d jle 0x11613486 */
  if ((C.zf||C.sf!=C.of)) goto L_11613486;
  /* 1161346f push 8 */
  push32((uint32_t)(0x8u));
  /* 11613471 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613474 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613476 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11613478 push ecx */
  push32((uint32_t)(ECX));
  /* 11613479 call 0x1160abc0 */
  push32(0x1161347eu); f_1160abc0();
  /* 1161347e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613481 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11613484 jmp 0x1161349f */
  goto L_1161349f;
L_11613486:;
  /* 11613486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161348b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1161348d mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 11613493 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613495 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11613499 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1161349c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1161349f:;
  /* 1161349f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116134a3 je 0x116134b0 */
  if (C.zf) goto L_116134b0;
  /* 116134a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116134a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116134ab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116134ae jmp 0x11613466 */
  goto L_11613466;
L_116134b0:;
  /* 116134b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116134b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116134b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116134b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116134ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116134bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116134c0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116134c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116134c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116134c9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116134cd je 0x116134d5 */
  if (C.zf) goto L_116134d5;
  /* 116134cf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116134d3 jne 0x116134e8 */
  if (!C.zf) goto L_116134e8;
L_116134d5:;
  /* 116134d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116134d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116134da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116134dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116134df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116134e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116134e5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_116134e8:;
  /* 116134e8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116134ef:;
  /* 116134ef cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116134f6 jle 0x1161350b */
  if ((C.zf||C.sf!=C.of)) goto L_1161350b;
  /* 116134f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 116134fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116134fd push edx */
  push32((uint32_t)(EDX));
  /* 116134fe call 0x1160abc0 */
  push32(0x11613503u); f_1160abc0();
  /* 11613503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613506 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11613509 jmp 0x11613520 */
  goto L_11613520;
L_1161350b:;
  /* 1161350b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161350e mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 11613514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613516 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1161351a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1161351d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11613520:;
  /* 11613520 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613524 je 0x1161354b */
  if (C.zf) goto L_1161354b;
  /* 11613526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613529 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161352c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161352f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11613533 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11613536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1161353b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1161353d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11613540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613543 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613546 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11613549 jmp 0x116134ef */
  goto L_116134ef;
L_1161354b:;
  /* 1161354b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161354f jne 0x11613558 */
  if (!C.zf) goto L_11613558;
  /* 11613551 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613554 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11613556 jmp 0x1161355b */
  goto L_1161355b;
L_11613558:;
  /* 11613558 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1161355b:;
  /* 1161355b mov esp, ebp */
  ESP = (EBP);
  /* 1161355d pop ebp */
  EBP = (pop32());
  /* 1161355e ret  */
  ESPCHK(0x11613460u, _esp0);
  ESP += 4; return;
}

/* FUN_10013560 @ 0x11613560 (17 bytes, 8 insns) */
void f_11613560(void) {
  FTRACE(0x11613560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613560 push ebp */
  push32((uint32_t)(EBP));
  /* 11613561 mov ebp, esp */
  EBP = (ESP);
  /* 11613563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613566 push eax */
  push32((uint32_t)(EAX));
  /* 11613567 call 0x11613460 */
  push32(0x1161356cu); f_11613460();
  /* 1161356c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161356f pop ebp */
  EBP = (pop32());
  /* 11613570 ret  */
  ESPCHK(0x11613560u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x11613580 (297 bytes, 106 insns) */
void f_11613580(void) {
  FTRACE(0x11613580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613580 push ebp */
  push32((uint32_t)(EBP));
  /* 11613581 mov ebp, esp */
  EBP = (ESP);
  /* 11613583 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613586 push esi */
  push32((uint32_t)(ESI));
L_11613587:;
  /* 11613587 cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161358e jle 0x116135a7 */
  if ((C.zf||C.sf!=C.of)) goto L_116135a7;
  /* 11613590 push 8 */
  push32((uint32_t)(0x8u));
  /* 11613592 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613595 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613597 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11613599 push ecx */
  push32((uint32_t)(ECX));
  /* 1161359a call 0x1160abc0 */
  push32(0x1161359fu); f_1160abc0();
  /* 1161359f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116135a2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116135a5 jmp 0x116135c0 */
  goto L_116135c0;
L_116135a7:;
  /* 116135a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116135aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116135ac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116135ae mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 116135b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116135b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116135ba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116135bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116135c0:;
  /* 116135c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116135c4 je 0x116135d1 */
  if (C.zf) goto L_116135d1;
  /* 116135c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116135c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116135cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116135cf jmp 0x11613587 */
  goto L_11613587;
L_116135d1:;
  /* 116135d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116135d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116135d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116135d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116135db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116135de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116135e1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116135e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116135e7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116135ea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116135ee je 0x116135f6 */
  if (C.zf) goto L_116135f6;
  /* 116135f0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116135f4 jne 0x11613609 */
  if (!C.zf) goto L_11613609;
L_116135f6:;
  /* 116135f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116135f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116135fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116135fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11613600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613603 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613606 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11613609:;
  /* 11613609 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11613610 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11613617:;
  /* 11613617 cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161361e jle 0x11613633 */
  if ((C.zf||C.sf!=C.of)) goto L_11613633;
  /* 11613620 push 4 */
  push32((uint32_t)(0x4u));
  /* 11613622 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613625 push edx */
  push32((uint32_t)(EDX));
  /* 11613626 call 0x1160abc0 */
  push32(0x1161362bu); f_1160abc0();
  /* 1161362b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161362e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11613631 jmp 0x11613648 */
  goto L_11613648;
L_11613633:;
  /* 11613633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613636 mov ecx, dword ptr [0x1162ec98] */
  ECX = (r32((uint32_t)(0x1162ec98)));
  /* 1161363c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1161363e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11613642 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11613645 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11613648:;
  /* 11613648 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161364c je 0x11613689 */
  if (C.zf) goto L_11613689;
  /* 1161364e push 0 */
  push32((uint32_t)(0x0u));
  /* 11613650 push 0xa */
  push32((uint32_t)(0xau));
  /* 11613652 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613655 push eax */
  push32((uint32_t)(EAX));
  /* 11613656 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613659 push ecx */
  push32((uint32_t)(ECX));
  /* 1161365a call 0x11614520 */
  push32(0x1161365fu); f_11614520();
  /* 1161365f mov ecx, eax */
  ECX = (EAX);
  /* 11613661 mov esi, edx */
  ESI = (EDX);
  /* 11613663 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613666 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613669 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1161366a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161366c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1161366e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11613671 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11613674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613679 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1161367b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1161367e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613684 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11613687 jmp 0x11613617 */
  goto L_11613617;
L_11613689:;
  /* 11613689 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161368d jne 0x1161369e */
  if (!C.zf) goto L_1161369e;
  /* 1161368f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613692 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11613694 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613697 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161369a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1161369c jmp 0x116136a4 */
  goto L_116136a4;
L_1161369e:;
  /* 1161369e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116136a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_116136a4:;
  /* 116136a4 pop esi */
  ESI = (pop32());
  /* 116136a5 mov esp, ebp */
  ESP = (EBP);
  /* 116136a7 pop ebp */
  EBP = (pop32());
  /* 116136a8 ret  */
  ESPCHK(0x11613580u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x116136b0 (61 bytes, 18 insns) */
void f_116136b0(void) {
  FTRACE(0x116136b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116136b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116136b1 mov ebp, esp */
  EBP = (ESP);
  /* 116136b3 cmp dword ptr [0x11630a98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630a98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116136ba jne 0x116136eb */
  if (!C.zf) goto L_116136eb;
  /* 116136bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 116136be call 0x116085b0 */
  push32(0x116136c3u); f_116085b0();
  /* 116136c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116136c6 cmp dword ptr [0x11630a98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630a98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116136cd jne 0x116136e1 */
  if (!C.zf) goto L_116136e1;
  /* 116136cf call 0x11613710 */
  push32(0x116136d4u); f_11613710();
  /* 116136d4 mov eax, dword ptr [0x11630a98] */
  EAX = (r32((uint32_t)(0x11630a98)));
  /* 116136d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116136dc mov dword ptr [0x11630a98], eax */
  w32((uint32_t)(0x11630a98), (EAX));
L_116136e1:;
  /* 116136e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116136e3 call 0x11608650 */
  push32(0x116136e8u); f_11608650();
  /* 116136e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116136eb:;
  /* 116136eb pop ebp */
  EBP = (pop32());
  /* 116136ec ret  */
  ESPCHK(0x116136b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136f0 @ 0x116136f0 (30 bytes, 11 insns) */
void f_116136f0(void) {
  FTRACE(0x116136f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116136f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116136f1 mov ebp, esp */
  EBP = (ESP);
  /* 116136f3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 116136f5 call 0x116085b0 */
  push32(0x116136fau); f_116085b0();
  /* 116136fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116136fd call 0x11613710 */
  push32(0x11613702u); f_11613710();
  /* 11613702 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11613704 call 0x11608650 */
  push32(0x11613709u); f_11608650();
  /* 11613709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161370c pop ebp */
  EBP = (pop32());
  /* 1161370d ret  */
  ESPCHK(0x116136f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013710 @ 0x11613710 (939 bytes, 266 insns) */
void f_11613710(void) {
  FTRACE(0x11613710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613710 push ebp */
  push32((uint32_t)(EBP));
  /* 11613711 mov ebp, esp */
  EBP = (ESP);
  /* 11613713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613716 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1161371d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1161371f call 0x116085b0 */
  push32(0x11613724u); f_116085b0();
  /* 11613724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613727 mov dword ptr [0x116309e0], 0 */
  w32((uint32_t)(0x116309e0), (0x0u));
  /* 11613731 mov dword ptr [0x1162fe38], 0xffffffff */
  w32((uint32_t)(0x1162fe38), (0xffffffffu));
  /* 1161373b mov eax, dword ptr [0x1162fe38] */
  EAX = (r32((uint32_t)(0x1162fe38)));
  /* 11613740 mov dword ptr [0x1162fe28], eax */
  w32((uint32_t)(0x1162fe28), (EAX));
  /* 11613745 push 0x1162c8f0 */
  push32((uint32_t)(0x1162c8f0u));
  /* 1161374a call 0x11614590 */
  push32(0x1161374fu); f_11614590();
  /* 1161374f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11613755 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613759 jne 0x11613893 */
  if (!C.zf) goto L_11613893;
  /* 1161375f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11613761 call 0x11608650 */
  push32(0x11613766u); f_11608650();
  /* 11613766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613769 push 0x116309e8 */
  push32((uint32_t)(0x116309e8u));
  /* 1161376e call dword ptr [0x116332e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332e0))), 0x11613774u);
  /* 11613774 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613777 je 0x1161388e */
  if (C.zf) goto L_1161388e;
  /* 1161377d mov dword ptr [0x116309e0], 1 */
  w32((uint32_t)(0x116309e0), (0x1u));
  /* 11613787 mov ecx, dword ptr [0x116309e8] */
  ECX = (r32((uint32_t)(0x116309e8)));
  /* 1161378d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613790 mov dword ptr [0x1162fd90], ecx */
  w32((uint32_t)(0x1162fd90), (ECX));
  /* 11613796 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613798 mov dx, word ptr [0x11630a2e] */
  DX = (r16((uint32_t)(0x11630a2e)));
  /* 1161379f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116137a1 je 0x116137b9 */
  if (C.zf) goto L_116137b9;
  /* 116137a3 mov eax, dword ptr [0x11630a3c] */
  EAX = (r32((uint32_t)(0x11630a3c)));
  /* 116137a8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116137ab mov ecx, dword ptr [0x1162fd90] */
  ECX = (r32((uint32_t)(0x1162fd90)));
  /* 116137b1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116137b3 mov dword ptr [0x1162fd90], ecx */
  w32((uint32_t)(0x1162fd90), (ECX));
L_116137b9:;
  /* 116137b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116137bb mov dx, word ptr [0x11630a82] */
  DX = (r16((uint32_t)(0x11630a82)));
  /* 116137c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116137c4 je 0x116137ee */
  if (C.zf) goto L_116137ee;
  /* 116137c6 cmp dword ptr [0x11630a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116137cd je 0x116137ee */
  if (C.zf) goto L_116137ee;
  /* 116137cf mov dword ptr [0x1162fd94], 1 */
  w32((uint32_t)(0x1162fd94), (0x1u));
  /* 116137d9 mov eax, dword ptr [0x11630a90] */
  EAX = (r32((uint32_t)(0x11630a90)));
  /* 116137de sub eax, dword ptr [0x11630a3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11630a3c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116137e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116137e7 mov dword ptr [0x1162fd98], eax */
  w32((uint32_t)(0x1162fd98), (EAX));
  /* 116137ec jmp 0x11613802 */
  goto L_11613802;
L_116137ee:;
  /* 116137ee mov dword ptr [0x1162fd94], 0 */
  w32((uint32_t)(0x1162fd94), (0x0u));
  /* 116137f8 mov dword ptr [0x1162fd98], 0 */
  w32((uint32_t)(0x1162fd98), (0x0u));
L_11613802:;
  /* 11613802 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11613805 push ecx */
  push32((uint32_t)(ECX));
  /* 11613806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613808 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1161380a mov edx, dword ptr [0x1162fe1c] */
  EDX = (r32((uint32_t)(0x1162fe1c)));
  /* 11613810 push edx */
  push32((uint32_t)(EDX));
  /* 11613811 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11613813 push 0x116309ec */
  push32((uint32_t)(0x116309ecu));
  /* 11613818 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1161381d mov eax, dword ptr [0x11630950] */
  EAX = (r32((uint32_t)(0x11630950)));
  /* 11613822 push eax */
  push32((uint32_t)(EAX));
  /* 11613823 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x11613829u);
  /* 11613829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161382b je 0x1161383f */
  if (C.zf) goto L_1161383f;
  /* 1161382d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613831 jne 0x1161383f */
  if (!C.zf) goto L_1161383f;
  /* 11613833 mov ecx, dword ptr [0x1162fe1c] */
  ECX = (r32((uint32_t)(0x1162fe1c)));
  /* 11613839 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1161383d jmp 0x11613848 */
  goto L_11613848;
L_1161383f:;
  /* 1161383f mov edx, dword ptr [0x1162fe1c] */
  EDX = (r32((uint32_t)(0x1162fe1c)));
  /* 11613845 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11613848:;
  /* 11613848 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1161384b push eax */
  push32((uint32_t)(EAX));
  /* 1161384c push 0 */
  push32((uint32_t)(0x0u));
  /* 1161384e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11613850 mov ecx, dword ptr [0x1162fe20] */
  ECX = (r32((uint32_t)(0x1162fe20)));
  /* 11613856 push ecx */
  push32((uint32_t)(ECX));
  /* 11613857 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11613859 push 0x11630a40 */
  push32((uint32_t)(0x11630a40u));
  /* 1161385e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11613863 mov edx, dword ptr [0x11630950] */
  EDX = (r32((uint32_t)(0x11630950)));
  /* 11613869 push edx */
  push32((uint32_t)(EDX));
  /* 1161386a call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x11613870u);
  /* 11613870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11613872 je 0x11613885 */
  if (C.zf) goto L_11613885;
  /* 11613874 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613878 jne 0x11613885 */
  if (!C.zf) goto L_11613885;
  /* 1161387a mov eax, dword ptr [0x1162fe20] */
  EAX = (r32((uint32_t)(0x1162fe20)));
  /* 1161387f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11613883 jmp 0x1161388e */
  goto L_1161388e;
L_11613885:;
  /* 11613885 mov ecx, dword ptr [0x1162fe20] */
  ECX = (r32((uint32_t)(0x1162fe20)));
  /* 1161388b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1161388e:;
  /* 1161388e jmp 0x11613ab7 */
  goto L_11613ab7;
L_11613893:;
  /* 11613893 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613896 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11613899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161389b je 0x116138bd */
  if (C.zf) goto L_116138bd;
  /* 1161389d cmp dword ptr [0x11630a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116138a4 je 0x116138cc */
  if (C.zf) goto L_116138cc;
  /* 116138a6 mov ecx, dword ptr [0x11630a94] */
  ECX = (r32((uint32_t)(0x11630a94)));
  /* 116138ac push ecx */
  push32((uint32_t)(ECX));
  /* 116138ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116138b0 push edx */
  push32((uint32_t)(EDX));
  /* 116138b1 call 0x11610840 */
  push32(0x116138b6u); f_11610840();
  /* 116138b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116138b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116138bb jne 0x116138cc */
  if (!C.zf) goto L_116138cc;
L_116138bd:;
  /* 116138bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 116138bf call 0x11608650 */
  push32(0x116138c4u); f_11608650();
  /* 116138c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116138c7 jmp 0x11613ab7 */
  goto L_11613ab7;
L_116138cc:;
  /* 116138cc push 2 */
  push32((uint32_t)(0x2u));
  /* 116138ce mov eax, dword ptr [0x11630a94] */
  EAX = (r32((uint32_t)(0x11630a94)));
  /* 116138d3 push eax */
  push32((uint32_t)(EAX));
  /* 116138d4 call 0x11605640 */
  push32(0x116138d9u); f_11605640();
  /* 116138d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116138dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 116138e1 push 0x1162c8e8 */
  push32((uint32_t)(0x1162c8e8u));
  /* 116138e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116138e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116138eb push ecx */
  push32((uint32_t)(ECX));
  /* 116138ec call 0x116079e0 */
  push32(0x116138f1u); f_116079e0();
  /* 116138f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116138f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116138f7 push eax */
  push32((uint32_t)(EAX));
  /* 116138f8 call 0x11604bb0 */
  push32(0x116138fdu); f_11604bb0();
  /* 116138fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613900 mov dword ptr [0x11630a94], eax */
  w32((uint32_t)(0x11630a94), (EAX));
  /* 11613905 cmp dword ptr [0x11630a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161390c jne 0x1161391d */
  if (!C.zf) goto L_1161391d;
  /* 1161390e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11613910 call 0x11608650 */
  push32(0x11613915u); f_11608650();
  /* 11613915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613918 jmp 0x11613ab7 */
  goto L_11613ab7;
L_1161391d:;
  /* 1161391d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613920 push edx */
  push32((uint32_t)(EDX));
  /* 11613921 mov eax, dword ptr [0x11630a94] */
  EAX = (r32((uint32_t)(0x11630a94)));
  /* 11613926 push eax */
  push32((uint32_t)(EAX));
  /* 11613927 call 0x11607b60 */
  push32(0x1161392cu); f_11607b60();
  /* 1161392c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161392f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11613931 call 0x11608650 */
  push32(0x11613936u); f_11608650();
  /* 11613936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613939 push 3 */
  push32((uint32_t)(0x3u));
  /* 1161393b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161393e push ecx */
  push32((uint32_t)(ECX));
  /* 1161393f mov edx, dword ptr [0x1162fe1c] */
  EDX = (r32((uint32_t)(0x1162fe1c)));
  /* 11613945 push edx */
  push32((uint32_t)(EDX));
  /* 11613946 call 0x116083d0 */
  push32(0x1161394bu); f_116083d0();
  /* 1161394b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161394e mov eax, dword ptr [0x1162fe1c] */
  EAX = (r32((uint32_t)(0x1162fe1c)));
  /* 11613953 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11613957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161395a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161395d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11613960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613963 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11613966 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613969 jne 0x1161397d */
  if (!C.zf) goto L_1161397d;
  /* 1161396b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161396e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613971 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11613974 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613977 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161397a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1161397d:;
  /* 1161397d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613980 push eax */
  push32((uint32_t)(EAX));
  /* 11613981 call 0x11613460 */
  push32(0x11613986u); f_11613460();
  /* 11613986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613989 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1161398f mov dword ptr [0x1162fd90], eax */
  w32((uint32_t)(0x1162fd90), (EAX));
L_11613994:;
  /* 11613994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613997 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1161399a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161399d je 0x116139b5 */
  if (C.zf) goto L_116139b5;
  /* 1161399f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116139a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116139a8 jl 0x116139c0 */
  if ((C.sf!=C.of)) goto L_116139c0;
  /* 116139aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116139b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116139b3 jg 0x116139c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_116139c0;
L_116139b5:;
  /* 116139b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116139bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116139be jmp 0x11613994 */
  goto L_11613994;
L_116139c0:;
  /* 116139c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116139c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116139c9 jne 0x11613a65 */
  if (!C.zf) goto L_11613a65;
  /* 116139cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116139d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116139d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139db push edx */
  push32((uint32_t)(EDX));
  /* 116139dc call 0x11613460 */
  push32(0x116139e1u); f_11613460();
  /* 116139e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116139e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116139e7 mov ecx, dword ptr [0x1162fd90] */
  ECX = (r32((uint32_t)(0x1162fd90)));
  /* 116139ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116139ef mov dword ptr [0x1162fd90], ecx */
  w32((uint32_t)(0x1162fd90), (ECX));
L_116139f5:;
  /* 116139f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116139f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116139fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116139fe jl 0x11613a16 */
  if ((C.sf!=C.of)) goto L_11613a16;
  /* 11613a00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a03 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11613a06 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613a09 jg 0x11613a16 */
  if ((!C.zf&&C.sf==C.of)) goto L_11613a16;
  /* 11613a0b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613a11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11613a14 jmp 0x116139f5 */
  goto L_116139f5;
L_11613a16:;
  /* 11613a16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a19 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11613a1c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613a1f jne 0x11613a65 */
  if (!C.zf) goto L_11613a65;
  /* 11613a21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613a27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11613a2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a2d push ecx */
  push32((uint32_t)(ECX));
  /* 11613a2e call 0x11613460 */
  push32(0x11613a33u); f_11613460();
  /* 11613a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613a36 mov edx, dword ptr [0x1162fd90] */
  EDX = (r32((uint32_t)(0x1162fd90)));
  /* 11613a3c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613a3e mov dword ptr [0x1162fd90], edx */
  w32((uint32_t)(0x1162fd90), (EDX));
L_11613a44:;
  /* 11613a44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11613a4a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613a4d jl 0x11613a65 */
  if ((C.sf!=C.of)) goto L_11613a65;
  /* 11613a4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11613a55 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613a58 jg 0x11613a65 */
  if ((!C.zf&&C.sf==C.of)) goto L_11613a65;
  /* 11613a5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613a60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11613a63 jmp 0x11613a44 */
  goto L_11613a44;
L_11613a65:;
  /* 11613a65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613a69 je 0x11613a79 */
  if (C.zf) goto L_11613a79;
  /* 11613a6b mov edx, dword ptr [0x1162fd90] */
  EDX = (r32((uint32_t)(0x1162fd90)));
  /* 11613a71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11613a73 mov dword ptr [0x1162fd90], edx */
  w32((uint32_t)(0x1162fd90), (EDX));
L_11613a79:;
  /* 11613a79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11613a7f mov dword ptr [0x1162fd94], ecx */
  w32((uint32_t)(0x1162fd94), (ECX));
  /* 11613a85 cmp dword ptr [0x1162fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1162fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613a8c je 0x11613aae */
  if (C.zf) goto L_11613aae;
  /* 11613a8e push 3 */
  push32((uint32_t)(0x3u));
  /* 11613a90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613a93 push edx */
  push32((uint32_t)(EDX));
  /* 11613a94 mov eax, dword ptr [0x1162fe20] */
  EAX = (r32((uint32_t)(0x1162fe20)));
  /* 11613a99 push eax */
  push32((uint32_t)(EAX));
  /* 11613a9a call 0x116083d0 */
  push32(0x11613a9fu); f_116083d0();
  /* 11613a9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613aa2 mov ecx, dword ptr [0x1162fe20] */
  ECX = (r32((uint32_t)(0x1162fe20)));
  /* 11613aa8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11613aac jmp 0x11613ab7 */
  goto L_11613ab7;
L_11613aae:;
  /* 11613aae mov edx, dword ptr [0x1162fe20] */
  EDX = (r32((uint32_t)(0x1162fe20)));
  /* 11613ab4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11613ab7:;
  /* 11613ab7 mov esp, ebp */
  ESP = (EBP);
  /* 11613ab9 pop ebp */
  EBP = (pop32());
  /* 11613aba ret  */
  ESPCHK(0x11613710u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ac0 @ 0x11613ac0 (46 bytes, 18 insns) */
void f_11613ac0(void) {
  FTRACE(0x11613ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11613ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11613ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11613ac4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11613ac6 call 0x116085b0 */
  push32(0x11613acbu); f_116085b0();
  /* 11613acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613ace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11613ad2 call 0x11613af0 */
  push32(0x11613ad7u); f_11613af0();
  /* 11613ad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11613add push 0xb */
  push32((uint32_t)(0xbu));
  /* 11613adf call 0x11608650 */
  push32(0x11613ae4u); f_11608650();
  /* 11613ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613aea mov esp, ebp */
  ESP = (EBP);
  /* 11613aec pop ebp */
  EBP = (pop32());
  /* 11613aed ret  */
  ESPCHK(0x11613ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013af0 @ 0x11613af0 (762 bytes, 246 insns) */
void f_11613af0(void) {
  FTRACE(0x11613af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11613af1 mov ebp, esp */
  EBP = (ESP);
  /* 11613af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11613af4 cmp dword ptr [0x1162fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1162fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613afb jne 0x11613b04 */
  if (!C.zf) goto L_11613b04;
  /* 11613afd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613aff jmp 0x11613de6 */
  goto L_11613de6;
L_11613b04:;
  /* 11613b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613b07 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11613b0a cmp ecx, dword ptr [0x1162fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1162fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613b10 jne 0x11613b24 */
  if (!C.zf) goto L_11613b24;
  /* 11613b12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613b15 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11613b18 cmp eax, dword ptr [0x1162fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613b1e je 0x11613ceb */
  if (C.zf) goto L_11613ceb;
L_11613b24:;
  /* 11613b24 cmp dword ptr [0x116309e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116309e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613b2b je 0x11613ca5 */
  if (C.zf) goto L_11613ca5;
  /* 11613b31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613b33 mov cx, word ptr [0x11630a80] */
  CX = (r16((uint32_t)(0x11630a80)));
  /* 11613b3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11613b3c jne 0x11613b99 */
  if (!C.zf) goto L_11613b99;
  /* 11613b3e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613b40 mov dx, word ptr [0x11630a8e] */
  DX = (r16((uint32_t)(0x11630a8e)));
  /* 11613b47 push edx */
  push32((uint32_t)(EDX));
  /* 11613b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613b4a mov ax, word ptr [0x11630a8c] */
  AX = (r16((uint32_t)(0x11630a8c)));
  /* 11613b50 push eax */
  push32((uint32_t)(EAX));
  /* 11613b51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613b53 mov cx, word ptr [0x11630a8a] */
  CX = (r16((uint32_t)(0x11630a8a)));
  /* 11613b5a push ecx */
  push32((uint32_t)(ECX));
  /* 11613b5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613b5d mov dx, word ptr [0x11630a88] */
  DX = (r16((uint32_t)(0x11630a88)));
  /* 11613b64 push edx */
  push32((uint32_t)(EDX));
  /* 11613b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613b69 mov ax, word ptr [0x11630a84] */
  AX = (r16((uint32_t)(0x11630a84)));
  /* 11613b6f push eax */
  push32((uint32_t)(EAX));
  /* 11613b70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613b72 mov cx, word ptr [0x11630a86] */
  CX = (r16((uint32_t)(0x11630a86)));
  /* 11613b79 push ecx */
  push32((uint32_t)(ECX));
  /* 11613b7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613b7c mov dx, word ptr [0x11630a82] */
  DX = (r16((uint32_t)(0x11630a82)));
  /* 11613b83 push edx */
  push32((uint32_t)(EDX));
  /* 11613b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613b87 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11613b8a push ecx */
  push32((uint32_t)(ECX));
  /* 11613b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11613b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11613b8f call 0x11613df0 */
  push32(0x11613b94u); f_11613df0();
  /* 11613b94 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613b97 jmp 0x11613bea */
  goto L_11613bea;
L_11613b99:;
  /* 11613b99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613b9b mov dx, word ptr [0x11630a8e] */
  DX = (r16((uint32_t)(0x11630a8e)));
  /* 11613ba2 push edx */
  push32((uint32_t)(EDX));
  /* 11613ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613ba5 mov ax, word ptr [0x11630a8c] */
  AX = (r16((uint32_t)(0x11630a8c)));
  /* 11613bab push eax */
  push32((uint32_t)(EAX));
  /* 11613bac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613bae mov cx, word ptr [0x11630a8a] */
  CX = (r16((uint32_t)(0x11630a8a)));
  /* 11613bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11613bb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613bb8 mov dx, word ptr [0x11630a88] */
  DX = (r16((uint32_t)(0x11630a88)));
  /* 11613bbf push edx */
  push32((uint32_t)(EDX));
  /* 11613bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613bc2 mov ax, word ptr [0x11630a86] */
  AX = (r16((uint32_t)(0x11630a86)));
  /* 11613bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11613bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11613bcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613bcf mov cx, word ptr [0x11630a82] */
  CX = (r16((uint32_t)(0x11630a82)));
  /* 11613bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11613bd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613bda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11613bdd push eax */
  push32((uint32_t)(EAX));
  /* 11613bde push 0 */
  push32((uint32_t)(0x0u));
  /* 11613be0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11613be2 call 0x11613df0 */
  push32(0x11613be7u); f_11613df0();
  /* 11613be7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11613bea:;
  /* 11613bea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613bec mov cx, word ptr [0x11630a2c] */
  CX = (r16((uint32_t)(0x11630a2c)));
  /* 11613bf3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11613bf5 jne 0x11613c52 */
  if (!C.zf) goto L_11613c52;
  /* 11613bf7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613bf9 mov dx, word ptr [0x11630a3a] */
  DX = (r16((uint32_t)(0x11630a3a)));
  /* 11613c00 push edx */
  push32((uint32_t)(EDX));
  /* 11613c01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613c03 mov ax, word ptr [0x11630a38] */
  AX = (r16((uint32_t)(0x11630a38)));
  /* 11613c09 push eax */
  push32((uint32_t)(EAX));
  /* 11613c0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613c0c mov cx, word ptr [0x11630a36] */
  CX = (r16((uint32_t)(0x11630a36)));
  /* 11613c13 push ecx */
  push32((uint32_t)(ECX));
  /* 11613c14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613c16 mov dx, word ptr [0x11630a34] */
  DX = (r16((uint32_t)(0x11630a34)));
  /* 11613c1d push edx */
  push32((uint32_t)(EDX));
  /* 11613c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11613c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613c22 mov ax, word ptr [0x11630a30] */
  AX = (r16((uint32_t)(0x11630a30)));
  /* 11613c28 push eax */
  push32((uint32_t)(EAX));
  /* 11613c29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613c2b mov cx, word ptr [0x11630a32] */
  CX = (r16((uint32_t)(0x11630a32)));
  /* 11613c32 push ecx */
  push32((uint32_t)(ECX));
  /* 11613c33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613c35 mov dx, word ptr [0x11630a2e] */
  DX = (r16((uint32_t)(0x11630a2e)));
  /* 11613c3c push edx */
  push32((uint32_t)(EDX));
  /* 11613c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613c40 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11613c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11613c44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11613c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613c48 call 0x11613df0 */
  push32(0x11613c4du); f_11613df0();
  /* 11613c4d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613c50 jmp 0x11613ca3 */
  goto L_11613ca3;
L_11613c52:;
  /* 11613c52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613c54 mov dx, word ptr [0x11630a3a] */
  DX = (r16((uint32_t)(0x11630a3a)));
  /* 11613c5b push edx */
  push32((uint32_t)(EDX));
  /* 11613c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613c5e mov ax, word ptr [0x11630a38] */
  AX = (r16((uint32_t)(0x11630a38)));
  /* 11613c64 push eax */
  push32((uint32_t)(EAX));
  /* 11613c65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613c67 mov cx, word ptr [0x11630a36] */
  CX = (r16((uint32_t)(0x11630a36)));
  /* 11613c6e push ecx */
  push32((uint32_t)(ECX));
  /* 11613c6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11613c71 mov dx, word ptr [0x11630a34] */
  DX = (r16((uint32_t)(0x11630a34)));
  /* 11613c78 push edx */
  push32((uint32_t)(EDX));
  /* 11613c79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613c7b mov ax, word ptr [0x11630a32] */
  AX = (r16((uint32_t)(0x11630a32)));
  /* 11613c81 push eax */
  push32((uint32_t)(EAX));
  /* 11613c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613c86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11613c88 mov cx, word ptr [0x11630a2e] */
  CX = (r16((uint32_t)(0x11630a2e)));
  /* 11613c8f push ecx */
  push32((uint32_t)(ECX));
  /* 11613c90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613c93 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11613c96 push eax */
  push32((uint32_t)(EAX));
  /* 11613c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613c9b call 0x11613df0 */
  push32(0x11613ca0u); f_11613df0();
  /* 11613ca0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11613ca3:;
  /* 11613ca3 jmp 0x11613ceb */
  goto L_11613ceb;
L_11613ca5:;
  /* 11613ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613cab push 2 */
  push32((uint32_t)(0x2u));
  /* 11613cad push 0 */
  push32((uint32_t)(0x0u));
  /* 11613caf push 0 */
  push32((uint32_t)(0x0u));
  /* 11613cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11613cb3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11613cb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613cb8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11613cbb push edx */
  push32((uint32_t)(EDX));
  /* 11613cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 11613cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11613cc0 call 0x11613df0 */
  push32(0x11613cc5u); f_11613df0();
  /* 11613cc5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11613cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613cca push 0 */
  push32((uint32_t)(0x0u));
  /* 11613ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 11613cce push 2 */
  push32((uint32_t)(0x2u));
  /* 11613cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613cd4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11613cd6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11613cd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613cdb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11613cde push ecx */
  push32((uint32_t)(ECX));
  /* 11613cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 11613ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11613ce3 call 0x11613df0 */
  push32(0x11613ce8u); f_11613df0();
  /* 11613ce8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11613ceb:;
  /* 11613ceb mov edx, dword ptr [0x1162fe2c] */
  EDX = (r32((uint32_t)(0x1162fe2c)));
  /* 11613cf1 cmp edx, dword ptr [0x1162fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1162fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613cf7 jge 0x11613d44 */
  if ((C.sf==C.of)) goto L_11613d44;
  /* 11613cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613cfc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11613cff cmp ecx, dword ptr [0x1162fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1162fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d05 jl 0x11613d15 */
  if ((C.sf!=C.of)) goto L_11613d15;
  /* 11613d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d0a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11613d0d cmp eax, dword ptr [0x1162fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d13 jle 0x11613d1c */
  if ((C.zf||C.sf!=C.of)) goto L_11613d1c;
L_11613d15:;
  /* 11613d15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613d17 jmp 0x11613de6 */
  goto L_11613de6;
L_11613d1c:;
  /* 11613d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d1f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11613d22 cmp edx, dword ptr [0x1162fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1162fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d28 jle 0x11613d42 */
  if ((C.zf||C.sf!=C.of)) goto L_11613d42;
  /* 11613d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d2d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11613d30 cmp ecx, dword ptr [0x1162fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1162fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d36 jge 0x11613d42 */
  if ((C.sf==C.of)) goto L_11613d42;
  /* 11613d38 mov eax, 1 */
  EAX = (0x1u);
  /* 11613d3d jmp 0x11613de6 */
  goto L_11613de6;
L_11613d42:;
  /* 11613d42 jmp 0x11613d87 */
  goto L_11613d87;
L_11613d44:;
  /* 11613d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d47 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11613d4a cmp eax, dword ptr [0x1162fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d50 jl 0x11613d60 */
  if ((C.sf!=C.of)) goto L_11613d60;
  /* 11613d52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d55 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11613d58 cmp edx, dword ptr [0x1162fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1162fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d5e jle 0x11613d67 */
  if ((C.zf||C.sf!=C.of)) goto L_11613d67;
L_11613d60:;
  /* 11613d60 mov eax, 1 */
  EAX = (0x1u);
  /* 11613d65 jmp 0x11613de6 */
  goto L_11613de6;
L_11613d67:;
  /* 11613d67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d6a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11613d6d cmp ecx, dword ptr [0x1162fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1162fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d73 jle 0x11613d87 */
  if ((C.zf||C.sf!=C.of)) goto L_11613d87;
  /* 11613d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d78 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11613d7b cmp eax, dword ptr [0x1162fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613d81 jge 0x11613d87 */
  if ((C.sf==C.of)) goto L_11613d87;
  /* 11613d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613d85 jmp 0x11613de6 */
  goto L_11613de6;
L_11613d87:;
  /* 11613d87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d8a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11613d8d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11613d95 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613d9a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11613d9d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613da3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613da5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613dab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11613dae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11613db1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11613db4 cmp edx, dword ptr [0x1162fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1162fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613dba jne 0x11613dd2 */
  if (!C.zf) goto L_11613dd2;
  /* 11613dbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613dbf cmp eax, dword ptr [0x1162fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613dc5 jl 0x11613dce */
  if ((C.sf!=C.of)) goto L_11613dce;
  /* 11613dc7 mov eax, 1 */
  EAX = (0x1u);
  /* 11613dcc jmp 0x11613de6 */
  goto L_11613de6;
L_11613dce:;
  /* 11613dce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11613dd0 jmp 0x11613de6 */
  goto L_11613de6;
L_11613dd2:;
  /* 11613dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613dd5 cmp ecx, dword ptr [0x1162fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1162fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613ddb jge 0x11613de4 */
  if ((C.sf==C.of)) goto L_11613de4;
  /* 11613ddd mov eax, 1 */
  EAX = (0x1u);
  /* 11613de2 jmp 0x11613de6 */
  goto L_11613de6;
L_11613de4:;
  /* 11613de4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11613de6:;
  /* 11613de6 mov esp, ebp */
  ESP = (EBP);
  /* 11613de8 pop ebp */
  EBP = (pop32());
  /* 11613de9 ret  */
  ESPCHK(0x11613af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013df0 @ 0x11613df0 (504 bytes, 145 insns) */
void f_11613df0(void) {
  FTRACE(0x11613df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11613df1 mov ebp, esp */
  EBP = (ESP);
  /* 11613df3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613df6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613dfa jne 0x11613ecc */
  if (!C.zf) goto L_11613ecc;
  /* 11613e00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613e03 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11613e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11613e08 jne 0x11613e19 */
  if (!C.zf) goto L_11613e19;
  /* 11613e0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613e0d mov edx, dword ptr [ecx*4 + 0x1162fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1162fe4c)));
  /* 11613e14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11613e17 jmp 0x11613e26 */
  goto L_11613e26;
L_11613e19:;
  /* 11613e19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613e1c mov ecx, dword ptr [eax*4 + 0x1162fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1162fe80)));
  /* 11613e23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11613e26:;
  /* 11613e26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11613e29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613e2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11613e2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613e32 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613e35 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613e3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613e3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613e40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613e43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613e46 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11613e49 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11613e4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11613e4e mov ecx, 7 */
  ECX = (0x7u);
  /* 11613e53 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11613e55 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11613e58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11613e5b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613e5e jge 0x11613e79 */
  if ((C.sf==C.of)) goto L_11613e79;
  /* 11613e60 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11613e63 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613e66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11613e69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613e6c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613e6f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613e72 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613e74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11613e77 jmp 0x11613e8d */
  goto L_11613e8d;
L_11613e79:;
  /* 11613e79 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11613e7c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613e7f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11613e82 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613e85 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613e88 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613e8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11613e8d:;
  /* 11613e8d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613e91 jne 0x11613eca */
  if (!C.zf) goto L_11613eca;
  /* 11613e93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613e96 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11613e99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11613e9b jne 0x11613eac */
  if (!C.zf) goto L_11613eac;
  /* 11613e9d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613ea0 mov eax, dword ptr [edx*4 + 0x1162fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1162fe50)));
  /* 11613ea7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11613eaa jmp 0x11613eb9 */
  goto L_11613eb9;
L_11613eac:;
  /* 11613eac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613eaf mov edx, dword ptr [ecx*4 + 0x1162fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1162fe84)));
  /* 11613eb6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11613eb9:;
  /* 11613eb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613ebc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613ebf jle 0x11613eca */
  if ((C.zf||C.sf!=C.of)) goto L_11613eca;
  /* 11613ec1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613ec4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613ec7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11613eca:;
  /* 11613eca jmp 0x11613f01 */
  goto L_11613f01;
L_11613ecc:;
  /* 11613ecc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613ecf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11613ed2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11613ed4 jne 0x11613ee5 */
  if (!C.zf) goto L_11613ee5;
  /* 11613ed6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613ed9 mov ecx, dword ptr [eax*4 + 0x1162fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1162fe4c)));
  /* 11613ee0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11613ee3 jmp 0x11613ef2 */
  goto L_11613ef2;
L_11613ee5:;
  /* 11613ee5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11613ee8 mov eax, dword ptr [edx*4 + 0x1162fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1162fe80)));
  /* 11613eef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11613ef2:;
  /* 11613ef2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11613ef5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11613ef8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613efb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613efe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11613f01:;
  /* 11613f01 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613f05 jne 0x11613f41 */
  if (!C.zf) goto L_11613f41;
  /* 11613f07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613f0a mov dword ptr [0x1162fe2c], eax */
  w32((uint32_t)(0x1162fe2c), (EAX));
  /* 11613f0f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11613f12 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f15 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11613f18 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f1a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f1d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11613f20 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f22 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f28 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11613f2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f2d mov dword ptr [0x1162fe30], ecx */
  w32((uint32_t)(0x1162fe30), (ECX));
  /* 11613f33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613f36 mov dword ptr [0x1162fe28], edx */
  w32((uint32_t)(0x1162fe28), (EDX));
  /* 11613f3c jmp 0x11613fe4 */
  goto L_11613fe4;
L_11613f41:;
  /* 11613f41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11613f44 mov dword ptr [0x1162fe3c], eax */
  w32((uint32_t)(0x1162fe3c), (EAX));
  /* 11613f49 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11613f4c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f4f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11613f52 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f54 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f57 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11613f5a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f5c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f62 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11613f65 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f67 mov dword ptr [0x1162fe40], ecx */
  w32((uint32_t)(0x1162fe40), (ECX));
  /* 11613f6d mov edx, dword ptr [0x1162fd98] */
  EDX = (r32((uint32_t)(0x1162fd98)));
  /* 11613f73 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11613f79 mov eax, dword ptr [0x1162fe40] */
  EAX = (r32((uint32_t)(0x1162fe40)));
  /* 11613f7e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f80 mov dword ptr [0x1162fe40], eax */
  w32((uint32_t)(0x1162fe40), (EAX));
  /* 11613f85 cmp dword ptr [0x1162fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1162fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613f8c jge 0x11613fb1 */
  if ((C.sf==C.of)) goto L_11613fb1;
  /* 11613f8e mov ecx, dword ptr [0x1162fe40] */
  ECX = (r32((uint32_t)(0x1162fe40)));
  /* 11613f94 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613f9a mov dword ptr [0x1162fe40], ecx */
  w32((uint32_t)(0x1162fe40), (ECX));
  /* 11613fa0 mov edx, dword ptr [0x1162fe3c] */
  EDX = (r32((uint32_t)(0x1162fe3c)));
  /* 11613fa6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613fa9 mov dword ptr [0x1162fe3c], edx */
  w32((uint32_t)(0x1162fe3c), (EDX));
  /* 11613faf jmp 0x11613fdb */
  goto L_11613fdb;
L_11613fb1:;
  /* 11613fb1 cmp dword ptr [0x1162fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1162fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11613fbb jl 0x11613fdb */
  if ((C.sf!=C.of)) goto L_11613fdb;
  /* 11613fbd mov eax, dword ptr [0x1162fe40] */
  EAX = (r32((uint32_t)(0x1162fe40)));
  /* 11613fc2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11613fc7 mov dword ptr [0x1162fe40], eax */
  w32((uint32_t)(0x1162fe40), (EAX));
  /* 11613fcc mov ecx, dword ptr [0x1162fe3c] */
  ECX = (r32((uint32_t)(0x1162fe3c)));
  /* 11613fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11613fd5 mov dword ptr [0x1162fe3c], ecx */
  w32((uint32_t)(0x1162fe3c), (ECX));
L_11613fdb:;
  /* 11613fdb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11613fde mov dword ptr [0x1162fe38], edx */
  w32((uint32_t)(0x1162fe38), (EDX));
L_11613fe4:;
  /* 11613fe4 mov esp, ebp */
  ESP = (EBP);
  /* 11613fe6 pop ebp */
  EBP = (pop32());
  /* 11613fe7 ret  */
  ESPCHK(0x11613df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x11613ff0 (382 bytes, 135 insns) */
void f_11613ff0(void) {
  FTRACE(0x11613ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11613ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11613ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11613ff3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11613ff5 push 0x1162c8f8 */
  push32((uint32_t)(0x1162c8f8u));
  /* 11613ffa push 0x1160dcb8 */
  push32((uint32_t)(0x1160dcb8u));
  /* 11613fff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11614005 push eax */
  push32((uint32_t)(EAX));
  /* 11614006 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1161400d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614010 push ebx */
  push32((uint32_t)(EBX));
  /* 11614011 push esi */
  push32((uint32_t)(ESI));
  /* 11614012 push edi */
  push32((uint32_t)(EDI));
  /* 11614013 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11614016 cmp dword ptr [0x11630a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161401d jne 0x11614062 */
  if (!C.zf) goto L_11614062;
  /* 1161401f push 0 */
  push32((uint32_t)(0x0u));
  /* 11614021 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11614025 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614027 call dword ptr [0x116332dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332dc))), 0x1161402du);
  /* 1161402d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161402f je 0x1161403d */
  if (C.zf) goto L_1161403d;
  /* 11614031 mov dword ptr [0x11630a9c], 1 */
  w32((uint32_t)(0x11630a9c), (0x1u));
  /* 1161403b jmp 0x11614062 */
  goto L_11614062;
L_1161403d:;
  /* 1161403d push 0 */
  push32((uint32_t)(0x0u));
  /* 1161403f push 0 */
  push32((uint32_t)(0x0u));
  /* 11614041 push 1 */
  push32((uint32_t)(0x1u));
  /* 11614043 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614045 call dword ptr [0x116332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f4))), 0x1161404bu);
  /* 1161404b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161404d je 0x1161405b */
  if (C.zf) goto L_1161405b;
  /* 1161404f mov dword ptr [0x11630a9c], 2 */
  w32((uint32_t)(0x11630a9c), (0x2u));
  /* 11614059 jmp 0x11614062 */
  goto L_11614062;
L_1161405b:;
  /* 1161405b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161405d jmp 0x11614171 */
  goto L_11614171;
L_11614062:;
  /* 11614062 cmp dword ptr [0x11630a9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630a9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614069 jne 0x11614086 */
  if (!C.zf) goto L_11614086;
  /* 1161406b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161406e push eax */
  push32((uint32_t)(EAX));
  /* 1161406f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614072 push ecx */
  push32((uint32_t)(ECX));
  /* 11614073 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614076 push edx */
  push32((uint32_t)(EDX));
  /* 11614077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161407a push eax */
  push32((uint32_t)(EAX));
  /* 1161407b call dword ptr [0x116332dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332dc))), 0x11614081u);
  /* 11614081 jmp 0x11614171 */
  goto L_11614171;
L_11614086:;
  /* 11614086 cmp dword ptr [0x11630a9c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11630a9c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161408d jne 0x1161416f */
  if (!C.zf) goto L_1161416f;
  /* 11614093 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614097 jne 0x116140a2 */
  if (!C.zf) goto L_116140a2;
  /* 11614099 mov ecx, dword ptr [0x11630950] */
  ECX = (r32((uint32_t)(0x11630950)));
  /* 1161409f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_116140a2:;
  /* 116140a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116140a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116140a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116140a9 push edx */
  push32((uint32_t)(EDX));
  /* 116140aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116140ad push eax */
  push32((uint32_t)(EAX));
  /* 116140ae call dword ptr [0x116332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f4))), 0x116140b4u);
  /* 116140b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116140b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116140bb jne 0x116140c4 */
  if (!C.zf) goto L_116140c4;
  /* 116140bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116140bf jmp 0x11614171 */
  goto L_11614171;
L_116140c4:;
  /* 116140c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116140cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116140ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116140d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 116140d3 call 0x11607d50 */
  push32(0x116140d8u); f_11607d50();
  /* 116140d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 116140db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116140de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116140e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116140e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116140eb jmp 0x11614104 */
  goto L_11614104;
  /* 116140ed mov eax, 1 */
  EAX = (0x1u);
  /* 116140f2 ret  */
  ESPCHK(0x11613ff0u, _esp0);
  ESP += 4; return;
  /* 116140f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116140f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116140fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11614104:;
  /* 11614104 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614108 jne 0x1161410e */
  if (!C.zf) goto L_1161410e;
  /* 1161410a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161410c jmp 0x11614171 */
  goto L_11614171;
L_1161410e:;
  /* 1161410e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11614111 push edx */
  push32((uint32_t)(EDX));
  /* 11614112 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11614115 push eax */
  push32((uint32_t)(EAX));
  /* 11614116 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614119 push ecx */
  push32((uint32_t)(ECX));
  /* 1161411a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161411d push edx */
  push32((uint32_t)(EDX));
  /* 1161411e call dword ptr [0x116332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f4))), 0x11614124u);
  /* 11614124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614126 jne 0x1161412c */
  if (!C.zf) goto L_1161412c;
  /* 11614128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161412a jmp 0x11614171 */
  goto L_11614171;
L_1161412c:;
  /* 1161412c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614130 jne 0x1161414d */
  if (!C.zf) goto L_1161414d;
  /* 11614132 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614136 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11614138 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1161413b push eax */
  push32((uint32_t)(EAX));
  /* 1161413c push 1 */
  push32((uint32_t)(0x1u));
  /* 1161413e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11614141 push ecx */
  push32((uint32_t)(ECX));
  /* 11614142 call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x11614148u);
  /* 11614148 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1161414b jmp 0x1161416a */
  goto L_1161416a;
L_1161414d:;
  /* 1161414d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11614150 push edx */
  push32((uint32_t)(EDX));
  /* 11614151 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614154 push eax */
  push32((uint32_t)(EAX));
  /* 11614155 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11614157 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1161415a push ecx */
  push32((uint32_t)(ECX));
  /* 1161415b push 1 */
  push32((uint32_t)(0x1u));
  /* 1161415d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11614160 push edx */
  push32((uint32_t)(EDX));
  /* 11614161 call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x11614167u);
  /* 11614167 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1161416a:;
  /* 1161416a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1161416d jmp 0x11614171 */
  goto L_11614171;
L_1161416f:;
  /* 1161416f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11614171:;
  /* 11614171 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11614174 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614177 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1161417e pop edi */
  EDI = (pop32());
  /* 1161417f pop esi */
  ESI = (pop32());
  /* 11614180 pop ebx */
  EBX = (pop32());
  /* 11614181 mov esp, ebp */
  ESP = (EBP);
  /* 11614183 pop ebp */
  EBP = (pop32());
  /* 11614184 ret  */
  ESPCHK(0x11613ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014190 @ 0x11614190 (398 bytes, 140 insns) */
void f_11614190(void) {
  FTRACE(0x11614190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614190 push ebp */
  push32((uint32_t)(EBP));
  /* 11614191 mov ebp, esp */
  EBP = (ESP);
  /* 11614193 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11614195 push 0x1162c908 */
  push32((uint32_t)(0x1162c908u));
  /* 1161419a push 0x1160dcb8 */
  push32((uint32_t)(0x1160dcb8u));
  /* 1161419f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 116141a5 push eax */
  push32((uint32_t)(EAX));
  /* 116141a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 116141ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116141b0 push ebx */
  push32((uint32_t)(EBX));
  /* 116141b1 push esi */
  push32((uint32_t)(ESI));
  /* 116141b2 push edi */
  push32((uint32_t)(EDI));
  /* 116141b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 116141b6 cmp dword ptr [0x11630aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116141bd jne 0x11614202 */
  if (!C.zf) goto L_11614202;
  /* 116141bf push 0 */
  push32((uint32_t)(0x0u));
  /* 116141c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116141c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116141c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116141c7 call dword ptr [0x116332dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332dc))), 0x116141cdu);
  /* 116141cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116141cf je 0x116141dd */
  if (C.zf) goto L_116141dd;
  /* 116141d1 mov dword ptr [0x11630aa0], 1 */
  w32((uint32_t)(0x11630aa0), (0x1u));
  /* 116141db jmp 0x11614202 */
  goto L_11614202;
L_116141dd:;
  /* 116141dd push 0 */
  push32((uint32_t)(0x0u));
  /* 116141df push 0 */
  push32((uint32_t)(0x0u));
  /* 116141e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116141e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116141e5 call dword ptr [0x116332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f4))), 0x116141ebu);
  /* 116141eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116141ed je 0x116141fb */
  if (C.zf) goto L_116141fb;
  /* 116141ef mov dword ptr [0x11630aa0], 2 */
  w32((uint32_t)(0x11630aa0), (0x2u));
  /* 116141f9 jmp 0x11614202 */
  goto L_11614202;
L_116141fb:;
  /* 116141fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116141fd jmp 0x11614321 */
  goto L_11614321;
L_11614202:;
  /* 11614202 cmp dword ptr [0x11630aa0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614209 jne 0x11614226 */
  if (!C.zf) goto L_11614226;
  /* 1161420b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161420e push eax */
  push32((uint32_t)(EAX));
  /* 1161420f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614212 push ecx */
  push32((uint32_t)(ECX));
  /* 11614213 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614216 push edx */
  push32((uint32_t)(EDX));
  /* 11614217 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161421a push eax */
  push32((uint32_t)(EAX));
  /* 1161421b call dword ptr [0x116332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332f4))), 0x11614221u);
  /* 11614221 jmp 0x11614321 */
  goto L_11614321;
L_11614226:;
  /* 11614226 cmp dword ptr [0x11630aa0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161422d jne 0x1161431f */
  if (!C.zf) goto L_1161431f;
  /* 11614233 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614237 jne 0x11614242 */
  if (!C.zf) goto L_11614242;
  /* 11614239 mov ecx, dword ptr [0x11630950] */
  ECX = (r32((uint32_t)(0x11630950)));
  /* 1161423f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11614242:;
  /* 11614242 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614244 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614246 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614249 push edx */
  push32((uint32_t)(EDX));
  /* 1161424a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161424d push eax */
  push32((uint32_t)(EAX));
  /* 1161424e call dword ptr [0x116332dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332dc))), 0x11614254u);
  /* 11614254 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11614257 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161425b jne 0x11614264 */
  if (!C.zf) goto L_11614264;
  /* 1161425d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161425f jmp 0x11614321 */
  goto L_11614321;
L_11614264:;
  /* 11614264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1161426b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1161426e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11614270 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614273 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11614275 call 0x11607d50 */
  push32(0x1161427au); f_11607d50();
  /* 1161427a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1161427d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11614280 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11614283 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11614286 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1161428d jmp 0x116142a6 */
  goto L_116142a6;
  /* 1161428f mov eax, 1 */
  EAX = (0x1u);
  /* 11614294 ret  */
  ESPCHK(0x11614190u, _esp0);
  ESP += 4; return;
  /* 11614295 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11614298 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1161429f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116142a6:;
  /* 116142a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116142aa jne 0x116142b0 */
  if (!C.zf) goto L_116142b0;
  /* 116142ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116142ae jmp 0x11614321 */
  goto L_11614321;
L_116142b0:;
  /* 116142b0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116142b3 push edx */
  push32((uint32_t)(EDX));
  /* 116142b4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116142b7 push eax */
  push32((uint32_t)(EAX));
  /* 116142b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116142bb push ecx */
  push32((uint32_t)(ECX));
  /* 116142bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116142bf push edx */
  push32((uint32_t)(EDX));
  /* 116142c0 call dword ptr [0x116332dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332dc))), 0x116142c6u);
  /* 116142c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116142c8 jne 0x116142ce */
  if (!C.zf) goto L_116142ce;
  /* 116142ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116142cc jmp 0x11614321 */
  goto L_11614321;
L_116142ce:;
  /* 116142ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116142d2 jne 0x116142f6 */
  if (!C.zf) goto L_116142f6;
  /* 116142d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116142d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116142d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116142da push 0 */
  push32((uint32_t)(0x0u));
  /* 116142dc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116142de mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116142e1 push eax */
  push32((uint32_t)(EAX));
  /* 116142e2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116142e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116142ea push ecx */
  push32((uint32_t)(ECX));
  /* 116142eb call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x116142f1u);
  /* 116142f1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116142f4 jmp 0x1161431a */
  goto L_1161431a;
L_116142f6:;
  /* 116142f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116142f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116142fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116142fd push edx */
  push32((uint32_t)(EDX));
  /* 116142fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614301 push eax */
  push32((uint32_t)(EAX));
  /* 11614302 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11614304 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11614307 push ecx */
  push32((uint32_t)(ECX));
  /* 11614308 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1161430d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11614310 push edx */
  push32((uint32_t)(EDX));
  /* 11614311 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x11614317u);
  /* 11614317 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1161431a:;
  /* 1161431a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1161431d jmp 0x11614321 */
  goto L_11614321;
L_1161431f:;
  /* 1161431f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11614321:;
  /* 11614321 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11614324 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614327 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1161432e pop edi */
  EDI = (pop32());
  /* 1161432f pop esi */
  ESI = (pop32());
  /* 11614330 pop ebx */
  EBX = (pop32());
  /* 11614331 mov esp, ebp */
  ESP = (EBP);
  /* 11614333 pop ebp */
  EBP = (pop32());
  /* 11614334 ret  */
  ESPCHK(0x11614190u, _esp0);
  ESP += 4; return;
}

/* FUN_10014340 @ 0x11614340 (11 bytes, 6 insns) */
void f_11614340(void) {
  FTRACE(0x11614340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614340 push ebp */
  push32((uint32_t)(EBP));
  /* 11614341 mov ebp, esp */
  EBP = (ESP);
  /* 11614343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614346 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614349 pop ebp */
  EBP = (pop32());
  /* 1161434a ret  */
  ESPCHK(0x11614340u, _esp0);
  ESP += 4; return;
}

/* FUN_10014350 @ 0x11614350 (147 bytes, 43 insns) */
void f_11614350(void) {
  FTRACE(0x11614350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614350 push ebp */
  push32((uint32_t)(EBP));
  /* 11614351 mov ebp, esp */
  EBP = (ESP);
  /* 11614353 push ecx */
  push32((uint32_t)(ECX));
  /* 11614354 cmp dword ptr [0x11630940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161435b jne 0x11614377 */
  if (!C.zf) goto L_11614377;
  /* 1161435d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614361 jl 0x11614372 */
  if ((C.sf!=C.of)) goto L_11614372;
  /* 11614363 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614367 jg 0x11614372 */
  if ((!C.zf&&C.sf==C.of)) goto L_11614372;
  /* 11614369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161436c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161436f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11614372:;
  /* 11614372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614375 jmp 0x116143df */
  goto L_116143df;
L_11614377:;
  /* 11614377 push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 1161437c call dword ptr [0x116333a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333a4))), 0x11614382u);
  /* 11614382 cmp dword ptr [0x11630abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614389 je 0x116143a9 */
  if (C.zf) goto L_116143a9;
  /* 1161438b push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 11614390 call dword ptr [0x11633394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633394))), 0x11614396u);
  /* 11614396 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11614398 call 0x116085b0 */
  push32(0x1161439du); f_116085b0();
  /* 1161439d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116143a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116143a7 jmp 0x116143b0 */
  goto L_116143b0;
L_116143a9:;
  /* 116143a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116143b0:;
  /* 116143b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116143b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116143b4 call 0x116143f0 */
  push32(0x116143b9u); f_116143f0();
  /* 116143b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116143bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116143bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116143c3 je 0x116143d1 */
  if (C.zf) goto L_116143d1;
  /* 116143c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116143c7 call 0x11608650 */
  push32(0x116143ccu); f_11608650();
  /* 116143cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116143cf jmp 0x116143dc */
  goto L_116143dc;
L_116143d1:;
  /* 116143d1 push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 116143d6 call dword ptr [0x11633394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633394))), 0x116143dcu);
L_116143dc:;
  /* 116143dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_116143df:;
  /* 116143df mov esp, ebp */
  ESP = (EBP);
  /* 116143e1 pop ebp */
  EBP = (pop32());
  /* 116143e2 ret  */
  ESPCHK(0x11614350u, _esp0);
  ESP += 4; return;
}

/* FUN_100143f0 @ 0x116143f0 (299 bytes, 91 insns) */
void f_116143f0(void) {
  FTRACE(0x116143f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116143f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116143f1 mov ebp, esp */
  EBP = (ESP);
  /* 116143f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116143f6 cmp dword ptr [0x11630940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116143fd jne 0x1161441c */
  if (!C.zf) goto L_1161441c;
  /* 116143ff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614403 jl 0x11614414 */
  if ((C.sf!=C.of)) goto L_11614414;
  /* 11614405 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614409 jg 0x11614414 */
  if ((!C.zf&&C.sf==C.of)) goto L_11614414;
  /* 1161440b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161440e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614411 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11614414:;
  /* 11614414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614417 jmp 0x11614517 */
  goto L_11614517;
L_1161441c:;
  /* 1161441c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614423 jge 0x11614463 */
  if ((C.sf==C.of)) goto L_11614463;
  /* 11614425 cmp dword ptr [0x1162eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1162eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161442c jle 0x11614441 */
  if ((C.zf||C.sf!=C.of)) goto L_11614441;
  /* 1161442e push 1 */
  push32((uint32_t)(0x1u));
  /* 11614430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614433 push ecx */
  push32((uint32_t)(ECX));
  /* 11614434 call 0x1160abc0 */
  push32(0x11614439u); f_1160abc0();
  /* 11614439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161443c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1161443f jmp 0x11614455 */
  goto L_11614455;
L_11614441:;
  /* 11614441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614444 mov eax, dword ptr [0x1162ec98] */
  EAX = (r32((uint32_t)(0x1162ec98)));
  /* 11614449 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1161444b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1161444f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11614452 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11614455:;
  /* 11614455 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614459 jne 0x11614463 */
  if (!C.zf) goto L_11614463;
  /* 1161445b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161445e jmp 0x11614517 */
  goto L_11614517;
L_11614463:;
  /* 11614463 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614466 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11614469 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1161446f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11614475 mov eax, dword ptr [0x1162ec98] */
  EAX = (r32((uint32_t)(0x1162ec98)));
  /* 1161447a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1161447c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11614480 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11614486 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11614488 je 0x116144ac */
  if (C.zf) goto L_116144ac;
  /* 1161448a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161448d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11614490 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11614496 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11614499 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1161449c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1161449f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 116144a3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116144aa jmp 0x116144bd */
  goto L_116144bd;
L_116144ac:;
  /* 116144ac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 116144af mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 116144b2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 116144b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_116144bd:;
  /* 116144bd push 1 */
  push32((uint32_t)(0x1u));
  /* 116144bf push 0 */
  push32((uint32_t)(0x0u));
  /* 116144c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 116144c3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116144c6 push edx */
  push32((uint32_t)(EDX));
  /* 116144c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116144ca push eax */
  push32((uint32_t)(EAX));
  /* 116144cb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116144ce push ecx */
  push32((uint32_t)(ECX));
  /* 116144cf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116144d4 mov edx, dword ptr [0x11630940] */
  EDX = (r32((uint32_t)(0x11630940)));
  /* 116144da push edx */
  push32((uint32_t)(EDX));
  /* 116144db call 0x1160cfa0 */
  push32(0x116144e0u); f_1160cfa0();
  /* 116144e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116144e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116144e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116144ea jne 0x116144f1 */
  if (!C.zf) goto L_116144f1;
  /* 116144ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116144ef jmp 0x11614517 */
  goto L_11614517;
L_116144f1:;
  /* 116144f1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116144f5 jne 0x11614501 */
  if (!C.zf) goto L_11614501;
  /* 116144f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116144fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116144ff jmp 0x11614517 */
  goto L_11614517;
L_11614501:;
  /* 11614501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614504 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614509 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1161450c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11614512 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11614515 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11614517:;
  /* 11614517 mov esp, ebp */
  ESP = (EBP);
  /* 11614519 pop ebp */
  EBP = (pop32());
  /* 1161451a ret  */
  ESPCHK(0x116143f0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11614520 (52 bytes, 19 insns) */
void f_11614520(void) {
  FTRACE(0x11614520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614520 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11614524 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11614528 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1161452a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1161452e jne 0x11614539 */
  if (!C.zf) goto L_11614539;
  /* 11614530 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11614534 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11614536 ret 0x10 */
  ESPCHK(0x11614520u, _esp0);
  ESP += 20; return;
L_11614539:;
  /* 11614539 push ebx */
  push32((uint32_t)(EBX));
  /* 1161453a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1161453c mov ebx, eax */
  EBX = (EAX);
  /* 1161453e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11614542 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11614546 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614548 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1161454c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1161454e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614550 pop ebx */
  EBX = (pop32());
  /* 11614551 ret 0x10 */
  ESPCHK(0x11614520u, _esp0);
  ESP += 20; return;
}

/* FUN_10014560 @ 0x11614560 (46 bytes, 18 insns) */
void f_11614560(void) {
  FTRACE(0x11614560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614560 push ebp */
  push32((uint32_t)(EBP));
  /* 11614561 mov ebp, esp */
  EBP = (ESP);
  /* 11614563 push ecx */
  push32((uint32_t)(ECX));
  /* 11614564 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11614566 call 0x116085b0 */
  push32(0x1161456bu); f_116085b0();
  /* 1161456b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161456e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614571 push eax */
  push32((uint32_t)(EAX));
  /* 11614572 call 0x11614590 */
  push32(0x11614577u); f_11614590();
  /* 11614577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161457a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1161457d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1161457f call 0x11608650 */
  push32(0x11614584u); f_11608650();
  /* 11614584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161458a mov esp, ebp */
  ESP = (EBP);
  /* 1161458c pop ebp */
  EBP = (pop32());
  /* 1161458d ret  */
  ESPCHK(0x11614560u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11614590 (198 bytes, 69 insns) */
void f_11614590(void) {
  FTRACE(0x11614590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614590 push ebp */
  push32((uint32_t)(EBP));
  /* 11614591 mov ebp, esp */
  EBP = (ESP);
  /* 11614593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614596 mov eax, dword ptr [0x11630760] */
  EAX = (r32((uint32_t)(0x11630760)));
  /* 1161459b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1161459e cmp dword ptr [0x11632260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11632260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116145a5 jne 0x116145ae */
  if (!C.zf) goto L_116145ae;
  /* 116145a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116145a9 jmp 0x11614652 */
  goto L_11614652;
L_116145ae:;
  /* 116145ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116145b2 jne 0x116145d6 */
  if (!C.zf) goto L_116145d6;
  /* 116145b4 cmp dword ptr [0x11630768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116145bb je 0x116145d6 */
  if (C.zf) goto L_116145d6;
  /* 116145bd call 0x116146b0 */
  push32(0x116145c2u); f_116146b0();
  /* 116145c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116145c4 je 0x116145cd */
  if (C.zf) goto L_116145cd;
  /* 116145c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116145c8 jmp 0x11614652 */
  goto L_11614652;
L_116145cd:;
  /* 116145cd mov ecx, dword ptr [0x11630760] */
  ECX = (r32((uint32_t)(0x11630760)));
  /* 116145d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116145d6:;
  /* 116145d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116145da je 0x11614650 */
  if (C.zf) goto L_11614650;
  /* 116145dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116145e0 je 0x11614650 */
  if (C.zf) goto L_11614650;
  /* 116145e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116145e5 push edx */
  push32((uint32_t)(EDX));
  /* 116145e6 call 0x116079e0 */
  push32(0x116145ebu); f_116079e0();
  /* 116145eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116145ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116145f1:;
  /* 116145f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116145f4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116145f7 je 0x11614650 */
  if (C.zf) goto L_11614650;
  /* 116145f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116145fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116145fe push edx */
  push32((uint32_t)(EDX));
  /* 116145ff call 0x116079e0 */
  push32(0x11614604u); f_116079e0();
  /* 11614604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614607 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161460a jbe 0x11614645 */
  if ((C.cf||C.zf)) goto L_11614645;
  /* 1161460c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1161460f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11614611 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614614 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11614618 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161461b jne 0x11614645 */
  if (!C.zf) goto L_11614645;
  /* 1161461d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614620 push ecx */
  push32((uint32_t)(ECX));
  /* 11614621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614624 push edx */
  push32((uint32_t)(EDX));
  /* 11614625 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614628 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1161462a push ecx */
  push32((uint32_t)(ECX));
  /* 1161462b call 0x11614660 */
  push32(0x11614630u); f_11614660();
  /* 11614630 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614635 jne 0x11614645 */
  if (!C.zf) goto L_11614645;
  /* 11614637 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1161463a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1161463c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161463f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11614643 jmp 0x11614652 */
  goto L_11614652;
L_11614645:;
  /* 11614645 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614648 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161464b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1161464e jmp 0x116145f1 */
  goto L_116145f1;
L_11614650:;
  /* 11614650 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11614652:;
  /* 11614652 mov esp, ebp */
  ESP = (EBP);
  /* 11614654 pop ebp */
  EBP = (pop32());
  /* 11614655 ret  */
  ESPCHK(0x11614590u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11614660 (79 bytes, 32 insns) */
void f_11614660(void) {
  FTRACE(0x11614660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614660 push ebp */
  push32((uint32_t)(EBP));
  /* 11614661 mov ebp, esp */
  EBP = (ESP);
  /* 11614663 push ecx */
  push32((uint32_t)(ECX));
  /* 11614664 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614668 jne 0x1161466e */
  if (!C.zf) goto L_1161466e;
  /* 1161466a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1161466c jmp 0x116146ab */
  goto L_116146ab;
L_1161466e:;
  /* 1161466e mov eax, dword ptr [0x11631e24] */
  EAX = (r32((uint32_t)(0x11631e24)));
  /* 11614673 push eax */
  push32((uint32_t)(EAX));
  /* 11614674 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614677 push ecx */
  push32((uint32_t)(ECX));
  /* 11614678 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1161467b push edx */
  push32((uint32_t)(EDX));
  /* 1161467c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161467f push eax */
  push32((uint32_t)(EAX));
  /* 11614680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614683 push ecx */
  push32((uint32_t)(ECX));
  /* 11614684 push 1 */
  push32((uint32_t)(0x1u));
  /* 11614686 mov edx, dword ptr [0x116320c4] */
  EDX = (r32((uint32_t)(0x116320c4)));
  /* 1161468c push edx */
  push32((uint32_t)(EDX));
  /* 1161468d call 0x11614760 */
  push32(0x11614692u); f_11614760();
  /* 11614692 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614695 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11614698 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161469c jne 0x116146a5 */
  if (!C.zf) goto L_116146a5;
  /* 1161469e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 116146a3 jmp 0x116146ab */
  goto L_116146ab;
L_116146a5:;
  /* 116146a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116146a8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116146ab:;
  /* 116146ab mov esp, ebp */
  ESP = (EBP);
  /* 116146ad pop ebp */
  EBP = (pop32());
  /* 116146ae ret  */
  ESPCHK(0x11614660u, _esp0);
  ESP += 4; return;
}

/* FUN_100146b0 @ 0x116146b0 (174 bytes, 66 insns) */
void f_116146b0(void) {
  FTRACE(0x116146b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116146b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116146b1 mov ebp, esp */
  EBP = (ESP);
  /* 116146b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116146b6 mov eax, dword ptr [0x11630768] */
  EAX = (r32((uint32_t)(0x11630768)));
  /* 116146bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116146be:;
  /* 116146be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116146c1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116146c4 je 0x11614758 */
  if (C.zf) goto L_11614758;
  /* 116146ca push 0 */
  push32((uint32_t)(0x0u));
  /* 116146cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116146ce push 0 */
  push32((uint32_t)(0x0u));
  /* 116146d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116146d2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116146d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116146d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116146d9 push eax */
  push32((uint32_t)(EAX));
  /* 116146da push 0 */
  push32((uint32_t)(0x0u));
  /* 116146dc push 1 */
  push32((uint32_t)(0x1u));
  /* 116146de call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x116146e4u);
  /* 116146e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116146e7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116146eb jne 0x116146f2 */
  if (!C.zf) goto L_116146f2;
  /* 116146ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116146f0 jmp 0x1161475a */
  goto L_1161475a;
L_116146f2:;
  /* 116146f2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 116146f4 push 0x1162c914 */
  push32((uint32_t)(0x1162c914u));
  /* 116146f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116146fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116146fe push ecx */
  push32((uint32_t)(ECX));
  /* 116146ff call 0x11604bb0 */
  push32(0x11614704u); f_11604bb0();
  /* 11614704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614707 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1161470a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161470e jne 0x11614715 */
  if (!C.zf) goto L_11614715;
  /* 11614710 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614713 jmp 0x1161475a */
  goto L_1161475a;
L_11614715:;
  /* 11614715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11614719 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1161471c push edx */
  push32((uint32_t)(EDX));
  /* 1161471d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614720 push eax */
  push32((uint32_t)(EAX));
  /* 11614721 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11614723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614726 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11614728 push edx */
  push32((uint32_t)(EDX));
  /* 11614729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1161472b push 1 */
  push32((uint32_t)(0x1u));
  /* 1161472d call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x11614733u);
  /* 11614733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614735 jne 0x1161473c */
  if (!C.zf) goto L_1161473c;
  /* 11614737 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1161473a jmp 0x1161475a */
  goto L_1161475a;
L_1161473c:;
  /* 1161473c push 0 */
  push32((uint32_t)(0x0u));
  /* 1161473e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614741 push eax */
  push32((uint32_t)(EAX));
  /* 11614742 call 0x11614bb0 */
  push32(0x11614747u); f_11614bb0();
  /* 11614747 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161474a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161474d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614750 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11614753 jmp 0x116146be */
  goto L_116146be;
L_11614758:;
  /* 11614758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1161475a:;
  /* 1161475a mov esp, ebp */
  ESP = (EBP);
  /* 1161475c pop ebp */
  EBP = (pop32());
  /* 1161475d ret  */
  ESPCHK(0x116146b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014760 @ 0x11614760 (970 bytes, 340 insns) */
void f_11614760(void) {
  FTRACE(0x11614760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614760 push ebp */
  push32((uint32_t)(EBP));
  /* 11614761 mov ebp, esp */
  EBP = (ESP);
  /* 11614763 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11614765 push 0x1162c968 */
  push32((uint32_t)(0x1162c968u));
  /* 1161476a push 0x1160dcb8 */
  push32((uint32_t)(0x1160dcb8u));
  /* 1161476f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11614775 push eax */
  push32((uint32_t)(EAX));
  /* 11614776 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1161477d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614780 push ebx */
  push32((uint32_t)(EBX));
  /* 11614781 push esi */
  push32((uint32_t)(ESI));
  /* 11614782 push edi */
  push32((uint32_t)(EDI));
  /* 11614783 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11614786 cmp dword ptr [0x11630aa4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161478d jne 0x116147e6 */
  if (!C.zf) goto L_116147e6;
  /* 1161478f push 1 */
  push32((uint32_t)(0x1u));
  /* 11614791 push 0x1162bfc4 */
  push32((uint32_t)(0x1162bfc4u));
  /* 11614796 push 1 */
  push32((uint32_t)(0x1u));
  /* 11614798 push 0x1162bfc4 */
  push32((uint32_t)(0x1162bfc4u));
  /* 1161479d push 0 */
  push32((uint32_t)(0x0u));
  /* 1161479f push 0 */
  push32((uint32_t)(0x0u));
  /* 116147a1 call dword ptr [0x116332d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332d4))), 0x116147a7u);
  /* 116147a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116147a9 je 0x116147b7 */
  if (C.zf) goto L_116147b7;
  /* 116147ab mov dword ptr [0x11630aa4], 1 */
  w32((uint32_t)(0x11630aa4), (0x1u));
  /* 116147b5 jmp 0x116147e6 */
  goto L_116147e6;
L_116147b7:;
  /* 116147b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116147b9 push 0x1162bfc0 */
  push32((uint32_t)(0x1162bfc0u));
  /* 116147be push 1 */
  push32((uint32_t)(0x1u));
  /* 116147c0 push 0x1162bfc0 */
  push32((uint32_t)(0x1162bfc0u));
  /* 116147c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116147c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116147c9 call dword ptr [0x116332d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332d8))), 0x116147cfu);
  /* 116147cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116147d1 je 0x116147df */
  if (C.zf) goto L_116147df;
  /* 116147d3 mov dword ptr [0x11630aa4], 2 */
  w32((uint32_t)(0x11630aa4), (0x2u));
  /* 116147dd jmp 0x116147e6 */
  goto L_116147e6;
L_116147df:;
  /* 116147df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116147e1 jmp 0x11614b44 */
  goto L_11614b44;
L_116147e6:;
  /* 116147e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116147ea jle 0x116147ff */
  if ((C.zf||C.sf!=C.of)) goto L_116147ff;
  /* 116147ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116147ef push eax */
  push32((uint32_t)(EAX));
  /* 116147f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116147f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116147f4 call 0x11614b60 */
  push32(0x116147f9u); f_11614b60();
  /* 116147f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116147fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_116147ff:;
  /* 116147ff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614803 jle 0x11614818 */
  if ((C.zf||C.sf!=C.of)) goto L_11614818;
  /* 11614805 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11614808 push edx */
  push32((uint32_t)(EDX));
  /* 11614809 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1161480c push eax */
  push32((uint32_t)(EAX));
  /* 1161480d call 0x11614b60 */
  push32(0x11614812u); f_11614b60();
  /* 11614812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614815 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11614818:;
  /* 11614818 cmp dword ptr [0x11630aa4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161481f jne 0x11614844 */
  if (!C.zf) goto L_11614844;
  /* 11614821 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11614824 push ecx */
  push32((uint32_t)(ECX));
  /* 11614825 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11614828 push edx */
  push32((uint32_t)(EDX));
  /* 11614829 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1161482c push eax */
  push32((uint32_t)(EAX));
  /* 1161482d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614830 push ecx */
  push32((uint32_t)(ECX));
  /* 11614831 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614834 push edx */
  push32((uint32_t)(EDX));
  /* 11614835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614838 push eax */
  push32((uint32_t)(EAX));
  /* 11614839 call dword ptr [0x116332d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332d8))), 0x1161483fu);
  /* 1161483f jmp 0x11614b44 */
  goto L_11614b44;
L_11614844:;
  /* 11614844 cmp dword ptr [0x11630aa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630aa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161484b jne 0x11614b42 */
  if (!C.zf) goto L_11614b42;
  /* 11614851 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614855 jne 0x11614860 */
  if (!C.zf) goto L_11614860;
  /* 11614857 mov ecx, dword ptr [0x11630950] */
  ECX = (r32((uint32_t)(0x11630950)));
  /* 1161485d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11614860:;
  /* 11614860 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614864 je 0x11614870 */
  if (C.zf) goto L_11614870;
  /* 11614866 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161486a jne 0x116149ec */
  if (!C.zf) goto L_116149ec;
L_11614870:;
  /* 11614870 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11614873 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614876 jne 0x11614882 */
  if (!C.zf) goto L_11614882;
  /* 11614878 mov eax, 2 */
  EAX = (0x2u);
  /* 1161487d jmp 0x11614b44 */
  goto L_11614b44;
L_11614882:;
  /* 11614882 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614886 jle 0x11614892 */
  if ((C.zf||C.sf!=C.of)) goto L_11614892;
  /* 11614888 mov eax, 1 */
  EAX = (0x1u);
  /* 1161488d jmp 0x11614b44 */
  goto L_11614b44;
L_11614892:;
  /* 11614892 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614896 jle 0x116148a2 */
  if ((C.zf||C.sf!=C.of)) goto L_116148a2;
  /* 11614898 mov eax, 3 */
  EAX = (0x3u);
  /* 1161489d jmp 0x11614b44 */
  goto L_11614b44;
L_116148a2:;
  /* 116148a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 116148a5 push eax */
  push32((uint32_t)(EAX));
  /* 116148a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 116148a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116148aa call dword ptr [0x11633330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633330))), 0x116148b0u);
  /* 116148b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116148b2 jne 0x116148bb */
  if (!C.zf) goto L_116148bb;
  /* 116148b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116148b6 jmp 0x11614b44 */
  goto L_11614b44;
L_116148bb:;
  /* 116148bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116148bf jne 0x116148c7 */
  if (!C.zf) goto L_116148c7;
  /* 116148c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116148c5 je 0x116148f4 */
  if (C.zf) goto L_116148f4;
L_116148c7:;
  /* 116148c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116148cb jne 0x116148d3 */
  if (!C.zf) goto L_116148d3;
  /* 116148cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116148d1 je 0x116148f4 */
  if (C.zf) goto L_116148f4;
L_116148d3:;
  /* 116148d3 push 0x1162c928 */
  push32((uint32_t)(0x1162c928u));
  /* 116148d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116148da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 116148df push 0x1162c920 */
  push32((uint32_t)(0x1162c920u));
  /* 116148e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116148e6 call 0x11603c70 */
  push32(0x116148ebu); f_11603c70();
  /* 116148eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116148ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116148f1 jne 0x116148f4 */
  if (!C.zf) goto L_116148f4;
  /* 116148f3 int3  */
  x86_unimpl("int3 @ 0x116148f3");
L_116148f4:;
  /* 116148f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116148f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116148f8 jne 0x116148bb */
  if (!C.zf) goto L_116148bb;
  /* 116148fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116148fe jle 0x11614973 */
  if ((C.zf||C.sf!=C.of)) goto L_11614973;
  /* 11614900 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614904 jae 0x11614910 */
  if (!C.cf) goto L_11614910;
  /* 11614906 mov eax, 3 */
  EAX = (0x3u);
  /* 1161490b jmp 0x11614b44 */
  goto L_11614b44;
L_11614910:;
  /* 11614910 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11614913 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11614916 jmp 0x11614921 */
  goto L_11614921;
L_11614918:;
  /* 11614918 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1161491b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161491e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11614921:;
  /* 11614921 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11614924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614926 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11614928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1161492a je 0x11614969 */
  if (C.zf) goto L_11614969;
  /* 1161492c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1161492f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11614931 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11614934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11614936 je 0x11614969 */
  if (C.zf) goto L_11614969;
  /* 11614938 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161493b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1161493d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1161493f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11614942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614944 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11614946 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614948 jl 0x11614967 */
  if ((C.sf!=C.of)) goto L_11614967;
  /* 1161494a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1161494d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1161494f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11614951 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11614954 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11614956 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11614959 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161495b jg 0x11614967 */
  if ((!C.zf&&C.sf==C.of)) goto L_11614967;
  /* 1161495d mov eax, 2 */
  EAX = (0x2u);
  /* 11614962 jmp 0x11614b44 */
  goto L_11614b44;
L_11614967:;
  /* 11614967 jmp 0x11614918 */
  goto L_11614918;
L_11614969:;
  /* 11614969 mov eax, 3 */
  EAX = (0x3u);
  /* 1161496e jmp 0x11614b44 */
  goto L_11614b44;
L_11614973:;
  /* 11614973 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614977 jle 0x116149ec */
  if ((C.zf||C.sf!=C.of)) goto L_116149ec;
  /* 11614979 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161497d jae 0x11614989 */
  if (!C.cf) goto L_11614989;
  /* 1161497f mov eax, 1 */
  EAX = (0x1u);
  /* 11614984 jmp 0x11614b44 */
  goto L_11614b44;
L_11614989:;
  /* 11614989 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1161498c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1161498f jmp 0x1161499a */
  goto L_1161499a;
L_11614991:;
  /* 11614991 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11614994 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614997 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1161499a:;
  /* 1161499a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1161499d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1161499f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116149a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116149a3 je 0x116149e2 */
  if (C.zf) goto L_116149e2;
  /* 116149a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 116149a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116149aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 116149ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116149af je 0x116149e2 */
  if (C.zf) goto L_116149e2;
  /* 116149b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116149b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116149b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116149b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 116149bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116149bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116149bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116149c1 jl 0x116149e0 */
  if ((C.sf!=C.of)) goto L_116149e0;
  /* 116149c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116149c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116149c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116149ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 116149cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116149cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116149d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116149d4 jg 0x116149e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_116149e0;
  /* 116149d6 mov eax, 2 */
  EAX = (0x2u);
  /* 116149db jmp 0x11614b44 */
  goto L_11614b44;
L_116149e0:;
  /* 116149e0 jmp 0x11614991 */
  goto L_11614991;
L_116149e2:;
  /* 116149e2 mov eax, 1 */
  EAX = (0x1u);
  /* 116149e7 jmp 0x11614b44 */
  goto L_11614b44;
L_116149ec:;
  /* 116149ec push 0 */
  push32((uint32_t)(0x0u));
  /* 116149ee push 0 */
  push32((uint32_t)(0x0u));
  /* 116149f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116149f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116149f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116149f7 push edx */
  push32((uint32_t)(EDX));
  /* 116149f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 116149fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116149fd push eax */
  push32((uint32_t)(EAX));
  /* 116149fe call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x11614a04u);
  /* 11614a04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11614a07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614a0b jne 0x11614a14 */
  if (!C.zf) goto L_11614a14;
  /* 11614a0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614a0f jmp 0x11614b44 */
  goto L_11614b44;
L_11614a14:;
  /* 11614a14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11614a1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11614a1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11614a20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614a23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11614a25 call 0x11607d50 */
  push32(0x11614a2au); f_11607d50();
  /* 11614a2a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11614a2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11614a30 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11614a33 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11614a36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11614a3d jmp 0x11614a56 */
  goto L_11614a56;
  /* 11614a3f mov eax, 1 */
  EAX = (0x1u);
  /* 11614a44 ret  */
  ESPCHK(0x11614760u, _esp0);
  ESP += 4; return;
  /* 11614a45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11614a48 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11614a4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11614a56:;
  /* 11614a56 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614a5a jne 0x11614a63 */
  if (!C.zf) goto L_11614a63;
  /* 11614a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614a5e jmp 0x11614b44 */
  goto L_11614b44;
L_11614a63:;
  /* 11614a63 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11614a66 push edx */
  push32((uint32_t)(EDX));
  /* 11614a67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11614a6a push eax */
  push32((uint32_t)(EAX));
  /* 11614a6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11614a6e push ecx */
  push32((uint32_t)(ECX));
  /* 11614a6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11614a72 push edx */
  push32((uint32_t)(EDX));
  /* 11614a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11614a75 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11614a78 push eax */
  push32((uint32_t)(EAX));
  /* 11614a79 call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x11614a7fu);
  /* 11614a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614a81 jne 0x11614a8a */
  if (!C.zf) goto L_11614a8a;
  /* 11614a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614a85 jmp 0x11614b44 */
  goto L_11614b44;
L_11614a8a:;
  /* 11614a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11614a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11614a8e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11614a91 push ecx */
  push32((uint32_t)(ECX));
  /* 11614a92 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11614a95 push edx */
  push32((uint32_t)(EDX));
  /* 11614a96 push 9 */
  push32((uint32_t)(0x9u));
  /* 11614a98 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11614a9b push eax */
  push32((uint32_t)(EAX));
  /* 11614a9c call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x11614aa2u);
  /* 11614aa2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11614aa5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614aa9 jne 0x11614ab2 */
  if (!C.zf) goto L_11614ab2;
  /* 11614aab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614aad jmp 0x11614b44 */
  goto L_11614b44;
L_11614ab2:;
  /* 11614ab2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11614ab9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11614abc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11614abe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614ac1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11614ac3 call 0x11607d50 */
  push32(0x11614ac8u); f_11607d50();
  /* 11614ac8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11614acb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11614ace mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11614ad1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11614ad4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11614adb jmp 0x11614af4 */
  goto L_11614af4;
  /* 11614add mov eax, 1 */
  EAX = (0x1u);
  /* 11614ae2 ret  */
  ESPCHK(0x11614760u, _esp0);
  ESP += 4; return;
  /* 11614ae3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11614ae6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11614aed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11614af4:;
  /* 11614af4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614af8 jne 0x11614afe */
  if (!C.zf) goto L_11614afe;
  /* 11614afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614afc jmp 0x11614b44 */
  goto L_11614b44;
L_11614afe:;
  /* 11614afe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11614b01 push edx */
  push32((uint32_t)(EDX));
  /* 11614b02 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11614b05 push eax */
  push32((uint32_t)(EAX));
  /* 11614b06 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11614b09 push ecx */
  push32((uint32_t)(ECX));
  /* 11614b0a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11614b0d push edx */
  push32((uint32_t)(EDX));
  /* 11614b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11614b10 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11614b13 push eax */
  push32((uint32_t)(EAX));
  /* 11614b14 call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x11614b1au);
  /* 11614b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614b1c jne 0x11614b22 */
  if (!C.zf) goto L_11614b22;
  /* 11614b1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614b20 jmp 0x11614b44 */
  goto L_11614b44;
L_11614b22:;
  /* 11614b22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11614b25 push ecx */
  push32((uint32_t)(ECX));
  /* 11614b26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11614b29 push edx */
  push32((uint32_t)(EDX));
  /* 11614b2a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11614b2d push eax */
  push32((uint32_t)(EAX));
  /* 11614b2e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11614b31 push ecx */
  push32((uint32_t)(ECX));
  /* 11614b32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614b35 push edx */
  push32((uint32_t)(EDX));
  /* 11614b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614b39 push eax */
  push32((uint32_t)(EAX));
  /* 11614b3a call dword ptr [0x116332d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332d4))), 0x11614b40u);
  /* 11614b40 jmp 0x11614b44 */
  goto L_11614b44;
L_11614b42:;
  /* 11614b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11614b44:;
  /* 11614b44 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11614b47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614b4a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11614b51 pop edi */
  EDI = (pop32());
  /* 11614b52 pop esi */
  ESI = (pop32());
  /* 11614b53 pop ebx */
  EBX = (pop32());
  /* 11614b54 mov esp, ebp */
  ESP = (EBP);
  /* 11614b56 pop ebp */
  EBP = (pop32());
  /* 11614b57 ret  */
  ESPCHK(0x11614760u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b60 @ 0x11614b60 (80 bytes, 32 insns) */
void f_11614b60(void) {
  FTRACE(0x11614b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11614b61 mov ebp, esp */
  EBP = (ESP);
  /* 11614b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614b66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614b69 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11614b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614b6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11614b72:;
  /* 11614b72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614b75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614b78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614b7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11614b7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11614b80 je 0x11614b97 */
  if (C.zf) goto L_11614b97;
  /* 11614b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614b85 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11614b88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11614b8a je 0x11614b97 */
  if (C.zf) goto L_11614b97;
  /* 11614b8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614b8f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11614b95 jmp 0x11614b72 */
  goto L_11614b72;
L_11614b97:;
  /* 11614b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614b9a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11614b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11614b9f jne 0x11614ba9 */
  if (!C.zf) goto L_11614ba9;
  /* 11614ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614ba4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614ba7 jmp 0x11614bac */
  goto L_11614bac;
L_11614ba9:;
  /* 11614ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11614bac:;
  /* 11614bac mov esp, ebp */
  ESP = (EBP);
  /* 11614bae pop ebp */
  EBP = (pop32());
  /* 11614baf ret  */
  ESPCHK(0x11614b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bb0 @ 0x11614bb0 (736 bytes, 224 insns) */
void f_11614bb0(void) {
  FTRACE(0x11614bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11614bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11614bb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614bb6 push esi */
  push32((uint32_t)(ESI));
  /* 11614bb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614bbb je 0x11614bdc */
  if (C.zf) goto L_11614bdc;
  /* 11614bbd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11614bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11614bc3 call 0x11615000 */
  push32(0x11614bc8u); f_11615000();
  /* 11614bc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614bcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11614bce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614bd2 je 0x11614bdc */
  if (C.zf) goto L_11614bdc;
  /* 11614bd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614bd7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614bda jne 0x11614be4 */
  if (!C.zf) goto L_11614be4;
L_11614bdc:;
  /* 11614bdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614bdf jmp 0x11614e8b */
  goto L_11614e8b;
L_11614be4:;
  /* 11614be4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11614be7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11614beb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11614bed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614bef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11614bf0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11614bf3 mov ecx, dword ptr [0x11630760] */
  ECX = (r32((uint32_t)(0x11630760)));
  /* 11614bf9 cmp ecx, dword ptr [0x11630764] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11630764))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614bff jne 0x11614c15 */
  if (!C.zf) goto L_11614c15;
  /* 11614c01 mov edx, dword ptr [0x11630760] */
  EDX = (r32((uint32_t)(0x11630760)));
  /* 11614c07 push edx */
  push32((uint32_t)(EDX));
  /* 11614c08 call 0x11614f10 */
  push32(0x11614c0du); f_11614f10();
  /* 11614c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614c10 mov dword ptr [0x11630760], eax */
  w32((uint32_t)(0x11630760), (EAX));
L_11614c15:;
  /* 11614c15 cmp dword ptr [0x11630760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c1c jne 0x11614cd5 */
  if (!C.zf) goto L_11614cd5;
  /* 11614c22 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c26 je 0x11614c47 */
  if (C.zf) goto L_11614c47;
  /* 11614c28 cmp dword ptr [0x11630768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c2f je 0x11614c47 */
  if (C.zf) goto L_11614c47;
  /* 11614c31 call 0x116146b0 */
  push32(0x11614c36u); f_116146b0();
  /* 11614c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614c38 je 0x11614c42 */
  if (C.zf) goto L_11614c42;
  /* 11614c3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614c3d jmp 0x11614e8b */
  goto L_11614e8b;
L_11614c42:;
  /* 11614c42 jmp 0x11614cd5 */
  goto L_11614cd5;
L_11614c47:;
  /* 11614c47 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c4b je 0x11614c54 */
  if (C.zf) goto L_11614c54;
  /* 11614c4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614c4f jmp 0x11614e8b */
  goto L_11614e8b;
L_11614c54:;
  /* 11614c54 cmp dword ptr [0x11630760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c5b jne 0x11614c94 */
  if (!C.zf) goto L_11614c94;
  /* 11614c5d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11614c62 push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614c67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11614c69 push 4 */
  push32((uint32_t)(0x4u));
  /* 11614c6b call 0x11604bb0 */
  push32(0x11614c70u); f_11604bb0();
  /* 11614c70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614c73 mov dword ptr [0x11630760], eax */
  w32((uint32_t)(0x11630760), (EAX));
  /* 11614c78 cmp dword ptr [0x11630760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c7f jne 0x11614c89 */
  if (!C.zf) goto L_11614c89;
  /* 11614c81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614c84 jmp 0x11614e8b */
  goto L_11614e8b;
L_11614c89:;
  /* 11614c89 mov eax, dword ptr [0x11630760] */
  EAX = (r32((uint32_t)(0x11630760)));
  /* 11614c8e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11614c94:;
  /* 11614c94 cmp dword ptr [0x11630768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614c9b jne 0x11614cd5 */
  if (!C.zf) goto L_11614cd5;
  /* 11614c9d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11614ca2 push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614ca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11614ca9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11614cab call 0x11604bb0 */
  push32(0x11614cb0u); f_11604bb0();
  /* 11614cb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614cb3 mov dword ptr [0x11630768], eax */
  w32((uint32_t)(0x11630768), (EAX));
  /* 11614cb8 cmp dword ptr [0x11630768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614cbf jne 0x11614cc9 */
  if (!C.zf) goto L_11614cc9;
  /* 11614cc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614cc4 jmp 0x11614e8b */
  goto L_11614e8b;
L_11614cc9:;
  /* 11614cc9 mov ecx, dword ptr [0x11630768] */
  ECX = (r32((uint32_t)(0x11630768)));
  /* 11614ccf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11614cd5:;
  /* 11614cd5 mov edx, dword ptr [0x11630760] */
  EDX = (r32((uint32_t)(0x11630760)));
  /* 11614cdb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11614cde mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11614ce1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614ce4 push eax */
  push32((uint32_t)(EAX));
  /* 11614ce5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 11614ce9 call 0x11614e90 */
  push32(0x11614ceeu); f_11614e90();
  /* 11614cee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614cf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11614cf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614cf8 jl 0x11614d91 */
  if ((C.sf!=C.of)) goto L_11614d91;
  /* 11614cfe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d01 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614d04 je 0x11614d91 */
  if (C.zf) goto L_11614d91;
  /* 11614d0a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614d0e je 0x11614d83 */
  if (C.zf) goto L_11614d83;
  /* 11614d10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11614d12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d18 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11614d1b push edx */
  push32((uint32_t)(EDX));
  /* 11614d1c call 0x11605640 */
  push32(0x11614d21u); f_11605640();
  /* 11614d21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614d24 jmp 0x11614d2f */
  goto L_11614d2f;
L_11614d26:;
  /* 11614d26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614d2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11614d2f:;
  /* 11614d2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d32 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d35 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614d39 je 0x11614d50 */
  if (C.zf) goto L_11614d50;
  /* 11614d3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d44 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d47 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11614d4b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11614d4e jmp 0x11614d26 */
  goto L_11614d26;
L_11614d50:;
  /* 11614d50 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11614d55 push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614d5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11614d5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d5f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11614d62 push eax */
  push32((uint32_t)(EAX));
  /* 11614d63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d66 push ecx */
  push32((uint32_t)(ECX));
  /* 11614d67 call 0x11605040 */
  push32(0x11614d6cu); f_11605040();
  /* 11614d6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614d6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11614d72 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614d76 je 0x11614d81 */
  if (C.zf) goto L_11614d81;
  /* 11614d78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d7b mov dword ptr [0x11630760], edx */
  w32((uint32_t)(0x11630760), (EDX));
L_11614d81:;
  /* 11614d81 jmp 0x11614d8f */
  goto L_11614d8f;
L_11614d83:;
  /* 11614d83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614d86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614d89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614d8c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11614d8f:;
  /* 11614d8f jmp 0x11614e04 */
  goto L_11614e04;
L_11614d91:;
  /* 11614d91 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614d95 jne 0x11614dfd */
  if (!C.zf) goto L_11614dfd;
  /* 11614d97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614d9b jge 0x11614da5 */
  if ((C.sf==C.of)) goto L_11614da5;
  /* 11614d9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614da0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11614da2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11614da5:;
  /* 11614da5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11614daa push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614daf push 2 */
  push32((uint32_t)(0x2u));
  /* 11614db1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614db4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11614dbb push edx */
  push32((uint32_t)(EDX));
  /* 11614dbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614dbf push eax */
  push32((uint32_t)(EAX));
  /* 11614dc0 call 0x11605040 */
  push32(0x11614dc5u); f_11605040();
  /* 11614dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614dc8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11614dcb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614dcf jne 0x11614dd9 */
  if (!C.zf) goto L_11614dd9;
  /* 11614dd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11614dd4 jmp 0x11614e8b */
  goto L_11614e8b;
L_11614dd9:;
  /* 11614dd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614ddc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614de2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11614de5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614de8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614deb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11614df3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614df6 mov dword ptr [0x11630760], eax */
  w32((uint32_t)(0x11630760), (EAX));
  /* 11614dfb jmp 0x11614e04 */
  goto L_11614e04;
L_11614dfd:;
  /* 11614dfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614dff jmp 0x11614e8b */
  goto L_11614e8b;
L_11614e04:;
  /* 11614e04 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614e08 je 0x11614e89 */
  if (C.zf) goto L_11614e89;
  /* 11614e0a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11614e0f push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614e14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11614e16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614e19 push ecx */
  push32((uint32_t)(ECX));
  /* 11614e1a call 0x116079e0 */
  push32(0x11614e1fu); f_116079e0();
  /* 11614e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614e22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614e25 push eax */
  push32((uint32_t)(EAX));
  /* 11614e26 call 0x11604bb0 */
  push32(0x11614e2bu); f_11604bb0();
  /* 11614e2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614e2e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11614e31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614e35 je 0x11614e89 */
  if (C.zf) goto L_11614e89;
  /* 11614e37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614e3a push edx */
  push32((uint32_t)(EDX));
  /* 11614e3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614e3e push eax */
  push32((uint32_t)(EAX));
  /* 11614e3f call 0x11607b60 */
  push32(0x11614e44u); f_11607b60();
  /* 11614e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614e47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11614e4a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614e4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614e50 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614e52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11614e55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614e58 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11614e5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614e5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614e61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11614e64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11614e67 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11614e69 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614e6b not edx */
  EDX = (~(EDX));
  /* 11614e6d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11614e70 push edx */
  push32((uint32_t)(EDX));
  /* 11614e71 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614e74 push eax */
  push32((uint32_t)(EAX));
  /* 11614e75 call dword ptr [0x116332d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116332d0))), 0x11614e7bu);
  /* 11614e7b push 2 */
  push32((uint32_t)(0x2u));
  /* 11614e7d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614e80 push ecx */
  push32((uint32_t)(ECX));
  /* 11614e81 call 0x11605640 */
  push32(0x11614e86u); f_11605640();
  /* 11614e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11614e89:;
  /* 11614e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11614e8b:;
  /* 11614e8b pop esi */
  ESI = (pop32());
  /* 11614e8c mov esp, ebp */
  ESP = (EBP);
  /* 11614e8e pop ebp */
  EBP = (pop32());
  /* 11614e8f ret  */
  ESPCHK(0x11614bb0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11614e90 (124 bytes, 47 insns) */
void f_11614e90(void) {
  FTRACE(0x11614e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11614e91 mov ebp, esp */
  EBP = (ESP);
  /* 11614e93 push ecx */
  push32((uint32_t)(ECX));
  /* 11614e94 mov eax, dword ptr [0x11630760] */
  EAX = (r32((uint32_t)(0x11630760)));
  /* 11614e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11614e9c jmp 0x11614ea7 */
  goto L_11614ea7;
L_11614e9e:;
  /* 11614e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614ea1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614ea4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11614ea7:;
  /* 11614ea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614eaa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614ead je 0x11614efa */
  if (C.zf) goto L_11614efa;
  /* 11614eaf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11614eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614eb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11614eb8 push edx */
  push32((uint32_t)(EDX));
  /* 11614eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614ebc push eax */
  push32((uint32_t)(EAX));
  /* 11614ebd call 0x11614660 */
  push32(0x11614ec2u); f_11614660();
  /* 11614ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11614ec7 jne 0x11614ef8 */
  if (!C.zf) goto L_11614ef8;
  /* 11614ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614ecc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11614ece mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614ed1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11614ed5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614ed8 je 0x11614eea */
  if (C.zf) goto L_11614eea;
  /* 11614eda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614edd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11614edf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11614ee2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11614ee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11614ee8 jne 0x11614ef8 */
  if (!C.zf) goto L_11614ef8;
L_11614eea:;
  /* 11614eea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614eed sub eax, dword ptr [0x11630760] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11630760))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614ef3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11614ef6 jmp 0x11614f08 */
  goto L_11614f08;
L_11614ef8:;
  /* 11614ef8 jmp 0x11614e9e */
  goto L_11614e9e;
L_11614efa:;
  /* 11614efa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11614efd sub eax, dword ptr [0x11630760] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11630760))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614f03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11614f06 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11614f08:;
  /* 11614f08 mov esp, ebp */
  ESP = (EBP);
  /* 11614f0a pop ebp */
  EBP = (pop32());
  /* 11614f0b ret  */
  ESPCHK(0x11614e90u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11614f10 (238 bytes, 80 insns) */
void f_11614f10(void) {
  FTRACE(0x11614f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11614f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11614f11 mov ebp, esp */
  EBP = (ESP);
  /* 11614f13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11614f16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11614f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614f20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11614f23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614f27 jne 0x11614f30 */
  if (!C.zf) goto L_11614f30;
  /* 11614f29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11614f2b jmp 0x11614ffa */
  goto L_11614ffa;
L_11614f30:;
  /* 11614f30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614f33 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11614f35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614f38 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614f3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11614f3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11614f40 je 0x11614f4d */
  if (C.zf) goto L_11614f4d;
  /* 11614f42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614f45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614f48 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11614f4b jmp 0x11614f30 */
  goto L_11614f30;
L_11614f4d:;
  /* 11614f4d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11614f52 push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11614f59 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11614f5c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11614f63 push eax */
  push32((uint32_t)(EAX));
  /* 11614f64 call 0x11604bb0 */
  push32(0x11614f69u); f_11604bb0();
  /* 11614f69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614f6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11614f6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614f72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11614f75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614f79 jne 0x11614f85 */
  if (!C.zf) goto L_11614f85;
  /* 11614f7b push 9 */
  push32((uint32_t)(0x9u));
  /* 11614f7d call 0x11603b20 */
  push32(0x11614f82u); f_11603b20();
  /* 11614f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11614f85:;
  /* 11614f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11614f88 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11614f8b:;
  /* 11614f8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614f8e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614f91 je 0x11614fee */
  if (C.zf) goto L_11614fee;
  /* 11614f93 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11614f98 push 0x1162c980 */
  push32((uint32_t)(0x1162c980u));
  /* 11614f9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11614f9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614fa2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11614fa4 push edx */
  push32((uint32_t)(EDX));
  /* 11614fa5 call 0x116079e0 */
  push32(0x11614faau); f_116079e0();
  /* 11614faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614fad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614fb0 push eax */
  push32((uint32_t)(EAX));
  /* 11614fb1 call 0x11604bb0 */
  push32(0x11614fb6u); f_11604bb0();
  /* 11614fb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11614fb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614fbc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11614fbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614fc1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11614fc4 je 0x11614fda */
  if (C.zf) goto L_11614fda;
  /* 11614fc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614fc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11614fcb push ecx */
  push32((uint32_t)(ECX));
  /* 11614fcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614fcf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11614fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11614fd2 call 0x11607b60 */
  push32(0x11614fd7u); f_11607b60();
  /* 11614fd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11614fda:;
  /* 11614fda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11614fdd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614fe0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11614fe3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614fe6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11614fe9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11614fec jmp 0x11614f8b */
  goto L_11614f8b;
L_11614fee:;
  /* 11614fee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11614ff1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11614ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11614ffa:;
  /* 11614ffa mov esp, ebp */
  ESP = (EBP);
  /* 11614ffc pop ebp */
  EBP = (pop32());
  /* 11614ffd ret  */
  ESPCHK(0x11614f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015000 @ 0x11615000 (237 bytes, 81 insns) */
void f_11615000(void) {
  FTRACE(0x11615000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11615000 push ebp */
  push32((uint32_t)(EBP));
  /* 11615001 mov ebp, esp */
  EBP = (ESP);
  /* 11615003 push ecx */
  push32((uint32_t)(ECX));
  /* 11615004 cmp dword ptr [0x11631eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11631eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1161500b jne 0x11615022 */
  if (!C.zf) goto L_11615022;
  /* 1161500d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11615010 push eax */
  push32((uint32_t)(EAX));
  /* 11615011 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11615014 push ecx */
  push32((uint32_t)(ECX));
  /* 11615015 call 0x11615100 */
  push32(0x1161501au); f_11615100();
  /* 1161501a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161501d jmp 0x116150e9 */
  goto L_116150e9;
L_11615022:;
  /* 11615022 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11615024 call 0x116085b0 */
  push32(0x11615029u); f_116085b0();
  /* 11615029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1161502c jmp 0x11615037 */
  goto L_11615037;
L_1161502e:;
  /* 1161502e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11615031 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11615034 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11615037:;
  /* 11615037 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1161503a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1161503e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11615042 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11615045 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1161504b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1161504d je 0x116150cb */
  if (C.zf) goto L_116150cb;
  /* 1161504f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11615052 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11615057 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11615059 mov cl, byte ptr [eax + 0x11631fc1] */
  CL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 1161505f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11615062 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11615064 je 0x116150b6 */
  if (C.zf) goto L_116150b6;
  /* 11615066 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11615069 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1161506c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1161506f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11615072 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11615074 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11615076 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11615078 jne 0x11615088 */
  if (!C.zf) goto L_11615088;
  /* 1161507a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1161507c call 0x11608650 */
  push32(0x11615081u); f_11608650();
  /* 11615081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11615084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11615086 jmp 0x116150e9 */
  goto L_116150e9;
L_11615088:;
  /* 11615088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1161508b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11615091 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11615094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11615097 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11615099 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1161509b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1161509d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116150a0 jne 0x116150b4 */
  if (!C.zf) goto L_116150b4;
  /* 116150a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116150a4 call 0x11608650 */
  push32(0x116150a9u); f_11608650();
  /* 116150a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116150ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116150af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116150b2 jmp 0x116150e9 */
  goto L_116150e9;
L_116150b4:;
  /* 116150b4 jmp 0x116150c6 */
  goto L_116150c6;
L_116150b6:;
  /* 116150b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116150b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116150bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116150c2 jne 0x116150c6 */
  if (!C.zf) goto L_116150c6;
  /* 116150c4 jmp 0x116150cb */
  goto L_116150cb;
L_116150c6:;
  /* 116150c6 jmp 0x1161502e */
  goto L_1161502e;
L_116150cb:;
  /* 116150cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116150cd call 0x11608650 */
  push32(0x116150d2u); f_11608650();
  /* 116150d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116150d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116150d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116150dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116150e0 jne 0x116150e7 */
  if (!C.zf) goto L_116150e7;
  /* 116150e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116150e5 jmp 0x116150e9 */
  goto L_116150e9;
L_116150e7:;
  /* 116150e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116150e9:;
  /* 116150e9 mov esp, ebp */
  ESP = (EBP);
  /* 116150eb pop ebp */
  EBP = (pop32());
  /* 116150ec ret  */
  ESPCHK(0x11615000u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11615100 (193 bytes, 87 insns) */
void f_11615100(void) {
  FTRACE(0x11615100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11615100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11615102 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11615106 push ebx */
  push32((uint32_t)(EBX));
  /* 11615107 mov ebx, eax */
  EBX = (EAX);
  /* 11615109 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1161510c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11615110 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11615116 je 0x1161512b */
  if (C.zf) goto L_1161512b;
L_11615118:;
  /* 11615118 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1161511a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1161511b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1161511d je 0x116150f0 */
  if (C.zf) { jmp_ind(0x116150f0u); return; }
  /* 1161511f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11615121 je 0x11615174 */
  if (C.zf) goto L_11615174;
  /* 11615123 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11615129 jne 0x11615118 */
  if (!C.zf) goto L_11615118;
L_1161512b:;
  /* 1161512b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1161512d push edi */
  push32((uint32_t)(EDI));
  /* 1161512e mov eax, ebx */
  EAX = (EBX);
  /* 11615130 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11615133 push esi */
  push32((uint32_t)(ESI));
  /* 11615134 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11615136:;
  /* 11615136 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11615138 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1161513d mov eax, ecx */
  EAX = (ECX);
  /* 1161513f mov esi, edi */
  ESI = (EDI);
  /* 11615141 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11615143 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11615145 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11615147 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1161514a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1161514d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1161514f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11615151 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11615154 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1161515a jne 0x11615178 */
  if (!C.zf) goto L_11615178;
  /* 1161515c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11615161 je 0x11615136 */
  if (C.zf) goto L_11615136;
  /* 11615163 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11615168 jne 0x11615172 */
  if (!C.zf) goto L_11615172;
  /* 1161516a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11615170 jne 0x11615136 */
  if (!C.zf) goto L_11615136;
L_11615172:;
  /* 11615172 pop esi */
  ESI = (pop32());
  /* 11615173 pop edi */
  EDI = (pop32());
L_11615174:;
  /* 11615174 pop ebx */
  EBX = (pop32());
  /* 11615175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11615177 ret  */
  ESPCHK(0x11615100u, _esp0);
  ESP += 4; return;
L_11615178:;
  /* 11615178 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1161517b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1161517d je 0x116151b5 */
  if (C.zf) goto L_116151b5;
  /* 1161517f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11615181 je 0x11615172 */
  if (C.zf) goto L_11615172;
  /* 11615183 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11615185 je 0x116151ae */
  if (C.zf) goto L_116151ae;
  /* 11615187 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11615189 je 0x11615172 */
  if (C.zf) goto L_11615172;
  /* 1161518b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1161518e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11615190 je 0x116151a7 */
  if (C.zf) goto L_116151a7;
  /* 11615192 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11615194 je 0x11615172 */
  if (C.zf) goto L_11615172;
  /* 11615196 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11615198 je 0x116151a0 */
  if (C.zf) goto L_116151a0;
  /* 1161519a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1161519c je 0x11615172 */
  if (C.zf) goto L_11615172;
  /* 1161519e jmp 0x11615136 */
  goto L_11615136;
L_116151a0:;
  /* 116151a0 pop esi */
  ESI = (pop32());
  /* 116151a1 pop edi */
  EDI = (pop32());
  /* 116151a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 116151a5 pop ebx */
  EBX = (pop32());
  /* 116151a6 ret  */
  ESPCHK(0x11615100u, _esp0);
  ESP += 4; return;
L_116151a7:;
  /* 116151a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 116151aa pop esi */
  ESI = (pop32());
  /* 116151ab pop edi */
  EDI = (pop32());
  /* 116151ac pop ebx */
  EBX = (pop32());
  /* 116151ad ret  */
  ESPCHK(0x11615100u, _esp0);
  ESP += 4; return;
L_116151ae:;
  /* 116151ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 116151b1 pop esi */
  ESI = (pop32());
  /* 116151b2 pop edi */
  EDI = (pop32());
  /* 116151b3 pop ebx */
  EBX = (pop32());
  /* 116151b4 ret  */
  ESPCHK(0x11615100u, _esp0);
  ESP += 4; return;
L_116151b5:;
  /* 116151b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 116151b8 pop esi */
  ESI = (pop32());
  /* 116151b9 pop edi */
  EDI = (pop32());
  /* 116151ba pop ebx */
  EBX = (pop32());
  /* 116151bb ret  */
  ESPCHK(0x11615100u, _esp0);
  ESP += 4; return;
  /* 116151bc jmp dword ptr [0x11633380] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11633380)))); return;
}

/* RtlUnwind @ 0x1161530c (6 bytes, 1 insns) */
void f_1161530c(void) {
  FTRACE(0x1161530cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1161530c jmp dword ptr [0x1163330c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1163330c)))); return;
}

